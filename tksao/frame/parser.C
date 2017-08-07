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
     FORMAT_ = 386,
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
     HELIOECLIPTIC_ = 403,
     HIDE_ = 404,
     HIGHLITE_ = 405,
     HISTEQU_ = 406,
     HISTOGRAM_ = 407,
     HORIZONTAL_ = 408,
     ICRS_ = 409,
     ID_ = 410,
     IIS_ = 411,
     IMAGE_ = 412,
     INCLUDE_ = 413,
     INCR_ = 414,
     INFO_ = 415,
     ITERATION_ = 416,
     IRAF_ = 417,
     IRAFMIN_ = 418,
     J2000_ = 419,
     KEY_ = 420,
     KEYWORD_ = 421,
     LABEL_ = 422,
     LENGTH_ = 423,
     LEVEL_ = 424,
     LITTLE_ = 425,
     LITTLEENDIAN_ = 426,
     LINE_ = 427,
     LINEAR_ = 428,
     LIST_ = 429,
     LOAD_ = 430,
     LOCAL_ = 431,
     LOG_ = 432,
     MACOSX_ = 433,
     MAGNIFIER_ = 434,
     MATCH_ = 435,
     MAP_ = 436,
     MARK_ = 437,
     MARKER_ = 438,
     MASK_ = 439,
     MESSAGE_ = 440,
     METHOD_ = 441,
     MINMAX_ = 442,
     MINOR_ = 443,
     MIP_ = 444,
     MMAP_ = 445,
     MMAPINCR_ = 446,
     MOSAIC_ = 447,
     MODE_ = 448,
     MOTION_ = 449,
     MOVE_ = 450,
     NAME_ = 451,
     NAN_ = 452,
     NATIVE_ = 453,
     NAXES_ = 454,
     NEW_ = 455,
     NEXT_ = 456,
     NO_ = 457,
     NONE_ = 458,
     NOW_ = 459,
     NRRD_ = 460,
     NUMBER_ = 461,
     OBJECT_ = 462,
     OFF_ = 463,
     ON_ = 464,
     ONLY_ = 465,
     OPTION_ = 466,
     ORIENT_ = 467,
     PAN_ = 468,
     PANNER_ = 469,
     PARSER_ = 470,
     PASTE_ = 471,
     PERF_ = 472,
     PHOTO_ = 473,
     PHYSICAL_ = 474,
     PIXEL_ = 475,
     PLOT2D_ = 476,
     PLOT3D_ = 477,
     POINT_ = 478,
     POINTER_ = 479,
     POLYGON_ = 480,
     POSTSCRIPT_ = 481,
     POW_ = 482,
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
     SUPERGALACTIC_ = 532,
     SUM_ = 533,
     SYSTEM_ = 534,
     TABLE_ = 535,
     TAG_ = 536,
     TEMPLATE_ = 537,
     TEXT_ = 538,
     THREADS_ = 539,
     THREED_ = 540,
     THRESHOLD_ = 541,
     THICK_ = 542,
     TRANSPARENCY_ = 543,
     TO_ = 544,
     TOGGLE_ = 545,
     TOPHAT_ = 546,
     TRUE_ = 547,
     TYPE_ = 548,
     UNDO_ = 549,
     UNHIGHLITE_ = 550,
     UNLOAD_ = 551,
     UNSELECT_ = 552,
     UPDATE_ = 553,
     USER_ = 554,
     VALUE_ = 555,
     VAR_ = 556,
     VIEW_ = 557,
     VECTOR_ = 558,
     VERSION_ = 559,
     VERTEX_ = 560,
     VERTICAL_ = 561,
     WARP_ = 562,
     WCS_ = 563,
     WCSA_ = 564,
     WCSB_ = 565,
     WCSC_ = 566,
     WCSD_ = 567,
     WCSE_ = 568,
     WCSF_ = 569,
     WCSG_ = 570,
     WCSH_ = 571,
     WCSI_ = 572,
     WCSJ_ = 573,
     WCSK_ = 574,
     WCSL_ = 575,
     WCSM_ = 576,
     WCSN_ = 577,
     WCSO_ = 578,
     WCSP_ = 579,
     WCSQ_ = 580,
     WCSR_ = 581,
     WCSS_ = 582,
     WCST_ = 583,
     WCSU_ = 584,
     WCSV_ = 585,
     WCSW_ = 586,
     WCSX_ = 587,
     WCSY_ = 588,
     WCSZ_ = 589,
     WCS0_ = 590,
     WFPC2_ = 591,
     WIDTH_ = 592,
     WIN32_ = 593,
     XML_ = 594,
     XY_ = 595,
     YES_ = 596,
     ZMAX_ = 597,
     ZSCALE_ = 598,
     ZOOM_ = 599
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
#define FORMAT_ 386
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
#define HELIOECLIPTIC_ 403
#define HIDE_ 404
#define HIGHLITE_ 405
#define HISTEQU_ 406
#define HISTOGRAM_ 407
#define HORIZONTAL_ 408
#define ICRS_ 409
#define ID_ 410
#define IIS_ 411
#define IMAGE_ 412
#define INCLUDE_ 413
#define INCR_ 414
#define INFO_ 415
#define ITERATION_ 416
#define IRAF_ 417
#define IRAFMIN_ 418
#define J2000_ 419
#define KEY_ 420
#define KEYWORD_ 421
#define LABEL_ 422
#define LENGTH_ 423
#define LEVEL_ 424
#define LITTLE_ 425
#define LITTLEENDIAN_ 426
#define LINE_ 427
#define LINEAR_ 428
#define LIST_ 429
#define LOAD_ 430
#define LOCAL_ 431
#define LOG_ 432
#define MACOSX_ 433
#define MAGNIFIER_ 434
#define MATCH_ 435
#define MAP_ 436
#define MARK_ 437
#define MARKER_ 438
#define MASK_ 439
#define MESSAGE_ 440
#define METHOD_ 441
#define MINMAX_ 442
#define MINOR_ 443
#define MIP_ 444
#define MMAP_ 445
#define MMAPINCR_ 446
#define MOSAIC_ 447
#define MODE_ 448
#define MOTION_ 449
#define MOVE_ 450
#define NAME_ 451
#define NAN_ 452
#define NATIVE_ 453
#define NAXES_ 454
#define NEW_ 455
#define NEXT_ 456
#define NO_ 457
#define NONE_ 458
#define NOW_ 459
#define NRRD_ 460
#define NUMBER_ 461
#define OBJECT_ 462
#define OFF_ 463
#define ON_ 464
#define ONLY_ 465
#define OPTION_ 466
#define ORIENT_ 467
#define PAN_ 468
#define PANNER_ 469
#define PARSER_ 470
#define PASTE_ 471
#define PERF_ 472
#define PHOTO_ 473
#define PHYSICAL_ 474
#define PIXEL_ 475
#define PLOT2D_ 476
#define PLOT3D_ 477
#define POINT_ 478
#define POINTER_ 479
#define POLYGON_ 480
#define POSTSCRIPT_ 481
#define POW_ 482
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
#define SUPERGALACTIC_ 532
#define SUM_ 533
#define SYSTEM_ 534
#define TABLE_ 535
#define TAG_ 536
#define TEMPLATE_ 537
#define TEXT_ 538
#define THREADS_ 539
#define THREED_ 540
#define THRESHOLD_ 541
#define THICK_ 542
#define TRANSPARENCY_ 543
#define TO_ 544
#define TOGGLE_ 545
#define TOPHAT_ 546
#define TRUE_ 547
#define TYPE_ 548
#define UNDO_ 549
#define UNHIGHLITE_ 550
#define UNLOAD_ 551
#define UNSELECT_ 552
#define UPDATE_ 553
#define USER_ 554
#define VALUE_ 555
#define VAR_ 556
#define VIEW_ 557
#define VECTOR_ 558
#define VERSION_ 559
#define VERTEX_ 560
#define VERTICAL_ 561
#define WARP_ 562
#define WCS_ 563
#define WCSA_ 564
#define WCSB_ 565
#define WCSC_ 566
#define WCSD_ 567
#define WCSE_ 568
#define WCSF_ 569
#define WCSG_ 570
#define WCSH_ 571
#define WCSI_ 572
#define WCSJ_ 573
#define WCSK_ 574
#define WCSL_ 575
#define WCSM_ 576
#define WCSN_ 577
#define WCSO_ 578
#define WCSP_ 579
#define WCSQ_ 580
#define WCSR_ 581
#define WCSS_ 582
#define WCST_ 583
#define WCSU_ 584
#define WCSV_ 585
#define WCSW_ 586
#define WCSX_ 587
#define WCSY_ 588
#define WCSZ_ 589
#define WCS0_ 590
#define WFPC2_ 591
#define WIDTH_ 592
#define WIN32_ 593
#define XML_ 594
#define XY_ 595
#define YES_ 596
#define ZMAX_ 597
#define ZSCALE_ 598
#define ZOOM_ 599




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
#line 844 "frame/parser.C"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 857 "frame/parser.C"

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
#define YYLAST   5542

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  349
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  217
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1282
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2840

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   599

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
       2,   348,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   346,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   347,   345,
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
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344
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
    3072,  3077,  3084,  3092,  3100,  3103,  3107,  3111,  3115,  3120,
    3123,  3126,  3131,  3139,  3150,  3154,  3156,  3160,  3163,  3166,
    3169,  3172,  3176,  3182,  3187,  3193,  3196,  3204,  3208,  3211,
    3214,  3218,  3221,  3224,  3227,  3231,  3234,  3238,  3243,  3247,
    3251,  3257,  3264,  3269,  3272,  3276,  3279,  3282,  3287,  3291,
    3295,  3298,  3302,  3304,  3307,  3309,  3312,  3315,  3318,  3320,
    3322,  3324,  3326,  3329,  3331,  3334,  3337,  3339,  3342,  3345,
    3347,  3350,  3352,  3354,  3356,  3358,  3360,  3362,  3364,  3366,
    3367,  3369,  3372,  3375,  3378,  3382,  3388,  3396,  3404,  3411,
    3418,  3425,  3432,  3438,  3445,  3452,  3459,  3466,  3473,  3480,
    3487,  3499,  3507,  3515,  3523,  3533,  3543,  3554,  3567,  3580,
    3583,  3586,  3590,  3595,  3600,  3605,  3608,  3613,  3618,  3620,
    3622,  3624,  3626,  3628,  3630,  3632,  3634,  3637,  3639,  3641,
    3643,  3647,  3651,  3656,  3663,  3674,  3682,  3690,  3696,  3701,
    3708,  3719,  3727,  3735,  3741,  3744,  3747,  3751,  3756,  3762,
    3766,  3772,  3778,  3782,  3787,  3793,  3799,  3805,  3809,  3815,
    3818,  3822,  3826,  3832,  3836,  3840,  3844,  3849,  3855,  3861,
    3865,  3871,  3877,  3881,  3886,  3892,  3898,  3901,  3904,  3908,
    3914,  3921,  3928,  3932,  3936,  3940,  3947,  3953,  3959,  3962,
    3966,  3970,  3976,  3983,  3987,  3990,  3993,  3997,  4000,  4004,
    4007,  4011,  4017,  4024,  4027,  4030,  4033,  4035,  4040,  4045,
    4047,  4050,  4053,  4056,  4059,  4062,  4065,  4068,  4072,  4075,
    4079,  4082,  4086,  4088,  4090,  4092,  4094,  4096,  4097,  4100,
    4101,  4104,  4105,  4107,  4108,  4109,  4111,  4113,  4115,  4117,
    4119,  4127,  4136,  4139,  4144,  4147,  4152,  4159,  4162,  4164,
    4166,  4170,  4174,  4176,  4180,  4185,  4188,  4190,  4194,  4198,
    4203,  4207,  4211,  4215,  4217,  4219,  4221,  4223,  4225,  4227,
    4229,  4231,  4233,  4235,  4237,  4239,  4241,  4243,  4246,  4247,
    4248,  4251,  4253,  4257,  4259,  4263,  4265,  4268,  4271,  4273,
    4277,  4278,  4279,  4282,  4285,  4287,  4291,  4297,  4299,  4302,
    4305,  4308,  4310,  4312,  4314,  4316,  4321,  4324,  4328,  4332,
    4335,  4339,  4342,  4345,  4348,  4352,  4356,  4360,  4363,  4367,
    4369,  4373,  4377,  4379,  4382,  4385,  4388,  4391,  4393,  4395,
    4397,  4399,  4402,  4405,  4409,  4413,  4415,  4418,  4422,  4426,
    4428,  4431,  4433,  4435,  4437,  4439,  4441,  4444,  4447,  4452,
    4454,  4457,  4460,  4463,  4467,  4469,  4471,  4473,  4476,  4479,
    4482,  4485,  4488,  4492,  4496,  4500,  4504,  4508,  4512,  4516,
    4518,  4521,  4524,  4527,  4531,  4534,  4538,  4542,  4545,  4548,
    4551,  4554,  4557,  4560,  4563,  4566,  4569,  4572,  4575,  4578,
    4581,  4584,  4588,  4592,  4596,  4599,  4602,  4605,  4608,  4611,
    4614,  4617,  4620,  4623,  4626,  4629,  4632,  4636,  4640,  4644,
    4649,  4656,  4658,  4660,  4662,  4664,  4666,  4667,  4673,  4675,
    4682,  4686,  4688,  4691,  4694,  4698,  4701,  4705,  4709,  4712,
    4715,  4718,  4721,  4724,  4727,  4731,  4734,  4737,  4741,  4743,
    4747,  4752,  4754,  4757,  4763,  4770,  4777,  4780,  4782,  4785,
    4788,  4794,  4801
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     350,     0,    -1,    96,   352,    -1,    20,   382,    -1,    44,
     384,    -1,    41,    66,     5,    -1,    46,   389,    -1,    59,
      -1,    64,    -1,    65,   391,    -1,    67,   281,     5,    -1,
      68,   396,    -1,    69,   398,    -1,    77,   399,    -1,    84,
     408,    -1,    86,   410,    -1,    87,   411,    -1,    95,   353,
      -1,   125,   413,    -1,   137,   414,    -1,   141,   456,    -1,
     144,   459,    -1,   149,    -1,   150,   353,    -1,   156,   465,
      -1,   162,    16,     4,    -1,   175,   468,    -1,   178,   486,
      -1,   179,   487,    -1,   180,   488,    -1,   183,   504,   489,
      -1,   184,   523,    -1,   197,    66,     5,    -1,   212,   524,
      -1,   213,   525,    -1,   214,   528,    -1,   234,    88,    -1,
     226,   529,    -1,   240,    -1,   237,   504,   531,    -1,   242,
     536,    -1,   244,   537,    -1,   249,   539,    -1,   262,    -1,
     268,   554,    -1,   284,     4,    -1,   285,   377,    -1,   296,
      -1,   298,   556,    -1,   304,    -1,   307,   558,    -1,   308,
     559,    -1,   338,   563,    -1,   344,   564,    -1,     3,    -1,
       4,    -1,   209,    -1,   208,    -1,    29,   353,    -1,   192,
     353,    -1,   215,   353,    -1,   217,   353,    -1,   308,   353,
      -1,    44,   353,    -1,    46,   353,    -1,    76,   353,    -1,
      84,   353,    -1,   142,   353,    -1,   242,   353,    -1,     4,
      -1,   341,    -1,   345,    -1,   209,    -1,   292,    -1,   202,
      -1,   346,    -1,   208,    -1,   119,    -1,    -1,   243,    38,
      -1,   133,    38,    -1,   243,    -1,   133,    -1,    -1,   356,
      -1,   351,    -1,     7,    -1,     8,    -1,     9,    -1,    10,
      -1,    11,    -1,   357,   357,    -1,   358,   359,    -1,   359,
     359,    -1,   351,   351,    -1,   157,    -1,   219,    -1,   101,
      -1,    19,    -1,   362,    -1,   308,    -1,   309,    -1,   310,
      -1,   311,    -1,   312,    -1,   313,    -1,   314,    -1,   315,
      -1,   316,    -1,   317,    -1,   318,    -1,   319,    -1,   320,
      -1,   321,    -1,   322,    -1,   323,    -1,   324,    -1,   325,
      -1,   326,    -1,   327,    -1,   328,    -1,   329,    -1,   330,
      -1,   331,    -1,   332,    -1,   333,    -1,   334,    -1,   335,
      -1,    56,    -1,   214,    -1,   173,    -1,   177,    -1,   227,
      -1,   272,    -1,   273,    -1,    28,    -1,   264,    -1,   151,
      -1,    30,    -1,   251,    -1,   246,    -1,    94,    -1,   163,
      -1,    -1,   127,    -1,   128,    -1,    35,    -1,   129,    -1,
     164,    -1,   154,    -1,   135,    -1,   277,    -1,   106,    -1,
     148,    -1,    -1,    97,    -1,   257,    -1,    -1,    97,    -1,
      24,    -1,    25,    -1,    -1,   261,    -1,   165,    -1,    -1,
      17,    -1,   159,    -1,    -1,   157,    -1,   184,    -1,    -1,
      62,    -1,    48,    -1,   102,    -1,    85,    -1,   347,    -1,
      27,    -1,    51,    -1,    -1,     4,    -1,    82,    -1,   152,
      -1,   221,    -1,   222,    -1,   235,    -1,   275,    -1,    -1,
      32,    -1,   278,    -1,    -1,   198,    -1,    42,    -1,    43,
      -1,   170,    -1,   171,    -1,   302,   381,    -1,    47,   378,
      -1,    74,   379,    -1,   150,   380,    -1,   186,   534,    -1,
      37,   535,    -1,   250,   351,    -1,   229,    -1,   286,   351,
      -1,   353,    -1,    66,     5,    -1,   353,    -1,    66,     5,
      -1,   353,    -1,    66,     5,    -1,   351,   351,    -1,   223,
     351,   351,   351,   351,   351,    -1,    40,   351,   351,    -1,
     194,   351,   351,    -1,   111,   351,   351,    -1,   240,    -1,
     258,   383,    -1,    62,   351,   351,    -1,   109,   351,   351,
      -1,    48,   351,   351,    -1,   225,   351,   351,    -1,   223,
     351,   351,    -1,   303,   351,   351,    -1,    22,   351,   351,
      -1,   110,   351,   351,    -1,    49,   351,   351,    -1,    12,
     385,    -1,    71,     5,     5,     5,    -1,   100,     4,    -1,
     118,   386,    -1,   134,   387,    -1,    53,   265,     4,    -1,
     289,   388,    -1,   122,     5,    -1,    59,    -1,   351,   351,
      -1,   351,    -1,   351,   351,    -1,   351,    12,   351,   351,
      -1,   351,   351,    12,   351,   351,    -1,   289,   351,    -1,
     289,   351,   351,    -1,   289,   351,    12,   351,   351,    -1,
     289,   351,   351,    12,   351,   351,    -1,    32,    -1,   278,
      -1,   123,    -1,   351,   351,    12,    59,     5,     5,     5,
      -1,   351,   351,     4,   351,   351,    12,    59,     5,     5,
       5,     5,    -1,   351,   351,    12,   351,   351,     5,     5,
       5,    -1,   351,   351,     4,   351,   351,    12,   351,   351,
       5,     5,     5,     5,    -1,   351,    -1,   351,   351,    -1,
     289,   390,    -1,   123,    -1,   351,    -1,   351,   351,    -1,
     253,   392,    -1,   193,   393,    -1,   187,   394,    -1,   299,
     351,   351,    -1,   343,   395,    -1,   229,   353,    -1,   138,
      -1,   176,    -1,   351,    -1,   187,    -1,   343,    -1,   342,
      -1,   299,    -1,     4,   365,    -1,   193,   365,    -1,   246,
       4,    -1,   351,     4,     4,    -1,    78,   351,    -1,   246,
       4,    -1,   172,     4,    -1,     4,   351,   351,     4,     6,
       4,    -1,   242,   351,   351,   351,   351,   351,   351,     4,
       6,     4,    -1,    40,    -1,   194,   397,    -1,   111,    -1,
       4,   351,   351,     4,     6,     4,    -1,   242,   351,   351,
     351,   351,   351,   351,     4,     6,     4,    -1,   364,    -1,
     177,   351,    -1,    83,   400,    -1,    99,   401,    -1,   175,
     402,    -1,   216,   406,    -1,   249,   407,    -1,     5,     4,
       4,   405,     4,     4,   364,   351,   403,   404,   351,   351,
       5,    -1,     5,     4,     4,   405,     4,     4,   364,   351,
     351,   404,   351,   351,     5,    -1,     5,     4,     4,   405,
       4,     4,   364,   351,   403,   351,   351,     5,    -1,     5,
       4,     4,   405,     4,     4,   364,   351,   351,   351,   351,
       5,    -1,   225,    -1,    -1,    31,    -1,     5,    -1,     5,
       5,     4,   353,    -1,     5,     4,   353,     5,   361,   366,
      -1,   187,    -1,   343,    -1,   342,    -1,   299,    -1,   138,
      -1,   176,    -1,   268,    -1,    46,    -1,     5,    -1,     5,
       5,     4,   353,    -1,     5,   361,   366,    -1,    31,     5,
     361,   366,    -1,    -1,   351,   351,   351,   351,   361,   366,
      -1,    59,   360,   361,   366,   351,   351,   361,   368,    -1,
     285,   409,    -1,    40,   351,   351,    -1,   194,   351,   351,
      -1,   111,   351,   351,    -1,    -1,   351,   351,   361,    -1,
      40,   351,   351,     4,    -1,   194,   351,   351,     4,    -1,
     111,   351,   351,     4,    -1,   363,   351,   351,    -1,   361,
     366,   360,    -1,   353,    -1,   307,   351,   351,    -1,    40,
     194,   363,   351,   351,    -1,   194,   363,   351,   351,    -1,
      40,   194,   361,   360,    -1,   194,   361,   360,    -1,    33,
       4,    -1,    -1,    32,    -1,   278,    -1,   144,   117,     5,
      -1,    41,    66,    -1,    44,   415,    -1,    46,   417,    -1,
      65,   418,    -1,    68,   422,    -1,    67,   421,    -1,    69,
     424,    -1,    77,   426,    -1,    79,   429,    -1,    84,   430,
      -1,    86,   431,    -1,    88,   433,    -1,    87,   432,    -1,
      93,   434,    -1,    95,    -1,   124,   438,    -1,   141,   444,
      -1,   152,     5,     5,     4,    -1,   153,    89,     5,     5,
     351,   351,   363,     4,   412,    -1,   156,   436,    -1,   160,
     435,    -1,   162,    16,    -1,   187,    -1,   183,   504,   498,
      -1,   184,   445,    -1,   197,    66,    -1,   212,    -1,   213,
     446,    -1,   220,   280,   363,   351,   351,     4,     4,     5,
      -1,   242,   447,    -1,   244,    -1,   268,   448,    -1,   284,
      -1,   285,   449,    -1,   293,    -1,   300,   363,   351,   351,
      -1,   306,    89,     5,     5,   351,   351,   363,     4,   412,
      -1,   308,   454,    -1,   344,    -1,   100,    -1,   118,    -1,
     134,    -1,    53,   265,    -1,    88,    -1,   122,    -1,    71,
     416,    -1,   174,    -1,    -1,   187,     5,    -1,   103,     5,
      -1,   118,    -1,    -1,   403,   404,    -1,   351,   404,    -1,
     253,    -1,   193,    -1,   187,   419,    -1,   299,   169,    -1,
     343,   420,    -1,   229,    -1,   193,    -1,   246,    -1,    78,
      -1,   246,    -1,   172,    -1,    -1,   281,    -1,   169,   423,
      -1,     4,    -1,     4,   363,   351,   351,    -1,     4,   351,
     351,   364,   351,    -1,    -1,   169,   425,    -1,   177,    -1,
       4,   351,   351,   364,   351,    -1,   361,   366,    -1,    65,
     427,    -1,    66,    -1,    91,    -1,   169,    -1,   206,   169,
      -1,   186,    -1,    69,   428,    -1,   268,    -1,   337,    -1,
      -1,   193,    -1,   253,    -1,    -1,   177,    -1,   351,   351,
     361,   366,   367,    -1,   363,   351,   351,   361,   366,   367,
      -1,   351,   361,   361,     4,    -1,   361,   366,   367,    -1,
      59,   361,   366,   367,   361,   368,    -1,   285,   361,    -1,
     363,    -1,   361,   366,   367,    -1,   276,    -1,    33,    -1,
     363,    -1,   361,   366,   367,    -1,   361,   366,   360,   351,
     351,     5,    -1,     4,   361,   366,   360,   351,   351,     5,
      -1,   363,   351,   351,     4,     4,    -1,     5,    -1,    65,
      -1,   363,   351,   351,     5,    -1,     6,     4,     4,     4,
       4,    -1,    88,    -1,   120,   196,   437,    -1,    -1,     4,
      -1,   351,   351,    -1,   199,    -1,    59,   361,   366,   367,
      -1,    81,    -1,   100,   441,    -1,    45,    -1,   117,   439,
      -1,   120,   196,   442,    -1,   146,   440,    -1,   147,    -1,
     207,   196,    -1,   265,    -1,   265,   361,   366,   368,    -1,
     266,   443,    -1,   337,    -1,     4,    -1,   363,   351,   351,
      -1,     4,    -1,   166,     5,    -1,     4,   166,     5,    -1,
     308,     4,    -1,    -1,     4,    -1,   354,    -1,   354,   363,
     351,   351,    -1,   354,     4,    -1,    -1,     4,    -1,   361,
      -1,     4,   361,    -1,    -1,   211,    -1,   301,    -1,    66,
      -1,   182,    -1,   288,    -1,   229,    -1,    61,    -1,   279,
      -1,   302,    -1,   134,    -1,   236,    -1,   236,   188,    -1,
     263,    -1,   263,   188,    -1,    21,    -1,   302,   453,    -1,
      47,   450,    -1,    74,   451,    -1,   150,   452,    -1,   186,
      -1,    37,    -1,   250,    -1,    -1,    66,    -1,    -1,    66,
      -1,    -1,    66,    -1,    -1,   223,    -1,    -1,    16,   455,
      -1,   196,   362,    -1,    -1,   224,    -1,    83,   457,    -1,
      99,    -1,   361,   366,   367,   458,     5,     5,    -1,   361,
     366,   367,   458,     5,    -1,    20,    -1,   232,    -1,    19,
      -1,    44,   460,    -1,    77,   461,    -1,    84,    -1,    94,
      -1,    95,    -1,   101,    -1,   124,   462,    -1,   141,    -1,
     156,    -1,   163,    -1,   183,   463,    -1,   219,    -1,   268,
      -1,   279,   361,    -1,   308,   464,    -1,    72,     5,    -1,
      -1,    31,    -1,    -1,    44,    -1,    87,    -1,   192,    -1,
     150,    -1,   255,    -1,   216,    -1,   294,    -1,   361,    -1,
     115,   361,    -1,    58,   361,    -1,    18,    -1,   285,   361,
      -1,   200,     4,     4,    -1,   116,    -1,   185,     5,    -1,
      88,   467,    -1,   256,   120,   196,   466,    -1,   256,     6,
       4,     4,     4,     4,    -1,   298,    -1,   308,   351,   351,
     351,   351,   351,   351,   351,   351,     4,    -1,     5,    -1,
       5,     4,    -1,     4,     4,    56,    -1,     4,     4,   361,
      -1,   193,   353,    -1,    26,   469,    -1,   112,   471,    -1,
     124,   472,    -1,   159,   485,    -1,   205,   483,    -1,   218,
     484,    -1,     5,    14,     5,   371,    -1,     5,    15,     5,
     371,    -1,     5,    61,     5,   371,    -1,     5,   190,   371,
      -1,     5,   191,   371,    -1,     5,   259,   369,     4,   371,
      -1,     5,   269,     4,   371,    -1,     5,   270,     4,   371,
      -1,     5,   301,     5,   371,    -1,   242,    87,   470,    -1,
       5,    14,     5,    -1,     5,    15,     5,    -1,     5,    61,
       5,    -1,     5,   190,    -1,     5,   191,    -1,     5,   259,
     369,     4,    -1,     5,   269,     4,    -1,     5,   270,     4,
      -1,     5,   301,     5,    -1,     5,     5,   267,    -1,     5,
      14,     5,   371,    -1,     5,    15,     5,   371,    -1,     5,
      61,     5,   371,    -1,     5,   190,   370,   371,    -1,     5,
       5,   267,   370,   371,    -1,     5,   191,   370,   371,    -1,
       5,   259,   369,     4,   370,   371,    -1,     5,   274,   369,
       4,     4,   370,   371,    -1,     5,   269,     4,   371,    -1,
       5,   270,     4,   371,    -1,     5,   301,     5,   370,   371,
      -1,   266,   473,    -1,   117,    87,   474,    -1,   242,   157,
     482,    -1,   242,    87,   481,    -1,   192,   475,    -1,     5,
      14,     5,    -1,     5,    15,     5,    -1,     5,    61,     5,
      -1,     5,   190,   370,    -1,     5,     5,   267,   370,    -1,
       5,   191,   370,    -1,     5,   259,   369,     4,   370,    -1,
       5,   274,   369,     4,     4,   370,    -1,     5,   269,     4,
      -1,     5,   270,     4,    -1,     5,   301,     5,   370,    -1,
       5,    14,     5,    -1,     5,    15,     5,    -1,     5,    61,
       5,    -1,     5,   190,   370,    -1,     5,   191,   370,    -1,
       5,   259,   369,     4,   370,    -1,     5,   269,     4,    -1,
       5,   270,     4,    -1,     5,   301,     5,   370,    -1,   157,
     162,   476,    -1,   162,   477,    -1,   157,   478,    -1,   479,
      -1,   157,   336,   480,    -1,     5,    14,     5,   371,    -1,
       5,    15,     5,   371,    -1,     5,    61,     5,   371,    -1,
       5,   190,   370,   371,    -1,     5,   191,   370,   371,    -1,
       5,   259,   369,     4,   370,   371,    -1,     5,   269,     4,
     371,    -1,     5,   270,     4,   371,    -1,     5,   301,     5,
     370,   371,    -1,     5,    14,     5,   371,    -1,     5,    15,
       5,   371,    -1,     5,    61,     5,   371,    -1,     5,   190,
     370,   371,    -1,     5,     5,   267,   370,   371,    -1,     5,
     191,   370,   371,    -1,     5,   259,   369,     4,   370,   371,
      -1,     5,   274,   369,     4,     4,   370,   371,    -1,     5,
     269,     4,   371,    -1,     5,   270,     4,   371,    -1,     5,
     301,     5,   370,   371,    -1,   362,     5,    14,     5,   371,
      -1,   362,     5,    15,     5,   371,    -1,   362,     5,    61,
       5,   371,    -1,   362,     5,   190,   370,   371,    -1,   362,
       5,   191,   370,   371,    -1,   362,     5,   259,   369,     4,
     370,   371,    -1,   362,     5,   269,     4,   371,    -1,   362,
       5,   270,     4,   371,    -1,   362,     5,   301,     5,   370,
     371,    -1,   362,     5,    14,     5,   371,    -1,   362,     5,
      15,     5,   371,    -1,   362,     5,    61,     5,   371,    -1,
     362,     5,   190,   370,   371,    -1,   362,     5,     5,   267,
     370,   371,    -1,   362,     5,   191,   370,   371,    -1,   362,
       5,   259,   369,     4,   370,   371,    -1,   362,     5,   274,
     369,     4,     4,   370,   371,    -1,   362,     5,   269,     4,
     371,    -1,   362,     5,   270,     4,   371,    -1,   362,     5,
     301,     5,   370,   371,    -1,     5,    14,     5,    -1,     5,
      15,     5,    -1,     5,    61,     5,    -1,     5,   190,   370,
      -1,     5,   191,   370,    -1,     5,   259,   369,     4,   370,
      -1,     5,   269,     4,    -1,     5,   270,     4,    -1,     5,
     301,     5,   370,    -1,     5,    14,     5,    -1,     5,    15,
       5,    -1,     5,    61,     5,    -1,     5,   190,   370,    -1,
       5,     5,   267,   370,    -1,     5,   191,   370,    -1,     5,
     259,   369,     4,   370,    -1,     5,   274,   369,     4,     4,
     370,    -1,     5,   269,     4,    -1,     5,   270,     4,    -1,
       5,   301,     5,   370,    -1,     5,    14,     5,    -1,     5,
      15,     5,    -1,     5,    61,     5,    -1,     5,   190,   370,
      -1,     5,   191,   370,    -1,     5,   259,   369,     4,   370,
      -1,     5,   269,     4,    -1,     5,   270,     4,    -1,     5,
     301,     5,   370,    -1,     5,    14,     5,   371,    -1,     5,
      61,     5,   371,    -1,     5,   190,   371,    -1,     5,   259,
     369,     4,   371,    -1,     5,   269,     4,   371,    -1,     5,
     301,     5,   371,    -1,     5,     5,    -1,   266,     5,     5,
      -1,    93,     4,     4,     4,     4,     4,    -1,   187,     4,
       4,     4,     4,     4,    -1,   111,    -1,   228,    -1,   353,
      -1,   139,   353,    -1,    88,   353,    -1,    66,     5,    -1,
       5,     4,     4,    -1,   298,   351,   351,    -1,   344,   351,
      -1,     5,     5,   362,   366,     5,     5,   362,   366,   351,
     362,   368,     5,    -1,    60,   492,    -1,    66,     5,    -1,
      80,    -1,    73,   497,     5,    -1,    73,   497,   301,     5,
      -1,    75,    99,    -1,    -1,    83,   490,   493,    -1,    89,
      -1,    99,    -1,    99,    17,    -1,   105,   496,    -1,   114,
       4,    -1,   130,     5,    -1,   150,    17,    -1,   150,   210,
     351,   351,    -1,   150,   290,   351,   351,    -1,     4,    20,
     374,   353,    -1,     4,    21,   356,    -1,     4,    21,   356,
     363,    -1,     4,    21,   356,   361,   366,    -1,     4,    22,
     236,   351,   351,     4,   363,    -1,     4,    22,   236,   351,
     351,     4,   361,   368,    -1,     4,    22,   236,     5,   361,
     368,    -1,     4,    48,   121,   353,    -1,     4,    49,   236,
     351,   351,   351,     4,   363,    -1,     4,    49,   236,   351,
     351,   351,     4,   361,   368,    -1,     4,    49,   236,     5,
     361,   368,    -1,     4,    48,   236,   351,   351,   363,    -1,
       4,    48,   236,   351,   351,   361,   368,    -1,     4,    52,
     105,   356,   356,     4,   351,   351,   351,     4,    -1,     4,
      52,   105,   356,   356,     4,   351,   351,   351,     4,   363,
      -1,     4,    52,   105,   356,   356,     4,   351,   351,   351,
       4,   361,   366,    -1,     4,    52,   105,     5,     5,   361,
     366,   361,   368,    -1,     4,    55,   491,     5,     5,    -1,
       4,    62,   121,   353,    -1,     4,    62,   236,   351,   363,
      -1,     4,    62,   236,   351,   361,   368,    -1,     4,    66,
       5,    -1,     4,    74,    27,   353,   353,    -1,     4,    74,
     167,     5,     5,    -1,     4,    74,   236,   351,   363,    -1,
       4,    74,   236,   351,   361,   368,    -1,     4,    74,   279,
     361,   366,    -1,     4,    75,   138,   353,    -1,     4,    82,
     105,   356,   356,     4,   351,   351,     4,    -1,     4,    82,
     105,   356,   356,     4,   351,   351,     4,   363,    -1,     4,
      82,   105,   356,   356,     4,   351,   351,     4,   361,   366,
      -1,     4,    82,   105,     5,     5,   361,   366,   361,   368,
      -1,     4,    83,    22,   236,   351,   351,    -1,     4,    83,
      49,   236,   351,   351,    -1,     4,    83,    52,    21,   351,
     351,    -1,     4,    83,    52,   236,   351,   351,    -1,     4,
      83,   110,   236,   351,   351,    -1,     4,    83,   113,    21,
     351,   351,    -1,     4,    83,   113,   236,   351,   351,    -1,
       4,    83,    82,    21,   351,   351,    -1,     4,    83,    82,
     236,   351,   351,    -1,     4,    83,   225,   305,     4,   351,
     351,    -1,     4,    83,   254,   305,     4,   351,   351,    -1,
       4,    99,    -1,     4,    99,    22,     4,    -1,     4,    99,
      49,     4,    -1,     4,    99,    52,     4,    -1,     4,    99,
     110,     4,    -1,     4,    99,    55,   491,     5,    -1,     4,
      99,   113,     4,    -1,     4,    99,    82,     4,    -1,     4,
      99,   225,   305,     4,    -1,     4,    99,   254,   305,     4,
      -1,     4,    99,   281,    -1,     4,    99,   281,     5,    -1,
       4,    99,   281,     4,    -1,     4,   105,    40,     4,    -1,
       4,   109,   121,   353,    -1,     4,   109,   236,   351,   351,
     363,    -1,     4,   109,   236,   351,   351,   361,   368,    -1,
       4,   110,   236,   351,   351,   351,     4,   363,    -1,     4,
     110,   236,   351,   351,   351,     4,   361,   368,    -1,     4,
     110,   236,     5,   361,   368,    -1,     4,   113,   105,   356,
     356,     4,   351,   351,   351,     4,    -1,     4,   113,   105,
     356,   356,     4,   351,   351,   351,     4,   363,    -1,     4,
     113,   105,   356,   356,     4,   351,   351,   351,     4,   361,
     366,    -1,     4,   113,   105,     5,     5,   361,   366,   361,
     368,    -1,     4,   130,     5,    -1,     4,   150,    -1,     4,
     150,   210,    -1,     4,   172,    27,   353,   353,    -1,     4,
     172,   223,   363,   360,   360,    -1,     4,   172,   223,   361,
     366,   360,   360,    -1,     4,   195,   351,   351,    -1,     4,
     195,   132,    -1,     4,   195,    36,    -1,     4,   195,   289,
     363,   351,   351,    -1,     4,   195,   289,   361,   366,   360,
      -1,     4,   225,   240,   351,   351,   363,    -1,     4,   225,
     240,   351,   351,   361,   368,    -1,     4,   254,   240,   351,
     351,   363,    -1,     4,   254,   240,   351,   351,   361,   368,
      -1,     4,   223,   258,   372,    -1,     4,   223,   265,     4,
      -1,     4,   225,   121,   353,    -1,     4,   230,   363,   360,
     360,   351,    -1,     4,   230,   361,   366,   360,   360,   351,
     361,   368,    -1,     4,   231,   510,   353,    -1,     4,   244,
      40,    -1,     4,   245,   131,     5,    -1,     4,   245,   223,
     363,   360,   360,    -1,     4,   245,   223,   361,   366,   360,
     360,    -1,     4,   245,   279,   361,   366,   361,   368,    -1,
       4,   255,    -1,     4,   255,   210,    -1,     4,   281,     5,
      -1,     4,   283,     5,    -1,     4,   283,   244,   353,    -1,
       4,   295,    -1,     4,   297,    -1,     4,   303,    27,   353,
      -1,     4,   303,   223,   363,   360,   351,   356,    -1,     4,
     303,   223,   361,   366,   360,   361,   368,   351,   356,    -1,
       4,   337,     4,    -1,   165,    -1,   165,   351,   351,    -1,
     174,   505,    -1,   175,   506,    -1,   195,   507,    -1,   229,
     353,    -1,   231,   510,   353,    -1,   231,   510,   353,   351,
     351,    -1,   244,    40,   351,   351,    -1,   244,   194,   351,
     351,     4,    -1,   244,   111,    -1,   249,     5,   497,   361,
     366,   367,   353,    -1,   249,   282,     5,    -1,   255,   514,
      -1,   262,   515,    -1,     5,    66,     5,    -1,     5,    80,
      -1,     5,    99,    -1,     5,    89,    -1,     5,   130,     5,
      -1,     5,   150,    -1,     5,   150,   210,    -1,     5,   195,
     351,   351,    -1,     5,   195,   132,    -1,     5,   195,    36,
      -1,     5,   195,   289,   363,   360,    -1,     5,   195,   289,
     361,   366,   360,    -1,     5,   231,   510,   353,    -1,     5,
     255,    -1,     5,   255,   210,    -1,     5,   295,    -1,     5,
     297,    -1,   281,   105,     5,     5,    -1,   281,    99,     5,
      -1,   281,    99,    17,    -1,   281,     5,    -1,   281,   298,
       5,    -1,   216,    -1,   216,   361,    -1,   294,    -1,   295,
      17,    -1,   297,    17,    -1,   337,     4,    -1,   255,    -1,
     297,    -1,   150,    -1,   295,    -1,    40,   195,    -1,   195,
      -1,   111,   195,    -1,    40,   105,    -1,   105,    -1,   111,
     105,    -1,    40,   244,    -1,   244,    -1,   111,   244,    -1,
      99,    -1,   283,    -1,    66,    -1,   337,    -1,   231,    -1,
     130,    -1,   165,    -1,   298,    -1,    -1,     4,    -1,    30,
     353,    -1,   236,   351,    -1,   161,     4,    -1,   211,     4,
     351,    -1,    62,   351,   351,   351,   511,    -1,   109,   351,
     351,   351,   351,   355,   511,    -1,    48,   351,   351,   351,
     351,   355,   511,    -1,   225,   351,   351,   351,   351,   511,
      -1,   254,   351,   351,   351,   351,   511,    -1,   172,   351,
     351,   351,   351,   511,    -1,   303,   351,   351,   351,   351,
     511,    -1,   283,   351,   351,   355,   511,    -1,    62,   223,
     351,   351,   373,   511,    -1,    48,   223,   351,   351,   373,
     511,    -1,   102,   223,   351,   351,   373,   511,    -1,    85,
     223,   351,   351,   373,   511,    -1,   347,   223,   351,   351,
     373,   511,    -1,    27,   223,   351,   351,   373,   511,    -1,
      51,   223,   351,   351,   373,   511,    -1,   245,   351,   351,
     351,   351,   361,   366,   361,   368,     5,   511,    -1,    74,
     351,   351,   351,   361,   366,   511,    -1,   230,   351,   351,
     351,   351,   351,   511,    -1,    22,   351,   351,   351,   351,
       4,   511,    -1,   110,   351,   351,   351,   351,   351,     4,
     355,   511,    -1,    49,   351,   351,   351,   351,   351,     4,
     355,   511,    -1,    82,   351,   351,   356,   356,     4,   351,
     351,     4,   511,    -1,   113,   351,   351,   356,   356,     4,
     351,   351,   351,     4,   355,   511,    -1,    52,   351,   351,
     356,   356,     4,   351,   351,   351,     4,   355,   511,    -1,
      75,   511,    -1,   282,   494,    -1,     5,   351,   351,    -1,
     301,     5,   351,   351,    -1,   351,   351,   301,     5,    -1,
       5,   361,   366,   360,    -1,     4,     4,    -1,    40,   351,
     351,     4,    -1,   194,   351,   351,     4,    -1,   111,    -1,
     104,    -1,   339,    -1,    63,    -1,   248,    -1,   247,    -1,
     233,    -1,   340,    -1,    60,   499,    -1,    66,    -1,   130,
      -1,   114,    -1,   143,   351,   351,    -1,   155,   351,   351,
      -1,   149,    20,    82,   361,    -1,   149,    20,   152,     5,
       5,     4,    -1,   149,    20,   221,     5,     5,     5,     5,
     361,   366,   375,    -1,   149,    20,   222,     5,     5,   361,
     375,    -1,   149,    20,   235,     5,     5,     5,   361,    -1,
     149,    20,   275,   361,   366,    -1,     4,    20,    82,   361,
      -1,     4,    20,   152,     5,     5,     4,    -1,     4,    20,
     221,     5,     5,     5,     5,   361,   366,   375,    -1,     4,
      20,   222,     5,     5,   361,   375,    -1,     4,    20,   235,
       5,     5,     5,   361,    -1,     4,    20,   275,   361,   366,
      -1,   155,    17,    -1,     4,    21,    -1,     4,    21,   363,
      -1,     4,    21,   361,   366,    -1,     4,    22,   236,   361,
     368,    -1,     4,    48,   121,    -1,     4,    49,   236,   361,
     368,    -1,     4,    48,   236,   361,   368,    -1,     4,    52,
      21,    -1,     4,    52,    21,   363,    -1,     4,    52,    21,
     361,   366,    -1,     4,    52,   236,   361,   368,    -1,     4,
      59,   361,   366,   367,    -1,     4,    62,   121,    -1,     4,
      62,   236,   361,   368,    -1,     4,    66,    -1,     4,    74,
      27,    -1,     4,    74,   167,    -1,     4,    74,   236,   361,
     368,    -1,     4,    74,   279,    -1,     4,    75,   138,    -1,
       4,    82,    21,    -1,     4,    82,    21,   363,    -1,     4,
      82,    21,   361,   366,    -1,     4,    82,   236,   361,   368,
      -1,     4,   109,   121,    -1,     4,   109,   236,   361,   368,
      -1,     4,   110,   236,   361,   368,    -1,     4,   113,    21,
      -1,     4,   113,    21,   363,    -1,     4,   113,    21,   361,
     366,    -1,     4,   113,   236,   361,   368,    -1,     4,   130,
      -1,     4,   150,    -1,     4,   172,    27,    -1,     4,   172,
     168,   361,   368,    -1,     4,   172,   223,   361,   366,   367,
      -1,     4,   181,   168,   351,   361,   368,    -1,     4,   225,
     121,    -1,     4,   223,   258,    -1,     4,   223,   265,    -1,
       4,   230,   223,   361,   366,   367,    -1,     4,   230,   168,
     361,   368,    -1,     4,   230,   287,   361,   368,    -1,     4,
     231,    -1,     4,   231,   510,    -1,     4,   245,   131,    -1,
       4,   245,   168,   361,   368,    -1,     4,   245,   223,   361,
     366,   367,    -1,     4,   245,   279,    -1,     4,   255,    -1,
       4,   281,    -1,     4,   281,     4,    -1,     4,   283,    -1,
       4,   283,   244,    -1,     4,   293,    -1,     4,   303,    27,
      -1,     4,   303,   168,   361,   368,    -1,     4,   303,   223,
     361,   366,   367,    -1,     4,   337,    -1,   150,   500,    -1,
     150,   206,    -1,   206,    -1,   225,   254,   351,   351,    -1,
     254,   254,   351,   351,    -1,   229,    -1,   231,   510,    -1,
     255,   501,    -1,   255,   206,    -1,   262,   502,    -1,     5,
      66,    -1,     5,   130,    -1,     5,   155,    -1,     5,   231,
     510,    -1,     5,   281,    -1,     5,   281,   206,    -1,   281,
      17,    -1,   281,    98,   196,    -1,   337,    -1,    30,    -1,
     236,    -1,   161,    -1,   211,    -1,    -1,   351,   351,    -1,
      -1,   351,   351,    -1,    -1,   283,    -1,    -1,    -1,   224,
      -1,   237,    -1,   299,    -1,    57,    -1,    20,    -1,   497,
     361,   366,   367,   353,   512,   518,    -1,   255,   497,   361,
     366,   367,   353,   512,   518,    -1,   497,     5,    -1,   497,
       5,   361,   366,    -1,   497,     4,    -1,   497,     4,   361,
     366,    -1,   124,     5,     5,   495,     4,     5,    -1,   351,
     351,    -1,   132,    -1,    36,    -1,    40,   351,   351,    -1,
     194,   351,   351,    -1,   111,    -1,   289,   363,   360,    -1,
     289,   361,   366,   360,    -1,   508,   509,    -1,   509,    -1,
     510,   348,   353,    -1,    66,   348,     5,    -1,    92,   348,
       4,     4,    -1,   337,   348,     4,    -1,   130,   348,     5,
      -1,   283,   348,     5,    -1,   521,    -1,   522,    -1,   203,
      -1,   255,    -1,   150,    -1,    91,    -1,   126,    -1,   105,
      -1,   195,    -1,   244,    -1,    99,    -1,   158,    -1,   271,
      -1,   503,    -1,   503,   508,    -1,    -1,    -1,   513,   516,
      -1,    17,    -1,   210,   351,   351,    -1,   290,    -1,   290,
     351,   351,    -1,   353,    -1,   283,   353,    -1,   516,   517,
      -1,   517,    -1,   510,   348,   353,    -1,    -1,    -1,   519,
     520,    -1,   520,   521,    -1,   521,    -1,   281,   348,     5,
      -1,    55,   348,   491,     5,     5,    -1,    64,    -1,    66,
       5,    -1,   182,     4,    -1,   288,   351,    -1,   347,    -1,
     345,    -1,   340,    -1,   203,    -1,   351,   351,   351,   351,
      -1,   351,   351,    -1,   363,   351,   351,    -1,   361,   366,
     360,    -1,   289,   526,    -1,    39,   351,   351,    -1,   194,
     527,    -1,   229,   353,    -1,   351,   351,    -1,   363,   351,
     351,    -1,   361,   366,   360,    -1,    40,   351,   351,    -1,
     351,   351,    -1,   111,   351,   351,    -1,   353,    -1,   308,
     362,   366,    -1,     5,     4,     4,    -1,   298,    -1,    70,
     530,    -1,   169,     4,    -1,   241,     4,    -1,   250,   351,
      -1,    54,    -1,   140,    -1,   242,    -1,    90,    -1,   150,
     532,    -1,   255,   533,    -1,    40,   351,   351,    -1,   194,
     351,   351,    -1,   111,    -1,   260,   111,    -1,    40,   351,
     351,    -1,   194,   351,   351,    -1,   111,    -1,   260,   111,
      -1,   189,    -1,    13,    -1,   203,    -1,    34,    -1,   107,
      -1,    61,     5,    -1,   279,   361,    -1,   302,     4,     4,
       4,    -1,   351,    -1,   351,    97,    -1,   194,   538,    -1,
     289,   351,    -1,   289,   351,    97,    -1,    40,    -1,   351,
      -1,   111,    -1,    26,   540,    -1,   124,   542,    -1,   205,
     552,    -1,   112,   553,    -1,   218,     5,    -1,   120,     5,
     376,    -1,    61,     5,   376,    -1,   269,     4,   376,    -1,
     242,    87,   541,    -1,   120,     5,   376,    -1,    61,     5,
     376,    -1,   269,     4,   376,    -1,   543,    -1,   157,   543,
      -1,   280,   544,    -1,   266,   545,    -1,   117,    87,   546,
      -1,   192,   547,    -1,   242,   157,   549,    -1,   242,    87,
     550,    -1,   239,   551,    -1,   120,     5,    -1,    61,     5,
      -1,   269,     4,    -1,   120,     5,    -1,    61,     5,    -1,
     269,     4,    -1,   120,     5,    -1,    61,     5,    -1,   269,
       4,    -1,   120,     5,    -1,    61,     5,    -1,   269,     4,
      -1,   157,   548,    -1,   120,     5,     4,    -1,    61,     5,
       4,    -1,   269,     4,     4,    -1,   120,     5,    -1,    61,
       5,    -1,   269,     4,    -1,   120,     5,    -1,    61,     5,
      -1,   269,     4,    -1,   120,     5,    -1,    61,     5,    -1,
     269,     4,    -1,   120,     5,    -1,    61,     5,    -1,   269,
       4,    -1,   120,     5,   376,    -1,    61,     5,   376,    -1,
     269,     4,   376,    -1,   120,     5,     5,   376,    -1,   555,
       4,     4,   351,   351,   356,    -1,    99,    -1,    50,    -1,
     291,    -1,   136,    -1,   108,    -1,    -1,     4,   351,   351,
     351,   351,    -1,   204,    -1,   204,     4,   351,   351,   351,
     351,    -1,   124,   266,   557,    -1,     4,    -1,   351,   361,
      -1,     4,     4,    -1,     4,   351,   361,    -1,   351,   351,
      -1,   289,   351,   351,    -1,   362,   366,   367,    -1,    16,
     562,    -1,   240,     4,    -1,   238,   561,    -1,    23,   560,
      -1,     4,     4,    -1,     4,     5,    -1,   283,     4,     5,
      -1,     4,     4,    -1,     4,     5,    -1,   283,     4,     5,
      -1,     4,    -1,     4,   362,   366,    -1,     4,     6,   362,
     366,    -1,   228,    -1,   351,   351,    -1,   351,   351,    12,
     351,   351,    -1,   351,   351,    12,   363,   351,   351,    -1,
     351,   351,    12,   361,   366,   360,    -1,   289,   565,    -1,
     123,    -1,   123,   351,    -1,   351,   351,    -1,   351,   351,
      12,   351,   351,    -1,   351,   351,    12,   363,   351,   351,
      -1,   351,   351,    12,   361,   366,   360,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   451,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,   497,   498,
     499,   500,   501,   502,   505,   506,   509,   510,   511,   512,
     513,   514,   515,   516,   517,   518,   519,   520,   521,   524,
     526,   527,   528,   529,   531,   532,   533,   534,   537,   538,
     539,   540,   541,   544,   545,   548,   549,   550,   553,   556,
     559,   562,   574,   581,   588,   596,   597,   598,   599,   600,
     603,   604,   605,   606,   607,   608,   609,   610,   611,   612,
     613,   614,   615,   616,   617,   618,   619,   620,   621,   622,
     623,   624,   625,   626,   627,   628,   629,   630,   633,   634,
     637,   638,   639,   640,   641,   642,   643,   644,   647,   648,
     649,   650,   651,   654,   655,   656,   657,   658,   659,   660,
     661,   662,   663,   664,   667,   668,   669,   672,   673,   674,
     675,   678,   679,   680,   683,   684,   685,   688,   689,   690,
     693,   694,   695,   696,   697,   698,   699,   700,   703,   704,
     707,   708,   709,   710,   711,   712,   715,   716,   717,   720,
     721,   722,   723,   724,   725,   728,   729,   730,   731,   732,
     733,   734,   735,   736,   740,   741,   744,   745,   748,   749,
     752,   753,   755,   756,   757,   760,   761,   764,   766,   768,
     770,   772,   774,   776,   778,   780,   784,   785,   786,   787,
     788,   789,   790,   791,   794,   795,   798,   799,   800,   802,
     804,   805,   806,   808,   812,   813,   816,   817,   819,   822,
     824,   830,   831,   832,   835,   836,   837,   840,   841,   842,
     843,   844,   845,   851,   852,   855,   856,   857,   858,   859,
     862,   863,   864,   867,   868,   873,   878,   885,   887,   889,
     890,   891,   894,   896,   899,   900,   903,   904,   905,   906,
     907,   910,   912,   914,   919,   924,   927,   928,   931,   932,
     933,   940,   941,   942,   943,   946,   947,   950,   951,   954,
     955,   958,   960,   964,   965,   968,   970,   971,   972,   973,
     976,   977,   978,   979,   980,   983,   985,   987,   988,   990,
     992,   994,   996,  1000,  1003,  1004,  1005,  1008,  1011,  1012,
    1013,  1014,  1015,  1016,  1017,  1018,  1019,  1020,  1021,  1022,
    1023,  1024,  1025,  1026,  1027,  1028,  1029,  1031,  1032,  1033,
    1034,  1035,  1036,  1037,  1038,  1039,  1040,  1042,  1043,  1044,
    1045,  1046,  1047,  1048,  1050,  1052,  1053,  1056,  1057,  1058,
    1059,  1060,  1061,  1062,  1063,  1066,  1067,  1068,  1071,  1074,
    1075,  1077,  1079,  1080,  1081,  1082,  1083,  1084,  1091,  1092,
    1095,  1096,  1097,  1100,  1101,  1104,  1107,  1108,  1110,  1114,
    1115,  1116,  1119,  1123,  1125,  1126,  1127,  1128,  1129,  1130,
    1131,  1132,  1133,  1136,  1137,  1138,  1141,  1142,  1145,  1147,
    1153,  1157,  1159,  1161,  1164,  1165,  1167,  1170,  1173,  1174,
    1178,  1180,  1183,  1188,  1189,  1190,  1194,  1195,  1196,  1199,
    1200,  1201,  1204,  1205,  1207,  1208,  1209,  1210,  1211,  1212,
    1213,  1214,  1215,  1216,  1218,  1219,  1222,  1223,  1226,  1227,
    1228,  1229,  1232,  1233,  1236,  1238,  1241,  1245,  1246,  1247,
    1248,  1251,  1252,  1253,  1256,  1257,  1258,  1261,  1264,  1265,
    1266,  1269,  1270,  1271,  1272,  1273,  1274,  1277,  1278,  1279,
    1280,  1281,  1282,  1283,  1286,  1287,  1290,  1291,  1294,  1295,
    1298,  1299,  1302,  1303,  1304,  1307,  1308,  1311,  1312,  1315,
    1318,  1326,  1327,  1330,  1331,  1332,  1333,  1334,  1335,  1336,
    1337,  1338,  1339,  1340,  1341,  1342,  1343,  1344,  1345,  1348,
    1351,  1352,  1355,  1356,  1357,  1358,  1361,  1362,  1363,  1364,
    1367,  1368,  1369,  1370,  1371,  1374,  1375,  1376,  1377,  1378,
    1379,  1381,  1382,  1387,  1388,  1391,  1393,  1395,  1398,  1399,
    1400,  1401,  1402,  1403,  1406,  1408,  1410,  1412,  1413,  1415,
    1417,  1419,  1421,  1423,  1426,  1427,  1428,  1429,  1430,  1431,
    1433,  1434,  1435,  1438,  1441,  1443,  1445,  1447,  1449,  1451,
    1453,  1455,  1458,  1460,  1462,  1464,  1465,  1466,  1467,  1468,
    1471,  1472,  1473,  1474,  1475,  1476,  1477,  1479,  1481,  1482,
    1483,  1486,  1487,  1488,  1489,  1490,  1491,  1493,  1494,  1495,
    1498,  1499,  1500,  1501,  1502,  1505,  1508,  1511,  1514,  1517,
    1520,  1523,  1526,  1529,  1534,  1537,  1540,  1543,  1546,  1549,
    1552,  1555,  1558,  1561,  1564,  1569,  1572,  1575,  1578,  1581,
    1584,  1587,  1590,  1593,  1598,  1601,  1604,  1607,  1610,  1613,
    1616,  1619,  1622,  1625,  1628,  1633,  1635,  1636,  1637,  1638,
    1639,  1641,  1642,  1643,  1645,  1646,  1647,  1648,  1649,  1650,
    1651,  1653,  1655,  1656,  1657,  1660,  1661,  1662,  1663,  1664,
    1665,  1667,  1668,  1669,  1672,  1674,  1676,  1677,  1679,  1681,
    1685,  1686,  1689,  1690,  1691,  1694,  1701,  1702,  1703,  1704,
    1705,  1706,  1707,  1710,  1718,  1719,  1720,  1721,  1723,  1725,
    1726,  1726,  1727,  1728,  1729,  1730,  1731,  1732,  1734,  1735,
    1737,  1740,  1743,  1744,  1745,  1748,  1750,  1753,  1756,  1757,
    1760,  1764,  1767,  1769,  1772,  1775,  1779,  1784,  1789,  1791,
    1792,  1794,  1796,  1797,  1799,  1801,  1803,  1805,  1807,  1808,
    1810,  1812,  1816,  1821,  1823,  1825,  1827,  1829,  1831,  1833,
    1835,  1837,  1839,  1841,  1844,  1845,  1847,  1849,  1850,  1852,
    1854,  1855,  1856,  1858,  1860,  1861,  1862,  1864,  1865,  1866,
    1868,  1871,  1875,  1879,  1882,  1885,  1889,  1894,  1900,  1901,
    1902,  1904,  1905,  1907,  1911,  1913,  1914,  1915,  1917,  1920,
    1922,  1925,  1927,  1930,  1932,  1934,  1935,  1938,  1943,  1946,
    1947,  1948,  1951,  1954,  1958,  1959,  1961,  1962,  1963,  1965,
    1966,  1968,  1969,  1971,  1976,  1978,  1979,  1981,  1982,  1983,
    1984,  1985,  1986,  1988,  1990,  1992,  1993,  1995,  1996,  1998,
    2000,  2001,  2002,  2003,  2004,  2005,  2006,  2007,  2008,  2009,
    2010,  2012,  2014,  2016,  2017,  2018,  2019,  2021,  2022,  2023,
    2024,  2025,  2027,  2028,  2029,  2030,  2031,  2032,  2035,  2036,
    2037,  2038,  2039,  2040,  2041,  2042,  2043,  2044,  2045,  2046,
    2047,  2048,  2049,  2050,  2051,  2052,  2053,  2054,  2055,  2058,
    2059,  2060,  2061,  2062,  2063,  2071,  2078,  2087,  2096,  2103,
    2110,  2118,  2126,  2133,  2138,  2143,  2148,  2153,  2158,  2163,
    2169,  2179,  2189,  2199,  2206,  2216,  2226,  2235,  2247,  2260,
    2265,  2268,  2270,  2272,  2277,  2281,  2284,  2286,  2288,  2291,
    2292,  2293,  2294,  2295,  2296,  2297,  2300,  2301,  2302,  2303,
    2304,  2305,  2307,  2309,  2311,  2313,  2315,  2317,  2320,  2322,
    2324,  2326,  2328,  2330,  2333,  2334,  2335,  2336,  2338,  2341,
    2342,  2344,  2346,  2347,  2348,  2350,  2353,  2356,  2357,  2359,
    2360,  2361,  2362,  2364,  2365,  2366,  2367,  2368,  2370,  2372,
    2373,  2375,  2378,  2379,  2380,  2382,  2384,  2385,  2386,  2387,
    2389,  2392,  2396,  2397,  2398,  2399,  2402,  2405,  2407,  2408,
    2409,  2410,  2412,  2415,  2416,  2418,  2419,  2420,  2421,  2422,
    2424,  2425,  2427,  2430,  2431,  2432,  2433,  2434,  2436,  2438,
    2439,  2440,  2441,  2443,  2445,  2446,  2447,  2448,  2449,  2450,
    2452,  2453,  2455,  2458,  2459,  2460,  2461,  2464,  2465,  2468,
    2469,  2472,  2473,  2476,  2489,  2490,  2494,  2495,  2499,  2500,
    2503,  2508,  2515,  2517,  2520,  2522,  2525,  2529,  2530,  2531,
    2532,  2533,  2534,  2535,  2537,  2541,  2542,  2545,  2546,  2547,
    2548,  2549,  2550,  2551,  2552,  2555,  2556,  2557,  2558,  2559,
    2560,  2561,  2562,  2563,  2564,  2565,  2568,  2569,  2572,  2573,
    2573,  2576,  2577,  2578,  2579,  2582,  2583,  2586,  2587,  2590,
    2594,  2595,  2595,  2598,  2599,  2602,  2605,  2609,  2610,  2611,
    2612,  2615,  2616,  2617,  2618,  2621,  2623,  2624,  2629,  2631,
    2632,  2633,  2634,  2637,  2638,  2643,  2647,  2648,  2649,  2652,
    2653,  2658,  2659,  2662,  2664,  2665,  2666,  2671,  2672,  2673,
    2674,  2677,  2678,  2681,  2683,  2685,  2686,  2689,  2691,  2692,
    2693,  2696,  2697,  2700,  2701,  2702,  2705,  2706,  2707,  2710,
    2711,  2712,  2713,  2714,  2717,  2718,  2719,  2722,  2723,  2724,
    2725,  2726,  2729,  2731,  2733,  2735,  2738,  2740,  2742,  2745,
    2746,  2747,  2748,  2749,  2750,  2751,  2752,  2753,  2756,  2757,
    2758,  2761,  2762,  2763,  2766,  2767,  2768,  2771,  2772,  2773,
    2776,  2777,  2778,  2779,  2782,  2783,  2784,  2787,  2788,  2789,
    2792,  2793,  2794,  2797,  2798,  2799,  2802,  2804,  2806,  2810,
    2814,  2816,  2819,  2820,  2821,  2822,  2825,  2826,  2828,  2829,
    2831,  2834,  2835,  2836,  2837,  2840,  2841,  2844,  2846,  2847,
    2848,  2849,  2852,  2853,  2854,  2857,  2858,  2859,  2862,  2863,
    2868,  2872,  2879,  2880,  2882,  2887,  2889,  2892,  2893,  2894,
    2895,  2897,  2902
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
  "FITSY_", "FIXED_", "FK4_", "FK4_NO_E_", "FK5_", "FONT_", "FORMAT_",
  "FRONT_", "FULL_", "FUNCTION_", "GALACTIC_", "GAUSSIAN_", "GET_",
  "GLOBAL_", "GRAPHICS_", "GRAY_", "GRID_", "GZ_", "HANDLE_", "HAS_",
  "HEAD_", "HEADER_", "HEIGHT_", "HELIOECLIPTIC_", "HIDE_", "HIGHLITE_",
  "HISTEQU_", "HISTOGRAM_", "HORIZONTAL_", "ICRS_", "ID_", "IIS_",
  "IMAGE_", "INCLUDE_", "INCR_", "INFO_", "ITERATION_", "IRAF_",
  "IRAFMIN_", "J2000_", "KEY_", "KEYWORD_", "LABEL_", "LENGTH_", "LEVEL_",
  "LITTLE_", "LITTLEENDIAN_", "LINE_", "LINEAR_", "LIST_", "LOAD_",
  "LOCAL_", "LOG_", "MACOSX_", "MAGNIFIER_", "MATCH_", "MAP_", "MARK_",
  "MARKER_", "MASK_", "MESSAGE_", "METHOD_", "MINMAX_", "MINOR_", "MIP_",
  "MMAP_", "MMAPINCR_", "MOSAIC_", "MODE_", "MOTION_", "MOVE_", "NAME_",
  "NAN_", "NATIVE_", "NAXES_", "NEW_", "NEXT_", "NO_", "NONE_", "NOW_",
  "NRRD_", "NUMBER_", "OBJECT_", "OFF_", "ON_", "ONLY_", "OPTION_",
  "ORIENT_", "PAN_", "PANNER_", "PARSER_", "PASTE_", "PERF_", "PHOTO_",
  "PHYSICAL_", "PIXEL_", "PLOT2D_", "PLOT3D_", "POINT_", "POINTER_",
  "POLYGON_", "POSTSCRIPT_", "POW_", "PRINT_", "PRESERVE_", "PROJECTION_",
  "PROPERTY_", "PUBLICATION_", "PROS_", "QUERY_", "RADIAL_", "RADIUS_",
  "REGION_", "REPLACE_", "RESAMPLE_", "RESET_", "RESOLUTION_", "RGB_",
  "ROOT_", "ROTATE_", "RULER_", "SAMPLE_", "SAOIMAGE_", "SAOTNG_", "SAVE_",
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
     595,   596,   597,   598,   599,    89,    78,    88,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   349,   350,   350,   350,   350,   350,   350,   350,   350,
     350,   350,   350,   350,   350,   350,   350,   350,   350,   350,
     350,   350,   350,   350,   350,   350,   350,   350,   350,   350,
     350,   350,   350,   350,   350,   350,   350,   350,   350,   350,
     350,   350,   350,   350,   350,   350,   350,   350,   350,   350,
     350,   350,   350,   350,   351,   351,   352,   352,   352,   352,
     352,   352,   352,   352,   352,   352,   352,   352,   352,   353,
     353,   353,   353,   353,   353,   353,   353,   353,   354,   354,
     354,   354,   354,   355,   355,   356,   356,   356,   357,   358,
     359,   360,   360,   360,   360,   361,   361,   361,   361,   361,
     362,   362,   362,   362,   362,   362,   362,   362,   362,   362,
     362,   362,   362,   362,   362,   362,   362,   362,   362,   362,
     362,   362,   362,   362,   362,   362,   362,   362,   363,   363,
     364,   364,   364,   364,   364,   364,   364,   364,   365,   365,
     365,   365,   365,   366,   366,   366,   366,   366,   366,   366,
     366,   366,   366,   366,   367,   367,   367,   368,   368,   368,
     368,   369,   369,   369,   370,   370,   370,   371,   371,   371,
     372,   372,   372,   372,   372,   372,   372,   372,   373,   373,
     374,   374,   374,   374,   374,   374,   375,   375,   375,   376,
     376,   376,   376,   376,   376,   377,   377,   377,   377,   377,
     377,   377,   377,   377,   378,   378,   379,   379,   380,   380,
     381,   381,   381,   381,   381,   382,   382,   383,   383,   383,
     383,   383,   383,   383,   383,   383,   384,   384,   384,   384,
     384,   384,   384,   384,   385,   385,   386,   386,   386,   386,
     386,   386,   386,   386,   387,   387,   388,   388,   388,   388,
     388,   389,   389,   389,   390,   390,   390,   391,   391,   391,
     391,   391,   391,   392,   392,   393,   393,   393,   393,   393,
     394,   394,   394,   395,   395,   395,   395,   396,   396,   396,
     396,   396,   397,   397,   398,   398,   399,   399,   399,   399,
     399,   400,   400,   400,   400,   400,   401,   401,   402,   402,
     402,   403,   403,   403,   403,   404,   404,   405,   405,   406,
     406,   407,   407,   408,   408,   408,   408,   408,   408,   408,
     409,   409,   409,   409,   409,   410,   410,   410,   410,   410,
     410,   410,   410,   411,   412,   412,   412,   413,   414,   414,
     414,   414,   414,   414,   414,   414,   414,   414,   414,   414,
     414,   414,   414,   414,   414,   414,   414,   414,   414,   414,
     414,   414,   414,   414,   414,   414,   414,   414,   414,   414,
     414,   414,   414,   414,   414,   414,   414,   415,   415,   415,
     415,   415,   415,   415,   415,   416,   416,   416,   417,   418,
     418,   418,   418,   418,   418,   418,   418,   418,   419,   419,
     420,   420,   420,   421,   421,   422,   423,   423,   423,   424,
     424,   424,   425,   426,   426,   426,   426,   426,   426,   426,
     426,   426,   426,   427,   427,   427,   428,   428,   429,   429,
     429,   430,   430,   430,   431,   431,   431,   432,   433,   433,
     434,   434,   434,   435,   435,   435,   436,   436,   436,   437,
     437,   437,   438,   438,   438,   438,   438,   438,   438,   438,
     438,   438,   438,   438,   438,   438,   439,   439,   440,   440,
     440,   440,   441,   441,   442,   442,   442,   443,   443,   443,
     443,   444,   444,   444,   445,   445,   445,   446,   447,   447,
     447,   448,   448,   448,   448,   448,   448,   449,   449,   449,
     449,   449,   449,   449,   450,   450,   451,   451,   452,   452,
     453,   453,   454,   454,   454,   455,   455,   456,   456,   457,
     457,   458,   458,   459,   459,   459,   459,   459,   459,   459,
     459,   459,   459,   459,   459,   459,   459,   459,   459,   460,
     461,   461,   462,   462,   462,   462,   463,   463,   463,   463,
     464,   464,   464,   464,   464,   465,   465,   465,   465,   465,
     465,   465,   465,   466,   466,   467,   467,   467,   468,   468,
     468,   468,   468,   468,   469,   469,   469,   469,   469,   469,
     469,   469,   469,   469,   470,   470,   470,   470,   470,   470,
     470,   470,   470,   471,   472,   472,   472,   472,   472,   472,
     472,   472,   472,   472,   472,   472,   472,   472,   472,   472,
     473,   473,   473,   473,   473,   473,   473,   473,   473,   473,
     473,   474,   474,   474,   474,   474,   474,   474,   474,   474,
     475,   475,   475,   475,   475,   476,   476,   476,   476,   476,
     476,   476,   476,   476,   477,   477,   477,   477,   477,   477,
     477,   477,   477,   477,   477,   478,   478,   478,   478,   478,
     478,   478,   478,   478,   479,   479,   479,   479,   479,   479,
     479,   479,   479,   479,   479,   480,   480,   480,   480,   480,
     480,   480,   480,   480,   481,   481,   481,   481,   481,   481,
     481,   481,   481,   481,   481,   482,   482,   482,   482,   482,
     482,   482,   482,   482,   483,   483,   483,   483,   483,   483,
     484,   484,   485,   485,   485,   486,   487,   487,   487,   487,
     487,   487,   487,   488,   489,   489,   489,   489,   489,   489,
     490,   489,   489,   489,   489,   489,   489,   489,   489,   489,
     489,   489,   489,   489,   489,   489,   489,   489,   489,   489,
     489,   489,   489,   489,   489,   489,   489,   489,   489,   489,
     489,   489,   489,   489,   489,   489,   489,   489,   489,   489,
     489,   489,   489,   489,   489,   489,   489,   489,   489,   489,
     489,   489,   489,   489,   489,   489,   489,   489,   489,   489,
     489,   489,   489,   489,   489,   489,   489,   489,   489,   489,
     489,   489,   489,   489,   489,   489,   489,   489,   489,   489,
     489,   489,   489,   489,   489,   489,   489,   489,   489,   489,
     489,   489,   489,   489,   489,   489,   489,   489,   489,   489,
     489,   489,   489,   489,   489,   489,   489,   489,   489,   489,
     489,   489,   489,   489,   489,   489,   489,   489,   489,   489,
     489,   489,   489,   489,   489,   489,   489,   489,   489,   489,
     489,   489,   489,   489,   489,   489,   489,   489,   489,   489,
     489,   489,   489,   489,   489,   489,   489,   489,   489,   489,
     489,   489,   489,   489,   489,   489,   489,   489,   491,   491,
     491,   491,   491,   491,   491,   491,   491,   491,   491,   491,
     491,   491,   491,   491,   491,   491,   491,   491,   491,   492,
     492,   492,   492,   492,   492,   493,   493,   493,   493,   493,
     493,   493,   493,   493,   493,   493,   493,   493,   493,   493,
     493,   493,   493,   493,   493,   493,   493,   493,   493,   493,
     493,   494,   494,   494,   494,   495,   496,   496,   496,   497,
     497,   497,   497,   497,   497,   497,   498,   498,   498,   498,
     498,   498,   498,   498,   498,   498,   498,   498,   498,   498,
     498,   498,   498,   498,   498,   498,   498,   498,   498,   498,
     498,   498,   498,   498,   498,   498,   498,   498,   498,   498,
     498,   498,   498,   498,   498,   498,   498,   498,   498,   498,
     498,   498,   498,   498,   498,   498,   498,   498,   498,   498,
     498,   498,   498,   498,   498,   498,   498,   498,   498,   498,
     498,   498,   498,   498,   498,   498,   498,   498,   498,   498,
     498,   498,   498,   498,   498,   498,   498,   498,   498,   498,
     498,   498,   498,   498,   498,   498,   498,   498,   498,   498,
     498,   498,   498,   499,   499,   499,   499,   500,   500,   501,
     501,   502,   502,   503,   504,   504,   504,   504,   504,   504,
     505,   505,   506,   506,   506,   506,   506,   507,   507,   507,
     507,   507,   507,   507,   507,   508,   508,   509,   509,   509,
     509,   509,   509,   509,   509,   510,   510,   510,   510,   510,
     510,   510,   510,   510,   510,   510,   511,   511,   512,   513,
     512,   514,   514,   514,   514,   515,   515,   516,   516,   517,
     518,   519,   518,   520,   520,   521,   522,   523,   523,   523,
     523,   524,   524,   524,   524,   525,   525,   525,   525,   525,
     525,   525,   525,   526,   526,   526,   527,   527,   527,   528,
     528,   528,   528,   529,   529,   529,   529,   530,   530,   530,
     530,   531,   531,   532,   532,   532,   532,   533,   533,   533,
     533,   534,   534,   535,   535,   535,   536,   536,   536,   537,
     537,   537,   537,   537,   538,   538,   538,   539,   539,   539,
     539,   539,   540,   540,   540,   540,   541,   541,   541,   542,
     542,   542,   542,   542,   542,   542,   542,   542,   543,   543,
     543,   544,   544,   544,   545,   545,   545,   546,   546,   546,
     547,   547,   547,   547,   548,   548,   548,   549,   549,   549,
     550,   550,   550,   551,   551,   551,   552,   552,   552,   553,
     554,   554,   555,   555,   555,   555,   556,   556,   556,   556,
     556,   557,   557,   557,   557,   558,   558,   559,   559,   559,
     559,   559,   560,   560,   560,   561,   561,   561,   562,   562,
     562,   563,   564,   564,   564,   564,   564,   565,   565,   565,
     565,   565,   565
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
       4,     6,     7,     7,     2,     3,     3,     3,     4,     2,
       2,     4,     7,    10,     3,     1,     3,     2,     2,     2,
       2,     3,     5,     4,     5,     2,     7,     3,     2,     2,
       3,     2,     2,     2,     3,     2,     3,     4,     3,     3,
       5,     6,     4,     2,     3,     2,     2,     4,     3,     3,
       2,     3,     1,     2,     1,     2,     2,     2,     1,     1,
       1,     1,     2,     1,     2,     2,     1,     2,     2,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       1,     2,     2,     2,     3,     5,     7,     7,     6,     6,
       6,     6,     5,     6,     6,     6,     6,     6,     6,     6,
      11,     7,     7,     7,     9,     9,    10,    12,    12,     2,
       2,     3,     4,     4,     4,     2,     4,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     1,     1,
       3,     3,     4,     6,    10,     7,     7,     5,     4,     6,
      10,     7,     7,     5,     2,     2,     3,     4,     5,     3,
       5,     5,     3,     4,     5,     5,     5,     3,     5,     2,
       3,     3,     5,     3,     3,     3,     4,     5,     5,     3,
       5,     5,     3,     4,     5,     5,     2,     2,     3,     5,
       6,     6,     3,     3,     3,     6,     5,     5,     2,     3,
       3,     5,     6,     3,     2,     2,     3,     2,     3,     2,
       3,     5,     6,     2,     2,     2,     1,     4,     4,     1,
       2,     2,     2,     2,     2,     2,     2,     3,     2,     3,
       2,     3,     1,     1,     1,     1,     1,     0,     2,     0,
       2,     0,     1,     0,     0,     1,     1,     1,     1,     1,
       7,     8,     2,     4,     2,     4,     6,     2,     1,     1,
       3,     3,     1,     3,     4,     2,     1,     3,     3,     4,
       3,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     0,     0,
       2,     1,     3,     1,     3,     1,     2,     2,     1,     3,
       0,     0,     2,     2,     1,     3,     5,     1,     2,     2,
       2,     1,     1,     1,     1,     4,     2,     3,     3,     2,
       3,     2,     2,     2,     3,     3,     3,     2,     3,     1,
       3,     3,     1,     2,     2,     2,     2,     1,     1,     1,
       1,     2,     2,     3,     3,     1,     2,     3,     3,     1,
       2,     1,     1,     1,     1,     1,     2,     2,     4,     1,
       2,     2,     2,     3,     1,     1,     1,     2,     2,     2,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     1,
       2,     2,     2,     3,     2,     3,     3,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     3,     3,     3,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     3,     3,     3,     4,
       6,     1,     1,     1,     1,     1,     0,     5,     1,     6,
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
       0,     0,   313,     0,     0,     0,     0,     0,     0,     0,
       0,    22,     0,     0,     0,     0,     0,     0,     0,  1064,
       0,     0,     0,     0,     0,     0,     0,  1064,    38,     0,
       0,     0,    43,     0,     0,     0,    47,  1246,    49,     0,
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
       0,  1064,     0,   360,     0,   364,     0,     0,     0,   368,
       0,   370,     0,   372,     0,     0,   512,   376,    19,     0,
     518,    20,   523,     0,   540,   526,   527,   528,   529,   542,
     531,   532,   533,     0,   535,   536,     0,     0,    21,    23,
       0,   556,     0,     0,     0,   561,     0,    24,     0,     0,
       0,     0,     0,     0,     0,    26,   715,    27,     0,     0,
       0,     0,     0,     0,   716,    28,     0,    29,  1069,  1068,
    1065,  1066,  1067,     0,  1127,     0,     0,     0,    31,     0,
    1134,  1133,  1132,  1131,    33,     0,     0,     0,     0,     0,
     143,     0,    34,     0,  1152,     0,  1149,    35,     0,     0,
       0,     0,    37,    36,     0,     0,     0,     0,    40,     0,
       0,  1179,    41,     0,     0,     0,     0,     0,    42,  1242,
    1241,  1245,  1244,  1243,    44,     0,    45,     0,     0,     0,
       0,     0,   202,     0,     0,     0,    46,     0,     0,  1248,
      48,     0,     0,    50,     0,     0,     0,     0,   143,    51,
    1271,    52,     0,     0,    53,     1,     0,     0,     0,     0,
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
       0,   909,     0,     0,     0,   726,   730,   732,   733,     0,
       0,     0,     0,   845,     0,     0,     0,   882,     0,     0,
       0,     0,     0,     0,     0,   884,     0,     0,     0,    30,
    1128,  1129,  1130,    32,     0,     0,     0,     0,  1141,  1142,
       0,   143,     0,  1139,  1136,     0,     0,     0,   143,  1157,
    1160,  1158,  1159,  1153,  1154,  1155,  1156,     0,     0,    39,
    1176,  1177,     0,  1184,  1186,  1185,  1181,  1182,  1180,     0,
       0,     0,     0,  1187,     0,  1190,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1188,  1199,     0,     0,
       0,  1189,  1191,     0,  1174,  1175,  1173,   200,     0,   204,
     196,     0,   206,   197,     0,   208,   198,  1172,  1171,   199,
     201,   203,     0,     0,     0,     0,     0,   195,     0,     0,
       0,     0,  1255,  1268,  1258,     0,     0,  1261,     0,     0,
    1260,  1259,   154,  1277,     0,  1276,  1272,     0,     0,     0,
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
     957,   959,   958,     0,     0,  1057,     0,  1036,     0,  1039,
       0,     0,  1059,  1061,     0,  1052,   361,     0,   493,   495,
     505,   498,   507,   499,   509,   500,   511,   497,     0,     0,
     516,   513,   514,   154,   539,   552,   551,   554,     0,   567,
     555,     0,     0,     0,     0,     0,     0,   167,   167,   161,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   164,
     164,   161,     0,     0,   161,     0,     0,     0,     0,     0,
     609,   633,     0,     0,     0,   605,     0,     0,     0,     0,
     167,   161,     0,     0,   710,     0,   720,   721,   143,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   784,     0,     0,     0,     0,     0,   809,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   834,     0,
       0,   839,   840,     0,     0,     0,   861,   863,   862,     0,
     865,     0,     0,   873,   875,   876,   910,     0,     0,     0,
       0,   724,   725,   951,   949,   954,   953,   952,   950,   955,
       0,   729,     0,   734,     0,   948,     0,   735,   736,   737,
     738,     0,     0,     0,     0,     0,   847,     0,     0,   848,
    1079,     0,  1082,  1078,     0,     0,     0,   849,   883,   850,
    1098,  1103,  1100,  1099,  1097,  1104,  1101,  1095,  1102,  1096,
    1105,     0,     0,   855,     0,     0,     0,  1111,     0,  1113,
     858,     0,  1115,   859,   880,     0,     0,     0,   885,   886,
     887,  1140,     0,     0,  1147,  1143,     0,     0,     0,  1138,
    1137,  1151,  1150,     0,  1165,     0,     0,  1161,     0,  1169,
       0,     0,  1162,     0,  1183,   189,   189,     0,   189,     0,
    1209,     0,  1208,  1200,     0,     0,     0,     0,  1204,     0,
       0,     0,  1207,     0,     0,     0,     0,     0,  1202,  1210,
       0,     0,     0,  1201,   189,   189,   189,     0,   205,   207,
     209,     0,     0,     0,     0,   210,     0,    55,     0,  1250,
       0,  1256,     0,   143,  1262,  1263,     0,  1265,  1266,     0,
     155,   156,  1257,  1278,  1279,     0,   223,   219,   225,   217,
     218,   224,   221,   220,   222,   227,     0,   241,     0,     0,
       0,     0,   273,     0,     0,     0,     0,     0,     0,     0,
       0,   311,   143,     0,     0,     0,     0,   321,     0,   331,
       0,   330,   387,   386,     0,     0,     0,   143,     0,     0,
     154,   431,   435,   439,     0,     0,     0,   154,     0,    82,
      81,   474,   458,     0,   469,   471,   157,   480,   355,     0,
       0,    55,     0,   448,     0,     0,   975,     0,     0,     0,
       0,     0,     0,   989,     0,     0,     0,     0,     0,     0,
    1006,  1007,     0,     0,     0,     0,     0,  1018,     0,  1024,
    1025,  1027,  1029,     0,  1033,  1044,  1045,  1046,     0,  1048,
    1053,  1055,  1056,  1054,   956,     0,     0,  1035,     0,  1034,
     974,     0,     0,  1040,     0,  1042,     0,  1041,  1062,  1043,
    1050,     0,     0,   373,     0,     0,   565,   566,     0,   563,
     559,     0,   167,   167,   167,   168,   169,   577,   578,   163,
     162,     0,   167,   167,   167,     0,   583,   593,   164,   167,
     167,   167,   165,   166,   167,   167,     0,   167,   167,     0,
     164,     0,   606,     0,     0,     0,   632,     0,   631,     0,
       0,   608,     0,   607,     0,     0,     0,     0,   164,   164,
     161,     0,     0,   161,     0,     0,     0,   167,   167,   706,
       0,   167,   167,   711,     0,   180,   181,   182,   183,   184,
     185,     0,    86,    87,    85,   742,     0,     0,     0,     0,
       0,     0,   903,   901,   896,     0,   906,   890,   907,   893,
     905,   899,   888,   902,   891,   889,   908,   904,     0,     0,
       0,   762,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   794,     0,     0,     0,     0,
       0,   808,   810,     0,     0,   816,   815,     0,     0,   170,
       0,     0,     0,   143,     0,     0,   829,     0,     0,     0,
       0,   835,   836,   837,     0,     0,     0,   844,   860,   864,
     866,   869,   868,     0,     0,     0,   874,   911,   913,     0,
     912,   727,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1063,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   731,     0,     0,
       0,     0,   846,     0,   143,     0,  1074,  1072,     0,     0,
     143,     0,  1077,   851,     0,     0,     0,   857,     0,     0,
    1116,   878,   879,     0,   881,  1146,  1148,  1145,  1144,  1135,
       0,     0,  1166,     0,     0,  1170,  1178,   191,   192,   193,
     194,   190,  1193,  1192,     0,     0,     0,  1195,  1194,   189,
       0,     0,     0,  1203,     0,     0,     0,     0,     0,  1220,
       0,  1234,  1233,  1235,     0,     0,     0,  1206,     0,     0,
       0,  1205,  1215,  1214,  1216,  1212,  1211,  1213,  1237,  1236,
    1238,     0,   212,   214,   213,     0,     0,    55,     0,  1252,
       0,   143,  1269,  1264,  1267,     0,     0,   143,     0,     0,
       0,   238,     0,     0,     0,     0,     0,     0,     0,     0,
     308,   307,     0,     0,   299,   310,   312,     0,   322,   324,
     323,   143,   329,     0,     0,     0,   154,   430,   143,     0,
       0,     0,     0,   453,   467,    80,    79,   476,     0,   470,
     159,   160,   158,   463,     0,     0,   451,   445,     0,     0,
       0,     0,     0,     0,   143,   976,     0,   979,     0,     0,
     982,     0,   143,   987,     0,   990,   991,     0,   993,   994,
     995,     0,   999,     0,     0,  1002,     0,  1008,     0,     0,
       0,  1013,  1014,  1012,     0,     0,     0,  1019,  1020,     0,
       0,  1023,  1026,  1028,  1030,     0,     0,  1047,  1049,   960,
       0,     0,     0,     0,     0,     0,  1058,   961,     0,     0,
    1060,  1051,     0,     0,   521,   522,     0,     0,   564,     0,
     574,   575,   576,   167,   580,   581,   582,     0,     0,     0,
     587,   588,   161,     0,     0,     0,   167,   594,   595,   596,
     597,   599,   164,   602,   603,     0,   167,     0,     0,     0,
     164,   164,   161,     0,     0,     0,     0,   630,     0,   634,
       0,     0,     0,     0,     0,   164,   164,   161,     0,     0,
     161,     0,     0,     0,     0,     0,   164,   164,   161,     0,
       0,   161,     0,     0,     0,     0,     0,   164,   164,   161,
       0,     0,   161,     0,     0,     0,     0,   164,   164,   161,
       0,     0,     0,   164,   610,   611,   612,   613,   615,     0,
     618,   619,     0,   164,     0,     0,   704,   705,   167,   708,
     709,     0,   741,   143,   743,     0,     0,   748,     0,     0,
       0,     0,     0,   895,   892,   898,   897,   894,   900,     0,
     759,     0,     0,     0,     0,   143,   768,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     785,   786,   787,     0,   791,   788,   790,     0,     0,   796,
     795,   797,   798,     0,     0,     0,     0,     0,     0,   143,
       0,   143,     0,   814,   176,   172,   177,   171,   174,   173,
     175,   823,   824,   825,     0,     0,     0,   828,   830,   143,
       0,   143,     0,   838,   841,   143,     0,   143,     0,   867,
     872,   914,   728,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1106,   939,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   940,
       0,     0,     0,     0,     0,   739,   740,   143,   154,     0,
     143,   143,  1080,  1081,     0,  1083,     0,   853,     0,   143,
    1112,  1114,   877,  1163,  1164,  1167,  1168,   189,   189,   189,
    1239,  1218,  1217,  1219,  1222,  1221,  1225,  1224,  1226,  1223,
    1231,  1230,  1232,  1228,  1227,  1229,     0,     0,  1247,  1254,
       0,  1270,     0,   143,     0,  1273,     0,     0,   242,     0,
     239,     0,     0,     0,   277,     0,     0,     0,     0,   143,
       0,   314,   131,     0,   407,     0,   428,   154,   157,     0,
       0,   442,     0,     0,   446,   968,     0,     0,     0,     0,
     143,   977,   157,   157,   157,   143,   983,   157,   154,   157,
     157,   143,   996,   157,   157,   157,   143,  1003,   157,   157,
     143,     0,   157,   143,   157,   157,   143,   157,   143,   962,
       0,     0,     0,     0,   143,  1037,  1038,     0,     0,   520,
     560,     0,   579,   584,   585,   586,     0,   590,   591,   592,
     598,   167,   164,   604,   621,   622,   623,   624,   625,     0,
     627,   628,   164,     0,     0,     0,   164,   164,   161,     0,
       0,     0,     0,     0,     0,   164,   164,   161,     0,     0,
       0,     0,     0,     0,   164,   164,   161,     0,     0,     0,
     164,   167,   167,   167,   167,   167,     0,   167,   167,     0,
     164,   164,   167,   167,   167,   167,   167,     0,   167,   167,
       0,   164,   164,   684,   685,   686,   687,   689,     0,   692,
     693,     0,   164,   695,   696,   697,   698,   699,     0,   701,
     702,   164,   614,   164,     0,   620,     0,     0,   707,     0,
     744,   157,     0,     0,   157,     0,     0,     0,   758,   157,
     760,   763,   764,   157,   765,   767,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   789,
     792,   793,     0,   157,     0,     0,     0,   811,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   870,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1107,  1086,     0,  1093,  1094,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   143,     0,     0,
      83,     0,     0,   946,   947,   154,     0,     0,     0,  1075,
    1073,  1084,   852,   854,   154,  1197,  1196,  1198,  1240,     0,
    1249,  1280,     0,     0,  1275,  1274,   243,     0,     0,     0,
     282,     0,     0,     0,   300,   157,   408,   412,   429,   432,
       0,   440,   475,     0,     0,     0,     0,     0,   973,   978,
     981,   980,   984,   985,   986,   988,   992,   997,   998,  1000,
    1001,  1004,  1005,  1009,   154,   157,  1016,   154,  1017,  1021,
     154,  1031,   154,     0,     0,     0,     0,   967,     0,     0,
     519,     0,   589,   600,   167,   164,   629,   167,   167,   167,
     167,   167,     0,   167,   167,   164,   675,   676,   677,   678,
     679,     0,   681,   682,   164,   167,   167,   167,   167,   167,
       0,   167,   167,   164,   167,   644,   645,   646,   647,   649,
     164,   652,   653,     0,   167,   167,   664,   665,   666,   667,
     669,   164,   672,   673,     0,   167,   688,   164,     0,   694,
     164,   703,   616,   164,   712,   713,   143,   747,     0,   157,
     752,   751,     0,   143,     0,   761,   766,   143,     0,   773,
     774,   775,   776,   780,   781,   777,   778,   779,     0,     0,
     157,   799,   803,     0,   143,     0,     0,   812,   818,   817,
     157,   819,     0,   826,     0,   831,   157,   157,   821,     0,
       0,   871,     0,   178,   178,     0,     0,   178,     0,   178,
    1063,     0,     0,     0,     0,     0,     0,     0,     0,  1085,
       0,     0,   178,   178,     0,     0,     0,     0,     0,     0,
       0,     0,   941,     0,     0,     0,  1063,    84,     0,   178,
       0,  1109,   945,     0,     0,   211,  1282,  1281,     0,     0,
     247,     0,     0,     0,     0,   315,   441,   334,   969,     0,
     186,     0,  1010,  1011,  1015,  1022,  1032,   963,     0,   186,
       0,   366,   334,     0,   601,   626,   635,   636,   637,   638,
     639,   164,   641,   642,   167,   164,   683,   655,   656,   657,
     658,   659,   164,   661,   662,   167,   648,   167,   164,   654,
     668,   167,   164,   674,   690,   164,   700,   617,     0,   157,
     745,   753,     0,     0,     0,     0,     0,   782,   783,   800,
       0,     0,     0,   813,   820,     0,   832,   833,   822,   157,
     842,     0,   179,  1063,  1063,    83,     0,  1063,     0,  1063,
     915,   143,     0,  1088,     0,  1091,  1125,  1092,  1090,  1087,
       0,  1063,  1063,    83,     0,     0,  1063,  1063,     0,     0,
    1063,   944,   942,   943,   922,  1063,  1063,  1109,  1120,     0,
    1076,   856,     0,     0,   249,     0,     0,     0,   335,   336,
     356,     0,   187,   188,   971,   972,     0,   965,   966,   374,
       0,   167,   643,   680,   167,   663,   650,   167,   670,   167,
     691,     0,   746,   157,   749,   157,     0,   157,     0,   157,
     801,   157,     0,   157,     0,  1063,   928,   924,  1063,     0,
     929,     0,   923,  1063,     0,  1089,     0,   926,   925,  1063,
       0,     0,   920,   918,  1063,   143,   919,   921,   927,  1120,
    1070,     0,     0,  1110,  1118,     0,     0,     0,   278,   301,
     304,   302,     0,     0,   143,   143,   562,   640,   660,   651,
     671,   157,   750,   757,     0,   772,   769,   802,   807,     0,
     827,     0,   933,   917,    83,     0,   931,  1126,     0,   916,
      83,     0,   932,     0,  1071,  1122,  1124,     0,  1117,     0,
       0,   283,     0,     0,     0,     0,   186,   186,     0,   754,
     143,   770,   804,   843,  1063,     0,     0,  1063,     0,   157,
    1123,  1119,   248,     0,     0,     0,     0,     0,   970,   964,
     723,   143,   755,   771,   143,   805,   935,     0,  1063,   934,
       0,     0,   250,   294,     0,   293,     0,   756,   806,    83,
     936,    83,  1063,   292,   291,  1063,  1063,   930,   938,   937
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    53,   430,   176,   155,  1261,  2526,  2527,   431,   432,
     433,   434,   156,   157,   158,    94,   809,   457,  1202,  1683,
    1351,  1364,  1347,  1931,  2623,  1411,  2674,  1582,   336,   750,
     753,   756,   767,    56,   365,    66,   369,   375,   379,   382,
      71,   385,    78,   400,   396,   390,   406,    85,   411,    95,
     101,   416,   418,   420,   492,   862,  1652,   422,   425,   108,
     441,   159,   161,  2670,   178,   218,   481,   851,   483,   493,
     854,   859,   495,   497,   865,   500,   867,   511,   870,   872,
     514,   518,   522,   524,   527,   531,   558,   554,  1273,   545,
     891,   896,   888,  1262,   901,   548,   564,   567,   572,   577,
     585,   931,   933,   935,   937,   590,   941,   221,   592,  1756,
     238,   594,   596,   600,   605,   612,   247,  1340,   615,   255,
     624,  1356,   626,   632,   985,  1372,   980,  1797,  1378,  1376,
     981,  1799,  1381,  1383,   638,   641,   636,   257,   265,   267,
     679,  1062,  1438,  1051,  1537,  1979,  2308,  1067,  1060,   926,
    1314,  1319,  1327,  1329,  1963,   273,  1076,  1079,  1087,  2280,
    2281,  2282,  1964,  2658,  2659,  1110,  1113,  2733,  2734,  2730,
    2731,  2775,  2283,  2284,   278,   284,   292,   693,   688,   297,
     302,   703,   709,  1137,  1142,   759,   747,   308,   312,   716,
     318,   723,  1587,   736,   737,  1173,  1168,  1593,  1158,  1599,
    1611,  1607,  1162,   741,   725,   324,   325,   340,  1189,   343,
     349,   777,   780,   774,   351,   354,   785
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2594
static const yytype_int16 yypact[] =
{
    4227,   -70,    76,   512,    43, -2594, -2594,  1006,   -94,   453,
     440,    -8,   209,  3319,   141,   117,  1011,    67,  5198,    80,
    1044, -2594,   117,   866,   185,  1334,   239,    30,   210,    51,
     385,   411,   279,  2254,   102,   940,   480,    51, -2594,   -10,
      20,  1234, -2594,    82,   545,   885, -2594,   521, -2594,    83,
    4228,   313,   107,   571, -2594,   617, -2594,   588,   844,   332,
     601,   606,   123,   627,   -14,   769, -2594, -2594, -2594,  1155,
     731, -2594,   169,    36,   117,   -25,   731,   499, -2594,   638,
     731, -2594, -2594,    21,   731, -2594, -2594, -2594, -2594,   731,
   -2594, -2594, -2594, -2594, -2594, -2594,    54,   663,   724,   777,
     153, -2594,   731,  1417,   731,   731,   981,   731, -2594, -2594,
   -2594,   632, -2594, -2594, -2594, -2594,  4749, -2594, -2594, -2594,
   -2594, -2594, -2594,   731, -2594, -2594, -2594, -2594, -2594, -2594,
   -2594, -2594, -2594, -2594, -2594, -2594, -2594, -2594, -2594, -2594,
   -2594, -2594, -2594, -2594, -2594, -2594, -2594, -2594, -2594, -2594,
   -2594, -2594, -2594, -2594, -2594, -2594,  1167, -2594,   731, -2594,
     809, -2594, -2594,   117,   117,   117,   117,   117,   117,   117,
   -2594, -2594,   117,   117,   117,   117, -2594,   712, -2594,   770,
    1301,   725,   200,   590,   699,    68,  4313,   501,  4801,  4721,
     842,  4749,  3242, -2594,   793,  -107,   872,   800,   925,   514,
     878,    51,   413, -2594,   831, -2594,   675,   641,   116, -2594,
     451, -2594,   956, -2594,    26,   835,    61, -2594, -2594,  4986,
   -2594, -2594, -2594,   857,   919, -2594, -2594, -2594, -2594,   452,
   -2594, -2594, -2594,   862, -2594, -2594,  4986,  4373, -2594, -2594,
      63, -2594,   951,   972,   458, -2594,   731, -2594,   977,    47,
     982,    85,    96,   986,    12, -2594, -2594, -2594,   997,  1001,
     117,   117,   731,   731, -2594, -2594,  1010, -2594, -2594, -2594,
   -2594, -2594, -2594,  2717, -2594,  1015,  1018,   731, -2594,  1029,
   -2594, -2594, -2594, -2594, -2594,   731,  1322,   117,  2770,   731,
    1167,   731, -2594,  1037, -2594,  4285, -2594, -2594,   883,  1040,
    1046,   731, -2594, -2594,   368,  1043,  4986,  1050, -2594,  1330,
     731,   973, -2594,   366,   959,  1381,   461,  1080, -2594, -2594,
   -2594, -2594, -2594, -2594, -2594,  1086, -2594,    50,    22,   182,
     205,    40, -2594,   731,   731,   657, -2594,   731,   827,  1095,
   -2594,   731,   731, -2594,  1103,    15,    38,  1106,  1167, -2594,
   -2594, -2594,  1162,   731, -2594, -2594,   731,   731,   731,   731,
     731,   731,   731,   731,   731, -2594, -2594, -2594,   731, -2594,
    1128,  1135, -2594,   731,  1201, -2594, -2594, -2594, -2594, -2594,
   -2594,   731, -2594, -2594,   731, -2594, -2594,   490,   490,  1140,
   -2594, -2594, -2594, -2594, -2594, -2594, -2594, -2594, -2594, -2594,
   -2594,   731,   731,  1142,  1158,  1163, -2594, -2594,   731,   731,
     731, -2594,   731, -2594,  1166, -2594, -2594, -2594, -2594,  1069,
   -2594,  1171, -2594,  4986,  1183, -2594,   731, -2594, -2594, -2594,
     731,  1185,  1207,  1207,  4986,   731,   731,   731,   731,   731,
     731, -2594,   731,  4749,  1417,   731,   731, -2594, -2594, -2594,
   -2594, -2594, -2594, -2594, -2594, -2594, -2594,  1417,   731, -2594,
   -2594, -2594, -2594, -2594, -2594, -2594, -2594, -2594, -2594, -2594,
   -2594,  1229, -2594,   960,   449, -2594, -2594, -2594, -2594, -2594,
   -2594, -2594, -2594, -2594,   -78, -2594, -2594, -2594,  1068, -2594,
     830,   520,   520, -2594, -2594, -2594,  1242, -2594,  1251, -2594,
   -2594,   -60, -2594,  1085, -2594, -2594, -2594,  1097, -2594, -2594,
    1167, -2594,  3177,   731, -2594,  4986,  4986,  1167, -2594, -2594,
    1167, -2594, -2594, -2594, -2594,  1167, -2594, -2594,  4986,  1167,
     731, -2594, -2594,  4986, -2594,  1277,   455,  1101,     9, -2594,
   -2594,  1105,  4986,  3574, -2594, -2594, -2594, -2594, -2594,  1288,
    1294,  1299, -2594,  1110, -2594, -2594, -2594,   731, -2594, -2594,
    1226, -2594, -2594, -2594, -2594, -2594, -2594, -2594,    26, -2594,
   -2594, -2594, -2594, -2594, -2594,  1122,  1153, -2594, -2594,  1250,
    1281,  1289, -2594, -2594,  1138, -2594,   731,  1358,  1147,  4285,
   -2594,  1167, -2594,  1359, -2594, -2594, -2594, -2594, -2594, -2594,
   -2594, -2594, -2594, -2594, -2594, -2594, -2594, -2594,  4986,  4986,
    4986, -2594, -2594,  1369,   117, -2594, -2594,  1370,  1375,  1186,
     731, -2594,   430,  1296, -2594,  1385, -2594,   191,  1305,  3609,
      60,  1395, -2594,  1402, -2594,  1403, -2594,     7, -2594,  1408,
    1412, -2594,  1414, -2594, -2594, -2594,   731, -2594,  4285,  4689,
     953,   125,  1419,   757,  1326, -2594, -2594, -2594,  1413,    41,
    1425,  1429,    57,   731,   367,   472,    53,  4986,   117,  1652,
     697,    25,   227,   215,    17, -2594,  1420,  1428,  1443, -2594,
   -2594, -2594, -2594, -2594,   731,   731,   731,   731, -2594, -2594,
     731,  1167,   731, -2594,   731,  1417,   731,  1444,  1167, -2594,
   -2594, -2594, -2594, -2594, -2594, -2594, -2594,   711,   723, -2594,
   -2594, -2594,  1445, -2594, -2594, -2594, -2594,  1356, -2594,  1449,
    1451,  1372,  1456, -2594,  1458, -2594,  1465,  1374,  1468,   487,
     484,   537,    93,   656,  1472,   710, -2594, -2594,  1477,  1478,
    1473, -2594, -2594,  1480, -2594, -2594, -2594, -2594,  1482, -2594,
   -2594,  1484, -2594, -2594,  1487, -2594, -2594, -2594, -2594, -2594,
   -2594, -2594,   731,   731,   731,   731,   731, -2594,   731,  1188,
     731,   731, -2594,  1379, -2594,  1193,  1481, -2594,  1206,  1490,
   -2594, -2594,   244,   731,   731, -2594,  1483,   731,   731,   731,
     731,   731,   731,   731,   731,   731, -2594, -2594,  1491,  1220,
     731,  1485,   915, -2594, -2594, -2594, -2594, -2594, -2594, -2594,
   -2594, -2594, -2594, -2594, -2594, -2594,  1495,  1498,   731,   731,
     731,  1499,   117,  1500,  1504,  1167,  4986, -2594, -2594, -2594,
   -2594, -2594,  1167, -2594, -2594,   731,   731,   731,  4986,   731,
    1417,   731, -2594,   731, -2594, -2594, -2594, -2594, -2594,  1505,
    1508, -2594, -2594, -2594, -2594, -2594, -2594, -2594, -2594, -2594,
   -2594, -2594, -2594, -2594,   501, -2594,   731, -2594, -2594, -2594,
   -2594, -2594, -2594, -2594, -2594,  4986,  4986,   731,  1167, -2594,
     244,   244,   244,  1167,  1417,   731,  1167, -2594, -2594, -2594,
     731, -2594,   442,  1354,  1527,  1536, -2594, -2594,  1167,  4986,
   -2594, -2594,  1537,  1538,  1542,  1287,   731,  1764,   563,   775,
   -2594, -2594, -2594,   731,  1522,   569,  1146, -2594,  1293, -2594,
    1652,  1302,   586,  1265,   513, -2594, -2594,   731, -2594, -2594,
   -2594, -2594, -2594, -2594, -2594, -2594, -2594, -2594,   731,  1552,
   -2594, -2594, -2594,   244, -2594, -2594, -2594, -2594,  4866, -2594,
   -2594,  1558,  1559,   731,  1560,  1563,  1567,   -13,   -13,   -66,
    1571,  1572,  1575,  1577,  1304,  1310,  1578,  1583,  1592,    75,
      75,   -66,  1597,  1598,   -66,  1599,  1600,  4836,  1601,  1603,
   -2594, -2594,  1604,  1605,   211, -2594,  1607,  1608,  1610,  1611,
     -13,   -66,  1609,  1613, -2594,  1614, -2594, -2594,  1167,   974,
    1268,  1388,   -38,  1389,  1523,   526,    -9,  1622,   149,  1492,
    1524,  1059,  1225,  1593,   352,  1401,  1535,  1637,  1438,    37,
      24,   -93,   363,  4749,  1652,  1612,   841,  1415,  1446,  1649,
     100, -2594, -2594,   488,  1653,  1654, -2594, -2594, -2594,  1657,
    1448,    34,  1652,  1453, -2594, -2594, -2594,   117,  1660,  1661,
     731, -2594, -2594, -2594, -2594, -2594, -2594, -2594, -2594, -2594,
       1, -2594,  4140, -2594,   731, -2594,   731, -2594, -2594, -2594,
   -2594,   731,   731,   731,   757,  4986, -2594,  1663,  1239, -2594,
   -2594,   731, -2594, -2594,   731,  4749,   731, -2594, -2594, -2594,
   -2594, -2594, -2594, -2594, -2594, -2594, -2594, -2594, -2594, -2594,
   -2594,   117,   731, -2594,   731,   757,  1664, -2594,   731,   731,
   -2594,   117, -2594, -2594, -2594,   145,  1665,  1666, -2594, -2594,
   -2594, -2594,   731,   731, -2594, -2594,  1417,   731,   731, -2594,
   -2594, -2594, -2594,   731, -2594,   731,  1561, -2594,   731, -2594,
     731,  1562, -2594,  1671, -2594,  1240,  1240,   738,  1240,  1672,
   -2594,   739, -2594, -2594,  1673,  1677,   749,  1675, -2594,  1678,
    1679,  1681, -2594,   780,   806,  1710,  1712,  1714, -2594, -2594,
    1715,  1716,  1718, -2594,  1240,  1240,  1240,   731, -2594, -2594,
   -2594,   731,   731,   731,   731, -2594,   731,  1025,  4986, -2594,
     731, -2594,  4285,  1167, -2594, -2594,  1719, -2594, -2594,  1720,
   -2594, -2594, -2594, -2594,  1707,  2770, -2594, -2594, -2594, -2594,
   -2594, -2594, -2594, -2594, -2594, -2594,   731,  1711,   731,   731,
     731,   994, -2594,  1670,  1722,   731,   731,    71,  1723,   117,
     117, -2594,  1167,   731,  1725,  1726,  1727, -2594,  4986, -2594,
     731, -2594, -2594, -2594,   731,   731,   731,  1167,  1728,  4986,
     244, -2594, -2594, -2594,  1417,   731,  1729,   244,   731,  1689,
    1696,   502, -2594,  1730, -2594, -2594,   773, -2594, -2594,   731,
    1732,  1737,   731, -2594,  1733,  1156,  4749,  1506,   369,  1510,
     189,  4986,   557, -2594,   253,  1602,   230,   619,  1511,   233,
   -2594, -2594,   849,  1573,   410,  1627,   346,  1652,   868, -2594,
    1746,  1520, -2594,   863, -2594, -2594, -2594, -2594,  1652,  1546,
   -2594, -2594, -2594, -2594, -2594,   731,  1187, -2594,   731, -2594,
   -2594,   731,   731, -2594,   731, -2594,   731, -2594, -2594, -2594,
   -2594,  1569,   731, -2594,   731,    23, -2594, -2594,  1750,  1762,
   -2594,   731,   -13,   -13,   -13, -2594, -2594, -2594, -2594, -2594,
   -2594,  1763,   -13,   -13,   -13,   548, -2594, -2594,    75,   -13,
     -13,   -13, -2594, -2594,   -13,   -13,  1765,   -13,   -13,  1766,
      75,   587, -2594,  1768,  1769,  1770, -2594,   285, -2594,   473,
     613, -2594,   637, -2594,  1509,  1772,  1774,  1775,    75,    75,
     -66,  1767,  1777,   -66,  1778,  1783,  1784,   -13,   -13, -2594,
    1786,   -13,   -13, -2594,  1787, -2594, -2594, -2594, -2594, -2594,
   -2594,   117, -2594, -2594, -2594,  4749,  1284,   117,   731,  1363,
    1464,   489, -2594, -2594, -2594,   889, -2594, -2594, -2594, -2594,
   -2594, -2594, -2594, -2594, -2594, -2594, -2594, -2594,  1788,   117,
     731, -2594,   117,  1789,   731,  4986,   117,  1582,  1555,  1564,
     418,   419,  1565,   474,  1493,  1494,  1791,  1792,  1793,   526,
    1799,  1801,  1804,  1512,  1513,  1340,  1805,   117,   731,  1383,
    1591, -2594, -2594,   117,  4749, -2594, -2594,  4749,   731,    -7,
    1807,   117,   731,  1167,  1417,   117, -2594,  1810,  4749,  4986,
     731, -2594, -2594, -2594,   117,   117,  4749, -2594, -2594, -2594,
   -2594, -2594, -2594,  4749,   731,   117, -2594, -2594, -2594,   731,
   -2594, -2594,  1815,   731,  1606,   188,   731,  1617,   731,   196,
     731, -2594,   731,  1618,  1619,   731,   731,   731,   731,   731,
     731,   731,   731,    11,   731,   731,  1620, -2594,   731,   731,
     731,   731, -2594,  4986,  1167,  1816,  4986,  4986,   731,   731,
    1167,  1417, -2594,   731,   731,   731,  4986, -2594,   731,   731,
   -2594, -2594, -2594,  1817, -2594, -2594, -2594, -2594, -2594, -2594,
     731,   731, -2594,   731,   731, -2594, -2594, -2594, -2594, -2594,
   -2594, -2594, -2594, -2594,  1820,  1822,  1824, -2594, -2594,  1240,
    1826,  1827,  1829, -2594,  1831,  1832,  1840,  1843,  1833, -2594,
    1845, -2594, -2594, -2594,  1846,  1847,  1849, -2594,  1851,  1852,
    1850, -2594, -2594, -2594, -2594, -2594, -2594, -2594, -2594, -2594,
   -2594,   731, -2594, -2594, -2594,   731,   731,  1782,  4986, -2594,
     731,  1167, -2594, -2594, -2594,  2770,   731,  1167,   731,   731,
     731, -2594,   731,   731,  1854,   731,  1856,  1844,   731,   731,
   -2594, -2594,  1857,  4986, -2594, -2594, -2594,   731, -2594, -2594,
   -2594,  1167, -2594,   888,   731,   888,   244, -2594,  1167,  4986,
     731,   731,  1859, -2594, -2594, -2594, -2594, -2594,   731, -2594,
   -2594, -2594, -2594, -2594,   731,  1861, -2594, -2594,  4986,  1862,
    1864,  1865,  1866,  4986,  1167, -2594,  4986, -2594,  4986,  4986,
    4749,  4986,  1167, -2594,  4986, -2594, -2594,  4986, -2594, -2594,
    4749,  4986, -2594,  4986,  4986,  4749,  4986, -2594,  4986,  4986,
     731, -2594, -2594, -2594,  4986,  4986,  4986, -2594, -2594,  4986,
    4986, -2594, -2594, -2594, -2594,  4986,  4986, -2594, -2594, -2594,
    4986,  1867,  1870,  1873,  1874,  4986, -2594, -2594,   731,   731,
   -2594, -2594,  1876,   731, -2594, -2594,  1877,  1879, -2594,   731,
   -2594, -2594, -2594,   -13, -2594, -2594, -2594,  1890,  1892,  1894,
   -2594, -2594,   -66,  1896,  1897,  1899,   -13, -2594, -2594, -2594,
   -2594, -2594,    75, -2594, -2594,  1898,   -13,  1900,  1901,  1903,
      75,    75,   -66,  1906,  1908,  1910,   688, -2594,   694, -2594,
     708,  1650,  1911,  1914,  1915,    75,    75,   -66,  1917,  1918,
     -66,  1919,  1658,  1921,  1922,  1923,    75,    75,   -66,  1925,
    1927,   -66,  1928,  1668,  1932,  1934,  1935,    75,    75,   -66,
    1938,  1939,   -66,  1941,  1942,  1943,  1954,    75,    75,   -66,
    1940,  1956,  1968,    75, -2594, -2594, -2594, -2594, -2594,  1971,
   -2594, -2594,  1975,    75,  1976,  1977, -2594, -2594,   -13, -2594,
   -2594,  1978, -2594,  1167, -2594,  4986,   731, -2594,   731,  4986,
     731,  1979,  1268, -2594, -2594, -2594, -2594, -2594, -2594,  1981,
   -2594,  4749,   117,  1985,  4749,  1167, -2594,  1986,  1268,   731,
     731,   731,   731,   731,   731,   731,   731,   731,  1992,  1993,
   -2594, -2594, -2594,  1994, -2594, -2594, -2594,  1997,  1998, -2594,
   -2594, -2594, -2594,   731,  4986,   731,  2000,  1268,   117,  1167,
    1417,  1167,   731, -2594, -2594, -2594, -2594, -2594, -2594, -2594,
   -2594, -2594, -2594, -2594,   731,  1417,  1417, -2594, -2594,  1167,
    1417,  1167,   731, -2594, -2594,  1167,  1417,  1167,  1417, -2594,
   -2594, -2594, -2594,   731,   731,   731,   731,   731,   731,   731,
     731,   731,   731,  2051, -2594,   731,   731,   731,   731,   731,
     731,   731,   731,   731,   731,   731,  3177,  2001,   731, -2594,
     731,   731,   731,  1999,  2003, -2594, -2594,  1167,   244,  2004,
    1167,  1167, -2594, -2594,  1417, -2594,   731, -2594,  2006,  1167,
   -2594, -2594, -2594, -2594, -2594, -2594, -2594,  1240,  1240,  1240,
   -2594, -2594, -2594, -2594, -2594, -2594, -2594, -2594, -2594, -2594,
   -2594, -2594, -2594, -2594, -2594, -2594,  1268,   731, -2594, -2594,
     731, -2594,   731,  1167,   731, -2594,  1417,   731, -2594,   731,
   -2594,  1869,  2007,  2009, -2594,  2011,   731,   731,  2012,  1167,
    4986, -2594, -2594,   731, -2594,   731, -2594,   244,   773,   731,
    2013, -2594,   731,    26, -2594, -2594,  2015,  2016,  2019,  2020,
    1167, -2594,   773,   773,   773,  1167, -2594,   773,   244,   773,
     773,  1167, -2594,   773,   773,   773,  1167, -2594,   773,   773,
    1167,  4986,   773,  1167,   773,   773,  1167,   773,  1167, -2594,
    2022,  2024,  2026,  2027,  1167, -2594, -2594,  2030,    26,  2031,
   -2594,   731, -2594, -2594, -2594, -2594,  2033, -2594, -2594, -2594,
   -2594,   -13,    75, -2594, -2594, -2594, -2594, -2594, -2594,  2034,
   -2594, -2594,    75,  2035,  2036,  2039,    75,    75,   -66,  2042,
    2044,  2048,  2049,  2054,  2055,    75,    75,   -66,  2052,  2057,
    2058,  2059,  2064,  2066,    75,    75,   -66,  2068,  2069,  2072,
      75,   -13,   -13,   -13,   -13,   -13,  2075,   -13,   -13,  2076,
      75,    75,   -13,   -13,   -13,   -13,   -13,  2077,   -13,   -13,
    2079,    75,    75, -2594, -2594, -2594, -2594, -2594,  2080, -2594,
   -2594,  2083,    75, -2594, -2594, -2594, -2594, -2594,  2084, -2594,
   -2594,    75, -2594,    75,  2085, -2594,  2086,  2087, -2594,  4285,
   -2594,   773,  2088,  4749,   773,   731,  4986,  2089, -2594,   773,
   -2594, -2594, -2594,   773, -2594, -2594,  4986,  2090,   731,   731,
     731,   731,   731,   731,   731,   731,   731,   731,   731, -2594,
   -2594, -2594,  4749,   773,   731,  4986,  2091, -2594,  1417,  1417,
    1417,   731,  4749,  1417,   731,  1417,  1417,  4986,  4749,  1417,
     731,  1417, -2594,   731,   731,   731,   731,   731,   731,  1268,
     731,   731,   731,  1584,  1634,  1669,  1691,  1748,  1749,  1751,
    2051, -2594,  1752, -2594, -2594,  1268,   731,   731,   731,   731,
    1268,   731,   731,   731,   731,   731,   731,  1167,   731,  1697,
    1268,   731,   731, -2594, -2594,   244,   117,  2098,  2100, -2594,
   -2594, -2594, -2594, -2594,   244, -2594, -2594, -2594, -2594,   731,
   -2594, -2594,  1417,   731, -2594, -2594, -2594,  1098,  2103,  2104,
   -2594,   731,  2101,   888, -2594,   773, -2594, -2594, -2594, -2594,
    2105, -2594, -2594,  2107,  2110,  2111,  4986,  2113, -2594, -2594,
   -2594, -2594, -2594, -2594, -2594, -2594, -2594, -2594, -2594, -2594,
   -2594, -2594, -2594, -2594,   244,   773, -2594,   244, -2594, -2594,
     244, -2594,   244,  2115,  2117,  4986,  2118, -2594,  2120,  2116,
   -2594,   731, -2594, -2594,   -13,    75, -2594,   -13,   -13,   -13,
     -13,   -13,  2123,   -13,   -13,    75, -2594, -2594, -2594, -2594,
   -2594,  2124, -2594, -2594,    75,   -13,   -13,   -13,   -13,   -13,
    2126,   -13,   -13,    75,   -13, -2594, -2594, -2594, -2594, -2594,
      75, -2594, -2594,  2127,   -13,   -13, -2594, -2594, -2594, -2594,
   -2594,    75, -2594, -2594,  2128,   -13, -2594,    75,  2129, -2594,
      75, -2594, -2594,    75, -2594, -2594,  1167, -2594,  4749,   773,
   -2594, -2594,  2130,  1167,   731, -2594, -2594,  1167,   731, -2594,
   -2594, -2594, -2594, -2594, -2594, -2594, -2594, -2594,   731,   731,
     773, -2594, -2594,  2131,  1167,   731,  1417, -2594, -2594, -2594,
     773, -2594,   731, -2594,  1417, -2594,   773,   773, -2594,  4986,
    1268, -2594,   731,  2132,  2132,   731,   731,  2132,  1268,  2132,
   -2594,  4986,   526,  2133,  2135,  2139,  2140,  2141,  2136, -2594,
     117,  1268,  2132,  2132,   731,   731,  1268,   731,   731,   731,
     731,   731, -2594,  1417,   731,  2142, -2594, -2594,   731,  2132,
     117,    62, -2594,  2143,   117, -2594, -2594, -2594,  2144,   731,
   -2594,  2146,  2148,  2005,   731, -2594, -2594,    88, -2594,  2149,
     121,  4986, -2594, -2594, -2594, -2594, -2594, -2594,  2150,   121,
    4986, -2594,    88,   731, -2594, -2594, -2594, -2594, -2594, -2594,
   -2594,    75, -2594, -2594,   -13,    75, -2594, -2594, -2594, -2594,
   -2594, -2594,    75, -2594, -2594,   -13, -2594,   -13,    75, -2594,
   -2594,   -13,    75, -2594, -2594,    75, -2594, -2594,   731,   773,
   -2594, -2594,  4749,  4986,   731,  4986,   731, -2594, -2594, -2594,
    4749,  4986,   731, -2594, -2594,  4986, -2594, -2594, -2594,   773,
   -2594,  2153, -2594, -2594, -2594,  1268,   731, -2594,  2154, -2594,
   -2594,  1167,  2156, -2594,  2155, -2594, -2594, -2594, -2594, -2594,
    2158, -2594, -2594,  1268,   731,  2159, -2594, -2594,   731,  4986,
   -2594, -2594, -2594, -2594, -2594, -2594, -2594,    62,  1781,  1652,
   -2594, -2594,  2160,  2163, -2594,  2109,  2165,    46, -2594, -2594,
   -2594,  4986, -2594, -2594, -2594, -2594,  4986, -2594, -2594, -2594,
    2166,   -13, -2594, -2594,   -13, -2594, -2594,   -13, -2594,   -13,
   -2594,  4285, -2594,   773, -2594,   773,   731,   773,  2167,   773,
   -2594,   773,   731,   773,   731, -2594, -2594, -2594, -2594,  2168,
   -2594,   731, -2594, -2594,  2169, -2594,   731, -2594, -2594, -2594,
    2171,   731, -2594, -2594, -2594,  1167, -2594, -2594, -2594,  1781,
   -2594,  1872,  1825,  1652, -2594,  2177,  2178,  2172, -2594, -2594,
   -2594, -2594,   850,   850,  1167,  1167, -2594, -2594, -2594, -2594,
   -2594,   773, -2594, -2594,  2180, -2594,  4749, -2594, -2594,  2181,
   -2594,  1268, -2594, -2594,  1268,   731, -2594, -2594,   731, -2594,
    1268,   731, -2594,  4986, -2594,  1872, -2594,   117, -2594,  2182,
    2183, -2594,   731,   731,   731,   731,   121,   121,  2184,  4749,
    1167, -2594,  4749, -2594, -2594,   731,  2186, -2594,   731,   773,
   -2594, -2594, -2594,  2187,  2188,   731,  2189,   731, -2594, -2594,
   -2594,  1167, -2594, -2594,  1167, -2594, -2594,  2191, -2594, -2594,
    2192,  2193, -2594, -2594,  2194, -2594,  2195, -2594, -2594,  1268,
   -2594,  1268, -2594, -2594, -2594, -2594, -2594, -2594, -2594, -2594
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2594, -2594,    -4, -2594,  1230, -2594, -1531,  -937,  1706, -2594,
     918,   130,  1570,   -49,   104, -1656,  1776,  1243,  -721, -1949,
    -877,  1566,  1674, -2594, -1170, -2594, -2331, -1143, -2594, -2594,
   -2594, -2594, -2594, -2594, -2594, -2594, -2594, -2594, -2594, -2594,
   -2594, -2594, -2594, -2594, -2594, -2594, -2594, -2594, -2594, -2594,
   -2594, -2594, -2594, -2594,  -481,  -490, -2594, -2594, -2594, -2594,
   -2594, -2594, -2594,  -371, -2594, -2594, -2594, -2594, -2594, -2594,
   -2594, -2594, -2594, -2594, -2594, -2594, -2594, -2594, -2594, -2594,
   -2594, -2594, -2594, -2594, -2594, -2594, -2594, -2594, -2594, -2594,
   -2594, -2594, -2594, -2594, -2594, -2594, -2594, -2594, -2594, -2594,
   -2594, -2594, -2594, -2594, -2594, -2594, -2594, -2594, -2594, -2594,
   -2594, -2594, -2594, -2594, -2594, -2594, -2594, -2594, -2594, -2594,
   -2594, -2594, -2594, -2594, -2594, -2594, -2594, -2594, -2594, -2594,
   -2594, -2594, -2594, -2594, -2594, -2594, -2594, -2594, -2594, -2594,
   -2594, -2594, -1455, -2594, -2594, -2594, -2594, -2594,  -653, -2594,
   -2594, -2594, -2594, -2594, -2594,    42, -2594, -2594, -2594, -2594,
     -83,  -659, -1681,  -455, -2594, -2594, -2594, -2594,  -530,  -525,
   -2594, -2594, -2593, -2594, -2594, -2594, -2594, -2594, -2594, -2594,
   -2594, -2594, -2594, -2594, -2594, -2594, -2594, -2594, -2594, -2594,
   -2594, -2594, -2594, -2594,  1476, -2594, -2594, -2594, -2594, -2594,
   -2594, -2594, -2594, -2594, -2594, -2594, -2594, -2594, -2594, -2594,
   -2594, -2594, -2594, -2594, -2594, -2594, -2594
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1254
static const yytype_int16 yytable[] =
{
      70,   348,   863,  1583,  1903,  1588,  1511,  2053,   107,  2055,
    1101,  1075,  1078,   893,    67,    68,  1976,   639,   377,   775,
    1924,   988,  1114,    67,    68,   409,   109,    67,    68,   289,
    1105,  1618,  1619,  1620,   109,   258,   311,    67,    68,    67,
      68,  1925,   778,  1754,  1926,   342,    67,    68,   353,    67,
      68,   305,   622,   757,   368,  1927,    67,    68,   374,   414,
    1475,   381, -1108,  1415,  1473,   384,   386,   613,   989,   395,
    1501,   268,   401,   405,  1070,    96,   408,   588,  1928,   304,
     412,  1064,   112,  1417,   744,   413,    67,    68,   748,  1080,
     627,    97,  1362,  1081,  1366,  1929,   259,  1369,   426,  1349,
     435,   436,   440,   442,   546,  1493,   109,   293,   269,  2339,
      67,    68,  1439,   398,  1400,   852,  1115,  1650,   260,   446,
    2668,   109,  1116,  2349,  2350,  2351,    67,    68,  2353,  1046,
    2355,  2356,   319,   868,  2358,  2359,  2360,   291,  2776,  2362,
    2363,   114,    57,  2366,  1345,  2368,  2369,   982,  2371,   114,
    1561,   399,  1065,  2672,   458,  1047,  1476,   745,   423,  1251,
    1252,  1253,  1562,   219,  1082,  1479,  1502,    98,   853,   261,
      54,  1346,  1480,   387,   160,   894,  1442,   569,   491,   220,
    1163,   320,  2800,   512,   424,  1083,   109,    79,    55,   633,
     321,    67,    68,   869,   547,  1350,   965,   990,  1418,    67,
      68,   248,   628,    67,    68,   966,   967,   634,    99,   109,
    1700,   177,    67,    68,   309,   266,  1384,   983,   322,   109,
     445,   114,  1335,   391,   117,  1385,  1386,  1440,  2677,   758,
     118,   119,   117,  2739,  1363,  1066,   114,   498,   118,   119,
     120,   100,   620,   560,  1107,   499,   698,  1084,   751,   102,
    1164,  1710,   968,   746,  1715,  1755,   614,   589,   646,   647,
    1474,  1323,  2447,   410,   378,  2451,   991,  1071,   103,   306,
    2455,   754,  1387,   682,  2456,   270,   992,   629,   640,   415,
    1705,   684,   687,   635,   690,   694,  1048,   696,   271,   623,
    1801,   513,   307,   521,  2472,   526,   530,   706,   776,  1802,
    1803,   114,  1512,   557,   117,   715,   717,  1106,   993,   310,
     118,   119,  1977,  1477,   122,  1117,  1443,   895,   586,   117,
     104,   779,   122,  1503,   114,   118,   119,   630,   262,   760,
     761,   766,    69,   768,   114,   392,  1049,   771,   772,  1651,
    1930,  1200,  1085, -1108,  1494,  2740,  1804,  1072,   784,   786,
     272,   631,   787,   788,   789,   790,   791,   792,   793,   794,
     795,  1050,   388,   152,   796,  1485,  2669,   153,   154,   799,
     801,   152,   341,   323,   263,   153,   154,   802,   393,   394,
     803,   969,   970,  1505,   117,  1444,  2545,   484,   489,  2741,
     118,   119,   692,   485,   122,   570,   352,   812,   813,  2673,
     294,  1388,  1389,   105,   817,   818,   819,   117,   820,   122,
     295,  1955,   373,   118,   119,   389,  2553,   117,   571,  1960,
    1706,  1543,   827,   118,   119,  1701,   828,   719,  1445,   486,
    1053,   833,   834,   835,   836,   837,   838,  1108,   839,  1891,
    1893,   843,   844,   152,   954,   955,  2010,   153,   154,   274,
     971,   275,  1556,   487,   846,  2808,  2809,    80,   152,   889,
     972,   973,   153,   154,   618,   974,  1711,   256,    86,  1716,
    1390,  1054,   573,  1467,   122,  1805,  1806,   279,  1812,   561,
    1391,  1392,   280,  1872,  1481,  1393,   720,  1813,  1814,  1707,
    1697,   956,   975,    81,   106,  1896,   597,   122,  1111,   488,
    2601,  1201,    67,    68,    67,    68,  1677,   122,   875,   877,
    1888,   112,  1394,  1849,  1724,  1495,  1852,  1109,   707,   555,
     804,  2609,   738,   152,    58,   337,   885,   153,   154,  1669,
    1330,  2614,  1708,  1917,  1815,  1053,  1673,  2617,  2618,   598,
     942,   350,   489,   490,  1807,  1154,   152,   841,   726,   326,
     153,   154,   849,   906,  1808,  1809,   152,   112,   112,  1810,
     153,   154,  1767,  1768,    82,    59,  1421,   276,   303,  1725,
     112,   355,    67,    68,   842,  1259,  1054,   402,   619,   556,
     979,   739,   938,    60,   805,   574,  1811,   845,  1468,    67,
      68,    87,  1422,   366,  1873,   562,  1077,   370,  1159,   998,
    1055,  1787,  1788,  1482,  1155,  1698,   371,   728,   721,  1769,
     372,  1331,    61,    88,  1056,  1057,   953,    89,  1823,   281,
     957,   958,  1074,   708,   282,  1423,   283,  1824,  1825,  1305,
      62,  1424,   376,  1726,    63,   722,   850,  1425,  1727,   356,
     890,  1156,   997,   407,   599,   338,    64,    83,  1789,  1737,
    2692,  1834,  1835,   806,  1892,  1894,  1426,  1160,   860,  1073,
      67,    68,  1086,  1816,  1817,   357,   358,    90,  1721,   120,
    2704,   403,   927,   277,  1826,  1722,  1427,  2544,  1703,   359,
    1121,  1122,  1123,  1124,  1874,  1260,  1125,   575,  1127,   959,
    1128,  1428,  1130,  1306,   417,    84,   861,   762,  1836,   960,
     961,   563,  2133,  2134,    91,  1055,  1058,  1059,  2142,  2143,
    1897,  1496,    92,    93,   576,   120,   120,  1165,  1307,  1056,
    1057,  1429,  2151,  2152,  1193,   339,   360,   361,   120,   419,
     740,   962,  1818,  1875,    67,    68,   807,  1102,  1770,  1771,
    1712,   808,  1819,  1820,  2752,   404,  2753,  1821,  2755,  2135,
    2757,  1133,  2758,  1157,  2760,  2144,   734,  1430,  1181,  1182,
    1183,  1184,  1185,  1138,  1186,  1188,  1190,  1191,   763,  2153,
    1431,  1170,    67,    68,  1822,  1317,  1166,  1790,  1791,  1203,
    1204,  1432,   421,  1206,  1207,  1208,  1209,  1210,  1211,  1212,
    1213,  1214,  1325,  1704,  1308,  1217,  1218,  1680,  1681,  1584,
    1590,    65,  2788,  1827,  1828,  1310,  1161,  1772,  1103,  1433,
    1596,  1058,  1059,   459,  1224,  1225,  1226,  1773,  1774,  2630,
    1053,  1434,  1134,  1435,  1436,  1129,   443,  1837,  1838,   471,
    1171,  1234,  1235,  1236,  1139,  1238,   472,  1240,   532,  1241,
     362,  1604,   363,   482,  1309,  2654,  1792,    67,    68,  1775,
    2821,   764,   533,    67,    68,  1713,  1793,  1794,  1585,  1591,
    1244,  1054,  1246,  1437,  2315,  2316,  2317,  1608,   496,  1597,
    1682,   494,  1829,  1249,   534,   523,  1717,   549,  2136,  2137,
     765,  1256,  1830,  1831,  2145,  2146,  1258,  1832,  1795,   550,
    1734,  1104,   380,   535,   559,  2116,  1839,   565,  2154,  2155,
    1605,  1272,  1274,   367,   566,  1135,  1840,  1841,   856,  1315,
     536,  1318,  1321,   537,  1833,  2129,    86,  1140,  1326,  1220,
     364,   568,   327,  1332,   587,  1167,  1609,  1221,  1375,   593,
    2166,   551,   328,  2169,  1333,  2217,  1311,   699,  1842,   538,
     539,  2177,  2706,  2707,  2180,  2056,  2710,  2138,  2712,  1341,
     595,  2227,  2188,  2147,   240,  2191,   616,  2139,  2140,   329,
    2717,  2718,  2198,  2148,  2149,  2722,  2723,  2156,  1245,  2726,
    1239,  1136,  1487,   700,  2727,  2728,   617,  2157,  2158,  1172,
    2246,   621,   241,  1141,    67,    68,  1312,   625,   860,  2141,
    1055,   637,   540,   578,  1876,  2150,  1414,    67,    68,  1728,
     541,   642,   857,   579,  1056,  1057,   643,  1586,  1592,  2159,
     298,  1313,   601,   552,  1255,   648,  1478,  1718,  1598,  1035,
     680,   437,   681,   701,  2762, -1251,   861,  2763,    67,  1627,
     580,  1735,  2766,  1036,   683,   330,  1729,  1504,  2769,    87,
     163,   697,  1037,  2772,   704,   553,  1510,  2632,   710,  1606,
     705,   242,  1038,  1644,   712,   164,  1405,   165,   542,   543,
    1538,    88,  1539,   222,  1488,  2052,   243,  1540,  1541,  1542,
     718,   331,  1719,   822,   823,  1610,   858,  1548,   602,   724,
    1549,  1448,  1552,  1039,  1877,   742,  1736,   166,   223,  2318,
     743,  1730,   438,   769,  2708,   167,  1058,  1059,  1554,   770,
    1555,    67,    68,  1040,  1558,  1559,   581,   773,  1449,   299,
     781,  1450,  2719,  2816,   332,    90,  2819,   603,  1565,  1566,
    1489,   224,   244,  1568,  1569,   702,  1406,  1484,   225,  1570,
     544,  1571,   797,  1878,  1573,   333,  1574,  2830,   226,   227,
     798,  1451,   582,  1631,   811,   228,   814,  1731,  1041,    67,
      68,  2837,    91,   168,  2838,  2839,   604,  2538,    67,    68,
      92,    93,   815,  1320,   245,    67,    68,   816,   229,  1452,
     821,   334,  1453,  1621,   246,   439,   824,  1622,  1623,  1624,
    1625,   300,  1626,  1628,  1042,   230,  1630,   335,   826,  1551,
     301,    67,  1187,    72,   427,  1407,  1408,  1194,  1195,    73,
     231,  1636,   447,   169,    67,    68,   583,   232,  1043,  1409,
    1197,  1198,  1639,   800,  1641,  1642,  1643,  1645,   429,   170,
     171,  1648,  1649,    67,    68,   848,   172,   233,   173,  1657,
     907,   908,  1216,  2794,   847,    74,  1662,   855,  1688,  2797,
    1663,  1664,  1665,  1546,  1547,   162,   864,  1456,  1044,  1410,
    1045,  1671,   239,   174,  1674,   866,  1567,   264,   584,    75,
     313,  2392,   871,   234,   296,  1684,   873,  2306,  1686,  1740,
    2401,    67,    68,   448,  1457,  1412,  1413,  1458,   383,  2410,
    1459,   887,  1577,  1578,  1454,   783,   909,    67,    68,  1865,
      67,  1271,   910,   902,   449,   450,   451,   892,  2835,   903,
    2836,   897,   452,   904,   397,    76,   905,  1460,  1689,  1638,
     928,  1739,   235,  1455,  1746,   453,   930,  1747,  1748,   175,
    1749,   454,  1750,   236,  2624,    67,    68,  2627,  1752,  2629,
    1753,   455,  2498,    67,    68,  1461,  2338,  1759,  1462,  1741,
     911,   929,  2641,  2642,  1909,  1910,   314,   932,  2511,    77,
     830,   831,   237,  2516,   473,   934,   912,  2354,   315,  2656,
     249,   936,   685,   939,   944,  1678,    67,    68,  1869,   913,
     713,   940,   474,   948,   950,   914,   915,  1690,  1691,   951,
    1695,   916,   952,   963,  1670,  1192,    67,    68,  1914,   475,
     964,  1692,   976,   460,   461,   462,   463,   464,   465,   466,
     984,   476,   467,   468,   469,   470,   986,   987,  1742,  1743,
    1579,  1580,  1866,   994,  1868,  1870,  1414,   995,   996,   477,
      67,    68,  1744,   478,  1052,  1061,   427,   428,   429,  1068,
    1063,  1693,   917,   686,  1069,   479,  1881,  1118,  1581,   316,
    1884,   714,   726,  1414,   456,  1119,   250,  1120,  1131,  1143,
    1463,   918,   317,  1144,  1145,   919,  1146,   920,   251,  1147,
    1148,  1151,  1745,  1149,  1913,  1915,  1414,    67,    68,  1871,
    1150,  1412,  1413,  1152,  1923,   480,  1169,  1176,  1934,  1464,
     921,   922,  1174,  1175,  1177,  1196,  1942,  1178,   923,  1179,
     644,   645,  1180,   252,  1199,  1205,  1215,  1219,   727,  1222,
    1949,   728,  1223,  1227,  1229,  1951,  1465,   924,  1230,  1953,
    1242,  1956,  1957,  1243,  1959,  1961,  1962,   689,  1965,  1864,
    1263,  1968,  1969,  1970,  1971,  1972,  1973,  1974,  1975,  1978,
    1980,  1981,  1264,   695,  1983,  1984,  1985,  1986,   729,   253,
    1265,  1268,  1316,  1269,  1992,  1993,  1270,  1322,  1328,  1996,
    1997,  1998,   254,  2620,  2000,  2001,  1324,  1334,   749,   752,
     755,  2628,  1338,   925,  1339,  1342,  2003,  2004,  1343,  2005,
    2006,  1357,  1344,   730,  2640,  1352,  1353,  1358,  1920,  2645,
    1354,  1922,  1355,  1359,  2530,    67,    68,  1887,  1360,  1412,
    1413,   782,  1940,  2534,    67,    68,  1916,  1361,  1412,  1413,
    1946,  1367,  1368,   290,  1370,  1371,  1377,  1948,  1379,  1380,
    1382,  1395,  1396,  1401,  1936,  1397,  1398,  2026,  1402,  1403,
     731,  2027,  2028,   732,  1416,  1419,  2030,  1441,  1420,  1447,
    1446,  2032,  2035,  1466,  2037,  2038,  2039,  1469,  2040,  2041,
    1470,  2043,  1471,  2552,  2046,  2047,  2554,   733,  1472,  2555,
     734,  2556,  1486,  2050,  1492,  1490,  1491,  1497,  1500,  1498,
    2054,   735,  1499,  1506,  1508,  1509,  2059,  2060,  1545,  1557,
    1563,  1564,  1572,  1575,  2062,  1576,  1646,  1589,  1594,  1600,
    2063,  1995,  1595,  1601,  1602,  1603,   444,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,  1612,  2091,  1613,  1614,  1635,
    1615,  1616,  1617,  1640,  1633,  1634,  1647,  1675,  1653,  1658,
    1659,  1660,  1667,  1672,  1676,  1679,  1685,  -450,  1687,  2034,
    1709,  1720,  1696,  1090,  2105,  2106,  1699,  1714,  1723,  2108,
    1732,  1091,  1738,   874,  1757,  2111,   510,  1092,   517,   520,
     880,   525,   529,   881,  1733,  1751,  1758,  1763,   882,  1782,
    1785,  1850,   884,  1796,  1798,  1800,  1843,  1844,  1093,  1845,
    1846,  1851, -1253,  1853,  1275,  1276,  1277,  1854,  1855,   591,
    1858,  1889,  1861,  1879,  1883,  1900,  1901,  1902,  1898,  1899,
    1890,  1895,  1094,  1904,  2076,  1905,   606,   611,  1906,  1911,
    1095,  1932,  1278,  1279,  2082,  1938,  1280,  1907,  1908,  2087,
    1952,  1989,  2002,  1281,  2793,  2007,  1282,  2008,  2009,  1954,
    1283,  2011,  2012,  2013,   943,  2014,  2015,  2018,  1284,  1285,
    1958,  1966,  1967,  1982,   949,  2016,  1286,  1096,  2017,  2019,
    2045,  2020,  2021,  2022,  2025,  1097,  2023,  2024,   691,  2042,
    2044,  2048,  2212,  2061,  2213,  2064,  2215,  2066,  1414,  2067,
    2068,  2069,  2100,  1287,  1288,  2101,   711,  1289,  2102,  2103,
    2107,  2327,  2109,  2110,  1414,  2228,  2229,  2230,  2231,  2232,
    2233,  2234,  2235,  2236,  1290,  2113,  1098,  2114,  1089,  2115,
    2117,  2118,  2122,  1112,  2119,  2124,  2125,  1099,  2126,  2242,
    2130,  2244,  2131,  1414,  1291,  2132,  2161,  2160,  2251,  2162,
    2163,  2167,  2168,  1100,  2170,  2171,  2172,  2173,  2174,  2178,
    2252,  2179,  2502,  2181,  1126,  2182,  1292,  2183,  2258,  2184,
    2185,  1132,  2189,  2190,  2199,  1293,  2192,  2193,  2194,  2263,
    2264,  2265,  2266,  2267,  2268,  2269,  2270,  2271,  2272,  2195,
    2200,  2285,  2286,  2287,  2288,  2289,  2290,  2291,  2292,  2293,
    2294,  2295,  2296,  2201,  2299,  2203,  2300,  2301,  2302,  2204,
    2206,  2207,  2503,  2209,  2216,  2220,  2218,  1294,  2224,  1295,
    2222,  2226,  2312,   825,  1296,  1297,  2237,  2238,  2525,  2239,
    2732,  2240,  2241,  2303,   832,  2245,  2298,  2304,  2307,  1298,
    2313,  2666,  2328,   840,  2329,  2330,  2333,  2504,  2341,  1299,
    2344,  2345,  1414,  2319,  2346,  2347,  2320,  2373,  2321,  2374,
    2323,  2375,  2376,  2325,  2378,  2326,  2380,  2382,  2385,  2505,
    2387,  2388,  2331,  2332,  2389,  1300,  2393,  1301,  2394,  2336,
    2249,  2337,  1228,  2395,  2396,  2340,  2402,  1302,  2342,  2397,
    2398,  2403, -1121,  2404,  2405,  2253,  2254,  1303,  1231,  2406,
    2256,  2407,  2411,  2412,  2732,  1233,  2260,  2413,  2262,  2420,
    2423,  2431,   876,  2434,  2437,   878,   879,  2438,  2440,  2443,
    2444,  2445,  2448,  2454,  2458,  2475,  2506,  2507,   883,  2508,
    2510,  1304,  2532,   886,  2533,  2543,  2273,  2381,  2540,  2541,
    2546,  2547,   898,   900,  2548,  2737,  2549,  2274,  2551,  2557,
    2562,  1250,  2558,  2560,  2311,  2561,  1254,  2571,  2575,  1257,
    2582,  2588,  2592,  2595,  2602,  2610,  2622,   829,  2633,  2634,
    2638,  1266,  1090,  2275,  2635,  2636,  2637,  2653,  2660,  2662,
    1091,  2664,  2665,  2277,  2671,  2676,  1092,  2705,  2711,  2715,
    2446,  2714,  2716,  2721,   810,  2735,  2324,  2343,  2736,  2738,
    2746,  2756,  2764,  2777,  2767,  2770,  2781,  1093,   945,   946,
     947,  2276,  2779,  2780,  2789,  2792,  2743,  2802,  2803,  2810,
    2818,  2679,  2822,  2823,  2825,  2829,  2831,  2509,  2832,  2833,
    2834,  1094,  2729,  2778,  2774,  1153,     0,     0,     0,  1095,
       0,  2452,  2379,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2459,  2460,  2461,  2462,  2463,  2464,
    2465,  2466,  2467,  2468,  2469,     0,     0,  1088,     0,     0,
    2473,  1404,     0,     0,     0,     0,  1096,  2479,     0,     0,
    2483,     0,  2783,  2785,  1097,     0,  2490,    67,    68,  2492,
    2493,  2494,  2495,  2496,  2497,  1414,  2499,  2500,  2501,     0,
       0,     0,     0,   110,     0,     0,     0,  1507,     0,     0,
       0,  1414,  2512,  2513,  2514,  2515,  1414,  2517,  2518,  2519,
    2520,  2521,  2522,   285,  2524,  1098,  1414,  2528,  2529,     0,
       0,     0,     0,     0,     0,     0,  1099,     0,     0,     0,
     112,     0,     0,     0,     0,  2535,     0,  2450,     0,  2537,
       0,     0,  1100,  2539,     0,     0,     0,  2542,     0,     0,
       0,  1553,  2277,     0,  2278,     0,     0,     0,     0,     0,
       0,  1560,     0,     0,     0,     0,  2471,     0,     0,     0,
       0,     0,     0,     0,     0,   113,  2481,     0,     0,     0,
       0,     0,  2488,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2563,  2476,  2477,
    2478,     0,     0,  2482,     0,  2484,  2485,     0,  2279,  2489,
       0,  2491,     0,     0,     0,     0,  1232,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1237,     0,
       0,   115,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1632,     0,     0,     0,
       0,     0,     0,     0,     0,  1247,  1248,     0,   286,     0,
    2604,     0,  2536,     0,  2606,     0,     0,     0,     0,  1654,
    1655,     0,     0,     0,  2607,  2608,     0,     0,   120,  1267,
       0,  2612,     0,   121,     0,  1656,     0,     0,  2615,     0,
       0,     0,     0,   287,     0,     0,  1414,     0,  2621,     0,
    1666,  2625,  2626,     0,  1414,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1414,     0,     0,
    2643,  2644,  1414,  2646,  2647,  2648,  2649,  2650,  1337,     0,
    2652,     0,     0,     0,  2655,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2663,  1365,     0,     0,     0,
    2667,     0,     0,   288,     0,     0,     0,     0,     0,     0,
       0,     0,  2600,     0,     0,     0,     0,     0,     0,  2680,
       0,     0,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
       0,     0,     0,  1483,  2691,     0,     0,     0,     0,     0,
    2696,     0,  2698,     0,     0,     0,  2613,     0,  2702,     0,
       0,     0,     0,     0,  2616,     0,     0,     0,     0,     0,
       0,  1414,  2709,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1348,     0,     0,     0,     0,     0,     0,  1414,
    2720,  1862,  2751,     0,  2724,  1544,     0,  1867,     0,     0,
       0,     0,     0,  2651,     0,  1550,     0,     0,     0,     0,
       0,     0,     0,  2742,  1399,     0,     0,     0,     0,  1880,
       0,     0,  1882,     0,     0,     0,  1886,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2754,     0,     0,     0,     0,  1912,  2759,     0,
    2761,     0,     0,  1918,     0,     0,  2694,  2765,     0,     0,
       0,  1933,  2768,     0,  2700,  1937,     0,  2771,     0,     0,
       0,   649,   650,     0,  1943,  1944,  1935,     0,     0,     0,
       0,     0,     0,     0,     0,  1950,     0,     0,  2782,  2784,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1414,  1629,     0,
    1414,  2795,     0,     0,  2796,     0,  1414,  2798,     0,     0,
       0,     0,     0,    67,    68,  1637,     0,   651,  2804,  2805,
    2806,  2807,     0,   652,     0,     0,     0,  1988,     0,   110,
     653,  2817,   654,  1994,  2820,     0,     0,   655,     0,     0,
     656,  2824,     0,  2826,     0,     0,   657,     0,  1661,     0,
       0,     0,     0,     0,     0,     0,   658,     0,     0,  1668,
       0,     0,   659,     0,     0,  1414,   112,  1414,     0,     0,
       0,   660,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1694,   661,     0,     0,
       0,  1702,     0,     0,     0,     0,     0,     0,     0,     0,
    2791,     0,     0,     0,     0,     0,     0,   662,     0,     0,
       0,   113,     0,     0,  2031,     0,     0,     0,     0,     0,
    2036,     0,   663,     0,     0,     0,     0,     0,     0,     0,
       0,   664,   665,  2812,     0,     0,  2815,     0,     0,     0,
       0,     0,     0,     0,  2051,     0,     0,     0,     0,     0,
       0,  2057,   666,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1776,     0,     0,   115,     0,     0,
       0,     0,     0,   667,     0,     0,  1786,  2071,     0,     0,
       0,     0,     0,     0,     0,  2078,   668,     0,   669,     0,
       0,     0,     0,     0,  1847,  1848,     0,     0,     0,     0,
       0,   670,     0,     0,     0,     0,   671,     0,     0,     0,
       0,     0,   672,     0,     0,     0,     0,     0,     0,   673,
       0,     0,     0,     0,   120,  1863,     0,     0,     0,   121,
       0,     0,     0,     0,     0,     0,     0,     0,   674,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   675,   676,     0,   677,  1885,  1760,  1761,  1762,     0,
       0,     0,     0,     0,     0,     0,  1764,  1765,  1766,     0,
       0,     0,     0,  1777,  1778,  1779,     0,     0,  1780,  1781,
       0,  1783,  1784,     0,  1919,     0,     0,  1921,     0,     0,
       0,     0,     0,     0,   678,     0,     0,     0,  1939,  1941,
       0,     0,     0,     0,     0,     0,  1945,     0,     0,     0,
       0,  1856,  1857,  1947,     0,  1859,  1860,     0,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,  2210,     0,     0,     0,
       0,     0,  2221,  1987,     0,     0,  1990,  1991,     0,     0,
       0,     0,     0,     0,     0,     0,  1999,     0,  2225,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2247,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2248,     0,  2250,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      67,    68,  2255,     0,  2257,     0,     0,     0,  2259,     0,
    2261,     0,     0,     0,     0,     0,   110,     0,  2029,     0,
       0,     0,     0,     0,     0,  2033,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2049,     0,     0,     0,     0,     0,     0,
    2305,     0,     0,  2309,  2310,     0,     0,     0,     0,  2058,
       0,     0,  2314,     0,     0,     0,   528,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2065,     0,
       0,   110,     0,  2070,     0,     0,  2072,     0,  2073,  2074,
    2075,  2077,     0,     0,  2079,     0,  2322,  2080,   113,     0,
    2081,  2083,     0,  2084,  2085,  2086,  2088,     0,  2089,  2090,
       0,     0,  2334,     0,  2092,  2093,  2094,     0,   112,  2095,
    2096,     0,     0,     0,     0,  2097,  2098,     0,     0,     0,
    2099,     0,     0,  2348,     0,  2104,     0,     0,  2352,     0,
       0,     0,     0,   109,  2357,     0,     0,     0,     0,  2361,
       0,     0,     0,  2364,   115,     0,  2367,     0,   110,  2370,
       0,  2372,     0,   113,     0,     0,     0,  2377,  2121,     0,
       0,     0,     0,     0,     0,     0,  2127,  2128,     0,   111,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2164,  2165,     0,     0,   112,     0,     0,     0,     0,
       0,     0,  2175,  2176,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2186,  2187,     0,   121,     0,     0,   115,
       0,     0,     0,  2196,  2197,     0,     0,     0,     0,  2202,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2205,
     113,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2211,     0,  2112,   114,  2214,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2120,  2219,     0,     0,  2223,     0,   120,     0,     0,     0,
    2123,   121,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   115,     0,     0,     0,
       0,     0,     0,     0,  2243,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   116,     0,     0,     0,     0,     0,     0,
       0,   117,     0,     0,     0,     0,     0,   118,   119,     0,
       0,     0,  2208,   120,     0,     0,  2531,     0,   121,     0,
    2523,     0,     0,     0,     0,     0,  2297,     0,     0,     0,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   899,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   110,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   122,     0,     0,     0,     0,     0,     0,     0,     0,
    2335,     0,     0,     0,     0,     0,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,     0,     0,     0,     0,     0,
     152,  2365,     0,     0,   153,   154,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   113,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2384,  2598,
       0,     0,     0,     0,     0,     0,  2603,     0,  2386,     0,
    2605,     0,  2390,  2391,     0,     0,     0,     0,     0,     0,
       0,  2399,  2400,     0,     0,     0,     0,  2611,     0,     0,
    2408,  2409,     0,     0,     0,     0,  2414,     0,     0,     0,
       0,   115,     0,     0,     0,     0,  2424,  2425,     0,     0,
    2639,     0,     0,     0,     0,     0,     0,  2435,  2436,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2439,     0,
    2657,     0,     0,     0,  2661,     0,   977,  2441,     0,  2442,
       0,   978,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2449,     0,     0,  2453,     0,     0,     0,
       0,     0,     0,   121,     0,  2383,  2457,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2470,     0,     0,  2474,     0,     0,     0,     0,
       0,     0,  2480,     0,     0,     0,     0,  2486,  2487,     0,
       0,     0,     0,     0,     0,  2415,  2416,  2417,  2418,  2419,
       0,  2421,  2422,     0,     0,     0,  2426,  2427,  2428,  2429,
    2430,     0,  2432,  2433,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2713,     0,     0,     0,     0,     0,
       0,     0,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
       0,     0,     0,     0,     0,     0,  2550,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,  2559,     0,     0,     0,     0,
       0,  2565,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2574,     0,     0,     0,     0,     0,     0,  2773,     0,
    2576,     0,     0,     0,     0,     0,     0,     0,     0,  2585,
       0,     0,     0,     0,     0,     0,  2587,  2786,  2787,     0,
       0,     0,     0,     0,     0,     0,     0,  2591,     0,     0,
       0,     0,     0,  2594,     0,     0,  2596,  2801,     0,  2597,
       0,     0,     0,     0,     0,     0,     0,     0,  2599,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2813,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2827,     0,     0,  2828,  2564,  2619,
       0,  2566,  2567,  2568,  2569,  2570,     0,  2572,  2573,     0,
       0,  2631,     0,     0,     0,     0,     0,     0,     0,  2577,
    2578,  2579,  2580,  2581,     0,  2583,  2584,     0,  2586,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2589,  2590,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2593,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2675,     0,     0,     0,     0,     0,     0,     0,     0,
    2678,     0,     0,     0,     0,     0,     0,  2681,     0,     0,
       0,  2683,     0,     0,     0,     0,     0,     0,  2684,     0,
       0,     0,     0,     0,  2687,     0,     0,     0,  2689,     0,
       0,  2690,  1513,     0,     0,     0,     0,  1514,     0,     0,
       0,     0,  2693,  2695,     0,  2697,     0,     0,     0,     0,
    2699,  2701,     0,     0,     0,  2703,     0,     0,  1515,  1516,
       0,  1517,  1518,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1519,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1520,  1521,     0,     0,     0,  2725,
       0,     0,  1522,     0,     0,  1523,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2744,  1524,     0,   344,     0,  2745,     1,  2682,  1525,
    1526,   345,     0,  1527,     0,     0,     0,     0,     0,  2685,
       0,  2686,     0,     0,     0,  2688,     0,     0,     2,     0,
       0,     3,     0,     4,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     5,     0,     0,     0,
       0,     6,     7,     0,     8,     9,    10,     0,     0,     0,
       0,     0,     0,     0,    11,     0,     0,     0,     0,     0,
       0,    12,  1528,    13,    14,     0,     0,     0,     0,     0,
       0,     0,    15,    16,     0,     0,  2790,     0,     0,     0,
       0,     0,   110,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2799,     0,     0,     0,     0,     0,     0,
       0,     0,    17,     0,     0,  2747,     0,     0,  2748,  2811,
       0,  2749,  2814,  2750,    18,  1529,     0,     0,    19,     0,
    1530,    20,     0,     0,     0,     0,    21,    22,   501,   502,
       0,     0,   503,    23,     0,  1531,     0,     0,     0,    24,
       0,   607,   110,     0,  1532,     0,     0,     0,     0,     0,
       0,     0,    25,     0,   504,    26,    27,    28,     0,     0,
      29,    30,     0,     0,   113,     0,     0,     0,     0,     0,
       0,     0,  1533,  1534,    31,     0,     0,     0,     0,     0,
       0,   608,     0,     0,     0,     0,     0,     0,     0,    32,
      33,    34,     0,  1535,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    35,     0,     0,     0,     0,     0,     0,
       0,    36,     0,     0,    37,     0,   346,    38,   347,    39,
     115,    40,     0,     0,   113,     0,    41,     0,     0,     0,
       0,     0,   505,     0,     0,     0,     0,  1536,   609,    42,
       0,     0,     0,     0,     0,    43,     0,     0,     0,   506,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    44,    45,     0,     0,     0,     0,     0,     0,   507,
       0,     0,     0,    46,     0,    47,     0,     0,     0,     0,
     115,    48,   121,     0,    49,    50,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,     0,    51,     0,     0,     0,     0,
       0,    52,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   508,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   121,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,     0,
     509,     0,     0,     0,     0,     0,     0,     0,   610,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   999,
    1000,  1001,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1002,  1003,     0,
     110,  1004,     0,     0,  1005,     0,     0,     0,     0,     0,
       0,  1006,     0,     0,     0,  1007,     0,     0,     0,     0,
       0,     0,     0,  1008,  1009,     0,     0,     0,   110,     0,
       0,  1010,  1011,     0,     0,     0,     0,   112,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1012,     0,
       0,     0,     0,     0,  1013,     0,     0,     0,  1014,  1015,
       0,     0,  1016,     0,     0,   112,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1017,
     110,     0,   113,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1018,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     113,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     515,  1019,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   115,     0,
       0,     0,     0,     0,  1020,   110,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   113,     0,     0,     0,   115,     0,     0,     0,
       0,     0,  1021,     0,  1022,     0,     0,     0,     0,  1023,
    1024,     0,  1336,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1025,  1026,   120,     0,     0,     0,     0,
     121,     0,     0,  1027,  1028,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   115,     0,
       0,     0,     0,   120,     0,     0,     0,   113,   121,     0,
    1029,     0,  1030,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1031,     0,  1032,     0,     0,     0,
       0,     0,  1033,     0,     0,     0,     0,   519,  1373,     0,
       0,     0,     0,     0,     0,   110,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     121,     0,     0,   115,     0,     0,  1034,     0,     0,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   121,   516,   113,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,     0,     0,     0,
       0,     0,     0,   115,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,  1374,     0,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,     0,     0,     0,   121,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   179,
       0,     0,   180,     0,   181,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   182,     0,   183,   184,   185,     0,     0,
       0,     0,     0,     0,     0,   186,     0,   187,     0,     0,
       0,     0,   188,     0,   189,   190,   191,     0,     0,     0,
       0,   192,     0,   193,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   194,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   195,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     196,   197,     0,     0,   198,     0,     0,     0,   199,     0,
     200,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   201,   202,     0,     0,   203,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   204,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     205,   206,     0,     0,     0,     0,     0,     0,   207,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     208,     0,   209,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   210,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   211,   212,     0,     0,     0,     0,     0,     0,
       0,   213,     0,     0,     0,     0,     0,     0,   214,     0,
       0,     0,     0,     0,   215,     0,   216,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   217
};

static const yytype_int16 yycheck[] =
{
       4,    50,   492,  1146,  1459,  1148,     5,  1663,    12,  1665,
     669,   664,   665,     4,     3,     4,     5,     5,    32,     4,
      27,    14,     5,     3,     4,     4,     4,     3,     4,    33,
       5,  1174,  1175,  1176,     4,     5,    40,     3,     4,     3,
       4,    48,     4,    20,    51,    49,     3,     4,    52,     3,
       4,    61,     5,    13,    58,    62,     3,     4,    62,     5,
      36,    65,     0,  1000,    27,    69,    70,     4,    61,    73,
      36,    20,    76,    77,    17,    83,    80,    16,    85,    37,
      84,    40,    56,   121,    34,    89,     3,     4,    66,    36,
       5,    99,    17,    40,   971,   102,    66,   974,   102,   165,
     104,   105,   106,   107,   211,     5,     4,     5,    57,  2058,
       3,     4,   121,   138,   991,   193,    99,    46,    88,   123,
      32,     4,   105,  2072,  2073,  2074,     3,     4,  2077,     4,
    2079,  2080,    50,   193,  2083,  2084,  2085,    33,  2731,  2088,
    2089,   119,    66,  2092,   157,  2094,  2095,    87,  2097,   119,
       5,   176,   111,    32,   158,    30,   132,   107,     5,   880,
     881,   882,    17,    83,   111,   258,   132,   175,   246,   139,
     240,   184,   265,     4,    33,   166,    27,    61,   182,    99,
      87,    99,  2775,   187,    31,   132,     4,   281,   258,    93,
     108,     3,     4,   253,   301,   261,     5,   190,   236,     3,
       4,    16,   117,     3,     4,    14,    15,   111,   216,     4,
      21,   144,     3,     4,   194,     5,     5,   157,   136,     4,
     116,   119,   943,   187,   202,    14,    15,   236,  2559,   189,
     208,   209,   202,   187,   159,   194,   119,   169,   208,   209,
     214,   249,   246,   201,    17,   177,   295,   194,    66,    40,
     157,    21,    61,   203,    21,   232,   193,   196,   262,   263,
     223,   920,  2211,   242,   278,  2214,   259,   210,    59,   279,
    2219,    66,    61,   277,  2223,   224,   269,   192,   266,   225,
      27,   285,   286,   187,   288,   289,   161,   291,   237,   242,
       5,   187,   302,   189,  2243,   191,   192,   301,   283,    14,
      15,   119,   301,   199,   202,   309,   310,   282,   301,   289,
     208,   209,   301,   289,   292,   298,   167,   308,   214,   202,
     111,   283,   292,   289,   119,   208,   209,   242,   298,   333,
     334,   335,   289,   337,   119,   299,   211,   341,   342,   268,
     347,    97,   289,   281,   244,   299,    61,   290,   352,   353,
     299,   266,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   236,   193,   341,   368,  1024,   278,   345,   346,   373,
     374,   341,   289,   291,   344,   345,   346,   381,   342,   343,
     384,   190,   191,  1042,   202,   236,  2335,   187,   342,   343,
     208,   209,   288,   193,   292,   279,   289,   401,   402,   278,
     298,   190,   191,   194,   408,   409,   410,   202,   412,   292,
     308,   223,   289,   208,   209,   246,  2365,   202,   302,   223,
     167,  1074,   426,   208,   209,   236,   430,    61,   279,   229,
      63,   435,   436,   437,   438,   439,   440,   210,   442,    21,
      21,   445,   446,   341,    14,    15,  1589,   345,   346,    64,
     259,    66,  1105,   253,   458,  2786,  2787,     4,   341,     4,
     269,   270,   345,   346,     6,   274,   236,   228,    28,   236,
     259,   104,    21,   121,   292,   190,   191,    66,     5,    66,
     269,   270,   203,  1420,   121,   274,   120,    14,    15,   236,
     121,    61,   301,    40,   285,    21,    44,   292,   283,   299,
    2449,   257,     3,     4,     3,     4,     4,   292,   512,   513,
    1447,    56,   301,  1390,   168,    27,  1393,   290,   150,     5,
      30,  2470,    61,   341,    12,     4,   530,   345,   346,  1250,
      17,  2480,   279,  1470,    61,    63,  1257,  2486,  2487,    87,
     589,   228,   342,   343,   259,    61,   341,   443,    61,     4,
     345,   346,   103,   557,   269,   270,   341,    56,    56,   274,
     345,   346,    14,    15,   111,    53,    40,   182,    88,   223,
      56,     0,     3,     4,   444,   133,   104,    78,   120,    65,
     629,   120,   586,    71,    94,   134,   301,   457,   236,     3,
       4,   151,    66,     5,   105,   182,   124,   265,    61,   648,
     233,    14,    15,   240,   120,   236,     5,   120,   242,    61,
       4,    98,   100,   173,   247,   248,   620,   177,     5,   340,
     190,   191,   255,   255,   345,    99,   347,    14,    15,    66,
     118,   105,     5,   287,   122,   269,   187,   111,  1297,    22,
     536,   157,   646,     5,   192,   124,   134,   194,    61,  1308,
    2599,    14,    15,   163,   236,   236,   130,   120,   138,   663,
       3,     4,   666,   190,   191,    48,    49,   227,   258,   214,
    2619,   172,   568,   288,    61,   265,   150,  2333,   121,    62,
     684,   685,   686,   687,   195,   243,   690,   236,   692,   259,
     694,   165,   696,   130,    31,   242,   176,    40,    61,   269,
     270,   288,    14,    15,   264,   233,   339,   340,    14,    15,
     236,   223,   272,   273,   263,   214,   214,    61,   155,   247,
     248,   195,    14,    15,   773,   204,   109,   110,   214,     5,
     269,   301,   259,   244,     3,     4,   246,    40,   190,   191,
     121,   251,   269,   270,  2693,   246,  2695,   274,  2697,    61,
    2699,    40,  2701,   269,  2703,    61,   269,   231,   762,   763,
     764,   765,   766,    40,   768,   769,   770,   771,   111,    61,
     244,    61,     3,     4,   301,   206,   120,   190,   191,   783,
     784,   255,     5,   787,   788,   789,   790,   791,   792,   793,
     794,   795,   206,   236,   231,   799,   800,    24,    25,    61,
      61,   289,  2751,   190,   191,    30,   269,   259,   111,   283,
      61,   339,   340,     4,   818,   819,   820,   269,   270,  2500,
      63,   295,   111,   297,   298,   695,   194,   190,   191,   117,
     120,   835,   836,   837,   111,   839,    66,   841,    45,   843,
     223,    61,   225,   118,   281,  2526,   259,     3,     4,   301,
    2799,   194,    59,     3,     4,   236,   269,   270,   120,   120,
     864,   104,   866,   337,  2007,  2008,  2009,    61,   169,   120,
      97,   281,   259,   877,    81,    33,    27,     5,   190,   191,
     223,   885,   269,   270,   190,   191,   890,   274,   301,    89,
      27,   194,   123,   100,    16,  1772,   259,    66,   190,   191,
     120,   905,   906,    59,   229,   194,   269,   270,    78,   913,
     117,   915,   916,   120,   301,  1792,    28,   194,   922,     4,
     303,   280,    37,   927,    89,   269,   120,    12,   977,    72,
    1807,     6,    47,  1810,   938,  1872,   161,    54,   301,   146,
     147,  1818,  2623,  2624,  1821,  1666,  2627,   259,  2629,   953,
      31,  1888,  1829,   259,    88,  1832,     5,   269,   270,    74,
    2641,  2642,  1839,   269,   270,  2646,  2647,   259,   864,  2650,
     840,   260,   131,    90,  2655,  2656,     4,   269,   270,   269,
    1917,     4,   116,   260,     3,     4,   211,     5,   138,   301,
     233,     5,   199,    37,   105,   301,  1000,     3,     4,   131,
     207,     4,   172,    47,   247,   248,     5,   269,   269,   301,
      70,   236,   150,    88,   884,     5,  1020,   168,   269,    66,
       5,    40,     4,   140,  2705,     0,   176,  2708,     3,     4,
      74,   168,  2713,    80,     5,   150,   168,  1041,  2719,   151,
      29,     4,    89,  2724,     4,   120,  1050,  2502,     5,   269,
       4,   185,    99,    59,     4,    44,    82,    46,   265,   266,
    1064,   173,  1066,    19,   223,   177,   200,  1071,  1072,  1073,
      97,   186,   223,     4,     5,   269,   246,  1081,   216,   120,
    1084,    22,  1086,   130,   195,     5,   223,    76,    44,  2026,
       4,   223,   111,   266,  2625,    84,   339,   340,  1102,     4,
    1104,     3,     4,   150,  1108,  1109,   150,     4,    49,   169,
       4,    52,  2643,  2794,   229,   227,  2797,   255,  1122,  1123,
     279,    77,   256,  1127,  1128,   242,   152,  1023,    84,  1133,
     337,  1135,     4,   244,  1138,   250,  1140,  2818,    94,    95,
       5,    82,   186,  1192,     4,   101,     4,   279,   195,     3,
       4,  2832,   264,   142,  2835,  2836,   294,    59,     3,     4,
     272,   273,     4,    17,   298,     3,     4,     4,   124,   110,
       4,   286,   113,  1177,   308,   194,     5,  1181,  1182,  1183,
    1184,   241,  1186,  1187,   231,   141,  1190,   302,     5,  1085,
     250,     3,     4,   187,     9,   221,   222,     4,     5,   193,
     156,  1205,    35,   192,     3,     4,   250,   163,   255,   235,
       4,     5,  1216,    12,  1218,  1219,  1220,  1221,    11,   208,
     209,  1225,  1226,     3,     4,   265,   215,   183,   217,  1233,
       4,     5,    12,  2764,     5,   229,  1240,   169,    82,  2770,
    1244,  1245,  1246,     4,     5,    15,     4,    22,   295,   275,
     297,  1255,    22,   242,  1258,     4,  1126,    27,   302,   253,
      26,  2138,   177,   219,    34,  1269,   169,  1988,  1272,    82,
    2147,     3,     4,   106,    49,     7,     8,    52,   123,  2156,
      55,     4,    42,    43,   225,   123,    60,     3,     4,     5,
       3,     4,    66,     5,   127,   128,   129,   196,  2829,     5,
    2831,   196,   135,     4,    74,   299,   196,    82,   152,  1205,
     188,  1315,   268,   254,  1318,   148,    66,  1321,  1322,   308,
    1324,   154,  1326,   279,  2494,     3,     4,  2497,  1332,  2499,
    1334,   164,  2269,     3,     4,   110,  2057,  1341,   113,   152,
     114,   188,  2512,  2513,     4,     5,   112,    66,  2285,   343,
     432,   433,   308,  2290,    53,    66,   130,  2078,   124,  2529,
      26,   223,    40,     5,     5,  1261,     3,     4,     5,   143,
      40,   224,    71,     4,     4,   149,   150,   221,   222,     4,
    1276,   155,   196,    87,  1254,     6,     3,     4,     5,    88,
       5,   235,    87,   163,   164,   165,   166,   167,   168,   169,
       5,   100,   172,   173,   174,   175,     4,     4,   221,   222,
     170,   171,  1416,     5,  1418,  1419,  1420,     5,     4,   118,
       3,     4,   235,   122,     5,    99,     9,    10,    11,     4,
      17,   275,   206,   111,     5,   134,  1440,    17,   198,   205,
    1444,   111,    61,  1447,   277,    17,   112,     4,     4,     4,
     225,   225,   218,    97,     5,   229,     5,   231,   124,    87,
       4,    87,   275,     5,  1468,  1469,  1470,     3,     4,     5,
       5,     7,     8,     5,  1478,   174,     4,     4,  1482,   254,
     254,   255,     5,     5,     4,     4,  1490,     5,   262,     5,
     260,   261,     5,   159,     4,    12,     5,    12,   117,     4,
    1504,   120,     4,     4,     4,  1509,   281,   281,     4,  1513,
       5,  1515,  1516,     5,  1518,  1519,  1520,   287,  1522,  1415,
     166,  1525,  1526,  1527,  1528,  1529,  1530,  1531,  1532,  1533,
    1534,  1535,     5,   290,  1538,  1539,  1540,  1541,   157,   205,
       4,     4,    20,     5,  1548,  1549,     4,   254,   283,  1553,
    1554,  1555,   218,  2490,  1558,  1559,   254,     5,   328,   329,
     330,  2498,     4,   337,     5,     5,  1570,  1571,     5,  1573,
    1574,   267,     5,   192,  2511,     4,     4,   267,  1474,  2516,
       5,  1477,     5,     5,  2305,     3,     4,     5,     5,     7,
       8,   348,  1488,  2314,     3,     4,     5,     5,     7,     8,
    1496,     4,     4,    33,     5,     5,     5,  1503,     5,     5,
       5,     4,     4,     4,  1484,     5,     5,  1621,     5,     5,
     239,  1625,  1626,   242,   236,   236,  1630,     5,   105,   105,
     138,  1635,  1636,    40,  1638,  1639,  1640,   236,  1642,  1643,
     105,  1645,     5,  2364,  1648,  1649,  2367,   266,   210,  2370,
     269,  2372,    40,  1657,     5,   240,   210,     4,   210,     5,
    1664,   280,     5,   210,     4,     4,  1670,  1671,     5,     5,
       5,     5,   111,   111,  1678,     4,     6,     5,     5,     4,
    1684,  1551,     5,     5,     5,     4,   116,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,     5,  1720,     5,     4,    12,
       5,     5,     4,    12,     5,     5,     4,    38,     5,     4,
       4,     4,     4,     4,    38,     5,     4,     0,     5,  1635,
     138,   168,   236,    91,  1748,  1749,   236,   236,   121,  1753,
       4,    99,   206,   510,     4,  1759,   186,   105,   188,   189,
     517,   191,   192,   520,   244,   196,     4,     4,   525,     4,
       4,     4,   529,     5,     5,     5,   267,     5,   126,     5,
       5,     4,     0,     5,    20,    21,    22,     4,     4,   219,
       4,   236,     5,     5,     5,     4,     4,     4,   305,   305,
     236,   236,   150,     4,  1700,     4,   236,   237,     4,     4,
     158,     4,    48,    49,  1710,     5,    52,   305,   305,  1715,
       5,     5,     5,    59,  2761,     5,    62,     5,     4,   223,
      66,     5,     5,     4,   591,     4,     4,     4,    74,    75,
     223,   223,   223,   223,   614,     5,    82,   195,     5,     4,
       6,     5,     5,     4,     4,   203,     5,     5,   288,     5,
       4,     4,  1866,     4,  1868,     4,  1870,     5,  1872,     5,
       5,     5,     5,   109,   110,     5,   306,   113,     5,     5,
       4,    12,     5,     4,  1888,  1889,  1890,  1891,  1892,  1893,
    1894,  1895,  1896,  1897,   130,     5,   244,     5,   668,     5,
       4,     4,     4,   673,     5,     5,     5,   255,     5,  1913,
       4,  1915,     4,  1917,   150,     5,     5,   267,  1922,     5,
       5,     4,     4,   271,     5,   267,     5,     5,     5,     4,
    1934,     4,   348,     5,   691,   267,   172,     5,  1942,     5,
       5,   698,     4,     4,     4,   181,     5,     5,     5,  1953,
    1954,  1955,  1956,  1957,  1958,  1959,  1960,  1961,  1962,     5,
       4,  1965,  1966,  1967,  1968,  1969,  1970,  1971,  1972,  1973,
    1974,  1975,  1976,     5,  1978,     4,  1980,  1981,  1982,     4,
       4,     4,   348,     5,     5,  1881,     5,   223,  1884,   225,
       5,     5,  1996,   423,   230,   231,     4,     4,   301,     5,
    2659,     4,     4,     4,   434,     5,     5,     4,     4,   245,
       4,     6,     5,   443,     5,     4,     4,   348,     5,   255,
       5,     5,  2026,  2027,     5,     5,  2030,     5,  2032,     5,
    2034,     5,     5,  2037,     4,  2039,     5,     4,     4,   348,
       5,     5,  2046,  2047,     5,   281,     4,   283,     4,  2053,
    1920,  2055,   822,     5,     5,  2059,     4,   293,  2062,     5,
       5,     4,   281,     5,     5,  1935,  1936,   303,   825,     5,
    1940,     5,     4,     4,  2733,   832,  1946,     5,  1948,     4,
       4,     4,   512,     4,     4,   515,   516,     4,     4,     4,
       4,     4,     4,     4,     4,     4,   348,   348,   528,   348,
     348,   337,     4,   533,     4,     4,    55,  2111,     5,     5,
       5,     4,   542,   543,     4,     6,     5,    66,     5,     4,
       4,   878,     5,     5,  1994,     5,   883,     4,     4,   886,
       4,     4,     4,     4,     4,     4,     4,   431,     5,     4,
       4,   898,    91,    92,     5,     5,     5,     5,     5,     5,
      99,     5,     4,   281,     5,     5,   105,     4,     4,     4,
    2209,     5,     4,     4,   388,     5,  2036,  2063,     5,     4,
       4,     4,     4,   348,     5,     4,     4,   126,   608,   609,
     610,   130,     5,     5,     4,     4,  2667,     5,     5,     5,
       4,  2562,     5,     5,     5,     4,     4,  2280,     5,     5,
       5,   150,  2657,  2733,  2729,   729,    -1,    -1,    -1,   158,
      -1,  2215,  2108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2228,  2229,  2230,  2231,  2232,  2233,
    2234,  2235,  2236,  2237,  2238,    -1,    -1,   667,    -1,    -1,
    2244,   998,    -1,    -1,    -1,    -1,   195,  2251,    -1,    -1,
    2254,    -1,  2742,  2743,   203,    -1,  2260,     3,     4,  2263,
    2264,  2265,  2266,  2267,  2268,  2269,  2270,  2271,  2272,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    -1,  1047,    -1,    -1,
      -1,  2285,  2286,  2287,  2288,  2289,  2290,  2291,  2292,  2293,
    2294,  2295,  2296,    39,  2298,   244,  2300,  2301,  2302,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   255,    -1,    -1,    -1,
      56,    -1,    -1,    -1,    -1,  2319,    -1,  2213,    -1,  2323,
      -1,    -1,   271,  2327,    -1,    -1,    -1,  2331,    -1,    -1,
      -1,  1101,   281,    -1,   283,    -1,    -1,    -1,    -1,    -1,
      -1,  1111,    -1,    -1,    -1,    -1,  2242,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   101,  2252,    -1,    -1,    -1,
      -1,    -1,  2258,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2381,  2248,  2249,
    2250,    -1,    -1,  2253,    -1,  2255,  2256,    -1,   337,  2259,
      -1,  2261,    -1,    -1,    -1,    -1,   826,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   838,    -1,
      -1,   157,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1193,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   875,   876,    -1,   194,    -1,
    2454,    -1,  2322,    -1,  2458,    -1,    -1,    -1,    -1,  1229,
    1230,    -1,    -1,    -1,  2468,  2469,    -1,    -1,   214,   899,
      -1,  2475,    -1,   219,    -1,  1232,    -1,    -1,  2482,    -1,
      -1,    -1,    -1,   229,    -1,    -1,  2490,    -1,  2492,    -1,
    1247,  2495,  2496,    -1,  2498,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2511,    -1,    -1,
    2514,  2515,  2516,  2517,  2518,  2519,  2520,  2521,   948,    -1,
    2524,    -1,    -1,    -1,  2528,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2539,   970,    -1,    -1,    -1,
    2544,    -1,    -1,   289,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2448,    -1,    -1,    -1,    -1,    -1,    -1,  2563,
      -1,    -1,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
      -1,    -1,    -1,  1023,  2598,    -1,    -1,    -1,    -1,    -1,
    2604,    -1,  2606,    -1,    -1,    -1,  2476,    -1,  2612,    -1,
      -1,    -1,    -1,    -1,  2484,    -1,    -1,    -1,    -1,    -1,
      -1,  2625,  2626,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   958,    -1,    -1,    -1,    -1,    -1,    -1,  2643,
    2644,  1411,  2691,    -1,  2648,  1075,    -1,  1417,    -1,    -1,
      -1,    -1,    -1,  2523,    -1,  1085,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2667,   990,    -1,    -1,    -1,    -1,  1439,
      -1,    -1,  1442,    -1,    -1,    -1,  1446,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2696,    -1,    -1,    -1,    -1,  1467,  2702,    -1,
    2704,    -1,    -1,  1473,    -1,    -1,  2602,  2711,    -1,    -1,
      -1,  1481,  2716,    -1,  2610,  1485,    -1,  2721,    -1,    -1,
      -1,     4,     5,    -1,  1494,  1495,  1483,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1505,    -1,    -1,  2742,  2743,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2761,  1188,    -1,
    2764,  2765,    -1,    -1,  2768,    -1,  2770,  2771,    -1,    -1,
      -1,    -1,    -1,     3,     4,  1205,    -1,    60,  2782,  2783,
    2784,  2785,    -1,    66,    -1,    -1,    -1,  1544,    -1,    19,
      73,  2795,    75,  1550,  2798,    -1,    -1,    80,    -1,    -1,
      83,  2805,    -1,  2807,    -1,    -1,    89,    -1,  1238,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,  1249,
      -1,    -1,   105,    -1,    -1,  2829,    56,  2831,    -1,    -1,
      -1,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1276,   130,    -1,    -1,
      -1,  1281,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2756,    -1,    -1,    -1,    -1,    -1,    -1,   150,    -1,    -1,
      -1,   101,    -1,    -1,  1631,    -1,    -1,    -1,    -1,    -1,
    1637,    -1,   165,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   174,   175,  2789,    -1,    -1,  2792,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1661,    -1,    -1,    -1,    -1,    -1,
      -1,  1668,   195,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1358,    -1,    -1,   157,    -1,    -1,
      -1,    -1,    -1,   216,    -1,    -1,  1370,  1694,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1702,   229,    -1,   231,    -1,
      -1,    -1,    -1,    -1,  1388,  1389,    -1,    -1,    -1,    -1,
      -1,   244,    -1,    -1,    -1,    -1,   249,    -1,    -1,    -1,
      -1,    -1,   255,    -1,    -1,    -1,    -1,    -1,    -1,   262,
      -1,    -1,    -1,    -1,   214,  1415,    -1,    -1,    -1,   219,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   281,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   294,   295,    -1,   297,  1445,  1342,  1343,  1344,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1352,  1353,  1354,    -1,
      -1,    -1,    -1,  1359,  1360,  1361,    -1,    -1,  1364,  1365,
      -1,  1367,  1368,    -1,  1474,    -1,    -1,  1477,    -1,    -1,
      -1,    -1,    -1,    -1,   337,    -1,    -1,    -1,  1488,  1489,
      -1,    -1,    -1,    -1,    -1,    -1,  1496,    -1,    -1,    -1,
      -1,  1397,  1398,  1503,    -1,  1401,  1402,    -1,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,  1863,    -1,    -1,    -1,
      -1,    -1,  1882,  1543,    -1,    -1,  1546,  1547,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1556,    -1,  1885,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1918,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1919,    -1,  1921,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,  1939,    -1,  1941,    -1,    -1,    -1,  1945,    -1,
    1947,    -1,    -1,    -1,    -1,    -1,    19,    -1,  1628,    -1,
      -1,    -1,    -1,    -1,    -1,  1635,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1653,    -1,    -1,    -1,    -1,    -1,    -1,
    1987,    -1,    -1,  1990,  1991,    -1,    -1,    -1,    -1,  1669,
      -1,    -1,  1999,    -1,    -1,    -1,     4,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1688,    -1,
      -1,    19,    -1,  1693,    -1,    -1,  1696,    -1,  1698,  1699,
    1700,  1701,    -1,    -1,  1704,    -1,  2033,  1707,   101,    -1,
    1710,  1711,    -1,  1713,  1714,  1715,  1716,    -1,  1718,  1719,
      -1,    -1,  2049,    -1,  1724,  1725,  1726,    -1,    56,  1729,
    1730,    -1,    -1,    -1,    -1,  1735,  1736,    -1,    -1,    -1,
    1740,    -1,    -1,  2070,    -1,  1745,    -1,    -1,  2075,    -1,
      -1,    -1,    -1,     4,  2081,    -1,    -1,    -1,    -1,  2086,
      -1,    -1,    -1,  2090,   157,    -1,  2093,    -1,    19,  2096,
      -1,  2098,    -1,   101,    -1,    -1,    -1,  2104,  1782,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1790,  1791,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1805,  1806,    -1,    -1,    56,    -1,    -1,    -1,    -1,
      -1,    -1,  1816,  1817,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1827,  1828,    -1,   219,    -1,    -1,   157,
      -1,    -1,    -1,  1837,  1838,    -1,    -1,    -1,    -1,  1843,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1853,
     101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1865,    -1,  1763,   119,  1869,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1776,  1881,    -1,    -1,  1884,    -1,   214,    -1,    -1,    -1,
    1786,   219,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   157,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1914,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   194,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   202,    -1,    -1,    -1,    -1,    -1,   208,   209,    -1,
      -1,    -1,  1858,   214,    -1,    -1,  2306,    -1,   219,    -1,
    2297,    -1,    -1,    -1,    -1,    -1,  1976,    -1,    -1,    -1,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,     4,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   292,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2050,    -1,    -1,    -1,    -1,    -1,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,    -1,    -1,    -1,    -1,    -1,
     341,  2091,    -1,    -1,   345,   346,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2122,  2446,
      -1,    -1,    -1,    -1,    -1,    -1,  2453,    -1,  2132,    -1,
    2457,    -1,  2136,  2137,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2145,  2146,    -1,    -1,    -1,    -1,  2474,    -1,    -1,
    2154,  2155,    -1,    -1,    -1,    -1,  2160,    -1,    -1,    -1,
      -1,   157,    -1,    -1,    -1,    -1,  2170,  2171,    -1,    -1,
    2510,    -1,    -1,    -1,    -1,    -1,    -1,  2181,  2182,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2192,    -1,
    2530,    -1,    -1,    -1,  2534,    -1,   157,  2201,    -1,  2203,
      -1,   162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2213,    -1,    -1,  2216,    -1,    -1,    -1,
      -1,    -1,    -1,   219,    -1,  2121,  2226,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2242,    -1,    -1,  2245,    -1,    -1,    -1,    -1,
      -1,    -1,  2252,    -1,    -1,    -1,    -1,  2257,  2258,    -1,
      -1,    -1,    -1,    -1,    -1,  2161,  2162,  2163,  2164,  2165,
      -1,  2167,  2168,    -1,    -1,    -1,  2172,  2173,  2174,  2175,
    2176,    -1,  2178,  2179,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2631,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
      -1,    -1,    -1,    -1,    -1,    -1,  2346,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,  2375,    -1,    -1,    -1,    -1,
      -1,  2385,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2395,    -1,    -1,    -1,    -1,    -1,    -1,  2725,    -1,
    2404,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2413,
      -1,    -1,    -1,    -1,    -1,    -1,  2420,  2744,  2745,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2431,    -1,    -1,
      -1,    -1,    -1,  2437,    -1,    -1,  2440,  2777,    -1,  2443,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2448,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2790,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2811,    -1,    -1,  2814,  2384,  2489,
      -1,  2387,  2388,  2389,  2390,  2391,    -1,  2393,  2394,    -1,
      -1,  2501,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2405,
    2406,  2407,  2408,  2409,    -1,  2411,  2412,    -1,  2414,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2424,  2425,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2435,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2551,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2560,    -1,    -1,    -1,    -1,    -1,    -1,  2571,    -1,    -1,
      -1,  2575,    -1,    -1,    -1,    -1,    -1,    -1,  2582,    -1,
      -1,    -1,    -1,    -1,  2588,    -1,    -1,    -1,  2592,    -1,
      -1,  2595,    22,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,  2602,  2603,    -1,  2605,    -1,    -1,    -1,    -1,
    2610,  2611,    -1,    -1,    -1,  2615,    -1,    -1,    48,    49,
      -1,    51,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    74,    75,    -1,    -1,    -1,  2649,
      -1,    -1,    82,    -1,    -1,    85,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2671,   102,    -1,    16,    -1,  2676,    20,  2574,   109,
     110,    23,    -1,   113,    -1,    -1,    -1,    -1,    -1,  2585,
      -1,  2587,    -1,    -1,    -1,  2591,    -1,    -1,    41,    -1,
      -1,    44,    -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,
      -1,    64,    65,    -1,    67,    68,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,
      -1,    84,   172,    86,    87,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    95,    96,    -1,    -1,  2756,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2773,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   125,    -1,    -1,  2681,    -1,    -1,  2684,  2789,
      -1,  2687,  2792,  2689,   137,   225,    -1,    -1,   141,    -1,
     230,   144,    -1,    -1,    -1,    -1,   149,   150,    65,    66,
      -1,    -1,    69,   156,    -1,   245,    -1,    -1,    -1,   162,
      -1,    18,    19,    -1,   254,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   175,    -1,    91,   178,   179,   180,    -1,    -1,
     183,   184,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   282,   283,   197,    -1,    -1,    -1,    -1,    -1,
      -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   212,
     213,   214,    -1,   303,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   226,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   234,    -1,    -1,   237,    -1,   238,   240,   240,   242,
     157,   244,    -1,    -1,   101,    -1,   249,    -1,    -1,    -1,
      -1,    -1,   169,    -1,    -1,    -1,    -1,   347,   115,   262,
      -1,    -1,    -1,    -1,    -1,   268,    -1,    -1,    -1,   186,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   284,   285,    -1,    -1,    -1,    -1,    -1,    -1,   206,
      -1,    -1,    -1,   296,    -1,   298,    -1,    -1,    -1,    -1,
     157,   304,   219,    -1,   307,   308,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,    -1,   338,    -1,    -1,    -1,    -1,
      -1,   344,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   268,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   219,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,    -1,
     337,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   285,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,    20,
      21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,
      19,    52,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    74,    75,    -1,    -1,    -1,    19,    -1,
      -1,    82,    83,    -1,    -1,    -1,    -1,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,
      -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,   109,   110,
      -1,    -1,   113,    -1,    -1,    56,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   130,
      19,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   150,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      59,   172,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   157,    -1,
      -1,    -1,    -1,    -1,   195,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   101,    -1,    -1,    -1,   157,    -1,    -1,    -1,
      -1,    -1,   223,    -1,   225,    -1,    -1,    -1,    -1,   230,
     231,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   244,   245,   214,    -1,    -1,    -1,    -1,
     219,    -1,    -1,   254,   255,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   157,    -1,
      -1,    -1,    -1,   214,    -1,    -1,    -1,   101,   219,    -1,
     281,    -1,   283,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   295,    -1,   297,    -1,    -1,    -1,
      -1,    -1,   303,    -1,    -1,    -1,    -1,   276,   162,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     219,    -1,    -1,   157,    -1,    -1,   337,    -1,    -1,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   219,   285,   101,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,    -1,    -1,    -1,
      -1,    -1,    -1,   157,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,    -1,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,    -1,    -1,    -1,   219,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      -1,    -1,    44,    -1,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    65,    -1,    67,    68,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    -1,
      -1,    -1,    84,    -1,    86,    87,    88,    -1,    -1,    -1,
      -1,    93,    -1,    95,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     152,   153,    -1,    -1,   156,    -1,    -1,    -1,   160,    -1,
     162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   183,   184,    -1,    -1,   187,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   197,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     212,   213,    -1,    -1,    -1,    -1,    -1,    -1,   220,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     242,    -1,   244,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   268,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   284,   285,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   293,    -1,    -1,    -1,    -1,    -1,    -1,   300,    -1,
      -1,    -1,    -1,    -1,   306,    -1,   308,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   344
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    20,    41,    44,    46,    59,    64,    65,    67,    68,
      69,    77,    84,    86,    87,    95,    96,   125,   137,   141,
     144,   149,   150,   156,   162,   175,   178,   179,   180,   183,
     184,   197,   212,   213,   214,   226,   234,   237,   240,   242,
     244,   249,   262,   268,   284,   285,   296,   298,   304,   307,
     308,   338,   344,   350,   240,   258,   382,    66,    12,    53,
      71,   100,   118,   122,   134,   289,   384,     3,     4,   289,
     351,   389,   187,   193,   229,   253,   299,   343,   391,   281,
       4,    40,   111,   194,   242,   396,    28,   151,   173,   177,
     227,   264,   272,   273,   364,   398,    83,    99,   175,   216,
     249,   399,    40,    59,   111,   194,   285,   351,   408,     4,
      19,    40,    56,   101,   119,   157,   194,   202,   208,   209,
     214,   219,   292,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   341,   345,   346,   353,   361,   362,   363,   410,
      33,   411,   353,    29,    44,    46,    76,    84,   142,   192,
     208,   209,   215,   217,   242,   308,   352,   144,   413,    41,
      44,    46,    65,    67,    68,    69,    77,    79,    84,    86,
      87,    88,    93,    95,   124,   141,   152,   153,   156,   160,
     162,   183,   184,   187,   197,   212,   213,   220,   242,   244,
     268,   284,   285,   293,   300,   306,   308,   344,   414,    83,
      99,   456,    19,    44,    77,    84,    94,    95,   101,   124,
     141,   156,   163,   183,   219,   268,   279,   308,   459,   353,
      88,   116,   185,   200,   256,   298,   308,   465,    16,    26,
     112,   124,   159,   205,   218,   468,   228,   486,     5,    66,
      88,   139,   298,   344,   353,   487,     5,   488,    20,    57,
     224,   237,   299,   504,    64,    66,   182,   288,   523,    66,
     203,   340,   345,   347,   524,    39,   194,   229,   289,   351,
     361,   363,   525,     5,   298,   308,   353,   528,    70,   169,
     241,   250,   529,    88,   504,    61,   279,   302,   536,   194,
     289,   351,   537,    26,   112,   124,   205,   218,   539,    50,
      99,   108,   136,   291,   554,   555,     4,    37,    47,    74,
     150,   186,   229,   250,   286,   302,   377,     4,   124,   204,
     556,   289,   351,   558,    16,    23,   238,   240,   362,   559,
     228,   563,   289,   351,   564,     0,    22,    48,    49,    62,
     109,   110,   223,   225,   303,   383,     5,    59,   351,   385,
     265,     5,     4,   289,   351,   386,     5,    32,   278,   387,
     123,   351,   388,   123,   351,   390,   351,     4,   193,   246,
     394,   187,   299,   342,   343,   351,   393,   353,   138,   176,
     392,   351,    78,   172,   246,   351,   395,     5,   351,     4,
     242,   397,   351,   351,     5,   225,   400,    31,   401,     5,
     402,     5,   406,     5,    31,   407,   351,     9,    10,    11,
     351,   357,   358,   359,   360,   351,   351,    40,   111,   194,
     351,   409,   351,   194,   361,   363,   351,    35,   106,   127,
     128,   129,   135,   148,   154,   164,   277,   366,   351,     4,
     353,   353,   353,   353,   353,   353,   353,   353,   353,   353,
     353,   117,    66,    53,    71,    88,   100,   118,   122,   134,
     174,   415,   118,   417,   187,   193,   229,   253,   299,   342,
     343,   351,   403,   418,   281,   421,   169,   422,   169,   177,
     424,    65,    66,    69,    91,   169,   186,   206,   268,   337,
     361,   426,   351,   363,   429,    59,   285,   361,   430,   276,
     361,   363,   431,    33,   432,   361,   363,   433,     4,   361,
     363,   434,    45,    59,    81,   100,   117,   120,   146,   147,
     199,   207,   265,   266,   337,   438,   211,   301,   444,     5,
      89,     6,    88,   120,   436,     5,    65,   363,   435,    16,
     504,    66,   182,   288,   445,    66,   229,   446,   280,    61,
     279,   302,   447,    21,   134,   236,   263,   448,    37,    47,
      74,   150,   186,   250,   302,   449,   363,    89,    16,   196,
     454,   361,   457,    72,   460,    31,   461,    44,    87,   192,
     462,   150,   216,   255,   294,   463,   361,    18,    58,   115,
     285,   361,   464,     4,   193,   467,     5,     4,     6,   120,
     351,     4,     5,   242,   469,     5,   471,     5,   117,   192,
     242,   266,   472,    93,   111,   187,   485,     5,   483,     5,
     266,   484,     4,     5,   353,   353,   351,   351,     5,     4,
       5,    60,    66,    73,    75,    80,    83,    89,    99,   105,
     114,   130,   150,   165,   174,   175,   195,   216,   229,   231,
     244,   249,   255,   262,   281,   294,   295,   297,   337,   489,
       5,     4,   351,     5,   351,    40,   111,   351,   527,   353,
     351,   361,   363,   526,   351,   366,   351,     4,   362,    54,
      90,   140,   242,   530,     4,     4,   351,   150,   255,   531,
       5,   361,     4,    40,   111,   351,   538,   351,    97,    61,
     120,   242,   269,   540,   120,   553,    61,   117,   120,   157,
     192,   239,   242,   266,   269,   280,   542,   543,    61,   120,
     269,   552,     5,     4,    34,   107,   203,   535,    66,   353,
     378,    66,   353,   379,    66,   353,   380,    13,   189,   534,
     351,   351,    40,   111,   194,   223,   351,   381,   351,   266,
       4,   351,   351,     4,   562,     4,   283,   560,     4,   283,
     561,     4,   366,   123,   351,   565,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,     4,     5,   351,
      12,   351,   351,   351,    30,    94,   163,   246,   251,   365,
     365,     4,   351,   351,     4,     4,     4,   351,   351,   351,
     351,     4,     4,     5,     5,   361,     5,   351,   351,   357,
     359,   359,   361,   351,   351,   351,   351,   351,   351,   351,
     361,   363,   360,   351,   351,   360,   351,     5,   265,   103,
     187,   416,   193,   246,   419,   169,    78,   172,   246,   420,
     138,   176,   404,   404,     4,   423,     4,   425,   193,   253,
     427,   177,   428,   169,   366,   351,   361,   351,   361,   361,
     366,   366,   366,   361,   366,   351,   361,     4,   441,     4,
     363,   439,   196,     4,   166,   308,   440,   196,   361,     4,
     361,   443,     5,     5,     4,   196,   351,     4,     5,    60,
      66,   114,   130,   143,   149,   150,   155,   206,   225,   229,
     231,   254,   255,   262,   281,   337,   498,   363,   188,   188,
      66,   450,    66,   451,    66,   452,   223,   453,   351,     5,
     224,   455,   362,   366,     5,   361,   361,   361,     4,   353,
       4,     4,   196,   351,    14,    15,    61,   190,   191,   259,
     269,   270,   301,    87,     5,     5,    14,    15,    61,   190,
     191,   259,   269,   270,   274,   301,    87,   157,   162,   362,
     475,   479,    87,   157,     5,   473,     4,     4,    14,    61,
     190,   259,   269,   301,     5,     5,     4,   351,   362,    20,
      21,    22,    48,    49,    52,    55,    62,    66,    74,    75,
      82,    83,    99,   105,   109,   110,   113,   130,   150,   172,
     195,   223,   225,   230,   231,   244,   245,   254,   255,   281,
     283,   295,   297,   303,   337,    66,    80,    89,    99,   130,
     150,   195,   231,   255,   295,   297,     4,    30,   161,   211,
     236,   492,     5,    63,   104,   233,   247,   248,   339,   340,
     497,    99,   490,    17,    40,   111,   194,   496,     4,     5,
      17,   210,   290,   351,   255,   497,   505,   124,   497,   506,
      36,    40,   111,   132,   194,   289,   351,   507,   361,   353,
      91,    99,   105,   126,   150,   158,   195,   203,   244,   255,
     271,   510,    40,   111,   194,     5,   282,    17,   210,   290,
     514,   283,   353,   515,     5,    99,   105,   298,    17,    17,
       4,   351,   351,   351,   351,   351,   366,   351,   351,   360,
     351,     4,   366,    40,   111,   194,   260,   532,    40,   111,
     194,   260,   533,     4,    97,     5,     5,    87,     4,     5,
       5,    87,     5,   543,    61,   120,   157,   269,   547,    61,
     120,   269,   551,    87,   157,    61,   120,   269,   545,     4,
      61,   120,   269,   544,     5,     5,     4,     4,     5,     5,
       5,   351,   351,   351,   351,   351,   351,     4,   351,   557,
     351,   351,     6,   362,     4,     5,     4,     4,     5,     4,
      97,   257,   367,   351,   351,    12,   351,   351,   351,   351,
     351,   351,   351,   351,   351,     5,    12,   351,   351,    12,
       4,    12,     4,     4,   351,   351,   351,     4,   353,     4,
       4,   366,   361,   366,   351,   351,   351,   361,   351,   360,
     351,   351,     5,     5,   351,   363,   351,   361,   361,   351,
     366,   367,   367,   367,   366,   360,   351,   366,   351,   133,
     243,   354,   442,   166,     5,     4,   366,   361,     4,     5,
       4,     4,   351,   437,   351,    20,    21,    22,    48,    49,
      52,    59,    62,    66,    74,    75,    82,   109,   110,   113,
     130,   150,   172,   181,   223,   225,   230,   231,   245,   255,
     281,   283,   293,   303,   337,    66,   130,   155,   231,   281,
      30,   161,   211,   236,   499,   351,    20,   206,   351,   500,
      17,   351,   254,   510,   254,   206,   351,   501,   283,   502,
      17,    98,   351,   351,     5,   367,    56,   361,     4,     5,
     466,   351,     5,     5,     5,   157,   184,   371,   371,   165,
     261,   369,     4,     4,     5,     5,   470,   267,   267,     5,
       5,     5,    17,   159,   370,   370,   369,     4,     4,   369,
       5,     5,   474,   162,   336,   362,   478,     5,   477,     5,
       5,   481,     5,   482,     5,    14,    15,    61,   190,   191,
     259,   269,   270,   274,   301,     4,     4,     5,     5,   371,
     369,     4,     5,     5,   366,    82,   152,   221,   222,   235,
     275,   374,     7,     8,   351,   356,   236,   121,   236,   236,
     105,    40,    66,    99,   105,   111,   130,   150,   165,   195,
     231,   244,   255,   283,   295,   297,   298,   337,   491,   121,
     236,     5,    27,   167,   236,   279,   138,   105,    22,    49,
      52,    82,   110,   113,   225,   254,    22,    49,    52,    55,
      82,   110,   113,   225,   254,   281,    40,   121,   236,   236,
     105,     5,   210,    27,   223,    36,   132,   289,   351,   258,
     265,   121,   240,   361,   363,   510,    40,   131,   223,   279,
     240,   210,     5,     5,   244,    27,   223,     4,     5,     5,
     210,    36,   132,   289,   351,   510,   210,   353,     4,     4,
     351,     5,   301,    22,    27,    48,    49,    51,    52,    62,
      74,    75,    82,    85,   102,   109,   110,   113,   172,   225,
     230,   245,   254,   282,   283,   303,   347,   493,   351,   351,
     351,   351,   351,   497,   361,     5,     4,     5,   351,   351,
     361,   363,   351,   353,   351,   351,   497,     5,   351,   351,
     353,     5,    17,     5,     5,   351,   351,   360,   351,   351,
     351,   351,   111,   351,   351,   111,     4,    42,    43,   170,
     171,   198,   376,   376,    61,   120,   269,   541,   376,     5,
      61,   120,   269,   546,     5,     5,    61,   120,   269,   548,
       4,     5,     5,     4,    61,   120,   269,   550,    61,   120,
     269,   549,     5,     5,     4,     5,     5,     4,   376,   376,
     376,   351,   351,   351,   351,   351,   351,     4,   351,   361,
     351,   362,   366,     5,     5,    12,   351,   361,   363,   351,
      12,   351,   351,   351,    59,   351,     6,     4,   351,   351,
      46,   268,   405,     5,   353,   353,   366,   351,     4,     4,
       4,   361,   351,   351,   351,   351,   366,     4,   361,   367,
     360,   351,     4,   367,   351,    38,    38,     4,   363,     5,
      24,    25,    97,   368,   351,     4,   351,     5,    82,   152,
     221,   222,   235,   275,   361,   363,   236,   121,   236,   236,
      21,   236,   361,   121,   236,    27,   167,   236,   279,   138,
      21,   236,   121,   236,   236,    21,   236,    27,   168,   223,
     168,   258,   265,   121,   168,   223,   287,   510,   131,   168,
     223,   279,     4,   244,    27,   168,   223,   510,   206,   351,
      82,   152,   221,   222,   235,   275,   351,   351,   351,   351,
     351,   196,   351,   351,    20,   232,   458,     4,     4,   351,
     371,   371,   371,     4,   371,   371,   371,    14,    15,    61,
     190,   191,   259,   269,   270,   301,   370,   371,   371,   371,
     371,   371,     4,   371,   371,     4,   370,    14,    15,    61,
     190,   191,   259,   269,   270,   301,     5,   476,     5,   480,
       5,     5,    14,    15,    61,   190,   191,   259,   269,   270,
     274,   301,     5,    14,    15,    61,   190,   191,   259,   269,
     270,   274,   301,     5,    14,    15,    61,   190,   191,   259,
     269,   270,   274,   301,    14,    15,    61,   190,   191,   259,
     269,   270,   301,   267,     5,     5,     5,   370,   370,   369,
       4,     4,   369,     5,     4,     4,   371,   371,     4,   371,
     371,     5,   353,   361,   363,     5,   351,   353,   351,     5,
     351,     5,   356,   105,   195,   244,   105,   195,   244,     5,
     353,   351,   353,     5,   351,   361,   353,     5,   356,   236,
     236,    21,   236,    21,   236,   236,    21,   236,   305,   305,
       4,     4,     4,   491,     4,     4,     4,   305,   305,     4,
       5,     4,   353,   351,     5,   351,     5,   356,   353,   361,
     363,   361,   363,   351,    27,    48,    51,    62,    85,   102,
     347,   372,     4,   353,   351,   366,   360,   353,     5,   361,
     363,   361,   351,   353,   353,   361,   363,   361,   363,   351,
     353,   351,     5,   351,   223,   223,   351,   351,   223,   351,
     223,   351,   351,   503,   511,   351,   223,   223,   351,   351,
     351,   351,   351,   351,   351,   351,     5,   301,   351,   494,
     351,   351,   223,   351,   351,   351,   351,   361,   366,     5,
     361,   361,   351,   351,   366,   360,   351,   351,   351,   361,
     351,   351,     5,   351,   351,   351,   351,     5,     5,     4,
     376,     5,     5,     4,     4,     4,     5,     5,     4,     4,
       5,     5,     4,     5,     5,     4,   351,   351,   351,   361,
     351,   366,   351,   361,   363,   351,   366,   351,   351,   351,
     351,   351,     5,   351,     4,     6,   351,   351,     4,   361,
     351,   366,   177,   364,   351,   364,   367,   366,   361,   351,
     351,     4,   351,   351,     4,   361,     5,     5,     5,     5,
     361,   366,   361,   361,   361,   361,   363,   361,   366,   361,
     361,   361,   363,   361,   361,   361,   361,   363,   361,   361,
     361,   351,   361,   361,   361,   361,   361,   361,   361,   361,
       5,     5,     5,     5,   361,   351,   351,     4,   351,     5,
       4,   351,   371,     5,     5,     5,   369,     4,     4,     5,
     371,   370,     4,   371,     5,     5,     5,   370,   370,   369,
       4,     4,     5,    14,    15,    61,   190,   191,   259,   269,
     270,   301,    14,    15,    61,   190,   191,   259,   269,   270,
     301,    14,    15,    61,   190,   191,   259,   269,   270,   301,
     267,     5,     5,     5,   370,   370,   369,     4,     4,   369,
       5,   267,     5,     5,     5,   370,   370,   369,     4,     4,
     369,     5,   267,     5,     5,     5,   370,   370,   369,     4,
       4,   369,     5,     5,     5,     5,   370,   370,   369,     4,
       4,     5,   370,     4,     4,   370,     4,     4,   371,     5,
     366,   361,   351,   351,   361,   351,     5,   356,     5,   361,
     363,   353,     5,   361,   363,   366,     5,   356,   351,   351,
     351,   351,   351,   351,   351,   351,   351,     4,     4,     5,
       4,     4,   351,   361,   351,     5,   356,   353,   366,   360,
     366,   351,   351,   360,   360,   366,   360,   366,   351,   366,
     360,   366,   360,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,    55,    66,    92,   130,   281,   283,   337,
     508,   509,   510,   521,   522,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   361,     5,   351,
     351,   351,   351,     4,     4,   366,   367,     4,   495,   366,
     366,   360,   351,     4,   366,   376,   376,   376,   356,   351,
     351,   351,   366,   351,   360,   351,   351,    12,     5,     5,
       4,   351,   351,     4,   366,   361,   351,   351,   367,   368,
     351,     5,   351,   363,     5,     5,     5,     5,   366,   368,
     368,   368,   366,   368,   367,   368,   368,   366,   368,   368,
     368,   366,   368,   368,   366,   361,   368,   366,   368,   368,
     366,   368,   366,     5,     5,     5,     5,   366,     4,   363,
       5,   351,     4,   371,   370,     4,   370,     5,     5,     5,
     370,   370,   369,     4,     4,     5,     5,     5,     5,   370,
     370,   369,     4,     4,     5,     5,     5,     5,   370,   370,
     369,     4,     4,     5,   370,   371,   371,   371,   371,   371,
       4,   371,   371,     4,   370,   370,   371,   371,   371,   371,
     371,     4,   371,   371,     4,   370,   370,     4,     4,   370,
       4,   370,   370,     4,     4,     4,   362,   368,     4,   361,
     363,   368,   351,   361,     4,   368,   368,   361,     4,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     361,   363,   368,   351,   361,     4,   360,   360,   360,   351,
     361,   363,   360,   351,   360,   360,   361,   361,   363,   360,
     351,   360,   351,   351,   351,   351,   351,   351,   356,   351,
     351,   351,   348,   348,   348,   348,   348,   348,   348,   509,
     348,   356,   351,   351,   351,   351,   356,   351,   351,   351,
     351,   351,   351,   366,   351,   301,   355,   356,   351,   351,
     367,   353,     4,     4,   367,   351,   360,   351,    59,   351,
       5,     5,   351,     4,   364,   368,     5,     4,     4,     5,
     361,     5,   367,   368,   367,   367,   367,     4,     5,   361,
       5,     5,     4,   351,   371,   370,   371,   371,   371,   371,
     371,     4,   371,   371,   370,     4,   370,   371,   371,   371,
     371,   371,     4,   371,   371,   370,   371,   370,     4,   371,
     371,   370,     4,   371,   370,     4,   370,   370,   366,   361,
     363,   368,     4,   366,   351,   366,   351,   351,   351,   368,
       4,   366,   351,   360,   368,   351,   360,   368,   368,   361,
     356,   351,     4,   373,   373,   351,   351,   373,   356,   373,
     511,   361,   491,     5,     4,     5,     5,     5,     4,   353,
     356,   373,   373,   351,   351,   356,   351,   351,   351,   351,
     351,   360,   351,     5,   511,   351,   373,   353,   512,   513,
       5,   353,     5,   351,     5,     4,     6,   351,    32,   278,
     412,     5,    32,   278,   375,   361,     5,   375,   361,   412,
     351,   370,   371,   370,   370,   371,   371,   370,   371,   370,
     370,   351,   368,   361,   363,   361,   351,   361,   351,   361,
     363,   361,   351,   361,   368,     4,   511,   511,   355,   351,
     511,     4,   511,   366,     5,     4,     4,   511,   511,   355,
     351,     4,   511,   511,   351,   361,   511,   511,   511,   512,
     518,   519,   510,   516,   517,     5,     5,     6,     4,   187,
     299,   343,   351,   403,   361,   361,     4,   371,   371,   371,
     371,   362,   368,   368,   351,   368,     4,   368,   368,   351,
     368,   351,   511,   511,     4,   351,   511,     5,   351,   511,
       4,   351,   511,   366,   518,   520,   521,   348,   517,     5,
       5,     4,   351,   404,   351,   404,   366,   366,   368,     4,
     361,   363,     4,   356,   355,   351,   351,   355,   351,   361,
     521,   353,     5,     5,   351,   351,   351,   351,   375,   375,
       5,   361,   363,   366,   361,   363,   511,   351,     4,   511,
     351,   368,     5,     5,   351,     5,   351,   366,   366,     4,
     511,     4,     5,     5,     5,   355,   355,   511,   511,   511
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
#line 454 "frame/parser.Y"
    {fr->bgColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 7:
#line 456 "frame/parser.Y"
    {fr->centerCmd();;}
    break;

  case 8:
#line 457 "frame/parser.Y"
    {fr->clearCmd();;}
    break;

  case 10:
#line 459 "frame/parser.Y"
    {fr->colorbarTagCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 17:
#line 466 "frame/parser.Y"
    {fr->DATASECCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 22:
#line 471 "frame/parser.Y"
    {fr->hideCmd();;}
    break;

  case 23:
#line 472 "frame/parser.Y"
    {fr->highliteCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 25:
#line 474 "frame/parser.Y"
    {fr->irafAlignCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 32:
#line 481 "frame/parser.Y"
    {fr->nanColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 36:
#line 485 "frame/parser.Y"
    {fr->queryCursorCmd();;}
    break;

  case 38:
#line 487 "frame/parser.Y"
    {fr->resetCmd();;}
    break;

  case 43:
#line 492 "frame/parser.Y"
    {fr->showCmd();;}
    break;

  case 45:
#line 494 "frame/parser.Y"
    {fr->threadsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 47:
#line 496 "frame/parser.Y"
    {fr->unloadFitsCmd();;}
    break;

  case 49:
#line 498 "frame/parser.Y"
    {fr->msg("Frame 1.0");;}
    break;

  case 54:
#line 505 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 55:
#line 506 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 56:
#line 509 "frame/parser.Y"
    {yydebug=1;;}
    break;

  case 57:
#line 510 "frame/parser.Y"
    {yydebug=0;;}
    break;

  case 58:
#line 511 "frame/parser.Y"
    {DebugAST=(yyvsp[(2) - (2)].integer);;}
    break;

  case 59:
#line 512 "frame/parser.Y"
    {DebugMosaic=(yyvsp[(2) - (2)].integer);;}
    break;

  case 60:
#line 513 "frame/parser.Y"
    {yydebug=(yyvsp[(2) - (2)].integer);;}
    break;

  case 61:
#line 514 "frame/parser.Y"
    {DebugPerf=(yyvsp[(2) - (2)].integer);;}
    break;

  case 62:
#line 515 "frame/parser.Y"
    {DebugWCS=(yyvsp[(2) - (2)].integer);;}
    break;

  case 63:
#line 516 "frame/parser.Y"
    {DebugBin=(yyvsp[(2) - (2)].integer);;}
    break;

  case 64:
#line 517 "frame/parser.Y"
    {DebugBlock=(yyvsp[(2) - (2)].integer);;}
    break;

  case 65:
#line 518 "frame/parser.Y"
    {DebugCompress=(yyvsp[(2) - (2)].integer);;}
    break;

  case 66:
#line 519 "frame/parser.Y"
    {DebugCrop=(yyvsp[(2) - (2)].integer);;}
    break;

  case 67:
#line 520 "frame/parser.Y"
    {DebugGZ=(yyvsp[(2) - (2)].integer);;}
    break;

  case 68:
#line 521 "frame/parser.Y"
    {DebugRGB=(yyvsp[(2) - (2)].integer);;}
    break;

  case 69:
#line 524 "frame/parser.Y"
    {(yyval.integer)=((yyvsp[(1) - (1)].integer) ? 1 : 0);;}
    break;

  case 70:
#line 526 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 71:
#line 527 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 72:
#line 528 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 73:
#line 529 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 74:
#line 531 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 75:
#line 532 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 76:
#line 533 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 77:
#line 534 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 78:
#line 537 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 79:
#line 538 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 80:
#line 539 "frame/parser.Y"
    {(yyval.integer) = Base::FULLBASE;;}
    break;

  case 81:
#line 540 "frame/parser.Y"
    {(yyval.integer) = Base::ROOT;;}
    break;

  case 82:
#line 541 "frame/parser.Y"
    {(yyval.integer) = Base::FULL;;}
    break;

  case 83:
#line 544 "frame/parser.Y"
    {(yyval.real) = 0;;}
    break;

  case 84:
#line 545 "frame/parser.Y"
    {(yyval.real) = (yyvsp[(1) - (1)].real);;}
    break;

  case 85:
#line 548 "frame/parser.Y"
    {(yyval.real) = degToRad((yyvsp[(1) - (1)].real));;}
    break;

  case 86:
#line 549 "frame/parser.Y"
    {(yyval.real) = degToRad((yyvsp[(1) - (1)].real));;}
    break;

  case 87:
#line 550 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 88:
#line 553 "frame/parser.Y"
    {(yyval.real) = parseSEXStr((yyvsp[(1) - (1)].str));;}
    break;

  case 89:
#line 556 "frame/parser.Y"
    {(yyval.real) = parseHMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 90:
#line 559 "frame/parser.Y"
    {(yyval.real) = parseDMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 91:
#line 563 "frame/parser.Y"
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
#line 575 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 93:
#line 582 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 94:
#line 589 "frame/parser.Y"
    {
	  (yyval.vector)[0] = (yyvsp[(1) - (2)].real);
	  (yyval.vector)[1] = (yyvsp[(2) - (2)].real);
	  (yyval.vector)[2] = 1;
	;}
    break;

  case 95:
#line 596 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::IMAGE;;}
    break;

  case 96:
#line 597 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::PHYSICAL;;}
    break;

  case 97:
#line 598 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::DETECTOR;;}
    break;

  case 98:
#line 599 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::AMPLIFIER;;}
    break;

  case 99:
#line 600 "frame/parser.Y"
    {(yyval.integer) = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 100:
#line 603 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS;;}
    break;

  case 101:
#line 604 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSA;;}
    break;

  case 102:
#line 605 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSB;;}
    break;

  case 103:
#line 606 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSC;;}
    break;

  case 104:
#line 607 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSD;;}
    break;

  case 105:
#line 608 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSE;;}
    break;

  case 106:
#line 609 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSF;;}
    break;

  case 107:
#line 610 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSG;;}
    break;

  case 108:
#line 611 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSH;;}
    break;

  case 109:
#line 612 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSI;;}
    break;

  case 110:
#line 613 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSJ;;}
    break;

  case 111:
#line 614 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSK;;}
    break;

  case 112:
#line 615 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSL;;}
    break;

  case 113:
#line 616 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSM;;}
    break;

  case 114:
#line 617 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSN;;}
    break;

  case 115:
#line 618 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSO;;}
    break;

  case 116:
#line 619 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSP;;}
    break;

  case 117:
#line 620 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSQ;;}
    break;

  case 118:
#line 621 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSR;;}
    break;

  case 119:
#line 622 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSS;;}
    break;

  case 120:
#line 623 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCST;;}
    break;

  case 121:
#line 624 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSU;;}
    break;

  case 122:
#line 625 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSV;;}
    break;

  case 123:
#line 626 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSW;;}
    break;

  case 124:
#line 627 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSX;;}
    break;

  case 125:
#line 628 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSY;;}
    break;

  case 126:
#line 629 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSZ;;}
    break;

  case 127:
#line 630 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS0;;}
    break;

  case 128:
#line 633 "frame/parser.Y"
    {(yyval.integer) = Coord::CANVAS;;}
    break;

  case 129:
#line 634 "frame/parser.Y"
    {(yyval.integer) = Coord::PANNER;;}
    break;

  case 130:
#line 637 "frame/parser.Y"
    {(yyval.integer) = FrScale::LINEARSCALE;;}
    break;

  case 131:
#line 638 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOGSCALE;;}
    break;

  case 132:
#line 639 "frame/parser.Y"
    {(yyval.integer) = FrScale::POWSCALE;;}
    break;

  case 133:
#line 640 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQRTSCALE;;}
    break;

  case 134:
#line 641 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQUAREDSCALE;;}
    break;

  case 135:
#line 642 "frame/parser.Y"
    {(yyval.integer) = FrScale::ASINHSCALE;;}
    break;

  case 136:
#line 643 "frame/parser.Y"
    {(yyval.integer) = FrScale::SINHSCALE;;}
    break;

  case 137:
#line 644 "frame/parser.Y"
    {(yyval.integer) = FrScale::HISTEQUSCALE;;}
    break;

  case 138:
#line 647 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 139:
#line 648 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 140:
#line 649 "frame/parser.Y"
    {(yyval.integer)=FrScale::SAMPLE;;}
    break;

  case 141:
#line 650 "frame/parser.Y"
    {(yyval.integer)=FrScale::DATAMIN;;}
    break;

  case 142:
#line 651 "frame/parser.Y"
    {(yyval.integer)=FrScale::IRAFMIN;;}
    break;

  case 143:
#line 654 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 144:
#line 655 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 145:
#line 656 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4_NO_E;;}
    break;

  case 146:
#line 657 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 147:
#line 658 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 148:
#line 659 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 149:
#line 660 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 150:
#line 661 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::GALACTIC;;}
    break;

  case 151:
#line 662 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::SUPERGALACTIC;;}
    break;

  case 152:
#line 663 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ECLIPTIC;;}
    break;

  case 153:
#line 664 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::HELIOECLIPTIC;;}
    break;

  case 154:
#line 667 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 155:
#line 668 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 156:
#line 669 "frame/parser.Y"
    {(yyval.integer)=Coord::SEXAGESIMAL;;}
    break;

  case 157:
#line 672 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 158:
#line 673 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 159:
#line 674 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCMIN;;}
    break;

  case 160:
#line 675 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCSEC;;}
    break;

  case 161:
#line 678 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 162:
#line 679 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 163:
#line 680 "frame/parser.Y"
    {(yyval.integer) = Base::KEY;;}
    break;

  case 164:
#line 683 "frame/parser.Y"
    {;}
    break;

  case 165:
#line 684 "frame/parser.Y"
    {;}
    break;

  case 166:
#line 685 "frame/parser.Y"
    {;}
    break;

  case 167:
#line 688 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 168:
#line 689 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 169:
#line 690 "frame/parser.Y"
    {(yyval.integer) = Base::MASK;;}
    break;

  case 170:
#line 693 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 171:
#line 694 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 172:
#line 695 "frame/parser.Y"
    {(yyval.integer) = Point::BOX;;}
    break;

  case 173:
#line 696 "frame/parser.Y"
    {(yyval.integer) = Point::DIAMOND;;}
    break;

  case 174:
#line 697 "frame/parser.Y"
    {(yyval.integer) = Point::CROSS;;}
    break;

  case 175:
#line 698 "frame/parser.Y"
    {(yyval.integer) = Point::EX;;}
    break;

  case 176:
#line 699 "frame/parser.Y"
    {(yyval.integer) = Point::ARROW;;}
    break;

  case 177:
#line 700 "frame/parser.Y"
    {(yyval.integer) = Point::BOXCIRCLE;;}
    break;

  case 178:
#line 703 "frame/parser.Y"
    {(yyval.integer) = POINTSIZE;;}
    break;

  case 179:
#line 704 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 180:
#line 707 "frame/parser.Y"
    {(yyval.integer) = Marker::PANDA;;}
    break;

  case 181:
#line 708 "frame/parser.Y"
    {(yyval.integer) = Marker::HISTOGRAM;;}
    break;

  case 182:
#line 709 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT2D;;}
    break;

  case 183:
#line 710 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT3D;;}
    break;

  case 184:
#line 711 "frame/parser.Y"
    {(yyval.integer) = Marker::RADIAL;;}
    break;

  case 185:
#line 712 "frame/parser.Y"
    {(yyval.integer) = Marker::STATS;;}
    break;

  case 186:
#line 715 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 187:
#line 716 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 188:
#line 717 "frame/parser.Y"
    {(yyval.integer) = Marker::SUM;;}
    break;

  case 189:
#line 720 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 190:
#line 721 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 191:
#line 722 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 192:
#line 723 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 193:
#line 724 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 194:
#line 725 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 199:
#line 732 "frame/parser.Y"
    {fr->set3dRenderMethodCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 200:
#line 733 "frame/parser.Y"
    {fr->set3dRenderBackgroundCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 201:
#line 734 "frame/parser.Y"
    {fr->set3dScaleCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 202:
#line 735 "frame/parser.Y"
    {fr->set3dPreserveCmd();;}
    break;

  case 203:
#line 737 "frame/parser.Y"
    {/* needed for compatibility with old version of backup */;}
    break;

  case 204:
#line 740 "frame/parser.Y"
    {fr->set3dBorderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 205:
#line 741 "frame/parser.Y"
    {fr->set3dBorderColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 206:
#line 744 "frame/parser.Y"
    {fr->set3dCompassCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 207:
#line 745 "frame/parser.Y"
    {fr->set3dCompassColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 208:
#line 748 "frame/parser.Y"
    {fr->set3dHighliteCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 209:
#line 749 "frame/parser.Y"
    {fr->set3dHighliteColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 210:
#line 752 "frame/parser.Y"
    {fr->set3dViewCmd((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));;}
    break;

  case 211:
#line 754 "frame/parser.Y"
    {fr->set3dViewPointCmd(Vector3d((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 212:
#line 755 "frame/parser.Y"
    {fr->view3dBeginCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 213:
#line 756 "frame/parser.Y"
    {fr->view3dMotionCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 214:
#line 757 "frame/parser.Y"
    {fr->view3dEndCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 215:
#line 760 "frame/parser.Y"
    {fr->analysisMarkersResetCmd();;}
    break;

  case 217:
#line 765 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("circle", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 218:
#line 767 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("ellipse", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 219:
#line 769 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("box", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 220:
#line 771 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("polygon", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 221:
#line 773 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("point", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 222:
#line 775 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("vector", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 223:
#line 777 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("annulus", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 224:
#line 779 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("ellipseannulus", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 225:
#line 781 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("boxannulus", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 227:
#line 785 "frame/parser.Y"
    {fr->binColsCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 228:
#line 786 "frame/parser.Y"
    {fr->binDepthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 231:
#line 789 "frame/parser.Y"
    {fr->binBufferSizeCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 233:
#line 791 "frame/parser.Y"
    {fr->binFilterCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 234:
#line 794 "frame/parser.Y"
    {fr->binAboutCmd();;}
    break;

  case 235:
#line 795 "frame/parser.Y"
    {fr->binAboutCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 236:
#line 798 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 237:
#line 799 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 238:
#line 801 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(1) - (4)].real)), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 239:
#line 803 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 240:
#line 804 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 241:
#line 805 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 242:
#line 807 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 243:
#line 809 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 244:
#line 812 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::AVERAGE);;}
    break;

  case 245:
#line 813 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::SUM);;}
    break;

  case 246:
#line 816 "frame/parser.Y"
    {fr->binToFitCmd();;}
    break;

  case 247:
#line 818 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (7)].real),(yyvsp[(2) - (7)].real)), (yyvsp[(5) - (7)].str), (yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].str));;}
    break;

  case 248:
#line 821 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (11)].real),(yyvsp[(2) - (11)].real)), (yyvsp[(3) - (11)].integer), Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)), (yyvsp[(8) - (11)].str), (yyvsp[(9) - (11)].str), (yyvsp[(10) - (11)].str), (yyvsp[(11) - (11)].str));;}
    break;

  case 249:
#line 823 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (8)].real),(yyvsp[(2) - (8)].real)), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (yyvsp[(6) - (8)].str), (yyvsp[(7) - (8)].str), (yyvsp[(8) - (8)].str));;}
    break;

  case 250:
#line 826 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (12)].real),(yyvsp[(2) - (12)].real)), (yyvsp[(3) - (12)].integer), Vector((yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real)), Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), 
	    (yyvsp[(9) - (12)].str), (yyvsp[(10) - (12)].str), (yyvsp[(11) - (12)].str), (yyvsp[(12) - (12)].str));;}
    break;

  case 251:
#line 830 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 252:
#line 831 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 254:
#line 835 "frame/parser.Y"
    {fr->blockToFitCmd();;}
    break;

  case 255:
#line 836 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 256:
#line 837 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 260:
#line 843 "frame/parser.Y"
    {fr->clipUserCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 262:
#line 846 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 263:
#line 851 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::GLOBAL);;}
    break;

  case 264:
#line 852 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::LOCAL);;}
    break;

  case 265:
#line 855 "frame/parser.Y"
    {fr->clipModeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 266:
#line 856 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::MINMAX);;}
    break;

  case 267:
#line 857 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZSCALE);;}
    break;

  case 268:
#line 858 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZMAX);;}
    break;

  case 269:
#line 859 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::USERCLIP);;}
    break;

  case 270:
#line 862 "frame/parser.Y"
    {fr->clipMinMaxCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer),(yyvsp[(1) - (2)].integer));;}
    break;

  case 271:
#line 863 "frame/parser.Y"
    {fr->clipMinMaxModeCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer));;}
    break;

  case 272:
#line 864 "frame/parser.Y"
    {fr->clipMinMaxSampleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 273:
#line 867 "frame/parser.Y"
    {fr->clipZScaleCmd((yyvsp[(1) - (3)].real),(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 274:
#line 869 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleContrastCmd((yyvsp[(2) - (2)].real));
        ;}
    break;

  case 275:
#line 874 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleSampleCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 276:
#line 879 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleLineCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 277:
#line 886 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (6)].integer), (yyvsp[(2) - (6)].real), (yyvsp[(3) - (6)].real), (yyvsp[(4) - (6)].integer), (unsigned char*)(yyvsp[(5) - (6)].ptr), (yyvsp[(6) - (6)].integer));;}
    break;

  case 278:
#line 888 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].integer),(unsigned char*)(yyvsp[(9) - (10)].ptr),(yyvsp[(10) - (10)].integer));;}
    break;

  case 279:
#line 889 "frame/parser.Y"
    {fr->colormapBeginCmd();;}
    break;

  case 281:
#line 891 "frame/parser.Y"
    {fr->colormapEndCmd();;}
    break;

  case 282:
#line 895 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(1) - (6)].integer), (yyvsp[(2) - (6)].real), (yyvsp[(3) - (6)].real), (yyvsp[(4) - (6)].integer), (unsigned char*)(yyvsp[(5) - (6)].ptr), (yyvsp[(6) - (6)].integer));;}
    break;

  case 283:
#line 897 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].integer),(unsigned char*)(yyvsp[(9) - (10)].ptr),(yyvsp[(10) - (10)].integer));;}
    break;

  case 284:
#line 899 "frame/parser.Y"
    {fr->colorScaleCmd((FrScale::ColorScaleType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 285:
#line 900 "frame/parser.Y"
    {fr->colorScaleLogCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 291:
#line 911 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),(FrScale::ClipMode)(yyvsp[(9) - (13)].integer),100,(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 292:
#line 913 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),FrScale::AUTOCUT,(yyvsp[(9) - (13)].real),(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 293:
#line 915 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),(FrScale::ClipMode)(yyvsp[(9) - (12)].integer),100,FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 294:
#line 920 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),FrScale::AUTOCUT,(yyvsp[(9) - (12)].real),FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 295:
#line 924 "frame/parser.Y"
    {fr->contourCreatePolygonCmd();;}
    break;

  case 296:
#line 927 "frame/parser.Y"
    {fr->contourDeleteCmd();;}
    break;

  case 297:
#line 928 "frame/parser.Y"
    {fr->contourDeleteAuxCmd();;}
    break;

  case 298:
#line 931 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 299:
#line 932 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 300:
#line 934 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourLoadCmd((yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer),(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer));
	;}
    break;

  case 301:
#line 940 "frame/parser.Y"
    {(yyval.integer) = FrScale::MINMAX;;}
    break;

  case 302:
#line 941 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZSCALE;;}
    break;

  case 303:
#line 942 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZMAX;;}
    break;

  case 304:
#line 943 "frame/parser.Y"
    {(yyval.integer) = FrScale::USERCLIP;;}
    break;

  case 305:
#line 946 "frame/parser.Y"
    {(yyval.integer) = FrScale::GLOBAL;;}
    break;

  case 306:
#line 947 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOCAL;;}
    break;

  case 307:
#line 950 "frame/parser.Y"
    {(yyval.integer) = FVContour::SMOOTH;;}
    break;

  case 308:
#line 951 "frame/parser.Y"
    {(yyval.integer) = FVContour::BLOCK;;}
    break;

  case 309:
#line 954 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 310:
#line 955 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 311:
#line 959 "frame/parser.Y"
    {fr->contourSaveCmd((yyvsp[(1) - (3)].str), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 312:
#line 961 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (4)].str),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 313:
#line 964 "frame/parser.Y"
    {fr->cropCmd();;}
    break;

  case 314:
#line 966 "frame/parser.Y"
    {fr->cropCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 315:
#line 969 "frame/parser.Y"
    {fr->cropCenterCmd(Vector((yyvsp[(2) - (8)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), Vector((yyvsp[(5) - (8)].real),(yyvsp[(6) - (8)].real)), (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 317:
#line 971 "frame/parser.Y"
    {fr->cropBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 318:
#line 972 "frame/parser.Y"
    {fr->cropMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 319:
#line 973 "frame/parser.Y"
    {fr->cropEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 320:
#line 976 "frame/parser.Y"
    {fr->crop3dCmd();;}
    break;

  case 321:
#line 977 "frame/parser.Y"
    {fr->crop3dCmd((yyvsp[(1) - (3)].real), (yyvsp[(2) - (3)].real), (Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 322:
#line 978 "frame/parser.Y"
    {fr->crop3dBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 323:
#line 979 "frame/parser.Y"
    {fr->crop3dMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 324:
#line 980 "frame/parser.Y"
    {fr->crop3dEndCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 325:
#line 984 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), (Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 326:
#line 986 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 327:
#line 987 "frame/parser.Y"
    {fr->crosshairCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 328:
#line 988 "frame/parser.Y"
    {fr->crosshairWarpCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 329:
#line 991 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)), (Coord::InternalSystem)(yyvsp[(3) - (5)].integer));;}
    break;

  case 330:
#line 993 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 331:
#line 995 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer));;}
    break;

  case 332:
#line 997 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 333:
#line 1000 "frame/parser.Y"
    {fr->axesOrderCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 334:
#line 1003 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 335:
#line 1004 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 336:
#line 1005 "frame/parser.Y"
    {(yyval.integer) = Base::SUM;;}
    break;

  case 337:
#line 1008 "frame/parser.Y"
    {fr->fitsyHasExtCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 338:
#line 1011 "frame/parser.Y"
    {fr->getBgColorCmd();;}
    break;

  case 352:
#line 1025 "frame/parser.Y"
    {fr->getDATASECCmd();;}
    break;

  case 355:
#line 1028 "frame/parser.Y"
    {fr->getHistogramCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].integer));;}
    break;

  case 356:
#line 1030 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(3) - (9)].str),(yyvsp[(4) - (9)].str),Vector((yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real)),(Coord::InternalSystem)(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(Base::CutMethod)(yyvsp[(9) - (9)].integer));;}
    break;

  case 359:
#line 1033 "frame/parser.Y"
    {fr->getIRAFAlignCmd();;}
    break;

  case 360:
#line 1034 "frame/parser.Y"
    {fr->getMinMaxCmd();;}
    break;

  case 363:
#line 1037 "frame/parser.Y"
    {fr->getNANColorCmd();;}
    break;

  case 364:
#line 1038 "frame/parser.Y"
    {fr->getOrientCmd();;}
    break;

  case 366:
#line 1041 "frame/parser.Y"
    {fr->getPixelTableCmd(Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (Coord::InternalSystem)(yyvsp[(3) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(7) - (8)].integer), (yyvsp[(8) - (8)].str));;}
    break;

  case 368:
#line 1043 "frame/parser.Y"
    {fr->getRotateCmd();;}
    break;

  case 370:
#line 1045 "frame/parser.Y"
    {fr->getThreadsCmd();;}
    break;

  case 372:
#line 1047 "frame/parser.Y"
    {fr->getTypeCmd();;}
    break;

  case 373:
#line 1049 "frame/parser.Y"
    {fr->getValueCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 374:
#line 1051 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(3) - (9)].str),(yyvsp[(4) - (9)].str),Vector((yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real)),(Coord::InternalSystem)(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(Base::CutMethod)(yyvsp[(9) - (9)].integer));;}
    break;

  case 376:
#line 1053 "frame/parser.Y"
    {fr->getZoomCmd();;}
    break;

  case 377:
#line 1056 "frame/parser.Y"
    {fr->getBinDepthCmd();;}
    break;

  case 378:
#line 1057 "frame/parser.Y"
    {fr->getBinFactorCmd();;}
    break;

  case 379:
#line 1058 "frame/parser.Y"
    {fr->getBinFunctionCmd();;}
    break;

  case 380:
#line 1059 "frame/parser.Y"
    {fr->getBinBufferSizeCmd();;}
    break;

  case 381:
#line 1060 "frame/parser.Y"
    {fr->getBinCursorCmd();;}
    break;

  case 382:
#line 1061 "frame/parser.Y"
    {fr->getBinFilterCmd();;}
    break;

  case 384:
#line 1063 "frame/parser.Y"
    {fr->getBinListCmd();;}
    break;

  case 385:
#line 1066 "frame/parser.Y"
    {fr->getBinColsCmd();;}
    break;

  case 386:
#line 1067 "frame/parser.Y"
    {fr->getBinColsMinMaxCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 387:
#line 1068 "frame/parser.Y"
    {fr->getBinColsDimCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 388:
#line 1071 "frame/parser.Y"
    {fr->getBlockCmd();;}
    break;

  case 389:
#line 1074 "frame/parser.Y"
    {fr->getClipCmd();;}
    break;

  case 390:
#line 1076 "frame/parser.Y"
    {fr->getClipCmd((FrScale::ClipMode)(yyvsp[(1) - (2)].integer), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 391:
#line 1078 "frame/parser.Y"
    {fr->getClipCmd((yyvsp[(1) - (2)].real), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 392:
#line 1079 "frame/parser.Y"
    {fr->getClipScopeCmd();;}
    break;

  case 393:
#line 1080 "frame/parser.Y"
    {fr->getClipModeCmd();;}
    break;

  case 395:
#line 1082 "frame/parser.Y"
    {fr->getClipUserCmd();;}
    break;

  case 397:
#line 1085 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	;}
    break;

  case 398:
#line 1091 "frame/parser.Y"
    {fr->getClipMinMaxModeCmd();;}
    break;

  case 399:
#line 1092 "frame/parser.Y"
    {fr->getClipMinMaxSampleCmd();;}
    break;

  case 400:
#line 1095 "frame/parser.Y"
    {fr->getClipZScaleContrastCmd();;}
    break;

  case 401:
#line 1096 "frame/parser.Y"
    {fr->getClipZScaleSampleCmd();;}
    break;

  case 402:
#line 1097 "frame/parser.Y"
    {fr->getClipZScaleLineCmd();;}
    break;

  case 403:
#line 1100 "frame/parser.Y"
    {fr->getColorbarCmd();;}
    break;

  case 404:
#line 1101 "frame/parser.Y"
    {fr->getColorbarTagCmd();;}
    break;

  case 406:
#line 1107 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 407:
#line 1109 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 408:
#line 1111 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 409:
#line 1114 "frame/parser.Y"
    {fr->getColorScaleCmd();;}
    break;

  case 411:
#line 1116 "frame/parser.Y"
    {fr->getColorScaleLogCmd();;}
    break;

  case 412:
#line 1120 "frame/parser.Y"
    {fr->getColorScaleLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 413:
#line 1124 "frame/parser.Y"
    {fr->getContourCmd((Coord::CoordSystem)(yyvsp[(1) - (2)].integer),(Coord::SkyFrame)(yyvsp[(2) - (2)].integer));;}
    break;

  case 415:
#line 1126 "frame/parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 416:
#line 1127 "frame/parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 417:
#line 1128 "frame/parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 418:
#line 1129 "frame/parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 419:
#line 1130 "frame/parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 421:
#line 1132 "frame/parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 422:
#line 1133 "frame/parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 423:
#line 1136 "frame/parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 424:
#line 1137 "frame/parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 425:
#line 1138 "frame/parser.Y"
    {fr->getContourClipScopeCmd();;}
    break;

  case 426:
#line 1141 "frame/parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 427:
#line 1142 "frame/parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 428:
#line 1146 "frame/parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 429:
#line 1148 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 430:
#line 1154 "frame/parser.Y"
    {fr->getCoord3axisCmd((yyvsp[(1) - (4)].real), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 431:
#line 1158 "frame/parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 432:
#line 1160 "frame/parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 433:
#line 1161 "frame/parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 434:
#line 1164 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 435:
#line 1166 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 436:
#line 1167 "frame/parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 437:
#line 1170 "frame/parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 438:
#line 1173 "frame/parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 439:
#line 1175 "frame/parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 440:
#line 1179 "frame/parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 441:
#line 1181 "frame/parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 442:
#line 1184 "frame/parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 443:
#line 1188 "frame/parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 444:
#line 1189 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 445:
#line 1191 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)), (Coord::InternalSystem)(yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 446:
#line 1194 "frame/parser.Y"
    {fr->iisGetCmd((char*)(yyvsp[(1) - (5)].ptr),(yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 447:
#line 1195 "frame/parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 449:
#line 1199 "frame/parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 450:
#line 1200 "frame/parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 451:
#line 1201 "frame/parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 452:
#line 1204 "frame/parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 453:
#line 1206 "frame/parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 454:
#line 1207 "frame/parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 456:
#line 1209 "frame/parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 460:
#line 1213 "frame/parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 461:
#line 1214 "frame/parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 462:
#line 1215 "frame/parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 463:
#line 1217 "frame/parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::DistFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 465:
#line 1219 "frame/parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 466:
#line 1222 "frame/parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 467:
#line 1224 "frame/parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 468:
#line 1226 "frame/parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 469:
#line 1227 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 470:
#line 1228 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 471:
#line 1229 "frame/parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 472:
#line 1232 "frame/parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 473:
#line 1233 "frame/parser.Y"
    {fr->getFitsDepthCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 474:
#line 1237 "frame/parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 475:
#line 1239 "frame/parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 476:
#line 1242 "frame/parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 477:
#line 1245 "frame/parser.Y"
    {fr->getFitsSliceCmd(2);;}
    break;

  case 478:
#line 1246 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 479:
#line 1247 "frame/parser.Y"
    {fr->getFitsSliceCmd(2, (Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 480:
#line 1248 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (2)].integer), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 481:
#line 1251 "frame/parser.Y"
    {fr->getGridCmd();;}
    break;

  case 482:
#line 1252 "frame/parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 483:
#line 1253 "frame/parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 484:
#line 1256 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 485:
#line 1257 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 486:
#line 1258 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 487:
#line 1261 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 488:
#line 1264 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 489:
#line 1265 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 490:
#line 1266 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 491:
#line 1269 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 492:
#line 1270 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 493:
#line 1271 "frame/parser.Y"
    {fr->getSmoothRadiusMinorCmd();;}
    break;

  case 494:
#line 1272 "frame/parser.Y"
    {fr->getSmoothSigmaCmd();;}
    break;

  case 495:
#line 1273 "frame/parser.Y"
    {fr->getSmoothSigmaMinorCmd();;}
    break;

  case 496:
#line 1274 "frame/parser.Y"
    {fr->getSmoothAngleCmd();;}
    break;

  case 501:
#line 1281 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 502:
#line 1282 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 503:
#line 1283 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 504:
#line 1286 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 505:
#line 1287 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 506:
#line 1290 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 507:
#line 1291 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 508:
#line 1294 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 509:
#line 1295 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 510:
#line 1298 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 511:
#line 1299 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 512:
#line 1302 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 514:
#line 1304 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 515:
#line 1307 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 516:
#line 1308 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 518:
#line 1312 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 519:
#line 1316 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), 
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 520:
#line 1319 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer), 
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 521:
#line 1326 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 522:
#line 1327 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 523:
#line 1330 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 526:
#line 1333 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 527:
#line 1334 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 528:
#line 1335 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 529:
#line 1336 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 531:
#line 1338 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 532:
#line 1339 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 533:
#line 1340 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 535:
#line 1342 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 536:
#line 1343 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 537:
#line 1344 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 539:
#line 1348 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 540:
#line 1351 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 541:
#line 1352 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 542:
#line 1355 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 543:
#line 1356 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 544:
#line 1357 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 545:
#line 1358 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 546:
#line 1361 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 547:
#line 1362 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 548:
#line 1363 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 549:
#line 1364 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 550:
#line 1367 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 551:
#line 1368 "frame/parser.Y"
    {fr->hasWCSEquCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 552:
#line 1369 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 553:
#line 1370 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 554:
#line 1371 "frame/parser.Y"
    {fr->hasWCSxCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 555:
#line 1374 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 556:
#line 1375 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 557:
#line 1376 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 560:
#line 1380 "frame/parser.Y"
    {fr->iisSetCmd((const char*)(yyvsp[(2) - (6)].ptr),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 561:
#line 1381 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 562:
#line 1384 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 563:
#line 1387 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 564:
#line 1388 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 565:
#line 1392 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 566:
#line 1394 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 567:
#line 1395 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 574:
#line 1407 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 575:
#line 1409 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 576:
#line 1411 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 577:
#line 1412 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 578:
#line 1414 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 579:
#line 1416 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 580:
#line 1418 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 581:
#line 1420 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 582:
#line 1422 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 584:
#line 1426 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 585:
#line 1427 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 586:
#line 1428 "frame/parser.Y"
    {fr->loadArrayRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 587:
#line 1429 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 588:
#line 1430 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 589:
#line 1432 "frame/parser.Y"
    {fr->loadArrayRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 590:
#line 1433 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 591:
#line 1434 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 592:
#line 1435 "frame/parser.Y"
    {fr->loadArrayRGBCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 593:
#line 1438 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 594:
#line 1442 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 595:
#line 1444 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 596:
#line 1446 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 597:
#line 1448 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 598:
#line 1450 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 599:
#line 1452 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 600:
#line 1454 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 601:
#line 1456 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), 
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 602:
#line 1459 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 603:
#line 1461 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 604:
#line 1463 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 610:
#line 1471 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 611:
#line 1472 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 612:
#line 1473 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 613:
#line 1474 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 614:
#line 1475 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 615:
#line 1476 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 616:
#line 1478 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 617:
#line 1480 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 618:
#line 1481 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 619:
#line 1482 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 620:
#line 1483 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 621:
#line 1486 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 622:
#line 1487 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 623:
#line 1488 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 624:
#line 1489 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 625:
#line 1490 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 626:
#line 1492 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 627:
#line 1493 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 628:
#line 1494 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 629:
#line 1495 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 635:
#line 1506 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS, 
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 636:
#line 1509 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 637:
#line 1512 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 638:
#line 1515 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 639:
#line 1518 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 640:
#line 1521 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 641:
#line 1524 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 642:
#line 1527 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 643:
#line 1530 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 644:
#line 1535 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 645:
#line 1538 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 646:
#line 1541 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 647:
#line 1544 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 648:
#line 1547 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 649:
#line 1550 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 650:
#line 1553 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 651:
#line 1556 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 652:
#line 1559 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 653:
#line 1562 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 654:
#line 1565 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 655:
#line 1570 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 656:
#line 1573 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 657:
#line 1576 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 658:
#line 1579 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 659:
#line 1582 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 660:
#line 1585 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 661:
#line 1588 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 662:
#line 1591 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 663:
#line 1594 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 664:
#line 1599 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 665:
#line 1602 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 666:
#line 1605 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 667:
#line 1608 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 668:
#line 1611 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 669:
#line 1614 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 670:
#line 1617 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 671:
#line 1620 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 672:
#line 1623 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 673:
#line 1626 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 674:
#line 1629 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 675:
#line 1634 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 676:
#line 1635 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 677:
#line 1636 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 678:
#line 1637 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 679:
#line 1638 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 680:
#line 1640 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 681:
#line 1641 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 682:
#line 1642 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 683:
#line 1643 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 684:
#line 1645 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 685:
#line 1646 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 686:
#line 1647 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 687:
#line 1648 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 688:
#line 1649 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 689:
#line 1650 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 690:
#line 1652 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 691:
#line 1654 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 692:
#line 1655 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 693:
#line 1656 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 694:
#line 1657 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 695:
#line 1660 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 696:
#line 1661 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 697:
#line 1662 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 698:
#line 1663 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 699:
#line 1664 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 700:
#line 1666 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 701:
#line 1667 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 702:
#line 1668 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 703:
#line 1669 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 704:
#line 1673 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 705:
#line 1675 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 706:
#line 1676 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 707:
#line 1678 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 708:
#line 1680 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 709:
#line 1682 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 710:
#line 1685 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 711:
#line 1686 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 712:
#line 1689 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 713:
#line 1690 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 714:
#line 1691 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 715:
#line 1694 "frame/parser.Y"
    {
#ifdef MAC_OSX_TK
	  fr->macosxPrintCmd();
#endif
	;}
    break;

  case 716:
#line 1701 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 717:
#line 1702 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 718:
#line 1703 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 719:
#line 1704 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 720:
#line 1705 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 721:
#line 1706 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 722:
#line 1707 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 723:
#line 1711 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 725:
#line 1719 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 726:
#line 1720 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 727:
#line 1722 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 728:
#line 1724 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 729:
#line 1725 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 730:
#line 1726 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 732:
#line 1727 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 733:
#line 1728 "frame/parser.Y"
    {fr->markerDeleteCmd();;}
    break;

  case 734:
#line 1729 "frame/parser.Y"
    {fr->markerDeleteAllCmd();;}
    break;

  case 736:
#line 1731 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 737:
#line 1732 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 738:
#line 1734 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 739:
#line 1736 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 740:
#line 1738 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 741:
#line 1741 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 742:
#line 1743 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 743:
#line 1744 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 744:
#line 1746 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 745:
#line 1749 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (7)].integer), (yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real), (yyvsp[(6) - (7)].integer), (Coord::InternalSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 746:
#line 1751 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 747:
#line 1754 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 748:
#line 1756 "frame/parser.Y"
    {fr->markerBoxFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 749:
#line 1758 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), Vector((yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real)), 
	    Vector((yyvsp[(6) - (8)].real), (yyvsp[(6) - (8)].real)*(yyvsp[(5) - (8)].real)/(yyvsp[(4) - (8)].real)), (yyvsp[(7) - (8)].integer), (Coord::InternalSystem)(yyvsp[(8) - (8)].integer));;}
    break;

  case 750:
#line 1762 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 751:
#line 1765 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 752:
#line 1768 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (Coord::InternalSystem)(yyvsp[(6) - (6)].integer));;}
    break;

  case 753:
#line 1770 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)), 
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 754:
#line 1773 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 755:
#line 1777 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 756:
#line 1781 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 757:
#line 1786 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 758:
#line 1790 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 759:
#line 1791 "frame/parser.Y"
    {fr->markerCircleFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 760:
#line 1793 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].real), (Coord::InternalSystem)(yyvsp[(5) - (5)].integer));;}
    break;

  case 761:
#line 1795 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 762:
#line 1796 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 763:
#line 1798 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 764:
#line 1800 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 765:
#line 1802 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].real),(Coord::InternalSystem)(yyvsp[(5) - (5)].integer));;}
    break;

  case 766:
#line 1804 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 767:
#line 1806 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 768:
#line 1807 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 769:
#line 1809 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 770:
#line 1811 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 771:
#line 1814 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 772:
#line 1818 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 773:
#line 1822 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 774:
#line 1824 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 775:
#line 1826 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 776:
#line 1828 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 777:
#line 1830 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 778:
#line 1832 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 779:
#line 1834 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 780:
#line 1836 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 781:
#line 1838 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 782:
#line 1840 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 783:
#line 1842 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 784:
#line 1844 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 785:
#line 1846 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 786:
#line 1848 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 787:
#line 1849 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 788:
#line 1851 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 789:
#line 1853 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 790:
#line 1854 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 791:
#line 1855 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 792:
#line 1857 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 793:
#line 1859 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 794:
#line 1860 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 795:
#line 1861 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 796:
#line 1862 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 797:
#line 1864 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 798:
#line 1865 "frame/parser.Y"
    {fr->markerEllipseFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 799:
#line 1867 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(4) - (6)].real), (yyvsp[(5) - (6)].real)), (Coord::InternalSystem)(yyvsp[(6) - (6)].integer));;}
    break;

  case 800:
#line 1869 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 801:
#line 1873 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), 
	    Vector((yyvsp[(6) - (8)].real),(yyvsp[(6) - (8)].real)*(yyvsp[(5) - (8)].real)/(yyvsp[(4) - (8)].real)), (yyvsp[(7) - (8)].integer), (Coord::InternalSystem)(yyvsp[(8) - (8)].integer));;}
    break;

  case 802:
#line 1877 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 803:
#line 1880 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 804:
#line 1883 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 805:
#line 1887 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 806:
#line 1891 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 807:
#line 1896 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 808:
#line 1900 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 809:
#line 1901 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 810:
#line 1902 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 811:
#line 1904 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 812:
#line 1906 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(5) - (6)].vector)), Vector((yyvsp[(6) - (6)].vector)), (Coord::InternalSystem)(yyvsp[(4) - (6)].integer));;}
    break;

  case 813:
#line 1908 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 814:
#line 1912 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 815:
#line 1913 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 816:
#line 1914 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 817:
#line 1916 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)), (Coord::InternalSystem)(yyvsp[(4) - (6)].integer));;}
    break;

  case 818:
#line 1918 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 819:
#line 1921 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),(Coord::InternalSystem)(yyvsp[(6) - (6)].integer));;}
    break;

  case 820:
#line 1923 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 821:
#line 1926 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),(Coord::InternalSystem)(yyvsp[(6) - (6)].integer));;}
    break;

  case 822:
#line 1928 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 823:
#line 1931 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 824:
#line 1932 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 825:
#line 1934 "frame/parser.Y"
    {fr->markerPolygonFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 826:
#line 1936 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(4) - (6)].vector)), Vector((yyvsp[(5) - (6)].vector)),
	    (Coord::InternalSystem)(yyvsp[(3) - (6)].integer), (yyvsp[(6) - (6)].real));;}
    break;

  case 827:
#line 1940 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 828:
#line 1944 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 829:
#line 1946 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 830:
#line 1947 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 831:
#line 1949 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(5) - (6)].vector)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::InternalSystem)(yyvsp[(4) - (6)].integer));;}
    break;

  case 832:
#line 1952 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 833:
#line 1955 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 834:
#line 1958 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 835:
#line 1959 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 836:
#line 1961 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 837:
#line 1962 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 838:
#line 1963 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 839:
#line 1965 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 840:
#line 1966 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 841:
#line 1968 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 842:
#line 1970 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(5) - (7)].vector)), (Coord::InternalSystem)(yyvsp[(4) - (7)].integer), (yyvsp[(6) - (7)].real), (yyvsp[(7) - (7)].real));;}
    break;

  case 843:
#line 1973 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 844:
#line 1976 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 845:
#line 1978 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 846:
#line 1979 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 850:
#line 1984 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 851:
#line 1985 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 852:
#line 1987 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 853:
#line 1989 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 854:
#line 1991 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 855:
#line 1992 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 856:
#line 1994 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer));;}
    break;

  case 857:
#line 1995 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 860:
#line 2000 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 861:
#line 2001 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 862:
#line 2002 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 863:
#line 2003 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 864:
#line 2004 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 865:
#line 2005 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 866:
#line 2006 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 867:
#line 2007 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 868:
#line 2008 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 869:
#line 2009 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 870:
#line 2011 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (5)].str),Vector((yyvsp[(5) - (5)].vector)),(Coord::InternalSystem)(yyvsp[(4) - (5)].integer));;}
    break;

  case 871:
#line 2013 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 872:
#line 2015 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 873:
#line 2016 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 874:
#line 2017 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 875:
#line 2018 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 876:
#line 2019 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 877:
#line 2021 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 878:
#line 2022 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 879:
#line 2023 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 880:
#line 2024 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 881:
#line 2025 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 882:
#line 2027 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 883:
#line 2028 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 884:
#line 2029 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 885:
#line 2030 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 886:
#line 2031 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 887:
#line 2032 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 888:
#line 2035 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 889:
#line 2036 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 890:
#line 2037 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 891:
#line 2038 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 892:
#line 2039 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 893:
#line 2040 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 894:
#line 2041 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 895:
#line 2042 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 896:
#line 2043 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 897:
#line 2044 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 898:
#line 2045 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 899:
#line 2046 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 900:
#line 2047 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 901:
#line 2048 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 902:
#line 2049 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 903:
#line 2050 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 904:
#line 2051 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 905:
#line 2052 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 906:
#line 2053 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 907:
#line 2054 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 908:
#line 2055 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 909:
#line 2058 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 910:
#line 2059 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 911:
#line 2060 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 912:
#line 2061 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 913:
#line 2062 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 914:
#line 2064 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 915:
#line 2074 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 916:
#line 2082 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 917:
#line 2091 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 918:
#line 2099 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 919:
#line 2106 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 920:
#line 2113 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 921:
#line 2121 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 922:
#line 2129 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 923:
#line 2134 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 924:
#line 2139 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 925:
#line 2144 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 926:
#line 2149 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 927:
#line 2154 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 928:
#line 2159 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 929:
#line 2164 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 930:
#line 2173 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer), 
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 931:
#line 2183 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS), 
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 932:
#line 2193 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 933:
#line 2202 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 934:
#line 2210 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont, 
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 935:
#line 2220 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 936:
#line 2230 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 937:
#line 2240 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 938:
#line 2252 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 939:
#line 2261 "frame/parser.Y"
    {fr->createCompositeCmd(
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 941:
#line 2269 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 942:
#line 2271 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 943:
#line 2273 "frame/parser.Y"
    { 
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 944:
#line 2278 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 945:
#line 2281 "frame/parser.Y"
    {(yyval.dash)[0] = (yyvsp[(1) - (2)].integer); (yyval.dash)[1] = (yyvsp[(2) - (2)].integer);;}
    break;

  case 946:
#line 2285 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 947:
#line 2287 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 948:
#line 2288 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 949:
#line 2291 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 950:
#line 2292 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 951:
#line 2293 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 952:
#line 2294 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 953:
#line 2295 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 954:
#line 2296 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 955:
#line 2297 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 957:
#line 2301 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 958:
#line 2302 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 959:
#line 2303 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 960:
#line 2304 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 961:
#line 2305 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 962:
#line 2308 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 963:
#line 2310 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 964:
#line 2312 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 965:
#line 2314 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer),(Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 966:
#line 2316 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 967:
#line 2318 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 968:
#line 2321 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 969:
#line 2323 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 970:
#line 2325 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 971:
#line 2327 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer),(Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 972:
#line 2329 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 973:
#line 2331 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 974:
#line 2333 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 975:
#line 2334 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 976:
#line 2335 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 977:
#line 2337 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 978:
#line 2339 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 979:
#line 2341 "frame/parser.Y"
    {fr->getMarkerBoxFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 980:
#line 2343 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 981:
#line 2345 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 982:
#line 2346 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 983:
#line 2347 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 984:
#line 2349 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 985:
#line 2351 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 986:
#line 2354 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), 
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 987:
#line 2356 "frame/parser.Y"
    {fr->getMarkerCircleFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 988:
#line 2358 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 989:
#line 2359 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 990:
#line 2360 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 991:
#line 2361 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 992:
#line 2363 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 993:
#line 2364 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 994:
#line 2365 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 995:
#line 2366 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 996:
#line 2367 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 997:
#line 2369 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 998:
#line 2371 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 999:
#line 2372 "frame/parser.Y"
    {fr->getMarkerEllipseFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1000:
#line 2374 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1001:
#line 2376 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1002:
#line 2378 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1003:
#line 2379 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1004:
#line 2381 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1005:
#line 2383 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1006:
#line 2384 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1007:
#line 2385 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1008:
#line 2386 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1009:
#line 2388 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1010:
#line 2390 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1011:
#line 2393 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1012:
#line 2396 "frame/parser.Y"
    {fr->getMarkerPolygonFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1013:
#line 2397 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1014:
#line 2398 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1015:
#line 2400 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1016:
#line 2403 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1017:
#line 2406 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1018:
#line 2407 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1019:
#line 2408 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1020:
#line 2409 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1021:
#line 2411 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1022:
#line 2413 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1023:
#line 2415 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1024:
#line 2416 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1025:
#line 2418 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1026:
#line 2419 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1027:
#line 2420 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1028:
#line 2421 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1029:
#line 2422 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1030:
#line 2424 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1031:
#line 2426 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1032:
#line 2428 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1033:
#line 2430 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1035:
#line 2432 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1036:
#line 2433 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1037:
#line 2435 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1038:
#line 2437 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1039:
#line 2438 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1040:
#line 2439 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1042:
#line 2441 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1044:
#line 2445 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1045:
#line 2446 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1046:
#line 2447 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1047:
#line 2448 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1048:
#line 2449 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1049:
#line 2450 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1050:
#line 2452 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1051:
#line 2453 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1052:
#line 2455 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1053:
#line 2458 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1054:
#line 2459 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1055:
#line 2460 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1056:
#line 2461 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1057:
#line 2464 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1058:
#line 2465 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1059:
#line 2468 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1060:
#line 2469 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1061:
#line 2472 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1062:
#line 2473 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1063:
#line 2476 "frame/parser.Y"
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

  case 1064:
#line 2489 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1065:
#line 2490 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1066:
#line 2494 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1067:
#line 2495 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1068:
#line 2499 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1069:
#line 2500 "frame/parser.Y"
    {fr->markerLayerCmd(Base::ANALYSIS);;}
    break;

  case 1070:
#line 2505 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer),
	    0, propQMask, propQValue, taglist);;}
    break;

  case 1071:
#line 2510 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer), 
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer),
	    1, propQMask, propQValue, taglist);;}
    break;

  case 1072:
#line 2516 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1073:
#line 2518 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].str),
	    (Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1074:
#line 2521 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1075:
#line 2523 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].integer),
	    (Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1076:
#line 2526 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (yyvsp[(4) - (6)].dash), (yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].str));;}
    break;

  case 1077:
#line 2529 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1078:
#line 2530 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1079:
#line 2531 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1080:
#line 2532 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1081:
#line 2533 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1082:
#line 2534 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1083:
#line 2536 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::InternalSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1084:
#line 2538 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1087:
#line 2545 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1088:
#line 2546 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1089:
#line 2547 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1090:
#line 2548 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1091:
#line 2549 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1092:
#line 2550 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1095:
#line 2555 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1096:
#line 2556 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1097:
#line 2557 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1098:
#line 2558 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1099:
#line 2559 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1100:
#line 2560 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1101:
#line 2561 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1102:
#line 2562 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1103:
#line 2563 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1104:
#line 2564 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1105:
#line 2565 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1108:
#line 2572 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1109:
#line 2573 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1111:
#line 2576 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1112:
#line 2577 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1113:
#line 2578 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1114:
#line 2579 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1115:
#line 2582 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1116:
#line 2583 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1119:
#line 2591 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1120:
#line 2594 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1121:
#line 2595 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1125:
#line 2602 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1126:
#line 2605 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1127:
#line 2609 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1128:
#line 2610 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1129:
#line 2611 "frame/parser.Y"
    {fr->maskMarkCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1130:
#line 2612 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1131:
#line 2615 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1132:
#line 2616 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1133:
#line 2617 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1134:
#line 2618 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1135:
#line 2622 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1136:
#line 2623 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1137:
#line 2625 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1138:
#line 2630 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1140:
#line 2632 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1142:
#line 2634 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1143:
#line 2637 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1144:
#line 2639 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1145:
#line 2644 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1146:
#line 2647 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1147:
#line 2648 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1148:
#line 2649 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1149:
#line 2652 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1150:
#line 2654 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1151:
#line 2658 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1152:
#line 2659 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1153:
#line 2663 "frame/parser.Y"
    {fr->psColorSpaceCmd((Widget::PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1154:
#line 2664 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1155:
#line 2665 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1156:
#line 2666 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  ;}
    break;

  case 1157:
#line 2671 "frame/parser.Y"
    {(yyval.integer) = Widget::BW;;}
    break;

  case 1158:
#line 2672 "frame/parser.Y"
    {(yyval.integer) = Widget::GRAY;;}
    break;

  case 1159:
#line 2673 "frame/parser.Y"
    {(yyval.integer) = Widget::RGB;;}
    break;

  case 1160:
#line 2674 "frame/parser.Y"
    {(yyval.integer) = Widget::CMYK;;}
    break;

  case 1163:
#line 2682 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1164:
#line 2684 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1165:
#line 2685 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1166:
#line 2686 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1167:
#line 2690 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1168:
#line 2691 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1169:
#line 2692 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1170:
#line 2693 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1171:
#line 2696 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1172:
#line 2697 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1173:
#line 2700 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1174:
#line 2701 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1175:
#line 2702 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1176:
#line 2705 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1177:
#line 2706 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1178:
#line 2707 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1179:
#line 2710 "frame/parser.Y"
    {fr->rotateCmd(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 1180:
#line 2711 "frame/parser.Y"
    {fr->rotateCmd(degToRad((yyvsp[(1) - (2)].real)));;}
    break;

  case 1182:
#line 2713 "frame/parser.Y"
    {fr->rotateToCmd(degToRad((yyvsp[(2) - (2)].real)));;}
    break;

  case 1183:
#line 2714 "frame/parser.Y"
    {fr->rotateToCmd(degToRad((yyvsp[(2) - (3)].real)));;}
    break;

  case 1184:
#line 2717 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1185:
#line 2718 "frame/parser.Y"
    {fr->rotateMotionCmd(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 1186:
#line 2719 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1191:
#line 2726 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1192:
#line 2730 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1193:
#line 2732 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1194:
#line 2734 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1196:
#line 2739 "frame/parser.Y"
    {fr->saveArrayRGBCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1197:
#line 2741 "frame/parser.Y"
    {fr->saveArrayRGBCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1198:
#line 2743 "frame/parser.Y"
    {fr->saveArrayRGBCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1208:
#line 2756 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1209:
#line 2757 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1210:
#line 2758 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1211:
#line 2761 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1212:
#line 2762 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1213:
#line 2763 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1214:
#line 2766 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1215:
#line 2767 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1216:
#line 2768 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1217:
#line 2771 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1218:
#line 2772 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1219:
#line 2773 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1221:
#line 2777 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1222:
#line 2778 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1223:
#line 2779 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1224:
#line 2782 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1225:
#line 2783 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1226:
#line 2784 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1227:
#line 2787 "frame/parser.Y"
    {fr->saveFitsRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1228:
#line 2788 "frame/parser.Y"
    {fr->saveFitsRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1229:
#line 2789 "frame/parser.Y"
    {fr->saveFitsRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1230:
#line 2792 "frame/parser.Y"
    {fr->saveFitsRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1231:
#line 2793 "frame/parser.Y"
    {fr->saveFitsRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1232:
#line 2794 "frame/parser.Y"
    {fr->saveFitsRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1233:
#line 2797 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1234:
#line 2798 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1235:
#line 2799 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1236:
#line 2803 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1237:
#line 2805 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1238:
#line 2807 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1239:
#line 2811 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1240:
#line 2815 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1241:
#line 2816 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1242:
#line 2819 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1243:
#line 2820 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1244:
#line 2821 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1245:
#line 2822 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1246:
#line 2825 "frame/parser.Y"
    {fr->updateFitsCmd(0);;}
    break;

  case 1247:
#line 2827 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)),0);;}
    break;

  case 1248:
#line 2828 "frame/parser.Y"
    {fr->updateFitsCmd(1);;}
    break;

  case 1249:
#line 2830 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)),1);;}
    break;

  case 1251:
#line 2834 "frame/parser.Y"
    {fr->sliceCmd(2, (yyvsp[(1) - (1)].integer));;}
    break;

  case 1252:
#line 2835 "frame/parser.Y"
    {fr->sliceCmd(2, (yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1253:
#line 2836 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer), (yyvsp[(2) - (2)].integer));;}
    break;

  case 1254:
#line 2837 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (3)].integer), (yyvsp[(2) - (3)].real), (Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1255:
#line 2840 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1256:
#line 2841 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1257:
#line 2845 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1259:
#line 2847 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1262:
#line 2852 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1263:
#line 2853 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1264:
#line 2854 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1265:
#line 2857 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1266:
#line 2858 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1267:
#line 2859 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1268:
#line 2862 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1269:
#line 2864 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1270:
#line 2869 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (4)].integer), (FitsImage*)(yyvsp[(2) - (4)].ptr), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1271:
#line 2872 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1272:
#line 2879 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1273:
#line 2881 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1274:
#line 2883 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1275:
#line 2888 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1277:
#line 2892 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1278:
#line 2893 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1279:
#line 2894 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1280:
#line 2896 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1281:
#line 2898 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1282:
#line 2903 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 11031 "frame/parser.C"
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


#line 2907 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

