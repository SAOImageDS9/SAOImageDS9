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
#define YYLAST   5888

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  349
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  217
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1279
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2831

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
     486,   489,   496,   498,   501,   505,   509,   513,   517,   521,
     525,   529,   533,   537,   540,   545,   548,   551,   554,   558,
     561,   564,   566,   569,   571,   574,   579,   585,   588,   592,
     598,   605,   607,   609,   611,   619,   631,   640,   653,   655,
     658,   661,   663,   665,   668,   671,   674,   677,   681,   684,
     687,   689,   691,   693,   695,   697,   699,   701,   704,   707,
     710,   714,   717,   720,   723,   730,   741,   743,   746,   748,
     755,   766,   768,   771,   774,   777,   780,   783,   786,   800,
     814,   827,   840,   842,   843,   845,   847,   852,   859,   861,
     863,   865,   867,   869,   871,   873,   875,   877,   882,   886,
     891,   892,   899,   908,   911,   915,   919,   923,   924,   928,
     933,   938,   943,   947,   951,   953,   957,   963,   968,   973,
     977,   980,   981,   983,   985,   989,   992,   995,   998,  1001,
    1004,  1007,  1010,  1013,  1016,  1019,  1022,  1025,  1028,  1031,
    1033,  1036,  1039,  1044,  1054,  1057,  1060,  1063,  1065,  1069,
    1072,  1075,  1077,  1080,  1089,  1092,  1094,  1097,  1099,  1102,
    1104,  1109,  1119,  1122,  1124,  1126,  1128,  1130,  1133,  1135,
    1137,  1140,  1142,  1143,  1146,  1149,  1151,  1152,  1155,  1158,
    1160,  1162,  1165,  1168,  1171,  1173,  1175,  1177,  1179,  1181,
    1183,  1184,  1186,  1189,  1191,  1196,  1202,  1203,  1206,  1208,
    1214,  1217,  1220,  1222,  1224,  1226,  1229,  1231,  1234,  1236,
    1238,  1239,  1241,  1243,  1244,  1246,  1252,  1259,  1264,  1268,
    1275,  1278,  1280,  1284,  1286,  1288,  1290,  1294,  1301,  1309,
    1315,  1317,  1319,  1324,  1330,  1332,  1336,  1337,  1339,  1342,
    1344,  1349,  1351,  1354,  1356,  1359,  1363,  1366,  1368,  1371,
    1373,  1378,  1381,  1383,  1385,  1389,  1391,  1394,  1398,  1401,
    1402,  1404,  1406,  1411,  1414,  1415,  1417,  1419,  1422,  1423,
    1425,  1427,  1429,  1431,  1433,  1435,  1437,  1439,  1441,  1443,
    1445,  1448,  1450,  1453,  1455,  1458,  1461,  1464,  1467,  1469,
    1471,  1473,  1474,  1476,  1477,  1479,  1480,  1482,  1483,  1485,
    1486,  1489,  1492,  1493,  1495,  1498,  1500,  1507,  1513,  1515,
    1517,  1519,  1522,  1525,  1527,  1529,  1531,  1533,  1536,  1538,
    1540,  1542,  1545,  1547,  1549,  1552,  1555,  1558,  1559,  1561,
    1562,  1564,  1566,  1568,  1570,  1572,  1574,  1576,  1578,  1581,
    1584,  1586,  1589,  1593,  1595,  1598,  1601,  1606,  1613,  1615,
    1626,  1628,  1631,  1635,  1639,  1642,  1645,  1648,  1651,  1654,
    1657,  1660,  1665,  1670,  1675,  1679,  1683,  1689,  1694,  1699,
    1704,  1708,  1712,  1716,  1720,  1723,  1726,  1731,  1735,  1739,
    1743,  1747,  1752,  1757,  1762,  1767,  1773,  1778,  1785,  1793,
    1798,  1803,  1809,  1812,  1816,  1820,  1824,  1827,  1831,  1835,
    1839,  1843,  1848,  1852,  1858,  1865,  1869,  1873,  1878,  1882,
    1886,  1890,  1894,  1898,  1904,  1908,  1912,  1917,  1921,  1924,
    1927,  1929,  1933,  1938,  1943,  1948,  1953,  1958,  1965,  1970,
    1975,  1981,  1986,  1991,  1996,  2001,  2007,  2012,  2019,  2027,
    2032,  2037,  2043,  2049,  2055,  2061,  2067,  2073,  2081,  2087,
    2093,  2100,  2106,  2112,  2118,  2124,  2131,  2137,  2145,  2154,
    2160,  2166,  2173,  2177,  2181,  2185,  2189,  2193,  2199,  2203,
    2207,  2212,  2216,  2220,  2224,  2228,  2233,  2237,  2243,  2250,
    2254,  2258,  2263,  2267,  2271,  2275,  2279,  2283,  2289,  2293,
    2297,  2302,  2307,  2312,  2316,  2322,  2327,  2332,  2335,  2339,
    2346,  2353,  2355,  2357,  2359,  2362,  2365,  2368,  2372,  2376,
    2379,  2392,  2395,  2398,  2400,  2404,  2409,  2412,  2413,  2417,
    2419,  2421,  2424,  2427,  2430,  2433,  2436,  2441,  2446,  2451,
    2455,  2460,  2466,  2474,  2483,  2490,  2495,  2504,  2514,  2521,
    2528,  2536,  2547,  2559,  2572,  2582,  2588,  2593,  2599,  2606,
    2610,  2616,  2622,  2628,  2635,  2641,  2646,  2656,  2667,  2679,
    2689,  2696,  2703,  2710,  2717,  2724,  2731,  2738,  2745,  2752,
    2760,  2768,  2771,  2776,  2781,  2786,  2791,  2797,  2802,  2807,
    2813,  2819,  2823,  2828,  2833,  2838,  2843,  2850,  2858,  2867,
    2877,  2884,  2895,  2907,  2920,  2930,  2934,  2937,  2941,  2947,
    2954,  2962,  2967,  2971,  2975,  2982,  2989,  2996,  3004,  3011,
    3019,  3024,  3029,  3034,  3041,  3051,  3056,  3060,  3065,  3072,
    3080,  3088,  3091,  3095,  3099,  3103,  3108,  3111,  3114,  3119,
    3127,  3138,  3142,  3144,  3148,  3151,  3154,  3157,  3160,  3164,
    3170,  3175,  3181,  3184,  3192,  3196,  3199,  3202,  3206,  3209,
    3212,  3215,  3219,  3222,  3226,  3231,  3235,  3239,  3245,  3252,
    3257,  3260,  3264,  3267,  3270,  3275,  3279,  3283,  3286,  3290,
    3292,  3295,  3297,  3300,  3303,  3306,  3308,  3310,  3312,  3314,
    3317,  3319,  3322,  3325,  3327,  3330,  3333,  3335,  3338,  3340,
    3342,  3344,  3346,  3348,  3350,  3352,  3354,  3355,  3357,  3360,
    3363,  3366,  3370,  3376,  3384,  3392,  3399,  3406,  3413,  3420,
    3426,  3433,  3440,  3447,  3454,  3461,  3468,  3475,  3487,  3495,
    3503,  3511,  3521,  3531,  3542,  3555,  3568,  3571,  3574,  3578,
    3583,  3588,  3593,  3596,  3601,  3606,  3608,  3610,  3612,  3614,
    3616,  3618,  3620,  3622,  3625,  3627,  3629,  3631,  3635,  3639,
    3644,  3651,  3662,  3670,  3678,  3684,  3689,  3696,  3707,  3715,
    3723,  3729,  3732,  3735,  3739,  3744,  3750,  3754,  3760,  3766,
    3770,  3775,  3781,  3787,  3793,  3797,  3803,  3806,  3810,  3814,
    3820,  3824,  3828,  3832,  3837,  3843,  3849,  3853,  3859,  3865,
    3869,  3874,  3880,  3886,  3889,  3892,  3896,  3902,  3909,  3916,
    3920,  3924,  3928,  3935,  3941,  3947,  3950,  3954,  3958,  3964,
    3971,  3975,  3978,  3981,  3985,  3988,  3992,  3995,  3999,  4005,
    4012,  4015,  4018,  4021,  4023,  4028,  4033,  4035,  4038,  4041,
    4044,  4047,  4050,  4053,  4056,  4060,  4063,  4067,  4070,  4074,
    4076,  4078,  4080,  4082,  4084,  4085,  4088,  4089,  4092,  4093,
    4095,  4096,  4097,  4099,  4101,  4103,  4105,  4107,  4115,  4124,
    4127,  4132,  4135,  4140,  4147,  4150,  4152,  4154,  4158,  4162,
    4164,  4168,  4173,  4176,  4178,  4182,  4186,  4191,  4195,  4199,
    4203,  4205,  4207,  4209,  4211,  4213,  4215,  4217,  4219,  4221,
    4223,  4225,  4227,  4229,  4231,  4234,  4235,  4236,  4239,  4241,
    4245,  4247,  4251,  4253,  4256,  4259,  4261,  4265,  4266,  4267,
    4270,  4273,  4275,  4279,  4285,  4287,  4290,  4293,  4296,  4298,
    4300,  4302,  4304,  4309,  4312,  4316,  4320,  4323,  4327,  4330,
    4333,  4336,  4340,  4344,  4348,  4351,  4355,  4357,  4361,  4365,
    4367,  4370,  4373,  4376,  4379,  4381,  4383,  4385,  4387,  4390,
    4393,  4397,  4401,  4403,  4406,  4410,  4414,  4416,  4419,  4421,
    4423,  4425,  4427,  4429,  4432,  4435,  4440,  4442,  4445,  4448,
    4451,  4455,  4457,  4459,  4461,  4464,  4467,  4470,  4473,  4476,
    4480,  4484,  4488,  4492,  4496,  4500,  4504,  4506,  4509,  4512,
    4515,  4519,  4522,  4526,  4530,  4533,  4536,  4539,  4542,  4545,
    4548,  4551,  4554,  4557,  4560,  4563,  4566,  4569,  4572,  4576,
    4580,  4584,  4587,  4590,  4593,  4596,  4599,  4602,  4605,  4608,
    4611,  4614,  4617,  4620,  4624,  4628,  4632,  4637,  4644,  4646,
    4648,  4650,  4652,  4654,  4655,  4661,  4663,  4670,  4674,  4676,
    4679,  4682,  4686,  4689,  4693,  4697,  4700,  4703,  4706,  4709,
    4712,  4715,  4719,  4722,  4725,  4729,  4731,  4735,  4740,  4742,
    4745,  4751,  4758,  4765,  4768,  4770,  4773,  4776,  4782,  4789
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
     351,   351,   351,   351,   351,    -1,   240,    -1,   258,   383,
      -1,    62,   351,   351,    -1,   109,   351,   351,    -1,    48,
     351,   351,    -1,   225,   351,   351,    -1,   223,   351,   351,
      -1,   303,   351,   351,    -1,    22,   351,   351,    -1,   110,
     351,   351,    -1,    49,   351,   351,    -1,    12,   385,    -1,
      71,     5,     5,     5,    -1,   100,     4,    -1,   118,   386,
      -1,   134,   387,    -1,    53,   265,     4,    -1,   289,   388,
      -1,   122,     5,    -1,    59,    -1,   351,   351,    -1,   351,
      -1,   351,   351,    -1,   351,    12,   351,   351,    -1,   351,
     351,    12,   351,   351,    -1,   289,   351,    -1,   289,   351,
     351,    -1,   289,   351,    12,   351,   351,    -1,   289,   351,
     351,    12,   351,   351,    -1,    32,    -1,   278,    -1,   123,
      -1,   351,   351,    12,    59,     5,     5,     5,    -1,   351,
     351,     4,   351,   351,    12,    59,     5,     5,     5,     5,
      -1,   351,   351,    12,   351,   351,     5,     5,     5,    -1,
     351,   351,     4,   351,   351,    12,   351,   351,     5,     5,
       5,     5,    -1,   351,    -1,   351,   351,    -1,   289,   390,
      -1,   123,    -1,   351,    -1,   351,   351,    -1,   253,   392,
      -1,   193,   393,    -1,   187,   394,    -1,   299,   351,   351,
      -1,   343,   395,    -1,   229,   353,    -1,   138,    -1,   176,
      -1,   351,    -1,   187,    -1,   343,    -1,   342,    -1,   299,
      -1,     4,   365,    -1,   193,   365,    -1,   246,     4,    -1,
     351,     4,     4,    -1,    78,   351,    -1,   246,     4,    -1,
     172,     4,    -1,     4,   351,   351,     4,     6,     4,    -1,
     242,   351,   351,   351,   351,   351,   351,     4,     6,     4,
      -1,    40,    -1,   194,   397,    -1,   111,    -1,     4,   351,
     351,     4,     6,     4,    -1,   242,   351,   351,   351,   351,
     351,   351,     4,     6,     4,    -1,   364,    -1,   177,   351,
      -1,    83,   400,    -1,    99,   401,    -1,   175,   402,    -1,
     216,   406,    -1,   249,   407,    -1,     5,     4,     4,   405,
       4,     4,   364,   351,   403,   404,   351,   351,     5,    -1,
       5,     4,     4,   405,     4,     4,   364,   351,   351,   404,
     351,   351,     5,    -1,     5,     4,     4,   405,     4,     4,
     364,   351,   403,   351,   351,     5,    -1,     5,     4,     4,
     405,     4,     4,   364,   351,   351,   351,   351,     5,    -1,
     225,    -1,    -1,    31,    -1,     5,    -1,     5,     5,     4,
     353,    -1,     5,     4,   353,     5,   361,   366,    -1,   187,
      -1,   343,    -1,   342,    -1,   299,    -1,   138,    -1,   176,
      -1,   268,    -1,    46,    -1,     5,    -1,     5,     5,     4,
     353,    -1,     5,   361,   366,    -1,    31,     5,   361,   366,
      -1,    -1,   351,   351,   351,   351,   361,   366,    -1,    59,
     360,   361,   366,   351,   351,   361,   368,    -1,   285,   409,
      -1,    40,   351,   351,    -1,   194,   351,   351,    -1,   111,
     351,   351,    -1,    -1,   351,   351,   361,    -1,    40,   351,
     351,     4,    -1,   194,   351,   351,     4,    -1,   111,   351,
     351,     4,    -1,   363,   351,   351,    -1,   361,   366,   360,
      -1,   353,    -1,   307,   351,   351,    -1,    40,   194,   363,
     351,   351,    -1,   194,   363,   351,   351,    -1,    40,   194,
     361,   360,    -1,   194,   361,   360,    -1,    33,     4,    -1,
      -1,    32,    -1,   278,    -1,   144,   117,     5,    -1,    41,
      66,    -1,    44,   415,    -1,    46,   417,    -1,    65,   418,
      -1,    68,   422,    -1,    67,   421,    -1,    69,   424,    -1,
      77,   426,    -1,    79,   429,    -1,    84,   430,    -1,    86,
     431,    -1,    88,   433,    -1,    87,   432,    -1,    93,   434,
      -1,    95,    -1,   124,   438,    -1,   141,   444,    -1,   152,
       5,     5,     4,    -1,   153,    89,     5,     5,   351,   351,
     363,     4,   412,    -1,   156,   436,    -1,   160,   435,    -1,
     162,    16,    -1,   187,    -1,   183,   504,   498,    -1,   184,
     445,    -1,   197,    66,    -1,   212,    -1,   213,   446,    -1,
     220,   280,   363,   351,   351,     4,     4,     5,    -1,   242,
     447,    -1,   244,    -1,   268,   448,    -1,   284,    -1,   285,
     449,    -1,   293,    -1,   300,   363,   351,   351,    -1,   306,
      89,     5,     5,   351,   351,   363,     4,   412,    -1,   308,
     454,    -1,   344,    -1,   100,    -1,   118,    -1,   134,    -1,
      53,   265,    -1,    88,    -1,   122,    -1,    71,   416,    -1,
     174,    -1,    -1,   187,     5,    -1,   103,     5,    -1,   118,
      -1,    -1,   403,   404,    -1,   351,   404,    -1,   253,    -1,
     193,    -1,   187,   419,    -1,   299,   169,    -1,   343,   420,
      -1,   229,    -1,   193,    -1,   246,    -1,    78,    -1,   246,
      -1,   172,    -1,    -1,   281,    -1,   169,   423,    -1,     4,
      -1,     4,   363,   351,   351,    -1,     4,   351,   351,   364,
     351,    -1,    -1,   169,   425,    -1,   177,    -1,     4,   351,
     351,   364,   351,    -1,   361,   366,    -1,    65,   427,    -1,
      66,    -1,    91,    -1,   169,    -1,   206,   169,    -1,   186,
      -1,    69,   428,    -1,   268,    -1,   337,    -1,    -1,   193,
      -1,   253,    -1,    -1,   177,    -1,   351,   351,   361,   366,
     367,    -1,   363,   351,   351,   361,   366,   367,    -1,   351,
     361,   361,     4,    -1,   361,   366,   367,    -1,    59,   361,
     366,   367,   361,   368,    -1,   285,   361,    -1,   363,    -1,
     361,   366,   367,    -1,   276,    -1,    33,    -1,   363,    -1,
     361,   366,   367,    -1,   361,   366,   360,   351,   351,     5,
      -1,     4,   361,   366,   360,   351,   351,     5,    -1,   363,
     351,   351,     4,     4,    -1,     5,    -1,    65,    -1,   363,
     351,   351,     5,    -1,     6,     4,     4,     4,     4,    -1,
      88,    -1,   120,   196,   437,    -1,    -1,     4,    -1,   351,
     351,    -1,   199,    -1,    59,   361,   366,   367,    -1,    81,
      -1,   100,   441,    -1,    45,    -1,   117,   439,    -1,   120,
     196,   442,    -1,   146,   440,    -1,   147,    -1,   207,   196,
      -1,   265,    -1,   265,   361,   366,   368,    -1,   266,   443,
      -1,   337,    -1,     4,    -1,   363,   351,   351,    -1,     4,
      -1,   166,     5,    -1,     4,   166,     5,    -1,   308,     4,
      -1,    -1,     4,    -1,   354,    -1,   354,   363,   351,   351,
      -1,   354,     4,    -1,    -1,     4,    -1,   361,    -1,     4,
     361,    -1,    -1,   211,    -1,   301,    -1,    66,    -1,   182,
      -1,   288,    -1,   229,    -1,    61,    -1,   279,    -1,   302,
      -1,   134,    -1,   236,    -1,   236,   188,    -1,   263,    -1,
     263,   188,    -1,    21,    -1,   302,   453,    -1,    47,   450,
      -1,    74,   451,    -1,   150,   452,    -1,   186,    -1,    37,
      -1,   250,    -1,    -1,    66,    -1,    -1,    66,    -1,    -1,
      66,    -1,    -1,   223,    -1,    -1,    16,   455,    -1,   196,
     362,    -1,    -1,   224,    -1,    83,   457,    -1,    99,    -1,
     361,   366,   367,   458,     5,     5,    -1,   361,   366,   367,
     458,     5,    -1,    20,    -1,   232,    -1,    19,    -1,    44,
     460,    -1,    77,   461,    -1,    84,    -1,    94,    -1,    95,
      -1,   101,    -1,   124,   462,    -1,   141,    -1,   156,    -1,
     163,    -1,   183,   463,    -1,   219,    -1,   268,    -1,   279,
     361,    -1,   308,   464,    -1,    72,     5,    -1,    -1,    31,
      -1,    -1,    44,    -1,    87,    -1,   192,    -1,   150,    -1,
     255,    -1,   216,    -1,   294,    -1,   361,    -1,   115,   361,
      -1,    58,   361,    -1,    18,    -1,   285,   361,    -1,   200,
       4,     4,    -1,   116,    -1,   185,     5,    -1,    88,   467,
      -1,   256,   120,   196,   466,    -1,   256,     6,     4,     4,
       4,     4,    -1,   298,    -1,   308,   351,   351,   351,   351,
     351,   351,   351,   351,     4,    -1,     5,    -1,     5,     4,
      -1,     4,     4,    56,    -1,     4,     4,   361,    -1,   193,
     353,    -1,    26,   469,    -1,   112,   471,    -1,   124,   472,
      -1,   159,   485,    -1,   205,   483,    -1,   218,   484,    -1,
       5,    14,     5,   371,    -1,     5,    15,     5,   371,    -1,
       5,    61,     5,   371,    -1,     5,   190,   371,    -1,     5,
     191,   371,    -1,     5,   259,   369,     4,   371,    -1,     5,
     269,     4,   371,    -1,     5,   270,     4,   371,    -1,     5,
     301,     5,   371,    -1,   242,    87,   470,    -1,     5,    14,
       5,    -1,     5,    15,     5,    -1,     5,    61,     5,    -1,
       5,   190,    -1,     5,   191,    -1,     5,   259,   369,     4,
      -1,     5,   269,     4,    -1,     5,   270,     4,    -1,     5,
     301,     5,    -1,     5,     5,   267,    -1,     5,    14,     5,
     371,    -1,     5,    15,     5,   371,    -1,     5,    61,     5,
     371,    -1,     5,   190,   370,   371,    -1,     5,     5,   267,
     370,   371,    -1,     5,   191,   370,   371,    -1,     5,   259,
     369,     4,   370,   371,    -1,     5,   274,   369,     4,     4,
     370,   371,    -1,     5,   269,     4,   371,    -1,     5,   270,
       4,   371,    -1,     5,   301,     5,   370,   371,    -1,   266,
     473,    -1,   117,    87,   474,    -1,   242,   157,   482,    -1,
     242,    87,   481,    -1,   192,   475,    -1,     5,    14,     5,
      -1,     5,    15,     5,    -1,     5,    61,     5,    -1,     5,
     190,   370,    -1,     5,     5,   267,   370,    -1,     5,   191,
     370,    -1,     5,   259,   369,     4,   370,    -1,     5,   274,
     369,     4,     4,   370,    -1,     5,   269,     4,    -1,     5,
     270,     4,    -1,     5,   301,     5,   370,    -1,     5,    14,
       5,    -1,     5,    15,     5,    -1,     5,    61,     5,    -1,
       5,   190,   370,    -1,     5,   191,   370,    -1,     5,   259,
     369,     4,   370,    -1,     5,   269,     4,    -1,     5,   270,
       4,    -1,     5,   301,     5,   370,    -1,   157,   162,   476,
      -1,   162,   477,    -1,   157,   478,    -1,   479,    -1,   157,
     336,   480,    -1,     5,    14,     5,   371,    -1,     5,    15,
       5,   371,    -1,     5,    61,     5,   371,    -1,     5,   190,
     370,   371,    -1,     5,   191,   370,   371,    -1,     5,   259,
     369,     4,   370,   371,    -1,     5,   269,     4,   371,    -1,
       5,   270,     4,   371,    -1,     5,   301,     5,   370,   371,
      -1,     5,    14,     5,   371,    -1,     5,    15,     5,   371,
      -1,     5,    61,     5,   371,    -1,     5,   190,   370,   371,
      -1,     5,     5,   267,   370,   371,    -1,     5,   191,   370,
     371,    -1,     5,   259,   369,     4,   370,   371,    -1,     5,
     274,   369,     4,     4,   370,   371,    -1,     5,   269,     4,
     371,    -1,     5,   270,     4,   371,    -1,     5,   301,     5,
     370,   371,    -1,   362,     5,    14,     5,   371,    -1,   362,
       5,    15,     5,   371,    -1,   362,     5,    61,     5,   371,
      -1,   362,     5,   190,   370,   371,    -1,   362,     5,   191,
     370,   371,    -1,   362,     5,   259,   369,     4,   370,   371,
      -1,   362,     5,   269,     4,   371,    -1,   362,     5,   270,
       4,   371,    -1,   362,     5,   301,     5,   370,   371,    -1,
     362,     5,    14,     5,   371,    -1,   362,     5,    15,     5,
     371,    -1,   362,     5,    61,     5,   371,    -1,   362,     5,
     190,   370,   371,    -1,   362,     5,     5,   267,   370,   371,
      -1,   362,     5,   191,   370,   371,    -1,   362,     5,   259,
     369,     4,   370,   371,    -1,   362,     5,   274,   369,     4,
       4,   370,   371,    -1,   362,     5,   269,     4,   371,    -1,
     362,     5,   270,     4,   371,    -1,   362,     5,   301,     5,
     370,   371,    -1,     5,    14,     5,    -1,     5,    15,     5,
      -1,     5,    61,     5,    -1,     5,   190,   370,    -1,     5,
     191,   370,    -1,     5,   259,   369,     4,   370,    -1,     5,
     269,     4,    -1,     5,   270,     4,    -1,     5,   301,     5,
     370,    -1,     5,    14,     5,    -1,     5,    15,     5,    -1,
       5,    61,     5,    -1,     5,   190,   370,    -1,     5,     5,
     267,   370,    -1,     5,   191,   370,    -1,     5,   259,   369,
       4,   370,    -1,     5,   274,   369,     4,     4,   370,    -1,
       5,   269,     4,    -1,     5,   270,     4,    -1,     5,   301,
       5,   370,    -1,     5,    14,     5,    -1,     5,    15,     5,
      -1,     5,    61,     5,    -1,     5,   190,   370,    -1,     5,
     191,   370,    -1,     5,   259,   369,     4,   370,    -1,     5,
     269,     4,    -1,     5,   270,     4,    -1,     5,   301,     5,
     370,    -1,     5,    14,     5,   371,    -1,     5,    61,     5,
     371,    -1,     5,   190,   371,    -1,     5,   259,   369,     4,
     371,    -1,     5,   269,     4,   371,    -1,     5,   301,     5,
     371,    -1,     5,     5,    -1,   266,     5,     5,    -1,    93,
       4,     4,     4,     4,     4,    -1,   187,     4,     4,     4,
       4,     4,    -1,   111,    -1,   228,    -1,   353,    -1,   139,
     353,    -1,    88,   353,    -1,    66,     5,    -1,     5,     4,
       4,    -1,   298,   351,   351,    -1,   344,   351,    -1,     5,
       5,   362,   366,     5,     5,   362,   366,   351,   362,   368,
       5,    -1,    60,   492,    -1,    66,     5,    -1,    80,    -1,
      73,   497,     5,    -1,    73,   497,   301,     5,    -1,    75,
      99,    -1,    -1,    83,   490,   493,    -1,    89,    -1,    99,
      -1,    99,    17,    -1,   105,   496,    -1,   114,     4,    -1,
     130,     5,    -1,   150,    17,    -1,   150,   210,   351,   351,
      -1,   150,   290,   351,   351,    -1,     4,    20,   374,   353,
      -1,     4,    21,   356,    -1,     4,    21,   356,   363,    -1,
       4,    21,   356,   361,   366,    -1,     4,    22,   236,   351,
     351,     4,   363,    -1,     4,    22,   236,   351,   351,     4,
     361,   368,    -1,     4,    22,   236,     5,   361,   368,    -1,
       4,    48,   121,   353,    -1,     4,    49,   236,   351,   351,
     351,     4,   363,    -1,     4,    49,   236,   351,   351,   351,
       4,   361,   368,    -1,     4,    49,   236,     5,   361,   368,
      -1,     4,    48,   236,   351,   351,   363,    -1,     4,    48,
     236,   351,   351,   361,   368,    -1,     4,    52,   105,   356,
     356,     4,   351,   351,   351,     4,    -1,     4,    52,   105,
     356,   356,     4,   351,   351,   351,     4,   363,    -1,     4,
      52,   105,   356,   356,     4,   351,   351,   351,     4,   361,
     366,    -1,     4,    52,   105,     5,     5,   361,   366,   361,
     368,    -1,     4,    55,   491,     5,     5,    -1,     4,    62,
     121,   353,    -1,     4,    62,   236,   351,   363,    -1,     4,
      62,   236,   351,   361,   368,    -1,     4,    66,     5,    -1,
       4,    74,    27,   353,   353,    -1,     4,    74,   167,     5,
       5,    -1,     4,    74,   236,   351,   363,    -1,     4,    74,
     236,   351,   361,   368,    -1,     4,    74,   279,   361,   366,
      -1,     4,    75,   138,   353,    -1,     4,    82,   105,   356,
     356,     4,   351,   351,     4,    -1,     4,    82,   105,   356,
     356,     4,   351,   351,     4,   363,    -1,     4,    82,   105,
     356,   356,     4,   351,   351,     4,   361,   366,    -1,     4,
      82,   105,     5,     5,   361,   366,   361,   368,    -1,     4,
      83,    22,   236,   351,   351,    -1,     4,    83,    49,   236,
     351,   351,    -1,     4,    83,    52,    21,   351,   351,    -1,
       4,    83,    52,   236,   351,   351,    -1,     4,    83,   110,
     236,   351,   351,    -1,     4,    83,   113,    21,   351,   351,
      -1,     4,    83,   113,   236,   351,   351,    -1,     4,    83,
      82,    21,   351,   351,    -1,     4,    83,    82,   236,   351,
     351,    -1,     4,    83,   225,   305,     4,   351,   351,    -1,
       4,    83,   254,   305,     4,   351,   351,    -1,     4,    99,
      -1,     4,    99,    22,     4,    -1,     4,    99,    49,     4,
      -1,     4,    99,    52,     4,    -1,     4,    99,   110,     4,
      -1,     4,    99,    55,   491,     5,    -1,     4,    99,   113,
       4,    -1,     4,    99,    82,     4,    -1,     4,    99,   225,
     305,     4,    -1,     4,    99,   254,   305,     4,    -1,     4,
      99,   281,    -1,     4,    99,   281,     5,    -1,     4,    99,
     281,     4,    -1,     4,   105,    40,     4,    -1,     4,   109,
     121,   353,    -1,     4,   109,   236,   351,   351,   363,    -1,
       4,   109,   236,   351,   351,   361,   368,    -1,     4,   110,
     236,   351,   351,   351,     4,   363,    -1,     4,   110,   236,
     351,   351,   351,     4,   361,   368,    -1,     4,   110,   236,
       5,   361,   368,    -1,     4,   113,   105,   356,   356,     4,
     351,   351,   351,     4,    -1,     4,   113,   105,   356,   356,
       4,   351,   351,   351,     4,   363,    -1,     4,   113,   105,
     356,   356,     4,   351,   351,   351,     4,   361,   366,    -1,
       4,   113,   105,     5,     5,   361,   366,   361,   368,    -1,
       4,   130,     5,    -1,     4,   150,    -1,     4,   150,   210,
      -1,     4,   172,    27,   353,   353,    -1,     4,   172,   223,
     363,   360,   360,    -1,     4,   172,   223,   361,   366,   360,
     360,    -1,     4,   195,   351,   351,    -1,     4,   195,   132,
      -1,     4,   195,    36,    -1,     4,   195,   289,   363,   351,
     351,    -1,     4,   195,   289,   361,   366,   360,    -1,     4,
     225,   240,   351,   351,   363,    -1,     4,   225,   240,   351,
     351,   361,   368,    -1,     4,   254,   240,   351,   351,   363,
      -1,     4,   254,   240,   351,   351,   361,   368,    -1,     4,
     223,   258,   372,    -1,     4,   223,   265,     4,    -1,     4,
     225,   121,   353,    -1,     4,   230,   363,   360,   360,   351,
      -1,     4,   230,   361,   366,   360,   360,   351,   361,   368,
      -1,     4,   231,   510,   353,    -1,     4,   244,    40,    -1,
       4,   245,   131,     5,    -1,     4,   245,   223,   363,   360,
     360,    -1,     4,   245,   223,   361,   366,   360,   360,    -1,
       4,   245,   279,   361,   366,   361,   368,    -1,     4,   255,
      -1,     4,   255,   210,    -1,     4,   281,     5,    -1,     4,
     283,     5,    -1,     4,   283,   244,   353,    -1,     4,   295,
      -1,     4,   297,    -1,     4,   303,    27,   353,    -1,     4,
     303,   223,   363,   360,   351,   356,    -1,     4,   303,   223,
     361,   366,   360,   361,   368,   351,   356,    -1,     4,   337,
       4,    -1,   165,    -1,   165,   351,   351,    -1,   174,   505,
      -1,   175,   506,    -1,   195,   507,    -1,   229,   353,    -1,
     231,   510,   353,    -1,   231,   510,   353,   351,   351,    -1,
     244,    40,   351,   351,    -1,   244,   194,   351,   351,     4,
      -1,   244,   111,    -1,   249,     5,   497,   361,   366,   367,
     353,    -1,   249,   282,     5,    -1,   255,   514,    -1,   262,
     515,    -1,     5,    66,     5,    -1,     5,    80,    -1,     5,
      99,    -1,     5,    89,    -1,     5,   130,     5,    -1,     5,
     150,    -1,     5,   150,   210,    -1,     5,   195,   351,   351,
      -1,     5,   195,   132,    -1,     5,   195,    36,    -1,     5,
     195,   289,   363,   360,    -1,     5,   195,   289,   361,   366,
     360,    -1,     5,   231,   510,   353,    -1,     5,   255,    -1,
       5,   255,   210,    -1,     5,   295,    -1,     5,   297,    -1,
     281,   105,     5,     5,    -1,   281,    99,     5,    -1,   281,
      99,    17,    -1,   281,     5,    -1,   281,   298,     5,    -1,
     216,    -1,   216,   361,    -1,   294,    -1,   295,    17,    -1,
     297,    17,    -1,   337,     4,    -1,   255,    -1,   297,    -1,
     150,    -1,   295,    -1,    40,   195,    -1,   195,    -1,   111,
     195,    -1,    40,   105,    -1,   105,    -1,   111,   105,    -1,
      40,   244,    -1,   244,    -1,   111,   244,    -1,    99,    -1,
     283,    -1,    66,    -1,   337,    -1,   231,    -1,   130,    -1,
     165,    -1,   298,    -1,    -1,     4,    -1,    30,   353,    -1,
     236,   351,    -1,   161,     4,    -1,   211,     4,   351,    -1,
      62,   351,   351,   351,   511,    -1,   109,   351,   351,   351,
     351,   355,   511,    -1,    48,   351,   351,   351,   351,   355,
     511,    -1,   225,   351,   351,   351,   351,   511,    -1,   254,
     351,   351,   351,   351,   511,    -1,   172,   351,   351,   351,
     351,   511,    -1,   303,   351,   351,   351,   351,   511,    -1,
     283,   351,   351,   355,   511,    -1,    62,   223,   351,   351,
     373,   511,    -1,    48,   223,   351,   351,   373,   511,    -1,
     102,   223,   351,   351,   373,   511,    -1,    85,   223,   351,
     351,   373,   511,    -1,   347,   223,   351,   351,   373,   511,
      -1,    27,   223,   351,   351,   373,   511,    -1,    51,   223,
     351,   351,   373,   511,    -1,   245,   351,   351,   351,   351,
     361,   366,   361,   368,     5,   511,    -1,    74,   351,   351,
     351,   361,   366,   511,    -1,   230,   351,   351,   351,   351,
     351,   511,    -1,    22,   351,   351,   351,   351,     4,   511,
      -1,   110,   351,   351,   351,   351,   351,     4,   355,   511,
      -1,    49,   351,   351,   351,   351,   351,     4,   355,   511,
      -1,    82,   351,   351,   356,   356,     4,   351,   351,     4,
     511,    -1,   113,   351,   351,   356,   356,     4,   351,   351,
     351,     4,   355,   511,    -1,    52,   351,   351,   356,   356,
       4,   351,   351,   351,     4,   355,   511,    -1,    75,   511,
      -1,   282,   494,    -1,     5,   351,   351,    -1,   301,     5,
     351,   351,    -1,   351,   351,   301,     5,    -1,     5,   361,
     366,   360,    -1,     4,     4,    -1,    40,   351,   351,     4,
      -1,   194,   351,   351,     4,    -1,   111,    -1,   104,    -1,
     339,    -1,    63,    -1,   248,    -1,   247,    -1,   233,    -1,
     340,    -1,    60,   499,    -1,    66,    -1,   130,    -1,   114,
      -1,   143,   351,   351,    -1,   155,   351,   351,    -1,   149,
      20,    82,   361,    -1,   149,    20,   152,     5,     5,     4,
      -1,   149,    20,   221,     5,     5,     5,     5,   361,   366,
     375,    -1,   149,    20,   222,     5,     5,   361,   375,    -1,
     149,    20,   235,     5,     5,     5,   361,    -1,   149,    20,
     275,   361,   366,    -1,     4,    20,    82,   361,    -1,     4,
      20,   152,     5,     5,     4,    -1,     4,    20,   221,     5,
       5,     5,     5,   361,   366,   375,    -1,     4,    20,   222,
       5,     5,   361,   375,    -1,     4,    20,   235,     5,     5,
       5,   361,    -1,     4,    20,   275,   361,   366,    -1,   155,
      17,    -1,     4,    21,    -1,     4,    21,   363,    -1,     4,
      21,   361,   366,    -1,     4,    22,   236,   361,   368,    -1,
       4,    48,   121,    -1,     4,    49,   236,   361,   368,    -1,
       4,    48,   236,   361,   368,    -1,     4,    52,    21,    -1,
       4,    52,    21,   363,    -1,     4,    52,    21,   361,   366,
      -1,     4,    52,   236,   361,   368,    -1,     4,    59,   361,
     366,   367,    -1,     4,    62,   121,    -1,     4,    62,   236,
     361,   368,    -1,     4,    66,    -1,     4,    74,    27,    -1,
       4,    74,   167,    -1,     4,    74,   236,   361,   368,    -1,
       4,    74,   279,    -1,     4,    75,   138,    -1,     4,    82,
      21,    -1,     4,    82,    21,   363,    -1,     4,    82,    21,
     361,   366,    -1,     4,    82,   236,   361,   368,    -1,     4,
     109,   121,    -1,     4,   109,   236,   361,   368,    -1,     4,
     110,   236,   361,   368,    -1,     4,   113,    21,    -1,     4,
     113,    21,   363,    -1,     4,   113,    21,   361,   366,    -1,
       4,   113,   236,   361,   368,    -1,     4,   130,    -1,     4,
     150,    -1,     4,   172,    27,    -1,     4,   172,   168,   361,
     368,    -1,     4,   172,   223,   361,   366,   367,    -1,     4,
     181,   168,   351,   361,   368,    -1,     4,   225,   121,    -1,
       4,   223,   258,    -1,     4,   223,   265,    -1,     4,   230,
     223,   361,   366,   367,    -1,     4,   230,   168,   361,   368,
      -1,     4,   230,   287,   361,   368,    -1,     4,   231,    -1,
       4,   231,   510,    -1,     4,   245,   131,    -1,     4,   245,
     168,   361,   368,    -1,     4,   245,   223,   361,   366,   367,
      -1,     4,   245,   279,    -1,     4,   255,    -1,     4,   281,
      -1,     4,   281,     4,    -1,     4,   283,    -1,     4,   283,
     244,    -1,     4,   293,    -1,     4,   303,    27,    -1,     4,
     303,   168,   361,   368,    -1,     4,   303,   223,   361,   366,
     367,    -1,     4,   337,    -1,   150,   500,    -1,   150,   206,
      -1,   206,    -1,   225,   254,   351,   351,    -1,   254,   254,
     351,   351,    -1,   229,    -1,   231,   510,    -1,   255,   501,
      -1,   255,   206,    -1,   262,   502,    -1,     5,    66,    -1,
       5,   130,    -1,     5,   155,    -1,     5,   231,   510,    -1,
       5,   281,    -1,     5,   281,   206,    -1,   281,    17,    -1,
     281,    98,   196,    -1,   337,    -1,    30,    -1,   236,    -1,
     161,    -1,   211,    -1,    -1,   351,   351,    -1,    -1,   351,
     351,    -1,    -1,   283,    -1,    -1,    -1,   224,    -1,   237,
      -1,   299,    -1,    57,    -1,    20,    -1,   497,   361,   366,
     367,   353,   512,   518,    -1,   255,   497,   361,   366,   367,
     353,   512,   518,    -1,   497,     5,    -1,   497,     5,   361,
     366,    -1,   497,     4,    -1,   497,     4,   361,   366,    -1,
     124,     5,     5,   495,     4,     5,    -1,   351,   351,    -1,
     132,    -1,    36,    -1,    40,   351,   351,    -1,   194,   351,
     351,    -1,   111,    -1,   289,   363,   360,    -1,   289,   361,
     366,   360,    -1,   508,   509,    -1,   509,    -1,   510,   348,
     353,    -1,    66,   348,     5,    -1,    92,   348,     4,     4,
      -1,   337,   348,     4,    -1,   130,   348,     5,    -1,   283,
     348,     5,    -1,   521,    -1,   522,    -1,   203,    -1,   255,
      -1,   150,    -1,    91,    -1,   126,    -1,   105,    -1,   195,
      -1,   244,    -1,    99,    -1,   158,    -1,   271,    -1,   503,
      -1,   503,   508,    -1,    -1,    -1,   513,   516,    -1,    17,
      -1,   210,   351,   351,    -1,   290,    -1,   290,   351,   351,
      -1,   353,    -1,   283,   353,    -1,   516,   517,    -1,   517,
      -1,   510,   348,   353,    -1,    -1,    -1,   519,   520,    -1,
     520,   521,    -1,   521,    -1,   281,   348,     5,    -1,    55,
     348,   491,     5,     5,    -1,    64,    -1,    66,     5,    -1,
     182,     4,    -1,   288,   351,    -1,   347,    -1,   345,    -1,
     340,    -1,   203,    -1,   351,   351,   351,   351,    -1,   351,
     351,    -1,   363,   351,   351,    -1,   361,   366,   360,    -1,
     289,   526,    -1,    39,   351,   351,    -1,   194,   527,    -1,
     229,   353,    -1,   351,   351,    -1,   363,   351,   351,    -1,
     361,   366,   360,    -1,    40,   351,   351,    -1,   351,   351,
      -1,   111,   351,   351,    -1,   353,    -1,   308,   362,   366,
      -1,     5,     4,     4,    -1,   298,    -1,    70,   530,    -1,
     169,     4,    -1,   241,     4,    -1,   250,   351,    -1,    54,
      -1,   140,    -1,   242,    -1,    90,    -1,   150,   532,    -1,
     255,   533,    -1,    40,   351,   351,    -1,   194,   351,   351,
      -1,   111,    -1,   260,   111,    -1,    40,   351,   351,    -1,
     194,   351,   351,    -1,   111,    -1,   260,   111,    -1,   189,
      -1,    13,    -1,   203,    -1,    34,    -1,   107,    -1,    61,
       5,    -1,   279,   361,    -1,   302,     4,     4,     4,    -1,
     351,    -1,   351,    97,    -1,   194,   538,    -1,   289,   351,
      -1,   289,   351,    97,    -1,    40,    -1,   351,    -1,   111,
      -1,    26,   540,    -1,   124,   542,    -1,   205,   552,    -1,
     112,   553,    -1,   218,     5,    -1,   120,     5,   376,    -1,
      61,     5,   376,    -1,   269,     4,   376,    -1,   242,    87,
     541,    -1,   120,     5,   376,    -1,    61,     5,   376,    -1,
     269,     4,   376,    -1,   543,    -1,   157,   543,    -1,   280,
     544,    -1,   266,   545,    -1,   117,    87,   546,    -1,   192,
     547,    -1,   242,   157,   549,    -1,   242,    87,   550,    -1,
     239,   551,    -1,   120,     5,    -1,    61,     5,    -1,   269,
       4,    -1,   120,     5,    -1,    61,     5,    -1,   269,     4,
      -1,   120,     5,    -1,    61,     5,    -1,   269,     4,    -1,
     120,     5,    -1,    61,     5,    -1,   269,     4,    -1,   157,
     548,    -1,   120,     5,     4,    -1,    61,     5,     4,    -1,
     269,     4,     4,    -1,   120,     5,    -1,    61,     5,    -1,
     269,     4,    -1,   120,     5,    -1,    61,     5,    -1,   269,
       4,    -1,   120,     5,    -1,    61,     5,    -1,   269,     4,
      -1,   120,     5,    -1,    61,     5,    -1,   269,     4,    -1,
     120,     5,   376,    -1,    61,     5,   376,    -1,   269,     4,
     376,    -1,   120,     5,     5,   376,    -1,   555,     4,     4,
     351,   351,   356,    -1,    99,    -1,    50,    -1,   291,    -1,
     136,    -1,   108,    -1,    -1,     4,   351,   351,   351,   351,
      -1,   204,    -1,   204,     4,   351,   351,   351,   351,    -1,
     124,   266,   557,    -1,     4,    -1,   351,   361,    -1,     4,
       4,    -1,     4,   351,   361,    -1,   351,   351,    -1,   289,
     351,   351,    -1,   362,   366,   367,    -1,    16,   562,    -1,
     240,     4,    -1,   238,   561,    -1,    23,   560,    -1,     4,
       4,    -1,     4,     5,    -1,   283,     4,     5,    -1,     4,
       4,    -1,     4,     5,    -1,   283,     4,     5,    -1,     4,
      -1,     4,   362,   366,    -1,     4,     6,   362,   366,    -1,
     228,    -1,   351,   351,    -1,   351,   351,    12,   351,   351,
      -1,   351,   351,    12,   363,   351,   351,    -1,   351,   351,
      12,   361,   366,   360,    -1,   289,   565,    -1,   123,    -1,
     123,   351,    -1,   351,   351,    -1,   351,   351,    12,   351,
     351,    -1,   351,   351,    12,   363,   351,   351,    -1,   351,
     351,    12,   361,   366,   360,    -1
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
     752,   753,   757,   758,   761,   763,   765,   767,   769,   771,
     773,   775,   777,   781,   782,   783,   784,   785,   786,   787,
     788,   791,   792,   795,   796,   797,   799,   801,   802,   803,
     805,   809,   810,   813,   814,   816,   819,   821,   827,   828,
     829,   832,   833,   834,   837,   838,   839,   840,   841,   842,
     848,   849,   852,   853,   854,   855,   856,   859,   860,   861,
     864,   865,   870,   875,   882,   884,   886,   887,   888,   891,
     893,   896,   897,   900,   901,   902,   903,   904,   907,   909,
     911,   916,   921,   924,   925,   928,   929,   930,   937,   938,
     939,   940,   943,   944,   947,   948,   951,   952,   955,   957,
     961,   962,   965,   967,   968,   969,   970,   973,   974,   975,
     976,   977,   980,   982,   984,   985,   987,   989,   991,   993,
     997,  1000,  1001,  1002,  1005,  1008,  1009,  1010,  1011,  1012,
    1013,  1014,  1015,  1016,  1017,  1018,  1019,  1020,  1021,  1022,
    1023,  1024,  1025,  1026,  1028,  1029,  1030,  1031,  1032,  1033,
    1034,  1035,  1036,  1037,  1039,  1040,  1041,  1042,  1043,  1044,
    1045,  1047,  1049,  1050,  1053,  1054,  1055,  1056,  1057,  1058,
    1059,  1060,  1063,  1064,  1065,  1068,  1071,  1072,  1074,  1076,
    1077,  1078,  1079,  1080,  1081,  1088,  1089,  1092,  1093,  1094,
    1097,  1098,  1101,  1104,  1105,  1107,  1111,  1112,  1113,  1116,
    1120,  1122,  1123,  1124,  1125,  1126,  1127,  1128,  1129,  1130,
    1133,  1134,  1135,  1138,  1139,  1142,  1144,  1150,  1154,  1156,
    1158,  1161,  1162,  1164,  1167,  1170,  1171,  1175,  1177,  1180,
    1185,  1186,  1187,  1191,  1192,  1193,  1196,  1197,  1198,  1201,
    1202,  1204,  1205,  1206,  1207,  1208,  1209,  1210,  1211,  1212,
    1213,  1215,  1216,  1219,  1220,  1223,  1224,  1225,  1226,  1229,
    1230,  1233,  1235,  1238,  1242,  1243,  1244,  1245,  1248,  1249,
    1250,  1253,  1254,  1255,  1258,  1261,  1262,  1263,  1266,  1267,
    1268,  1269,  1270,  1271,  1274,  1275,  1276,  1277,  1278,  1279,
    1280,  1283,  1284,  1287,  1288,  1291,  1292,  1295,  1296,  1299,
    1300,  1301,  1304,  1305,  1308,  1309,  1312,  1315,  1323,  1324,
    1327,  1328,  1329,  1330,  1331,  1332,  1333,  1334,  1335,  1336,
    1337,  1338,  1339,  1340,  1341,  1342,  1345,  1348,  1349,  1352,
    1353,  1354,  1355,  1358,  1359,  1360,  1361,  1364,  1365,  1366,
    1367,  1368,  1371,  1372,  1373,  1374,  1375,  1376,  1378,  1379,
    1384,  1385,  1388,  1390,  1392,  1395,  1396,  1397,  1398,  1399,
    1400,  1403,  1405,  1407,  1409,  1410,  1412,  1414,  1416,  1418,
    1420,  1423,  1424,  1425,  1426,  1427,  1428,  1430,  1431,  1432,
    1435,  1438,  1440,  1442,  1444,  1446,  1448,  1450,  1452,  1455,
    1457,  1459,  1461,  1462,  1463,  1464,  1465,  1468,  1469,  1470,
    1471,  1472,  1473,  1474,  1476,  1478,  1479,  1480,  1483,  1484,
    1485,  1486,  1487,  1488,  1490,  1491,  1492,  1495,  1496,  1497,
    1498,  1499,  1502,  1505,  1508,  1511,  1514,  1517,  1520,  1523,
    1526,  1531,  1534,  1537,  1540,  1543,  1546,  1549,  1552,  1555,
    1558,  1561,  1566,  1569,  1572,  1575,  1578,  1581,  1584,  1587,
    1590,  1595,  1598,  1601,  1604,  1607,  1610,  1613,  1616,  1619,
    1622,  1625,  1630,  1632,  1633,  1634,  1635,  1636,  1638,  1639,
    1640,  1642,  1643,  1644,  1645,  1646,  1647,  1648,  1650,  1652,
    1653,  1654,  1657,  1658,  1659,  1660,  1661,  1662,  1664,  1665,
    1666,  1669,  1671,  1673,  1674,  1676,  1678,  1682,  1683,  1686,
    1687,  1688,  1691,  1698,  1699,  1700,  1701,  1702,  1703,  1704,
    1707,  1715,  1716,  1717,  1718,  1720,  1722,  1723,  1723,  1724,
    1725,  1726,  1727,  1728,  1729,  1731,  1732,  1734,  1737,  1740,
    1741,  1742,  1745,  1747,  1750,  1753,  1754,  1757,  1761,  1764,
    1766,  1769,  1772,  1776,  1781,  1786,  1788,  1789,  1791,  1793,
    1794,  1796,  1798,  1800,  1802,  1804,  1805,  1807,  1809,  1813,
    1818,  1820,  1822,  1824,  1826,  1828,  1830,  1832,  1834,  1836,
    1838,  1841,  1842,  1844,  1846,  1847,  1849,  1851,  1852,  1853,
    1855,  1857,  1858,  1859,  1861,  1862,  1863,  1865,  1868,  1872,
    1876,  1879,  1882,  1886,  1891,  1897,  1898,  1899,  1901,  1902,
    1904,  1908,  1910,  1911,  1912,  1914,  1917,  1919,  1922,  1924,
    1927,  1929,  1931,  1932,  1935,  1940,  1943,  1944,  1945,  1948,
    1951,  1955,  1956,  1958,  1959,  1960,  1962,  1963,  1965,  1966,
    1968,  1973,  1975,  1976,  1978,  1979,  1980,  1981,  1982,  1983,
    1985,  1987,  1989,  1990,  1992,  1993,  1995,  1997,  1998,  1999,
    2000,  2001,  2002,  2003,  2004,  2005,  2006,  2007,  2009,  2011,
    2013,  2014,  2015,  2016,  2018,  2019,  2020,  2021,  2022,  2024,
    2025,  2026,  2027,  2028,  2029,  2032,  2033,  2034,  2035,  2036,
    2037,  2038,  2039,  2040,  2041,  2042,  2043,  2044,  2045,  2046,
    2047,  2048,  2049,  2050,  2051,  2052,  2055,  2056,  2057,  2058,
    2059,  2060,  2068,  2075,  2084,  2093,  2100,  2107,  2115,  2123,
    2130,  2135,  2140,  2145,  2150,  2155,  2160,  2166,  2176,  2186,
    2196,  2203,  2213,  2223,  2232,  2244,  2257,  2262,  2265,  2267,
    2269,  2274,  2278,  2281,  2283,  2285,  2288,  2289,  2290,  2291,
    2292,  2293,  2294,  2297,  2298,  2299,  2300,  2301,  2302,  2304,
    2306,  2308,  2310,  2312,  2314,  2317,  2319,  2321,  2323,  2325,
    2327,  2330,  2331,  2332,  2333,  2335,  2338,  2339,  2341,  2343,
    2344,  2345,  2347,  2350,  2353,  2354,  2356,  2357,  2358,  2359,
    2361,  2362,  2363,  2364,  2365,  2367,  2369,  2370,  2372,  2375,
    2376,  2377,  2379,  2381,  2382,  2383,  2384,  2386,  2389,  2393,
    2394,  2395,  2396,  2399,  2402,  2404,  2405,  2406,  2407,  2409,
    2412,  2413,  2415,  2416,  2417,  2418,  2419,  2421,  2422,  2424,
    2427,  2428,  2429,  2430,  2431,  2433,  2435,  2436,  2437,  2438,
    2440,  2442,  2443,  2444,  2445,  2446,  2447,  2449,  2450,  2452,
    2455,  2456,  2457,  2458,  2461,  2462,  2465,  2466,  2469,  2470,
    2473,  2486,  2487,  2491,  2492,  2496,  2497,  2500,  2505,  2512,
    2514,  2517,  2519,  2522,  2526,  2527,  2528,  2529,  2530,  2531,
    2532,  2534,  2538,  2539,  2542,  2543,  2544,  2545,  2546,  2547,
    2548,  2549,  2552,  2553,  2554,  2555,  2556,  2557,  2558,  2559,
    2560,  2561,  2562,  2565,  2566,  2569,  2570,  2570,  2573,  2574,
    2575,  2576,  2579,  2580,  2583,  2584,  2587,  2591,  2592,  2592,
    2595,  2596,  2599,  2602,  2606,  2607,  2608,  2609,  2612,  2613,
    2614,  2615,  2618,  2620,  2621,  2626,  2628,  2629,  2630,  2631,
    2634,  2635,  2640,  2644,  2645,  2646,  2649,  2650,  2655,  2656,
    2659,  2661,  2662,  2663,  2668,  2669,  2670,  2671,  2674,  2675,
    2678,  2680,  2682,  2683,  2686,  2688,  2689,  2690,  2693,  2694,
    2697,  2698,  2699,  2702,  2703,  2704,  2707,  2708,  2709,  2710,
    2711,  2714,  2715,  2716,  2719,  2720,  2721,  2722,  2723,  2726,
    2728,  2730,  2732,  2735,  2737,  2739,  2742,  2743,  2744,  2745,
    2746,  2747,  2748,  2749,  2750,  2753,  2754,  2755,  2758,  2759,
    2760,  2763,  2764,  2765,  2768,  2769,  2770,  2773,  2774,  2775,
    2776,  2779,  2780,  2781,  2784,  2785,  2786,  2789,  2790,  2791,
    2794,  2795,  2796,  2799,  2801,  2803,  2807,  2811,  2813,  2816,
    2817,  2818,  2819,  2822,  2823,  2825,  2826,  2828,  2831,  2832,
    2833,  2834,  2837,  2838,  2841,  2843,  2844,  2845,  2846,  2849,
    2850,  2851,  2854,  2855,  2856,  2859,  2860,  2865,  2869,  2876,
    2877,  2879,  2884,  2886,  2889,  2890,  2891,  2892,  2894,  2899
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
     381,   381,   382,   382,   383,   383,   383,   383,   383,   383,
     383,   383,   383,   384,   384,   384,   384,   384,   384,   384,
     384,   385,   385,   386,   386,   386,   386,   386,   386,   386,
     386,   387,   387,   388,   388,   388,   388,   388,   389,   389,
     389,   390,   390,   390,   391,   391,   391,   391,   391,   391,
     392,   392,   393,   393,   393,   393,   393,   394,   394,   394,
     395,   395,   395,   395,   396,   396,   396,   396,   396,   397,
     397,   398,   398,   399,   399,   399,   399,   399,   400,   400,
     400,   400,   400,   401,   401,   402,   402,   402,   403,   403,
     403,   403,   404,   404,   405,   405,   406,   406,   407,   407,
     408,   408,   408,   408,   408,   408,   408,   409,   409,   409,
     409,   409,   410,   410,   410,   410,   410,   410,   410,   410,
     411,   412,   412,   412,   413,   414,   414,   414,   414,   414,
     414,   414,   414,   414,   414,   414,   414,   414,   414,   414,
     414,   414,   414,   414,   414,   414,   414,   414,   414,   414,
     414,   414,   414,   414,   414,   414,   414,   414,   414,   414,
     414,   414,   414,   414,   415,   415,   415,   415,   415,   415,
     415,   415,   416,   416,   416,   417,   418,   418,   418,   418,
     418,   418,   418,   418,   418,   419,   419,   420,   420,   420,
     421,   421,   422,   423,   423,   423,   424,   424,   424,   425,
     426,   426,   426,   426,   426,   426,   426,   426,   426,   426,
     427,   427,   427,   428,   428,   429,   429,   429,   430,   430,
     430,   431,   431,   431,   432,   433,   433,   434,   434,   434,
     435,   435,   435,   436,   436,   436,   437,   437,   437,   438,
     438,   438,   438,   438,   438,   438,   438,   438,   438,   438,
     438,   438,   438,   439,   439,   440,   440,   440,   440,   441,
     441,   442,   442,   442,   443,   443,   443,   443,   444,   444,
     444,   445,   445,   445,   446,   447,   447,   447,   448,   448,
     448,   448,   448,   448,   449,   449,   449,   449,   449,   449,
     449,   450,   450,   451,   451,   452,   452,   453,   453,   454,
     454,   454,   455,   455,   456,   456,   457,   457,   458,   458,
     459,   459,   459,   459,   459,   459,   459,   459,   459,   459,
     459,   459,   459,   459,   459,   459,   460,   461,   461,   462,
     462,   462,   462,   463,   463,   463,   463,   464,   464,   464,
     464,   464,   465,   465,   465,   465,   465,   465,   465,   465,
     466,   466,   467,   467,   467,   468,   468,   468,   468,   468,
     468,   469,   469,   469,   469,   469,   469,   469,   469,   469,
     469,   470,   470,   470,   470,   470,   470,   470,   470,   470,
     471,   472,   472,   472,   472,   472,   472,   472,   472,   472,
     472,   472,   472,   472,   472,   472,   472,   473,   473,   473,
     473,   473,   473,   473,   473,   473,   473,   473,   474,   474,
     474,   474,   474,   474,   474,   474,   474,   475,   475,   475,
     475,   475,   476,   476,   476,   476,   476,   476,   476,   476,
     476,   477,   477,   477,   477,   477,   477,   477,   477,   477,
     477,   477,   478,   478,   478,   478,   478,   478,   478,   478,
     478,   479,   479,   479,   479,   479,   479,   479,   479,   479,
     479,   479,   480,   480,   480,   480,   480,   480,   480,   480,
     480,   481,   481,   481,   481,   481,   481,   481,   481,   481,
     481,   481,   482,   482,   482,   482,   482,   482,   482,   482,
     482,   483,   483,   483,   483,   483,   483,   484,   484,   485,
     485,   485,   486,   487,   487,   487,   487,   487,   487,   487,
     488,   489,   489,   489,   489,   489,   489,   490,   489,   489,
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
     489,   489,   489,   489,   489,   489,   489,   489,   489,   489,
     489,   489,   489,   489,   489,   491,   491,   491,   491,   491,
     491,   491,   491,   491,   491,   491,   491,   491,   491,   491,
     491,   491,   491,   491,   491,   491,   492,   492,   492,   492,
     492,   492,   493,   493,   493,   493,   493,   493,   493,   493,
     493,   493,   493,   493,   493,   493,   493,   493,   493,   493,
     493,   493,   493,   493,   493,   493,   493,   493,   494,   494,
     494,   494,   495,   496,   496,   496,   497,   497,   497,   497,
     497,   497,   497,   498,   498,   498,   498,   498,   498,   498,
     498,   498,   498,   498,   498,   498,   498,   498,   498,   498,
     498,   498,   498,   498,   498,   498,   498,   498,   498,   498,
     498,   498,   498,   498,   498,   498,   498,   498,   498,   498,
     498,   498,   498,   498,   498,   498,   498,   498,   498,   498,
     498,   498,   498,   498,   498,   498,   498,   498,   498,   498,
     498,   498,   498,   498,   498,   498,   498,   498,   498,   498,
     498,   498,   498,   498,   498,   498,   498,   498,   498,   498,
     498,   498,   498,   498,   498,   498,   498,   498,   498,   498,
     498,   498,   498,   498,   498,   498,   498,   498,   498,   498,
     499,   499,   499,   499,   500,   500,   501,   501,   502,   502,
     503,   504,   504,   504,   504,   504,   504,   505,   505,   506,
     506,   506,   506,   506,   507,   507,   507,   507,   507,   507,
     507,   507,   508,   508,   509,   509,   509,   509,   509,   509,
     509,   509,   510,   510,   510,   510,   510,   510,   510,   510,
     510,   510,   510,   511,   511,   512,   513,   512,   514,   514,
     514,   514,   515,   515,   516,   516,   517,   518,   519,   518,
     520,   520,   521,   522,   523,   523,   523,   523,   524,   524,
     524,   524,   525,   525,   525,   525,   525,   525,   525,   525,
     526,   526,   526,   527,   527,   527,   528,   528,   528,   528,
     529,   529,   529,   529,   530,   530,   530,   530,   531,   531,
     532,   532,   532,   532,   533,   533,   533,   533,   534,   534,
     535,   535,   535,   536,   536,   536,   537,   537,   537,   537,
     537,   538,   538,   538,   539,   539,   539,   539,   539,   540,
     540,   540,   540,   541,   541,   541,   542,   542,   542,   542,
     542,   542,   542,   542,   542,   543,   543,   543,   544,   544,
     544,   545,   545,   545,   546,   546,   546,   547,   547,   547,
     547,   548,   548,   548,   549,   549,   549,   550,   550,   550,
     551,   551,   551,   552,   552,   552,   553,   554,   554,   555,
     555,   555,   555,   556,   556,   556,   556,   556,   557,   557,
     557,   557,   558,   558,   559,   559,   559,   559,   559,   560,
     560,   560,   561,   561,   561,   562,   562,   562,   563,   564,
     564,   564,   564,   564,   565,   565,   565,   565,   565,   565
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
       2,     6,     1,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     4,     2,     2,     2,     3,     2,
       2,     1,     2,     1,     2,     4,     5,     2,     3,     5,
       6,     1,     1,     1,     7,    11,     8,    12,     1,     2,
       2,     1,     1,     2,     2,     2,     2,     3,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     2,
       3,     2,     2,     2,     6,    10,     1,     2,     1,     6,
      10,     1,     2,     2,     2,     2,     2,     2,    13,    13,
      12,    12,     1,     0,     1,     1,     4,     6,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     3,     4,
       0,     6,     8,     2,     3,     3,     3,     0,     3,     4,
       4,     4,     3,     3,     1,     3,     5,     4,     4,     3,
       2,     0,     1,     1,     3,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     1,
       2,     2,     4,     9,     2,     2,     2,     1,     3,     2,
       2,     1,     2,     8,     2,     1,     2,     1,     2,     1,
       4,     9,     2,     1,     1,     1,     1,     2,     1,     1,
       2,     1,     0,     2,     2,     1,     0,     2,     2,     1,
       1,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       0,     1,     2,     1,     4,     5,     0,     2,     1,     5,
       2,     2,     1,     1,     1,     2,     1,     2,     1,     1,
       0,     1,     1,     0,     1,     5,     6,     4,     3,     6,
       2,     1,     3,     1,     1,     1,     3,     6,     7,     5,
       1,     1,     4,     5,     1,     3,     0,     1,     2,     1,
       4,     1,     2,     1,     2,     3,     2,     1,     2,     1,
       4,     2,     1,     1,     3,     1,     2,     3,     2,     0,
       1,     1,     4,     2,     0,     1,     1,     2,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     2,     1,     2,     2,     2,     2,     1,     1,
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
       4,     4,     4,     6,     9,     4,     3,     4,     6,     7,
       7,     2,     3,     3,     3,     4,     2,     2,     4,     7,
      10,     3,     1,     3,     2,     2,     2,     2,     3,     5,
       4,     5,     2,     7,     3,     2,     2,     3,     2,     2,
       2,     3,     2,     3,     4,     3,     3,     5,     6,     4,
       2,     3,     2,     2,     4,     3,     3,     2,     3,     1,
       2,     1,     2,     2,     2,     1,     1,     1,     1,     2,
       1,     2,     2,     1,     2,     2,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     2,     2,
       2,     3,     5,     7,     7,     6,     6,     6,     6,     5,
       6,     6,     6,     6,     6,     6,     6,    11,     7,     7,
       7,     9,     9,    10,    12,    12,     2,     2,     3,     4,
       4,     4,     2,     4,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     1,     1,     3,     3,     4,
       6,    10,     7,     7,     5,     4,     6,    10,     7,     7,
       5,     2,     2,     3,     4,     5,     3,     5,     5,     3,
       4,     5,     5,     5,     3,     5,     2,     3,     3,     5,
       3,     3,     3,     4,     5,     5,     3,     5,     5,     3,
       4,     5,     5,     2,     2,     3,     5,     6,     6,     3,
       3,     3,     6,     5,     5,     2,     3,     3,     5,     6,
       3,     2,     2,     3,     2,     3,     2,     3,     5,     6,
       2,     2,     2,     1,     4,     4,     1,     2,     2,     2,
       2,     2,     2,     2,     3,     2,     3,     2,     3,     1,
       1,     1,     1,     1,     0,     2,     0,     2,     0,     1,
       0,     0,     1,     1,     1,     1,     1,     7,     8,     2,
       4,     2,     4,     6,     2,     1,     1,     3,     3,     1,
       3,     4,     2,     1,     3,     3,     4,     3,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     0,     0,     2,     1,     3,
       1,     3,     1,     2,     2,     1,     3,     0,     0,     2,
       2,     1,     3,     5,     1,     2,     2,     2,     1,     1,
       1,     1,     4,     2,     3,     3,     2,     3,     2,     2,
       2,     3,     3,     3,     2,     3,     1,     3,     3,     1,
       2,     2,     2,     2,     1,     1,     1,     1,     2,     2,
       3,     3,     1,     2,     3,     3,     1,     2,     1,     1,
       1,     1,     1,     2,     2,     4,     1,     2,     2,     2,
       3,     1,     1,     1,     2,     2,     2,     2,     2,     3,
       3,     3,     3,     3,     3,     3,     1,     2,     2,     2,
       3,     2,     3,     3,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     3,     3,
       3,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     3,     3,     3,     4,     6,     1,     1,
       1,     1,     1,     0,     5,     1,     6,     3,     1,     2,
       2,     3,     2,     3,     3,     2,     2,     2,     2,     2,
       2,     3,     2,     2,     3,     1,     3,     4,     1,     2,
       5,     6,     6,     2,     1,     2,     2,     5,     6,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     0,     7,     8,     0,     0,     0,
       0,     0,   310,     0,     0,     0,     0,     0,     0,     0,
       0,    22,     0,     0,     0,     0,     0,     0,     0,  1061,
       0,     0,     0,     0,     0,     0,     0,  1061,    38,     0,
       0,     0,    43,     0,     0,     0,    47,  1243,    49,     0,
       0,     0,     0,     0,   212,     0,     3,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     4,    54,    55,     0,
     248,     6,     0,     0,     0,     0,     0,     0,     9,     0,
       0,   276,   278,     0,     0,    11,   135,   137,   130,   131,
     132,   136,   133,   134,   281,    12,     0,   293,     0,     0,
       0,    13,     0,     0,     0,     0,   317,     0,    14,    69,
      98,     0,   128,    97,    77,    95,     0,    74,    76,    72,
     129,    96,    73,     0,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,    70,    71,    75,   324,   143,    99,     0,    15,
       0,    16,    17,     0,     0,     0,     0,     0,     0,     0,
      57,    56,     0,     0,     0,     0,     2,     0,    18,     0,
       0,     0,   386,   400,     0,   406,     0,     0,     0,     0,
       0,     0,     0,   349,     0,   478,     0,     0,     0,     0,
       0,  1061,     0,   357,     0,   361,     0,     0,     0,   365,
       0,   367,     0,   369,     0,     0,   509,   373,    19,     0,
     515,    20,   520,     0,   537,   523,   524,   525,   526,   539,
     528,   529,   530,     0,   532,   533,     0,     0,    21,    23,
       0,   553,     0,     0,     0,   558,     0,    24,     0,     0,
       0,     0,     0,     0,     0,    26,   712,    27,     0,     0,
       0,     0,     0,     0,   713,    28,     0,    29,  1066,  1065,
    1062,  1063,  1064,     0,  1124,     0,     0,     0,    31,     0,
    1131,  1130,  1129,  1128,    33,     0,     0,     0,     0,     0,
     143,     0,    34,     0,  1149,     0,  1146,    35,     0,     0,
       0,     0,    37,    36,     0,     0,     0,     0,    40,     0,
       0,  1176,    41,     0,     0,     0,     0,     0,    42,  1239,
    1238,  1242,  1241,  1240,    44,     0,    45,     0,     0,     0,
       0,     0,   202,     0,     0,     0,    46,     0,     0,  1245,
      48,     0,     0,    50,     0,     0,     0,     0,   143,    51,
    1268,    52,     0,     0,    53,     1,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   213,     5,   231,     0,   223,
       0,     0,   225,     0,   233,   226,   230,   241,   242,   227,
     243,     0,   229,   251,   252,   250,   249,     0,     0,     0,
     256,   263,   266,   265,   264,   262,   255,   259,   260,   261,
     254,     0,     0,     0,     0,     0,   258,    10,     0,     0,
       0,   277,     0,   282,     0,   292,   283,   294,   284,   295,
     285,   306,   286,     0,     0,   287,     0,    88,    89,    90,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   313,     0,     0,     0,     0,     0,   146,   152,   144,
     145,   147,   150,   153,   149,   148,   151,     0,     0,   330,
      58,    63,    64,    65,    66,    67,    59,    60,    61,    68,
      62,     0,   335,     0,   382,   378,   374,   375,   379,   376,
     381,   336,   385,   337,   298,   390,   394,   389,   301,   300,
     299,     0,     0,   338,   401,   340,     0,   339,     0,   408,
     341,   420,   412,   423,   413,   414,   416,     0,   418,   419,
     143,   342,     0,     0,   343,     0,     0,   143,   344,   433,
     143,   431,   345,   434,   347,   143,   435,   346,     0,   143,
       0,   348,   453,     0,   451,   469,     0,     0,     0,   457,
     449,     0,   459,   474,   462,   350,   479,   480,   351,     0,
       0,     0,   444,     0,   354,   440,   441,     0,   355,   356,
       0,   481,   482,   483,   359,   360,   484,   362,     0,   485,
     486,   487,   364,   493,   488,   489,   491,   366,   499,   501,
     503,   505,   498,   500,   507,   368,     0,     0,   512,     0,
     372,   143,   514,     0,   521,   538,   522,   540,   541,   542,
     527,   543,   545,   544,   546,   531,   534,   550,     0,     0,
       0,   547,   535,     0,     0,   555,   554,     0,     0,     0,
       0,    25,     0,     0,   565,     0,   566,     0,     0,     0,
       0,     0,   567,     0,   711,     0,   568,     0,   569,     0,
       0,   570,     0,   716,   715,   714,     0,   719,     0,     0,
       0,   906,     0,     0,     0,   723,   727,   729,   730,     0,
       0,     0,     0,   842,     0,     0,     0,   879,     0,     0,
       0,     0,     0,     0,     0,   881,     0,     0,     0,    30,
    1125,  1126,  1127,    32,     0,     0,     0,     0,  1138,  1139,
       0,   143,     0,  1136,  1133,     0,     0,     0,   143,  1154,
    1157,  1155,  1156,  1150,  1151,  1152,  1153,     0,     0,    39,
    1173,  1174,     0,  1181,  1183,  1182,  1178,  1179,  1177,     0,
       0,     0,     0,  1184,     0,  1187,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1185,  1196,     0,     0,
       0,  1186,  1188,     0,  1171,  1172,  1170,   200,     0,   204,
     196,     0,   206,   197,     0,   208,   198,  1169,  1168,   199,
     201,   203,     0,     0,   195,     0,     0,     0,     0,  1252,
    1265,  1255,     0,     0,  1258,     0,     0,  1257,  1256,   154,
    1274,     0,  1273,  1269,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   232,   228,     0,   237,     0,   234,     0,
     253,   138,   141,   142,   140,   139,   267,   268,   269,   257,
     271,   273,   272,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   143,     0,   314,    94,    91,    92,    93,   143,
     316,   315,     0,     0,     0,     0,     0,     0,     0,   329,
       0,   325,   323,   322,   334,   377,     0,     0,   380,   395,
     396,   391,   392,   397,   399,   398,   393,   302,   303,   388,
     387,   403,   402,     0,   407,   421,   422,   411,   424,   417,
     415,   410,     0,     0,     0,   143,   430,   154,   154,   154,
     143,     0,     0,   143,   470,   452,   463,     0,   454,    78,
     465,     0,     0,   456,   458,   143,   475,   476,   461,     0,
       0,     0,   446,     0,     0,     0,     0,   954,   956,   955,
       0,     0,  1054,     0,  1033,     0,  1036,     0,     0,  1056,
    1058,     0,  1049,   358,     0,   490,   492,   502,   495,   504,
     496,   506,   497,   508,   494,     0,     0,   513,   510,   511,
     154,   536,   549,   548,   551,     0,   564,   552,     0,     0,
       0,     0,     0,     0,   167,   167,   161,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   164,   164,   161,     0,
       0,   161,     0,     0,     0,     0,     0,   606,   630,     0,
       0,     0,   602,     0,     0,     0,     0,   167,   161,     0,
       0,   707,     0,   717,   718,   143,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   781,
       0,     0,     0,     0,     0,   806,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   831,     0,     0,   836,   837,
       0,     0,     0,   858,   860,   859,     0,   862,     0,     0,
     870,   872,   873,   907,     0,     0,     0,     0,   721,   722,
     948,   946,   951,   950,   949,   947,   952,     0,   726,     0,
     731,     0,   945,     0,   732,   733,   734,   735,     0,     0,
       0,     0,     0,   844,     0,     0,   845,  1076,     0,  1079,
    1075,     0,     0,     0,   846,   880,   847,  1095,  1100,  1097,
    1096,  1094,  1101,  1098,  1092,  1099,  1093,  1102,     0,     0,
     852,     0,     0,     0,  1108,     0,  1110,   855,     0,  1112,
     856,   877,     0,     0,     0,   882,   883,   884,  1137,     0,
       0,  1144,  1140,     0,     0,     0,  1135,  1134,  1148,  1147,
       0,  1162,     0,     0,  1158,     0,  1166,     0,     0,  1159,
       0,  1180,   189,   189,     0,   189,     0,  1206,     0,  1205,
    1197,     0,     0,     0,     0,  1201,     0,     0,     0,  1204,
       0,     0,     0,     0,     0,  1199,  1207,     0,     0,     0,
    1198,   189,   189,   189,     0,   205,   207,   209,     0,   210,
       0,    55,     0,  1247,     0,  1253,     0,   143,  1259,  1260,
       0,  1262,  1263,     0,   155,   156,  1254,  1275,  1276,     0,
     220,   216,   222,   214,   215,   221,   218,   217,   219,   224,
       0,   238,     0,     0,     0,     0,   270,     0,     0,     0,
       0,     0,     0,     0,     0,   308,   143,     0,     0,     0,
       0,   318,     0,   328,     0,   327,   384,   383,     0,     0,
       0,   143,     0,     0,   154,   428,   432,   436,     0,     0,
       0,   154,     0,    82,    81,   471,   455,     0,   466,   468,
     157,   477,   352,     0,     0,    55,     0,   445,     0,     0,
     972,     0,     0,     0,     0,     0,     0,   986,     0,     0,
       0,     0,     0,     0,  1003,  1004,     0,     0,     0,     0,
       0,  1015,     0,  1021,  1022,  1024,  1026,     0,  1030,  1041,
    1042,  1043,     0,  1045,  1050,  1052,  1053,  1051,   953,     0,
       0,  1032,     0,  1031,   971,     0,     0,  1037,     0,  1039,
       0,  1038,  1059,  1040,  1047,     0,     0,   370,     0,     0,
     562,   563,     0,   560,   556,     0,   167,   167,   167,   168,
     169,   574,   575,   163,   162,     0,   167,   167,   167,     0,
     580,   590,   164,   167,   167,   167,   165,   166,   167,   167,
       0,   167,   167,     0,   164,     0,   603,     0,     0,     0,
     629,     0,   628,     0,     0,   605,     0,   604,     0,     0,
       0,     0,   164,   164,   161,     0,     0,   161,     0,     0,
       0,   167,   167,   703,     0,   167,   167,   708,     0,   180,
     181,   182,   183,   184,   185,     0,    86,    87,    85,   739,
       0,     0,     0,     0,     0,     0,   900,   898,   893,     0,
     903,   887,   904,   890,   902,   896,   885,   899,   888,   886,
     905,   901,     0,     0,     0,   759,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   791,
       0,     0,     0,     0,     0,   805,   807,     0,     0,   813,
     812,     0,     0,   170,     0,     0,     0,   143,     0,     0,
     826,     0,     0,     0,     0,   832,   833,   834,     0,     0,
       0,   841,   857,   861,   863,   866,   865,     0,     0,     0,
     871,   908,   910,     0,   909,   724,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1060,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   728,     0,     0,     0,     0,   843,     0,   143,     0,
    1071,  1069,     0,     0,   143,     0,  1074,   848,     0,     0,
       0,   854,     0,     0,  1113,   875,   876,     0,   878,  1143,
    1145,  1142,  1141,  1132,     0,     0,  1163,     0,     0,  1167,
    1175,   191,   192,   193,   194,   190,  1190,  1189,     0,     0,
       0,  1192,  1191,   189,     0,     0,     0,  1200,     0,     0,
       0,     0,     0,  1217,     0,  1231,  1230,  1232,     0,     0,
       0,  1203,     0,     0,     0,  1202,  1212,  1211,  1213,  1209,
    1208,  1210,  1234,  1233,  1235,     0,     0,     0,    55,     0,
    1249,     0,   143,  1266,  1261,  1264,     0,     0,   143,     0,
       0,     0,   235,     0,     0,     0,     0,     0,     0,     0,
       0,   305,   304,     0,     0,   296,   307,   309,     0,   319,
     321,   320,   143,   326,     0,     0,     0,   154,   427,   143,
       0,     0,     0,     0,   450,   464,    80,    79,   473,     0,
     467,   159,   160,   158,   460,     0,     0,   448,   442,     0,
       0,     0,     0,     0,     0,   143,   973,     0,   976,     0,
       0,   979,     0,   143,   984,     0,   987,   988,     0,   990,
     991,   992,     0,   996,     0,     0,   999,     0,  1005,     0,
       0,     0,  1010,  1011,  1009,     0,     0,     0,  1016,  1017,
       0,     0,  1020,  1023,  1025,  1027,     0,     0,  1044,  1046,
     957,     0,     0,     0,     0,     0,     0,  1055,   958,     0,
       0,  1057,  1048,     0,     0,   518,   519,     0,     0,   561,
       0,   571,   572,   573,   167,   577,   578,   579,     0,     0,
       0,   584,   585,   161,     0,     0,     0,   167,   591,   592,
     593,   594,   596,   164,   599,   600,     0,   167,     0,     0,
       0,   164,   164,   161,     0,     0,     0,     0,   627,     0,
     631,     0,     0,     0,     0,     0,   164,   164,   161,     0,
       0,   161,     0,     0,     0,     0,     0,   164,   164,   161,
       0,     0,   161,     0,     0,     0,     0,     0,   164,   164,
     161,     0,     0,   161,     0,     0,     0,     0,   164,   164,
     161,     0,     0,     0,   164,   607,   608,   609,   610,   612,
       0,   615,   616,     0,   164,     0,     0,   701,   702,   167,
     705,   706,     0,   738,   143,   740,     0,     0,   745,     0,
       0,     0,     0,     0,   892,   889,   895,   894,   891,   897,
       0,   756,     0,     0,     0,     0,   143,   765,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   782,   783,   784,     0,   788,   785,   787,     0,     0,
     793,   792,   794,   795,     0,     0,     0,     0,     0,     0,
     143,     0,   143,     0,   811,   176,   172,   177,   171,   174,
     173,   175,   820,   821,   822,     0,     0,     0,   825,   827,
     143,     0,   143,     0,   835,   838,   143,     0,   143,     0,
     864,   869,   911,   725,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1103,   936,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     937,     0,     0,     0,     0,     0,   736,   737,   143,   154,
       0,   143,   143,  1077,  1078,     0,  1080,     0,   850,     0,
     143,  1109,  1111,   874,  1160,  1161,  1164,  1165,   189,   189,
     189,  1236,  1215,  1214,  1216,  1219,  1218,  1222,  1221,  1223,
    1220,  1228,  1227,  1229,  1225,  1224,  1226,     0,     0,  1244,
    1251,     0,  1267,     0,   143,     0,  1270,     0,     0,   239,
       0,   236,     0,     0,     0,   274,     0,     0,     0,     0,
     143,     0,   311,   131,     0,   404,     0,   425,   154,   157,
       0,     0,   439,     0,     0,   443,   965,     0,     0,     0,
       0,   143,   974,   157,   157,   157,   143,   980,   157,   154,
     157,   157,   143,   993,   157,   157,   157,   143,  1000,   157,
     157,   143,     0,   157,   143,   157,   157,   143,   157,   143,
     959,     0,     0,     0,     0,   143,  1034,  1035,     0,     0,
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
       0,     0,     0,   867,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1104,  1083,     0,  1090,  1091,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   143,     0,
       0,    83,     0,     0,   943,   944,   154,     0,     0,     0,
    1072,  1070,  1081,   849,   851,   154,  1194,  1193,  1195,  1237,
       0,  1246,  1277,     0,     0,  1272,  1271,   240,     0,     0,
       0,   279,     0,     0,     0,   297,   157,   405,   409,   426,
     429,     0,   437,   472,     0,     0,     0,     0,     0,   970,
     975,   978,   977,   981,   982,   983,   985,   989,   994,   995,
     997,   998,  1001,  1002,  1006,   154,   157,  1013,   154,  1014,
    1018,   154,  1028,   154,     0,     0,     0,     0,   964,     0,
       0,   516,     0,   586,   597,   167,   164,   626,   167,   167,
     167,   167,   167,     0,   167,   167,   164,   672,   673,   674,
     675,   676,     0,   678,   679,   164,   167,   167,   167,   167,
     167,     0,   167,   167,   164,   167,   641,   642,   643,   644,
     646,   164,   649,   650,     0,   167,   167,   661,   662,   663,
     664,   666,   164,   669,   670,     0,   167,   685,   164,     0,
     691,   164,   700,   613,   164,   709,   710,   143,   744,     0,
     157,   749,   748,     0,   143,     0,   758,   763,   143,     0,
     770,   771,   772,   773,   777,   778,   774,   775,   776,     0,
       0,   157,   796,   800,     0,   143,     0,     0,   809,   815,
     814,   157,   816,     0,   823,     0,   828,   157,   157,   818,
       0,     0,   868,     0,   178,   178,     0,     0,   178,     0,
     178,  1060,     0,     0,     0,     0,     0,     0,     0,     0,
    1082,     0,     0,   178,   178,     0,     0,     0,     0,     0,
       0,     0,     0,   938,     0,     0,     0,  1060,    84,     0,
     178,     0,  1106,   942,     0,     0,   211,  1279,  1278,     0,
       0,   244,     0,     0,     0,     0,   312,   438,   331,   966,
       0,   186,     0,  1007,  1008,  1012,  1019,  1029,   960,     0,
     186,     0,   363,   331,     0,   598,   623,   632,   633,   634,
     635,   636,   164,   638,   639,   167,   164,   680,   652,   653,
     654,   655,   656,   164,   658,   659,   167,   645,   167,   164,
     651,   665,   167,   164,   671,   687,   164,   697,   614,     0,
     157,   742,   750,     0,     0,     0,     0,     0,   779,   780,
     797,     0,     0,     0,   810,   817,     0,   829,   830,   819,
     157,   839,     0,   179,  1060,  1060,    83,     0,  1060,     0,
    1060,   912,   143,     0,  1085,     0,  1088,  1122,  1089,  1087,
    1084,     0,  1060,  1060,    83,     0,     0,  1060,  1060,     0,
       0,  1060,   941,   939,   940,   919,  1060,  1060,  1106,  1117,
       0,  1073,   853,     0,     0,   246,     0,     0,     0,   332,
     333,   353,     0,   187,   188,   968,   969,     0,   962,   963,
     371,     0,   167,   640,   677,   167,   660,   647,   167,   667,
     167,   688,     0,   743,   157,   746,   157,     0,   157,     0,
     157,   798,   157,     0,   157,     0,  1060,   925,   921,  1060,
       0,   926,     0,   920,  1060,     0,  1086,     0,   923,   922,
    1060,     0,     0,   917,   915,  1060,   143,   916,   918,   924,
    1117,  1067,     0,     0,  1107,  1115,     0,     0,     0,   275,
     298,   301,   299,     0,     0,   143,   143,   559,   637,   657,
     648,   668,   157,   747,   754,     0,   769,   766,   799,   804,
       0,   824,     0,   930,   914,    83,     0,   928,  1123,     0,
     913,    83,     0,   929,     0,  1068,  1119,  1121,     0,  1114,
       0,     0,   280,     0,     0,     0,     0,   186,   186,     0,
     751,   143,   767,   801,   840,  1060,     0,     0,  1060,     0,
     157,  1120,  1116,   245,     0,     0,     0,     0,     0,   967,
     961,   720,   143,   752,   768,   143,   802,   932,     0,  1060,
     931,     0,     0,   247,   291,     0,   290,     0,   753,   803,
      83,   933,    83,  1060,   289,   288,  1060,  1060,   927,   935,
     934
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    53,   430,   176,   155,  1255,  2517,  2518,   431,   432,
     433,   434,   156,   157,   158,    94,   806,   457,  1196,  1674,
    1345,  1358,  1341,  1922,  2614,  1405,  2665,  1576,   336,   750,
     753,   756,   764,    56,   365,    66,   369,   375,   379,   382,
      71,   385,    78,   400,   396,   390,   406,    85,   411,    95,
     101,   416,   418,   420,   492,   859,  1643,   422,   425,   108,
     441,   159,   161,  2661,   178,   218,   481,   848,   483,   493,
     851,   856,   495,   497,   862,   500,   864,   511,   867,   869,
     514,   518,   522,   524,   527,   531,   558,   554,  1267,   545,
     888,   893,   885,  1256,   898,   548,   564,   567,   572,   577,
     585,   928,   930,   932,   934,   590,   938,   221,   592,  1747,
     238,   594,   596,   600,   605,   612,   247,  1334,   615,   255,
     624,  1350,   626,   632,   982,  1366,   977,  1788,  1372,  1370,
     978,  1790,  1375,  1377,   638,   641,   636,   257,   265,   267,
     679,  1059,  1432,  1048,  1531,  1970,  2299,  1064,  1057,   923,
    1308,  1313,  1321,  1323,  1954,   273,  1073,  1076,  1084,  2271,
    2272,  2273,  1955,  2649,  2650,  1107,  1110,  2724,  2725,  2721,
    2722,  2766,  2274,  2275,   278,   284,   292,   693,   688,   297,
     302,   703,   709,  1134,  1139,   759,   747,   308,   312,   716,
     318,   723,  1581,   736,   737,  1170,  1165,  1587,  1155,  1593,
    1605,  1601,  1159,   741,   725,   324,   325,   340,  1183,   343,
     349,   774,   777,   771,   351,   354,   782
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2590
static const yytype_int16 yypact[] =
{
    4677,  -118,    72,   533,    36, -2590, -2590,   900,  -153,    38,
    1118,  1009,   142,  2902,   123,   182,   724,     3,  5544,   727,
    1628, -2590,   182,   702,   136,  1337,   -59,    22,   166,   150,
     162,   421,   691,  3955,   102,   515,   413,   150, -2590,   114,
      43,   943, -2590,   -22,   503,   339, -2590,    88, -2590,    53,
    4275,   294,    86,   549, -2590,   511, -2590,   547,   748,   345,
     649,   654,    92,   701,   -12,    90, -2590, -2590, -2590,   509,
     186, -2590,    21,   113,   182,   386,   186,    80, -2590,   705,
     186, -2590, -2590,     8,   186, -2590, -2590, -2590, -2590,   186,
   -2590, -2590, -2590, -2590, -2590, -2590,   236,   681,   744,   750,
     168, -2590,   186,  1257,   186,   186,   864,   186, -2590, -2590,
   -2590,   566, -2590, -2590, -2590, -2590,  5179, -2590, -2590, -2590,
   -2590, -2590, -2590,   186, -2590, -2590, -2590, -2590, -2590, -2590,
   -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590,
   -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590,
   -2590, -2590, -2590, -2590, -2590, -2590,  1315, -2590,   186, -2590,
     768, -2590, -2590,   182,   182,   182,   182,   182,   182,   182,
   -2590, -2590,   182,   182,   182,   182, -2590,   661, -2590,   723,
    1482,   639,    46,   520,   658,   560,  4714,   189,  4021,  5132,
     800,  5179,  4078, -2590,   461,   299,   875,   796,   829,   481,
     874,   150,   -23, -2590,   830, -2590,   676,   627,   149, -2590,
     227, -2590,   420, -2590,    35,   821,   270, -2590, -2590,  5249,
   -2590, -2590, -2590,   850,   893, -2590, -2590, -2590, -2590,   427,
   -2590, -2590, -2590,   629, -2590, -2590,  5249,  4771, -2590, -2590,
     455, -2590,   921,   926,   107, -2590,   186, -2590,   934,   129,
     938,   143,    15,   947,    11, -2590, -2590, -2590,   953,   969,
     182,   182,   186,   186, -2590, -2590,   973, -2590, -2590, -2590,
   -2590, -2590, -2590,  3389, -2590,   982,   994,   186, -2590,   996,
   -2590, -2590, -2590, -2590, -2590,   186,   924,   182,  1369,   186,
    1315,   186, -2590,  1010, -2590,  5332, -2590, -2590,   677,  1014,
    1029,   186, -2590, -2590,   346,  1000,  5249,  1033, -2590,   977,
     186,   944, -2590,   456,   925,  1172,   470,  1046, -2590, -2590,
   -2590, -2590, -2590, -2590, -2590,  1050, -2590,   596,   119,   138,
     170,   508, -2590,   186,   186,   184, -2590,   186,   790,  1056,
   -2590,   186,   186, -2590,  1058,    56,    67,  1068,  1315, -2590,
   -2590, -2590,   729,   186, -2590, -2590,   186,   186,   186,   186,
     186,   186,   186,   186,   186, -2590, -2590, -2590,   186, -2590,
    1081,  1085, -2590,   186,   792, -2590, -2590, -2590, -2590, -2590,
   -2590,   186, -2590, -2590,   186, -2590, -2590,   388,   388,  1092,
   -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590,
   -2590,   186,   186,  1094,  1096,  1115, -2590, -2590,   186,   186,
     186, -2590,   186, -2590,  1119, -2590, -2590, -2590, -2590,   851,
   -2590,  1120, -2590,  5249,  1125, -2590,   186, -2590, -2590, -2590,
     186,  1123,  1124,  1124,  5249,   186,   186,   186,   186,   186,
     186, -2590,   186,  5179,  1257,   186,   186, -2590, -2590, -2590,
   -2590, -2590, -2590, -2590, -2590, -2590, -2590,  1257,   186, -2590,
   -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590,
   -2590,  1135, -2590,   869,    24, -2590, -2590, -2590, -2590, -2590,
   -2590, -2590, -2590, -2590,   -40, -2590, -2590, -2590,   974, -2590,
     499,   490,   490, -2590, -2590, -2590,  1143, -2590,  1145, -2590,
   -2590,   326, -2590,   998, -2590, -2590, -2590,   989, -2590, -2590,
    1315, -2590,  3512,   186, -2590,  5249,  5249,  1315, -2590, -2590,
    1315, -2590, -2590, -2590, -2590,  1315, -2590, -2590,  5249,  1315,
     186, -2590, -2590,  5249, -2590,  1152,   449,   985,    -1, -2590,
   -2590,   986,  5249,  4359, -2590, -2590, -2590, -2590, -2590,  1180,
    1182,  1194, -2590,  1023, -2590, -2590, -2590,   186, -2590, -2590,
     488, -2590, -2590, -2590, -2590, -2590, -2590, -2590,    35, -2590,
   -2590, -2590, -2590, -2590, -2590,  1017,  1040, -2590, -2590,  1155,
    1171,  1173, -2590, -2590,  1018, -2590,   186,  1237,  1020,  5332,
   -2590,  1315, -2590,  1242, -2590, -2590, -2590, -2590, -2590, -2590,
   -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590,  5249,  5249,
    5249, -2590, -2590,  1259,   182, -2590, -2590,  1261,  1269,  1083,
     186, -2590,   685,  1203, -2590,  1276, -2590,   229,  1206,  3585,
     410,  1289, -2590,  1295, -2590,  1303, -2590,    50, -2590,  1304,
    1305, -2590,  1309, -2590, -2590, -2590,   186, -2590,  5332,  5087,
    1519,   442,  1310,   310,  1220, -2590, -2590, -2590,  1306,   897,
    1322,  1323,    -7,   186,   336,   376,   140,  5249,   182,  1516,
     905,    16,   133,   193,    26, -2590,  1313,  1317,  1328, -2590,
   -2590, -2590, -2590, -2590,   186,   186,   186,   186, -2590, -2590,
     186,  1315,   186, -2590,   186,  1257,   186,  1334,  1315, -2590,
   -2590, -2590, -2590, -2590, -2590, -2590, -2590,     4,    28, -2590,
   -2590, -2590,  1342, -2590, -2590, -2590, -2590,  1230, -2590,  1336,
    1344,  1264,  1356, -2590,  1357, -2590,  1360,  1274,  1361,   502,
      48,   536,   448,   537,  1365,   584, -2590, -2590,  1370,  1371,
    1373, -2590, -2590,  1374, -2590, -2590, -2590, -2590,  1375, -2590,
   -2590,  1376, -2590, -2590,  1378, -2590, -2590, -2590, -2590, -2590,
   -2590, -2590,   186,   186, -2590,   186,   979,   186,   186, -2590,
    2545, -2590,  1043,  1380, -2590,  1102,  1381, -2590, -2590,   -34,
     186,   186, -2590,  1367,   186,   186,   186,   186,   186,   186,
     186,   186,   186, -2590, -2590,  1387,   964,   186,  1382,   640,
   -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590,
   -2590, -2590, -2590,  1394,  1399,   186,   186,   186,  1403,   182,
    1409,  1411,  1315,  5249, -2590, -2590, -2590, -2590, -2590,  1315,
   -2590, -2590,   186,   186,   186,  5249,   186,  1257,   186, -2590,
     186, -2590, -2590, -2590, -2590, -2590,  1412,  1413, -2590, -2590,
   -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590,
   -2590,   189, -2590,   186, -2590, -2590, -2590, -2590, -2590, -2590,
   -2590, -2590,  5249,  5249,   186,  1315, -2590,   -34,   -34,   -34,
    1315,  1257,   186,  1315, -2590, -2590, -2590,   186, -2590,   -28,
    1250,  1414,  1420, -2590, -2590,  1315,  5249, -2590, -2590,  1422,
    1424,  1423,  1109,   186,  5098,   563,   736, -2590, -2590, -2590,
     186,  1415,   591,   956, -2590,  1179, -2590,  1516,  1185,   609,
    1157,   118, -2590, -2590,   186, -2590, -2590, -2590, -2590, -2590,
   -2590, -2590, -2590, -2590, -2590,   186,  1431, -2590, -2590, -2590,
     -34, -2590, -2590, -2590, -2590,  5207, -2590, -2590,  1441,  1442,
     186,  1443,  1446,  1448,     0,     0,    -5,  1451,  1452,  1457,
    1460,  1190,  1200,  1461,  1466,  1468,    95,    95,    -5,  1470,
    1471,    -5,  1473,  1476,  5545,  1477,  1478, -2590, -2590,  1479,
    1480,   550, -2590,  1484,  1485,  1486,  1487,     0,    -5,  1491,
    1492, -2590,  1493, -2590, -2590,  1315,   749,  1186,  1210,   -17,
    1240,  1372,  1740,   352,  1495,   314,  1352,  1396,   625,  1114,
    1462,   356,  1268,  1402,  1506,  1324,    93,    19,   558,   -46,
    5179,  1516,  1474,   -32,  1287,  1326,  1527,    27, -2590, -2590,
     235,  1533,  1535, -2590, -2590, -2590,  1536,  1340,    34,  1516,
    1341, -2590, -2590, -2590,   182,  1542,  1543,   186, -2590, -2590,
   -2590, -2590, -2590, -2590, -2590, -2590, -2590,     1, -2590,  1001,
   -2590,   186, -2590,   186, -2590, -2590, -2590, -2590,   186,   186,
     186,   310,  5249, -2590,  1547,  1113, -2590, -2590,   186, -2590,
   -2590,   186,  5179,   186, -2590, -2590, -2590, -2590, -2590, -2590,
   -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590,   182,   186,
   -2590,   186,   310,  1549, -2590,   186,   186, -2590,   182, -2590,
   -2590, -2590,   527,  1551,  1552, -2590, -2590, -2590, -2590,   186,
     186, -2590, -2590,  1257,   186,   186, -2590, -2590, -2590, -2590,
     186, -2590,   186,  1454, -2590,   186, -2590,   186,  1456, -2590,
    1555, -2590,  1234,  1234,   600,  1234,  1557, -2590,   603, -2590,
   -2590,  1563,  1564,   604,  1567, -2590,  1568,  1569,  1572, -2590,
     608,   624,  1573,  1575,  1583, -2590, -2590,  1584,  1586,  1589,
   -2590,  1234,  1234,  1234,   186, -2590, -2590, -2590,   186, -2590,
     186,  1022,  5249, -2590,   186, -2590,  5332,  1315, -2590, -2590,
    1590, -2590, -2590,  1591, -2590, -2590, -2590, -2590,  1565,  1369,
   -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590,
     186,  1585,   186,   186,   186,   987, -2590,  1592,  1598,   186,
     186,     6,  1600,   182,   182, -2590,  1315,   186,  1599,  1602,
    1605, -2590,  5249, -2590,   186, -2590, -2590, -2590,   186,   186,
     186,  1315,  1606,  5249,   -34, -2590, -2590, -2590,  1257,   186,
    1610,   -34,   186,  1581,  1582,   500, -2590,  1619, -2590, -2590,
     839, -2590, -2590,   186,  1624,  1631,   186, -2590,  1629,   847,
    5179,  1397,   451,  1401,    32,  5249,   466, -2590,   335,  1500,
     146,   475,  1405,   160, -2590, -2590,    40,  1496,   630,  1518,
     -87,  1516,   -44, -2590,  1641,  1406, -2590,   468, -2590, -2590,
   -2590, -2590,  1516,  1447, -2590, -2590, -2590, -2590, -2590,   186,
     957, -2590,   186, -2590, -2590,   186,   186, -2590,   186, -2590,
     186, -2590, -2590, -2590, -2590,  1458,   186, -2590,   186,    62,
   -2590, -2590,  1648,  1651, -2590,   186,     0,     0,     0, -2590,
   -2590, -2590, -2590, -2590, -2590,  1655,     0,     0,     0,   760,
   -2590, -2590,    95,     0,     0,     0, -2590, -2590,     0,     0,
    1656,     0,     0,  1657,    95,   981, -2590,  1662,  1663,  1665,
   -2590,   612, -2590,   948,  1066, -2590,  1127, -2590,  1408,  1668,
    1671,  1703,    95,    95,    -5,  1705,  1706,    -5,  1708,  1711,
    1712,     0,     0, -2590,  1713,     0,     0, -2590,  1715, -2590,
   -2590, -2590, -2590, -2590, -2590,   182, -2590, -2590, -2590,  5179,
    1199,   182,   186,  1249,  1147,   510, -2590, -2590, -2590,   753,
   -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590,
   -2590, -2590,  1716,   182,   186, -2590,   182,  1719,   186,  5249,
     182,  1267,  1489,  1490,   188,   208,  1497,   234,  1427,  1429,
    1723,  1724,  1733,  1740,  1734,  1735,  1739,  1439,  1440,  1160,
    1743,   182,   186,  1282,  1293, -2590, -2590,   182,  5179, -2590,
   -2590,  5179,   186,    70,  1744,   182,   186,  1315,  1257,   182,
   -2590,  1746,  5179,  5249,   186, -2590, -2590, -2590,   182,   182,
    5179, -2590, -2590, -2590, -2590, -2590, -2590,  5179,   186,   182,
   -2590, -2590, -2590,   186, -2590, -2590,  1748,   186,  1526,   192,
     186,  1531,   186,   214,   186, -2590,   186,  1532,  1534,   186,
     186,   186,   186,   186,   186,   186,   186,    14,   186,   186,
    1538, -2590,   186,   186,   186,   186, -2590,  5249,  1315,  1751,
    5249,  5249,   186,   186,  1315,  1257, -2590,   186,   186,   186,
    5249, -2590,   186,   186, -2590, -2590, -2590,  1753, -2590, -2590,
   -2590, -2590, -2590, -2590,   186,   186, -2590,   186,   186, -2590,
   -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590,  1754,  1757,
    1759, -2590, -2590,  1234,  1760,  1761,  1763, -2590,  1764,  1766,
    1770,  1771,  1773, -2590,  1774, -2590, -2590, -2590,  1776,  1778,
    1775, -2590,  1780,  1781,  1784, -2590, -2590, -2590, -2590, -2590,
   -2590, -2590, -2590, -2590, -2590,   186,   186,   186,  1789,  5249,
   -2590,   186,  1315, -2590, -2590, -2590,  1369,   186,  1315,   186,
     186,   186, -2590,   186,   186,  1785,   186,  1788,  1758,   186,
     186, -2590, -2590,  1790,  5249, -2590, -2590, -2590,   186, -2590,
   -2590, -2590,  1315, -2590,  1129,   186,  1129,   -34, -2590,  1315,
    5249,   186,   186,  1792, -2590, -2590, -2590, -2590, -2590,   186,
   -2590, -2590, -2590, -2590, -2590,   186,  1793, -2590, -2590,  5249,
    1794,  1795,  1796,  1797,  5249,  1315, -2590,  5249, -2590,  5249,
    5249,  5179,  5249,  1315, -2590,  5249, -2590, -2590,  5249, -2590,
   -2590,  5179,  5249, -2590,  5249,  5249,  5179,  5249, -2590,  5249,
    5249,   186, -2590, -2590, -2590,  5249,  5249,  5249, -2590, -2590,
    5249,  5249, -2590, -2590, -2590, -2590,  5249,  5249, -2590, -2590,
   -2590,  5249,  1798,  1799,  1802,  1803,  5249, -2590, -2590,   186,
     186, -2590, -2590,  1805,   186, -2590, -2590,  1807,  1809, -2590,
     186, -2590, -2590, -2590,     0, -2590, -2590, -2590,  1810,  1812,
    1813, -2590, -2590,    -5,  1815,  1816,  1817,     0, -2590, -2590,
   -2590, -2590, -2590,    95, -2590, -2590,  1819,     0,  1820,  1821,
    1822,    95,    95,    -5,  1824,  1826,  1827,  1130, -2590,  1153,
   -2590,  1472,  1554,  1828,  1829,  1830,    95,    95,    -5,  1832,
    1833,    -5,  1835,  1571,  1836,  1837,  1838,    95,    95,    -5,
    1840,  1842,    -5,  1843,  1587,  1844,  1845,  1847,    95,    95,
      -5,  1852,  1854,    -5,  1855,  1856,  1857,  1858,    95,    95,
      -5,  1860,  1861,  1862,    95, -2590, -2590, -2590, -2590, -2590,
    1864, -2590, -2590,  1865,    95,  1867,  1868, -2590, -2590,     0,
   -2590, -2590,  1869, -2590,  1315, -2590,  5249,   186, -2590,   186,
    5249,   186,  1880,  1186, -2590, -2590, -2590, -2590, -2590, -2590,
    1882, -2590,  5179,   182,  1883,  5179,  1315, -2590,  1884,  1186,
     186,   186,   186,   186,   186,   186,   186,   186,   186,  1887,
    1888, -2590, -2590, -2590,  1889, -2590, -2590, -2590,  1891,  1895,
   -2590, -2590, -2590, -2590,   186,  5249,   186,  1896,  1186,   182,
    1315,  1257,  1315,   186, -2590, -2590, -2590, -2590, -2590, -2590,
   -2590, -2590, -2590, -2590, -2590,   186,  1257,  1257, -2590, -2590,
    1315,  1257,  1315,   186, -2590, -2590,  1315,  1257,  1315,  1257,
   -2590, -2590, -2590, -2590,   186,   186,   186,   186,   186,   186,
     186,   186,   186,   186,  2334, -2590,   186,   186,   186,   186,
     186,   186,   186,   186,   186,   186,   186,  3512,  1898,   186,
   -2590,   186,   186,   186,  1902,  1904, -2590, -2590,  1315,   -34,
    1906,  1315,  1315, -2590, -2590,  1257, -2590,   186, -2590,  1907,
    1315, -2590, -2590, -2590, -2590, -2590, -2590, -2590,  1234,  1234,
    1234, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590,
   -2590, -2590, -2590, -2590, -2590, -2590, -2590,  1186,   186, -2590,
   -2590,   186, -2590,   186,  1315,   186, -2590,  1257,   186, -2590,
     186, -2590,  1786,  1908,  1910, -2590,  1912,   186,   186,  1913,
    1315,  5249, -2590, -2590,   186, -2590,   186, -2590,   -34,   839,
     186,  1914, -2590,   186,    35, -2590, -2590,  1915,  1917,  1918,
    1919,  1315, -2590,   839,   839,   839,  1315, -2590,   839,   -34,
     839,   839,  1315, -2590,   839,   839,   839,  1315, -2590,   839,
     839,  1315,  5249,   839,  1315,   839,   839,  1315,   839,  1315,
   -2590,  1920,  1921,  1922,  1923,  1315, -2590, -2590,  1926,    35,
    1927, -2590,   186, -2590, -2590, -2590, -2590,  1929, -2590, -2590,
   -2590, -2590,     0,    95, -2590, -2590, -2590, -2590, -2590, -2590,
    1930, -2590, -2590,    95,  1932,  1933,  1934,    95,    95,    -5,
    1946,  1947,  1959,  1961,  1965,  1967,    95,    95,    -5,  1969,
    1970,  1972,  1973,  1975,  1976,    95,    95,    -5,  1971,  1978,
    1980,    95,     0,     0,     0,     0,     0,  1982,     0,     0,
    1983,    95,    95,     0,     0,     0,     0,     0,  1984,     0,
       0,  1985,    95,    95, -2590, -2590, -2590, -2590, -2590,  1986,
   -2590, -2590,  1987,    95, -2590, -2590, -2590, -2590, -2590,  1988,
   -2590, -2590,    95, -2590,    95,  1989, -2590,  1992,  1994, -2590,
    5332, -2590,   839,  1995,  5179,   839,   186,  5249,  1996, -2590,
     839, -2590, -2590, -2590,   839, -2590, -2590,  5249,  1997,   186,
     186,   186,   186,   186,   186,   186,   186,   186,   186,   186,
   -2590, -2590, -2590,  5179,   839,   186,  5249,  1998, -2590,  1257,
    1257,  1257,   186,  5179,  1257,   186,  1257,  1257,  5249,  5179,
    1257,   186,  1257, -2590,   186,   186,   186,   186,   186,   186,
    1186,   186,   186,   186,  1445,  1525,  1545,  1570,  1658,  1659,
    1660,  2334, -2590,  1661, -2590, -2590,  1186,   186,   186,   186,
     186,  1186,   186,   186,   186,   186,   186,   186,  1315,   186,
    1523,  1186,   186,   186, -2590, -2590,   -34,   182,  1999,  2000,
   -2590, -2590, -2590, -2590, -2590,   -34, -2590, -2590, -2590, -2590,
     186, -2590, -2590,  1257,   186, -2590, -2590, -2590,  1101,  2005,
    2006, -2590,   186,  2001,  1129, -2590,   839, -2590, -2590, -2590,
   -2590,  2007, -2590, -2590,  2011,  2012,  2013,  5249,  2017, -2590,
   -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590,
   -2590, -2590, -2590, -2590, -2590,   -34,   839, -2590,   -34, -2590,
   -2590,   -34, -2590,   -34,  2016,  2020,  5249,  2022, -2590,  2023,
    2025, -2590,   186, -2590, -2590,     0,    95, -2590,     0,     0,
       0,     0,     0,  2026,     0,     0,    95, -2590, -2590, -2590,
   -2590, -2590,  2027, -2590, -2590,    95,     0,     0,     0,     0,
       0,  2028,     0,     0,    95,     0, -2590, -2590, -2590, -2590,
   -2590,    95, -2590, -2590,  2032,     0,     0, -2590, -2590, -2590,
   -2590, -2590,    95, -2590, -2590,  2035,     0, -2590,    95,  2037,
   -2590,    95, -2590, -2590,    95, -2590, -2590,  1315, -2590,  5179,
     839, -2590, -2590,  2039,  1315,   186, -2590, -2590,  1315,   186,
   -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590,   186,
     186,   839, -2590, -2590,  2040,  1315,   186,  1257, -2590, -2590,
   -2590,   839, -2590,   186, -2590,  1257, -2590,   839,   839, -2590,
    5249,  1186, -2590,   186,  2041,  2041,   186,   186,  2041,  1186,
    2041, -2590,  5249,  1740,  2042,  2044,  2045,  2046,  2047,  2049,
   -2590,   182,  1186,  2041,  2041,   186,   186,  1186,   186,   186,
     186,   186,   186, -2590,  1257,   186,  2050, -2590, -2590,   186,
    2041,   182,    41, -2590,  2051,   182, -2590, -2590, -2590,  2052,
     186, -2590,  2053,  2055,  1925,   186, -2590, -2590,    -8, -2590,
    2057,    -2,  5249, -2590, -2590, -2590, -2590, -2590, -2590,  2058,
      -2,  5249, -2590,    -8,   186, -2590, -2590, -2590, -2590, -2590,
   -2590, -2590,    95, -2590, -2590,     0,    95, -2590, -2590, -2590,
   -2590, -2590, -2590,    95, -2590, -2590,     0, -2590,     0,    95,
   -2590, -2590,     0,    95, -2590, -2590,    95, -2590, -2590,   186,
     839, -2590, -2590,  5179,  5249,   186,  5249,   186, -2590, -2590,
   -2590,  5179,  5249,   186, -2590, -2590,  5249, -2590, -2590, -2590,
     839, -2590,  2056, -2590, -2590, -2590,  1186,   186, -2590,  2060,
   -2590, -2590,  1315,  2061, -2590,  2067, -2590, -2590, -2590, -2590,
   -2590,  2070, -2590, -2590,  1186,   186,  2071, -2590, -2590,   186,
    5249, -2590, -2590, -2590, -2590, -2590, -2590, -2590,    41,  1800,
    1516, -2590, -2590,  2073,  2075, -2590,  2048,  2072,   126, -2590,
   -2590, -2590,  5249, -2590, -2590, -2590, -2590,  5249, -2590, -2590,
   -2590,  2078,     0, -2590, -2590,     0, -2590, -2590,     0, -2590,
       0, -2590,  5332, -2590,   839, -2590,   839,   186,   839,  2079,
     839, -2590,   839,   186,   839,   186, -2590, -2590, -2590, -2590,
    2080, -2590,   186, -2590, -2590,  2081, -2590,   186, -2590, -2590,
   -2590,  2083,   186, -2590, -2590, -2590,  1315, -2590, -2590, -2590,
    1800, -2590,  1808,  1717,  1516, -2590,  2085,  2086,  2084, -2590,
   -2590, -2590, -2590,   571,   571,  1315,  1315, -2590, -2590, -2590,
   -2590, -2590,   839, -2590, -2590,  2088, -2590,  5179, -2590, -2590,
    2089, -2590,  1186, -2590, -2590,  1186,   186, -2590, -2590,   186,
   -2590,  1186,   186, -2590,  5249, -2590,  1808, -2590,   182, -2590,
    2090,  2091, -2590,   186,   186,   186,   186,    -2,    -2,  2092,
    5179,  1315, -2590,  5179, -2590, -2590,   186,  2095, -2590,   186,
     839, -2590, -2590, -2590,  2096,  2097,   186,  2098,   186, -2590,
   -2590, -2590,  1315, -2590, -2590,  1315, -2590, -2590,  2100, -2590,
   -2590,  2101,  2103, -2590, -2590,  2104, -2590,  2106, -2590, -2590,
    1186, -2590,  1186, -2590, -2590, -2590, -2590, -2590, -2590, -2590,
   -2590
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2590, -2590,    -4, -2590,   674, -2590, -1843,  -923,  1435, -2590,
     780,   583,  1881,   -49,   104, -1645,  1498,  2015,  -715,   576,
    -909,  2363,  1647, -2590, -1133, -2590, -2499, -1138, -2590, -2590,
   -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590,
   -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590,
   -2590, -2590, -2590, -2590,  -746,  -490, -2590, -2590, -2590, -2590,
   -2590, -2590, -2590,  -459, -2590, -2590, -2590, -2590, -2590, -2590,
   -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590,
   -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590,
   -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590,
   -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590,
   -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590,
   -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590,
   -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590,
   -2590, -2590, -1449, -2590, -2590, -2590, -2590, -2590,  -650, -2590,
   -2590, -2590, -2590, -2590, -2590,   529, -2590, -2590, -2590, -2590,
    -165,  -656, -1626,  -536, -2590, -2590, -2590, -2590,  -611,  -605,
   -2590, -2590, -2589, -2590, -2590, -2590, -2590, -2590, -2590, -2590,
   -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590,
   -2590, -2590, -2590, -2590,  1390, -2590, -2590, -2590, -2590, -2590,
   -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590,
   -2590, -2590, -2590, -2590, -2590, -2590, -2590
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1251
static const yytype_int16 yytable[] =
{
      70,   348,   860,   890,  1894,  1577,  1505,  1582,   107,  2044,
    1067,  2046,   409,  1098,  1072,  1075,   639,    67,    68,  1967,
     377,  1102,    67,    68,  2659,   387,   109,   258,   319,   289,
    2663,  1111,  1487,  1612,  1613,  1614,   311,    67,    68,    67,
      68, -1105,    80,   561,  1130,   342,    67,    68,   353,    67,
      68,  2668,  1641,  1691,   368,  1469,    67,    68,   374,  1360,
     772,   381,  1363,  1194,   985,   384,   386,  1708,  1135,   395,
    1495,   775,   401,   405,  1409,  1475,   408,   320,    81,  1394,
     412,  1715,  1745,    67,    68,   413,   321,  1719,   259,    67,
      68,   112,   337,    67,    68,    67,    68,  1915,   426,  1481,
     435,   436,   440,   442,  1411,  1253,   109,   293,   633,  1151,
     260,   986,  1356,   618,   322,  1131,    67,    68,  1916,   446,
    1467,  1917,    54,   109,  1720,  1112,   634,   846,    79,    67,
      68,  1113,  1918,  2767,   622,  1324,  1716,   291,    57,  1136,
      55,   114,   109,    67,    68,    67,    68,   177,   627,    82,
    1104,  1470,   248,   849,   458,  1919,   160,  1339,   402,   562,
    1343,   261,  1245,  1246,  1247,   891,  1496,  1701,  1152,   256,
     268,   266,  1920,   423,   109,   305,  1077,  2791,   491,  1721,
    1078,  1706,   102,   512,  1340,   748,   109,    67,    68,    67,
      68,  1482,    67,    68,  1476,    67,    68,   109,  1132,   424,
    1717,   103,   635,  1068,   751,  1153,   850,   269,  1709,  1882,
     569,   847,   338,   380,   388,  1254,  1325,    67,    68,  1412,
     445,   114,  1137,  1195,   117,  1329,   274,   619,   275,  1884,
     118,   119,    83,   484,   962,  1722,   754,   309,   114,   485,
     987,   414,   620,   963,   964,   112,   698,  1483,   573,   120,
     410,  1079,   403,   104,  1357,  1887,  1344,   114,   646,   647,
     628,  1317,  1489,  1710,  1133,   563,   378,   389,  1692,   323,
    2660,  1488,  1080,   682,  1642,   486,  2664,   640,  2799,  2800,
      84,   684,   687,  1069,   690,   694,   588,   696,  1138,   114,
     965,   513,   339,   521,  1746,   526,   530,   706,  1103,   487,
     391,   114,  1506,   557,   117,   715,   717,   892,  1471,   988,
     118,   119,   114,  2730,   122,  1968,  1468,  1154,   586,   989,
     262,   117, -1105,  1497,  1114,    69,   404,   118,   119,   760,
     761,   763,   310,   765,  1081,   629,   105,   768,   769,   773,
     117,  1436,   341,  1105,   276,   488,   118,   119,   781,   783,
     776,   990,   784,   785,   786,   787,   788,   789,   790,   791,
     792,   574,  1696,   152,   793,  1479,   263,   153,   154,   796,
     798,   623,   117,  1050,   270,   352,   327,   799,   118,   119,
     800,   373,  1702,  1499,   117,   630,   328,   271,   489,   490,
     118,   119,   692,   306,   122,   117,  1707,   809,   810,  1050,
     294,   118,   119,   120,   814,   815,   816,   762,   817,   631,
     295,   122,   392,   329,  1051,  1946,   307,  1921,   801,   966,
     967,  1537,   824,  1106,  1883,  2731,   825,   106,   570,  1082,
     122,   830,   831,   832,   833,   834,   835,  1951,   836,  1050,
    1051,   840,   841,   152,  1885,  2001,  1043,   153,   154,   272,
     277,   571,  1550,   886,   843,   393,   394,   578,  1490,   613,
     152,   415,   122,   575,   153,   154,   589,   579,   489,  2732,
    1888,   597,  1044,  1433,   122,  1840,  1108,  1461,  1843,   152,
    1051,  1437,   802,   153,   154,   122,   555,   279,   968,   330,
     576,  1863,   904,   905,   580,  1725,   707,   979,   969,   970,
    1074,   303,  1697,   971,  1668,   112,   532,   326,   872,   874,
     546,   152,    67,    68,   598,   153,   154,   719,  1879,   865,
     533,   757,   350,   152,   398,   331,   882,   153,   154,  1660,
     972,   738,  1555,   356,   152,  1160,  1664,   112,   153,   154,
     939,  1908,   534,  1052,  1556,    58,   556,   838,   906,   355,
    1438,   803,   366,   903,   907,  1378,   112,  1053,  1054,   357,
     358,   535,   399,   726,  1379,  1380,   304,   980,   332,  1052,
     581,  1698,  1688,   359,    67,    68,   720,   853,   536,   866,
     976,   537,   935,  1053,  1054,   298,    59,  1694,  1434,   333,
     739,  1071,  1462,  1439,    67,    68,  1703,  1156,  1162,   995,
     547,   708,   908,  1045,    60,  1161,   582,   538,   539,  1052,
     370,  1381,    67,    68,  1699,  1864,   950,  1792,   909,   599,
     360,   361,   728,  1053,  1054,   334,  1793,  1794,   857,  1299,
     744,   910,   383,    61,   804,  1718,  1726,   911,   912,   805,
     887,   335,   994,   913,  1214,  1167,  1728,  1442,   614,  1055,
    1056,    62,  1215,  1046,   371,    63,  1157,  1163,   372,  1070,
     540,  1578,  1083,   120,  1584,  1590,   858,    64,   541,  1598,
     583,   854,   924,  1795,  1443,  1055,  1056,  1444,  1047,  2535,
    1118,  1119,  1120,  1121,   299,  1602,  1122,  1689,  1124,   162,
    1125,  1727,  1127,  1300,   914,   120,   239,   758,   721,   951,
     952,   264,  1695,   745,  1168,  1865,   376,  1445,   296,   857,
     407,  1704,   417,   915,   120,  1055,  1056,   916,  1301,   917,
    1579,  1187,   584,  1585,  1591,   722,   542,   543,  1599,   498,
     560,   699,    67,    68,   362,  1446,   363,   499,  1447,   740,
    1382,  1383,   918,   919,  1603,   855,   953,   858,   397,   419,
     920,    67,    68,   163,  1866,   421,   300,   482,  1178,  1179,
     443,  1180,  1182,  1184,  1185,   301,  1304,   700,   164,   921,
     165,   734,   459,  2699,  1758,  1759,  1197,  1198,   471,   601,
    1200,  1201,  1202,  1203,  1204,  1205,  1206,  1207,  1208,   472,
     240,  2710,  1211,  1212,  1302,    67,    68,  1311,   544,   746,
     166,   494,  1796,  1797,   797,  1158,  1164,   367,   167,  1384,
     219,  1218,  1219,  1220,   364,  1319,  1473,   701,   241,  1385,
    1386,  1760,    65,  1474,  1387,   922,   220,   496,  1228,  1229,
    1230,  1399,  1232,   523,  1234,   551,  1235,   460,   461,   462,
     463,   464,   465,   466,  1303,   602,   467,   468,   469,   470,
    1448,  1388,   780,  1169,  2107,   819,   820,  1238,  1867,  1240,
    2306,  2307,  2308,  1671,  1672,  2621,   168,    67,    68,  1580,
    1243,  1798,  1586,  1592,  2120,   954,   955,  1600,  1250,  1449,
     549,  1799,  1800,  1252,   603,   550,  1801,   242,  1712,  2157,
     559,  2645,  2160,  1604,   280,  1713,   565,  1305,  1266,  1268,
    2168,  1400,   243,  2171,   437,   566,  1309,   568,  1312,  1315,
     587,  2179,  2785,  1802,  2182,  1320,   169,   552,  2788,   702,
    1326,  2189,   593,   604,   595,  1369,   616,    67,    68,  1679,
     617,  1327,   170,   171,   644,   645,  1673,  1061,   621,   172,
    2208,   173,  2047,   625,   956,  1099,  1335,  1306,  1868,   553,
    1761,  1762,   637,  1803,   957,   958,  2218,   642,   244,    67,
      68,   689,  1804,  1805,   685,  1239,   174,    67,    68,   313,
    1401,  1402,  1307,  1314,   643,   438,  1210,  2826,   648,  2827,
      67,    68,    67,  1181,  1403,  2237,   959,   680,  2697,  2698,
      67,    68,  2701,  1408,  2703,  1778,  1779,  1869,   681,  1680,
     245,   683,   749,   752,   755,   710,  2708,  2709,  1062,  1806,
     246,  2713,  2714,  1472,   697,  2717,  1100,   713,   704,  1763,
    2718,  2719, -1248,  1507,  1404,    67,  1618,   839,  1508,  1764,
    1765,   281,   175,   705,  1498,   686,   282,   712,   283,  1731,
     842,   718,  1780,  1504,  2623,   724,  1635,  1188,  1189,  1509,
    1510,   742,  1511,  1512,   743,   314,   766,  1532,   439,  1533,
     767,  1766,   770,  1513,  1534,  1535,  1536,   315,  1681,  1682,
    2753,  1814,   778,  2754,  1542,  1514,  1515,  1543,  2757,  1546,
    1815,  1816,  1683,  1516,  2760,   794,  1517,    72,   714,  2763,
     795,  1063,    96,    73,  2309,  1548,   808,  1549,   811,  1101,
     812,  1552,  1553,  1518,    67,    68,  1191,  1192,    97,  1732,
    1519,  1520,    67,  1265,  1521,  1559,  1560,  1540,  1541,   813,
    1562,  1563,  1684,   818,  1478,   821,  1564,  1817,  1565,    74,
     823,  1567,   427,  1568,   845,   429,  1450,  1622,  1807,  1808,
     844,  1825,  1826,   852,  2124,  2125,    86,   861,   316,   863,
      67,    68,  1862,    75,  1406,  1407,   884,    86,   870,  2807,
    2529,   317,  2810,  1451,  1900,  1901,  1452,  2133,  2134,  1453,
    1615,  1781,  1782,  1522,  1616,   868,  1617,  1619,  1733,  1734,
    1621,   889,   894,  2821,    98,   899,  1545,   900,  1827,    67,
      68,  2126,  1735,  1406,  1407,  1627,  1454,  2828,   901,    76,
    2829,  2830,    67,    68,  1856,   925,  1630,  1809,  1632,  1633,
    1634,  1636,   827,   828,  2135,  1639,  1640,  1810,  1811,   902,
    2383,   927,  1812,  1648,  1455,    99,  1523,  1456,   926,  2392,
    1653,  1524,  1736,   726,  1654,  1655,  1656,   929,  2401,   931,
    1783,   933,   936,    77,   937,  1662,  1525,   941,  1665,  1813,
    1784,  1785,    67,    68,  1860,  1526,  1818,  1819,   100,  1675,
      67,    68,  1677,   945,  2297,   947,   427,   428,   429,    87,
      67,    68,  1878,   948,  1406,  1407,  1571,  1572,  1126,   949,
      87,   961,  1786,  1527,  1528,    67,    68,  1905,   946,   727,
     960,    88,   728,   973,   981,    89,    67,    68,  1907,   983,
    1406,  1407,    88,  1629,  1529,  1730,  2043,   984,  1737,   991,
     992,  1738,  1739,   993,  1740,  1049,  1741,  1828,  1829,  1058,
    2127,  2128,  1743,  1060,  1744,  1820,  1065,  1141,  1066,   729,
    1115,  1750,  1117,  2329,  1116,  1821,  1822,  2489,  1128,  1457,
    1823,  1142,  1086,  2136,  2137,    90,  1140,  1109,  1530,  1143,
     447,  1144,  2615,  2502,  2345,  2618,    90,  2620,  2507,  1669,
    1145,  1148,  1146,   249,   730,  1147,  1149,  1824,  1458,  1166,
    2632,  2633,    67,    68,  1686,  1171,  1172,  1173,  1174,  1199,
    1175,  1176,    91,  1177,  1190,  1193,  1830,  2647,   110,  2129,
      92,    93,  1209,    91,  1213,  1459,  1831,  1832,  1216,  2130,
    2131,    92,    93,  1217,  1573,  1574,  1857,  1221,  1859,  1861,
    1408,   731,  2138,  1223,   732,  1224,  1257,  1236,  1237,  1258,
    1233,   448,  2139,  2140,  1259,   112,  1262,  1264,  1833,  1263,
    1872,  2132,  1575,  1316,  1875,  1310,  1328,  1408,   733,  1318,
    1322,   734,   449,   450,   451,  1332,  1410,  1333,  1336,   250,
     452,  1337,   735,  1338,  2141,  1346,  1347,  1351,  1904,  1906,
    1408,   251,  1348,   453,  1249,  1349,  1353,  1352,  1914,   454,
     113,  1354,  1925,  1355,  1361,  1362,  1413,  1414,  1364,   455,
    1933,  1365,  1371,  1373,  1374,  1376,  2142,  2143,  1389,  1390,
    1440,  1391,  1392,  1222,  1940,  1395,   252,  1396,  1397,  1942,
    1435,  1441,  1460,  1944,  1463,  1947,  1948,  1464,  1950,  1952,
    1953,  1465,  1956,  1855,  1480,  1959,  1960,  1961,  1962,  1963,
    1964,  1965,  1966,  1969,  1971,  1972,   115,  1484,  1974,  1975,
    1976,  1977,  1486,  2144,  1466,   473,  1485,  1491,  1983,  1984,
    1492,  1493,   253,  1987,  1988,  1989,  1502,  1503,  1991,  1992,
    1494,  1500,  1539,   474,  1551,   254,  1557,  1558,  2611,  1570,
    1994,  1995,  1583,  1996,  1997,  1566,  2619,  1569,  1588,  1589,
     475,  1594,  1911,  1595,  1596,  1913,  1597,  1626,  1606,  2631,
    1607,  2521,   476,   120,  2636,  1032,  1931,  1608,   121,  1609,
    2525,  1610,   456,  1611,  1937,  1624,  1625,  1631,  1637,  1033,
     477,  1939,  1638,  1649,   478,  1644,  1650,  1087,  1034,  1651,
    1658,  2017,  2018,  2019,  1663,  1088,   479,  2021,  1035,  1666,
    1667,  1089,  2023,  2026,  1670,  2028,  2029,  2030,  1676,  2031,
    2032,  -447,  2034,  1687,  1678,  2037,  2038,  1690,  1700,  1714,
    2543,  1705,  1090,  2545,  2041,  1723,  2546,   222,  2547,  1036,
    1724,  2045,  1748,  1729,  1742,  1749,   480,  2050,  2051,  1754,
    1773,  1776,  2145,  2146,  1711,  2053,  1091,  1787,  1789,  1037,
    1791,  2054,   223,  1835,  1092,  1834,  1836,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   224,  1561,  2082,  1837,  1841,
    1842,  1093,   225,  1844,  1038,  1845,  1846,  1849,  1501,  1094,
    1852,  1870,   226,   227,  1874,  1880,  1881,  1891,  1892,   228,
    2025,  2147,  1889,  1886,  1890,  2096,  2097,  1893,  1895,  1896,
    2099,  2148,  2149,  1897,  1898,  1899,  2102,  1902,  1923,  1945,
    1039,  1929,   229,  1943,  1949,  1957,  1980,  1958,  1993,  1998,
    1095,  1973,  1999,  2000,  2036,  2002,  2003,  2004,  2005,   230,
    2006,  1096,  1547,  2150,  1040,  2007,  2008,  2009,  2010,  2013,
    1415,  2011,  1554,  2012,   231,  2014,  2015,  1097,  2016, -1250,
    2033,   232,  2035,  2493,  2039,  2067,  2052,  2055,  2318,  2057,
    2058,  2059,  2060,  2091,  2092,  2073,  1416,  2093,  2094,  2098,
    2078,   233,  2100,  2101,  1041,  2104,  1042,  2105,  2106,  2108,
    2109,  2151,  2110,  2113,  2516,  2115,  2116,  2117,  2121,  2784,
    2122,  1661,  2123,  2152,  2153,  2154,  2158,  2159,  2162,  1417,
    2161,  2163,  2164,  2165,  2169,  1418,  2170,   234,  2172,  2174,
    2175,  1419,  2176,  2203,  2173,  2204,  2180,  2206,  2181,  1408,
    2183,  2184,  2185,  2186,  2190,  2191,   826,  2192,  2194,  2195,
    1420,  2197,  2198,  2494,  2200,  1408,  2219,  2220,  2221,  2222,
    2223,  2224,  2225,  2226,  2227,  2207,   807,  2209,  2213,  2217,
    1421,  2228,  2229,  2495,  2230,  2231,   235,  1645,  1646,  2232,
    2233,  2236,  2235,  2289,  1408,  1422,  2294,   236,  2295,  2242,
    2298,  2304,  2734,  2319,   290,  2320,  2321,  2324,  2496,  2332,
    2335,  2243,  2336,  2337,  2338,  2364,  2365,  2366,  2367,  2249,
    2369,  2657,  2371,  2373,  2376,  1423,   237,  2378,  2379,  2380,
    2254,  2255,  2256,  2257,  2258,  2259,  2260,  2261,  2262,  2263,
    2384,  2385,  2276,  2277,  2278,  2279,  2280,  2281,  2282,  2283,
    2284,  2285,  2286,  2287,  2386,  2290,  2387,  2291,  2292,  2293,
    2388,  1424,  2389,  2393,  2394,  2402,  2211,  2395,  2396,  2215,
    2397,  2398,  2403,  2303,  1425,  2404,  2411,  2414,  2422,  2425,
    2428,  2429,  2431,  2434,  2723,  1426,  2435,   444,  2436,  2439,
    2445,  2449,  2466,  2523,  2524,  2534,  2497,  2498,  2499,  2501,
    2531,  2532,  2537,  1408,  2310,  2538,  2539,  2311,  2540,  2312,
    2548,  2314,  2542,  1427,  2316,  2549,  2317,  2551,  2552,  2553,
    2562,  2566,  2573,  2322,  2323,  1428,  2579,  1429,  1430,  2583,
    2327,  2586,  2328,  2593,  2601,  2613,  2331,  2624,  2625,  2333,
    2626,  2627,  2628,  2629,  2728,  2644,  2651,  2653,  2655,  2656,
    2696,  1927,  2662,  2667,  2702,  2768,  2705,   510,  2723,   517,
     520,  2706,   525,   529,  2707,  2712,  2729,  1431,  2726,  1853,
    2727, -1118,  2737,  2747,  2755,  1858,  2758,  2761,  2772,  2268,
    2770,  2771,  2780,  2783,  2670,  2793,  2794,  2801,  2372,  2809,
     591,  2813,  2814,  2816,  2820,  2822,  2500,  1871,  2823,  2824,
    1873,  2825,  2720,  2769,  1877,  2765,     0,   606,   611,  1150,
       0,     0,     0,     0,     0,     0,     0,     0,  1986,     0,
       0,     0,     0,     0,     0,  1903,     0,     0,     0,     0,
       0,  1909,     0,     0,     0,     0,     0,     0,     0,  1924,
       0,  2437,     0,  1928,     0,     0,     0,     0,  2334,     0,
       0,     0,  1934,  1935,     0,     0,     0,     0,     0,   691,
       0,     0,     0,  1941,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   711,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2443,  2370,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2450,  2451,  2452,  2453,  2454,
    2455,  2456,  2457,  2458,  2459,  2460,     0,     0,     0,     0,
       0,  2464,     0,     0,     0,     0,     0,     0,  2470,     0,
       0,  2474,     0,  2774,  2776,     0,     0,  2481,     0,     0,
    2483,  2484,  2485,  2486,  2487,  2488,  1408,  2490,  2491,  2492,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1408,  2503,  2504,  2505,  2506,  1408,  2508,  2509,
    2510,  2511,  2512,  2513,     0,  2515,     0,  1408,  2519,  2520,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   822,   695,  2526,     0,  2441,     0,
    2528,     0,     0,     0,  2530,   829,     0,     0,  2533,     0,
       0,     0,     0,     0,   837,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2462,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2472,     0,     0,
       0,     0,     0,  2479,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   779,     0,     0,     0,     0,  2554,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2264,
       0,     0,     0,   873,     0,     0,   875,   876,     0,     0,
    2265,     0,     0,     0,     0,     0,     0,     0,     0,   880,
       0,     0,     0,     0,   883,     0,     0,     0,     0,     0,
       0,     0,     0,   895,   897,  1087,  2266,     0,     0,     0,
       0,     0,     0,  1088,     0,     0,     0,     0,     0,  1089,
       0,  2595,     0,     0,     0,  2597,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2598,  2599,     0,     0,     0,
    1090,     0,  2603,     0,  2267,     0,     0,     0,     0,  2606,
       0,     0,     0,     0,     0,     0,     0,  1408,     0,  2612,
       0,     0,  2616,  2617,  1091,  1408,     0,     0,     0,   942,
     943,   944,  1092,     0,  2240,     0,     0,     0,  1408,     0,
       0,  2634,  2635,  1408,  2637,  2638,  2639,  2640,  2641,  2244,
    2245,  2643,     0,     0,  2247,  2646,     0,     0,     0,     0,
    2251,     0,  2253,     0,     0,   871,  2654,     0,     0,  1093,
       0,  2658,   877,     0,     0,   878,     0,  1094,     0,     0,
     879,     0,     0,  2591,   881,     0,     0,  2212,  1085,     0,
    2671,  1186,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2302,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1095,     0,
       0,     0,     0,  2238,     0,  2682,     0,     0,     0,  1096,
       0,  2687,     0,  2689,     0,     0,     0,     0,     0,  2693,
       0,     0,  1342,     0,     0,  1097,   940,     0,     0,     0,
    2315,     0,  1408,  2700,     0,  2268,     0,  2269,     0,     0,
       0,     0,     0,     0,     0,  2330,     0,     0,     0,     0,
    1408,  2711,     0,  2742,  1393,  2715,     0,     0,     0,  2340,
    2341,  2342,     0,     0,  2344,     0,  2346,  2347,     0,     0,
    2349,  2350,  2351,     0,  2733,  2353,  2354,     0,     0,  2357,
       0,  2359,  2360,     0,  2362,     0,     0,     0,     0,     0,
       0,  2270,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2745,     0,     0,     0,     0,     0,  2750,
       0,  2752,     0,     0,     0,     0,     0,  2685,  2756,     0,
       0,     0,     0,  2759,  1226,  2691,  1123,     0,  2762,     0,
       0,     0,     0,  1129,     0,     0,  1231,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2773,
    2775,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1408,     0,
       0,  1408,  2786,  1241,  1242,  2787,     0,  1408,  2789,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2795,
    2796,  2797,  2798,     0,     0,     0,     0,  1261,  2438,     0,
       0,  2442,  2808,     0,     0,  2811,  2446,     0,     0,     0,
    2447,     0,  2815,     0,  2817,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2463,     0,     0,     0,     0,     0,  1408,     0,  1408,     0,
       0,     0,  2467,  2468,  2469,     0,  1331,  2473,     0,  2475,
    2476,     0,     0,  2480,     0,  2482,     0,  1225,     0,     0,
       0,     0,     0,     0,  1227,     0,     0,     0,     0,     0,
       0,  2782,     0,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,     0,     0,     0,  2803,     0,     0,  2806,     0,     0,
    1244,     0,     0,     0,     0,  1248,  2527,     0,  1251,     0,
       0,  1477,  2536,     0,     0,     0,   109,     0,     0,     0,
    1260,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   110,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2544,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   111,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1538,     0,     0,     0,     0,   112,     0,
       0,     0,     0,  1544,     0,     0,     0,     0,     0,     0,
       0,  2522,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1751,  1752,  1753,     0,     0,     0,     0,
       0,     0,     0,  1755,  1756,  1757,     0,     0,     0,     0,
    1768,  1769,  1770,   113,     0,  1771,  1772,     0,  1774,  1775,
    1398,     0,     0,     0,     0,     0,  2592,     0,     0,     0,
       0,   114,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2600,  1847,  1848,
       0,     0,  1850,  1851,     0,     0,     0,  2605,     0,     0,
    2604,     0,     0,  2608,  2609,     0,     0,     0,  2607,   115,
       0,     0,     0,  1620,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1628,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   116,  2642,     0,     0,
       0,     0,     0,     0,   117,     0,     0,     0,     0,     0,
     118,   119,     0,  1652,     0,     0,   120,     0,     0,     0,
       0,   121,     0,     0,  1659,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1685,     0,     0,     0,     0,  1693,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2683,     0,     0,     0,
       0,     0,     0,     0,     0,  2630,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2695,     0,     0,     0,
       0,     0,     0,     0,   122,  2648,     0,     0,     0,  2652,
       0,     0,  1623,     0,     0,     0,     0,     0,     0,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,     0,     0,
       0,  1647,     0,   152,     0,     0,     0,   153,   154,     0,
       0,     0,     0,     0,     0,     0,  1657,     0,     0,     0,
    2743,     0,  2744,     0,  2746,     0,  2748,     0,  2749,     0,
    2751,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1854,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2779,     0,
    1876,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1359,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1910,
       0,     0,  1912,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1930,  1932,     0,  2812,     0,     0,     0,
       0,  1936,     0,     0,     0,     0,     0,     0,  1938,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   649,   650,     0,     0,     0,     0,     0,
       0,  2103,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2111,     0,     0,     0,  1978,     0,
       0,  1981,  1982,     0,  2114,     0,     0,     0,     0,     0,
       0,  1990,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2792,     0,     0,     0,     0,     0,     0,   651,
       0,     0,     0,     0,     0,   652,     0,     0,     0,     0,
       0,     0,   653,     0,   654,     0,     0,     0,     0,   655,
       0,     0,   656,     0,     0,     0,     0,     0,   657,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   658,     0,
       0,     0,  1926,     0,   659,     0,  2199,     0,     0,     0,
    2020,     0,     0,   660,     0,     0,     0,  2024,     0,     0,
       0,     0,     0,     0,     0,    67,    68,     0,     0,   661,
       0,     0,     0,     0,     0,  2040,     0,     0,     0,     0,
       0,   110,     0,     0,     0,     0,     0,     0,     0,   662,
       0,  2049,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1979,   663,     0,     0,     0,     0,  1985,
    2056,     0,     0,   664,   665,  2061,     0,     0,  2063,     0,
    2064,  2065,  2066,  2068,     0,     0,  2070,     0,     0,  2071,
       0,     0,  2072,  2074,   666,  2075,  2076,  2077,  2079,     0,
    2080,  2081,     0,     0,     0,     0,  2083,  2084,  2085,     0,
       0,  2086,  2087,     0,     0,   667,     0,  2088,  2089,     0,
       0,     0,  2090,   113,     0,     0,     0,  2095,   668,     0,
     669,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   670,     0,     0,     0,  2022,   671,     0,
       0,     0,     0,  2027,   672,     0,     0,     0,     0,     0,
       0,   673,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2042,     0,   115,
     674,     0,     0,     0,  2048,     0,     0,     0,     0,     0,
       0,     0,     0,   675,   676,     0,   677,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2062,     0,     0,     0,     0,     0,     0,     0,  2069,     0,
       0,     0,     0,     0,     0,  1767,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   678,  1777,     0,     0,
       0,   121,     0,     0,     0,     0,     0,  2202,     0,     0,
       0,  2205,   974,     0,     0,  1838,  1839,   975,     0,     0,
       0,     0,     0,  2210,     0,     0,  2214,     0,     0,  2374,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2234,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2406,
    2407,  2408,  2409,  2410,     0,  2412,  2413,     0,     0,     0,
    2417,  2418,  2419,  2420,  2421,     0,  2423,  2424,     0,     0,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,  2288,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2201,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2216,     0,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,     0,  2326,     0,     0,  2239,     0,  2241,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2246,     0,  2248,     0,     0,
       0,  2250,     0,  2252,     0,     0,     0,     0,    67,    68,
       0,     0,     0,  2356,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   110,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2296,   285,     0,  2300,  2301,     0,     0,
       0,     0,     0,     0,     0,  2305,     0,     0,     0,     0,
       0,   112,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2555,     0,     0,  2557,  2558,  2559,  2560,  2561,
       0,  2563,  2564,     0,     0,     0,     0,     0,     0,  2313,
     110,     0,     0,  2568,  2569,  2570,  2571,  2572,     0,  2574,
    2575,     0,  2577,     0,     0,  2325,   113,     0,     0,     0,
       0,     0,  2580,  2581,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2584,     0,     0,  2339,     0,     0,     0,
     515,  2343,   528,     0,     0,  2440,     0,  2348,  2444,     0,
       0,     0,  2352,     0,     0,     0,  2355,   110,  2448,  2358,
       0,     0,  2361,     0,  2363,     0,     0,     0,     0,     0,
    2368,     0,   115,     0,  2461,     0,     0,  2465,     0,     0,
       0,     0,   113,     0,  2471,     0,     0,     0,     0,  2477,
    2478,     0,     0,     0,   112,     0,  2112,     0,     0,     0,
       0,     0,     0,     0,  2118,  2119,     0,     0,     0,   286,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2155,
    2156,     0,     0,     0,     0,     0,     0,     0,     0,   120,
    2166,  2167,     0,     0,   121,     0,     0,     0,   115,   113,
       0,  2177,  2178,     0,   287,     0,     0,     0,     0,     0,
       0,  2187,  2188,     0,     0,     0,     0,  2193,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2196,     0,     0,
       0,     0,  2673,     0,     0,     0,     0,     0,  2541,     0,
       0,     0,     0,  2676,     0,  2677,     0,     0,     0,  2679,
       0,     0,     0,     0,     0,   115,     0,     0,     0,     0,
     121,     0,     0,     0,   288,     0,     0,  2550,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   344,   120,     0,     0,     0,     0,   121,   345,     0,
       0,     0,     0,  2514,     0,     0,   516,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2738,
    2590,     0,  2739,     0,     0,  2740,     0,  2741,     0,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,     0,     0,     0,
       0,  2610,     0,   896,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2622,     0,     0,     0,     0,   110,     0,
       0,     0,     0,     0,     0,     0,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2666,     0,     0,     0,     0,     0,     0,
       0,     0,  2669,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2589,     0,     0,     0,     0,     0,     0,  2594,
     113,     0,     0,  2596,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2684,  2686,  2375,  2688,     0,     0,
    2602,     0,  2690,  2692,     0,     0,  2377,  2694,     0,     0,
    2381,  2382,     0,     0,     0,     0,     0,     0,     0,  2390,
    2391,     0,     0,     0,     0,     0,     0,     0,  2399,  2400,
       0,     0,     0,   346,  2405,   347,   115,     0,     0,     0,
       0,  2716,     0,     0,  2415,  2416,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2426,  2427,     0,     0,     0,
       0,     0,     0,  2735,     0,     0,  2430,     0,  2736,     0,
       0,     0,     0,     0,     0,  2432,     0,  2433,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   121,     0,
       0,     0,     0,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2781,     0,
       0,     0,     0,     0,     0,     0,     0,  2704,     0,     0,
       0,     0,     0,     0,     0,  2790,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2802,     0,     0,  2805,     0,     0,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,     0,     0,     1,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     2,     0,
       0,     3,     0,     4,     0,     0,     0,     0,     0,     0,
       0,  2764,     0,   110,     0,     0,     5,     0,     0,  2556,
       0,     6,     7,     0,     8,     9,    10,     0,     0,  2565,
    2777,  2778,     0,     0,    11,     0,     0,     0,  2567,     0,
       0,    12,     0,    13,    14,     0,     0,  2576,     0,     0,
       0,     0,    15,    16,  2578,     0,     0,     0,     0,   501,
     502,     0,     0,   503,     0,  2582,     0,     0,     0,   607,
     110,  2585,     0,     0,  2587,     0,  2804,  2588,     0,     0,
       0,     0,    17,     0,     0,   504,     0,     0,     0,     0,
       0,     0,     0,     0,    18,   113,     0,  2818,    19,     0,
    2819,    20,     0,     0,     0,     0,    21,    22,     0,   608,
       0,     0,     0,    23,     0,     0,     0,     0,     0,    24,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    25,     0,     0,    26,    27,    28,     0,     0,
      29,    30,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   115,   113,     0,    31,     0,     0,     0,     0,     0,
       0,     0,     0,   505,     0,     0,   609,     0,     0,    32,
      33,    34,     0,     0,     0,     0,     0,     0,     0,     0,
     506,     0,     0,    35,     0,     0,     0,     0,     0,     0,
       0,    36,     0,     0,    37,     0,     0,    38,     0,    39,
     507,    40,     0,     0,     0,  2672,    41,     0,   115,  2674,
       0,     0,     0,   121,     0,     0,  2675,     0,     0,    42,
       0,     0,  2678,     0,     0,    43,  2680,     0,     0,  2681,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    44,    45,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    46,     0,    47,     0,     0,     0,     0,
       0,    48,   508,     0,    49,    50,     0,     0,     0,     0,
     121,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    51,     0,     0,     0,     0,
       0,    52,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
       0,   509,     0,     0,     0,     0,   610,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   996,   997,   998,
       0,     0,     0,     0,     0,     0,     0,     0,  1269,  1270,
    1271,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   999,  1000,     0,     0,  1001,
       0,     0,  1002,     0,     0,     0,  1272,  1273,     0,  1003,
    1274,   110,     0,  1004,     0,     0,     0,  1275,     0,     0,
    1276,  1005,  1006,     0,  1277,     0,     0,     0,     0,  1007,
    1008,     0,  1278,  1279,     0,     0,     0,     0,     0,     0,
    1280,     0,     0,     0,     0,     0,  1009,     0,   112,     0,
       0,     0,  1010,     0,     0,     0,  1011,  1012,   110,     0,
    1013,     0,     0,     0,     0,     0,     0,  1281,  1282,     0,
       0,  1283,     0,     0,     0,     0,     0,  1014,     0,     0,
       0,     0,     0,     0,     0,     0,   110,     0,  1284,     0,
       0,     0,     0,   113,     0,   112,     0,  1015,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1285,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1016,
       0,     0,     0,  1330,     0,     0,     0,     0,   110,     0,
    1286,     0,     0,     0,     0,     0,     0,     0,     0,  1287,
     113,     0,  1017,     0,     0,     0,     0,     0,     0,   115,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   113,     0,
    1018,     0,  1019,     0,     0,     0,     0,  1020,  1021,     0,
       0,  1288,     0,  1289,     0,     0,     0,     0,  1290,  1291,
       0,  1022,  1023,     0,     0,     0,   115,     0,     0,     0,
       0,  1024,  1025,  1292,     0,     0,   120,     0,     0,     0,
     113,   121,     0,  1293,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   115,     0,     0,     0,  1026,     0,
    1027,     0,     0,     0,     0,     0,     0,     0,     0,  1294,
       0,  1295,  1028,     0,  1029,     0,     0,     0,     0,     0,
    1030,  1296,     0,   120,     0,     0,     0,     0,   121,     0,
       0,  1297,     0,     0,     0,     0,   115,     0,   519,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1031,     0,   121,     0,     0,     0,
       0,     0,     0,     0,     0,  1298,     0,     0,     0,     0,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   121,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   179,     0,     0,   180,     0,
     181,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   182,
       0,   183,   184,   185,     0,     0,     0,     0,     0,     0,
       0,   186,     0,   187,     0,     0,     0,     0,   188,     0,
     189,   190,   191,     0,     0,     0,     0,   192,     0,   193,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   194,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   195,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   196,   197,     0,     0,
     198,     0,     0,     0,   199,     0,   200,  1367,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   201,   202,     0,
       0,   203,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   204,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   205,   206,     0,     0,
       0,     0,     0,     0,   207,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   208,     0,   209,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   210,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   211,   212,
       0,     0,     0,     0,     0,     0,     0,   213,     0,     0,
       0,     0,     0,     0,   214,     0,     0,     0,     0,     0,
     215,     0,   216,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,  1368,     0,     0,     0,     0,     0,     0,   217
};

static const yytype_int16 yycheck[] =
{
       4,    50,   492,     4,  1453,  1143,     5,  1145,    12,  1654,
      17,  1656,     4,   669,   664,   665,     5,     3,     4,     5,
      32,     5,     3,     4,    32,     4,     4,     5,    50,    33,
      32,     5,     5,  1171,  1172,  1173,    40,     3,     4,     3,
       4,     0,     4,    66,    40,    49,     3,     4,    52,     3,
       4,  2550,    46,    21,    58,    36,     3,     4,    62,   968,
       4,    65,   971,    97,    14,    69,    70,    27,    40,    73,
      36,     4,    76,    77,   997,   121,    80,    99,    40,   988,
      84,   168,    20,     3,     4,    89,   108,   131,    66,     3,
       4,    56,     4,     3,     4,     3,     4,    27,   102,   131,
     104,   105,   106,   107,   121,   133,     4,     5,    93,    61,
      88,    61,    17,     6,   136,   111,     3,     4,    48,   123,
      27,    51,   240,     4,   168,    99,   111,   103,   281,     3,
       4,   105,    62,  2722,     5,    17,   223,    33,    66,   111,
     258,   119,     4,     3,     4,     3,     4,   144,     5,   111,
      17,   132,    16,   193,   158,    85,    33,   157,    78,   182,
     165,   139,   877,   878,   879,   166,   132,    21,   120,   228,
      20,     5,   102,     5,     4,    61,    36,  2766,   182,   223,
      40,    21,    40,   187,   184,    66,     4,     3,     4,     3,
       4,   223,     3,     4,   240,     3,     4,     4,   194,    31,
     287,    59,   187,   210,    66,   157,   246,    57,   168,    21,
      61,   187,   124,   123,   193,   243,    98,     3,     4,   236,
     116,   119,   194,   257,   202,   940,    64,   120,    66,    21,
     208,   209,   194,   187,     5,   279,    66,   194,   119,   193,
     190,     5,   246,    14,    15,    56,   295,   279,    21,   214,
     242,   111,   172,   111,   159,    21,   261,   119,   262,   263,
     117,   917,    27,   223,   260,   288,   278,   246,   236,   291,
     278,   244,   132,   277,   268,   229,   278,   266,  2777,  2778,
     242,   285,   286,   290,   288,   289,    16,   291,   260,   119,
      61,   187,   204,   189,   232,   191,   192,   301,   282,   253,
     187,   119,   301,   199,   202,   309,   310,   308,   289,   259,
     208,   209,   119,   187,   292,   301,   223,   269,   214,   269,
     298,   202,   281,   289,   298,   289,   246,   208,   209,   333,
     334,   335,   289,   337,   194,   192,   194,   341,   342,   283,
     202,    27,   289,   210,   182,   299,   208,   209,   352,   353,
     283,   301,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   134,    27,   341,   368,  1021,   344,   345,   346,   373,
     374,   242,   202,    63,   224,   289,    37,   381,   208,   209,
     384,   289,   236,  1039,   202,   242,    47,   237,   342,   343,
     208,   209,   288,   279,   292,   202,   236,   401,   402,    63,
     298,   208,   209,   214,   408,   409,   410,   223,   412,   266,
     308,   292,   299,    74,   104,   223,   302,   347,    30,   190,
     191,  1071,   426,   290,   236,   299,   430,   285,   279,   289,
     292,   435,   436,   437,   438,   439,   440,   223,   442,    63,
     104,   445,   446,   341,   236,  1583,     4,   345,   346,   299,
     288,   302,  1102,     4,   458,   342,   343,    37,   223,     4,
     341,   225,   292,   236,   345,   346,   196,    47,   342,   343,
     236,    44,    30,   121,   292,  1384,   283,   121,  1387,   341,
     104,   167,    94,   345,   346,   292,     5,    66,   259,   150,
     263,  1414,     4,     5,    74,    27,   150,    87,   269,   270,
     124,    88,   167,   274,     4,    56,    45,     4,   512,   513,
     211,   341,     3,     4,    87,   345,   346,    61,  1441,   193,
      59,    13,   228,   341,   138,   186,   530,   345,   346,  1244,
     301,    61,     5,    22,   341,    87,  1251,    56,   345,   346,
     589,  1464,    81,   233,    17,    12,    65,   443,    60,     0,
     236,   163,     5,   557,    66,     5,    56,   247,   248,    48,
      49,   100,   176,    61,    14,    15,    37,   157,   229,   233,
     150,   236,   121,    62,     3,     4,   120,    78,   117,   253,
     629,   120,   586,   247,   248,    70,    53,   121,   236,   250,
     120,   255,   236,   279,     3,     4,   121,    61,    61,   648,
     301,   255,   114,   161,    71,   157,   186,   146,   147,   233,
     265,    61,     3,     4,   279,   105,   620,     5,   130,   192,
     109,   110,   120,   247,   248,   286,    14,    15,   138,    66,
      34,   143,   123,   100,   246,  1291,   168,   149,   150,   251,
     536,   302,   646,   155,     4,    61,  1302,    22,   193,   339,
     340,   118,    12,   211,     5,   122,   120,   120,     4,   663,
     199,    61,   666,   214,    61,    61,   176,   134,   207,    61,
     250,   172,   568,    61,    49,   339,   340,    52,   236,  2324,
     684,   685,   686,   687,   169,    61,   690,   236,   692,    15,
     694,   223,   696,   130,   206,   214,    22,   189,   242,    14,
      15,    27,   236,   107,   120,   195,     5,    82,    34,   138,
       5,   236,    31,   225,   214,   339,   340,   229,   155,   231,
     120,   770,   302,   120,   120,   269,   265,   266,   120,   169,
     201,    54,     3,     4,   223,   110,   225,   177,   113,   269,
     190,   191,   254,   255,   120,   246,    61,   176,    74,     5,
     262,     3,     4,    29,   244,     5,   241,   118,   762,   763,
     194,   765,   766,   767,   768,   250,    30,    90,    44,   281,
      46,   269,     4,  2616,    14,    15,   780,   781,   117,   150,
     784,   785,   786,   787,   788,   789,   790,   791,   792,    66,
      88,  2634,   796,   797,   231,     3,     4,   206,   337,   203,
      76,   281,   190,   191,    12,   269,   269,    59,    84,   259,
      83,   815,   816,   817,   303,   206,   258,   140,   116,   269,
     270,    61,   289,   265,   274,   337,    99,   169,   832,   833,
     834,    82,   836,    33,   838,     6,   840,   163,   164,   165,
     166,   167,   168,   169,   281,   216,   172,   173,   174,   175,
     225,   301,   123,   269,  1763,     4,     5,   861,   105,   863,
    1998,  1999,  2000,    24,    25,  2491,   142,     3,     4,   269,
     874,   259,   269,   269,  1783,   190,   191,   269,   882,   254,
       5,   269,   270,   887,   255,    89,   274,   185,   258,  1798,
      16,  2517,  1801,   269,   203,   265,    66,   161,   902,   903,
    1809,   152,   200,  1812,    40,   229,   910,   280,   912,   913,
      89,  1820,  2755,   301,  1823,   919,   192,    88,  2761,   242,
     924,  1830,    72,   294,    31,   974,     5,     3,     4,    82,
       4,   935,   208,   209,   260,   261,    97,    40,     4,   215,
    1863,   217,  1657,     5,   259,    40,   950,   211,   195,   120,
     190,   191,     5,     5,   269,   270,  1879,     4,   256,     3,
       4,   287,    14,    15,    40,   861,   242,     3,     4,    26,
     221,   222,   236,    17,     5,   111,    12,  2820,     5,  2822,
       3,     4,     3,     4,   235,  1908,   301,     5,  2614,  2615,
       3,     4,  2618,   997,  2620,    14,    15,   244,     4,   152,
     298,     5,   328,   329,   330,     5,  2632,  2633,   111,    61,
     308,  2637,  2638,  1017,     4,  2641,   111,    40,     4,   259,
    2646,  2647,     0,    22,   275,     3,     4,   444,    27,   269,
     270,   340,   308,     4,  1038,   111,   345,     4,   347,    82,
     457,    97,    61,  1047,  2493,   120,    59,     4,     5,    48,
      49,     5,    51,    52,     4,   112,   266,  1061,   194,  1063,
       4,   301,     4,    62,  1068,  1069,  1070,   124,   221,   222,
    2696,     5,     4,  2699,  1078,    74,    75,  1081,  2704,  1083,
      14,    15,   235,    82,  2710,     4,    85,   187,   111,  2715,
       5,   194,    83,   193,  2017,  1099,     4,  1101,     4,   194,
       4,  1105,  1106,   102,     3,     4,     4,     5,    99,   152,
     109,   110,     3,     4,   113,  1119,  1120,     4,     5,     4,
    1124,  1125,   275,     4,  1020,     5,  1130,    61,  1132,   229,
       5,  1135,     9,  1137,   265,    11,    22,  1186,   190,   191,
       5,    14,    15,   169,    14,    15,    28,     4,   205,     4,
       3,     4,     5,   253,     7,     8,     4,    28,   169,  2785,
      59,   218,  2788,    49,     4,     5,    52,    14,    15,    55,
    1174,   190,   191,   172,  1178,   177,  1180,  1181,   221,   222,
    1184,   196,   196,  2809,   175,     5,  1082,     5,    61,     3,
       4,    61,   235,     7,     8,  1199,    82,  2823,     4,   299,
    2826,  2827,     3,     4,     5,   188,  1210,   259,  1212,  1213,
    1214,  1215,   432,   433,    61,  1219,  1220,   269,   270,   196,
    2129,    66,   274,  1227,   110,   216,   225,   113,   188,  2138,
    1234,   230,   275,    61,  1238,  1239,  1240,    66,  2147,    66,
     259,   223,     5,   343,   224,  1249,   245,     5,  1252,   301,
     269,   270,     3,     4,     5,   254,   190,   191,   249,  1263,
       3,     4,  1266,     4,  1979,     4,     9,    10,    11,   151,
       3,     4,     5,     4,     7,     8,    42,    43,   695,   196,
     151,     5,   301,   282,   283,     3,     4,     5,   614,   117,
      87,   173,   120,    87,     5,   177,     3,     4,     5,     4,
       7,     8,   173,  1199,   303,  1309,   177,     4,  1312,     5,
       5,  1315,  1316,     4,  1318,     5,  1320,   190,   191,    99,
     190,   191,  1326,    17,  1328,   259,     4,    97,     5,   157,
      17,  1335,     4,  2048,    17,   269,   270,  2260,     4,   225,
     274,     5,   668,   190,   191,   227,     4,   673,   347,     5,
      35,    87,  2485,  2276,  2069,  2488,   227,  2490,  2281,  1255,
       4,    87,     5,    26,   192,     5,     5,   301,   254,     4,
    2503,  2504,     3,     4,  1270,     5,     5,     4,     4,    12,
       5,     5,   264,     5,     4,     4,   259,  2520,    19,   259,
     272,   273,     5,   264,    12,   281,   269,   270,     4,   269,
     270,   272,   273,     4,   170,   171,  1410,     4,  1412,  1413,
    1414,   239,   259,     4,   242,     4,   166,     5,     5,     5,
     837,   106,   269,   270,     4,    56,     4,     4,   301,     5,
    1434,   301,   198,   254,  1438,    20,     5,  1441,   266,   254,
     283,   269,   127,   128,   129,     4,   236,     5,     5,   112,
     135,     5,   280,     5,   301,     4,     4,   267,  1462,  1463,
    1464,   124,     5,   148,   881,     5,     5,   267,  1472,   154,
     101,     5,  1476,     5,     4,     4,   236,   105,     5,   164,
    1484,     5,     5,     5,     5,     5,    14,    15,     4,     4,
     138,     5,     5,   819,  1498,     4,   159,     5,     5,  1503,
       5,   105,    40,  1507,   236,  1509,  1510,   105,  1512,  1513,
    1514,     5,  1516,  1409,    40,  1519,  1520,  1521,  1522,  1523,
    1524,  1525,  1526,  1527,  1528,  1529,   157,   240,  1532,  1533,
    1534,  1535,     5,    61,   210,    53,   210,     4,  1542,  1543,
       5,     5,   205,  1547,  1548,  1549,     4,     4,  1552,  1553,
     210,   210,     5,    71,     5,   218,     5,     5,  2481,     4,
    1564,  1565,     5,  1567,  1568,   111,  2489,   111,     5,     5,
      88,     4,  1468,     5,     5,  1471,     4,    12,     5,  2502,
       5,  2296,   100,   214,  2507,    66,  1482,     4,   219,     5,
    2305,     5,   277,     4,  1490,     5,     5,    12,     6,    80,
     118,  1497,     4,     4,   122,     5,     4,    91,    89,     4,
       4,  1615,  1616,  1617,     4,    99,   134,  1621,    99,    38,
      38,   105,  1626,  1627,     5,  1629,  1630,  1631,     4,  1633,
    1634,     0,  1636,   236,     5,  1639,  1640,   236,   138,   121,
    2355,   236,   126,  2358,  1648,     4,  2361,    19,  2363,   130,
     244,  1655,     4,   206,   196,     4,   174,  1661,  1662,     4,
       4,     4,   190,   191,   168,  1669,   150,     5,     5,   150,
       5,  1675,    44,     5,   158,   267,     5,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,    77,  1123,  1711,     5,     4,
       4,   195,    84,     5,   195,     4,     4,     4,  1044,   203,
       5,     5,    94,    95,     5,   236,   236,     4,     4,   101,
    1626,   259,   305,   236,   305,  1739,  1740,     4,     4,     4,
    1744,   269,   270,     4,   305,   305,  1750,     4,     4,   223,
     231,     5,   124,     5,   223,   223,     5,   223,     5,     5,
     244,   223,     5,     4,     6,     5,     5,     4,     4,   141,
       4,   255,  1098,   301,   255,     5,     5,     4,     4,     4,
      40,     5,  1108,     5,   156,     5,     5,   271,     4,     0,
       5,   163,     4,   348,     4,  1691,     4,     4,    12,     5,
       5,     5,     5,     5,     5,  1701,    66,     5,     5,     4,
    1706,   183,     5,     4,   295,     5,   297,     5,     5,     4,
       4,   267,     5,     4,   301,     5,     5,     5,     4,  2752,
       4,  1248,     5,     5,     5,     5,     4,     4,   267,    99,
       5,     5,     5,     5,     4,   105,     4,   219,     5,     5,
       5,   111,     5,  1857,   267,  1859,     4,  1861,     4,  1863,
       5,     5,     5,     5,     4,     4,   431,     5,     4,     4,
     130,     4,     4,   348,     5,  1879,  1880,  1881,  1882,  1883,
    1884,  1885,  1886,  1887,  1888,     5,   388,     5,     5,     5,
     150,     4,     4,   348,     5,     4,   268,  1223,  1224,     4,
    1904,     5,  1906,     5,  1908,   165,     4,   279,     4,  1913,
       4,     4,  2658,     5,    33,     5,     4,     4,   348,     5,
       5,  1925,     5,     5,     5,     5,     5,     5,     5,  1933,
       4,     6,     5,     4,     4,   195,   308,     5,     5,     5,
    1944,  1945,  1946,  1947,  1948,  1949,  1950,  1951,  1952,  1953,
       4,     4,  1956,  1957,  1958,  1959,  1960,  1961,  1962,  1963,
    1964,  1965,  1966,  1967,     5,  1969,     5,  1971,  1972,  1973,
       5,   231,     5,     4,     4,     4,  1872,     5,     5,  1875,
       5,     5,     4,  1987,   244,     5,     4,     4,     4,     4,
       4,     4,     4,     4,  2650,   255,     4,   116,     4,     4,
       4,     4,     4,     4,     4,     4,   348,   348,   348,   348,
       5,     5,     5,  2017,  2018,     4,     4,  2021,     5,  2023,
       4,  2025,     5,   283,  2028,     5,  2030,     5,     5,     4,
       4,     4,     4,  2037,  2038,   295,     4,   297,   298,     4,
    2044,     4,  2046,     4,     4,     4,  2050,     5,     4,  2053,
       5,     5,     5,     4,     6,     5,     5,     5,     5,     4,
       4,  1478,     5,     5,     4,   348,     5,   186,  2724,   188,
     189,     4,   191,   192,     4,     4,     4,   337,     5,  1405,
       5,   281,     4,     4,     4,  1411,     5,     4,     4,   281,
       5,     5,     4,     4,  2553,     5,     5,     5,  2102,     4,
     219,     5,     5,     5,     4,     4,  2271,  1433,     5,     5,
    1436,     5,  2648,  2724,  1440,  2720,    -1,   236,   237,   729,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1545,    -1,
      -1,    -1,    -1,    -1,    -1,  1461,    -1,    -1,    -1,    -1,
      -1,  1467,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1475,
      -1,  2200,    -1,  1479,    -1,    -1,    -1,    -1,  2054,    -1,
      -1,    -1,  1488,  1489,    -1,    -1,    -1,    -1,    -1,   288,
      -1,    -1,    -1,  1499,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   306,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2206,  2099,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2219,  2220,  2221,  2222,  2223,
    2224,  2225,  2226,  2227,  2228,  2229,    -1,    -1,    -1,    -1,
      -1,  2235,    -1,    -1,    -1,    -1,    -1,    -1,  2242,    -1,
      -1,  2245,    -1,  2733,  2734,    -1,    -1,  2251,    -1,    -1,
    2254,  2255,  2256,  2257,  2258,  2259,  2260,  2261,  2262,  2263,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2276,  2277,  2278,  2279,  2280,  2281,  2282,  2283,
    2284,  2285,  2286,  2287,    -1,  2289,    -1,  2291,  2292,  2293,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   423,   290,  2310,    -1,  2204,    -1,
    2314,    -1,    -1,    -1,  2318,   434,    -1,    -1,  2322,    -1,
      -1,    -1,    -1,    -1,   443,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2233,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2243,    -1,    -1,
      -1,    -1,    -1,  2249,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   348,    -1,    -1,    -1,    -1,  2372,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    -1,    -1,   512,    -1,    -1,   515,   516,    -1,    -1,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   528,
      -1,    -1,    -1,    -1,   533,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   542,   543,    91,    92,    -1,    -1,    -1,
      -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,   105,
      -1,  2445,    -1,    -1,    -1,  2449,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2459,  2460,    -1,    -1,    -1,
     126,    -1,  2466,    -1,   130,    -1,    -1,    -1,    -1,  2473,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2481,    -1,  2483,
      -1,    -1,  2486,  2487,   150,  2489,    -1,    -1,    -1,   608,
     609,   610,   158,    -1,  1911,    -1,    -1,    -1,  2502,    -1,
      -1,  2505,  2506,  2507,  2508,  2509,  2510,  2511,  2512,  1926,
    1927,  2515,    -1,    -1,  1931,  2519,    -1,    -1,    -1,    -1,
    1937,    -1,  1939,    -1,    -1,   510,  2530,    -1,    -1,   195,
      -1,  2535,   517,    -1,    -1,   520,    -1,   203,    -1,    -1,
     525,    -1,    -1,  2439,   529,    -1,    -1,  1873,   667,    -1,
    2554,     6,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1985,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   244,    -1,
      -1,    -1,    -1,  1909,    -1,  2589,    -1,    -1,    -1,   255,
      -1,  2595,    -1,  2597,    -1,    -1,    -1,    -1,    -1,  2603,
      -1,    -1,   955,    -1,    -1,   271,   591,    -1,    -1,    -1,
    2027,    -1,  2616,  2617,    -1,   281,    -1,   283,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2049,    -1,    -1,    -1,    -1,
    2634,  2635,    -1,  2682,   987,  2639,    -1,    -1,    -1,  2063,
    2064,  2065,    -1,    -1,  2068,    -1,  2070,  2071,    -1,    -1,
    2074,  2075,  2076,    -1,  2658,  2079,  2080,    -1,    -1,  2083,
      -1,  2085,  2086,    -1,  2088,    -1,    -1,    -1,    -1,    -1,
      -1,   337,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2687,    -1,    -1,    -1,    -1,    -1,  2693,
      -1,  2695,    -1,    -1,    -1,    -1,    -1,  2593,  2702,    -1,
      -1,    -1,    -1,  2707,   823,  2601,   691,    -1,  2712,    -1,
      -1,    -1,    -1,   698,    -1,    -1,   835,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2733,
    2734,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2752,    -1,
      -1,  2755,  2756,   872,   873,  2759,    -1,  2761,  2762,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2773,
    2774,  2775,  2776,    -1,    -1,    -1,    -1,   896,  2202,    -1,
      -1,  2205,  2786,    -1,    -1,  2789,  2210,    -1,    -1,    -1,
    2214,    -1,  2796,    -1,  2798,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2234,    -1,    -1,    -1,    -1,    -1,  2820,    -1,  2822,    -1,
      -1,    -1,  2239,  2240,  2241,    -1,   945,  2244,    -1,  2246,
    2247,    -1,    -1,  2250,    -1,  2252,    -1,   822,    -1,    -1,
      -1,    -1,    -1,    -1,   829,    -1,    -1,    -1,    -1,    -1,
      -1,  2747,    -1,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,    -1,    -1,    -1,  2780,    -1,    -1,  2783,    -1,    -1,
     875,    -1,    -1,    -1,    -1,   880,  2313,    -1,   883,    -1,
      -1,  1020,  2326,    -1,    -1,    -1,     4,    -1,    -1,    -1,
     895,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2356,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1072,    -1,    -1,    -1,    -1,    56,    -1,
      -1,    -1,    -1,  1082,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2297,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1336,  1337,  1338,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1346,  1347,  1348,    -1,    -1,    -1,    -1,
    1353,  1354,  1355,   101,    -1,  1358,  1359,    -1,  1361,  1362,
     995,    -1,    -1,    -1,    -1,    -1,  2440,    -1,    -1,    -1,
      -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2461,  1391,  1392,
      -1,    -1,  1395,  1396,    -1,    -1,    -1,  2471,    -1,    -1,
    2467,    -1,    -1,  2477,  2478,    -1,    -1,    -1,  2475,   157,
      -1,    -1,    -1,  1182,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1199,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   194,  2514,    -1,    -1,
      -1,    -1,    -1,    -1,   202,    -1,    -1,    -1,    -1,    -1,
     208,   209,    -1,  1232,    -1,    -1,   214,    -1,    -1,    -1,
      -1,   219,    -1,    -1,  1243,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1270,    -1,    -1,    -1,    -1,  1275,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2590,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2501,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2610,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   292,  2521,    -1,    -1,    -1,  2525,
      -1,    -1,  1187,    -1,    -1,    -1,    -1,    -1,    -1,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,    -1,    -1,
      -1,  1226,    -1,   341,    -1,    -1,    -1,   345,   346,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1241,    -1,    -1,    -1,
    2684,    -1,  2686,    -1,  2688,    -1,  2690,    -1,  2692,    -1,
    2694,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1409,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2742,    -1,
    1439,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     967,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1468,
      -1,    -1,  1471,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1482,  1483,    -1,  2790,    -1,    -1,    -1,
      -1,  1490,    -1,    -1,    -1,    -1,    -1,    -1,  1497,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     4,     5,    -1,    -1,    -1,    -1,    -1,
      -1,  1754,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1767,    -1,    -1,    -1,  1537,    -1,
      -1,  1540,  1541,    -1,  1777,    -1,    -1,    -1,    -1,    -1,
      -1,  1550,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2768,    -1,    -1,    -1,    -1,    -1,    -1,    60,
      -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    -1,    75,    -1,    -1,    -1,    -1,    80,
      -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,    89,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,
      -1,    -1,  1477,    -1,   105,    -1,  1849,    -1,    -1,    -1,
    1619,    -1,    -1,   114,    -1,    -1,    -1,  1626,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,    -1,    -1,   130,
      -1,    -1,    -1,    -1,    -1,  1644,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   150,
      -1,  1660,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1538,   165,    -1,    -1,    -1,    -1,  1544,
    1679,    -1,    -1,   174,   175,  1684,    -1,    -1,  1687,    -1,
    1689,  1690,  1691,  1692,    -1,    -1,  1695,    -1,    -1,  1698,
      -1,    -1,  1701,  1702,   195,  1704,  1705,  1706,  1707,    -1,
    1709,  1710,    -1,    -1,    -1,    -1,  1715,  1716,  1717,    -1,
      -1,  1720,  1721,    -1,    -1,   216,    -1,  1726,  1727,    -1,
      -1,    -1,  1731,   101,    -1,    -1,    -1,  1736,   229,    -1,
     231,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   244,    -1,    -1,    -1,  1622,   249,    -1,
      -1,    -1,    -1,  1628,   255,    -1,    -1,    -1,    -1,    -1,
      -1,   262,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1652,    -1,   157,
     281,    -1,    -1,    -1,  1659,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   294,   295,    -1,   297,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1685,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1693,    -1,
      -1,    -1,    -1,    -1,    -1,  1352,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   337,  1364,    -1,    -1,
      -1,   219,    -1,    -1,    -1,    -1,    -1,  1856,    -1,    -1,
      -1,  1860,   157,    -1,    -1,  1382,  1383,   162,    -1,    -1,
      -1,    -1,    -1,  1872,    -1,    -1,  1875,    -1,    -1,  2112,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1905,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2152,
    2153,  2154,  2155,  2156,    -1,  2158,  2159,    -1,    -1,    -1,
    2163,  2164,  2165,  2166,  2167,    -1,  2169,  2170,    -1,    -1,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,  1967,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1854,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1876,    -1,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,    -1,  2041,    -1,    -1,  1910,    -1,  1912,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1930,    -1,  1932,    -1,    -1,
      -1,  1936,    -1,  1938,    -1,    -1,    -1,    -1,     3,     4,
      -1,    -1,    -1,  2082,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1978,    39,    -1,  1981,  1982,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1990,    -1,    -1,    -1,    -1,
      -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2375,    -1,    -1,  2378,  2379,  2380,  2381,  2382,
      -1,  2384,  2385,    -1,    -1,    -1,    -1,    -1,    -1,  2024,
      19,    -1,    -1,  2396,  2397,  2398,  2399,  2400,    -1,  2402,
    2403,    -1,  2405,    -1,    -1,  2040,   101,    -1,    -1,    -1,
      -1,    -1,  2415,  2416,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2426,    -1,    -1,  2061,    -1,    -1,    -1,
      59,  2066,     4,    -1,    -1,  2204,    -1,  2072,  2207,    -1,
      -1,    -1,  2077,    -1,    -1,    -1,  2081,    19,  2217,  2084,
      -1,    -1,  2087,    -1,  2089,    -1,    -1,    -1,    -1,    -1,
    2095,    -1,   157,    -1,  2233,    -1,    -1,  2236,    -1,    -1,
      -1,    -1,   101,    -1,  2243,    -1,    -1,    -1,    -1,  2248,
    2249,    -1,    -1,    -1,    56,    -1,  1773,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1781,  1782,    -1,    -1,    -1,   194,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1796,
    1797,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   214,
    1807,  1808,    -1,    -1,   219,    -1,    -1,    -1,   157,   101,
      -1,  1818,  1819,    -1,   229,    -1,    -1,    -1,    -1,    -1,
      -1,  1828,  1829,    -1,    -1,    -1,    -1,  1834,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1844,    -1,    -1,
      -1,    -1,  2565,    -1,    -1,    -1,    -1,    -1,  2337,    -1,
      -1,    -1,    -1,  2576,    -1,  2578,    -1,    -1,    -1,  2582,
      -1,    -1,    -1,    -1,    -1,   157,    -1,    -1,    -1,    -1,
     219,    -1,    -1,    -1,   289,    -1,    -1,  2366,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,    16,   214,    -1,    -1,    -1,    -1,   219,    23,    -1,
      -1,    -1,    -1,  2288,    -1,    -1,   285,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2672,
    2439,    -1,  2675,    -1,    -1,  2678,    -1,  2680,    -1,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,    -1,    -1,    -1,
      -1,  2480,    -1,     4,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2492,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2542,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2551,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2437,    -1,    -1,    -1,    -1,    -1,    -1,  2444,
     101,    -1,    -1,  2448,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2593,  2594,  2113,  2596,    -1,    -1,
    2465,    -1,  2601,  2602,    -1,    -1,  2123,  2606,    -1,    -1,
    2127,  2128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2136,
    2137,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2145,  2146,
      -1,    -1,    -1,   238,  2151,   240,   157,    -1,    -1,    -1,
      -1,  2640,    -1,    -1,  2161,  2162,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2172,  2173,    -1,    -1,    -1,
      -1,    -1,    -1,  2662,    -1,    -1,  2183,    -1,  2667,    -1,
      -1,    -1,    -1,    -1,    -1,  2192,    -1,  2194,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,    -1,
      -1,    -1,    -1,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2747,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2622,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2764,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2780,    -1,    -1,  2783,    -1,    -1,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,    -1,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,
      -1,    44,    -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2716,    -1,    19,    -1,    -1,    59,    -1,    -1,  2376,
      -1,    64,    65,    -1,    67,    68,    69,    -1,    -1,  2386,
    2735,  2736,    -1,    -1,    77,    -1,    -1,    -1,  2395,    -1,
      -1,    84,    -1,    86,    87,    -1,    -1,  2404,    -1,    -1,
      -1,    -1,    95,    96,  2411,    -1,    -1,    -1,    -1,    65,
      66,    -1,    -1,    69,    -1,  2422,    -1,    -1,    -1,    18,
      19,  2428,    -1,    -1,  2431,    -1,  2781,  2434,    -1,    -1,
      -1,    -1,   125,    -1,    -1,    91,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   137,   101,    -1,  2802,   141,    -1,
    2805,   144,    -1,    -1,    -1,    -1,   149,   150,    -1,    58,
      -1,    -1,    -1,   156,    -1,    -1,    -1,    -1,    -1,   162,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   175,    -1,    -1,   178,   179,   180,    -1,    -1,
     183,   184,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   157,   101,    -1,   197,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   169,    -1,    -1,   115,    -1,    -1,   212,
     213,   214,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     186,    -1,    -1,   226,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   234,    -1,    -1,   237,    -1,    -1,   240,    -1,   242,
     206,   244,    -1,    -1,    -1,  2562,   249,    -1,   157,  2566,
      -1,    -1,    -1,   219,    -1,    -1,  2573,    -1,    -1,   262,
      -1,    -1,  2579,    -1,    -1,   268,  2583,    -1,    -1,  2586,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   284,   285,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   296,    -1,   298,    -1,    -1,    -1,    -1,
      -1,   304,   268,    -1,   307,   308,    -1,    -1,    -1,    -1,
     219,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   338,    -1,    -1,    -1,    -1,
      -1,   344,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
      -1,   337,    -1,    -1,    -1,    -1,   285,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,    20,    21,    22,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    52,
      -1,    -1,    55,    -1,    -1,    -1,    48,    49,    -1,    62,
      52,    19,    -1,    66,    -1,    -1,    -1,    59,    -1,    -1,
      62,    74,    75,    -1,    66,    -1,    -1,    -1,    -1,    82,
      83,    -1,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    -1,    -1,    99,    -1,    56,    -1,
      -1,    -1,   105,    -1,    -1,    -1,   109,   110,    19,    -1,
     113,    -1,    -1,    -1,    -1,    -1,    -1,   109,   110,    -1,
      -1,   113,    -1,    -1,    -1,    -1,    -1,   130,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,   130,    -1,
      -1,    -1,    -1,   101,    -1,    56,    -1,   150,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   150,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   172,
      -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,    19,    -1,
     172,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   181,
     101,    -1,   195,    -1,    -1,    -1,    -1,    -1,    -1,   157,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,
     223,    -1,   225,    -1,    -1,    -1,    -1,   230,   231,    -1,
      -1,   223,    -1,   225,    -1,    -1,    -1,    -1,   230,   231,
      -1,   244,   245,    -1,    -1,    -1,   157,    -1,    -1,    -1,
      -1,   254,   255,   245,    -1,    -1,   214,    -1,    -1,    -1,
     101,   219,    -1,   255,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   157,    -1,    -1,    -1,   281,    -1,
     283,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   281,
      -1,   283,   295,    -1,   297,    -1,    -1,    -1,    -1,    -1,
     303,   293,    -1,   214,    -1,    -1,    -1,    -1,   219,    -1,
      -1,   303,    -1,    -1,    -1,    -1,   157,    -1,   276,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   337,    -1,   219,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   337,    -1,    -1,    -1,    -1,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   219,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,    41,    -1,    -1,    44,    -1,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,
      -1,    67,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    -1,    79,    -1,    -1,    -1,    -1,    84,    -1,
      86,    87,    88,    -1,    -1,    -1,    -1,    93,    -1,    95,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   124,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   141,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   152,   153,    -1,    -1,
     156,    -1,    -1,    -1,   160,    -1,   162,   162,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,   184,    -1,
      -1,   187,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   197,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   212,   213,    -1,    -1,
      -1,    -1,    -1,    -1,   220,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   242,    -1,   244,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   268,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   284,   285,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   293,    -1,    -1,
      -1,    -1,    -1,    -1,   300,    -1,    -1,    -1,    -1,    -1,
     306,    -1,   308,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,    -1,    -1,    -1,    -1,    -1,    -1,   344
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
     351,   351,   223,   351,   381,   351,   266,     4,   351,   351,
       4,   562,     4,   283,   560,     4,   283,   561,     4,   366,
     123,   351,   565,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,     4,     5,   351,    12,   351,   351,
     351,    30,    94,   163,   246,   251,   365,   365,     4,   351,
     351,     4,     4,     4,   351,   351,   351,   351,     4,     4,
       5,     5,   361,     5,   351,   351,   357,   359,   359,   361,
     351,   351,   351,   351,   351,   351,   351,   361,   363,   360,
     351,   351,   360,   351,     5,   265,   103,   187,   416,   193,
     246,   419,   169,    78,   172,   246,   420,   138,   176,   404,
     404,     4,   423,     4,   425,   193,   253,   427,   177,   428,
     169,   366,   351,   361,   351,   361,   361,   366,   366,   366,
     361,   366,   351,   361,     4,   441,     4,   363,   439,   196,
       4,   166,   308,   440,   196,   361,     4,   361,   443,     5,
       5,     4,   196,   351,     4,     5,    60,    66,   114,   130,
     143,   149,   150,   155,   206,   225,   229,   231,   254,   255,
     262,   281,   337,   498,   363,   188,   188,    66,   450,    66,
     451,    66,   452,   223,   453,   351,     5,   224,   455,   362,
     366,     5,   361,   361,   361,     4,   353,     4,     4,   196,
     351,    14,    15,    61,   190,   191,   259,   269,   270,   301,
      87,     5,     5,    14,    15,    61,   190,   191,   259,   269,
     270,   274,   301,    87,   157,   162,   362,   475,   479,    87,
     157,     5,   473,     4,     4,    14,    61,   190,   259,   269,
     301,     5,     5,     4,   351,   362,    20,    21,    22,    48,
      49,    52,    55,    62,    66,    74,    75,    82,    83,    99,
     105,   109,   110,   113,   130,   150,   172,   195,   223,   225,
     230,   231,   244,   245,   254,   255,   281,   283,   295,   297,
     303,   337,    66,    80,    89,    99,   130,   150,   195,   231,
     255,   295,   297,     4,    30,   161,   211,   236,   492,     5,
      63,   104,   233,   247,   248,   339,   340,   497,    99,   490,
      17,    40,   111,   194,   496,     4,     5,    17,   210,   290,
     351,   255,   497,   505,   124,   497,   506,    36,    40,   111,
     132,   194,   289,   351,   507,   361,   353,    91,    99,   105,
     126,   150,   158,   195,   203,   244,   255,   271,   510,    40,
     111,   194,     5,   282,    17,   210,   290,   514,   283,   353,
     515,     5,    99,   105,   298,    17,    17,     4,   351,   351,
     351,   351,   351,   366,   351,   351,   360,   351,     4,   366,
      40,   111,   194,   260,   532,    40,   111,   194,   260,   533,
       4,    97,     5,     5,    87,     4,     5,     5,    87,     5,
     543,    61,   120,   157,   269,   547,    61,   120,   269,   551,
      87,   157,    61,   120,   269,   545,     4,    61,   120,   269,
     544,     5,     5,     4,     4,     5,     5,     5,   351,   351,
     351,     4,   351,   557,   351,   351,     6,   362,     4,     5,
       4,     4,     5,     4,    97,   257,   367,   351,   351,    12,
     351,   351,   351,   351,   351,   351,   351,   351,   351,     5,
      12,   351,   351,    12,     4,    12,     4,     4,   351,   351,
     351,     4,   353,     4,     4,   366,   361,   366,   351,   351,
     351,   361,   351,   360,   351,   351,     5,     5,   351,   363,
     351,   361,   361,   351,   366,   367,   367,   367,   366,   360,
     351,   366,   351,   133,   243,   354,   442,   166,     5,     4,
     366,   361,     4,     5,     4,     4,   351,   437,   351,    20,
      21,    22,    48,    49,    52,    59,    62,    66,    74,    75,
      82,   109,   110,   113,   130,   150,   172,   181,   223,   225,
     230,   231,   245,   255,   281,   283,   293,   303,   337,    66,
     130,   155,   231,   281,    30,   161,   211,   236,   499,   351,
      20,   206,   351,   500,    17,   351,   254,   510,   254,   206,
     351,   501,   283,   502,    17,    98,   351,   351,     5,   367,
      56,   361,     4,     5,   466,   351,     5,     5,     5,   157,
     184,   371,   371,   165,   261,   369,     4,     4,     5,     5,
     470,   267,   267,     5,     5,     5,    17,   159,   370,   370,
     369,     4,     4,   369,     5,     5,   474,   162,   336,   362,
     478,     5,   477,     5,     5,   481,     5,   482,     5,    14,
      15,    61,   190,   191,   259,   269,   270,   274,   301,     4,
       4,     5,     5,   371,   369,     4,     5,     5,   366,    82,
     152,   221,   222,   235,   275,   374,     7,     8,   351,   356,
     236,   121,   236,   236,   105,    40,    66,    99,   105,   111,
     130,   150,   165,   195,   231,   244,   255,   283,   295,   297,
     298,   337,   491,   121,   236,     5,    27,   167,   236,   279,
     138,   105,    22,    49,    52,    82,   110,   113,   225,   254,
      22,    49,    52,    55,    82,   110,   113,   225,   254,   281,
      40,   121,   236,   236,   105,     5,   210,    27,   223,    36,
     132,   289,   351,   258,   265,   121,   240,   361,   363,   510,
      40,   131,   223,   279,   240,   210,     5,     5,   244,    27,
     223,     4,     5,     5,   210,    36,   132,   289,   351,   510,
     210,   353,     4,     4,   351,     5,   301,    22,    27,    48,
      49,    51,    52,    62,    74,    75,    82,    85,   102,   109,
     110,   113,   172,   225,   230,   245,   254,   282,   283,   303,
     347,   493,   351,   351,   351,   351,   351,   497,   361,     5,
       4,     5,   351,   351,   361,   363,   351,   353,   351,   351,
     497,     5,   351,   351,   353,     5,    17,     5,     5,   351,
     351,   360,   351,   351,   351,   351,   111,   351,   351,   111,
       4,    42,    43,   170,   171,   198,   376,   376,    61,   120,
     269,   541,   376,     5,    61,   120,   269,   546,     5,     5,
      61,   120,   269,   548,     4,     5,     5,     4,    61,   120,
     269,   550,    61,   120,   269,   549,     5,     5,     4,     5,
       5,     4,   376,   376,   376,   351,   351,   351,     4,   351,
     361,   351,   362,   366,     5,     5,    12,   351,   361,   363,
     351,    12,   351,   351,   351,    59,   351,     6,     4,   351,
     351,    46,   268,   405,     5,   353,   353,   366,   351,     4,
       4,     4,   361,   351,   351,   351,   351,   366,     4,   361,
     367,   360,   351,     4,   367,   351,    38,    38,     4,   363,
       5,    24,    25,    97,   368,   351,     4,   351,     5,    82,
     152,   221,   222,   235,   275,   361,   363,   236,   121,   236,
     236,    21,   236,   361,   121,   236,    27,   167,   236,   279,
     138,    21,   236,   121,   236,   236,    21,   236,    27,   168,
     223,   168,   258,   265,   121,   168,   223,   287,   510,   131,
     168,   223,   279,     4,   244,    27,   168,   223,   510,   206,
     351,    82,   152,   221,   222,   235,   275,   351,   351,   351,
     351,   351,   196,   351,   351,    20,   232,   458,     4,     4,
     351,   371,   371,   371,     4,   371,   371,   371,    14,    15,
      61,   190,   191,   259,   269,   270,   301,   370,   371,   371,
     371,   371,   371,     4,   371,   371,     4,   370,    14,    15,
      61,   190,   191,   259,   269,   270,   301,     5,   476,     5,
     480,     5,     5,    14,    15,    61,   190,   191,   259,   269,
     270,   274,   301,     5,    14,    15,    61,   190,   191,   259,
     269,   270,   274,   301,     5,    14,    15,    61,   190,   191,
     259,   269,   270,   274,   301,    14,    15,    61,   190,   191,
     259,   269,   270,   301,   267,     5,     5,     5,   370,   370,
     369,     4,     4,   369,     5,     4,     4,   371,   371,     4,
     371,   371,     5,   353,   361,   363,     5,   351,   353,   351,
       5,   351,     5,   356,   105,   195,   244,   105,   195,   244,
       5,   353,   351,   353,     5,   351,   361,   353,     5,   356,
     236,   236,    21,   236,    21,   236,   236,    21,   236,   305,
     305,     4,     4,     4,   491,     4,     4,     4,   305,   305,
       4,     5,     4,   353,   351,     5,   351,     5,   356,   353,
     361,   363,   361,   363,   351,    27,    48,    51,    62,    85,
     102,   347,   372,     4,   353,   351,   366,   360,   353,     5,
     361,   363,   361,   351,   353,   353,   361,   363,   361,   363,
     351,   353,   351,     5,   351,   223,   223,   351,   351,   223,
     351,   223,   351,   351,   503,   511,   351,   223,   223,   351,
     351,   351,   351,   351,   351,   351,   351,     5,   301,   351,
     494,   351,   351,   223,   351,   351,   351,   351,   361,   366,
       5,   361,   361,   351,   351,   366,   360,   351,   351,   351,
     361,   351,   351,     5,   351,   351,   351,   351,     5,     5,
       4,   376,     5,     5,     4,     4,     4,     5,     5,     4,
       4,     5,     5,     4,     5,     5,     4,   351,   351,   351,
     361,   351,   366,   351,   361,   363,   351,   366,   351,   351,
     351,   351,   351,     5,   351,     4,     6,   351,   351,     4,
     361,   351,   366,   177,   364,   351,   364,   367,   366,   361,
     351,   351,     4,   351,   351,     4,   361,     5,     5,     5,
       5,   361,   366,   361,   361,   361,   361,   363,   361,   366,
     361,   361,   361,   363,   361,   361,   361,   361,   363,   361,
     361,   361,   351,   361,   361,   361,   361,   361,   361,   361,
     361,     5,     5,     5,     5,   361,   351,   351,     4,   351,
       5,     4,   351,   371,     5,     5,     5,   369,     4,     4,
       5,   371,   370,     4,   371,     5,     5,     5,   370,   370,
     369,     4,     4,     5,    14,    15,    61,   190,   191,   259,
     269,   270,   301,    14,    15,    61,   190,   191,   259,   269,
     270,   301,    14,    15,    61,   190,   191,   259,   269,   270,
     301,   267,     5,     5,     5,   370,   370,   369,     4,     4,
     369,     5,   267,     5,     5,     5,   370,   370,   369,     4,
       4,   369,     5,   267,     5,     5,     5,   370,   370,   369,
       4,     4,   369,     5,     5,     5,     5,   370,   370,   369,
       4,     4,     5,   370,     4,     4,   370,     4,     4,   371,
       5,   366,   361,   351,   351,   361,   351,     5,   356,     5,
     361,   363,   353,     5,   361,   363,   366,     5,   356,   351,
     351,   351,   351,   351,   351,   351,   351,   351,     4,     4,
       5,     4,     4,   351,   361,   351,     5,   356,   353,   366,
     360,   366,   351,   351,   360,   360,   366,   360,   366,   351,
     366,   360,   366,   360,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,    55,    66,    92,   130,   281,   283,
     337,   508,   509,   510,   521,   522,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   361,     5,
     351,   351,   351,   351,     4,     4,   366,   367,     4,   495,
     366,   366,   360,   351,     4,   366,   376,   376,   376,   356,
     351,   351,   351,   366,   351,   360,   351,   351,    12,     5,
       5,     4,   351,   351,     4,   366,   361,   351,   351,   367,
     368,   351,     5,   351,   363,     5,     5,     5,     5,   366,
     368,   368,   368,   366,   368,   367,   368,   368,   366,   368,
     368,   368,   366,   368,   368,   366,   361,   368,   366,   368,
     368,   366,   368,   366,     5,     5,     5,     5,   366,     4,
     363,     5,   351,     4,   371,   370,     4,   370,     5,     5,
       5,   370,   370,   369,     4,     4,     5,     5,     5,     5,
     370,   370,   369,     4,     4,     5,     5,     5,     5,   370,
     370,   369,     4,     4,     5,   370,   371,   371,   371,   371,
     371,     4,   371,   371,     4,   370,   370,   371,   371,   371,
     371,   371,     4,   371,   371,     4,   370,   370,     4,     4,
     370,     4,   370,   370,     4,     4,     4,   362,   368,     4,
     361,   363,   368,   351,   361,     4,   368,   368,   361,     4,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   361,   363,   368,   351,   361,     4,   360,   360,   360,
     351,   361,   363,   360,   351,   360,   360,   361,   361,   363,
     360,   351,   360,   351,   351,   351,   351,   351,   351,   356,
     351,   351,   351,   348,   348,   348,   348,   348,   348,   348,
     509,   348,   356,   351,   351,   351,   351,   356,   351,   351,
     351,   351,   351,   351,   366,   351,   301,   355,   356,   351,
     351,   367,   353,     4,     4,   367,   351,   360,   351,    59,
     351,     5,     5,   351,     4,   364,   368,     5,     4,     4,
       5,   361,     5,   367,   368,   367,   367,   367,     4,     5,
     361,     5,     5,     4,   351,   371,   370,   371,   371,   371,
     371,   371,     4,   371,   371,   370,     4,   370,   371,   371,
     371,   371,   371,     4,   371,   371,   370,   371,   370,     4,
     371,   371,   370,     4,   371,   370,     4,   370,   370,   366,
     361,   363,   368,     4,   366,   351,   366,   351,   351,   351,
     368,     4,   366,   351,   360,   368,   351,   360,   368,   368,
     361,   356,   351,     4,   373,   373,   351,   351,   373,   356,
     373,   511,   361,   491,     5,     4,     5,     5,     5,     4,
     353,   356,   373,   373,   351,   351,   356,   351,   351,   351,
     351,   351,   360,   351,     5,   511,   351,   373,   353,   512,
     513,     5,   353,     5,   351,     5,     4,     6,   351,    32,
     278,   412,     5,    32,   278,   375,   361,     5,   375,   361,
     412,   351,   370,   371,   370,   370,   371,   371,   370,   371,
     370,   370,   351,   368,   361,   363,   361,   351,   361,   351,
     361,   363,   361,   351,   361,   368,     4,   511,   511,   355,
     351,   511,     4,   511,   366,     5,     4,     4,   511,   511,
     355,   351,     4,   511,   511,   351,   361,   511,   511,   511,
     512,   518,   519,   510,   516,   517,     5,     5,     6,     4,
     187,   299,   343,   351,   403,   361,   361,     4,   371,   371,
     371,   371,   362,   368,   368,   351,   368,     4,   368,   368,
     351,   368,   351,   511,   511,     4,   351,   511,     5,   351,
     511,     4,   351,   511,   366,   518,   520,   521,   348,   517,
       5,     5,     4,   351,   404,   351,   404,   366,   366,   368,
       4,   361,   363,     4,   356,   355,   351,   351,   355,   351,
     361,   521,   353,     5,     5,   351,   351,   351,   351,   375,
     375,     5,   361,   363,   366,   361,   363,   511,   351,     4,
     511,   351,   368,     5,     5,   351,     5,   351,   366,   366,
       4,   511,     4,     5,     5,     5,   355,   355,   511,   511,
     511
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
#line 757 "frame/parser.Y"
    {fr->analysisMarkersResetCmd();;}
    break;

  case 214:
#line 762 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("circle", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 215:
#line 764 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("ellipse", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 216:
#line 766 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("box", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 217:
#line 768 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("polygon", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 218:
#line 770 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("point", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 219:
#line 772 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("vector", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 220:
#line 774 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("annulus", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 221:
#line 776 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("ellipseannulus", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 222:
#line 778 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("boxannulus", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 224:
#line 782 "frame/parser.Y"
    {fr->binColsCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 225:
#line 783 "frame/parser.Y"
    {fr->binDepthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 228:
#line 786 "frame/parser.Y"
    {fr->binBufferSizeCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 230:
#line 788 "frame/parser.Y"
    {fr->binFilterCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 231:
#line 791 "frame/parser.Y"
    {fr->binAboutCmd();;}
    break;

  case 232:
#line 792 "frame/parser.Y"
    {fr->binAboutCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 233:
#line 795 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 234:
#line 796 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 235:
#line 798 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(1) - (4)].real)), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 236:
#line 800 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 237:
#line 801 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 238:
#line 802 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 239:
#line 804 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 240:
#line 806 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 241:
#line 809 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::AVERAGE);;}
    break;

  case 242:
#line 810 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::SUM);;}
    break;

  case 243:
#line 813 "frame/parser.Y"
    {fr->binToFitCmd();;}
    break;

  case 244:
#line 815 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (7)].real),(yyvsp[(2) - (7)].real)), (yyvsp[(5) - (7)].str), (yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].str));;}
    break;

  case 245:
#line 818 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (11)].real),(yyvsp[(2) - (11)].real)), (yyvsp[(3) - (11)].integer), Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)), (yyvsp[(8) - (11)].str), (yyvsp[(9) - (11)].str), (yyvsp[(10) - (11)].str), (yyvsp[(11) - (11)].str));;}
    break;

  case 246:
#line 820 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (8)].real),(yyvsp[(2) - (8)].real)), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (yyvsp[(6) - (8)].str), (yyvsp[(7) - (8)].str), (yyvsp[(8) - (8)].str));;}
    break;

  case 247:
#line 823 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (12)].real),(yyvsp[(2) - (12)].real)), (yyvsp[(3) - (12)].integer), Vector((yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real)), Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), 
	    (yyvsp[(9) - (12)].str), (yyvsp[(10) - (12)].str), (yyvsp[(11) - (12)].str), (yyvsp[(12) - (12)].str));;}
    break;

  case 248:
#line 827 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 249:
#line 828 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 251:
#line 832 "frame/parser.Y"
    {fr->blockToFitCmd();;}
    break;

  case 252:
#line 833 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 253:
#line 834 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 257:
#line 840 "frame/parser.Y"
    {fr->clipUserCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 259:
#line 843 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 260:
#line 848 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::GLOBAL);;}
    break;

  case 261:
#line 849 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::LOCAL);;}
    break;

  case 262:
#line 852 "frame/parser.Y"
    {fr->clipModeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 263:
#line 853 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::MINMAX);;}
    break;

  case 264:
#line 854 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZSCALE);;}
    break;

  case 265:
#line 855 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZMAX);;}
    break;

  case 266:
#line 856 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::USERCLIP);;}
    break;

  case 267:
#line 859 "frame/parser.Y"
    {fr->clipMinMaxCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer),(yyvsp[(1) - (2)].integer));;}
    break;

  case 268:
#line 860 "frame/parser.Y"
    {fr->clipMinMaxModeCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer));;}
    break;

  case 269:
#line 861 "frame/parser.Y"
    {fr->clipMinMaxSampleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 270:
#line 864 "frame/parser.Y"
    {fr->clipZScaleCmd((yyvsp[(1) - (3)].real),(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 271:
#line 866 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleContrastCmd((yyvsp[(2) - (2)].real));
        ;}
    break;

  case 272:
#line 871 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleSampleCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 273:
#line 876 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleLineCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 274:
#line 883 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (6)].integer), (yyvsp[(2) - (6)].real), (yyvsp[(3) - (6)].real), (yyvsp[(4) - (6)].integer), (unsigned char*)(yyvsp[(5) - (6)].ptr), (yyvsp[(6) - (6)].integer));;}
    break;

  case 275:
#line 885 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].integer),(unsigned char*)(yyvsp[(9) - (10)].ptr),(yyvsp[(10) - (10)].integer));;}
    break;

  case 276:
#line 886 "frame/parser.Y"
    {fr->colormapBeginCmd();;}
    break;

  case 278:
#line 888 "frame/parser.Y"
    {fr->colormapEndCmd();;}
    break;

  case 279:
#line 892 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(1) - (6)].integer), (yyvsp[(2) - (6)].real), (yyvsp[(3) - (6)].real), (yyvsp[(4) - (6)].integer), (unsigned char*)(yyvsp[(5) - (6)].ptr), (yyvsp[(6) - (6)].integer));;}
    break;

  case 280:
#line 894 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].integer),(unsigned char*)(yyvsp[(9) - (10)].ptr),(yyvsp[(10) - (10)].integer));;}
    break;

  case 281:
#line 896 "frame/parser.Y"
    {fr->colorScaleCmd((FrScale::ColorScaleType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 282:
#line 897 "frame/parser.Y"
    {fr->colorScaleLogCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 288:
#line 908 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),(FrScale::ClipMode)(yyvsp[(9) - (13)].integer),100,(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 289:
#line 910 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),FrScale::AUTOCUT,(yyvsp[(9) - (13)].real),(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 290:
#line 912 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),(FrScale::ClipMode)(yyvsp[(9) - (12)].integer),100,FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 291:
#line 917 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),FrScale::AUTOCUT,(yyvsp[(9) - (12)].real),FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 292:
#line 921 "frame/parser.Y"
    {fr->contourCreatePolygonCmd();;}
    break;

  case 293:
#line 924 "frame/parser.Y"
    {fr->contourDeleteCmd();;}
    break;

  case 294:
#line 925 "frame/parser.Y"
    {fr->contourDeleteAuxCmd();;}
    break;

  case 295:
#line 928 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 296:
#line 929 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 297:
#line 931 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourLoadCmd((yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer),(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer));
	;}
    break;

  case 298:
#line 937 "frame/parser.Y"
    {(yyval.integer) = FrScale::MINMAX;;}
    break;

  case 299:
#line 938 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZSCALE;;}
    break;

  case 300:
#line 939 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZMAX;;}
    break;

  case 301:
#line 940 "frame/parser.Y"
    {(yyval.integer) = FrScale::USERCLIP;;}
    break;

  case 302:
#line 943 "frame/parser.Y"
    {(yyval.integer) = FrScale::GLOBAL;;}
    break;

  case 303:
#line 944 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOCAL;;}
    break;

  case 304:
#line 947 "frame/parser.Y"
    {(yyval.integer) = FVContour::SMOOTH;;}
    break;

  case 305:
#line 948 "frame/parser.Y"
    {(yyval.integer) = FVContour::BLOCK;;}
    break;

  case 306:
#line 951 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 307:
#line 952 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 308:
#line 956 "frame/parser.Y"
    {fr->contourSaveCmd((yyvsp[(1) - (3)].str), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 309:
#line 958 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (4)].str),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 310:
#line 961 "frame/parser.Y"
    {fr->cropCmd();;}
    break;

  case 311:
#line 963 "frame/parser.Y"
    {fr->cropCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 312:
#line 966 "frame/parser.Y"
    {fr->cropCenterCmd(Vector((yyvsp[(2) - (8)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), Vector((yyvsp[(5) - (8)].real),(yyvsp[(6) - (8)].real)), (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 314:
#line 968 "frame/parser.Y"
    {fr->cropBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 315:
#line 969 "frame/parser.Y"
    {fr->cropMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 316:
#line 970 "frame/parser.Y"
    {fr->cropEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 317:
#line 973 "frame/parser.Y"
    {fr->crop3dCmd();;}
    break;

  case 318:
#line 974 "frame/parser.Y"
    {fr->crop3dCmd((yyvsp[(1) - (3)].real), (yyvsp[(2) - (3)].real), (Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 319:
#line 975 "frame/parser.Y"
    {fr->crop3dBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 320:
#line 976 "frame/parser.Y"
    {fr->crop3dMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 321:
#line 977 "frame/parser.Y"
    {fr->crop3dEndCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 322:
#line 981 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), (Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 323:
#line 983 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 324:
#line 984 "frame/parser.Y"
    {fr->crosshairCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 325:
#line 985 "frame/parser.Y"
    {fr->crosshairWarpCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 326:
#line 988 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)), (Coord::InternalSystem)(yyvsp[(3) - (5)].integer));;}
    break;

  case 327:
#line 990 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 328:
#line 992 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer));;}
    break;

  case 329:
#line 994 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 330:
#line 997 "frame/parser.Y"
    {fr->axesOrderCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 331:
#line 1000 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 332:
#line 1001 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 333:
#line 1002 "frame/parser.Y"
    {(yyval.integer) = Base::SUM;;}
    break;

  case 334:
#line 1005 "frame/parser.Y"
    {fr->fitsyHasExtCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 335:
#line 1008 "frame/parser.Y"
    {fr->getBgColorCmd();;}
    break;

  case 349:
#line 1022 "frame/parser.Y"
    {fr->getDATASECCmd();;}
    break;

  case 352:
#line 1025 "frame/parser.Y"
    {fr->getHistogramCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].integer));;}
    break;

  case 353:
#line 1027 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(3) - (9)].str),(yyvsp[(4) - (9)].str),Vector((yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real)),(Coord::InternalSystem)(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(Base::CutMethod)(yyvsp[(9) - (9)].integer));;}
    break;

  case 356:
#line 1030 "frame/parser.Y"
    {fr->getIRAFAlignCmd();;}
    break;

  case 357:
#line 1031 "frame/parser.Y"
    {fr->getMinMaxCmd();;}
    break;

  case 360:
#line 1034 "frame/parser.Y"
    {fr->getNANColorCmd();;}
    break;

  case 361:
#line 1035 "frame/parser.Y"
    {fr->getOrientCmd();;}
    break;

  case 363:
#line 1038 "frame/parser.Y"
    {fr->getPixelTableCmd(Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (Coord::InternalSystem)(yyvsp[(3) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(7) - (8)].integer), (yyvsp[(8) - (8)].str));;}
    break;

  case 365:
#line 1040 "frame/parser.Y"
    {fr->getRotateCmd();;}
    break;

  case 367:
#line 1042 "frame/parser.Y"
    {fr->getThreadsCmd();;}
    break;

  case 369:
#line 1044 "frame/parser.Y"
    {fr->getTypeCmd();;}
    break;

  case 370:
#line 1046 "frame/parser.Y"
    {fr->getValueCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 371:
#line 1048 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(3) - (9)].str),(yyvsp[(4) - (9)].str),Vector((yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real)),(Coord::InternalSystem)(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(Base::CutMethod)(yyvsp[(9) - (9)].integer));;}
    break;

  case 373:
#line 1050 "frame/parser.Y"
    {fr->getZoomCmd();;}
    break;

  case 374:
#line 1053 "frame/parser.Y"
    {fr->getBinDepthCmd();;}
    break;

  case 375:
#line 1054 "frame/parser.Y"
    {fr->getBinFactorCmd();;}
    break;

  case 376:
#line 1055 "frame/parser.Y"
    {fr->getBinFunctionCmd();;}
    break;

  case 377:
#line 1056 "frame/parser.Y"
    {fr->getBinBufferSizeCmd();;}
    break;

  case 378:
#line 1057 "frame/parser.Y"
    {fr->getBinCursorCmd();;}
    break;

  case 379:
#line 1058 "frame/parser.Y"
    {fr->getBinFilterCmd();;}
    break;

  case 381:
#line 1060 "frame/parser.Y"
    {fr->getBinListCmd();;}
    break;

  case 382:
#line 1063 "frame/parser.Y"
    {fr->getBinColsCmd();;}
    break;

  case 383:
#line 1064 "frame/parser.Y"
    {fr->getBinColsMinMaxCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 384:
#line 1065 "frame/parser.Y"
    {fr->getBinColsDimCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 385:
#line 1068 "frame/parser.Y"
    {fr->getBlockCmd();;}
    break;

  case 386:
#line 1071 "frame/parser.Y"
    {fr->getClipCmd();;}
    break;

  case 387:
#line 1073 "frame/parser.Y"
    {fr->getClipCmd((FrScale::ClipMode)(yyvsp[(1) - (2)].integer), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 388:
#line 1075 "frame/parser.Y"
    {fr->getClipCmd((yyvsp[(1) - (2)].real), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 389:
#line 1076 "frame/parser.Y"
    {fr->getClipScopeCmd();;}
    break;

  case 390:
#line 1077 "frame/parser.Y"
    {fr->getClipModeCmd();;}
    break;

  case 392:
#line 1079 "frame/parser.Y"
    {fr->getClipUserCmd();;}
    break;

  case 394:
#line 1082 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	;}
    break;

  case 395:
#line 1088 "frame/parser.Y"
    {fr->getClipMinMaxModeCmd();;}
    break;

  case 396:
#line 1089 "frame/parser.Y"
    {fr->getClipMinMaxSampleCmd();;}
    break;

  case 397:
#line 1092 "frame/parser.Y"
    {fr->getClipZScaleContrastCmd();;}
    break;

  case 398:
#line 1093 "frame/parser.Y"
    {fr->getClipZScaleSampleCmd();;}
    break;

  case 399:
#line 1094 "frame/parser.Y"
    {fr->getClipZScaleLineCmd();;}
    break;

  case 400:
#line 1097 "frame/parser.Y"
    {fr->getColorbarCmd();;}
    break;

  case 401:
#line 1098 "frame/parser.Y"
    {fr->getColorbarTagCmd();;}
    break;

  case 403:
#line 1104 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 404:
#line 1106 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 405:
#line 1108 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 406:
#line 1111 "frame/parser.Y"
    {fr->getColorScaleCmd();;}
    break;

  case 408:
#line 1113 "frame/parser.Y"
    {fr->getColorScaleLogCmd();;}
    break;

  case 409:
#line 1117 "frame/parser.Y"
    {fr->getColorScaleLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 410:
#line 1121 "frame/parser.Y"
    {fr->getContourCmd((Coord::CoordSystem)(yyvsp[(1) - (2)].integer),(Coord::SkyFrame)(yyvsp[(2) - (2)].integer));;}
    break;

  case 412:
#line 1123 "frame/parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 413:
#line 1124 "frame/parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 414:
#line 1125 "frame/parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 415:
#line 1126 "frame/parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 416:
#line 1127 "frame/parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 418:
#line 1129 "frame/parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 419:
#line 1130 "frame/parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 420:
#line 1133 "frame/parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 421:
#line 1134 "frame/parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 422:
#line 1135 "frame/parser.Y"
    {fr->getContourClipScopeCmd();;}
    break;

  case 423:
#line 1138 "frame/parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 424:
#line 1139 "frame/parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 425:
#line 1143 "frame/parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 426:
#line 1145 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 427:
#line 1151 "frame/parser.Y"
    {fr->getCoord3axisCmd((yyvsp[(1) - (4)].real), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 428:
#line 1155 "frame/parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 429:
#line 1157 "frame/parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 430:
#line 1158 "frame/parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 431:
#line 1161 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 432:
#line 1163 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 433:
#line 1164 "frame/parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 434:
#line 1167 "frame/parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 435:
#line 1170 "frame/parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 436:
#line 1172 "frame/parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 437:
#line 1176 "frame/parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 438:
#line 1178 "frame/parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 439:
#line 1181 "frame/parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 440:
#line 1185 "frame/parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 441:
#line 1186 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 442:
#line 1188 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)), (Coord::InternalSystem)(yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 443:
#line 1191 "frame/parser.Y"
    {fr->iisGetCmd((char*)(yyvsp[(1) - (5)].ptr),(yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 444:
#line 1192 "frame/parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 446:
#line 1196 "frame/parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 447:
#line 1197 "frame/parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 448:
#line 1198 "frame/parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 449:
#line 1201 "frame/parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 450:
#line 1203 "frame/parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 451:
#line 1204 "frame/parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 453:
#line 1206 "frame/parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 457:
#line 1210 "frame/parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 458:
#line 1211 "frame/parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 459:
#line 1212 "frame/parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 460:
#line 1214 "frame/parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::DistFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 462:
#line 1216 "frame/parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 463:
#line 1219 "frame/parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 464:
#line 1221 "frame/parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 465:
#line 1223 "frame/parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 466:
#line 1224 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 467:
#line 1225 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 468:
#line 1226 "frame/parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 469:
#line 1229 "frame/parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 470:
#line 1230 "frame/parser.Y"
    {fr->getFitsDepthCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 471:
#line 1234 "frame/parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 472:
#line 1236 "frame/parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 473:
#line 1239 "frame/parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 474:
#line 1242 "frame/parser.Y"
    {fr->getFitsSliceCmd(2);;}
    break;

  case 475:
#line 1243 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 476:
#line 1244 "frame/parser.Y"
    {fr->getFitsSliceCmd(2, (Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 477:
#line 1245 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (2)].integer), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 478:
#line 1248 "frame/parser.Y"
    {fr->getGridCmd();;}
    break;

  case 479:
#line 1249 "frame/parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 480:
#line 1250 "frame/parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 481:
#line 1253 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 482:
#line 1254 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 483:
#line 1255 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 484:
#line 1258 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 485:
#line 1261 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 486:
#line 1262 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 487:
#line 1263 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 488:
#line 1266 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 489:
#line 1267 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 490:
#line 1268 "frame/parser.Y"
    {fr->getSmoothRadiusMinorCmd();;}
    break;

  case 491:
#line 1269 "frame/parser.Y"
    {fr->getSmoothSigmaCmd();;}
    break;

  case 492:
#line 1270 "frame/parser.Y"
    {fr->getSmoothSigmaMinorCmd();;}
    break;

  case 493:
#line 1271 "frame/parser.Y"
    {fr->getSmoothAngleCmd();;}
    break;

  case 498:
#line 1278 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 499:
#line 1279 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 500:
#line 1280 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 501:
#line 1283 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 502:
#line 1284 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 503:
#line 1287 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 504:
#line 1288 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 505:
#line 1291 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 506:
#line 1292 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 507:
#line 1295 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 508:
#line 1296 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 509:
#line 1299 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 511:
#line 1301 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 512:
#line 1304 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 513:
#line 1305 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 515:
#line 1309 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 516:
#line 1313 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), 
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 517:
#line 1316 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer), 
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 518:
#line 1323 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 519:
#line 1324 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 520:
#line 1327 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 523:
#line 1330 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 524:
#line 1331 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 525:
#line 1332 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 526:
#line 1333 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 528:
#line 1335 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 529:
#line 1336 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 530:
#line 1337 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 532:
#line 1339 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 533:
#line 1340 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 534:
#line 1341 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 536:
#line 1345 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 537:
#line 1348 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 538:
#line 1349 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 539:
#line 1352 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 540:
#line 1353 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 541:
#line 1354 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 542:
#line 1355 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 543:
#line 1358 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 544:
#line 1359 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 545:
#line 1360 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 546:
#line 1361 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 547:
#line 1364 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 548:
#line 1365 "frame/parser.Y"
    {fr->hasWCSEquCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 549:
#line 1366 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 550:
#line 1367 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 551:
#line 1368 "frame/parser.Y"
    {fr->hasWCSxCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 552:
#line 1371 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 553:
#line 1372 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 554:
#line 1373 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 557:
#line 1377 "frame/parser.Y"
    {fr->iisSetCmd((const char*)(yyvsp[(2) - (6)].ptr),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 558:
#line 1378 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 559:
#line 1381 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 560:
#line 1384 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 561:
#line 1385 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 562:
#line 1389 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 563:
#line 1391 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 564:
#line 1392 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 571:
#line 1404 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 572:
#line 1406 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 573:
#line 1408 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 574:
#line 1409 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 575:
#line 1411 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 576:
#line 1413 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 577:
#line 1415 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 578:
#line 1417 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 579:
#line 1419 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 581:
#line 1423 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 582:
#line 1424 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 583:
#line 1425 "frame/parser.Y"
    {fr->loadArrayRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 584:
#line 1426 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 585:
#line 1427 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 586:
#line 1429 "frame/parser.Y"
    {fr->loadArrayRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 587:
#line 1430 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 588:
#line 1431 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 589:
#line 1432 "frame/parser.Y"
    {fr->loadArrayRGBCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 590:
#line 1435 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 591:
#line 1439 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 592:
#line 1441 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 593:
#line 1443 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 594:
#line 1445 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 595:
#line 1447 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 596:
#line 1449 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 597:
#line 1451 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 598:
#line 1453 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), 
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 599:
#line 1456 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 600:
#line 1458 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 601:
#line 1460 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 607:
#line 1468 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 608:
#line 1469 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 609:
#line 1470 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 610:
#line 1471 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 611:
#line 1472 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 612:
#line 1473 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 613:
#line 1475 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 614:
#line 1477 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 615:
#line 1478 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 616:
#line 1479 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 617:
#line 1480 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 618:
#line 1483 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 619:
#line 1484 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 620:
#line 1485 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 621:
#line 1486 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 622:
#line 1487 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 623:
#line 1489 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 624:
#line 1490 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 625:
#line 1491 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 626:
#line 1492 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 632:
#line 1503 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS, 
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 633:
#line 1506 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 634:
#line 1509 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 635:
#line 1512 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 636:
#line 1515 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 637:
#line 1518 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 638:
#line 1521 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 639:
#line 1524 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 640:
#line 1527 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 641:
#line 1532 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 642:
#line 1535 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 643:
#line 1538 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 644:
#line 1541 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 645:
#line 1544 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 646:
#line 1547 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 647:
#line 1550 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 648:
#line 1553 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 649:
#line 1556 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 650:
#line 1559 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 651:
#line 1562 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 652:
#line 1567 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 653:
#line 1570 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 654:
#line 1573 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 655:
#line 1576 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 656:
#line 1579 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 657:
#line 1582 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 658:
#line 1585 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 659:
#line 1588 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 660:
#line 1591 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 661:
#line 1596 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 662:
#line 1599 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 663:
#line 1602 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 664:
#line 1605 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 665:
#line 1608 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 666:
#line 1611 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 667:
#line 1614 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 668:
#line 1617 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 669:
#line 1620 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 670:
#line 1623 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 671:
#line 1626 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 672:
#line 1631 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 673:
#line 1632 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 674:
#line 1633 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 675:
#line 1634 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 676:
#line 1635 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 677:
#line 1637 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 678:
#line 1638 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 679:
#line 1639 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 680:
#line 1640 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 681:
#line 1642 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 682:
#line 1643 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 683:
#line 1644 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 684:
#line 1645 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 685:
#line 1646 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 686:
#line 1647 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 687:
#line 1649 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 688:
#line 1651 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 689:
#line 1652 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 690:
#line 1653 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 691:
#line 1654 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 692:
#line 1657 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 693:
#line 1658 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 694:
#line 1659 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 695:
#line 1660 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 696:
#line 1661 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 697:
#line 1663 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 698:
#line 1664 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 699:
#line 1665 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 700:
#line 1666 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 701:
#line 1670 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 702:
#line 1672 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 703:
#line 1673 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 704:
#line 1675 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 705:
#line 1677 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 706:
#line 1679 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 707:
#line 1682 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 708:
#line 1683 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 709:
#line 1686 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 710:
#line 1687 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 711:
#line 1688 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 712:
#line 1691 "frame/parser.Y"
    {
#ifdef MAC_OSX_TK
	  fr->macosxPrintCmd();
#endif
	;}
    break;

  case 713:
#line 1698 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 714:
#line 1699 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 715:
#line 1700 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 716:
#line 1701 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 717:
#line 1702 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 718:
#line 1703 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 719:
#line 1704 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 720:
#line 1708 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 722:
#line 1716 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 723:
#line 1717 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 724:
#line 1719 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 725:
#line 1721 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 726:
#line 1722 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 727:
#line 1723 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 729:
#line 1724 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 730:
#line 1725 "frame/parser.Y"
    {fr->markerDeleteCmd();;}
    break;

  case 731:
#line 1726 "frame/parser.Y"
    {fr->markerDeleteAllCmd();;}
    break;

  case 733:
#line 1728 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 734:
#line 1729 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 735:
#line 1731 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 736:
#line 1733 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 737:
#line 1735 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 738:
#line 1738 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 739:
#line 1740 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 740:
#line 1741 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 741:
#line 1743 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 742:
#line 1746 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (7)].integer), (yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real), (yyvsp[(6) - (7)].integer), (Coord::InternalSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 743:
#line 1748 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 744:
#line 1751 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 745:
#line 1753 "frame/parser.Y"
    {fr->markerBoxFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 746:
#line 1755 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), Vector((yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real)), 
	    Vector((yyvsp[(6) - (8)].real), (yyvsp[(6) - (8)].real)*(yyvsp[(5) - (8)].real)/(yyvsp[(4) - (8)].real)), (yyvsp[(7) - (8)].integer), (Coord::InternalSystem)(yyvsp[(8) - (8)].integer));;}
    break;

  case 747:
#line 1759 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 748:
#line 1762 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 749:
#line 1765 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (Coord::InternalSystem)(yyvsp[(6) - (6)].integer));;}
    break;

  case 750:
#line 1767 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)), 
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 751:
#line 1770 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 752:
#line 1774 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 753:
#line 1778 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 754:
#line 1783 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 755:
#line 1787 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 756:
#line 1788 "frame/parser.Y"
    {fr->markerCircleFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 757:
#line 1790 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].real), (Coord::InternalSystem)(yyvsp[(5) - (5)].integer));;}
    break;

  case 758:
#line 1792 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 759:
#line 1793 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 760:
#line 1795 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 761:
#line 1797 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 762:
#line 1799 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].real),(Coord::InternalSystem)(yyvsp[(5) - (5)].integer));;}
    break;

  case 763:
#line 1801 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 764:
#line 1803 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 765:
#line 1804 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 766:
#line 1806 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 767:
#line 1808 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 768:
#line 1811 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 769:
#line 1815 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 770:
#line 1819 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 771:
#line 1821 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 772:
#line 1823 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 773:
#line 1825 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 774:
#line 1827 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 775:
#line 1829 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 776:
#line 1831 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 777:
#line 1833 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 778:
#line 1835 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 779:
#line 1837 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 780:
#line 1839 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 781:
#line 1841 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 782:
#line 1843 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 783:
#line 1845 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 784:
#line 1846 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 785:
#line 1848 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 786:
#line 1850 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 787:
#line 1851 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 788:
#line 1852 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 789:
#line 1854 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 790:
#line 1856 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 791:
#line 1857 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 792:
#line 1858 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 793:
#line 1859 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 794:
#line 1861 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 795:
#line 1862 "frame/parser.Y"
    {fr->markerEllipseFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 796:
#line 1864 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(4) - (6)].real), (yyvsp[(5) - (6)].real)), (Coord::InternalSystem)(yyvsp[(6) - (6)].integer));;}
    break;

  case 797:
#line 1866 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 798:
#line 1870 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), 
	    Vector((yyvsp[(6) - (8)].real),(yyvsp[(6) - (8)].real)*(yyvsp[(5) - (8)].real)/(yyvsp[(4) - (8)].real)), (yyvsp[(7) - (8)].integer), (Coord::InternalSystem)(yyvsp[(8) - (8)].integer));;}
    break;

  case 799:
#line 1874 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 800:
#line 1877 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 801:
#line 1880 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 802:
#line 1884 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 803:
#line 1888 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 804:
#line 1893 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 805:
#line 1897 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 806:
#line 1898 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 807:
#line 1899 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 808:
#line 1901 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 809:
#line 1903 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(5) - (6)].vector)), Vector((yyvsp[(6) - (6)].vector)), (Coord::InternalSystem)(yyvsp[(4) - (6)].integer));;}
    break;

  case 810:
#line 1905 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 811:
#line 1909 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 812:
#line 1910 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 813:
#line 1911 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 814:
#line 1913 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)), (Coord::InternalSystem)(yyvsp[(4) - (6)].integer));;}
    break;

  case 815:
#line 1915 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 816:
#line 1918 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),(Coord::InternalSystem)(yyvsp[(6) - (6)].integer));;}
    break;

  case 817:
#line 1920 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 818:
#line 1923 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),(Coord::InternalSystem)(yyvsp[(6) - (6)].integer));;}
    break;

  case 819:
#line 1925 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 820:
#line 1928 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 821:
#line 1929 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 822:
#line 1931 "frame/parser.Y"
    {fr->markerPolygonFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 823:
#line 1933 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(4) - (6)].vector)), Vector((yyvsp[(5) - (6)].vector)),
	    (Coord::InternalSystem)(yyvsp[(3) - (6)].integer), (yyvsp[(6) - (6)].real));;}
    break;

  case 824:
#line 1937 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 825:
#line 1941 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 826:
#line 1943 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 827:
#line 1944 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 828:
#line 1946 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(5) - (6)].vector)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::InternalSystem)(yyvsp[(4) - (6)].integer));;}
    break;

  case 829:
#line 1949 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 830:
#line 1952 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 831:
#line 1955 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 832:
#line 1956 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 833:
#line 1958 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 834:
#line 1959 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 835:
#line 1960 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 836:
#line 1962 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 837:
#line 1963 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 838:
#line 1965 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 839:
#line 1967 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(5) - (7)].vector)), (Coord::InternalSystem)(yyvsp[(4) - (7)].integer), (yyvsp[(6) - (7)].real), (yyvsp[(7) - (7)].real));;}
    break;

  case 840:
#line 1970 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 841:
#line 1973 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 842:
#line 1975 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 843:
#line 1976 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 847:
#line 1981 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 848:
#line 1982 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 849:
#line 1984 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 850:
#line 1986 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 851:
#line 1988 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 852:
#line 1989 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 853:
#line 1991 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer));;}
    break;

  case 854:
#line 1992 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 857:
#line 1997 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 858:
#line 1998 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 859:
#line 1999 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 860:
#line 2000 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 861:
#line 2001 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 862:
#line 2002 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 863:
#line 2003 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 864:
#line 2004 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 865:
#line 2005 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 866:
#line 2006 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 867:
#line 2008 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (5)].str),Vector((yyvsp[(5) - (5)].vector)),(Coord::InternalSystem)(yyvsp[(4) - (5)].integer));;}
    break;

  case 868:
#line 2010 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 869:
#line 2012 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 870:
#line 2013 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 871:
#line 2014 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 872:
#line 2015 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 873:
#line 2016 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 874:
#line 2018 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 875:
#line 2019 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 876:
#line 2020 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 877:
#line 2021 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 878:
#line 2022 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 879:
#line 2024 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 880:
#line 2025 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 881:
#line 2026 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 882:
#line 2027 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 883:
#line 2028 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 884:
#line 2029 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 885:
#line 2032 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 886:
#line 2033 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 887:
#line 2034 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 888:
#line 2035 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 889:
#line 2036 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 890:
#line 2037 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 891:
#line 2038 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 892:
#line 2039 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 893:
#line 2040 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 894:
#line 2041 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 895:
#line 2042 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 896:
#line 2043 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 897:
#line 2044 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 898:
#line 2045 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 899:
#line 2046 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 900:
#line 2047 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 901:
#line 2048 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 902:
#line 2049 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 903:
#line 2050 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 904:
#line 2051 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 905:
#line 2052 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 906:
#line 2055 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 907:
#line 2056 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 908:
#line 2057 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 909:
#line 2058 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 910:
#line 2059 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 911:
#line 2061 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 912:
#line 2071 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 913:
#line 2079 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 914:
#line 2088 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 915:
#line 2096 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 916:
#line 2103 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 917:
#line 2110 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 918:
#line 2118 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 919:
#line 2126 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 920:
#line 2131 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 921:
#line 2136 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 922:
#line 2141 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 923:
#line 2146 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 924:
#line 2151 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 925:
#line 2156 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 926:
#line 2161 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 927:
#line 2170 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer), 
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 928:
#line 2180 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS), 
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 929:
#line 2190 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 930:
#line 2199 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 931:
#line 2207 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont, 
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 932:
#line 2217 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 933:
#line 2227 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 934:
#line 2237 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 935:
#line 2249 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 936:
#line 2258 "frame/parser.Y"
    {fr->createCompositeCmd(
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 938:
#line 2266 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 939:
#line 2268 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 940:
#line 2270 "frame/parser.Y"
    { 
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 941:
#line 2275 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 942:
#line 2278 "frame/parser.Y"
    {(yyval.dash)[0] = (yyvsp[(1) - (2)].integer); (yyval.dash)[1] = (yyvsp[(2) - (2)].integer);;}
    break;

  case 943:
#line 2282 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 944:
#line 2284 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 945:
#line 2285 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 946:
#line 2288 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 947:
#line 2289 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 948:
#line 2290 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 949:
#line 2291 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 950:
#line 2292 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 951:
#line 2293 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 952:
#line 2294 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 954:
#line 2298 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 955:
#line 2299 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 956:
#line 2300 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 957:
#line 2301 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 958:
#line 2302 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 959:
#line 2305 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 960:
#line 2307 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 961:
#line 2309 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 962:
#line 2311 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer),(Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 963:
#line 2313 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 964:
#line 2315 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 965:
#line 2318 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 966:
#line 2320 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 967:
#line 2322 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 968:
#line 2324 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer),(Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 969:
#line 2326 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 970:
#line 2328 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 971:
#line 2330 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 972:
#line 2331 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 973:
#line 2332 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 974:
#line 2334 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 975:
#line 2336 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 976:
#line 2338 "frame/parser.Y"
    {fr->getMarkerBoxFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 977:
#line 2340 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 978:
#line 2342 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 979:
#line 2343 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 980:
#line 2344 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 981:
#line 2346 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 982:
#line 2348 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 983:
#line 2351 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), 
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 984:
#line 2353 "frame/parser.Y"
    {fr->getMarkerCircleFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 985:
#line 2355 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 986:
#line 2356 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 987:
#line 2357 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 988:
#line 2358 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 989:
#line 2360 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 990:
#line 2361 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 991:
#line 2362 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 992:
#line 2363 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 993:
#line 2364 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 994:
#line 2366 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 995:
#line 2368 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 996:
#line 2369 "frame/parser.Y"
    {fr->getMarkerEllipseFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 997:
#line 2371 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 998:
#line 2373 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 999:
#line 2375 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1000:
#line 2376 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1001:
#line 2378 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1002:
#line 2380 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1003:
#line 2381 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1004:
#line 2382 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1005:
#line 2383 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1006:
#line 2385 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1007:
#line 2387 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1008:
#line 2390 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1009:
#line 2393 "frame/parser.Y"
    {fr->getMarkerPolygonFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1010:
#line 2394 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1011:
#line 2395 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1012:
#line 2397 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1013:
#line 2400 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1014:
#line 2403 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1015:
#line 2404 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1016:
#line 2405 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1017:
#line 2406 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1018:
#line 2408 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1019:
#line 2410 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1020:
#line 2412 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1021:
#line 2413 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1022:
#line 2415 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1023:
#line 2416 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1024:
#line 2417 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1025:
#line 2418 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1026:
#line 2419 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1027:
#line 2421 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1028:
#line 2423 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1029:
#line 2425 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1030:
#line 2427 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1032:
#line 2429 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1033:
#line 2430 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1034:
#line 2432 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1035:
#line 2434 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1036:
#line 2435 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1037:
#line 2436 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1039:
#line 2438 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1041:
#line 2442 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1042:
#line 2443 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1043:
#line 2444 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1044:
#line 2445 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1045:
#line 2446 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1046:
#line 2447 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1047:
#line 2449 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1048:
#line 2450 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1049:
#line 2452 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1050:
#line 2455 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1051:
#line 2456 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1052:
#line 2457 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1053:
#line 2458 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1054:
#line 2461 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1055:
#line 2462 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1056:
#line 2465 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1057:
#line 2466 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1058:
#line 2469 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1059:
#line 2470 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1060:
#line 2473 "frame/parser.Y"
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

  case 1061:
#line 2486 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1062:
#line 2487 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1063:
#line 2491 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1064:
#line 2492 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1065:
#line 2496 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1066:
#line 2497 "frame/parser.Y"
    {fr->markerLayerCmd(Base::ANALYSIS);;}
    break;

  case 1067:
#line 2502 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer),
	    0, propQMask, propQValue, taglist);;}
    break;

  case 1068:
#line 2507 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer), 
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer),
	    1, propQMask, propQValue, taglist);;}
    break;

  case 1069:
#line 2513 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1070:
#line 2515 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].str),
	    (Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1071:
#line 2518 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1072:
#line 2520 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].integer),
	    (Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1073:
#line 2523 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (yyvsp[(4) - (6)].dash), (yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].str));;}
    break;

  case 1074:
#line 2526 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1075:
#line 2527 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1076:
#line 2528 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1077:
#line 2529 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1078:
#line 2530 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1079:
#line 2531 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1080:
#line 2533 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::InternalSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1081:
#line 2535 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1084:
#line 2542 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1085:
#line 2543 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1086:
#line 2544 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1087:
#line 2545 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1088:
#line 2546 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1089:
#line 2547 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1092:
#line 2552 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1093:
#line 2553 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1094:
#line 2554 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1095:
#line 2555 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1096:
#line 2556 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1097:
#line 2557 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1098:
#line 2558 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1099:
#line 2559 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1100:
#line 2560 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1101:
#line 2561 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1102:
#line 2562 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1105:
#line 2569 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1106:
#line 2570 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1108:
#line 2573 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1109:
#line 2574 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1110:
#line 2575 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1111:
#line 2576 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1112:
#line 2579 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1113:
#line 2580 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1116:
#line 2588 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1117:
#line 2591 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1118:
#line 2592 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1122:
#line 2599 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1123:
#line 2602 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1124:
#line 2606 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1125:
#line 2607 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1126:
#line 2608 "frame/parser.Y"
    {fr->maskMarkCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1127:
#line 2609 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1128:
#line 2612 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1129:
#line 2613 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1130:
#line 2614 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1131:
#line 2615 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1132:
#line 2619 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1133:
#line 2620 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1134:
#line 2622 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1135:
#line 2627 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1137:
#line 2629 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1139:
#line 2631 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1140:
#line 2634 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1141:
#line 2636 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1142:
#line 2641 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1143:
#line 2644 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1144:
#line 2645 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1145:
#line 2646 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1146:
#line 2649 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1147:
#line 2651 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1148:
#line 2655 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1149:
#line 2656 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1150:
#line 2660 "frame/parser.Y"
    {fr->psColorSpaceCmd((Widget::PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1151:
#line 2661 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1152:
#line 2662 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1153:
#line 2663 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  ;}
    break;

  case 1154:
#line 2668 "frame/parser.Y"
    {(yyval.integer) = Widget::BW;;}
    break;

  case 1155:
#line 2669 "frame/parser.Y"
    {(yyval.integer) = Widget::GRAY;;}
    break;

  case 1156:
#line 2670 "frame/parser.Y"
    {(yyval.integer) = Widget::RGB;;}
    break;

  case 1157:
#line 2671 "frame/parser.Y"
    {(yyval.integer) = Widget::CMYK;;}
    break;

  case 1160:
#line 2679 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1161:
#line 2681 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1162:
#line 2682 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1163:
#line 2683 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1164:
#line 2687 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1165:
#line 2688 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1166:
#line 2689 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1167:
#line 2690 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1168:
#line 2693 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1169:
#line 2694 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1170:
#line 2697 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1171:
#line 2698 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1172:
#line 2699 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1173:
#line 2702 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1174:
#line 2703 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1175:
#line 2704 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1176:
#line 2707 "frame/parser.Y"
    {fr->rotateCmd(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 1177:
#line 2708 "frame/parser.Y"
    {fr->rotateCmd(degToRad((yyvsp[(1) - (2)].real)));;}
    break;

  case 1179:
#line 2710 "frame/parser.Y"
    {fr->rotateToCmd(degToRad((yyvsp[(2) - (2)].real)));;}
    break;

  case 1180:
#line 2711 "frame/parser.Y"
    {fr->rotateToCmd(degToRad((yyvsp[(2) - (3)].real)));;}
    break;

  case 1181:
#line 2714 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1182:
#line 2715 "frame/parser.Y"
    {fr->rotateMotionCmd(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 1183:
#line 2716 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1188:
#line 2723 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1189:
#line 2727 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1190:
#line 2729 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1191:
#line 2731 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1193:
#line 2736 "frame/parser.Y"
    {fr->saveArrayRGBCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1194:
#line 2738 "frame/parser.Y"
    {fr->saveArrayRGBCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1195:
#line 2740 "frame/parser.Y"
    {fr->saveArrayRGBCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1205:
#line 2753 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1206:
#line 2754 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1207:
#line 2755 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1208:
#line 2758 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1209:
#line 2759 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1210:
#line 2760 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1211:
#line 2763 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1212:
#line 2764 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1213:
#line 2765 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1214:
#line 2768 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1215:
#line 2769 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1216:
#line 2770 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1218:
#line 2774 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1219:
#line 2775 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1220:
#line 2776 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1221:
#line 2779 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1222:
#line 2780 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1223:
#line 2781 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1224:
#line 2784 "frame/parser.Y"
    {fr->saveFitsRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1225:
#line 2785 "frame/parser.Y"
    {fr->saveFitsRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1226:
#line 2786 "frame/parser.Y"
    {fr->saveFitsRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1227:
#line 2789 "frame/parser.Y"
    {fr->saveFitsRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1228:
#line 2790 "frame/parser.Y"
    {fr->saveFitsRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1229:
#line 2791 "frame/parser.Y"
    {fr->saveFitsRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1230:
#line 2794 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1231:
#line 2795 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1232:
#line 2796 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1233:
#line 2800 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1234:
#line 2802 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1235:
#line 2804 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1236:
#line 2808 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1237:
#line 2812 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1238:
#line 2813 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1239:
#line 2816 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1240:
#line 2817 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1241:
#line 2818 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1242:
#line 2819 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1243:
#line 2822 "frame/parser.Y"
    {fr->updateFitsCmd(0);;}
    break;

  case 1244:
#line 2824 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)),0);;}
    break;

  case 1245:
#line 2825 "frame/parser.Y"
    {fr->updateFitsCmd(1);;}
    break;

  case 1246:
#line 2827 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)),1);;}
    break;

  case 1248:
#line 2831 "frame/parser.Y"
    {fr->sliceCmd(2, (yyvsp[(1) - (1)].integer));;}
    break;

  case 1249:
#line 2832 "frame/parser.Y"
    {fr->sliceCmd(2, (yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1250:
#line 2833 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer), (yyvsp[(2) - (2)].integer));;}
    break;

  case 1251:
#line 2834 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (3)].integer), (yyvsp[(2) - (3)].real), (Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1252:
#line 2837 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1253:
#line 2838 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1254:
#line 2842 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1256:
#line 2844 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1259:
#line 2849 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1260:
#line 2850 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1261:
#line 2851 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1262:
#line 2854 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1263:
#line 2855 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1264:
#line 2856 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1265:
#line 2859 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1266:
#line 2861 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1267:
#line 2866 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (4)].integer), (FitsImage*)(yyvsp[(2) - (4)].ptr), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1268:
#line 2869 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1269:
#line 2876 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1270:
#line 2878 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1271:
#line 2880 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1272:
#line 2885 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1274:
#line 2889 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1275:
#line 2890 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1276:
#line 2891 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1277:
#line 2893 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1278:
#line 2895 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1279:
#line 2900 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 11079 "frame/parser.C"
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


#line 2904 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

