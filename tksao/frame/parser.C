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
     PRECISION_ = 483,
     PRINT_ = 484,
     PRESERVE_ = 485,
     PROJECTION_ = 486,
     PROPERTY_ = 487,
     PUBLICATION_ = 488,
     PROS_ = 489,
     QUERY_ = 490,
     RADIAL_ = 491,
     RADIUS_ = 492,
     REGION_ = 493,
     REPLACE_ = 494,
     RESAMPLE_ = 495,
     RESET_ = 496,
     RESOLUTION_ = 497,
     RGB_ = 498,
     ROOT_ = 499,
     ROTATE_ = 500,
     RULER_ = 501,
     SAMPLE_ = 502,
     SAOIMAGE_ = 503,
     SAOTNG_ = 504,
     SAVE_ = 505,
     SCALE_ = 506,
     SCAN_ = 507,
     SCIENTIFIC_ = 508,
     SCOPE_ = 509,
     SEGMENT_ = 510,
     SELECT_ = 511,
     SET_ = 512,
     SEXAGESIMAL_ = 513,
     SHAPE_ = 514,
     SHARED_ = 515,
     SHIFT_ = 516,
     SHMID_ = 517,
     SHOW_ = 518,
     SIGMA_ = 519,
     SINH_ = 520,
     SIZE_ = 521,
     SLICE_ = 522,
     SMMAP_ = 523,
     SMOOTH_ = 524,
     SOCKET_ = 525,
     SOCKETGZ_ = 526,
     SOURCE_ = 527,
     SQRT_ = 528,
     SQUARED_ = 529,
     SSHARED_ = 530,
     STATS_ = 531,
     STATUS_ = 532,
     SUPERGALACTIC_ = 533,
     SUM_ = 534,
     SYSTEM_ = 535,
     TABLE_ = 536,
     TAG_ = 537,
     TEMPLATE_ = 538,
     TEXT_ = 539,
     THREADS_ = 540,
     THREED_ = 541,
     THRESHOLD_ = 542,
     THICK_ = 543,
     TRANSPARENCY_ = 544,
     TO_ = 545,
     TOGGLE_ = 546,
     TOPHAT_ = 547,
     TRUE_ = 548,
     TYPE_ = 549,
     UNDO_ = 550,
     UNHIGHLITE_ = 551,
     UNLOAD_ = 552,
     UNSELECT_ = 553,
     UPDATE_ = 554,
     USER_ = 555,
     VALUE_ = 556,
     VAR_ = 557,
     VIEW_ = 558,
     VECTOR_ = 559,
     VERSION_ = 560,
     VERTEX_ = 561,
     VERTICAL_ = 562,
     WARP_ = 563,
     WCS_ = 564,
     WCSA_ = 565,
     WCSB_ = 566,
     WCSC_ = 567,
     WCSD_ = 568,
     WCSE_ = 569,
     WCSF_ = 570,
     WCSG_ = 571,
     WCSH_ = 572,
     WCSI_ = 573,
     WCSJ_ = 574,
     WCSK_ = 575,
     WCSL_ = 576,
     WCSM_ = 577,
     WCSN_ = 578,
     WCSO_ = 579,
     WCSP_ = 580,
     WCSQ_ = 581,
     WCSR_ = 582,
     WCSS_ = 583,
     WCST_ = 584,
     WCSU_ = 585,
     WCSV_ = 586,
     WCSW_ = 587,
     WCSX_ = 588,
     WCSY_ = 589,
     WCSZ_ = 590,
     WCS0_ = 591,
     WFPC2_ = 592,
     WIDTH_ = 593,
     WIN32_ = 594,
     XML_ = 595,
     XY_ = 596,
     YES_ = 597,
     ZMAX_ = 598,
     ZSCALE_ = 599,
     ZOOM_ = 600
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
#define PRECISION_ 483
#define PRINT_ 484
#define PRESERVE_ 485
#define PROJECTION_ 486
#define PROPERTY_ 487
#define PUBLICATION_ 488
#define PROS_ 489
#define QUERY_ 490
#define RADIAL_ 491
#define RADIUS_ 492
#define REGION_ 493
#define REPLACE_ 494
#define RESAMPLE_ 495
#define RESET_ 496
#define RESOLUTION_ 497
#define RGB_ 498
#define ROOT_ 499
#define ROTATE_ 500
#define RULER_ 501
#define SAMPLE_ 502
#define SAOIMAGE_ 503
#define SAOTNG_ 504
#define SAVE_ 505
#define SCALE_ 506
#define SCAN_ 507
#define SCIENTIFIC_ 508
#define SCOPE_ 509
#define SEGMENT_ 510
#define SELECT_ 511
#define SET_ 512
#define SEXAGESIMAL_ 513
#define SHAPE_ 514
#define SHARED_ 515
#define SHIFT_ 516
#define SHMID_ 517
#define SHOW_ 518
#define SIGMA_ 519
#define SINH_ 520
#define SIZE_ 521
#define SLICE_ 522
#define SMMAP_ 523
#define SMOOTH_ 524
#define SOCKET_ 525
#define SOCKETGZ_ 526
#define SOURCE_ 527
#define SQRT_ 528
#define SQUARED_ 529
#define SSHARED_ 530
#define STATS_ 531
#define STATUS_ 532
#define SUPERGALACTIC_ 533
#define SUM_ 534
#define SYSTEM_ 535
#define TABLE_ 536
#define TAG_ 537
#define TEMPLATE_ 538
#define TEXT_ 539
#define THREADS_ 540
#define THREED_ 541
#define THRESHOLD_ 542
#define THICK_ 543
#define TRANSPARENCY_ 544
#define TO_ 545
#define TOGGLE_ 546
#define TOPHAT_ 547
#define TRUE_ 548
#define TYPE_ 549
#define UNDO_ 550
#define UNHIGHLITE_ 551
#define UNLOAD_ 552
#define UNSELECT_ 553
#define UPDATE_ 554
#define USER_ 555
#define VALUE_ 556
#define VAR_ 557
#define VIEW_ 558
#define VECTOR_ 559
#define VERSION_ 560
#define VERTEX_ 561
#define VERTICAL_ 562
#define WARP_ 563
#define WCS_ 564
#define WCSA_ 565
#define WCSB_ 566
#define WCSC_ 567
#define WCSD_ 568
#define WCSE_ 569
#define WCSF_ 570
#define WCSG_ 571
#define WCSH_ 572
#define WCSI_ 573
#define WCSJ_ 574
#define WCSK_ 575
#define WCSL_ 576
#define WCSM_ 577
#define WCSN_ 578
#define WCSO_ 579
#define WCSP_ 580
#define WCSQ_ 581
#define WCSR_ 582
#define WCSS_ 583
#define WCST_ 584
#define WCSU_ 585
#define WCSV_ 586
#define WCSW_ 587
#define WCSX_ 588
#define WCSY_ 589
#define WCSZ_ 590
#define WCS0_ 591
#define WFPC2_ 592
#define WIDTH_ 593
#define WIN32_ 594
#define XML_ 595
#define XY_ 596
#define YES_ 597
#define ZMAX_ 598
#define ZSCALE_ 599
#define ZOOM_ 600




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
#line 846 "frame/parser.C"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 859 "frame/parser.C"

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
#define YYFINAL  353
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   6184

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  350
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  215
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1268
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2806

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   600

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
       2,   349,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   347,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   348,   346,
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
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    13,    16,    18,    20,    23,
      27,    30,    33,    36,    39,    42,    45,    48,    51,    54,
      57,    60,    62,    65,    68,    72,    75,    78,    81,    84,
      88,    91,    95,    98,   101,   104,   107,   115,   118,   120,
     124,   127,   130,   133,   135,   138,   141,   144,   146,   149,
     151,   154,   157,   160,   163,   165,   167,   169,   171,   174,
     177,   180,   183,   186,   189,   192,   195,   198,   201,   204,
     206,   208,   210,   212,   214,   216,   218,   220,   222,   223,
     226,   229,   231,   233,   234,   236,   238,   240,   242,   244,
     246,   248,   251,   254,   257,   260,   262,   264,   266,   268,
     270,   272,   274,   276,   278,   280,   282,   284,   286,   288,
     290,   292,   294,   296,   298,   300,   302,   304,   306,   308,
     310,   312,   314,   316,   318,   320,   322,   324,   326,   328,
     330,   332,   334,   336,   338,   340,   342,   344,   346,   348,
     350,   352,   354,   356,   357,   359,   361,   363,   365,   367,
     369,   371,   373,   375,   377,   378,   380,   382,   383,   385,
     387,   389,   390,   392,   394,   395,   397,   399,   400,   402,
     404,   405,   407,   409,   411,   413,   415,   417,   419,   420,
     422,   424,   426,   428,   430,   432,   434,   435,   437,   439,
     440,   442,   444,   446,   448,   450,   453,   456,   459,   462,
     465,   468,   471,   473,   476,   478,   481,   483,   486,   488,
     491,   494,   501,   504,   509,   512,   515,   518,   522,   525,
     528,   530,   533,   535,   538,   543,   549,   552,   556,   562,
     569,   571,   573,   575,   583,   595,   604,   617,   619,   622,
     625,   627,   629,   632,   635,   638,   641,   645,   648,   651,
     653,   655,   657,   659,   661,   663,   665,   668,   671,   674,
     678,   681,   684,   687,   694,   705,   707,   710,   712,   719,
     730,   732,   735,   738,   741,   744,   747,   750,   764,   778,
     791,   804,   806,   807,   809,   811,   816,   823,   825,   827,
     829,   831,   833,   835,   837,   839,   841,   846,   850,   855,
     856,   863,   872,   875,   879,   883,   887,   888,   892,   897,
     902,   907,   911,   915,   917,   921,   927,   932,   937,   941,
     944,   945,   947,   949,   953,   956,   959,   962,   965,   968,
     971,   974,   977,   980,   983,   986,   989,   992,   995,   997,
    1000,  1003,  1008,  1018,  1021,  1024,  1027,  1029,  1033,  1036,
    1039,  1041,  1044,  1053,  1056,  1058,  1061,  1063,  1066,  1068,
    1073,  1083,  1086,  1088,  1090,  1092,  1094,  1097,  1099,  1101,
    1104,  1106,  1107,  1110,  1113,  1115,  1116,  1119,  1122,  1124,
    1126,  1129,  1132,  1135,  1137,  1139,  1141,  1143,  1145,  1147,
    1148,  1150,  1153,  1155,  1160,  1166,  1167,  1170,  1172,  1178,
    1181,  1184,  1186,  1188,  1190,  1193,  1195,  1198,  1200,  1202,
    1203,  1205,  1207,  1208,  1210,  1216,  1223,  1228,  1232,  1239,
    1242,  1244,  1248,  1250,  1252,  1254,  1258,  1265,  1273,  1279,
    1281,  1283,  1288,  1294,  1296,  1300,  1301,  1303,  1306,  1308,
    1313,  1315,  1318,  1320,  1323,  1327,  1330,  1332,  1335,  1337,
    1342,  1345,  1347,  1349,  1353,  1355,  1358,  1362,  1365,  1366,
    1368,  1370,  1375,  1378,  1379,  1381,  1383,  1386,  1387,  1389,
    1391,  1393,  1395,  1397,  1399,  1401,  1403,  1405,  1407,  1409,
    1412,  1414,  1417,  1419,  1422,  1425,  1428,  1431,  1433,  1435,
    1437,  1438,  1440,  1441,  1443,  1444,  1446,  1447,  1449,  1450,
    1453,  1456,  1457,  1459,  1462,  1464,  1471,  1477,  1479,  1481,
    1483,  1486,  1489,  1491,  1493,  1495,  1497,  1500,  1502,  1504,
    1506,  1509,  1511,  1513,  1515,  1518,  1521,  1524,  1525,  1527,
    1528,  1530,  1532,  1534,  1536,  1538,  1540,  1542,  1544,  1547,
    1550,  1552,  1555,  1559,  1561,  1564,  1567,  1572,  1579,  1581,
    1592,  1594,  1597,  1601,  1605,  1608,  1611,  1614,  1617,  1620,
    1623,  1626,  1631,  1636,  1641,  1645,  1649,  1655,  1660,  1665,
    1670,  1674,  1678,  1682,  1686,  1689,  1692,  1697,  1701,  1705,
    1709,  1713,  1718,  1723,  1728,  1733,  1739,  1744,  1751,  1759,
    1764,  1769,  1775,  1778,  1782,  1786,  1790,  1793,  1797,  1801,
    1805,  1809,  1814,  1818,  1824,  1831,  1835,  1839,  1844,  1848,
    1852,  1856,  1860,  1864,  1870,  1874,  1878,  1883,  1887,  1890,
    1893,  1895,  1899,  1904,  1909,  1914,  1919,  1924,  1931,  1936,
    1941,  1947,  1952,  1957,  1962,  1967,  1973,  1978,  1985,  1993,
    1998,  2003,  2009,  2015,  2021,  2027,  2033,  2039,  2047,  2053,
    2059,  2066,  2072,  2078,  2084,  2090,  2097,  2103,  2111,  2120,
    2126,  2132,  2139,  2143,  2147,  2151,  2155,  2159,  2165,  2169,
    2173,  2178,  2182,  2186,  2190,  2194,  2199,  2203,  2209,  2216,
    2220,  2224,  2229,  2233,  2237,  2241,  2245,  2249,  2255,  2259,
    2263,  2268,  2273,  2278,  2282,  2288,  2293,  2298,  2301,  2305,
    2312,  2319,  2321,  2323,  2325,  2328,  2331,  2334,  2338,  2342,
    2345,  2358,  2361,  2364,  2366,  2370,  2375,  2378,  2379,  2383,
    2385,  2387,  2390,  2393,  2396,  2399,  2402,  2407,  2412,  2417,
    2421,  2426,  2432,  2440,  2449,  2456,  2461,  2470,  2480,  2487,
    2494,  2502,  2513,  2525,  2538,  2548,  2554,  2559,  2565,  2572,
    2576,  2582,  2588,  2594,  2601,  2607,  2612,  2622,  2633,  2645,
    2655,  2662,  2669,  2676,  2683,  2690,  2697,  2704,  2711,  2718,
    2726,  2734,  2737,  2742,  2747,  2752,  2757,  2763,  2768,  2773,
    2779,  2785,  2789,  2794,  2799,  2804,  2809,  2816,  2824,  2833,
    2843,  2850,  2861,  2873,  2886,  2896,  2900,  2903,  2907,  2913,
    2920,  2928,  2933,  2937,  2941,  2948,  2955,  2962,  2970,  2977,
    2985,  2990,  2995,  3000,  3007,  3017,  3022,  3026,  3031,  3038,
    3046,  3054,  3057,  3061,  3065,  3069,  3074,  3077,  3080,  3085,
    3093,  3104,  3108,  3110,  3114,  3117,  3120,  3123,  3126,  3130,
    3136,  3141,  3147,  3150,  3158,  3162,  3165,  3168,  3172,  3175,
    3178,  3181,  3185,  3188,  3192,  3197,  3201,  3205,  3211,  3218,
    3223,  3226,  3230,  3233,  3236,  3241,  3245,  3249,  3252,  3256,
    3258,  3261,  3263,  3266,  3269,  3272,  3274,  3276,  3278,  3280,
    3283,  3285,  3288,  3291,  3293,  3296,  3299,  3301,  3304,  3306,
    3308,  3310,  3312,  3314,  3316,  3318,  3320,  3321,  3323,  3326,
    3329,  3332,  3336,  3342,  3350,  3358,  3365,  3372,  3379,  3386,
    3392,  3399,  3406,  3413,  3420,  3427,  3434,  3441,  3453,  3461,
    3469,  3477,  3487,  3497,  3508,  3521,  3534,  3537,  3540,  3544,
    3549,  3554,  3559,  3562,  3567,  3572,  3574,  3576,  3578,  3580,
    3582,  3584,  3586,  3588,  3591,  3593,  3595,  3597,  3601,  3605,
    3610,  3617,  3628,  3636,  3644,  3650,  3655,  3662,  3673,  3681,
    3689,  3695,  3698,  3701,  3705,  3710,  3716,  3720,  3726,  3732,
    3736,  3741,  3747,  3753,  3759,  3763,  3769,  3772,  3776,  3780,
    3786,  3790,  3794,  3798,  3803,  3809,  3815,  3819,  3825,  3831,
    3835,  3840,  3846,  3852,  3855,  3858,  3862,  3868,  3875,  3882,
    3886,  3890,  3894,  3901,  3907,  3913,  3916,  3920,  3924,  3930,
    3937,  3941,  3944,  3947,  3951,  3954,  3958,  3961,  3965,  3971,
    3978,  3981,  3984,  3987,  3989,  3994,  3999,  4001,  4004,  4007,
    4010,  4013,  4016,  4019,  4022,  4026,  4029,  4033,  4036,  4040,
    4042,  4044,  4046,  4048,  4050,  4051,  4054,  4055,  4058,  4059,
    4061,  4062,  4063,  4065,  4067,  4069,  4071,  4079,  4088,  4091,
    4096,  4099,  4104,  4111,  4114,  4116,  4118,  4122,  4126,  4128,
    4132,  4137,  4140,  4142,  4146,  4150,  4155,  4159,  4163,  4167,
    4169,  4171,  4173,  4175,  4177,  4179,  4181,  4183,  4185,  4187,
    4189,  4191,  4193,  4195,  4198,  4199,  4200,  4203,  4205,  4209,
    4211,  4215,  4217,  4220,  4223,  4225,  4229,  4230,  4231,  4234,
    4237,  4239,  4243,  4249,  4251,  4254,  4257,  4260,  4262,  4264,
    4266,  4268,  4273,  4276,  4280,  4284,  4287,  4291,  4294,  4297,
    4300,  4304,  4308,  4312,  4315,  4319,  4321,  4325,  4329,  4331,
    4334,  4337,  4340,  4343,  4345,  4347,  4349,  4351,  4354,  4357,
    4361,  4365,  4367,  4370,  4374,  4378,  4380,  4383,  4385,  4387,
    4389,  4391,  4393,  4396,  4399,  4404,  4406,  4409,  4412,  4415,
    4419,  4421,  4423,  4425,  4428,  4431,  4434,  4437,  4440,  4444,
    4448,  4452,  4456,  4460,  4464,  4468,  4470,  4473,  4476,  4479,
    4483,  4486,  4490,  4494,  4497,  4500,  4503,  4506,  4509,  4512,
    4515,  4518,  4521,  4524,  4527,  4530,  4533,  4536,  4540,  4544,
    4548,  4551,  4554,  4557,  4560,  4563,  4566,  4569,  4572,  4575,
    4578,  4581,  4584,  4588,  4592,  4596,  4601,  4608,  4610,  4612,
    4614,  4616,  4618,  4619,  4625,  4627,  4634,  4638,  4640,  4643,
    4646,  4650,  4653,  4657,  4661,  4664,  4667,  4670,  4673,  4676,
    4679,  4683,  4686,  4689,  4693,  4695,  4699,  4704,  4706,  4709,
    4715,  4722,  4729,  4732,  4734,  4737,  4740,  4746,  4753
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     351,     0,    -1,    96,   353,    -1,    44,   383,    -1,    41,
      66,     5,    -1,    46,   388,    -1,    59,    -1,    64,    -1,
      65,   390,    -1,    67,   282,     5,    -1,    68,   395,    -1,
      69,   397,    -1,    77,   398,    -1,    84,   407,    -1,    86,
     409,    -1,    87,   410,    -1,    95,   354,    -1,   125,   412,
      -1,   137,   413,    -1,   141,   455,    -1,   144,   458,    -1,
     149,    -1,   150,   354,    -1,   156,   464,    -1,   162,    16,
       4,    -1,   175,   467,    -1,   178,   485,    -1,   179,   486,
      -1,   180,   487,    -1,   183,   503,   488,    -1,   184,   522,
      -1,   197,    66,     5,    -1,   212,   523,    -1,   213,   524,
      -1,   214,   527,    -1,   235,    88,    -1,   228,     4,     4,
       4,     4,     4,     4,    -1,   226,   528,    -1,   241,    -1,
     238,   503,   530,    -1,   243,   535,    -1,   245,   536,    -1,
     250,   538,    -1,   263,    -1,   269,   553,    -1,   285,     4,
      -1,   286,   378,    -1,   297,    -1,   299,   555,    -1,   305,
      -1,   308,   557,    -1,   309,   558,    -1,   339,   562,    -1,
     345,   563,    -1,     3,    -1,     4,    -1,   209,    -1,   208,
      -1,    29,   354,    -1,   192,   354,    -1,   215,   354,    -1,
     217,   354,    -1,   309,   354,    -1,    44,   354,    -1,    46,
     354,    -1,    76,   354,    -1,    84,   354,    -1,   142,   354,
      -1,   243,   354,    -1,     4,    -1,   342,    -1,   346,    -1,
     209,    -1,   293,    -1,   202,    -1,   347,    -1,   208,    -1,
     119,    -1,    -1,   244,    38,    -1,   133,    38,    -1,   244,
      -1,   133,    -1,    -1,   357,    -1,   352,    -1,     7,    -1,
       8,    -1,     9,    -1,    10,    -1,    11,    -1,   358,   358,
      -1,   359,   360,    -1,   360,   360,    -1,   352,   352,    -1,
     157,    -1,   219,    -1,   101,    -1,    19,    -1,   363,    -1,
     309,    -1,   310,    -1,   311,    -1,   312,    -1,   313,    -1,
     314,    -1,   315,    -1,   316,    -1,   317,    -1,   318,    -1,
     319,    -1,   320,    -1,   321,    -1,   322,    -1,   323,    -1,
     324,    -1,   325,    -1,   326,    -1,   327,    -1,   328,    -1,
     329,    -1,   330,    -1,   331,    -1,   332,    -1,   333,    -1,
     334,    -1,   335,    -1,   336,    -1,    56,    -1,   214,    -1,
     173,    -1,   177,    -1,   227,    -1,   273,    -1,   274,    -1,
      28,    -1,   265,    -1,   151,    -1,    30,    -1,   252,    -1,
     247,    -1,    94,    -1,   163,    -1,    -1,   127,    -1,   128,
      -1,    35,    -1,   129,    -1,   164,    -1,   154,    -1,   135,
      -1,   278,    -1,   106,    -1,   148,    -1,    -1,    97,    -1,
     258,    -1,    -1,    97,    -1,    24,    -1,    25,    -1,    -1,
     262,    -1,   165,    -1,    -1,    17,    -1,   159,    -1,    -1,
     157,    -1,   184,    -1,    -1,    62,    -1,    48,    -1,   102,
      -1,    85,    -1,   348,    -1,    27,    -1,    51,    -1,    -1,
       4,    -1,    82,    -1,   152,    -1,   221,    -1,   222,    -1,
     236,    -1,   276,    -1,    -1,    32,    -1,   279,    -1,    -1,
     198,    -1,    42,    -1,    43,    -1,   170,    -1,   171,    -1,
     303,   382,    -1,    47,   379,    -1,    74,   380,    -1,   150,
     381,    -1,   186,   533,    -1,    37,   534,    -1,   251,   352,
      -1,   230,    -1,   287,   352,    -1,   354,    -1,    66,     5,
      -1,   354,    -1,    66,     5,    -1,   354,    -1,    66,     5,
      -1,   352,   352,    -1,   223,   352,   352,   352,   352,   352,
      -1,    12,   384,    -1,    71,     5,     5,     5,    -1,   100,
       4,    -1,   118,   385,    -1,   134,   386,    -1,    53,   266,
       4,    -1,   290,   387,    -1,   122,     5,    -1,    59,    -1,
     352,   352,    -1,   352,    -1,   352,   352,    -1,   352,    12,
     352,   352,    -1,   352,   352,    12,   352,   352,    -1,   290,
     352,    -1,   290,   352,   352,    -1,   290,   352,    12,   352,
     352,    -1,   290,   352,   352,    12,   352,   352,    -1,    32,
      -1,   279,    -1,   123,    -1,   352,   352,    12,    59,     5,
       5,     5,    -1,   352,   352,     4,   352,   352,    12,    59,
       5,     5,     5,     5,    -1,   352,   352,    12,   352,   352,
       5,     5,     5,    -1,   352,   352,     4,   352,   352,    12,
     352,   352,     5,     5,     5,     5,    -1,   352,    -1,   352,
     352,    -1,   290,   389,    -1,   123,    -1,   352,    -1,   352,
     352,    -1,   254,   391,    -1,   193,   392,    -1,   187,   393,
      -1,   300,   352,   352,    -1,   344,   394,    -1,   230,   354,
      -1,   138,    -1,   176,    -1,   352,    -1,   187,    -1,   344,
      -1,   343,    -1,   300,    -1,     4,   366,    -1,   193,   366,
      -1,   247,     4,    -1,   352,     4,     4,    -1,    78,   352,
      -1,   247,     4,    -1,   172,     4,    -1,     4,   352,   352,
       4,     6,     4,    -1,   243,   352,   352,   352,   352,   352,
     352,     4,     6,     4,    -1,    40,    -1,   194,   396,    -1,
     111,    -1,     4,   352,   352,     4,     6,     4,    -1,   243,
     352,   352,   352,   352,   352,   352,     4,     6,     4,    -1,
     365,    -1,   177,   352,    -1,    83,   399,    -1,    99,   400,
      -1,   175,   401,    -1,   216,   405,    -1,   250,   406,    -1,
       5,     4,     4,   404,     4,     4,   365,   352,   402,   403,
     352,   352,     5,    -1,     5,     4,     4,   404,     4,     4,
     365,   352,   352,   403,   352,   352,     5,    -1,     5,     4,
       4,   404,     4,     4,   365,   352,   402,   352,   352,     5,
      -1,     5,     4,     4,   404,     4,     4,   365,   352,   352,
     352,   352,     5,    -1,   225,    -1,    -1,    31,    -1,     5,
      -1,     5,     5,     4,   354,    -1,     5,     4,   354,     5,
     362,   367,    -1,   187,    -1,   344,    -1,   343,    -1,   300,
      -1,   138,    -1,   176,    -1,   269,    -1,    46,    -1,     5,
      -1,     5,     5,     4,   354,    -1,     5,   362,   367,    -1,
      31,     5,   362,   367,    -1,    -1,   352,   352,   352,   352,
     362,   367,    -1,    59,   361,   362,   367,   352,   352,   362,
     369,    -1,   286,   408,    -1,    40,   352,   352,    -1,   194,
     352,   352,    -1,   111,   352,   352,    -1,    -1,   352,   352,
     362,    -1,    40,   352,   352,     4,    -1,   194,   352,   352,
       4,    -1,   111,   352,   352,     4,    -1,   364,   352,   352,
      -1,   362,   367,   361,    -1,   354,    -1,   308,   352,   352,
      -1,    40,   194,   364,   352,   352,    -1,   194,   364,   352,
     352,    -1,    40,   194,   362,   361,    -1,   194,   362,   361,
      -1,    33,     4,    -1,    -1,    32,    -1,   279,    -1,   144,
     117,     5,    -1,    41,    66,    -1,    44,   414,    -1,    46,
     416,    -1,    65,   417,    -1,    68,   421,    -1,    67,   420,
      -1,    69,   423,    -1,    77,   425,    -1,    79,   428,    -1,
      84,   429,    -1,    86,   430,    -1,    88,   432,    -1,    87,
     431,    -1,    93,   433,    -1,    95,    -1,   124,   437,    -1,
     141,   443,    -1,   152,     5,     5,     4,    -1,   153,    89,
       5,     5,   352,   352,   364,     4,   411,    -1,   156,   435,
      -1,   160,   434,    -1,   162,    16,    -1,   187,    -1,   183,
     503,   497,    -1,   184,   444,    -1,   197,    66,    -1,   212,
      -1,   213,   445,    -1,   220,   281,   364,   352,   352,     4,
       4,     5,    -1,   243,   446,    -1,   245,    -1,   269,   447,
      -1,   285,    -1,   286,   448,    -1,   294,    -1,   301,   364,
     352,   352,    -1,   307,    89,     5,     5,   352,   352,   364,
       4,   411,    -1,   309,   453,    -1,   345,    -1,   100,    -1,
     118,    -1,   134,    -1,    53,   266,    -1,    88,    -1,   122,
      -1,    71,   415,    -1,   174,    -1,    -1,   187,     5,    -1,
     103,     5,    -1,   118,    -1,    -1,   402,   403,    -1,   352,
     403,    -1,   254,    -1,   193,    -1,   187,   418,    -1,   300,
     169,    -1,   344,   419,    -1,   230,    -1,   193,    -1,   247,
      -1,    78,    -1,   247,    -1,   172,    -1,    -1,   282,    -1,
     169,   422,    -1,     4,    -1,     4,   364,   352,   352,    -1,
       4,   352,   352,   365,   352,    -1,    -1,   169,   424,    -1,
     177,    -1,     4,   352,   352,   365,   352,    -1,   362,   367,
      -1,    65,   426,    -1,    66,    -1,    91,    -1,   169,    -1,
     206,   169,    -1,   186,    -1,    69,   427,    -1,   269,    -1,
     338,    -1,    -1,   193,    -1,   254,    -1,    -1,   177,    -1,
     352,   352,   362,   367,   368,    -1,   364,   352,   352,   362,
     367,   368,    -1,   352,   362,   362,     4,    -1,   362,   367,
     368,    -1,    59,   362,   367,   368,   362,   369,    -1,   286,
     362,    -1,   364,    -1,   362,   367,   368,    -1,   277,    -1,
      33,    -1,   364,    -1,   362,   367,   368,    -1,   362,   367,
     361,   352,   352,     5,    -1,     4,   362,   367,   361,   352,
     352,     5,    -1,   364,   352,   352,     4,     4,    -1,     5,
      -1,    65,    -1,   364,   352,   352,     5,    -1,     6,     4,
       4,     4,     4,    -1,    88,    -1,   120,   196,   436,    -1,
      -1,     4,    -1,   352,   352,    -1,   199,    -1,    59,   362,
     367,   368,    -1,    81,    -1,   100,   440,    -1,    45,    -1,
     117,   438,    -1,   120,   196,   441,    -1,   146,   439,    -1,
     147,    -1,   207,   196,    -1,   266,    -1,   266,   362,   367,
     369,    -1,   267,   442,    -1,   338,    -1,     4,    -1,   364,
     352,   352,    -1,     4,    -1,   166,     5,    -1,     4,   166,
       5,    -1,   309,     4,    -1,    -1,     4,    -1,   355,    -1,
     355,   364,   352,   352,    -1,   355,     4,    -1,    -1,     4,
      -1,   362,    -1,     4,   362,    -1,    -1,   211,    -1,   302,
      -1,    66,    -1,   182,    -1,   289,    -1,   230,    -1,    61,
      -1,   280,    -1,   303,    -1,   134,    -1,   237,    -1,   237,
     188,    -1,   264,    -1,   264,   188,    -1,    21,    -1,   303,
     452,    -1,    47,   449,    -1,    74,   450,    -1,   150,   451,
      -1,   186,    -1,    37,    -1,   251,    -1,    -1,    66,    -1,
      -1,    66,    -1,    -1,    66,    -1,    -1,   223,    -1,    -1,
      16,   454,    -1,   196,   363,    -1,    -1,   224,    -1,    83,
     456,    -1,    99,    -1,   362,   367,   368,   457,     5,     5,
      -1,   362,   367,   368,   457,     5,    -1,    20,    -1,   233,
      -1,    19,    -1,    44,   459,    -1,    77,   460,    -1,    84,
      -1,    94,    -1,    95,    -1,   101,    -1,   124,   461,    -1,
     141,    -1,   156,    -1,   163,    -1,   183,   462,    -1,   219,
      -1,   157,    -1,   269,    -1,   280,   362,    -1,   309,   463,
      -1,    72,     5,    -1,    -1,    31,    -1,    -1,    44,    -1,
      87,    -1,   192,    -1,   150,    -1,   256,    -1,   216,    -1,
     295,    -1,   362,    -1,   115,   362,    -1,    58,   362,    -1,
      18,    -1,   286,   362,    -1,   200,     4,     4,    -1,   116,
      -1,   185,     5,    -1,    88,   466,    -1,   257,   120,   196,
     465,    -1,   257,     6,     4,     4,     4,     4,    -1,   299,
      -1,   309,   352,   352,   352,   352,   352,   352,   352,   352,
       4,    -1,     5,    -1,     5,     4,    -1,     4,     4,    56,
      -1,     4,     4,   362,    -1,   193,   354,    -1,    26,   468,
      -1,   112,   470,    -1,   124,   471,    -1,   159,   484,    -1,
     205,   482,    -1,   218,   483,    -1,     5,    14,     5,   372,
      -1,     5,    15,     5,   372,    -1,     5,    61,     5,   372,
      -1,     5,   190,   372,    -1,     5,   191,   372,    -1,     5,
     260,   370,     4,   372,    -1,     5,   270,     4,   372,    -1,
       5,   271,     4,   372,    -1,     5,   302,     5,   372,    -1,
     243,    87,   469,    -1,     5,    14,     5,    -1,     5,    15,
       5,    -1,     5,    61,     5,    -1,     5,   190,    -1,     5,
     191,    -1,     5,   260,   370,     4,    -1,     5,   270,     4,
      -1,     5,   271,     4,    -1,     5,   302,     5,    -1,     5,
       5,   268,    -1,     5,    14,     5,   372,    -1,     5,    15,
       5,   372,    -1,     5,    61,     5,   372,    -1,     5,   190,
     371,   372,    -1,     5,     5,   268,   371,   372,    -1,     5,
     191,   371,   372,    -1,     5,   260,   370,     4,   371,   372,
      -1,     5,   275,   370,     4,     4,   371,   372,    -1,     5,
     270,     4,   372,    -1,     5,   271,     4,   372,    -1,     5,
     302,     5,   371,   372,    -1,   267,   472,    -1,   117,    87,
     473,    -1,   243,   157,   481,    -1,   243,    87,   480,    -1,
     192,   474,    -1,     5,    14,     5,    -1,     5,    15,     5,
      -1,     5,    61,     5,    -1,     5,   190,   371,    -1,     5,
       5,   268,   371,    -1,     5,   191,   371,    -1,     5,   260,
     370,     4,   371,    -1,     5,   275,   370,     4,     4,   371,
      -1,     5,   270,     4,    -1,     5,   271,     4,    -1,     5,
     302,     5,   371,    -1,     5,    14,     5,    -1,     5,    15,
       5,    -1,     5,    61,     5,    -1,     5,   190,   371,    -1,
       5,   191,   371,    -1,     5,   260,   370,     4,   371,    -1,
       5,   270,     4,    -1,     5,   271,     4,    -1,     5,   302,
       5,   371,    -1,   157,   162,   475,    -1,   162,   476,    -1,
     157,   477,    -1,   478,    -1,   157,   337,   479,    -1,     5,
      14,     5,   372,    -1,     5,    15,     5,   372,    -1,     5,
      61,     5,   372,    -1,     5,   190,   371,   372,    -1,     5,
     191,   371,   372,    -1,     5,   260,   370,     4,   371,   372,
      -1,     5,   270,     4,   372,    -1,     5,   271,     4,   372,
      -1,     5,   302,     5,   371,   372,    -1,     5,    14,     5,
     372,    -1,     5,    15,     5,   372,    -1,     5,    61,     5,
     372,    -1,     5,   190,   371,   372,    -1,     5,     5,   268,
     371,   372,    -1,     5,   191,   371,   372,    -1,     5,   260,
     370,     4,   371,   372,    -1,     5,   275,   370,     4,     4,
     371,   372,    -1,     5,   270,     4,   372,    -1,     5,   271,
       4,   372,    -1,     5,   302,     5,   371,   372,    -1,   363,
       5,    14,     5,   372,    -1,   363,     5,    15,     5,   372,
      -1,   363,     5,    61,     5,   372,    -1,   363,     5,   190,
     371,   372,    -1,   363,     5,   191,   371,   372,    -1,   363,
       5,   260,   370,     4,   371,   372,    -1,   363,     5,   270,
       4,   372,    -1,   363,     5,   271,     4,   372,    -1,   363,
       5,   302,     5,   371,   372,    -1,   363,     5,    14,     5,
     372,    -1,   363,     5,    15,     5,   372,    -1,   363,     5,
      61,     5,   372,    -1,   363,     5,   190,   371,   372,    -1,
     363,     5,     5,   268,   371,   372,    -1,   363,     5,   191,
     371,   372,    -1,   363,     5,   260,   370,     4,   371,   372,
      -1,   363,     5,   275,   370,     4,     4,   371,   372,    -1,
     363,     5,   270,     4,   372,    -1,   363,     5,   271,     4,
     372,    -1,   363,     5,   302,     5,   371,   372,    -1,     5,
      14,     5,    -1,     5,    15,     5,    -1,     5,    61,     5,
      -1,     5,   190,   371,    -1,     5,   191,   371,    -1,     5,
     260,   370,     4,   371,    -1,     5,   270,     4,    -1,     5,
     271,     4,    -1,     5,   302,     5,   371,    -1,     5,    14,
       5,    -1,     5,    15,     5,    -1,     5,    61,     5,    -1,
       5,   190,   371,    -1,     5,     5,   268,   371,    -1,     5,
     191,   371,    -1,     5,   260,   370,     4,   371,    -1,     5,
     275,   370,     4,     4,   371,    -1,     5,   270,     4,    -1,
       5,   271,     4,    -1,     5,   302,     5,   371,    -1,     5,
      14,     5,    -1,     5,    15,     5,    -1,     5,    61,     5,
      -1,     5,   190,   371,    -1,     5,   191,   371,    -1,     5,
     260,   370,     4,   371,    -1,     5,   270,     4,    -1,     5,
     271,     4,    -1,     5,   302,     5,   371,    -1,     5,    14,
       5,   372,    -1,     5,    61,     5,   372,    -1,     5,   190,
     372,    -1,     5,   260,   370,     4,   372,    -1,     5,   270,
       4,   372,    -1,     5,   302,     5,   372,    -1,     5,     5,
      -1,   267,     5,     5,    -1,    93,     4,     4,     4,     4,
       4,    -1,   187,     4,     4,     4,     4,     4,    -1,   111,
      -1,   229,    -1,   354,    -1,   139,   354,    -1,    88,   354,
      -1,    66,     5,    -1,     5,     4,     4,    -1,   299,   352,
     352,    -1,   345,   352,    -1,     5,     5,   363,   367,     5,
       5,   363,   367,   352,   363,   369,     5,    -1,    60,   491,
      -1,    66,     5,    -1,    80,    -1,    73,   496,     5,    -1,
      73,   496,   302,     5,    -1,    75,    99,    -1,    -1,    83,
     489,   492,    -1,    89,    -1,    99,    -1,    99,    17,    -1,
     105,   495,    -1,   114,     4,    -1,   130,     5,    -1,   150,
      17,    -1,   150,   210,   352,   352,    -1,   150,   291,   352,
     352,    -1,     4,    20,   375,   354,    -1,     4,    21,   357,
      -1,     4,    21,   357,   364,    -1,     4,    21,   357,   362,
     367,    -1,     4,    22,   237,   352,   352,     4,   364,    -1,
       4,    22,   237,   352,   352,     4,   362,   369,    -1,     4,
      22,   237,     5,   362,   369,    -1,     4,    48,   121,   354,
      -1,     4,    49,   237,   352,   352,   352,     4,   364,    -1,
       4,    49,   237,   352,   352,   352,     4,   362,   369,    -1,
       4,    49,   237,     5,   362,   369,    -1,     4,    48,   237,
     352,   352,   364,    -1,     4,    48,   237,   352,   352,   362,
     369,    -1,     4,    52,   105,   357,   357,     4,   352,   352,
     352,     4,    -1,     4,    52,   105,   357,   357,     4,   352,
     352,   352,     4,   364,    -1,     4,    52,   105,   357,   357,
       4,   352,   352,   352,     4,   362,   367,    -1,     4,    52,
     105,     5,     5,   362,   367,   362,   369,    -1,     4,    55,
     490,     5,     5,    -1,     4,    62,   121,   354,    -1,     4,
      62,   237,   352,   364,    -1,     4,    62,   237,   352,   362,
     369,    -1,     4,    66,     5,    -1,     4,    74,    27,   354,
     354,    -1,     4,    74,   167,     5,     5,    -1,     4,    74,
     237,   352,   364,    -1,     4,    74,   237,   352,   362,   369,
      -1,     4,    74,   280,   362,   367,    -1,     4,    75,   138,
     354,    -1,     4,    82,   105,   357,   357,     4,   352,   352,
       4,    -1,     4,    82,   105,   357,   357,     4,   352,   352,
       4,   364,    -1,     4,    82,   105,   357,   357,     4,   352,
     352,     4,   362,   367,    -1,     4,    82,   105,     5,     5,
     362,   367,   362,   369,    -1,     4,    83,    22,   237,   352,
     352,    -1,     4,    83,    49,   237,   352,   352,    -1,     4,
      83,    52,    21,   352,   352,    -1,     4,    83,    52,   237,
     352,   352,    -1,     4,    83,   110,   237,   352,   352,    -1,
       4,    83,   113,    21,   352,   352,    -1,     4,    83,   113,
     237,   352,   352,    -1,     4,    83,    82,    21,   352,   352,
      -1,     4,    83,    82,   237,   352,   352,    -1,     4,    83,
     225,   306,     4,   352,   352,    -1,     4,    83,   255,   306,
       4,   352,   352,    -1,     4,    99,    -1,     4,    99,    22,
       4,    -1,     4,    99,    49,     4,    -1,     4,    99,    52,
       4,    -1,     4,    99,   110,     4,    -1,     4,    99,    55,
     490,     5,    -1,     4,    99,   113,     4,    -1,     4,    99,
      82,     4,    -1,     4,    99,   225,   306,     4,    -1,     4,
      99,   255,   306,     4,    -1,     4,    99,   282,    -1,     4,
      99,   282,     5,    -1,     4,    99,   282,     4,    -1,     4,
     105,    40,     4,    -1,     4,   109,   121,   354,    -1,     4,
     109,   237,   352,   352,   364,    -1,     4,   109,   237,   352,
     352,   362,   369,    -1,     4,   110,   237,   352,   352,   352,
       4,   364,    -1,     4,   110,   237,   352,   352,   352,     4,
     362,   369,    -1,     4,   110,   237,     5,   362,   369,    -1,
       4,   113,   105,   357,   357,     4,   352,   352,   352,     4,
      -1,     4,   113,   105,   357,   357,     4,   352,   352,   352,
       4,   364,    -1,     4,   113,   105,   357,   357,     4,   352,
     352,   352,     4,   362,   367,    -1,     4,   113,   105,     5,
       5,   362,   367,   362,   369,    -1,     4,   130,     5,    -1,
       4,   150,    -1,     4,   150,   210,    -1,     4,   172,    27,
     354,   354,    -1,     4,   172,   223,   364,   361,   361,    -1,
       4,   172,   223,   362,   367,   361,   361,    -1,     4,   195,
     352,   352,    -1,     4,   195,   132,    -1,     4,   195,    36,
      -1,     4,   195,   290,   364,   352,   352,    -1,     4,   195,
     290,   362,   367,   361,    -1,     4,   225,   241,   352,   352,
     364,    -1,     4,   225,   241,   352,   352,   362,   369,    -1,
       4,   255,   241,   352,   352,   364,    -1,     4,   255,   241,
     352,   352,   362,   369,    -1,     4,   223,   259,   373,    -1,
       4,   223,   266,     4,    -1,     4,   225,   121,   354,    -1,
       4,   231,   364,   361,   361,   352,    -1,     4,   231,   362,
     367,   361,   361,   352,   362,   369,    -1,     4,   232,   509,
     354,    -1,     4,   245,    40,    -1,     4,   246,   131,     5,
      -1,     4,   246,   223,   364,   361,   361,    -1,     4,   246,
     223,   362,   367,   361,   361,    -1,     4,   246,   280,   362,
     367,   362,   369,    -1,     4,   256,    -1,     4,   256,   210,
      -1,     4,   282,     5,    -1,     4,   284,     5,    -1,     4,
     284,   245,   354,    -1,     4,   296,    -1,     4,   298,    -1,
       4,   304,    27,   354,    -1,     4,   304,   223,   364,   361,
     352,   357,    -1,     4,   304,   223,   362,   367,   361,   362,
     369,   352,   357,    -1,     4,   338,     4,    -1,   165,    -1,
     165,   352,   352,    -1,   174,   504,    -1,   175,   505,    -1,
     195,   506,    -1,   230,   354,    -1,   232,   509,   354,    -1,
     232,   509,   354,   352,   352,    -1,   245,    40,   352,   352,
      -1,   245,   194,   352,   352,     4,    -1,   245,   111,    -1,
     250,     5,   496,   362,   367,   368,   354,    -1,   250,   283,
       5,    -1,   256,   513,    -1,   263,   514,    -1,     5,    66,
       5,    -1,     5,    80,    -1,     5,    99,    -1,     5,    89,
      -1,     5,   130,     5,    -1,     5,   150,    -1,     5,   150,
     210,    -1,     5,   195,   352,   352,    -1,     5,   195,   132,
      -1,     5,   195,    36,    -1,     5,   195,   290,   364,   361,
      -1,     5,   195,   290,   362,   367,   361,    -1,     5,   232,
     509,   354,    -1,     5,   256,    -1,     5,   256,   210,    -1,
       5,   296,    -1,     5,   298,    -1,   282,   105,     5,     5,
      -1,   282,    99,     5,    -1,   282,    99,    17,    -1,   282,
       5,    -1,   282,   299,     5,    -1,   216,    -1,   216,   362,
      -1,   295,    -1,   296,    17,    -1,   298,    17,    -1,   338,
       4,    -1,   256,    -1,   298,    -1,   150,    -1,   296,    -1,
      40,   195,    -1,   195,    -1,   111,   195,    -1,    40,   105,
      -1,   105,    -1,   111,   105,    -1,    40,   245,    -1,   245,
      -1,   111,   245,    -1,    99,    -1,   284,    -1,    66,    -1,
     338,    -1,   232,    -1,   130,    -1,   165,    -1,   299,    -1,
      -1,     4,    -1,    30,   354,    -1,   237,   352,    -1,   161,
       4,    -1,   211,     4,   352,    -1,    62,   352,   352,   352,
     510,    -1,   109,   352,   352,   352,   352,   356,   510,    -1,
      48,   352,   352,   352,   352,   356,   510,    -1,   225,   352,
     352,   352,   352,   510,    -1,   255,   352,   352,   352,   352,
     510,    -1,   172,   352,   352,   352,   352,   510,    -1,   304,
     352,   352,   352,   352,   510,    -1,   284,   352,   352,   356,
     510,    -1,    62,   223,   352,   352,   374,   510,    -1,    48,
     223,   352,   352,   374,   510,    -1,   102,   223,   352,   352,
     374,   510,    -1,    85,   223,   352,   352,   374,   510,    -1,
     348,   223,   352,   352,   374,   510,    -1,    27,   223,   352,
     352,   374,   510,    -1,    51,   223,   352,   352,   374,   510,
      -1,   246,   352,   352,   352,   352,   362,   367,   362,   369,
       5,   510,    -1,    74,   352,   352,   352,   362,   367,   510,
      -1,   231,   352,   352,   352,   352,   352,   510,    -1,    22,
     352,   352,   352,   352,     4,   510,    -1,   110,   352,   352,
     352,   352,   352,     4,   356,   510,    -1,    49,   352,   352,
     352,   352,   352,     4,   356,   510,    -1,    82,   352,   352,
     357,   357,     4,   352,   352,     4,   510,    -1,   113,   352,
     352,   357,   357,     4,   352,   352,   352,     4,   356,   510,
      -1,    52,   352,   352,   357,   357,     4,   352,   352,   352,
       4,   356,   510,    -1,    75,   510,    -1,   283,   493,    -1,
       5,   352,   352,    -1,   302,     5,   352,   352,    -1,   352,
     352,   302,     5,    -1,     5,   362,   367,   361,    -1,     4,
       4,    -1,    40,   352,   352,     4,    -1,   194,   352,   352,
       4,    -1,   111,    -1,   104,    -1,   340,    -1,    63,    -1,
     249,    -1,   248,    -1,   234,    -1,   341,    -1,    60,   498,
      -1,    66,    -1,   130,    -1,   114,    -1,   143,   352,   352,
      -1,   155,   352,   352,    -1,   149,    20,    82,   362,    -1,
     149,    20,   152,     5,     5,     4,    -1,   149,    20,   221,
       5,     5,     5,     5,   362,   367,   376,    -1,   149,    20,
     222,     5,     5,   362,   376,    -1,   149,    20,   236,     5,
       5,     5,   362,    -1,   149,    20,   276,   362,   367,    -1,
       4,    20,    82,   362,    -1,     4,    20,   152,     5,     5,
       4,    -1,     4,    20,   221,     5,     5,     5,     5,   362,
     367,   376,    -1,     4,    20,   222,     5,     5,   362,   376,
      -1,     4,    20,   236,     5,     5,     5,   362,    -1,     4,
      20,   276,   362,   367,    -1,   155,    17,    -1,     4,    21,
      -1,     4,    21,   364,    -1,     4,    21,   362,   367,    -1,
       4,    22,   237,   362,   369,    -1,     4,    48,   121,    -1,
       4,    49,   237,   362,   369,    -1,     4,    48,   237,   362,
     369,    -1,     4,    52,    21,    -1,     4,    52,    21,   364,
      -1,     4,    52,    21,   362,   367,    -1,     4,    52,   237,
     362,   369,    -1,     4,    59,   362,   367,   368,    -1,     4,
      62,   121,    -1,     4,    62,   237,   362,   369,    -1,     4,
      66,    -1,     4,    74,    27,    -1,     4,    74,   167,    -1,
       4,    74,   237,   362,   369,    -1,     4,    74,   280,    -1,
       4,    75,   138,    -1,     4,    82,    21,    -1,     4,    82,
      21,   364,    -1,     4,    82,    21,   362,   367,    -1,     4,
      82,   237,   362,   369,    -1,     4,   109,   121,    -1,     4,
     109,   237,   362,   369,    -1,     4,   110,   237,   362,   369,
      -1,     4,   113,    21,    -1,     4,   113,    21,   364,    -1,
       4,   113,    21,   362,   367,    -1,     4,   113,   237,   362,
     369,    -1,     4,   130,    -1,     4,   150,    -1,     4,   172,
      27,    -1,     4,   172,   168,   362,   369,    -1,     4,   172,
     223,   362,   367,   368,    -1,     4,   181,   168,   352,   362,
     369,    -1,     4,   225,   121,    -1,     4,   223,   259,    -1,
       4,   223,   266,    -1,     4,   231,   223,   362,   367,   368,
      -1,     4,   231,   168,   362,   369,    -1,     4,   231,   288,
     362,   369,    -1,     4,   232,    -1,     4,   232,   509,    -1,
       4,   246,   131,    -1,     4,   246,   168,   362,   369,    -1,
       4,   246,   223,   362,   367,   368,    -1,     4,   246,   280,
      -1,     4,   256,    -1,     4,   282,    -1,     4,   282,     4,
      -1,     4,   284,    -1,     4,   284,   245,    -1,     4,   294,
      -1,     4,   304,    27,    -1,     4,   304,   168,   362,   369,
      -1,     4,   304,   223,   362,   367,   368,    -1,     4,   338,
      -1,   150,   499,    -1,   150,   206,    -1,   206,    -1,   225,
     255,   352,   352,    -1,   255,   255,   352,   352,    -1,   230,
      -1,   232,   509,    -1,   256,   500,    -1,   256,   206,    -1,
     263,   501,    -1,     5,    66,    -1,     5,   130,    -1,     5,
     155,    -1,     5,   232,   509,    -1,     5,   282,    -1,     5,
     282,   206,    -1,   282,    17,    -1,   282,    98,   196,    -1,
     338,    -1,    30,    -1,   237,    -1,   161,    -1,   211,    -1,
      -1,   352,   352,    -1,    -1,   352,   352,    -1,    -1,   284,
      -1,    -1,    -1,   224,    -1,   238,    -1,   300,    -1,    57,
      -1,   496,   362,   367,   368,   354,   511,   517,    -1,   256,
     496,   362,   367,   368,   354,   511,   517,    -1,   496,     5,
      -1,   496,     5,   362,   367,    -1,   496,     4,    -1,   496,
       4,   362,   367,    -1,   124,     5,     5,   494,     4,     5,
      -1,   352,   352,    -1,   132,    -1,    36,    -1,    40,   352,
     352,    -1,   194,   352,   352,    -1,   111,    -1,   290,   364,
     361,    -1,   290,   362,   367,   361,    -1,   507,   508,    -1,
     508,    -1,   509,   349,   354,    -1,    66,   349,     5,    -1,
      92,   349,     4,     4,    -1,   338,   349,     4,    -1,   130,
     349,     5,    -1,   284,   349,     5,    -1,   520,    -1,   521,
      -1,   203,    -1,   256,    -1,   150,    -1,    91,    -1,   126,
      -1,   105,    -1,   195,    -1,   245,    -1,    99,    -1,   158,
      -1,   272,    -1,   502,    -1,   502,   507,    -1,    -1,    -1,
     512,   515,    -1,    17,    -1,   210,   352,   352,    -1,   291,
      -1,   291,   352,   352,    -1,   354,    -1,   284,   354,    -1,
     515,   516,    -1,   516,    -1,   509,   349,   354,    -1,    -1,
      -1,   518,   519,    -1,   519,   520,    -1,   520,    -1,   282,
     349,     5,    -1,    55,   349,   490,     5,     5,    -1,    64,
      -1,    66,     5,    -1,   182,     4,    -1,   289,   352,    -1,
     348,    -1,   346,    -1,   341,    -1,   203,    -1,   352,   352,
     352,   352,    -1,   352,   352,    -1,   364,   352,   352,    -1,
     362,   367,   361,    -1,   290,   525,    -1,    39,   352,   352,
      -1,   194,   526,    -1,   230,   354,    -1,   352,   352,    -1,
     364,   352,   352,    -1,   362,   367,   361,    -1,    40,   352,
     352,    -1,   352,   352,    -1,   111,   352,   352,    -1,   354,
      -1,   309,   363,   367,    -1,     5,     4,     4,    -1,   299,
      -1,    70,   529,    -1,   169,     4,    -1,   242,     4,    -1,
     251,   352,    -1,    54,    -1,   140,    -1,   243,    -1,    90,
      -1,   150,   531,    -1,   256,   532,    -1,    40,   352,   352,
      -1,   194,   352,   352,    -1,   111,    -1,   261,   111,    -1,
      40,   352,   352,    -1,   194,   352,   352,    -1,   111,    -1,
     261,   111,    -1,   189,    -1,    13,    -1,   203,    -1,    34,
      -1,   107,    -1,    61,     5,    -1,   280,   362,    -1,   303,
       4,     4,     4,    -1,   352,    -1,   352,    97,    -1,   194,
     537,    -1,   290,   352,    -1,   290,   352,    97,    -1,    40,
      -1,   352,    -1,   111,    -1,    26,   539,    -1,   124,   541,
      -1,   205,   551,    -1,   112,   552,    -1,   218,     5,    -1,
     120,     5,   377,    -1,    61,     5,   377,    -1,   270,     4,
     377,    -1,   243,    87,   540,    -1,   120,     5,   377,    -1,
      61,     5,   377,    -1,   270,     4,   377,    -1,   542,    -1,
     157,   542,    -1,   281,   543,    -1,   267,   544,    -1,   117,
      87,   545,    -1,   192,   546,    -1,   243,   157,   548,    -1,
     243,    87,   549,    -1,   240,   550,    -1,   120,     5,    -1,
      61,     5,    -1,   270,     4,    -1,   120,     5,    -1,    61,
       5,    -1,   270,     4,    -1,   120,     5,    -1,    61,     5,
      -1,   270,     4,    -1,   120,     5,    -1,    61,     5,    -1,
     270,     4,    -1,   157,   547,    -1,   120,     5,     4,    -1,
      61,     5,     4,    -1,   270,     4,     4,    -1,   120,     5,
      -1,    61,     5,    -1,   270,     4,    -1,   120,     5,    -1,
      61,     5,    -1,   270,     4,    -1,   120,     5,    -1,    61,
       5,    -1,   270,     4,    -1,   120,     5,    -1,    61,     5,
      -1,   270,     4,    -1,   120,     5,   377,    -1,    61,     5,
     377,    -1,   270,     4,   377,    -1,   120,     5,     5,   377,
      -1,   554,     4,     4,   352,   352,   357,    -1,    99,    -1,
      50,    -1,   292,    -1,   136,    -1,   108,    -1,    -1,     4,
     352,   352,   352,   352,    -1,   204,    -1,   204,     4,   352,
     352,   352,   352,    -1,   124,   267,   556,    -1,     4,    -1,
     352,   362,    -1,     4,     4,    -1,     4,   352,   362,    -1,
     352,   352,    -1,   290,   352,   352,    -1,   363,   367,   368,
      -1,    16,   561,    -1,   241,     4,    -1,   239,   560,    -1,
      23,   559,    -1,     4,     4,    -1,     4,     5,    -1,   284,
       4,     5,    -1,     4,     4,    -1,     4,     5,    -1,   284,
       4,     5,    -1,     4,    -1,     4,   363,   367,    -1,     4,
       6,   363,   367,    -1,   229,    -1,   352,   352,    -1,   352,
     352,    12,   352,   352,    -1,   352,   352,    12,   364,   352,
     352,    -1,   352,   352,    12,   362,   367,   361,    -1,   290,
     564,    -1,   123,    -1,   123,   352,    -1,   352,   352,    -1,
     352,   352,    12,   352,   352,    -1,   352,   352,    12,   364,
     352,   352,    -1,   352,   352,    12,   362,   367,   361,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   452,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,   471,   472,   473,   474,   475,   476,   477,   478,   479,
     480,   481,   482,   483,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,   498,   499,
     500,   501,   502,   503,   506,   507,   510,   511,   512,   513,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   525,
     527,   528,   529,   530,   532,   533,   534,   535,   538,   539,
     540,   541,   542,   545,   546,   549,   550,   551,   554,   557,
     560,   563,   575,   582,   589,   597,   598,   599,   600,   601,
     604,   605,   606,   607,   608,   609,   610,   611,   612,   613,
     614,   615,   616,   617,   618,   619,   620,   621,   622,   623,
     624,   625,   626,   627,   628,   629,   630,   631,   634,   635,
     638,   639,   640,   641,   642,   643,   644,   645,   648,   649,
     650,   651,   652,   655,   656,   657,   658,   659,   660,   661,
     662,   663,   664,   665,   668,   669,   670,   673,   674,   675,
     676,   679,   680,   681,   684,   685,   686,   689,   690,   691,
     694,   695,   696,   697,   698,   699,   700,   701,   704,   705,
     708,   709,   710,   711,   712,   713,   716,   717,   718,   721,
     722,   723,   724,   725,   726,   729,   730,   731,   732,   733,
     734,   735,   736,   737,   741,   742,   745,   746,   749,   750,
     753,   754,   758,   759,   760,   761,   762,   763,   764,   765,
     768,   769,   772,   773,   774,   776,   778,   779,   780,   782,
     786,   787,   790,   791,   793,   796,   798,   804,   805,   806,
     809,   810,   811,   814,   815,   816,   817,   818,   819,   825,
     826,   829,   830,   831,   832,   833,   836,   837,   838,   841,
     842,   847,   852,   859,   861,   863,   864,   865,   868,   870,
     873,   874,   877,   878,   879,   880,   881,   884,   886,   888,
     893,   898,   901,   902,   905,   906,   907,   914,   915,   916,
     917,   920,   921,   924,   925,   928,   929,   932,   934,   938,
     939,   942,   944,   945,   946,   947,   950,   951,   952,   953,
     954,   957,   959,   961,   962,   964,   966,   968,   970,   974,
     977,   978,   979,   982,   985,   986,   987,   988,   989,   990,
     991,   992,   993,   994,   995,   996,   997,   998,   999,  1000,
    1001,  1002,  1003,  1005,  1006,  1007,  1008,  1009,  1010,  1011,
    1012,  1013,  1014,  1016,  1017,  1018,  1019,  1020,  1021,  1022,
    1024,  1026,  1027,  1030,  1031,  1032,  1033,  1034,  1035,  1036,
    1037,  1040,  1041,  1042,  1045,  1048,  1049,  1051,  1053,  1054,
    1055,  1056,  1057,  1058,  1065,  1066,  1069,  1070,  1071,  1074,
    1075,  1078,  1081,  1082,  1084,  1088,  1089,  1090,  1093,  1097,
    1099,  1100,  1101,  1102,  1103,  1104,  1105,  1106,  1107,  1110,
    1111,  1112,  1115,  1116,  1119,  1121,  1127,  1131,  1133,  1135,
    1138,  1139,  1141,  1144,  1147,  1148,  1152,  1154,  1157,  1162,
    1163,  1164,  1168,  1169,  1170,  1173,  1174,  1175,  1178,  1179,
    1181,  1182,  1183,  1184,  1185,  1186,  1187,  1188,  1189,  1190,
    1192,  1193,  1196,  1197,  1200,  1201,  1202,  1203,  1206,  1207,
    1210,  1212,  1215,  1219,  1220,  1221,  1222,  1225,  1226,  1227,
    1230,  1231,  1232,  1235,  1238,  1239,  1240,  1243,  1244,  1245,
    1246,  1247,  1248,  1251,  1252,  1253,  1254,  1255,  1256,  1257,
    1260,  1261,  1264,  1265,  1268,  1269,  1272,  1273,  1276,  1277,
    1278,  1281,  1282,  1285,  1286,  1289,  1292,  1300,  1301,  1304,
    1305,  1306,  1307,  1308,  1309,  1310,  1311,  1312,  1313,  1314,
    1315,  1316,  1317,  1318,  1319,  1320,  1323,  1326,  1327,  1330,
    1331,  1332,  1333,  1336,  1337,  1338,  1339,  1342,  1343,  1344,
    1345,  1346,  1349,  1350,  1351,  1352,  1353,  1354,  1356,  1357,
    1362,  1363,  1366,  1368,  1370,  1373,  1374,  1375,  1376,  1377,
    1378,  1381,  1383,  1385,  1387,  1388,  1390,  1392,  1394,  1396,
    1398,  1401,  1402,  1403,  1404,  1405,  1406,  1408,  1409,  1410,
    1413,  1416,  1418,  1420,  1422,  1424,  1426,  1428,  1430,  1433,
    1435,  1437,  1439,  1440,  1441,  1442,  1443,  1446,  1447,  1448,
    1449,  1450,  1451,  1452,  1454,  1456,  1457,  1458,  1461,  1462,
    1463,  1464,  1465,  1466,  1468,  1469,  1470,  1473,  1474,  1475,
    1476,  1477,  1480,  1483,  1486,  1489,  1492,  1495,  1498,  1501,
    1504,  1509,  1512,  1515,  1518,  1521,  1524,  1527,  1530,  1533,
    1536,  1539,  1544,  1547,  1550,  1553,  1556,  1559,  1562,  1565,
    1568,  1573,  1576,  1579,  1582,  1585,  1588,  1591,  1594,  1597,
    1600,  1603,  1608,  1610,  1611,  1612,  1613,  1614,  1616,  1617,
    1618,  1620,  1621,  1622,  1623,  1624,  1625,  1626,  1628,  1630,
    1631,  1632,  1635,  1636,  1637,  1638,  1639,  1640,  1642,  1643,
    1644,  1647,  1649,  1651,  1652,  1654,  1656,  1660,  1661,  1664,
    1665,  1666,  1669,  1676,  1677,  1678,  1679,  1680,  1681,  1682,
    1685,  1693,  1694,  1695,  1696,  1698,  1700,  1701,  1701,  1702,
    1703,  1704,  1705,  1706,  1707,  1709,  1710,  1712,  1715,  1718,
    1719,  1720,  1723,  1725,  1728,  1731,  1732,  1735,  1739,  1742,
    1744,  1747,  1750,  1754,  1759,  1764,  1766,  1767,  1769,  1771,
    1772,  1774,  1776,  1778,  1780,  1782,  1783,  1785,  1787,  1791,
    1796,  1798,  1800,  1802,  1804,  1806,  1808,  1810,  1812,  1814,
    1816,  1819,  1820,  1822,  1824,  1825,  1827,  1829,  1830,  1831,
    1833,  1835,  1836,  1837,  1839,  1840,  1841,  1843,  1846,  1850,
    1854,  1857,  1860,  1864,  1869,  1875,  1876,  1877,  1879,  1880,
    1882,  1886,  1888,  1889,  1890,  1892,  1895,  1897,  1900,  1902,
    1905,  1907,  1909,  1910,  1913,  1918,  1921,  1922,  1923,  1926,
    1929,  1933,  1934,  1936,  1937,  1938,  1940,  1941,  1943,  1944,
    1946,  1951,  1953,  1954,  1956,  1957,  1958,  1959,  1960,  1961,
    1963,  1965,  1967,  1968,  1970,  1971,  1973,  1975,  1976,  1977,
    1978,  1979,  1980,  1981,  1982,  1983,  1984,  1985,  1987,  1989,
    1991,  1992,  1993,  1994,  1996,  1997,  1998,  1999,  2000,  2002,
    2003,  2004,  2005,  2006,  2007,  2010,  2011,  2012,  2013,  2014,
    2015,  2016,  2017,  2018,  2019,  2020,  2021,  2022,  2023,  2024,
    2025,  2026,  2027,  2028,  2029,  2030,  2033,  2034,  2035,  2036,
    2037,  2038,  2046,  2053,  2062,  2071,  2078,  2085,  2093,  2101,
    2108,  2113,  2118,  2123,  2128,  2133,  2138,  2144,  2154,  2164,
    2174,  2181,  2191,  2201,  2210,  2222,  2235,  2240,  2243,  2245,
    2247,  2252,  2256,  2259,  2261,  2263,  2266,  2267,  2268,  2269,
    2270,  2271,  2272,  2275,  2276,  2277,  2278,  2279,  2280,  2282,
    2284,  2286,  2288,  2290,  2292,  2295,  2297,  2299,  2301,  2303,
    2305,  2308,  2309,  2310,  2311,  2313,  2316,  2317,  2319,  2321,
    2322,  2323,  2325,  2328,  2331,  2332,  2334,  2335,  2336,  2337,
    2339,  2340,  2341,  2342,  2343,  2345,  2347,  2348,  2350,  2353,
    2354,  2355,  2357,  2359,  2360,  2361,  2362,  2364,  2367,  2371,
    2372,  2373,  2374,  2377,  2380,  2382,  2383,  2384,  2385,  2387,
    2390,  2391,  2393,  2394,  2395,  2396,  2397,  2399,  2400,  2402,
    2405,  2406,  2407,  2408,  2409,  2411,  2413,  2414,  2415,  2416,
    2418,  2420,  2421,  2422,  2423,  2424,  2425,  2427,  2428,  2430,
    2433,  2434,  2435,  2436,  2439,  2440,  2443,  2444,  2447,  2448,
    2451,  2464,  2465,  2469,  2470,  2474,  2477,  2482,  2489,  2491,
    2494,  2496,  2499,  2503,  2504,  2505,  2506,  2507,  2508,  2509,
    2511,  2515,  2516,  2519,  2520,  2521,  2522,  2523,  2524,  2525,
    2526,  2529,  2530,  2531,  2532,  2533,  2534,  2535,  2536,  2537,
    2538,  2539,  2542,  2543,  2546,  2547,  2547,  2550,  2551,  2552,
    2553,  2556,  2557,  2560,  2561,  2564,  2568,  2569,  2569,  2572,
    2573,  2576,  2579,  2583,  2584,  2585,  2586,  2589,  2590,  2591,
    2592,  2595,  2597,  2598,  2603,  2605,  2606,  2607,  2608,  2611,
    2612,  2617,  2621,  2622,  2623,  2626,  2627,  2632,  2633,  2636,
    2638,  2639,  2640,  2645,  2646,  2647,  2648,  2651,  2652,  2655,
    2657,  2659,  2660,  2663,  2665,  2666,  2667,  2670,  2671,  2674,
    2675,  2676,  2679,  2680,  2681,  2684,  2685,  2686,  2687,  2688,
    2691,  2692,  2693,  2696,  2697,  2698,  2699,  2700,  2703,  2705,
    2707,  2709,  2712,  2714,  2716,  2719,  2720,  2721,  2722,  2723,
    2724,  2725,  2726,  2727,  2730,  2731,  2732,  2735,  2736,  2737,
    2740,  2741,  2742,  2745,  2746,  2747,  2750,  2751,  2752,  2753,
    2756,  2757,  2758,  2761,  2762,  2763,  2766,  2767,  2768,  2771,
    2772,  2773,  2776,  2778,  2780,  2784,  2788,  2790,  2793,  2794,
    2795,  2796,  2799,  2800,  2802,  2803,  2805,  2808,  2809,  2810,
    2811,  2814,  2815,  2818,  2820,  2821,  2822,  2823,  2826,  2827,
    2828,  2831,  2832,  2833,  2836,  2837,  2842,  2846,  2853,  2854,
    2856,  2861,  2863,  2866,  2867,  2868,  2869,  2871,  2876
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
  "POLYGON_", "POSTSCRIPT_", "POW_", "PRECISION_", "PRINT_", "PRESERVE_",
  "PROJECTION_", "PROPERTY_", "PUBLICATION_", "PROS_", "QUERY_", "RADIAL_",
  "RADIUS_", "REGION_", "REPLACE_", "RESAMPLE_", "RESET_", "RESOLUTION_",
  "RGB_", "ROOT_", "ROTATE_", "RULER_", "SAMPLE_", "SAOIMAGE_", "SAOTNG_",
  "SAVE_", "SCALE_", "SCAN_", "SCIENTIFIC_", "SCOPE_", "SEGMENT_",
  "SELECT_", "SET_", "SEXAGESIMAL_", "SHAPE_", "SHARED_", "SHIFT_",
  "SHMID_", "SHOW_", "SIGMA_", "SINH_", "SIZE_", "SLICE_", "SMMAP_",
  "SMOOTH_", "SOCKET_", "SOCKETGZ_", "SOURCE_", "SQRT_", "SQUARED_",
  "SSHARED_", "STATS_", "STATUS_", "SUPERGALACTIC_", "SUM_", "SYSTEM_",
  "TABLE_", "TAG_", "TEMPLATE_", "TEXT_", "THREADS_", "THREED_",
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
  "threedHighlite", "threedView", "bin", "binAbout", "binFactor",
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
     595,   596,   597,   598,   599,   600,    89,    78,    88,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   350,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   352,   352,   353,   353,   353,   353,
     353,   353,   353,   353,   353,   353,   353,   353,   353,   354,
     354,   354,   354,   354,   354,   354,   354,   354,   355,   355,
     355,   355,   355,   356,   356,   357,   357,   357,   358,   359,
     360,   361,   361,   361,   361,   362,   362,   362,   362,   362,
     363,   363,   363,   363,   363,   363,   363,   363,   363,   363,
     363,   363,   363,   363,   363,   363,   363,   363,   363,   363,
     363,   363,   363,   363,   363,   363,   363,   363,   364,   364,
     365,   365,   365,   365,   365,   365,   365,   365,   366,   366,
     366,   366,   366,   367,   367,   367,   367,   367,   367,   367,
     367,   367,   367,   367,   368,   368,   368,   369,   369,   369,
     369,   370,   370,   370,   371,   371,   371,   372,   372,   372,
     373,   373,   373,   373,   373,   373,   373,   373,   374,   374,
     375,   375,   375,   375,   375,   375,   376,   376,   376,   377,
     377,   377,   377,   377,   377,   378,   378,   378,   378,   378,
     378,   378,   378,   378,   379,   379,   380,   380,   381,   381,
     382,   382,   383,   383,   383,   383,   383,   383,   383,   383,
     384,   384,   385,   385,   385,   385,   385,   385,   385,   385,
     386,   386,   387,   387,   387,   387,   387,   388,   388,   388,
     389,   389,   389,   390,   390,   390,   390,   390,   390,   391,
     391,   392,   392,   392,   392,   392,   393,   393,   393,   394,
     394,   394,   394,   395,   395,   395,   395,   395,   396,   396,
     397,   397,   398,   398,   398,   398,   398,   399,   399,   399,
     399,   399,   400,   400,   401,   401,   401,   402,   402,   402,
     402,   403,   403,   404,   404,   405,   405,   406,   406,   407,
     407,   407,   407,   407,   407,   407,   408,   408,   408,   408,
     408,   409,   409,   409,   409,   409,   409,   409,   409,   410,
     411,   411,   411,   412,   413,   413,   413,   413,   413,   413,
     413,   413,   413,   413,   413,   413,   413,   413,   413,   413,
     413,   413,   413,   413,   413,   413,   413,   413,   413,   413,
     413,   413,   413,   413,   413,   413,   413,   413,   413,   413,
     413,   413,   413,   414,   414,   414,   414,   414,   414,   414,
     414,   415,   415,   415,   416,   417,   417,   417,   417,   417,
     417,   417,   417,   417,   418,   418,   419,   419,   419,   420,
     420,   421,   422,   422,   422,   423,   423,   423,   424,   425,
     425,   425,   425,   425,   425,   425,   425,   425,   425,   426,
     426,   426,   427,   427,   428,   428,   428,   429,   429,   429,
     430,   430,   430,   431,   432,   432,   433,   433,   433,   434,
     434,   434,   435,   435,   435,   436,   436,   436,   437,   437,
     437,   437,   437,   437,   437,   437,   437,   437,   437,   437,
     437,   437,   438,   438,   439,   439,   439,   439,   440,   440,
     441,   441,   441,   442,   442,   442,   442,   443,   443,   443,
     444,   444,   444,   445,   446,   446,   446,   447,   447,   447,
     447,   447,   447,   448,   448,   448,   448,   448,   448,   448,
     449,   449,   450,   450,   451,   451,   452,   452,   453,   453,
     453,   454,   454,   455,   455,   456,   456,   457,   457,   458,
     458,   458,   458,   458,   458,   458,   458,   458,   458,   458,
     458,   458,   458,   458,   458,   458,   459,   460,   460,   461,
     461,   461,   461,   462,   462,   462,   462,   463,   463,   463,
     463,   463,   464,   464,   464,   464,   464,   464,   464,   464,
     465,   465,   466,   466,   466,   467,   467,   467,   467,   467,
     467,   468,   468,   468,   468,   468,   468,   468,   468,   468,
     468,   469,   469,   469,   469,   469,   469,   469,   469,   469,
     470,   471,   471,   471,   471,   471,   471,   471,   471,   471,
     471,   471,   471,   471,   471,   471,   471,   472,   472,   472,
     472,   472,   472,   472,   472,   472,   472,   472,   473,   473,
     473,   473,   473,   473,   473,   473,   473,   474,   474,   474,
     474,   474,   475,   475,   475,   475,   475,   475,   475,   475,
     475,   476,   476,   476,   476,   476,   476,   476,   476,   476,
     476,   476,   477,   477,   477,   477,   477,   477,   477,   477,
     477,   478,   478,   478,   478,   478,   478,   478,   478,   478,
     478,   478,   479,   479,   479,   479,   479,   479,   479,   479,
     479,   480,   480,   480,   480,   480,   480,   480,   480,   480,
     480,   480,   481,   481,   481,   481,   481,   481,   481,   481,
     481,   482,   482,   482,   482,   482,   482,   483,   483,   484,
     484,   484,   485,   486,   486,   486,   486,   486,   486,   486,
     487,   488,   488,   488,   488,   488,   488,   489,   488,   488,
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
     488,   488,   488,   488,   488,   488,   488,   488,   488,   488,
     488,   488,   488,   488,   488,   490,   490,   490,   490,   490,
     490,   490,   490,   490,   490,   490,   490,   490,   490,   490,
     490,   490,   490,   490,   490,   490,   491,   491,   491,   491,
     491,   491,   492,   492,   492,   492,   492,   492,   492,   492,
     492,   492,   492,   492,   492,   492,   492,   492,   492,   492,
     492,   492,   492,   492,   492,   492,   492,   492,   493,   493,
     493,   493,   494,   495,   495,   495,   496,   496,   496,   496,
     496,   496,   496,   497,   497,   497,   497,   497,   497,   497,
     497,   497,   497,   497,   497,   497,   497,   497,   497,   497,
     497,   497,   497,   497,   497,   497,   497,   497,   497,   497,
     497,   497,   497,   497,   497,   497,   497,   497,   497,   497,
     497,   497,   497,   497,   497,   497,   497,   497,   497,   497,
     497,   497,   497,   497,   497,   497,   497,   497,   497,   497,
     497,   497,   497,   497,   497,   497,   497,   497,   497,   497,
     497,   497,   497,   497,   497,   497,   497,   497,   497,   497,
     497,   497,   497,   497,   497,   497,   497,   497,   497,   497,
     497,   497,   497,   497,   497,   497,   497,   497,   497,   497,
     498,   498,   498,   498,   499,   499,   500,   500,   501,   501,
     502,   503,   503,   503,   503,   503,   504,   504,   505,   505,
     505,   505,   505,   506,   506,   506,   506,   506,   506,   506,
     506,   507,   507,   508,   508,   508,   508,   508,   508,   508,
     508,   509,   509,   509,   509,   509,   509,   509,   509,   509,
     509,   509,   510,   510,   511,   512,   511,   513,   513,   513,
     513,   514,   514,   515,   515,   516,   517,   518,   517,   519,
     519,   520,   521,   522,   522,   522,   522,   523,   523,   523,
     523,   524,   524,   524,   524,   524,   524,   524,   524,   525,
     525,   525,   526,   526,   526,   527,   527,   527,   527,   528,
     528,   528,   528,   529,   529,   529,   529,   530,   530,   531,
     531,   531,   531,   532,   532,   532,   532,   533,   533,   534,
     534,   534,   535,   535,   535,   536,   536,   536,   536,   536,
     537,   537,   537,   538,   538,   538,   538,   538,   539,   539,
     539,   539,   540,   540,   540,   541,   541,   541,   541,   541,
     541,   541,   541,   541,   542,   542,   542,   543,   543,   543,
     544,   544,   544,   545,   545,   545,   546,   546,   546,   546,
     547,   547,   547,   548,   548,   548,   549,   549,   549,   550,
     550,   550,   551,   551,   551,   552,   553,   553,   554,   554,
     554,   554,   555,   555,   555,   555,   555,   556,   556,   556,
     556,   557,   557,   558,   558,   558,   558,   558,   559,   559,
     559,   560,   560,   560,   561,   561,   561,   562,   563,   563,
     563,   563,   563,   564,   564,   564,   564,   564,   564
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     3,     2,     1,     1,     2,     3,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     1,     2,     2,     3,     2,     2,     2,     2,     3,
       2,     3,     2,     2,     2,     2,     7,     2,     1,     3,
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
       2,     6,     2,     4,     2,     2,     2,     3,     2,     2,
       1,     2,     1,     2,     4,     5,     2,     3,     5,     6,
       1,     1,     1,     7,    11,     8,    12,     1,     2,     2,
       1,     1,     2,     2,     2,     2,     3,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     3,
       2,     2,     2,     6,    10,     1,     2,     1,     6,    10,
       1,     2,     2,     2,     2,     2,     2,    13,    13,    12,
      12,     1,     0,     1,     1,     4,     6,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     3,     4,     0,
       6,     8,     2,     3,     3,     3,     0,     3,     4,     4,
       4,     3,     3,     1,     3,     5,     4,     4,     3,     2,
       0,     1,     1,     3,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     1,     2,
       2,     4,     9,     2,     2,     2,     1,     3,     2,     2,
       1,     2,     8,     2,     1,     2,     1,     2,     1,     4,
       9,     2,     1,     1,     1,     1,     2,     1,     1,     2,
       1,     0,     2,     2,     1,     0,     2,     2,     1,     1,
       2,     2,     2,     1,     1,     1,     1,     1,     1,     0,
       1,     2,     1,     4,     5,     0,     2,     1,     5,     2,
       2,     1,     1,     1,     2,     1,     2,     1,     1,     0,
       1,     1,     0,     1,     5,     6,     4,     3,     6,     2,
       1,     3,     1,     1,     1,     3,     6,     7,     5,     1,
       1,     4,     5,     1,     3,     0,     1,     2,     1,     4,
       1,     2,     1,     2,     3,     2,     1,     2,     1,     4,
       2,     1,     1,     3,     1,     2,     3,     2,     0,     1,
       1,     4,     2,     0,     1,     1,     2,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     2,     1,     2,     2,     2,     2,     1,     1,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     2,
       2,     0,     1,     2,     1,     6,     5,     1,     1,     1,
       2,     2,     1,     1,     1,     1,     2,     1,     1,     1,
       2,     1,     1,     1,     2,     2,     2,     0,     1,     0,
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
       0,     0,     1,     1,     1,     1,     7,     8,     2,     4,
       2,     4,     6,     2,     1,     1,     3,     3,     1,     3,
       4,     2,     1,     3,     3,     4,     3,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     0,     0,     2,     1,     3,     1,
       3,     1,     2,     2,     1,     3,     0,     0,     2,     2,
       1,     3,     5,     1,     2,     2,     2,     1,     1,     1,
       1,     4,     2,     3,     3,     2,     3,     2,     2,     2,
       3,     3,     3,     2,     3,     1,     3,     3,     1,     2,
       2,     2,     2,     1,     1,     1,     1,     2,     2,     3,
       3,     1,     2,     3,     3,     1,     2,     1,     1,     1,
       1,     1,     2,     2,     4,     1,     2,     2,     2,     3,
       1,     1,     1,     2,     2,     2,     2,     2,     3,     3,
       3,     3,     3,     3,     3,     1,     2,     2,     2,     3,
       2,     3,     3,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     3,     3,     3,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     3,     3,     3,     4,     6,     1,     1,     1,
       1,     1,     0,     5,     1,     6,     3,     1,     2,     2,
       3,     2,     3,     3,     2,     2,     2,     2,     2,     2,
       3,     2,     2,     3,     1,     3,     4,     1,     2,     5,
       6,     6,     2,     1,     2,     2,     5,     6,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     6,     7,     0,     0,     0,     0,
       0,   299,     0,     0,     0,     0,     0,     0,     0,     0,
      21,     0,     0,     0,     0,     0,     0,     0,  1051,     0,
       0,     0,     0,     0,     0,     0,     0,  1051,    38,     0,
       0,     0,    43,     0,     0,     0,    47,  1232,    49,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     3,    54,    55,     0,   237,     5,     0,
       0,     0,     0,     0,     0,     8,     0,     0,   265,   267,
       0,     0,    10,   135,   137,   130,   131,   132,   136,   133,
     134,   270,    11,     0,   282,     0,     0,     0,    12,     0,
       0,     0,     0,   306,     0,    13,    69,    98,     0,   128,
      97,    77,    95,     0,    74,    76,    72,   129,    96,    73,
       0,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,    70,
      71,    75,   313,   143,    99,     0,    14,     0,    15,    16,
       0,     0,     0,     0,     0,     0,     0,    57,    56,     0,
       0,     0,     0,     2,     0,    17,     0,     0,     0,   375,
     389,     0,   395,     0,     0,     0,     0,     0,     0,     0,
     338,     0,   467,     0,     0,     0,     0,     0,  1051,     0,
     346,     0,   350,     0,     0,     0,   354,     0,   356,     0,
     358,     0,     0,   498,   362,    18,     0,   504,    19,   509,
       0,   527,   512,   513,   514,   515,   529,   517,   518,   522,
     519,     0,   521,   523,     0,     0,    20,    22,     0,   543,
       0,     0,     0,   548,     0,    23,     0,     0,     0,     0,
       0,     0,     0,    25,   702,    26,     0,     0,     0,     0,
       0,     0,   703,    27,     0,    28,  1055,  1052,  1053,  1054,
       0,  1113,     0,     0,     0,    30,     0,  1120,  1119,  1118,
    1117,    32,     0,     0,     0,     0,     0,   143,     0,    33,
       0,  1138,     0,  1135,    34,     0,     0,     0,     0,    37,
       0,    35,     0,     0,     0,     0,    40,     0,     0,  1165,
      41,     0,     0,     0,     0,     0,    42,  1228,  1227,  1231,
    1230,  1229,    44,     0,    45,     0,     0,     0,     0,     0,
     202,     0,     0,     0,    46,     0,     0,  1234,    48,     0,
       0,    50,     0,     0,     0,     0,   143,    51,  1257,    52,
       0,     0,    53,     1,     4,   220,     0,   212,     0,     0,
     214,     0,   222,   215,   219,   230,   231,   216,   232,     0,
     218,   240,   241,   239,   238,     0,     0,     0,   245,   252,
     255,   254,   253,   251,   244,   248,   249,   250,   243,     0,
       0,     0,     0,     0,   247,     9,     0,     0,     0,   266,
       0,   271,     0,   281,   272,   283,   273,   284,   274,   295,
     275,     0,     0,   276,     0,    88,    89,    90,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   302,
       0,     0,     0,     0,     0,   146,   152,   144,   145,   147,
     150,   153,   149,   148,   151,     0,     0,   319,    58,    63,
      64,    65,    66,    67,    59,    60,    61,    68,    62,     0,
     324,     0,   371,   367,   363,   364,   368,   365,   370,   325,
     374,   326,   287,   379,   383,   378,   290,   289,   288,     0,
       0,   327,   390,   329,     0,   328,     0,   397,   330,   409,
     401,   412,   402,   403,   405,     0,   407,   408,   143,   331,
       0,     0,   332,     0,     0,   143,   333,   422,   143,   420,
     334,   423,   336,   143,   424,   335,     0,   143,     0,   337,
     442,     0,   440,   458,     0,     0,     0,   446,   438,     0,
     448,   463,   451,   339,   468,   469,   340,     0,     0,     0,
     433,     0,   343,   429,   430,     0,   344,   345,     0,   470,
     471,   472,   348,   349,   473,   351,     0,   474,   475,   476,
     353,   482,   477,   478,   480,   355,   488,   490,   492,   494,
     487,   489,   496,   357,     0,     0,   501,     0,   361,   143,
     503,     0,   510,   528,   511,   530,   531,   532,   516,   533,
     535,   534,   536,   520,   524,   540,     0,     0,     0,   537,
     525,     0,     0,   545,   544,     0,     0,     0,     0,    24,
       0,     0,   555,     0,   556,     0,     0,     0,     0,     0,
     557,     0,   701,     0,   558,     0,   559,     0,     0,   560,
       0,   706,   705,   704,     0,   709,     0,     0,     0,   896,
       0,     0,     0,   713,   717,   719,   720,     0,     0,     0,
       0,   832,     0,     0,     0,   869,     0,     0,     0,     0,
       0,     0,     0,   871,     0,     0,     0,    29,  1114,  1115,
    1116,    31,     0,     0,     0,     0,  1127,  1128,     0,   143,
       0,  1125,  1122,     0,     0,     0,   143,  1143,  1146,  1144,
    1145,  1139,  1140,  1141,  1142,     0,     0,     0,    39,  1162,
    1163,     0,  1170,  1172,  1171,  1167,  1168,  1166,     0,     0,
       0,     0,  1173,     0,  1176,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1174,  1185,     0,     0,     0,
    1175,  1177,     0,  1160,  1161,  1159,   200,     0,   204,   196,
       0,   206,   197,     0,   208,   198,  1158,  1157,   199,   201,
     203,     0,     0,   195,     0,     0,     0,     0,  1241,  1254,
    1244,     0,     0,  1247,     0,     0,  1246,  1245,   154,  1263,
       0,  1262,  1258,   221,   217,     0,   226,     0,   223,     0,
     242,   138,   141,   142,   140,   139,   256,   257,   258,   246,
     260,   262,   261,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   143,     0,   303,    94,    91,    92,    93,   143,
     305,   304,     0,     0,     0,     0,     0,     0,     0,   318,
       0,   314,   312,   311,   323,   366,     0,     0,   369,   384,
     385,   380,   381,   386,   388,   387,   382,   291,   292,   377,
     376,   392,   391,     0,   396,   410,   411,   400,   413,   406,
     404,   399,     0,     0,     0,   143,   419,   154,   154,   154,
     143,     0,     0,   143,   459,   441,   452,     0,   443,    78,
     454,     0,     0,   445,   447,   143,   464,   465,   450,     0,
       0,     0,   435,     0,     0,     0,     0,   944,   946,   945,
       0,     0,  1044,     0,  1023,     0,  1026,     0,     0,  1046,
    1048,     0,  1039,   347,     0,   479,   481,   491,   484,   493,
     485,   495,   486,   497,   483,     0,     0,   502,   499,   500,
     154,   526,   539,   538,   541,     0,   554,   542,     0,     0,
       0,     0,     0,     0,   167,   167,   161,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   164,   164,   161,     0,
       0,   161,     0,     0,     0,     0,     0,   596,   620,     0,
       0,     0,   592,     0,     0,     0,     0,   167,   161,     0,
       0,   697,     0,   707,   708,   143,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   771,
       0,     0,     0,     0,     0,   796,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   821,     0,     0,   826,   827,
       0,     0,     0,   848,   850,   849,     0,   852,     0,     0,
     860,   862,   863,   897,     0,     0,     0,     0,   711,   712,
     938,   936,   941,   940,   939,   937,   942,     0,   716,     0,
     721,     0,   935,     0,   722,   723,   724,   725,     0,     0,
       0,     0,     0,   834,     0,     0,   835,  1065,     0,  1068,
    1064,     0,     0,     0,   836,   870,   837,  1084,  1089,  1086,
    1085,  1083,  1090,  1087,  1081,  1088,  1082,  1091,     0,     0,
     842,     0,     0,     0,  1097,     0,  1099,   845,     0,  1101,
     846,   867,     0,     0,     0,   872,   873,   874,  1126,     0,
       0,  1133,  1129,     0,     0,     0,  1124,  1123,  1137,  1136,
       0,     0,  1151,     0,     0,  1147,     0,  1155,     0,     0,
    1148,     0,  1169,   189,   189,     0,   189,     0,  1195,     0,
    1194,  1186,     0,     0,     0,     0,  1190,     0,     0,     0,
    1193,     0,     0,     0,     0,     0,  1188,  1196,     0,     0,
       0,  1187,   189,   189,   189,     0,   205,   207,   209,     0,
     210,     0,    55,     0,  1236,     0,  1242,     0,   143,  1248,
    1249,     0,  1251,  1252,     0,   155,   156,  1243,  1264,  1265,
       0,   213,     0,   227,     0,     0,     0,     0,   259,     0,
       0,     0,     0,     0,     0,     0,     0,   297,   143,     0,
       0,     0,     0,   307,     0,   317,     0,   316,   373,   372,
       0,     0,     0,   143,     0,     0,   154,   417,   421,   425,
       0,     0,     0,   154,     0,    82,    81,   460,   444,     0,
     455,   457,   157,   466,   341,     0,     0,    55,     0,   434,
       0,     0,   962,     0,     0,     0,     0,     0,     0,   976,
       0,     0,     0,     0,     0,     0,   993,   994,     0,     0,
       0,     0,     0,  1005,     0,  1011,  1012,  1014,  1016,     0,
    1020,  1031,  1032,  1033,     0,  1035,  1040,  1042,  1043,  1041,
     943,     0,     0,  1022,     0,  1021,   961,     0,     0,  1027,
       0,  1029,     0,  1028,  1049,  1030,  1037,     0,     0,   359,
       0,     0,   552,   553,     0,   550,   546,     0,   167,   167,
     167,   168,   169,   564,   565,   163,   162,     0,   167,   167,
     167,     0,   570,   580,   164,   167,   167,   167,   165,   166,
     167,   167,     0,   167,   167,     0,   164,     0,   593,     0,
       0,     0,   619,     0,   618,     0,     0,   595,     0,   594,
       0,     0,     0,     0,   164,   164,   161,     0,     0,   161,
       0,     0,     0,   167,   167,   693,     0,   167,   167,   698,
       0,   180,   181,   182,   183,   184,   185,     0,    86,    87,
      85,   729,     0,     0,     0,     0,     0,     0,   890,   888,
     883,     0,   893,   877,   894,   880,   892,   886,   875,   889,
     878,   876,   895,   891,     0,     0,     0,   749,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   781,     0,     0,     0,     0,     0,   795,   797,     0,
       0,   803,   802,     0,     0,   170,     0,     0,     0,   143,
       0,     0,   816,     0,     0,     0,     0,   822,   823,   824,
       0,     0,     0,   831,   847,   851,   853,   856,   855,     0,
       0,     0,   861,   898,   900,     0,   899,   714,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1050,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   718,     0,     0,     0,     0,   833,     0,
     143,     0,  1060,  1058,     0,     0,   143,     0,  1063,   838,
       0,     0,     0,   844,     0,     0,  1102,   865,   866,     0,
     868,  1132,  1134,  1131,  1130,  1121,     0,     0,     0,  1152,
       0,     0,  1156,  1164,   191,   192,   193,   194,   190,  1179,
    1178,     0,     0,     0,  1181,  1180,   189,     0,     0,     0,
    1189,     0,     0,     0,     0,     0,  1206,     0,  1220,  1219,
    1221,     0,     0,     0,  1192,     0,     0,     0,  1191,  1201,
    1200,  1202,  1198,  1197,  1199,  1223,  1222,  1224,     0,     0,
       0,    55,     0,  1238,     0,   143,  1255,  1250,  1253,     0,
       0,   143,     0,     0,     0,   224,     0,     0,     0,     0,
       0,     0,     0,     0,   294,   293,     0,     0,   285,   296,
     298,     0,   308,   310,   309,   143,   315,     0,     0,     0,
     154,   416,   143,     0,     0,     0,     0,   439,   453,    80,
      79,   462,     0,   456,   159,   160,   158,   449,     0,     0,
     437,   431,     0,     0,     0,     0,     0,     0,   143,   963,
       0,   966,     0,     0,   969,     0,   143,   974,     0,   977,
     978,     0,   980,   981,   982,     0,   986,     0,     0,   989,
       0,   995,     0,     0,     0,  1000,  1001,   999,     0,     0,
       0,  1006,  1007,     0,     0,  1010,  1013,  1015,  1017,     0,
       0,  1034,  1036,   947,     0,     0,     0,     0,     0,     0,
    1045,   948,     0,     0,  1047,  1038,     0,     0,   507,   508,
       0,     0,   551,     0,   561,   562,   563,   167,   567,   568,
     569,     0,     0,     0,   574,   575,   161,     0,     0,     0,
     167,   581,   582,   583,   584,   586,   164,   589,   590,     0,
     167,     0,     0,     0,   164,   164,   161,     0,     0,     0,
       0,   617,     0,   621,     0,     0,     0,     0,     0,   164,
     164,   161,     0,     0,   161,     0,     0,     0,     0,     0,
     164,   164,   161,     0,     0,   161,     0,     0,     0,     0,
       0,   164,   164,   161,     0,     0,   161,     0,     0,     0,
       0,   164,   164,   161,     0,     0,     0,   164,   597,   598,
     599,   600,   602,     0,   605,   606,     0,   164,     0,     0,
     691,   692,   167,   695,   696,     0,   728,   143,   730,     0,
       0,   735,     0,     0,     0,     0,     0,   882,   879,   885,
     884,   881,   887,     0,   746,     0,     0,     0,     0,   143,
     755,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   772,   773,   774,     0,   778,   775,
     777,     0,     0,   783,   782,   784,   785,     0,     0,     0,
       0,     0,     0,   143,     0,   143,     0,   801,   176,   172,
     177,   171,   174,   173,   175,   810,   811,   812,     0,     0,
       0,   815,   817,   143,     0,   143,     0,   825,   828,   143,
       0,   143,     0,   854,   859,   901,   715,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1092,   926,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   927,     0,     0,     0,     0,     0,   726,
     727,   143,   154,     0,   143,   143,  1066,  1067,     0,  1069,
       0,   840,     0,   143,  1098,  1100,   864,     0,  1149,  1150,
    1153,  1154,   189,   189,   189,  1225,  1204,  1203,  1205,  1208,
    1207,  1211,  1210,  1212,  1209,  1217,  1216,  1218,  1214,  1213,
    1215,     0,     0,  1233,  1240,     0,  1256,     0,   143,     0,
    1259,     0,     0,   228,     0,   225,     0,     0,     0,   263,
       0,     0,     0,     0,   143,     0,   300,   131,     0,   393,
       0,   414,   154,   157,     0,     0,   428,     0,     0,   432,
     955,     0,     0,     0,     0,   143,   964,   157,   157,   157,
     143,   970,   157,   154,   157,   157,   143,   983,   157,   157,
     157,   143,   990,   157,   157,   143,     0,   157,   143,   157,
     157,   143,   157,   143,   949,     0,     0,     0,     0,   143,
    1024,  1025,     0,     0,   506,   547,     0,   566,   571,   572,
     573,     0,   577,   578,   579,   585,   167,   164,   591,   608,
     609,   610,   611,   612,     0,   614,   615,   164,     0,     0,
       0,   164,   164,   161,     0,     0,     0,     0,     0,     0,
     164,   164,   161,     0,     0,     0,     0,     0,     0,   164,
     164,   161,     0,     0,     0,   164,   167,   167,   167,   167,
     167,     0,   167,   167,     0,   164,   164,   167,   167,   167,
     167,   167,     0,   167,   167,     0,   164,   164,   671,   672,
     673,   674,   676,     0,   679,   680,     0,   164,   682,   683,
     684,   685,   686,     0,   688,   689,   164,   601,   164,     0,
     607,     0,     0,   694,     0,   731,   157,     0,     0,   157,
       0,     0,     0,   745,   157,   747,   750,   751,   157,   752,
     754,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   776,   779,   780,     0,   157,     0,
       0,     0,   798,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   857,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1093,  1072,     0,  1079,  1080,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   143,     0,     0,    83,     0,     0,   933,   934,
     154,     0,     0,     0,  1061,  1059,  1070,   839,   841,   154,
      36,  1183,  1182,  1184,  1226,     0,  1235,  1266,     0,     0,
    1261,  1260,   229,     0,     0,     0,   268,     0,     0,     0,
     286,   157,   394,   398,   415,   418,     0,   426,   461,     0,
       0,     0,     0,     0,   960,   965,   968,   967,   971,   972,
     973,   975,   979,   984,   985,   987,   988,   991,   992,   996,
     154,   157,  1003,   154,  1004,  1008,   154,  1018,   154,     0,
       0,     0,     0,   954,     0,     0,   505,     0,   576,   587,
     167,   164,   616,   167,   167,   167,   167,   167,     0,   167,
     167,   164,   662,   663,   664,   665,   666,     0,   668,   669,
     164,   167,   167,   167,   167,   167,     0,   167,   167,   164,
     167,   631,   632,   633,   634,   636,   164,   639,   640,     0,
     167,   167,   651,   652,   653,   654,   656,   164,   659,   660,
       0,   167,   675,   164,     0,   681,   164,   690,   603,   164,
     699,   700,   143,   734,     0,   157,   739,   738,     0,   143,
       0,   748,   753,   143,     0,   760,   761,   762,   763,   767,
     768,   764,   765,   766,     0,     0,   157,   786,   790,     0,
     143,     0,     0,   799,   805,   804,   157,   806,     0,   813,
       0,   818,   157,   157,   808,     0,     0,   858,     0,   178,
     178,     0,     0,   178,     0,   178,  1050,     0,     0,     0,
       0,     0,     0,     0,     0,  1071,     0,     0,   178,   178,
       0,     0,     0,     0,     0,     0,     0,     0,   928,     0,
       0,     0,  1050,    84,     0,   178,     0,  1095,   932,     0,
       0,   211,  1268,  1267,     0,     0,   233,     0,     0,     0,
       0,   301,   427,   320,   956,     0,   186,     0,   997,   998,
    1002,  1009,  1019,   950,     0,   186,     0,   352,   320,     0,
     588,   613,   622,   623,   624,   625,   626,   164,   628,   629,
     167,   164,   670,   642,   643,   644,   645,   646,   164,   648,
     649,   167,   635,   167,   164,   641,   655,   167,   164,   661,
     677,   164,   687,   604,     0,   157,   732,   740,     0,     0,
       0,     0,     0,   769,   770,   787,     0,     0,     0,   800,
     807,     0,   819,   820,   809,   157,   829,     0,   179,  1050,
    1050,    83,     0,  1050,     0,  1050,   902,   143,     0,  1074,
       0,  1077,  1111,  1078,  1076,  1073,     0,  1050,  1050,    83,
       0,     0,  1050,  1050,     0,     0,  1050,   931,   929,   930,
     909,  1050,  1050,  1095,  1106,     0,  1062,   843,     0,     0,
     235,     0,     0,     0,   321,   322,   342,     0,   187,   188,
     958,   959,     0,   952,   953,   360,     0,   167,   630,   667,
     167,   650,   637,   167,   657,   167,   678,     0,   733,   157,
     736,   157,     0,   157,     0,   157,   788,   157,     0,   157,
       0,  1050,   915,   911,  1050,     0,   916,     0,   910,  1050,
       0,  1075,     0,   913,   912,  1050,     0,     0,   907,   905,
    1050,   143,   906,   908,   914,  1106,  1056,     0,     0,  1096,
    1104,     0,     0,     0,   264,   287,   290,   288,     0,     0,
     143,   143,   549,   627,   647,   638,   658,   157,   737,   744,
       0,   759,   756,   789,   794,     0,   814,     0,   920,   904,
      83,     0,   918,  1112,     0,   903,    83,     0,   919,     0,
    1057,  1108,  1110,     0,  1103,     0,     0,   269,     0,     0,
       0,     0,   186,   186,     0,   741,   143,   757,   791,   830,
    1050,     0,     0,  1050,     0,   157,  1109,  1105,   234,     0,
       0,     0,     0,     0,   957,   951,   710,   143,   742,   758,
     143,   792,   922,     0,  1050,   921,     0,     0,   236,   280,
       0,   279,     0,   743,   793,    83,   923,    83,  1050,   278,
     277,  1050,  1050,   917,   925,   924
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    53,   418,   173,   152,  1227,  2492,  2493,   419,   420,
     421,   422,   153,   154,   155,    91,   786,   445,  1177,  1647,
    1317,  1330,  1313,  1895,  2589,  1377,  2640,  1549,   334,   739,
     742,   745,   753,    63,   357,   363,   367,   370,    68,   373,
      75,   388,   384,   378,   394,    82,   399,    92,    98,   404,
     406,   408,   480,   839,  1616,   410,   413,   105,   429,   156,
     158,  2636,   175,   215,   469,   828,   471,   481,   831,   836,
     483,   485,   842,   488,   844,   499,   847,   849,   502,   506,
     510,   512,   515,   519,   546,   542,  1239,   533,   868,   873,
     865,  1228,   878,   536,   552,   555,   560,   565,   573,   908,
     910,   912,   914,   578,   918,   218,   580,  1720,   236,   582,
     584,   588,   593,   600,   245,  1306,   603,   253,   612,  1322,
     614,   620,   962,  1338,   957,  1761,  1344,  1342,   958,  1763,
    1347,  1349,   626,   629,   624,   255,   263,   265,   667,  1039,
    1404,  1028,  1503,  1943,  2273,  1044,  1037,   903,  1280,  1285,
    1293,  1295,  1927,   270,  1053,  1056,  1064,  2245,  2246,  2247,
    1928,  2624,  2625,  1087,  1090,  2699,  2700,  2696,  2697,  2741,
    2248,  2249,   275,   281,   289,   681,   676,   294,   299,   691,
     698,  1115,  1120,   748,   736,   306,   310,   705,   316,   712,
    1554,   725,   726,  1151,  1146,  1560,  1136,  1566,  1578,  1574,
    1140,   730,   714,   322,   323,   338,  1164,   341,   347,   763,
     766,   760,   349,   352,   771
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2488
static const yytype_int16 yypact[] =
{
    5674,    90,   650,   106, -2488, -2488,   946,  -123,   444,   760,
    1015,    81,  3782,   141,   125,  1373,    46,  5839,   721,  1934,
   -2488,   125,   832,   171,  1011,   -51,    15,   179,   -24,   163,
     143,   869,  3925,    26,   858,   195,   145,   -24, -2488,   -25,
      13,   805, -2488,    96,   250,   969, -2488,   346, -2488,   109,
    4470,   246,   116,   485,   499,   139,   269,   539,   542,   127,
     608,    -5,   761, -2488, -2488, -2488,   912,  1025, -2488,    71,
      85,   125,    29,  1025,   167, -2488,   617,  1025, -2488, -2488,
      98,  1025, -2488, -2488, -2488, -2488,  1025, -2488, -2488, -2488,
   -2488, -2488, -2488,    82,   616,   656,   660,   817, -2488,  1025,
    1313,  1025,  1025,  1162,  1025, -2488, -2488, -2488,   474, -2488,
   -2488, -2488, -2488,  5128, -2488, -2488, -2488, -2488, -2488, -2488,
    1025, -2488, -2488, -2488, -2488, -2488, -2488, -2488, -2488, -2488,
   -2488, -2488, -2488, -2488, -2488, -2488, -2488, -2488, -2488, -2488,
   -2488, -2488, -2488, -2488, -2488, -2488, -2488, -2488, -2488, -2488,
   -2488, -2488, -2488,  1099, -2488,  1025, -2488,   680, -2488, -2488,
     125,   125,   125,   125,   125,   125,   125, -2488, -2488,   125,
     125,   125,   125, -2488,   623, -2488,   630,  1239,   640,   162,
     478,   611,   355,  4742,   513,  5181,  5100,   769,  5128,  4316,
   -2488,   855,  -114,   807,   727,   862,   589,   820,   -24,    24,
   -2488,   778, -2488,   633,   560,   152, -2488,    30, -2488,   138,
   -2488,    17,   767,    60, -2488, -2488,  5373, -2488, -2488, -2488,
     795,   850, -2488, -2488, -2488, -2488,   425, -2488, -2488, -2488,
   -2488,   609, -2488, -2488,  5373,  4708, -2488, -2488,    58, -2488,
     889,   895,   118, -2488,  1025, -2488,   909,   133,   929,   287,
     468,   941,    10, -2488, -2488, -2488,   926,   978,   125,   125,
    1025,  1025, -2488, -2488,   985, -2488, -2488, -2488, -2488, -2488,
    3580, -2488,   998,   953,  1025, -2488,  1009, -2488, -2488, -2488,
   -2488, -2488,  1025,  1210,   125,  1343,  1025,  1099,  1025, -2488,
    1035, -2488,  4653, -2488, -2488,    54,  1040,  1049,  1025, -2488,
    1055, -2488,    -9,  1058,  5373,  1088, -2488,  1256,  1025,  1002,
   -2488,   519,   983,  1194,   565,  1102, -2488, -2488, -2488, -2488,
   -2488, -2488, -2488,  1108, -2488,   475,    28,    61,    91,   101,
   -2488,  1025,  1025,   216, -2488,  1025,   857,  1113, -2488,  1025,
    1025, -2488,  1126,    14,    22,  1128,  1099, -2488, -2488, -2488,
    1005,  1025, -2488, -2488, -2488, -2488,  1025, -2488,  1136,  1145,
   -2488,  1025,   874, -2488, -2488, -2488, -2488, -2488, -2488,  1025,
   -2488, -2488,  1025, -2488, -2488,   543,   543,  1153, -2488, -2488,
   -2488, -2488, -2488, -2488, -2488, -2488, -2488, -2488, -2488,  1025,
    1025,  1156,  1169,  1174, -2488, -2488,  1025,  1025,  1025, -2488,
    1025, -2488,  1183, -2488, -2488, -2488, -2488,  1140, -2488,  1187,
   -2488,  5373,  1199, -2488,  1025, -2488, -2488, -2488,  1025,  1224,
    1200,  1200,  5373,  1025,  1025,  1025,  1025,  1025,  1025, -2488,
    1025,  5128,  1313,  1025,  1025, -2488, -2488, -2488, -2488, -2488,
   -2488, -2488, -2488, -2488, -2488,  1313,  1025, -2488, -2488, -2488,
   -2488, -2488, -2488, -2488, -2488, -2488, -2488, -2488, -2488,  1214,
   -2488,   964,    34, -2488, -2488, -2488, -2488, -2488, -2488, -2488,
   -2488, -2488,   -89, -2488, -2488, -2488,  1070, -2488,   471,   402,
     402, -2488, -2488, -2488,  1237, -2488,  1247, -2488, -2488,   -32,
   -2488,  1089, -2488, -2488, -2488,  1100, -2488, -2488,  1099, -2488,
    3979,  1025, -2488,  5373,  5373,  1099, -2488, -2488,  1099, -2488,
   -2488, -2488, -2488,  1099, -2488, -2488,  5373,  1099,  1025, -2488,
   -2488,  5373, -2488,  1267,   212,  1090,     3, -2488, -2488,  1095,
    5373,  4344, -2488, -2488, -2488, -2488, -2488,  1278,  1293,  1295,
   -2488,  1106, -2488, -2488, -2488,  1025, -2488, -2488,   461, -2488,
   -2488, -2488, -2488, -2488, -2488, -2488,    17, -2488, -2488, -2488,
   -2488, -2488, -2488,  1124,  1127, -2488, -2488,  1254,  1259,  1260,
   -2488, -2488,  1107, -2488,  1025,  1326,  1109,  4653, -2488,  1099,
   -2488,  1335, -2488, -2488, -2488, -2488, -2488, -2488, -2488, -2488,
   -2488, -2488, -2488, -2488, -2488, -2488,  5373,  5373,  5373, -2488,
   -2488,  1338,   125, -2488, -2488,  1339,  1340,  1152,  1025, -2488,
     111,  1262, -2488,  1348, -2488,   459,  1268,  4419,    36,  1353,
   -2488,  1355, -2488,  1359, -2488,   -11, -2488,  1371,  1375, -2488,
    1374, -2488, -2488, -2488,  1025, -2488,  4653,  5061,  1652,   483,
    1379,   529,  1286, -2488, -2488, -2488,  1376,   553,  1386,  1389,
      51,  1025,   372,   466,    21,  5373,   125,  1617,   911,    43,
      52,   107,    23, -2488,  1378,  1381,  1392, -2488, -2488, -2488,
   -2488, -2488,  1025,  1025,  1025,  1025, -2488, -2488,  1025,  1099,
    1025, -2488,  1025,  1313,  1025,  1396,  1099, -2488, -2488, -2488,
   -2488, -2488, -2488, -2488, -2488,  1397,   448,   496, -2488, -2488,
   -2488,  1400, -2488, -2488, -2488, -2488,  1309, -2488,  1404,  1409,
    1334,  1416, -2488,  1417, -2488,  1418,  1337,  1420,   575,   569,
     579,    68,   585,  1422,   621, -2488, -2488,  1423,  1424,  1426,
   -2488, -2488,  1431, -2488, -2488, -2488, -2488,  1433, -2488, -2488,
    1434, -2488, -2488,  1435, -2488, -2488, -2488, -2488, -2488, -2488,
   -2488,  1025,  1025, -2488,  1025,  1164,  1025,  1025, -2488,  4372,
   -2488,  1193,  1432, -2488,  1232,  1438, -2488, -2488,    -6,  1025,
    1025, -2488,  1415, -2488, -2488,  1441,   965,  1025,  1436,   967,
   -2488, -2488, -2488, -2488, -2488, -2488, -2488, -2488, -2488, -2488,
   -2488, -2488, -2488,  1439,  1446,  1025,  1025,  1025,  1447,   125,
    1448,  1450,  1099,  5373, -2488, -2488, -2488, -2488, -2488,  1099,
   -2488, -2488,  1025,  1025,  1025,  5373,  1025,  1313,  1025, -2488,
    1025, -2488, -2488, -2488, -2488, -2488,  1451,  1454, -2488, -2488,
   -2488, -2488, -2488, -2488, -2488, -2488, -2488, -2488, -2488, -2488,
   -2488,   513, -2488,  1025, -2488, -2488, -2488, -2488, -2488, -2488,
   -2488, -2488,  5373,  5373,  1025,  1099, -2488,    -6,    -6,    -6,
    1099,  1313,  1025,  1099, -2488, -2488, -2488,  1025, -2488,   -53,
    1289,  1455,  1458, -2488, -2488,  1099,  5373, -2488, -2488,  1459,
    1460,  1462,  1245,  1025,  5066,   829,   784, -2488, -2488, -2488,
    1025,  1453,   159,  1047, -2488,  1213, -2488,  1617,  1215,   592,
    1196,   469, -2488, -2488,  1025, -2488, -2488, -2488, -2488, -2488,
   -2488, -2488, -2488, -2488, -2488,  1025,  1466, -2488, -2488, -2488,
      -6, -2488, -2488, -2488, -2488,  5462, -2488, -2488,  1473,  1494,
    1025,  1500,  1501,  1502,   551,   551,   411,  1504,  1505,  1508,
    1509,  1242,  1251,  1515,  1518,  1522,    38,    38,   411,  1525,
    1526,   411,  1527,  1528,  4557,  1531,  1534, -2488, -2488,  1536,
    1537,   548, -2488,  1539,  1540,  1541,  1542,   551,   411,  1544,
    1545, -2488,  1547, -2488, -2488,  1099,   790,  1408,  1294,   -29,
    1308,  1444,   626,    47,  1548,    16,  1425,  1449,   428,   775,
    1516,   390,  1318,  1461,  1553,  1350,   219,    41,   202,   -55,
    5128,  1617,  1524,   320,  1327,  1357,  1564,    42, -2488, -2488,
     233,  1567,  1568, -2488, -2488, -2488,  1569,  1365,    50,  1617,
    1366, -2488, -2488, -2488,   125,  1574,  1575,  1025, -2488, -2488,
   -2488, -2488, -2488, -2488, -2488, -2488, -2488,     8, -2488,   550,
   -2488,  1025, -2488,  1025, -2488, -2488, -2488, -2488,  1025,  1025,
    1025,   529,  5373, -2488,  1578,  1257, -2488, -2488,  1025, -2488,
   -2488,  1025,  5128,  1025, -2488, -2488, -2488, -2488, -2488, -2488,
   -2488, -2488, -2488, -2488, -2488, -2488, -2488, -2488,   125,  1025,
   -2488,  1025,   529,  1579, -2488,  1025,  1025, -2488,   125, -2488,
   -2488, -2488,   134,  1584,  1587, -2488, -2488, -2488, -2488,  1025,
    1025, -2488, -2488,  1313,  1025,  1025, -2488, -2488, -2488, -2488,
    1589,  1025, -2488,  1025,  1483, -2488,  1025, -2488,  1025,  1484,
   -2488,  1594, -2488,   956,   956,   722,   956,  1597, -2488,   726,
   -2488, -2488,  1600,  1602,   782,  1604, -2488,  1606,  1608,  1610,
   -2488,   786,   836,  1612,  1614,  1611, -2488, -2488,  1615,  1618,
    1622, -2488,   956,   956,   956,  1025, -2488, -2488, -2488,  1025,
   -2488,  1025,  1087,  5373, -2488,  1025, -2488,  4653,  1099, -2488,
   -2488,  1623, -2488, -2488,  1625, -2488, -2488, -2488, -2488,  1621,
    1343, -2488,  1025,  1624,  1025,  1025,  1025,   544, -2488,  1628,
    1631,  1025,  1025,   114,  1632,   125,   125, -2488,  1099,  1025,
    1634,  1636,  1638, -2488,  5373, -2488,  1025, -2488, -2488, -2488,
    1025,  1025,  1025,  1099,  1639,  5373,    -6, -2488, -2488, -2488,
    1313,  1025,  1640,    -6,  1025,  1609,  1613,   541, -2488,  1641,
   -2488, -2488,  1161, -2488, -2488,  1025,  1644,  1649,  1025, -2488,
    1645,   915,  5128,  1385,   437,  1452,    86,  5373,   443, -2488,
     223,  1546,   115,   464,  1456,   168, -2488, -2488,   614,  1517,
     315,  1562,   295,  1617,   813, -2488,  1682,  1443, -2488,   684,
   -2488, -2488, -2488, -2488,  1617,  1485, -2488, -2488, -2488, -2488,
   -2488,  1025,   925, -2488,  1025, -2488, -2488,  1025,  1025, -2488,
    1025, -2488,  1025, -2488, -2488, -2488, -2488,  1496,  1025, -2488,
    1025,    40, -2488, -2488,  1690,  1692, -2488,  1025,   551,   551,
     551, -2488, -2488, -2488, -2488, -2488, -2488,  1693,   551,   551,
     551,   187, -2488, -2488,    38,   551,   551,   551, -2488, -2488,
     551,   551,  1694,   551,   551,  1696,    38,   771, -2488,  1697,
    1698,  1699, -2488,   683, -2488,   718,   878, -2488,   814, -2488,
    1437,  1701,  1706,  1707,    38,    38,   411,  1711,  1713,   411,
    1714,  1717,  1719,   551,   551, -2488,  1720,   551,   551, -2488,
    1721, -2488, -2488, -2488, -2488, -2488, -2488,   125, -2488, -2488,
   -2488,  5128,   766,   125,  1025,  1076,  1361,   631, -2488, -2488,
   -2488,   875, -2488, -2488, -2488, -2488, -2488, -2488, -2488, -2488,
   -2488, -2488, -2488, -2488,  1722,   125,  1025, -2488,   125,  1723,
    1025,  5373,   125,  1367,  1464,  1488,   175,   182,  1492,   197,
    1427,  1428,  1726,  1727,  1732,   626,  1733,  1736,  1740,  1440,
    1442,  1272,  1741,   125,  1025,  1333,  1384, -2488, -2488,   125,
    5128, -2488, -2488,  5128,  1025,    31,  1743,   125,  1025,  1099,
    1313,   125, -2488,  1744,  5128,  5373,  1025, -2488, -2488, -2488,
     125,   125,  5128, -2488, -2488, -2488, -2488, -2488, -2488,  5128,
    1025,   125, -2488, -2488, -2488,  1025, -2488, -2488,  1745,  1025,
    1529,   236,  1025,  1530,  1025,   479,  1025, -2488,  1025,  1532,
    1533,  1025,  1025,  1025,  1025,  1025,  1025,  1025,  1025,    18,
    1025,  1025,  1535, -2488,  1025,  1025,  1025,  1025, -2488,  5373,
    1099,  1749,  5373,  5373,  1025,  1025,  1099,  1313, -2488,  1025,
    1025,  1025,  5373, -2488,  1025,  1025, -2488, -2488, -2488,  1752,
   -2488, -2488, -2488, -2488, -2488, -2488,  1755,  1025,  1025, -2488,
    1025,  1025, -2488, -2488, -2488, -2488, -2488, -2488, -2488, -2488,
   -2488,  1757,  1759,  1756, -2488, -2488,   956,  1760,  1761,  1764,
   -2488,  1766,  1768,  1769,  1771,  1774, -2488,  1775, -2488, -2488,
   -2488,  1778,  1779,  1776, -2488,  1780,  1781,  1783, -2488, -2488,
   -2488, -2488, -2488, -2488, -2488, -2488, -2488, -2488,  1025,  1025,
    1025,  1773,  5373, -2488,  1025,  1099, -2488, -2488, -2488,  1343,
    1025,  1099,  1025,  1025,  1025, -2488,  1025,  1025,  1784,  1025,
    1788,  1782,  1025,  1025, -2488, -2488,  1789,  5373, -2488, -2488,
   -2488,  1025, -2488, -2488, -2488,  1099, -2488,   898,  1025,   898,
      -6, -2488,  1099,  5373,  1025,  1025,  1790, -2488, -2488, -2488,
   -2488, -2488,  1025, -2488, -2488, -2488, -2488, -2488,  1025,  1791,
   -2488, -2488,  5373,  1792,  1793,  1794,  1795,  5373,  1099, -2488,
    5373, -2488,  5373,  5373,  5128,  5373,  1099, -2488,  5373, -2488,
   -2488,  5373, -2488, -2488,  5128,  5373, -2488,  5373,  5373,  5128,
    5373, -2488,  5373,  5373,  1025, -2488, -2488, -2488,  5373,  5373,
    5373, -2488, -2488,  5373,  5373, -2488, -2488, -2488, -2488,  5373,
    5373, -2488, -2488, -2488,  5373,  1798,  1799,  1800,  1801,  5373,
   -2488, -2488,  1025,  1025, -2488, -2488,  1803,  1025, -2488, -2488,
    1804,  1806, -2488,  1025, -2488, -2488, -2488,   551, -2488, -2488,
   -2488,  1808,  1809,  1810, -2488, -2488,   411,  1807,  1812,  1813,
     551, -2488, -2488, -2488, -2488, -2488,    38, -2488, -2488,  1815,
     551,  1816,  1818,  1819,    38,    38,   411,  1821,  1822,  1823,
     904, -2488,   952, -2488,  1004,  1549,  1825,  1827,  1829,    38,
      38,   411,  1831,  1832,   411,  1833,  1571,  1835,  1836,  1837,
      38,    38,   411,  1839,  1840,   411,  1841,  1577,  1843,  1854,
    1855,    38,    38,   411,  1859,  1860,   411,  1861,  1862,  1864,
    1865,    38,    38,   411,  1868,  1871,  1872,    38, -2488, -2488,
   -2488, -2488, -2488,  1875, -2488, -2488,  1876,    38,  1877,  1878,
   -2488, -2488,   551, -2488, -2488,  1880, -2488,  1099, -2488,  5373,
    1025, -2488,  1025,  5373,  1025,  1881,  1408, -2488, -2488, -2488,
   -2488, -2488, -2488,  1882, -2488,  5128,   125,  1883,  5128,  1099,
   -2488,  1885,  1408,  1025,  1025,  1025,  1025,  1025,  1025,  1025,
    1025,  1025,  1887,  1888, -2488, -2488, -2488,  1889, -2488, -2488,
   -2488,  1892,  1895, -2488, -2488, -2488, -2488,  1025,  5373,  1025,
    1896,  1408,   125,  1099,  1313,  1099,  1025, -2488, -2488, -2488,
   -2488, -2488, -2488, -2488, -2488, -2488, -2488, -2488,  1025,  1313,
    1313, -2488, -2488,  1099,  1313,  1099,  1025, -2488, -2488,  1099,
    1313,  1099,  1313, -2488, -2488, -2488, -2488,  1025,  1025,  1025,
    1025,  1025,  1025,  1025,  1025,  1025,  1025,  1202, -2488,  1025,
    1025,  1025,  1025,  1025,  1025,  1025,  1025,  1025,  1025,  1025,
    3979,  1897,  1025, -2488,  1025,  1025,  1025,  1900,  1901, -2488,
   -2488,  1099,    -6,  1902,  1099,  1099, -2488, -2488,  1313, -2488,
    1025, -2488,  1903,  1099, -2488, -2488, -2488,  1905, -2488, -2488,
   -2488, -2488,   956,   956,   956, -2488, -2488, -2488, -2488, -2488,
   -2488, -2488, -2488, -2488, -2488, -2488, -2488, -2488, -2488, -2488,
   -2488,  1408,  1025, -2488, -2488,  1025, -2488,  1025,  1099,  1025,
   -2488,  1313,  1025, -2488,  1025, -2488,  1796,  1906,  1907, -2488,
    1909,  1025,  1025,  1920,  1099,  5373, -2488, -2488,  1025, -2488,
    1025, -2488,    -6,  1161,  1025,  1935, -2488,  1025,    17, -2488,
   -2488,  1939,  1940,  1941,  1942,  1099, -2488,  1161,  1161,  1161,
    1099, -2488,  1161,    -6,  1161,  1161,  1099, -2488,  1161,  1161,
    1161,  1099, -2488,  1161,  1161,  1099,  5373,  1161,  1099,  1161,
    1161,  1099,  1161,  1099, -2488,  1944,  1946,  1947,  1949,  1099,
   -2488, -2488,  1921,    17,  1950, -2488,  1025, -2488, -2488, -2488,
   -2488,  1952, -2488, -2488, -2488, -2488,   551,    38, -2488, -2488,
   -2488, -2488, -2488, -2488,  1954, -2488, -2488,    38,  1955,  1956,
    1957,    38,    38,   411,  1959,  1960,  1961,  1962,  1963,  1964,
      38,    38,   411,  1967,  1968,  1969,  1970,  1971,  1972,    38,
      38,   411,  1976,  1977,  1978,    38,   551,   551,   551,   551,
     551,  1981,   551,   551,  1982,    38,    38,   551,   551,   551,
     551,   551,  1983,   551,   551,  1986,    38,    38, -2488, -2488,
   -2488, -2488, -2488,  1989, -2488, -2488,  1991,    38, -2488, -2488,
   -2488, -2488, -2488,  1993, -2488, -2488,    38, -2488,    38,  1994,
   -2488,  1996,  1998, -2488,  4653, -2488,  1161,  1999,  5128,  1161,
    1025,  5373,  2000, -2488,  1161, -2488, -2488, -2488,  1161, -2488,
   -2488,  5373,  2001,  1025,  1025,  1025,  1025,  1025,  1025,  1025,
    1025,  1025,  1025,  1025, -2488, -2488, -2488,  5128,  1161,  1025,
    5373,  2002, -2488,  1313,  1313,  1313,  1025,  5128,  1313,  1025,
    1313,  1313,  5373,  5128,  1313,  1025,  1313, -2488,  1025,  1025,
    1025,  1025,  1025,  1025,  1408,  1025,  1025,  1025,  1551,  1561,
    1633,  1658,  1661,  1663,  1664,  1202, -2488,  1665, -2488, -2488,
    1408,  1025,  1025,  1025,  1025,  1408,  1025,  1025,  1025,  1025,
    1025,  1025,  1099,  1025,  1563,  1408,  1025,  1025, -2488, -2488,
      -6,   125,  2012,  2015, -2488, -2488, -2488, -2488, -2488,    -6,
   -2488, -2488, -2488, -2488, -2488,  1025, -2488, -2488,  1313,  1025,
   -2488, -2488, -2488,  1221,  2017,  2018, -2488,  1025,  2016,   898,
   -2488,  1161, -2488, -2488, -2488, -2488,  2020, -2488, -2488,  2022,
    2023,  2025,  5373,  2026, -2488, -2488, -2488, -2488, -2488, -2488,
   -2488, -2488, -2488, -2488, -2488, -2488, -2488, -2488, -2488, -2488,
      -6,  1161, -2488,    -6, -2488, -2488,    -6, -2488,    -6,  2028,
    2029,  5373,  2031, -2488,  2033,  2035, -2488,  1025, -2488, -2488,
     551,    38, -2488,   551,   551,   551,   551,   551,  2036,   551,
     551,    38, -2488, -2488, -2488, -2488, -2488,  2037, -2488, -2488,
      38,   551,   551,   551,   551,   551,  2039,   551,   551,    38,
     551, -2488, -2488, -2488, -2488, -2488,    38, -2488, -2488,  2042,
     551,   551, -2488, -2488, -2488, -2488, -2488,    38, -2488, -2488,
    2043,   551, -2488,    38,  2044, -2488,    38, -2488, -2488,    38,
   -2488, -2488,  1099, -2488,  5128,  1161, -2488, -2488,  2046,  1099,
    1025, -2488, -2488,  1099,  1025, -2488, -2488, -2488, -2488, -2488,
   -2488, -2488, -2488, -2488,  1025,  1025,  1161, -2488, -2488,  2049,
    1099,  1025,  1313, -2488, -2488, -2488,  1161, -2488,  1025, -2488,
    1313, -2488,  1161,  1161, -2488,  5373,  1408, -2488,  1025,  2055,
    2055,  1025,  1025,  2055,  1408,  2055, -2488,  5373,   626,  2056,
    2058,  2059,  2060,  2061,  2063, -2488,   125,  1408,  2055,  2055,
    1025,  1025,  1408,  1025,  1025,  1025,  1025,  1025, -2488,  1313,
    1025,  2064, -2488, -2488,  1025,  2055,   125,    35, -2488,  2065,
     125, -2488, -2488, -2488,  2066,  1025, -2488,  2067,  2070,  1953,
    1025, -2488, -2488,     2, -2488,  2071,     7,  5373, -2488, -2488,
   -2488, -2488, -2488, -2488,  2072,     7,  5373, -2488,     2,  1025,
   -2488, -2488, -2488, -2488, -2488, -2488, -2488,    38, -2488, -2488,
     551,    38, -2488, -2488, -2488, -2488, -2488, -2488,    38, -2488,
   -2488,   551, -2488,   551,    38, -2488, -2488,   551,    38, -2488,
   -2488,    38, -2488, -2488,  1025,  1161, -2488, -2488,  5128,  5373,
    1025,  5373,  1025, -2488, -2488, -2488,  5128,  5373,  1025, -2488,
   -2488,  5373, -2488, -2488, -2488,  1161, -2488,  2074, -2488, -2488,
   -2488,  1408,  1025, -2488,  2075, -2488, -2488,  1099,  2076, -2488,
    2079, -2488, -2488, -2488, -2488, -2488,  2080, -2488, -2488,  1408,
    1025,  2081, -2488, -2488,  1025,  5373, -2488, -2488, -2488, -2488,
   -2488, -2488, -2488,    35,  1514,  1617, -2488, -2488,  2082,  2083,
   -2488,  2027,  2085,   102, -2488, -2488, -2488,  5373, -2488, -2488,
   -2488, -2488,  5373, -2488, -2488, -2488,  2088,   551, -2488, -2488,
     551, -2488, -2488,   551, -2488,   551, -2488,  4653, -2488,  1161,
   -2488,  1161,  1025,  1161,  2089,  1161, -2488,  1161,  1025,  1161,
    1025, -2488, -2488, -2488, -2488,  2090, -2488,  1025, -2488, -2488,
    2091, -2488,  1025, -2488, -2488, -2488,  2094,  1025, -2488, -2488,
   -2488,  1099, -2488, -2488, -2488,  1514, -2488,  1555,  1731,  1617,
   -2488,  2097,  2098,  2095, -2488, -2488, -2488, -2488,   797,   797,
    1099,  1099, -2488, -2488, -2488, -2488, -2488,  1161, -2488, -2488,
    2100, -2488,  5128, -2488, -2488,  2101, -2488,  1408, -2488, -2488,
    1408,  1025, -2488, -2488,  1025, -2488,  1408,  1025, -2488,  5373,
   -2488,  1555, -2488,   125, -2488,  2102,  2103, -2488,  1025,  1025,
    1025,  1025,     7,     7,  2104,  5128,  1099, -2488,  5128, -2488,
   -2488,  1025,  2106, -2488,  1025,  1161, -2488, -2488, -2488,  2110,
    2111,  1025,  2114,  1025, -2488, -2488, -2488,  1099, -2488, -2488,
    1099, -2488, -2488,  2107, -2488, -2488,  2116,  2121, -2488, -2488,
    2122, -2488,  2123, -2488, -2488,  1408, -2488,  1408, -2488, -2488,
   -2488, -2488, -2488, -2488, -2488, -2488
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2488, -2488,    -3, -2488,   330, -2488, -2211,  -905,  1474, -2488,
     888,   421,  1866,   -49,  1056, -1623,  1684,  1182,  -709,   808,
    -833,  1616,   804, -2488, -1160, -2488, -2487, -1112, -2488, -2488,
   -2488, -2488, -2488, -2488, -2488, -2488, -2488, -2488, -2488, -2488,
   -2488, -2488, -2488, -2488, -2488, -2488, -2488, -2488, -2488, -2488,
   -2488, -2488,  -668,  -471, -2488, -2488, -2488, -2488, -2488, -2488,
   -2488,  -555, -2488, -2488, -2488, -2488, -2488, -2488, -2488, -2488,
   -2488, -2488, -2488, -2488, -2488, -2488, -2488, -2488, -2488, -2488,
   -2488, -2488, -2488, -2488, -2488, -2488, -2488, -2488, -2488, -2488,
   -2488, -2488, -2488, -2488, -2488, -2488, -2488, -2488, -2488, -2488,
   -2488, -2488, -2488, -2488, -2488, -2488, -2488, -2488, -2488, -2488,
   -2488, -2488, -2488, -2488, -2488, -2488, -2488, -2488, -2488, -2488,
   -2488, -2488, -2488, -2488, -2488, -2488, -2488, -2488, -2488, -2488,
   -2488, -2488, -2488, -2488, -2488, -2488, -2488, -2488, -2488, -2488,
   -1420, -2488, -2488, -2488, -2488, -2488,  -642, -2488, -2488, -2488,
   -2488, -2488, -2488,   140, -2488, -2488, -2488, -2488,  -182,  -655,
   -2056,  -537, -2488, -2488, -2488, -2488,  -631,  -600, -2488, -2488,
   -2219, -2488, -2488, -2488, -2488, -2488, -2488, -2488, -2488, -2488,
   -2488, -2488, -2488, -2488, -2488, -2488, -2488, -2488, -2488, -2488,
   -2488, -2488,  1388, -2488, -2488, -2488, -2488, -2488, -2488, -2488,
   -2488, -2488, -2488, -2488, -2488, -2488, -2488, -2488, -2488, -2488,
   -2488, -2488, -2488, -2488, -2488
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1240
static const yytype_int16 yytable[] =
{
      67,   346,  1078,   965,  2018,  1867,  2020,   870,   104,   840,
    1052,  1055,  1550,  1477,  1555,   627,    64,    65,   761,   106,
     256,    64,    65,  1940,    64,    65,   764,   365,  1091,   286,
     106,   290,   106,   266,  2634, -1094,   303,   309,  2643,  2638,
    1585,  1586,  1587,  1408,    64,    65,   340,  1459,  1082,   351,
     966,   561,   356,    64,    65,  1328,   362,  1057,  1888,   369,
    1718,  1058,   601,   372,   374,   106,  1447,   383,  1047,  1084,
     389,   393,  1381,   109,   396,   375,   576,  1441,   400,  1889,
    1225,   257,  1890,   401,    64,    65,  1467,   402,    64,    65,
     549,  1175,  1383,  1891,   737,   106,   414,   534,   423,   424,
     428,   430,   397,   258,   829,    64,    65,  1664,   687,    64,
      65,   106,    64,    65,   746,  1332,  1892,   434,  1335,    64,
      65,    99,  1092,   959,   606,   931,   932,   740,  1093,   106,
      64,    65,  1059,  1893,   111,  1366,  1674,   826,   610,  1527,
     100,   696,    64,    65,   688,   111,   317,   111,  1217,  1218,
    1219,  1528,   446,  1060,   259,  1141,    54,   743,   830,    76,
    1614,   845,    64,    65,   562,    64,    65,   386,  1405,   871,
      64,    65,   933,  1442,   157,   566,   479,   302,   254,   967,
     111,   500,  1468,  1409,   264,   567,  1448,   246,   535,  1679,
     174,  1226,   101,   960,   689,   318,  1855,  1329,   355,   300,
     267,  1731,  1732,  1857,   319,   387,   550,   307,  1384,   276,
     111,  1301,   568,   557,   268,  1061,   866,   114,  1860,    64,
      65,   827,   846,   115,   116,  1142,   111,   271,   114,   272,
     114,   117,   320,   301,   115,   116,   115,   116,   607,    64,
      65,   608,  1289,   686,   111,   390,  1439,   697,  1733,   968,
    1669,   602,  1176,  1410,   324,   304,   577,   634,   635,   969,
    1461,  1048,  1085,   114,   376,  2774,  2775,   563,   109,   115,
     116,   670,   379,  1719,   366,   102,   269,   628,   305,   672,
     675,  2635,   678,   682,  1406,   684,  2639,  1460,   569,  2705,
     747,   970,   615,   114,   564,   694,  1411,   690,   762,   115,
     116,   934,   935,   308,   704,   706,   765,   403,   119,   114,
    1478,  1062,   872,   551,   260,   115,   116, -1094,   377,   119,
    1941,   119,  1094,  1665,   570,   291,  1083,   114,   749,   750,
     752,  1443,   754,   115,   116,   292,   757,   758,   548,   391,
    1469,   398,  1049,  1086,   159,   273,  1451,   770,   772,   472,
     335,   237,  1675,   773,   119,   473,   262,   149,   776,   778,
     261,   150,   151,   293,  1471,  1283,   779,   103,   149,   780,
     149,   936,   150,   151,   150,   151,   611,  1734,  1735,  1894,
    2674,   937,   938,  1615,   119,   380,   789,   790,   321,   571,
    1670,  1088,   474,   794,   795,   796,    66,   797,  2685,   339,
     119,   385,  2706,   149,   616,  1680,   350,   150,   151,  1509,
    2596,   804,  1856,   939,   392,   805,   475,   361,   119,  1858,
     810,   811,   812,   813,   814,   815,   117,   816,   381,   382,
     820,   821,   558,   149,  1861,  1030,  2620,   150,   151,   751,
    1522,   572,  1440,   823,  1975,   477,  2707,  1736,    77,   149,
    1414,  1453,   274,   150,   151,   559,  1462,  1737,  1738,  1919,
    1671,  1445,   476,  1688,   942,   884,   885,   149,  1446,   585,
     336,   150,   151,   943,   944,   348,  1031,  1415,  2742,   617,
    1416,  1836,    64,    65,    78,   353,  1296,  1023,  1111,  1739,
     448,   449,   450,   451,   452,   453,   454,   852,   854,   455,
     456,   457,   458,  1672,   354,   477,   478,  1633,  1852,   733,
    1417,  1433,   586,  1024,  1637,   862,    64,    65,  1689,  2760,
     945,   886,  2766,  1813,   486,  2763,  1816,   887,   919,  1030,
     618,  1881,   487,  2672,  2673,   358,  1116,  2676,  1418,  2678,
     837,  1419,   883,  1454,   359,  1641,   360,    64,    65,   833,
     337,  2683,  2684,  1350,   619,    79,  2688,  2689,  1661,  1112,
    2692,   621,  1351,  1352,  1667,  2693,  2694,  1297,   956,   109,
    1031,   915,  1479,   781,  1685,   888,  1315,  1480,   838,   622,
     708,  1686,   734,  1690,  2801,  1676,  2802,   975,   632,   633,
    1054,   889,  1030,  1041,   543,    64,    65,   109,  1481,  1482,
    1455,  1483,  1484,  1608,   890,   930,  1032,  1117,  1691,  1353,
     891,   892,  1485,   364,   677,  2728,   893,   587,  2729,  1701,
    1033,  1034,   395,  2732,  1486,  1487,   727,  1434,  1051,  2735,
    1132,   974,  1488,  1031,  2738,  1489,   715,   782,    80,   709,
    1137,  1681,  1113,   834,  1025,   109,  1143,   405,  1050,   946,
     947,  1063,  1490,  1420,   544,   623,   738,   741,   744,  1491,
    1492,   407,    55,  1493,  1042,   409,  1387,   894,   431,  1098,
    1099,  1100,  1101,  1316,  1662,  1102,  2510,  1104,   735,  1105,
    1668,  1107,  1148,  1421,   447,   728,   895,    81,  1765,  1133,
    1118,   896,  1388,   897,  1026,   717,   460,  1766,  1767,  1138,
    1032,  1677,  1924,    56,  2782,  1144,   783,  2785,  1311,  1114,
    1168,  1698,  1035,  1036,  1033,  1034,   898,   899,   835,   948,
    1027,    57,  1494,  1776,   900,  1389,  1134,   117,  2796,   949,
     950,  1390,  1777,  1778,   951,  1312,  1837,  1391,  1354,  1355,
     459,  1149,  2803,   901,  1768,  2804,  2805,  1043,  1159,  1160,
      58,  1161,  1163,  1165,  1166,   117,  1392,  1119,   470,   589,
     482,   952,   710,  1032,    64,    65,  1178,  1179,    59,    64,
      65,  1829,    60,  1183,  1184,  1495,  1393,  1033,  1034,  1779,
     484,  1496,  1682,  1551,    61,  1751,  1752,  1557,    83,   711,
     784,  1394,  1190,  1191,  1192,   785,  1497,  1422,  1291,   902,
      64,    65,   511,   117,   216,  1498,  1035,  1036,  1356,  1200,
    1201,  1202,   537,  1204,  1276,  1206,   538,  1207,  1357,  1358,
     217,  1395,   411,  1359,  1423,   590,  1838,  1424,  1798,  1799,
    1425,   311,  1753,  1499,  1500,   729,   547,  1683,  1210,  1135,
    1212,   556,  1552,  1563,   553,   723,  1558,  1571,   412,  1139,
    1360,  1215,  1699,   819,  1501,  1145,   575,  1426,  1396,  1222,
    2281,  2282,  2283,   554,  1224,   591,   822,   581,   539,  1035,
    1036,  1397,  1371,  1769,  1770,  1800,  1839,    64,    65,  1238,
    1240,   583,  1398,  1787,   368,  1427,   777,  1281,  1428,  1284,
    1287,  1150,  1788,  1789,   604,  1271,  1292,  1575,  1502,   605,
     520,  1298,  1564,  2081,   592,  1341,  1572,  1700,  1780,  1781,
    1399,    84,  1299,   609,   521,    64,    65,   312,  2098,  2099,
     238,  2021,  1400,  2094,  1401,  1402,    83,  1307,   295,   313,
     630,  2182,   926,    85,   613,   837,   522,    86,  2131,  1790,
      62,  2134,  1372,  1771,  1692,  1277,   625,  2192,   239,  2142,
     540,  1079,  2145,  1772,  1773,   523,  1576,   669,  1774,  1272,
    2153,  1754,  1755,  2156,  1403,  2100,  2107,  2108,    64,    65,
    2163,  1186,   524,   838,  1380,   525,  2211,  1182,  1782,  1187,
    1840,  1693,   541,   631,  1273,  1775,  1066,    87,  1783,  1784,
     636,  1089,  1553,  1785,  1444,  1278,  1559,  1652,  1544,  1545,
    1429,   526,   527,   668,  1801,  1802,   325,  1704,    64,    65,
     314,  1373,  1374,  2109,   671,  1470,   326,   240,  2116,  2117,
    1786,  1279,  1080,   315,  1476,    88,  1375,   296,    64,    65,
    1430,  1756,   241,    89,    90,   371,  1694,   247,  1504,   685,
    1505,  1757,  1758,   327,   692,  1506,  1507,  1508,  2598,    84,
      64,    65,  1565,   693,   528,  1514,  1573,  1431,  1515,   695,
    1518,  1274,   529,   699,  1286,  2118,  1376,  1653,  1791,  1792,
    1841,    85,   277,  1759,  1803,  2017,  1520,  1705,  1521,    64,
      65,  1833,  1524,  1525,  1804,  1805,  2284, -1237,   288,   242,
      64,  1591,   701,  1695,  2101,  2102,  1531,  1532,    93,   707,
     297,  1534,  1535,   713,  1106,  1081,  1577,   731,  1537,   298,
    1538,  1275,   732,  1540,    94,  1541,  1806,   756,  1595,   328,
    1842,   530,   531,   248,   755,    87,  1546,  1547,   769,  1194,
     759,   243,   767,    69,   435,   249,  1654,  1655,  1793,    70,
     774,   244,  2110,  2111,   799,   800,  1706,  1707,  1794,  1795,
     775,  1656,  1588,  1796,  1548,   329,  1589,   788,  1590,  1592,
     791,  1708,  1594,    88,  2103,    64,    65,    64,  1162,   433,
     250,    89,    90,   792,  2104,  2105,    71,  1600,   793,  1603,
    1797,  1605,  1606,  1607,  1609,  1644,  1645,   798,  1612,  1613,
      95,  1657,   801,   532,  2119,  2120,  1621,  1169,  1170,   330,
      72,  1709,   425,  1626,   803,   436,  2106,  1627,  1628,  1629,
     278,   417,  2112,    64,    65,   279,   251,   280,  1635,   824,
     331,  1638,  2113,  2114,    64,    65,   437,   438,   439,   252,
     825,    96,  1648,   415,   440,  1650,  1172,  1173,  1205,   832,
     501,   841,   509,  2271,   514,   518,    73,   441,    64,  1237,
     673,   843,   545,   442,  2115,   715,   332,  2238,  1646,    64,
      65,  1512,  1513,   443,  2121,    97,   848,   574,  2239,   850,
    2358,   864,   333,   426,  2122,  2123,  1873,  1874,  1703,  2367,
    2504,  1710,  1221,   879,  1711,  1712,   869,  1713,  2376,  1714,
      74,   874,   461,  1067,  2240,  1716,   702,  1717,   880,   881,
    2590,  1068,   882,  2593,  1723,  2595,  2124,  1069,   807,   808,
     462,   716,   905,  2304,   717,   906,    64,    65,  2607,  2608,
     907,   674,   415,   416,   417,   909,   911,   463,  1070,  2464,
     913,   916,  2241,   917,  2320,  2622,    64,    65,  1878,   464,
     921,   680,   925,   927,   928,  2477,    64,    65,   929,   940,
    2482,   718,  1071,   941,  1473,   953,   427,   465,   961,   963,
    1072,   466,   107,   964,    64,    65,  1835,   703,  1378,  1379,
      64,    65,  1851,   467,  1378,  1379,   971,   444,   973,  1830,
     972,  1832,  1834,  1380,  1029,  1038,   719,    64,    65,  1880,
    1045,  1378,  1379,  1040,  1046,  1095,  1097,  1073,  1096,   109,
    1108,  1110,   160,  1845,  1121,  1074,  1122,  1848,  1519,  1123,
    1380,    64,    65,   468,  1124,  1378,  1379,   161,  1526,   162,
    1126,  1125,  1127,  1128,  1129,  1130,  1147,  1180,  1152,  1153,
    1154,  1877,  1879,  1380,   720,  1155,  1171,   721,  1156,  1157,
    1158,  1887,  1174,  1188,   110,  1898,  1181,  1075,  1185,   163,
    1189,  1193,  1195,  1906,  1196,  1229,  1208,   164,  1076,  1209,
    1230,   722,  1231,  1234,   723,  1235,  1236,  1913,  1288,   683,
    1290,  1300,  1915,  1282,  1077,   724,  1917,  1304,  1920,  1921,
    1294,  1923,  1925,  1926,  2242,  1929,  2243,   818,  1932,  1933,
    1934,  1935,  1936,  1937,  1938,  1939,  1942,  1944,  1945,  1305,
     112,  1947,  1948,  1949,  1950,  1308,  1309,  1310,  1318,  1319,
    1323,  1956,  1957,  1320,  1321,   165,  1960,  1961,  1962,  1324,
    1325,  1964,  1965,  1326,  1533,  1618,  1619,  1327,   768,  1333,
    1334,  1382,  1336,  1337,  1968,  1969,  1343,  1970,  1971,  1345,
    2244,  1346,  1348,  1361,  1362,  1385,  1363,  1364,  1367,  1386,
    1368,  2586,  1369,  1407,  1413,  1435,  1432,   117,  1437,  2594,
    1438,  2496,   118,  1412,  1452,   166,  1436,  1457,  1456,  1458,
    2500,  1463,  2606,  1464,  1465,  1466,  1472,  2611,  1474,  1475,
     867,   167,   168,  1511,  1523,  1991,  1992,  1993,   169,  1529,
     170,  1995,  1530,  1536,  1539,  1542,  1997,  2000,  1543,  2002,
    2003,  2004,  1556,  2005,  2006,  1561,  2008,  1562,  1567,  2011,
    2012,  1568,   904,  1569,  1570,  1581,   171,  1579,  2015,  1580,
    1582,  2518,  1660,  1583,  2520,  2019,  1584,  2521,  1597,  2522,
    1598,  2024,  2025,  1599,  1610,  1611,  1604,  1617,  1622,  2027,
    1623,  1634,  1624,  1631,  1636,  2028,  1643,  1639,  1649,  -436,
    1651,  1640,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     851,  2056,   172,  1687,  1673,  1684,  1696,   857,  1697,  1663,
     858,  1702,  1715,  1678,  1721,   859,  1722,  1727,  1746,   861,
    1749,  1853,  1760,  1762,  1764,  1807,  1808,  1826,  1067,  2070,
    2071,  1809,  1810,  1831,  2073,  1814,  1068,  1815,  1012,  1817,
    2076,  1818,  1069,  1819,  1822,  1854,  1825,  1843,  1847,  1859,
    1864,  1865,  1013,  1862,  1863,  1844,  1866,  1868,  1846,  1314,
    1869,  1014,  1850,  1070,  1870,  1875,  1871,  1896,  1872,  1902,
    1916,  1015,  1918,  1922,  1953,  1930,  1931,  1966,  1946,  1967,
    1974,   920,  1972,  1876,  1973,  1976,  1977,  1071,  1978,  1882,
    1979,  1365,  1980, -1239,  1981,  1072,  1982,  1897,  1983,  1984,
    1987,  1901,  1016,  1985,  1986,  1988,  1989,  1990,  2010,  2007,
    1907,  1908,  2009,  2013,  2026,  2029, -1107,  2031,  2032,  2033,
    2034,  1914,  1017,  2065,  2066,  2067,  2068,  2072,  2293,  2074,
    2075,  2082,  1073,  2078,  2079,  2080,  2083,  2125,  2084,  2087,
    1074,  2089,  2759,  2090,  2091,  2095,  2096,  2177,  2097,  2178,
    2126,  2180,  2127,  1380,  2128,  2132,  2133,  2242,  2135,  2136,
    2137,  2138,  2139,  2143,  2144,  2147,  2146,  1018,  2148,  1380,
    2193,  2194,  2195,  2196,  2197,  2198,  2199,  2200,  2201,  2149,
    2150,  1103,  1075,  2154,  2155,  2491,  2157,  2158,  1109,  2159,
    2160,  1900,  2164,  1076,  2207,  2165,  2209,  2166,  1380,  2168,
    2169,  2171,  2172,  2216,  1019,  2174,  2181,  2183,  2187,  1077,
    2191,  2202,  2203,   806,  2204,  2217,  2205,  1211,   287,  2206,
    2468,  2210,  2263,  2223,  2268,  2269,  2272,  2278,  1020,  2280,
    2469,  2294,  2295,  2296,  2228,  2229,  2230,  2231,  2232,  2233,
    2234,  2235,  2236,  2237,  2299,  2344,  2250,  2251,  2252,  2253,
    2254,  2255,  2256,  2257,  2258,  2259,  2260,  2261,  1959,  2264,
    2307,  2265,  2266,  2267,  2310,  2311,  2312,  2313,  1021,  2339,
    1022,  2340,  2341,   219,  2342,  2346,  2348,  2277,  2351,  2632,
    2353,  2354,  2355,  2359,  2360,  2709,  2361,  2362,  2363,  2364,
    2698,  2368,  2369,  2645,  2370,  2371,  2372,  2373,   220,   432,
    2377,  2378,  2470,  2379,  1197,  2386,  2389,  2397,  1380,  2285,
    2400,  1199,  2286,  2403,  2287,  2404,  2289,  2406,  2409,  2291,
    2410,  2292,  2411,  2414,  2420,  2424,  2441,  2471,  2297,  2298,
    2472,   221,  2473,  2474,  2476,  2302,  2498,  2303,   222,  2499,
    2509,  2306,  2506,  2507,  2308,  2512,  2513,  2514,   223,   224,
    2515,  2517,  2523,  2703,  2524,   225,  2526,  1216,  2527,  2528,
    2537,  2541,  1220,  2548,  2698,  1223,  2554,  2558,  2561,   498,
    2568,   505,   508,  2576,   513,   517,  1450,  1232,   226,  2588,
     787,  2599,  2600,  2475,  2601,  2602,  2603,  2604,  2744,  2619,
    2626,  2628,  2630,  2347,  2631,   227,  2637,  2642,  2671,  2677,
    2743,  2680,   579,  2681,  2682,  2687,  2695,  2701,  2702,  2704,
     228,   229,  2712,  2722,  2730,  2740,  2733,   230,  2736,  2747,
     594,   599,  2745,  2746,  2755,  2758,  1131,  2768,  2769,  2776,
    2784,  2795,  1724,  1725,  1726,  2788,  2789,   231,  1517,  2791,
    2797,     0,  1728,  1729,  1730,  2412,  2798,  2799,  2800,  1741,
    1742,  1743,     0,     0,  1744,  1745,     0,  1747,  1748,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   679,     0,   232,     0,     0,     0,  1370,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1820,  1821,     0,
     700,  1823,  1824,     0,     0,     0,  2186,  2418,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2425,  2426,  2427,  2428,  2429,  2430,  2431,  2432,  2433,  2434,
    2435,     0,     0,   233,     0,     0,  2439,     0,     0,     0,
       0,     0,  2212,  2445,   234,     0,  2449,     0,     0,     0,
       0,     0,  2456,     0,     0,  2458,  2459,  2460,  2461,  2462,
    2463,  1380,  2465,  2466,  2467,     0,  1602,  2749,  2751,     0,
       0,     0,     0,   235,     0,     0,     0,  1380,  2478,  2479,
    2480,  2481,  1380,  2483,  2484,  2485,  2486,  2487,  2488,     0,
    2490,     0,  1380,  2494,  2495,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   802,     0,     0,
       0,     0,  2501,  1642,     0,     0,  2503,     0,   809,     0,
    2505,     0,     0,     0,  2508,     0,     0,   817,  1659,     0,
       0,     0,     0,     0,     0,  2214,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2218,  2219,     0,     0,     0,  2221,     0,     0,     0,     0,
       0,  2225,     0,  2227,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2529,     0,     0,     0,     0,     0,
    1596,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   853,     0,     0,   855,
     856,     0,     0,     0,     0,     0,     0,     0,     0,  2276,
    1620,     0,   860,     0,     0,     0,     0,   863,     0,     0,
       0,     0,     0,     0,     0,  1630,   875,   877,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2570,     0,     0,
       0,  2572,  2290,     0,     0,     0,     0,     0,     0,     0,
       0,  2573,  2574,     0,     0,     0,     0,  1828,  2578,     0,
       0,     0,     0,     0,     0,  2581,     0,     0,     0,     0,
       0,     0,     0,  1380,     0,  2587,     0,     0,  2591,  2592,
       0,  1380,   922,   923,   924,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1380,     0,     0,  2609,  2610,  1380,
    2612,  2613,  2614,  2615,  2616,     0,     0,  2618,     0,     0,
       0,  2621,     0,     0,     0,     0,  1884,     0,     0,  1886,
       0,     0,  2629,     0,     0,     0,     0,  2633,     0,     0,
    1904,     0,     0,     0,     0,     0,     0,     0,  1910,     0,
       0,  1065,     0,     0,     0,  1912,  2646,     0,     0,     0,
       0,  2077,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2085,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2088,     0,     0,     0,     0,     0,
       0,  2657,     0,  1331,     0,     0,     0,  2662,     0,  2664,
       0,     0,     0,     0,     0,  2668,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1380,  2675,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2497,     0,     0,     0,     0,  1380,  2686,  2717,     0,
       0,  2690,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2173,     0,     0,     0,
    2708,  1899,     0,     0,  2442,  2443,  2444,     0,     0,  2448,
       0,  2450,  2451,     0,     0,  2455,     0,  2457,     0,     0,
       0,     0,     0,     0,     0,  1999,     0,     0,     0,  2720,
       0,     0,     0,     0,     0,  2725,     0,  2727,     0,  1198,
       0,     0,     0,     0,  2731,     0,     0,     0,     0,  2734,
       0,  1203,     0,     0,  2737,     0,     0,     0,     0,     0,
       0,     0,  1952,     0,     0,     0,     0,     0,  1958,     0,
       0,     0,     0,     0,     0,  2748,  2750,     0,     0,  2502,
       0,     0,     0,     0,     0,     0,     0,     0,  1213,  1214,
    2041,     0,     0,     0,  1380,     0,     0,  1380,  2761,     0,
    2047,  2762,     0,  1380,  2764,  2052,     0,     0,     0,     0,
       0,     0,  1233,     0,     0,  2770,  2771,  2772,  2773,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2783,     0,
       0,  2786,     0,     0,     0,     0,     0,     0,  2790,     0,
    2792,     0,     0,     0,     0,     0,     0,  1996,     0,     0,
       0,     0,     0,  2001,     0,     0,     0,     0,     0,     0,
       0,  1303,  1380,     0,  1380,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2605,  2016,     0,     0,
       0,     0,     0,     0,  2022,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2623,     0,     0,     0,
    2627,  2305,     0,     0,     0,     0,     0,     0,     0,     0,
    2036,     0,     0,     0,     0,  2315,  2316,  2317,  2043,     0,
    2319,     0,  2321,  2322,     0,     0,  2324,  2325,  2326,     0,
       0,  2328,  2329,  2579,     0,  2332,  1449,  2334,  2335,     0,
    2337,  2582,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2349,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2185,     0,     0,  2189,     0,     0,     0,     0,     0,
    2617,     0,     0,     0,     0,     0,     0,     0,  1510,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1516,     0,
    2381,  2382,  2383,  2384,  2385,     0,  2387,  2388,     0,     0,
    1740,  2392,  2393,  2394,  2395,  2396,     0,  2398,  2399,     0,
       0,     0,  1750,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1811,  1812,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2413,     0,     0,  2417,     0,     0,
       0,     0,  2421,     0,     0,     0,  2422,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2175,
       0,     0,     0,     0,     0,     0,  2438,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1593,
       0,  2190,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1601,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2213,     0,  2215,     0,     0,
    1625,     0,     0,  2767,     0,     0,     0,     0,     0,     0,
       0,  1632,     0,     0,  2309,  2220,     0,  2222,     0,     0,
       0,  2224,     0,  2226,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1658,  2511,
       0,     0,     0,  1666,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2345,
       0,     0,     0,  2270,     0,     0,  2274,  2275,     0,  2519,
       0,     0,     0,     0,     0,  2279,     0,     0,     0,     0,
       0,     0,     0,     0,  2530,     0,     0,  2532,  2533,  2534,
    2535,  2536,     0,  2538,  2539,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2543,  2544,  2545,  2546,  2547,
    2288,  2549,  2550,     0,  2552,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2555,  2556,  2300,     0,     0,     0,
       0,     0,     0,     0,     0,  2559,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2314,     0,     0,
       0,     0,  2318,  2567,     0,     0,     0,     0,  2323,     0,
       0,     0,     0,  2327,  2416,     0,     0,  2330,     0,     0,
    2333,     0,     0,  2336,  2575,  2338,     0,  1827,     0,     0,
       0,  2343,     0,     0,  2580,     0,     0,     0,     0,     0,
    2583,  2584,     0,  2437,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2447,     0,     0,     0,  1849,     0,  2454,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1883,     0,     0,  1885,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1903,  1905,     0,     0,     0,     0,     0,     0,  1909,     0,
       0,     0,     0,     0,     0,  1911,     0,     0,     0,     0,
       0,     0,     0,     0,  2648,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2651,     0,  2652,     0,     0,
       0,  2654,  2086,     0,     0,     0,     0,     0,     0,     0,
    2092,  2093,     0,  2658,     0,  1951,     0,     0,  1954,  1955,
       0,     0,     0,     0,     0,  2129,  2130,     0,  1963,     0,
       0,     0,     0,  2670,     0,     0,  2140,  2141,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2151,  2152,     0,
       0,     0,     0,     0,     0,     0,     0,  2161,  2162,     0,
       0,     0,     0,  2167,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2170,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2489,     0,     0,     0,     0,     0,
       0,  2713,     0,     0,  2714,     0,     0,  2715,  1994,  2716,
       0,     0,     0,     0,     0,  1998,     0,  2718,     0,  2719,
    2566,  2721,     0,  2723,     0,  2724,     0,  2726,     0,     0,
       0,     0,     0,  2014,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2023,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2030,     0,
       0,     0,     0,  2035,     0,  2754,  2037,     0,  2038,  2039,
    2040,  2042,     0,     0,  2044,     0,     0,  2045,     0,     0,
    2046,  2048,     0,  2049,  2050,  2051,  2053,     0,  2054,  2055,
       0,     0,     0,     0,  2057,  2058,  2059,     0,     0,  2060,
    2061,     0,     0,     0,     0,  2062,  2063,     0,     0,     0,
    2064,     0,     0,  2787,     0,  2069,     0,     0,     0,     0,
       0,     0,     0,     0,   637,   638,     0,     0,     0,     0,
       0,     0,     0,     0,  2564,     0,     0,     0,     0,     0,
       0,  2569,     0,     0,     0,  2571,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2577,     0,  2660,     0,     0,     0,     0,     0,
       0,     0,  2666,     0,     0,     0,     0,     0,     0,     0,
     639,     0,     0,     0,     0,     0,   640,     0,     0,     0,
       0,     0,     0,   641,     0,   642,     0,     0,     0,     0,
     643,     0,     0,   644,     0,     0,     0,     0,     0,   645,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   646,
       0,     0,     0,     0,     0,   647,     0,     0,     0,     0,
       0,     0,     0,     0,   648,  2176,     0,     0,     0,  2179,
       0,     0,     0,  2350,     0,     0,     0,     0,     0,     0,
     649,  2184,     0,  2352,  2188,     0,     0,  2356,  2357,     0,
       0,     0,     0,     0,     0,     0,  2365,  2366,     0,     0,
     650,     0,     0,     0,     0,  2374,  2375,     0,     0,     0,
       0,  2380,     0,     0,  2208,   651,     0,     0,     0,     0,
       0,  2390,  2391,     0,   652,   653,     0,     0,     0,     0,
       0,     0,  2401,  2402,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2405,     0,   654,     0,     0,  2757,  2679,
       0,     0,  2407,     0,  2408,     0,   106,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   655,     0,     0,     0,
       0,   107,     0,     0,     0,     0,  2262,     0,     0,     0,
     656,  2778,   657,     0,  2781,     0,     0,     0,     0,     0,
       0,     0,   108,     0,     0,   658,     0,     0,     0,     0,
     659,     0,     0,     0,     0,     0,   660,     0,   109,     0,
       0,     0,     0,   661,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   662,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2739,     0,   663,   664,     0,   665,     0,
       0,  2301,     0,   110,     0,     0,     0,     0,     0,     0,
       0,     0,  2752,  2753,     0,     0,     0,     0,     0,     0,
       0,   111,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   666,     0,
       0,     0,  2331,     0,     0,     0,     0,     0,    64,    65,
       0,     0,     0,     0,     0,     0,     0,     0,  2779,   112,
       0,     0,     0,     0,   107,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2793,
       0,     0,  2794,     0,   282,     0,     0,  2531,     0,     0,
       0,     0,     0,     0,     0,     0,   113,  2540,     0,     0,
       0,   109,    64,    65,   114,     0,  2542,     0,     0,     0,
     115,   116,     0,     0,     0,  2551,   117,     0,   107,     0,
       0,   118,  2553,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2557,     0,     0,     0,     0,     0,  2560,
       0,     0,  2562,     0,     0,  2563,   110,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2415,     0,     0,  2419,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2423,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2436,     0,   119,  2440,     0,     0,     0,
     110,     0,   112,  2446,     0,     0,     0,     0,  2452,  2453,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   283,
       0,     0,     0,     0,   149,     0,     0,     0,   150,   151,
       0,     0,     0,     0,     0,     0,   112,     0,     0,   117,
       0,     0,     0,     0,   118,     0,     0,     0,     0,     0,
       0,     0,     0,  2647,     0,   284,     0,  2649,     0,     0,
       0,     0,     0,     0,  2650,     0,     0,     0,     0,     0,
    2653,     0,     0,     0,  2655,     0,     0,  2656,  2516,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   118,     0,
       0,     0,     0,     0,     0,     0,     0,  2525,     0,     0,
       0,     0,     0,     0,     0,   285,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2565,     0,     0,     0,     0,     0,     0,     0,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,     0,     0,     0,     0,
     516,  2585,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2597,     0,   107,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   876,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   107,     0,     0,     0,     0,     0,     0,
       0,     0,   109,     0,     0,     0,     0,     0,  1167,     0,
       0,     0,     0,  2641,     0,     0,     0,     0,     0,     0,
       0,     0,  2644,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   110,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2659,  2661,     0,  2663,     0,     0,
       0,     0,  2665,  2667,     0,   110,     0,  2669,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   112,     0,     0,     0,     0,     0,     0,
       0,  2691,     0,     0,     0,     0,   342,     0,     0,     0,
       0,     0,     0,   343,     0,     0,     0,     0,     0,     0,
       0,   112,     0,  2710,     0,     0,     0,     0,  2711,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     117,     0,     0,     0,     0,   118,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   118,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   954,     0,     0,     0,
       0,   955,     0,     0,     0,     0,     0,     0,  2756,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2765,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2777,     0,     0,  2780,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   344,
       0,   345,     0,     0,     0,     0,     0,     0,     0,  1339,
       0,     0,     0,     0,     0,     0,   595,   107,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,     0,     0,     0,     0,
       0,   107,     0,     0,     0,     0,   596,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   489,   490,   110,
       0,   491,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   597,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   492,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   110,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   112,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,  1340,     0,     0,     0,     0,   112,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   493,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   118,   494,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   495,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   118,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
       0,     0,     0,     0,   598,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   496,     0,     0,     0,     0,     0,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,     0,     0,     0,     0,     0,
       0,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,     0,
     497,   976,   977,   978,     0,     0,  1241,  1242,  1243,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   979,
     980,     0,     0,   981,  1244,  1245,   982,     0,  1246,   107,
       0,     0,     0,   983,     0,  1247,     0,   984,  1248,     0,
       0,     0,  1249,     0,     0,   985,   986,     0,     0,     0,
    1250,  1251,     0,   987,   988,     0,     0,   107,  1252,     0,
       0,     0,     0,     0,     0,     0,   109,     0,     0,     0,
     989,     0,     0,     0,     0,     0,   990,     0,     0,     0,
     991,   992,     0,     0,   993,  1253,  1254,     0,     0,  1255,
       0,     0,     0,     0,   109,     0,     0,     0,     0,     0,
       0,   994,     0,     0,     0,     0,  1256,     0,     0,     0,
     107,   110,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   995,     0,     0,     0,     0,  1257,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   110,
       0,     0,     0,   996,     0,     0,     0,     0,  1258,     0,
     503,     0,     0,     0,     0,     0,     0,  1259,     0,     0,
       0,     0,     0,     0,     0,     0,   997,   112,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   110,     0,   998,   112,   999,     0,     0,  1260,
       0,  1261,  1000,  1001,     0,     0,     0,  1262,  1263,     0,
       0,     0,     0,     0,     0,     0,  1002,  1003,     0,     0,
       0,     0,  1264,     0,   117,     0,  1004,  1005,     0,   118,
       0,     0,  1265,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   112,     0,
       0,     0,   117,  1006,     0,  1007,     0,   118,  1266,     0,
    1267,     0,     0,     0,     0,     0,     0,  1008,     0,  1009,
    1268,     0,     0,     0,     0,  1010,     0,     0,     0,     0,
    1269,     0,     0,     0,     0,     0,     0,   507,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   107,     0,     0,     0,     0,     0,     0,  1011,
     118,     0,     0,     0,  1270,     0,     0,     0,     0,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,     0,     0,   504,     0,     0,
       0,     0,     0,     0,   110,     0,     0,     0,     0,     0,
       0,   107,     0,     0,     0,     0,     0,     0,     0,     0,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,  1302,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     112,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   110,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   118,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   112,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   118,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
       0,     0,     0,     0,     0,     1,     0,     0,     2,     0,
       3,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     4,     0,     0,     0,     0,     5,     6,
       0,     7,     8,     9,     0,     0,     0,     0,     0,     0,
       0,    10,     0,     0,     0,     0,     0,     0,    11,     0,
      12,    13,     0,     0,     0,     0,     0,     0,     0,    14,
      15,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,    16,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    17,     0,     0,     0,    18,     0,     0,    19,     0,
       0,     0,     0,    20,    21,     0,     0,     0,     0,     0,
      22,     0,     0,     0,     0,     0,    23,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    24,
       0,     0,    25,    26,    27,     0,     0,    28,    29,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    30,     0,     0,     0,     0,     0,     0,     0,     0,
     176,     0,     0,   177,     0,   178,    31,    32,    33,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      34,     0,    35,     0,   179,     0,   180,   181,   182,    36,
       0,     0,    37,     0,     0,    38,   183,    39,   184,    40,
       0,     0,     0,   185,    41,   186,   187,   188,     0,     0,
       0,     0,   189,     0,   190,     0,     0,    42,     0,     0,
       0,     0,     0,    43,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    44,
      45,     0,     0,   191,     0,     0,     0,     0,     0,     0,
       0,    46,     0,    47,     0,     0,     0,     0,     0,    48,
     192,     0,    49,    50,     0,     0,     0,     0,     0,     0,
       0,   193,   194,     0,     0,   195,     0,     0,     0,   196,
       0,   197,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    51,     0,     0,     0,     0,     0,    52,
       0,     0,   198,   199,     0,     0,   200,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   201,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   202,   203,     0,     0,     0,     0,     0,     0,   204,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   205,     0,   206,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   207,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   208,   209,     0,     0,     0,     0,
       0,     0,     0,   210,     0,     0,     0,     0,     0,     0,
     211,     0,     0,     0,     0,     0,   212,     0,   213,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   214
};

static const yytype_int16 yycheck[] =
{
       3,    50,   657,    14,  1627,  1425,  1629,     4,    11,   480,
     652,   653,  1124,     5,  1126,     5,     3,     4,     4,     4,
       5,     3,     4,     5,     3,     4,     4,    32,     5,    32,
       4,     5,     4,    57,    32,     0,    61,    40,  2525,    32,
    1152,  1153,  1154,    27,     3,     4,    49,     5,     5,    52,
      61,    21,    55,     3,     4,    17,    59,    36,    27,    62,
      20,    40,     4,    66,    67,     4,   121,    70,    17,    17,
      73,    74,   977,    56,    77,     4,    16,    36,    81,    48,
     133,    66,    51,    86,     3,     4,    36,     5,     3,     4,
      66,    97,   121,    62,    66,     4,    99,   211,   101,   102,
     103,   104,     4,    88,   193,     3,     4,    21,    54,     3,
       4,     4,     3,     4,    13,   948,    85,   120,   951,     3,
       4,    40,    99,    87,     6,    14,    15,    66,   105,     4,
       3,     4,   111,   102,   119,   968,    21,   103,     5,     5,
      59,   150,     3,     4,    90,   119,    50,   119,   857,   858,
     859,    17,   155,   132,   139,    87,    66,    66,   247,   282,
      46,   193,     3,     4,   134,     3,     4,   138,   121,   166,
       3,     4,    61,   132,    33,    37,   179,    37,   229,   190,
     119,   184,   132,   167,     5,    47,   241,    16,   302,    21,
     144,   244,   111,   157,   140,    99,    21,   159,    59,     4,
     224,    14,    15,    21,   108,   176,   182,   194,   237,    66,
     119,   920,    74,    61,   238,   194,     4,   202,    21,     3,
       4,   187,   254,   208,   209,   157,   119,    64,   202,    66,
     202,   214,   136,    88,   208,   209,   208,   209,   120,     3,
       4,   244,   897,   292,   119,    78,    27,   256,    61,   260,
      27,   193,   258,   237,     4,   280,   196,   260,   261,   270,
      27,   210,   210,   202,   193,  2752,  2753,   237,    56,   208,
     209,   274,   187,   233,   279,   194,   300,   267,   303,   282,
     283,   279,   285,   286,   237,   288,   279,   245,   150,   187,
     189,   302,     5,   202,   264,   298,   280,   243,   284,   208,
     209,   190,   191,   290,   307,   308,   284,   225,   293,   202,
     302,   290,   309,   289,   299,   208,   209,   282,   247,   293,
     302,   293,   299,   237,   186,   299,   283,   202,   331,   332,
     333,   290,   335,   208,   209,   309,   339,   340,   198,   172,
     290,   243,   291,   291,    14,   182,  1001,   350,   351,   187,
       4,    21,   237,   356,   293,   193,    26,   342,   361,   362,
     345,   346,   347,    33,  1019,   206,   369,   286,   342,   372,
     342,   260,   346,   347,   346,   347,   243,   190,   191,   348,
    2591,   270,   271,   269,   293,   300,   389,   390,   292,   251,
     167,   284,   230,   396,   397,   398,   290,   400,  2609,   290,
     293,    71,   300,   342,   117,   237,   290,   346,   347,  1051,
    2466,   414,   237,   302,   247,   418,   254,   290,   293,   237,
     423,   424,   425,   426,   427,   428,   214,   430,   343,   344,
     433,   434,   280,   342,   237,    63,  2492,   346,   347,   223,
    1082,   303,   223,   446,  1556,   343,   344,   260,     4,   342,
      22,   131,   289,   346,   347,   303,   223,   270,   271,   223,
     237,   259,   300,   168,     5,     4,     5,   342,   266,    44,
     124,   346,   347,    14,    15,   229,   104,    49,  2697,   192,
      52,  1386,     3,     4,    40,     0,    17,     4,    40,   302,
     160,   161,   162,   163,   164,   165,   166,   500,   501,   169,
     170,   171,   172,   280,     5,   343,   344,  1216,  1413,    34,
      82,   121,    87,    30,  1223,   518,     3,     4,   223,  2730,
      61,    60,  2741,  1356,   169,  2736,  1359,    66,   577,    63,
     243,  1436,   177,  2589,  2590,   266,    40,  2593,   110,  2595,
     138,   113,   545,   223,     5,     4,     4,     3,     4,    78,
     204,  2607,  2608,     5,   267,   111,  2612,  2613,   121,   111,
    2616,    93,    14,    15,   121,  2621,  2622,    98,   617,    56,
     104,   574,    22,    30,   259,   114,   165,    27,   176,   111,
      61,   266,   107,   288,  2795,   121,  2797,   636,   258,   259,
     124,   130,    63,    40,     5,     3,     4,    56,    48,    49,
     280,    51,    52,    59,   143,   608,   234,   111,  1263,    61,
     149,   150,    62,     5,   284,  2671,   155,   192,  2674,  1274,
     248,   249,     5,  2679,    74,    75,    61,   237,   256,  2685,
      61,   634,    82,   104,  2690,    85,    61,    94,   194,   120,
      61,    27,   194,   172,   161,    56,    61,    31,   651,   190,
     191,   654,   102,   225,    65,   187,   326,   327,   328,   109,
     110,     5,    12,   113,   111,     5,    40,   206,   194,   672,
     673,   674,   675,   262,   237,   678,  2299,   680,   203,   682,
     237,   684,    61,   255,     4,   120,   225,   243,     5,   120,
     194,   230,    66,   232,   211,   120,    66,    14,    15,   120,
     234,   237,   223,    53,  2760,   120,   163,  2763,   157,   261,
     759,    27,   340,   341,   248,   249,   255,   256,   247,   260,
     237,    71,   172,     5,   263,    99,   157,   214,  2784,   270,
     271,   105,    14,    15,   275,   184,   105,   111,   190,   191,
     117,   120,  2798,   282,    61,  2801,  2802,   194,   751,   752,
     100,   754,   755,   756,   757,   214,   130,   261,   118,   150,
     282,   302,   243,   234,     3,     4,   769,   770,   118,     3,
       4,     5,   122,   776,   777,   225,   150,   248,   249,    61,
     169,   231,   168,    61,   134,    14,    15,    61,    28,   270,
     247,   165,   795,   796,   797,   252,   246,    22,   206,   338,
       3,     4,    33,   214,    83,   255,   340,   341,   260,   812,
     813,   814,     5,   816,    30,   818,    89,   820,   270,   271,
      99,   195,     5,   275,    49,   216,   195,    52,    14,    15,
      55,    26,    61,   283,   284,   270,    16,   223,   841,   270,
     843,   281,   120,    61,    66,   270,   120,    61,    31,   270,
     302,   854,   168,   432,   304,   270,    89,    82,   232,   862,
    1972,  1973,  1974,   230,   867,   256,   445,    72,     6,   340,
     341,   245,    82,   190,   191,    61,   245,     3,     4,   882,
     883,    31,   256,     5,   123,   110,    12,   890,   113,   892,
     893,   270,    14,    15,     5,    66,   899,    61,   348,     4,
      45,   904,   120,  1736,   295,   954,   120,   223,   190,   191,
     284,   151,   915,     4,    59,     3,     4,   112,    14,    15,
      88,  1630,   296,  1756,   298,   299,    28,   930,    70,   124,
       4,  1836,   602,   173,     5,   138,    81,   177,  1771,    61,
     290,  1774,   152,   260,   131,   161,     5,  1852,   116,  1782,
      88,    40,  1785,   270,   271,   100,   120,     4,   275,   130,
    1793,   190,   191,  1796,   338,    61,    14,    15,     3,     4,
    1803,     4,   117,   176,   977,   120,  1881,    12,   260,    12,
     105,   168,   120,     5,   155,   302,   656,   227,   270,   271,
       5,   661,   270,   275,   997,   211,   270,    82,    42,    43,
     225,   146,   147,     5,   190,   191,    37,    82,     3,     4,
     205,   221,   222,    61,     5,  1018,    47,   185,    14,    15,
     302,   237,   111,   218,  1027,   265,   236,   169,     3,     4,
     255,   260,   200,   273,   274,   123,   223,    26,  1041,     4,
    1043,   270,   271,    74,     4,  1048,  1049,  1050,  2468,   151,
       3,     4,   270,     4,   199,  1058,   270,   282,  1061,     4,
    1063,   232,   207,     5,    17,    61,   276,   152,   190,   191,
     195,   173,   203,   302,   260,   177,  1079,   152,  1081,     3,
       4,     5,  1085,  1086,   270,   271,  1991,     0,    32,   257,
       3,     4,     4,   280,   190,   191,  1099,  1100,    83,    97,
     242,  1104,  1105,   120,   683,   194,   270,     5,  1111,   251,
    1113,   282,     4,  1116,    99,  1118,   302,     4,  1167,   150,
     245,   266,   267,   112,   267,   227,   170,   171,   123,   799,
       4,   299,     4,   187,    35,   124,   221,   222,   260,   193,
       4,   309,   190,   191,     4,     5,   221,   222,   270,   271,
       5,   236,  1155,   275,   198,   186,  1159,     4,  1161,  1162,
       4,   236,  1165,   265,   260,     3,     4,     3,     4,   113,
     159,   273,   274,     4,   270,   271,   230,  1180,     4,  1182,
     302,  1184,  1185,  1186,  1187,    24,    25,     4,  1191,  1192,
     175,   276,     5,   338,   190,   191,  1199,     4,     5,   230,
     254,   276,    40,  1206,     5,   106,   302,  1210,  1211,  1212,
     341,    11,   260,     3,     4,   346,   205,   348,  1221,     5,
     251,  1224,   270,   271,     3,     4,   127,   128,   129,   218,
     266,   216,  1235,     9,   135,  1238,     4,     5,   817,   169,
     184,     4,   186,  1952,   188,   189,   300,   148,     3,     4,
      40,     4,   196,   154,   302,    61,   287,    55,    97,     3,
       4,     4,     5,   164,   260,   250,   177,   211,    66,   169,
    2103,     4,   303,   111,   270,   271,     4,     5,  1281,  2112,
      59,  1284,   861,     5,  1287,  1288,   196,  1290,  2121,  1292,
     344,   196,    53,    91,    92,  1298,    40,  1300,     5,     4,
    2460,    99,   196,  2463,  1307,  2465,   302,   105,   420,   421,
      71,   117,   188,  2022,   120,   188,     3,     4,  2478,  2479,
      66,   111,     9,    10,    11,    66,    66,    88,   126,  2234,
     223,     5,   130,   224,  2043,  2495,     3,     4,     5,   100,
       5,   285,     4,     4,     4,  2250,     3,     4,   196,    87,
    2255,   157,   150,     5,  1024,    87,   194,   118,     5,     4,
     158,   122,    19,     4,     3,     4,     5,   111,     7,     8,
       3,     4,     5,   134,     7,     8,     5,   278,     4,  1382,
       5,  1384,  1385,  1386,     5,    99,   192,     3,     4,     5,
       4,     7,     8,    17,     5,    17,     4,   195,    17,    56,
       4,     4,    29,  1406,     4,   203,    97,  1410,  1078,     5,
    1413,     3,     4,   174,     5,     7,     8,    44,  1088,    46,
       4,    87,     5,     5,    87,     5,     4,    12,     5,     5,
       4,  1434,  1435,  1436,   240,     4,     4,   243,     5,     5,
       5,  1444,     4,     4,   101,  1448,     5,   245,    12,    76,
       4,     4,     4,  1456,     4,   166,     5,    84,   256,     5,
       5,   267,     4,     4,   270,     5,     4,  1470,   255,   287,
     255,     5,  1475,    20,   272,   281,  1479,     4,  1481,  1482,
     284,  1484,  1485,  1486,   282,  1488,   284,   431,  1491,  1492,
    1493,  1494,  1495,  1496,  1497,  1498,  1499,  1500,  1501,     5,
     157,  1504,  1505,  1506,  1507,     5,     5,     5,     4,     4,
     268,  1514,  1515,     5,     5,   142,  1519,  1520,  1521,   268,
       5,  1524,  1525,     5,  1103,  1195,  1196,     5,   346,     4,
       4,   237,     5,     5,  1537,  1538,     5,  1540,  1541,     5,
     338,     5,     5,     4,     4,   237,     5,     5,     4,   105,
       5,  2456,     5,     5,   105,   237,    40,   214,     5,  2464,
     210,  2270,   219,   138,    40,   192,   105,   210,   241,     5,
    2279,     4,  2477,     5,     5,   210,   210,  2482,     4,     4,
     524,   208,   209,     5,     5,  1588,  1589,  1590,   215,     5,
     217,  1594,     5,     4,   111,   111,  1599,  1600,     4,  1602,
    1603,  1604,     5,  1606,  1607,     5,  1609,     5,     4,  1612,
    1613,     5,   556,     5,     4,     4,   243,     5,  1621,     5,
       5,  2330,   237,     5,  2333,  1628,     4,  2336,     5,  2338,
       5,  1634,  1635,    12,     6,     4,    12,     5,     4,  1642,
       4,  1220,     4,     4,     4,  1648,     5,    38,     4,     0,
       5,    38,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     498,  1684,   309,   121,   138,   168,     4,   505,   245,   237,
     508,   206,   196,   237,     4,   513,     4,     4,     4,   517,
       4,   237,     5,     5,     5,   268,     5,  1377,    91,  1712,
    1713,     5,     5,  1383,  1717,     4,    99,     4,    66,     5,
    1723,     4,   105,     4,     4,   237,     5,     5,     5,   237,
       4,     4,    80,   306,   306,  1405,     4,     4,  1408,   935,
       4,    89,  1412,   126,     4,     4,   306,     4,   306,     5,
       5,    99,   223,   223,     5,   223,   223,     5,   223,     4,
       4,   579,     5,  1433,     5,     5,     5,   150,     4,  1439,
       4,   967,     4,     0,     5,   158,     5,  1447,     4,     4,
       4,  1451,   130,     5,     5,     5,     5,     4,     6,     5,
    1460,  1461,     4,     4,     4,     4,   282,     5,     5,     5,
       5,  1471,   150,     5,     5,     5,     5,     4,    12,     5,
       4,     4,   195,     5,     5,     5,     4,   268,     5,     4,
     203,     5,  2727,     5,     5,     4,     4,  1830,     5,  1832,
       5,  1834,     5,  1836,     5,     4,     4,   282,     5,   268,
       5,     5,     5,     4,     4,   268,     5,   195,     5,  1852,
    1853,  1854,  1855,  1856,  1857,  1858,  1859,  1860,  1861,     5,
       5,   679,   245,     4,     4,   302,     5,     5,   686,     5,
       5,  1450,     4,   256,  1877,     4,  1879,     5,  1881,     4,
       4,     4,     4,  1886,   232,     5,     5,     5,     5,   272,
       5,     4,     4,   419,     5,  1898,     4,   841,    32,     4,
     349,     5,     5,  1906,     4,     4,     4,     4,   256,     4,
     349,     5,     5,     4,  1917,  1918,  1919,  1920,  1921,  1922,
    1923,  1924,  1925,  1926,     4,     4,  1929,  1930,  1931,  1932,
    1933,  1934,  1935,  1936,  1937,  1938,  1939,  1940,  1517,  1942,
       5,  1944,  1945,  1946,     5,     5,     5,     5,   296,     5,
     298,     5,     5,    19,     5,     5,     4,  1960,     4,     6,
       5,     5,     5,     4,     4,  2633,     5,     5,     5,     5,
    2625,     4,     4,  2528,     5,     5,     5,     5,    44,   113,
       4,     4,   349,     5,   802,     4,     4,     4,  1991,  1992,
       4,   809,  1995,     4,  1997,     4,  1999,     4,     4,  2002,
       4,  2004,     4,     4,     4,     4,     4,   349,  2011,  2012,
     349,    77,   349,   349,   349,  2018,     4,  2020,    84,     4,
       4,  2024,     5,     5,  2027,     5,     4,     4,    94,    95,
       5,     5,     4,     6,     5,   101,     5,   855,     5,     4,
       4,     4,   860,     4,  2699,   863,     4,     4,     4,   183,
       4,   185,   186,     4,   188,   189,  1000,   875,   124,     4,
     376,     5,     4,  2245,     5,     5,     5,     4,  2699,     5,
       5,     5,     5,  2076,     4,   141,     5,     5,     4,     4,
     349,     5,   216,     4,     4,     4,  2623,     5,     5,     4,
     156,   157,     4,     4,     4,  2695,     5,   163,     4,     4,
     234,   235,     5,     5,     4,     4,   718,     5,     5,     5,
       4,     4,  1308,  1309,  1310,     5,     5,   183,  1062,     5,
       4,    -1,  1318,  1319,  1320,  2174,     5,     5,     5,  1325,
    1326,  1327,    -1,    -1,  1330,  1331,    -1,  1333,  1334,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   285,    -1,   219,    -1,    -1,    -1,   975,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1363,  1364,    -1,
     304,  1367,  1368,    -1,    -1,    -1,  1846,  2180,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2193,  2194,  2195,  2196,  2197,  2198,  2199,  2200,  2201,  2202,
    2203,    -1,    -1,   269,    -1,    -1,  2209,    -1,    -1,    -1,
      -1,    -1,  1882,  2216,   280,    -1,  2219,    -1,    -1,    -1,
      -1,    -1,  2225,    -1,    -1,  2228,  2229,  2230,  2231,  2232,
    2233,  2234,  2235,  2236,  2237,    -1,  1180,  2708,  2709,    -1,
      -1,    -1,    -1,   309,    -1,    -1,    -1,  2250,  2251,  2252,
    2253,  2254,  2255,  2256,  2257,  2258,  2259,  2260,  2261,    -1,
    2263,    -1,  2265,  2266,  2267,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   411,    -1,    -1,
      -1,    -1,  2285,  1227,    -1,    -1,  2289,    -1,   422,    -1,
    2293,    -1,    -1,    -1,  2297,    -1,    -1,   431,  1242,    -1,
      -1,    -1,    -1,    -1,    -1,  1884,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1899,  1900,    -1,    -1,    -1,  1904,    -1,    -1,    -1,    -1,
      -1,  1910,    -1,  1912,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2347,    -1,    -1,    -1,    -1,    -1,
    1168,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   500,    -1,    -1,   503,
     504,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1958,
    1198,    -1,   516,    -1,    -1,    -1,    -1,   521,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1213,   530,   531,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2420,    -1,    -1,
      -1,  2424,  2001,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2434,  2435,    -1,    -1,    -1,    -1,  1381,  2441,    -1,
      -1,    -1,    -1,    -1,    -1,  2448,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2456,    -1,  2458,    -1,    -1,  2461,  2462,
      -1,  2464,   596,   597,   598,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2477,    -1,    -1,  2480,  2481,  2482,
    2483,  2484,  2485,  2486,  2487,    -1,    -1,  2490,    -1,    -1,
      -1,  2494,    -1,    -1,    -1,    -1,  1440,    -1,    -1,  1443,
      -1,    -1,  2505,    -1,    -1,    -1,    -1,  2510,    -1,    -1,
    1454,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1462,    -1,
      -1,   655,    -1,    -1,    -1,  1469,  2529,    -1,    -1,    -1,
      -1,  1727,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1740,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1750,    -1,    -1,    -1,    -1,    -1,
      -1,  2564,    -1,   947,    -1,    -1,    -1,  2570,    -1,  2572,
      -1,    -1,    -1,    -1,    -1,  2578,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2591,  2592,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2271,    -1,    -1,    -1,    -1,  2609,  2610,  2657,    -1,
      -1,  2614,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1822,    -1,    -1,    -1,
    2633,  1449,    -1,    -1,  2213,  2214,  2215,    -1,    -1,  2218,
      -1,  2220,  2221,    -1,    -1,  2224,    -1,  2226,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1599,    -1,    -1,    -1,  2662,
      -1,    -1,    -1,    -1,    -1,  2668,    -1,  2670,    -1,   803,
      -1,    -1,    -1,    -1,  2677,    -1,    -1,    -1,    -1,  2682,
      -1,   815,    -1,    -1,  2687,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1510,    -1,    -1,    -1,    -1,    -1,  1516,    -1,
      -1,    -1,    -1,    -1,    -1,  2708,  2709,    -1,    -1,  2288,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   852,   853,
    1664,    -1,    -1,    -1,  2727,    -1,    -1,  2730,  2731,    -1,
    1674,  2734,    -1,  2736,  2737,  1679,    -1,    -1,    -1,    -1,
      -1,    -1,   876,    -1,    -1,  2748,  2749,  2750,  2751,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2761,    -1,
      -1,  2764,    -1,    -1,    -1,    -1,    -1,    -1,  2771,    -1,
    2773,    -1,    -1,    -1,    -1,    -1,    -1,  1595,    -1,    -1,
      -1,    -1,    -1,  1601,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   925,  2795,    -1,  2797,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2476,  1625,    -1,    -1,
      -1,    -1,    -1,    -1,  1632,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2496,    -1,    -1,    -1,
    2500,  2023,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1658,    -1,    -1,    -1,    -1,  2037,  2038,  2039,  1666,    -1,
    2042,    -1,  2044,  2045,    -1,    -1,  2048,  2049,  2050,    -1,
      -1,  2053,  2054,  2442,    -1,  2057,  1000,  2059,  2060,    -1,
    2062,  2450,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2086,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1845,    -1,    -1,  1848,    -1,    -1,    -1,    -1,    -1,
    2489,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1052,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1062,    -1,
    2126,  2127,  2128,  2129,  2130,    -1,  2132,  2133,    -1,    -1,
    1324,  2137,  2138,  2139,  2140,  2141,    -1,  2143,  2144,    -1,
      -1,    -1,  1336,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1354,  1355,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2176,    -1,    -1,  2179,    -1,    -1,
      -1,    -1,  2184,    -1,    -1,    -1,  2188,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1827,
      -1,    -1,    -1,    -1,    -1,    -1,  2208,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1163,
      -1,  1849,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1180,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1883,    -1,  1885,    -1,    -1,
    1204,    -1,    -1,  2743,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1215,    -1,    -1,  2028,  1903,    -1,  1905,    -1,    -1,
      -1,  1909,    -1,  1911,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1242,  2301,
      -1,    -1,    -1,  1247,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2073,
      -1,    -1,    -1,  1951,    -1,    -1,  1954,  1955,    -1,  2331,
      -1,    -1,    -1,    -1,    -1,  1963,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2350,    -1,    -1,  2353,  2354,  2355,
    2356,  2357,    -1,  2359,  2360,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2371,  2372,  2373,  2374,  2375,
    1998,  2377,  2378,    -1,  2380,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2390,  2391,  2014,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2401,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2035,    -1,    -1,
      -1,    -1,  2040,  2415,    -1,    -1,    -1,    -1,  2046,    -1,
      -1,    -1,    -1,  2051,  2178,    -1,    -1,  2055,    -1,    -1,
    2058,    -1,    -1,  2061,  2436,  2063,    -1,  1381,    -1,    -1,
      -1,  2069,    -1,    -1,  2446,    -1,    -1,    -1,    -1,    -1,
    2452,  2453,    -1,  2207,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2217,    -1,    -1,    -1,  1411,    -1,  2223,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1440,    -1,    -1,  1443,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1454,  1455,    -1,    -1,    -1,    -1,    -1,    -1,  1462,    -1,
      -1,    -1,    -1,    -1,    -1,  1469,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2540,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2551,    -1,  2553,    -1,    -1,
      -1,  2557,  1746,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1754,  1755,    -1,  2565,    -1,  1509,    -1,    -1,  1512,  1513,
      -1,    -1,    -1,    -1,    -1,  1769,  1770,    -1,  1522,    -1,
      -1,    -1,    -1,  2585,    -1,    -1,  1780,  1781,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1791,  1792,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1801,  1802,    -1,
      -1,    -1,    -1,  1807,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1817,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2262,    -1,    -1,    -1,    -1,    -1,
      -1,  2647,    -1,    -1,  2650,    -1,    -1,  2653,  1592,  2655,
      -1,    -1,    -1,    -1,    -1,  1599,    -1,  2659,    -1,  2661,
    2414,  2663,    -1,  2665,    -1,  2667,    -1,  2669,    -1,    -1,
      -1,    -1,    -1,  1617,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1633,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1652,    -1,
      -1,    -1,    -1,  1657,    -1,  2717,  1660,    -1,  1662,  1663,
    1664,  1665,    -1,    -1,  1668,    -1,    -1,  1671,    -1,    -1,
    1674,  1675,    -1,  1677,  1678,  1679,  1680,    -1,  1682,  1683,
      -1,    -1,    -1,    -1,  1688,  1689,  1690,    -1,    -1,  1693,
    1694,    -1,    -1,    -1,    -1,  1699,  1700,    -1,    -1,    -1,
    1704,    -1,    -1,  2765,    -1,  1709,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     4,     5,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2412,    -1,    -1,    -1,    -1,    -1,
      -1,  2419,    -1,    -1,    -1,  2423,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2440,    -1,  2568,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2576,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      60,    -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    73,    -1,    75,    -1,    -1,    -1,    -1,
      80,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,    89,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,
      -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   114,  1829,    -1,    -1,    -1,  1833,
      -1,    -1,    -1,  2087,    -1,    -1,    -1,    -1,    -1,    -1,
     130,  1845,    -1,  2097,  1848,    -1,    -1,  2101,  2102,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2110,  2111,    -1,    -1,
     150,    -1,    -1,    -1,    -1,  2119,  2120,    -1,    -1,    -1,
      -1,  2125,    -1,    -1,  1878,   165,    -1,    -1,    -1,    -1,
      -1,  2135,  2136,    -1,   174,   175,    -1,    -1,    -1,    -1,
      -1,    -1,  2146,  2147,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2157,    -1,   195,    -1,    -1,  2722,  2597,
      -1,    -1,  2166,    -1,  2168,    -1,     4,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   216,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,  1940,    -1,    -1,    -1,
     230,  2755,   232,    -1,  2758,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,   245,    -1,    -1,    -1,    -1,
     250,    -1,    -1,    -1,    -1,    -1,   256,    -1,    56,    -1,
      -1,    -1,    -1,   263,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   282,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2691,    -1,   295,   296,    -1,   298,    -1,
      -1,  2015,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2710,  2711,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   338,    -1,
      -1,    -1,  2056,    -1,    -1,    -1,    -1,    -1,     3,     4,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2756,   157,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2777,
      -1,    -1,  2780,    -1,    39,    -1,    -1,  2351,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   194,  2361,    -1,    -1,
      -1,    56,     3,     4,   202,    -1,  2370,    -1,    -1,    -1,
     208,   209,    -1,    -1,    -1,  2379,   214,    -1,    19,    -1,
      -1,   219,  2386,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2397,    -1,    -1,    -1,    -1,    -1,  2403,
      -1,    -1,  2406,    -1,    -1,  2409,   101,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2178,    -1,    -1,  2181,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2191,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2207,    -1,   293,  2210,    -1,    -1,    -1,
     101,    -1,   157,  2217,    -1,    -1,    -1,    -1,  2222,  2223,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   194,
      -1,    -1,    -1,    -1,   342,    -1,    -1,    -1,   346,   347,
      -1,    -1,    -1,    -1,    -1,    -1,   157,    -1,    -1,   214,
      -1,    -1,    -1,    -1,   219,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2537,    -1,   230,    -1,  2541,    -1,    -1,
      -1,    -1,    -1,    -1,  2548,    -1,    -1,    -1,    -1,    -1,
    2554,    -1,    -1,    -1,  2558,    -1,    -1,  2561,  2312,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2341,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   290,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2414,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,    -1,    -1,    -1,    -1,
       4,  2455,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2467,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,     6,    -1,
      -1,    -1,    -1,  2517,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2526,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2568,  2569,    -1,  2571,    -1,    -1,
      -1,    -1,  2576,  2577,    -1,   101,    -1,  2581,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   157,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2615,    -1,    -1,    -1,    -1,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   157,    -1,  2637,    -1,    -1,    -1,    -1,  2642,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     214,    -1,    -1,    -1,    -1,   219,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   219,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   157,    -1,    -1,    -1,
      -1,   162,    -1,    -1,    -1,    -1,    -1,    -1,  2722,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2739,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2755,    -1,    -1,  2758,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   239,
      -1,   241,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   162,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    19,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,    65,    66,   101,
      -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   115,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   157,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,    -1,    -1,    -1,    -1,   157,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   169,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,   186,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   206,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   219,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
      -1,    -1,    -1,    -1,   286,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   269,    -1,    -1,    -1,    -1,    -1,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,    -1,    -1,    -1,    -1,    -1,
      -1,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,    -1,
     338,    20,    21,    22,    -1,    -1,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      49,    -1,    -1,    52,    48,    49,    55,    -1,    52,    19,
      -1,    -1,    -1,    62,    -1,    59,    -1,    66,    62,    -1,
      -1,    -1,    66,    -1,    -1,    74,    75,    -1,    -1,    -1,
      74,    75,    -1,    82,    83,    -1,    -1,    19,    82,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,
      99,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,
     109,   110,    -1,    -1,   113,   109,   110,    -1,    -1,   113,
      -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,
      -1,   130,    -1,    -1,    -1,    -1,   130,    -1,    -1,    -1,
      19,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   150,    -1,    -1,    -1,    -1,   150,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,
      -1,    -1,    -1,   172,    -1,    -1,    -1,    -1,   172,    -1,
      59,    -1,    -1,    -1,    -1,    -1,    -1,   181,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   195,   157,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   101,    -1,   223,   157,   225,    -1,    -1,   223,
      -1,   225,   231,   232,    -1,    -1,    -1,   231,   232,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   245,   246,    -1,    -1,
      -1,    -1,   246,    -1,   214,    -1,   255,   256,    -1,   219,
      -1,    -1,   256,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   157,    -1,
      -1,    -1,   214,   282,    -1,   284,    -1,   219,   282,    -1,
     284,    -1,    -1,    -1,    -1,    -1,    -1,   296,    -1,   298,
     294,    -1,    -1,    -1,    -1,   304,    -1,    -1,    -1,    -1,
     304,    -1,    -1,    -1,    -1,    -1,    -1,   277,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,   338,
     219,    -1,    -1,    -1,   338,    -1,    -1,    -1,    -1,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,    -1,    -1,   286,    -1,    -1,
      -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     157,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   219,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   157,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   219,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    44,    -1,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    -1,    -1,    -1,    -1,    64,    65,
      -1,    67,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,
      86,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,
      96,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   125,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   137,    -1,    -1,    -1,   141,    -1,    -1,   144,    -1,
      -1,    -1,    -1,   149,   150,    -1,    -1,    -1,    -1,    -1,
     156,    -1,    -1,    -1,    -1,    -1,   162,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   175,
      -1,    -1,   178,   179,   180,    -1,    -1,   183,   184,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   197,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    44,    -1,    46,   212,   213,   214,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     226,    -1,   228,    -1,    65,    -1,    67,    68,    69,   235,
      -1,    -1,   238,    -1,    -1,   241,    77,   243,    79,   245,
      -1,    -1,    -1,    84,   250,    86,    87,    88,    -1,    -1,
      -1,    -1,    93,    -1,    95,    -1,    -1,   263,    -1,    -1,
      -1,    -1,    -1,   269,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   285,
     286,    -1,    -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   297,    -1,   299,    -1,    -1,    -1,    -1,    -1,   305,
     141,    -1,   308,   309,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   152,   153,    -1,    -1,   156,    -1,    -1,    -1,   160,
      -1,   162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   339,    -1,    -1,    -1,    -1,    -1,   345,
      -1,    -1,   183,   184,    -1,    -1,   187,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   197,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   212,   213,    -1,    -1,    -1,    -1,    -1,    -1,   220,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   243,    -1,   245,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   269,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   285,   286,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   294,    -1,    -1,    -1,    -1,    -1,    -1,
     301,    -1,    -1,    -1,    -1,    -1,   307,    -1,   309,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   345
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    41,    44,    46,    59,    64,    65,    67,    68,    69,
      77,    84,    86,    87,    95,    96,   125,   137,   141,   144,
     149,   150,   156,   162,   175,   178,   179,   180,   183,   184,
     197,   212,   213,   214,   226,   228,   235,   238,   241,   243,
     245,   250,   263,   269,   285,   286,   297,   299,   305,   308,
     309,   339,   345,   351,    66,    12,    53,    71,   100,   118,
     122,   134,   290,   383,     3,     4,   290,   352,   388,   187,
     193,   230,   254,   300,   344,   390,   282,     4,    40,   111,
     194,   243,   395,    28,   151,   173,   177,   227,   265,   273,
     274,   365,   397,    83,    99,   175,   216,   250,   398,    40,
      59,   111,   194,   286,   352,   407,     4,    19,    40,    56,
     101,   119,   157,   194,   202,   208,   209,   214,   219,   293,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   342,
     346,   347,   354,   362,   363,   364,   409,    33,   410,   354,
      29,    44,    46,    76,    84,   142,   192,   208,   209,   215,
     217,   243,   309,   353,   144,   412,    41,    44,    46,    65,
      67,    68,    69,    77,    79,    84,    86,    87,    88,    93,
      95,   124,   141,   152,   153,   156,   160,   162,   183,   184,
     187,   197,   212,   213,   220,   243,   245,   269,   285,   286,
     294,   301,   307,   309,   345,   413,    83,    99,   455,    19,
      44,    77,    84,    94,    95,   101,   124,   141,   156,   157,
     163,   183,   219,   269,   280,   309,   458,   354,    88,   116,
     185,   200,   257,   299,   309,   464,    16,    26,   112,   124,
     159,   205,   218,   467,   229,   485,     5,    66,    88,   139,
     299,   345,   354,   486,     5,   487,    57,   224,   238,   300,
     503,    64,    66,   182,   289,   522,    66,   203,   341,   346,
     348,   523,    39,   194,   230,   290,   352,   362,   364,   524,
       5,   299,   309,   354,   527,    70,   169,   242,   251,   528,
       4,    88,   503,    61,   280,   303,   535,   194,   290,   352,
     536,    26,   112,   124,   205,   218,   538,    50,    99,   108,
     136,   292,   553,   554,     4,    37,    47,    74,   150,   186,
     230,   251,   287,   303,   378,     4,   124,   204,   555,   290,
     352,   557,    16,    23,   239,   241,   363,   558,   229,   562,
     290,   352,   563,     0,     5,    59,   352,   384,   266,     5,
       4,   290,   352,   385,     5,    32,   279,   386,   123,   352,
     387,   123,   352,   389,   352,     4,   193,   247,   393,   187,
     300,   343,   344,   352,   392,   354,   138,   176,   391,   352,
      78,   172,   247,   352,   394,     5,   352,     4,   243,   396,
     352,   352,     5,   225,   399,    31,   400,     5,   401,     5,
     405,     5,    31,   406,   352,     9,    10,    11,   352,   358,
     359,   360,   361,   352,   352,    40,   111,   194,   352,   408,
     352,   194,   362,   364,   352,    35,   106,   127,   128,   129,
     135,   148,   154,   164,   278,   367,   352,     4,   354,   354,
     354,   354,   354,   354,   354,   354,   354,   354,   354,   117,
      66,    53,    71,    88,   100,   118,   122,   134,   174,   414,
     118,   416,   187,   193,   230,   254,   300,   343,   344,   352,
     402,   417,   282,   420,   169,   421,   169,   177,   423,    65,
      66,    69,    91,   169,   186,   206,   269,   338,   362,   425,
     352,   364,   428,    59,   286,   362,   429,   277,   362,   364,
     430,    33,   431,   362,   364,   432,     4,   362,   364,   433,
      45,    59,    81,   100,   117,   120,   146,   147,   199,   207,
     266,   267,   338,   437,   211,   302,   443,     5,    89,     6,
      88,   120,   435,     5,    65,   364,   434,    16,   503,    66,
     182,   289,   444,    66,   230,   445,   281,    61,   280,   303,
     446,    21,   134,   237,   264,   447,    37,    47,    74,   150,
     186,   251,   303,   448,   364,    89,    16,   196,   453,   362,
     456,    72,   459,    31,   460,    44,    87,   192,   461,   150,
     216,   256,   295,   462,   362,    18,    58,   115,   286,   362,
     463,     4,   193,   466,     5,     4,     6,   120,   352,     4,
       5,   243,   468,     5,   470,     5,   117,   192,   243,   267,
     471,    93,   111,   187,   484,     5,   482,     5,   267,   483,
       4,     5,   354,   354,   352,   352,     5,     4,     5,    60,
      66,    73,    75,    80,    83,    89,    99,   105,   114,   130,
     150,   165,   174,   175,   195,   216,   230,   232,   245,   250,
     256,   263,   282,   295,   296,   298,   338,   488,     5,     4,
     352,     5,   352,    40,   111,   352,   526,   354,   352,   362,
     364,   525,   352,   367,   352,     4,   363,    54,    90,   140,
     243,   529,     4,     4,   352,     4,   150,   256,   530,     5,
     362,     4,    40,   111,   352,   537,   352,    97,    61,   120,
     243,   270,   539,   120,   552,    61,   117,   120,   157,   192,
     240,   243,   267,   270,   281,   541,   542,    61,   120,   270,
     551,     5,     4,    34,   107,   203,   534,    66,   354,   379,
      66,   354,   380,    66,   354,   381,    13,   189,   533,   352,
     352,   223,   352,   382,   352,   267,     4,   352,   352,     4,
     561,     4,   284,   559,     4,   284,   560,     4,   367,   123,
     352,   564,   352,   352,     4,     5,   352,    12,   352,   352,
     352,    30,    94,   163,   247,   252,   366,   366,     4,   352,
     352,     4,     4,     4,   352,   352,   352,   352,     4,     4,
       5,     5,   362,     5,   352,   352,   358,   360,   360,   362,
     352,   352,   352,   352,   352,   352,   352,   362,   364,   361,
     352,   352,   361,   352,     5,   266,   103,   187,   415,   193,
     247,   418,   169,    78,   172,   247,   419,   138,   176,   403,
     403,     4,   422,     4,   424,   193,   254,   426,   177,   427,
     169,   367,   352,   362,   352,   362,   362,   367,   367,   367,
     362,   367,   352,   362,     4,   440,     4,   364,   438,   196,
       4,   166,   309,   439,   196,   362,     4,   362,   442,     5,
       5,     4,   196,   352,     4,     5,    60,    66,   114,   130,
     143,   149,   150,   155,   206,   225,   230,   232,   255,   256,
     263,   282,   338,   497,   364,   188,   188,    66,   449,    66,
     450,    66,   451,   223,   452,   352,     5,   224,   454,   363,
     367,     5,   362,   362,   362,     4,   354,     4,     4,   196,
     352,    14,    15,    61,   190,   191,   260,   270,   271,   302,
      87,     5,     5,    14,    15,    61,   190,   191,   260,   270,
     271,   275,   302,    87,   157,   162,   363,   474,   478,    87,
     157,     5,   472,     4,     4,    14,    61,   190,   260,   270,
     302,     5,     5,     4,   352,   363,    20,    21,    22,    48,
      49,    52,    55,    62,    66,    74,    75,    82,    83,    99,
     105,   109,   110,   113,   130,   150,   172,   195,   223,   225,
     231,   232,   245,   246,   255,   256,   282,   284,   296,   298,
     304,   338,    66,    80,    89,    99,   130,   150,   195,   232,
     256,   296,   298,     4,    30,   161,   211,   237,   491,     5,
      63,   104,   234,   248,   249,   340,   341,   496,    99,   489,
      17,    40,   111,   194,   495,     4,     5,    17,   210,   291,
     352,   256,   496,   504,   124,   496,   505,    36,    40,   111,
     132,   194,   290,   352,   506,   362,   354,    91,    99,   105,
     126,   150,   158,   195,   203,   245,   256,   272,   509,    40,
     111,   194,     5,   283,    17,   210,   291,   513,   284,   354,
     514,     5,    99,   105,   299,    17,    17,     4,   352,   352,
     352,   352,   352,   367,   352,   352,   361,   352,     4,   367,
       4,    40,   111,   194,   261,   531,    40,   111,   194,   261,
     532,     4,    97,     5,     5,    87,     4,     5,     5,    87,
       5,   542,    61,   120,   157,   270,   546,    61,   120,   270,
     550,    87,   157,    61,   120,   270,   544,     4,    61,   120,
     270,   543,     5,     5,     4,     4,     5,     5,     5,   352,
     352,   352,     4,   352,   556,   352,   352,     6,   363,     4,
       5,     4,     4,     5,     4,    97,   258,   368,   352,   352,
      12,     5,    12,   352,   352,    12,     4,    12,     4,     4,
     352,   352,   352,     4,   354,     4,     4,   367,   362,   367,
     352,   352,   352,   362,   352,   361,   352,   352,     5,     5,
     352,   364,   352,   362,   362,   352,   367,   368,   368,   368,
     367,   361,   352,   367,   352,   133,   244,   355,   441,   166,
       5,     4,   367,   362,     4,     5,     4,     4,   352,   436,
     352,    20,    21,    22,    48,    49,    52,    59,    62,    66,
      74,    75,    82,   109,   110,   113,   130,   150,   172,   181,
     223,   225,   231,   232,   246,   256,   282,   284,   294,   304,
     338,    66,   130,   155,   232,   282,    30,   161,   211,   237,
     498,   352,    20,   206,   352,   499,    17,   352,   255,   509,
     255,   206,   352,   500,   284,   501,    17,    98,   352,   352,
       5,   368,    56,   362,     4,     5,   465,   352,     5,     5,
       5,   157,   184,   372,   372,   165,   262,   370,     4,     4,
       5,     5,   469,   268,   268,     5,     5,     5,    17,   159,
     371,   371,   370,     4,     4,   370,     5,     5,   473,   162,
     337,   363,   477,     5,   476,     5,     5,   480,     5,   481,
       5,    14,    15,    61,   190,   191,   260,   270,   271,   275,
     302,     4,     4,     5,     5,   372,   370,     4,     5,     5,
     367,    82,   152,   221,   222,   236,   276,   375,     7,     8,
     352,   357,   237,   121,   237,   237,   105,    40,    66,    99,
     105,   111,   130,   150,   165,   195,   232,   245,   256,   284,
     296,   298,   299,   338,   490,   121,   237,     5,    27,   167,
     237,   280,   138,   105,    22,    49,    52,    82,   110,   113,
     225,   255,    22,    49,    52,    55,    82,   110,   113,   225,
     255,   282,    40,   121,   237,   237,   105,     5,   210,    27,
     223,    36,   132,   290,   352,   259,   266,   121,   241,   362,
     364,   509,    40,   131,   223,   280,   241,   210,     5,     5,
     245,    27,   223,     4,     5,     5,   210,    36,   132,   290,
     352,   509,   210,   354,     4,     4,   352,     5,   302,    22,
      27,    48,    49,    51,    52,    62,    74,    75,    82,    85,
     102,   109,   110,   113,   172,   225,   231,   246,   255,   283,
     284,   304,   348,   492,   352,   352,   352,   352,   352,   496,
     362,     5,     4,     5,   352,   352,   362,   364,   352,   354,
     352,   352,   496,     5,   352,   352,   354,     5,    17,     5,
       5,   352,   352,   361,   352,   352,     4,   352,   352,   111,
     352,   352,   111,     4,    42,    43,   170,   171,   198,   377,
     377,    61,   120,   270,   540,   377,     5,    61,   120,   270,
     545,     5,     5,    61,   120,   270,   547,     4,     5,     5,
       4,    61,   120,   270,   549,    61,   120,   270,   548,     5,
       5,     4,     5,     5,     4,   377,   377,   377,   352,   352,
     352,     4,   352,   362,   352,   363,   367,     5,     5,    12,
     352,   362,   364,   352,    12,   352,   352,   352,    59,   352,
       6,     4,   352,   352,    46,   269,   404,     5,   354,   354,
     367,   352,     4,     4,     4,   362,   352,   352,   352,   352,
     367,     4,   362,   368,   361,   352,     4,   368,   352,    38,
      38,     4,   364,     5,    24,    25,    97,   369,   352,     4,
     352,     5,    82,   152,   221,   222,   236,   276,   362,   364,
     237,   121,   237,   237,    21,   237,   362,   121,   237,    27,
     167,   237,   280,   138,    21,   237,   121,   237,   237,    21,
     237,    27,   168,   223,   168,   259,   266,   121,   168,   223,
     288,   509,   131,   168,   223,   280,     4,   245,    27,   168,
     223,   509,   206,   352,    82,   152,   221,   222,   236,   276,
     352,   352,   352,   352,   352,   196,   352,   352,    20,   233,
     457,     4,     4,   352,   372,   372,   372,     4,   372,   372,
     372,    14,    15,    61,   190,   191,   260,   270,   271,   302,
     371,   372,   372,   372,   372,   372,     4,   372,   372,     4,
     371,    14,    15,    61,   190,   191,   260,   270,   271,   302,
       5,   475,     5,   479,     5,     5,    14,    15,    61,   190,
     191,   260,   270,   271,   275,   302,     5,    14,    15,    61,
     190,   191,   260,   270,   271,   275,   302,     5,    14,    15,
      61,   190,   191,   260,   270,   271,   275,   302,    14,    15,
      61,   190,   191,   260,   270,   271,   302,   268,     5,     5,
       5,   371,   371,   370,     4,     4,   370,     5,     4,     4,
     372,   372,     4,   372,   372,     5,   354,   362,   364,     5,
     352,   354,   352,     5,   352,     5,   357,   105,   195,   245,
     105,   195,   245,     5,   354,   352,   354,     5,   352,   362,
     354,     5,   357,   237,   237,    21,   237,    21,   237,   237,
      21,   237,   306,   306,     4,     4,     4,   490,     4,     4,
       4,   306,   306,     4,     5,     4,   354,   352,     5,   352,
       5,   357,   354,   362,   364,   362,   364,   352,    27,    48,
      51,    62,    85,   102,   348,   373,     4,   354,   352,   367,
     361,   354,     5,   362,   364,   362,   352,   354,   354,   362,
     364,   362,   364,   352,   354,   352,     5,   352,   223,   223,
     352,   352,   223,   352,   223,   352,   352,   502,   510,   352,
     223,   223,   352,   352,   352,   352,   352,   352,   352,   352,
       5,   302,   352,   493,   352,   352,   223,   352,   352,   352,
     352,   362,   367,     5,   362,   362,   352,   352,   367,   361,
     352,   352,   352,   362,   352,   352,     5,     4,   352,   352,
     352,   352,     5,     5,     4,   377,     5,     5,     4,     4,
       4,     5,     5,     4,     4,     5,     5,     4,     5,     5,
       4,   352,   352,   352,   362,   352,   367,   352,   362,   364,
     352,   367,   352,   352,   352,   352,   352,     5,   352,     4,
       6,   352,   352,     4,   362,   352,   367,   177,   365,   352,
     365,   368,   367,   362,   352,   352,     4,   352,   352,     4,
     362,     5,     5,     5,     5,   362,   367,   362,   362,   362,
     362,   364,   362,   367,   362,   362,   362,   364,   362,   362,
     362,   362,   364,   362,   362,   362,   352,   362,   362,   362,
     362,   362,   362,   362,   362,     5,     5,     5,     5,   362,
     352,   352,     4,   352,     5,     4,   352,   372,     5,     5,
       5,   370,     4,     4,     5,   372,   371,     4,   372,     5,
       5,     5,   371,   371,   370,     4,     4,     5,    14,    15,
      61,   190,   191,   260,   270,   271,   302,    14,    15,    61,
     190,   191,   260,   270,   271,   302,    14,    15,    61,   190,
     191,   260,   270,   271,   302,   268,     5,     5,     5,   371,
     371,   370,     4,     4,   370,     5,   268,     5,     5,     5,
     371,   371,   370,     4,     4,   370,     5,   268,     5,     5,
       5,   371,   371,   370,     4,     4,   370,     5,     5,     5,
       5,   371,   371,   370,     4,     4,     5,   371,     4,     4,
     371,     4,     4,   372,     5,   367,   362,   352,   352,   362,
     352,     5,   357,     5,   362,   364,   354,     5,   362,   364,
     367,     5,   357,   352,   352,   352,   352,   352,   352,   352,
     352,   352,     4,     4,     5,     4,     4,   352,   362,   352,
       5,   357,   354,   367,   361,   367,   352,   352,   361,   361,
     367,   361,   367,   352,   367,   361,   367,   361,   352,   352,
     352,   352,   352,   352,   352,   352,   352,   352,    55,    66,
      92,   130,   282,   284,   338,   507,   508,   509,   520,   521,
     352,   352,   352,   352,   352,   352,   352,   352,   352,   352,
     352,   352,   362,     5,   352,   352,   352,   352,     4,     4,
     367,   368,     4,   494,   367,   367,   361,   352,     4,   367,
       4,   377,   377,   377,   357,   352,   352,   352,   367,   352,
     361,   352,   352,    12,     5,     5,     4,   352,   352,     4,
     367,   362,   352,   352,   368,   369,   352,     5,   352,   364,
       5,     5,     5,     5,   367,   369,   369,   369,   367,   369,
     368,   369,   369,   367,   369,   369,   369,   367,   369,   369,
     367,   362,   369,   367,   369,   369,   367,   369,   367,     5,
       5,     5,     5,   367,     4,   364,     5,   352,     4,   372,
     371,     4,   371,     5,     5,     5,   371,   371,   370,     4,
       4,     5,     5,     5,     5,   371,   371,   370,     4,     4,
       5,     5,     5,     5,   371,   371,   370,     4,     4,     5,
     371,   372,   372,   372,   372,   372,     4,   372,   372,     4,
     371,   371,   372,   372,   372,   372,   372,     4,   372,   372,
       4,   371,   371,     4,     4,   371,     4,   371,   371,     4,
       4,     4,   363,   369,     4,   362,   364,   369,   352,   362,
       4,   369,   369,   362,     4,   352,   352,   352,   352,   352,
     352,   352,   352,   352,   352,   352,   362,   364,   369,   352,
     362,     4,   361,   361,   361,   352,   362,   364,   361,   352,
     361,   361,   362,   362,   364,   361,   352,   361,   352,   352,
     352,   352,   352,   352,   357,   352,   352,   352,   349,   349,
     349,   349,   349,   349,   349,   508,   349,   357,   352,   352,
     352,   352,   357,   352,   352,   352,   352,   352,   352,   367,
     352,   302,   356,   357,   352,   352,   368,   354,     4,     4,
     368,   352,   361,   352,    59,   352,     5,     5,   352,     4,
     365,   369,     5,     4,     4,     5,   362,     5,   368,   369,
     368,   368,   368,     4,     5,   362,     5,     5,     4,   352,
     372,   371,   372,   372,   372,   372,   372,     4,   372,   372,
     371,     4,   371,   372,   372,   372,   372,   372,     4,   372,
     372,   371,   372,   371,     4,   372,   372,   371,     4,   372,
     371,     4,   371,   371,   367,   362,   364,   369,     4,   367,
     352,   367,   352,   352,   352,   369,     4,   367,   352,   361,
     369,   352,   361,   369,   369,   362,   357,   352,     4,   374,
     374,   352,   352,   374,   357,   374,   510,   362,   490,     5,
       4,     5,     5,     5,     4,   354,   357,   374,   374,   352,
     352,   357,   352,   352,   352,   352,   352,   361,   352,     5,
     510,   352,   374,   354,   511,   512,     5,   354,     5,   352,
       5,     4,     6,   352,    32,   279,   411,     5,    32,   279,
     376,   362,     5,   376,   362,   411,   352,   371,   372,   371,
     371,   372,   372,   371,   372,   371,   371,   352,   369,   362,
     364,   362,   352,   362,   352,   362,   364,   362,   352,   362,
     369,     4,   510,   510,   356,   352,   510,     4,   510,   367,
       5,     4,     4,   510,   510,   356,   352,     4,   510,   510,
     352,   362,   510,   510,   510,   511,   517,   518,   509,   515,
     516,     5,     5,     6,     4,   187,   300,   344,   352,   402,
     362,   362,     4,   372,   372,   372,   372,   363,   369,   369,
     352,   369,     4,   369,   369,   352,   369,   352,   510,   510,
       4,   352,   510,     5,   352,   510,     4,   352,   510,   367,
     517,   519,   520,   349,   516,     5,     5,     4,   352,   403,
     352,   403,   367,   367,   369,     4,   362,   364,     4,   357,
     356,   352,   352,   356,   352,   362,   520,   354,     5,     5,
     352,   352,   352,   352,   376,   376,     5,   362,   364,   367,
     362,   364,   510,   352,     4,   510,   352,   369,     5,     5,
     352,     5,   352,   367,   367,     4,   510,     4,     5,     5,
       5,   356,   356,   510,   510,   510
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
#line 454 "frame/parser.Y"
    {fr->bgColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 6:
#line 456 "frame/parser.Y"
    {fr->centerCmd();;}
    break;

  case 7:
#line 457 "frame/parser.Y"
    {fr->clearCmd();;}
    break;

  case 9:
#line 459 "frame/parser.Y"
    {fr->colorbarTagCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 16:
#line 466 "frame/parser.Y"
    {fr->DATASECCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 21:
#line 471 "frame/parser.Y"
    {fr->hideCmd();;}
    break;

  case 22:
#line 472 "frame/parser.Y"
    {fr->highliteCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 24:
#line 474 "frame/parser.Y"
    {fr->irafAlignCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 31:
#line 481 "frame/parser.Y"
    {fr->nanColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 35:
#line 485 "frame/parser.Y"
    {fr->queryCursorCmd();;}
    break;

  case 36:
#line 486 "frame/parser.Y"
    {fr->precCmd((yyvsp[(2) - (7)].integer),(yyvsp[(3) - (7)].integer),(yyvsp[(4) - (7)].integer),(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(yyvsp[(7) - (7)].integer));;}
    break;

  case 38:
#line 488 "frame/parser.Y"
    {fr->resetCmd();;}
    break;

  case 43:
#line 493 "frame/parser.Y"
    {fr->showCmd();;}
    break;

  case 45:
#line 495 "frame/parser.Y"
    {fr->threadsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 47:
#line 497 "frame/parser.Y"
    {fr->unloadFitsCmd();;}
    break;

  case 49:
#line 499 "frame/parser.Y"
    {fr->msg("Frame 1.0");;}
    break;

  case 54:
#line 506 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 55:
#line 507 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 56:
#line 510 "frame/parser.Y"
    {yydebug=1;;}
    break;

  case 57:
#line 511 "frame/parser.Y"
    {yydebug=0;;}
    break;

  case 58:
#line 512 "frame/parser.Y"
    {DebugAST=(yyvsp[(2) - (2)].integer);;}
    break;

  case 59:
#line 513 "frame/parser.Y"
    {DebugMosaic=(yyvsp[(2) - (2)].integer);;}
    break;

  case 60:
#line 514 "frame/parser.Y"
    {yydebug=(yyvsp[(2) - (2)].integer);;}
    break;

  case 61:
#line 515 "frame/parser.Y"
    {DebugPerf=(yyvsp[(2) - (2)].integer);;}
    break;

  case 62:
#line 516 "frame/parser.Y"
    {DebugWCS=(yyvsp[(2) - (2)].integer);;}
    break;

  case 63:
#line 517 "frame/parser.Y"
    {DebugBin=(yyvsp[(2) - (2)].integer);;}
    break;

  case 64:
#line 518 "frame/parser.Y"
    {DebugBlock=(yyvsp[(2) - (2)].integer);;}
    break;

  case 65:
#line 519 "frame/parser.Y"
    {DebugCompress=(yyvsp[(2) - (2)].integer);;}
    break;

  case 66:
#line 520 "frame/parser.Y"
    {DebugCrop=(yyvsp[(2) - (2)].integer);;}
    break;

  case 67:
#line 521 "frame/parser.Y"
    {DebugGZ=(yyvsp[(2) - (2)].integer);;}
    break;

  case 68:
#line 522 "frame/parser.Y"
    {DebugRGB=(yyvsp[(2) - (2)].integer);;}
    break;

  case 69:
#line 525 "frame/parser.Y"
    {(yyval.integer)=((yyvsp[(1) - (1)].integer) ? 1 : 0);;}
    break;

  case 70:
#line 527 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 71:
#line 528 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 72:
#line 529 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 73:
#line 530 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 74:
#line 532 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 75:
#line 533 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 76:
#line 534 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 77:
#line 535 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 78:
#line 538 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 79:
#line 539 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 80:
#line 540 "frame/parser.Y"
    {(yyval.integer) = Base::FULLBASE;;}
    break;

  case 81:
#line 541 "frame/parser.Y"
    {(yyval.integer) = Base::ROOT;;}
    break;

  case 82:
#line 542 "frame/parser.Y"
    {(yyval.integer) = Base::FULL;;}
    break;

  case 83:
#line 545 "frame/parser.Y"
    {(yyval.real) = 0;;}
    break;

  case 84:
#line 546 "frame/parser.Y"
    {(yyval.real) = (yyvsp[(1) - (1)].real);;}
    break;

  case 85:
#line 549 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 86:
#line 550 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 87:
#line 551 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 88:
#line 554 "frame/parser.Y"
    {(yyval.real) = parseSEXStr((yyvsp[(1) - (1)].str));;}
    break;

  case 89:
#line 557 "frame/parser.Y"
    {(yyval.real) = parseHMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 90:
#line 560 "frame/parser.Y"
    {(yyval.real) = parseDMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 91:
#line 564 "frame/parser.Y"
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
#line 576 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 93:
#line 583 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 94:
#line 590 "frame/parser.Y"
    {
	  (yyval.vector)[0] = (yyvsp[(1) - (2)].real);
	  (yyval.vector)[1] = (yyvsp[(2) - (2)].real);
	  (yyval.vector)[2] = 1;
	;}
    break;

  case 95:
#line 597 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::IMAGE;;}
    break;

  case 96:
#line 598 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::PHYSICAL;;}
    break;

  case 97:
#line 599 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::DETECTOR;;}
    break;

  case 98:
#line 600 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::AMPLIFIER;;}
    break;

  case 99:
#line 601 "frame/parser.Y"
    {(yyval.integer) = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 100:
#line 604 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS;;}
    break;

  case 101:
#line 605 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSA;;}
    break;

  case 102:
#line 606 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSB;;}
    break;

  case 103:
#line 607 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSC;;}
    break;

  case 104:
#line 608 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSD;;}
    break;

  case 105:
#line 609 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSE;;}
    break;

  case 106:
#line 610 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSF;;}
    break;

  case 107:
#line 611 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSG;;}
    break;

  case 108:
#line 612 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSH;;}
    break;

  case 109:
#line 613 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSI;;}
    break;

  case 110:
#line 614 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSJ;;}
    break;

  case 111:
#line 615 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSK;;}
    break;

  case 112:
#line 616 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSL;;}
    break;

  case 113:
#line 617 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSM;;}
    break;

  case 114:
#line 618 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSN;;}
    break;

  case 115:
#line 619 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSO;;}
    break;

  case 116:
#line 620 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSP;;}
    break;

  case 117:
#line 621 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSQ;;}
    break;

  case 118:
#line 622 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSR;;}
    break;

  case 119:
#line 623 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSS;;}
    break;

  case 120:
#line 624 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCST;;}
    break;

  case 121:
#line 625 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSU;;}
    break;

  case 122:
#line 626 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSV;;}
    break;

  case 123:
#line 627 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSW;;}
    break;

  case 124:
#line 628 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSX;;}
    break;

  case 125:
#line 629 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSY;;}
    break;

  case 126:
#line 630 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSZ;;}
    break;

  case 127:
#line 631 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS0;;}
    break;

  case 128:
#line 634 "frame/parser.Y"
    {(yyval.integer) = Coord::CANVAS;;}
    break;

  case 129:
#line 635 "frame/parser.Y"
    {(yyval.integer) = Coord::PANNER;;}
    break;

  case 130:
#line 638 "frame/parser.Y"
    {(yyval.integer) = FrScale::LINEARSCALE;;}
    break;

  case 131:
#line 639 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOGSCALE;;}
    break;

  case 132:
#line 640 "frame/parser.Y"
    {(yyval.integer) = FrScale::POWSCALE;;}
    break;

  case 133:
#line 641 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQRTSCALE;;}
    break;

  case 134:
#line 642 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQUAREDSCALE;;}
    break;

  case 135:
#line 643 "frame/parser.Y"
    {(yyval.integer) = FrScale::ASINHSCALE;;}
    break;

  case 136:
#line 644 "frame/parser.Y"
    {(yyval.integer) = FrScale::SINHSCALE;;}
    break;

  case 137:
#line 645 "frame/parser.Y"
    {(yyval.integer) = FrScale::HISTEQUSCALE;;}
    break;

  case 138:
#line 648 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 139:
#line 649 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 140:
#line 650 "frame/parser.Y"
    {(yyval.integer)=FrScale::SAMPLE;;}
    break;

  case 141:
#line 651 "frame/parser.Y"
    {(yyval.integer)=FrScale::DATAMIN;;}
    break;

  case 142:
#line 652 "frame/parser.Y"
    {(yyval.integer)=FrScale::IRAFMIN;;}
    break;

  case 143:
#line 655 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 144:
#line 656 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 145:
#line 657 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4_NO_E;;}
    break;

  case 146:
#line 658 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 147:
#line 659 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 148:
#line 660 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 149:
#line 661 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 150:
#line 662 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::GALACTIC;;}
    break;

  case 151:
#line 663 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::SUPERGALACTIC;;}
    break;

  case 152:
#line 664 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ECLIPTIC;;}
    break;

  case 153:
#line 665 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::HELIOECLIPTIC;;}
    break;

  case 154:
#line 668 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 155:
#line 669 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 156:
#line 670 "frame/parser.Y"
    {(yyval.integer)=Coord::SEXAGESIMAL;;}
    break;

  case 157:
#line 673 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 158:
#line 674 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 159:
#line 675 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCMIN;;}
    break;

  case 160:
#line 676 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCSEC;;}
    break;

  case 161:
#line 679 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 162:
#line 680 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 163:
#line 681 "frame/parser.Y"
    {(yyval.integer) = Base::KEY;;}
    break;

  case 164:
#line 684 "frame/parser.Y"
    {;}
    break;

  case 165:
#line 685 "frame/parser.Y"
    {;}
    break;

  case 166:
#line 686 "frame/parser.Y"
    {;}
    break;

  case 167:
#line 689 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 168:
#line 690 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 169:
#line 691 "frame/parser.Y"
    {(yyval.integer) = Base::MASK;;}
    break;

  case 170:
#line 694 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 171:
#line 695 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 172:
#line 696 "frame/parser.Y"
    {(yyval.integer) = Point::BOX;;}
    break;

  case 173:
#line 697 "frame/parser.Y"
    {(yyval.integer) = Point::DIAMOND;;}
    break;

  case 174:
#line 698 "frame/parser.Y"
    {(yyval.integer) = Point::CROSS;;}
    break;

  case 175:
#line 699 "frame/parser.Y"
    {(yyval.integer) = Point::EX;;}
    break;

  case 176:
#line 700 "frame/parser.Y"
    {(yyval.integer) = Point::ARROW;;}
    break;

  case 177:
#line 701 "frame/parser.Y"
    {(yyval.integer) = Point::BOXCIRCLE;;}
    break;

  case 178:
#line 704 "frame/parser.Y"
    {(yyval.integer) = POINTSIZE;;}
    break;

  case 179:
#line 705 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 180:
#line 708 "frame/parser.Y"
    {(yyval.integer) = Marker::PANDA;;}
    break;

  case 181:
#line 709 "frame/parser.Y"
    {(yyval.integer) = Marker::HISTOGRAM;;}
    break;

  case 182:
#line 710 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT2D;;}
    break;

  case 183:
#line 711 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT3D;;}
    break;

  case 184:
#line 712 "frame/parser.Y"
    {(yyval.integer) = Marker::RADIAL;;}
    break;

  case 185:
#line 713 "frame/parser.Y"
    {(yyval.integer) = Marker::STATS;;}
    break;

  case 186:
#line 716 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 187:
#line 717 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 188:
#line 718 "frame/parser.Y"
    {(yyval.integer) = Marker::SUM;;}
    break;

  case 189:
#line 721 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 190:
#line 722 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 191:
#line 723 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 192:
#line 724 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 193:
#line 725 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 194:
#line 726 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 199:
#line 733 "frame/parser.Y"
    {fr->set3dRenderMethodCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 200:
#line 734 "frame/parser.Y"
    {fr->set3dRenderBackgroundCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 201:
#line 735 "frame/parser.Y"
    {fr->set3dScaleCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 202:
#line 736 "frame/parser.Y"
    {fr->set3dPreserveCmd();;}
    break;

  case 203:
#line 738 "frame/parser.Y"
    {/* needed for compatibility with old version of backup */;}
    break;

  case 204:
#line 741 "frame/parser.Y"
    {fr->set3dBorderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 205:
#line 742 "frame/parser.Y"
    {fr->set3dBorderColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 206:
#line 745 "frame/parser.Y"
    {fr->set3dCompassCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 207:
#line 746 "frame/parser.Y"
    {fr->set3dCompassColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 208:
#line 749 "frame/parser.Y"
    {fr->set3dHighliteCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 209:
#line 750 "frame/parser.Y"
    {fr->set3dHighliteColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 210:
#line 753 "frame/parser.Y"
    {fr->set3dViewCmd((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));;}
    break;

  case 211:
#line 755 "frame/parser.Y"
    {fr->set3dViewPointCmd(Vector3d((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 213:
#line 759 "frame/parser.Y"
    {fr->binColsCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 214:
#line 760 "frame/parser.Y"
    {fr->binDepthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 217:
#line 763 "frame/parser.Y"
    {fr->binBufferSizeCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 219:
#line 765 "frame/parser.Y"
    {fr->binFilterCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 220:
#line 768 "frame/parser.Y"
    {fr->binAboutCmd();;}
    break;

  case 221:
#line 769 "frame/parser.Y"
    {fr->binAboutCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 222:
#line 772 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 223:
#line 773 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 224:
#line 775 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(1) - (4)].real)), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 225:
#line 777 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 226:
#line 778 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 227:
#line 779 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 228:
#line 781 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 229:
#line 783 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 230:
#line 786 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::AVERAGE);;}
    break;

  case 231:
#line 787 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::SUM);;}
    break;

  case 232:
#line 790 "frame/parser.Y"
    {fr->binToFitCmd();;}
    break;

  case 233:
#line 792 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (7)].real),(yyvsp[(2) - (7)].real)), (yyvsp[(5) - (7)].str), (yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].str));;}
    break;

  case 234:
#line 795 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (11)].real),(yyvsp[(2) - (11)].real)), (yyvsp[(3) - (11)].integer), Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)), (yyvsp[(8) - (11)].str), (yyvsp[(9) - (11)].str), (yyvsp[(10) - (11)].str), (yyvsp[(11) - (11)].str));;}
    break;

  case 235:
#line 797 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (8)].real),(yyvsp[(2) - (8)].real)), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (yyvsp[(6) - (8)].str), (yyvsp[(7) - (8)].str), (yyvsp[(8) - (8)].str));;}
    break;

  case 236:
#line 800 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (12)].real),(yyvsp[(2) - (12)].real)), (yyvsp[(3) - (12)].integer), Vector((yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real)), Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), 
	    (yyvsp[(9) - (12)].str), (yyvsp[(10) - (12)].str), (yyvsp[(11) - (12)].str), (yyvsp[(12) - (12)].str));;}
    break;

  case 237:
#line 804 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 238:
#line 805 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 240:
#line 809 "frame/parser.Y"
    {fr->blockToFitCmd();;}
    break;

  case 241:
#line 810 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 242:
#line 811 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 246:
#line 817 "frame/parser.Y"
    {fr->clipUserCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 248:
#line 820 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 249:
#line 825 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::GLOBAL);;}
    break;

  case 250:
#line 826 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::LOCAL);;}
    break;

  case 251:
#line 829 "frame/parser.Y"
    {fr->clipModeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 252:
#line 830 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::MINMAX);;}
    break;

  case 253:
#line 831 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZSCALE);;}
    break;

  case 254:
#line 832 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZMAX);;}
    break;

  case 255:
#line 833 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::USERCLIP);;}
    break;

  case 256:
#line 836 "frame/parser.Y"
    {fr->clipMinMaxCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer),(yyvsp[(1) - (2)].integer));;}
    break;

  case 257:
#line 837 "frame/parser.Y"
    {fr->clipMinMaxModeCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer));;}
    break;

  case 258:
#line 838 "frame/parser.Y"
    {fr->clipMinMaxSampleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 259:
#line 841 "frame/parser.Y"
    {fr->clipZScaleCmd((yyvsp[(1) - (3)].real),(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 260:
#line 843 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleContrastCmd((yyvsp[(2) - (2)].real));
        ;}
    break;

  case 261:
#line 848 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleSampleCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 262:
#line 853 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleLineCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 263:
#line 860 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (6)].integer), (yyvsp[(2) - (6)].real), (yyvsp[(3) - (6)].real), (yyvsp[(4) - (6)].integer), (unsigned char*)(yyvsp[(5) - (6)].ptr), (yyvsp[(6) - (6)].integer));;}
    break;

  case 264:
#line 862 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].integer),(unsigned char*)(yyvsp[(9) - (10)].ptr),(yyvsp[(10) - (10)].integer));;}
    break;

  case 265:
#line 863 "frame/parser.Y"
    {fr->colormapBeginCmd();;}
    break;

  case 267:
#line 865 "frame/parser.Y"
    {fr->colormapEndCmd();;}
    break;

  case 268:
#line 869 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(1) - (6)].integer), (yyvsp[(2) - (6)].real), (yyvsp[(3) - (6)].real), (yyvsp[(4) - (6)].integer), (unsigned char*)(yyvsp[(5) - (6)].ptr), (yyvsp[(6) - (6)].integer));;}
    break;

  case 269:
#line 871 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].integer),(unsigned char*)(yyvsp[(9) - (10)].ptr),(yyvsp[(10) - (10)].integer));;}
    break;

  case 270:
#line 873 "frame/parser.Y"
    {fr->colorScaleCmd((FrScale::ColorScaleType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 271:
#line 874 "frame/parser.Y"
    {fr->colorScaleLogCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 277:
#line 885 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),(FrScale::ClipMode)(yyvsp[(9) - (13)].integer),100,(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 278:
#line 887 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),FrScale::AUTOCUT,(yyvsp[(9) - (13)].real),(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 279:
#line 889 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),(FrScale::ClipMode)(yyvsp[(9) - (12)].integer),100,FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 280:
#line 894 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),FrScale::AUTOCUT,(yyvsp[(9) - (12)].real),FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 281:
#line 898 "frame/parser.Y"
    {fr->contourCreatePolygonCmd();;}
    break;

  case 282:
#line 901 "frame/parser.Y"
    {fr->contourDeleteCmd();;}
    break;

  case 283:
#line 902 "frame/parser.Y"
    {fr->contourDeleteAuxCmd();;}
    break;

  case 284:
#line 905 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 285:
#line 906 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 286:
#line 908 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourLoadCmd((yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer),(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer));
	;}
    break;

  case 287:
#line 914 "frame/parser.Y"
    {(yyval.integer) = FrScale::MINMAX;;}
    break;

  case 288:
#line 915 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZSCALE;;}
    break;

  case 289:
#line 916 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZMAX;;}
    break;

  case 290:
#line 917 "frame/parser.Y"
    {(yyval.integer) = FrScale::USERCLIP;;}
    break;

  case 291:
#line 920 "frame/parser.Y"
    {(yyval.integer) = FrScale::GLOBAL;;}
    break;

  case 292:
#line 921 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOCAL;;}
    break;

  case 293:
#line 924 "frame/parser.Y"
    {(yyval.integer) = FVContour::SMOOTH;;}
    break;

  case 294:
#line 925 "frame/parser.Y"
    {(yyval.integer) = FVContour::BLOCK;;}
    break;

  case 295:
#line 928 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 296:
#line 929 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 297:
#line 933 "frame/parser.Y"
    {fr->contourSaveCmd((yyvsp[(1) - (3)].str), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 298:
#line 935 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (4)].str),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 299:
#line 938 "frame/parser.Y"
    {fr->cropCmd();;}
    break;

  case 300:
#line 940 "frame/parser.Y"
    {fr->cropCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 301:
#line 943 "frame/parser.Y"
    {fr->cropCenterCmd(Vector((yyvsp[(2) - (8)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), Vector((yyvsp[(5) - (8)].real),(yyvsp[(6) - (8)].real)), (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 303:
#line 945 "frame/parser.Y"
    {fr->cropBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 304:
#line 946 "frame/parser.Y"
    {fr->cropMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 305:
#line 947 "frame/parser.Y"
    {fr->cropEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 306:
#line 950 "frame/parser.Y"
    {fr->crop3dCmd();;}
    break;

  case 307:
#line 951 "frame/parser.Y"
    {fr->crop3dCmd((yyvsp[(1) - (3)].real), (yyvsp[(2) - (3)].real), (Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 308:
#line 952 "frame/parser.Y"
    {fr->crop3dBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 309:
#line 953 "frame/parser.Y"
    {fr->crop3dMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 310:
#line 954 "frame/parser.Y"
    {fr->crop3dEndCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 311:
#line 958 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), (Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 312:
#line 960 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 313:
#line 961 "frame/parser.Y"
    {fr->crosshairCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 314:
#line 962 "frame/parser.Y"
    {fr->crosshairWarpCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 315:
#line 965 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)), (Coord::InternalSystem)(yyvsp[(3) - (5)].integer));;}
    break;

  case 316:
#line 967 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 317:
#line 969 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer));;}
    break;

  case 318:
#line 971 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 319:
#line 974 "frame/parser.Y"
    {fr->axesOrderCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 320:
#line 977 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 321:
#line 978 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 322:
#line 979 "frame/parser.Y"
    {(yyval.integer) = Base::SUM;;}
    break;

  case 323:
#line 982 "frame/parser.Y"
    {fr->fitsyHasExtCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 324:
#line 985 "frame/parser.Y"
    {fr->getBgColorCmd();;}
    break;

  case 338:
#line 999 "frame/parser.Y"
    {fr->getDATASECCmd();;}
    break;

  case 341:
#line 1002 "frame/parser.Y"
    {fr->getHistogramCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].integer));;}
    break;

  case 342:
#line 1004 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(3) - (9)].str),(yyvsp[(4) - (9)].str),Vector((yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real)),(Coord::InternalSystem)(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(Base::CutMethod)(yyvsp[(9) - (9)].integer));;}
    break;

  case 345:
#line 1007 "frame/parser.Y"
    {fr->getIRAFAlignCmd();;}
    break;

  case 346:
#line 1008 "frame/parser.Y"
    {fr->getMinMaxCmd();;}
    break;

  case 349:
#line 1011 "frame/parser.Y"
    {fr->getNANColorCmd();;}
    break;

  case 350:
#line 1012 "frame/parser.Y"
    {fr->getOrientCmd();;}
    break;

  case 352:
#line 1015 "frame/parser.Y"
    {fr->getPixelTableCmd(Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (Coord::InternalSystem)(yyvsp[(3) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(7) - (8)].integer), (yyvsp[(8) - (8)].str));;}
    break;

  case 354:
#line 1017 "frame/parser.Y"
    {fr->getRotateCmd();;}
    break;

  case 356:
#line 1019 "frame/parser.Y"
    {fr->getThreadsCmd();;}
    break;

  case 358:
#line 1021 "frame/parser.Y"
    {fr->getTypeCmd();;}
    break;

  case 359:
#line 1023 "frame/parser.Y"
    {fr->getValueCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 360:
#line 1025 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(3) - (9)].str),(yyvsp[(4) - (9)].str),Vector((yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real)),(Coord::InternalSystem)(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(Base::CutMethod)(yyvsp[(9) - (9)].integer));;}
    break;

  case 362:
#line 1027 "frame/parser.Y"
    {fr->getZoomCmd();;}
    break;

  case 363:
#line 1030 "frame/parser.Y"
    {fr->getBinDepthCmd();;}
    break;

  case 364:
#line 1031 "frame/parser.Y"
    {fr->getBinFactorCmd();;}
    break;

  case 365:
#line 1032 "frame/parser.Y"
    {fr->getBinFunctionCmd();;}
    break;

  case 366:
#line 1033 "frame/parser.Y"
    {fr->getBinBufferSizeCmd();;}
    break;

  case 367:
#line 1034 "frame/parser.Y"
    {fr->getBinCursorCmd();;}
    break;

  case 368:
#line 1035 "frame/parser.Y"
    {fr->getBinFilterCmd();;}
    break;

  case 370:
#line 1037 "frame/parser.Y"
    {fr->getBinListCmd();;}
    break;

  case 371:
#line 1040 "frame/parser.Y"
    {fr->getBinColsCmd();;}
    break;

  case 372:
#line 1041 "frame/parser.Y"
    {fr->getBinColsMinMaxCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 373:
#line 1042 "frame/parser.Y"
    {fr->getBinColsDimCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 374:
#line 1045 "frame/parser.Y"
    {fr->getBlockCmd();;}
    break;

  case 375:
#line 1048 "frame/parser.Y"
    {fr->getClipCmd();;}
    break;

  case 376:
#line 1050 "frame/parser.Y"
    {fr->getClipCmd((FrScale::ClipMode)(yyvsp[(1) - (2)].integer), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 377:
#line 1052 "frame/parser.Y"
    {fr->getClipCmd((yyvsp[(1) - (2)].real), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 378:
#line 1053 "frame/parser.Y"
    {fr->getClipScopeCmd();;}
    break;

  case 379:
#line 1054 "frame/parser.Y"
    {fr->getClipModeCmd();;}
    break;

  case 381:
#line 1056 "frame/parser.Y"
    {fr->getClipUserCmd();;}
    break;

  case 383:
#line 1059 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	;}
    break;

  case 384:
#line 1065 "frame/parser.Y"
    {fr->getClipMinMaxModeCmd();;}
    break;

  case 385:
#line 1066 "frame/parser.Y"
    {fr->getClipMinMaxSampleCmd();;}
    break;

  case 386:
#line 1069 "frame/parser.Y"
    {fr->getClipZScaleContrastCmd();;}
    break;

  case 387:
#line 1070 "frame/parser.Y"
    {fr->getClipZScaleSampleCmd();;}
    break;

  case 388:
#line 1071 "frame/parser.Y"
    {fr->getClipZScaleLineCmd();;}
    break;

  case 389:
#line 1074 "frame/parser.Y"
    {fr->getColorbarCmd();;}
    break;

  case 390:
#line 1075 "frame/parser.Y"
    {fr->getColorbarTagCmd();;}
    break;

  case 392:
#line 1081 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 393:
#line 1083 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 394:
#line 1085 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 395:
#line 1088 "frame/parser.Y"
    {fr->getColorScaleCmd();;}
    break;

  case 397:
#line 1090 "frame/parser.Y"
    {fr->getColorScaleLogCmd();;}
    break;

  case 398:
#line 1094 "frame/parser.Y"
    {fr->getColorScaleLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 399:
#line 1098 "frame/parser.Y"
    {fr->getContourCmd((Coord::CoordSystem)(yyvsp[(1) - (2)].integer),(Coord::SkyFrame)(yyvsp[(2) - (2)].integer));;}
    break;

  case 401:
#line 1100 "frame/parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 402:
#line 1101 "frame/parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 403:
#line 1102 "frame/parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 404:
#line 1103 "frame/parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 405:
#line 1104 "frame/parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 407:
#line 1106 "frame/parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 408:
#line 1107 "frame/parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 409:
#line 1110 "frame/parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 410:
#line 1111 "frame/parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 411:
#line 1112 "frame/parser.Y"
    {fr->getContourClipScopeCmd();;}
    break;

  case 412:
#line 1115 "frame/parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 413:
#line 1116 "frame/parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 414:
#line 1120 "frame/parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 415:
#line 1122 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 416:
#line 1128 "frame/parser.Y"
    {fr->getCoord3axisCmd((yyvsp[(1) - (4)].real), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 417:
#line 1132 "frame/parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 418:
#line 1134 "frame/parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 419:
#line 1135 "frame/parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 420:
#line 1138 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 421:
#line 1140 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 422:
#line 1141 "frame/parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 423:
#line 1144 "frame/parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 424:
#line 1147 "frame/parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 425:
#line 1149 "frame/parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 426:
#line 1153 "frame/parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 427:
#line 1155 "frame/parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 428:
#line 1158 "frame/parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 429:
#line 1162 "frame/parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 430:
#line 1163 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 431:
#line 1165 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)), (Coord::InternalSystem)(yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 432:
#line 1168 "frame/parser.Y"
    {fr->iisGetCmd((char*)(yyvsp[(1) - (5)].ptr),(yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 433:
#line 1169 "frame/parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 435:
#line 1173 "frame/parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 436:
#line 1174 "frame/parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 437:
#line 1175 "frame/parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 438:
#line 1178 "frame/parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 439:
#line 1180 "frame/parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 440:
#line 1181 "frame/parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 442:
#line 1183 "frame/parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 446:
#line 1187 "frame/parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 447:
#line 1188 "frame/parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 448:
#line 1189 "frame/parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 449:
#line 1191 "frame/parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::DistFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 451:
#line 1193 "frame/parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 452:
#line 1196 "frame/parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 453:
#line 1198 "frame/parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 454:
#line 1200 "frame/parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 455:
#line 1201 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 456:
#line 1202 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 457:
#line 1203 "frame/parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 458:
#line 1206 "frame/parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 459:
#line 1207 "frame/parser.Y"
    {fr->getFitsDepthCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 460:
#line 1211 "frame/parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 461:
#line 1213 "frame/parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 462:
#line 1216 "frame/parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 463:
#line 1219 "frame/parser.Y"
    {fr->getFitsSliceCmd(2);;}
    break;

  case 464:
#line 1220 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 465:
#line 1221 "frame/parser.Y"
    {fr->getFitsSliceCmd(2, (Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 466:
#line 1222 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (2)].integer), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 467:
#line 1225 "frame/parser.Y"
    {fr->getGridCmd();;}
    break;

  case 468:
#line 1226 "frame/parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 469:
#line 1227 "frame/parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 470:
#line 1230 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 471:
#line 1231 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 472:
#line 1232 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 473:
#line 1235 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 474:
#line 1238 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 475:
#line 1239 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 476:
#line 1240 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 477:
#line 1243 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 478:
#line 1244 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 479:
#line 1245 "frame/parser.Y"
    {fr->getSmoothRadiusMinorCmd();;}
    break;

  case 480:
#line 1246 "frame/parser.Y"
    {fr->getSmoothSigmaCmd();;}
    break;

  case 481:
#line 1247 "frame/parser.Y"
    {fr->getSmoothSigmaMinorCmd();;}
    break;

  case 482:
#line 1248 "frame/parser.Y"
    {fr->getSmoothAngleCmd();;}
    break;

  case 487:
#line 1255 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 488:
#line 1256 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 489:
#line 1257 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 490:
#line 1260 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 491:
#line 1261 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 492:
#line 1264 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 493:
#line 1265 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 494:
#line 1268 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 495:
#line 1269 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 496:
#line 1272 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 497:
#line 1273 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 498:
#line 1276 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 500:
#line 1278 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 501:
#line 1281 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 502:
#line 1282 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 504:
#line 1286 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 505:
#line 1290 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), 
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 506:
#line 1293 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer), 
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 507:
#line 1300 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 508:
#line 1301 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 509:
#line 1304 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 512:
#line 1307 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 513:
#line 1308 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 514:
#line 1309 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 515:
#line 1310 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 517:
#line 1312 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 518:
#line 1313 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 519:
#line 1314 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 521:
#line 1316 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 522:
#line 1317 "frame/parser.Y"
    {fr->hasImageCmd();;}
    break;

  case 523:
#line 1318 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 524:
#line 1319 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 526:
#line 1323 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 527:
#line 1326 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 528:
#line 1327 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 529:
#line 1330 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 530:
#line 1331 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 531:
#line 1332 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 532:
#line 1333 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 533:
#line 1336 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 534:
#line 1337 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 535:
#line 1338 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 536:
#line 1339 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 537:
#line 1342 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 538:
#line 1343 "frame/parser.Y"
    {fr->hasWCSEquCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 539:
#line 1344 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 540:
#line 1345 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 541:
#line 1346 "frame/parser.Y"
    {fr->hasWCS3DCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 542:
#line 1349 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 543:
#line 1350 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 544:
#line 1351 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 547:
#line 1355 "frame/parser.Y"
    {fr->iisSetCmd((const char*)(yyvsp[(2) - (6)].ptr),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 548:
#line 1356 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 549:
#line 1359 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 550:
#line 1362 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 551:
#line 1363 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 552:
#line 1367 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 553:
#line 1369 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 554:
#line 1370 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 561:
#line 1382 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 562:
#line 1384 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 563:
#line 1386 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 564:
#line 1387 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 565:
#line 1389 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 566:
#line 1391 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 567:
#line 1393 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 568:
#line 1395 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 569:
#line 1397 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 571:
#line 1401 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 572:
#line 1402 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 573:
#line 1403 "frame/parser.Y"
    {fr->loadArrayRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 574:
#line 1404 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 575:
#line 1405 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 576:
#line 1407 "frame/parser.Y"
    {fr->loadArrayRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 577:
#line 1408 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 578:
#line 1409 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 579:
#line 1410 "frame/parser.Y"
    {fr->loadArrayRGBCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 580:
#line 1413 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 581:
#line 1417 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 582:
#line 1419 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 583:
#line 1421 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 584:
#line 1423 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 585:
#line 1425 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 586:
#line 1427 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 587:
#line 1429 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 588:
#line 1431 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), 
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 589:
#line 1434 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 590:
#line 1436 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 591:
#line 1438 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 597:
#line 1446 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 598:
#line 1447 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 599:
#line 1448 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 600:
#line 1449 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 601:
#line 1450 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 602:
#line 1451 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 603:
#line 1453 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 604:
#line 1455 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 605:
#line 1456 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 606:
#line 1457 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 607:
#line 1458 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 608:
#line 1461 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 609:
#line 1462 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 610:
#line 1463 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 611:
#line 1464 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 612:
#line 1465 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 613:
#line 1467 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 614:
#line 1468 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 615:
#line 1469 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 616:
#line 1470 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 622:
#line 1481 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS, 
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 623:
#line 1484 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 624:
#line 1487 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 625:
#line 1490 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 626:
#line 1493 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 627:
#line 1496 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 628:
#line 1499 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 629:
#line 1502 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 630:
#line 1505 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 631:
#line 1510 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 632:
#line 1513 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 633:
#line 1516 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 634:
#line 1519 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 635:
#line 1522 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 636:
#line 1525 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 637:
#line 1528 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 638:
#line 1531 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 639:
#line 1534 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 640:
#line 1537 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 641:
#line 1540 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 642:
#line 1545 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 643:
#line 1548 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 644:
#line 1551 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 645:
#line 1554 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 646:
#line 1557 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 647:
#line 1560 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 648:
#line 1563 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 649:
#line 1566 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 650:
#line 1569 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 651:
#line 1574 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 652:
#line 1577 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 653:
#line 1580 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 654:
#line 1583 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 655:
#line 1586 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 656:
#line 1589 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 657:
#line 1592 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 658:
#line 1595 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 659:
#line 1598 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 660:
#line 1601 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 661:
#line 1604 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 662:
#line 1609 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 663:
#line 1610 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 664:
#line 1611 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 665:
#line 1612 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 666:
#line 1613 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 667:
#line 1615 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 668:
#line 1616 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 669:
#line 1617 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 670:
#line 1618 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 671:
#line 1620 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 672:
#line 1621 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 673:
#line 1622 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 674:
#line 1623 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 675:
#line 1624 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 676:
#line 1625 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 677:
#line 1627 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 678:
#line 1629 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 679:
#line 1630 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 680:
#line 1631 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 681:
#line 1632 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 682:
#line 1635 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 683:
#line 1636 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 684:
#line 1637 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 685:
#line 1638 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 686:
#line 1639 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 687:
#line 1641 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 688:
#line 1642 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 689:
#line 1643 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 690:
#line 1644 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 691:
#line 1648 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 692:
#line 1650 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 693:
#line 1651 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 694:
#line 1653 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 695:
#line 1655 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 696:
#line 1657 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 697:
#line 1660 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 698:
#line 1661 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 699:
#line 1664 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 700:
#line 1665 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 701:
#line 1666 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 702:
#line 1669 "frame/parser.Y"
    {
#ifdef MAC_OSX_TK
	  fr->macosxPrintCmd();
#endif
	;}
    break;

  case 703:
#line 1676 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 704:
#line 1677 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 705:
#line 1678 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 706:
#line 1679 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 707:
#line 1680 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 708:
#line 1681 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 709:
#line 1682 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 710:
#line 1686 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 712:
#line 1694 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 713:
#line 1695 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 714:
#line 1697 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 715:
#line 1699 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 716:
#line 1700 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 717:
#line 1701 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 719:
#line 1702 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 720:
#line 1703 "frame/parser.Y"
    {fr->markerDeleteCmd();;}
    break;

  case 721:
#line 1704 "frame/parser.Y"
    {fr->markerDeleteAllCmd();;}
    break;

  case 723:
#line 1706 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 724:
#line 1707 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 725:
#line 1709 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 726:
#line 1711 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 727:
#line 1713 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 728:
#line 1716 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 729:
#line 1718 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 730:
#line 1719 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 731:
#line 1721 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 732:
#line 1724 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (7)].integer), (yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real), (yyvsp[(6) - (7)].integer), (Coord::InternalSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 733:
#line 1726 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 734:
#line 1729 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 735:
#line 1731 "frame/parser.Y"
    {fr->markerBoxFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 736:
#line 1733 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), Vector((yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real)), 
	    Vector((yyvsp[(6) - (8)].real), (yyvsp[(6) - (8)].real)*(yyvsp[(5) - (8)].real)/(yyvsp[(4) - (8)].real)), (yyvsp[(7) - (8)].integer), (Coord::InternalSystem)(yyvsp[(8) - (8)].integer));;}
    break;

  case 737:
#line 1737 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 738:
#line 1740 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 739:
#line 1743 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (Coord::InternalSystem)(yyvsp[(6) - (6)].integer));;}
    break;

  case 740:
#line 1745 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)), 
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 741:
#line 1748 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 742:
#line 1752 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 743:
#line 1756 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 744:
#line 1761 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 745:
#line 1765 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 746:
#line 1766 "frame/parser.Y"
    {fr->markerCircleFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 747:
#line 1768 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].real), (Coord::InternalSystem)(yyvsp[(5) - (5)].integer));;}
    break;

  case 748:
#line 1770 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 749:
#line 1771 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 750:
#line 1773 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 751:
#line 1775 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 752:
#line 1777 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].real),(Coord::InternalSystem)(yyvsp[(5) - (5)].integer));;}
    break;

  case 753:
#line 1779 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 754:
#line 1781 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 755:
#line 1782 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 756:
#line 1784 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 757:
#line 1786 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 758:
#line 1789 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 759:
#line 1793 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 760:
#line 1797 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 761:
#line 1799 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 762:
#line 1801 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 763:
#line 1803 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 764:
#line 1805 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 765:
#line 1807 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 766:
#line 1809 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 767:
#line 1811 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 768:
#line 1813 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 769:
#line 1815 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 770:
#line 1817 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 771:
#line 1819 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 772:
#line 1821 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 773:
#line 1823 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 774:
#line 1824 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 775:
#line 1826 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 776:
#line 1828 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 777:
#line 1829 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 778:
#line 1830 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 779:
#line 1832 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 780:
#line 1834 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 781:
#line 1835 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 782:
#line 1836 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 783:
#line 1837 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 784:
#line 1839 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 785:
#line 1840 "frame/parser.Y"
    {fr->markerEllipseFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 786:
#line 1842 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(4) - (6)].real), (yyvsp[(5) - (6)].real)), (Coord::InternalSystem)(yyvsp[(6) - (6)].integer));;}
    break;

  case 787:
#line 1844 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 788:
#line 1848 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), 
	    Vector((yyvsp[(6) - (8)].real),(yyvsp[(6) - (8)].real)*(yyvsp[(5) - (8)].real)/(yyvsp[(4) - (8)].real)), (yyvsp[(7) - (8)].integer), (Coord::InternalSystem)(yyvsp[(8) - (8)].integer));;}
    break;

  case 789:
#line 1852 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 790:
#line 1855 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 791:
#line 1858 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 792:
#line 1862 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 793:
#line 1866 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 794:
#line 1871 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 795:
#line 1875 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 796:
#line 1876 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 797:
#line 1877 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 798:
#line 1879 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 799:
#line 1881 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(5) - (6)].vector)), Vector((yyvsp[(6) - (6)].vector)), (Coord::InternalSystem)(yyvsp[(4) - (6)].integer));;}
    break;

  case 800:
#line 1883 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 801:
#line 1887 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 802:
#line 1888 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 803:
#line 1889 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 804:
#line 1891 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)), (Coord::InternalSystem)(yyvsp[(4) - (6)].integer));;}
    break;

  case 805:
#line 1893 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 806:
#line 1896 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),(Coord::InternalSystem)(yyvsp[(6) - (6)].integer));;}
    break;

  case 807:
#line 1898 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 808:
#line 1901 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),(Coord::InternalSystem)(yyvsp[(6) - (6)].integer));;}
    break;

  case 809:
#line 1903 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 810:
#line 1906 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 811:
#line 1907 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 812:
#line 1909 "frame/parser.Y"
    {fr->markerPolygonFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 813:
#line 1911 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(4) - (6)].vector)), Vector((yyvsp[(5) - (6)].vector)),
	    (Coord::InternalSystem)(yyvsp[(3) - (6)].integer), (yyvsp[(6) - (6)].real));;}
    break;

  case 814:
#line 1915 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 815:
#line 1919 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 816:
#line 1921 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 817:
#line 1922 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 818:
#line 1924 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(5) - (6)].vector)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::InternalSystem)(yyvsp[(4) - (6)].integer));;}
    break;

  case 819:
#line 1927 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 820:
#line 1930 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 821:
#line 1933 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 822:
#line 1934 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 823:
#line 1936 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 824:
#line 1937 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 825:
#line 1938 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 826:
#line 1940 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 827:
#line 1941 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 828:
#line 1943 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 829:
#line 1945 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(5) - (7)].vector)), (Coord::InternalSystem)(yyvsp[(4) - (7)].integer), (yyvsp[(6) - (7)].real), (yyvsp[(7) - (7)].real));;}
    break;

  case 830:
#line 1948 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 831:
#line 1951 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 832:
#line 1953 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 833:
#line 1954 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 837:
#line 1959 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 838:
#line 1960 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 839:
#line 1962 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 840:
#line 1964 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 841:
#line 1966 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 842:
#line 1967 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 843:
#line 1969 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer));;}
    break;

  case 844:
#line 1970 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 847:
#line 1975 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 848:
#line 1976 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 849:
#line 1977 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 850:
#line 1978 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 851:
#line 1979 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 852:
#line 1980 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 853:
#line 1981 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 854:
#line 1982 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 855:
#line 1983 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 856:
#line 1984 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 857:
#line 1986 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (5)].str),Vector((yyvsp[(5) - (5)].vector)),(Coord::InternalSystem)(yyvsp[(4) - (5)].integer));;}
    break;

  case 858:
#line 1988 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 859:
#line 1990 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 860:
#line 1991 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 861:
#line 1992 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 862:
#line 1993 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 863:
#line 1994 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 864:
#line 1996 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 865:
#line 1997 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 866:
#line 1998 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 867:
#line 1999 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 868:
#line 2000 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 869:
#line 2002 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 870:
#line 2003 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 871:
#line 2004 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 872:
#line 2005 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 873:
#line 2006 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 874:
#line 2007 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 875:
#line 2010 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 876:
#line 2011 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 877:
#line 2012 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 878:
#line 2013 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 879:
#line 2014 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 880:
#line 2015 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 881:
#line 2016 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 882:
#line 2017 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 883:
#line 2018 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 884:
#line 2019 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 885:
#line 2020 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 886:
#line 2021 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 887:
#line 2022 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 888:
#line 2023 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 889:
#line 2024 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 890:
#line 2025 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 891:
#line 2026 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 892:
#line 2027 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 893:
#line 2028 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 894:
#line 2029 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 895:
#line 2030 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 896:
#line 2033 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 897:
#line 2034 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 898:
#line 2035 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 899:
#line 2036 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 900:
#line 2037 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 901:
#line 2039 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 902:
#line 2049 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 903:
#line 2057 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 904:
#line 2066 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 905:
#line 2074 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 906:
#line 2081 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 907:
#line 2088 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 908:
#line 2096 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 909:
#line 2104 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 910:
#line 2109 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 911:
#line 2114 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 912:
#line 2119 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 913:
#line 2124 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 914:
#line 2129 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 915:
#line 2134 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 916:
#line 2139 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 917:
#line 2148 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer), 
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 918:
#line 2158 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS), 
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 919:
#line 2168 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 920:
#line 2177 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 921:
#line 2185 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont, 
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 922:
#line 2195 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 923:
#line 2205 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 924:
#line 2215 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 925:
#line 2227 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 926:
#line 2236 "frame/parser.Y"
    {fr->createCompositeCmd(
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 928:
#line 2244 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 929:
#line 2246 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 930:
#line 2248 "frame/parser.Y"
    { 
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 931:
#line 2253 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 932:
#line 2256 "frame/parser.Y"
    {(yyval.dash)[0] = (yyvsp[(1) - (2)].integer); (yyval.dash)[1] = (yyvsp[(2) - (2)].integer);;}
    break;

  case 933:
#line 2260 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 934:
#line 2262 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 935:
#line 2263 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 936:
#line 2266 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 937:
#line 2267 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 938:
#line 2268 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 939:
#line 2269 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 940:
#line 2270 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 941:
#line 2271 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 942:
#line 2272 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 944:
#line 2276 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 945:
#line 2277 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 946:
#line 2278 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 947:
#line 2279 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 948:
#line 2280 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 949:
#line 2283 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 950:
#line 2285 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 951:
#line 2287 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 952:
#line 2289 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer),(Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 953:
#line 2291 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 954:
#line 2293 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 955:
#line 2296 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 956:
#line 2298 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 957:
#line 2300 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 958:
#line 2302 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer),(Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 959:
#line 2304 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 960:
#line 2306 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 961:
#line 2308 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 962:
#line 2309 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 963:
#line 2310 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 964:
#line 2312 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 965:
#line 2314 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 966:
#line 2316 "frame/parser.Y"
    {fr->getMarkerBoxFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 967:
#line 2318 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 968:
#line 2320 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 969:
#line 2321 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 970:
#line 2322 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 971:
#line 2324 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 972:
#line 2326 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 973:
#line 2329 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), 
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 974:
#line 2331 "frame/parser.Y"
    {fr->getMarkerCircleFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 975:
#line 2333 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 976:
#line 2334 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 977:
#line 2335 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 978:
#line 2336 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 979:
#line 2338 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 980:
#line 2339 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 981:
#line 2340 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 982:
#line 2341 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 983:
#line 2342 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 984:
#line 2344 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 985:
#line 2346 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 986:
#line 2347 "frame/parser.Y"
    {fr->getMarkerEllipseFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 987:
#line 2349 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 988:
#line 2351 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 989:
#line 2353 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 990:
#line 2354 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 991:
#line 2356 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 992:
#line 2358 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 993:
#line 2359 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 994:
#line 2360 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 995:
#line 2361 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 996:
#line 2363 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 997:
#line 2365 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 998:
#line 2368 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 999:
#line 2371 "frame/parser.Y"
    {fr->getMarkerPolygonFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1000:
#line 2372 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1001:
#line 2373 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1002:
#line 2375 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1003:
#line 2378 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1004:
#line 2381 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1005:
#line 2382 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1006:
#line 2383 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1007:
#line 2384 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1008:
#line 2386 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1009:
#line 2388 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1010:
#line 2390 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1011:
#line 2391 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1012:
#line 2393 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1013:
#line 2394 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1014:
#line 2395 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1015:
#line 2396 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1016:
#line 2397 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1017:
#line 2399 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1018:
#line 2401 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1019:
#line 2403 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1020:
#line 2405 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1022:
#line 2407 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1023:
#line 2408 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1024:
#line 2410 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1025:
#line 2412 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1026:
#line 2413 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1027:
#line 2414 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1029:
#line 2416 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1031:
#line 2420 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1032:
#line 2421 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1033:
#line 2422 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1034:
#line 2423 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1035:
#line 2424 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1036:
#line 2425 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1037:
#line 2427 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1038:
#line 2428 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1039:
#line 2430 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1040:
#line 2433 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1041:
#line 2434 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1042:
#line 2435 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1043:
#line 2436 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1044:
#line 2439 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1045:
#line 2440 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1046:
#line 2443 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1047:
#line 2444 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1048:
#line 2447 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1049:
#line 2448 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1050:
#line 2451 "frame/parser.Y"
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

  case 1051:
#line 2464 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1052:
#line 2465 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1053:
#line 2469 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1054:
#line 2470 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1055:
#line 2474 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1056:
#line 2479 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer),
	    0, propQMask, propQValue, taglist);;}
    break;

  case 1057:
#line 2484 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer), 
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer),
	    1, propQMask, propQValue, taglist);;}
    break;

  case 1058:
#line 2490 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1059:
#line 2492 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].str),
	    (Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1060:
#line 2495 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1061:
#line 2497 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].integer),
	    (Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1062:
#line 2500 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (yyvsp[(4) - (6)].dash), (yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].str));;}
    break;

  case 1063:
#line 2503 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1064:
#line 2504 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1065:
#line 2505 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1066:
#line 2506 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1067:
#line 2507 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1068:
#line 2508 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1069:
#line 2510 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::InternalSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1070:
#line 2512 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1073:
#line 2519 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1074:
#line 2520 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1075:
#line 2521 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1076:
#line 2522 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1077:
#line 2523 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1078:
#line 2524 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1081:
#line 2529 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1082:
#line 2530 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1083:
#line 2531 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1084:
#line 2532 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1085:
#line 2533 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1086:
#line 2534 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1087:
#line 2535 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1088:
#line 2536 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1089:
#line 2537 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1090:
#line 2538 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1091:
#line 2539 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1094:
#line 2546 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1095:
#line 2547 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1097:
#line 2550 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1098:
#line 2551 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1099:
#line 2552 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1100:
#line 2553 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1101:
#line 2556 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1102:
#line 2557 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1105:
#line 2565 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1106:
#line 2568 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1107:
#line 2569 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1111:
#line 2576 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1112:
#line 2579 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1113:
#line 2583 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1114:
#line 2584 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1115:
#line 2585 "frame/parser.Y"
    {fr->maskMarkCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1116:
#line 2586 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1117:
#line 2589 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1118:
#line 2590 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1119:
#line 2591 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1120:
#line 2592 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1121:
#line 2596 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1122:
#line 2597 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1123:
#line 2599 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1124:
#line 2604 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1126:
#line 2606 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1128:
#line 2608 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1129:
#line 2611 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1130:
#line 2613 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1131:
#line 2618 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1132:
#line 2621 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1133:
#line 2622 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1134:
#line 2623 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1135:
#line 2626 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1136:
#line 2628 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1137:
#line 2632 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1138:
#line 2633 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1139:
#line 2637 "frame/parser.Y"
    {fr->psColorSpaceCmd((Widget::PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1140:
#line 2638 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1141:
#line 2639 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1142:
#line 2640 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  ;}
    break;

  case 1143:
#line 2645 "frame/parser.Y"
    {(yyval.integer) = Widget::BW;;}
    break;

  case 1144:
#line 2646 "frame/parser.Y"
    {(yyval.integer) = Widget::GRAY;;}
    break;

  case 1145:
#line 2647 "frame/parser.Y"
    {(yyval.integer) = Widget::RGB;;}
    break;

  case 1146:
#line 2648 "frame/parser.Y"
    {(yyval.integer) = Widget::CMYK;;}
    break;

  case 1149:
#line 2656 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1150:
#line 2658 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1151:
#line 2659 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1152:
#line 2660 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1153:
#line 2664 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1154:
#line 2665 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1155:
#line 2666 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1156:
#line 2667 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1157:
#line 2670 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1158:
#line 2671 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1159:
#line 2674 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1160:
#line 2675 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1161:
#line 2676 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1162:
#line 2679 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1163:
#line 2680 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1164:
#line 2681 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1165:
#line 2684 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1166:
#line 2685 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (2)].real))));;}
    break;

  case 1168:
#line 2687 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (2)].real))));;}
    break;

  case 1169:
#line 2688 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (3)].real))));;}
    break;

  case 1170:
#line 2691 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1171:
#line 2692 "frame/parser.Y"
    {fr->rotateMotionCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1172:
#line 2693 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1177:
#line 2700 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1178:
#line 2704 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1179:
#line 2706 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1180:
#line 2708 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1182:
#line 2713 "frame/parser.Y"
    {fr->saveArrayRGBCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1183:
#line 2715 "frame/parser.Y"
    {fr->saveArrayRGBCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1184:
#line 2717 "frame/parser.Y"
    {fr->saveArrayRGBCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1194:
#line 2730 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1195:
#line 2731 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1196:
#line 2732 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1197:
#line 2735 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1198:
#line 2736 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1199:
#line 2737 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1200:
#line 2740 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1201:
#line 2741 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1202:
#line 2742 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1203:
#line 2745 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1204:
#line 2746 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1205:
#line 2747 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1207:
#line 2751 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1208:
#line 2752 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1209:
#line 2753 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1210:
#line 2756 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1211:
#line 2757 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1212:
#line 2758 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1213:
#line 2761 "frame/parser.Y"
    {fr->saveFitsRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1214:
#line 2762 "frame/parser.Y"
    {fr->saveFitsRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1215:
#line 2763 "frame/parser.Y"
    {fr->saveFitsRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1216:
#line 2766 "frame/parser.Y"
    {fr->saveFitsRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1217:
#line 2767 "frame/parser.Y"
    {fr->saveFitsRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1218:
#line 2768 "frame/parser.Y"
    {fr->saveFitsRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1219:
#line 2771 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1220:
#line 2772 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1221:
#line 2773 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1222:
#line 2777 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1223:
#line 2779 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1224:
#line 2781 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1225:
#line 2785 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1226:
#line 2789 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1227:
#line 2790 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1228:
#line 2793 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1229:
#line 2794 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1230:
#line 2795 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1231:
#line 2796 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1232:
#line 2799 "frame/parser.Y"
    {fr->updateFitsCmd(0);;}
    break;

  case 1233:
#line 2801 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)),0);;}
    break;

  case 1234:
#line 2802 "frame/parser.Y"
    {fr->updateFitsCmd(1);;}
    break;

  case 1235:
#line 2804 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)),1);;}
    break;

  case 1237:
#line 2808 "frame/parser.Y"
    {fr->sliceCmd(2, (yyvsp[(1) - (1)].integer));;}
    break;

  case 1238:
#line 2809 "frame/parser.Y"
    {fr->sliceCmd(2, (yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1239:
#line 2810 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer), (yyvsp[(2) - (2)].integer));;}
    break;

  case 1240:
#line 2811 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (3)].integer), (yyvsp[(2) - (3)].real), (Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1241:
#line 2814 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1242:
#line 2815 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1243:
#line 2819 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1245:
#line 2821 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1248:
#line 2826 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1249:
#line 2827 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1250:
#line 2828 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1251:
#line 2831 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1252:
#line 2832 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1253:
#line 2833 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1254:
#line 2836 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1255:
#line 2838 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1256:
#line 2843 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (4)].integer), (FitsImage*)(yyvsp[(2) - (4)].ptr), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1257:
#line 2846 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1258:
#line 2853 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1259:
#line 2855 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1260:
#line 2857 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1261:
#line 2862 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1263:
#line 2866 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1264:
#line 2867 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1265:
#line 2868 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1266:
#line 2870 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1267:
#line 2872 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1268:
#line 2877 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 11080 "frame/parser.C"
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


#line 2881 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

