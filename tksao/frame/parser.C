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
#define YYFINAL  357
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5864

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  350
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  217
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1280
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2838

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
       0,     0,     3,     6,     9,    12,    16,    19,    21,    23,
      26,    30,    33,    36,    39,    42,    45,    48,    51,    54,
      57,    60,    63,    65,    68,    71,    75,    78,    81,    84,
      87,    91,    94,    98,   101,   104,   107,   110,   118,   121,
     123,   127,   130,   133,   136,   138,   141,   144,   147,   149,
     152,   154,   157,   160,   163,   166,   168,   170,   172,   174,
     177,   180,   183,   186,   189,   192,   195,   198,   201,   204,
     207,   209,   211,   213,   215,   217,   219,   221,   223,   225,
     226,   229,   232,   234,   236,   237,   239,   241,   243,   245,
     247,   249,   251,   254,   257,   260,   263,   265,   267,   269,
     271,   273,   275,   277,   279,   281,   283,   285,   287,   289,
     291,   293,   295,   297,   299,   301,   303,   305,   307,   309,
     311,   313,   315,   317,   319,   321,   323,   325,   327,   329,
     331,   333,   335,   337,   339,   341,   343,   345,   347,   349,
     351,   353,   355,   357,   359,   360,   362,   364,   366,   368,
     370,   372,   374,   376,   378,   380,   381,   383,   385,   386,
     388,   390,   392,   393,   395,   397,   398,   400,   402,   403,
     405,   407,   408,   410,   412,   414,   416,   418,   420,   422,
     423,   425,   427,   429,   431,   433,   435,   437,   438,   440,
     442,   443,   445,   447,   449,   451,   453,   456,   459,   462,
     465,   468,   471,   474,   476,   479,   481,   484,   486,   489,
     491,   494,   497,   504,   506,   509,   513,   517,   521,   525,
     529,   533,   537,   541,   545,   548,   553,   556,   559,   562,
     566,   569,   572,   574,   577,   579,   582,   587,   593,   596,
     600,   606,   613,   615,   617,   619,   627,   639,   648,   661,
     663,   666,   669,   671,   673,   676,   679,   682,   685,   689,
     692,   695,   697,   699,   701,   703,   705,   707,   709,   712,
     715,   718,   722,   725,   728,   731,   738,   749,   751,   754,
     756,   763,   774,   776,   779,   782,   785,   788,   791,   794,
     808,   822,   835,   848,   850,   851,   853,   855,   860,   867,
     869,   871,   873,   875,   877,   879,   881,   883,   885,   890,
     894,   899,   900,   907,   916,   919,   923,   927,   931,   932,
     936,   941,   946,   951,   955,   959,   961,   965,   971,   976,
     981,   985,   988,   989,   991,   993,   997,  1000,  1003,  1006,
    1009,  1012,  1015,  1018,  1021,  1024,  1027,  1030,  1033,  1036,
    1039,  1041,  1044,  1047,  1052,  1062,  1065,  1068,  1071,  1073,
    1077,  1080,  1083,  1085,  1088,  1097,  1100,  1102,  1105,  1107,
    1110,  1112,  1117,  1127,  1130,  1132,  1134,  1136,  1138,  1141,
    1143,  1145,  1148,  1150,  1151,  1154,  1157,  1159,  1160,  1163,
    1166,  1168,  1170,  1173,  1176,  1179,  1181,  1183,  1185,  1187,
    1189,  1191,  1192,  1194,  1197,  1199,  1204,  1210,  1211,  1214,
    1216,  1222,  1225,  1228,  1230,  1232,  1234,  1237,  1239,  1242,
    1244,  1246,  1247,  1249,  1251,  1252,  1254,  1260,  1267,  1272,
    1276,  1283,  1286,  1288,  1292,  1294,  1296,  1298,  1302,  1309,
    1317,  1323,  1325,  1327,  1332,  1338,  1340,  1344,  1345,  1347,
    1350,  1352,  1357,  1359,  1362,  1364,  1367,  1371,  1374,  1376,
    1379,  1381,  1386,  1389,  1391,  1393,  1397,  1399,  1402,  1406,
    1409,  1410,  1412,  1414,  1419,  1422,  1423,  1425,  1427,  1430,
    1431,  1433,  1435,  1437,  1439,  1441,  1443,  1445,  1447,  1449,
    1451,  1453,  1456,  1458,  1461,  1463,  1466,  1469,  1472,  1475,
    1477,  1479,  1481,  1482,  1484,  1485,  1487,  1488,  1490,  1491,
    1493,  1494,  1497,  1500,  1501,  1503,  1506,  1508,  1515,  1521,
    1523,  1525,  1527,  1530,  1533,  1535,  1537,  1539,  1541,  1544,
    1546,  1548,  1550,  1553,  1555,  1557,  1560,  1563,  1566,  1567,
    1569,  1570,  1572,  1574,  1576,  1578,  1580,  1582,  1584,  1586,
    1589,  1592,  1594,  1597,  1601,  1603,  1606,  1609,  1614,  1621,
    1623,  1634,  1636,  1639,  1643,  1647,  1650,  1653,  1656,  1659,
    1662,  1665,  1668,  1673,  1678,  1683,  1687,  1691,  1697,  1702,
    1707,  1712,  1716,  1720,  1724,  1728,  1731,  1734,  1739,  1743,
    1747,  1751,  1755,  1760,  1765,  1770,  1775,  1781,  1786,  1793,
    1801,  1806,  1811,  1817,  1820,  1824,  1828,  1832,  1835,  1839,
    1843,  1847,  1851,  1856,  1860,  1866,  1873,  1877,  1881,  1886,
    1890,  1894,  1898,  1902,  1906,  1912,  1916,  1920,  1925,  1929,
    1932,  1935,  1937,  1941,  1946,  1951,  1956,  1961,  1966,  1973,
    1978,  1983,  1989,  1994,  1999,  2004,  2009,  2015,  2020,  2027,
    2035,  2040,  2045,  2051,  2057,  2063,  2069,  2075,  2081,  2089,
    2095,  2101,  2108,  2114,  2120,  2126,  2132,  2139,  2145,  2153,
    2162,  2168,  2174,  2181,  2185,  2189,  2193,  2197,  2201,  2207,
    2211,  2215,  2220,  2224,  2228,  2232,  2236,  2241,  2245,  2251,
    2258,  2262,  2266,  2271,  2275,  2279,  2283,  2287,  2291,  2297,
    2301,  2305,  2310,  2315,  2320,  2324,  2330,  2335,  2340,  2343,
    2347,  2354,  2361,  2363,  2365,  2367,  2370,  2373,  2376,  2380,
    2384,  2387,  2400,  2403,  2406,  2408,  2412,  2417,  2420,  2421,
    2425,  2427,  2429,  2432,  2435,  2438,  2441,  2444,  2449,  2454,
    2459,  2463,  2468,  2474,  2482,  2491,  2498,  2503,  2512,  2522,
    2529,  2536,  2544,  2555,  2567,  2580,  2590,  2596,  2601,  2607,
    2614,  2618,  2624,  2630,  2636,  2643,  2649,  2654,  2664,  2675,
    2687,  2697,  2704,  2711,  2718,  2725,  2732,  2739,  2746,  2753,
    2760,  2768,  2776,  2779,  2784,  2789,  2794,  2799,  2805,  2810,
    2815,  2821,  2827,  2831,  2836,  2841,  2846,  2851,  2858,  2866,
    2875,  2885,  2892,  2903,  2915,  2928,  2938,  2942,  2945,  2949,
    2955,  2962,  2970,  2975,  2979,  2983,  2990,  2997,  3004,  3012,
    3019,  3027,  3032,  3037,  3042,  3049,  3059,  3064,  3068,  3073,
    3080,  3088,  3096,  3099,  3103,  3107,  3111,  3116,  3119,  3122,
    3127,  3135,  3146,  3150,  3152,  3156,  3159,  3162,  3165,  3168,
    3172,  3178,  3183,  3189,  3192,  3200,  3204,  3207,  3210,  3214,
    3217,  3220,  3223,  3227,  3230,  3234,  3239,  3243,  3247,  3253,
    3260,  3265,  3268,  3272,  3275,  3278,  3283,  3287,  3291,  3294,
    3298,  3300,  3303,  3305,  3308,  3311,  3314,  3316,  3318,  3320,
    3322,  3325,  3327,  3330,  3333,  3335,  3338,  3341,  3343,  3346,
    3348,  3350,  3352,  3354,  3356,  3358,  3360,  3362,  3363,  3365,
    3368,  3371,  3374,  3378,  3384,  3392,  3400,  3407,  3414,  3421,
    3428,  3434,  3441,  3448,  3455,  3462,  3469,  3476,  3483,  3495,
    3503,  3511,  3519,  3529,  3539,  3550,  3563,  3576,  3579,  3582,
    3586,  3591,  3596,  3601,  3604,  3609,  3614,  3616,  3618,  3620,
    3622,  3624,  3626,  3628,  3630,  3633,  3635,  3637,  3639,  3643,
    3647,  3652,  3659,  3670,  3678,  3686,  3692,  3697,  3704,  3715,
    3723,  3731,  3737,  3740,  3743,  3747,  3752,  3758,  3762,  3768,
    3774,  3778,  3783,  3789,  3795,  3801,  3805,  3811,  3814,  3818,
    3822,  3828,  3832,  3836,  3840,  3845,  3851,  3857,  3861,  3867,
    3873,  3877,  3882,  3888,  3894,  3897,  3900,  3904,  3910,  3917,
    3924,  3928,  3932,  3936,  3943,  3949,  3955,  3958,  3962,  3966,
    3972,  3979,  3983,  3986,  3989,  3993,  3996,  4000,  4003,  4007,
    4013,  4020,  4023,  4026,  4029,  4031,  4036,  4041,  4043,  4046,
    4049,  4052,  4055,  4058,  4061,  4064,  4068,  4071,  4075,  4078,
    4082,  4084,  4086,  4088,  4090,  4092,  4093,  4096,  4097,  4100,
    4101,  4103,  4104,  4105,  4107,  4109,  4111,  4113,  4115,  4123,
    4132,  4135,  4140,  4143,  4148,  4155,  4158,  4160,  4162,  4166,
    4170,  4172,  4176,  4181,  4184,  4186,  4190,  4194,  4199,  4203,
    4207,  4211,  4213,  4215,  4217,  4219,  4221,  4223,  4225,  4227,
    4229,  4231,  4233,  4235,  4237,  4239,  4242,  4243,  4244,  4247,
    4249,  4253,  4255,  4259,  4261,  4264,  4267,  4269,  4273,  4274,
    4275,  4278,  4281,  4283,  4287,  4293,  4295,  4298,  4301,  4304,
    4306,  4308,  4310,  4312,  4317,  4320,  4324,  4328,  4331,  4335,
    4338,  4341,  4344,  4348,  4352,  4356,  4359,  4363,  4365,  4369,
    4373,  4375,  4378,  4381,  4384,  4387,  4389,  4391,  4393,  4395,
    4398,  4401,  4405,  4409,  4411,  4414,  4418,  4422,  4424,  4427,
    4429,  4431,  4433,  4435,  4437,  4440,  4443,  4448,  4450,  4453,
    4456,  4459,  4463,  4465,  4467,  4469,  4472,  4475,  4478,  4481,
    4484,  4488,  4492,  4496,  4500,  4504,  4508,  4512,  4514,  4517,
    4520,  4523,  4527,  4530,  4534,  4538,  4541,  4544,  4547,  4550,
    4553,  4556,  4559,  4562,  4565,  4568,  4571,  4574,  4577,  4580,
    4584,  4588,  4592,  4595,  4598,  4601,  4604,  4607,  4610,  4613,
    4616,  4619,  4622,  4625,  4628,  4632,  4636,  4640,  4645,  4652,
    4654,  4656,  4658,  4660,  4662,  4663,  4669,  4671,  4678,  4682,
    4684,  4687,  4690,  4694,  4697,  4701,  4705,  4708,  4711,  4714,
    4717,  4720,  4723,  4727,  4730,  4733,  4737,  4739,  4743,  4748,
    4750,  4753,  4759,  4766,  4773,  4776,  4778,  4781,  4784,  4790,
    4797
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     351,     0,    -1,    96,   353,    -1,    20,   383,    -1,    44,
     385,    -1,    41,    66,     5,    -1,    46,   390,    -1,    59,
      -1,    64,    -1,    65,   392,    -1,    67,   282,     5,    -1,
      68,   397,    -1,    69,   399,    -1,    77,   400,    -1,    84,
     409,    -1,    86,   411,    -1,    87,   412,    -1,    95,   354,
      -1,   125,   414,    -1,   137,   415,    -1,   141,   457,    -1,
     144,   460,    -1,   149,    -1,   150,   354,    -1,   156,   466,
      -1,   162,    16,     4,    -1,   175,   469,    -1,   178,   487,
      -1,   179,   488,    -1,   180,   489,    -1,   183,   505,   490,
      -1,   184,   524,    -1,   197,    66,     5,    -1,   212,   525,
      -1,   213,   526,    -1,   214,   529,    -1,   235,    88,    -1,
     228,     4,     4,     4,     4,     4,     4,    -1,   226,   530,
      -1,   241,    -1,   238,   505,   532,    -1,   243,   537,    -1,
     245,   538,    -1,   250,   540,    -1,   263,    -1,   269,   555,
      -1,   285,     4,    -1,   286,   378,    -1,   297,    -1,   299,
     557,    -1,   305,    -1,   308,   559,    -1,   309,   560,    -1,
     339,   564,    -1,   345,   565,    -1,     3,    -1,     4,    -1,
     209,    -1,   208,    -1,    29,   354,    -1,   192,   354,    -1,
     215,   354,    -1,   217,   354,    -1,   309,   354,    -1,    44,
     354,    -1,    46,   354,    -1,    76,   354,    -1,    84,   354,
      -1,   142,   354,    -1,   243,   354,    -1,     4,    -1,   342,
      -1,   346,    -1,   209,    -1,   293,    -1,   202,    -1,   347,
      -1,   208,    -1,   119,    -1,    -1,   244,    38,    -1,   133,
      38,    -1,   244,    -1,   133,    -1,    -1,   357,    -1,   352,
      -1,     7,    -1,     8,    -1,     9,    -1,    10,    -1,    11,
      -1,   358,   358,    -1,   359,   360,    -1,   360,   360,    -1,
     352,   352,    -1,   157,    -1,   219,    -1,   101,    -1,    19,
      -1,   363,    -1,   309,    -1,   310,    -1,   311,    -1,   312,
      -1,   313,    -1,   314,    -1,   315,    -1,   316,    -1,   317,
      -1,   318,    -1,   319,    -1,   320,    -1,   321,    -1,   322,
      -1,   323,    -1,   324,    -1,   325,    -1,   326,    -1,   327,
      -1,   328,    -1,   329,    -1,   330,    -1,   331,    -1,   332,
      -1,   333,    -1,   334,    -1,   335,    -1,   336,    -1,    56,
      -1,   214,    -1,   173,    -1,   177,    -1,   227,    -1,   273,
      -1,   274,    -1,    28,    -1,   265,    -1,   151,    -1,    30,
      -1,   252,    -1,   247,    -1,    94,    -1,   163,    -1,    -1,
     127,    -1,   128,    -1,    35,    -1,   129,    -1,   164,    -1,
     154,    -1,   135,    -1,   278,    -1,   106,    -1,   148,    -1,
      -1,    97,    -1,   258,    -1,    -1,    97,    -1,    24,    -1,
      25,    -1,    -1,   262,    -1,   165,    -1,    -1,    17,    -1,
     159,    -1,    -1,   157,    -1,   184,    -1,    -1,    62,    -1,
      48,    -1,   102,    -1,    85,    -1,   348,    -1,    27,    -1,
      51,    -1,    -1,     4,    -1,    82,    -1,   152,    -1,   221,
      -1,   222,    -1,   236,    -1,   276,    -1,    -1,    32,    -1,
     279,    -1,    -1,   198,    -1,    42,    -1,    43,    -1,   170,
      -1,   171,    -1,   303,   382,    -1,    47,   379,    -1,    74,
     380,    -1,   150,   381,    -1,   186,   535,    -1,    37,   536,
      -1,   251,   352,    -1,   230,    -1,   287,   352,    -1,   354,
      -1,    66,     5,    -1,   354,    -1,    66,     5,    -1,   354,
      -1,    66,     5,    -1,   352,   352,    -1,   223,   352,   352,
     352,   352,   352,    -1,   241,    -1,   259,   384,    -1,    62,
     352,   352,    -1,   109,   352,   352,    -1,    48,   352,   352,
      -1,   225,   352,   352,    -1,   223,   352,   352,    -1,   304,
     352,   352,    -1,    22,   352,   352,    -1,   110,   352,   352,
      -1,    49,   352,   352,    -1,    12,   386,    -1,    71,     5,
       5,     5,    -1,   100,     4,    -1,   118,   387,    -1,   134,
     388,    -1,    53,   266,     4,    -1,   290,   389,    -1,   122,
       5,    -1,    59,    -1,   352,   352,    -1,   352,    -1,   352,
     352,    -1,   352,    12,   352,   352,    -1,   352,   352,    12,
     352,   352,    -1,   290,   352,    -1,   290,   352,   352,    -1,
     290,   352,    12,   352,   352,    -1,   290,   352,   352,    12,
     352,   352,    -1,    32,    -1,   279,    -1,   123,    -1,   352,
     352,    12,    59,     5,     5,     5,    -1,   352,   352,     4,
     352,   352,    12,    59,     5,     5,     5,     5,    -1,   352,
     352,    12,   352,   352,     5,     5,     5,    -1,   352,   352,
       4,   352,   352,    12,   352,   352,     5,     5,     5,     5,
      -1,   352,    -1,   352,   352,    -1,   290,   391,    -1,   123,
      -1,   352,    -1,   352,   352,    -1,   254,   393,    -1,   193,
     394,    -1,   187,   395,    -1,   300,   352,   352,    -1,   344,
     396,    -1,   230,   354,    -1,   138,    -1,   176,    -1,   352,
      -1,   187,    -1,   344,    -1,   343,    -1,   300,    -1,     4,
     366,    -1,   193,   366,    -1,   247,     4,    -1,   352,     4,
       4,    -1,    78,   352,    -1,   247,     4,    -1,   172,     4,
      -1,     4,   352,   352,     4,     6,     4,    -1,   243,   352,
     352,   352,   352,   352,   352,     4,     6,     4,    -1,    40,
      -1,   194,   398,    -1,   111,    -1,     4,   352,   352,     4,
       6,     4,    -1,   243,   352,   352,   352,   352,   352,   352,
       4,     6,     4,    -1,   365,    -1,   177,   352,    -1,    83,
     401,    -1,    99,   402,    -1,   175,   403,    -1,   216,   407,
      -1,   250,   408,    -1,     5,     4,     4,   406,     4,     4,
     365,   352,   404,   405,   352,   352,     5,    -1,     5,     4,
       4,   406,     4,     4,   365,   352,   352,   405,   352,   352,
       5,    -1,     5,     4,     4,   406,     4,     4,   365,   352,
     404,   352,   352,     5,    -1,     5,     4,     4,   406,     4,
       4,   365,   352,   352,   352,   352,     5,    -1,   225,    -1,
      -1,    31,    -1,     5,    -1,     5,     5,     4,   354,    -1,
       5,     4,   354,     5,   362,   367,    -1,   187,    -1,   344,
      -1,   343,    -1,   300,    -1,   138,    -1,   176,    -1,   269,
      -1,    46,    -1,     5,    -1,     5,     5,     4,   354,    -1,
       5,   362,   367,    -1,    31,     5,   362,   367,    -1,    -1,
     352,   352,   352,   352,   362,   367,    -1,    59,   361,   362,
     367,   352,   352,   362,   369,    -1,   286,   410,    -1,    40,
     352,   352,    -1,   194,   352,   352,    -1,   111,   352,   352,
      -1,    -1,   352,   352,   362,    -1,    40,   352,   352,     4,
      -1,   194,   352,   352,     4,    -1,   111,   352,   352,     4,
      -1,   364,   352,   352,    -1,   362,   367,   361,    -1,   354,
      -1,   308,   352,   352,    -1,    40,   194,   364,   352,   352,
      -1,   194,   364,   352,   352,    -1,    40,   194,   362,   361,
      -1,   194,   362,   361,    -1,    33,     4,    -1,    -1,    32,
      -1,   279,    -1,   144,   117,     5,    -1,    41,    66,    -1,
      44,   416,    -1,    46,   418,    -1,    65,   419,    -1,    68,
     423,    -1,    67,   422,    -1,    69,   425,    -1,    77,   427,
      -1,    79,   430,    -1,    84,   431,    -1,    86,   432,    -1,
      88,   434,    -1,    87,   433,    -1,    93,   435,    -1,    95,
      -1,   124,   439,    -1,   141,   445,    -1,   152,     5,     5,
       4,    -1,   153,    89,     5,     5,   352,   352,   364,     4,
     413,    -1,   156,   437,    -1,   160,   436,    -1,   162,    16,
      -1,   187,    -1,   183,   505,   499,    -1,   184,   446,    -1,
     197,    66,    -1,   212,    -1,   213,   447,    -1,   220,   281,
     364,   352,   352,     4,     4,     5,    -1,   243,   448,    -1,
     245,    -1,   269,   449,    -1,   285,    -1,   286,   450,    -1,
     294,    -1,   301,   364,   352,   352,    -1,   307,    89,     5,
       5,   352,   352,   364,     4,   413,    -1,   309,   455,    -1,
     345,    -1,   100,    -1,   118,    -1,   134,    -1,    53,   266,
      -1,    88,    -1,   122,    -1,    71,   417,    -1,   174,    -1,
      -1,   187,     5,    -1,   103,     5,    -1,   118,    -1,    -1,
     404,   405,    -1,   352,   405,    -1,   254,    -1,   193,    -1,
     187,   420,    -1,   300,   169,    -1,   344,   421,    -1,   230,
      -1,   193,    -1,   247,    -1,    78,    -1,   247,    -1,   172,
      -1,    -1,   282,    -1,   169,   424,    -1,     4,    -1,     4,
     364,   352,   352,    -1,     4,   352,   352,   365,   352,    -1,
      -1,   169,   426,    -1,   177,    -1,     4,   352,   352,   365,
     352,    -1,   362,   367,    -1,    65,   428,    -1,    66,    -1,
      91,    -1,   169,    -1,   206,   169,    -1,   186,    -1,    69,
     429,    -1,   269,    -1,   338,    -1,    -1,   193,    -1,   254,
      -1,    -1,   177,    -1,   352,   352,   362,   367,   368,    -1,
     364,   352,   352,   362,   367,   368,    -1,   352,   362,   362,
       4,    -1,   362,   367,   368,    -1,    59,   362,   367,   368,
     362,   369,    -1,   286,   362,    -1,   364,    -1,   362,   367,
     368,    -1,   277,    -1,    33,    -1,   364,    -1,   362,   367,
     368,    -1,   362,   367,   361,   352,   352,     5,    -1,     4,
     362,   367,   361,   352,   352,     5,    -1,   364,   352,   352,
       4,     4,    -1,     5,    -1,    65,    -1,   364,   352,   352,
       5,    -1,     6,     4,     4,     4,     4,    -1,    88,    -1,
     120,   196,   438,    -1,    -1,     4,    -1,   352,   352,    -1,
     199,    -1,    59,   362,   367,   368,    -1,    81,    -1,   100,
     442,    -1,    45,    -1,   117,   440,    -1,   120,   196,   443,
      -1,   146,   441,    -1,   147,    -1,   207,   196,    -1,   266,
      -1,   266,   362,   367,   369,    -1,   267,   444,    -1,   338,
      -1,     4,    -1,   364,   352,   352,    -1,     4,    -1,   166,
       5,    -1,     4,   166,     5,    -1,   309,     4,    -1,    -1,
       4,    -1,   355,    -1,   355,   364,   352,   352,    -1,   355,
       4,    -1,    -1,     4,    -1,   362,    -1,     4,   362,    -1,
      -1,   211,    -1,   302,    -1,    66,    -1,   182,    -1,   289,
      -1,   230,    -1,    61,    -1,   280,    -1,   303,    -1,   134,
      -1,   237,    -1,   237,   188,    -1,   264,    -1,   264,   188,
      -1,    21,    -1,   303,   454,    -1,    47,   451,    -1,    74,
     452,    -1,   150,   453,    -1,   186,    -1,    37,    -1,   251,
      -1,    -1,    66,    -1,    -1,    66,    -1,    -1,    66,    -1,
      -1,   223,    -1,    -1,    16,   456,    -1,   196,   363,    -1,
      -1,   224,    -1,    83,   458,    -1,    99,    -1,   362,   367,
     368,   459,     5,     5,    -1,   362,   367,   368,   459,     5,
      -1,    20,    -1,   233,    -1,    19,    -1,    44,   461,    -1,
      77,   462,    -1,    84,    -1,    94,    -1,    95,    -1,   101,
      -1,   124,   463,    -1,   141,    -1,   156,    -1,   163,    -1,
     183,   464,    -1,   219,    -1,   269,    -1,   280,   362,    -1,
     309,   465,    -1,    72,     5,    -1,    -1,    31,    -1,    -1,
      44,    -1,    87,    -1,   192,    -1,   150,    -1,   256,    -1,
     216,    -1,   295,    -1,   362,    -1,   115,   362,    -1,    58,
     362,    -1,    18,    -1,   286,   362,    -1,   200,     4,     4,
      -1,   116,    -1,   185,     5,    -1,    88,   468,    -1,   257,
     120,   196,   467,    -1,   257,     6,     4,     4,     4,     4,
      -1,   299,    -1,   309,   352,   352,   352,   352,   352,   352,
     352,   352,     4,    -1,     5,    -1,     5,     4,    -1,     4,
       4,    56,    -1,     4,     4,   362,    -1,   193,   354,    -1,
      26,   470,    -1,   112,   472,    -1,   124,   473,    -1,   159,
     486,    -1,   205,   484,    -1,   218,   485,    -1,     5,    14,
       5,   372,    -1,     5,    15,     5,   372,    -1,     5,    61,
       5,   372,    -1,     5,   190,   372,    -1,     5,   191,   372,
      -1,     5,   260,   370,     4,   372,    -1,     5,   270,     4,
     372,    -1,     5,   271,     4,   372,    -1,     5,   302,     5,
     372,    -1,   243,    87,   471,    -1,     5,    14,     5,    -1,
       5,    15,     5,    -1,     5,    61,     5,    -1,     5,   190,
      -1,     5,   191,    -1,     5,   260,   370,     4,    -1,     5,
     270,     4,    -1,     5,   271,     4,    -1,     5,   302,     5,
      -1,     5,     5,   268,    -1,     5,    14,     5,   372,    -1,
       5,    15,     5,   372,    -1,     5,    61,     5,   372,    -1,
       5,   190,   371,   372,    -1,     5,     5,   268,   371,   372,
      -1,     5,   191,   371,   372,    -1,     5,   260,   370,     4,
     371,   372,    -1,     5,   275,   370,     4,     4,   371,   372,
      -1,     5,   270,     4,   372,    -1,     5,   271,     4,   372,
      -1,     5,   302,     5,   371,   372,    -1,   267,   474,    -1,
     117,    87,   475,    -1,   243,   157,   483,    -1,   243,    87,
     482,    -1,   192,   476,    -1,     5,    14,     5,    -1,     5,
      15,     5,    -1,     5,    61,     5,    -1,     5,   190,   371,
      -1,     5,     5,   268,   371,    -1,     5,   191,   371,    -1,
       5,   260,   370,     4,   371,    -1,     5,   275,   370,     4,
       4,   371,    -1,     5,   270,     4,    -1,     5,   271,     4,
      -1,     5,   302,     5,   371,    -1,     5,    14,     5,    -1,
       5,    15,     5,    -1,     5,    61,     5,    -1,     5,   190,
     371,    -1,     5,   191,   371,    -1,     5,   260,   370,     4,
     371,    -1,     5,   270,     4,    -1,     5,   271,     4,    -1,
       5,   302,     5,   371,    -1,   157,   162,   477,    -1,   162,
     478,    -1,   157,   479,    -1,   480,    -1,   157,   337,   481,
      -1,     5,    14,     5,   372,    -1,     5,    15,     5,   372,
      -1,     5,    61,     5,   372,    -1,     5,   190,   371,   372,
      -1,     5,   191,   371,   372,    -1,     5,   260,   370,     4,
     371,   372,    -1,     5,   270,     4,   372,    -1,     5,   271,
       4,   372,    -1,     5,   302,     5,   371,   372,    -1,     5,
      14,     5,   372,    -1,     5,    15,     5,   372,    -1,     5,
      61,     5,   372,    -1,     5,   190,   371,   372,    -1,     5,
       5,   268,   371,   372,    -1,     5,   191,   371,   372,    -1,
       5,   260,   370,     4,   371,   372,    -1,     5,   275,   370,
       4,     4,   371,   372,    -1,     5,   270,     4,   372,    -1,
       5,   271,     4,   372,    -1,     5,   302,     5,   371,   372,
      -1,   363,     5,    14,     5,   372,    -1,   363,     5,    15,
       5,   372,    -1,   363,     5,    61,     5,   372,    -1,   363,
       5,   190,   371,   372,    -1,   363,     5,   191,   371,   372,
      -1,   363,     5,   260,   370,     4,   371,   372,    -1,   363,
       5,   270,     4,   372,    -1,   363,     5,   271,     4,   372,
      -1,   363,     5,   302,     5,   371,   372,    -1,   363,     5,
      14,     5,   372,    -1,   363,     5,    15,     5,   372,    -1,
     363,     5,    61,     5,   372,    -1,   363,     5,   190,   371,
     372,    -1,   363,     5,     5,   268,   371,   372,    -1,   363,
       5,   191,   371,   372,    -1,   363,     5,   260,   370,     4,
     371,   372,    -1,   363,     5,   275,   370,     4,     4,   371,
     372,    -1,   363,     5,   270,     4,   372,    -1,   363,     5,
     271,     4,   372,    -1,   363,     5,   302,     5,   371,   372,
      -1,     5,    14,     5,    -1,     5,    15,     5,    -1,     5,
      61,     5,    -1,     5,   190,   371,    -1,     5,   191,   371,
      -1,     5,   260,   370,     4,   371,    -1,     5,   270,     4,
      -1,     5,   271,     4,    -1,     5,   302,     5,   371,    -1,
       5,    14,     5,    -1,     5,    15,     5,    -1,     5,    61,
       5,    -1,     5,   190,   371,    -1,     5,     5,   268,   371,
      -1,     5,   191,   371,    -1,     5,   260,   370,     4,   371,
      -1,     5,   275,   370,     4,     4,   371,    -1,     5,   270,
       4,    -1,     5,   271,     4,    -1,     5,   302,     5,   371,
      -1,     5,    14,     5,    -1,     5,    15,     5,    -1,     5,
      61,     5,    -1,     5,   190,   371,    -1,     5,   191,   371,
      -1,     5,   260,   370,     4,   371,    -1,     5,   270,     4,
      -1,     5,   271,     4,    -1,     5,   302,     5,   371,    -1,
       5,    14,     5,   372,    -1,     5,    61,     5,   372,    -1,
       5,   190,   372,    -1,     5,   260,   370,     4,   372,    -1,
       5,   270,     4,   372,    -1,     5,   302,     5,   372,    -1,
       5,     5,    -1,   267,     5,     5,    -1,    93,     4,     4,
       4,     4,     4,    -1,   187,     4,     4,     4,     4,     4,
      -1,   111,    -1,   229,    -1,   354,    -1,   139,   354,    -1,
      88,   354,    -1,    66,     5,    -1,     5,     4,     4,    -1,
     299,   352,   352,    -1,   345,   352,    -1,     5,     5,   363,
     367,     5,     5,   363,   367,   352,   363,   369,     5,    -1,
      60,   493,    -1,    66,     5,    -1,    80,    -1,    73,   498,
       5,    -1,    73,   498,   302,     5,    -1,    75,    99,    -1,
      -1,    83,   491,   494,    -1,    89,    -1,    99,    -1,    99,
      17,    -1,   105,   497,    -1,   114,     4,    -1,   130,     5,
      -1,   150,    17,    -1,   150,   210,   352,   352,    -1,   150,
     291,   352,   352,    -1,     4,    20,   375,   354,    -1,     4,
      21,   357,    -1,     4,    21,   357,   364,    -1,     4,    21,
     357,   362,   367,    -1,     4,    22,   237,   352,   352,     4,
     364,    -1,     4,    22,   237,   352,   352,     4,   362,   369,
      -1,     4,    22,   237,     5,   362,   369,    -1,     4,    48,
     121,   354,    -1,     4,    49,   237,   352,   352,   352,     4,
     364,    -1,     4,    49,   237,   352,   352,   352,     4,   362,
     369,    -1,     4,    49,   237,     5,   362,   369,    -1,     4,
      48,   237,   352,   352,   364,    -1,     4,    48,   237,   352,
     352,   362,   369,    -1,     4,    52,   105,   357,   357,     4,
     352,   352,   352,     4,    -1,     4,    52,   105,   357,   357,
       4,   352,   352,   352,     4,   364,    -1,     4,    52,   105,
     357,   357,     4,   352,   352,   352,     4,   362,   367,    -1,
       4,    52,   105,     5,     5,   362,   367,   362,   369,    -1,
       4,    55,   492,     5,     5,    -1,     4,    62,   121,   354,
      -1,     4,    62,   237,   352,   364,    -1,     4,    62,   237,
     352,   362,   369,    -1,     4,    66,     5,    -1,     4,    74,
      27,   354,   354,    -1,     4,    74,   167,     5,     5,    -1,
       4,    74,   237,   352,   364,    -1,     4,    74,   237,   352,
     362,   369,    -1,     4,    74,   280,   362,   367,    -1,     4,
      75,   138,   354,    -1,     4,    82,   105,   357,   357,     4,
     352,   352,     4,    -1,     4,    82,   105,   357,   357,     4,
     352,   352,     4,   364,    -1,     4,    82,   105,   357,   357,
       4,   352,   352,     4,   362,   367,    -1,     4,    82,   105,
       5,     5,   362,   367,   362,   369,    -1,     4,    83,    22,
     237,   352,   352,    -1,     4,    83,    49,   237,   352,   352,
      -1,     4,    83,    52,    21,   352,   352,    -1,     4,    83,
      52,   237,   352,   352,    -1,     4,    83,   110,   237,   352,
     352,    -1,     4,    83,   113,    21,   352,   352,    -1,     4,
      83,   113,   237,   352,   352,    -1,     4,    83,    82,    21,
     352,   352,    -1,     4,    83,    82,   237,   352,   352,    -1,
       4,    83,   225,   306,     4,   352,   352,    -1,     4,    83,
     255,   306,     4,   352,   352,    -1,     4,    99,    -1,     4,
      99,    22,     4,    -1,     4,    99,    49,     4,    -1,     4,
      99,    52,     4,    -1,     4,    99,   110,     4,    -1,     4,
      99,    55,   492,     5,    -1,     4,    99,   113,     4,    -1,
       4,    99,    82,     4,    -1,     4,    99,   225,   306,     4,
      -1,     4,    99,   255,   306,     4,    -1,     4,    99,   282,
      -1,     4,    99,   282,     5,    -1,     4,    99,   282,     4,
      -1,     4,   105,    40,     4,    -1,     4,   109,   121,   354,
      -1,     4,   109,   237,   352,   352,   364,    -1,     4,   109,
     237,   352,   352,   362,   369,    -1,     4,   110,   237,   352,
     352,   352,     4,   364,    -1,     4,   110,   237,   352,   352,
     352,     4,   362,   369,    -1,     4,   110,   237,     5,   362,
     369,    -1,     4,   113,   105,   357,   357,     4,   352,   352,
     352,     4,    -1,     4,   113,   105,   357,   357,     4,   352,
     352,   352,     4,   364,    -1,     4,   113,   105,   357,   357,
       4,   352,   352,   352,     4,   362,   367,    -1,     4,   113,
     105,     5,     5,   362,   367,   362,   369,    -1,     4,   130,
       5,    -1,     4,   150,    -1,     4,   150,   210,    -1,     4,
     172,    27,   354,   354,    -1,     4,   172,   223,   364,   361,
     361,    -1,     4,   172,   223,   362,   367,   361,   361,    -1,
       4,   195,   352,   352,    -1,     4,   195,   132,    -1,     4,
     195,    36,    -1,     4,   195,   290,   364,   352,   352,    -1,
       4,   195,   290,   362,   367,   361,    -1,     4,   225,   241,
     352,   352,   364,    -1,     4,   225,   241,   352,   352,   362,
     369,    -1,     4,   255,   241,   352,   352,   364,    -1,     4,
     255,   241,   352,   352,   362,   369,    -1,     4,   223,   259,
     373,    -1,     4,   223,   266,     4,    -1,     4,   225,   121,
     354,    -1,     4,   231,   364,   361,   361,   352,    -1,     4,
     231,   362,   367,   361,   361,   352,   362,   369,    -1,     4,
     232,   511,   354,    -1,     4,   245,    40,    -1,     4,   246,
     131,     5,    -1,     4,   246,   223,   364,   361,   361,    -1,
       4,   246,   223,   362,   367,   361,   361,    -1,     4,   246,
     280,   362,   367,   362,   369,    -1,     4,   256,    -1,     4,
     256,   210,    -1,     4,   282,     5,    -1,     4,   284,     5,
      -1,     4,   284,   245,   354,    -1,     4,   296,    -1,     4,
     298,    -1,     4,   304,    27,   354,    -1,     4,   304,   223,
     364,   361,   352,   357,    -1,     4,   304,   223,   362,   367,
     361,   362,   369,   352,   357,    -1,     4,   338,     4,    -1,
     165,    -1,   165,   352,   352,    -1,   174,   506,    -1,   175,
     507,    -1,   195,   508,    -1,   230,   354,    -1,   232,   511,
     354,    -1,   232,   511,   354,   352,   352,    -1,   245,    40,
     352,   352,    -1,   245,   194,   352,   352,     4,    -1,   245,
     111,    -1,   250,     5,   498,   362,   367,   368,   354,    -1,
     250,   283,     5,    -1,   256,   515,    -1,   263,   516,    -1,
       5,    66,     5,    -1,     5,    80,    -1,     5,    99,    -1,
       5,    89,    -1,     5,   130,     5,    -1,     5,   150,    -1,
       5,   150,   210,    -1,     5,   195,   352,   352,    -1,     5,
     195,   132,    -1,     5,   195,    36,    -1,     5,   195,   290,
     364,   361,    -1,     5,   195,   290,   362,   367,   361,    -1,
       5,   232,   511,   354,    -1,     5,   256,    -1,     5,   256,
     210,    -1,     5,   296,    -1,     5,   298,    -1,   282,   105,
       5,     5,    -1,   282,    99,     5,    -1,   282,    99,    17,
      -1,   282,     5,    -1,   282,   299,     5,    -1,   216,    -1,
     216,   362,    -1,   295,    -1,   296,    17,    -1,   298,    17,
      -1,   338,     4,    -1,   256,    -1,   298,    -1,   150,    -1,
     296,    -1,    40,   195,    -1,   195,    -1,   111,   195,    -1,
      40,   105,    -1,   105,    -1,   111,   105,    -1,    40,   245,
      -1,   245,    -1,   111,   245,    -1,    99,    -1,   284,    -1,
      66,    -1,   338,    -1,   232,    -1,   130,    -1,   165,    -1,
     299,    -1,    -1,     4,    -1,    30,   354,    -1,   237,   352,
      -1,   161,     4,    -1,   211,     4,   352,    -1,    62,   352,
     352,   352,   512,    -1,   109,   352,   352,   352,   352,   356,
     512,    -1,    48,   352,   352,   352,   352,   356,   512,    -1,
     225,   352,   352,   352,   352,   512,    -1,   255,   352,   352,
     352,   352,   512,    -1,   172,   352,   352,   352,   352,   512,
      -1,   304,   352,   352,   352,   352,   512,    -1,   284,   352,
     352,   356,   512,    -1,    62,   223,   352,   352,   374,   512,
      -1,    48,   223,   352,   352,   374,   512,    -1,   102,   223,
     352,   352,   374,   512,    -1,    85,   223,   352,   352,   374,
     512,    -1,   348,   223,   352,   352,   374,   512,    -1,    27,
     223,   352,   352,   374,   512,    -1,    51,   223,   352,   352,
     374,   512,    -1,   246,   352,   352,   352,   352,   362,   367,
     362,   369,     5,   512,    -1,    74,   352,   352,   352,   362,
     367,   512,    -1,   231,   352,   352,   352,   352,   352,   512,
      -1,    22,   352,   352,   352,   352,     4,   512,    -1,   110,
     352,   352,   352,   352,   352,     4,   356,   512,    -1,    49,
     352,   352,   352,   352,   352,     4,   356,   512,    -1,    82,
     352,   352,   357,   357,     4,   352,   352,     4,   512,    -1,
     113,   352,   352,   357,   357,     4,   352,   352,   352,     4,
     356,   512,    -1,    52,   352,   352,   357,   357,     4,   352,
     352,   352,     4,   356,   512,    -1,    75,   512,    -1,   283,
     495,    -1,     5,   352,   352,    -1,   302,     5,   352,   352,
      -1,   352,   352,   302,     5,    -1,     5,   362,   367,   361,
      -1,     4,     4,    -1,    40,   352,   352,     4,    -1,   194,
     352,   352,     4,    -1,   111,    -1,   104,    -1,   340,    -1,
      63,    -1,   249,    -1,   248,    -1,   234,    -1,   341,    -1,
      60,   500,    -1,    66,    -1,   130,    -1,   114,    -1,   143,
     352,   352,    -1,   155,   352,   352,    -1,   149,    20,    82,
     362,    -1,   149,    20,   152,     5,     5,     4,    -1,   149,
      20,   221,     5,     5,     5,     5,   362,   367,   376,    -1,
     149,    20,   222,     5,     5,   362,   376,    -1,   149,    20,
     236,     5,     5,     5,   362,    -1,   149,    20,   276,   362,
     367,    -1,     4,    20,    82,   362,    -1,     4,    20,   152,
       5,     5,     4,    -1,     4,    20,   221,     5,     5,     5,
       5,   362,   367,   376,    -1,     4,    20,   222,     5,     5,
     362,   376,    -1,     4,    20,   236,     5,     5,     5,   362,
      -1,     4,    20,   276,   362,   367,    -1,   155,    17,    -1,
       4,    21,    -1,     4,    21,   364,    -1,     4,    21,   362,
     367,    -1,     4,    22,   237,   362,   369,    -1,     4,    48,
     121,    -1,     4,    49,   237,   362,   369,    -1,     4,    48,
     237,   362,   369,    -1,     4,    52,    21,    -1,     4,    52,
      21,   364,    -1,     4,    52,    21,   362,   367,    -1,     4,
      52,   237,   362,   369,    -1,     4,    59,   362,   367,   368,
      -1,     4,    62,   121,    -1,     4,    62,   237,   362,   369,
      -1,     4,    66,    -1,     4,    74,    27,    -1,     4,    74,
     167,    -1,     4,    74,   237,   362,   369,    -1,     4,    74,
     280,    -1,     4,    75,   138,    -1,     4,    82,    21,    -1,
       4,    82,    21,   364,    -1,     4,    82,    21,   362,   367,
      -1,     4,    82,   237,   362,   369,    -1,     4,   109,   121,
      -1,     4,   109,   237,   362,   369,    -1,     4,   110,   237,
     362,   369,    -1,     4,   113,    21,    -1,     4,   113,    21,
     364,    -1,     4,   113,    21,   362,   367,    -1,     4,   113,
     237,   362,   369,    -1,     4,   130,    -1,     4,   150,    -1,
       4,   172,    27,    -1,     4,   172,   168,   362,   369,    -1,
       4,   172,   223,   362,   367,   368,    -1,     4,   181,   168,
     352,   362,   369,    -1,     4,   225,   121,    -1,     4,   223,
     259,    -1,     4,   223,   266,    -1,     4,   231,   223,   362,
     367,   368,    -1,     4,   231,   168,   362,   369,    -1,     4,
     231,   288,   362,   369,    -1,     4,   232,    -1,     4,   232,
     511,    -1,     4,   246,   131,    -1,     4,   246,   168,   362,
     369,    -1,     4,   246,   223,   362,   367,   368,    -1,     4,
     246,   280,    -1,     4,   256,    -1,     4,   282,    -1,     4,
     282,     4,    -1,     4,   284,    -1,     4,   284,   245,    -1,
       4,   294,    -1,     4,   304,    27,    -1,     4,   304,   168,
     362,   369,    -1,     4,   304,   223,   362,   367,   368,    -1,
       4,   338,    -1,   150,   501,    -1,   150,   206,    -1,   206,
      -1,   225,   255,   352,   352,    -1,   255,   255,   352,   352,
      -1,   230,    -1,   232,   511,    -1,   256,   502,    -1,   256,
     206,    -1,   263,   503,    -1,     5,    66,    -1,     5,   130,
      -1,     5,   155,    -1,     5,   232,   511,    -1,     5,   282,
      -1,     5,   282,   206,    -1,   282,    17,    -1,   282,    98,
     196,    -1,   338,    -1,    30,    -1,   237,    -1,   161,    -1,
     211,    -1,    -1,   352,   352,    -1,    -1,   352,   352,    -1,
      -1,   284,    -1,    -1,    -1,   224,    -1,   238,    -1,   300,
      -1,    57,    -1,    20,    -1,   498,   362,   367,   368,   354,
     513,   519,    -1,   256,   498,   362,   367,   368,   354,   513,
     519,    -1,   498,     5,    -1,   498,     5,   362,   367,    -1,
     498,     4,    -1,   498,     4,   362,   367,    -1,   124,     5,
       5,   496,     4,     5,    -1,   352,   352,    -1,   132,    -1,
      36,    -1,    40,   352,   352,    -1,   194,   352,   352,    -1,
     111,    -1,   290,   364,   361,    -1,   290,   362,   367,   361,
      -1,   509,   510,    -1,   510,    -1,   511,   349,   354,    -1,
      66,   349,     5,    -1,    92,   349,     4,     4,    -1,   338,
     349,     4,    -1,   130,   349,     5,    -1,   284,   349,     5,
      -1,   522,    -1,   523,    -1,   203,    -1,   256,    -1,   150,
      -1,    91,    -1,   126,    -1,   105,    -1,   195,    -1,   245,
      -1,    99,    -1,   158,    -1,   272,    -1,   504,    -1,   504,
     509,    -1,    -1,    -1,   514,   517,    -1,    17,    -1,   210,
     352,   352,    -1,   291,    -1,   291,   352,   352,    -1,   354,
      -1,   284,   354,    -1,   517,   518,    -1,   518,    -1,   511,
     349,   354,    -1,    -1,    -1,   520,   521,    -1,   521,   522,
      -1,   522,    -1,   282,   349,     5,    -1,    55,   349,   492,
       5,     5,    -1,    64,    -1,    66,     5,    -1,   182,     4,
      -1,   289,   352,    -1,   348,    -1,   346,    -1,   341,    -1,
     203,    -1,   352,   352,   352,   352,    -1,   352,   352,    -1,
     364,   352,   352,    -1,   362,   367,   361,    -1,   290,   527,
      -1,    39,   352,   352,    -1,   194,   528,    -1,   230,   354,
      -1,   352,   352,    -1,   364,   352,   352,    -1,   362,   367,
     361,    -1,    40,   352,   352,    -1,   352,   352,    -1,   111,
     352,   352,    -1,   354,    -1,   309,   363,   367,    -1,     5,
       4,     4,    -1,   299,    -1,    70,   531,    -1,   169,     4,
      -1,   242,     4,    -1,   251,   352,    -1,    54,    -1,   140,
      -1,   243,    -1,    90,    -1,   150,   533,    -1,   256,   534,
      -1,    40,   352,   352,    -1,   194,   352,   352,    -1,   111,
      -1,   261,   111,    -1,    40,   352,   352,    -1,   194,   352,
     352,    -1,   111,    -1,   261,   111,    -1,   189,    -1,    13,
      -1,   203,    -1,    34,    -1,   107,    -1,    61,     5,    -1,
     280,   362,    -1,   303,     4,     4,     4,    -1,   352,    -1,
     352,    97,    -1,   194,   539,    -1,   290,   352,    -1,   290,
     352,    97,    -1,    40,    -1,   352,    -1,   111,    -1,    26,
     541,    -1,   124,   543,    -1,   205,   553,    -1,   112,   554,
      -1,   218,     5,    -1,   120,     5,   377,    -1,    61,     5,
     377,    -1,   270,     4,   377,    -1,   243,    87,   542,    -1,
     120,     5,   377,    -1,    61,     5,   377,    -1,   270,     4,
     377,    -1,   544,    -1,   157,   544,    -1,   281,   545,    -1,
     267,   546,    -1,   117,    87,   547,    -1,   192,   548,    -1,
     243,   157,   550,    -1,   243,    87,   551,    -1,   240,   552,
      -1,   120,     5,    -1,    61,     5,    -1,   270,     4,    -1,
     120,     5,    -1,    61,     5,    -1,   270,     4,    -1,   120,
       5,    -1,    61,     5,    -1,   270,     4,    -1,   120,     5,
      -1,    61,     5,    -1,   270,     4,    -1,   157,   549,    -1,
     120,     5,     4,    -1,    61,     5,     4,    -1,   270,     4,
       4,    -1,   120,     5,    -1,    61,     5,    -1,   270,     4,
      -1,   120,     5,    -1,    61,     5,    -1,   270,     4,    -1,
     120,     5,    -1,    61,     5,    -1,   270,     4,    -1,   120,
       5,    -1,    61,     5,    -1,   270,     4,    -1,   120,     5,
     377,    -1,    61,     5,   377,    -1,   270,     4,   377,    -1,
     120,     5,     5,   377,    -1,   556,     4,     4,   352,   352,
     357,    -1,    99,    -1,    50,    -1,   292,    -1,   136,    -1,
     108,    -1,    -1,     4,   352,   352,   352,   352,    -1,   204,
      -1,   204,     4,   352,   352,   352,   352,    -1,   124,   267,
     558,    -1,     4,    -1,   352,   362,    -1,     4,     4,    -1,
       4,   352,   362,    -1,   352,   352,    -1,   290,   352,   352,
      -1,   363,   367,   368,    -1,    16,   563,    -1,   241,     4,
      -1,   239,   562,    -1,    23,   561,    -1,     4,     4,    -1,
       4,     5,    -1,   284,     4,     5,    -1,     4,     4,    -1,
       4,     5,    -1,   284,     4,     5,    -1,     4,    -1,     4,
     363,   367,    -1,     4,     6,   363,   367,    -1,   229,    -1,
     352,   352,    -1,   352,   352,    12,   352,   352,    -1,   352,
     352,    12,   364,   352,   352,    -1,   352,   352,    12,   362,
     367,   361,    -1,   290,   566,    -1,   123,    -1,   123,   352,
      -1,   352,   352,    -1,   352,   352,    12,   352,   352,    -1,
     352,   352,    12,   364,   352,   352,    -1,   352,   352,    12,
     362,   367,   361,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   452,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,   471,   472,   473,   474,   475,   476,   477,   478,   479,
     480,   481,   482,   483,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,   498,   499,
     500,   501,   502,   503,   504,   507,   508,   511,   512,   513,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     526,   528,   529,   530,   531,   533,   534,   535,   536,   539,
     540,   541,   542,   543,   546,   547,   550,   551,   552,   555,
     558,   561,   564,   576,   583,   590,   598,   599,   600,   601,
     602,   605,   606,   607,   608,   609,   610,   611,   612,   613,
     614,   615,   616,   617,   618,   619,   620,   621,   622,   623,
     624,   625,   626,   627,   628,   629,   630,   631,   632,   635,
     636,   639,   640,   641,   642,   643,   644,   645,   646,   649,
     650,   651,   652,   653,   656,   657,   658,   659,   660,   661,
     662,   663,   664,   665,   666,   669,   670,   671,   674,   675,
     676,   677,   680,   681,   682,   685,   686,   687,   690,   691,
     692,   695,   696,   697,   698,   699,   700,   701,   702,   705,
     706,   709,   710,   711,   712,   713,   714,   717,   718,   719,
     722,   723,   724,   725,   726,   727,   730,   731,   732,   733,
     734,   735,   736,   737,   738,   742,   743,   746,   747,   750,
     751,   754,   755,   759,   760,   763,   765,   767,   769,   771,
     773,   775,   777,   779,   783,   784,   785,   786,   787,   788,
     789,   790,   793,   794,   797,   798,   799,   801,   803,   804,
     805,   807,   811,   812,   815,   816,   818,   821,   823,   829,
     830,   831,   834,   835,   836,   839,   840,   841,   842,   843,
     844,   850,   851,   854,   855,   856,   857,   858,   861,   862,
     863,   866,   867,   872,   877,   884,   886,   888,   889,   890,
     893,   895,   898,   899,   902,   903,   904,   905,   906,   909,
     911,   913,   918,   923,   926,   927,   930,   931,   932,   939,
     940,   941,   942,   945,   946,   949,   950,   953,   954,   957,
     959,   963,   964,   967,   969,   970,   971,   972,   975,   976,
     977,   978,   979,   982,   984,   986,   987,   989,   991,   993,
     995,   999,  1002,  1003,  1004,  1007,  1010,  1011,  1012,  1013,
    1014,  1015,  1016,  1017,  1018,  1019,  1020,  1021,  1022,  1023,
    1024,  1025,  1026,  1027,  1028,  1030,  1031,  1032,  1033,  1034,
    1035,  1036,  1037,  1038,  1039,  1041,  1042,  1043,  1044,  1045,
    1046,  1047,  1049,  1051,  1052,  1055,  1056,  1057,  1058,  1059,
    1060,  1061,  1062,  1065,  1066,  1067,  1070,  1073,  1074,  1076,
    1078,  1079,  1080,  1081,  1082,  1083,  1090,  1091,  1094,  1095,
    1096,  1099,  1100,  1103,  1106,  1107,  1109,  1113,  1114,  1115,
    1118,  1122,  1124,  1125,  1126,  1127,  1128,  1129,  1130,  1131,
    1132,  1135,  1136,  1137,  1140,  1141,  1144,  1146,  1152,  1156,
    1158,  1160,  1163,  1164,  1166,  1169,  1172,  1173,  1177,  1179,
    1182,  1187,  1188,  1189,  1193,  1194,  1195,  1198,  1199,  1200,
    1203,  1204,  1206,  1207,  1208,  1209,  1210,  1211,  1212,  1213,
    1214,  1215,  1217,  1218,  1221,  1222,  1225,  1226,  1227,  1228,
    1231,  1232,  1235,  1237,  1240,  1244,  1245,  1246,  1247,  1250,
    1251,  1252,  1255,  1256,  1257,  1260,  1263,  1264,  1265,  1268,
    1269,  1270,  1271,  1272,  1273,  1276,  1277,  1278,  1279,  1280,
    1281,  1282,  1285,  1286,  1289,  1290,  1293,  1294,  1297,  1298,
    1301,  1302,  1303,  1306,  1307,  1310,  1311,  1314,  1317,  1325,
    1326,  1329,  1330,  1331,  1332,  1333,  1334,  1335,  1336,  1337,
    1338,  1339,  1340,  1341,  1342,  1343,  1344,  1347,  1350,  1351,
    1354,  1355,  1356,  1357,  1360,  1361,  1362,  1363,  1366,  1367,
    1368,  1369,  1370,  1373,  1374,  1375,  1376,  1377,  1378,  1380,
    1381,  1386,  1387,  1390,  1392,  1394,  1397,  1398,  1399,  1400,
    1401,  1402,  1405,  1407,  1409,  1411,  1412,  1414,  1416,  1418,
    1420,  1422,  1425,  1426,  1427,  1428,  1429,  1430,  1432,  1433,
    1434,  1437,  1440,  1442,  1444,  1446,  1448,  1450,  1452,  1454,
    1457,  1459,  1461,  1463,  1464,  1465,  1466,  1467,  1470,  1471,
    1472,  1473,  1474,  1475,  1476,  1478,  1480,  1481,  1482,  1485,
    1486,  1487,  1488,  1489,  1490,  1492,  1493,  1494,  1497,  1498,
    1499,  1500,  1501,  1504,  1507,  1510,  1513,  1516,  1519,  1522,
    1525,  1528,  1533,  1536,  1539,  1542,  1545,  1548,  1551,  1554,
    1557,  1560,  1563,  1568,  1571,  1574,  1577,  1580,  1583,  1586,
    1589,  1592,  1597,  1600,  1603,  1606,  1609,  1612,  1615,  1618,
    1621,  1624,  1627,  1632,  1634,  1635,  1636,  1637,  1638,  1640,
    1641,  1642,  1644,  1645,  1646,  1647,  1648,  1649,  1650,  1652,
    1654,  1655,  1656,  1659,  1660,  1661,  1662,  1663,  1664,  1666,
    1667,  1668,  1671,  1673,  1675,  1676,  1678,  1680,  1684,  1685,
    1688,  1689,  1690,  1693,  1700,  1701,  1702,  1703,  1704,  1705,
    1706,  1709,  1717,  1718,  1719,  1720,  1722,  1724,  1725,  1725,
    1726,  1727,  1728,  1729,  1730,  1731,  1733,  1734,  1736,  1739,
    1742,  1743,  1744,  1747,  1749,  1752,  1755,  1756,  1759,  1763,
    1766,  1768,  1771,  1774,  1778,  1783,  1788,  1790,  1791,  1793,
    1795,  1796,  1798,  1800,  1802,  1804,  1806,  1807,  1809,  1811,
    1815,  1820,  1822,  1824,  1826,  1828,  1830,  1832,  1834,  1836,
    1838,  1840,  1843,  1844,  1846,  1848,  1849,  1851,  1853,  1854,
    1855,  1857,  1859,  1860,  1861,  1863,  1864,  1865,  1867,  1870,
    1874,  1878,  1881,  1884,  1888,  1893,  1899,  1900,  1901,  1903,
    1904,  1906,  1910,  1912,  1913,  1914,  1916,  1919,  1921,  1924,
    1926,  1929,  1931,  1933,  1934,  1937,  1942,  1945,  1946,  1947,
    1950,  1953,  1957,  1958,  1960,  1961,  1962,  1964,  1965,  1967,
    1968,  1970,  1975,  1977,  1978,  1980,  1981,  1982,  1983,  1984,
    1985,  1987,  1989,  1991,  1992,  1994,  1995,  1997,  1999,  2000,
    2001,  2002,  2003,  2004,  2005,  2006,  2007,  2008,  2009,  2011,
    2013,  2015,  2016,  2017,  2018,  2020,  2021,  2022,  2023,  2024,
    2026,  2027,  2028,  2029,  2030,  2031,  2034,  2035,  2036,  2037,
    2038,  2039,  2040,  2041,  2042,  2043,  2044,  2045,  2046,  2047,
    2048,  2049,  2050,  2051,  2052,  2053,  2054,  2057,  2058,  2059,
    2060,  2061,  2062,  2070,  2077,  2086,  2095,  2102,  2109,  2117,
    2125,  2132,  2137,  2142,  2147,  2152,  2157,  2162,  2168,  2178,
    2188,  2198,  2205,  2215,  2225,  2234,  2246,  2259,  2264,  2267,
    2269,  2271,  2276,  2280,  2283,  2285,  2287,  2290,  2291,  2292,
    2293,  2294,  2295,  2296,  2299,  2300,  2301,  2302,  2303,  2304,
    2306,  2308,  2310,  2312,  2314,  2316,  2319,  2321,  2323,  2325,
    2327,  2329,  2332,  2333,  2334,  2335,  2337,  2340,  2341,  2343,
    2345,  2346,  2347,  2349,  2352,  2355,  2356,  2358,  2359,  2360,
    2361,  2363,  2364,  2365,  2366,  2367,  2369,  2371,  2372,  2374,
    2377,  2378,  2379,  2381,  2383,  2384,  2385,  2386,  2388,  2391,
    2395,  2396,  2397,  2398,  2401,  2404,  2406,  2407,  2408,  2409,
    2411,  2414,  2415,  2417,  2418,  2419,  2420,  2421,  2423,  2424,
    2426,  2429,  2430,  2431,  2432,  2433,  2435,  2437,  2438,  2439,
    2440,  2442,  2444,  2445,  2446,  2447,  2448,  2449,  2451,  2452,
    2454,  2457,  2458,  2459,  2460,  2463,  2464,  2467,  2468,  2471,
    2472,  2475,  2488,  2489,  2493,  2494,  2498,  2499,  2502,  2507,
    2514,  2516,  2519,  2521,  2524,  2528,  2529,  2530,  2531,  2532,
    2533,  2534,  2536,  2540,  2541,  2544,  2545,  2546,  2547,  2548,
    2549,  2550,  2551,  2554,  2555,  2556,  2557,  2558,  2559,  2560,
    2561,  2562,  2563,  2564,  2567,  2568,  2571,  2572,  2572,  2575,
    2576,  2577,  2578,  2581,  2582,  2585,  2586,  2589,  2593,  2594,
    2594,  2597,  2598,  2601,  2604,  2608,  2609,  2610,  2611,  2614,
    2615,  2616,  2617,  2620,  2622,  2623,  2628,  2630,  2631,  2632,
    2633,  2636,  2637,  2642,  2646,  2647,  2648,  2651,  2652,  2657,
    2658,  2661,  2663,  2664,  2665,  2670,  2671,  2672,  2673,  2676,
    2677,  2680,  2682,  2684,  2685,  2688,  2690,  2691,  2692,  2695,
    2696,  2699,  2700,  2701,  2704,  2705,  2706,  2709,  2710,  2711,
    2712,  2713,  2716,  2717,  2718,  2721,  2722,  2723,  2724,  2725,
    2728,  2730,  2732,  2734,  2737,  2739,  2741,  2744,  2745,  2746,
    2747,  2748,  2749,  2750,  2751,  2752,  2755,  2756,  2757,  2760,
    2761,  2762,  2765,  2766,  2767,  2770,  2771,  2772,  2775,  2776,
    2777,  2778,  2781,  2782,  2783,  2786,  2787,  2788,  2791,  2792,
    2793,  2796,  2797,  2798,  2801,  2803,  2805,  2809,  2813,  2815,
    2818,  2819,  2820,  2821,  2824,  2825,  2827,  2828,  2830,  2833,
    2834,  2835,  2836,  2839,  2840,  2843,  2845,  2846,  2847,  2848,
    2851,  2852,  2853,  2856,  2857,  2858,  2861,  2862,  2867,  2871,
    2878,  2879,  2881,  2886,  2888,  2891,  2892,  2893,  2894,  2896,
    2901
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
     351,   351,   351,   351,   351,   352,   352,   353,   353,   353,
     353,   353,   353,   353,   353,   353,   353,   353,   353,   353,
     354,   354,   354,   354,   354,   354,   354,   354,   354,   355,
     355,   355,   355,   355,   356,   356,   357,   357,   357,   358,
     359,   360,   361,   361,   361,   361,   362,   362,   362,   362,
     362,   363,   363,   363,   363,   363,   363,   363,   363,   363,
     363,   363,   363,   363,   363,   363,   363,   363,   363,   363,
     363,   363,   363,   363,   363,   363,   363,   363,   363,   364,
     364,   365,   365,   365,   365,   365,   365,   365,   365,   366,
     366,   366,   366,   366,   367,   367,   367,   367,   367,   367,
     367,   367,   367,   367,   367,   368,   368,   368,   369,   369,
     369,   369,   370,   370,   370,   371,   371,   371,   372,   372,
     372,   373,   373,   373,   373,   373,   373,   373,   373,   374,
     374,   375,   375,   375,   375,   375,   375,   376,   376,   376,
     377,   377,   377,   377,   377,   377,   378,   378,   378,   378,
     378,   378,   378,   378,   378,   379,   379,   380,   380,   381,
     381,   382,   382,   383,   383,   384,   384,   384,   384,   384,
     384,   384,   384,   384,   385,   385,   385,   385,   385,   385,
     385,   385,   386,   386,   387,   387,   387,   387,   387,   387,
     387,   387,   388,   388,   389,   389,   389,   389,   389,   390,
     390,   390,   391,   391,   391,   392,   392,   392,   392,   392,
     392,   393,   393,   394,   394,   394,   394,   394,   395,   395,
     395,   396,   396,   396,   396,   397,   397,   397,   397,   397,
     398,   398,   399,   399,   400,   400,   400,   400,   400,   401,
     401,   401,   401,   401,   402,   402,   403,   403,   403,   404,
     404,   404,   404,   405,   405,   406,   406,   407,   407,   408,
     408,   409,   409,   409,   409,   409,   409,   409,   410,   410,
     410,   410,   410,   411,   411,   411,   411,   411,   411,   411,
     411,   412,   413,   413,   413,   414,   415,   415,   415,   415,
     415,   415,   415,   415,   415,   415,   415,   415,   415,   415,
     415,   415,   415,   415,   415,   415,   415,   415,   415,   415,
     415,   415,   415,   415,   415,   415,   415,   415,   415,   415,
     415,   415,   415,   415,   415,   416,   416,   416,   416,   416,
     416,   416,   416,   417,   417,   417,   418,   419,   419,   419,
     419,   419,   419,   419,   419,   419,   420,   420,   421,   421,
     421,   422,   422,   423,   424,   424,   424,   425,   425,   425,
     426,   427,   427,   427,   427,   427,   427,   427,   427,   427,
     427,   428,   428,   428,   429,   429,   430,   430,   430,   431,
     431,   431,   432,   432,   432,   433,   434,   434,   435,   435,
     435,   436,   436,   436,   437,   437,   437,   438,   438,   438,
     439,   439,   439,   439,   439,   439,   439,   439,   439,   439,
     439,   439,   439,   439,   440,   440,   441,   441,   441,   441,
     442,   442,   443,   443,   443,   444,   444,   444,   444,   445,
     445,   445,   446,   446,   446,   447,   448,   448,   448,   449,
     449,   449,   449,   449,   449,   450,   450,   450,   450,   450,
     450,   450,   451,   451,   452,   452,   453,   453,   454,   454,
     455,   455,   455,   456,   456,   457,   457,   458,   458,   459,
     459,   460,   460,   460,   460,   460,   460,   460,   460,   460,
     460,   460,   460,   460,   460,   460,   460,   461,   462,   462,
     463,   463,   463,   463,   464,   464,   464,   464,   465,   465,
     465,   465,   465,   466,   466,   466,   466,   466,   466,   466,
     466,   467,   467,   468,   468,   468,   469,   469,   469,   469,
     469,   469,   470,   470,   470,   470,   470,   470,   470,   470,
     470,   470,   471,   471,   471,   471,   471,   471,   471,   471,
     471,   472,   473,   473,   473,   473,   473,   473,   473,   473,
     473,   473,   473,   473,   473,   473,   473,   473,   474,   474,
     474,   474,   474,   474,   474,   474,   474,   474,   474,   475,
     475,   475,   475,   475,   475,   475,   475,   475,   476,   476,
     476,   476,   476,   477,   477,   477,   477,   477,   477,   477,
     477,   477,   478,   478,   478,   478,   478,   478,   478,   478,
     478,   478,   478,   479,   479,   479,   479,   479,   479,   479,
     479,   479,   480,   480,   480,   480,   480,   480,   480,   480,
     480,   480,   480,   481,   481,   481,   481,   481,   481,   481,
     481,   481,   482,   482,   482,   482,   482,   482,   482,   482,
     482,   482,   482,   483,   483,   483,   483,   483,   483,   483,
     483,   483,   484,   484,   484,   484,   484,   484,   485,   485,
     486,   486,   486,   487,   488,   488,   488,   488,   488,   488,
     488,   489,   490,   490,   490,   490,   490,   490,   491,   490,
     490,   490,   490,   490,   490,   490,   490,   490,   490,   490,
     490,   490,   490,   490,   490,   490,   490,   490,   490,   490,
     490,   490,   490,   490,   490,   490,   490,   490,   490,   490,
     490,   490,   490,   490,   490,   490,   490,   490,   490,   490,
     490,   490,   490,   490,   490,   490,   490,   490,   490,   490,
     490,   490,   490,   490,   490,   490,   490,   490,   490,   490,
     490,   490,   490,   490,   490,   490,   490,   490,   490,   490,
     490,   490,   490,   490,   490,   490,   490,   490,   490,   490,
     490,   490,   490,   490,   490,   490,   490,   490,   490,   490,
     490,   490,   490,   490,   490,   490,   490,   490,   490,   490,
     490,   490,   490,   490,   490,   490,   490,   490,   490,   490,
     490,   490,   490,   490,   490,   490,   490,   490,   490,   490,
     490,   490,   490,   490,   490,   490,   490,   490,   490,   490,
     490,   490,   490,   490,   490,   490,   490,   490,   490,   490,
     490,   490,   490,   490,   490,   490,   490,   490,   490,   490,
     490,   490,   490,   490,   490,   490,   492,   492,   492,   492,
     492,   492,   492,   492,   492,   492,   492,   492,   492,   492,
     492,   492,   492,   492,   492,   492,   492,   493,   493,   493,
     493,   493,   493,   494,   494,   494,   494,   494,   494,   494,
     494,   494,   494,   494,   494,   494,   494,   494,   494,   494,
     494,   494,   494,   494,   494,   494,   494,   494,   494,   495,
     495,   495,   495,   496,   497,   497,   497,   498,   498,   498,
     498,   498,   498,   498,   499,   499,   499,   499,   499,   499,
     499,   499,   499,   499,   499,   499,   499,   499,   499,   499,
     499,   499,   499,   499,   499,   499,   499,   499,   499,   499,
     499,   499,   499,   499,   499,   499,   499,   499,   499,   499,
     499,   499,   499,   499,   499,   499,   499,   499,   499,   499,
     499,   499,   499,   499,   499,   499,   499,   499,   499,   499,
     499,   499,   499,   499,   499,   499,   499,   499,   499,   499,
     499,   499,   499,   499,   499,   499,   499,   499,   499,   499,
     499,   499,   499,   499,   499,   499,   499,   499,   499,   499,
     499,   499,   499,   499,   499,   499,   499,   499,   499,   499,
     499,   500,   500,   500,   500,   501,   501,   502,   502,   503,
     503,   504,   505,   505,   505,   505,   505,   505,   506,   506,
     507,   507,   507,   507,   507,   508,   508,   508,   508,   508,
     508,   508,   508,   509,   509,   510,   510,   510,   510,   510,
     510,   510,   510,   511,   511,   511,   511,   511,   511,   511,
     511,   511,   511,   511,   512,   512,   513,   514,   513,   515,
     515,   515,   515,   516,   516,   517,   517,   518,   519,   520,
     519,   521,   521,   522,   523,   524,   524,   524,   524,   525,
     525,   525,   525,   526,   526,   526,   526,   526,   526,   526,
     526,   527,   527,   527,   528,   528,   528,   529,   529,   529,
     529,   530,   530,   530,   530,   531,   531,   531,   531,   532,
     532,   533,   533,   533,   533,   534,   534,   534,   534,   535,
     535,   536,   536,   536,   537,   537,   537,   538,   538,   538,
     538,   538,   539,   539,   539,   540,   540,   540,   540,   540,
     541,   541,   541,   541,   542,   542,   542,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   544,   544,   544,   545,
     545,   545,   546,   546,   546,   547,   547,   547,   548,   548,
     548,   548,   549,   549,   549,   550,   550,   550,   551,   551,
     551,   552,   552,   552,   553,   553,   553,   554,   555,   555,
     556,   556,   556,   556,   557,   557,   557,   557,   557,   558,
     558,   558,   558,   559,   559,   560,   560,   560,   560,   560,
     561,   561,   561,   562,   562,   562,   563,   563,   563,   564,
     565,   565,   565,   565,   565,   566,   566,   566,   566,   566,
     566
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     2,     3,     2,     1,     1,     2,
       3,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     1,     2,     2,     3,     2,     2,     2,     2,
       3,     2,     3,     2,     2,     2,     2,     7,     2,     1,
       3,     2,     2,     2,     1,     2,     2,     2,     1,     2,
       1,     2,     2,     2,     2,     1,     1,     1,     1,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       2,     2,     1,     1,     0,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     1,     1,     0,     1,
       1,     1,     0,     1,     1,     0,     1,     1,     0,     1,
       1,     0,     1,     1,     1,     1,     1,     1,     1,     0,
       1,     1,     1,     1,     1,     1,     1,     0,     1,     1,
       0,     1,     1,     1,     1,     1,     2,     2,     2,     2,
       2,     2,     2,     1,     2,     1,     2,     1,     2,     1,
       2,     2,     6,     1,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     4,     2,     2,     2,     3,
       2,     2,     1,     2,     1,     2,     4,     5,     2,     3,
       5,     6,     1,     1,     1,     7,    11,     8,    12,     1,
       2,     2,     1,     1,     2,     2,     2,     2,     3,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       2,     3,     2,     2,     2,     6,    10,     1,     2,     1,
       6,    10,     1,     2,     2,     2,     2,     2,     2,    13,
      13,    12,    12,     1,     0,     1,     1,     4,     6,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     3,
       4,     0,     6,     8,     2,     3,     3,     3,     0,     3,
       4,     4,     4,     3,     3,     1,     3,     5,     4,     4,
       3,     2,     0,     1,     1,     3,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       1,     2,     2,     4,     9,     2,     2,     2,     1,     3,
       2,     2,     1,     2,     8,     2,     1,     2,     1,     2,
       1,     4,     9,     2,     1,     1,     1,     1,     2,     1,
       1,     2,     1,     0,     2,     2,     1,     0,     2,     2,
       1,     1,     2,     2,     2,     1,     1,     1,     1,     1,
       1,     0,     1,     2,     1,     4,     5,     0,     2,     1,
       5,     2,     2,     1,     1,     1,     2,     1,     2,     1,
       1,     0,     1,     1,     0,     1,     5,     6,     4,     3,
       6,     2,     1,     3,     1,     1,     1,     3,     6,     7,
       5,     1,     1,     4,     5,     1,     3,     0,     1,     2,
       1,     4,     1,     2,     1,     2,     3,     2,     1,     2,
       1,     4,     2,     1,     1,     3,     1,     2,     3,     2,
       0,     1,     1,     4,     2,     0,     1,     1,     2,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     2,     1,     2,     2,     2,     2,     1,
       1,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     2,     2,     0,     1,     2,     1,     6,     5,     1,
       1,     1,     2,     2,     1,     1,     1,     1,     2,     1,
       1,     1,     2,     1,     1,     2,     2,     2,     0,     1,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     1,     2,     3,     1,     2,     2,     4,     6,     1,
      10,     1,     2,     3,     3,     2,     2,     2,     2,     2,
       2,     2,     4,     4,     4,     3,     3,     5,     4,     4,
       4,     3,     3,     3,     3,     2,     2,     4,     3,     3,
       3,     3,     4,     4,     4,     4,     5,     4,     6,     7,
       4,     4,     5,     2,     3,     3,     3,     2,     3,     3,
       3,     3,     4,     3,     5,     6,     3,     3,     4,     3,
       3,     3,     3,     3,     5,     3,     3,     4,     3,     2,
       2,     1,     3,     4,     4,     4,     4,     4,     6,     4,
       4,     5,     4,     4,     4,     4,     5,     4,     6,     7,
       4,     4,     5,     5,     5,     5,     5,     5,     7,     5,
       5,     6,     5,     5,     5,     5,     6,     5,     7,     8,
       5,     5,     6,     3,     3,     3,     3,     3,     5,     3,
       3,     4,     3,     3,     3,     3,     4,     3,     5,     6,
       3,     3,     4,     3,     3,     3,     3,     3,     5,     3,
       3,     4,     4,     4,     3,     5,     4,     4,     2,     3,
       6,     6,     1,     1,     1,     2,     2,     2,     3,     3,
       2,    12,     2,     2,     1,     3,     4,     2,     0,     3,
       1,     1,     2,     2,     2,     2,     2,     4,     4,     4,
       3,     4,     5,     7,     8,     6,     4,     8,     9,     6,
       6,     7,    10,    11,    12,     9,     5,     4,     5,     6,
       3,     5,     5,     5,     6,     5,     4,     9,    10,    11,
       9,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       7,     7,     2,     4,     4,     4,     4,     5,     4,     4,
       5,     5,     3,     4,     4,     4,     4,     6,     7,     8,
       9,     6,    10,    11,    12,     9,     3,     2,     3,     5,
       6,     7,     4,     3,     3,     6,     6,     6,     7,     6,
       7,     4,     4,     4,     6,     9,     4,     3,     4,     6,
       7,     7,     2,     3,     3,     3,     4,     2,     2,     4,
       7,    10,     3,     1,     3,     2,     2,     2,     2,     3,
       5,     4,     5,     2,     7,     3,     2,     2,     3,     2,
       2,     2,     3,     2,     3,     4,     3,     3,     5,     6,
       4,     2,     3,     2,     2,     4,     3,     3,     2,     3,
       1,     2,     1,     2,     2,     2,     1,     1,     1,     1,
       2,     1,     2,     2,     1,     2,     2,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     1,     2,
       2,     2,     3,     5,     7,     7,     6,     6,     6,     6,
       5,     6,     6,     6,     6,     6,     6,     6,    11,     7,
       7,     7,     9,     9,    10,    12,    12,     2,     2,     3,
       4,     4,     4,     2,     4,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     1,     1,     3,     3,
       4,     6,    10,     7,     7,     5,     4,     6,    10,     7,
       7,     5,     2,     2,     3,     4,     5,     3,     5,     5,
       3,     4,     5,     5,     5,     3,     5,     2,     3,     3,
       5,     3,     3,     3,     4,     5,     5,     3,     5,     5,
       3,     4,     5,     5,     2,     2,     3,     5,     6,     6,
       3,     3,     3,     6,     5,     5,     2,     3,     3,     5,
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
       0,     0,   311,     0,     0,     0,     0,     0,     0,     0,
       0,    22,     0,     0,     0,     0,     0,     0,     0,  1062,
       0,     0,     0,     0,     0,     0,     0,     0,  1062,    39,
       0,     0,     0,    44,     0,     0,     0,    48,  1244,    50,
       0,     0,     0,     0,     0,   213,     0,     3,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     4,    55,    56,
       0,   249,     6,     0,     0,     0,     0,     0,     0,     9,
       0,     0,   277,   279,     0,     0,    11,   136,   138,   131,
     132,   133,   137,   134,   135,   282,    12,     0,   294,     0,
       0,     0,    13,     0,     0,     0,     0,   318,     0,    14,
      70,    99,     0,   129,    98,    78,    96,     0,    75,    77,
      73,   130,    97,    74,     0,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,    71,    72,    76,   325,   144,   100,     0,
      15,     0,    16,    17,     0,     0,     0,     0,     0,     0,
       0,    58,    57,     0,     0,     0,     0,     2,     0,    18,
       0,     0,     0,   387,   401,     0,   407,     0,     0,     0,
       0,     0,     0,     0,   350,     0,   479,     0,     0,     0,
       0,     0,  1062,     0,   358,     0,   362,     0,     0,     0,
     366,     0,   368,     0,   370,     0,     0,   510,   374,    19,
       0,   516,    20,   521,     0,   538,   524,   525,   526,   527,
     540,   529,   530,   531,     0,   533,   534,     0,     0,    21,
      23,     0,   554,     0,     0,     0,   559,     0,    24,     0,
       0,     0,     0,     0,     0,     0,    26,   713,    27,     0,
       0,     0,     0,     0,     0,   714,    28,     0,    29,  1067,
    1066,  1063,  1064,  1065,     0,  1125,     0,     0,     0,    31,
       0,  1132,  1131,  1130,  1129,    33,     0,     0,     0,     0,
       0,   144,     0,    34,     0,  1150,     0,  1147,    35,     0,
       0,     0,     0,    38,     0,    36,     0,     0,     0,     0,
      41,     0,     0,  1177,    42,     0,     0,     0,     0,     0,
      43,  1240,  1239,  1243,  1242,  1241,    45,     0,    46,     0,
       0,     0,     0,     0,   203,     0,     0,     0,    47,     0,
       0,  1246,    49,     0,     0,    51,     0,     0,     0,     0,
     144,    52,  1269,    53,     0,     0,    54,     1,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   214,     5,   232,
       0,   224,     0,     0,   226,     0,   234,   227,   231,   242,
     243,   228,   244,     0,   230,   252,   253,   251,   250,     0,
       0,     0,   257,   264,   267,   266,   265,   263,   256,   260,
     261,   262,   255,     0,     0,     0,     0,     0,   259,    10,
       0,     0,     0,   278,     0,   283,     0,   293,   284,   295,
     285,   296,   286,   307,   287,     0,     0,   288,     0,    89,
      90,    91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   314,     0,     0,     0,     0,     0,   147,
     153,   145,   146,   148,   151,   154,   150,   149,   152,     0,
       0,   331,    59,    64,    65,    66,    67,    68,    60,    61,
      62,    69,    63,     0,   336,     0,   383,   379,   375,   376,
     380,   377,   382,   337,   386,   338,   299,   391,   395,   390,
     302,   301,   300,     0,     0,   339,   402,   341,     0,   340,
       0,   409,   342,   421,   413,   424,   414,   415,   417,     0,
     419,   420,   144,   343,     0,     0,   344,     0,     0,   144,
     345,   434,   144,   432,   346,   435,   348,   144,   436,   347,
       0,   144,     0,   349,   454,     0,   452,   470,     0,     0,
       0,   458,   450,     0,   460,   475,   463,   351,   480,   481,
     352,     0,     0,     0,   445,     0,   355,   441,   442,     0,
     356,   357,     0,   482,   483,   484,   360,   361,   485,   363,
       0,   486,   487,   488,   365,   494,   489,   490,   492,   367,
     500,   502,   504,   506,   499,   501,   508,   369,     0,     0,
     513,     0,   373,   144,   515,     0,   522,   539,   523,   541,
     542,   543,   528,   544,   546,   545,   547,   532,   535,   551,
       0,     0,     0,   548,   536,     0,     0,   556,   555,     0,
       0,     0,     0,    25,     0,     0,   566,     0,   567,     0,
       0,     0,     0,     0,   568,     0,   712,     0,   569,     0,
     570,     0,     0,   571,     0,   717,   716,   715,     0,   720,
       0,     0,     0,   907,     0,     0,     0,   724,   728,   730,
     731,     0,     0,     0,     0,   843,     0,     0,     0,   880,
       0,     0,     0,     0,     0,     0,     0,   882,     0,     0,
       0,    30,  1126,  1127,  1128,    32,     0,     0,     0,     0,
    1139,  1140,     0,   144,     0,  1137,  1134,     0,     0,     0,
     144,  1155,  1158,  1156,  1157,  1151,  1152,  1153,  1154,     0,
       0,     0,    40,  1174,  1175,     0,  1182,  1184,  1183,  1179,
    1180,  1178,     0,     0,     0,     0,  1185,     0,  1188,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1186,
    1197,     0,     0,     0,  1187,  1189,     0,  1172,  1173,  1171,
     201,     0,   205,   197,     0,   207,   198,     0,   209,   199,
    1170,  1169,   200,   202,   204,     0,     0,   196,     0,     0,
       0,     0,  1253,  1266,  1256,     0,     0,  1259,     0,     0,
    1258,  1257,   155,  1275,     0,  1274,  1270,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   233,   229,     0,   238,
       0,   235,     0,   254,   139,   142,   143,   141,   140,   268,
     269,   270,   258,   272,   274,   273,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   144,     0,   315,    95,    92,
      93,    94,   144,   317,   316,     0,     0,     0,     0,     0,
       0,     0,   330,     0,   326,   324,   323,   335,   378,     0,
       0,   381,   396,   397,   392,   393,   398,   400,   399,   394,
     303,   304,   389,   388,   404,   403,     0,   408,   422,   423,
     412,   425,   418,   416,   411,     0,     0,     0,   144,   431,
     155,   155,   155,   144,     0,     0,   144,   471,   453,   464,
       0,   455,    79,   466,     0,     0,   457,   459,   144,   476,
     477,   462,     0,     0,     0,   447,     0,     0,     0,     0,
     955,   957,   956,     0,     0,  1055,     0,  1034,     0,  1037,
       0,     0,  1057,  1059,     0,  1050,   359,     0,   491,   493,
     503,   496,   505,   497,   507,   498,   509,   495,     0,     0,
     514,   511,   512,   155,   537,   550,   549,   552,     0,   565,
     553,     0,     0,     0,     0,     0,     0,   168,   168,   162,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   165,
     165,   162,     0,     0,   162,     0,     0,     0,     0,     0,
     607,   631,     0,     0,     0,   603,     0,     0,     0,     0,
     168,   162,     0,     0,   708,     0,   718,   719,   144,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   782,     0,     0,     0,     0,     0,   807,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   832,     0,
       0,   837,   838,     0,     0,     0,   859,   861,   860,     0,
     863,     0,     0,   871,   873,   874,   908,     0,     0,     0,
       0,   722,   723,   949,   947,   952,   951,   950,   948,   953,
       0,   727,     0,   732,     0,   946,     0,   733,   734,   735,
     736,     0,     0,     0,     0,     0,   845,     0,     0,   846,
    1077,     0,  1080,  1076,     0,     0,     0,   847,   881,   848,
    1096,  1101,  1098,  1097,  1095,  1102,  1099,  1093,  1100,  1094,
    1103,     0,     0,   853,     0,     0,     0,  1109,     0,  1111,
     856,     0,  1113,   857,   878,     0,     0,     0,   883,   884,
     885,  1138,     0,     0,  1145,  1141,     0,     0,     0,  1136,
    1135,  1149,  1148,     0,     0,  1163,     0,     0,  1159,     0,
    1167,     0,     0,  1160,     0,  1181,   190,   190,     0,   190,
       0,  1207,     0,  1206,  1198,     0,     0,     0,     0,  1202,
       0,     0,     0,  1205,     0,     0,     0,     0,     0,  1200,
    1208,     0,     0,     0,  1199,   190,   190,   190,     0,   206,
     208,   210,     0,   211,     0,    56,     0,  1248,     0,  1254,
       0,   144,  1260,  1261,     0,  1263,  1264,     0,   156,   157,
    1255,  1276,  1277,     0,   221,   217,   223,   215,   216,   222,
     219,   218,   220,   225,     0,   239,     0,     0,     0,     0,
     271,     0,     0,     0,     0,     0,     0,     0,     0,   309,
     144,     0,     0,     0,     0,   319,     0,   329,     0,   328,
     385,   384,     0,     0,     0,   144,     0,     0,   155,   429,
     433,   437,     0,     0,     0,   155,     0,    83,    82,   472,
     456,     0,   467,   469,   158,   478,   353,     0,     0,    56,
       0,   446,     0,     0,   973,     0,     0,     0,     0,     0,
       0,   987,     0,     0,     0,     0,     0,     0,  1004,  1005,
       0,     0,     0,     0,     0,  1016,     0,  1022,  1023,  1025,
    1027,     0,  1031,  1042,  1043,  1044,     0,  1046,  1051,  1053,
    1054,  1052,   954,     0,     0,  1033,     0,  1032,   972,     0,
       0,  1038,     0,  1040,     0,  1039,  1060,  1041,  1048,     0,
       0,   371,     0,     0,   563,   564,     0,   561,   557,     0,
     168,   168,   168,   169,   170,   575,   576,   164,   163,     0,
     168,   168,   168,     0,   581,   591,   165,   168,   168,   168,
     166,   167,   168,   168,     0,   168,   168,     0,   165,     0,
     604,     0,     0,     0,   630,     0,   629,     0,     0,   606,
       0,   605,     0,     0,     0,     0,   165,   165,   162,     0,
       0,   162,     0,     0,     0,   168,   168,   704,     0,   168,
     168,   709,     0,   181,   182,   183,   184,   185,   186,     0,
      87,    88,    86,   740,     0,     0,     0,     0,     0,     0,
     901,   899,   894,     0,   904,   888,   905,   891,   903,   897,
     886,   900,   889,   887,   906,   902,     0,     0,     0,   760,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   792,     0,     0,     0,     0,     0,   806,
     808,     0,     0,   814,   813,     0,     0,   171,     0,     0,
       0,   144,     0,     0,   827,     0,     0,     0,     0,   833,
     834,   835,     0,     0,     0,   842,   858,   862,   864,   867,
     866,     0,     0,     0,   872,   909,   911,     0,   910,   725,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1061,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   729,     0,     0,     0,     0,
     844,     0,   144,     0,  1072,  1070,     0,     0,   144,     0,
    1075,   849,     0,     0,     0,   855,     0,     0,  1114,   876,
     877,     0,   879,  1144,  1146,  1143,  1142,  1133,     0,     0,
       0,  1164,     0,     0,  1168,  1176,   192,   193,   194,   195,
     191,  1191,  1190,     0,     0,     0,  1193,  1192,   190,     0,
       0,     0,  1201,     0,     0,     0,     0,     0,  1218,     0,
    1232,  1231,  1233,     0,     0,     0,  1204,     0,     0,     0,
    1203,  1213,  1212,  1214,  1210,  1209,  1211,  1235,  1234,  1236,
       0,     0,     0,    56,     0,  1250,     0,   144,  1267,  1262,
    1265,     0,     0,   144,     0,     0,     0,   236,     0,     0,
       0,     0,     0,     0,     0,     0,   306,   305,     0,     0,
     297,   308,   310,     0,   320,   322,   321,   144,   327,     0,
       0,     0,   155,   428,   144,     0,     0,     0,     0,   451,
     465,    81,    80,   474,     0,   468,   160,   161,   159,   461,
       0,     0,   449,   443,     0,     0,     0,     0,     0,     0,
     144,   974,     0,   977,     0,     0,   980,     0,   144,   985,
       0,   988,   989,     0,   991,   992,   993,     0,   997,     0,
       0,  1000,     0,  1006,     0,     0,     0,  1011,  1012,  1010,
       0,     0,     0,  1017,  1018,     0,     0,  1021,  1024,  1026,
    1028,     0,     0,  1045,  1047,   958,     0,     0,     0,     0,
       0,     0,  1056,   959,     0,     0,  1058,  1049,     0,     0,
     519,   520,     0,     0,   562,     0,   572,   573,   574,   168,
     578,   579,   580,     0,     0,     0,   585,   586,   162,     0,
       0,     0,   168,   592,   593,   594,   595,   597,   165,   600,
     601,     0,   168,     0,     0,     0,   165,   165,   162,     0,
       0,     0,     0,   628,     0,   632,     0,     0,     0,     0,
       0,   165,   165,   162,     0,     0,   162,     0,     0,     0,
       0,     0,   165,   165,   162,     0,     0,   162,     0,     0,
       0,     0,     0,   165,   165,   162,     0,     0,   162,     0,
       0,     0,     0,   165,   165,   162,     0,     0,     0,   165,
     608,   609,   610,   611,   613,     0,   616,   617,     0,   165,
       0,     0,   702,   703,   168,   706,   707,     0,   739,   144,
     741,     0,     0,   746,     0,     0,     0,     0,     0,   893,
     890,   896,   895,   892,   898,     0,   757,     0,     0,     0,
       0,   144,   766,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   783,   784,   785,     0,
     789,   786,   788,     0,     0,   794,   793,   795,   796,     0,
       0,     0,     0,     0,     0,   144,     0,   144,     0,   812,
     177,   173,   178,   172,   175,   174,   176,   821,   822,   823,
       0,     0,     0,   826,   828,   144,     0,   144,     0,   836,
     839,   144,     0,   144,     0,   865,   870,   912,   726,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1104,
     937,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   938,     0,     0,     0,     0,
       0,   737,   738,   144,   155,     0,   144,   144,  1078,  1079,
       0,  1081,     0,   851,     0,   144,  1110,  1112,   875,     0,
    1161,  1162,  1165,  1166,   190,   190,   190,  1237,  1216,  1215,
    1217,  1220,  1219,  1223,  1222,  1224,  1221,  1229,  1228,  1230,
    1226,  1225,  1227,     0,     0,  1245,  1252,     0,  1268,     0,
     144,     0,  1271,     0,     0,   240,     0,   237,     0,     0,
       0,   275,     0,     0,     0,     0,   144,     0,   312,   132,
       0,   405,     0,   426,   155,   158,     0,     0,   440,     0,
       0,   444,   966,     0,     0,     0,     0,   144,   975,   158,
     158,   158,   144,   981,   158,   155,   158,   158,   144,   994,
     158,   158,   158,   144,  1001,   158,   158,   144,     0,   158,
     144,   158,   158,   144,   158,   144,   960,     0,     0,     0,
       0,   144,  1035,  1036,     0,     0,   518,   558,     0,   577,
     582,   583,   584,     0,   588,   589,   590,   596,   168,   165,
     602,   619,   620,   621,   622,   623,     0,   625,   626,   165,
       0,     0,     0,   165,   165,   162,     0,     0,     0,     0,
       0,     0,   165,   165,   162,     0,     0,     0,     0,     0,
       0,   165,   165,   162,     0,     0,     0,   165,   168,   168,
     168,   168,   168,     0,   168,   168,     0,   165,   165,   168,
     168,   168,   168,   168,     0,   168,   168,     0,   165,   165,
     682,   683,   684,   685,   687,     0,   690,   691,     0,   165,
     693,   694,   695,   696,   697,     0,   699,   700,   165,   612,
     165,     0,   618,     0,     0,   705,     0,   742,   158,     0,
       0,   158,     0,     0,     0,   756,   158,   758,   761,   762,
     158,   763,   765,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   787,   790,   791,     0,
     158,     0,     0,     0,   809,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   868,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1105,  1084,     0,
    1091,  1092,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   144,     0,     0,    84,     0,     0,
     944,   945,   155,     0,     0,     0,  1073,  1071,  1082,   850,
     852,   155,    37,  1195,  1194,  1196,  1238,     0,  1247,  1278,
       0,     0,  1273,  1272,   241,     0,     0,     0,   280,     0,
       0,     0,   298,   158,   406,   410,   427,   430,     0,   438,
     473,     0,     0,     0,     0,     0,   971,   976,   979,   978,
     982,   983,   984,   986,   990,   995,   996,   998,   999,  1002,
    1003,  1007,   155,   158,  1014,   155,  1015,  1019,   155,  1029,
     155,     0,     0,     0,     0,   965,     0,     0,   517,     0,
     587,   598,   168,   165,   627,   168,   168,   168,   168,   168,
       0,   168,   168,   165,   673,   674,   675,   676,   677,     0,
     679,   680,   165,   168,   168,   168,   168,   168,     0,   168,
     168,   165,   168,   642,   643,   644,   645,   647,   165,   650,
     651,     0,   168,   168,   662,   663,   664,   665,   667,   165,
     670,   671,     0,   168,   686,   165,     0,   692,   165,   701,
     614,   165,   710,   711,   144,   745,     0,   158,   750,   749,
       0,   144,     0,   759,   764,   144,     0,   771,   772,   773,
     774,   778,   779,   775,   776,   777,     0,     0,   158,   797,
     801,     0,   144,     0,     0,   810,   816,   815,   158,   817,
       0,   824,     0,   829,   158,   158,   819,     0,     0,   869,
       0,   179,   179,     0,     0,   179,     0,   179,  1061,     0,
       0,     0,     0,     0,     0,     0,     0,  1083,     0,     0,
     179,   179,     0,     0,     0,     0,     0,     0,     0,     0,
     939,     0,     0,     0,  1061,    85,     0,   179,     0,  1107,
     943,     0,     0,   212,  1280,  1279,     0,     0,   245,     0,
       0,     0,     0,   313,   439,   332,   967,     0,   187,     0,
    1008,  1009,  1013,  1020,  1030,   961,     0,   187,     0,   364,
     332,     0,   599,   624,   633,   634,   635,   636,   637,   165,
     639,   640,   168,   165,   681,   653,   654,   655,   656,   657,
     165,   659,   660,   168,   646,   168,   165,   652,   666,   168,
     165,   672,   688,   165,   698,   615,     0,   158,   743,   751,
       0,     0,     0,     0,     0,   780,   781,   798,     0,     0,
       0,   811,   818,     0,   830,   831,   820,   158,   840,     0,
     180,  1061,  1061,    84,     0,  1061,     0,  1061,   913,   144,
       0,  1086,     0,  1089,  1123,  1090,  1088,  1085,     0,  1061,
    1061,    84,     0,     0,  1061,  1061,     0,     0,  1061,   942,
     940,   941,   920,  1061,  1061,  1107,  1118,     0,  1074,   854,
       0,     0,   247,     0,     0,     0,   333,   334,   354,     0,
     188,   189,   969,   970,     0,   963,   964,   372,     0,   168,
     641,   678,   168,   661,   648,   168,   668,   168,   689,     0,
     744,   158,   747,   158,     0,   158,     0,   158,   799,   158,
       0,   158,     0,  1061,   926,   922,  1061,     0,   927,     0,
     921,  1061,     0,  1087,     0,   924,   923,  1061,     0,     0,
     918,   916,  1061,   144,   917,   919,   925,  1118,  1068,     0,
       0,  1108,  1116,     0,     0,     0,   276,   299,   302,   300,
       0,     0,   144,   144,   560,   638,   658,   649,   669,   158,
     748,   755,     0,   770,   767,   800,   805,     0,   825,     0,
     931,   915,    84,     0,   929,  1124,     0,   914,    84,     0,
     930,     0,  1069,  1120,  1122,     0,  1115,     0,     0,   281,
       0,     0,     0,     0,   187,   187,     0,   752,   144,   768,
     802,   841,  1061,     0,     0,  1061,     0,   158,  1121,  1117,
     246,     0,     0,     0,     0,     0,   968,   962,   721,   144,
     753,   769,   144,   803,   933,     0,  1061,   932,     0,     0,
     248,   292,     0,   291,     0,   754,   804,    84,   934,    84,
    1061,   290,   289,  1061,  1061,   928,   936,   935
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    54,   432,   177,   156,  1259,  2524,  2525,   433,   434,
     435,   436,   157,   158,   159,    95,   809,   459,  1200,  1679,
    1349,  1362,  1345,  1927,  2621,  1409,  2672,  1581,   338,   753,
     756,   759,   767,    57,   367,    67,   371,   377,   381,   384,
      72,   387,    79,   402,   398,   392,   408,    86,   413,    96,
     102,   418,   420,   422,   494,   862,  1648,   424,   427,   109,
     443,   160,   162,  2668,   179,   219,   483,   851,   485,   495,
     854,   859,   497,   499,   865,   502,   867,   513,   870,   872,
     516,   520,   524,   526,   529,   533,   560,   556,  1271,   547,
     891,   896,   888,  1260,   901,   550,   566,   569,   574,   579,
     587,   931,   933,   935,   937,   592,   941,   222,   594,  1752,
     239,   596,   598,   602,   607,   614,   248,  1338,   617,   256,
     626,  1354,   628,   634,   985,  1370,   980,  1793,  1376,  1374,
     981,  1795,  1379,  1381,   640,   643,   638,   258,   266,   268,
     681,  1062,  1436,  1051,  1535,  1975,  2305,  1067,  1060,   926,
    1312,  1317,  1325,  1327,  1959,   274,  1076,  1079,  1087,  2277,
    2278,  2279,  1960,  2656,  2657,  1110,  1113,  2731,  2732,  2728,
    2729,  2773,  2280,  2281,   279,   285,   293,   695,   690,   298,
     303,   705,   712,  1138,  1143,   762,   750,   310,   314,   719,
     320,   726,  1586,   739,   740,  1174,  1169,  1592,  1159,  1598,
    1610,  1606,  1163,   744,   728,   326,   327,   342,  1187,   345,
     351,   777,   780,   774,   353,   356,   785
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2574
static const yytype_int16 yypact[] =
{
    4430,   -64,    86,   461,    54, -2574, -2574,   858,  -109,   514,
     672,  1090,   512,  2792,   177,   203,  1785,    73,  5519,    82,
    1292, -2574,   203,   414,   225,   814,   231,    28,   477,     4,
     455,   472,   509,  3191,    43,   558,   581,   504,     4, -2574,
     165,    15,   835, -2574,   -30,   646,    90, -2574,    34, -2574,
      94,  3902,   467,   114,   689, -2574,   171, -2574,   694,   861,
     459,   776,   749,   139,   788,    -2,   531, -2574, -2574, -2574,
     855,   186, -2574,    19,    24,   203,   370,   186,    22, -2574,
     799,   186, -2574, -2574,    52,   186, -2574, -2574, -2574, -2574,
     186, -2574, -2574, -2574, -2574, -2574, -2574,   156,   779,   802,
     843,   152, -2574,   186,  1386,   186,   186,  1039,   186, -2574,
   -2574, -2574,   631, -2574, -2574, -2574, -2574,  4972, -2574, -2574,
   -2574, -2574, -2574, -2574,   186, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574,   574, -2574,   186,
   -2574,   815, -2574, -2574,   203,   203,   203,   203,   203,   203,
     203, -2574, -2574,   203,   203,   203,   203, -2574,   726, -2574,
     805,  1520,   758,   268,   633,   722,   518,  4531,   649,  5025,
    4944,   874,  4972,  4038, -2574,   431,   364,   889,   821,   482,
     149,   901,     4,   280, -2574,   859, -2574,   709,   651,   194,
   -2574,   405, -2574,   417, -2574,   453,   871,   469, -2574, -2574,
    5217, -2574, -2574, -2574,   891,   935, -2574, -2574, -2574, -2574,
      47, -2574, -2574, -2574,   953, -2574, -2574,  5217,  4588, -2574,
   -2574,    31, -2574,   969,   982,   460, -2574,   186, -2574,   990,
      91,   974,   348,   820,   992,    59, -2574, -2574, -2574,   995,
    1003,   203,   203,   186,   186, -2574, -2574,  1005, -2574, -2574,
   -2574, -2574, -2574, -2574,  1026, -2574,  1012,  1017,   186, -2574,
    1036, -2574, -2574, -2574, -2574, -2574,   186,  1219,   203,  3802,
     186,   574,   186, -2574,  1031, -2574,  4008, -2574, -2574,   831,
    1048,  1050,   186, -2574,  1057, -2574,   -68,  1061,  5217,  1074,
   -2574,  1298,   186,   984, -2574,   529,   967,  1568,   535,  1085,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574,  1098, -2574,   687,
      56,   104,   178,   440, -2574,   186,   186,   193, -2574,   186,
     847,  1122, -2574,   186,   186, -2574,  1139,    32,    41,  1142,
     574, -2574, -2574, -2574,   950,   186, -2574, -2574,   186,   186,
     186,   186,   186,   186,   186,   186,   186, -2574, -2574, -2574,
     186, -2574,  1147,  1150, -2574,   186,  1060, -2574, -2574, -2574,
   -2574, -2574, -2574,   186, -2574, -2574,   186, -2574, -2574,   393,
     393,  1156, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574,   186,   186,  1158,  1160,  1166, -2574, -2574,
     186,   186,   186, -2574,   186, -2574,  1171, -2574, -2574, -2574,
   -2574,   655, -2574,  1172, -2574,  5217,  1174, -2574,   186, -2574,
   -2574, -2574,   186,  1181,  1184,  1184,  5217,   186,   186,   186,
     186,   186,   186, -2574,   186,  4972,  1386,   186,   186, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,  1386,
     186, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574,  1178, -2574,   926,   366, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574,   -44, -2574, -2574, -2574,
    1029, -2574,   -34,   475,   475, -2574, -2574, -2574,  1199, -2574,
    1204, -2574, -2574,   -62, -2574,  1034, -2574, -2574, -2574,  1047,
   -2574, -2574,   574, -2574,  3453,   186, -2574,  5217,  5217,   574,
   -2574, -2574,   574, -2574, -2574, -2574, -2574,   574, -2574, -2574,
    5217,   574,   186, -2574, -2574,  5217, -2574,  1226,   560,  1041,
       0, -2574, -2574,  1051,  5217,  4082, -2574, -2574, -2574, -2574,
   -2574,  1227,  1248,  1260, -2574,  1084, -2574, -2574, -2574,   186,
   -2574, -2574,   999, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
     453, -2574, -2574, -2574, -2574, -2574, -2574,  1100,  1115, -2574,
   -2574,  1238,  1239,  1241, -2574, -2574,  1087, -2574,   186,  1308,
    1093,  4008, -2574,   574, -2574,  1318, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
    5217,  5217,  5217, -2574, -2574,  1321,   203, -2574, -2574,  1323,
    1325,  1135,   186, -2574,   303,  1245, -2574,  1328, -2574,   287,
    1252,  3399,    89,  1337, -2574,  1340, -2574,  1345, -2574,   155,
   -2574,  1347,  1349, -2574,  1353, -2574, -2574, -2574,   186, -2574,
    4008,  4905,  1285,   437,  1354,   708,  1259, -2574, -2574, -2574,
    1343,   686,  1359,  1366,    46,   186,   338,   644,   307,  5217,
     203,  1534,   735,    17,   181,    85,    16, -2574,  1358,  1360,
    1381, -2574, -2574, -2574, -2574, -2574,   186,   186,   186,   186,
   -2574, -2574,   186,   574,   186, -2574,   186,  1386,   186,  1387,
     574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,  1390,
     430,   449, -2574, -2574, -2574,  1395, -2574, -2574, -2574, -2574,
    1295, -2574,  1396,  1400,  1313,  1402, -2574,  1403, -2574,  1406,
    1320,  1413,   543,    58,   597,   408,   609,  1417,   625, -2574,
   -2574,  1420,  1421,  1418, -2574, -2574,  1425, -2574, -2574, -2574,
   -2574,  1427, -2574, -2574,  1431, -2574, -2574,  1432, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574,   186,   186, -2574,   186,   774,
     186,   186, -2574,  2838, -2574,  1071,  1439, -2574,  1103,  1440,
   -2574, -2574,   -26,   186,   186, -2574,  1434,   186,   186,   186,
     186,   186,   186,   186,   186,   186, -2574, -2574,  1446,  1124,
     186,  1441,   743, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574,  1463,  1464,   186,   186,
     186,  1465,   203,  1467,  1469,   574,  5217, -2574, -2574, -2574,
   -2574, -2574,   574, -2574, -2574,   186,   186,   186,  5217,   186,
    1386,   186, -2574,   186, -2574, -2574, -2574, -2574, -2574,  1472,
    1473, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574,   649, -2574,   186, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574,  5217,  5217,   186,   574, -2574,
     -26,   -26,   -26,   574,  1386,   186,   574, -2574, -2574, -2574,
     186, -2574,   -22,  1315,  1474,  1470, -2574, -2574,   574,  5217,
   -2574, -2574,  1479,  1487,  1489,  1222,   186,  4910,   745,   713,
   -2574, -2574, -2574,   186,  1475,   618,  1053, -2574,  1242, -2574,
    1534,  1246,   628,  1212,    93, -2574, -2574,   186, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,   186,  1497,
   -2574, -2574, -2574,   -26, -2574, -2574, -2574, -2574,  5306, -2574,
   -2574,  1500,  1501,   186,  1503,  1510,  1513,     2,     2,    -5,
    1526,  1532,  1533,  1535,  1237,  1271,  1539,  1540,  1545,    68,
      68,    -5,  1547,  1550,    -5,  1552,  1553,  3515,  1555,  1557,
   -2574, -2574,  1558,  1562,   444, -2574,  1566,  1567,  1569,  1570,
       2,    -5,  1572,  1575, -2574,  1580, -2574, -2574,   574,   931,
    1021,  1300,   -29,  1350,  1485,   671,   -16,  1583,   246,  1455,
    1490,   795,  1537,  1544,    11,  1357,  1491,  1597,  1393,    26,
      39,   -60,   -67,  4972,  1534,  1564,   526,  1364,  1397,  1605,
      45, -2574, -2574,   191,  1607,  1610, -2574, -2574, -2574,  1616,
    1414,    48,  1534,  1416, -2574, -2574, -2574,   203,  1632,  1639,
     186, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
       1, -2574,   913, -2574,   186, -2574,   186, -2574, -2574, -2574,
   -2574,   186,   186,   186,   708,  5217, -2574,  1640,  1269, -2574,
   -2574,   186, -2574, -2574,   186,  4972,   186, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574,   203,   186, -2574,   186,   708,  1641, -2574,   186,   186,
   -2574,   203, -2574, -2574, -2574,   676,  1646,  1647, -2574, -2574,
   -2574, -2574,   186,   186, -2574, -2574,  1386,   186,   186, -2574,
   -2574, -2574, -2574,  1649,   186, -2574,   186,  1546, -2574,   186,
   -2574,   186,  1554, -2574,  1651, -2574,   963,   963,   698,   963,
    1656, -2574,   702, -2574, -2574,  1659,  1661,   731,  1664, -2574,
    1666,  1667,  1669, -2574,   768,   769,  1670,  1673,  1677, -2574,
   -2574,  1678,  1681,  1683, -2574,   963,   963,   963,   186, -2574,
   -2574, -2574,   186, -2574,   186,  1275,  5217, -2574,   186, -2574,
    4008,   574, -2574, -2574,  1684, -2574, -2574,  1688, -2574, -2574,
   -2574, -2574,  1662,  3802, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574,   186,  1685,   186,   186,   186,   988,
   -2574,  1638,  1691,   186,   186,   -15,  1693,   203,   203, -2574,
     574,   186,  1692,  1695,  1696, -2574,  5217, -2574,   186, -2574,
   -2574, -2574,   186,   186,   186,   574,  1697,  5217,   -26, -2574,
   -2574, -2574,  1386,   186,  1698,   -26,   186,  1644,  1665,   606,
   -2574,  1699, -2574, -2574,   958, -2574, -2574,   186,  1701,  1706,
     186, -2574,  1702,  1209,  4972,  1471,   382,  1476,    13,  5217,
     396, -2574,   296,  1571,   151,   402,  1477,   210, -2574, -2574,
      66,  1542,   300,  1594,   550,  1534,   -55, -2574,  1712,  1482,
   -2574,   452, -2574, -2574, -2574, -2574,  1534,  1511, -2574, -2574,
   -2574, -2574, -2574,   186,  1218, -2574,   186, -2574, -2574,   186,
     186, -2574,   186, -2574,   186, -2574, -2574, -2574, -2574,  1522,
     186, -2574,   186,   375, -2574, -2574,  1715,  1718, -2574,   186,
       2,     2,     2, -2574, -2574, -2574, -2574, -2574, -2574,  1724,
       2,     2,     2,  1096, -2574, -2574,    68,     2,     2,     2,
   -2574, -2574,     2,     2,  1726,     2,     2,  1727,    68,  1102,
   -2574,  1728,  1729,  1730, -2574,   612, -2574,   975,   997, -2574,
    1157, -2574,  1468,  1737,  1741,  1744,    68,    68,    -5,  1746,
    1750,    -5,  1751,  1753,  1754,     2,     2, -2574,  1755,     2,
       2, -2574,  1756, -2574, -2574, -2574, -2574, -2574, -2574,   203,
   -2574, -2574, -2574,  4972,  1091,   203,   186,  1117,  1375,   -10,
   -2574, -2574, -2574,   748, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574,  1760,   203,   186, -2574,
     203,  1761,   186,  5217,   203,  1453,  1495,  1518,   247,   263,
    1530,   409,  1466,  1478,  1765,  1766,  1767,   671,  1769,  1771,
    1773,  1480,  1481,  1290,  1774,   203,   186,  1280,  1483, -2574,
   -2574,   203,  4972, -2574, -2574,  4972,   186,    61,  1776,   203,
     186,   574,  1386,   203, -2574,  1777,  4972,  5217,   186, -2574,
   -2574, -2574,   203,   203,  4972, -2574, -2574, -2574, -2574, -2574,
   -2574,  4972,   186,   203, -2574, -2574, -2574,   186, -2574, -2574,
    1778,   186,  1565,   198,   186,  1573,   186,   603,   186, -2574,
     186,  1574,  1576,   186,   186,   186,   186,   186,   186,   186,
     186,    12,   186,   186,  1577, -2574,   186,   186,   186,   186,
   -2574,  5217,   574,  1780,  5217,  5217,   186,   186,   574,  1386,
   -2574,   186,   186,   186,  5217, -2574,   186,   186, -2574, -2574,
   -2574,  1784, -2574, -2574, -2574, -2574, -2574, -2574,  1787,   186,
     186, -2574,   186,   186, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574,  1790,  1793,  1797, -2574, -2574,   963,  1798,
    1799,  1803, -2574,  1805,  1808,  1810,  1812,  1809, -2574,  1814,
   -2574, -2574, -2574,  1815,  1818,  1820, -2574,  1821,  1823,  1826,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
     186,   186,   186,  1781,  5217, -2574,   186,   574, -2574, -2574,
   -2574,  3802,   186,   574,   186,   186,   186, -2574,   186,   186,
    1827,   186,  1829,  1819,   186,   186, -2574, -2574,  1830,  5217,
   -2574, -2574, -2574,   186, -2574, -2574, -2574,   574, -2574,   920,
     186,   920,   -26, -2574,   574,  5217,   186,   186,  1832, -2574,
   -2574, -2574, -2574, -2574,   186, -2574, -2574, -2574, -2574, -2574,
     186,  1833, -2574, -2574,  5217,  1834,  1835,  1836,  1837,  5217,
     574, -2574,  5217, -2574,  5217,  5217,  4972,  5217,   574, -2574,
    5217, -2574, -2574,  5217, -2574, -2574,  4972,  5217, -2574,  5217,
    5217,  4972,  5217, -2574,  5217,  5217,   186, -2574, -2574, -2574,
    5217,  5217,  5217, -2574, -2574,  5217,  5217, -2574, -2574, -2574,
   -2574,  5217,  5217, -2574, -2574, -2574,  5217,  1838,  1839,  1840,
    1841,  5217, -2574, -2574,   186,   186, -2574, -2574,  1843,   186,
   -2574, -2574,  1846,  1844, -2574,   186, -2574, -2574, -2574,     2,
   -2574, -2574, -2574,  1847,  1848,  1849, -2574, -2574,    -5,  1851,
    1852,  1854,     2, -2574, -2574, -2574, -2574, -2574,    68, -2574,
   -2574,  1853,     2,  1858,  1861,  1862,    68,    68,    -5,  1864,
    1866,  1867,  1229, -2574,  1388, -2574,  1409,  1603,  1868,  1869,
    1870,    68,    68,    -5,  1872,  1873,    -5,  1874,  1622,  1887,
    1888,  1890,    68,    68,    -5,  1892,  1893,    -5,  1894,  1630,
    1895,  1896,  1897,    68,    68,    -5,  1899,  1900,    -5,  1901,
    1903,  1905,  1906,    68,    68,    -5,  1908,  1909,  1911,    68,
   -2574, -2574, -2574, -2574, -2574,  1913, -2574, -2574,  1914,    68,
    1915,  1916, -2574, -2574,     2, -2574, -2574,  1917, -2574,   574,
   -2574,  5217,   186, -2574,   186,  5217,   186,  1918,  1021, -2574,
   -2574, -2574, -2574, -2574, -2574,  1919, -2574,  4972,   203,  1920,
    4972,   574, -2574,  1923,  1021,   186,   186,   186,   186,   186,
     186,   186,   186,   186,  1926,  1927, -2574, -2574, -2574,  1930,
   -2574, -2574, -2574,  1932,  1933, -2574, -2574, -2574, -2574,   186,
    5217,   186,  1934,  1021,   203,   574,  1386,   574,   186, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
     186,  1386,  1386, -2574, -2574,   574,  1386,   574,   186, -2574,
   -2574,   574,  1386,   574,  1386, -2574, -2574, -2574, -2574,   186,
     186,   186,   186,   186,   186,   186,   186,   186,   186,  2279,
   -2574,   186,   186,   186,   186,   186,   186,   186,   186,   186,
     186,   186,  3453,  1935,   186, -2574,   186,   186,   186,  1937,
    1938, -2574, -2574,   574,   -26,  1939,   574,   574, -2574, -2574,
    1386, -2574,   186, -2574,  1940,   574, -2574, -2574, -2574,  1951,
   -2574, -2574, -2574, -2574,   963,   963,   963, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574,  1021,   186, -2574, -2574,   186, -2574,   186,
     574,   186, -2574,  1386,   186, -2574,   186, -2574,  1944,  1964,
    1966, -2574,  1974,   186,   186,  1975,   574,  5217, -2574, -2574,
     186, -2574,   186, -2574,   -26,   958,   186,  1977, -2574,   186,
     453, -2574, -2574,  1978,  1979,  1980,  1981,   574, -2574,   958,
     958,   958,   574, -2574,   958,   -26,   958,   958,   574, -2574,
     958,   958,   958,   574, -2574,   958,   958,   574,  5217,   958,
     574,   958,   958,   574,   958,   574, -2574,  1982,  1984,  1985,
    1986,   574, -2574, -2574,  1976,   453,  1987, -2574,   186, -2574,
   -2574, -2574, -2574,  1991, -2574, -2574, -2574, -2574,     2,    68,
   -2574, -2574, -2574, -2574, -2574, -2574,  1992, -2574, -2574,    68,
    1994,  1996,  1999,    68,    68,    -5,  1993,  2001,  2002,  2003,
    2004,  2006,    68,    68,    -5,  2008,  2010,  2011,  2013,  2016,
    2017,    68,    68,    -5,  2020,  2022,  2024,    68,     2,     2,
       2,     2,     2,  2029,     2,     2,  2030,    68,    68,     2,
       2,     2,     2,     2,  2031,     2,     2,  2032,    68,    68,
   -2574, -2574, -2574, -2574, -2574,  2034, -2574, -2574,  2037,    68,
   -2574, -2574, -2574, -2574, -2574,  2038, -2574, -2574,    68, -2574,
      68,  2039, -2574,  2040,  2043, -2574,  4008, -2574,   958,  2046,
    4972,   958,   186,  5217,  2047, -2574,   958, -2574, -2574, -2574,
     958, -2574, -2574,  5217,  2049,   186,   186,   186,   186,   186,
     186,   186,   186,   186,   186,   186, -2574, -2574, -2574,  4972,
     958,   186,  5217,  2050, -2574,  1386,  1386,  1386,   186,  4972,
    1386,   186,  1386,  1386,  5217,  4972,  1386,   186,  1386, -2574,
     186,   186,   186,   186,   186,   186,  1021,   186,   186,   186,
    1529,  1589,  1707,  1708,  1713,  1714,  1716,  2279, -2574,  1717,
   -2574, -2574,  1021,   186,   186,   186,   186,  1021,   186,   186,
     186,   186,   186,   186,   574,   186,  1619,  1021,   186,   186,
   -2574, -2574,   -26,   203,  2057,  2060, -2574, -2574, -2574, -2574,
   -2574,   -26, -2574, -2574, -2574, -2574, -2574,   186, -2574, -2574,
    1386,   186, -2574, -2574, -2574,  1030,  2062,  2063, -2574,   186,
    2066,   920, -2574,   958, -2574, -2574, -2574, -2574,  2068, -2574,
   -2574,  2067,  2070,  2071,  5217,  2075, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574,   -26,   958, -2574,   -26, -2574, -2574,   -26, -2574,
     -26,  2077,  2078,  5217,  2081, -2574,  2082,  2085, -2574,   186,
   -2574, -2574,     2,    68, -2574,     2,     2,     2,     2,     2,
    2087,     2,     2,    68, -2574, -2574, -2574, -2574, -2574,  2088,
   -2574, -2574,    68,     2,     2,     2,     2,     2,  2089,     2,
       2,    68,     2, -2574, -2574, -2574, -2574, -2574,    68, -2574,
   -2574,  2091,     2,     2, -2574, -2574, -2574, -2574, -2574,    68,
   -2574, -2574,  2092,     2, -2574,    68,  2093, -2574,    68, -2574,
   -2574,    68, -2574, -2574,   574, -2574,  4972,   958, -2574, -2574,
    2094,   574,   186, -2574, -2574,   574,   186, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574,   186,   186,   958, -2574,
   -2574,  2095,   574,   186,  1386, -2574, -2574, -2574,   958, -2574,
     186, -2574,  1386, -2574,   958,   958, -2574,  5217,  1021, -2574,
     186,  2096,  2096,   186,   186,  2096,  1021,  2096, -2574,  5217,
     671,  2097,  2099,  2100,  2101,  2102,  2104, -2574,   203,  1021,
    2096,  2096,   186,   186,  1021,   186,   186,   186,   186,   186,
   -2574,  1386,   186,  2105, -2574, -2574,   186,  2096,   203,    14,
   -2574,  2106,   203, -2574, -2574, -2574,  2107,   186, -2574,  2108,
    2110,  2007,   186, -2574, -2574,    40, -2574,  2111,    51,  5217,
   -2574, -2574, -2574, -2574, -2574, -2574,  2112,    51,  5217, -2574,
      40,   186, -2574, -2574, -2574, -2574, -2574, -2574, -2574,    68,
   -2574, -2574,     2,    68, -2574, -2574, -2574, -2574, -2574, -2574,
      68, -2574, -2574,     2, -2574,     2,    68, -2574, -2574,     2,
      68, -2574, -2574,    68, -2574, -2574,   186,   958, -2574, -2574,
    4972,  5217,   186,  5217,   186, -2574, -2574, -2574,  4972,  5217,
     186, -2574, -2574,  5217, -2574, -2574, -2574,   958, -2574,  2114,
   -2574, -2574, -2574,  1021,   186, -2574,  2115, -2574, -2574,   574,
    2116, -2574,  2118, -2574, -2574, -2574, -2574, -2574,  2119, -2574,
   -2574,  1021,   186,  2120, -2574, -2574,   186,  5217, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574,    14,  1733,  1534, -2574, -2574,
    2121,  2122, -2574,  2069,  2124,    76, -2574, -2574, -2574,  5217,
   -2574, -2574, -2574, -2574,  5217, -2574, -2574, -2574,  2125,     2,
   -2574, -2574,     2, -2574, -2574,     2, -2574,     2, -2574,  4008,
   -2574,   958, -2574,   958,   186,   958,  2127,   958, -2574,   958,
     186,   958,   186, -2574, -2574, -2574, -2574,  2130, -2574,   186,
   -2574, -2574,  2132, -2574,   186, -2574, -2574, -2574,  2134,   186,
   -2574, -2574, -2574,   574, -2574, -2574, -2574,  1733, -2574,  1857,
    1752,  1534, -2574,  2135,  2136,  2138, -2574, -2574, -2574, -2574,
     838,   838,   574,   574, -2574, -2574, -2574, -2574, -2574,   958,
   -2574, -2574,  2139, -2574,  4972, -2574, -2574,  2140, -2574,  1021,
   -2574, -2574,  1021,   186, -2574, -2574,   186, -2574,  1021,   186,
   -2574,  5217, -2574,  1857, -2574,   203, -2574,  2141,  2142, -2574,
     186,   186,   186,   186,    51,    51,  2143,  4972,   574, -2574,
    4972, -2574, -2574,   186,  2145, -2574,   186,   958, -2574, -2574,
   -2574,  2146,  2148,   186,  2149,   186, -2574, -2574, -2574,   574,
   -2574, -2574,   574, -2574, -2574,  2151, -2574, -2574,  2152,  2153,
   -2574, -2574,  2154, -2574,  2155, -2574, -2574,  1021, -2574,  1021,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2574, -2574,    -4, -2574,   566, -2574, -1623,  -932,  1676, -2574,
     862,  -168,  1943,   -49,  1153, -1654,  1725,  2009,  -756, -1941,
    -884,   880,  1579, -2574, -1045, -2574, -2304, -1136, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574,  -545,  -491, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574,  -435, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -1456, -2574, -2574, -2574, -2574, -2574,  -657, -2574,
   -2574, -2574, -2574, -2574, -2574,    27, -2574, -2574, -2574, -2574,
    -132,  -659,  -901,  -505, -2574, -2574, -2574, -2574,  -570,  -565,
   -2574, -2574, -2573, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574,  1433, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1252
static const yytype_int16 yytable[] =
{
      71,  1899,   350,   863,   893,  2050,  1509,  2052,   108,  1075,
    1078,  1582,  1101,  1587, -1106,    68,    69,  1972,    68,    69,
     321,  1114,  1105,   389,   269,    68,    69,    68,    69,   290,
     379,  1646,   110,   259,  1696,   615,   775,   313,   339,  1617,
    1618,  1619,    68,    69,   856,   778,   344,   110,   294,   355,
    1491,    68,    69,  1471,  1479,   370,   411,    68,    69,   376,
     110,   270,   383,  1070,   641,   306,   386,   388,  1413,   322,
     397,  1198,  2666,   403,   407,  1473,  1724,   410,   323,    68,
      69,   414,   710,  2670,  1499,  1360,   415,  1364,  1920,   110,
    1367,   599,  1415,  1713,   260,  1869,   624,    68,    69,   428,
     404,   437,   438,   442,   444,  1437,   324,  1398,   110,  1921,
    1328,  1257,  1922,  1725,  2337,  1115,   261,    68,    69,  1155,
     448,  1116,   751,  1923,  1249,  1250,  1251,   329,  2347,  2348,
    2349,   868,  1465,  2351,   600,  2353,  2354,   330,   857,  2356,
    2357,  2358,    68,    69,  2360,  2361,  1924,   115,  2364,   852,
    2366,  2367,    58,  2369,   557,   460,  2774,   425,   340,  1343,
    1347,   416,   115,  1925,   331,   220,   894,   262,  1726,   988,
     754,  1474,  1706,    80,  1480,   115,   982,    55,  1156,   493,
    1500,   221,   110,   426,   514,  1870,  1344,  1333,   711,    68,
      69,  1329,   869,   358,   405,    56,    68,    69,  1107,  1477,
    2798,    68,    69,   853,   115,   113,  1478,   110,  1416,   311,
     161,   393,   390,   858,   558,  1157,   989,   178,  1493,   359,
     360,  1438,  1258,   115,   616,  1727,   307,  1361,   271,   562,
     118,  1711,  1199,   361,  1714,  1871,   119,   120,   341,   601,
     332,   249,   272,   622,   757,   118,   983,   700,  1466,  1472,
    1697,   119,   120,  2675,  1647,   571,  1071,  1348,   118,   648,
     649,  1321,   325,  2737,   119,   120,   391,  2445,  1887,   406,
    2449,    68,    69,  1440,   684,  2453,   333,   380,   842,  2454,
     362,   363,   686,   689,  1889,   692,   696,   118,   698,  1715,
    1492,   845,   965,   119,   120,   412, -1106,   115,   708,  2470,
    1106,   966,   967,  1510,   273,   312,   118,   718,   720,   895,
      68,    69,   119,   120,  1973,  1117,   776,   954,   955,  2667,
     334,   123,   115,  1701,   394,   779,   642,   263,  1158,  1475,
    2671,   763,   764,   766,   625,   768,   123,  1072,  1501,   771,
     772,   335,   295,  1080,    70,   990,   563,  1081,   968,   123,
     784,   786,   296,   629,   787,   788,   789,   790,   791,   792,
     793,   794,   795,   121,   956,  1483,   796,   395,   396,  1111,
     153,   799,   801,   264,   154,   155,  2738,   336,   123,   802,
     118,   417,   803,  1503,   343,   153,   119,   120,  1707,   154,
     155,  1108,  2543,   337,   364,  1750,   365,   123,   153,   812,
     813,  1053,   154,   155,   354,   118,   817,   818,   819,  1926,
     820,   119,   120,  1441,  1494,   991,   765,  1541,  1082,   491,
    2739,  1951,  2551,   804,   827,   992,   575,   153,   828,   375,
    1892,   154,   155,   833,   834,   835,   836,   837,   838,  1083,
     839,  1046,  1054,   843,   844,   308,   153,  1712,  1554,  1382,
     154,   155,  2007,   760,   580,   486,   846,   993,  1383,  1384,
     257,   487,   564,  1702,   581,   630,   620,  1047,   309,   849,
    1134,   123,  1109,    59,   572,   366,   534,   969,   970,  1730,
    2806,  2807,   267,  1442,  1888,   590,  1868,   805,   553,  1139,
     535,   582,  1665,   957,   958,  1164,   123,   573,   488,  1669,
    1890,  1084,   241,  1693,  1845,  1385,  2599,  1848,   400,   113,
     875,   877,   536,  1884,    60,    68,    69,  1699,    81,   275,
     153,   276,   489,  1708,   154,   155,  1443,  2607,   885,  1129,
     242,   537,    61,  1703,    68,    69,  1913,  2612,   280,   576,
     631,  1135,   942,  2615,  2616,   153,   401,   971,   538,   154,
     155,   539,   103,   850,    82,   906,   806,   972,   973,  1717,
    1140,    62,   974,   959,   889,  1165,  1718,   583,   490,   565,
     554,   104,  1055,   960,   961,   548,  1704,   540,   541,    63,
     621,   163,   979,    64,   938,   304,  1056,  1057,   240,   975,
     722,   632,   305,   265,  1074,    65,   741,  1085,  1048,   243,
     297,   998,   555,   584,   729,   962,    68,    69,  1751,   449,
    1673,   491,   492,   860,   244,   633,   113,  1797,   953,  1694,
    1731,    68,    69,   105,  1136,    83,  1798,  1799,   299,   761,
     542,    68,    69,  1700,  1386,  1387,  1723,   277,   543,  1709,
     807,   399,   577,  1141,   997,   808,  1893,  1733,  1049,   723,
     328,   861,    68,    69,   382,   742,  2690,  1485,  1160,   822,
     823,  1073,   113,   731,  1086,   591,   549,   121,   585,   578,
    1166,   245,  1237,  1800,  1050,  1732,  2702,  2542,  1058,  1059,
     450,  1559,  1121,  1122,  1123,  1124,  1171,   500,  1125,   357,
    1127,  1137,  1128,  1560,  1130,   501,   352,   544,   545,   368,
      87,   451,   452,   453,  1388,   113,   106,  1053,    84,   454,
    1142,  1419,   281,   246,  1389,  1390,  1253,  1161,  1720,  1391,
     586,   747,   455,   247,  1191,   372,  1064,   300,   456,  1167,
     462,   463,   464,   465,   466,   467,   468,  1420,   457,   469,
     470,   471,   472,  1308,   278,  1172,  1392,  1218,  1054,  1486,
    2750,    66,  2751,   374,  2753,  1219,  2755,    85,  2756,  1583,
    2758,  1182,  1183,  1589,  1184,  1186,  1188,  1189,  1077,   546,
    1421,  1053,   724,  1721,   121,  1102,  1422,    68,  1185,  1201,
    1202,   373,  1423,  1204,  1205,  1206,  1207,  1208,  1209,  1210,
    1211,  1212,  1595,   378,   748,  1215,  1216,  1065,   107,   725,
     301,  1424,  1801,  1802,   409,   743,  1487,   421,  2786,   302,
     419,  1303,  1054,   737,  1222,  1223,  1224,  1446,  1584,   461,
     121,  1425,  1590,    88,  1315,   445,  1956,   646,   647,  1603,
    1607,  1232,  1233,  1234,  1323,  1236,  1426,  1238,  1722,  1239,
     250,    68,    69,   473,  1447,    89,  1103,  1448,   423,    90,
     282,  1596,   458,  1872,   691,   283,  2819,   284,    68,    69,
    1242,   315,  1244,   121,    68,    69,  1427,  1162,  2313,  2314,
    2315,   474,  1803,  1247,  1309,  1304,   484,  1449,  1055,  1168,
    1066,  1254,  1804,  1805,  2113,   701,  1256,  1806,  1604,  1608,
     749,   498,  1056,  1057,   551,  1173,   752,   755,   758,    91,
    1305,  1270,  1272,  1428,  2126,  1450,  2053,   525,  1451,  1313,
     552,  1316,  1319,   635,  1807,   496,  1429,   561,  1324,  2163,
     369,   702,  2166,  1330,  1310,   567,   251,  1430,  1373,  1104,
    2174,   636,   570,  2177,  1331,  1511,  2214,    92,   252,   568,
    1512,  2185,  1055,  1873,  2188,    93,    94,   316,    87,  1339,
    1311,  2195,  2224,    68,    69,  1431,  1056,  1057,  1565,   317,
     589,  1513,  1514,   595,  1515,  1516,   597,  1432,  1585,  1433,
    1434,   703,  1591,   253,   618,  1517,   860,  1306,   385,   627,
    1808,  2243,  1676,  1677,  1058,  1059,   619,  1518,  1519,  1809,
    1810,    68,    69,  1874,   623,  1520,  1412,   639,  1521,   644,
    2706,  1597,  1819,   907,   908,  1576,  1577,   637,   645,  1435,
     650,  1820,  1821,  1403,   861,  1522,  1476,   682,  2717,   254,
    1452,   683,  1523,  1524,    68,    69,  1525,  1307,  1410,  1411,
     651,   652,   255,    68,    69,   699,  1811,  1502,  1605,  1609,
     318,   685,    68,    69,  2630,    73,  1508,  1640,  1058,  1059,
    1453,    74,   706,   319,   707,  1678,    68,    69,  1822,   909,
    1536,   709,  1537,    68,    69,   910,   713,  1538,  1539,  1540,
    1318,    88,   800,   783,   704,  1192,  1193,  1546,   715,   439,
    1547,   721,  1550,  1404,  1666,  1526,   653,   727,    75,  2536,
     745,  2316,   654,    89,    68,    69,  1861,  2049,  1552,   655,
    1553,   656,   746,   603,  1556,  1557,   657,  1195,  1196,   658,
    1763,  1764,    76,   911,   769,   659,  1783,  1784,  1563,  1564,
      68,    69,  1865,  1566,  1567,   660,   770,    68,    69,   912,
    1569,   661,  1570,  1578,  1579,  1572,  1214,  1573,  1527,  2792,
     662,  1627,   913,   773,  1528,  2795,   781,    91,   914,   915,
     440,   797,  1405,  1406,   916,   798,   663,  1765,    77,  1529,
     811,  1580,   814,  1785,   815,  1812,  1813,  1407,  1530,   604,
     816,  1830,  1831,    97,  1620,   821,   664,   824,  1621,   826,
    1622,  1624,   949,   847,  1626,    92,   292,  1823,  1824,    98,
     429,   665,   848,    93,    94,   431,  1531,  1532,   855,  1632,
     666,   667,    78,   864,  2833,   917,  2834,  1408,   866,   605,
    1635,   871,  1637,  1638,  1639,  1641,   873,  1533,  1832,  1644,
    1645,   668,    68,    69,   918,    68,  1269,  1653,  2303,   919,
     887,   920,   902,   441,  1658,  1814,  1089,   892,  1659,  1660,
    1661,  1112,   669,  2130,  2131,  1815,  1816,   897,   606,  1667,
    1817,  2390,  1670,   903,   921,   922,   670,  1825,   671,   687,
    2399,  1534,   923,  1680,   904,    99,  1682,  1826,  1827,  2408,
     447,   672,  1828,  1544,  1545, -1249,   673,  1818,    68,  1623,
     905,   924,   674,    68,    69,  1910,  1766,  1767,   928,   675,
    2132,  1684,  1786,  1787,  1905,  1906,   830,   831,  2336,  1829,
    1736,    68,    69,   929,   930,   932,   100,   934,   676,  1735,
     936,   223,  1742,   939,  1932,  1743,  1744,   940,  1745,  2352,
    1746,   677,   678,   944,   679,   948,  1748,   950,  1749,   951,
     688,   952,   963,   964,  2496,  1755,   224,   925,   716,   976,
     101,   515,   984,   523,   986,   528,   532,  1833,  1834,   987,
    2509,  1035,   994,   559,   995,  2514,  1768,   996,  1061,  1052,
    1063,  1685,  1788,  1068,   680,  1036,  1769,  1770,   588,   225,
    1737,  1069,  1789,  1790,  1037,  1118,   226,  1119,    68,    69,
    1867,  1991,  1410,  1411,  1038,  1120,   227,   228,  1226,    68,
      69,  1131,  1145,   229,  1133,   429,   430,   431,  1771,  1144,
    1148,  1146,  2139,  2140,  1791,  1147,  1149,  1152,  1150,   717,
    1862,  1151,  1864,  1866,  1412,  1039,   230,  1835,  1153,  2133,
    2134,  1170,  1177,  2148,  2149,  1175,  1176,  1836,  1837,  1178,
    1686,  1687,  1179,   231,  1877,  1040,  1180,  1181,  1880,  1738,
    1739,  1412,   694,  1194,  1197,  1688,  1203,  2622,   232,  2141,
    2625,  1213,  2627,  1217,  1740,   233,    68,    69,  1883,  1838,
    1410,  1411,  1909,  1911,  1412,  2639,  2640,  1220,  1221,  1225,
    2150,  1227,  1919,  1228,  1263,   234,  1930,  1240,  1241,  1262,
    1041,  1261,  2654,  1266,  1938,  1689,    68,    69,  1912,  2135,
    1410,  1411,  1267,  1268,  1741,  1314,  1326,  1320,  1945,  2136,
    2137,  1322,  1332,  1947,  1336,  1355,  1337,  1949,  1340,  1952,
    1953,   235,  1955,  1957,  1958,  1341,  1961,  1042,  1342,  1964,
    1965,  1966,  1967,  1968,  1969,  1970,  1971,  1974,  1976,  1977,
    1350,  2138,  1979,  1980,  1981,  1982,  1351,  1414,  1352,  1356,
    1353,  1043,  1988,  1989,  1357,  1358,  2528,  1992,  1993,  1994,
    1359,  1365,  1996,  1997,  1366,  2532,  2618,  1368,  1369,  1454,
    1375,   236,  1377,  1378,  2626,  2000,  2001,  1380,  2002,  2003,
    1393,  1394,   237,   475,  1395,  1396,  1399,  2638,  2142,  2143,
    1400,  1044,  2643,  1045,  1464,  1401,  1455,  1417,  1439,  1456,
    1418,   476,  1457,  1444,  1467,  1445,  1468,  2628,   841,  2151,
    2152,   238,  1469,  1470,  1484,  1488,  2550,  1489,   477,  2552,
    1490,  1495,  2553,  1505,  2554,  1496,  2023,  2024,  2025,  1458,
     478,  1497,  2027,  2652,  1498,  1090,  1504,  2029,  2032,   729,
    2034,  2035,  2036,  1091,  2037,  2038,  1506,  2040,   479,  1092,
    2043,  2044,   480,  1507,  1642,  1543,  1555,  1459,  2144,  2047,
    1460,  1561,  1562,  1568,   481,  1575,  2051,  1571,  2145,  2146,
    1093,  1588,  2056,  2057,  1593,  1574,  1594,  1551,  1599,  2153,
    2059,  1600,  1601,  1602,  1631,  1611,  2060,  1558,  1612,  2154,
    2155,  1613,  1671,  1614,  1094,   730,  1615,  1616,   731,  1629,
    2147,   890,  1095,  1630,   482,  1643,  1654,  1636,  1649,  1655,
    1656,  1663,  1668,  1672,  1675,  1681,  -448,  1683,  1692,  1705,
    1716,  2156,  2088,  1695,  1710,  1719,  1728,  1734,  1747,  1753,
    2704,  2705,  1754,   927,  2708,   732,  2710,  1729,  1759,  1096,
    1778,  1781,  1885,  1792,  1794,  1796,  1839,  1097,  2715,  2716,
    2102,  2103,  1840,  2720,  2721,  2105,  1841,  2724,  2246,  1842,
    1846,  2108,  2725,  2726,  1847,  1886,  1849,  1850,  1851,  1854,
     733,  1857,  1461,  2250,  2251,  1875,  1879,  1891,  2253,  1896,
    1897,  1898,  1894,  1900,  2257,  1901,  2259,  1902,  1907,  1098,
    1928, -1251,  1934,  1948,  1895,  1985,  1903,  1904,  1950,  1998,
    1099,  1999,  1462,  1650,  1651,  2004,  1954,  1962,  2005,  1963,
    1978,  2006,  2760,  2008,  2009,  2761,  1100,  2010,   734,  2011,
    2764,   735,  2012,  2015,   164,  2013,  2767,  2014,  2016,  1463,
    2017,  2770,  2308,  2018,  2019,  2042,  2020,  2791,  2021,   165,
    2022,   166,  2039,  2041,  2045,   736,  2058,  2061,   737,  2063,
    2064,  2065,  2066,  2097,  2098,  2099,  2100,  2104,  2107,   738,
    1363,  2106,  2110,  2111,  2112,  2114,  2115,  2119,  2209,  2116,
    2210,   167,  2212,  2121,  1412,  2322,  2122,  2123,  2127,   168,
    2128,  2157,  2129,  2158,  2159,  2160,  2164,  2165,  2500,  2167,
    1412,  2225,  2226,  2227,  2228,  2229,  2230,  2231,  2232,  2233,
    2168,  2814,  2169,  2170,  2817,  2171,  2175,  2176,  2179,  2178,
    2180,  2181,  2182,  2186,  2187,  2239,  2189,  2241,  2190,  1412,
    2191,  2192,  2196,  2197,  2248,  2828,  2198,  2200,  2201,  2203,
    2204,  2523,  2206,  2213,  2215,  2219,  2249,   169,  2223,  2835,
    2234,  2235,  2836,  2837,  2255,  2236,  2237,  2238,  2501,  2242,
    2295,  2300,  2301,  2304,  2310,  2260,  2261,  2262,  2263,  2264,
    2265,  2266,  2267,  2268,  2269,  2312,  2325,  2282,  2283,  2284,
    2285,  2286,  2287,  2288,  2289,  2290,  2291,  2292,  2293,  2326,
    2296,  2327,  2297,  2298,  2299,  1858,   291,   170,  2328,  2331,
    2376,  1863,  2339,  2342,  2343,  2344,  2345,  2371,  2309,  2372,
    2373,  2374,  2378,   171,   172,  2380,  2383,  2391,  2730,  2385,
     173,  2386,   174,  1876,  2387,  2392,  1878,  2393,  2394,  2395,
    1882,  2396,  2400,  2664,  2401, -1119,  2402,  1243,  2403,  1412,
    2317,  2404,  2405,  2318,  2409,  2319,  2410,  2321,   175,  2411,
    2323,  1908,  2324,  2418,  2421,  2429,  2432,  1914,  2435,  2329,
    2330,  2436,  2438,  2441,  2442,  1929,  2334,  2443,  2335,  1933,
    2446,  2452,  2338,  2456,  2473,  2340,  2502,  2503,  1939,  1940,
     446,  2530,  2504,  2505,  2531,  2506,  2508,  2538,  2539,  1946,
    2541,  2545,  2730,  2544,  2546,  2735,  2547,  2474,  2475,  2476,
    2549,  2555,  2480,  2556,  2482,  2483,  2558,  2559,  2487,  2560,
    2489,  2569,  2573,  2580,   176,  2586,  2590,  2593,  2600,  2608,
    2620,  2775,  2631,  2632,  2379,  2633,  2634,  2635,  2636,   829,
    2651,  2658,  2660,  2662,  2663,   810,  2669,  2674,  2703,  2709,
    2741,  2712,  2713,  2714,  2719,  2677,  2733,  2734,  2736,  2744,
     512,  2754,   519,   522,  2762,   527,   531,  2765,  2768,  2274,
    2777,  2778,  2779,  2787,  2790,  2507,  2800,  2801,  2808,  2816,
    2727,  2820,  2534,  2821,  2823,  2827,  2829,  2444,  2830,  2831,
    2832,  2776,  2772,   593,     0,  1154,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1482,     0,     0,     0,
     608,   613,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2450,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2457,  2458,  2459,  2460,  2461,  2462,  2463,  2464,  2465,
    2466,  2467,   693,     0,     0,     0,  1772,  2471,  1549,     0,
       0,     0,     0,     0,  2477,     0,     0,  2481,  1782,  2781,
    2783,   714,     0,  2488,     0,     0,  2490,  2491,  2492,  2493,
    2494,  2495,  1412,  2497,  2498,  2499,  1843,  1844,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1412,  2510,
    2511,  2512,  2513,  1412,  2515,  2516,  2517,  2518,  2519,  2520,
       0,  2522,     0,  1412,  2526,  2527,     0,     0,     0,     0,
     697,     0,     0,     0,     0,     0,  2611,     0,     0,     0,
       0,     0,     0,  2533,  2614,     0,     0,  2535,     0,     0,
       0,  2537,     0,     0,     0,  2540,     0,     0,     0,     0,
       0,     0,     0,     0,  2270,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2271,     0,     0,     0,     0,
       0,     0,     0,  2649,     0,     0,  1634,     0,     0,   782,
       0,     0,     0,     0,     0,     0,     0,     0,   825,     0,
    1090,  2272,     0,     0,     0,  2561,     0,     0,  1091,   832,
       0,     0,     0,     0,  1092,     0,     0,     0,   840,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1093,     0,     0,     0,  2273,
       0,     0,  1674,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1691,     0,  1094,
       0,     0,     0,     0,     0,     0,     0,  1095,     0,     0,
       0,     0,     0,     0,  2218,     0,     0,     0,  2602,     0,
       0,     0,  2604,     0,     0,     0,     0,   876,     0,     0,
     878,   879,  2605,  2606,     0,     0,     0,     0,     0,  2610,
       0,     0,     0,   883,  1096,     0,  2613,     0,   886,     0,
    2244,     0,  1097,     0,  1412,     0,  2619,   898,   900,  2623,
    2624,     0,  1412,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1412,     0,     0,  2641,  2642,
    1412,  2644,  2645,  2646,  2647,  2648,     0,     0,  2650,     0,
       0,   874,  2653,     0,  1098,     0,     0,     0,   880,     0,
       0,   881,     0,  2661,     0,  1099,   882,  1346,  2665,     0,
     884,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1100,     0,   945,   946,   947,     0,  2678,     0,     0,
       0,  2274,     0,  2275,     0,     0,  1860,     0,     0,  1397,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2689,     0,     0,     0,     0,     0,  2694,     0,
    2696,     0,   943,     0,     0,     0,  2700,     0,     0,     0,
       0,     0,  1088,     0,     0,     0,     0,  2276,     0,  1412,
    2707,     0,     0,     0,     0,  1916,     0,     0,  1918,     0,
       0,     0,     0,     0,     0,     0,     0,  1412,  2718,  1936,
    2749,     0,  2722,     0,     0,     0,     0,  1942,     0,     0,
       0,     0,     0,     0,  1944,     0,     0,     0,  2118,     0,
       0,  2740,     0,     0,     0,     0,  2124,  2125,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2161,  2162,     0,     0,     0,     0,     0,     0,     0,
    2752,     0,  2172,  2173,     0,     0,  2757,     0,  2759,     0,
       0,     0,  1126,  2183,  2184,  2763,     0,     0,     0,  1132,
    2766,     0,     0,  2193,  2194,  2769,     0,     0,     0,  2199,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2202,
       0,     0,     0,     0,     0,     0,  2780,  2782,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1412,     0,     0,  1412,  2793,
       0,     0,  2794,     0,  1412,  2796,     0,     0,     0,  1230,
       0,     0,     0,     0,     0,     0,  2802,  2803,  2804,  2805,
       0,  1235,     0,     0,  2031,     0,     0,     0,     0,  2815,
       0,     0,  2818,     0,     0,     0,   110,     0,     0,  2822,
       0,  2824,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   111,     0,     0,     0,     0,     0,     0,  1245,  1246,
       0,     0,     0,  1412,     0,  1412,     0,     0,     0,     0,
       0,     0,   112,     0,  1229,     0,     0,     0,     0,     0,
       0,  1231,  1265,     0,  1190,     0,     0,     0,   113,  2073,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2079,
       0,     0,     0,     0,  2084,     0,     0,     0,     0,  2529,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1248,     0,     0,
       0,  1335,  1252,   114,     0,  1255,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1264,     0,     0,
       0,   115,     0,     0,     0,     0,     0,     0,     0,  1756,
    1757,  1758,     0,     0,     0,     0,     0,     0,     0,  1760,
    1761,  1762,     0,     0,     0,     0,  1773,  1774,  1775,     0,
       0,  1776,  1777,     0,  1779,  1780,     0,     0,     0,   116,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1481,     0,     0,     0,
       0,     0,     0,     0,  1852,  1853,     0,     0,  1855,  1856,
       0,     0,     0,     0,     0,     0,   117,     0,     0,     0,
       0,     0,     0,     0,   118,     0,     0,     0,     0,  2382,
     119,   120,     0,     0,     0,     0,   121,  1402,     0,  2384,
       0,   122,     0,  2388,  2389,     0,     0,     0,  1542,     0,
       0,     0,  2397,  2398,     0,     0,     0,     0,  1548,     0,
    2217,  2406,  2407,  2221,     0,     0,     0,  2412,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2422,  2423,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2433,  2434,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2437,
       0,     0,     0,     0,  2637,     0,     0,     0,  2439,     0,
    2440,     0,     0,     0,     0,   123,     0,     0,     0,     0,
       0,     0,     0,     0,  2655,     0,     0,     0,  2659,     0,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,  1625,
       0,     0,     0,     0,   153,     0,     0,     0,   154,   155,
       0,     0,     0,     0,     0,     0,  1633,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,     0,     0,     0,     0,  1657,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1664,     0,     0,     0,    68,    69,     0,     0,     0,     0,
    1628,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     111,     0,     0,  2341,     0,     0,     0,  1690,     0,     0,
       0,     0,  1698,     0,     0,     0,     0,     0,     0,     0,
     286,     0,     0,     0,     0,     0,     0,     0,     0,  1652,
       0,     0,     0,     0,     0,     0,     0,   113,     0,     0,
       0,     0,     0,     0,  1662,     0,     0,     0,  2377,     0,
       0,     0,     0,  2563,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2572,     0,     0,     0,     0,     0,     0,
       0,     0,  2574,     0,     0,     0,     0,     0,     0,     0,
       0,  2583,   114,     0,     0,     0,     0,     0,  2585,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2589,
       0,     0,     0,     0,     0,  2592,     0,     0,  2594,     0,
       0,  2595,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2109,     0,
       0,  2799,     0,     0,     0,     0,     0,     0,   116,     0,
       0,  2117,     0,     0,     0,     0,  1859,     0,     0,     0,
       0,  2120,     0,  2448,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   287,  1881,     0,     0,     0,
       0,     0,  2469,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2479,     0,     0,   121,     0,     0,  2486,     0,
     122,     0,     0,     0,     0,  1915,     0,     0,  1917,     0,
       0,   288,     0,     0,     0,     0,     0,     0,     0,  1935,
    1937,     0,     0,  2205,     0,     0,     0,  1941,     0,     0,
       0,     0,     0,     0,  1943,     0,     0,     0,     0,  2679,
       0,     0,     0,  2681,     0,     0,    68,    69,     0,     0,
    2682,     0,     0,     0,     0,     0,  2685,     0,     0,     0,
    2687,     0,   111,  2688,     0,     0,     0,     0,     0,     0,
       0,   289,     0,     0,  1983,     0,     0,  1986,  1987,     0,
    1931,     0,     0,     0,     0,     0,     0,  1995,     0,     0,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1984,     0,     0,   114,     0,   977,  1990,     0,     0,
       0,   978,     0,     0,     0,     0,     0,  2026,     0,     0,
       0,     0,     0,     0,  2030,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2046,     0,     0,     0,     0,     0,     0,  2598,
       0,     0,     0,     0,     0,     0,     0,     0,  2055,     0,
     116,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2062,     0,     0,
       0,     0,  2067,     0,     0,  2069,  2028,  2070,  2071,  2072,
    2074,     0,  2033,  2076,     0,     0,  2077,     0,     0,  2078,
    2080,     0,  2081,  2082,  2083,  2085,     0,  2086,  2087,     0,
       0,     0,     0,  2089,  2090,  2091,  2048,     0,  2092,  2093,
       0,     0,   122,  2054,  2094,  2095,     0,  1371,     0,  2096,
       0,     0,     0,     0,  2101,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2381,     0,  2068,
       0,     0,     0,     0,     0,     0,     0,  2075,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,     0,  2413,  2414,  2415,
    2416,  2417,     0,  2419,  2420,     0,     0,     0,  2424,  2425,
    2426,  2427,  2428,  2692,  2430,  2431,     0,     0,     0,     0,
       0,  2698,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2208,    68,    69,     0,  2211,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2216,   111,     0,  2220,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,  1372,  2240,     0,     0,     0,     0,   113,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2207,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2222,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   114,     0,     0,     0,  2789,     0,     0,
       0,     0,     0,     0,     0,  2294,     0,     0,   346,     0,
       0,     0,     0,     0,  2245,   347,  2247,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2810,     0,     0,  2813,  2252,     0,  2254,     0,     0,     0,
    2256,     0,  2258,     0,     0,     0,     0,     0,     0,   116,
       0,  2562,     0,     0,  2564,  2565,  2566,  2567,  2568,     0,
    2570,  2571,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2575,  2576,  2577,  2578,  2579,     0,  2581,  2582,
    2333,  2584,  2302,     0,     0,  2306,  2307,     0,     0,     0,
       0,  2587,  2588,     0,  2311,     0,     0,     0,     0,     0,
       0,     0,  2591,     0,     0,     0,   121,     0,     0,     0,
       0,   122,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2363,     0,     0,     0,     0,     0,     0,     0,  2320,
       0,     0,   530,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2332,     0,   111,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2346,     0,     0,     0,
       0,  2350,     0,     0,     0,     0,   899,  2355,     0,     0,
       0,     0,  2359,     0,   113,     0,  2362,     0,     0,  2365,
       0,   111,  2368,     0,  2370,     0,     0,     0,     0,     0,
    2375,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   114,
       0,   348,     0,   349,     0,     0,     0,     0,     0,     0,
       0,  2680,     0,  2447,     0,     0,  2451,     0,     0,     0,
       0,     0,  2683,     0,  2684,     0,  2455,     0,  2686,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2468,   114,     0,  2472,     0,     0,     0,     0,
       0,     0,  2478,     0,     0,   116,     0,  2484,  2485,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   116,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   121,     0,     0,     0,     0,   122,  2745,     0,
       0,  2746,     0,     0,  2747,     0,  2748,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2548,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   122,     0,  2521,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2557,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,     0,     0,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2597,
       0,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2617,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2629,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     0,  2596,     0,     0,     0,     0,     0,     0,
    2601,     0,     0,     0,  2603,     0,     0,     0,     0,     0,
       0,     2,     0,     0,     3,     0,     4,     0,     0,     0,
       0,  2609,     0,     0,     0,     0,     0,     0,     0,     5,
       0,     0,  2673,     0,     6,     7,     0,     8,     9,    10,
       0,  2676,     0,     0,     0,     0,     0,    11,     0,     0,
       0,     0,     0,     0,    12,     0,    13,    14,     0,     0,
       0,     0,     0,     0,     0,    15,    16,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2691,  2693,     0,  2695,     0,     0,     0,
     111,  2697,  2699,     0,     0,    17,  2701,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    18,     0,     0,
       0,    19,     0,     0,    20,     0,     0,     0,     0,    21,
      22,     0,     0,     0,     0,     0,    23,     0,     0,     0,
    2723,     0,    24,     0,     0,     0,   503,   504,     0,     0,
     505,     0,     0,     0,     0,    25,   609,   111,    26,    27,
      28,     0,  2742,    29,    30,     0,     0,  2743,     0,     0,
       0,     0,   506,     0,     0,     0,     0,    31,     0,     0,
       0,     0,   114,     0,     0,     0,     0,     0,  2711,     0,
       0,     0,    32,    33,    34,     0,   610,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    35,     0,    36,     0,
       0,     0,     0,     0,     0,    37,     0,     0,    38,     0,
       0,    39,     0,    40,     0,    41,     0,     0,     0,     0,
      42,     0,     0,     0,     0,     0,     0,     0,   116,   114,
       0,     0,     0,    43,     0,     0,     0,  2788,     0,    44,
     507,     0,     0,   611,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2797,    45,    46,   508,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    47,     0,    48,
    2809,     0,  2771,  2812,     0,    49,     0,   509,    50,    51,
       0,     0,     0,     0,     0,   116,     0,     0,     0,     0,
     122,  2784,  2785,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    52,
       0,     0,     0,     0,     0,    53,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2811,     0,     0,
     510,     0,     0,     0,     0,     0,     0,   122,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2825,     0,
       0,  2826,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,     0,   511,
       0,     0,     0,     0,   612,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   999,  1000,  1001,     0,     0,
    1273,  1274,  1275,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1002,  1003,     0,     0,  1004,  1276,  1277,
    1005,     0,  1278,   111,     0,     0,     0,  1006,     0,  1279,
       0,  1007,  1280,     0,     0,     0,  1281,     0,     0,  1008,
    1009,     0,     0,     0,  1282,  1283,     0,  1010,  1011,     0,
       0,   111,  1284,     0,     0,     0,     0,     0,     0,     0,
     113,     0,     0,     0,  1012,     0,     0,     0,     0,     0,
    1013,     0,     0,     0,  1014,  1015,     0,     0,  1016,  1285,
    1286,     0,     0,  1287,     0,     0,     0,     0,   113,     0,
       0,     0,     0,     0,     0,  1017,     0,     0,     0,     0,
    1288,     0,     0,     0,   111,   114,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1018,     0,     0,     0,     0,
    1289,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   114,     0,     0,     0,  1019,     0,     0,
       0,     0,  1290,     0,   517,     0,     0,     0,     0,     0,
       0,  1291,     0,     0,     0,     0,     0,     0,     0,     0,
    1020,   116,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   114,     0,  1021,   116,
    1022,     0,     0,  1292,     0,  1293,  1023,  1024,     0,     0,
       0,  1294,  1295,     0,     0,     0,     0,     0,     0,     0,
    1025,  1026,     0,     0,     0,     0,  1296,     0,   121,     0,
    1027,  1028,     0,   122,     0,     0,  1297,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   116,     0,     0,     0,   121,  1029,     0,  1030,
       0,   122,  1298,     0,  1299,     0,     0,     0,     0,     0,
       0,  1031,     0,  1032,  1300,     0,     0,     0,     0,  1033,
       0,     0,     0,     0,  1301,     0,     0,     0,     0,     0,
       0,   521,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   111,     0,     0,     0,
       0,     0,     0,  1034,   122,     0,     0,     0,  1302,     0,
       0,     0,     0,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,     0,
       0,   518,     0,     0,     0,     0,     0,     0,   114,     0,
       0,     0,     0,     0,     0,   111,     0,     0,     0,     0,
       0,     0,     0,     0,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,  1334,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   116,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   114,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   122,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   116,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   122,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,     0,     0,     0,     0,     0,     0,
     180,     0,     0,   181,     0,   182,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   183,     0,   184,   185,   186,     0,
       0,     0,     0,     0,     0,     0,   187,     0,   188,     0,
       0,     0,     0,   189,     0,   190,   191,   192,     0,     0,
       0,     0,   193,     0,   194,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   195,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     196,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   197,   198,     0,     0,   199,     0,     0,     0,   200,
       0,   201,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   202,   203,     0,     0,   204,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   205,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   206,   207,     0,     0,     0,     0,     0,     0,   208,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   209,     0,   210,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   211,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   212,   213,     0,     0,     0,     0,
       0,     0,     0,   214,     0,     0,     0,     0,     0,     0,
     215,     0,     0,     0,     0,     0,   216,     0,   217,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   218
};

static const yytype_int16 yycheck[] =
{
       4,  1457,    51,   494,     4,  1659,     5,  1661,    12,   666,
     667,  1147,   671,  1149,     0,     3,     4,     5,     3,     4,
      50,     5,     5,     4,    20,     3,     4,     3,     4,    33,
      32,    46,     4,     5,    21,     4,     4,    41,     4,  1175,
    1176,  1177,     3,     4,    78,     4,    50,     4,     5,    53,
       5,     3,     4,    27,   121,    59,     4,     3,     4,    63,
       4,    57,    66,    17,     5,    38,    70,    71,  1000,    99,
      74,    97,    32,    77,    78,    36,   131,    81,   108,     3,
       4,    85,   150,    32,    36,    17,    90,   971,    27,     4,
     974,    44,   121,    27,    66,   105,     5,     3,     4,   103,
      78,   105,   106,   107,   108,   121,   136,   991,     4,    48,
      17,   133,    51,   168,  2055,    99,    88,     3,     4,    61,
     124,   105,    66,    62,   880,   881,   882,    37,  2069,  2070,
    2071,   193,   121,  2074,    87,  2076,  2077,    47,   172,  2080,
    2081,  2082,     3,     4,  2085,  2086,    85,   119,  2089,   193,
    2091,  2092,    66,  2094,     5,   159,  2729,     5,   124,   157,
     165,     5,   119,   102,    74,    83,   166,   139,   223,    14,
      66,   132,    21,   282,   241,   119,    87,   241,   120,   183,
     132,    99,     4,    31,   188,   195,   184,   943,   256,     3,
       4,    98,   254,    22,   172,   259,     3,     4,    17,   259,
    2773,     3,     4,   247,   119,    56,   266,     4,   237,   194,
      33,   187,   193,   247,    65,   157,    61,   144,    27,    48,
      49,   237,   244,   119,   193,   280,    61,   159,   224,   202,
     202,    21,   258,    62,   168,   245,   208,   209,   204,   192,
     150,    16,   238,   247,    66,   202,   157,   296,   237,   223,
     237,   208,   209,  2557,   269,    61,   210,   262,   202,   263,
     264,   920,   292,   187,   208,   209,   247,  2208,    21,   247,
    2211,     3,     4,    27,   278,  2216,   186,   279,   446,  2220,
     109,   110,   286,   287,    21,   289,   290,   202,   292,   223,
     245,   459,     5,   208,   209,   243,   282,   119,   302,  2240,
     283,    14,    15,   302,   300,   290,   202,   311,   312,   309,
       3,     4,   208,   209,   302,   299,   284,    14,    15,   279,
     230,   293,   119,    27,   300,   284,   267,   299,   270,   290,
     279,   335,   336,   337,   243,   339,   293,   291,   290,   343,
     344,   251,   299,    36,   290,   190,    66,    40,    61,   293,
     354,   355,   309,     5,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   214,    61,  1024,   370,   343,   344,   284,
     342,   375,   376,   345,   346,   347,   300,   287,   293,   383,
     202,   225,   386,  1042,   290,   342,   208,   209,   237,   346,
     347,   210,  2333,   303,   223,    20,   225,   293,   342,   403,
     404,    63,   346,   347,   290,   202,   410,   411,   412,   348,
     414,   208,   209,   167,   223,   260,   223,  1074,   111,   343,
     344,   223,  2363,    30,   428,   270,    21,   342,   432,   290,
      21,   346,   347,   437,   438,   439,   440,   441,   442,   132,
     444,     4,   104,   447,   448,   280,   342,   237,  1105,     5,
     346,   347,  1588,    13,    37,   187,   460,   302,    14,    15,
     229,   193,   182,   167,    47,   117,     6,    30,   303,   103,
      40,   293,   291,    12,   280,   304,    45,   190,   191,    27,
    2784,  2785,     5,   237,   237,    16,  1418,    94,     6,    40,
      59,    74,  1248,   190,   191,    87,   293,   303,   230,  1255,
     237,   194,    88,   121,  1388,    61,  2447,  1391,   138,    56,
     514,   515,    81,  1445,    53,     3,     4,   121,     4,    64,
     342,    66,   254,   121,   346,   347,   280,  2468,   532,   697,
     116,   100,    71,   237,     3,     4,  1468,  2478,    66,   134,
     192,   111,   591,  2484,  2485,   342,   176,   260,   117,   346,
     347,   120,    40,   187,    40,   559,   163,   270,   271,   259,
     111,   100,   275,   260,     4,   157,   266,   150,   300,   289,
      88,    59,   234,   270,   271,   211,   280,   146,   147,   118,
     120,    15,   631,   122,   588,     4,   248,   249,    22,   302,
      61,   243,    88,    27,   256,   134,    61,   290,   161,   185,
      34,   650,   120,   186,    61,   302,     3,     4,   233,    35,
       4,   343,   344,   138,   200,   267,    56,     5,   622,   237,
     168,     3,     4,   111,   194,   111,    14,    15,    70,   189,
     199,     3,     4,   237,   190,   191,  1295,   182,   207,   237,
     247,    75,   237,   194,   648,   252,   237,  1306,   211,   120,
       4,   176,     3,     4,   123,   120,  2597,   131,    61,     4,
       5,   665,    56,   120,   668,   196,   302,   214,   251,   264,
      61,   257,   840,    61,   237,   223,  2617,  2331,   340,   341,
     106,     5,   686,   687,   688,   689,    61,   169,   692,     0,
     694,   261,   696,    17,   698,   177,   229,   266,   267,     5,
      28,   127,   128,   129,   260,    56,   194,    63,   194,   135,
     261,    40,   203,   299,   270,   271,   884,   120,   168,   275,
     303,    34,   148,   309,   773,   266,    40,   169,   154,   120,
     164,   165,   166,   167,   168,   169,   170,    66,   164,   173,
     174,   175,   176,    30,   289,   120,   302,     4,   104,   223,
    2691,   290,  2693,     4,  2695,    12,  2697,   243,  2699,    61,
    2701,   765,   766,    61,   768,   769,   770,   771,   124,   338,
      99,    63,   243,   223,   214,    40,   105,     3,     4,   783,
     784,     5,   111,   787,   788,   789,   790,   791,   792,   793,
     794,   795,    61,     5,   107,   799,   800,   111,   286,   270,
     242,   130,   190,   191,     5,   270,   280,     5,  2749,   251,
      31,    66,   104,   270,   818,   819,   820,    22,   120,     4,
     214,   150,   120,   151,   206,   194,   223,   261,   262,    61,
      61,   835,   836,   837,   206,   839,   165,   841,   288,   843,
      26,     3,     4,   117,    49,   173,   111,    52,     5,   177,
     341,   120,   278,   105,   288,   346,  2797,   348,     3,     4,
     864,    26,   866,   214,     3,     4,   195,   270,  2004,  2005,
    2006,    66,   260,   877,   161,   130,   118,    82,   234,   270,
     194,   885,   270,   271,  1768,    54,   890,   275,   120,   120,
     203,   169,   248,   249,     5,   270,   330,   331,   332,   227,
     155,   905,   906,   232,  1788,   110,  1662,    33,   113,   913,
      89,   915,   916,    93,   302,   282,   245,    16,   922,  1803,
      59,    90,  1806,   927,   211,    66,   112,   256,   977,   194,
    1814,   111,   281,  1817,   938,    22,  1868,   265,   124,   230,
      27,  1825,   234,   195,  1828,   273,   274,   112,    28,   953,
     237,  1835,  1884,     3,     4,   284,   248,   249,  1126,   124,
      89,    48,    49,    72,    51,    52,    31,   296,   270,   298,
     299,   140,   270,   159,     5,    62,   138,   232,   123,     5,
       5,  1913,    24,    25,   340,   341,     4,    74,    75,    14,
      15,     3,     4,   245,     4,    82,  1000,     5,    85,     4,
    2623,   270,     5,     4,     5,    42,    43,   187,     5,   338,
       5,    14,    15,    82,   176,   102,  1020,     5,  2641,   205,
     225,     4,   109,   110,     3,     4,   113,   282,     7,     8,
       4,     5,   218,     3,     4,     4,    61,  1041,   270,   270,
     205,     5,     3,     4,  2500,   187,  1050,    59,   340,   341,
     255,   193,     4,   218,     4,    97,     3,     4,    61,    60,
    1064,     4,  1066,     3,     4,    66,     5,  1071,  1072,  1073,
      17,   151,    12,   123,   243,     4,     5,  1081,     4,    40,
    1084,    97,  1086,   152,  1252,   172,    60,   120,   230,    59,
       5,  2023,    66,   173,     3,     4,     5,   177,  1102,    73,
    1104,    75,     4,   150,  1108,  1109,    80,     4,     5,    83,
      14,    15,   254,   114,   267,    89,    14,    15,  1122,  1123,
       3,     4,     5,  1127,  1128,    99,     4,     3,     4,   130,
    1134,   105,  1136,   170,   171,  1139,    12,  1141,   225,  2762,
     114,  1190,   143,     4,   231,  2768,     4,   227,   149,   150,
     111,     4,   221,   222,   155,     5,   130,    61,   300,   246,
       4,   198,     4,    61,     4,   190,   191,   236,   255,   216,
       4,    14,    15,    83,  1178,     4,   150,     5,  1182,     5,
    1184,  1185,   616,     5,  1188,   265,    33,   190,   191,    99,
       9,   165,   266,   273,   274,    11,   283,   284,   169,  1203,
     174,   175,   344,     4,  2827,   206,  2829,   276,     4,   256,
    1214,   177,  1216,  1217,  1218,  1219,   169,   304,    61,  1223,
    1224,   195,     3,     4,   225,     3,     4,  1231,  1984,   230,
       4,   232,     5,   194,  1238,   260,   670,   196,  1242,  1243,
    1244,   675,   216,    14,    15,   270,   271,   196,   295,  1253,
     275,  2135,  1256,     5,   255,   256,   230,   260,   232,    40,
    2144,   348,   263,  1267,     4,   175,  1270,   270,   271,  2153,
     117,   245,   275,     4,     5,     0,   250,   302,     3,     4,
     196,   282,   256,     3,     4,     5,   190,   191,   188,   263,
      61,    82,   190,   191,     4,     5,   434,   435,  2054,   302,
      82,     3,     4,   188,    66,    66,   216,    66,   282,  1313,
     223,    19,  1316,     5,  1482,  1319,  1320,   224,  1322,  2075,
    1324,   295,   296,     5,   298,     4,  1330,     4,  1332,     4,
     111,   196,    87,     5,  2266,  1339,    44,   338,    40,    87,
     250,   188,     5,   190,     4,   192,   193,   190,   191,     4,
    2282,    66,     5,   200,     5,  2287,   260,     4,    99,     5,
      17,   152,   260,     4,   338,    80,   270,   271,   215,    77,
     152,     5,   270,   271,    89,    17,    84,    17,     3,     4,
       5,  1549,     7,     8,    99,     4,    94,    95,   822,     3,
       4,     4,    97,   101,     4,     9,    10,    11,   302,     4,
      87,     5,    14,    15,   302,     5,     4,    87,     5,   111,
    1414,     5,  1416,  1417,  1418,   130,   124,   260,     5,   190,
     191,     4,     4,    14,    15,     5,     5,   270,   271,     4,
     221,   222,     5,   141,  1438,   150,     5,     5,  1442,   221,
     222,  1445,   289,     4,     4,   236,    12,  2492,   156,    61,
    2495,     5,  2497,    12,   236,   163,     3,     4,     5,   302,
       7,     8,  1466,  1467,  1468,  2510,  2511,     4,     4,     4,
      61,     4,  1476,     4,     4,   183,  1480,     5,     5,     5,
     195,   166,  2527,     4,  1488,   276,     3,     4,     5,   260,
       7,     8,     5,     4,   276,    20,   284,   255,  1502,   270,
     271,   255,     5,  1507,     4,   268,     5,  1511,     5,  1513,
    1514,   219,  1516,  1517,  1518,     5,  1520,   232,     5,  1523,
    1524,  1525,  1526,  1527,  1528,  1529,  1530,  1531,  1532,  1533,
       4,   302,  1536,  1537,  1538,  1539,     4,   237,     5,   268,
       5,   256,  1546,  1547,     5,     5,  2302,  1551,  1552,  1553,
       5,     4,  1556,  1557,     4,  2311,  2488,     5,     5,    22,
       5,   269,     5,     5,  2496,  1569,  1570,     5,  1572,  1573,
       4,     4,   280,    53,     5,     5,     4,  2509,   190,   191,
       5,   296,  2514,   298,    40,     5,    49,   237,     5,    52,
     105,    71,    55,   138,   237,   105,   105,  2498,   445,   190,
     191,   309,     5,   210,    40,   241,  2362,   210,    88,  2365,
       5,     4,  2368,  1047,  2370,     5,  1620,  1621,  1622,    82,
     100,     5,  1626,  2524,   210,    91,   210,  1631,  1632,    61,
    1634,  1635,  1636,    99,  1638,  1639,     4,  1641,   118,   105,
    1644,  1645,   122,     4,     6,     5,     5,   110,   260,  1653,
     113,     5,     5,     4,   134,     4,  1660,   111,   270,   271,
     126,     5,  1666,  1667,     5,   111,     5,  1101,     4,   260,
    1674,     5,     5,     4,    12,     5,  1680,  1111,     5,   270,
     271,     4,    38,     5,   150,   117,     5,     4,   120,     5,
     302,   538,   158,     5,   174,     4,     4,    12,     5,     4,
       4,     4,     4,    38,     5,     4,     0,     5,   237,   138,
     168,   302,  1716,   237,   237,   121,     4,   206,   196,     4,
    2621,  2622,     4,   570,  2625,   157,  2627,   245,     4,   195,
       4,     4,   237,     5,     5,     5,   268,   203,  2639,  2640,
    1744,  1745,     5,  2644,  2645,  1749,     5,  2648,  1916,     5,
       4,  1755,  2653,  2654,     4,   237,     5,     4,     4,     4,
     192,     5,   225,  1931,  1932,     5,     5,   237,  1936,     4,
       4,     4,   306,     4,  1942,     4,  1944,     4,     4,   245,
       4,     0,     5,     5,   306,     5,   306,   306,   223,     5,
     256,     4,   255,  1227,  1228,     5,   223,   223,     5,   223,
     223,     4,  2703,     5,     5,  2706,   272,     4,   240,     4,
    2711,   243,     4,     4,    29,     5,  2717,     5,     4,   282,
       5,  2722,  1990,     5,     4,     6,     5,  2759,     5,    44,
       4,    46,     5,     4,     4,   267,     4,     4,   270,     5,
       5,     5,     5,     5,     5,     5,     5,     4,     4,   281,
     970,     5,     5,     5,     5,     4,     4,     4,  1862,     5,
    1864,    76,  1866,     5,  1868,  2033,     5,     5,     4,    84,
       4,   268,     5,     5,     5,     5,     4,     4,   349,     5,
    1884,  1885,  1886,  1887,  1888,  1889,  1890,  1891,  1892,  1893,
     268,  2792,     5,     5,  2795,     5,     4,     4,   268,     5,
       5,     5,     5,     4,     4,  1909,     5,  1911,     5,  1913,
       5,     5,     4,     4,  1918,  2816,     5,     4,     4,     4,
       4,   302,     5,     5,     5,     5,  1930,   142,     5,  2830,
       4,     4,  2833,  2834,  1938,     5,     4,     4,   349,     5,
       5,     4,     4,     4,     4,  1949,  1950,  1951,  1952,  1953,
    1954,  1955,  1956,  1957,  1958,     4,    12,  1961,  1962,  1963,
    1964,  1965,  1966,  1967,  1968,  1969,  1970,  1971,  1972,     5,
    1974,     5,  1976,  1977,  1978,  1409,    33,   192,     4,     4,
       4,  1415,     5,     5,     5,     5,     5,     5,  1992,     5,
       5,     5,     5,   208,   209,     4,     4,     4,  2657,     5,
     215,     5,   217,  1437,     5,     4,  1440,     5,     5,     5,
    1444,     5,     4,     6,     4,   282,     5,   864,     5,  2023,
    2024,     5,     5,  2027,     4,  2029,     4,  2031,   243,     5,
    2034,  1465,  2036,     4,     4,     4,     4,  1471,     4,  2043,
    2044,     4,     4,     4,     4,  1479,  2050,     4,  2052,  1483,
       4,     4,  2056,     4,     4,  2059,   349,   349,  1492,  1493,
     117,     4,   349,   349,     4,   349,   349,     5,     5,  1503,
       4,     4,  2731,     5,     4,     6,     5,  2245,  2246,  2247,
       5,     4,  2250,     5,  2252,  2253,     5,     5,  2256,     4,
    2258,     4,     4,     4,   309,     4,     4,     4,     4,     4,
       4,   349,     5,     4,  2108,     5,     5,     5,     4,   433,
       5,     5,     5,     5,     4,   390,     5,     5,     4,     4,
    2665,     5,     4,     4,     4,  2560,     5,     5,     4,     4,
     187,     4,   189,   190,     4,   192,   193,     5,     4,   282,
       5,     5,     4,     4,     4,  2277,     5,     5,     5,     4,
    2655,     5,  2320,     5,     5,     4,     4,  2206,     5,     5,
       5,  2731,  2727,   220,    -1,   732,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1023,    -1,    -1,    -1,
     237,   238,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2212,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2225,  2226,  2227,  2228,  2229,  2230,  2231,  2232,  2233,
    2234,  2235,   289,    -1,    -1,    -1,  1356,  2241,  1085,    -1,
      -1,    -1,    -1,    -1,  2248,    -1,    -1,  2251,  1368,  2740,
    2741,   308,    -1,  2257,    -1,    -1,  2260,  2261,  2262,  2263,
    2264,  2265,  2266,  2267,  2268,  2269,  1386,  1387,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2282,  2283,
    2284,  2285,  2286,  2287,  2288,  2289,  2290,  2291,  2292,  2293,
      -1,  2295,    -1,  2297,  2298,  2299,    -1,    -1,    -1,    -1,
     291,    -1,    -1,    -1,    -1,    -1,  2474,    -1,    -1,    -1,
      -1,    -1,    -1,  2317,  2482,    -1,    -1,  2321,    -1,    -1,
      -1,  2325,    -1,    -1,    -1,  2329,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2521,    -1,    -1,  1203,    -1,    -1,   350,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   425,    -1,
      91,    92,    -1,    -1,    -1,  2379,    -1,    -1,    99,   436,
      -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,   445,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   126,    -1,    -1,    -1,   130,
      -1,    -1,  1259,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1274,    -1,   150,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,
      -1,    -1,    -1,    -1,  1878,    -1,    -1,    -1,  2452,    -1,
      -1,    -1,  2456,    -1,    -1,    -1,    -1,   514,    -1,    -1,
     517,   518,  2466,  2467,    -1,    -1,    -1,    -1,    -1,  2473,
      -1,    -1,    -1,   530,   195,    -1,  2480,    -1,   535,    -1,
    1914,    -1,   203,    -1,  2488,    -1,  2490,   544,   545,  2493,
    2494,    -1,  2496,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2509,    -1,    -1,  2512,  2513,
    2514,  2515,  2516,  2517,  2518,  2519,    -1,    -1,  2522,    -1,
      -1,   512,  2526,    -1,   245,    -1,    -1,    -1,   519,    -1,
      -1,   522,    -1,  2537,    -1,   256,   527,   958,  2542,    -1,
     531,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   272,    -1,   610,   611,   612,    -1,  2561,    -1,    -1,
      -1,   282,    -1,   284,    -1,    -1,  1413,    -1,    -1,   990,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2596,    -1,    -1,    -1,    -1,    -1,  2602,    -1,
    2604,    -1,   593,    -1,    -1,    -1,  2610,    -1,    -1,    -1,
      -1,    -1,   669,    -1,    -1,    -1,    -1,   338,    -1,  2623,
    2624,    -1,    -1,    -1,    -1,  1472,    -1,    -1,  1475,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2641,  2642,  1486,
    2689,    -1,  2646,    -1,    -1,    -1,    -1,  1494,    -1,    -1,
      -1,    -1,    -1,    -1,  1501,    -1,    -1,    -1,  1778,    -1,
      -1,  2665,    -1,    -1,    -1,    -1,  1786,  1787,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1801,  1802,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2694,    -1,  1812,  1813,    -1,    -1,  2700,    -1,  2702,    -1,
      -1,    -1,   693,  1823,  1824,  2709,    -1,    -1,    -1,   700,
    2714,    -1,    -1,  1833,  1834,  2719,    -1,    -1,    -1,  1839,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1849,
      -1,    -1,    -1,    -1,    -1,    -1,  2740,  2741,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2759,    -1,    -1,  2762,  2763,
      -1,    -1,  2766,    -1,  2768,  2769,    -1,    -1,    -1,   826,
      -1,    -1,    -1,    -1,    -1,    -1,  2780,  2781,  2782,  2783,
      -1,   838,    -1,    -1,  1631,    -1,    -1,    -1,    -1,  2793,
      -1,    -1,  2796,    -1,    -1,    -1,     4,    -1,    -1,  2803,
      -1,  2805,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,   875,   876,
      -1,    -1,    -1,  2827,    -1,  2829,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,   825,    -1,    -1,    -1,    -1,    -1,
      -1,   832,   899,    -1,     6,    -1,    -1,    -1,    56,  1696,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1706,
      -1,    -1,    -1,    -1,  1711,    -1,    -1,    -1,    -1,  2303,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   878,    -1,    -1,
      -1,   948,   883,   101,    -1,   886,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   898,    -1,    -1,
      -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1340,
    1341,  1342,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1350,
    1351,  1352,    -1,    -1,    -1,    -1,  1357,  1358,  1359,    -1,
      -1,  1362,  1363,    -1,  1365,  1366,    -1,    -1,    -1,   157,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1023,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1395,  1396,    -1,    -1,  1399,  1400,
      -1,    -1,    -1,    -1,    -1,    -1,   194,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   202,    -1,    -1,    -1,    -1,  2119,
     208,   209,    -1,    -1,    -1,    -1,   214,   998,    -1,  2129,
      -1,   219,    -1,  2133,  2134,    -1,    -1,    -1,  1075,    -1,
      -1,    -1,  2142,  2143,    -1,    -1,    -1,    -1,  1085,    -1,
    1877,  2151,  2152,  1880,    -1,    -1,    -1,  2157,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2167,  2168,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2178,  2179,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2189,
      -1,    -1,    -1,    -1,  2508,    -1,    -1,    -1,  2198,    -1,
    2200,    -1,    -1,    -1,    -1,   293,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2528,    -1,    -1,    -1,  2532,    -1,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,  1186,
      -1,    -1,    -1,    -1,   342,    -1,    -1,    -1,   346,   347,
      -1,    -1,    -1,    -1,    -1,    -1,  1203,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,    -1,    -1,    -1,    -1,  1236,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1247,    -1,    -1,    -1,     3,     4,    -1,    -1,    -1,    -1,
    1191,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    -1,  2060,    -1,    -1,    -1,  1274,    -1,    -1,
      -1,    -1,  1279,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1230,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,
      -1,    -1,    -1,    -1,  1245,    -1,    -1,    -1,  2105,    -1,
      -1,    -1,    -1,  2383,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2393,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2402,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2411,   101,    -1,    -1,    -1,    -1,    -1,  2418,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2429,
      -1,    -1,    -1,    -1,    -1,  2435,    -1,    -1,  2438,    -1,
      -1,  2441,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1759,    -1,
      -1,  2775,    -1,    -1,    -1,    -1,    -1,    -1,   157,    -1,
      -1,  1772,    -1,    -1,    -1,    -1,  1413,    -1,    -1,    -1,
      -1,  1782,    -1,  2210,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   194,  1443,    -1,    -1,    -1,
      -1,    -1,  2239,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2249,    -1,    -1,   214,    -1,    -1,  2255,    -1,
     219,    -1,    -1,    -1,    -1,  1472,    -1,    -1,  1475,    -1,
      -1,   230,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1486,
    1487,    -1,    -1,  1854,    -1,    -1,    -1,  1494,    -1,    -1,
      -1,    -1,    -1,    -1,  1501,    -1,    -1,    -1,    -1,  2569,
      -1,    -1,    -1,  2573,    -1,    -1,     3,     4,    -1,    -1,
    2580,    -1,    -1,    -1,    -1,    -1,  2586,    -1,    -1,    -1,
    2590,    -1,    19,  2593,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   290,    -1,    -1,  1541,    -1,    -1,  1544,  1545,    -1,
    1481,    -1,    -1,    -1,    -1,    -1,    -1,  1554,    -1,    -1,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1542,    -1,    -1,   101,    -1,   157,  1548,    -1,    -1,
      -1,   162,    -1,    -1,    -1,    -1,    -1,  1624,    -1,    -1,
      -1,    -1,    -1,    -1,  1631,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1649,    -1,    -1,    -1,    -1,    -1,    -1,  2446,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1665,    -1,
     157,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1684,    -1,    -1,
      -1,    -1,  1689,    -1,    -1,  1692,  1627,  1694,  1695,  1696,
    1697,    -1,  1633,  1700,    -1,    -1,  1703,    -1,    -1,  1706,
    1707,    -1,  1709,  1710,  1711,  1712,    -1,  1714,  1715,    -1,
      -1,    -1,    -1,  1720,  1721,  1722,  1657,    -1,  1725,  1726,
      -1,    -1,   219,  1664,  1731,  1732,    -1,   162,    -1,  1736,
      -1,    -1,    -1,    -1,  1741,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2118,    -1,  1690,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1698,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,    -1,  2158,  2159,  2160,
    2161,  2162,    -1,  2164,  2165,    -1,    -1,    -1,  2169,  2170,
    2171,  2172,  2173,  2600,  2175,  2176,    -1,    -1,    -1,    -1,
      -1,  2608,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1861,     3,     4,    -1,  1865,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1877,    19,    -1,  1880,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,  1910,    -1,    -1,    -1,    -1,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1859,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1881,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   101,    -1,    -1,    -1,  2754,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1972,    -1,    -1,    16,    -1,
      -1,    -1,    -1,    -1,  1915,    23,  1917,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2787,    -1,    -1,  2790,  1935,    -1,  1937,    -1,    -1,    -1,
    1941,    -1,  1943,    -1,    -1,    -1,    -1,    -1,    -1,   157,
      -1,  2382,    -1,    -1,  2385,  2386,  2387,  2388,  2389,    -1,
    2391,  2392,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2403,  2404,  2405,  2406,  2407,    -1,  2409,  2410,
    2047,  2412,  1983,    -1,    -1,  1986,  1987,    -1,    -1,    -1,
      -1,  2422,  2423,    -1,  1995,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2433,    -1,    -1,    -1,   214,    -1,    -1,    -1,
      -1,   219,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2088,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2030,
      -1,    -1,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2046,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2067,    -1,    -1,    -1,
      -1,  2072,    -1,    -1,    -1,    -1,     4,  2078,    -1,    -1,
      -1,    -1,  2083,    -1,    56,    -1,  2087,    -1,    -1,  2090,
      -1,    19,  2093,    -1,  2095,    -1,    -1,    -1,    -1,    -1,
    2101,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   101,
      -1,   239,    -1,   241,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2572,    -1,  2210,    -1,    -1,  2213,    -1,    -1,    -1,
      -1,    -1,  2583,    -1,  2585,    -1,  2223,    -1,  2589,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2239,   101,    -1,  2242,    -1,    -1,    -1,    -1,
      -1,    -1,  2249,    -1,    -1,   157,    -1,  2254,  2255,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   157,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   214,    -1,    -1,    -1,    -1,   219,  2679,    -1,
      -1,  2682,    -1,    -1,  2685,    -1,  2687,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2344,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   219,    -1,  2294,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2373,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,    -1,    -1,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2446,
      -1,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2487,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2499,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    -1,    -1,  2444,    -1,    -1,    -1,    -1,    -1,    -1,
    2451,    -1,    -1,    -1,  2455,    -1,    -1,    -1,    -1,    -1,
      -1,    41,    -1,    -1,    44,    -1,    46,    -1,    -1,    -1,
      -1,  2472,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,
      -1,    -1,  2549,    -1,    64,    65,    -1,    67,    68,    69,
      -1,  2558,    -1,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    -1,    86,    87,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    95,    96,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2600,  2601,    -1,  2603,    -1,    -1,    -1,
      19,  2608,  2609,    -1,    -1,   125,  2613,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,    -1,    -1,
      -1,   141,    -1,    -1,   144,    -1,    -1,    -1,    -1,   149,
     150,    -1,    -1,    -1,    -1,    -1,   156,    -1,    -1,    -1,
    2647,    -1,   162,    -1,    -1,    -1,    65,    66,    -1,    -1,
      69,    -1,    -1,    -1,    -1,   175,    18,    19,   178,   179,
     180,    -1,  2669,   183,   184,    -1,    -1,  2674,    -1,    -1,
      -1,    -1,    91,    -1,    -1,    -1,    -1,   197,    -1,    -1,
      -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,  2629,    -1,
      -1,    -1,   212,   213,   214,    -1,    58,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   226,    -1,   228,    -1,
      -1,    -1,    -1,    -1,    -1,   235,    -1,    -1,   238,    -1,
      -1,   241,    -1,   243,    -1,   245,    -1,    -1,    -1,    -1,
     250,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   157,   101,
      -1,    -1,    -1,   263,    -1,    -1,    -1,  2754,    -1,   269,
     169,    -1,    -1,   115,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2771,   285,   286,   186,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   297,    -1,   299,
    2787,    -1,  2723,  2790,    -1,   305,    -1,   206,   308,   309,
      -1,    -1,    -1,    -1,    -1,   157,    -1,    -1,    -1,    -1,
     219,  2742,  2743,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   339,
      -1,    -1,    -1,    -1,    -1,   345,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2788,    -1,    -1,
     269,    -1,    -1,    -1,    -1,    -1,    -1,   219,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2809,    -1,
      -1,  2812,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,    -1,   338,
      -1,    -1,    -1,    -1,   286,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,    20,    21,    22,    -1,    -1,
      20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    49,    -1,    -1,    52,    48,    49,
      55,    -1,    52,    19,    -1,    -1,    -1,    62,    -1,    59,
      -1,    66,    62,    -1,    -1,    -1,    66,    -1,    -1,    74,
      75,    -1,    -1,    -1,    74,    75,    -1,    82,    83,    -1,
      -1,    19,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      56,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,
     105,    -1,    -1,    -1,   109,   110,    -1,    -1,   113,   109,
     110,    -1,    -1,   113,    -1,    -1,    -1,    -1,    56,    -1,
      -1,    -1,    -1,    -1,    -1,   130,    -1,    -1,    -1,    -1,
     130,    -1,    -1,    -1,    19,   101,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   150,    -1,    -1,    -1,    -1,
     150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   101,    -1,    -1,    -1,   172,    -1,    -1,
      -1,    -1,   172,    -1,    59,    -1,    -1,    -1,    -1,    -1,
      -1,   181,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     195,   157,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,   223,   157,
     225,    -1,    -1,   223,    -1,   225,   231,   232,    -1,    -1,
      -1,   231,   232,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     245,   246,    -1,    -1,    -1,    -1,   246,    -1,   214,    -1,
     255,   256,    -1,   219,    -1,    -1,   256,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   157,    -1,    -1,    -1,   214,   282,    -1,   284,
      -1,   219,   282,    -1,   284,    -1,    -1,    -1,    -1,    -1,
      -1,   296,    -1,   298,   294,    -1,    -1,    -1,    -1,   304,
      -1,    -1,    -1,    -1,   304,    -1,    -1,    -1,    -1,    -1,
      -1,   277,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,   338,   219,    -1,    -1,    -1,   338,    -1,
      -1,    -1,    -1,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,    -1,
      -1,   286,    -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   157,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   219,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   157,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   219,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    44,    -1,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    -1,    67,    68,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,
      -1,    -1,    -1,    84,    -1,    86,    87,    88,    -1,    -1,
      -1,    -1,    93,    -1,    95,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   124,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     141,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   152,   153,    -1,    -1,   156,    -1,    -1,    -1,   160,
      -1,   162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
       0,    20,    41,    44,    46,    59,    64,    65,    67,    68,
      69,    77,    84,    86,    87,    95,    96,   125,   137,   141,
     144,   149,   150,   156,   162,   175,   178,   179,   180,   183,
     184,   197,   212,   213,   214,   226,   228,   235,   238,   241,
     243,   245,   250,   263,   269,   285,   286,   297,   299,   305,
     308,   309,   339,   345,   351,   241,   259,   383,    66,    12,
      53,    71,   100,   118,   122,   134,   290,   385,     3,     4,
     290,   352,   390,   187,   193,   230,   254,   300,   344,   392,
     282,     4,    40,   111,   194,   243,   397,    28,   151,   173,
     177,   227,   265,   273,   274,   365,   399,    83,    99,   175,
     216,   250,   400,    40,    59,   111,   194,   286,   352,   409,
       4,    19,    40,    56,   101,   119,   157,   194,   202,   208,
     209,   214,   219,   293,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   342,   346,   347,   354,   362,   363,   364,
     411,    33,   412,   354,    29,    44,    46,    76,    84,   142,
     192,   208,   209,   215,   217,   243,   309,   353,   144,   414,
      41,    44,    46,    65,    67,    68,    69,    77,    79,    84,
      86,    87,    88,    93,    95,   124,   141,   152,   153,   156,
     160,   162,   183,   184,   187,   197,   212,   213,   220,   243,
     245,   269,   285,   286,   294,   301,   307,   309,   345,   415,
      83,    99,   457,    19,    44,    77,    84,    94,    95,   101,
     124,   141,   156,   163,   183,   219,   269,   280,   309,   460,
     354,    88,   116,   185,   200,   257,   299,   309,   466,    16,
      26,   112,   124,   159,   205,   218,   469,   229,   487,     5,
      66,    88,   139,   299,   345,   354,   488,     5,   489,    20,
      57,   224,   238,   300,   505,    64,    66,   182,   289,   524,
      66,   203,   341,   346,   348,   525,    39,   194,   230,   290,
     352,   362,   364,   526,     5,   299,   309,   354,   529,    70,
     169,   242,   251,   530,     4,    88,   505,    61,   280,   303,
     537,   194,   290,   352,   538,    26,   112,   124,   205,   218,
     540,    50,    99,   108,   136,   292,   555,   556,     4,    37,
      47,    74,   150,   186,   230,   251,   287,   303,   378,     4,
     124,   204,   557,   290,   352,   559,    16,    23,   239,   241,
     363,   560,   229,   564,   290,   352,   565,     0,    22,    48,
      49,    62,   109,   110,   223,   225,   304,   384,     5,    59,
     352,   386,   266,     5,     4,   290,   352,   387,     5,    32,
     279,   388,   123,   352,   389,   123,   352,   391,   352,     4,
     193,   247,   395,   187,   300,   343,   344,   352,   394,   354,
     138,   176,   393,   352,    78,   172,   247,   352,   396,     5,
     352,     4,   243,   398,   352,   352,     5,   225,   401,    31,
     402,     5,   403,     5,   407,     5,    31,   408,   352,     9,
      10,    11,   352,   358,   359,   360,   361,   352,   352,    40,
     111,   194,   352,   410,   352,   194,   362,   364,   352,    35,
     106,   127,   128,   129,   135,   148,   154,   164,   278,   367,
     352,     4,   354,   354,   354,   354,   354,   354,   354,   354,
     354,   354,   354,   117,    66,    53,    71,    88,   100,   118,
     122,   134,   174,   416,   118,   418,   187,   193,   230,   254,
     300,   343,   344,   352,   404,   419,   282,   422,   169,   423,
     169,   177,   425,    65,    66,    69,    91,   169,   186,   206,
     269,   338,   362,   427,   352,   364,   430,    59,   286,   362,
     431,   277,   362,   364,   432,    33,   433,   362,   364,   434,
       4,   362,   364,   435,    45,    59,    81,   100,   117,   120,
     146,   147,   199,   207,   266,   267,   338,   439,   211,   302,
     445,     5,    89,     6,    88,   120,   437,     5,    65,   364,
     436,    16,   505,    66,   182,   289,   446,    66,   230,   447,
     281,    61,   280,   303,   448,    21,   134,   237,   264,   449,
      37,    47,    74,   150,   186,   251,   303,   450,   364,    89,
      16,   196,   455,   362,   458,    72,   461,    31,   462,    44,
      87,   192,   463,   150,   216,   256,   295,   464,   362,    18,
      58,   115,   286,   362,   465,     4,   193,   468,     5,     4,
       6,   120,   352,     4,     5,   243,   470,     5,   472,     5,
     117,   192,   243,   267,   473,    93,   111,   187,   486,     5,
     484,     5,   267,   485,     4,     5,   354,   354,   352,   352,
       5,     4,     5,    60,    66,    73,    75,    80,    83,    89,
      99,   105,   114,   130,   150,   165,   174,   175,   195,   216,
     230,   232,   245,   250,   256,   263,   282,   295,   296,   298,
     338,   490,     5,     4,   352,     5,   352,    40,   111,   352,
     528,   354,   352,   362,   364,   527,   352,   367,   352,     4,
     363,    54,    90,   140,   243,   531,     4,     4,   352,     4,
     150,   256,   532,     5,   362,     4,    40,   111,   352,   539,
     352,    97,    61,   120,   243,   270,   541,   120,   554,    61,
     117,   120,   157,   192,   240,   243,   267,   270,   281,   543,
     544,    61,   120,   270,   553,     5,     4,    34,   107,   203,
     536,    66,   354,   379,    66,   354,   380,    66,   354,   381,
      13,   189,   535,   352,   352,   223,   352,   382,   352,   267,
       4,   352,   352,     4,   563,     4,   284,   561,     4,   284,
     562,     4,   367,   123,   352,   566,   352,   352,   352,   352,
     352,   352,   352,   352,   352,   352,   352,     4,     5,   352,
      12,   352,   352,   352,    30,    94,   163,   247,   252,   366,
     366,     4,   352,   352,     4,     4,     4,   352,   352,   352,
     352,     4,     4,     5,     5,   362,     5,   352,   352,   358,
     360,   360,   362,   352,   352,   352,   352,   352,   352,   352,
     362,   364,   361,   352,   352,   361,   352,     5,   266,   103,
     187,   417,   193,   247,   420,   169,    78,   172,   247,   421,
     138,   176,   405,   405,     4,   424,     4,   426,   193,   254,
     428,   177,   429,   169,   367,   352,   362,   352,   362,   362,
     367,   367,   367,   362,   367,   352,   362,     4,   442,     4,
     364,   440,   196,     4,   166,   309,   441,   196,   362,     4,
     362,   444,     5,     5,     4,   196,   352,     4,     5,    60,
      66,   114,   130,   143,   149,   150,   155,   206,   225,   230,
     232,   255,   256,   263,   282,   338,   499,   364,   188,   188,
      66,   451,    66,   452,    66,   453,   223,   454,   352,     5,
     224,   456,   363,   367,     5,   362,   362,   362,     4,   354,
       4,     4,   196,   352,    14,    15,    61,   190,   191,   260,
     270,   271,   302,    87,     5,     5,    14,    15,    61,   190,
     191,   260,   270,   271,   275,   302,    87,   157,   162,   363,
     476,   480,    87,   157,     5,   474,     4,     4,    14,    61,
     190,   260,   270,   302,     5,     5,     4,   352,   363,    20,
      21,    22,    48,    49,    52,    55,    62,    66,    74,    75,
      82,    83,    99,   105,   109,   110,   113,   130,   150,   172,
     195,   223,   225,   231,   232,   245,   246,   255,   256,   282,
     284,   296,   298,   304,   338,    66,    80,    89,    99,   130,
     150,   195,   232,   256,   296,   298,     4,    30,   161,   211,
     237,   493,     5,    63,   104,   234,   248,   249,   340,   341,
     498,    99,   491,    17,    40,   111,   194,   497,     4,     5,
      17,   210,   291,   352,   256,   498,   506,   124,   498,   507,
      36,    40,   111,   132,   194,   290,   352,   508,   362,   354,
      91,    99,   105,   126,   150,   158,   195,   203,   245,   256,
     272,   511,    40,   111,   194,     5,   283,    17,   210,   291,
     515,   284,   354,   516,     5,    99,   105,   299,    17,    17,
       4,   352,   352,   352,   352,   352,   367,   352,   352,   361,
     352,     4,   367,     4,    40,   111,   194,   261,   533,    40,
     111,   194,   261,   534,     4,    97,     5,     5,    87,     4,
       5,     5,    87,     5,   544,    61,   120,   157,   270,   548,
      61,   120,   270,   552,    87,   157,    61,   120,   270,   546,
       4,    61,   120,   270,   545,     5,     5,     4,     4,     5,
       5,     5,   352,   352,   352,     4,   352,   558,   352,   352,
       6,   363,     4,     5,     4,     4,     5,     4,    97,   258,
     368,   352,   352,    12,   352,   352,   352,   352,   352,   352,
     352,   352,   352,     5,    12,   352,   352,    12,     4,    12,
       4,     4,   352,   352,   352,     4,   354,     4,     4,   367,
     362,   367,   352,   352,   352,   362,   352,   361,   352,   352,
       5,     5,   352,   364,   352,   362,   362,   352,   367,   368,
     368,   368,   367,   361,   352,   367,   352,   133,   244,   355,
     443,   166,     5,     4,   367,   362,     4,     5,     4,     4,
     352,   438,   352,    20,    21,    22,    48,    49,    52,    59,
      62,    66,    74,    75,    82,   109,   110,   113,   130,   150,
     172,   181,   223,   225,   231,   232,   246,   256,   282,   284,
     294,   304,   338,    66,   130,   155,   232,   282,    30,   161,
     211,   237,   500,   352,    20,   206,   352,   501,    17,   352,
     255,   511,   255,   206,   352,   502,   284,   503,    17,    98,
     352,   352,     5,   368,    56,   362,     4,     5,   467,   352,
       5,     5,     5,   157,   184,   372,   372,   165,   262,   370,
       4,     4,     5,     5,   471,   268,   268,     5,     5,     5,
      17,   159,   371,   371,   370,     4,     4,   370,     5,     5,
     475,   162,   337,   363,   479,     5,   478,     5,     5,   482,
       5,   483,     5,    14,    15,    61,   190,   191,   260,   270,
     271,   275,   302,     4,     4,     5,     5,   372,   370,     4,
       5,     5,   367,    82,   152,   221,   222,   236,   276,   375,
       7,     8,   352,   357,   237,   121,   237,   237,   105,    40,
      66,    99,   105,   111,   130,   150,   165,   195,   232,   245,
     256,   284,   296,   298,   299,   338,   492,   121,   237,     5,
      27,   167,   237,   280,   138,   105,    22,    49,    52,    82,
     110,   113,   225,   255,    22,    49,    52,    55,    82,   110,
     113,   225,   255,   282,    40,   121,   237,   237,   105,     5,
     210,    27,   223,    36,   132,   290,   352,   259,   266,   121,
     241,   362,   364,   511,    40,   131,   223,   280,   241,   210,
       5,     5,   245,    27,   223,     4,     5,     5,   210,    36,
     132,   290,   352,   511,   210,   354,     4,     4,   352,     5,
     302,    22,    27,    48,    49,    51,    52,    62,    74,    75,
      82,    85,   102,   109,   110,   113,   172,   225,   231,   246,
     255,   283,   284,   304,   348,   494,   352,   352,   352,   352,
     352,   498,   362,     5,     4,     5,   352,   352,   362,   364,
     352,   354,   352,   352,   498,     5,   352,   352,   354,     5,
      17,     5,     5,   352,   352,   361,   352,   352,     4,   352,
     352,   111,   352,   352,   111,     4,    42,    43,   170,   171,
     198,   377,   377,    61,   120,   270,   542,   377,     5,    61,
     120,   270,   547,     5,     5,    61,   120,   270,   549,     4,
       5,     5,     4,    61,   120,   270,   551,    61,   120,   270,
     550,     5,     5,     4,     5,     5,     4,   377,   377,   377,
     352,   352,   352,     4,   352,   362,   352,   363,   367,     5,
       5,    12,   352,   362,   364,   352,    12,   352,   352,   352,
      59,   352,     6,     4,   352,   352,    46,   269,   406,     5,
     354,   354,   367,   352,     4,     4,     4,   362,   352,   352,
     352,   352,   367,     4,   362,   368,   361,   352,     4,   368,
     352,    38,    38,     4,   364,     5,    24,    25,    97,   369,
     352,     4,   352,     5,    82,   152,   221,   222,   236,   276,
     362,   364,   237,   121,   237,   237,    21,   237,   362,   121,
     237,    27,   167,   237,   280,   138,    21,   237,   121,   237,
     237,    21,   237,    27,   168,   223,   168,   259,   266,   121,
     168,   223,   288,   511,   131,   168,   223,   280,     4,   245,
      27,   168,   223,   511,   206,   352,    82,   152,   221,   222,
     236,   276,   352,   352,   352,   352,   352,   196,   352,   352,
      20,   233,   459,     4,     4,   352,   372,   372,   372,     4,
     372,   372,   372,    14,    15,    61,   190,   191,   260,   270,
     271,   302,   371,   372,   372,   372,   372,   372,     4,   372,
     372,     4,   371,    14,    15,    61,   190,   191,   260,   270,
     271,   302,     5,   477,     5,   481,     5,     5,    14,    15,
      61,   190,   191,   260,   270,   271,   275,   302,     5,    14,
      15,    61,   190,   191,   260,   270,   271,   275,   302,     5,
      14,    15,    61,   190,   191,   260,   270,   271,   275,   302,
      14,    15,    61,   190,   191,   260,   270,   271,   302,   268,
       5,     5,     5,   371,   371,   370,     4,     4,   370,     5,
       4,     4,   372,   372,     4,   372,   372,     5,   354,   362,
     364,     5,   352,   354,   352,     5,   352,     5,   357,   105,
     195,   245,   105,   195,   245,     5,   354,   352,   354,     5,
     352,   362,   354,     5,   357,   237,   237,    21,   237,    21,
     237,   237,    21,   237,   306,   306,     4,     4,     4,   492,
       4,     4,     4,   306,   306,     4,     5,     4,   354,   352,
       5,   352,     5,   357,   354,   362,   364,   362,   364,   352,
      27,    48,    51,    62,    85,   102,   348,   373,     4,   354,
     352,   367,   361,   354,     5,   362,   364,   362,   352,   354,
     354,   362,   364,   362,   364,   352,   354,   352,     5,   352,
     223,   223,   352,   352,   223,   352,   223,   352,   352,   504,
     512,   352,   223,   223,   352,   352,   352,   352,   352,   352,
     352,   352,     5,   302,   352,   495,   352,   352,   223,   352,
     352,   352,   352,   362,   367,     5,   362,   362,   352,   352,
     367,   361,   352,   352,   352,   362,   352,   352,     5,     4,
     352,   352,   352,   352,     5,     5,     4,   377,     5,     5,
       4,     4,     4,     5,     5,     4,     4,     5,     5,     4,
       5,     5,     4,   352,   352,   352,   362,   352,   367,   352,
     362,   364,   352,   367,   352,   352,   352,   352,   352,     5,
     352,     4,     6,   352,   352,     4,   362,   352,   367,   177,
     365,   352,   365,   368,   367,   362,   352,   352,     4,   352,
     352,     4,   362,     5,     5,     5,     5,   362,   367,   362,
     362,   362,   362,   364,   362,   367,   362,   362,   362,   364,
     362,   362,   362,   362,   364,   362,   362,   362,   352,   362,
     362,   362,   362,   362,   362,   362,   362,     5,     5,     5,
       5,   362,   352,   352,     4,   352,     5,     4,   352,   372,
       5,     5,     5,   370,     4,     4,     5,   372,   371,     4,
     372,     5,     5,     5,   371,   371,   370,     4,     4,     5,
      14,    15,    61,   190,   191,   260,   270,   271,   302,    14,
      15,    61,   190,   191,   260,   270,   271,   302,    14,    15,
      61,   190,   191,   260,   270,   271,   302,   268,     5,     5,
       5,   371,   371,   370,     4,     4,   370,     5,   268,     5,
       5,     5,   371,   371,   370,     4,     4,   370,     5,   268,
       5,     5,     5,   371,   371,   370,     4,     4,   370,     5,
       5,     5,     5,   371,   371,   370,     4,     4,     5,   371,
       4,     4,   371,     4,     4,   372,     5,   367,   362,   352,
     352,   362,   352,     5,   357,     5,   362,   364,   354,     5,
     362,   364,   367,     5,   357,   352,   352,   352,   352,   352,
     352,   352,   352,   352,     4,     4,     5,     4,     4,   352,
     362,   352,     5,   357,   354,   367,   361,   367,   352,   352,
     361,   361,   367,   361,   367,   352,   367,   361,   367,   361,
     352,   352,   352,   352,   352,   352,   352,   352,   352,   352,
      55,    66,    92,   130,   282,   284,   338,   509,   510,   511,
     522,   523,   352,   352,   352,   352,   352,   352,   352,   352,
     352,   352,   352,   352,   362,     5,   352,   352,   352,   352,
       4,     4,   367,   368,     4,   496,   367,   367,   361,   352,
       4,   367,     4,   377,   377,   377,   357,   352,   352,   352,
     367,   352,   361,   352,   352,    12,     5,     5,     4,   352,
     352,     4,   367,   362,   352,   352,   368,   369,   352,     5,
     352,   364,     5,     5,     5,     5,   367,   369,   369,   369,
     367,   369,   368,   369,   369,   367,   369,   369,   369,   367,
     369,   369,   367,   362,   369,   367,   369,   369,   367,   369,
     367,     5,     5,     5,     5,   367,     4,   364,     5,   352,
       4,   372,   371,     4,   371,     5,     5,     5,   371,   371,
     370,     4,     4,     5,     5,     5,     5,   371,   371,   370,
       4,     4,     5,     5,     5,     5,   371,   371,   370,     4,
       4,     5,   371,   372,   372,   372,   372,   372,     4,   372,
     372,     4,   371,   371,   372,   372,   372,   372,   372,     4,
     372,   372,     4,   371,   371,     4,     4,   371,     4,   371,
     371,     4,     4,     4,   363,   369,     4,   362,   364,   369,
     352,   362,     4,   369,   369,   362,     4,   352,   352,   352,
     352,   352,   352,   352,   352,   352,   352,   352,   362,   364,
     369,   352,   362,     4,   361,   361,   361,   352,   362,   364,
     361,   352,   361,   361,   362,   362,   364,   361,   352,   361,
     352,   352,   352,   352,   352,   352,   357,   352,   352,   352,
     349,   349,   349,   349,   349,   349,   349,   510,   349,   357,
     352,   352,   352,   352,   357,   352,   352,   352,   352,   352,
     352,   367,   352,   302,   356,   357,   352,   352,   368,   354,
       4,     4,   368,   352,   361,   352,    59,   352,     5,     5,
     352,     4,   365,   369,     5,     4,     4,     5,   362,     5,
     368,   369,   368,   368,   368,     4,     5,   362,     5,     5,
       4,   352,   372,   371,   372,   372,   372,   372,   372,     4,
     372,   372,   371,     4,   371,   372,   372,   372,   372,   372,
       4,   372,   372,   371,   372,   371,     4,   372,   372,   371,
       4,   372,   371,     4,   371,   371,   367,   362,   364,   369,
       4,   367,   352,   367,   352,   352,   352,   369,     4,   367,
     352,   361,   369,   352,   361,   369,   369,   362,   357,   352,
       4,   374,   374,   352,   352,   374,   357,   374,   512,   362,
     492,     5,     4,     5,     5,     5,     4,   354,   357,   374,
     374,   352,   352,   357,   352,   352,   352,   352,   352,   361,
     352,     5,   512,   352,   374,   354,   513,   514,     5,   354,
       5,   352,     5,     4,     6,   352,    32,   279,   413,     5,
      32,   279,   376,   362,     5,   376,   362,   413,   352,   371,
     372,   371,   371,   372,   372,   371,   372,   371,   371,   352,
     369,   362,   364,   362,   352,   362,   352,   362,   364,   362,
     352,   362,   369,     4,   512,   512,   356,   352,   512,     4,
     512,   367,     5,     4,     4,   512,   512,   356,   352,     4,
     512,   512,   352,   362,   512,   512,   512,   513,   519,   520,
     511,   517,   518,     5,     5,     6,     4,   187,   300,   344,
     352,   404,   362,   362,     4,   372,   372,   372,   372,   363,
     369,   369,   352,   369,     4,   369,   369,   352,   369,   352,
     512,   512,     4,   352,   512,     5,   352,   512,     4,   352,
     512,   367,   519,   521,   522,   349,   518,     5,     5,     4,
     352,   405,   352,   405,   367,   367,   369,     4,   362,   364,
       4,   357,   356,   352,   352,   356,   352,   362,   522,   354,
       5,     5,   352,   352,   352,   352,   376,   376,     5,   362,
     364,   367,   362,   364,   512,   352,     4,   512,   352,   369,
       5,     5,   352,     5,   352,   367,   367,     4,   512,     4,
       5,     5,     5,   356,   356,   512,   512,   512
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
#line 455 "frame/parser.Y"
    {fr->bgColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 7:
#line 457 "frame/parser.Y"
    {fr->centerCmd();;}
    break;

  case 8:
#line 458 "frame/parser.Y"
    {fr->clearCmd();;}
    break;

  case 10:
#line 460 "frame/parser.Y"
    {fr->colorbarTagCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 17:
#line 467 "frame/parser.Y"
    {fr->DATASECCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 22:
#line 472 "frame/parser.Y"
    {fr->hideCmd();;}
    break;

  case 23:
#line 473 "frame/parser.Y"
    {fr->highliteCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 25:
#line 475 "frame/parser.Y"
    {fr->irafAlignCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 32:
#line 482 "frame/parser.Y"
    {fr->nanColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 36:
#line 486 "frame/parser.Y"
    {fr->queryCursorCmd();;}
    break;

  case 37:
#line 487 "frame/parser.Y"
    {fr->precCmd((yyvsp[(2) - (7)].integer),(yyvsp[(3) - (7)].integer),(yyvsp[(4) - (7)].integer),(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(yyvsp[(7) - (7)].integer));;}
    break;

  case 39:
#line 489 "frame/parser.Y"
    {fr->resetCmd();;}
    break;

  case 44:
#line 494 "frame/parser.Y"
    {fr->showCmd();;}
    break;

  case 46:
#line 496 "frame/parser.Y"
    {fr->threadsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 48:
#line 498 "frame/parser.Y"
    {fr->unloadFitsCmd();;}
    break;

  case 50:
#line 500 "frame/parser.Y"
    {fr->msg("Frame 1.0");;}
    break;

  case 55:
#line 507 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 56:
#line 508 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 57:
#line 511 "frame/parser.Y"
    {yydebug=1;;}
    break;

  case 58:
#line 512 "frame/parser.Y"
    {yydebug=0;;}
    break;

  case 59:
#line 513 "frame/parser.Y"
    {DebugAST=(yyvsp[(2) - (2)].integer);;}
    break;

  case 60:
#line 514 "frame/parser.Y"
    {DebugMosaic=(yyvsp[(2) - (2)].integer);;}
    break;

  case 61:
#line 515 "frame/parser.Y"
    {yydebug=(yyvsp[(2) - (2)].integer);;}
    break;

  case 62:
#line 516 "frame/parser.Y"
    {DebugPerf=(yyvsp[(2) - (2)].integer);;}
    break;

  case 63:
#line 517 "frame/parser.Y"
    {DebugWCS=(yyvsp[(2) - (2)].integer);;}
    break;

  case 64:
#line 518 "frame/parser.Y"
    {DebugBin=(yyvsp[(2) - (2)].integer);;}
    break;

  case 65:
#line 519 "frame/parser.Y"
    {DebugBlock=(yyvsp[(2) - (2)].integer);;}
    break;

  case 66:
#line 520 "frame/parser.Y"
    {DebugCompress=(yyvsp[(2) - (2)].integer);;}
    break;

  case 67:
#line 521 "frame/parser.Y"
    {DebugCrop=(yyvsp[(2) - (2)].integer);;}
    break;

  case 68:
#line 522 "frame/parser.Y"
    {DebugGZ=(yyvsp[(2) - (2)].integer);;}
    break;

  case 69:
#line 523 "frame/parser.Y"
    {DebugRGB=(yyvsp[(2) - (2)].integer);;}
    break;

  case 70:
#line 526 "frame/parser.Y"
    {(yyval.integer)=((yyvsp[(1) - (1)].integer) ? 1 : 0);;}
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
#line 531 "frame/parser.Y"
    {(yyval.integer)=1;;}
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
#line 536 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 79:
#line 539 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 80:
#line 540 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 81:
#line 541 "frame/parser.Y"
    {(yyval.integer) = Base::FULLBASE;;}
    break;

  case 82:
#line 542 "frame/parser.Y"
    {(yyval.integer) = Base::ROOT;;}
    break;

  case 83:
#line 543 "frame/parser.Y"
    {(yyval.integer) = Base::FULL;;}
    break;

  case 84:
#line 546 "frame/parser.Y"
    {(yyval.real) = 0;;}
    break;

  case 85:
#line 547 "frame/parser.Y"
    {(yyval.real) = (yyvsp[(1) - (1)].real);;}
    break;

  case 86:
#line 550 "frame/parser.Y"
    {(yyval.real) = degToRad((yyvsp[(1) - (1)].real));;}
    break;

  case 87:
#line 551 "frame/parser.Y"
    {(yyval.real) = degToRad((yyvsp[(1) - (1)].real));;}
    break;

  case 88:
#line 552 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 89:
#line 555 "frame/parser.Y"
    {(yyval.real) = parseSEXStr((yyvsp[(1) - (1)].str));;}
    break;

  case 90:
#line 558 "frame/parser.Y"
    {(yyval.real) = parseHMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 91:
#line 561 "frame/parser.Y"
    {(yyval.real) = parseDMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 92:
#line 565 "frame/parser.Y"
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
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 95:
#line 591 "frame/parser.Y"
    {
	  (yyval.vector)[0] = (yyvsp[(1) - (2)].real);
	  (yyval.vector)[1] = (yyvsp[(2) - (2)].real);
	  (yyval.vector)[2] = 1;
	;}
    break;

  case 96:
#line 598 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::IMAGE;;}
    break;

  case 97:
#line 599 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::PHYSICAL;;}
    break;

  case 98:
#line 600 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::DETECTOR;;}
    break;

  case 99:
#line 601 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::AMPLIFIER;;}
    break;

  case 100:
#line 602 "frame/parser.Y"
    {(yyval.integer) = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 101:
#line 605 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS;;}
    break;

  case 102:
#line 606 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSA;;}
    break;

  case 103:
#line 607 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSB;;}
    break;

  case 104:
#line 608 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSC;;}
    break;

  case 105:
#line 609 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSD;;}
    break;

  case 106:
#line 610 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSE;;}
    break;

  case 107:
#line 611 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSF;;}
    break;

  case 108:
#line 612 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSG;;}
    break;

  case 109:
#line 613 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSH;;}
    break;

  case 110:
#line 614 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSI;;}
    break;

  case 111:
#line 615 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSJ;;}
    break;

  case 112:
#line 616 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSK;;}
    break;

  case 113:
#line 617 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSL;;}
    break;

  case 114:
#line 618 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSM;;}
    break;

  case 115:
#line 619 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSN;;}
    break;

  case 116:
#line 620 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSO;;}
    break;

  case 117:
#line 621 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSP;;}
    break;

  case 118:
#line 622 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSQ;;}
    break;

  case 119:
#line 623 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSR;;}
    break;

  case 120:
#line 624 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSS;;}
    break;

  case 121:
#line 625 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCST;;}
    break;

  case 122:
#line 626 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSU;;}
    break;

  case 123:
#line 627 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSV;;}
    break;

  case 124:
#line 628 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSW;;}
    break;

  case 125:
#line 629 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSX;;}
    break;

  case 126:
#line 630 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSY;;}
    break;

  case 127:
#line 631 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSZ;;}
    break;

  case 128:
#line 632 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS0;;}
    break;

  case 129:
#line 635 "frame/parser.Y"
    {(yyval.integer) = Coord::CANVAS;;}
    break;

  case 130:
#line 636 "frame/parser.Y"
    {(yyval.integer) = Coord::PANNER;;}
    break;

  case 131:
#line 639 "frame/parser.Y"
    {(yyval.integer) = FrScale::LINEARSCALE;;}
    break;

  case 132:
#line 640 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOGSCALE;;}
    break;

  case 133:
#line 641 "frame/parser.Y"
    {(yyval.integer) = FrScale::POWSCALE;;}
    break;

  case 134:
#line 642 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQRTSCALE;;}
    break;

  case 135:
#line 643 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQUAREDSCALE;;}
    break;

  case 136:
#line 644 "frame/parser.Y"
    {(yyval.integer) = FrScale::ASINHSCALE;;}
    break;

  case 137:
#line 645 "frame/parser.Y"
    {(yyval.integer) = FrScale::SINHSCALE;;}
    break;

  case 138:
#line 646 "frame/parser.Y"
    {(yyval.integer) = FrScale::HISTEQUSCALE;;}
    break;

  case 139:
#line 649 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 140:
#line 650 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 141:
#line 651 "frame/parser.Y"
    {(yyval.integer)=FrScale::SAMPLE;;}
    break;

  case 142:
#line 652 "frame/parser.Y"
    {(yyval.integer)=FrScale::DATAMIN;;}
    break;

  case 143:
#line 653 "frame/parser.Y"
    {(yyval.integer)=FrScale::IRAFMIN;;}
    break;

  case 144:
#line 656 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 145:
#line 657 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 146:
#line 658 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4_NO_E;;}
    break;

  case 147:
#line 659 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 148:
#line 660 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 149:
#line 661 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 150:
#line 662 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 151:
#line 663 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::GALACTIC;;}
    break;

  case 152:
#line 664 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::SUPERGALACTIC;;}
    break;

  case 153:
#line 665 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ECLIPTIC;;}
    break;

  case 154:
#line 666 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::HELIOECLIPTIC;;}
    break;

  case 155:
#line 669 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 156:
#line 670 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 157:
#line 671 "frame/parser.Y"
    {(yyval.integer)=Coord::SEXAGESIMAL;;}
    break;

  case 158:
#line 674 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 159:
#line 675 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 160:
#line 676 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCMIN;;}
    break;

  case 161:
#line 677 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCSEC;;}
    break;

  case 162:
#line 680 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 163:
#line 681 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 164:
#line 682 "frame/parser.Y"
    {(yyval.integer) = Base::KEY;;}
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
#line 687 "frame/parser.Y"
    {;}
    break;

  case 168:
#line 690 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 169:
#line 691 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 170:
#line 692 "frame/parser.Y"
    {(yyval.integer) = Base::MASK;;}
    break;

  case 171:
#line 695 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 172:
#line 696 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 173:
#line 697 "frame/parser.Y"
    {(yyval.integer) = Point::BOX;;}
    break;

  case 174:
#line 698 "frame/parser.Y"
    {(yyval.integer) = Point::DIAMOND;;}
    break;

  case 175:
#line 699 "frame/parser.Y"
    {(yyval.integer) = Point::CROSS;;}
    break;

  case 176:
#line 700 "frame/parser.Y"
    {(yyval.integer) = Point::EX;;}
    break;

  case 177:
#line 701 "frame/parser.Y"
    {(yyval.integer) = Point::ARROW;;}
    break;

  case 178:
#line 702 "frame/parser.Y"
    {(yyval.integer) = Point::BOXCIRCLE;;}
    break;

  case 179:
#line 705 "frame/parser.Y"
    {(yyval.integer) = POINTSIZE;;}
    break;

  case 180:
#line 706 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 181:
#line 709 "frame/parser.Y"
    {(yyval.integer) = Marker::PANDA;;}
    break;

  case 182:
#line 710 "frame/parser.Y"
    {(yyval.integer) = Marker::HISTOGRAM;;}
    break;

  case 183:
#line 711 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT2D;;}
    break;

  case 184:
#line 712 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT3D;;}
    break;

  case 185:
#line 713 "frame/parser.Y"
    {(yyval.integer) = Marker::RADIAL;;}
    break;

  case 186:
#line 714 "frame/parser.Y"
    {(yyval.integer) = Marker::STATS;;}
    break;

  case 187:
#line 717 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 188:
#line 718 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 189:
#line 719 "frame/parser.Y"
    {(yyval.integer) = Marker::SUM;;}
    break;

  case 190:
#line 722 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 191:
#line 723 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 192:
#line 724 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 193:
#line 725 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 194:
#line 726 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 195:
#line 727 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 200:
#line 734 "frame/parser.Y"
    {fr->set3dRenderMethodCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 201:
#line 735 "frame/parser.Y"
    {fr->set3dRenderBackgroundCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 202:
#line 736 "frame/parser.Y"
    {fr->set3dScaleCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 203:
#line 737 "frame/parser.Y"
    {fr->set3dPreserveCmd();;}
    break;

  case 204:
#line 739 "frame/parser.Y"
    {/* needed for compatibility with old version of backup */;}
    break;

  case 205:
#line 742 "frame/parser.Y"
    {fr->set3dBorderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 206:
#line 743 "frame/parser.Y"
    {fr->set3dBorderColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 207:
#line 746 "frame/parser.Y"
    {fr->set3dCompassCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 208:
#line 747 "frame/parser.Y"
    {fr->set3dCompassColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 209:
#line 750 "frame/parser.Y"
    {fr->set3dHighliteCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 210:
#line 751 "frame/parser.Y"
    {fr->set3dHighliteColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 211:
#line 754 "frame/parser.Y"
    {fr->set3dViewCmd((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));;}
    break;

  case 212:
#line 756 "frame/parser.Y"
    {fr->set3dViewPointCmd(Vector3d((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 213:
#line 759 "frame/parser.Y"
    {fr->analysisMarkersResetCmd();;}
    break;

  case 215:
#line 764 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("circle", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 216:
#line 766 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("ellipse", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 217:
#line 768 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("box", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 218:
#line 770 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("polygon", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 219:
#line 772 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("point", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 220:
#line 774 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("vector", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 221:
#line 776 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("annulus", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 222:
#line 778 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("ellipseannulus", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 223:
#line 780 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("boxannulus", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 225:
#line 784 "frame/parser.Y"
    {fr->binColsCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 226:
#line 785 "frame/parser.Y"
    {fr->binDepthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 229:
#line 788 "frame/parser.Y"
    {fr->binBufferSizeCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 231:
#line 790 "frame/parser.Y"
    {fr->binFilterCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 232:
#line 793 "frame/parser.Y"
    {fr->binAboutCmd();;}
    break;

  case 233:
#line 794 "frame/parser.Y"
    {fr->binAboutCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 234:
#line 797 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 235:
#line 798 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 236:
#line 800 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(1) - (4)].real)), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 237:
#line 802 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 238:
#line 803 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 239:
#line 804 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 240:
#line 806 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 241:
#line 808 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 242:
#line 811 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::AVERAGE);;}
    break;

  case 243:
#line 812 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::SUM);;}
    break;

  case 244:
#line 815 "frame/parser.Y"
    {fr->binToFitCmd();;}
    break;

  case 245:
#line 817 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (7)].real),(yyvsp[(2) - (7)].real)), (yyvsp[(5) - (7)].str), (yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].str));;}
    break;

  case 246:
#line 820 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (11)].real),(yyvsp[(2) - (11)].real)), (yyvsp[(3) - (11)].integer), Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)), (yyvsp[(8) - (11)].str), (yyvsp[(9) - (11)].str), (yyvsp[(10) - (11)].str), (yyvsp[(11) - (11)].str));;}
    break;

  case 247:
#line 822 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (8)].real),(yyvsp[(2) - (8)].real)), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (yyvsp[(6) - (8)].str), (yyvsp[(7) - (8)].str), (yyvsp[(8) - (8)].str));;}
    break;

  case 248:
#line 825 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (12)].real),(yyvsp[(2) - (12)].real)), (yyvsp[(3) - (12)].integer), Vector((yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real)), Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), 
	    (yyvsp[(9) - (12)].str), (yyvsp[(10) - (12)].str), (yyvsp[(11) - (12)].str), (yyvsp[(12) - (12)].str));;}
    break;

  case 249:
#line 829 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 250:
#line 830 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 252:
#line 834 "frame/parser.Y"
    {fr->blockToFitCmd();;}
    break;

  case 253:
#line 835 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 254:
#line 836 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 258:
#line 842 "frame/parser.Y"
    {fr->clipUserCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 260:
#line 845 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 261:
#line 850 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::GLOBAL);;}
    break;

  case 262:
#line 851 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::LOCAL);;}
    break;

  case 263:
#line 854 "frame/parser.Y"
    {fr->clipModeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 264:
#line 855 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::MINMAX);;}
    break;

  case 265:
#line 856 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZSCALE);;}
    break;

  case 266:
#line 857 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZMAX);;}
    break;

  case 267:
#line 858 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::USERCLIP);;}
    break;

  case 268:
#line 861 "frame/parser.Y"
    {fr->clipMinMaxCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer),(yyvsp[(1) - (2)].integer));;}
    break;

  case 269:
#line 862 "frame/parser.Y"
    {fr->clipMinMaxModeCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer));;}
    break;

  case 270:
#line 863 "frame/parser.Y"
    {fr->clipMinMaxSampleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 271:
#line 866 "frame/parser.Y"
    {fr->clipZScaleCmd((yyvsp[(1) - (3)].real),(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 272:
#line 868 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleContrastCmd((yyvsp[(2) - (2)].real));
        ;}
    break;

  case 273:
#line 873 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleSampleCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 274:
#line 878 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleLineCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 275:
#line 885 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (6)].integer), (yyvsp[(2) - (6)].real), (yyvsp[(3) - (6)].real), (yyvsp[(4) - (6)].integer), (unsigned char*)(yyvsp[(5) - (6)].ptr), (yyvsp[(6) - (6)].integer));;}
    break;

  case 276:
#line 887 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].integer),(unsigned char*)(yyvsp[(9) - (10)].ptr),(yyvsp[(10) - (10)].integer));;}
    break;

  case 277:
#line 888 "frame/parser.Y"
    {fr->colormapBeginCmd();;}
    break;

  case 279:
#line 890 "frame/parser.Y"
    {fr->colormapEndCmd();;}
    break;

  case 280:
#line 894 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(1) - (6)].integer), (yyvsp[(2) - (6)].real), (yyvsp[(3) - (6)].real), (yyvsp[(4) - (6)].integer), (unsigned char*)(yyvsp[(5) - (6)].ptr), (yyvsp[(6) - (6)].integer));;}
    break;

  case 281:
#line 896 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].integer),(unsigned char*)(yyvsp[(9) - (10)].ptr),(yyvsp[(10) - (10)].integer));;}
    break;

  case 282:
#line 898 "frame/parser.Y"
    {fr->colorScaleCmd((FrScale::ColorScaleType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 283:
#line 899 "frame/parser.Y"
    {fr->colorScaleLogCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 289:
#line 910 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),(FrScale::ClipMode)(yyvsp[(9) - (13)].integer),100,(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 290:
#line 912 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),FrScale::AUTOCUT,(yyvsp[(9) - (13)].real),(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 291:
#line 914 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),(FrScale::ClipMode)(yyvsp[(9) - (12)].integer),100,FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 292:
#line 919 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),FrScale::AUTOCUT,(yyvsp[(9) - (12)].real),FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 293:
#line 923 "frame/parser.Y"
    {fr->contourCreatePolygonCmd();;}
    break;

  case 294:
#line 926 "frame/parser.Y"
    {fr->contourDeleteCmd();;}
    break;

  case 295:
#line 927 "frame/parser.Y"
    {fr->contourDeleteAuxCmd();;}
    break;

  case 296:
#line 930 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 297:
#line 931 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 298:
#line 933 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourLoadCmd((yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer),(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer));
	;}
    break;

  case 299:
#line 939 "frame/parser.Y"
    {(yyval.integer) = FrScale::MINMAX;;}
    break;

  case 300:
#line 940 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZSCALE;;}
    break;

  case 301:
#line 941 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZMAX;;}
    break;

  case 302:
#line 942 "frame/parser.Y"
    {(yyval.integer) = FrScale::USERCLIP;;}
    break;

  case 303:
#line 945 "frame/parser.Y"
    {(yyval.integer) = FrScale::GLOBAL;;}
    break;

  case 304:
#line 946 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOCAL;;}
    break;

  case 305:
#line 949 "frame/parser.Y"
    {(yyval.integer) = FVContour::SMOOTH;;}
    break;

  case 306:
#line 950 "frame/parser.Y"
    {(yyval.integer) = FVContour::BLOCK;;}
    break;

  case 307:
#line 953 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 308:
#line 954 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 309:
#line 958 "frame/parser.Y"
    {fr->contourSaveCmd((yyvsp[(1) - (3)].str), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 310:
#line 960 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (4)].str),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 311:
#line 963 "frame/parser.Y"
    {fr->cropCmd();;}
    break;

  case 312:
#line 965 "frame/parser.Y"
    {fr->cropCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 313:
#line 968 "frame/parser.Y"
    {fr->cropCenterCmd(Vector((yyvsp[(2) - (8)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), Vector((yyvsp[(5) - (8)].real),(yyvsp[(6) - (8)].real)), (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 315:
#line 970 "frame/parser.Y"
    {fr->cropBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 316:
#line 971 "frame/parser.Y"
    {fr->cropMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 317:
#line 972 "frame/parser.Y"
    {fr->cropEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 318:
#line 975 "frame/parser.Y"
    {fr->crop3dCmd();;}
    break;

  case 319:
#line 976 "frame/parser.Y"
    {fr->crop3dCmd((yyvsp[(1) - (3)].real), (yyvsp[(2) - (3)].real), (Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 320:
#line 977 "frame/parser.Y"
    {fr->crop3dBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 321:
#line 978 "frame/parser.Y"
    {fr->crop3dMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 322:
#line 979 "frame/parser.Y"
    {fr->crop3dEndCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 323:
#line 983 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), (Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 324:
#line 985 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 325:
#line 986 "frame/parser.Y"
    {fr->crosshairCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 326:
#line 987 "frame/parser.Y"
    {fr->crosshairWarpCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 327:
#line 990 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)), (Coord::InternalSystem)(yyvsp[(3) - (5)].integer));;}
    break;

  case 328:
#line 992 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 329:
#line 994 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer));;}
    break;

  case 330:
#line 996 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 331:
#line 999 "frame/parser.Y"
    {fr->axesOrderCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 332:
#line 1002 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 333:
#line 1003 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 334:
#line 1004 "frame/parser.Y"
    {(yyval.integer) = Base::SUM;;}
    break;

  case 335:
#line 1007 "frame/parser.Y"
    {fr->fitsyHasExtCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 336:
#line 1010 "frame/parser.Y"
    {fr->getBgColorCmd();;}
    break;

  case 350:
#line 1024 "frame/parser.Y"
    {fr->getDATASECCmd();;}
    break;

  case 353:
#line 1027 "frame/parser.Y"
    {fr->getHistogramCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].integer));;}
    break;

  case 354:
#line 1029 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(3) - (9)].str),(yyvsp[(4) - (9)].str),Vector((yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real)),(Coord::InternalSystem)(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(Base::CutMethod)(yyvsp[(9) - (9)].integer));;}
    break;

  case 357:
#line 1032 "frame/parser.Y"
    {fr->getIRAFAlignCmd();;}
    break;

  case 358:
#line 1033 "frame/parser.Y"
    {fr->getMinMaxCmd();;}
    break;

  case 361:
#line 1036 "frame/parser.Y"
    {fr->getNANColorCmd();;}
    break;

  case 362:
#line 1037 "frame/parser.Y"
    {fr->getOrientCmd();;}
    break;

  case 364:
#line 1040 "frame/parser.Y"
    {fr->getPixelTableCmd(Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (Coord::InternalSystem)(yyvsp[(3) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(7) - (8)].integer), (yyvsp[(8) - (8)].str));;}
    break;

  case 366:
#line 1042 "frame/parser.Y"
    {fr->getRotateCmd();;}
    break;

  case 368:
#line 1044 "frame/parser.Y"
    {fr->getThreadsCmd();;}
    break;

  case 370:
#line 1046 "frame/parser.Y"
    {fr->getTypeCmd();;}
    break;

  case 371:
#line 1048 "frame/parser.Y"
    {fr->getValueCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 372:
#line 1050 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(3) - (9)].str),(yyvsp[(4) - (9)].str),Vector((yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real)),(Coord::InternalSystem)(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(Base::CutMethod)(yyvsp[(9) - (9)].integer));;}
    break;

  case 374:
#line 1052 "frame/parser.Y"
    {fr->getZoomCmd();;}
    break;

  case 375:
#line 1055 "frame/parser.Y"
    {fr->getBinDepthCmd();;}
    break;

  case 376:
#line 1056 "frame/parser.Y"
    {fr->getBinFactorCmd();;}
    break;

  case 377:
#line 1057 "frame/parser.Y"
    {fr->getBinFunctionCmd();;}
    break;

  case 378:
#line 1058 "frame/parser.Y"
    {fr->getBinBufferSizeCmd();;}
    break;

  case 379:
#line 1059 "frame/parser.Y"
    {fr->getBinCursorCmd();;}
    break;

  case 380:
#line 1060 "frame/parser.Y"
    {fr->getBinFilterCmd();;}
    break;

  case 382:
#line 1062 "frame/parser.Y"
    {fr->getBinListCmd();;}
    break;

  case 383:
#line 1065 "frame/parser.Y"
    {fr->getBinColsCmd();;}
    break;

  case 384:
#line 1066 "frame/parser.Y"
    {fr->getBinColsMinMaxCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 385:
#line 1067 "frame/parser.Y"
    {fr->getBinColsDimCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 386:
#line 1070 "frame/parser.Y"
    {fr->getBlockCmd();;}
    break;

  case 387:
#line 1073 "frame/parser.Y"
    {fr->getClipCmd();;}
    break;

  case 388:
#line 1075 "frame/parser.Y"
    {fr->getClipCmd((FrScale::ClipMode)(yyvsp[(1) - (2)].integer), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 389:
#line 1077 "frame/parser.Y"
    {fr->getClipCmd((yyvsp[(1) - (2)].real), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 390:
#line 1078 "frame/parser.Y"
    {fr->getClipScopeCmd();;}
    break;

  case 391:
#line 1079 "frame/parser.Y"
    {fr->getClipModeCmd();;}
    break;

  case 393:
#line 1081 "frame/parser.Y"
    {fr->getClipUserCmd();;}
    break;

  case 395:
#line 1084 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	;}
    break;

  case 396:
#line 1090 "frame/parser.Y"
    {fr->getClipMinMaxModeCmd();;}
    break;

  case 397:
#line 1091 "frame/parser.Y"
    {fr->getClipMinMaxSampleCmd();;}
    break;

  case 398:
#line 1094 "frame/parser.Y"
    {fr->getClipZScaleContrastCmd();;}
    break;

  case 399:
#line 1095 "frame/parser.Y"
    {fr->getClipZScaleSampleCmd();;}
    break;

  case 400:
#line 1096 "frame/parser.Y"
    {fr->getClipZScaleLineCmd();;}
    break;

  case 401:
#line 1099 "frame/parser.Y"
    {fr->getColorbarCmd();;}
    break;

  case 402:
#line 1100 "frame/parser.Y"
    {fr->getColorbarTagCmd();;}
    break;

  case 404:
#line 1106 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 405:
#line 1108 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 406:
#line 1110 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 407:
#line 1113 "frame/parser.Y"
    {fr->getColorScaleCmd();;}
    break;

  case 409:
#line 1115 "frame/parser.Y"
    {fr->getColorScaleLogCmd();;}
    break;

  case 410:
#line 1119 "frame/parser.Y"
    {fr->getColorScaleLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 411:
#line 1123 "frame/parser.Y"
    {fr->getContourCmd((Coord::CoordSystem)(yyvsp[(1) - (2)].integer),(Coord::SkyFrame)(yyvsp[(2) - (2)].integer));;}
    break;

  case 413:
#line 1125 "frame/parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 414:
#line 1126 "frame/parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 415:
#line 1127 "frame/parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 416:
#line 1128 "frame/parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 417:
#line 1129 "frame/parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 419:
#line 1131 "frame/parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 420:
#line 1132 "frame/parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 421:
#line 1135 "frame/parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 422:
#line 1136 "frame/parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 423:
#line 1137 "frame/parser.Y"
    {fr->getContourClipScopeCmd();;}
    break;

  case 424:
#line 1140 "frame/parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 425:
#line 1141 "frame/parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 426:
#line 1145 "frame/parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 427:
#line 1147 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 428:
#line 1153 "frame/parser.Y"
    {fr->getCoord3axisCmd((yyvsp[(1) - (4)].real), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 429:
#line 1157 "frame/parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 430:
#line 1159 "frame/parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 431:
#line 1160 "frame/parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 432:
#line 1163 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 433:
#line 1165 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 434:
#line 1166 "frame/parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 435:
#line 1169 "frame/parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 436:
#line 1172 "frame/parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 437:
#line 1174 "frame/parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 438:
#line 1178 "frame/parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 439:
#line 1180 "frame/parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 440:
#line 1183 "frame/parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 441:
#line 1187 "frame/parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 442:
#line 1188 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 443:
#line 1190 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)), (Coord::InternalSystem)(yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 444:
#line 1193 "frame/parser.Y"
    {fr->iisGetCmd((char*)(yyvsp[(1) - (5)].ptr),(yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 445:
#line 1194 "frame/parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 447:
#line 1198 "frame/parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 448:
#line 1199 "frame/parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 449:
#line 1200 "frame/parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 450:
#line 1203 "frame/parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 451:
#line 1205 "frame/parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 452:
#line 1206 "frame/parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 454:
#line 1208 "frame/parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 458:
#line 1212 "frame/parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 459:
#line 1213 "frame/parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 460:
#line 1214 "frame/parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 461:
#line 1216 "frame/parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::DistFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 463:
#line 1218 "frame/parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 464:
#line 1221 "frame/parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 465:
#line 1223 "frame/parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 466:
#line 1225 "frame/parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 467:
#line 1226 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 468:
#line 1227 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 469:
#line 1228 "frame/parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 470:
#line 1231 "frame/parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 471:
#line 1232 "frame/parser.Y"
    {fr->getFitsDepthCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 472:
#line 1236 "frame/parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 473:
#line 1238 "frame/parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 474:
#line 1241 "frame/parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 475:
#line 1244 "frame/parser.Y"
    {fr->getFitsSliceCmd(2);;}
    break;

  case 476:
#line 1245 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 477:
#line 1246 "frame/parser.Y"
    {fr->getFitsSliceCmd(2, (Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 478:
#line 1247 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (2)].integer), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 479:
#line 1250 "frame/parser.Y"
    {fr->getGridCmd();;}
    break;

  case 480:
#line 1251 "frame/parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 481:
#line 1252 "frame/parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 482:
#line 1255 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 483:
#line 1256 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 484:
#line 1257 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 485:
#line 1260 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 486:
#line 1263 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 487:
#line 1264 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 488:
#line 1265 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 489:
#line 1268 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 490:
#line 1269 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 491:
#line 1270 "frame/parser.Y"
    {fr->getSmoothRadiusMinorCmd();;}
    break;

  case 492:
#line 1271 "frame/parser.Y"
    {fr->getSmoothSigmaCmd();;}
    break;

  case 493:
#line 1272 "frame/parser.Y"
    {fr->getSmoothSigmaMinorCmd();;}
    break;

  case 494:
#line 1273 "frame/parser.Y"
    {fr->getSmoothAngleCmd();;}
    break;

  case 499:
#line 1280 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 500:
#line 1281 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 501:
#line 1282 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 502:
#line 1285 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 503:
#line 1286 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 504:
#line 1289 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 505:
#line 1290 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 506:
#line 1293 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 507:
#line 1294 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 508:
#line 1297 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 509:
#line 1298 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 510:
#line 1301 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 512:
#line 1303 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 513:
#line 1306 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 514:
#line 1307 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 516:
#line 1311 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 517:
#line 1315 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), 
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 518:
#line 1318 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer), 
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 519:
#line 1325 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 520:
#line 1326 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 521:
#line 1329 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 524:
#line 1332 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 525:
#line 1333 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 526:
#line 1334 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 527:
#line 1335 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 529:
#line 1337 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 530:
#line 1338 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 531:
#line 1339 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 533:
#line 1341 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 534:
#line 1342 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 535:
#line 1343 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 537:
#line 1347 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 538:
#line 1350 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 539:
#line 1351 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 540:
#line 1354 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 541:
#line 1355 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 542:
#line 1356 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 543:
#line 1357 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 544:
#line 1360 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 545:
#line 1361 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 546:
#line 1362 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 547:
#line 1363 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 548:
#line 1366 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 549:
#line 1367 "frame/parser.Y"
    {fr->hasWCSEquCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 550:
#line 1368 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 551:
#line 1369 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 552:
#line 1370 "frame/parser.Y"
    {fr->hasWCS3DCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 553:
#line 1373 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 554:
#line 1374 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 555:
#line 1375 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 558:
#line 1379 "frame/parser.Y"
    {fr->iisSetCmd((const char*)(yyvsp[(2) - (6)].ptr),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 559:
#line 1380 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 560:
#line 1383 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 561:
#line 1386 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 562:
#line 1387 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 563:
#line 1391 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 564:
#line 1393 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 565:
#line 1394 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 572:
#line 1406 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 573:
#line 1408 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 574:
#line 1410 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 575:
#line 1411 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 576:
#line 1413 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 577:
#line 1415 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 578:
#line 1417 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 579:
#line 1419 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 580:
#line 1421 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 582:
#line 1425 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 583:
#line 1426 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 584:
#line 1427 "frame/parser.Y"
    {fr->loadArrayRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 585:
#line 1428 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 586:
#line 1429 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 587:
#line 1431 "frame/parser.Y"
    {fr->loadArrayRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 588:
#line 1432 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 589:
#line 1433 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 590:
#line 1434 "frame/parser.Y"
    {fr->loadArrayRGBCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 591:
#line 1437 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 592:
#line 1441 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 593:
#line 1443 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 594:
#line 1445 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 595:
#line 1447 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 596:
#line 1449 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 597:
#line 1451 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 598:
#line 1453 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 599:
#line 1455 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), 
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 600:
#line 1458 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 601:
#line 1460 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 602:
#line 1462 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 608:
#line 1470 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 609:
#line 1471 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 610:
#line 1472 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 611:
#line 1473 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 612:
#line 1474 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 613:
#line 1475 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 614:
#line 1477 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 615:
#line 1479 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 616:
#line 1480 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 617:
#line 1481 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 618:
#line 1482 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 619:
#line 1485 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 620:
#line 1486 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 621:
#line 1487 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 622:
#line 1488 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 623:
#line 1489 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 624:
#line 1491 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 625:
#line 1492 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 626:
#line 1493 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 627:
#line 1494 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 633:
#line 1505 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS, 
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 634:
#line 1508 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 635:
#line 1511 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 636:
#line 1514 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 637:
#line 1517 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 638:
#line 1520 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 639:
#line 1523 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 640:
#line 1526 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 641:
#line 1529 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 642:
#line 1534 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 643:
#line 1537 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 644:
#line 1540 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 645:
#line 1543 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 646:
#line 1546 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 647:
#line 1549 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 648:
#line 1552 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 649:
#line 1555 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 650:
#line 1558 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 651:
#line 1561 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 652:
#line 1564 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 653:
#line 1569 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 654:
#line 1572 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 655:
#line 1575 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 656:
#line 1578 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 657:
#line 1581 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 658:
#line 1584 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 659:
#line 1587 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 660:
#line 1590 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 661:
#line 1593 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 662:
#line 1598 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 663:
#line 1601 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 664:
#line 1604 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 665:
#line 1607 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 666:
#line 1610 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 667:
#line 1613 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 668:
#line 1616 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 669:
#line 1619 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 670:
#line 1622 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 671:
#line 1625 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 672:
#line 1628 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 673:
#line 1633 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 674:
#line 1634 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 675:
#line 1635 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 676:
#line 1636 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 677:
#line 1637 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 678:
#line 1639 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 679:
#line 1640 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 680:
#line 1641 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 681:
#line 1642 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 682:
#line 1644 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 683:
#line 1645 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 684:
#line 1646 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 685:
#line 1647 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 686:
#line 1648 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 687:
#line 1649 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 688:
#line 1651 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 689:
#line 1653 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 690:
#line 1654 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 691:
#line 1655 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 692:
#line 1656 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 693:
#line 1659 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 694:
#line 1660 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 695:
#line 1661 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 696:
#line 1662 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 697:
#line 1663 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 698:
#line 1665 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 699:
#line 1666 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 700:
#line 1667 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 701:
#line 1668 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 702:
#line 1672 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 703:
#line 1674 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 704:
#line 1675 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 705:
#line 1677 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 706:
#line 1679 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 707:
#line 1681 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 708:
#line 1684 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 709:
#line 1685 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 710:
#line 1688 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 711:
#line 1689 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 712:
#line 1690 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 713:
#line 1693 "frame/parser.Y"
    {
#ifdef MAC_OSX_TK
	  fr->macosxPrintCmd();
#endif
	;}
    break;

  case 714:
#line 1700 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 715:
#line 1701 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 716:
#line 1702 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 717:
#line 1703 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 718:
#line 1704 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 719:
#line 1705 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 720:
#line 1706 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 721:
#line 1710 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 723:
#line 1718 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 724:
#line 1719 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 725:
#line 1721 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 726:
#line 1723 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 727:
#line 1724 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 728:
#line 1725 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 730:
#line 1726 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 731:
#line 1727 "frame/parser.Y"
    {fr->markerDeleteCmd();;}
    break;

  case 732:
#line 1728 "frame/parser.Y"
    {fr->markerDeleteAllCmd();;}
    break;

  case 734:
#line 1730 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 735:
#line 1731 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 736:
#line 1733 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 737:
#line 1735 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 738:
#line 1737 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 739:
#line 1740 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 740:
#line 1742 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 741:
#line 1743 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 742:
#line 1745 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 743:
#line 1748 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (7)].integer), (yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real), (yyvsp[(6) - (7)].integer), (Coord::InternalSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 744:
#line 1750 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 745:
#line 1753 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 746:
#line 1755 "frame/parser.Y"
    {fr->markerBoxFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 747:
#line 1757 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), Vector((yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real)), 
	    Vector((yyvsp[(6) - (8)].real), (yyvsp[(6) - (8)].real)*(yyvsp[(5) - (8)].real)/(yyvsp[(4) - (8)].real)), (yyvsp[(7) - (8)].integer), (Coord::InternalSystem)(yyvsp[(8) - (8)].integer));;}
    break;

  case 748:
#line 1761 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 749:
#line 1764 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 750:
#line 1767 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (Coord::InternalSystem)(yyvsp[(6) - (6)].integer));;}
    break;

  case 751:
#line 1769 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)), 
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 752:
#line 1772 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 753:
#line 1776 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 754:
#line 1780 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 755:
#line 1785 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 756:
#line 1789 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 757:
#line 1790 "frame/parser.Y"
    {fr->markerCircleFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 758:
#line 1792 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].real), (Coord::InternalSystem)(yyvsp[(5) - (5)].integer));;}
    break;

  case 759:
#line 1794 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 760:
#line 1795 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 761:
#line 1797 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 762:
#line 1799 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 763:
#line 1801 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].real),(Coord::InternalSystem)(yyvsp[(5) - (5)].integer));;}
    break;

  case 764:
#line 1803 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 765:
#line 1805 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 766:
#line 1806 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 767:
#line 1808 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 768:
#line 1810 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 769:
#line 1813 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 770:
#line 1817 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 771:
#line 1821 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 772:
#line 1823 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 773:
#line 1825 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 774:
#line 1827 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 775:
#line 1829 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 776:
#line 1831 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 777:
#line 1833 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 778:
#line 1835 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 779:
#line 1837 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 780:
#line 1839 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 781:
#line 1841 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 782:
#line 1843 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 783:
#line 1845 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 784:
#line 1847 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 785:
#line 1848 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 786:
#line 1850 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 787:
#line 1852 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 788:
#line 1853 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 789:
#line 1854 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 790:
#line 1856 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 791:
#line 1858 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 792:
#line 1859 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 793:
#line 1860 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 794:
#line 1861 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 795:
#line 1863 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 796:
#line 1864 "frame/parser.Y"
    {fr->markerEllipseFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 797:
#line 1866 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(4) - (6)].real), (yyvsp[(5) - (6)].real)), (Coord::InternalSystem)(yyvsp[(6) - (6)].integer));;}
    break;

  case 798:
#line 1868 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 799:
#line 1872 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), 
	    Vector((yyvsp[(6) - (8)].real),(yyvsp[(6) - (8)].real)*(yyvsp[(5) - (8)].real)/(yyvsp[(4) - (8)].real)), (yyvsp[(7) - (8)].integer), (Coord::InternalSystem)(yyvsp[(8) - (8)].integer));;}
    break;

  case 800:
#line 1876 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 801:
#line 1879 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 802:
#line 1882 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 803:
#line 1886 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 804:
#line 1890 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 805:
#line 1895 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 806:
#line 1899 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 807:
#line 1900 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 808:
#line 1901 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 809:
#line 1903 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 810:
#line 1905 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(5) - (6)].vector)), Vector((yyvsp[(6) - (6)].vector)), (Coord::InternalSystem)(yyvsp[(4) - (6)].integer));;}
    break;

  case 811:
#line 1907 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 812:
#line 1911 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 813:
#line 1912 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 814:
#line 1913 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 815:
#line 1915 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)), (Coord::InternalSystem)(yyvsp[(4) - (6)].integer));;}
    break;

  case 816:
#line 1917 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 817:
#line 1920 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),(Coord::InternalSystem)(yyvsp[(6) - (6)].integer));;}
    break;

  case 818:
#line 1922 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 819:
#line 1925 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),(Coord::InternalSystem)(yyvsp[(6) - (6)].integer));;}
    break;

  case 820:
#line 1927 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 821:
#line 1930 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 822:
#line 1931 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 823:
#line 1933 "frame/parser.Y"
    {fr->markerPolygonFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 824:
#line 1935 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(4) - (6)].vector)), Vector((yyvsp[(5) - (6)].vector)),
	    (Coord::InternalSystem)(yyvsp[(3) - (6)].integer), (yyvsp[(6) - (6)].real));;}
    break;

  case 825:
#line 1939 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 826:
#line 1943 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 827:
#line 1945 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 828:
#line 1946 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 829:
#line 1948 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(5) - (6)].vector)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::InternalSystem)(yyvsp[(4) - (6)].integer));;}
    break;

  case 830:
#line 1951 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 831:
#line 1954 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 832:
#line 1957 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 833:
#line 1958 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 834:
#line 1960 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 835:
#line 1961 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 836:
#line 1962 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 837:
#line 1964 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 838:
#line 1965 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 839:
#line 1967 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 840:
#line 1969 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(5) - (7)].vector)), (Coord::InternalSystem)(yyvsp[(4) - (7)].integer), (yyvsp[(6) - (7)].real), (yyvsp[(7) - (7)].real));;}
    break;

  case 841:
#line 1972 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 842:
#line 1975 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 843:
#line 1977 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 844:
#line 1978 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 848:
#line 1983 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 849:
#line 1984 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 850:
#line 1986 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 851:
#line 1988 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 852:
#line 1990 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 853:
#line 1991 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 854:
#line 1993 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer));;}
    break;

  case 855:
#line 1994 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 858:
#line 1999 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 859:
#line 2000 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 860:
#line 2001 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 861:
#line 2002 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 862:
#line 2003 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 863:
#line 2004 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 864:
#line 2005 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 865:
#line 2006 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 866:
#line 2007 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 867:
#line 2008 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 868:
#line 2010 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (5)].str),Vector((yyvsp[(5) - (5)].vector)),(Coord::InternalSystem)(yyvsp[(4) - (5)].integer));;}
    break;

  case 869:
#line 2012 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 870:
#line 2014 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 871:
#line 2015 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 872:
#line 2016 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 873:
#line 2017 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 874:
#line 2018 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 875:
#line 2020 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 876:
#line 2021 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 877:
#line 2022 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 878:
#line 2023 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 879:
#line 2024 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 880:
#line 2026 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 881:
#line 2027 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 882:
#line 2028 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 883:
#line 2029 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 884:
#line 2030 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 885:
#line 2031 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 886:
#line 2034 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 887:
#line 2035 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 888:
#line 2036 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 889:
#line 2037 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 890:
#line 2038 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 891:
#line 2039 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 892:
#line 2040 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 893:
#line 2041 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 894:
#line 2042 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 895:
#line 2043 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 896:
#line 2044 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 897:
#line 2045 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 898:
#line 2046 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 899:
#line 2047 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 900:
#line 2048 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 901:
#line 2049 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 902:
#line 2050 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 903:
#line 2051 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 904:
#line 2052 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 905:
#line 2053 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 906:
#line 2054 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 907:
#line 2057 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 908:
#line 2058 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 909:
#line 2059 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 910:
#line 2060 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 911:
#line 2061 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 912:
#line 2063 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 913:
#line 2073 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 914:
#line 2081 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 915:
#line 2090 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 916:
#line 2098 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 917:
#line 2105 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 918:
#line 2112 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 919:
#line 2120 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 920:
#line 2128 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 921:
#line 2133 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 922:
#line 2138 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 923:
#line 2143 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 924:
#line 2148 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 925:
#line 2153 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 926:
#line 2158 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 927:
#line 2163 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 928:
#line 2172 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer), 
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 929:
#line 2182 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS), 
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 930:
#line 2192 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 931:
#line 2201 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 932:
#line 2209 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont, 
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 933:
#line 2219 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 934:
#line 2229 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 935:
#line 2239 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 936:
#line 2251 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 937:
#line 2260 "frame/parser.Y"
    {fr->createCompositeCmd(
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 939:
#line 2268 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 940:
#line 2270 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 941:
#line 2272 "frame/parser.Y"
    { 
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 942:
#line 2277 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 943:
#line 2280 "frame/parser.Y"
    {(yyval.dash)[0] = (yyvsp[(1) - (2)].integer); (yyval.dash)[1] = (yyvsp[(2) - (2)].integer);;}
    break;

  case 944:
#line 2284 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 945:
#line 2286 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 946:
#line 2287 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 947:
#line 2290 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 948:
#line 2291 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 949:
#line 2292 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 950:
#line 2293 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 951:
#line 2294 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 952:
#line 2295 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 953:
#line 2296 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 955:
#line 2300 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 956:
#line 2301 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 957:
#line 2302 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 958:
#line 2303 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 959:
#line 2304 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 960:
#line 2307 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 961:
#line 2309 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 962:
#line 2311 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 963:
#line 2313 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer),(Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 964:
#line 2315 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 965:
#line 2317 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 966:
#line 2320 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 967:
#line 2322 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 968:
#line 2324 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 969:
#line 2326 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer),(Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 970:
#line 2328 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 971:
#line 2330 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 972:
#line 2332 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 973:
#line 2333 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 974:
#line 2334 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 975:
#line 2336 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 976:
#line 2338 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 977:
#line 2340 "frame/parser.Y"
    {fr->getMarkerBoxFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 978:
#line 2342 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 979:
#line 2344 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 980:
#line 2345 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 981:
#line 2346 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 982:
#line 2348 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 983:
#line 2350 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 984:
#line 2353 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), 
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 985:
#line 2355 "frame/parser.Y"
    {fr->getMarkerCircleFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 986:
#line 2357 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 987:
#line 2358 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 988:
#line 2359 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 989:
#line 2360 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 990:
#line 2362 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 991:
#line 2363 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 992:
#line 2364 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 993:
#line 2365 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 994:
#line 2366 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 995:
#line 2368 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 996:
#line 2370 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 997:
#line 2371 "frame/parser.Y"
    {fr->getMarkerEllipseFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 998:
#line 2373 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 999:
#line 2375 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1000:
#line 2377 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1001:
#line 2378 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1002:
#line 2380 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1003:
#line 2382 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1004:
#line 2383 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1005:
#line 2384 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1006:
#line 2385 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1007:
#line 2387 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1008:
#line 2389 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1009:
#line 2392 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1010:
#line 2395 "frame/parser.Y"
    {fr->getMarkerPolygonFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1011:
#line 2396 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1012:
#line 2397 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1013:
#line 2399 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1014:
#line 2402 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1015:
#line 2405 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1016:
#line 2406 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1017:
#line 2407 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1018:
#line 2408 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1019:
#line 2410 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1020:
#line 2412 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1021:
#line 2414 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1022:
#line 2415 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1023:
#line 2417 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1024:
#line 2418 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1025:
#line 2419 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1026:
#line 2420 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1027:
#line 2421 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1028:
#line 2423 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1029:
#line 2425 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1030:
#line 2427 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1031:
#line 2429 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1033:
#line 2431 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1034:
#line 2432 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1035:
#line 2434 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1036:
#line 2436 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1037:
#line 2437 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1038:
#line 2438 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1040:
#line 2440 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1042:
#line 2444 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1043:
#line 2445 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1044:
#line 2446 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1045:
#line 2447 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1046:
#line 2448 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1047:
#line 2449 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1048:
#line 2451 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1049:
#line 2452 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1050:
#line 2454 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1051:
#line 2457 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1052:
#line 2458 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1053:
#line 2459 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1054:
#line 2460 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1055:
#line 2463 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1056:
#line 2464 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1057:
#line 2467 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1058:
#line 2468 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1059:
#line 2471 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1060:
#line 2472 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1061:
#line 2475 "frame/parser.Y"
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
#line 2488 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1063:
#line 2489 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1064:
#line 2493 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1065:
#line 2494 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1066:
#line 2498 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1067:
#line 2499 "frame/parser.Y"
    {fr->markerLayerCmd(Base::ANALYSIS);;}
    break;

  case 1068:
#line 2504 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer),
	    0, propQMask, propQValue, taglist);;}
    break;

  case 1069:
#line 2509 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer), 
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer),
	    1, propQMask, propQValue, taglist);;}
    break;

  case 1070:
#line 2515 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1071:
#line 2517 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].str),
	    (Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1072:
#line 2520 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1073:
#line 2522 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].integer),
	    (Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1074:
#line 2525 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (yyvsp[(4) - (6)].dash), (yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].str));;}
    break;

  case 1075:
#line 2528 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1076:
#line 2529 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1077:
#line 2530 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1078:
#line 2531 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1079:
#line 2532 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1080:
#line 2533 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1081:
#line 2535 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::InternalSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1082:
#line 2537 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1085:
#line 2544 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1086:
#line 2545 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1087:
#line 2546 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1088:
#line 2547 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1089:
#line 2548 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1090:
#line 2549 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1093:
#line 2554 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1094:
#line 2555 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1095:
#line 2556 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1096:
#line 2557 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1097:
#line 2558 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1098:
#line 2559 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1099:
#line 2560 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1100:
#line 2561 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1101:
#line 2562 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1102:
#line 2563 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1103:
#line 2564 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1106:
#line 2571 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1107:
#line 2572 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1109:
#line 2575 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1110:
#line 2576 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1111:
#line 2577 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1112:
#line 2578 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1113:
#line 2581 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1114:
#line 2582 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1117:
#line 2590 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1118:
#line 2593 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1119:
#line 2594 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1123:
#line 2601 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1124:
#line 2604 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1125:
#line 2608 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1126:
#line 2609 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1127:
#line 2610 "frame/parser.Y"
    {fr->maskMarkCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1128:
#line 2611 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1129:
#line 2614 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1130:
#line 2615 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1131:
#line 2616 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1132:
#line 2617 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1133:
#line 2621 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1134:
#line 2622 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1135:
#line 2624 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1136:
#line 2629 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1138:
#line 2631 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1140:
#line 2633 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1141:
#line 2636 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1142:
#line 2638 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1143:
#line 2643 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1144:
#line 2646 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1145:
#line 2647 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1146:
#line 2648 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1147:
#line 2651 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1148:
#line 2653 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1149:
#line 2657 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1150:
#line 2658 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1151:
#line 2662 "frame/parser.Y"
    {fr->psColorSpaceCmd((Widget::PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1152:
#line 2663 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1153:
#line 2664 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1154:
#line 2665 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  ;}
    break;

  case 1155:
#line 2670 "frame/parser.Y"
    {(yyval.integer) = Widget::BW;;}
    break;

  case 1156:
#line 2671 "frame/parser.Y"
    {(yyval.integer) = Widget::GRAY;;}
    break;

  case 1157:
#line 2672 "frame/parser.Y"
    {(yyval.integer) = Widget::RGB;;}
    break;

  case 1158:
#line 2673 "frame/parser.Y"
    {(yyval.integer) = Widget::CMYK;;}
    break;

  case 1161:
#line 2681 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1162:
#line 2683 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1163:
#line 2684 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1164:
#line 2685 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1165:
#line 2689 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1166:
#line 2690 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1167:
#line 2691 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1168:
#line 2692 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1169:
#line 2695 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1170:
#line 2696 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1171:
#line 2699 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1172:
#line 2700 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1173:
#line 2701 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1174:
#line 2704 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1175:
#line 2705 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1176:
#line 2706 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1177:
#line 2709 "frame/parser.Y"
    {fr->rotateCmd(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 1178:
#line 2710 "frame/parser.Y"
    {fr->rotateCmd(degToRad((yyvsp[(1) - (2)].real)));;}
    break;

  case 1180:
#line 2712 "frame/parser.Y"
    {fr->rotateToCmd(degToRad((yyvsp[(2) - (2)].real)));;}
    break;

  case 1181:
#line 2713 "frame/parser.Y"
    {fr->rotateToCmd(degToRad((yyvsp[(2) - (3)].real)));;}
    break;

  case 1182:
#line 2716 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1183:
#line 2717 "frame/parser.Y"
    {fr->rotateMotionCmd(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 1184:
#line 2718 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1189:
#line 2725 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1190:
#line 2729 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1191:
#line 2731 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1192:
#line 2733 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1194:
#line 2738 "frame/parser.Y"
    {fr->saveArrayRGBCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1195:
#line 2740 "frame/parser.Y"
    {fr->saveArrayRGBCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1196:
#line 2742 "frame/parser.Y"
    {fr->saveArrayRGBCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1206:
#line 2755 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1207:
#line 2756 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1208:
#line 2757 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1209:
#line 2760 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1210:
#line 2761 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1211:
#line 2762 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1212:
#line 2765 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1213:
#line 2766 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1214:
#line 2767 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1215:
#line 2770 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1216:
#line 2771 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1217:
#line 2772 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1219:
#line 2776 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1220:
#line 2777 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1221:
#line 2778 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1222:
#line 2781 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1223:
#line 2782 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1224:
#line 2783 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1225:
#line 2786 "frame/parser.Y"
    {fr->saveFitsRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1226:
#line 2787 "frame/parser.Y"
    {fr->saveFitsRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1227:
#line 2788 "frame/parser.Y"
    {fr->saveFitsRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1228:
#line 2791 "frame/parser.Y"
    {fr->saveFitsRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1229:
#line 2792 "frame/parser.Y"
    {fr->saveFitsRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1230:
#line 2793 "frame/parser.Y"
    {fr->saveFitsRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1231:
#line 2796 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1232:
#line 2797 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1233:
#line 2798 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1234:
#line 2802 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1235:
#line 2804 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1236:
#line 2806 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1237:
#line 2810 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1238:
#line 2814 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1239:
#line 2815 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1240:
#line 2818 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1241:
#line 2819 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1242:
#line 2820 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1243:
#line 2821 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1244:
#line 2824 "frame/parser.Y"
    {fr->updateFitsCmd(0);;}
    break;

  case 1245:
#line 2826 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)),0);;}
    break;

  case 1246:
#line 2827 "frame/parser.Y"
    {fr->updateFitsCmd(1);;}
    break;

  case 1247:
#line 2829 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)),1);;}
    break;

  case 1249:
#line 2833 "frame/parser.Y"
    {fr->sliceCmd(2, (yyvsp[(1) - (1)].integer));;}
    break;

  case 1250:
#line 2834 "frame/parser.Y"
    {fr->sliceCmd(2, (yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1251:
#line 2835 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer), (yyvsp[(2) - (2)].integer));;}
    break;

  case 1252:
#line 2836 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (3)].integer), (yyvsp[(2) - (3)].real), (Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1253:
#line 2839 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1254:
#line 2840 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1255:
#line 2844 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1257:
#line 2846 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1260:
#line 2851 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1261:
#line 2852 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1262:
#line 2853 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1263:
#line 2856 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1264:
#line 2857 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1265:
#line 2858 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1266:
#line 2861 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1267:
#line 2863 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1268:
#line 2868 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (4)].integer), (FitsImage*)(yyvsp[(2) - (4)].ptr), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1269:
#line 2871 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1270:
#line 2878 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1271:
#line 2880 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1272:
#line 2882 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1273:
#line 2887 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1275:
#line 2891 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1276:
#line 2892 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1277:
#line 2893 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1278:
#line 2895 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1279:
#line 2897 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1280:
#line 2902 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 11088 "frame/parser.C"
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


#line 2906 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

