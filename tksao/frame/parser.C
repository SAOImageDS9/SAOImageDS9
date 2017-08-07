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
     FK4_NO_E_ = 383,
     FK5_ = 384,
     FONT_ = 385,
     FRONT_ = 386,
     FULL_ = 387,
     FUNCTION_ = 388,
     GALACTIC_ = 389,
     GAUSSIAN_ = 390,
     GET_ = 391,
     GLOBAL_ = 392,
     GRAPHICS_ = 393,
     GRAY_ = 394,
     GRID_ = 395,
     GZ_ = 396,
     HANDLE_ = 397,
     HAS_ = 398,
     HEAD_ = 399,
     HEADER_ = 400,
     HEIGHT_ = 401,
     HELIOECLIPTIC_ = 402,
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
     PRINT_ = 482,
     PRESERVE_ = 483,
     PROJECTION_ = 484,
     PROPERTY_ = 485,
     PUBLICATION_ = 486,
     PROS_ = 487,
     QUERY_ = 488,
     RADIAL_ = 489,
     RADIUS_ = 490,
     REGION_ = 491,
     REPLACE_ = 492,
     RESAMPLE_ = 493,
     RESET_ = 494,
     RESOLUTION_ = 495,
     RGB_ = 496,
     ROOT_ = 497,
     ROTATE_ = 498,
     RULER_ = 499,
     SAMPLE_ = 500,
     SAOIMAGE_ = 501,
     SAOTNG_ = 502,
     SAVE_ = 503,
     SCALE_ = 504,
     SCAN_ = 505,
     SCIENTIFIC_ = 506,
     SCOPE_ = 507,
     SEGMENT_ = 508,
     SELECT_ = 509,
     SET_ = 510,
     SEXAGESIMAL_ = 511,
     SHAPE_ = 512,
     SHARED_ = 513,
     SHIFT_ = 514,
     SHMID_ = 515,
     SHOW_ = 516,
     SIGMA_ = 517,
     SINH_ = 518,
     SIZE_ = 519,
     SLICE_ = 520,
     SMMAP_ = 521,
     SMOOTH_ = 522,
     SOCKET_ = 523,
     SOCKETGZ_ = 524,
     SOURCE_ = 525,
     SQRT_ = 526,
     SQUARED_ = 527,
     SSHARED_ = 528,
     STATS_ = 529,
     STATUS_ = 530,
     SUPERGALACTIC_ = 531,
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
#define FK4_NO_E_ 383
#define FK5_ 384
#define FONT_ 385
#define FRONT_ 386
#define FULL_ 387
#define FUNCTION_ 388
#define GALACTIC_ 389
#define GAUSSIAN_ 390
#define GET_ 391
#define GLOBAL_ 392
#define GRAPHICS_ 393
#define GRAY_ 394
#define GRID_ 395
#define GZ_ 396
#define HANDLE_ 397
#define HAS_ 398
#define HEAD_ 399
#define HEADER_ 400
#define HEIGHT_ 401
#define HELIOECLIPTIC_ 402
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
#define PRINT_ 482
#define PRESERVE_ 483
#define PROJECTION_ 484
#define PROPERTY_ 485
#define PUBLICATION_ 486
#define PROS_ 487
#define QUERY_ 488
#define RADIAL_ 489
#define RADIUS_ 490
#define REGION_ 491
#define REPLACE_ 492
#define RESAMPLE_ 493
#define RESET_ 494
#define RESOLUTION_ 495
#define RGB_ 496
#define ROOT_ 497
#define ROTATE_ 498
#define RULER_ 499
#define SAMPLE_ 500
#define SAOIMAGE_ 501
#define SAOTNG_ 502
#define SAVE_ 503
#define SCALE_ 504
#define SCAN_ 505
#define SCIENTIFIC_ 506
#define SCOPE_ 507
#define SEGMENT_ 508
#define SELECT_ 509
#define SET_ 510
#define SEXAGESIMAL_ 511
#define SHAPE_ 512
#define SHARED_ 513
#define SHIFT_ 514
#define SHMID_ 515
#define SHOW_ 516
#define SIGMA_ 517
#define SINH_ 518
#define SIZE_ 519
#define SLICE_ 520
#define SMMAP_ 521
#define SMOOTH_ 522
#define SOCKET_ 523
#define SOCKETGZ_ 524
#define SOURCE_ 525
#define SQRT_ 526
#define SQUARED_ 527
#define SSHARED_ 528
#define STATS_ 529
#define STATUS_ 530
#define SUPERGALACTIC_ 531
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
#define YYFINAL  355
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5814

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  348
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  217
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1280
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2836

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
    1451,  1453,  1455,  1457,  1460,  1462,  1465,  1467,  1470,  1473,
    1476,  1479,  1481,  1483,  1485,  1486,  1488,  1489,  1491,  1492,
    1494,  1495,  1497,  1498,  1501,  1504,  1505,  1507,  1510,  1512,
    1519,  1525,  1527,  1529,  1531,  1534,  1537,  1539,  1541,  1543,
    1545,  1548,  1550,  1552,  1554,  1557,  1559,  1561,  1564,  1567,
    1570,  1571,  1573,  1574,  1576,  1578,  1580,  1582,  1584,  1586,
    1588,  1590,  1593,  1596,  1598,  1601,  1605,  1607,  1610,  1613,
    1618,  1625,  1627,  1638,  1640,  1643,  1647,  1651,  1654,  1657,
    1660,  1663,  1666,  1669,  1672,  1677,  1682,  1687,  1691,  1695,
    1701,  1706,  1711,  1716,  1720,  1724,  1728,  1732,  1735,  1738,
    1743,  1747,  1751,  1755,  1759,  1764,  1769,  1774,  1779,  1785,
    1790,  1797,  1805,  1810,  1815,  1821,  1824,  1828,  1832,  1836,
    1839,  1843,  1847,  1851,  1855,  1860,  1864,  1870,  1877,  1881,
    1885,  1890,  1894,  1898,  1902,  1906,  1910,  1916,  1920,  1924,
    1929,  1933,  1936,  1939,  1941,  1945,  1950,  1955,  1960,  1965,
    1970,  1977,  1982,  1987,  1993,  1998,  2003,  2008,  2013,  2019,
    2024,  2031,  2039,  2044,  2049,  2055,  2061,  2067,  2073,  2079,
    2085,  2093,  2099,  2105,  2112,  2118,  2124,  2130,  2136,  2143,
    2149,  2157,  2166,  2172,  2178,  2185,  2189,  2193,  2197,  2201,
    2205,  2211,  2215,  2219,  2224,  2228,  2232,  2236,  2240,  2245,
    2249,  2255,  2262,  2266,  2270,  2275,  2279,  2283,  2287,  2291,
    2295,  2301,  2305,  2309,  2314,  2319,  2324,  2328,  2334,  2339,
    2344,  2347,  2351,  2358,  2365,  2367,  2369,  2371,  2374,  2377,
    2380,  2384,  2388,  2391,  2404,  2407,  2410,  2412,  2416,  2421,
    2424,  2425,  2429,  2431,  2433,  2436,  2439,  2442,  2445,  2448,
    2453,  2458,  2463,  2467,  2472,  2478,  2486,  2495,  2502,  2507,
    2516,  2526,  2533,  2540,  2548,  2559,  2571,  2584,  2594,  2600,
    2605,  2611,  2618,  2622,  2628,  2634,  2640,  2647,  2653,  2658,
    2668,  2679,  2691,  2701,  2708,  2715,  2722,  2729,  2736,  2743,
    2750,  2757,  2764,  2772,  2780,  2783,  2788,  2793,  2798,  2803,
    2809,  2814,  2819,  2825,  2831,  2835,  2840,  2845,  2850,  2855,
    2862,  2870,  2879,  2889,  2896,  2907,  2919,  2932,  2942,  2946,
    2949,  2953,  2959,  2966,  2974,  2979,  2983,  2987,  2994,  3001,
    3008,  3016,  3023,  3031,  3036,  3041,  3046,  3053,  3063,  3068,
    3072,  3079,  3087,  3095,  3098,  3102,  3106,  3110,  3115,  3118,
    3121,  3126,  3134,  3145,  3149,  3151,  3155,  3158,  3161,  3164,
    3167,  3171,  3177,  3182,  3188,  3191,  3199,  3203,  3206,  3209,
    3213,  3216,  3219,  3222,  3226,  3229,  3233,  3238,  3242,  3246,
    3252,  3259,  3264,  3267,  3271,  3274,  3277,  3282,  3286,  3290,
    3293,  3297,  3299,  3302,  3304,  3307,  3310,  3313,  3315,  3317,
    3319,  3321,  3324,  3326,  3329,  3332,  3334,  3337,  3340,  3342,
    3345,  3347,  3349,  3351,  3353,  3355,  3357,  3359,  3361,  3362,
    3364,  3367,  3370,  3373,  3377,  3383,  3391,  3399,  3406,  3413,
    3420,  3427,  3433,  3440,  3447,  3454,  3461,  3468,  3475,  3482,
    3493,  3501,  3509,  3517,  3527,  3537,  3548,  3561,  3574,  3577,
    3580,  3584,  3589,  3594,  3599,  3602,  3607,  3612,  3614,  3616,
    3618,  3620,  3622,  3624,  3626,  3628,  3631,  3633,  3635,  3637,
    3641,  3645,  3650,  3657,  3668,  3676,  3684,  3690,  3695,  3702,
    3713,  3721,  3729,  3735,  3738,  3741,  3745,  3750,  3756,  3760,
    3766,  3772,  3776,  3781,  3787,  3793,  3799,  3803,  3809,  3812,
    3816,  3820,  3826,  3830,  3834,  3838,  3843,  3849,  3855,  3859,
    3865,  3871,  3875,  3880,  3886,  3892,  3895,  3898,  3902,  3908,
    3915,  3922,  3926,  3930,  3934,  3941,  3947,  3953,  3956,  3960,
    3966,  3973,  3977,  3980,  3983,  3987,  3990,  3994,  3997,  4001,
    4007,  4014,  4017,  4020,  4023,  4025,  4030,  4035,  4037,  4040,
    4043,  4046,  4049,  4052,  4055,  4058,  4062,  4065,  4069,  4072,
    4076,  4078,  4080,  4082,  4084,  4086,  4087,  4090,  4091,  4094,
    4095,  4097,  4098,  4099,  4101,  4103,  4105,  4107,  4109,  4117,
    4126,  4129,  4134,  4137,  4142,  4149,  4152,  4154,  4156,  4160,
    4164,  4166,  4170,  4175,  4178,  4180,  4184,  4188,  4193,  4197,
    4201,  4205,  4207,  4209,  4211,  4213,  4215,  4217,  4219,  4221,
    4223,  4225,  4227,  4229,  4231,  4233,  4236,  4237,  4238,  4241,
    4243,  4247,  4249,  4253,  4255,  4258,  4261,  4263,  4267,  4268,
    4269,  4272,  4275,  4277,  4281,  4287,  4289,  4292,  4295,  4298,
    4300,  4302,  4304,  4306,  4311,  4314,  4318,  4322,  4325,  4329,
    4332,  4335,  4338,  4342,  4346,  4350,  4353,  4357,  4359,  4363,
    4367,  4369,  4372,  4375,  4378,  4381,  4383,  4385,  4387,  4389,
    4392,  4395,  4399,  4403,  4405,  4408,  4412,  4416,  4418,  4421,
    4423,  4425,  4427,  4429,  4431,  4434,  4437,  4442,  4444,  4447,
    4450,  4453,  4457,  4459,  4461,  4463,  4466,  4469,  4472,  4475,
    4478,  4482,  4486,  4490,  4494,  4498,  4502,  4506,  4508,  4511,
    4514,  4517,  4521,  4524,  4528,  4532,  4535,  4538,  4541,  4544,
    4547,  4550,  4553,  4556,  4559,  4562,  4565,  4568,  4571,  4574,
    4578,  4582,  4586,  4589,  4592,  4595,  4598,  4601,  4604,  4607,
    4610,  4613,  4616,  4619,  4622,  4626,  4630,  4634,  4639,  4646,
    4648,  4650,  4652,  4654,  4656,  4657,  4663,  4665,  4672,  4676,
    4678,  4681,  4684,  4688,  4691,  4695,  4699,  4702,  4705,  4708,
    4711,  4714,  4717,  4721,  4724,  4727,  4731,  4733,  4737,  4742,
    4744,  4747,  4753,  4760,  4767,  4770,  4772,  4775,  4778,  4784,
    4791
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     349,     0,    -1,    96,   351,    -1,    20,   381,    -1,    44,
     383,    -1,    41,    66,     5,    -1,    46,   388,    -1,    59,
      -1,    64,    -1,    65,   390,    -1,    67,   280,     5,    -1,
      68,   395,    -1,    69,   397,    -1,    77,   398,    -1,    84,
     407,    -1,    86,   409,    -1,    87,   410,    -1,    95,   352,
      -1,   125,   412,    -1,   136,   413,    -1,   140,   455,    -1,
     143,   458,    -1,   148,    -1,   149,   352,    -1,   155,   464,
      -1,   161,    16,     4,    -1,   174,   467,    -1,   177,   485,
      -1,   178,   486,    -1,   179,   487,    -1,   182,   503,   488,
      -1,   183,   522,    -1,   196,    66,     5,    -1,   211,   523,
      -1,   212,   524,    -1,   213,   527,    -1,   233,    88,    -1,
     225,   528,    -1,   239,    -1,   236,   503,   530,    -1,   241,
     535,    -1,   243,   536,    -1,   248,   538,    -1,   261,    -1,
     267,   553,    -1,   283,     4,    -1,   284,   376,    -1,   295,
      -1,   297,   555,    -1,   303,    -1,   306,   557,    -1,   307,
     558,    -1,   337,   562,    -1,   343,   563,    -1,     3,    -1,
       4,    -1,   208,    -1,   207,    -1,    29,   352,    -1,   191,
     352,    -1,   214,   352,    -1,   216,   352,    -1,   307,   352,
      -1,    44,   352,    -1,    46,   352,    -1,    76,   352,    -1,
      84,   352,    -1,   141,   352,    -1,   241,   352,    -1,     4,
      -1,   340,    -1,   344,    -1,   208,    -1,   291,    -1,   201,
      -1,   345,    -1,   207,    -1,   119,    -1,    -1,   242,    38,
      -1,   132,    38,    -1,   242,    -1,   132,    -1,    -1,   355,
      -1,   350,    -1,     7,    -1,     8,    -1,     9,    -1,    10,
      -1,    11,    -1,   356,   356,    -1,   357,   358,    -1,   358,
     358,    -1,   350,   350,    -1,   156,    -1,   218,    -1,   101,
      -1,    19,    -1,   361,    -1,   307,    -1,   308,    -1,   309,
      -1,   310,    -1,   311,    -1,   312,    -1,   313,    -1,   314,
      -1,   315,    -1,   316,    -1,   317,    -1,   318,    -1,   319,
      -1,   320,    -1,   321,    -1,   322,    -1,   323,    -1,   324,
      -1,   325,    -1,   326,    -1,   327,    -1,   328,    -1,   329,
      -1,   330,    -1,   331,    -1,   332,    -1,   333,    -1,   334,
      -1,    56,    -1,   213,    -1,   172,    -1,   176,    -1,   226,
      -1,   271,    -1,   272,    -1,    28,    -1,   263,    -1,   150,
      -1,    30,    -1,   250,    -1,   245,    -1,    94,    -1,   162,
      -1,    -1,   127,    -1,   128,    -1,    35,    -1,   129,    -1,
     163,    -1,   153,    -1,   134,    -1,   276,    -1,   106,    -1,
     147,    -1,    -1,    97,    -1,   256,    -1,    -1,    97,    -1,
      24,    -1,    25,    -1,    -1,   260,    -1,   164,    -1,    -1,
      17,    -1,   158,    -1,    -1,   156,    -1,   183,    -1,    -1,
      62,    -1,    48,    -1,   102,    -1,    85,    -1,   346,    -1,
      27,    -1,    51,    -1,    -1,     4,    -1,    82,    -1,   151,
      -1,   220,    -1,   221,    -1,   234,    -1,   274,    -1,    -1,
      32,    -1,   277,    -1,    -1,   197,    -1,    42,    -1,    43,
      -1,   169,    -1,   170,    -1,   301,   380,    -1,    47,   377,
      -1,    74,   378,    -1,   149,   379,    -1,   185,   533,    -1,
      37,   534,    -1,   249,   350,    -1,   228,    -1,   285,   350,
      -1,   352,    -1,    66,     5,    -1,   352,    -1,    66,     5,
      -1,   352,    -1,    66,     5,    -1,   350,   350,    -1,   222,
     350,   350,   350,   350,   350,    -1,    40,   350,   350,    -1,
     193,   350,   350,    -1,   111,   350,   350,    -1,   239,    -1,
     257,   382,    -1,    62,   350,   350,    -1,   109,   350,   350,
      -1,    48,   350,   350,    -1,   224,   350,   350,    -1,   222,
     350,   350,    -1,   302,   350,   350,    -1,    22,   350,   350,
      -1,   110,   350,   350,    -1,    49,   350,   350,    -1,    12,
     384,    -1,    71,     5,     5,     5,    -1,   100,     4,    -1,
     118,   385,    -1,   133,   386,    -1,    53,   264,     4,    -1,
     288,   387,    -1,   122,     5,    -1,    59,    -1,   350,   350,
      -1,   350,    -1,   350,   350,    -1,   350,    12,   350,   350,
      -1,   350,   350,    12,   350,   350,    -1,   288,   350,    -1,
     288,   350,   350,    -1,   288,   350,    12,   350,   350,    -1,
     288,   350,   350,    12,   350,   350,    -1,    32,    -1,   277,
      -1,   123,    -1,   350,   350,    12,    59,     5,     5,     5,
      -1,   350,   350,     4,   350,   350,    12,    59,     5,     5,
       5,     5,    -1,   350,   350,    12,   350,   350,     5,     5,
       5,    -1,   350,   350,     4,   350,   350,    12,   350,   350,
       5,     5,     5,     5,    -1,   350,    -1,   350,   350,    -1,
     288,   389,    -1,   123,    -1,   350,    -1,   350,   350,    -1,
     252,   391,    -1,   192,   392,    -1,   186,   393,    -1,   298,
     350,   350,    -1,   342,   394,    -1,   228,   352,    -1,   137,
      -1,   175,    -1,   350,    -1,   186,    -1,   342,    -1,   341,
      -1,   298,    -1,     4,   364,    -1,   192,   364,    -1,   245,
       4,    -1,   350,     4,     4,    -1,    78,   350,    -1,   245,
       4,    -1,   171,     4,    -1,     4,   350,   350,     4,     6,
       4,    -1,   241,   350,   350,   350,   350,   350,   350,     4,
       6,     4,    -1,    40,    -1,   193,   396,    -1,   111,    -1,
       4,   350,   350,     4,     6,     4,    -1,   241,   350,   350,
     350,   350,   350,   350,     4,     6,     4,    -1,   363,    -1,
     176,   350,    -1,    83,   399,    -1,    99,   400,    -1,   174,
     401,    -1,   215,   405,    -1,   248,   406,    -1,     5,     4,
       4,   404,     4,     4,   363,   350,   402,   403,   350,   350,
       5,    -1,     5,     4,     4,   404,     4,     4,   363,   350,
     350,   403,   350,   350,     5,    -1,     5,     4,     4,   404,
       4,     4,   363,   350,   402,   350,   350,     5,    -1,     5,
       4,     4,   404,     4,     4,   363,   350,   350,   350,   350,
       5,    -1,   224,    -1,    -1,    31,    -1,     5,    -1,     5,
       5,     4,   352,    -1,     5,     4,   352,     5,   360,   365,
      -1,   186,    -1,   342,    -1,   341,    -1,   298,    -1,   137,
      -1,   175,    -1,   267,    -1,    46,    -1,     5,    -1,     5,
       5,     4,   352,    -1,     5,   360,   365,    -1,    31,     5,
     360,   365,    -1,    -1,   350,   350,   350,   350,   360,   365,
      -1,    59,   359,   360,   365,   350,   350,   360,   367,    -1,
     284,   408,    -1,    40,   350,   350,    -1,   193,   350,   350,
      -1,   111,   350,   350,    -1,    -1,   350,   350,   360,    -1,
      40,   350,   350,     4,    -1,   193,   350,   350,     4,    -1,
     111,   350,   350,     4,    -1,   362,   350,   350,    -1,   360,
     365,   359,    -1,   352,    -1,   306,   350,   350,    -1,    40,
     193,   362,   350,   350,    -1,   193,   362,   350,   350,    -1,
      40,   193,   360,   359,    -1,   193,   360,   359,    -1,    33,
       4,    -1,    -1,    32,    -1,   277,    -1,   143,   117,     5,
      -1,    41,    66,    -1,    44,   414,    -1,    46,   416,    -1,
      65,   417,    -1,    68,   421,    -1,    67,   420,    -1,    69,
     423,    -1,    77,   425,    -1,    79,   428,    -1,    84,   429,
      -1,    86,   430,    -1,    88,   432,    -1,    87,   431,    -1,
      93,   433,    -1,    95,    -1,   124,   437,    -1,   140,   443,
      -1,   151,     5,     5,     4,    -1,   152,    89,     5,     5,
     350,   350,   362,     4,   411,    -1,   155,   435,    -1,   159,
     434,    -1,   161,    16,    -1,   186,    -1,   182,   503,   497,
      -1,   183,   444,    -1,   196,    66,    -1,   211,    -1,   212,
     445,    -1,   219,   279,   362,   350,   350,     4,     4,     5,
      -1,   241,   446,    -1,   243,    -1,   267,   447,    -1,   283,
      -1,   284,   448,    -1,   292,    -1,   299,   362,   350,   350,
      -1,   305,    89,     5,     5,   350,   350,   362,     4,   411,
      -1,   307,   453,    -1,   343,    -1,   100,    -1,   118,    -1,
     133,    -1,    53,   264,    -1,    88,    -1,   122,    -1,    71,
     415,    -1,   173,    -1,    -1,   186,     5,    -1,   103,     5,
      -1,   118,    -1,    -1,   402,   403,    -1,   350,   403,    -1,
     252,    -1,   192,    -1,   186,   418,    -1,   298,   168,    -1,
     342,   419,    -1,   228,    -1,   192,    -1,   245,    -1,    78,
      -1,   245,    -1,   171,    -1,    -1,   280,    -1,   168,   422,
      -1,     4,    -1,     4,   362,   350,   350,    -1,     4,   350,
     350,   363,   350,    -1,    -1,   168,   424,    -1,   176,    -1,
       4,   350,   350,   363,   350,    -1,   360,   365,    -1,    65,
     426,    -1,    66,    -1,    91,    -1,   168,    -1,   205,   168,
      -1,   185,    -1,    69,   427,    -1,   267,    -1,   336,    -1,
      -1,   192,    -1,   252,    -1,    -1,   176,    -1,   350,   350,
     360,   365,   366,    -1,   362,   350,   350,   360,   365,   366,
      -1,   350,   360,   360,     4,    -1,   360,   365,   366,    -1,
      59,   360,   365,   366,   360,   367,    -1,   284,   360,    -1,
     362,    -1,   360,   365,   366,    -1,   275,    -1,    33,    -1,
     362,    -1,   360,   365,   366,    -1,   360,   365,   359,   350,
     350,     5,    -1,     4,   360,   365,   359,   350,   350,     5,
      -1,   362,   350,   350,     4,     4,    -1,     5,    -1,    65,
      -1,   362,   350,   350,     5,    -1,     6,     4,     4,     4,
       4,    -1,    88,    -1,   120,   195,   436,    -1,    -1,     4,
      -1,   350,   350,    -1,   198,    -1,    59,   360,   365,   366,
      -1,    81,    -1,   100,   440,    -1,    45,    -1,   117,   438,
      -1,   120,   195,   441,    -1,   145,   439,    -1,   146,    -1,
     206,   195,    -1,   264,    -1,   264,   360,   365,   367,    -1,
     265,   442,    -1,   336,    -1,     4,    -1,   362,   350,   350,
      -1,     4,    -1,   165,     5,    -1,     4,   165,     5,    -1,
     307,     4,    -1,    -1,     4,    -1,   353,    -1,   353,   362,
     350,   350,    -1,   353,     4,    -1,    -1,     4,    -1,   360,
      -1,     4,   360,    -1,    -1,   210,    -1,   300,    -1,    66,
      -1,   181,    -1,   287,    -1,   228,    -1,    61,    -1,   278,
      -1,   301,    -1,   133,    -1,   235,    -1,   235,   187,    -1,
     262,    -1,   262,   187,    -1,    21,    -1,   301,   452,    -1,
      47,   449,    -1,    74,   450,    -1,   149,   451,    -1,   185,
      -1,    37,    -1,   249,    -1,    -1,    66,    -1,    -1,    66,
      -1,    -1,    66,    -1,    -1,   222,    -1,    -1,    16,   454,
      -1,   195,   361,    -1,    -1,   223,    -1,    83,   456,    -1,
      99,    -1,   360,   365,   366,   457,     5,     5,    -1,   360,
     365,   366,   457,     5,    -1,    20,    -1,   231,    -1,    19,
      -1,    44,   459,    -1,    77,   460,    -1,    84,    -1,    94,
      -1,    95,    -1,   101,    -1,   124,   461,    -1,   140,    -1,
     155,    -1,   162,    -1,   182,   462,    -1,   218,    -1,   267,
      -1,   278,   360,    -1,   307,   463,    -1,    72,     5,    -1,
      -1,    31,    -1,    -1,    44,    -1,    87,    -1,   191,    -1,
     149,    -1,   254,    -1,   215,    -1,   293,    -1,   360,    -1,
     115,   360,    -1,    58,   360,    -1,    18,    -1,   284,   360,
      -1,   199,     4,     4,    -1,   116,    -1,   184,     5,    -1,
      88,   466,    -1,   255,   120,   195,   465,    -1,   255,     6,
       4,     4,     4,     4,    -1,   297,    -1,   307,   350,   350,
     350,   350,   350,   350,   350,   350,     4,    -1,     5,    -1,
       5,     4,    -1,     4,     4,    56,    -1,     4,     4,   360,
      -1,   192,   352,    -1,    26,   468,    -1,   112,   470,    -1,
     124,   471,    -1,   158,   484,    -1,   204,   482,    -1,   217,
     483,    -1,     5,    14,     5,   370,    -1,     5,    15,     5,
     370,    -1,     5,    61,     5,   370,    -1,     5,   189,   370,
      -1,     5,   190,   370,    -1,     5,   258,   368,     4,   370,
      -1,     5,   268,     4,   370,    -1,     5,   269,     4,   370,
      -1,     5,   300,     5,   370,    -1,   241,    87,   469,    -1,
       5,    14,     5,    -1,     5,    15,     5,    -1,     5,    61,
       5,    -1,     5,   189,    -1,     5,   190,    -1,     5,   258,
     368,     4,    -1,     5,   268,     4,    -1,     5,   269,     4,
      -1,     5,   300,     5,    -1,     5,     5,   266,    -1,     5,
      14,     5,   370,    -1,     5,    15,     5,   370,    -1,     5,
      61,     5,   370,    -1,     5,   189,   369,   370,    -1,     5,
       5,   266,   369,   370,    -1,     5,   190,   369,   370,    -1,
       5,   258,   368,     4,   369,   370,    -1,     5,   273,   368,
       4,     4,   369,   370,    -1,     5,   268,     4,   370,    -1,
       5,   269,     4,   370,    -1,     5,   300,     5,   369,   370,
      -1,   265,   472,    -1,   117,    87,   473,    -1,   241,   156,
     481,    -1,   241,    87,   480,    -1,   191,   474,    -1,     5,
      14,     5,    -1,     5,    15,     5,    -1,     5,    61,     5,
      -1,     5,   189,   369,    -1,     5,     5,   266,   369,    -1,
       5,   190,   369,    -1,     5,   258,   368,     4,   369,    -1,
       5,   273,   368,     4,     4,   369,    -1,     5,   268,     4,
      -1,     5,   269,     4,    -1,     5,   300,     5,   369,    -1,
       5,    14,     5,    -1,     5,    15,     5,    -1,     5,    61,
       5,    -1,     5,   189,   369,    -1,     5,   190,   369,    -1,
       5,   258,   368,     4,   369,    -1,     5,   268,     4,    -1,
       5,   269,     4,    -1,     5,   300,     5,   369,    -1,   156,
     161,   475,    -1,   161,   476,    -1,   156,   477,    -1,   478,
      -1,   156,   335,   479,    -1,     5,    14,     5,   370,    -1,
       5,    15,     5,   370,    -1,     5,    61,     5,   370,    -1,
       5,   189,   369,   370,    -1,     5,   190,   369,   370,    -1,
       5,   258,   368,     4,   369,   370,    -1,     5,   268,     4,
     370,    -1,     5,   269,     4,   370,    -1,     5,   300,     5,
     369,   370,    -1,     5,    14,     5,   370,    -1,     5,    15,
       5,   370,    -1,     5,    61,     5,   370,    -1,     5,   189,
     369,   370,    -1,     5,     5,   266,   369,   370,    -1,     5,
     190,   369,   370,    -1,     5,   258,   368,     4,   369,   370,
      -1,     5,   273,   368,     4,     4,   369,   370,    -1,     5,
     268,     4,   370,    -1,     5,   269,     4,   370,    -1,     5,
     300,     5,   369,   370,    -1,   361,     5,    14,     5,   370,
      -1,   361,     5,    15,     5,   370,    -1,   361,     5,    61,
       5,   370,    -1,   361,     5,   189,   369,   370,    -1,   361,
       5,   190,   369,   370,    -1,   361,     5,   258,   368,     4,
     369,   370,    -1,   361,     5,   268,     4,   370,    -1,   361,
       5,   269,     4,   370,    -1,   361,     5,   300,     5,   369,
     370,    -1,   361,     5,    14,     5,   370,    -1,   361,     5,
      15,     5,   370,    -1,   361,     5,    61,     5,   370,    -1,
     361,     5,   189,   369,   370,    -1,   361,     5,     5,   266,
     369,   370,    -1,   361,     5,   190,   369,   370,    -1,   361,
       5,   258,   368,     4,   369,   370,    -1,   361,     5,   273,
     368,     4,     4,   369,   370,    -1,   361,     5,   268,     4,
     370,    -1,   361,     5,   269,     4,   370,    -1,   361,     5,
     300,     5,   369,   370,    -1,     5,    14,     5,    -1,     5,
      15,     5,    -1,     5,    61,     5,    -1,     5,   189,   369,
      -1,     5,   190,   369,    -1,     5,   258,   368,     4,   369,
      -1,     5,   268,     4,    -1,     5,   269,     4,    -1,     5,
     300,     5,   369,    -1,     5,    14,     5,    -1,     5,    15,
       5,    -1,     5,    61,     5,    -1,     5,   189,   369,    -1,
       5,     5,   266,   369,    -1,     5,   190,   369,    -1,     5,
     258,   368,     4,   369,    -1,     5,   273,   368,     4,     4,
     369,    -1,     5,   268,     4,    -1,     5,   269,     4,    -1,
       5,   300,     5,   369,    -1,     5,    14,     5,    -1,     5,
      15,     5,    -1,     5,    61,     5,    -1,     5,   189,   369,
      -1,     5,   190,   369,    -1,     5,   258,   368,     4,   369,
      -1,     5,   268,     4,    -1,     5,   269,     4,    -1,     5,
     300,     5,   369,    -1,     5,    14,     5,   370,    -1,     5,
      61,     5,   370,    -1,     5,   189,   370,    -1,     5,   258,
     368,     4,   370,    -1,     5,   268,     4,   370,    -1,     5,
     300,     5,   370,    -1,     5,     5,    -1,   265,     5,     5,
      -1,    93,     4,     4,     4,     4,     4,    -1,   186,     4,
       4,     4,     4,     4,    -1,   111,    -1,   227,    -1,   352,
      -1,   138,   352,    -1,    88,   352,    -1,    66,     5,    -1,
       5,     4,     4,    -1,   297,   350,   350,    -1,   343,   350,
      -1,     5,     5,   361,   365,     5,     5,   361,   365,   350,
     361,   367,     5,    -1,    60,   491,    -1,    66,     5,    -1,
      80,    -1,    73,   496,     5,    -1,    73,   496,   300,     5,
      -1,    75,    99,    -1,    -1,    83,   489,   492,    -1,    89,
      -1,    99,    -1,    99,    17,    -1,   105,   495,    -1,   114,
       4,    -1,   130,     5,    -1,   149,    17,    -1,   149,   209,
     350,   350,    -1,   149,   289,   350,   350,    -1,     4,    20,
     373,   352,    -1,     4,    21,   355,    -1,     4,    21,   355,
     362,    -1,     4,    21,   355,   360,   365,    -1,     4,    22,
     235,   350,   350,     4,   362,    -1,     4,    22,   235,   350,
     350,     4,   360,   367,    -1,     4,    22,   235,     5,   360,
     367,    -1,     4,    48,   121,   352,    -1,     4,    49,   235,
     350,   350,   350,     4,   362,    -1,     4,    49,   235,   350,
     350,   350,     4,   360,   367,    -1,     4,    49,   235,     5,
     360,   367,    -1,     4,    48,   235,   350,   350,   362,    -1,
       4,    48,   235,   350,   350,   360,   367,    -1,     4,    52,
     105,   355,   355,     4,   350,   350,   350,     4,    -1,     4,
      52,   105,   355,   355,     4,   350,   350,   350,     4,   362,
      -1,     4,    52,   105,   355,   355,     4,   350,   350,   350,
       4,   360,   365,    -1,     4,    52,   105,     5,     5,   360,
     365,   360,   367,    -1,     4,    55,   490,     5,     5,    -1,
       4,    62,   121,   352,    -1,     4,    62,   235,   350,   362,
      -1,     4,    62,   235,   350,   360,   367,    -1,     4,    66,
       5,    -1,     4,    74,    27,   352,   352,    -1,     4,    74,
     166,     5,     5,    -1,     4,    74,   235,   350,   362,    -1,
       4,    74,   235,   350,   360,   367,    -1,     4,    74,   278,
     360,   365,    -1,     4,    75,   137,   352,    -1,     4,    82,
     105,   355,   355,     4,   350,   350,     4,    -1,     4,    82,
     105,   355,   355,     4,   350,   350,     4,   362,    -1,     4,
      82,   105,   355,   355,     4,   350,   350,     4,   360,   365,
      -1,     4,    82,   105,     5,     5,   360,   365,   360,   367,
      -1,     4,    83,    22,   235,   350,   350,    -1,     4,    83,
      49,   235,   350,   350,    -1,     4,    83,    52,    21,   350,
     350,    -1,     4,    83,    52,   235,   350,   350,    -1,     4,
      83,   110,   235,   350,   350,    -1,     4,    83,   113,    21,
     350,   350,    -1,     4,    83,   113,   235,   350,   350,    -1,
       4,    83,    82,    21,   350,   350,    -1,     4,    83,    82,
     235,   350,   350,    -1,     4,    83,   224,   304,     4,   350,
     350,    -1,     4,    83,   253,   304,     4,   350,   350,    -1,
       4,    99,    -1,     4,    99,    22,     4,    -1,     4,    99,
      49,     4,    -1,     4,    99,    52,     4,    -1,     4,    99,
     110,     4,    -1,     4,    99,    55,   490,     5,    -1,     4,
      99,   113,     4,    -1,     4,    99,    82,     4,    -1,     4,
      99,   224,   304,     4,    -1,     4,    99,   253,   304,     4,
      -1,     4,    99,   280,    -1,     4,    99,   280,     5,    -1,
       4,    99,   280,     4,    -1,     4,   105,    40,     4,    -1,
       4,   109,   121,   352,    -1,     4,   109,   235,   350,   350,
     362,    -1,     4,   109,   235,   350,   350,   360,   367,    -1,
       4,   110,   235,   350,   350,   350,     4,   362,    -1,     4,
     110,   235,   350,   350,   350,     4,   360,   367,    -1,     4,
     110,   235,     5,   360,   367,    -1,     4,   113,   105,   355,
     355,     4,   350,   350,   350,     4,    -1,     4,   113,   105,
     355,   355,     4,   350,   350,   350,     4,   362,    -1,     4,
     113,   105,   355,   355,     4,   350,   350,   350,     4,   360,
     365,    -1,     4,   113,   105,     5,     5,   360,   365,   360,
     367,    -1,     4,   130,     5,    -1,     4,   149,    -1,     4,
     149,   209,    -1,     4,   171,    27,   352,   352,    -1,     4,
     171,   222,   362,   359,   359,    -1,     4,   171,   222,   360,
     365,   359,   359,    -1,     4,   194,   350,   350,    -1,     4,
     194,   131,    -1,     4,   194,    36,    -1,     4,   194,   288,
     362,   350,   350,    -1,     4,   194,   288,   360,   365,   359,
      -1,     4,   224,   239,   350,   350,   362,    -1,     4,   224,
     239,   350,   350,   360,   367,    -1,     4,   253,   239,   350,
     350,   362,    -1,     4,   253,   239,   350,   350,   360,   367,
      -1,     4,   222,   257,   371,    -1,     4,   222,   264,     4,
      -1,     4,   224,   121,   352,    -1,     4,   229,   362,   359,
     359,   350,    -1,     4,   229,   360,   365,   359,   359,   350,
     360,   367,    -1,     4,   230,   509,   352,    -1,     4,   243,
      40,    -1,     4,   244,   222,   362,   359,   359,    -1,     4,
     244,   222,   360,   365,   359,   359,    -1,     4,   244,   278,
     360,   365,   360,   367,    -1,     4,   254,    -1,     4,   254,
     209,    -1,     4,   280,     5,    -1,     4,   282,     5,    -1,
       4,   282,   243,   352,    -1,     4,   294,    -1,     4,   296,
      -1,     4,   302,    27,   352,    -1,     4,   302,   222,   362,
     359,   350,   355,    -1,     4,   302,   222,   360,   365,   359,
     360,   367,   350,   355,    -1,     4,   336,     4,    -1,   164,
      -1,   164,   350,   350,    -1,   173,   504,    -1,   174,   505,
      -1,   194,   506,    -1,   228,   352,    -1,   230,   509,   352,
      -1,   230,   509,   352,   350,   350,    -1,   243,    40,   350,
     350,    -1,   243,   193,   350,   350,     4,    -1,   243,   111,
      -1,   248,     5,   496,   360,   365,   366,   352,    -1,   248,
     281,     5,    -1,   254,   513,    -1,   261,   514,    -1,     5,
      66,     5,    -1,     5,    80,    -1,     5,    99,    -1,     5,
      89,    -1,     5,   130,     5,    -1,     5,   149,    -1,     5,
     149,   209,    -1,     5,   194,   350,   350,    -1,     5,   194,
     131,    -1,     5,   194,    36,    -1,     5,   194,   288,   362,
     359,    -1,     5,   194,   288,   360,   365,   359,    -1,     5,
     230,   509,   352,    -1,     5,   254,    -1,     5,   254,   209,
      -1,     5,   294,    -1,     5,   296,    -1,   280,   105,     5,
       5,    -1,   280,    99,     5,    -1,   280,    99,    17,    -1,
     280,     5,    -1,   280,   297,     5,    -1,   215,    -1,   215,
     360,    -1,   293,    -1,   294,    17,    -1,   296,    17,    -1,
     336,     4,    -1,   254,    -1,   296,    -1,   149,    -1,   294,
      -1,    40,   194,    -1,   194,    -1,   111,   194,    -1,    40,
     105,    -1,   105,    -1,   111,   105,    -1,    40,   243,    -1,
     243,    -1,   111,   243,    -1,    99,    -1,   282,    -1,    66,
      -1,   336,    -1,   230,    -1,   130,    -1,   164,    -1,   297,
      -1,    -1,     4,    -1,    30,   352,    -1,   235,   350,    -1,
     160,     4,    -1,   210,     4,   350,    -1,    62,   350,   350,
     350,   510,    -1,   109,   350,   350,   350,   350,   354,   510,
      -1,    48,   350,   350,   350,   350,   354,   510,    -1,   224,
     350,   350,   350,   350,   510,    -1,   253,   350,   350,   350,
     350,   510,    -1,   171,   350,   350,   350,   350,   510,    -1,
     302,   350,   350,   350,   350,   510,    -1,   282,   350,   350,
     354,   510,    -1,    62,   222,   350,   350,   372,   510,    -1,
      48,   222,   350,   350,   372,   510,    -1,   102,   222,   350,
     350,   372,   510,    -1,    85,   222,   350,   350,   372,   510,
      -1,   346,   222,   350,   350,   372,   510,    -1,    27,   222,
     350,   350,   372,   510,    -1,    51,   222,   350,   350,   372,
     510,    -1,   244,   350,   350,   350,   350,   360,   365,   360,
     367,   510,    -1,    74,   350,   350,   350,   360,   365,   510,
      -1,   229,   350,   350,   350,   350,   350,   510,    -1,    22,
     350,   350,   350,   350,     4,   510,    -1,   110,   350,   350,
     350,   350,   350,     4,   354,   510,    -1,    49,   350,   350,
     350,   350,   350,     4,   354,   510,    -1,    82,   350,   350,
     355,   355,     4,   350,   350,     4,   510,    -1,   113,   350,
     350,   355,   355,     4,   350,   350,   350,     4,   354,   510,
      -1,    52,   350,   350,   355,   355,     4,   350,   350,   350,
       4,   354,   510,    -1,    75,   510,    -1,   281,   493,    -1,
       5,   350,   350,    -1,   300,     5,   350,   350,    -1,   350,
     350,   300,     5,    -1,     5,   360,   365,   359,    -1,     4,
       4,    -1,    40,   350,   350,     4,    -1,   193,   350,   350,
       4,    -1,   111,    -1,   104,    -1,   338,    -1,    63,    -1,
     247,    -1,   246,    -1,   232,    -1,   339,    -1,    60,   498,
      -1,    66,    -1,   130,    -1,   114,    -1,   142,   350,   350,
      -1,   154,   350,   350,    -1,   148,    20,    82,   360,    -1,
     148,    20,   151,     5,     5,     4,    -1,   148,    20,   220,
       5,     5,     5,     5,   360,   365,   374,    -1,   148,    20,
     221,     5,     5,   360,   374,    -1,   148,    20,   234,     5,
       5,     5,   360,    -1,   148,    20,   274,   360,   365,    -1,
       4,    20,    82,   360,    -1,     4,    20,   151,     5,     5,
       4,    -1,     4,    20,   220,     5,     5,     5,     5,   360,
     365,   374,    -1,     4,    20,   221,     5,     5,   360,   374,
      -1,     4,    20,   234,     5,     5,     5,   360,    -1,     4,
      20,   274,   360,   365,    -1,   154,    17,    -1,     4,    21,
      -1,     4,    21,   362,    -1,     4,    21,   360,   365,    -1,
       4,    22,   235,   360,   367,    -1,     4,    48,   121,    -1,
       4,    49,   235,   360,   367,    -1,     4,    48,   235,   360,
     367,    -1,     4,    52,    21,    -1,     4,    52,    21,   362,
      -1,     4,    52,    21,   360,   365,    -1,     4,    52,   235,
     360,   367,    -1,     4,    59,   360,   365,   366,    -1,     4,
      62,   121,    -1,     4,    62,   235,   360,   367,    -1,     4,
      66,    -1,     4,    74,    27,    -1,     4,    74,   166,    -1,
       4,    74,   235,   360,   367,    -1,     4,    74,   278,    -1,
       4,    75,   137,    -1,     4,    82,    21,    -1,     4,    82,
      21,   362,    -1,     4,    82,    21,   360,   365,    -1,     4,
      82,   235,   360,   367,    -1,     4,   109,   121,    -1,     4,
     109,   235,   360,   367,    -1,     4,   110,   235,   360,   367,
      -1,     4,   113,    21,    -1,     4,   113,    21,   362,    -1,
       4,   113,    21,   360,   365,    -1,     4,   113,   235,   360,
     367,    -1,     4,   130,    -1,     4,   149,    -1,     4,   171,
      27,    -1,     4,   171,   167,   360,   367,    -1,     4,   171,
     222,   360,   365,   366,    -1,     4,   180,   167,   350,   360,
     367,    -1,     4,   224,   121,    -1,     4,   222,   257,    -1,
       4,   222,   264,    -1,     4,   229,   222,   360,   365,   366,
      -1,     4,   229,   167,   360,   367,    -1,     4,   229,   286,
     360,   367,    -1,     4,   230,    -1,     4,   230,   509,    -1,
       4,   244,   167,   360,   367,    -1,     4,   244,   222,   360,
     365,   366,    -1,     4,   244,   278,    -1,     4,   254,    -1,
       4,   280,    -1,     4,   280,     4,    -1,     4,   282,    -1,
       4,   282,   243,    -1,     4,   292,    -1,     4,   302,    27,
      -1,     4,   302,   167,   360,   367,    -1,     4,   302,   222,
     360,   365,   366,    -1,     4,   336,    -1,   149,   499,    -1,
     149,   205,    -1,   205,    -1,   224,   253,   350,   350,    -1,
     253,   253,   350,   350,    -1,   228,    -1,   230,   509,    -1,
     254,   500,    -1,   254,   205,    -1,   261,   501,    -1,     5,
      66,    -1,     5,   130,    -1,     5,   154,    -1,     5,   230,
     509,    -1,     5,   280,    -1,     5,   280,   205,    -1,   280,
      17,    -1,   280,    98,   195,    -1,   336,    -1,    30,    -1,
     235,    -1,   160,    -1,   210,    -1,    -1,   350,   350,    -1,
      -1,   350,   350,    -1,    -1,   282,    -1,    -1,    -1,   223,
      -1,   236,    -1,   298,    -1,    57,    -1,    20,    -1,   496,
     360,   365,   366,   352,   511,   517,    -1,   254,   496,   360,
     365,   366,   352,   511,   517,    -1,   496,     5,    -1,   496,
       5,   360,   365,    -1,   496,     4,    -1,   496,     4,   360,
     365,    -1,   124,     5,     5,   494,     4,     5,    -1,   350,
     350,    -1,   131,    -1,    36,    -1,    40,   350,   350,    -1,
     193,   350,   350,    -1,   111,    -1,   288,   362,   359,    -1,
     288,   360,   365,   359,    -1,   507,   508,    -1,   508,    -1,
     509,   347,   352,    -1,    66,   347,     5,    -1,    92,   347,
       4,     4,    -1,   336,   347,     4,    -1,   130,   347,     5,
      -1,   282,   347,     5,    -1,   520,    -1,   521,    -1,   202,
      -1,   254,    -1,   149,    -1,    91,    -1,   126,    -1,   105,
      -1,   194,    -1,   243,    -1,    99,    -1,   157,    -1,   270,
      -1,   502,    -1,   502,   507,    -1,    -1,    -1,   512,   515,
      -1,    17,    -1,   209,   350,   350,    -1,   289,    -1,   289,
     350,   350,    -1,   352,    -1,   282,   352,    -1,   515,   516,
      -1,   516,    -1,   509,   347,   352,    -1,    -1,    -1,   518,
     519,    -1,   519,   520,    -1,   520,    -1,   280,   347,     5,
      -1,    55,   347,   490,     5,     5,    -1,    64,    -1,    66,
       5,    -1,   181,     4,    -1,   287,   350,    -1,   346,    -1,
     344,    -1,   339,    -1,   202,    -1,   350,   350,   350,   350,
      -1,   350,   350,    -1,   362,   350,   350,    -1,   360,   365,
     359,    -1,   288,   525,    -1,    39,   350,   350,    -1,   193,
     526,    -1,   228,   352,    -1,   350,   350,    -1,   362,   350,
     350,    -1,   360,   365,   359,    -1,    40,   350,   350,    -1,
     350,   350,    -1,   111,   350,   350,    -1,   352,    -1,   307,
     361,   365,    -1,     5,     4,     4,    -1,   297,    -1,    70,
     529,    -1,   168,     4,    -1,   240,     4,    -1,   249,   350,
      -1,    54,    -1,   139,    -1,   241,    -1,    90,    -1,   149,
     531,    -1,   254,   532,    -1,    40,   350,   350,    -1,   193,
     350,   350,    -1,   111,    -1,   259,   111,    -1,    40,   350,
     350,    -1,   193,   350,   350,    -1,   111,    -1,   259,   111,
      -1,   188,    -1,    13,    -1,   202,    -1,    34,    -1,   107,
      -1,    61,     5,    -1,   278,   360,    -1,   301,     4,     4,
       4,    -1,   350,    -1,   350,    97,    -1,   193,   537,    -1,
     288,   350,    -1,   288,   350,    97,    -1,    40,    -1,   350,
      -1,   111,    -1,    26,   539,    -1,   124,   541,    -1,   204,
     551,    -1,   112,   552,    -1,   217,     5,    -1,   120,     5,
     375,    -1,    61,     5,   375,    -1,   268,     4,   375,    -1,
     241,    87,   540,    -1,   120,     5,   375,    -1,    61,     5,
     375,    -1,   268,     4,   375,    -1,   542,    -1,   156,   542,
      -1,   279,   543,    -1,   265,   544,    -1,   117,    87,   545,
      -1,   191,   546,    -1,   241,   156,   548,    -1,   241,    87,
     549,    -1,   238,   550,    -1,   120,     5,    -1,    61,     5,
      -1,   268,     4,    -1,   120,     5,    -1,    61,     5,    -1,
     268,     4,    -1,   120,     5,    -1,    61,     5,    -1,   268,
       4,    -1,   120,     5,    -1,    61,     5,    -1,   268,     4,
      -1,   156,   547,    -1,   120,     5,     4,    -1,    61,     5,
       4,    -1,   268,     4,     4,    -1,   120,     5,    -1,    61,
       5,    -1,   268,     4,    -1,   120,     5,    -1,    61,     5,
      -1,   268,     4,    -1,   120,     5,    -1,    61,     5,    -1,
     268,     4,    -1,   120,     5,    -1,    61,     5,    -1,   268,
       4,    -1,   120,     5,   375,    -1,    61,     5,   375,    -1,
     268,     4,   375,    -1,   120,     5,     5,   375,    -1,   554,
       4,     4,   350,   350,   355,    -1,    99,    -1,    50,    -1,
     290,    -1,   135,    -1,   108,    -1,    -1,     4,   350,   350,
     350,   350,    -1,   203,    -1,   203,     4,   350,   350,   350,
     350,    -1,   124,   265,   556,    -1,     4,    -1,   350,   360,
      -1,     4,     4,    -1,     4,   350,   360,    -1,   350,   350,
      -1,   288,   350,   350,    -1,   361,   365,   366,    -1,    16,
     561,    -1,   239,     4,    -1,   237,   560,    -1,    23,   559,
      -1,     4,     4,    -1,     4,     5,    -1,   282,     4,     5,
      -1,     4,     4,    -1,     4,     5,    -1,   282,     4,     5,
      -1,     4,    -1,     4,   361,   365,    -1,     4,     6,   361,
     365,    -1,   227,    -1,   350,   350,    -1,   350,   350,    12,
     350,   350,    -1,   350,   350,    12,   362,   350,   350,    -1,
     350,   350,    12,   360,   365,   359,    -1,   288,   564,    -1,
     123,    -1,   123,   350,    -1,   350,   350,    -1,   350,   350,
      12,   350,   350,    -1,   350,   350,    12,   362,   350,   350,
      -1,   350,   350,    12,   360,   365,   359,    -1
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
     512,   513,   514,   515,   516,   517,   518,   519,   520,   523,
     525,   526,   527,   528,   530,   531,   532,   533,   536,   537,
     538,   539,   540,   543,   544,   547,   548,   549,   552,   555,
     558,   561,   573,   580,   587,   595,   596,   597,   598,   599,
     602,   603,   604,   605,   606,   607,   608,   609,   610,   611,
     612,   613,   614,   615,   616,   617,   618,   619,   620,   621,
     622,   623,   624,   625,   626,   627,   628,   629,   632,   633,
     636,   637,   638,   639,   640,   641,   642,   643,   646,   647,
     648,   649,   650,   653,   654,   655,   656,   657,   658,   659,
     660,   661,   662,   663,   666,   667,   668,   671,   672,   673,
     674,   677,   678,   679,   682,   683,   684,   687,   688,   689,
     692,   693,   694,   695,   696,   697,   698,   699,   702,   703,
     706,   707,   708,   709,   710,   711,   714,   715,   716,   719,
     720,   721,   722,   723,   724,   727,   728,   729,   730,   731,
     732,   733,   734,   735,   739,   740,   743,   744,   747,   748,
     751,   752,   754,   755,   756,   759,   760,   763,   765,   767,
     769,   771,   773,   775,   777,   779,   783,   784,   785,   786,
     787,   788,   789,   790,   793,   794,   797,   798,   799,   801,
     803,   804,   805,   807,   811,   812,   815,   816,   818,   821,
     823,   829,   830,   831,   834,   835,   836,   839,   840,   841,
     842,   843,   844,   850,   851,   854,   855,   856,   857,   858,
     861,   862,   863,   866,   867,   872,   877,   884,   886,   888,
     889,   890,   893,   895,   898,   899,   902,   903,   904,   905,
     906,   909,   911,   913,   918,   923,   926,   927,   930,   931,
     932,   939,   940,   941,   942,   945,   946,   949,   950,   953,
     954,   957,   959,   963,   964,   967,   969,   970,   971,   972,
     975,   976,   977,   978,   979,   982,   984,   986,   987,   989,
     991,   993,   995,   999,  1002,  1003,  1004,  1007,  1010,  1011,
    1012,  1013,  1014,  1015,  1016,  1017,  1018,  1019,  1020,  1021,
    1022,  1023,  1024,  1025,  1026,  1027,  1028,  1030,  1031,  1032,
    1033,  1034,  1035,  1036,  1037,  1038,  1039,  1041,  1042,  1043,
    1044,  1045,  1046,  1047,  1049,  1051,  1052,  1055,  1056,  1057,
    1058,  1059,  1060,  1061,  1062,  1065,  1066,  1067,  1070,  1073,
    1074,  1076,  1078,  1079,  1080,  1081,  1082,  1083,  1090,  1091,
    1094,  1095,  1096,  1099,  1100,  1103,  1106,  1107,  1109,  1113,
    1114,  1115,  1118,  1122,  1124,  1125,  1126,  1127,  1128,  1129,
    1130,  1131,  1132,  1135,  1136,  1137,  1140,  1141,  1144,  1146,
    1152,  1156,  1158,  1160,  1163,  1164,  1166,  1169,  1172,  1173,
    1177,  1179,  1182,  1187,  1188,  1189,  1193,  1194,  1195,  1198,
    1199,  1200,  1203,  1204,  1206,  1207,  1208,  1209,  1210,  1211,
    1212,  1213,  1214,  1215,  1217,  1218,  1221,  1222,  1225,  1226,
    1227,  1228,  1231,  1232,  1235,  1237,  1240,  1244,  1245,  1246,
    1247,  1250,  1251,  1252,  1255,  1256,  1257,  1260,  1263,  1264,
    1265,  1268,  1269,  1270,  1271,  1272,  1273,  1276,  1277,  1278,
    1279,  1280,  1281,  1282,  1285,  1286,  1289,  1290,  1293,  1294,
    1297,  1298,  1301,  1302,  1303,  1306,  1307,  1310,  1311,  1314,
    1317,  1325,  1326,  1329,  1330,  1331,  1332,  1333,  1334,  1335,
    1336,  1337,  1338,  1339,  1340,  1341,  1342,  1343,  1344,  1347,
    1350,  1351,  1354,  1355,  1356,  1357,  1360,  1361,  1362,  1363,
    1366,  1367,  1368,  1369,  1370,  1373,  1374,  1375,  1376,  1377,
    1378,  1380,  1381,  1386,  1387,  1390,  1392,  1394,  1397,  1398,
    1399,  1400,  1401,  1402,  1405,  1407,  1409,  1411,  1412,  1414,
    1416,  1418,  1420,  1422,  1425,  1426,  1427,  1428,  1429,  1430,
    1432,  1433,  1434,  1437,  1440,  1442,  1444,  1446,  1448,  1450,
    1452,  1454,  1457,  1459,  1461,  1463,  1464,  1465,  1466,  1467,
    1470,  1471,  1472,  1473,  1474,  1475,  1476,  1478,  1480,  1481,
    1482,  1485,  1486,  1487,  1488,  1489,  1490,  1492,  1493,  1494,
    1497,  1498,  1499,  1500,  1501,  1504,  1507,  1510,  1513,  1516,
    1519,  1522,  1525,  1528,  1533,  1536,  1539,  1542,  1545,  1548,
    1551,  1554,  1557,  1560,  1563,  1568,  1571,  1574,  1577,  1580,
    1583,  1586,  1589,  1592,  1597,  1600,  1603,  1606,  1609,  1612,
    1615,  1618,  1621,  1624,  1627,  1632,  1634,  1635,  1636,  1637,
    1638,  1640,  1641,  1642,  1644,  1645,  1646,  1647,  1648,  1649,
    1650,  1652,  1654,  1655,  1656,  1659,  1660,  1661,  1662,  1663,
    1664,  1666,  1667,  1668,  1671,  1673,  1675,  1676,  1678,  1680,
    1684,  1685,  1688,  1689,  1690,  1693,  1700,  1701,  1702,  1703,
    1704,  1705,  1706,  1709,  1717,  1718,  1719,  1720,  1722,  1724,
    1725,  1725,  1726,  1727,  1728,  1729,  1730,  1731,  1733,  1734,
    1736,  1739,  1742,  1743,  1744,  1747,  1749,  1752,  1755,  1756,
    1759,  1763,  1766,  1768,  1771,  1774,  1778,  1783,  1788,  1790,
    1791,  1793,  1795,  1796,  1798,  1800,  1802,  1804,  1806,  1807,
    1809,  1811,  1815,  1820,  1822,  1824,  1826,  1828,  1830,  1832,
    1834,  1836,  1838,  1840,  1843,  1844,  1846,  1848,  1849,  1851,
    1853,  1854,  1855,  1857,  1859,  1860,  1861,  1863,  1864,  1865,
    1867,  1870,  1874,  1878,  1881,  1884,  1888,  1893,  1899,  1900,
    1901,  1903,  1904,  1906,  1910,  1912,  1913,  1914,  1916,  1919,
    1921,  1924,  1926,  1929,  1931,  1933,  1934,  1937,  1942,  1945,
    1946,  1949,  1952,  1956,  1957,  1959,  1960,  1961,  1963,  1964,
    1966,  1967,  1969,  1974,  1976,  1977,  1979,  1980,  1981,  1982,
    1983,  1984,  1986,  1988,  1990,  1991,  1993,  1994,  1996,  1998,
    1999,  2000,  2001,  2002,  2003,  2004,  2005,  2006,  2007,  2008,
    2010,  2012,  2014,  2015,  2016,  2017,  2019,  2020,  2021,  2022,
    2023,  2025,  2026,  2027,  2028,  2029,  2030,  2033,  2034,  2035,
    2036,  2037,  2038,  2039,  2040,  2041,  2042,  2043,  2044,  2045,
    2046,  2047,  2048,  2049,  2050,  2051,  2052,  2053,  2056,  2057,
    2058,  2059,  2060,  2061,  2069,  2076,  2085,  2094,  2101,  2108,
    2116,  2124,  2131,  2136,  2141,  2146,  2151,  2156,  2161,  2167,
    2176,  2186,  2196,  2203,  2213,  2223,  2232,  2244,  2257,  2262,
    2265,  2267,  2269,  2274,  2278,  2281,  2283,  2285,  2288,  2289,
    2290,  2291,  2292,  2293,  2294,  2297,  2298,  2299,  2300,  2301,
    2302,  2304,  2306,  2308,  2310,  2312,  2314,  2317,  2319,  2321,
    2323,  2325,  2327,  2330,  2331,  2332,  2333,  2335,  2338,  2339,
    2341,  2343,  2344,  2345,  2347,  2350,  2353,  2354,  2356,  2357,
    2358,  2359,  2361,  2362,  2363,  2364,  2365,  2367,  2369,  2370,
    2372,  2375,  2376,  2377,  2379,  2381,  2382,  2383,  2384,  2386,
    2389,  2393,  2394,  2395,  2396,  2399,  2402,  2404,  2405,  2406,
    2408,  2411,  2412,  2414,  2415,  2416,  2417,  2418,  2420,  2421,
    2423,  2426,  2427,  2428,  2429,  2430,  2432,  2434,  2435,  2436,
    2437,  2439,  2441,  2442,  2443,  2444,  2445,  2446,  2448,  2449,
    2451,  2454,  2455,  2456,  2457,  2460,  2461,  2464,  2465,  2468,
    2469,  2472,  2485,  2486,  2490,  2491,  2495,  2496,  2499,  2504,
    2511,  2513,  2516,  2518,  2521,  2525,  2526,  2527,  2528,  2529,
    2530,  2531,  2533,  2537,  2538,  2541,  2542,  2543,  2544,  2545,
    2546,  2547,  2548,  2551,  2552,  2553,  2554,  2555,  2556,  2557,
    2558,  2559,  2560,  2561,  2564,  2565,  2568,  2569,  2569,  2572,
    2573,  2574,  2575,  2578,  2579,  2582,  2583,  2586,  2590,  2591,
    2591,  2594,  2595,  2598,  2601,  2605,  2606,  2607,  2608,  2611,
    2612,  2613,  2614,  2617,  2619,  2620,  2625,  2627,  2628,  2629,
    2630,  2633,  2634,  2639,  2643,  2644,  2645,  2648,  2649,  2654,
    2655,  2658,  2660,  2661,  2662,  2667,  2668,  2669,  2670,  2673,
    2674,  2677,  2679,  2681,  2682,  2685,  2687,  2688,  2689,  2692,
    2693,  2696,  2697,  2698,  2701,  2702,  2703,  2706,  2707,  2708,
    2709,  2710,  2713,  2714,  2715,  2718,  2719,  2720,  2721,  2722,
    2725,  2727,  2729,  2731,  2734,  2736,  2738,  2741,  2742,  2743,
    2744,  2745,  2746,  2747,  2748,  2749,  2752,  2753,  2754,  2757,
    2758,  2759,  2762,  2763,  2764,  2767,  2768,  2769,  2772,  2773,
    2774,  2775,  2778,  2779,  2780,  2783,  2784,  2785,  2788,  2789,
    2790,  2793,  2794,  2795,  2798,  2800,  2802,  2806,  2810,  2812,
    2815,  2816,  2817,  2818,  2821,  2822,  2824,  2825,  2827,  2830,
    2831,  2832,  2833,  2836,  2837,  2840,  2842,  2843,  2844,  2845,
    2848,  2849,  2850,  2853,  2854,  2855,  2858,  2859,  2864,  2868,
    2875,  2876,  2878,  2883,  2885,  2888,  2889,  2890,  2891,  2893,
    2898
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
  "ELEVATION_", "ELLIPTIC_", "ELLIPSE_", "ELLIPSEANNULUS_", "END_",
  "ENVI_", "EPANDA_", "EPSILON_", "EQUATORIAL_", "ERASE_", "EXT_",
  "FACTOR_", "FALSE_", "FILE_", "FILL_", "FILTER_", "FIT_", "FITS_",
  "FITSY_", "FIXED_", "FK4_", "FK4_NO_E_", "FK5_", "FONT_", "FRONT_",
  "FULL_", "FUNCTION_", "GALACTIC_", "GAUSSIAN_", "GET_", "GLOBAL_",
  "GRAPHICS_", "GRAY_", "GRID_", "GZ_", "HANDLE_", "HAS_", "HEAD_",
  "HEADER_", "HEIGHT_", "HELIOECLIPTIC_", "HIDE_", "HIGHLITE_", "HISTEQU_",
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
  "POW_", "PRINT_", "PRESERVE_", "PROJECTION_", "PROPERTY_",
  "PUBLICATION_", "PROS_", "QUERY_", "RADIAL_", "RADIUS_", "REGION_",
  "REPLACE_", "RESAMPLE_", "RESET_", "RESOLUTION_", "RGB_", "ROOT_",
  "ROTATE_", "RULER_", "SAMPLE_", "SAOIMAGE_", "SAOTNG_", "SAVE_",
  "SCALE_", "SCAN_", "SCIENTIFIC_", "SCOPE_", "SEGMENT_", "SELECT_",
  "SET_", "SEXAGESIMAL_", "SHAPE_", "SHARED_", "SHIFT_", "SHMID_", "SHOW_",
  "SIGMA_", "SINH_", "SIZE_", "SLICE_", "SMMAP_", "SMOOTH_", "SOCKET_",
  "SOCKETGZ_", "SOURCE_", "SQRT_", "SQUARED_", "SSHARED_", "STATS_",
  "STATUS_", "SUPERGALACTIC_", "SUM_", "SYSTEM_", "TABLE_", "TAG_",
  "TEMPLATE_", "TEXT_", "THREADS_", "THREED_", "THRESHOLD_", "THICK_",
  "TRANSPARENCY_", "TO_", "TOGGLE_", "TOPHAT_", "TRUE_", "TYPE_", "UNDO_",
  "UNHIGHLITE_", "UNLOAD_", "UNSELECT_", "UPDATE_", "USER_", "VALUE_",
  "VAR_", "VIEW_", "VECTOR_", "VERSION_", "VERTEX_", "VERTICAL_", "WARP_",
  "WCS_", "WCSA_", "WCSB_", "WCSC_", "WCSD_", "WCSE_", "WCSF_", "WCSG_",
  "WCSH_", "WCSI_", "WCSJ_", "WCSK_", "WCSL_", "WCSM_", "WCSN_", "WCSO_",
  "WCSP_", "WCSQ_", "WCSR_", "WCSS_", "WCST_", "WCSU_", "WCSV_", "WCSW_",
  "WCSX_", "WCSY_", "WCSZ_", "WCS0_", "WFPC2_", "WIDTH_", "WIN32_", "XML_",
  "XY_", "YES_", "ZMAX_", "ZSCALE_", "ZOOM_", "'Y'", "'N'", "'X'", "'='",
  "$accept", "command", "numeric", "debug", "yesno", "fileNameType",
  "optangle", "angle", "sexagesimal", "hms", "dms", "coord", "coordSystem",
  "wcsSystem", "internalSystem", "scaleType", "minmaxMode", "skyFrame",
  "skyFormat", "skyDist", "shmType", "incrLoad", "layerType", "pointShape",
  "pointSize", "analysisMethod", "analysisParam", "endian", "threed",
  "threedBorder", "threedCompass", "threedHighlite", "threedView",
  "analysis", "analysisShape", "bin", "binAbout", "binFactor",
  "binFunction", "binTo", "block", "blockTo", "clip", "clipScope",
  "clipMode", "clipMinMax", "clipZScale", "colormap", "colormapMotion",
  "colorscale", "contour", "contourCreate", "contourDelete", "contourLoad",
  "contourClipMode", "contourClipScope", "contourMethod", "contourPaste",
  "contourSave", "crop", "crop3d", "crosshair", "cube", "cutMethod",
  "fitsy", "get", "getBin", "getBinCols", "getBlock", "getClip",
  "getClipMinMax", "getClipZScale", "getColorbar", "getColorMap",
  "getColorMapLevel", "getColorScale", "getColorScaleLevel", "getContour",
  "getContourClip", "getContourColorScale", "getCoord", "getCrop",
  "getCrosshair", "getCube", "getCursor", "getData", "getInfo", "getiis",
  "getIISFileName", "getFits", "getFitsExt", "getFitsHeader",
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
     351,   351,   351,   351,   351,   351,   351,   351,   351,   352,
     352,   352,   352,   352,   352,   352,   352,   352,   353,   353,
     353,   353,   353,   354,   354,   355,   355,   355,   356,   357,
     358,   359,   359,   359,   359,   360,   360,   360,   360,   360,
     361,   361,   361,   361,   361,   361,   361,   361,   361,   361,
     361,   361,   361,   361,   361,   361,   361,   361,   361,   361,
     361,   361,   361,   361,   361,   361,   361,   361,   362,   362,
     363,   363,   363,   363,   363,   363,   363,   363,   364,   364,
     364,   364,   364,   365,   365,   365,   365,   365,   365,   365,
     365,   365,   365,   365,   366,   366,   366,   367,   367,   367,
     367,   368,   368,   368,   369,   369,   369,   370,   370,   370,
     371,   371,   371,   371,   371,   371,   371,   371,   372,   372,
     373,   373,   373,   373,   373,   373,   374,   374,   374,   375,
     375,   375,   375,   375,   375,   376,   376,   376,   376,   376,
     376,   376,   376,   376,   377,   377,   378,   378,   379,   379,
     380,   380,   380,   380,   380,   381,   381,   382,   382,   382,
     382,   382,   382,   382,   382,   382,   383,   383,   383,   383,
     383,   383,   383,   383,   384,   384,   385,   385,   385,   385,
     385,   385,   385,   385,   386,   386,   387,   387,   387,   387,
     387,   388,   388,   388,   389,   389,   389,   390,   390,   390,
     390,   390,   390,   391,   391,   392,   392,   392,   392,   392,
     393,   393,   393,   394,   394,   394,   394,   395,   395,   395,
     395,   395,   396,   396,   397,   397,   398,   398,   398,   398,
     398,   399,   399,   399,   399,   399,   400,   400,   401,   401,
     401,   402,   402,   402,   402,   403,   403,   404,   404,   405,
     405,   406,   406,   407,   407,   407,   407,   407,   407,   407,
     408,   408,   408,   408,   408,   409,   409,   409,   409,   409,
     409,   409,   409,   410,   411,   411,   411,   412,   413,   413,
     413,   413,   413,   413,   413,   413,   413,   413,   413,   413,
     413,   413,   413,   413,   413,   413,   413,   413,   413,   413,
     413,   413,   413,   413,   413,   413,   413,   413,   413,   413,
     413,   413,   413,   413,   413,   413,   413,   414,   414,   414,
     414,   414,   414,   414,   414,   415,   415,   415,   416,   417,
     417,   417,   417,   417,   417,   417,   417,   417,   418,   418,
     419,   419,   419,   420,   420,   421,   422,   422,   422,   423,
     423,   423,   424,   425,   425,   425,   425,   425,   425,   425,
     425,   425,   425,   426,   426,   426,   427,   427,   428,   428,
     428,   429,   429,   429,   430,   430,   430,   431,   432,   432,
     433,   433,   433,   434,   434,   434,   435,   435,   435,   436,
     436,   436,   437,   437,   437,   437,   437,   437,   437,   437,
     437,   437,   437,   437,   437,   437,   438,   438,   439,   439,
     439,   439,   440,   440,   441,   441,   441,   442,   442,   442,
     442,   443,   443,   443,   444,   444,   444,   445,   446,   446,
     446,   447,   447,   447,   447,   447,   447,   448,   448,   448,
     448,   448,   448,   448,   449,   449,   450,   450,   451,   451,
     452,   452,   453,   453,   453,   454,   454,   455,   455,   456,
     456,   457,   457,   458,   458,   458,   458,   458,   458,   458,
     458,   458,   458,   458,   458,   458,   458,   458,   458,   459,
     460,   460,   461,   461,   461,   461,   462,   462,   462,   462,
     463,   463,   463,   463,   463,   464,   464,   464,   464,   464,
     464,   464,   464,   465,   465,   466,   466,   466,   467,   467,
     467,   467,   467,   467,   468,   468,   468,   468,   468,   468,
     468,   468,   468,   468,   469,   469,   469,   469,   469,   469,
     469,   469,   469,   470,   471,   471,   471,   471,   471,   471,
     471,   471,   471,   471,   471,   471,   471,   471,   471,   471,
     472,   472,   472,   472,   472,   472,   472,   472,   472,   472,
     472,   473,   473,   473,   473,   473,   473,   473,   473,   473,
     474,   474,   474,   474,   474,   475,   475,   475,   475,   475,
     475,   475,   475,   475,   476,   476,   476,   476,   476,   476,
     476,   476,   476,   476,   476,   477,   477,   477,   477,   477,
     477,   477,   477,   477,   478,   478,   478,   478,   478,   478,
     478,   478,   478,   478,   478,   479,   479,   479,   479,   479,
     479,   479,   479,   479,   480,   480,   480,   480,   480,   480,
     480,   480,   480,   480,   480,   481,   481,   481,   481,   481,
     481,   481,   481,   481,   482,   482,   482,   482,   482,   482,
     483,   483,   484,   484,   484,   485,   486,   486,   486,   486,
     486,   486,   486,   487,   488,   488,   488,   488,   488,   488,
     489,   488,   488,   488,   488,   488,   488,   488,   488,   488,
     488,   488,   488,   488,   488,   488,   488,   488,   488,   488,
     488,   488,   488,   488,   488,   488,   488,   488,   488,   488,
     488,   488,   488,   488,   488,   488,   488,   488,   488,   488,
     488,   488,   488,   488,   488,   488,   488,   488,   488,   488,
     488,   488,   488,   488,   488,   488,   488,   488,   488,   488,
     488,   488,   488,   488,   488,   488,   488,   488,   488,   488,
     488,   488,   488,   488,   488,   488,   488,   488,   488,   488,
     488,   488,   488,   488,   488,   488,   488,   488,   488,   488,
     488,   488,   488,   488,   488,   488,   488,   488,   488,   488,
     488,   488,   488,   488,   488,   488,   488,   488,   488,   488,
     488,   488,   488,   488,   488,   488,   488,   488,   488,   488,
     488,   488,   488,   488,   488,   488,   488,   488,   488,   488,
     488,   488,   488,   488,   488,   488,   488,   488,   488,   488,
     488,   488,   488,   488,   488,   488,   488,   488,   488,   488,
     488,   488,   488,   488,   488,   488,   488,   490,   490,   490,
     490,   490,   490,   490,   490,   490,   490,   490,   490,   490,
     490,   490,   490,   490,   490,   490,   490,   490,   491,   491,
     491,   491,   491,   491,   492,   492,   492,   492,   492,   492,
     492,   492,   492,   492,   492,   492,   492,   492,   492,   492,
     492,   492,   492,   492,   492,   492,   492,   492,   492,   492,
     493,   493,   493,   493,   494,   495,   495,   495,   496,   496,
     496,   496,   496,   496,   496,   497,   497,   497,   497,   497,
     497,   497,   497,   497,   497,   497,   497,   497,   497,   497,
     497,   497,   497,   497,   497,   497,   497,   497,   497,   497,
     497,   497,   497,   497,   497,   497,   497,   497,   497,   497,
     497,   497,   497,   497,   497,   497,   497,   497,   497,   497,
     497,   497,   497,   497,   497,   497,   497,   497,   497,   497,
     497,   497,   497,   497,   497,   497,   497,   497,   497,   497,
     497,   497,   497,   497,   497,   497,   497,   497,   497,   497,
     497,   497,   497,   497,   497,   497,   497,   497,   497,   497,
     497,   497,   497,   497,   497,   497,   497,   497,   497,   497,
     497,   498,   498,   498,   498,   499,   499,   500,   500,   501,
     501,   502,   503,   503,   503,   503,   503,   503,   504,   504,
     505,   505,   505,   505,   505,   506,   506,   506,   506,   506,
     506,   506,   506,   507,   507,   508,   508,   508,   508,   508,
     508,   508,   508,   509,   509,   509,   509,   509,   509,   509,
     509,   509,   509,   509,   510,   510,   511,   512,   511,   513,
     513,   513,   513,   514,   514,   515,   515,   516,   517,   518,
     517,   519,   519,   520,   521,   522,   522,   522,   522,   523,
     523,   523,   523,   524,   524,   524,   524,   524,   524,   524,
     524,   525,   525,   525,   526,   526,   526,   527,   527,   527,
     527,   528,   528,   528,   528,   529,   529,   529,   529,   530,
     530,   531,   531,   531,   531,   532,   532,   532,   532,   533,
     533,   534,   534,   534,   535,   535,   535,   536,   536,   536,
     536,   536,   537,   537,   537,   538,   538,   538,   538,   538,
     539,   539,   539,   539,   540,   540,   540,   541,   541,   541,
     541,   541,   541,   541,   541,   541,   542,   542,   542,   543,
     543,   543,   544,   544,   544,   545,   545,   545,   546,   546,
     546,   546,   547,   547,   547,   548,   548,   548,   549,   549,
     549,   550,   550,   550,   551,   551,   551,   552,   553,   553,
     554,   554,   554,   554,   555,   555,   555,   555,   555,   556,
     556,   556,   556,   557,   557,   558,   558,   558,   558,   558,
     559,   559,   559,   560,   560,   560,   561,   561,   561,   562,
     563,   563,   563,   563,   563,   564,   564,   564,   564,   564,
     564
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
       1,     1,     1,     2,     1,     2,     1,     2,     2,     2,
       2,     1,     1,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     2,     2,     0,     1,     2,     1,     6,
       5,     1,     1,     1,     2,     2,     1,     1,     1,     1,
       2,     1,     1,     1,     2,     1,     1,     2,     2,     2,
       0,     1,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     1,     2,     3,     1,     2,     2,     4,
       6,     1,    10,     1,     2,     3,     3,     2,     2,     2,
       2,     2,     2,     2,     4,     4,     4,     3,     3,     5,
       4,     4,     4,     3,     3,     3,     3,     2,     2,     4,
       3,     3,     3,     3,     4,     4,     4,     4,     5,     4,
       6,     7,     4,     4,     5,     2,     3,     3,     3,     2,
       3,     3,     3,     3,     4,     3,     5,     6,     3,     3,
       4,     3,     3,     3,     3,     3,     5,     3,     3,     4,
       3,     2,     2,     1,     3,     4,     4,     4,     4,     4,
       6,     4,     4,     5,     4,     4,     4,     4,     5,     4,
       6,     7,     4,     4,     5,     5,     5,     5,     5,     5,
       7,     5,     5,     6,     5,     5,     5,     5,     6,     5,
       7,     8,     5,     5,     6,     3,     3,     3,     3,     3,
       5,     3,     3,     4,     3,     3,     3,     3,     4,     3,
       5,     6,     3,     3,     4,     3,     3,     3,     3,     3,
       5,     3,     3,     4,     4,     4,     3,     5,     4,     4,
       2,     3,     6,     6,     1,     1,     1,     2,     2,     2,
       3,     3,     2,    12,     2,     2,     1,     3,     4,     2,
       0,     3,     1,     1,     2,     2,     2,     2,     2,     4,
       4,     4,     3,     4,     5,     7,     8,     6,     4,     8,
       9,     6,     6,     7,    10,    11,    12,     9,     5,     4,
       5,     6,     3,     5,     5,     5,     6,     5,     4,     9,
      10,    11,     9,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     7,     7,     2,     4,     4,     4,     4,     5,
       4,     4,     5,     5,     3,     4,     4,     4,     4,     6,
       7,     8,     9,     6,    10,    11,    12,     9,     3,     2,
       3,     5,     6,     7,     4,     3,     3,     6,     6,     6,
       7,     6,     7,     4,     4,     4,     6,     9,     4,     3,
       6,     7,     7,     2,     3,     3,     3,     4,     2,     2,
       4,     7,    10,     3,     1,     3,     2,     2,     2,     2,
       3,     5,     4,     5,     2,     7,     3,     2,     2,     3,
       2,     2,     2,     3,     2,     3,     4,     3,     3,     5,
       6,     4,     2,     3,     2,     2,     4,     3,     3,     2,
       3,     1,     2,     1,     2,     2,     2,     1,     1,     1,
       1,     2,     1,     2,     2,     1,     2,     2,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     1,
       2,     2,     2,     3,     5,     7,     7,     6,     6,     6,
       6,     5,     6,     6,     6,     6,     6,     6,     6,    10,
       7,     7,     7,     9,     9,    10,    12,    12,     2,     2,
       3,     4,     4,     4,     2,     4,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     1,     1,     3,
       3,     4,     6,    10,     7,     7,     5,     4,     6,    10,
       7,     7,     5,     2,     2,     3,     4,     5,     3,     5,
       5,     3,     4,     5,     5,     5,     3,     5,     2,     3,
       3,     5,     3,     3,     3,     4,     5,     5,     3,     5,
       5,     3,     4,     5,     5,     2,     2,     3,     5,     6,
       6,     3,     3,     3,     6,     5,     5,     2,     3,     5,
       6,     3,     2,     2,     3,     2,     3,     2,     3,     5,
       6,     2,     2,     2,     1,     4,     4,     1,     2,     2,
       2,     2,     2,     2,     2,     3,     2,     3,     2,     3,
       1,     1,     1,     1,     1,     0,     2,     0,     2,     0,
       1,     0,     0,     1,     1,     1,     1,     1,     7,     8,
       2,     4,     2,     4,     6,     2,     1,     1,     3,     3,
       1,     3,     4,     2,     1,     3,     3,     4,     3,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     0,     0,     2,     1,
       3,     1,     3,     1,     2,     2,     1,     3,     0,     0,
       2,     2,     1,     3,     5,     1,     2,     2,     2,     1,
       1,     1,     1,     4,     2,     3,     3,     2,     3,     2,
       2,     2,     3,     3,     3,     2,     3,     1,     3,     3,
       1,     2,     2,     2,     2,     1,     1,     1,     1,     2,
       2,     3,     3,     1,     2,     3,     3,     1,     2,     1,
       1,     1,     1,     1,     2,     2,     4,     1,     2,     2,
       2,     3,     1,     1,     1,     2,     2,     2,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     1,     2,     2,
       2,     3,     2,     3,     3,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     3,
       3,     3,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     3,     3,     3,     4,     6,     1,
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
       0,     0,   313,     0,     0,     0,     0,     0,     0,     0,
       0,    22,     0,     0,     0,     0,     0,     0,     0,  1062,
       0,     0,     0,     0,     0,     0,     0,  1062,    38,     0,
       0,     0,    43,     0,     0,     0,    47,  1244,    49,     0,
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
       0,  1062,     0,   360,     0,   364,     0,     0,     0,   368,
       0,   370,     0,   372,     0,     0,   512,   376,    19,     0,
     518,    20,   523,     0,   540,   526,   527,   528,   529,   542,
     531,   532,   533,     0,   535,   536,     0,     0,    21,    23,
       0,   556,     0,     0,     0,   561,     0,    24,     0,     0,
       0,     0,     0,     0,     0,    26,   715,    27,     0,     0,
       0,     0,     0,     0,   716,    28,     0,    29,  1067,  1066,
    1063,  1064,  1065,     0,  1125,     0,     0,     0,    31,     0,
    1132,  1131,  1130,  1129,    33,     0,     0,     0,     0,     0,
     143,     0,    34,     0,  1150,     0,  1147,    35,     0,     0,
       0,     0,    37,    36,     0,     0,     0,     0,    40,     0,
       0,  1177,    41,     0,     0,     0,     0,     0,    42,  1240,
    1239,  1243,  1242,  1241,    44,     0,    45,     0,     0,     0,
       0,     0,   202,     0,     0,     0,    46,     0,     0,  1246,
      48,     0,     0,    50,     0,     0,     0,     0,   143,    51,
    1269,    52,     0,     0,    53,     1,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   216,     5,   234,     0,   226,
       0,     0,   228,     0,   236,   229,   233,   244,   245,   230,
     246,     0,   232,   254,   255,   253,   252,     0,     0,     0,
     259,   266,   269,   268,   267,   265,   258,   262,   263,   264,
     257,     0,     0,     0,     0,     0,   261,    10,     0,     0,
       0,   280,     0,   285,     0,   295,   286,   297,   287,   298,
     288,   309,   289,     0,     0,   290,     0,    88,    89,    90,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   316,     0,     0,     0,     0,     0,   146,   152,   144,
     145,   147,   150,   153,   149,   148,   151,     0,     0,   333,
      58,    63,    64,    65,    66,    67,    59,    60,    61,    68,
      62,     0,   338,     0,   385,   381,   377,   378,   382,   379,
     384,   339,   388,   340,   301,   393,   397,   392,   304,   303,
     302,     0,     0,   341,   404,   343,     0,   342,     0,   411,
     344,   423,   415,   426,   416,   417,   419,     0,   421,   422,
     143,   345,     0,     0,   346,     0,     0,   143,   347,   436,
     143,   434,   348,   437,   350,   143,   438,   349,     0,   143,
       0,   351,   456,     0,   454,   472,     0,     0,     0,   460,
     452,     0,   462,   477,   465,   353,   482,   483,   354,     0,
       0,     0,   447,     0,   357,   443,   444,     0,   358,   359,
       0,   484,   485,   486,   362,   363,   487,   365,     0,   488,
     489,   490,   367,   496,   491,   492,   494,   369,   502,   504,
     506,   508,   501,   503,   510,   371,     0,     0,   515,     0,
     375,   143,   517,     0,   524,   541,   525,   543,   544,   545,
     530,   546,   548,   547,   549,   534,   537,   553,     0,     0,
       0,   550,   538,     0,     0,   558,   557,     0,     0,     0,
       0,    25,     0,     0,   568,     0,   569,     0,     0,     0,
       0,     0,   570,     0,   714,     0,   571,     0,   572,     0,
       0,   573,     0,   719,   718,   717,     0,   722,     0,     0,
       0,   908,     0,     0,     0,   726,   730,   732,   733,     0,
       0,     0,     0,   844,     0,     0,     0,   881,     0,     0,
       0,     0,     0,     0,     0,   883,     0,     0,     0,    30,
    1126,  1127,  1128,    32,     0,     0,     0,     0,  1139,  1140,
       0,   143,     0,  1137,  1134,     0,     0,     0,   143,  1155,
    1158,  1156,  1157,  1151,  1152,  1153,  1154,     0,     0,    39,
    1174,  1175,     0,  1182,  1184,  1183,  1179,  1180,  1178,     0,
       0,     0,     0,  1185,     0,  1188,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1186,  1197,     0,     0,
       0,  1187,  1189,     0,  1172,  1173,  1171,   200,     0,   204,
     196,     0,   206,   197,     0,   208,   198,  1170,  1169,   199,
     201,   203,     0,     0,     0,     0,     0,   195,     0,     0,
       0,     0,  1253,  1266,  1256,     0,     0,  1259,     0,     0,
    1258,  1257,   154,  1275,     0,  1274,  1270,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   235,   231,     0,   240,
       0,   237,     0,   256,   138,   141,   142,   140,   139,   270,
     271,   272,   260,   274,   276,   275,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   143,     0,   317,    94,    91,
      92,    93,   143,   319,   318,     0,     0,     0,     0,     0,
       0,     0,   332,     0,   328,   326,   325,   337,   380,     0,
       0,   383,   398,   399,   394,   395,   400,   402,   401,   396,
     305,   306,   391,   390,   406,   405,     0,   410,   424,   425,
     414,   427,   420,   418,   413,     0,     0,     0,   143,   433,
     154,   154,   154,   143,     0,     0,   143,   473,   455,   466,
       0,   457,    78,   468,     0,     0,   459,   461,   143,   478,
     479,   464,     0,     0,     0,   449,     0,     0,     0,     0,
     956,   958,   957,     0,     0,  1055,     0,  1034,     0,  1037,
       0,     0,  1057,  1059,     0,  1050,   361,     0,   493,   495,
     505,   498,   507,   499,   509,   500,   511,   497,     0,     0,
     516,   513,   514,   154,   539,   552,   551,   554,     0,   567,
     555,     0,     0,     0,     0,     0,     0,   167,   167,   161,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   164,
     164,   161,     0,     0,   161,     0,     0,     0,     0,     0,
     609,   633,     0,     0,     0,   605,     0,     0,     0,     0,
     167,   161,     0,     0,   710,     0,   720,   721,   143,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   784,     0,     0,     0,     0,     0,   809,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   833,     0,
       0,   838,   839,     0,     0,     0,   860,   862,   861,     0,
     864,     0,     0,   872,   874,   875,   909,     0,     0,     0,
       0,   724,   725,   950,   948,   953,   952,   951,   949,   954,
       0,   729,     0,   734,     0,   947,     0,   735,   736,   737,
     738,     0,     0,     0,     0,     0,   846,     0,     0,   847,
    1077,     0,  1080,  1076,     0,     0,     0,   848,   882,   849,
    1096,  1101,  1098,  1097,  1095,  1102,  1099,  1093,  1100,  1094,
    1103,     0,     0,   854,     0,     0,     0,  1109,     0,  1111,
     857,     0,  1113,   858,   879,     0,     0,     0,   884,   885,
     886,  1138,     0,     0,  1145,  1141,     0,     0,     0,  1136,
    1135,  1149,  1148,     0,  1163,     0,     0,  1159,     0,  1167,
       0,     0,  1160,     0,  1181,   189,   189,     0,   189,     0,
    1207,     0,  1206,  1198,     0,     0,     0,     0,  1202,     0,
       0,     0,  1205,     0,     0,     0,     0,     0,  1200,  1208,
       0,     0,     0,  1199,   189,   189,   189,     0,   205,   207,
     209,     0,     0,     0,     0,   210,     0,    55,     0,  1248,
       0,  1254,     0,   143,  1260,  1261,     0,  1263,  1264,     0,
     155,   156,  1255,  1276,  1277,     0,   223,   219,   225,   217,
     218,   224,   221,   220,   222,   227,     0,   241,     0,     0,
       0,     0,   273,     0,     0,     0,     0,     0,     0,     0,
       0,   311,   143,     0,     0,     0,     0,   321,     0,   331,
       0,   330,   387,   386,     0,     0,     0,   143,     0,     0,
     154,   431,   435,   439,     0,     0,     0,   154,     0,    82,
      81,   474,   458,     0,   469,   471,   157,   480,   355,     0,
       0,    55,     0,   448,     0,     0,   974,     0,     0,     0,
       0,     0,     0,   988,     0,     0,     0,     0,     0,     0,
    1005,  1006,     0,     0,     0,     0,     0,  1017,     0,  1022,
    1023,  1025,  1027,     0,  1031,  1042,  1043,  1044,     0,  1046,
    1051,  1053,  1054,  1052,   955,     0,     0,  1033,     0,  1032,
     973,     0,     0,  1038,     0,  1040,     0,  1039,  1060,  1041,
    1048,     0,     0,   373,     0,     0,   565,   566,     0,   563,
     559,     0,   167,   167,   167,   168,   169,   577,   578,   163,
     162,     0,   167,   167,   167,     0,   583,   593,   164,   167,
     167,   167,   165,   166,   167,   167,     0,   167,   167,     0,
     164,     0,   606,     0,     0,     0,   632,     0,   631,     0,
       0,   608,     0,   607,     0,     0,     0,     0,   164,   164,
     161,     0,     0,   161,     0,     0,     0,   167,   167,   706,
       0,   167,   167,   711,     0,   180,   181,   182,   183,   184,
     185,     0,    86,    87,    85,   742,     0,     0,     0,     0,
       0,     0,   902,   900,   895,     0,   905,   889,   906,   892,
     904,   898,   887,   901,   890,   888,   907,   903,     0,     0,
       0,   762,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   794,     0,     0,     0,     0,
       0,   808,   810,     0,     0,   816,   815,     0,     0,   170,
       0,     0,     0,   143,     0,     0,   829,     0,     0,     0,
     834,   835,   836,     0,     0,     0,   843,   859,   863,   865,
     868,   867,     0,     0,     0,   873,   910,   912,     0,   911,
     727,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1061,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   731,     0,     0,     0,
       0,   845,     0,   143,     0,  1072,  1070,     0,     0,   143,
       0,  1075,   850,     0,     0,     0,   856,     0,     0,  1114,
     877,   878,     0,   880,  1144,  1146,  1143,  1142,  1133,     0,
       0,  1164,     0,     0,  1168,  1176,   191,   192,   193,   194,
     190,  1191,  1190,     0,     0,     0,  1193,  1192,   189,     0,
       0,     0,  1201,     0,     0,     0,     0,     0,  1218,     0,
    1232,  1231,  1233,     0,     0,     0,  1204,     0,     0,     0,
    1203,  1213,  1212,  1214,  1210,  1209,  1211,  1235,  1234,  1236,
       0,   212,   214,   213,     0,     0,    55,     0,  1250,     0,
     143,  1267,  1262,  1265,     0,     0,   143,     0,     0,     0,
     238,     0,     0,     0,     0,     0,     0,     0,     0,   308,
     307,     0,     0,   299,   310,   312,     0,   322,   324,   323,
     143,   329,     0,     0,     0,   154,   430,   143,     0,     0,
       0,     0,   453,   467,    80,    79,   476,     0,   470,   159,
     160,   158,   463,     0,     0,   451,   445,     0,     0,     0,
       0,     0,     0,   143,   975,     0,   978,     0,     0,   981,
       0,   143,   986,     0,   989,   990,     0,   992,   993,   994,
       0,   998,     0,     0,  1001,     0,  1007,     0,     0,     0,
    1012,  1013,  1011,     0,     0,     0,  1018,     0,     0,  1021,
    1024,  1026,  1028,     0,     0,  1045,  1047,   959,     0,     0,
       0,     0,     0,     0,  1056,   960,     0,     0,  1058,  1049,
       0,     0,   521,   522,     0,     0,   564,     0,   574,   575,
     576,   167,   580,   581,   582,     0,     0,     0,   587,   588,
     161,     0,     0,     0,   167,   594,   595,   596,   597,   599,
     164,   602,   603,     0,   167,     0,     0,     0,   164,   164,
     161,     0,     0,     0,     0,   630,     0,   634,     0,     0,
       0,     0,     0,   164,   164,   161,     0,     0,   161,     0,
       0,     0,     0,     0,   164,   164,   161,     0,     0,   161,
       0,     0,     0,     0,     0,   164,   164,   161,     0,     0,
     161,     0,     0,     0,     0,   164,   164,   161,     0,     0,
       0,   164,   610,   611,   612,   613,   615,     0,   618,   619,
       0,   164,     0,     0,   704,   705,   167,   708,   709,     0,
     741,   143,   743,     0,     0,   748,     0,     0,     0,     0,
       0,   894,   891,   897,   896,   893,   899,     0,   759,     0,
       0,     0,     0,   143,   768,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   785,   786,
     787,     0,   791,   788,   790,     0,     0,   796,   795,   797,
     798,     0,     0,     0,     0,     0,     0,   143,     0,   143,
       0,   814,   176,   172,   177,   171,   174,   173,   175,   823,
     824,   825,     0,     0,     0,   828,   143,     0,   143,     0,
     837,   840,   143,     0,   143,     0,   866,   871,   913,   728,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1104,   938,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   939,     0,     0,     0,
       0,     0,   739,   740,   143,   154,     0,   143,   143,  1078,
    1079,     0,  1081,     0,   852,     0,   143,  1110,  1112,   876,
    1161,  1162,  1165,  1166,   189,   189,   189,  1237,  1216,  1215,
    1217,  1220,  1219,  1223,  1222,  1224,  1221,  1229,  1228,  1230,
    1226,  1225,  1227,     0,     0,  1245,  1252,     0,  1268,     0,
     143,     0,  1271,     0,     0,   242,     0,   239,     0,     0,
       0,   277,     0,     0,     0,     0,   143,     0,   314,   131,
       0,   407,     0,   428,   154,   157,     0,     0,   442,     0,
       0,   446,   967,     0,     0,     0,     0,   143,   976,   157,
     157,   157,   143,   982,   157,   154,   157,   157,   143,   995,
     157,   157,   157,   143,  1002,   157,   157,   143,     0,   157,
     143,   157,   157,   143,   157,   143,   961,     0,     0,     0,
       0,   143,  1035,  1036,     0,     0,   520,   560,     0,   579,
     584,   585,   586,     0,   590,   591,   592,   598,   167,   164,
     604,   621,   622,   623,   624,   625,     0,   627,   628,   164,
       0,     0,     0,   164,   164,   161,     0,     0,     0,     0,
       0,     0,   164,   164,   161,     0,     0,     0,     0,     0,
       0,   164,   164,   161,     0,     0,     0,   164,   167,   167,
     167,   167,   167,     0,   167,   167,     0,   164,   164,   167,
     167,   167,   167,   167,     0,   167,   167,     0,   164,   164,
     684,   685,   686,   687,   689,     0,   692,   693,     0,   164,
     695,   696,   697,   698,   699,     0,   701,   702,   164,   614,
     164,     0,   620,     0,     0,   707,     0,   744,   157,     0,
       0,   157,     0,     0,     0,   758,   157,   760,   763,   764,
     157,   765,   767,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   789,   792,   793,     0,
     157,     0,     0,     0,   811,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   869,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1105,  1084,     0,
    1091,  1092,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   143,     0,     0,    83,     0,     0,
     945,   946,   154,     0,     0,     0,  1073,  1071,  1082,   851,
     853,   154,  1195,  1194,  1196,  1238,     0,  1247,  1278,     0,
       0,  1273,  1272,   243,     0,     0,     0,   282,     0,     0,
       0,   300,   157,   408,   412,   429,   432,     0,   440,   475,
       0,     0,     0,     0,     0,   972,   977,   980,   979,   983,
     984,   985,   987,   991,   996,   997,   999,  1000,  1003,  1004,
    1008,   154,   157,  1015,   154,  1016,  1019,   154,  1029,   154,
       0,     0,     0,     0,   966,     0,     0,   519,     0,   589,
     600,   167,   164,   629,   167,   167,   167,   167,   167,     0,
     167,   167,   164,   675,   676,   677,   678,   679,     0,   681,
     682,   164,   167,   167,   167,   167,   167,     0,   167,   167,
     164,   167,   644,   645,   646,   647,   649,   164,   652,   653,
       0,   167,   167,   664,   665,   666,   667,   669,   164,   672,
     673,     0,   167,   688,   164,     0,   694,   164,   703,   616,
     164,   712,   713,   143,   747,     0,   157,   752,   751,     0,
     143,     0,   761,   766,   143,     0,   773,   774,   775,   776,
     780,   781,   777,   778,   779,     0,     0,   157,   799,   803,
       0,   143,     0,     0,   812,   818,   817,   157,   819,     0,
     826,     0,   830,   157,   157,   821,     0,     0,   870,     0,
     178,   178,     0,     0,   178,     0,   178,  1061,     0,     0,
       0,     0,     0,     0,     0,     0,  1083,     0,     0,   178,
     178,     0,     0,     0,     0,     0,     0,     0,     0,   940,
       0,     0,     0,  1061,    84,     0,   178,     0,  1107,   944,
       0,     0,   211,  1280,  1279,     0,     0,   247,     0,     0,
       0,     0,   315,   441,   334,   968,     0,   186,     0,  1009,
    1010,  1014,  1020,  1030,   962,     0,   186,     0,   366,   334,
       0,   601,   626,   635,   636,   637,   638,   639,   164,   641,
     642,   167,   164,   683,   655,   656,   657,   658,   659,   164,
     661,   662,   167,   648,   167,   164,   654,   668,   167,   164,
     674,   690,   164,   700,   617,     0,   157,   745,   753,     0,
       0,     0,     0,     0,   782,   783,   800,     0,     0,     0,
     813,   820,     0,   831,   832,   822,   157,   841,     0,   179,
    1061,  1061,    83,     0,  1061,     0,  1061,   914,   143,     0,
    1086,     0,  1089,  1123,  1090,  1088,  1085,     0,  1061,  1061,
      83,     0,     0,  1061,  1061,     0,     0,  1061,   943,   941,
     942,   921,  1061,  1061,  1107,  1118,     0,  1074,   855,     0,
       0,   249,     0,     0,     0,   335,   336,   356,     0,   187,
     188,   970,   971,     0,   964,   965,   374,     0,   167,   643,
     680,   167,   663,   650,   167,   670,   167,   691,     0,   746,
     157,   749,   157,     0,   157,     0,   157,   801,   157,     0,
     157,     0,  1061,   927,   923,  1061,     0,   928,     0,   922,
    1061,     0,  1087,     0,   925,   924,  1061,     0,     0,   919,
     917,  1061,   143,   918,   920,   926,  1118,  1068,     0,     0,
    1108,  1116,     0,     0,     0,   278,   301,   304,   302,     0,
       0,   143,   143,   562,   640,   660,   651,   671,   157,   750,
     757,     0,   772,   769,   802,   807,     0,   827,     0,   932,
     916,    83,     0,   930,  1124,     0,   915,    83,     0,   931,
       0,  1069,  1120,  1122,     0,  1115,     0,     0,   283,     0,
       0,     0,     0,   186,   186,     0,   754,   143,   770,   804,
     842,  1061,     0,     0,  1061,     0,   157,  1121,  1117,   248,
       0,     0,     0,     0,     0,   969,   963,   723,   143,   755,
     771,   143,   805,   934,     0,  1061,   933,     0,  1061,   250,
     294,     0,   293,     0,   756,   806,    83,   935,    83,   929,
     292,   291,  1061,  1061,   937,   936
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    53,   430,   176,   155,  1261,  2523,  2524,   431,   432,
     433,   434,   156,   157,   158,    94,   809,   457,  1202,  1682,
    1351,  1364,  1347,  1929,  2620,  1411,  2671,  1581,   336,   750,
     753,   756,   767,    56,   365,    66,   369,   375,   379,   382,
      71,   385,    78,   400,   396,   390,   406,    85,   411,    95,
     101,   416,   418,   420,   492,   862,  1651,   422,   425,   108,
     441,   159,   161,  2667,   178,   218,   481,   851,   483,   493,
     854,   859,   495,   497,   865,   500,   867,   511,   870,   872,
     514,   518,   522,   524,   527,   531,   558,   554,  1273,   545,
     891,   896,   888,  1262,   901,   548,   564,   567,   572,   577,
     585,   931,   933,   935,   937,   590,   941,   221,   592,  1754,
     238,   594,   596,   600,   605,   612,   247,  1340,   615,   255,
     624,  1356,   626,   632,   985,  1372,   980,  1795,  1378,  1376,
     981,  1797,  1381,  1383,   638,   641,   636,   257,   265,   267,
     679,  1062,  1438,  1051,  1536,  1976,  2305,  1067,  1060,   926,
    1314,  1319,  1327,  1329,  1960,   273,  1076,  1079,  1087,  2277,
    2278,  2279,  1961,  2655,  2656,  1110,  1113,  2730,  2731,  2727,
    2728,  2772,  2280,  2281,   278,   284,   292,   693,   688,   297,
     302,   703,   709,  1137,  1142,   759,   747,   308,   312,   716,
     318,   723,  1586,   736,   737,  1173,  1168,  1592,  1158,  1598,
    1610,  1606,  1162,   741,   725,   324,   325,   340,  1189,   343,
     349,   777,   780,   774,   351,   354,   785
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2582
static const yytype_int16 yypact[] =
{
    4478,   -75,    91,   504,    22, -2582, -2582,  1027,  -175,   367,
     463,    -8,   560,  2667,   157,   243,  1795,   315,  5471,   622,
    1636, -2582,   243,  1086,   473,   890,   -54,    23,   482,    -7,
      94,   446,   819,  2860,   120,   866,   433,    -7, -2582,   195,
      56,   808, -2582,   442,   550,   961, -2582,   339, -2582,    52,
    3085,   347,    84,   596, -2582,   781, -2582,   610,   871,   382,
     631,   662,    90,   682,   -10,   110, -2582, -2582, -2582,   165,
     503, -2582,   221,    34,   243,    30,   503,   498, -2582,   728,
     503, -2582, -2582,    45,   503, -2582, -2582, -2582, -2582,   503,
   -2582, -2582, -2582, -2582, -2582, -2582,    72,   706,   734,   736,
     140, -2582,   503,  1370,   503,   503,   973,   503, -2582, -2582,
   -2582,   552, -2582, -2582, -2582, -2582,  4984, -2582, -2582, -2582,
   -2582, -2582, -2582,   503, -2582, -2582, -2582, -2582, -2582, -2582,
   -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582,
   -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582,
   -2582, -2582, -2582, -2582, -2582, -2582,  1215, -2582,   503, -2582,
     743, -2582, -2582,   243,   243,   243,   243,   243,   243,   243,
   -2582, -2582,   243,   243,   243,   243, -2582,   640, -2582,   716,
    1287,   679,    49,   525,   655,   526,  4575,   132,  5058,  4937,
     813,  4984,  3752, -2582,   911,   -31,   887,   787,    89,   490,
     892,    -7,    -9, -2582,   875, -2582,   685,   665,   219, -2582,
     232, -2582,   943, -2582,     6,   870,   459, -2582, -2582,  5177,
   -2582, -2582, -2582,   883,   926, -2582, -2582, -2582, -2582,    64,
   -2582, -2582, -2582,   337, -2582, -2582,  5177,  4137, -2582, -2582,
     435, -2582,   959,   964,    86, -2582,   503, -2582,   968,    78,
     977,   452,   947,   982,    46, -2582, -2582, -2582,   974,   986,
     243,   243,   503,   503, -2582, -2582,   994, -2582, -2582, -2582,
   -2582, -2582, -2582,  1183, -2582,   996,  1006,   503, -2582,  1013,
   -2582, -2582, -2582, -2582, -2582,   503,  1141,   243,  3333,   503,
    1215,   503, -2582,  1016, -2582,  4076, -2582, -2582,  1058,  1019,
    1022,   503, -2582, -2582,   356,  1028,  5177,  1032, -2582,  1156,
     503,   950, -2582,   429,   935,  1457,   541,  1054, -2582, -2582,
   -2582, -2582, -2582, -2582, -2582,  1062, -2582,   436,    43,   108,
     188,    77, -2582,   503,   503,   625, -2582,   503,   798,  1066,
   -2582,   503,   503, -2582,  1068,     8,    42,  1072,  1215, -2582,
   -2582, -2582,   726,   503, -2582, -2582,   503,   503,   503,   503,
     503,   503,   503,   503,   503, -2582, -2582, -2582,   503, -2582,
    1074,  1082, -2582,   503,   182, -2582, -2582, -2582, -2582, -2582,
   -2582,   503, -2582, -2582,   503, -2582, -2582,   877,   877,  1089,
   -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582,
   -2582,   503,   503,  1098,  1116,  1126, -2582, -2582,   503,   503,
     503, -2582,   503, -2582,  1128, -2582, -2582, -2582, -2582,   917,
   -2582,  1142, -2582,  5177,  1186, -2582,   503, -2582, -2582, -2582,
     503,  1191,  1145,  1145,  5177,   503,   503,   503,   503,   503,
     503, -2582,   503,  4984,  1370,   503,   503, -2582, -2582, -2582,
   -2582, -2582, -2582, -2582, -2582, -2582, -2582,  1370,   503, -2582,
   -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582,
   -2582,  1190, -2582,   954,    17, -2582, -2582, -2582, -2582, -2582,
   -2582, -2582, -2582, -2582,   -11, -2582, -2582, -2582,  1071, -2582,
     919,   581,   581, -2582, -2582, -2582,  1244, -2582,  1253, -2582,
   -2582,   -53, -2582,  1088, -2582, -2582, -2582,  1101, -2582, -2582,
    1215, -2582,  3518,   503, -2582,  5177,  5177,  1215, -2582, -2582,
    1215, -2582, -2582, -2582, -2582,  1215, -2582, -2582,  5177,  1215,
     503, -2582, -2582,  5177, -2582,  1267,   599,  1080,    15, -2582,
   -2582,  1085,  5177,  3987, -2582, -2582, -2582, -2582, -2582,  1281,
    1285,  1291, -2582,  1103, -2582, -2582, -2582,   503, -2582, -2582,
    1579, -2582, -2582, -2582, -2582, -2582, -2582, -2582,     6, -2582,
   -2582, -2582, -2582, -2582, -2582,  1123,  1132, -2582, -2582,  1237,
    1249,  1257, -2582, -2582,  1102, -2582,   503,  1321,  1106,  4076,
   -2582,  1215, -2582,  1326, -2582, -2582, -2582, -2582, -2582, -2582,
   -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582,  5177,  5177,
    5177, -2582, -2582,  1329,   243, -2582, -2582,  1331,  1344,  1159,
     503, -2582,   256,  1274, -2582,  1355, -2582,    25,  1276,  2953,
      62,  1361, -2582,  1363, -2582,  1372, -2582,   203, -2582,  1379,
    1381, -2582,  1387, -2582, -2582, -2582,   503, -2582,  4076,  4892,
    1552,   603,  1389,   668,  1309, -2582, -2582, -2582,  1406,   580,
    1424,  1405,    53,   503,   468,   650,   192,  5177,   243,  1907,
     933,    27,    57,   222,     5, -2582,  1412,  1416,  1430, -2582,
   -2582, -2582, -2582, -2582,   503,   503,   503,   503, -2582, -2582,
     503,  1215,   503, -2582,   503,  1370,   503,  1431,  1215, -2582,
   -2582, -2582, -2582, -2582, -2582, -2582, -2582,   372,   419, -2582,
   -2582, -2582,  1435, -2582, -2582, -2582, -2582,  1351, -2582,  1436,
    1445,  1371,  1453, -2582,  1454, -2582,  1462,  1382,  1463,   586,
     439,   649,   430,   651,  1466,   732, -2582, -2582,  1467,  1468,
    1471, -2582, -2582,  1476, -2582, -2582, -2582, -2582,  1477, -2582,
   -2582,  1478, -2582, -2582,  1479, -2582, -2582, -2582, -2582, -2582,
   -2582, -2582,   503,   503,   503,   503,   503, -2582,   503,  1135,
     503,   503, -2582,  1815, -2582,  1163,  1482, -2582,  1194,  1483,
   -2582, -2582,   -34,   503,   503, -2582,  1459,   503,   503,   503,
     503,   503,   503,   503,   503,   503, -2582, -2582,  1484,   921,
     503,  1469,   715, -2582, -2582, -2582, -2582, -2582, -2582, -2582,
   -2582, -2582, -2582, -2582, -2582, -2582,  1488,  1489,   503,   503,
     503,  1490,   243,  1491,  1492,  1215,  5177, -2582, -2582, -2582,
   -2582, -2582,  1215, -2582, -2582,   503,   503,   503,  5177,   503,
    1370,   503, -2582,   503, -2582, -2582, -2582, -2582, -2582,  1493,
    1497, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582,
   -2582, -2582, -2582, -2582,   132, -2582,   503, -2582, -2582, -2582,
   -2582, -2582, -2582, -2582, -2582,  5177,  5177,   503,  1215, -2582,
     -34,   -34,   -34,  1215,  1370,   503,  1215, -2582, -2582, -2582,
     503, -2582,    -5,  1323,  1501,  1503, -2582, -2582,  1215,  5177,
   -2582, -2582,  1505,  1507,  1512,  1231,   503,  4903,   471,   769,
   -2582, -2582, -2582,   503,  1511,   589,  1228, -2582,  1279, -2582,
    1907,  1284,   654,  1258,    61, -2582, -2582,   503, -2582, -2582,
   -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582,   503,  1533,
   -2582, -2582, -2582,   -34, -2582, -2582, -2582, -2582,  5119, -2582,
   -2582,  1535,  1536,   503,  1537,  1540,  1542,    14,    14,   -24,
    1547,  1548,  1551,  1553,  1293,  1294,  1557,  1559,  1562,    54,
      54,   -24,  1566,  1567,   -24,  1568,  1570,  3857,  1573,  1574,
   -2582, -2582,  1575,  1577,   321, -2582,  1581,  1582,  1583,  1584,
      14,   -24,  1593,  1598, -2582,  1599, -2582, -2582,  1215,  1053,
    1393,  1322,   -25,  1337,  1500,   574,   -22,  1601,   138,  1450,
    1502,  1171,  1059,  1558,   440,  1373,  1504,  1605,  1402,   422,
     112,   360,   -39,  4984,  1907,  1572,   396,  1375,  1408,  1610,
      18, -2582, -2582,   454,  1615,  1617, -2582, -2582, -2582,  1618,
    1415,   114,  1907,  1417, -2582, -2582, -2582,   243,  1623,  1624,
     503, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582,
      -1, -2582,   496, -2582,   503, -2582,   503, -2582, -2582, -2582,
   -2582,   503,   503,   503,   668,  5177, -2582,  1631,  1273, -2582,
   -2582,   503, -2582, -2582,   503,  4984,   503, -2582, -2582, -2582,
   -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582,
   -2582,   243,   503, -2582,   503,   668,  1637, -2582,   503,   503,
   -2582,   243, -2582, -2582, -2582,   534,  1641,  1642, -2582, -2582,
   -2582, -2582,   503,   503, -2582, -2582,  1370,   503,   503, -2582,
   -2582, -2582, -2582,   503, -2582,   503,  1518, -2582,   503, -2582,
     503,  1538, -2582,  1646, -2582,  1195,  1195,   741,  1195,  1648,
   -2582,   747, -2582, -2582,  1649,  1651,   811,  1653, -2582,  1655,
    1656,  1654, -2582,   827,   833,  1657,  1658,  1660, -2582, -2582,
    1662,  1663,  1665, -2582,  1195,  1195,  1195,   503, -2582, -2582,
   -2582,   503,   503,   503,   503, -2582,   503,  1205,  5177, -2582,
     503, -2582,  4076,  1215, -2582, -2582,  1666, -2582, -2582,  1667,
   -2582, -2582, -2582, -2582,  1664,  3333, -2582, -2582, -2582, -2582,
   -2582, -2582, -2582, -2582, -2582, -2582,   503,  1669,   503,   503,
     503,   936, -2582,  1668,  1671,   503,   503,   -15,  1672,   243,
     243, -2582,  1215,   503,  1674,  1679,  1680, -2582,  5177, -2582,
     503, -2582, -2582, -2582,   503,   503,   503,  1215,  1681,  5177,
     -34, -2582, -2582, -2582,  1370,   503,  1682,   -34,   503,  1632,
    1652,   628, -2582,  1684, -2582, -2582,  1064, -2582, -2582,   503,
    1687,  1692,   503, -2582,  1689,  1125,  4984,  1461,   476,  1464,
      60,  5177,   535, -2582,   184,  1560,   168,   758,  1470,   180,
   -2582, -2582,   401,  1539,   621,  1586,   759,  1907,   -70, -2582,
    1698,  1460, -2582,   614, -2582, -2582, -2582, -2582,  1907,  1499,
   -2582, -2582, -2582, -2582, -2582,   503,  1151, -2582,   503, -2582,
   -2582,   503,   503, -2582,   503, -2582,   503, -2582, -2582, -2582,
   -2582,  1513,   503, -2582,   503,   254, -2582, -2582,  1706,  1707,
   -2582,   503,    14,    14,    14, -2582, -2582, -2582, -2582, -2582,
   -2582,  1708,    14,    14,    14,   395, -2582, -2582,    54,    14,
      14,    14, -2582, -2582,    14,    14,  1712,    14,    14,  1713,
      54,   635, -2582,  1714,  1718,  1719, -2582,   694, -2582,   884,
    1036, -2582,   637, -2582,  1452,  1721,  1724,  1727,    54,    54,
     -24,  1730,  1731,   -24,  1733,  1735,  1736,    14,    14, -2582,
    1737,    14,    14, -2582,  1739, -2582, -2582, -2582, -2582, -2582,
   -2582,   243, -2582, -2582, -2582,  4984,  1256,   243,   503,  1348,
    1399,   -41, -2582, -2582, -2582,   417, -2582, -2582, -2582, -2582,
   -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582,  1740,   243,
     503, -2582,   243,  1743,   503,  5177,   243,  1414,  1514,  1516,
     183,   202,  1517,   258,  1474,  1475,  1750,  1754,  1757,   574,
    1759,  1760,  1763,  1481,  1485,  1288,  1764,   243,   503,  1385,
    1448, -2582, -2582,   243,  4984, -2582, -2582,  4984,   503,   136,
    1766,   243,   503,  1215,  1370,   243, -2582,  4984,  5177,   503,
   -2582, -2582, -2582,   243,   243,  4984, -2582, -2582, -2582, -2582,
   -2582, -2582,  4984,   503,   243, -2582, -2582, -2582,   503, -2582,
   -2582,  1768,   503,  1549,   152,   503,  1561,   503,   172,   503,
   -2582,   503,  1564,  1571,   503,   503,   503,   503,   503,   503,
     503,   503,    39,   503,   503,  1578, -2582,   503,   503,   503,
     503, -2582,  5177,  1215,  1769,  5177,  5177,   503,   503,  1215,
    1370, -2582,   503,   503,   503,  5177, -2582,   503,   503, -2582,
   -2582, -2582,  1776, -2582, -2582, -2582, -2582, -2582, -2582,   503,
     503, -2582,   503,   503, -2582, -2582, -2582, -2582, -2582, -2582,
   -2582, -2582, -2582,  1783,  1785,  1788, -2582, -2582,  1195,  1789,
    1790,  1792, -2582,  1793,  1797,  1794,  1799,  1798, -2582,  1801,
   -2582, -2582, -2582,  1803,  1805,  1807, -2582,  1808,  1809,  1811,
   -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582,
     503, -2582, -2582, -2582,   503,   503,  1812,  5177, -2582,   503,
    1215, -2582, -2582, -2582,  3333,   503,  1215,   503,   503,   503,
   -2582,   503,   503,  1814,   503,  1813,  1810,   503,   503, -2582,
   -2582,  1816,  5177, -2582, -2582, -2582,   503, -2582, -2582, -2582,
    1215, -2582,   899,   503,   899,   -34, -2582,  1215,  5177,   503,
     503,  1818, -2582, -2582, -2582, -2582, -2582,   503, -2582, -2582,
   -2582, -2582, -2582,   503,  1821, -2582, -2582,  5177,  1822,  1823,
    1824,  1825,  5177,  1215, -2582,  5177, -2582,  5177,  5177,  4984,
    5177,  1215, -2582,  5177, -2582, -2582,  5177, -2582, -2582,  4984,
    5177, -2582,  5177,  5177,  4984,  5177, -2582,  5177,  5177,   503,
   -2582, -2582, -2582,  5177,  5177,  5177, -2582,  5177,  5177, -2582,
   -2582, -2582, -2582,  5177,  5177, -2582, -2582, -2582,  5177,  1826,
    1829,  1830,  1831,  5177, -2582, -2582,   503,   503, -2582, -2582,
    1833,   503, -2582, -2582,  1837,  1834, -2582,   503, -2582, -2582,
   -2582,    14, -2582, -2582, -2582,  1838,  1839,  1840, -2582, -2582,
     -24,  1843,  1845,  1846,    14, -2582, -2582, -2582, -2582, -2582,
      54, -2582, -2582,  1848,    14,  1850,  1851,  1852,    54,    54,
     -24,  1849,  1854,  1856,   761, -2582,   796, -2582,  1038,  1597,
    1862,  1863,  1864,    54,    54,   -24,  1866,  1868,   -24,  1869,
    1607,  1870,  1871,  1872,    54,    54,   -24,  1874,  1876,   -24,
    1887,  1627,  1889,  1890,  1891,    54,    54,   -24,  1877,  1893,
     -24,  1894,  1895,  1896,  1897,    54,    54,   -24,  1900,  1901,
    1903,    54, -2582, -2582, -2582, -2582, -2582,  1902, -2582, -2582,
    1906,    54,  1908,  1909, -2582, -2582,    14, -2582, -2582,  1913,
   -2582,  1215, -2582,  5177,   503, -2582,   503,  5177,   503,  1915,
    1393, -2582, -2582, -2582, -2582, -2582, -2582,  1916, -2582,  4984,
     243,  1917,  4984,  1215, -2582,  1918,  1393,   503,   503,   503,
     503,   503,   503,   503,   503,   503,  1920,  1921, -2582, -2582,
   -2582,  1922, -2582, -2582, -2582,  1925,  1926, -2582, -2582, -2582,
   -2582,   503,  5177,   503,  1927,  1393,   243,  1215,  1370,  1215,
     503, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582,
   -2582, -2582,   503,  1370,  1370, -2582,  1215,  1370,  1215,   503,
   -2582, -2582,  1215,  1370,  1215,  1370, -2582, -2582, -2582, -2582,
     503,   503,   503,   503,   503,   503,   503,   503,   503,   503,
    2141, -2582,   503,   503,   503,   503,   503,   503,   503,   503,
     503,   503,   503,  3518,  1928,   503, -2582,   503,   503,   503,
    1930,  1933, -2582, -2582,  1215,   -34,  1934,  1215,  1215, -2582,
   -2582,  1370, -2582,   503, -2582,  1935,  1215, -2582, -2582, -2582,
   -2582, -2582, -2582, -2582,  1195,  1195,  1195, -2582, -2582, -2582,
   -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582,
   -2582, -2582, -2582,  1393,   503, -2582, -2582,   503, -2582,   503,
    1215,   503, -2582,  1370,   503, -2582,   503, -2582,  1886,  1936,
    1937, -2582,  1940,   503,   503,  1941,  1215,  5177, -2582, -2582,
     503, -2582,   503, -2582,   -34,  1064,   503,  1951, -2582,   503,
       6, -2582, -2582,  1952,  1965,  1967,  1971,  1215, -2582,  1064,
    1064,  1064,  1215, -2582,  1064,   -34,  1064,  1064,  1215, -2582,
    1064,  1064,  1064,  1215, -2582,  1064,  1064,  1215,  5177,  1064,
    1215,  1064,  1064,  1215,  1064,  1215, -2582,  1972,  1973,  1974,
    1975,  1215, -2582, -2582,  1977,     6,  1978, -2582,   503, -2582,
   -2582, -2582, -2582,  1981, -2582, -2582, -2582, -2582,    14,    54,
   -2582, -2582, -2582, -2582, -2582, -2582,  1983, -2582, -2582,    54,
    1985,  1986,  1987,    54,    54,   -24,  1984,  1991,  1992,  1996,
    1999,  2000,    54,    54,   -24,  2003,  2004,  2005,  2008,  2009,
    2010,    54,    54,   -24,  2012,  2013,  2016,    54,    14,    14,
      14,    14,    14,  2014,    14,    14,  2018,    54,    54,    14,
      14,    14,    14,    14,  2020,    14,    14,  2022,    54,    54,
   -2582, -2582, -2582, -2582, -2582,  2024, -2582, -2582,  2025,    54,
   -2582, -2582, -2582, -2582, -2582,  2027, -2582, -2582,    54, -2582,
      54,  2030, -2582,  2031,  2033, -2582,  4076, -2582,  1064,  2034,
    4984,  1064,   503,  5177,  2038, -2582,  1064, -2582, -2582, -2582,
    1064, -2582, -2582,  5177,  2039,   503,   503,   503,   503,   503,
     503,   503,   503,   503,   503,   503, -2582, -2582, -2582,  4984,
    1064,   503,  5177,  2040, -2582,  1370,  1370,  1370,   503,  4984,
    1370,   503,  1370,  1370,  5177,  4984,  1370,   503,  1370, -2582,
     503,   503,   503,   503,   503,   503,  1393,   503,   503,   503,
    1635,  1700,  1702,  1703,  1704,  1710,  1711,  2141, -2582,  1715,
   -2582, -2582,  1393,   503,   503,   503,   503,  1393,   503,   503,
     503,   503,   503,   503,  1215,   503,  1550,  1393,   503,   503,
   -2582, -2582,   -34,   243,  2041,  2049, -2582, -2582, -2582, -2582,
   -2582,   -34, -2582, -2582, -2582, -2582,   503, -2582, -2582,  1370,
     503, -2582, -2582, -2582,  1147,  2054,  2055, -2582,   503,  2050,
     899, -2582,  1064, -2582, -2582, -2582, -2582,  2056, -2582, -2582,
    2059,  2061,  2063,  5177,  2064, -2582, -2582, -2582, -2582, -2582,
   -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582,
   -2582,   -34,  1064, -2582,   -34, -2582, -2582,   -34, -2582,   -34,
    2062,  2066,  5177,  2069, -2582,  2075,  2077, -2582,   503, -2582,
   -2582,    14,    54, -2582,    14,    14,    14,    14,    14,  2079,
      14,    14,    54, -2582, -2582, -2582, -2582, -2582,  2082, -2582,
   -2582,    54,    14,    14,    14,    14,    14,  2083,    14,    14,
      54,    14, -2582, -2582, -2582, -2582, -2582,    54, -2582, -2582,
    2085,    14,    14, -2582, -2582, -2582, -2582, -2582,    54, -2582,
   -2582,  2087,    14, -2582,    54,  2088, -2582,    54, -2582, -2582,
      54, -2582, -2582,  1215, -2582,  4984,  1064, -2582, -2582,  2089,
    1215,   503, -2582, -2582,  1215,   503, -2582, -2582, -2582, -2582,
   -2582, -2582, -2582, -2582, -2582,   503,   503,  1064, -2582, -2582,
    2090,  1215,   503,  1370, -2582, -2582, -2582,  1064, -2582,   503,
   -2582,  1370, -2582,  1064,  1064, -2582,  5177,  1393, -2582,   503,
    2092,  2092,   503,   503,  2092,  1393,  2092, -2582,  5177,   574,
    2093,  2095,  2100,  2101,  2102,  2104, -2582,   243,  1393,  2092,
    2092,   503,   503,  1393,   503,   503,   503,   503,   503, -2582,
    1370,   503,  2105, -2582, -2582,   503,  2092,   243,    20, -2582,
    2106,   243, -2582, -2582, -2582,  2107,   503, -2582,  2108,  2110,
    1990,   503, -2582, -2582,    35, -2582,  2111,    74,  5177, -2582,
   -2582, -2582, -2582, -2582, -2582,  2112,    74,  5177, -2582,    35,
     503, -2582, -2582, -2582, -2582, -2582, -2582, -2582,    54, -2582,
   -2582,    14,    54, -2582, -2582, -2582, -2582, -2582, -2582,    54,
   -2582, -2582,    14, -2582,    14,    54, -2582, -2582,    14,    54,
   -2582, -2582,    54, -2582, -2582,   503,  1064, -2582, -2582,  4984,
    5177,   503,  5177,   503, -2582, -2582, -2582,  4984,  5177,   503,
   -2582, -2582,  5177, -2582, -2582, -2582,  1064, -2582,  2114, -2582,
   -2582, -2582,  1393,   503, -2582,  2115, -2582, -2582,  1215,  2147,
   -2582,  2149, -2582, -2582, -2582, -2582, -2582,  2150, -2582, -2582,
    1393,   503,  2151, -2582, -2582,   503,  5177, -2582, -2582, -2582,
   -2582, -2582, -2582, -2582,    20,  1817,  1907, -2582, -2582,  2153,
    2154, -2582,  2109,  2152,   127, -2582, -2582, -2582,  5177, -2582,
   -2582, -2582, -2582,  5177, -2582, -2582, -2582,  2156,    14, -2582,
   -2582,    14, -2582, -2582,    14, -2582,    14, -2582,  4076, -2582,
    1064, -2582,  1064,   503,  1064,  2158,  1064, -2582,  1064,   503,
    1064,   503, -2582, -2582, -2582, -2582,  2159, -2582,   503, -2582,
   -2582,  2160, -2582,   503, -2582, -2582, -2582,  2162,   503, -2582,
   -2582, -2582,  1215, -2582, -2582, -2582,  1817, -2582,  1888,  1827,
    1907, -2582,  2164,  2165,  2167, -2582, -2582, -2582, -2582,   847,
     847,  1215,  1215, -2582, -2582, -2582, -2582, -2582,  1064, -2582,
   -2582,  2169, -2582,  4984, -2582, -2582,  2171, -2582,  1393, -2582,
   -2582,  1393,   503, -2582, -2582,   503, -2582,  1393,   503, -2582,
    5177, -2582,  1888, -2582,   243, -2582,  2173,  2174, -2582,   503,
     503,   503,   503,    74,    74,  2175,  4984,  1215, -2582,  4984,
   -2582, -2582,   503,  2172, -2582,   503,  1064, -2582, -2582, -2582,
    2176,  2177,   503,  2178,   503, -2582, -2582, -2582,  1215, -2582,
   -2582,  1215, -2582, -2582,  2180, -2582, -2582,  2181, -2582, -2582,
   -2582,  2182, -2582,  2183, -2582, -2582,  1393, -2582,  1393, -2582,
   -2582, -2582, -2582, -2582, -2582, -2582
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2582, -2582,    -4, -2582,  1427, -2582, -1537,  -932,  1495, -2582,
     868,  -168,  1884,   -49,   285, -1653,  1543,  2057,  -864, -1948,
    -950,  1303,  1855, -2582, -1064, -2582, -2363, -1141, -2582, -2582,
   -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582,
   -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582,
   -2582, -2582, -2582, -2582,  -724,  -489, -2582, -2582, -2582, -2582,
   -2582, -2582, -2582,  -373, -2582, -2582, -2582, -2582, -2582, -2582,
   -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582,
   -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582,
   -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582,
   -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582,
   -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582,
   -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582,
   -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582,
   -2582, -2582, -1457, -2582, -2582, -2582, -2582, -2582,  -650, -2582,
   -2582, -2582, -2582, -2582, -2582,    47, -2582, -2582, -2582, -2582,
     -88,  -663, -1678,  -463, -2582, -2582, -2582, -2582,  -538,  -533,
   -2582, -2582, -2581, -2582, -2582, -2582, -2582, -2582, -2582, -2582,
   -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582,
   -2582, -2582, -2582, -2582,  1465, -2582, -2582, -2582, -2582, -2582,
   -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582,
   -2582, -2582, -2582, -2582, -2582, -2582, -2582
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1252
static const yytype_int16 yytable[] =
{
      70,   348,  1901,   863,  1510,  1582,  1101,  1587,   107,  2050,
    1114,  2052,   775,   268,  1075,  1078,  1251,  1252,  1253,   893,
   -1106,  1366,   377,  1492,  1369,    67,    68,   109,   258,   289,
     965,  1649,  1105,  1617,  1618,  1619,   311,    67,    68,   966,
     967,  1400,    67,    68,  1973,   342,   778,   109,   353,   409,
     269,   639,    67,    68,   368,    67,    68,   561,   374,    67,
      68,   381,   112,  1200,  1871,   384,   386,  2665,  1415,   395,
    1070,  1362,   401,   405,  1107,    96,   408,   414,  1330,  1335,
     412,  1699,  1481,   622,   304,   413,   968,    67,    68,   259,
     757,    97,   618,    67,    68,   551,  1417,  1727,   426,  1439,
     435,   436,   440,   442,  1115,    79,  2669,  2336,   597,   748,
    1116,   260,   109,    67,    68,    67,    68,    67,    68,   446,
     849,  2346,  2347,  2348,   109,   293,  2350,  1259,  2352,  2353,
      67,    68,  2355,  2356,  2357,    67,    68,  2359,  2360,   868,
    1349,  2363,   114,  2365,  2366,   423,  2368,  2773,  1475,   982,
    1500,   598,  1728,  1872,   458,    67,    68,    57,   274,  1331,
     275,   261,   114,  1922,    54,  1442,    98,   398,    67,    68,
    1345,   424,   562,   256,   751,    67,    68,   552,   491,   546,
     894,   852,    55,   512,  1923,    67,    68,  1924,   112,  1709,
     160,  2797,   109,  2674,   800,    67,    68,  1346,  1925,   869,
    1482,  1714,  1873,   850,  1889,   399,   619,    99,  1729,   553,
    1418,  1704,  1363,  1440,   969,   970,   270,   988,   983,   120,
     391,  1926,  1201,  1891,   117,   387,   109,   114,  1080,   271,
     118,   119,  1081,   380,   853,   484,  1350,  1260,  1927,   114,
     100,   485,   620,  1476,   117,  1501,   698,   109,   560,   309,
     118,   119,  1650,   573,   754,   599,   305,  1323,   646,   647,
    2444,  1493,  1071,  2448,   989,   758,  1108,   378,  2452,   547,
     954,   955,  2453,   682,  1752,   276,   842,   486,   563,  1894,
     569,   684,   687,   971,   690,   694,   410,   696,   383,   845,
     776,   272,  2469,   972,   973,  1700,   415,   706,   974,  1511,
   -1106,   487,  1117,  1082,  1443,   715,   717,   114,  1106,   117,
      69,   640,  2666,  2736,   122,   118,   119,   956,   291,   623,
     262,   117,   895,  1083,   779,   975,  1384,   118,   119,   760,
     761,   766,   392,   768,   122,  1385,  1386,   771,   772,  1974,
     341,   114,  1072,   337,   310,   120,  1109,   488,   784,   786,
    1705,  2670,   787,   788,   789,   790,   791,   792,   793,   794,
     795,  1485,   114,   152,   796,   574,   263,   153,   154,   799,
     801,    80,   352,  1444,  1952,   393,   394,   802,   373,  1504,
     803,   277,  1387,   152,  2542,  1084,  1668,   153,   154,   117,
     489,   490,   990,  1672,  1957,   118,   119,   812,   813,   122,
    1477,   445,  1502,  1710,   817,   818,   819,    81,   820,  1765,
    1766,   122,  1133,   388,  2550,  1715,  1445,   294,  1890,  1706,
    2805,  2806,   827,   117,  1542,  2737,   828,   295,  1716,   118,
     119,   833,   834,   835,   836,   837,   838,  1892,   839,   613,
    1847,   843,   844,  1850,   117,   957,   958,  2007,   152,  1473,
     118,   119,   153,   154,   846,  1555,  1767,   627,   177,  1138,
     152,   991,  1707,   338,   153,   154,   389,   575,   489,  2738,
     744,   992,   513,   306,   521,   588,   526,   530,    82,   122,
    1085,  1494,  1928,  1134,   557,  1753,   601,   266,  1870,   248,
     719,    86,   319,  1895,   576,   555,   307,   570,  2598,   586,
    1154,    67,    68,   993,  1111,   707,    67,    68,   875,   877,
    1388,  1389,   279,   122,   959,  1886,    58,  1163,  1512,  2606,
     571,   303,  1874,  1513,   960,   961,   885,  1129,   152,  2611,
    1139,  1053,   153,   154,   122,  2614,  2615,  1305,  1915,  1560,
     942,   320,   339,   745,  1514,  1515,   112,  1516,  1517,   720,
     321,  1561,   602,   906,   326,   556,   962,    59,  1518,  1155,
      83,  1467,   152,    67,    68,  1135,   153,   154,  1717,   628,
    1519,  1520,  1054,   692,   350,    60,   402,   322,  1521,  1390,
     979,  1522,   938,   152,  1768,  1769,  1164,   153,   154,  1391,
    1392,   603,    67,    68,  1393,  1156,   355,  1696,  1523,   998,
     102,  1306,   738,   889,    61,  1524,  1525,  1046,    84,  1526,
     708,  1875,  1140,    87,  1421,   366,   953,  1479,  1487,   103,
    1064,  1394,    62,  1718,  1480,  1307,    63,   614,    67,    68,
     604,  1136,  1676,  1047,  1726,    88,   371,    64,   746,    89,
    1422,  1732,   997,   629,  1474,  1735,   370,   726,  2689,  1785,
    1786,  1832,  1833,  1770,   589,   112,  1702,    67,    68,  1073,
    1876,   739,  1086,  1771,  1772,   762,   372,  1527,  2701,   403,
     721,   104,  1239,  1423,  1488,  1468,  1495,  2541,  1141,  1424,
    1121,  1122,  1123,  1124,   112,  1425,  1125,   376,  1127,    90,
    1128,  1065,  1130,   630,   498,  1773,  1787,   722,  1834,  1799,
    1055,  1308,   499,   120,  1426,   219,   728,  1157,  1800,  1801,
    1159,  1697,  1165,  1053,  1056,  1057,  1255,   631,   860,  1220,
    1528,   220,  1074,  1427,  1193,  1529,    91,  1221,   841,    67,
      68,  1053,   323,   407,    92,    93,   763,   417,  1428,   419,
    1530,   421,  2749,   404,  2750,   443,  2752,   459,  2754,  1531,
    2755,  1309,  2757,   105,  1054,  1802,   861,   471,  1181,  1182,
    1183,  1184,  1185,  1048,  1186,  1188,  1190,  1191,  1429,  1160,
    1703,  1166,  1054,  1066,  1077,  2130,  2131,  1532,  1533,  1203,
    1204,  1733,   472,  1206,  1207,  1208,  1209,  1210,  1211,  1212,
    1213,  1214,    65,  1170,  1317,  1217,  1218,   482,  1534,  1310,
    2785,  2053,  1583,   356,  1430,   494,  1058,  1059,  1589,   740,
    2139,  2140,   120,  1049,  1224,  1225,  1226,  1431,   764,  2627,
    2113,   890,  2132,   496,  1788,  1789,  1835,  1836,  1432,   357,
     358,  1234,  1235,  1236,   313,  1238,  1734,  1240,  1050,  1241,
    2126,   120,  1535,   359,   106,  2651,   523,   765,  2818,   783,
      67,    68,  1171,   927,   734,  2163,  1433,  2141,  2166,  1325,
    1244,  1584,  1246,  2312,  2313,  2314,  2174,  1590,  1434,  2177,
    1435,  1436,  1595,  1249,    67,    68,   550,  2185,  1720,  1711,
    2188,  1256,  1055,  1803,  1804,  1721,  1258,  2195,  1603,  1810,
     360,   361,   549,  1790,  1607,  1837,  1056,  1057,  1811,  1812,
    1055,  1272,  1274,  1791,  1792,  1838,  1839,   804,   559,  1315,
    1437,  1318,  1321,   566,  1056,  1057,   249,  1161,  1326,  1167,
     314,   822,   823,  1332,    67,    68,  1723,    86,  1375,  1311,
     367,  1596,   315,  1216,  1333,  1793,   298,  1840,  2214,    67,
      68,   565,  2703,  2704,   568,  1813,  2707,  1604,  2709,  1341,
    2133,  2134,  1805,  1608,  2224,   593,   532,   595,  1566,   587,
    2714,  2715,  1806,  1807,   616,  2719,  2720,  1808,   617,  2723,
     533,   805,   621,  1102,  2724,  2725,    67,    68,   642,  1312,
     578,  1724,   625,  2243,   860,  2142,  2143,   637,  1058,  1059,
     579,   643,   534,  1712,  1809,  1643,  1414,   856,   327,   648,
    1172,   680,   250,   362,  1313,   363,  1058,  1059,   328,  1585,
     681,   535,   316,   437,   251,  1591,  1478,   580,   683,  2135,
     697,   280,   861,   704,  2759,   317,   705,  2760,   536,  2136,
    2137,   537,  2763,   710,   299,   329,   712,  1503,  2766,   806,
     633,  1821,  2629,  2769,  1103,  1725,  1509,   718,   252,    87,
    1822,  1823,  2148,  2149,  2144,   724,   538,   539,   634,   742,
    1537,  2138,  1538,   769,  2145,  2146,   743,  1539,  1540,  1541,
     770,    88,   773,  1814,  1815,  2049,   781,  1547,   797,  1597,
    1548,  1456,  1551,   364,   438,  2705,  1669,   798,  1679,  1680,
     857,  2315,   581,   811,   253,  1605,  2147,  1824,  1553,  2150,
    1554,  1609,   814,  2716,  1557,  1558,   300,   254,  1457,   540,
     330,  1458,   699,  2813,  1459,   301,  2816,   541,  1564,  1565,
     815,  2303,   807,  1567,  1568,    90,  1104,   808,   582,  1569,
     816,  1570,   821,   635,  1572,  1405,  1573,  2827,    67,  1187,
    2829,  1460,  1816,  1630,    67,    68,   331,   824,   700,  1245,
      67,    68,  1817,  1818,  2834,  2835,   429,  1819,   281,    67,
      68,  1681,    91,   282,   858,   283,   439,  1194,  1195,  1461,
      92,    93,  1462,  1620,   240,   542,   543,  1621,  1622,  1623,
    1624,   685,  1625,  1627,  1820,  2389,  1629,   649,   650,   332,
    2335,   826,   583,  1448,  2398,   847,   713,   701,  1197,  1198,
     427,  1635,   241,  2407,  1406, -1249,  2535,  1687,    67,  1626,
     333,  2351,  1638,    72,  1640,  1641,  1642,  1644,   848,    73,
    1449,  1647,  1648,  1450,  2791,  1825,  1826,  2151,  2152,  1656,
    2794,    67,    68,  1738,    67,  1271,  1661,  1576,  1577,   855,
    1662,  1663,  1664,   651,   584,  1320,   334,   544,   864,   652,
     447,  1670,   686,  1451,  1673,    74,   653,   866,   654,    67,
      68,  1863,   335,   655,   871,  1683,   656,   714,  1685,   873,
     242,   887,   657,  1407,  1408,   892,  1688,  1545,  1546,    75,
     897,  1452,   658,  1463,  1453,   243,   902,  1409,   659,  2832,
     903,  2833,  1907,  1908,  1827,   904,  2153,   660,   905,   702,
     830,   831,  1739,   930,  1828,  1829,  2154,  2155,  1484,  1830,
     928,  1737,  1464,   661,  1744,   932,  1934,  1745,  1746,   929,
    1747,   448,  1748,   934,   936,    76,   939,  1410,  1750,   940,
    1751,   944,   662,   948,  2495,   950,  1831,  1757,  2156,  1465,
     473,   244,   449,   450,   451,  1689,  1690,   663,   951,   452,
    2508,    67,    68,  1867,   952,  2513,   664,   665,   474,  1691,
     964,   963,   453,   976,  1578,  1579,   984,   986,   454,    77,
    1550,  1740,  1741,    67,    68,   475,   987,   666,   455,   427,
     428,   429,  1992,   245,   994,  1742,   995,   476,    67,    68,
    1912,   996,  1580,   246,  1052,  1454,    67,    68,   667,  1692,
    1412,  1413,    67,    68,  1869,   477,  1412,  1413,  1061,   478,
    1069,   668,  1864,   669,  1866,  1868,  1414,    67,    68,  1885,
     479,  1412,  1413,  1063,  1455,  1743,   670,  2621,  1068,  1118,
    2624,   671,  2626,  1119,  1120,  1131,  1879,   672,  2527,  1143,
    1882,  1145,   162,  1414,   673,  2638,  2639,  2531,  1144,   239,
    1146,    67,    68,  1914,   264,  1412,  1413,  1148,  1147,  1149,
     480,   296,  2653,   674,  1911,  1913,  1414,  1150,  1152,  1151,
    1169,  1205,  1174,  1175,  1921,  1176,   675,   676,  1932,   677,
    1177,  1219,  1178,  1179,  1180,  1939,  1196,  1199,  1263,  1215,
    1637,   456,  1222,  1223,  1227,  1229,  1230,  2549,  1242,  1946,
    2551,   397,  1243,  2552,  1948,  2553,  1264,  1265,  1950,  1268,
    1953,  1954,  1269,  1956,  1958,  1959,  1270,  1962,   726,   678,
    1965,  1966,  1967,  1968,  1969,  1970,  1971,  1972,  1975,  1977,
    1978,  1316,  1322,  1980,  1981,  1982,  1983,  1324,  1334,  1338,
    1328,  1339,  1342,  1989,  1990,  1343,  1677,  1344,  1993,  1994,
    1995,  1352,  1353,  1997,  1998,  2617,  1354,  1416,  1355,  1357,
    1358,  1694,  1359,  2625,  1360,  2000,  2001,  1361,  2002,  2003,
    1367,  1368,  1419,  1370,   727,  1371,  2637,   728,  1377,  1379,
    1380,  2642,  1382,   907,   908,  1395,  1396,  1446,  1397,  1398,
     460,   461,   462,   463,   464,   465,   466,  1401,  1466,   467,
     468,   469,   470,  1402,  1403,  1420,  1441,  1447,  1469,  1470,
    1471,  1472,  1486,   729,  1489,  1491,  2023,  1490,  1035,  1496,
    2024,  2025,  1497,  1498,  1499,  2027,  1505,  1507,  1508,  1571,
    2029,  2032,  1036,  2034,  2035,  2036,  1544,  2037,  2038,   909,
    2040,  1037,  1556,  2043,  2044,   910,  1562,  1563,   730,  1574,
    1575,  1038,  2047,  1588,  1593,   222,  1594,  1599,  1602,  2051,
    1600,  1601,  1611,  1612,  1613,  2056,  2057,  1614,  1615,  1616,
    1674,  1632,  1633,  2059,  1645,  1646,  1634,  1652,  1657,  2060,
     223,  1639,  1039,  1658,  1659,  1666,  1671,   644,   645,  1678,
    1675,  1684,  -450,   911,  1686,   731,  1695,  1708,   732,  1698,
    1862,  1040,  1730,  1731,  1736,  1713,  1719,  1722,  1749,   912,
    1755,  1756,  1761,   224,   689,  2088,  1780,  1783,  1841,  1794,
     225,   913,   733,  1796,  1798,   734,  1842,   914,   915,  1843,
     226,   227,  1844,   916,  1848,  1849,   735,   228,  1851,  1852,
    1853,  1856,  2102,  2103,  1859,  1877,  1041,  2105,  1881,  1887,
    2246,  1888,  1893,  2108,  1898,   749,   752,   755,  1899,  1918,
     229,  1900,  1920,  1902,  1903,  2250,  2251,  1904,  1909,  2253,
    1930,  1951,  1937,  1949,  1986,  2257,   230,  2259,  1896,  1897,
    1943,  1999,  1042,  1955,   917,  1905,  1963,  1945,  2004,  1906,
    2005,   231,  2006,  1964,  2008,  2009,  2010,  2011,   232,  2013,
    1979,  2012,  2015,   918,  2014,  2016,  1043,   919,  2017,   920,
    2018,  2019, -1251,  2020,  2021,  2022,  2042,  2041,   233,  2039,
    2045,  1192,  2058,  2308,   163,  2061,  2790,  2063,  2064,  2065,
    2066,  2097,   921,   922,  2098,  2099,  2100,  2104,  2107,   164,
     923,   165,  2106,  2110,  2111,  2112,  1044,  2114,  1045,  2115,
    2522,  2116,  2119,  2127,   234,  2121,  2122,  2123,  2128,   924,
    2209,  2129,  2210,  2157,  2212,  2321,  1414,  2158,  2159,  2160,
    2164,   166,  2165,  2168,  2167,  2169,  2170,  2171,  2175,   167,
    2176,  2186,  1414,  2225,  2226,  2227,  2228,  2229,  2230,  2231,
    2232,  2233,  2178,  2179,  2180,  2181,  2182,  2187,  2324,  2189,
    2190,  2191,  2192,   235,  2196,  2197,  2200,  2239,  2198,  2241,
    2201,  1414,  2203,  2204,   236,   925,  2248,   290,  2206,  2031,
    2213,  2215,  2219,  2223,  2234,  2235,   829,  2236,  2249,  2237,
    2238,   810,  2242,  2295,  2300,  2255,   168,  2301,  2304,  2310,
    2740,  2325,  2326,   237,  2327,  2330,  2260,  2261,  2262,  2263,
    2264,  2265,  2266,  2267,  2268,  2269,  2338,  2341,  2282,  2283,
    2284,  2285,  2286,  2287,  2288,  2289,  2290,  2291,  2292,  2293,
    2342,  2296,  2343,  2297,  2298,  2299,  2344,  2370,  2371,  2372,
    2373,  2375,  2499,  2377,  2073,  2379,   169,  2382,  2390,  2309,
    2384,  2385,  2386,  2729,  2079,  2391,  2663,  2392,  1090,  2084,
     444,  2393,   170,   171,  2394,  2395,  1091,  2399,  2400,   172,
    2401,   173,  1092,  2402,  2403,  2404,  2408,  2409,  2417,  1414,
    2316,  2410,  2420,  2317,  2428,  2318,  2431,  2320,  2434,  2435,
    2322,  2437,  2323,  1093,  2440,  2441,   174,  2442,  2445,  2328,
    2329,   949,  2451,  2455,  2472,  2529,  2333,  2500,  2334,  2501,
    2502,  2503,  2337,  2530,  2540,  2339,  1094,  2504,  2505,  2537,
    2538,  2543,  2507,  2544,  1095,  2545,  2554,  2729,  2546,  2548,
     510,  2555,   517,   520,  2557,   525,   529,  2473,  2474,  2475,
    2558,  2559,  2479,  2568,  2481,  2482,  2572,  2579,  2486,  2585,
    2488,  2589,  2592,  2599,  2607,  1089,  2619, -1119,  2630,  2631,
    1112,  1096,   175,   591,  2378,  2632,  2633,  2634,  2635,  1097,
    2650,  2657,  2659,  2661,  2662,  2734,  2668,  2673,  2702,  2708,
     606,   611,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
    1098,  2533,  2711,  2712,  2713,  2718,  2735,  2443,  2732,  2733,
    2743,  1099,  2753,  2761,  2217,  2764,  2767,  2221,  2274,  2776,
    2777,  2778,   691,  2786,  2774,  2789,  2815,  1100,  2799,  2800,
    2807,  2819,  2820,  2822,  2826,  2828,  2676,  2830,  2831,  2506,
     711,  2726,  2775,  2771,  1153,     0,  2270,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2271,  2449,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2456,  2457,  2458,  2459,  2460,  2461,  2462,  2463,  2464,
    2465,  2466,  1090,  2272,     0,     0,     0,  2470,     0,     0,
    1091,     0,     0,     0,  2476,     0,  1092,  2480,     0,  1228,
    2780,  2782,     0,  2487,     0,     0,  2489,  2490,  2491,  2492,
    2493,  2494,  1414,  2496,  2497,  2498,     0,  1093,     0,     0,
       0,  2273,     0,  1365,     0,     0,     0,     0,  1414,  2509,
    2510,  2511,  2512,  1414,  2514,  2515,  2516,  2517,  2518,  2519,
    1094,  2521,     0,  1414,  2525,  2526,     0,     0,  1095,     0,
       0,     0,     0,     0,     0,  2610,     0,   825,     0,     0,
       0,     0,  2532,  2613,     0,     0,  2534,     0,   832,     0,
    2536,     0,     0,     0,  2539,     0,     0,   840,     0,     0,
       0,     0,     0,     0,     0,  1096,     0,     0,     0,     0,
       0,     0,     0,  1097,     0,  2340,     0,   695,     0,     0,
       0,     0,  2648,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2560,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1098,     0,     0,     0,     0,     0,
    2376,     0,     0,     0,     0,  1099,   876,     0,     0,   878,
     879,     0,     0,     0,     0,   782,     0,     0,     0,     0,
       0,  1100,   883,     0,     0,     0,     0,   886,     0,     0,
       0,  2274,     0,  2275,     0,     0,   898,   900,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2601,     0,     0,
       0,  2603,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2604,  2605,     0,     0,     0,     0,     0,  2609,     0,
       0,     0,     0,     0,  1506,  2612,     0,  2276,     0,     0,
       0,     0,     0,  1414,     0,  2618,     0,     0,  2622,  2623,
       0,  1414,   945,   946,   947,  2447,     0,     0,     0,     0,
       0,     0,     0,     0,  1414,     0,     0,  2640,  2641,  1414,
    2643,  2644,  2645,  2646,  2647,     0,     0,  2649,     0,     0,
       0,  2652,     0,     0,  2468,     0,     0,     0,  1552,     0,
       0,     0,  2660,     0,  2478,     0,     0,  2664,  1559,     0,
    2485,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1088,     0,     0,     0,     0,  2677,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   874,     0,     0,
       0,     0,     0,     0,   880,     0,     0,   881,     0,     0,
       0,     0,   882,     0,     0,     0,   884,     0,     0,     0,
       0,  2688,     0,     0,     0,     0,     0,  2693,     0,  2695,
       0,     0,     0,     0,     0,  2699,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1414,  2706,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1414,  2717,     0,  2748,
       0,  2721,     0,     0,     0,     0,     0,     0,   943,     0,
       0,     0,     0,     0,     0,     0,  1653,  1654,     0,     0,
    2739,  1774,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   109,     0,  1784,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   110,     0,     0,  2751,
       0,  1845,  1846,     0,     0,  2756,     0,  2758,     0,     0,
       0,     0,     0,     0,  2762,     0,     0,   111,     0,  2765,
    1232,     0,     0,     0,  2768,     0,     0,     0,     0,     0,
       0,     0,  1237,   112,     0,     0,     0,     0,     0,     0,
    2597,     0,     0,     0,     0,  2779,  2781,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1126,     0,
       0,     0,     0,     0,  1414,  1132,     0,  1414,  2792,  1247,
    1248,  2793,     0,  1414,  2795,     0,     0,     0,   113,     0,
       0,     0,     0,     0,     0,  2801,  2802,  2803,  2804,     0,
       0,     0,     0,  1267,     0,     0,   114,     0,  2814,     0,
       0,  2817,     0,     0,     0,     0,     0,     0,  2821,     0,
    2823,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1348,     0,     0,     0,     0,     0,     0,
       0,     0,  1414,   115,  1414,     0,     0,     0,     0,     0,
       0,     0,  1337,     0,     0,     0,     0,     0,  1860,     0,
       0,     0,     0,     0,  1865,  1399,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     116,     0,     0,    67,    68,     0,  1878,     0,   117,  1880,
       0,     0,     0,  1884,   118,   119,     0,     0,     0,   110,
     120,     0,  1231,     0,  2691,   121,     0,     0,     0,  1233,
       0,     0,  2697,     0,  1910,     0,     0,     0,     0,   285,
    1916,     0,     0,     0,     0,     0,     0,  1483,  1931,     0,
       0,     0,  1935,     0,     0,     0,   112,     0,     0,     0,
    1940,  1941,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1947,     0,     0,     0,  1250,     0,     0,     0,     0,
    1254,     0,     0,  1257,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1266,     0,     0,   122,  1543,
       0,   113,     0,     0,     0,     0,     0,     0,     0,  1549,
       0,     0,     0,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,     0,     0,     0,     0,     0,   152,     0,     0,
       0,   153,   154,     0,     0,     0,   115,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2788,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   286,     0,  1404,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2809,  1628,   120,  2812,     0,     0,     0,   121,     0,
       0,     0,     0,  2118,     0,     0,     0,     0,   287,  1636,
       0,  2124,  2125,     0,     0,     0,     0,     0,     0,     0,
       0,   344,     0,     0,     0,     0,  2161,  2162,   345,   977,
       0,     0,     0,     0,   978,     0,     0,  2172,  2173,     0,
       0,     0,  1660,     0,     0,     0,     0,     0,  2183,  2184,
       0,     0,     0,  1667,     0,     0,     0,     0,  2193,  2194,
       0,     0,     0,     0,  2199,     0,     0,     0,   288,     0,
       0,     0,     0,     0,  2202,     0,     0,     0,     0,     0,
    1693,     0,     0,     0,     0,  1701,     0,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,     0,     0,  1758,  1759,  1760,
       0,     0,     0,     0,     0,     0,     0,  1762,  1763,  1764,
       0,     0,     0,     0,  1775,  1776,  1777,     0,     0,  1778,
    1779,     0,  1781,  1782,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1631,     0,  1854,  1855,     0,     0,  1857,  1858,     0,     0,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,     0,  1655,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1861,
       0,     0,     0,     0,  1665,     0,     0,  2218,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   346,     0,   347,     0,     0,     0,     0,  1883,
       0,     0,     0,     0,     0,     0,    67,    68,     0,     0,
       0,     0,     0,  2244,     0,     0,     0,     0,     0,     0,
       0,     0,   110,     0,     0,     0,     0,     0,  1917,     0,
       0,  1919,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1936,  1938,     0,     0,     0,     0,     0,     0,  1942,
       0,     0,     0,     0,     0,     0,  1944,     0,     0,   112,
       0,     0,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
       0,     0,  2381,     0,     0,     0,  1984,     0,     0,  1987,
    1988,     0,  2383,     0,   113,     0,  2387,  2388,     0,  1996,
       0,     0,     0,     0,     0,  2396,  2397,     0,     0,     0,
       0,     0,     0,     0,  2405,  2406,     0,     0,     0,     0,
    2411,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2421,  2422,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2432,  2433,     0,     0,     0,     0,     0,     0,   115,
       0,     0,  2436,     0,     0,     0,     0,     0,     0,     0,
       0,  2438,     0,  2439,     0,     0,     0,     0,     0,     0,
       0,  2026,     0,     0,     0,     0,     0,     0,  2030,     0,
       0,    67,    68,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2046,   110,     0,     0,
    1933,     0,     0,     0,     0,     0,   120,     0,     0,     0,
       0,   121,  2055,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2062,     0,     0,     0,     0,  2067,     0,     0,  2069,
       0,  2070,  2071,  2072,  2074,     0,     0,  2076,     0,     0,
    2077,     0,     0,  2078,  2080,     0,  2081,  2082,  2083,  2085,
    1985,  2086,  2087,     0,     0,     0,  1991,  2089,  2090,  2091,
       0,  2092,  2093,     0,     0,     0,  2109,  2094,  2095,   113,
       0,     0,  2096,     0,     0,     0,     0,  2101,     0,  2117,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2120,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,     0,     0,
       0,     0,     0,     0,   115,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2562,     0,  2028,     0,     0,
       0,     0,     0,  2033,     0,  2571,     0,     0,     0,     0,
       0,     0,     0,     0,  2573,     0,     0,     0,     0,     0,
       0,  2205,     0,  2582,     0,     0,     0,  2048,     0,     0,
    2584,     0,     0,     0,  2054,     0,     0,     0,     0,     0,
    2528,  2588,     0,     0,     0,     0,   121,  2591,     0,     0,
    2593,     0,     0,  2594,     0,     0,     0,  2208,     0,     0,
    2068,  2211,     0,     0,     0,     0,   528,     0,  2075,     0,
       0,     0,     0,  2216,     0,     0,  2220,     0,     0,     0,
       0,   110,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2240,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   112,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   113,     0,     0,     0,  2294,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2678,     0,     0,     0,  2680,     0,     0,     0,     0,
       0,     0,  2681,     0,     0,     0,     0,     0,  2684,     0,
       0,     0,  2686,     0,     0,  2687,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   115,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2207,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2332,     0,     0,  2636,     0,     0,     0,     0,     0,
    2222,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2654,     0,     0,     0,  2658,     0,
       0,     0,     0,     0,     0,   120,     0,     0,     0,     0,
     121,     0,  2362,  2380,  2245,     0,  2247,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   899,     0,  2252,     0,  2254,     0,     0,     0,  2256,
       0,  2258,     0,     0,     0,     0,   110,     0,     0,     0,
       0,     0,     0,  2412,  2413,  2414,  2415,  2416,  1373,  2418,
    2419,     0,     0,     0,  2423,  2424,  2425,  2426,  2427,     0,
    2429,  2430,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2302,     0,     0,  2306,  2307,     0,     0,     0,     0,
       0,     0,     0,  2311,     0,     0,     0,     0,     0,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,  2319,   113,     0,
       0,     0,     0,     0,  2446,     0,     0,  2450,     0,     0,
       0,     0,     0,  2331,     0,     0,     0,  2454,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2467,  2345,     0,  2471,     0,     0,  2349,
       0,     0,     0,  2477,     0,  2354,     0,     0,  2483,  2484,
    2358,     0,     0,   115,  2361,     0,     0,  2364,     0,     0,
    2367,     0,  2369,     0,     0,   607,   110,     0,  2374,     0,
       0,     0,     0,     0,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,  1374,     0,     0,   608,     0,     0,     0,     0,
       0,  2798,     0,     0,     0,   121,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2547,     0,     0,
       0,     0,     0,     0,     0,     0,  2561,     0,   113,  2563,
    2564,  2565,  2566,  2567,     0,  2569,  2570,     0,     0,     0,
       0,     0,   609,     0,     0,     0,  2556,  2574,  2575,  2576,
    2577,  2578,     0,  2580,  2581,     0,  2583,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2586,  2587,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2590,     0,     0,
       0,     0,     0,   115,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,     0,     0,     0,     0,     0,     0,     0,  2596,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2520,     0,     0,     0,   121,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2616,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2628,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   610,     0,     0,     0,     0,  2679,     0,     0,     0,
       0,     0,  2672,     0,     0,     0,     0,  2682,     0,  2683,
       0,  2675,     0,  2685,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2690,  2692,     0,  2694,     0,     0,     0,
       0,  2696,  2698,     0,     0,     0,  2700,     0,     1,     0,
    2595,     0,     0,     0,     0,     0,     0,  2600,     0,     0,
       0,  2602,     0,     0,     0,     0,     0,     0,     0,     2,
       0,     0,     3,     0,     4,     0,     0,     0,  2608,     0,
    2722,     0,     0,  2744,     0,     0,  2745,     5,     0,  2746,
       0,  2747,     6,     7,     0,     8,     9,    10,     0,     0,
       0,     0,  2741,     0,     0,    11,     0,  2742,     0,     0,
       0,     0,    12,     0,    13,    14,     0,     0,     0,     0,
       0,     0,     0,    15,    16,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   110,     0,     0,     0,     0,     0,
       0,     0,     0,    17,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    18,     0,     0,     0,    19,     0,
       0,    20,     0,     0,     0,     0,    21,    22,     0,     0,
       0,     0,     0,    23,     0,     0,     0,  2787,     0,    24,
     501,   502,     0,     0,   503,     0,     0,     0,     0,     0,
       0,     0,    25,     0,  2796,    26,    27,    28,     0,     0,
      29,    30,     0,     0,     0,     0,   504,     0,     0,     0,
    2808,     0,     0,  2811,    31,     0,   113,     0,     0,     0,
       0,     0,     0,     0,     0,  2710,     0,     0,     0,    32,
      33,    34,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    35,     0,     0,     0,     0,     0,     0,
       0,    36,     0,     0,    37,     0,     0,    38,     0,    39,
       0,    40,     0,     0,     0,     0,    41,     0,     0,     0,
       0,   115,     0,     0,     0,     0,     0,     0,     0,    42,
       0,     0,     0,   505,     0,    43,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     506,    44,    45,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    46,     0,    47,     0,     0,     0,  2770,
     507,    48,     0,     0,    49,    50,     0,     0,     0,     0,
       0,     0,     0,   121,     0,     0,     0,     0,  2783,  2784,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    51,     0,     0,     0,     0,
       0,    52,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   508,     0,  2810,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2824,     0,     0,  2825,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
       0,   509,   999,  1000,  1001,     0,     0,     0,     0,     0,
       0,     0,     0,  1275,  1276,  1277,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1002,  1003,     0,     0,  1004,     0,     0,  1005,     0,     0,
       0,  1278,  1279,     0,  1006,  1280,   110,     0,  1007,     0,
       0,     0,  1281,     0,     0,  1282,  1008,  1009,     0,  1283,
       0,     0,     0,     0,  1010,  1011,     0,  1284,  1285,     0,
       0,     0,     0,     0,     0,  1286,     0,     0,     0,     0,
       0,  1012,     0,   112,     0,     0,     0,  1013,     0,     0,
       0,  1014,  1015,   110,     0,  1016,     0,     0,     0,     0,
       0,     0,  1287,  1288,     0,     0,  1289,     0,     0,     0,
       0,     0,  1017,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1290,     0,     0,     0,     0,   113,     0,
     112,  1018,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1291,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1019,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1292,     0,     0,   110,     0,     0,
       0,     0,     0,  1293,     0,   113,  1020,     0,     0,     0,
       0,     0,     0,   115,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1021,     0,  1022,   515,     0,     0,
       0,  1023,  1024,     0,     0,  1294,     0,  1295,     0,     0,
       0,     0,  1296,  1297,     0,  1025,  1026,     0,   110,     0,
     115,     0,     0,     0,     0,  1027,  1028,  1298,     0,     0,
     120,     0,     0,     0,     0,   121,     0,  1299,     0,   113,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1029,     0,  1030,  1336,     0,     0,     0,     0,
       0,     0,     0,  1300,     0,  1301,  1031,     0,  1032,     0,
       0,     0,     0,     0,  1033,  1302,   110,   120,     0,     0,
       0,     0,   121,     0,     0,  1303,     0,     0,     0,     0,
       0,     0,   519,     0,   115,     0,     0,     0,     0,     0,
     113,     0,     0,     0,     0,     0,     0,     0,  1034,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1304,
       0,     0,     0,     0,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,     0,     0,     0,   115,   121,     0,   113,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   115,     0,     0,     0,   121,     0,     0,
       0,     0,   516,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,     0,     0,   121,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   179,     0,     0,   180,     0,   181,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   182,     0,   183,   184,
     185,     0,     0,     0,     0,     0,     0,     0,   186,     0,
     187,     0,     0,     0,     0,   188,     0,   189,   190,   191,
       0,     0,     0,     0,   192,     0,   193,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   194,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   195,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   196,   197,     0,     0,   198,     0,     0,     0,
     199,     0,   200,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   201,   202,     0,     0,   203,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   204,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   205,   206,     0,     0,     0,     0,     0,     0,
     207,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   208,     0,   209,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   210,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   211,   212,     0,     0,     0,     0,
       0,     0,     0,   213,     0,     0,     0,     0,     0,     0,
     214,     0,     0,     0,     0,     0,   215,     0,   216,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   217
};

static const yytype_int16 yycheck[] =
{
       4,    50,  1459,   492,     5,  1146,   669,  1148,    12,  1662,
       5,  1664,     4,    20,   664,   665,   880,   881,   882,     4,
       0,   971,    32,     5,   974,     3,     4,     4,     5,    33,
       5,    46,     5,  1174,  1175,  1176,    40,     3,     4,    14,
      15,   991,     3,     4,     5,    49,     4,     4,    52,     4,
      57,     5,     3,     4,    58,     3,     4,    66,    62,     3,
       4,    65,    56,    97,   105,    69,    70,    32,  1000,    73,
      17,    17,    76,    77,    17,    83,    80,     5,    17,   943,
      84,    21,   121,     5,    37,    89,    61,     3,     4,    66,
      13,    99,     6,     3,     4,     6,   121,   167,   102,   121,
     104,   105,   106,   107,    99,   280,    32,  2055,    44,    66,
     105,    88,     4,     3,     4,     3,     4,     3,     4,   123,
     103,  2069,  2070,  2071,     4,     5,  2074,   132,  2076,  2077,
       3,     4,  2080,  2081,  2082,     3,     4,  2085,  2086,   192,
     164,  2089,   119,  2091,  2092,     5,  2094,  2728,    36,    87,
      36,    87,   222,   194,   158,     3,     4,    66,    64,    98,
      66,   138,   119,    27,   239,    27,   174,   137,     3,     4,
     156,    31,   181,   227,    66,     3,     4,    88,   182,   210,
     165,   192,   257,   187,    48,     3,     4,    51,    56,    21,
      33,  2772,     4,  2556,    12,     3,     4,   183,    62,   252,
     239,    21,   243,   186,    21,   175,   120,   215,   278,   120,
     235,    27,   158,   235,   189,   190,   223,    14,   156,   213,
     186,    85,   256,    21,   201,     4,     4,   119,    36,   236,
     207,   208,    40,   123,   245,   186,   260,   242,   102,   119,
     248,   192,   246,   131,   201,   131,   295,     4,   201,   193,
     207,   208,   267,    21,    66,   191,    61,   920,   262,   263,
    2208,   243,   209,  2211,    61,   188,   209,   277,  2216,   300,
      14,    15,  2220,   277,    20,   181,   444,   228,   287,    21,
      61,   285,   286,   258,   288,   289,   241,   291,   123,   457,
     282,   298,  2240,   268,   269,   235,   224,   301,   273,   300,
     280,   252,   297,   111,   166,   309,   310,   119,   281,   201,
     288,   265,   277,   186,   291,   207,   208,    61,    33,   241,
     297,   201,   307,   131,   282,   300,     5,   207,   208,   333,
     334,   335,   298,   337,   291,    14,    15,   341,   342,   300,
     288,   119,   289,     4,   288,   213,   289,   298,   352,   353,
     166,   277,   356,   357,   358,   359,   360,   361,   362,   363,
     364,  1024,   119,   340,   368,   133,   343,   344,   345,   373,
     374,     4,   288,   235,   222,   341,   342,   381,   288,  1042,
     384,   287,    61,   340,  2332,   193,  1250,   344,   345,   201,
     341,   342,   189,  1257,   222,   207,   208,   401,   402,   291,
     288,   116,   288,   235,   408,   409,   410,    40,   412,    14,
      15,   291,    40,   192,  2362,   235,   278,   297,   235,   235,
    2783,  2784,   426,   201,  1074,   298,   430,   307,    27,   207,
     208,   435,   436,   437,   438,   439,   440,   235,   442,     4,
    1390,   445,   446,  1393,   201,   189,   190,  1588,   340,    27,
     207,   208,   344,   345,   458,  1105,    61,     5,   143,    40,
     340,   258,   278,   124,   344,   345,   245,   235,   341,   342,
      34,   268,   187,   278,   189,    16,   191,   192,   111,   291,
     288,    27,   346,   111,   199,   231,   149,     5,  1420,    16,
      61,    28,    50,   235,   262,     5,   301,   278,  2446,   214,
      61,     3,     4,   300,   282,   149,     3,     4,   512,   513,
     189,   190,    66,   291,   258,  1447,    12,    87,    22,  2467,
     301,    88,   105,    27,   268,   269,   530,   695,   340,  2477,
     111,    63,   344,   345,   291,  2483,  2484,    66,  1470,     5,
     589,    99,   203,   107,    48,    49,    56,    51,    52,   120,
     108,    17,   215,   557,     4,    65,   300,    53,    62,   120,
     193,   121,   340,     3,     4,   193,   344,   345,   167,   117,
      74,    75,   104,   288,   227,    71,    78,   135,    82,   258,
     629,    85,   586,   340,   189,   190,   156,   344,   345,   268,
     269,   254,     3,     4,   273,   156,     0,   121,   102,   648,
      40,   130,    61,     4,   100,   109,   110,     4,   241,   113,
     254,   194,   193,   150,    40,     5,   620,   257,   222,    59,
      40,   300,   118,   222,   264,   154,   122,   192,     3,     4,
     293,   259,     4,    30,  1297,   172,     5,   133,   202,   176,
      66,    27,   646,   191,   222,  1308,   264,    61,  2596,    14,
      15,    14,    15,   258,   195,    56,   121,     3,     4,   663,
     243,   120,   666,   268,   269,    40,     4,   171,  2616,   171,
     241,   111,   840,    99,   278,   235,   222,  2330,   259,   105,
     684,   685,   686,   687,    56,   111,   690,     5,   692,   226,
     694,   111,   696,   241,   168,   300,    61,   268,    61,     5,
     232,   230,   176,   213,   130,    83,   120,   268,    14,    15,
      61,   235,    61,    63,   246,   247,   884,   265,   137,     4,
     224,    99,   254,   149,   773,   229,   263,    12,   443,     3,
       4,    63,   290,     5,   271,   272,   111,    31,   164,     5,
     244,     5,  2690,   245,  2692,   193,  2694,     4,  2696,   253,
    2698,   280,  2700,   193,   104,    61,   175,   117,   762,   763,
     764,   765,   766,   160,   768,   769,   770,   771,   194,   120,
     235,   120,   104,   193,   124,    14,    15,   281,   282,   783,
     784,   167,    66,   787,   788,   789,   790,   791,   792,   793,
     794,   795,   288,    61,   205,   799,   800,   118,   302,    30,
    2748,  1665,    61,    22,   230,   280,   338,   339,    61,   268,
      14,    15,   213,   210,   818,   819,   820,   243,   193,  2497,
    1770,   536,    61,   168,   189,   190,   189,   190,   254,    48,
      49,   835,   836,   837,    26,   839,   222,   841,   235,   843,
    1790,   213,   346,    62,   284,  2523,    33,   222,  2796,   123,
       3,     4,   120,   568,   268,  1805,   282,    61,  1808,   205,
     864,   120,   866,  2004,  2005,  2006,  1816,   120,   294,  1819,
     296,   297,    61,   877,     3,     4,    89,  1827,   257,   121,
    1830,   885,   232,   189,   190,   264,   890,  1837,    61,     5,
     109,   110,     5,   258,    61,   258,   246,   247,    14,    15,
     232,   905,   906,   268,   269,   268,   269,    30,    16,   913,
     336,   915,   916,   228,   246,   247,    26,   268,   922,   268,
     112,     4,     5,   927,     3,     4,   167,    28,   977,   160,
      59,   120,   124,    12,   938,   300,    70,   300,  1870,     3,
       4,    66,  2620,  2621,   279,    61,  2624,   120,  2626,   953,
     189,   190,   258,   120,  1886,    72,    45,    31,  1126,    89,
    2638,  2639,   268,   269,     5,  2643,  2644,   273,     4,  2647,
      59,    94,     4,    40,  2652,  2653,     3,     4,     4,   210,
      37,   222,     5,  1915,   137,   189,   190,     5,   338,   339,
      47,     5,    81,   235,   300,    59,  1000,    78,    37,     5,
     268,     5,   112,   222,   235,   224,   338,   339,    47,   268,
       4,   100,   204,    40,   124,   268,  1020,    74,     5,   258,
       4,   202,   175,     4,  2702,   217,     4,  2705,   117,   268,
     269,   120,  2710,     5,   168,    74,     4,  1041,  2716,   162,
      93,     5,  2499,  2721,   111,   286,  1050,    97,   158,   150,
      14,    15,    14,    15,   258,   120,   145,   146,   111,     5,
    1064,   300,  1066,   265,   268,   269,     4,  1071,  1072,  1073,
       4,   172,     4,   189,   190,   176,     4,  1081,     4,   268,
    1084,    22,  1086,   302,   111,  2622,  1254,     5,    24,    25,
     171,  2023,   149,     4,   204,   268,   300,    61,  1102,    61,
    1104,   268,     4,  2640,  1108,  1109,   240,   217,    49,   198,
     149,    52,    54,  2791,    55,   249,  2794,   206,  1122,  1123,
       4,  1985,   245,  1127,  1128,   226,   193,   250,   185,  1133,
       4,  1135,     4,   186,  1138,    82,  1140,  2815,     3,     4,
    2818,    82,   258,  1192,     3,     4,   185,     5,    90,   864,
       3,     4,   268,   269,  2832,  2833,    11,   273,   339,     3,
       4,    97,   263,   344,   245,   346,   193,     4,     5,   110,
     271,   272,   113,  1177,    88,   264,   265,  1181,  1182,  1183,
    1184,    40,  1186,  1187,   300,  2135,  1190,     4,     5,   228,
    2054,     5,   249,    22,  2144,     5,    40,   139,     4,     5,
       9,  1205,   116,  2153,   151,     0,    59,    82,     3,     4,
     249,  2075,  1216,   186,  1218,  1219,  1220,  1221,   264,   192,
      49,  1225,  1226,    52,  2761,   189,   190,   189,   190,  1233,
    2767,     3,     4,    82,     3,     4,  1240,    42,    43,   168,
    1244,  1245,  1246,    60,   301,    17,   285,   336,     4,    66,
      35,  1255,   111,    82,  1258,   228,    73,     4,    75,     3,
       4,     5,   301,    80,   176,  1269,    83,   111,  1272,   168,
     184,     4,    89,   220,   221,   195,   151,     4,     5,   252,
     195,   110,    99,   224,   113,   199,     5,   234,   105,  2826,
       5,  2828,     4,     5,   258,     4,   258,   114,   195,   241,
     432,   433,   151,    66,   268,   269,   268,   269,  1023,   273,
     187,  1315,   253,   130,  1318,    66,  1484,  1321,  1322,   187,
    1324,   106,  1326,    66,   222,   298,     5,   274,  1332,   223,
    1334,     5,   149,     4,  2266,     4,   300,  1341,   300,   280,
      53,   255,   127,   128,   129,   220,   221,   164,     4,   134,
    2282,     3,     4,     5,   195,  2287,   173,   174,    71,   234,
       5,    87,   147,    87,   169,   170,     5,     4,   153,   342,
    1085,   220,   221,     3,     4,    88,     4,   194,   163,     9,
      10,    11,  1550,   297,     5,   234,     5,   100,     3,     4,
       5,     4,   197,   307,     5,   224,     3,     4,   215,   274,
       7,     8,     3,     4,     5,   118,     7,     8,    99,   122,
       5,   228,  1416,   230,  1418,  1419,  1420,     3,     4,     5,
     133,     7,     8,    17,   253,   274,   243,  2491,     4,    17,
    2494,   248,  2496,    17,     4,     4,  1440,   254,  2302,     4,
    1444,     5,    15,  1447,   261,  2509,  2510,  2311,    97,    22,
       5,     3,     4,     5,    27,     7,     8,     4,    87,     5,
     173,    34,  2526,   280,  1468,  1469,  1470,     5,     5,    87,
       4,    12,     5,     5,  1478,     4,   293,   294,  1482,   296,
       4,    12,     5,     5,     5,  1489,     4,     4,   165,     5,
    1205,   276,     4,     4,     4,     4,     4,  2361,     5,  1503,
    2364,    74,     5,  2367,  1508,  2369,     5,     4,  1512,     4,
    1514,  1515,     5,  1517,  1518,  1519,     4,  1521,    61,   336,
    1524,  1525,  1526,  1527,  1528,  1529,  1530,  1531,  1532,  1533,
    1534,    20,   253,  1537,  1538,  1539,  1540,   253,     5,     4,
     282,     5,     5,  1547,  1548,     5,  1261,     5,  1552,  1553,
    1554,     4,     4,  1557,  1558,  2487,     5,   235,     5,   266,
     266,  1276,     5,  2495,     5,  1569,  1570,     5,  1572,  1573,
       4,     4,   235,     5,   117,     5,  2508,   120,     5,     5,
       5,  2513,     5,     4,     5,     4,     4,   137,     5,     5,
     163,   164,   165,   166,   167,   168,   169,     4,    40,   172,
     173,   174,   175,     5,     5,   105,     5,   105,   235,   105,
       5,   209,    40,   156,   239,     5,  1620,   209,    66,     4,
    1624,  1625,     5,     5,   209,  1629,   209,     4,     4,   111,
    1634,  1635,    80,  1637,  1638,  1639,     5,  1641,  1642,    60,
    1644,    89,     5,  1647,  1648,    66,     5,     5,   191,   111,
       4,    99,  1656,     5,     5,    19,     5,     4,     4,  1663,
       5,     5,     5,     5,     4,  1669,  1670,     5,     5,     4,
      38,     5,     5,  1677,     6,     4,    12,     5,     4,  1683,
      44,    12,   130,     4,     4,     4,     4,   260,   261,     5,
      38,     4,     0,   114,     5,   238,   235,   137,   241,   235,
    1415,   149,     4,   243,   205,   235,   167,   121,   195,   130,
       4,     4,     4,    77,   287,  1719,     4,     4,   266,     5,
      84,   142,   265,     5,     5,   268,     5,   148,   149,     5,
      94,    95,     5,   154,     4,     4,   279,   101,     5,     4,
       4,     4,  1746,  1747,     5,     5,   194,  1751,     5,   235,
    1918,   235,   235,  1757,     4,   328,   329,   330,     4,  1474,
     124,     4,  1477,     4,     4,  1933,  1934,     4,     4,  1937,
       4,   222,  1487,     5,     5,  1943,   140,  1945,   304,   304,
    1495,     5,   230,   222,   205,   304,   222,  1502,     5,   304,
       5,   155,     4,   222,     5,     5,     4,     4,   162,     5,
     222,     4,     4,   224,     5,     4,   254,   228,     5,   230,
       5,     4,     0,     5,     5,     4,     6,     4,   182,     5,
       4,     6,     4,  1991,    29,     4,  2758,     5,     5,     5,
       5,     5,   253,   254,     5,     5,     5,     4,     4,    44,
     261,    46,     5,     5,     5,     5,   294,     4,   296,     4,
     300,     5,     4,     4,   218,     5,     5,     5,     4,   280,
    1864,     5,  1866,   266,  1868,  2033,  1870,     5,     5,     5,
       4,    76,     4,   266,     5,     5,     5,     5,     4,    84,
       4,     4,  1886,  1887,  1888,  1889,  1890,  1891,  1892,  1893,
    1894,  1895,     5,   266,     5,     5,     5,     4,    12,     5,
       5,     5,     5,   267,     4,     4,     4,  1911,     5,  1913,
       4,  1915,     4,     4,   278,   336,  1920,    33,     5,  1634,
       5,     5,     5,     5,     4,     4,   431,     5,  1932,     4,
       4,   388,     5,     5,     4,  1939,   141,     4,     4,     4,
    2664,     5,     5,   307,     4,     4,  1950,  1951,  1952,  1953,
    1954,  1955,  1956,  1957,  1958,  1959,     5,     5,  1962,  1963,
    1964,  1965,  1966,  1967,  1968,  1969,  1970,  1971,  1972,  1973,
       5,  1975,     5,  1977,  1978,  1979,     5,     5,     5,     5,
       5,     4,   347,     5,  1699,     4,   191,     4,     4,  1993,
       5,     5,     5,  2656,  1709,     4,     6,     5,    91,  1714,
     116,     5,   207,   208,     5,     5,    99,     4,     4,   214,
       5,   216,   105,     5,     5,     5,     4,     4,     4,  2023,
    2024,     5,     4,  2027,     4,  2029,     4,  2031,     4,     4,
    2034,     4,  2036,   126,     4,     4,   241,     4,     4,  2043,
    2044,   614,     4,     4,     4,     4,  2050,   347,  2052,   347,
     347,   347,  2056,     4,     4,  2059,   149,   347,   347,     5,
       5,     5,   347,     4,   157,     4,     4,  2730,     5,     5,
     186,     5,   188,   189,     5,   191,   192,  2245,  2246,  2247,
       5,     4,  2250,     4,  2252,  2253,     4,     4,  2256,     4,
    2258,     4,     4,     4,     4,   668,     4,   280,     5,     4,
     673,   194,   307,   219,  2108,     5,     5,     5,     4,   202,
       5,     5,     5,     5,     4,     6,     5,     5,     4,     4,
     236,   237,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     243,  2319,     5,     4,     4,     4,     4,  2206,     5,     5,
       4,   254,     4,     4,  1879,     5,     4,  1882,   280,     5,
       5,     4,   288,     4,   347,     4,     4,   270,     5,     5,
       5,     5,     5,     5,     4,     4,  2559,     5,     5,  2277,
     306,  2654,  2730,  2726,   729,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,  2212,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2225,  2226,  2227,  2228,  2229,  2230,  2231,  2232,  2233,
    2234,  2235,    91,    92,    -1,    -1,    -1,  2241,    -1,    -1,
      99,    -1,    -1,    -1,  2248,    -1,   105,  2251,    -1,   822,
    2739,  2740,    -1,  2257,    -1,    -1,  2260,  2261,  2262,  2263,
    2264,  2265,  2266,  2267,  2268,  2269,    -1,   126,    -1,    -1,
      -1,   130,    -1,   970,    -1,    -1,    -1,    -1,  2282,  2283,
    2284,  2285,  2286,  2287,  2288,  2289,  2290,  2291,  2292,  2293,
     149,  2295,    -1,  2297,  2298,  2299,    -1,    -1,   157,    -1,
      -1,    -1,    -1,    -1,    -1,  2473,    -1,   423,    -1,    -1,
      -1,    -1,  2316,  2481,    -1,    -1,  2320,    -1,   434,    -1,
    2324,    -1,    -1,    -1,  2328,    -1,    -1,   443,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   194,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   202,    -1,  2060,    -1,   290,    -1,    -1,
      -1,    -1,  2520,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2378,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   243,    -1,    -1,    -1,    -1,    -1,
    2105,    -1,    -1,    -1,    -1,   254,   512,    -1,    -1,   515,
     516,    -1,    -1,    -1,    -1,   348,    -1,    -1,    -1,    -1,
      -1,   270,   528,    -1,    -1,    -1,    -1,   533,    -1,    -1,
      -1,   280,    -1,   282,    -1,    -1,   542,   543,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2451,    -1,    -1,
      -1,  2455,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2465,  2466,    -1,    -1,    -1,    -1,    -1,  2472,    -1,
      -1,    -1,    -1,    -1,  1047,  2479,    -1,   336,    -1,    -1,
      -1,    -1,    -1,  2487,    -1,  2489,    -1,    -1,  2492,  2493,
      -1,  2495,   608,   609,   610,  2210,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2508,    -1,    -1,  2511,  2512,  2513,
    2514,  2515,  2516,  2517,  2518,    -1,    -1,  2521,    -1,    -1,
      -1,  2525,    -1,    -1,  2239,    -1,    -1,    -1,  1101,    -1,
      -1,    -1,  2536,    -1,  2249,    -1,    -1,  2541,  1111,    -1,
    2255,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   667,    -1,    -1,    -1,    -1,  2560,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   510,    -1,    -1,
      -1,    -1,    -1,    -1,   517,    -1,    -1,   520,    -1,    -1,
      -1,    -1,   525,    -1,    -1,    -1,   529,    -1,    -1,    -1,
      -1,  2595,    -1,    -1,    -1,    -1,    -1,  2601,    -1,  2603,
      -1,    -1,    -1,    -1,    -1,  2609,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2622,  2623,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2640,  2641,    -1,  2688,
      -1,  2645,    -1,    -1,    -1,    -1,    -1,    -1,   591,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1229,  1230,    -1,    -1,
    2664,  1358,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     4,    -1,  1370,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,  2693,
      -1,  1388,  1389,    -1,    -1,  2699,    -1,  2701,    -1,    -1,
      -1,    -1,    -1,    -1,  2708,    -1,    -1,    40,    -1,  2713,
     826,    -1,    -1,    -1,  2718,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   838,    56,    -1,    -1,    -1,    -1,    -1,    -1,
    2445,    -1,    -1,    -1,    -1,  2739,  2740,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   691,    -1,
      -1,    -1,    -1,    -1,  2758,   698,    -1,  2761,  2762,   875,
     876,  2765,    -1,  2767,  2768,    -1,    -1,    -1,   101,    -1,
      -1,    -1,    -1,    -1,    -1,  2779,  2780,  2781,  2782,    -1,
      -1,    -1,    -1,   899,    -1,    -1,   119,    -1,  2792,    -1,
      -1,  2795,    -1,    -1,    -1,    -1,    -1,    -1,  2802,    -1,
    2804,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   958,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2826,   156,  2828,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   948,    -1,    -1,    -1,    -1,    -1,  1411,    -1,
      -1,    -1,    -1,    -1,  1417,   990,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     193,    -1,    -1,     3,     4,    -1,  1439,    -1,   201,  1442,
      -1,    -1,    -1,  1446,   207,   208,    -1,    -1,    -1,    19,
     213,    -1,   825,    -1,  2599,   218,    -1,    -1,    -1,   832,
      -1,    -1,  2607,    -1,  1467,    -1,    -1,    -1,    -1,    39,
    1473,    -1,    -1,    -1,    -1,    -1,    -1,  1023,  1481,    -1,
      -1,    -1,  1485,    -1,    -1,    -1,    56,    -1,    -1,    -1,
    1493,  1494,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1504,    -1,    -1,    -1,   878,    -1,    -1,    -1,    -1,
     883,    -1,    -1,   886,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   898,    -1,    -1,   291,  1075,
      -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1085,
      -1,    -1,    -1,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,    -1,    -1,    -1,    -1,    -1,   340,    -1,    -1,
      -1,   344,   345,    -1,    -1,    -1,   156,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2753,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   193,    -1,   998,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2786,  1188,   213,  2789,    -1,    -1,    -1,   218,    -1,
      -1,    -1,    -1,  1780,    -1,    -1,    -1,    -1,   228,  1205,
      -1,  1788,  1789,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    16,    -1,    -1,    -1,    -1,  1803,  1804,    23,   156,
      -1,    -1,    -1,    -1,   161,    -1,    -1,  1814,  1815,    -1,
      -1,    -1,  1238,    -1,    -1,    -1,    -1,    -1,  1825,  1826,
      -1,    -1,    -1,  1249,    -1,    -1,    -1,    -1,  1835,  1836,
      -1,    -1,    -1,    -1,  1841,    -1,    -1,    -1,   288,    -1,
      -1,    -1,    -1,    -1,  1851,    -1,    -1,    -1,    -1,    -1,
    1276,    -1,    -1,    -1,    -1,  1281,    -1,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,    -1,    -1,  1342,  1343,  1344,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1352,  1353,  1354,
      -1,    -1,    -1,    -1,  1359,  1360,  1361,    -1,    -1,  1364,
    1365,    -1,  1367,  1368,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1193,    -1,  1397,  1398,    -1,    -1,  1401,  1402,    -1,    -1,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,    -1,  1232,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1415,
      -1,    -1,    -1,    -1,  1247,    -1,    -1,  1880,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   237,    -1,   239,    -1,    -1,    -1,    -1,  1445,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,    -1,    -1,
      -1,    -1,    -1,  1916,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,  1474,    -1,
      -1,  1477,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1487,  1488,    -1,    -1,    -1,    -1,    -1,    -1,  1495,
      -1,    -1,    -1,    -1,    -1,    -1,  1502,    -1,    -1,    56,
      -1,    -1,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
      -1,    -1,  2119,    -1,    -1,    -1,  1542,    -1,    -1,  1545,
    1546,    -1,  2129,    -1,   101,    -1,  2133,  2134,    -1,  1555,
      -1,    -1,    -1,    -1,    -1,  2142,  2143,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2151,  2152,    -1,    -1,    -1,    -1,
    2157,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2167,  2168,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2178,  2179,    -1,    -1,    -1,    -1,    -1,    -1,   156,
      -1,    -1,  2189,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2198,    -1,  2200,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1627,    -1,    -1,    -1,    -1,    -1,    -1,  1634,    -1,
      -1,     3,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1652,    19,    -1,    -1,
    1483,    -1,    -1,    -1,    -1,    -1,   213,    -1,    -1,    -1,
      -1,   218,  1668,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1687,    -1,    -1,    -1,    -1,  1692,    -1,    -1,  1695,
      -1,  1697,  1698,  1699,  1700,    -1,    -1,  1703,    -1,    -1,
    1706,    -1,    -1,  1709,  1710,    -1,  1712,  1713,  1714,  1715,
    1543,  1717,  1718,    -1,    -1,    -1,  1549,  1723,  1724,  1725,
      -1,  1727,  1728,    -1,    -1,    -1,  1761,  1733,  1734,   101,
      -1,    -1,  1738,    -1,    -1,    -1,    -1,  1743,    -1,  1774,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1784,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,    -1,    -1,
      -1,    -1,    -1,    -1,   156,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2382,    -1,  1630,    -1,    -1,
      -1,    -1,    -1,  1636,    -1,  2392,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2401,    -1,    -1,    -1,    -1,    -1,
      -1,  1856,    -1,  2410,    -1,    -1,    -1,  1660,    -1,    -1,
    2417,    -1,    -1,    -1,  1667,    -1,    -1,    -1,    -1,    -1,
    2303,  2428,    -1,    -1,    -1,    -1,   218,  2434,    -1,    -1,
    2437,    -1,    -1,  2440,    -1,    -1,    -1,  1863,    -1,    -1,
    1693,  1867,    -1,    -1,    -1,    -1,     4,    -1,  1701,    -1,
      -1,    -1,    -1,  1879,    -1,    -1,  1882,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1912,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   101,    -1,    -1,    -1,  1973,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2568,    -1,    -1,    -1,  2572,    -1,    -1,    -1,    -1,
      -1,    -1,  2579,    -1,    -1,    -1,    -1,    -1,  2585,    -1,
      -1,    -1,  2589,    -1,    -1,  2592,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   156,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1861,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2047,    -1,    -1,  2507,    -1,    -1,    -1,    -1,    -1,
    1883,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2527,    -1,    -1,    -1,  2531,    -1,
      -1,    -1,    -1,    -1,    -1,   213,    -1,    -1,    -1,    -1,
     218,    -1,  2088,  2118,  1917,    -1,  1919,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     4,    -1,  1936,    -1,  1938,    -1,    -1,    -1,  1942,
      -1,  1944,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,  2158,  2159,  2160,  2161,  2162,   161,  2164,
    2165,    -1,    -1,    -1,  2169,  2170,  2171,  2172,  2173,    -1,
    2175,  2176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1984,    -1,    -1,  1987,  1988,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1996,    -1,    -1,    -1,    -1,    -1,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,  2030,   101,    -1,
      -1,    -1,    -1,    -1,  2210,    -1,    -1,  2213,    -1,    -1,
      -1,    -1,    -1,  2046,    -1,    -1,    -1,  2223,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2239,  2067,    -1,  2242,    -1,    -1,  2072,
      -1,    -1,    -1,  2249,    -1,  2078,    -1,    -1,  2254,  2255,
    2083,    -1,    -1,   156,  2087,    -1,    -1,  2090,    -1,    -1,
    2093,    -1,  2095,    -1,    -1,    18,    19,    -1,  2101,    -1,
      -1,    -1,    -1,    -1,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,    -1,    -1,    58,    -1,    -1,    -1,    -1,
      -1,  2774,    -1,    -1,    -1,   218,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2343,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2381,    -1,   101,  2384,
    2385,  2386,  2387,  2388,    -1,  2390,  2391,    -1,    -1,    -1,
      -1,    -1,   115,    -1,    -1,    -1,  2372,  2402,  2403,  2404,
    2405,  2406,    -1,  2408,  2409,    -1,  2411,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2421,  2422,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2432,    -1,    -1,
      -1,    -1,    -1,   156,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2445,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2294,    -1,    -1,    -1,   218,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2486,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2498,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   284,    -1,    -1,    -1,    -1,  2571,    -1,    -1,    -1,
      -1,    -1,  2548,    -1,    -1,    -1,    -1,  2582,    -1,  2584,
      -1,  2557,    -1,  2588,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2599,  2600,    -1,  2602,    -1,    -1,    -1,
      -1,  2607,  2608,    -1,    -1,    -1,  2612,    -1,    20,    -1,
    2443,    -1,    -1,    -1,    -1,    -1,    -1,  2450,    -1,    -1,
      -1,  2454,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      -1,    -1,    44,    -1,    46,    -1,    -1,    -1,  2471,    -1,
    2646,    -1,    -1,  2678,    -1,    -1,  2681,    59,    -1,  2684,
      -1,  2686,    64,    65,    -1,    67,    68,    69,    -1,    -1,
      -1,    -1,  2668,    -1,    -1,    77,    -1,  2673,    -1,    -1,
      -1,    -1,    84,    -1,    86,    87,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    95,    96,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   136,    -1,    -1,    -1,   140,    -1,
      -1,   143,    -1,    -1,    -1,    -1,   148,   149,    -1,    -1,
      -1,    -1,    -1,   155,    -1,    -1,    -1,  2753,    -1,   161,
      65,    66,    -1,    -1,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   174,    -1,  2770,   177,   178,   179,    -1,    -1,
     182,   183,    -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,
    2786,    -1,    -1,  2789,   196,    -1,   101,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2628,    -1,    -1,    -1,   211,
     212,   213,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   225,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   233,    -1,    -1,   236,    -1,    -1,   239,    -1,   241,
      -1,   243,    -1,    -1,    -1,    -1,   248,    -1,    -1,    -1,
      -1,   156,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   261,
      -1,    -1,    -1,   168,    -1,   267,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     185,   283,   284,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   295,    -1,   297,    -1,    -1,    -1,  2722,
     205,   303,    -1,    -1,   306,   307,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   218,    -1,    -1,    -1,    -1,  2741,  2742,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   337,    -1,    -1,    -1,    -1,
      -1,   343,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   267,    -1,  2787,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2808,    -1,    -1,  2811,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
      -1,   336,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    21,    22,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    -1,    -1,    52,    -1,    -1,    55,    -1,    -1,
      -1,    48,    49,    -1,    62,    52,    19,    -1,    66,    -1,
      -1,    -1,    59,    -1,    -1,    62,    74,    75,    -1,    66,
      -1,    -1,    -1,    -1,    82,    83,    -1,    74,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,
      -1,    99,    -1,    56,    -1,    -1,    -1,   105,    -1,    -1,
      -1,   109,   110,    19,    -1,   113,    -1,    -1,    -1,    -1,
      -1,    -1,   109,   110,    -1,    -1,   113,    -1,    -1,    -1,
      -1,    -1,   130,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   130,    -1,    -1,    -1,    -1,   101,    -1,
      56,   149,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   149,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   171,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   171,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,   180,    -1,   101,   194,    -1,    -1,    -1,
      -1,    -1,    -1,   156,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   222,    -1,   224,    59,    -1,    -1,
      -1,   229,   230,    -1,    -1,   222,    -1,   224,    -1,    -1,
      -1,    -1,   229,   230,    -1,   243,   244,    -1,    19,    -1,
     156,    -1,    -1,    -1,    -1,   253,   254,   244,    -1,    -1,
     213,    -1,    -1,    -1,    -1,   218,    -1,   254,    -1,   101,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   280,    -1,   282,    56,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   280,    -1,   282,   294,    -1,   296,    -1,
      -1,    -1,    -1,    -1,   302,   292,    19,   213,    -1,    -1,
      -1,    -1,   218,    -1,    -1,   302,    -1,    -1,    -1,    -1,
      -1,    -1,   275,    -1,   156,    -1,    -1,    -1,    -1,    -1,
     101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   336,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   336,
      -1,    -1,    -1,    -1,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,    -1,    -1,    -1,   156,   218,    -1,   101,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   156,    -1,    -1,    -1,   218,    -1,    -1,
      -1,    -1,   284,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,    -1,    -1,   218,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,    41,    -1,    -1,    44,    -1,    46,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    67,    68,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,
      79,    -1,    -1,    -1,    -1,    84,    -1,    86,    87,    88,
      -1,    -1,    -1,    -1,    93,    -1,    95,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   140,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   151,   152,    -1,    -1,   155,    -1,    -1,    -1,
     159,    -1,   161,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   182,   183,    -1,    -1,   186,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   196,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   211,   212,    -1,    -1,    -1,    -1,    -1,    -1,
     219,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   241,    -1,   243,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   267,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   283,   284,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   292,    -1,    -1,    -1,    -1,    -1,    -1,
     299,    -1,    -1,    -1,    -1,    -1,   305,    -1,   307,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   343
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    20,    41,    44,    46,    59,    64,    65,    67,    68,
      69,    77,    84,    86,    87,    95,    96,   125,   136,   140,
     143,   148,   149,   155,   161,   174,   177,   178,   179,   182,
     183,   196,   211,   212,   213,   225,   233,   236,   239,   241,
     243,   248,   261,   267,   283,   284,   295,   297,   303,   306,
     307,   337,   343,   349,   239,   257,   381,    66,    12,    53,
      71,   100,   118,   122,   133,   288,   383,     3,     4,   288,
     350,   388,   186,   192,   228,   252,   298,   342,   390,   280,
       4,    40,   111,   193,   241,   395,    28,   150,   172,   176,
     226,   263,   271,   272,   363,   397,    83,    99,   174,   215,
     248,   398,    40,    59,   111,   193,   284,   350,   407,     4,
      19,    40,    56,   101,   119,   156,   193,   201,   207,   208,
     213,   218,   291,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   340,   344,   345,   352,   360,   361,   362,   409,
      33,   410,   352,    29,    44,    46,    76,    84,   141,   191,
     207,   208,   214,   216,   241,   307,   351,   143,   412,    41,
      44,    46,    65,    67,    68,    69,    77,    79,    84,    86,
      87,    88,    93,    95,   124,   140,   151,   152,   155,   159,
     161,   182,   183,   186,   196,   211,   212,   219,   241,   243,
     267,   283,   284,   292,   299,   305,   307,   343,   413,    83,
      99,   455,    19,    44,    77,    84,    94,    95,   101,   124,
     140,   155,   162,   182,   218,   267,   278,   307,   458,   352,
      88,   116,   184,   199,   255,   297,   307,   464,    16,    26,
     112,   124,   158,   204,   217,   467,   227,   485,     5,    66,
      88,   138,   297,   343,   352,   486,     5,   487,    20,    57,
     223,   236,   298,   503,    64,    66,   181,   287,   522,    66,
     202,   339,   344,   346,   523,    39,   193,   228,   288,   350,
     360,   362,   524,     5,   297,   307,   352,   527,    70,   168,
     240,   249,   528,    88,   503,    61,   278,   301,   535,   193,
     288,   350,   536,    26,   112,   124,   204,   217,   538,    50,
      99,   108,   135,   290,   553,   554,     4,    37,    47,    74,
     149,   185,   228,   249,   285,   301,   376,     4,   124,   203,
     555,   288,   350,   557,    16,    23,   237,   239,   361,   558,
     227,   562,   288,   350,   563,     0,    22,    48,    49,    62,
     109,   110,   222,   224,   302,   382,     5,    59,   350,   384,
     264,     5,     4,   288,   350,   385,     5,    32,   277,   386,
     123,   350,   387,   123,   350,   389,   350,     4,   192,   245,
     393,   186,   298,   341,   342,   350,   392,   352,   137,   175,
     391,   350,    78,   171,   245,   350,   394,     5,   350,     4,
     241,   396,   350,   350,     5,   224,   399,    31,   400,     5,
     401,     5,   405,     5,    31,   406,   350,     9,    10,    11,
     350,   356,   357,   358,   359,   350,   350,    40,   111,   193,
     350,   408,   350,   193,   360,   362,   350,    35,   106,   127,
     128,   129,   134,   147,   153,   163,   276,   365,   350,     4,
     352,   352,   352,   352,   352,   352,   352,   352,   352,   352,
     352,   117,    66,    53,    71,    88,   100,   118,   122,   133,
     173,   414,   118,   416,   186,   192,   228,   252,   298,   341,
     342,   350,   402,   417,   280,   420,   168,   421,   168,   176,
     423,    65,    66,    69,    91,   168,   185,   205,   267,   336,
     360,   425,   350,   362,   428,    59,   284,   360,   429,   275,
     360,   362,   430,    33,   431,   360,   362,   432,     4,   360,
     362,   433,    45,    59,    81,   100,   117,   120,   145,   146,
     198,   206,   264,   265,   336,   437,   210,   300,   443,     5,
      89,     6,    88,   120,   435,     5,    65,   362,   434,    16,
     503,    66,   181,   287,   444,    66,   228,   445,   279,    61,
     278,   301,   446,    21,   133,   235,   262,   447,    37,    47,
      74,   149,   185,   249,   301,   448,   362,    89,    16,   195,
     453,   360,   456,    72,   459,    31,   460,    44,    87,   191,
     461,   149,   215,   254,   293,   462,   360,    18,    58,   115,
     284,   360,   463,     4,   192,   466,     5,     4,     6,   120,
     350,     4,     5,   241,   468,     5,   470,     5,   117,   191,
     241,   265,   471,    93,   111,   186,   484,     5,   482,     5,
     265,   483,     4,     5,   352,   352,   350,   350,     5,     4,
       5,    60,    66,    73,    75,    80,    83,    89,    99,   105,
     114,   130,   149,   164,   173,   174,   194,   215,   228,   230,
     243,   248,   254,   261,   280,   293,   294,   296,   336,   488,
       5,     4,   350,     5,   350,    40,   111,   350,   526,   352,
     350,   360,   362,   525,   350,   365,   350,     4,   361,    54,
      90,   139,   241,   529,     4,     4,   350,   149,   254,   530,
       5,   360,     4,    40,   111,   350,   537,   350,    97,    61,
     120,   241,   268,   539,   120,   552,    61,   117,   120,   156,
     191,   238,   241,   265,   268,   279,   541,   542,    61,   120,
     268,   551,     5,     4,    34,   107,   202,   534,    66,   352,
     377,    66,   352,   378,    66,   352,   379,    13,   188,   533,
     350,   350,    40,   111,   193,   222,   350,   380,   350,   265,
       4,   350,   350,     4,   561,     4,   282,   559,     4,   282,
     560,     4,   365,   123,   350,   564,   350,   350,   350,   350,
     350,   350,   350,   350,   350,   350,   350,     4,     5,   350,
      12,   350,   350,   350,    30,    94,   162,   245,   250,   364,
     364,     4,   350,   350,     4,     4,     4,   350,   350,   350,
     350,     4,     4,     5,     5,   360,     5,   350,   350,   356,
     358,   358,   360,   350,   350,   350,   350,   350,   350,   350,
     360,   362,   359,   350,   350,   359,   350,     5,   264,   103,
     186,   415,   192,   245,   418,   168,    78,   171,   245,   419,
     137,   175,   403,   403,     4,   422,     4,   424,   192,   252,
     426,   176,   427,   168,   365,   350,   360,   350,   360,   360,
     365,   365,   365,   360,   365,   350,   360,     4,   440,     4,
     362,   438,   195,     4,   165,   307,   439,   195,   360,     4,
     360,   442,     5,     5,     4,   195,   350,     4,     5,    60,
      66,   114,   130,   142,   148,   149,   154,   205,   224,   228,
     230,   253,   254,   261,   280,   336,   497,   362,   187,   187,
      66,   449,    66,   450,    66,   451,   222,   452,   350,     5,
     223,   454,   361,   365,     5,   360,   360,   360,     4,   352,
       4,     4,   195,   350,    14,    15,    61,   189,   190,   258,
     268,   269,   300,    87,     5,     5,    14,    15,    61,   189,
     190,   258,   268,   269,   273,   300,    87,   156,   161,   361,
     474,   478,    87,   156,     5,   472,     4,     4,    14,    61,
     189,   258,   268,   300,     5,     5,     4,   350,   361,    20,
      21,    22,    48,    49,    52,    55,    62,    66,    74,    75,
      82,    83,    99,   105,   109,   110,   113,   130,   149,   171,
     194,   222,   224,   229,   230,   243,   244,   253,   254,   280,
     282,   294,   296,   302,   336,    66,    80,    89,    99,   130,
     149,   194,   230,   254,   294,   296,     4,    30,   160,   210,
     235,   491,     5,    63,   104,   232,   246,   247,   338,   339,
     496,    99,   489,    17,    40,   111,   193,   495,     4,     5,
      17,   209,   289,   350,   254,   496,   504,   124,   496,   505,
      36,    40,   111,   131,   193,   288,   350,   506,   360,   352,
      91,    99,   105,   126,   149,   157,   194,   202,   243,   254,
     270,   509,    40,   111,   193,     5,   281,    17,   209,   289,
     513,   282,   352,   514,     5,    99,   105,   297,    17,    17,
       4,   350,   350,   350,   350,   350,   365,   350,   350,   359,
     350,     4,   365,    40,   111,   193,   259,   531,    40,   111,
     193,   259,   532,     4,    97,     5,     5,    87,     4,     5,
       5,    87,     5,   542,    61,   120,   156,   268,   546,    61,
     120,   268,   550,    87,   156,    61,   120,   268,   544,     4,
      61,   120,   268,   543,     5,     5,     4,     4,     5,     5,
       5,   350,   350,   350,   350,   350,   350,     4,   350,   556,
     350,   350,     6,   361,     4,     5,     4,     4,     5,     4,
      97,   256,   366,   350,   350,    12,   350,   350,   350,   350,
     350,   350,   350,   350,   350,     5,    12,   350,   350,    12,
       4,    12,     4,     4,   350,   350,   350,     4,   352,     4,
       4,   365,   360,   365,   350,   350,   350,   360,   350,   359,
     350,   350,     5,     5,   350,   362,   350,   360,   360,   350,
     365,   366,   366,   366,   365,   359,   350,   365,   350,   132,
     242,   353,   441,   165,     5,     4,   365,   360,     4,     5,
       4,     4,   350,   436,   350,    20,    21,    22,    48,    49,
      52,    59,    62,    66,    74,    75,    82,   109,   110,   113,
     130,   149,   171,   180,   222,   224,   229,   230,   244,   254,
     280,   282,   292,   302,   336,    66,   130,   154,   230,   280,
      30,   160,   210,   235,   498,   350,    20,   205,   350,   499,
      17,   350,   253,   509,   253,   205,   350,   500,   282,   501,
      17,    98,   350,   350,     5,   366,    56,   360,     4,     5,
     465,   350,     5,     5,     5,   156,   183,   370,   370,   164,
     260,   368,     4,     4,     5,     5,   469,   266,   266,     5,
       5,     5,    17,   158,   369,   369,   368,     4,     4,   368,
       5,     5,   473,   161,   335,   361,   477,     5,   476,     5,
       5,   480,     5,   481,     5,    14,    15,    61,   189,   190,
     258,   268,   269,   273,   300,     4,     4,     5,     5,   370,
     368,     4,     5,     5,   365,    82,   151,   220,   221,   234,
     274,   373,     7,     8,   350,   355,   235,   121,   235,   235,
     105,    40,    66,    99,   105,   111,   130,   149,   164,   194,
     230,   243,   254,   282,   294,   296,   297,   336,   490,   121,
     235,     5,    27,   166,   235,   278,   137,   105,    22,    49,
      52,    82,   110,   113,   224,   253,    22,    49,    52,    55,
      82,   110,   113,   224,   253,   280,    40,   121,   235,   235,
     105,     5,   209,    27,   222,    36,   131,   288,   350,   257,
     264,   121,   239,   360,   362,   509,    40,   222,   278,   239,
     209,     5,     5,   243,    27,   222,     4,     5,     5,   209,
      36,   131,   288,   350,   509,   209,   352,     4,     4,   350,
       5,   300,    22,    27,    48,    49,    51,    52,    62,    74,
      75,    82,    85,   102,   109,   110,   113,   171,   224,   229,
     244,   253,   281,   282,   302,   346,   492,   350,   350,   350,
     350,   350,   496,   360,     5,     4,     5,   350,   350,   360,
     362,   350,   352,   350,   350,   496,     5,   350,   350,   352,
       5,    17,     5,     5,   350,   350,   359,   350,   350,   350,
     350,   111,   350,   350,   111,     4,    42,    43,   169,   170,
     197,   375,   375,    61,   120,   268,   540,   375,     5,    61,
     120,   268,   545,     5,     5,    61,   120,   268,   547,     4,
       5,     5,     4,    61,   120,   268,   549,    61,   120,   268,
     548,     5,     5,     4,     5,     5,     4,   375,   375,   375,
     350,   350,   350,   350,   350,   350,     4,   350,   360,   350,
     361,   365,     5,     5,    12,   350,   360,   362,   350,    12,
     350,   350,   350,    59,   350,     6,     4,   350,   350,    46,
     267,   404,     5,   352,   352,   365,   350,     4,     4,     4,
     360,   350,   350,   350,   350,   365,     4,   360,   366,   359,
     350,     4,   366,   350,    38,    38,     4,   362,     5,    24,
      25,    97,   367,   350,     4,   350,     5,    82,   151,   220,
     221,   234,   274,   360,   362,   235,   121,   235,   235,    21,
     235,   360,   121,   235,    27,   166,   235,   278,   137,    21,
     235,   121,   235,   235,    21,   235,    27,   167,   222,   167,
     257,   264,   121,   167,   222,   286,   509,   167,   222,   278,
       4,   243,    27,   167,   222,   509,   205,   350,    82,   151,
     220,   221,   234,   274,   350,   350,   350,   350,   350,   195,
     350,   350,    20,   231,   457,     4,     4,   350,   370,   370,
     370,     4,   370,   370,   370,    14,    15,    61,   189,   190,
     258,   268,   269,   300,   369,   370,   370,   370,   370,   370,
       4,   370,   370,     4,   369,    14,    15,    61,   189,   190,
     258,   268,   269,   300,     5,   475,     5,   479,     5,     5,
      14,    15,    61,   189,   190,   258,   268,   269,   273,   300,
       5,    14,    15,    61,   189,   190,   258,   268,   269,   273,
     300,     5,    14,    15,    61,   189,   190,   258,   268,   269,
     273,   300,    14,    15,    61,   189,   190,   258,   268,   269,
     300,   266,     5,     5,     5,   369,   369,   368,     4,     4,
     368,     5,     4,     4,   370,   370,     4,   370,   370,     5,
     352,   360,   362,     5,   350,   352,   350,     5,   350,     5,
     355,   105,   194,   243,   105,   194,   243,     5,   352,   350,
     352,     5,   350,   360,   352,     5,   355,   235,   235,    21,
     235,    21,   235,   235,    21,   235,   304,   304,     4,     4,
       4,   490,     4,     4,     4,   304,   304,     4,     5,     4,
     352,   350,     5,   350,     5,   355,   352,   360,   362,   360,
     362,   350,    27,    48,    51,    62,    85,   102,   346,   371,
       4,   352,   350,   365,   359,   352,   360,   362,   360,   350,
     352,   352,   360,   362,   360,   362,   350,   352,   350,     5,
     350,   222,   222,   350,   350,   222,   350,   222,   350,   350,
     502,   510,   350,   222,   222,   350,   350,   350,   350,   350,
     350,   350,   350,     5,   300,   350,   493,   350,   350,   222,
     350,   350,   350,   350,   360,   365,     5,   360,   360,   350,
     350,   365,   359,   350,   350,   350,   360,   350,   350,     5,
     350,   350,   350,   350,     5,     5,     4,   375,     5,     5,
       4,     4,     4,     5,     5,     4,     4,     5,     5,     4,
       5,     5,     4,   350,   350,   350,   360,   350,   365,   350,
     360,   362,   350,   365,   350,   350,   350,   350,   350,     5,
     350,     4,     6,   350,   350,     4,   360,   350,   365,   176,
     363,   350,   363,   366,   365,   360,   350,   350,     4,   350,
     350,     4,   360,     5,     5,     5,     5,   360,   365,   360,
     360,   360,   360,   362,   360,   365,   360,   360,   360,   362,
     360,   360,   360,   360,   362,   360,   360,   360,   350,   360,
     360,   360,   360,   360,   360,   360,   360,     5,     5,     5,
       5,   360,   350,   350,     4,   350,     5,     4,   350,   370,
       5,     5,     5,   368,     4,     4,     5,   370,   369,     4,
     370,     5,     5,     5,   369,   369,   368,     4,     4,     5,
      14,    15,    61,   189,   190,   258,   268,   269,   300,    14,
      15,    61,   189,   190,   258,   268,   269,   300,    14,    15,
      61,   189,   190,   258,   268,   269,   300,   266,     5,     5,
       5,   369,   369,   368,     4,     4,   368,     5,   266,     5,
       5,     5,   369,   369,   368,     4,     4,   368,     5,   266,
       5,     5,     5,   369,   369,   368,     4,     4,   368,     5,
       5,     5,     5,   369,   369,   368,     4,     4,     5,   369,
       4,     4,   369,     4,     4,   370,     5,   365,   360,   350,
     350,   360,   350,     5,   355,     5,   360,   362,   352,     5,
     360,   362,   365,     5,   355,   350,   350,   350,   350,   350,
     350,   350,   350,   350,     4,     4,     5,     4,     4,   350,
     360,   350,     5,   355,   352,   365,   359,   365,   350,   350,
     359,   359,   365,   359,   365,   350,   365,   359,   365,   359,
     350,   350,   350,   350,   350,   350,   350,   350,   350,   350,
      55,    66,    92,   130,   280,   282,   336,   507,   508,   509,
     520,   521,   350,   350,   350,   350,   350,   350,   350,   350,
     350,   350,   350,   350,   360,     5,   350,   350,   350,   350,
       4,     4,   365,   366,     4,   494,   365,   365,   359,   350,
       4,   365,   375,   375,   375,   355,   350,   350,   350,   365,
     350,   359,   350,   350,    12,     5,     5,     4,   350,   350,
       4,   365,   360,   350,   350,   366,   367,   350,     5,   350,
     362,     5,     5,     5,     5,   365,   367,   367,   367,   365,
     367,   366,   367,   367,   365,   367,   367,   367,   365,   367,
     367,   365,   360,   367,   365,   367,   367,   365,   367,   365,
       5,     5,     5,     5,   365,     4,   362,     5,   350,     4,
     370,   369,     4,   369,     5,     5,     5,   369,   369,   368,
       4,     4,     5,     5,     5,     5,   369,   369,   368,     4,
       4,     5,     5,     5,     5,   369,   369,   368,     4,     4,
       5,   369,   370,   370,   370,   370,   370,     4,   370,   370,
       4,   369,   369,   370,   370,   370,   370,   370,     4,   370,
     370,     4,   369,   369,     4,     4,   369,     4,   369,   369,
       4,     4,     4,   361,   367,     4,   360,   362,   367,   350,
     360,     4,   367,   367,   360,     4,   350,   350,   350,   350,
     350,   350,   350,   350,   350,   350,   350,   360,   362,   367,
     350,   360,     4,   359,   359,   359,   350,   360,   362,   359,
     350,   359,   359,   360,   360,   362,   359,   350,   359,   350,
     350,   350,   350,   350,   350,   355,   350,   350,   350,   347,
     347,   347,   347,   347,   347,   347,   508,   347,   355,   350,
     350,   350,   350,   355,   350,   350,   350,   350,   350,   350,
     365,   350,   300,   354,   355,   350,   350,   366,   352,     4,
       4,   366,   350,   359,   350,    59,   350,     5,     5,   350,
       4,   363,   367,     5,     4,     4,     5,   360,     5,   366,
     367,   366,   366,   366,     4,     5,   360,     5,     5,     4,
     350,   370,   369,   370,   370,   370,   370,   370,     4,   370,
     370,   369,     4,   369,   370,   370,   370,   370,   370,     4,
     370,   370,   369,   370,   369,     4,   370,   370,   369,     4,
     370,   369,     4,   369,   369,   365,   360,   362,   367,     4,
     365,   350,   365,   350,   350,   350,   367,     4,   365,   350,
     359,   367,   350,   359,   367,   367,   360,   355,   350,     4,
     372,   372,   350,   350,   372,   355,   372,   510,   360,   490,
       5,     4,     5,     5,     5,     4,   352,   355,   372,   372,
     350,   350,   355,   350,   350,   350,   350,   350,   359,   350,
       5,   510,   350,   372,   352,   511,   512,     5,   352,     5,
     350,     5,     4,     6,   350,    32,   277,   411,     5,    32,
     277,   374,   360,     5,   374,   360,   411,   350,   369,   370,
     369,   369,   370,   370,   369,   370,   369,   369,   350,   367,
     360,   362,   360,   350,   360,   350,   360,   362,   360,   350,
     360,   367,     4,   510,   510,   354,   350,   510,     4,   510,
     365,     5,     4,     4,   510,   510,   354,   350,     4,   510,
     510,   350,   360,   510,   510,   510,   511,   517,   518,   509,
     515,   516,     5,     5,     6,     4,   186,   298,   342,   350,
     402,   360,   360,     4,   370,   370,   370,   370,   361,   367,
     367,   350,   367,     4,   367,   367,   350,   367,   350,   510,
     510,     4,   350,   510,     5,   350,   510,     4,   350,   510,
     365,   517,   519,   520,   347,   516,     5,     5,     4,   350,
     403,   350,   403,   365,   365,   367,     4,   360,   362,     4,
     355,   354,   350,   350,   354,   350,   360,   520,   352,     5,
       5,   350,   350,   350,   350,   374,   374,     5,   360,   362,
     365,   360,   362,   510,   350,     4,   510,   350,   367,     5,
       5,   350,     5,   350,   365,   365,     4,   510,     4,   510,
       5,     5,   354,   354,   510,   510
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
#line 453 "frame/parser.Y"
    {fr->bgColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 7:
#line 455 "frame/parser.Y"
    {fr->centerCmd();;}
    break;

  case 8:
#line 456 "frame/parser.Y"
    {fr->clearCmd();;}
    break;

  case 10:
#line 458 "frame/parser.Y"
    {fr->colorbarTagCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 17:
#line 465 "frame/parser.Y"
    {fr->DATASECCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 22:
#line 470 "frame/parser.Y"
    {fr->hideCmd();;}
    break;

  case 23:
#line 471 "frame/parser.Y"
    {fr->highliteCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 25:
#line 473 "frame/parser.Y"
    {fr->irafAlignCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 32:
#line 480 "frame/parser.Y"
    {fr->nanColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 36:
#line 484 "frame/parser.Y"
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
    {DebugAST=(yyvsp[(2) - (2)].integer);;}
    break;

  case 59:
#line 511 "frame/parser.Y"
    {DebugMosaic=(yyvsp[(2) - (2)].integer);;}
    break;

  case 60:
#line 512 "frame/parser.Y"
    {yydebug=(yyvsp[(2) - (2)].integer);;}
    break;

  case 61:
#line 513 "frame/parser.Y"
    {DebugPerf=(yyvsp[(2) - (2)].integer);;}
    break;

  case 62:
#line 514 "frame/parser.Y"
    {DebugWCS=(yyvsp[(2) - (2)].integer);;}
    break;

  case 63:
#line 515 "frame/parser.Y"
    {DebugBin=(yyvsp[(2) - (2)].integer);;}
    break;

  case 64:
#line 516 "frame/parser.Y"
    {DebugBlock=(yyvsp[(2) - (2)].integer);;}
    break;

  case 65:
#line 517 "frame/parser.Y"
    {DebugCompress=(yyvsp[(2) - (2)].integer);;}
    break;

  case 66:
#line 518 "frame/parser.Y"
    {DebugCrop=(yyvsp[(2) - (2)].integer);;}
    break;

  case 67:
#line 519 "frame/parser.Y"
    {DebugGZ=(yyvsp[(2) - (2)].integer);;}
    break;

  case 68:
#line 520 "frame/parser.Y"
    {DebugRGB=(yyvsp[(2) - (2)].integer);;}
    break;

  case 69:
#line 523 "frame/parser.Y"
    {(yyval.integer)=((yyvsp[(1) - (1)].integer) ? 1 : 0);;}
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
#line 528 "frame/parser.Y"
    {(yyval.integer)=1;;}
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
#line 533 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 78:
#line 536 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 79:
#line 537 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 80:
#line 538 "frame/parser.Y"
    {(yyval.integer) = Base::FULLBASE;;}
    break;

  case 81:
#line 539 "frame/parser.Y"
    {(yyval.integer) = Base::ROOT;;}
    break;

  case 82:
#line 540 "frame/parser.Y"
    {(yyval.integer) = Base::FULL;;}
    break;

  case 83:
#line 543 "frame/parser.Y"
    {(yyval.real) = 0;;}
    break;

  case 84:
#line 544 "frame/parser.Y"
    {(yyval.real) = (yyvsp[(1) - (1)].real);;}
    break;

  case 85:
#line 547 "frame/parser.Y"
    {(yyval.real) = degToRad((yyvsp[(1) - (1)].real));;}
    break;

  case 86:
#line 548 "frame/parser.Y"
    {(yyval.real) = degToRad((yyvsp[(1) - (1)].real));;}
    break;

  case 87:
#line 549 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 88:
#line 552 "frame/parser.Y"
    {(yyval.real) = parseSEXStr((yyvsp[(1) - (1)].str));;}
    break;

  case 89:
#line 555 "frame/parser.Y"
    {(yyval.real) = parseHMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 90:
#line 558 "frame/parser.Y"
    {(yyval.real) = parseDMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 91:
#line 562 "frame/parser.Y"
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
#line 574 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 93:
#line 581 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 94:
#line 588 "frame/parser.Y"
    {
	  (yyval.vector)[0] = (yyvsp[(1) - (2)].real);
	  (yyval.vector)[1] = (yyvsp[(2) - (2)].real);
	  (yyval.vector)[2] = 1;
	;}
    break;

  case 95:
#line 595 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::IMAGE;;}
    break;

  case 96:
#line 596 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::PHYSICAL;;}
    break;

  case 97:
#line 597 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::DETECTOR;;}
    break;

  case 98:
#line 598 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::AMPLIFIER;;}
    break;

  case 99:
#line 599 "frame/parser.Y"
    {(yyval.integer) = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 100:
#line 602 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS;;}
    break;

  case 101:
#line 603 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSA;;}
    break;

  case 102:
#line 604 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSB;;}
    break;

  case 103:
#line 605 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSC;;}
    break;

  case 104:
#line 606 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSD;;}
    break;

  case 105:
#line 607 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSE;;}
    break;

  case 106:
#line 608 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSF;;}
    break;

  case 107:
#line 609 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSG;;}
    break;

  case 108:
#line 610 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSH;;}
    break;

  case 109:
#line 611 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSI;;}
    break;

  case 110:
#line 612 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSJ;;}
    break;

  case 111:
#line 613 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSK;;}
    break;

  case 112:
#line 614 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSL;;}
    break;

  case 113:
#line 615 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSM;;}
    break;

  case 114:
#line 616 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSN;;}
    break;

  case 115:
#line 617 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSO;;}
    break;

  case 116:
#line 618 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSP;;}
    break;

  case 117:
#line 619 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSQ;;}
    break;

  case 118:
#line 620 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSR;;}
    break;

  case 119:
#line 621 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSS;;}
    break;

  case 120:
#line 622 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCST;;}
    break;

  case 121:
#line 623 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSU;;}
    break;

  case 122:
#line 624 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSV;;}
    break;

  case 123:
#line 625 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSW;;}
    break;

  case 124:
#line 626 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSX;;}
    break;

  case 125:
#line 627 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSY;;}
    break;

  case 126:
#line 628 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSZ;;}
    break;

  case 127:
#line 629 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS0;;}
    break;

  case 128:
#line 632 "frame/parser.Y"
    {(yyval.integer) = Coord::CANVAS;;}
    break;

  case 129:
#line 633 "frame/parser.Y"
    {(yyval.integer) = Coord::PANNER;;}
    break;

  case 130:
#line 636 "frame/parser.Y"
    {(yyval.integer) = FrScale::LINEARSCALE;;}
    break;

  case 131:
#line 637 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOGSCALE;;}
    break;

  case 132:
#line 638 "frame/parser.Y"
    {(yyval.integer) = FrScale::POWSCALE;;}
    break;

  case 133:
#line 639 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQRTSCALE;;}
    break;

  case 134:
#line 640 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQUAREDSCALE;;}
    break;

  case 135:
#line 641 "frame/parser.Y"
    {(yyval.integer) = FrScale::ASINHSCALE;;}
    break;

  case 136:
#line 642 "frame/parser.Y"
    {(yyval.integer) = FrScale::SINHSCALE;;}
    break;

  case 137:
#line 643 "frame/parser.Y"
    {(yyval.integer) = FrScale::HISTEQUSCALE;;}
    break;

  case 138:
#line 646 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 139:
#line 647 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 140:
#line 648 "frame/parser.Y"
    {(yyval.integer)=FrScale::SAMPLE;;}
    break;

  case 141:
#line 649 "frame/parser.Y"
    {(yyval.integer)=FrScale::DATAMIN;;}
    break;

  case 142:
#line 650 "frame/parser.Y"
    {(yyval.integer)=FrScale::IRAFMIN;;}
    break;

  case 143:
#line 653 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 144:
#line 654 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 145:
#line 655 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4_NO_E;;}
    break;

  case 146:
#line 656 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 147:
#line 657 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 148:
#line 658 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 149:
#line 659 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 150:
#line 660 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::GALACTIC;;}
    break;

  case 151:
#line 661 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::SUPERGALACTIC;;}
    break;

  case 152:
#line 662 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ECLIPTIC;;}
    break;

  case 153:
#line 663 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::HELIOECLIPTIC;;}
    break;

  case 154:
#line 666 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 155:
#line 667 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 156:
#line 668 "frame/parser.Y"
    {(yyval.integer)=Coord::SEXAGESIMAL;;}
    break;

  case 157:
#line 671 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 158:
#line 672 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 159:
#line 673 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCMIN;;}
    break;

  case 160:
#line 674 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCSEC;;}
    break;

  case 161:
#line 677 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 162:
#line 678 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 163:
#line 679 "frame/parser.Y"
    {(yyval.integer) = Base::KEY;;}
    break;

  case 164:
#line 682 "frame/parser.Y"
    {;}
    break;

  case 165:
#line 683 "frame/parser.Y"
    {;}
    break;

  case 166:
#line 684 "frame/parser.Y"
    {;}
    break;

  case 167:
#line 687 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 168:
#line 688 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 169:
#line 689 "frame/parser.Y"
    {(yyval.integer) = Base::MASK;;}
    break;

  case 170:
#line 692 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 171:
#line 693 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 172:
#line 694 "frame/parser.Y"
    {(yyval.integer) = Point::BOX;;}
    break;

  case 173:
#line 695 "frame/parser.Y"
    {(yyval.integer) = Point::DIAMOND;;}
    break;

  case 174:
#line 696 "frame/parser.Y"
    {(yyval.integer) = Point::CROSS;;}
    break;

  case 175:
#line 697 "frame/parser.Y"
    {(yyval.integer) = Point::EX;;}
    break;

  case 176:
#line 698 "frame/parser.Y"
    {(yyval.integer) = Point::ARROW;;}
    break;

  case 177:
#line 699 "frame/parser.Y"
    {(yyval.integer) = Point::BOXCIRCLE;;}
    break;

  case 178:
#line 702 "frame/parser.Y"
    {(yyval.integer) = POINTSIZE;;}
    break;

  case 179:
#line 703 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 180:
#line 706 "frame/parser.Y"
    {(yyval.integer) = Marker::PANDA;;}
    break;

  case 181:
#line 707 "frame/parser.Y"
    {(yyval.integer) = Marker::HISTOGRAM;;}
    break;

  case 182:
#line 708 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT2D;;}
    break;

  case 183:
#line 709 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT3D;;}
    break;

  case 184:
#line 710 "frame/parser.Y"
    {(yyval.integer) = Marker::RADIAL;;}
    break;

  case 185:
#line 711 "frame/parser.Y"
    {(yyval.integer) = Marker::STATS;;}
    break;

  case 186:
#line 714 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 187:
#line 715 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 188:
#line 716 "frame/parser.Y"
    {(yyval.integer) = Marker::SUM;;}
    break;

  case 189:
#line 719 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 190:
#line 720 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 191:
#line 721 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 192:
#line 722 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 193:
#line 723 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 194:
#line 724 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 199:
#line 731 "frame/parser.Y"
    {fr->set3dRenderMethodCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 200:
#line 732 "frame/parser.Y"
    {fr->set3dRenderBackgroundCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 201:
#line 733 "frame/parser.Y"
    {fr->set3dScaleCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 202:
#line 734 "frame/parser.Y"
    {fr->set3dPreserveCmd();;}
    break;

  case 203:
#line 736 "frame/parser.Y"
    {/* needed for compatibility with old version of backup */;}
    break;

  case 204:
#line 739 "frame/parser.Y"
    {fr->set3dBorderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 205:
#line 740 "frame/parser.Y"
    {fr->set3dBorderColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 206:
#line 743 "frame/parser.Y"
    {fr->set3dCompassCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 207:
#line 744 "frame/parser.Y"
    {fr->set3dCompassColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 208:
#line 747 "frame/parser.Y"
    {fr->set3dHighliteCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 209:
#line 748 "frame/parser.Y"
    {fr->set3dHighliteColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 210:
#line 751 "frame/parser.Y"
    {fr->set3dViewCmd((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));;}
    break;

  case 211:
#line 753 "frame/parser.Y"
    {fr->set3dViewPointCmd(Vector3d((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 212:
#line 754 "frame/parser.Y"
    {fr->view3dBeginCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 213:
#line 755 "frame/parser.Y"
    {fr->view3dMotionCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 214:
#line 756 "frame/parser.Y"
    {fr->view3dEndCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 215:
#line 759 "frame/parser.Y"
    {fr->analysisMarkersResetCmd();;}
    break;

  case 217:
#line 764 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("circle", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 218:
#line 766 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("ellipse", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 219:
#line 768 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("box", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 220:
#line 770 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("polygon", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 221:
#line 772 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("point", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 222:
#line 774 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("vector", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 223:
#line 776 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("annulus", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 224:
#line 778 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("ellipseannulus", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 225:
#line 780 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("boxannulus", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 227:
#line 784 "frame/parser.Y"
    {fr->binColsCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 228:
#line 785 "frame/parser.Y"
    {fr->binDepthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 231:
#line 788 "frame/parser.Y"
    {fr->binBufferSizeCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 233:
#line 790 "frame/parser.Y"
    {fr->binFilterCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 234:
#line 793 "frame/parser.Y"
    {fr->binAboutCmd();;}
    break;

  case 235:
#line 794 "frame/parser.Y"
    {fr->binAboutCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 236:
#line 797 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 237:
#line 798 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 238:
#line 800 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(1) - (4)].real)), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 239:
#line 802 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 240:
#line 803 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 241:
#line 804 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 242:
#line 806 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 243:
#line 808 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 244:
#line 811 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::AVERAGE);;}
    break;

  case 245:
#line 812 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::SUM);;}
    break;

  case 246:
#line 815 "frame/parser.Y"
    {fr->binToFitCmd();;}
    break;

  case 247:
#line 817 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (7)].real),(yyvsp[(2) - (7)].real)), (yyvsp[(5) - (7)].str), (yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].str));;}
    break;

  case 248:
#line 820 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (11)].real),(yyvsp[(2) - (11)].real)), (yyvsp[(3) - (11)].integer), Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)), (yyvsp[(8) - (11)].str), (yyvsp[(9) - (11)].str), (yyvsp[(10) - (11)].str), (yyvsp[(11) - (11)].str));;}
    break;

  case 249:
#line 822 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (8)].real),(yyvsp[(2) - (8)].real)), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (yyvsp[(6) - (8)].str), (yyvsp[(7) - (8)].str), (yyvsp[(8) - (8)].str));;}
    break;

  case 250:
#line 825 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (12)].real),(yyvsp[(2) - (12)].real)), (yyvsp[(3) - (12)].integer), Vector((yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real)), Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), 
	    (yyvsp[(9) - (12)].str), (yyvsp[(10) - (12)].str), (yyvsp[(11) - (12)].str), (yyvsp[(12) - (12)].str));;}
    break;

  case 251:
#line 829 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 252:
#line 830 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 254:
#line 834 "frame/parser.Y"
    {fr->blockToFitCmd();;}
    break;

  case 255:
#line 835 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 256:
#line 836 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 260:
#line 842 "frame/parser.Y"
    {fr->clipUserCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 262:
#line 845 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 263:
#line 850 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::GLOBAL);;}
    break;

  case 264:
#line 851 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::LOCAL);;}
    break;

  case 265:
#line 854 "frame/parser.Y"
    {fr->clipModeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 266:
#line 855 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::MINMAX);;}
    break;

  case 267:
#line 856 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZSCALE);;}
    break;

  case 268:
#line 857 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZMAX);;}
    break;

  case 269:
#line 858 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::USERCLIP);;}
    break;

  case 270:
#line 861 "frame/parser.Y"
    {fr->clipMinMaxCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer),(yyvsp[(1) - (2)].integer));;}
    break;

  case 271:
#line 862 "frame/parser.Y"
    {fr->clipMinMaxModeCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer));;}
    break;

  case 272:
#line 863 "frame/parser.Y"
    {fr->clipMinMaxSampleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 273:
#line 866 "frame/parser.Y"
    {fr->clipZScaleCmd((yyvsp[(1) - (3)].real),(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 274:
#line 868 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleContrastCmd((yyvsp[(2) - (2)].real));
        ;}
    break;

  case 275:
#line 873 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleSampleCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 276:
#line 878 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleLineCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 277:
#line 885 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (6)].integer), (yyvsp[(2) - (6)].real), (yyvsp[(3) - (6)].real), (yyvsp[(4) - (6)].integer), (unsigned char*)(yyvsp[(5) - (6)].ptr), (yyvsp[(6) - (6)].integer));;}
    break;

  case 278:
#line 887 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].integer),(unsigned char*)(yyvsp[(9) - (10)].ptr),(yyvsp[(10) - (10)].integer));;}
    break;

  case 279:
#line 888 "frame/parser.Y"
    {fr->colormapBeginCmd();;}
    break;

  case 281:
#line 890 "frame/parser.Y"
    {fr->colormapEndCmd();;}
    break;

  case 282:
#line 894 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(1) - (6)].integer), (yyvsp[(2) - (6)].real), (yyvsp[(3) - (6)].real), (yyvsp[(4) - (6)].integer), (unsigned char*)(yyvsp[(5) - (6)].ptr), (yyvsp[(6) - (6)].integer));;}
    break;

  case 283:
#line 896 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].integer),(unsigned char*)(yyvsp[(9) - (10)].ptr),(yyvsp[(10) - (10)].integer));;}
    break;

  case 284:
#line 898 "frame/parser.Y"
    {fr->colorScaleCmd((FrScale::ColorScaleType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 285:
#line 899 "frame/parser.Y"
    {fr->colorScaleLogCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 291:
#line 910 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),(FrScale::ClipMode)(yyvsp[(9) - (13)].integer),100,(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 292:
#line 912 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),FrScale::AUTOCUT,(yyvsp[(9) - (13)].real),(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 293:
#line 914 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),(FrScale::ClipMode)(yyvsp[(9) - (12)].integer),100,FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 294:
#line 919 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),FrScale::AUTOCUT,(yyvsp[(9) - (12)].real),FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 295:
#line 923 "frame/parser.Y"
    {fr->contourCreatePolygonCmd();;}
    break;

  case 296:
#line 926 "frame/parser.Y"
    {fr->contourDeleteCmd();;}
    break;

  case 297:
#line 927 "frame/parser.Y"
    {fr->contourDeleteAuxCmd();;}
    break;

  case 298:
#line 930 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 299:
#line 931 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 300:
#line 933 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourLoadCmd((yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer),(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer));
	;}
    break;

  case 301:
#line 939 "frame/parser.Y"
    {(yyval.integer) = FrScale::MINMAX;;}
    break;

  case 302:
#line 940 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZSCALE;;}
    break;

  case 303:
#line 941 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZMAX;;}
    break;

  case 304:
#line 942 "frame/parser.Y"
    {(yyval.integer) = FrScale::USERCLIP;;}
    break;

  case 305:
#line 945 "frame/parser.Y"
    {(yyval.integer) = FrScale::GLOBAL;;}
    break;

  case 306:
#line 946 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOCAL;;}
    break;

  case 307:
#line 949 "frame/parser.Y"
    {(yyval.integer) = FVContour::SMOOTH;;}
    break;

  case 308:
#line 950 "frame/parser.Y"
    {(yyval.integer) = FVContour::BLOCK;;}
    break;

  case 309:
#line 953 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 310:
#line 954 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 311:
#line 958 "frame/parser.Y"
    {fr->contourSaveCmd((yyvsp[(1) - (3)].str), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 312:
#line 960 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (4)].str),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 313:
#line 963 "frame/parser.Y"
    {fr->cropCmd();;}
    break;

  case 314:
#line 965 "frame/parser.Y"
    {fr->cropCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 315:
#line 968 "frame/parser.Y"
    {fr->cropCenterCmd(Vector((yyvsp[(2) - (8)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), Vector((yyvsp[(5) - (8)].real),(yyvsp[(6) - (8)].real)), (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 317:
#line 970 "frame/parser.Y"
    {fr->cropBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 318:
#line 971 "frame/parser.Y"
    {fr->cropMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 319:
#line 972 "frame/parser.Y"
    {fr->cropEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 320:
#line 975 "frame/parser.Y"
    {fr->crop3dCmd();;}
    break;

  case 321:
#line 976 "frame/parser.Y"
    {fr->crop3dCmd((yyvsp[(1) - (3)].real), (yyvsp[(2) - (3)].real), (Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 322:
#line 977 "frame/parser.Y"
    {fr->crop3dBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 323:
#line 978 "frame/parser.Y"
    {fr->crop3dMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 324:
#line 979 "frame/parser.Y"
    {fr->crop3dEndCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 325:
#line 983 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), (Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 326:
#line 985 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 327:
#line 986 "frame/parser.Y"
    {fr->crosshairCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 328:
#line 987 "frame/parser.Y"
    {fr->crosshairWarpCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 329:
#line 990 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)), (Coord::InternalSystem)(yyvsp[(3) - (5)].integer));;}
    break;

  case 330:
#line 992 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 331:
#line 994 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer));;}
    break;

  case 332:
#line 996 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 333:
#line 999 "frame/parser.Y"
    {fr->axesOrderCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 334:
#line 1002 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 335:
#line 1003 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 336:
#line 1004 "frame/parser.Y"
    {(yyval.integer) = Base::SUM;;}
    break;

  case 337:
#line 1007 "frame/parser.Y"
    {fr->fitsyHasExtCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 338:
#line 1010 "frame/parser.Y"
    {fr->getBgColorCmd();;}
    break;

  case 352:
#line 1024 "frame/parser.Y"
    {fr->getDATASECCmd();;}
    break;

  case 355:
#line 1027 "frame/parser.Y"
    {fr->getHistogramCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].integer));;}
    break;

  case 356:
#line 1029 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(3) - (9)].str),(yyvsp[(4) - (9)].str),Vector((yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real)),(Coord::InternalSystem)(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(Base::CutMethod)(yyvsp[(9) - (9)].integer));;}
    break;

  case 359:
#line 1032 "frame/parser.Y"
    {fr->getIRAFAlignCmd();;}
    break;

  case 360:
#line 1033 "frame/parser.Y"
    {fr->getMinMaxCmd();;}
    break;

  case 363:
#line 1036 "frame/parser.Y"
    {fr->getNANColorCmd();;}
    break;

  case 364:
#line 1037 "frame/parser.Y"
    {fr->getOrientCmd();;}
    break;

  case 366:
#line 1040 "frame/parser.Y"
    {fr->getPixelTableCmd(Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (Coord::InternalSystem)(yyvsp[(3) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(7) - (8)].integer), (yyvsp[(8) - (8)].str));;}
    break;

  case 368:
#line 1042 "frame/parser.Y"
    {fr->getRotateCmd();;}
    break;

  case 370:
#line 1044 "frame/parser.Y"
    {fr->getThreadsCmd();;}
    break;

  case 372:
#line 1046 "frame/parser.Y"
    {fr->getTypeCmd();;}
    break;

  case 373:
#line 1048 "frame/parser.Y"
    {fr->getValueCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 374:
#line 1050 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(3) - (9)].str),(yyvsp[(4) - (9)].str),Vector((yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real)),(Coord::InternalSystem)(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(Base::CutMethod)(yyvsp[(9) - (9)].integer));;}
    break;

  case 376:
#line 1052 "frame/parser.Y"
    {fr->getZoomCmd();;}
    break;

  case 377:
#line 1055 "frame/parser.Y"
    {fr->getBinDepthCmd();;}
    break;

  case 378:
#line 1056 "frame/parser.Y"
    {fr->getBinFactorCmd();;}
    break;

  case 379:
#line 1057 "frame/parser.Y"
    {fr->getBinFunctionCmd();;}
    break;

  case 380:
#line 1058 "frame/parser.Y"
    {fr->getBinBufferSizeCmd();;}
    break;

  case 381:
#line 1059 "frame/parser.Y"
    {fr->getBinCursorCmd();;}
    break;

  case 382:
#line 1060 "frame/parser.Y"
    {fr->getBinFilterCmd();;}
    break;

  case 384:
#line 1062 "frame/parser.Y"
    {fr->getBinListCmd();;}
    break;

  case 385:
#line 1065 "frame/parser.Y"
    {fr->getBinColsCmd();;}
    break;

  case 386:
#line 1066 "frame/parser.Y"
    {fr->getBinColsMinMaxCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 387:
#line 1067 "frame/parser.Y"
    {fr->getBinColsDimCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 388:
#line 1070 "frame/parser.Y"
    {fr->getBlockCmd();;}
    break;

  case 389:
#line 1073 "frame/parser.Y"
    {fr->getClipCmd();;}
    break;

  case 390:
#line 1075 "frame/parser.Y"
    {fr->getClipCmd((FrScale::ClipMode)(yyvsp[(1) - (2)].integer), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 391:
#line 1077 "frame/parser.Y"
    {fr->getClipCmd((yyvsp[(1) - (2)].real), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 392:
#line 1078 "frame/parser.Y"
    {fr->getClipScopeCmd();;}
    break;

  case 393:
#line 1079 "frame/parser.Y"
    {fr->getClipModeCmd();;}
    break;

  case 395:
#line 1081 "frame/parser.Y"
    {fr->getClipUserCmd();;}
    break;

  case 397:
#line 1084 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	;}
    break;

  case 398:
#line 1090 "frame/parser.Y"
    {fr->getClipMinMaxModeCmd();;}
    break;

  case 399:
#line 1091 "frame/parser.Y"
    {fr->getClipMinMaxSampleCmd();;}
    break;

  case 400:
#line 1094 "frame/parser.Y"
    {fr->getClipZScaleContrastCmd();;}
    break;

  case 401:
#line 1095 "frame/parser.Y"
    {fr->getClipZScaleSampleCmd();;}
    break;

  case 402:
#line 1096 "frame/parser.Y"
    {fr->getClipZScaleLineCmd();;}
    break;

  case 403:
#line 1099 "frame/parser.Y"
    {fr->getColorbarCmd();;}
    break;

  case 404:
#line 1100 "frame/parser.Y"
    {fr->getColorbarTagCmd();;}
    break;

  case 406:
#line 1106 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 407:
#line 1108 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 408:
#line 1110 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 409:
#line 1113 "frame/parser.Y"
    {fr->getColorScaleCmd();;}
    break;

  case 411:
#line 1115 "frame/parser.Y"
    {fr->getColorScaleLogCmd();;}
    break;

  case 412:
#line 1119 "frame/parser.Y"
    {fr->getColorScaleLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 413:
#line 1123 "frame/parser.Y"
    {fr->getContourCmd((Coord::CoordSystem)(yyvsp[(1) - (2)].integer),(Coord::SkyFrame)(yyvsp[(2) - (2)].integer));;}
    break;

  case 415:
#line 1125 "frame/parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 416:
#line 1126 "frame/parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 417:
#line 1127 "frame/parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 418:
#line 1128 "frame/parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 419:
#line 1129 "frame/parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 421:
#line 1131 "frame/parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 422:
#line 1132 "frame/parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 423:
#line 1135 "frame/parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 424:
#line 1136 "frame/parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 425:
#line 1137 "frame/parser.Y"
    {fr->getContourClipScopeCmd();;}
    break;

  case 426:
#line 1140 "frame/parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 427:
#line 1141 "frame/parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 428:
#line 1145 "frame/parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 429:
#line 1147 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 430:
#line 1153 "frame/parser.Y"
    {fr->getCoord3axisCmd((yyvsp[(1) - (4)].real), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 431:
#line 1157 "frame/parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 432:
#line 1159 "frame/parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 433:
#line 1160 "frame/parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 434:
#line 1163 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 435:
#line 1165 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 436:
#line 1166 "frame/parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 437:
#line 1169 "frame/parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 438:
#line 1172 "frame/parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 439:
#line 1174 "frame/parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 440:
#line 1178 "frame/parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 441:
#line 1180 "frame/parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 442:
#line 1183 "frame/parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 443:
#line 1187 "frame/parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 444:
#line 1188 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 445:
#line 1190 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)), (Coord::InternalSystem)(yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 446:
#line 1193 "frame/parser.Y"
    {fr->iisGetCmd((char*)(yyvsp[(1) - (5)].ptr),(yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 447:
#line 1194 "frame/parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 449:
#line 1198 "frame/parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 450:
#line 1199 "frame/parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 451:
#line 1200 "frame/parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 452:
#line 1203 "frame/parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 453:
#line 1205 "frame/parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 454:
#line 1206 "frame/parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 456:
#line 1208 "frame/parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 460:
#line 1212 "frame/parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 461:
#line 1213 "frame/parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 462:
#line 1214 "frame/parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 463:
#line 1216 "frame/parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::DistFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 465:
#line 1218 "frame/parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 466:
#line 1221 "frame/parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 467:
#line 1223 "frame/parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 468:
#line 1225 "frame/parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 469:
#line 1226 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 470:
#line 1227 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 471:
#line 1228 "frame/parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 472:
#line 1231 "frame/parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 473:
#line 1232 "frame/parser.Y"
    {fr->getFitsDepthCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 474:
#line 1236 "frame/parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 475:
#line 1238 "frame/parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 476:
#line 1241 "frame/parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 477:
#line 1244 "frame/parser.Y"
    {fr->getFitsSliceCmd(2);;}
    break;

  case 478:
#line 1245 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 479:
#line 1246 "frame/parser.Y"
    {fr->getFitsSliceCmd(2, (Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 480:
#line 1247 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (2)].integer), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 481:
#line 1250 "frame/parser.Y"
    {fr->getGridCmd();;}
    break;

  case 482:
#line 1251 "frame/parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 483:
#line 1252 "frame/parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 484:
#line 1255 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 485:
#line 1256 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 486:
#line 1257 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 487:
#line 1260 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 488:
#line 1263 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 489:
#line 1264 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 490:
#line 1265 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 491:
#line 1268 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 492:
#line 1269 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 493:
#line 1270 "frame/parser.Y"
    {fr->getSmoothRadiusMinorCmd();;}
    break;

  case 494:
#line 1271 "frame/parser.Y"
    {fr->getSmoothSigmaCmd();;}
    break;

  case 495:
#line 1272 "frame/parser.Y"
    {fr->getSmoothSigmaMinorCmd();;}
    break;

  case 496:
#line 1273 "frame/parser.Y"
    {fr->getSmoothAngleCmd();;}
    break;

  case 501:
#line 1280 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 502:
#line 1281 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 503:
#line 1282 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 504:
#line 1285 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 505:
#line 1286 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 506:
#line 1289 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 507:
#line 1290 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 508:
#line 1293 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 509:
#line 1294 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 510:
#line 1297 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 511:
#line 1298 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 512:
#line 1301 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 514:
#line 1303 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 515:
#line 1306 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 516:
#line 1307 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 518:
#line 1311 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 519:
#line 1315 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), 
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 520:
#line 1318 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer), 
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 521:
#line 1325 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 522:
#line 1326 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 523:
#line 1329 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 526:
#line 1332 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 527:
#line 1333 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 528:
#line 1334 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 529:
#line 1335 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 531:
#line 1337 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 532:
#line 1338 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 533:
#line 1339 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 535:
#line 1341 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 536:
#line 1342 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 537:
#line 1343 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 539:
#line 1347 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 540:
#line 1350 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 541:
#line 1351 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 542:
#line 1354 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 543:
#line 1355 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 544:
#line 1356 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 545:
#line 1357 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 546:
#line 1360 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 547:
#line 1361 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 548:
#line 1362 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 549:
#line 1363 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 550:
#line 1366 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 551:
#line 1367 "frame/parser.Y"
    {fr->hasWCSEquCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 552:
#line 1368 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 553:
#line 1369 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 554:
#line 1370 "frame/parser.Y"
    {fr->hasWCSxCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 555:
#line 1373 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 556:
#line 1374 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 557:
#line 1375 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 560:
#line 1379 "frame/parser.Y"
    {fr->iisSetCmd((const char*)(yyvsp[(2) - (6)].ptr),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 561:
#line 1380 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 562:
#line 1383 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 563:
#line 1386 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 564:
#line 1387 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 565:
#line 1391 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 566:
#line 1393 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 567:
#line 1394 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 574:
#line 1406 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 575:
#line 1408 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 576:
#line 1410 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 577:
#line 1411 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 578:
#line 1413 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 579:
#line 1415 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 580:
#line 1417 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 581:
#line 1419 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 582:
#line 1421 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 584:
#line 1425 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 585:
#line 1426 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 586:
#line 1427 "frame/parser.Y"
    {fr->loadArrayRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 587:
#line 1428 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 588:
#line 1429 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 589:
#line 1431 "frame/parser.Y"
    {fr->loadArrayRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 590:
#line 1432 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 591:
#line 1433 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 592:
#line 1434 "frame/parser.Y"
    {fr->loadArrayRGBCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 593:
#line 1437 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 594:
#line 1441 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 595:
#line 1443 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 596:
#line 1445 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 597:
#line 1447 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 598:
#line 1449 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 599:
#line 1451 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 600:
#line 1453 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 601:
#line 1455 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), 
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 602:
#line 1458 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 603:
#line 1460 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 604:
#line 1462 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 610:
#line 1470 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 611:
#line 1471 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 612:
#line 1472 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 613:
#line 1473 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 614:
#line 1474 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 615:
#line 1475 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 616:
#line 1477 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 617:
#line 1479 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 618:
#line 1480 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 619:
#line 1481 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 620:
#line 1482 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 621:
#line 1485 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 622:
#line 1486 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 623:
#line 1487 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 624:
#line 1488 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 625:
#line 1489 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 626:
#line 1491 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 627:
#line 1492 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 628:
#line 1493 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 629:
#line 1494 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 635:
#line 1505 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS, 
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 636:
#line 1508 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 637:
#line 1511 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 638:
#line 1514 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 639:
#line 1517 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 640:
#line 1520 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 641:
#line 1523 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 642:
#line 1526 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 643:
#line 1529 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 644:
#line 1534 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 645:
#line 1537 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 646:
#line 1540 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 647:
#line 1543 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 648:
#line 1546 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 649:
#line 1549 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 650:
#line 1552 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 651:
#line 1555 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 652:
#line 1558 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 653:
#line 1561 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 654:
#line 1564 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 655:
#line 1569 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 656:
#line 1572 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 657:
#line 1575 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 658:
#line 1578 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 659:
#line 1581 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 660:
#line 1584 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 661:
#line 1587 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 662:
#line 1590 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 663:
#line 1593 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 664:
#line 1598 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 665:
#line 1601 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 666:
#line 1604 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 667:
#line 1607 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 668:
#line 1610 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 669:
#line 1613 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 670:
#line 1616 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 671:
#line 1619 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 672:
#line 1622 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 673:
#line 1625 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 674:
#line 1628 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 675:
#line 1633 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 676:
#line 1634 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 677:
#line 1635 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 678:
#line 1636 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 679:
#line 1637 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 680:
#line 1639 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 681:
#line 1640 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 682:
#line 1641 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 683:
#line 1642 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 684:
#line 1644 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 685:
#line 1645 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 686:
#line 1646 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 687:
#line 1647 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 688:
#line 1648 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 689:
#line 1649 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 690:
#line 1651 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 691:
#line 1653 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 692:
#line 1654 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 693:
#line 1655 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 694:
#line 1656 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 695:
#line 1659 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 696:
#line 1660 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 697:
#line 1661 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 698:
#line 1662 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 699:
#line 1663 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 700:
#line 1665 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 701:
#line 1666 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 702:
#line 1667 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 703:
#line 1668 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 704:
#line 1672 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 705:
#line 1674 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 706:
#line 1675 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 707:
#line 1677 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 708:
#line 1679 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 709:
#line 1681 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 710:
#line 1684 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 711:
#line 1685 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 712:
#line 1688 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 713:
#line 1689 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 714:
#line 1690 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 715:
#line 1693 "frame/parser.Y"
    {
#ifdef MAC_OSX_TK
	  fr->macosxPrintCmd();
#endif
	;}
    break;

  case 716:
#line 1700 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 717:
#line 1701 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 718:
#line 1702 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 719:
#line 1703 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 720:
#line 1704 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 721:
#line 1705 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 722:
#line 1706 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 723:
#line 1710 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 725:
#line 1718 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 726:
#line 1719 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 727:
#line 1721 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 728:
#line 1723 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 729:
#line 1724 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 730:
#line 1725 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 732:
#line 1726 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 733:
#line 1727 "frame/parser.Y"
    {fr->markerDeleteCmd();;}
    break;

  case 734:
#line 1728 "frame/parser.Y"
    {fr->markerDeleteAllCmd();;}
    break;

  case 736:
#line 1730 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 737:
#line 1731 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 738:
#line 1733 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 739:
#line 1735 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 740:
#line 1737 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 741:
#line 1740 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 742:
#line 1742 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 743:
#line 1743 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 744:
#line 1745 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 745:
#line 1748 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (7)].integer), (yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real), (yyvsp[(6) - (7)].integer), (Coord::InternalSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 746:
#line 1750 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 747:
#line 1753 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 748:
#line 1755 "frame/parser.Y"
    {fr->markerBoxFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 749:
#line 1757 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), Vector((yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real)), 
	    Vector((yyvsp[(6) - (8)].real), (yyvsp[(6) - (8)].real)*(yyvsp[(5) - (8)].real)/(yyvsp[(4) - (8)].real)), (yyvsp[(7) - (8)].integer), (Coord::InternalSystem)(yyvsp[(8) - (8)].integer));;}
    break;

  case 750:
#line 1761 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 751:
#line 1764 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 752:
#line 1767 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (Coord::InternalSystem)(yyvsp[(6) - (6)].integer));;}
    break;

  case 753:
#line 1769 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)), 
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 754:
#line 1772 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 755:
#line 1776 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 756:
#line 1780 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 757:
#line 1785 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 758:
#line 1789 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 759:
#line 1790 "frame/parser.Y"
    {fr->markerCircleFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 760:
#line 1792 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].real), (Coord::InternalSystem)(yyvsp[(5) - (5)].integer));;}
    break;

  case 761:
#line 1794 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 762:
#line 1795 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 763:
#line 1797 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 764:
#line 1799 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 765:
#line 1801 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].real),(Coord::InternalSystem)(yyvsp[(5) - (5)].integer));;}
    break;

  case 766:
#line 1803 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 767:
#line 1805 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 768:
#line 1806 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 769:
#line 1808 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 770:
#line 1810 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 771:
#line 1813 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 772:
#line 1817 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 773:
#line 1821 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 774:
#line 1823 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 775:
#line 1825 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 776:
#line 1827 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 777:
#line 1829 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 778:
#line 1831 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 779:
#line 1833 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 780:
#line 1835 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 781:
#line 1837 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 782:
#line 1839 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 783:
#line 1841 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 784:
#line 1843 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 785:
#line 1845 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 786:
#line 1847 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 787:
#line 1848 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 788:
#line 1850 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 789:
#line 1852 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 790:
#line 1853 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 791:
#line 1854 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 792:
#line 1856 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 793:
#line 1858 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 794:
#line 1859 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 795:
#line 1860 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 796:
#line 1861 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 797:
#line 1863 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 798:
#line 1864 "frame/parser.Y"
    {fr->markerEllipseFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 799:
#line 1866 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(4) - (6)].real), (yyvsp[(5) - (6)].real)), (Coord::InternalSystem)(yyvsp[(6) - (6)].integer));;}
    break;

  case 800:
#line 1868 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 801:
#line 1872 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), 
	    Vector((yyvsp[(6) - (8)].real),(yyvsp[(6) - (8)].real)*(yyvsp[(5) - (8)].real)/(yyvsp[(4) - (8)].real)), (yyvsp[(7) - (8)].integer), (Coord::InternalSystem)(yyvsp[(8) - (8)].integer));;}
    break;

  case 802:
#line 1876 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 803:
#line 1879 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 804:
#line 1882 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 805:
#line 1886 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 806:
#line 1890 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 807:
#line 1895 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 808:
#line 1899 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 809:
#line 1900 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 810:
#line 1901 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 811:
#line 1903 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 812:
#line 1905 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(5) - (6)].vector)), Vector((yyvsp[(6) - (6)].vector)), (Coord::InternalSystem)(yyvsp[(4) - (6)].integer));;}
    break;

  case 813:
#line 1907 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 814:
#line 1911 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 815:
#line 1912 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 816:
#line 1913 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 817:
#line 1915 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)), (Coord::InternalSystem)(yyvsp[(4) - (6)].integer));;}
    break;

  case 818:
#line 1917 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 819:
#line 1920 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),(Coord::InternalSystem)(yyvsp[(6) - (6)].integer));;}
    break;

  case 820:
#line 1922 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 821:
#line 1925 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),(Coord::InternalSystem)(yyvsp[(6) - (6)].integer));;}
    break;

  case 822:
#line 1927 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 823:
#line 1930 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 824:
#line 1931 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 825:
#line 1933 "frame/parser.Y"
    {fr->markerPolygonFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 826:
#line 1935 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(4) - (6)].vector)), Vector((yyvsp[(5) - (6)].vector)),
	    (Coord::InternalSystem)(yyvsp[(3) - (6)].integer), (yyvsp[(6) - (6)].real));;}
    break;

  case 827:
#line 1939 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 828:
#line 1943 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 829:
#line 1945 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 830:
#line 1947 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(5) - (6)].vector)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::InternalSystem)(yyvsp[(4) - (6)].integer));;}
    break;

  case 831:
#line 1950 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 832:
#line 1953 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 833:
#line 1956 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 834:
#line 1957 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 835:
#line 1959 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 836:
#line 1960 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 837:
#line 1961 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 838:
#line 1963 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 839:
#line 1964 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 840:
#line 1966 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 841:
#line 1968 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(5) - (7)].vector)), (Coord::InternalSystem)(yyvsp[(4) - (7)].integer), (yyvsp[(6) - (7)].real), (yyvsp[(7) - (7)].real));;}
    break;

  case 842:
#line 1971 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 843:
#line 1974 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 844:
#line 1976 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 845:
#line 1977 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 849:
#line 1982 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 850:
#line 1983 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 851:
#line 1985 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 852:
#line 1987 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 853:
#line 1989 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 854:
#line 1990 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 855:
#line 1992 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer));;}
    break;

  case 856:
#line 1993 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 859:
#line 1998 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 860:
#line 1999 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 861:
#line 2000 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 862:
#line 2001 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 863:
#line 2002 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 864:
#line 2003 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 865:
#line 2004 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 866:
#line 2005 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 867:
#line 2006 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 868:
#line 2007 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 869:
#line 2009 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (5)].str),Vector((yyvsp[(5) - (5)].vector)),(Coord::InternalSystem)(yyvsp[(4) - (5)].integer));;}
    break;

  case 870:
#line 2011 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 871:
#line 2013 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 872:
#line 2014 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 873:
#line 2015 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 874:
#line 2016 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 875:
#line 2017 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 876:
#line 2019 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 877:
#line 2020 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 878:
#line 2021 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 879:
#line 2022 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 880:
#line 2023 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 881:
#line 2025 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 882:
#line 2026 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 883:
#line 2027 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 884:
#line 2028 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 885:
#line 2029 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 886:
#line 2030 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 887:
#line 2033 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 888:
#line 2034 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 889:
#line 2035 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 890:
#line 2036 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 891:
#line 2037 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 892:
#line 2038 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 893:
#line 2039 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 894:
#line 2040 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 895:
#line 2041 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 896:
#line 2042 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 897:
#line 2043 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 898:
#line 2044 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 899:
#line 2045 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 900:
#line 2046 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 901:
#line 2047 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 902:
#line 2048 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 903:
#line 2049 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 904:
#line 2050 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 905:
#line 2051 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 906:
#line 2052 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 907:
#line 2053 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 908:
#line 2056 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 909:
#line 2057 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 910:
#line 2058 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 911:
#line 2059 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 912:
#line 2060 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 913:
#line 2062 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 914:
#line 2072 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 915:
#line 2080 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 916:
#line 2089 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 917:
#line 2097 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 918:
#line 2104 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 919:
#line 2111 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 920:
#line 2119 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 921:
#line 2127 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 922:
#line 2132 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 923:
#line 2137 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 924:
#line 2142 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 925:
#line 2147 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 926:
#line 2152 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 927:
#line 2157 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 928:
#line 2162 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 929:
#line 2171 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real)),Coord::CANVAS),
	    (Coord::CoordSystem)(yyvsp[(6) - (10)].integer), (Coord::SkyFrame)(yyvsp[(7) - (10)].integer), (Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::DistFormat)(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 930:
#line 2180 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS), 
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 931:
#line 2190 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 932:
#line 2199 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 933:
#line 2207 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont, 
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 934:
#line 2217 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 935:
#line 2227 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 936:
#line 2237 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 937:
#line 2249 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 938:
#line 2258 "frame/parser.Y"
    {fr->createCompositeCmd(
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 940:
#line 2266 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 941:
#line 2268 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 942:
#line 2270 "frame/parser.Y"
    { 
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 943:
#line 2275 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 944:
#line 2278 "frame/parser.Y"
    {(yyval.dash)[0] = (yyvsp[(1) - (2)].integer); (yyval.dash)[1] = (yyvsp[(2) - (2)].integer);;}
    break;

  case 945:
#line 2282 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 946:
#line 2284 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 947:
#line 2285 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 948:
#line 2288 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 949:
#line 2289 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 950:
#line 2290 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 951:
#line 2291 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 952:
#line 2292 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 953:
#line 2293 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 954:
#line 2294 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 956:
#line 2298 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 957:
#line 2299 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 958:
#line 2300 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 959:
#line 2301 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 960:
#line 2302 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 961:
#line 2305 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 962:
#line 2307 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 963:
#line 2309 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 964:
#line 2311 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer),(Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 965:
#line 2313 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 966:
#line 2315 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 967:
#line 2318 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 968:
#line 2320 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 969:
#line 2322 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 970:
#line 2324 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer),(Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 971:
#line 2326 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 972:
#line 2328 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 973:
#line 2330 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 974:
#line 2331 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 975:
#line 2332 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 976:
#line 2334 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 977:
#line 2336 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 978:
#line 2338 "frame/parser.Y"
    {fr->getMarkerBoxFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 979:
#line 2340 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 980:
#line 2342 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 981:
#line 2343 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 982:
#line 2344 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 983:
#line 2346 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 984:
#line 2348 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 985:
#line 2351 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), 
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 986:
#line 2353 "frame/parser.Y"
    {fr->getMarkerCircleFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 987:
#line 2355 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 988:
#line 2356 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 989:
#line 2357 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 990:
#line 2358 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 991:
#line 2360 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 992:
#line 2361 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 993:
#line 2362 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 994:
#line 2363 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 995:
#line 2364 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 996:
#line 2366 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 997:
#line 2368 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 998:
#line 2369 "frame/parser.Y"
    {fr->getMarkerEllipseFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 999:
#line 2371 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1000:
#line 2373 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1001:
#line 2375 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1002:
#line 2376 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1003:
#line 2378 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1004:
#line 2380 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1005:
#line 2381 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1006:
#line 2382 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1007:
#line 2383 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1008:
#line 2385 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1009:
#line 2387 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1010:
#line 2390 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1011:
#line 2393 "frame/parser.Y"
    {fr->getMarkerPolygonFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1012:
#line 2394 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1013:
#line 2395 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1014:
#line 2397 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1015:
#line 2400 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1016:
#line 2403 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1017:
#line 2404 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1018:
#line 2405 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1019:
#line 2407 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1020:
#line 2409 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1021:
#line 2411 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1022:
#line 2412 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1023:
#line 2414 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1024:
#line 2415 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1025:
#line 2416 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1026:
#line 2417 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1027:
#line 2418 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1028:
#line 2420 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1029:
#line 2422 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1030:
#line 2424 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1031:
#line 2426 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1033:
#line 2428 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1034:
#line 2429 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1035:
#line 2431 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1036:
#line 2433 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1037:
#line 2434 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1038:
#line 2435 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1040:
#line 2437 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1042:
#line 2441 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1043:
#line 2442 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1044:
#line 2443 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1045:
#line 2444 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1046:
#line 2445 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1047:
#line 2446 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1048:
#line 2448 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1049:
#line 2449 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1050:
#line 2451 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1051:
#line 2454 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1052:
#line 2455 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1053:
#line 2456 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1054:
#line 2457 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1055:
#line 2460 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1056:
#line 2461 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1057:
#line 2464 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1058:
#line 2465 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1059:
#line 2468 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1060:
#line 2469 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1061:
#line 2472 "frame/parser.Y"
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

  case 1062:
#line 2485 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1063:
#line 2486 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1064:
#line 2490 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1065:
#line 2491 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1066:
#line 2495 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1067:
#line 2496 "frame/parser.Y"
    {fr->markerLayerCmd(Base::ANALYSIS);;}
    break;

  case 1068:
#line 2501 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer),
	    0, propQMask, propQValue, taglist);;}
    break;

  case 1069:
#line 2506 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer), 
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer),
	    1, propQMask, propQValue, taglist);;}
    break;

  case 1070:
#line 2512 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1071:
#line 2514 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].str),
	    (Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1072:
#line 2517 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1073:
#line 2519 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].integer),
	    (Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1074:
#line 2522 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (yyvsp[(4) - (6)].dash), (yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].str));;}
    break;

  case 1075:
#line 2525 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1076:
#line 2526 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1077:
#line 2527 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1078:
#line 2528 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1079:
#line 2529 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1080:
#line 2530 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1081:
#line 2532 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::InternalSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1082:
#line 2534 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1085:
#line 2541 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1086:
#line 2542 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1087:
#line 2543 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1088:
#line 2544 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1089:
#line 2545 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1090:
#line 2546 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1093:
#line 2551 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1094:
#line 2552 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1095:
#line 2553 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1096:
#line 2554 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1097:
#line 2555 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1098:
#line 2556 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1099:
#line 2557 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1100:
#line 2558 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1101:
#line 2559 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1102:
#line 2560 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1103:
#line 2561 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1106:
#line 2568 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1107:
#line 2569 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1109:
#line 2572 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1110:
#line 2573 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1111:
#line 2574 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1112:
#line 2575 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1113:
#line 2578 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1114:
#line 2579 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1117:
#line 2587 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1118:
#line 2590 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1119:
#line 2591 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1123:
#line 2598 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1124:
#line 2601 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1125:
#line 2605 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1126:
#line 2606 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1127:
#line 2607 "frame/parser.Y"
    {fr->maskMarkCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1128:
#line 2608 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1129:
#line 2611 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1130:
#line 2612 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1131:
#line 2613 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1132:
#line 2614 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1133:
#line 2618 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1134:
#line 2619 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1135:
#line 2621 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1136:
#line 2626 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1138:
#line 2628 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1140:
#line 2630 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1141:
#line 2633 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1142:
#line 2635 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1143:
#line 2640 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1144:
#line 2643 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1145:
#line 2644 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1146:
#line 2645 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1147:
#line 2648 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1148:
#line 2650 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1149:
#line 2654 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1150:
#line 2655 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1151:
#line 2659 "frame/parser.Y"
    {fr->psColorSpaceCmd((Widget::PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1152:
#line 2660 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1153:
#line 2661 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1154:
#line 2662 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  ;}
    break;

  case 1155:
#line 2667 "frame/parser.Y"
    {(yyval.integer) = Widget::BW;;}
    break;

  case 1156:
#line 2668 "frame/parser.Y"
    {(yyval.integer) = Widget::GRAY;;}
    break;

  case 1157:
#line 2669 "frame/parser.Y"
    {(yyval.integer) = Widget::RGB;;}
    break;

  case 1158:
#line 2670 "frame/parser.Y"
    {(yyval.integer) = Widget::CMYK;;}
    break;

  case 1161:
#line 2678 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1162:
#line 2680 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1163:
#line 2681 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1164:
#line 2682 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1165:
#line 2686 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1166:
#line 2687 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1167:
#line 2688 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1168:
#line 2689 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1169:
#line 2692 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1170:
#line 2693 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1171:
#line 2696 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1172:
#line 2697 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1173:
#line 2698 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1174:
#line 2701 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1175:
#line 2702 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1176:
#line 2703 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1177:
#line 2706 "frame/parser.Y"
    {fr->rotateCmd(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 1178:
#line 2707 "frame/parser.Y"
    {fr->rotateCmd(degToRad((yyvsp[(1) - (2)].real)));;}
    break;

  case 1180:
#line 2709 "frame/parser.Y"
    {fr->rotateToCmd(degToRad((yyvsp[(2) - (2)].real)));;}
    break;

  case 1181:
#line 2710 "frame/parser.Y"
    {fr->rotateToCmd(degToRad((yyvsp[(2) - (3)].real)));;}
    break;

  case 1182:
#line 2713 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1183:
#line 2714 "frame/parser.Y"
    {fr->rotateMotionCmd(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 1184:
#line 2715 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1189:
#line 2722 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1190:
#line 2726 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1191:
#line 2728 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1192:
#line 2730 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1194:
#line 2735 "frame/parser.Y"
    {fr->saveArrayRGBCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1195:
#line 2737 "frame/parser.Y"
    {fr->saveArrayRGBCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1196:
#line 2739 "frame/parser.Y"
    {fr->saveArrayRGBCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1206:
#line 2752 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1207:
#line 2753 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1208:
#line 2754 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1209:
#line 2757 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1210:
#line 2758 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1211:
#line 2759 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1212:
#line 2762 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1213:
#line 2763 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1214:
#line 2764 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1215:
#line 2767 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1216:
#line 2768 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1217:
#line 2769 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1219:
#line 2773 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1220:
#line 2774 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1221:
#line 2775 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1222:
#line 2778 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1223:
#line 2779 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1224:
#line 2780 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1225:
#line 2783 "frame/parser.Y"
    {fr->saveFitsRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1226:
#line 2784 "frame/parser.Y"
    {fr->saveFitsRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1227:
#line 2785 "frame/parser.Y"
    {fr->saveFitsRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1228:
#line 2788 "frame/parser.Y"
    {fr->saveFitsRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1229:
#line 2789 "frame/parser.Y"
    {fr->saveFitsRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1230:
#line 2790 "frame/parser.Y"
    {fr->saveFitsRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1231:
#line 2793 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1232:
#line 2794 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1233:
#line 2795 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1234:
#line 2799 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1235:
#line 2801 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1236:
#line 2803 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1237:
#line 2807 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1238:
#line 2811 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1239:
#line 2812 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1240:
#line 2815 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1241:
#line 2816 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1242:
#line 2817 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1243:
#line 2818 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1244:
#line 2821 "frame/parser.Y"
    {fr->updateFitsCmd(0);;}
    break;

  case 1245:
#line 2823 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)),0);;}
    break;

  case 1246:
#line 2824 "frame/parser.Y"
    {fr->updateFitsCmd(1);;}
    break;

  case 1247:
#line 2826 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)),1);;}
    break;

  case 1249:
#line 2830 "frame/parser.Y"
    {fr->sliceCmd(2, (yyvsp[(1) - (1)].integer));;}
    break;

  case 1250:
#line 2831 "frame/parser.Y"
    {fr->sliceCmd(2, (yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1251:
#line 2832 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer), (yyvsp[(2) - (2)].integer));;}
    break;

  case 1252:
#line 2833 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (3)].integer), (yyvsp[(2) - (3)].real), (Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1253:
#line 2836 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1254:
#line 2837 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1255:
#line 2841 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1257:
#line 2843 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1260:
#line 2848 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1261:
#line 2849 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1262:
#line 2850 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1263:
#line 2853 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1264:
#line 2854 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1265:
#line 2855 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1266:
#line 2858 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1267:
#line 2860 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1268:
#line 2865 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (4)].integer), (FitsImage*)(yyvsp[(2) - (4)].ptr), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1269:
#line 2868 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1270:
#line 2875 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1271:
#line 2877 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1272:
#line 2879 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1273:
#line 2884 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1275:
#line 2888 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1276:
#line 2889 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1277:
#line 2890 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1278:
#line 2892 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1279:
#line 2894 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1280:
#line 2899 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 11071 "frame/parser.C"
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


#line 2903 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

