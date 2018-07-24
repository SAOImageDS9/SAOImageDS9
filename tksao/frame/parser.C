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
     CELESTIAL_ = 313,
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
#define CELESTIAL_ 313
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
#define YYLAST   5521

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  350
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  215
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1264
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2781

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
     625,   627,   629,   632,   635,   638,   641,   645,   649,   652,
     655,   657,   659,   661,   663,   665,   667,   669,   672,   675,
     678,   682,   685,   688,   691,   698,   709,   711,   714,   716,
     723,   734,   736,   739,   742,   745,   748,   751,   754,   768,
     782,   795,   808,   810,   811,   813,   815,   820,   827,   829,
     831,   833,   835,   837,   839,   841,   843,   845,   850,   854,
     859,   860,   867,   876,   879,   883,   887,   891,   892,   896,
     901,   906,   911,   915,   919,   921,   925,   931,   936,   941,
     945,   948,   949,   951,   953,   957,   960,   963,   966,   969,
     972,   975,   978,   981,   984,   987,   990,   993,   996,   999,
    1001,  1004,  1007,  1012,  1022,  1025,  1028,  1031,  1033,  1037,
    1040,  1043,  1045,  1048,  1057,  1060,  1062,  1065,  1067,  1070,
    1072,  1077,  1087,  1090,  1092,  1094,  1096,  1098,  1101,  1103,
    1105,  1108,  1110,  1111,  1114,  1117,  1119,  1120,  1123,  1126,
    1128,  1130,  1133,  1136,  1139,  1141,  1143,  1145,  1147,  1149,
    1151,  1152,  1154,  1157,  1159,  1164,  1170,  1171,  1174,  1176,
    1182,  1185,  1188,  1190,  1192,  1194,  1197,  1199,  1202,  1204,
    1206,  1207,  1209,  1211,  1212,  1214,  1220,  1227,  1232,  1236,
    1243,  1246,  1248,  1252,  1254,  1256,  1258,  1262,  1269,  1277,
    1283,  1285,  1287,  1292,  1298,  1300,  1304,  1305,  1307,  1310,
    1312,  1317,  1319,  1322,  1324,  1327,  1331,  1334,  1336,  1339,
    1341,  1346,  1349,  1351,  1353,  1357,  1359,  1362,  1366,  1369,
    1370,  1372,  1374,  1379,  1382,  1383,  1385,  1387,  1390,  1391,
    1393,  1395,  1397,  1399,  1401,  1403,  1405,  1407,  1409,  1411,
    1413,  1416,  1418,  1421,  1423,  1426,  1429,  1432,  1435,  1437,
    1439,  1441,  1442,  1444,  1445,  1447,  1448,  1450,  1451,  1453,
    1454,  1457,  1460,  1461,  1463,  1466,  1468,  1475,  1481,  1483,
    1485,  1487,  1490,  1493,  1495,  1497,  1499,  1501,  1504,  1506,
    1508,  1510,  1513,  1515,  1517,  1519,  1522,  1525,  1528,  1529,
    1531,  1532,  1534,  1536,  1538,  1540,  1542,  1544,  1546,  1548,
    1551,  1554,  1557,  1559,  1562,  1566,  1568,  1571,  1574,  1579,
    1586,  1588,  1599,  1601,  1604,  1608,  1612,  1615,  1618,  1621,
    1624,  1627,  1630,  1633,  1638,  1643,  1648,  1652,  1656,  1662,
    1667,  1672,  1677,  1681,  1685,  1689,  1693,  1696,  1699,  1704,
    1708,  1712,  1716,  1720,  1725,  1730,  1735,  1740,  1746,  1751,
    1758,  1766,  1771,  1776,  1782,  1785,  1789,  1793,  1797,  1800,
    1804,  1808,  1812,  1816,  1821,  1825,  1831,  1838,  1842,  1846,
    1851,  1855,  1859,  1863,  1867,  1871,  1877,  1881,  1885,  1890,
    1894,  1897,  1900,  1902,  1906,  1911,  1916,  1921,  1926,  1931,
    1938,  1943,  1948,  1954,  1959,  1964,  1969,  1974,  1980,  1985,
    1992,  2000,  2005,  2010,  2016,  2022,  2028,  2034,  2040,  2046,
    2054,  2060,  2066,  2073,  2079,  2085,  2091,  2097,  2104,  2110,
    2118,  2127,  2133,  2139,  2146,  2150,  2154,  2158,  2162,  2166,
    2172,  2176,  2180,  2185,  2189,  2193,  2197,  2201,  2206,  2210,
    2216,  2223,  2227,  2231,  2236,  2240,  2244,  2248,  2252,  2256,
    2262,  2266,  2270,  2275,  2280,  2285,  2289,  2295,  2300,  2305,
    2308,  2312,  2319,  2326,  2328,  2330,  2332,  2335,  2338,  2341,
    2345,  2349,  2352,  2365,  2368,  2371,  2373,  2377,  2382,  2385,
    2386,  2390,  2392,  2394,  2397,  2400,  2403,  2406,  2409,  2414,
    2419,  2424,  2428,  2433,  2439,  2447,  2456,  2463,  2468,  2477,
    2487,  2494,  2501,  2509,  2520,  2532,  2545,  2555,  2561,  2566,
    2572,  2579,  2583,  2589,  2595,  2601,  2608,  2614,  2619,  2629,
    2640,  2652,  2662,  2669,  2676,  2683,  2690,  2697,  2704,  2711,
    2718,  2725,  2733,  2741,  2744,  2749,  2754,  2759,  2764,  2770,
    2775,  2780,  2786,  2792,  2796,  2801,  2806,  2811,  2816,  2823,
    2831,  2840,  2850,  2857,  2868,  2880,  2893,  2903,  2907,  2910,
    2914,  2920,  2927,  2935,  2940,  2944,  2948,  2955,  2962,  2969,
    2977,  2984,  2992,  2997,  3002,  3007,  3014,  3024,  3029,  3033,
    3038,  3045,  3053,  3061,  3064,  3068,  3072,  3076,  3081,  3084,
    3087,  3092,  3100,  3111,  3115,  3117,  3121,  3124,  3127,  3130,
    3133,  3137,  3143,  3148,  3154,  3157,  3165,  3169,  3172,  3175,
    3179,  3182,  3185,  3188,  3192,  3195,  3199,  3204,  3208,  3212,
    3218,  3225,  3230,  3233,  3237,  3240,  3243,  3248,  3252,  3256,
    3259,  3263,  3265,  3268,  3270,  3273,  3276,  3279,  3281,  3283,
    3285,  3287,  3290,  3292,  3295,  3298,  3300,  3303,  3306,  3308,
    3311,  3313,  3315,  3317,  3319,  3321,  3323,  3325,  3327,  3328,
    3330,  3333,  3336,  3339,  3343,  3349,  3357,  3365,  3372,  3379,
    3386,  3393,  3399,  3406,  3413,  3420,  3427,  3434,  3441,  3448,
    3460,  3468,  3476,  3484,  3494,  3504,  3515,  3528,  3541,  3544,
    3547,  3551,  3556,  3561,  3566,  3569,  3574,  3579,  3581,  3583,
    3585,  3587,  3589,  3591,  3593,  3595,  3598,  3600,  3602,  3604,
    3608,  3612,  3617,  3624,  3635,  3643,  3651,  3657,  3660,  3663,
    3667,  3672,  3678,  3682,  3688,  3694,  3698,  3703,  3709,  3715,
    3721,  3725,  3731,  3734,  3738,  3742,  3748,  3752,  3756,  3760,
    3765,  3771,  3777,  3781,  3787,  3793,  3797,  3802,  3808,  3814,
    3817,  3820,  3824,  3830,  3837,  3844,  3848,  3852,  3856,  3863,
    3869,  3875,  3878,  3882,  3886,  3892,  3899,  3903,  3906,  3909,
    3913,  3916,  3920,  3923,  3927,  3933,  3940,  3943,  3946,  3949,
    3951,  3956,  3961,  3963,  3966,  3969,  3972,  3975,  3978,  3981,
    3984,  3988,  3991,  3995,  3998,  4002,  4004,  4006,  4008,  4010,
    4012,  4013,  4016,  4017,  4020,  4021,  4023,  4024,  4025,  4027,
    4029,  4031,  4033,  4041,  4050,  4053,  4058,  4061,  4066,  4073,
    4076,  4078,  4080,  4084,  4088,  4090,  4094,  4099,  4102,  4104,
    4108,  4112,  4117,  4121,  4125,  4129,  4131,  4133,  4135,  4137,
    4139,  4141,  4143,  4145,  4147,  4149,  4151,  4153,  4155,  4157,
    4160,  4161,  4162,  4165,  4167,  4171,  4173,  4177,  4179,  4182,
    4185,  4187,  4191,  4192,  4193,  4196,  4199,  4201,  4205,  4211,
    4213,  4216,  4219,  4222,  4224,  4226,  4228,  4230,  4235,  4238,
    4242,  4246,  4249,  4253,  4256,  4259,  4262,  4266,  4270,  4274,
    4277,  4281,  4283,  4287,  4291,  4293,  4296,  4299,  4302,  4305,
    4307,  4309,  4311,  4313,  4316,  4319,  4323,  4327,  4329,  4332,
    4336,  4340,  4342,  4345,  4347,  4349,  4351,  4353,  4355,  4358,
    4361,  4366,  4368,  4371,  4374,  4377,  4381,  4383,  4385,  4387,
    4390,  4393,  4396,  4399,  4402,  4406,  4410,  4414,  4418,  4422,
    4426,  4430,  4432,  4435,  4438,  4441,  4445,  4448,  4452,  4456,
    4459,  4462,  4465,  4468,  4471,  4474,  4477,  4480,  4483,  4486,
    4489,  4492,  4495,  4498,  4502,  4506,  4510,  4513,  4516,  4519,
    4522,  4525,  4528,  4531,  4534,  4537,  4540,  4543,  4546,  4550,
    4554,  4558,  4563,  4570,  4572,  4574,  4576,  4578,  4580,  4581,
    4587,  4589,  4596,  4600,  4602,  4605,  4608,  4612,  4615,  4619,
    4623,  4626,  4629,  4632,  4635,  4638,  4641,  4645,  4648,  4651,
    4655,  4657,  4661,  4666,  4668,  4671,  4677,  4684,  4691,  4694,
    4696,  4699,  4702,  4708,  4715
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
      -1,   300,   352,   352,    -1,   300,   197,   197,    -1,   344,
     394,    -1,   230,   354,    -1,   138,    -1,   176,    -1,   352,
      -1,   187,    -1,   344,    -1,   343,    -1,   300,    -1,     4,
     366,    -1,   193,   366,    -1,   247,     4,    -1,   352,     4,
       4,    -1,    78,   352,    -1,   247,     4,    -1,   172,     4,
      -1,     4,   352,   352,     4,     6,     4,    -1,   243,   352,
     352,   352,   352,   352,   352,     4,     6,     4,    -1,    40,
      -1,   194,   396,    -1,   111,    -1,     4,   352,   352,     4,
       6,     4,    -1,   243,   352,   352,   352,   352,   352,   352,
       4,     6,     4,    -1,   365,    -1,   177,   352,    -1,    83,
     399,    -1,    99,   400,    -1,   175,   401,    -1,   216,   405,
      -1,   250,   406,    -1,     5,     4,     4,   404,     4,     4,
     365,   352,   402,   403,   352,   352,     5,    -1,     5,     4,
       4,   404,     4,     4,   365,   352,   352,   403,   352,   352,
       5,    -1,     5,     4,     4,   404,     4,     4,   365,   352,
     402,   352,   352,     5,    -1,     5,     4,     4,   404,     4,
       4,   365,   352,   352,   352,   352,     5,    -1,   225,    -1,
      -1,    31,    -1,     5,    -1,     5,     5,     4,   354,    -1,
       5,     4,   354,     5,   362,   367,    -1,   187,    -1,   344,
      -1,   343,    -1,   300,    -1,   138,    -1,   176,    -1,   269,
      -1,    46,    -1,     5,    -1,     5,     5,     4,   354,    -1,
       5,   362,   367,    -1,    31,     5,   362,   367,    -1,    -1,
     352,   352,   352,   352,   362,   367,    -1,    59,   361,   362,
     367,   352,   352,   362,   369,    -1,   286,   408,    -1,    40,
     352,   352,    -1,   194,   352,   352,    -1,   111,   352,   352,
      -1,    -1,   352,   352,   362,    -1,    40,   352,   352,     4,
      -1,   194,   352,   352,     4,    -1,   111,   352,   352,     4,
      -1,   364,   352,   352,    -1,   362,   367,   361,    -1,   354,
      -1,   308,   352,   352,    -1,    40,   194,   364,   352,   352,
      -1,   194,   364,   352,   352,    -1,    40,   194,   362,   361,
      -1,   194,   362,   361,    -1,    33,     4,    -1,    -1,    32,
      -1,   279,    -1,   144,   117,     5,    -1,    41,    66,    -1,
      44,   414,    -1,    46,   416,    -1,    65,   417,    -1,    68,
     421,    -1,    67,   420,    -1,    69,   423,    -1,    77,   425,
      -1,    79,   428,    -1,    84,   429,    -1,    86,   430,    -1,
      88,   432,    -1,    87,   431,    -1,    93,   433,    -1,    95,
      -1,   124,   437,    -1,   141,   443,    -1,   152,     5,     5,
       4,    -1,   153,    89,     5,     5,   352,   352,   364,     4,
     411,    -1,   156,   435,    -1,   160,   434,    -1,   162,    16,
      -1,   187,    -1,   183,   503,   497,    -1,   184,   444,    -1,
     197,    66,    -1,   212,    -1,   213,   445,    -1,   220,   281,
     364,   352,   352,     4,     4,     5,    -1,   243,   446,    -1,
     245,    -1,   269,   447,    -1,   285,    -1,   286,   448,    -1,
     294,    -1,   301,   364,   352,   352,    -1,   307,    89,     5,
       5,   352,   352,   364,     4,   411,    -1,   309,   453,    -1,
     345,    -1,   100,    -1,   118,    -1,   134,    -1,    53,   266,
      -1,    88,    -1,   122,    -1,    71,   415,    -1,   174,    -1,
      -1,   187,     5,    -1,   103,     5,    -1,   118,    -1,    -1,
     402,   403,    -1,   352,   403,    -1,   254,    -1,   193,    -1,
     187,   418,    -1,   300,   169,    -1,   344,   419,    -1,   230,
      -1,   193,    -1,   247,    -1,    78,    -1,   247,    -1,   172,
      -1,    -1,   282,    -1,   169,   422,    -1,     4,    -1,     4,
     364,   352,   352,    -1,     4,   352,   352,   365,   352,    -1,
      -1,   169,   424,    -1,   177,    -1,     4,   352,   352,   365,
     352,    -1,   362,   367,    -1,    65,   426,    -1,    66,    -1,
      91,    -1,   169,    -1,   206,   169,    -1,   186,    -1,    69,
     427,    -1,   269,    -1,   338,    -1,    -1,   193,    -1,   254,
      -1,    -1,   177,    -1,   352,   352,   362,   367,   368,    -1,
     364,   352,   352,   362,   367,   368,    -1,   352,   362,   362,
       4,    -1,   362,   367,   368,    -1,    59,   362,   367,   368,
     362,   369,    -1,   286,   362,    -1,   364,    -1,   362,   367,
     368,    -1,   277,    -1,    33,    -1,   364,    -1,   362,   367,
     368,    -1,   362,   367,   361,   352,   352,     5,    -1,     4,
     362,   367,   361,   352,   352,     5,    -1,   364,   352,   352,
       4,     4,    -1,     5,    -1,    65,    -1,   364,   352,   352,
       5,    -1,     6,     4,     4,     4,     4,    -1,    88,    -1,
     120,   196,   436,    -1,    -1,     4,    -1,   352,   352,    -1,
     199,    -1,    59,   362,   367,   368,    -1,    81,    -1,   100,
     440,    -1,    45,    -1,   117,   438,    -1,   120,   196,   441,
      -1,   146,   439,    -1,   147,    -1,   207,   196,    -1,   266,
      -1,   266,   362,   367,   369,    -1,   267,   442,    -1,   338,
      -1,     4,    -1,   364,   352,   352,    -1,     4,    -1,   166,
       5,    -1,     4,   166,     5,    -1,   309,     4,    -1,    -1,
       4,    -1,   355,    -1,   355,   364,   352,   352,    -1,   355,
       4,    -1,    -1,     4,    -1,   362,    -1,     4,   362,    -1,
      -1,   211,    -1,   302,    -1,    66,    -1,   182,    -1,   289,
      -1,   230,    -1,    61,    -1,   280,    -1,   303,    -1,   134,
      -1,   237,    -1,   237,   188,    -1,   264,    -1,   264,   188,
      -1,    21,    -1,   303,   452,    -1,    47,   449,    -1,    74,
     450,    -1,   150,   451,    -1,   186,    -1,    37,    -1,   251,
      -1,    -1,    66,    -1,    -1,    66,    -1,    -1,    66,    -1,
      -1,   223,    -1,    -1,    16,   454,    -1,   196,   363,    -1,
      -1,   224,    -1,    83,   456,    -1,    99,    -1,   362,   367,
     368,   457,     5,     5,    -1,   362,   367,   368,   457,     5,
      -1,    20,    -1,   233,    -1,    19,    -1,    44,   459,    -1,
      77,   460,    -1,    84,    -1,    94,    -1,    95,    -1,   101,
      -1,   124,   461,    -1,   141,    -1,   156,    -1,   163,    -1,
     183,   462,    -1,   219,    -1,   157,    -1,   269,    -1,   280,
     362,    -1,   309,   463,    -1,    72,     5,    -1,    -1,    31,
      -1,    -1,    44,    -1,    87,    -1,   192,    -1,   150,    -1,
     256,    -1,   216,    -1,   295,    -1,   362,    -1,   115,   362,
      -1,    58,   362,    -1,   173,   362,    -1,    18,    -1,   286,
     362,    -1,   200,     4,     4,    -1,   116,    -1,   185,     5,
      -1,    88,   466,    -1,   257,   120,   196,   465,    -1,   257,
       6,     4,     4,     4,     4,    -1,   299,    -1,   309,   352,
     352,   352,   352,   352,   352,   352,   352,     4,    -1,     5,
      -1,     5,     4,    -1,     4,     4,    56,    -1,     4,     4,
     362,    -1,   193,   354,    -1,    26,   468,    -1,   112,   470,
      -1,   124,   471,    -1,   159,   484,    -1,   205,   482,    -1,
     218,   483,    -1,     5,    14,     5,   372,    -1,     5,    15,
       5,   372,    -1,     5,    61,     5,   372,    -1,     5,   190,
     372,    -1,     5,   191,   372,    -1,     5,   260,   370,     4,
     372,    -1,     5,   270,     4,   372,    -1,     5,   271,     4,
     372,    -1,     5,   302,     5,   372,    -1,   243,    87,   469,
      -1,     5,    14,     5,    -1,     5,    15,     5,    -1,     5,
      61,     5,    -1,     5,   190,    -1,     5,   191,    -1,     5,
     260,   370,     4,    -1,     5,   270,     4,    -1,     5,   271,
       4,    -1,     5,   302,     5,    -1,     5,     5,   268,    -1,
       5,    14,     5,   372,    -1,     5,    15,     5,   372,    -1,
       5,    61,     5,   372,    -1,     5,   190,   371,   372,    -1,
       5,     5,   268,   371,   372,    -1,     5,   191,   371,   372,
      -1,     5,   260,   370,     4,   371,   372,    -1,     5,   275,
     370,     4,     4,   371,   372,    -1,     5,   270,     4,   372,
      -1,     5,   271,     4,   372,    -1,     5,   302,     5,   371,
     372,    -1,   267,   472,    -1,   117,    87,   473,    -1,   243,
     157,   481,    -1,   243,    87,   480,    -1,   192,   474,    -1,
       5,    14,     5,    -1,     5,    15,     5,    -1,     5,    61,
       5,    -1,     5,   190,   371,    -1,     5,     5,   268,   371,
      -1,     5,   191,   371,    -1,     5,   260,   370,     4,   371,
      -1,     5,   275,   370,     4,     4,   371,    -1,     5,   270,
       4,    -1,     5,   271,     4,    -1,     5,   302,     5,   371,
      -1,     5,    14,     5,    -1,     5,    15,     5,    -1,     5,
      61,     5,    -1,     5,   190,   371,    -1,     5,   191,   371,
      -1,     5,   260,   370,     4,   371,    -1,     5,   270,     4,
      -1,     5,   271,     4,    -1,     5,   302,     5,   371,    -1,
     157,   162,   475,    -1,   162,   476,    -1,   157,   477,    -1,
     478,    -1,   157,   337,   479,    -1,     5,    14,     5,   372,
      -1,     5,    15,     5,   372,    -1,     5,    61,     5,   372,
      -1,     5,   190,   371,   372,    -1,     5,   191,   371,   372,
      -1,     5,   260,   370,     4,   371,   372,    -1,     5,   270,
       4,   372,    -1,     5,   271,     4,   372,    -1,     5,   302,
       5,   371,   372,    -1,     5,    14,     5,   372,    -1,     5,
      15,     5,   372,    -1,     5,    61,     5,   372,    -1,     5,
     190,   371,   372,    -1,     5,     5,   268,   371,   372,    -1,
       5,   191,   371,   372,    -1,     5,   260,   370,     4,   371,
     372,    -1,     5,   275,   370,     4,     4,   371,   372,    -1,
       5,   270,     4,   372,    -1,     5,   271,     4,   372,    -1,
       5,   302,     5,   371,   372,    -1,   363,     5,    14,     5,
     372,    -1,   363,     5,    15,     5,   372,    -1,   363,     5,
      61,     5,   372,    -1,   363,     5,   190,   371,   372,    -1,
     363,     5,   191,   371,   372,    -1,   363,     5,   260,   370,
       4,   371,   372,    -1,   363,     5,   270,     4,   372,    -1,
     363,     5,   271,     4,   372,    -1,   363,     5,   302,     5,
     371,   372,    -1,   363,     5,    14,     5,   372,    -1,   363,
       5,    15,     5,   372,    -1,   363,     5,    61,     5,   372,
      -1,   363,     5,   190,   371,   372,    -1,   363,     5,     5,
     268,   371,   372,    -1,   363,     5,   191,   371,   372,    -1,
     363,     5,   260,   370,     4,   371,   372,    -1,   363,     5,
     275,   370,     4,     4,   371,   372,    -1,   363,     5,   270,
       4,   372,    -1,   363,     5,   271,     4,   372,    -1,   363,
       5,   302,     5,   371,   372,    -1,     5,    14,     5,    -1,
       5,    15,     5,    -1,     5,    61,     5,    -1,     5,   190,
     371,    -1,     5,   191,   371,    -1,     5,   260,   370,     4,
     371,    -1,     5,   270,     4,    -1,     5,   271,     4,    -1,
       5,   302,     5,   371,    -1,     5,    14,     5,    -1,     5,
      15,     5,    -1,     5,    61,     5,    -1,     5,   190,   371,
      -1,     5,     5,   268,   371,    -1,     5,   191,   371,    -1,
       5,   260,   370,     4,   371,    -1,     5,   275,   370,     4,
       4,   371,    -1,     5,   270,     4,    -1,     5,   271,     4,
      -1,     5,   302,     5,   371,    -1,     5,    14,     5,    -1,
       5,    15,     5,    -1,     5,    61,     5,    -1,     5,   190,
     371,    -1,     5,   191,   371,    -1,     5,   260,   370,     4,
     371,    -1,     5,   270,     4,    -1,     5,   271,     4,    -1,
       5,   302,     5,   371,    -1,     5,    14,     5,   372,    -1,
       5,    61,     5,   372,    -1,     5,   190,   372,    -1,     5,
     260,   370,     4,   372,    -1,     5,   270,     4,   372,    -1,
       5,   302,     5,   372,    -1,     5,     5,    -1,   267,     5,
       5,    -1,    93,     4,     4,     4,     4,     4,    -1,   187,
       4,     4,     4,     4,     4,    -1,   111,    -1,   229,    -1,
     354,    -1,   139,   354,    -1,    88,   354,    -1,    66,     5,
      -1,     5,     4,     4,    -1,   299,   352,   352,    -1,   345,
     352,    -1,     5,     5,   363,   367,     5,     5,   363,   367,
     352,   363,   369,     5,    -1,    60,   491,    -1,    66,     5,
      -1,    80,    -1,    73,   496,     5,    -1,    73,   496,   302,
       5,    -1,    75,    99,    -1,    -1,    83,   489,   492,    -1,
      89,    -1,    99,    -1,    99,    17,    -1,   105,   495,    -1,
     114,     4,    -1,   130,     5,    -1,   150,    17,    -1,   150,
     210,   352,   352,    -1,   150,   291,   352,   352,    -1,     4,
      20,   375,   354,    -1,     4,    21,   357,    -1,     4,    21,
     357,   364,    -1,     4,    21,   357,   362,   367,    -1,     4,
      22,   237,   352,   352,     4,   364,    -1,     4,    22,   237,
     352,   352,     4,   362,   369,    -1,     4,    22,   237,     5,
     362,   369,    -1,     4,    48,   121,   354,    -1,     4,    49,
     237,   352,   352,   352,     4,   364,    -1,     4,    49,   237,
     352,   352,   352,     4,   362,   369,    -1,     4,    49,   237,
       5,   362,   369,    -1,     4,    48,   237,   352,   352,   364,
      -1,     4,    48,   237,   352,   352,   362,   369,    -1,     4,
      52,   105,   357,   357,     4,   352,   352,   352,     4,    -1,
       4,    52,   105,   357,   357,     4,   352,   352,   352,     4,
     364,    -1,     4,    52,   105,   357,   357,     4,   352,   352,
     352,     4,   362,   367,    -1,     4,    52,   105,     5,     5,
     362,   367,   362,   369,    -1,     4,    55,   490,     5,     5,
      -1,     4,    62,   121,   354,    -1,     4,    62,   237,   352,
     364,    -1,     4,    62,   237,   352,   362,   369,    -1,     4,
      66,     5,    -1,     4,    74,    27,   354,   354,    -1,     4,
      74,   167,     5,     5,    -1,     4,    74,   237,   352,   364,
      -1,     4,    74,   237,   352,   362,   369,    -1,     4,    74,
     280,   362,   367,    -1,     4,    75,   138,   354,    -1,     4,
      82,   105,   357,   357,     4,   352,   352,     4,    -1,     4,
      82,   105,   357,   357,     4,   352,   352,     4,   364,    -1,
       4,    82,   105,   357,   357,     4,   352,   352,     4,   362,
     367,    -1,     4,    82,   105,     5,     5,   362,   367,   362,
     369,    -1,     4,    83,    22,   237,   352,   352,    -1,     4,
      83,    49,   237,   352,   352,    -1,     4,    83,    52,    21,
     352,   352,    -1,     4,    83,    52,   237,   352,   352,    -1,
       4,    83,   110,   237,   352,   352,    -1,     4,    83,   113,
      21,   352,   352,    -1,     4,    83,   113,   237,   352,   352,
      -1,     4,    83,    82,    21,   352,   352,    -1,     4,    83,
      82,   237,   352,   352,    -1,     4,    83,   225,   306,     4,
     352,   352,    -1,     4,    83,   255,   306,     4,   352,   352,
      -1,     4,    99,    -1,     4,    99,    22,     4,    -1,     4,
      99,    49,     4,    -1,     4,    99,    52,     4,    -1,     4,
      99,   110,     4,    -1,     4,    99,    55,   490,     5,    -1,
       4,    99,   113,     4,    -1,     4,    99,    82,     4,    -1,
       4,    99,   225,   306,     4,    -1,     4,    99,   255,   306,
       4,    -1,     4,    99,   282,    -1,     4,    99,   282,     5,
      -1,     4,    99,   282,     4,    -1,     4,   105,    40,     4,
      -1,     4,   109,   121,   354,    -1,     4,   109,   237,   352,
     352,   364,    -1,     4,   109,   237,   352,   352,   362,   369,
      -1,     4,   110,   237,   352,   352,   352,     4,   364,    -1,
       4,   110,   237,   352,   352,   352,     4,   362,   369,    -1,
       4,   110,   237,     5,   362,   369,    -1,     4,   113,   105,
     357,   357,     4,   352,   352,   352,     4,    -1,     4,   113,
     105,   357,   357,     4,   352,   352,   352,     4,   364,    -1,
       4,   113,   105,   357,   357,     4,   352,   352,   352,     4,
     362,   367,    -1,     4,   113,   105,     5,     5,   362,   367,
     362,   369,    -1,     4,   130,     5,    -1,     4,   150,    -1,
       4,   150,   210,    -1,     4,   172,    27,   354,   354,    -1,
       4,   172,   223,   364,   361,   361,    -1,     4,   172,   223,
     362,   367,   361,   361,    -1,     4,   195,   352,   352,    -1,
       4,   195,   132,    -1,     4,   195,    36,    -1,     4,   195,
     290,   364,   352,   352,    -1,     4,   195,   290,   362,   367,
     361,    -1,     4,   225,   241,   352,   352,   364,    -1,     4,
     225,   241,   352,   352,   362,   369,    -1,     4,   255,   241,
     352,   352,   364,    -1,     4,   255,   241,   352,   352,   362,
     369,    -1,     4,   223,   259,   373,    -1,     4,   223,   266,
       4,    -1,     4,   225,   121,   354,    -1,     4,   231,   364,
     361,   361,   352,    -1,     4,   231,   362,   367,   361,   361,
     352,   362,   369,    -1,     4,   232,   509,   354,    -1,     4,
     245,    40,    -1,     4,   246,   131,     5,    -1,     4,   246,
     223,   364,   361,   361,    -1,     4,   246,   223,   362,   367,
     361,   361,    -1,     4,   246,   280,   362,   367,   362,   369,
      -1,     4,   256,    -1,     4,   256,   210,    -1,     4,   282,
       5,    -1,     4,   284,     5,    -1,     4,   284,   245,   354,
      -1,     4,   296,    -1,     4,   298,    -1,     4,   304,    27,
     354,    -1,     4,   304,   223,   364,   361,   352,   357,    -1,
       4,   304,   223,   362,   367,   361,   362,   369,   352,   357,
      -1,     4,   338,     4,    -1,   165,    -1,   165,   352,   352,
      -1,   174,   504,    -1,   175,   505,    -1,   195,   506,    -1,
     230,   354,    -1,   232,   509,   354,    -1,   232,   509,   354,
     352,   352,    -1,   245,    40,   352,   352,    -1,   245,   194,
     352,   352,     4,    -1,   245,   111,    -1,   250,     5,   496,
     362,   367,   368,   354,    -1,   250,   283,     5,    -1,   256,
     513,    -1,   263,   514,    -1,     5,    66,     5,    -1,     5,
      80,    -1,     5,    99,    -1,     5,    89,    -1,     5,   130,
       5,    -1,     5,   150,    -1,     5,   150,   210,    -1,     5,
     195,   352,   352,    -1,     5,   195,   132,    -1,     5,   195,
      36,    -1,     5,   195,   290,   364,   361,    -1,     5,   195,
     290,   362,   367,   361,    -1,     5,   232,   509,   354,    -1,
       5,   256,    -1,     5,   256,   210,    -1,     5,   296,    -1,
       5,   298,    -1,   282,   105,     5,     5,    -1,   282,    99,
       5,    -1,   282,    99,    17,    -1,   282,     5,    -1,   282,
     299,     5,    -1,   216,    -1,   216,   362,    -1,   295,    -1,
     296,    17,    -1,   298,    17,    -1,   338,     4,    -1,   256,
      -1,   298,    -1,   150,    -1,   296,    -1,    40,   195,    -1,
     195,    -1,   111,   195,    -1,    40,   105,    -1,   105,    -1,
     111,   105,    -1,    40,   245,    -1,   245,    -1,   111,   245,
      -1,    99,    -1,   284,    -1,    66,    -1,   338,    -1,   232,
      -1,   130,    -1,   165,    -1,   299,    -1,    -1,     4,    -1,
      30,   354,    -1,   237,   352,    -1,   161,     4,    -1,   211,
       4,   352,    -1,    62,   352,   352,   352,   510,    -1,   109,
     352,   352,   352,   352,   356,   510,    -1,    48,   352,   352,
     352,   352,   356,   510,    -1,   225,   352,   352,   352,   352,
     510,    -1,   255,   352,   352,   352,   352,   510,    -1,   172,
     352,   352,   352,   352,   510,    -1,   304,   352,   352,   352,
     352,   510,    -1,   284,   352,   352,   356,   510,    -1,    62,
     223,   352,   352,   374,   510,    -1,    48,   223,   352,   352,
     374,   510,    -1,   102,   223,   352,   352,   374,   510,    -1,
      85,   223,   352,   352,   374,   510,    -1,   348,   223,   352,
     352,   374,   510,    -1,    27,   223,   352,   352,   374,   510,
      -1,    51,   223,   352,   352,   374,   510,    -1,   246,   352,
     352,   352,   352,   362,   367,   362,   369,     5,   510,    -1,
      74,   352,   352,   352,   362,   367,   510,    -1,   231,   352,
     352,   352,   352,   352,   510,    -1,    22,   352,   352,   352,
     352,     4,   510,    -1,   110,   352,   352,   352,   352,   352,
       4,   356,   510,    -1,    49,   352,   352,   352,   352,   352,
       4,   356,   510,    -1,    82,   352,   352,   357,   357,     4,
     352,   352,     4,   510,    -1,   113,   352,   352,   357,   357,
       4,   352,   352,   352,     4,   356,   510,    -1,    52,   352,
     352,   357,   357,     4,   352,   352,   352,     4,   356,   510,
      -1,    75,   510,    -1,   283,   493,    -1,     5,   352,   352,
      -1,   302,     5,   352,   352,    -1,   352,   352,   302,     5,
      -1,     5,   362,   367,   361,    -1,     4,     4,    -1,    40,
     352,   352,     4,    -1,   194,   352,   352,     4,    -1,   111,
      -1,   104,    -1,   340,    -1,    63,    -1,   249,    -1,   248,
      -1,   234,    -1,   341,    -1,    60,   498,    -1,    66,    -1,
     130,    -1,   114,    -1,   143,   352,   352,    -1,   155,   352,
     352,    -1,     4,    20,    82,   362,    -1,     4,    20,   152,
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
     509,    -1,     4,   246,   131,    -1,     4,   246,   168,   362,
     369,    -1,     4,   246,   223,   362,   367,   368,    -1,     4,
     246,   280,    -1,     4,   256,    -1,     4,   282,    -1,     4,
     282,     4,    -1,     4,   284,    -1,     4,   284,   245,    -1,
       4,   294,    -1,     4,   304,    27,    -1,     4,   304,   168,
     362,   369,    -1,     4,   304,   223,   362,   367,   368,    -1,
       4,   338,    -1,   150,   499,    -1,   150,   206,    -1,   206,
      -1,   225,   255,   352,   352,    -1,   255,   255,   352,   352,
      -1,   230,    -1,   232,   509,    -1,   256,   500,    -1,   256,
     206,    -1,   263,   501,    -1,     5,    66,    -1,     5,   130,
      -1,     5,   155,    -1,     5,   232,   509,    -1,     5,   282,
      -1,     5,   282,   206,    -1,   282,    17,    -1,   282,    98,
     196,    -1,   338,    -1,    30,    -1,   237,    -1,   161,    -1,
     211,    -1,    -1,   352,   352,    -1,    -1,   352,   352,    -1,
      -1,   284,    -1,    -1,    -1,   224,    -1,   238,    -1,   300,
      -1,    57,    -1,   496,   362,   367,   368,   354,   511,   517,
      -1,   256,   496,   362,   367,   368,   354,   511,   517,    -1,
     496,     5,    -1,   496,     5,   362,   367,    -1,   496,     4,
      -1,   496,     4,   362,   367,    -1,   124,     5,     5,   494,
       4,     5,    -1,   352,   352,    -1,   132,    -1,    36,    -1,
      40,   352,   352,    -1,   194,   352,   352,    -1,   111,    -1,
     290,   364,   361,    -1,   290,   362,   367,   361,    -1,   507,
     508,    -1,   508,    -1,   509,   349,   354,    -1,    66,   349,
       5,    -1,    92,   349,     4,     4,    -1,   338,   349,     4,
      -1,   130,   349,     5,    -1,   284,   349,     5,    -1,   520,
      -1,   521,    -1,   203,    -1,   256,    -1,   150,    -1,    91,
      -1,   126,    -1,   105,    -1,   195,    -1,   245,    -1,    99,
      -1,   158,    -1,   272,    -1,   502,    -1,   502,   507,    -1,
      -1,    -1,   512,   515,    -1,    17,    -1,   210,   352,   352,
      -1,   291,    -1,   291,   352,   352,    -1,   354,    -1,   284,
     354,    -1,   515,   516,    -1,   516,    -1,   509,   349,   354,
      -1,    -1,    -1,   518,   519,    -1,   519,   520,    -1,   520,
      -1,   282,   349,     5,    -1,    55,   349,   490,     5,     5,
      -1,    64,    -1,    66,     5,    -1,   182,     4,    -1,   289,
     352,    -1,   348,    -1,   346,    -1,   341,    -1,   203,    -1,
     352,   352,   352,   352,    -1,   352,   352,    -1,   364,   352,
     352,    -1,   362,   367,   361,    -1,   290,   525,    -1,    39,
     352,   352,    -1,   194,   526,    -1,   230,   354,    -1,   352,
     352,    -1,   364,   352,   352,    -1,   362,   367,   361,    -1,
      40,   352,   352,    -1,   352,   352,    -1,   111,   352,   352,
      -1,   354,    -1,   309,   363,   367,    -1,     5,     4,     4,
      -1,   299,    -1,    70,   529,    -1,   169,     4,    -1,   242,
       4,    -1,   251,   352,    -1,    54,    -1,   140,    -1,   243,
      -1,    90,    -1,   150,   531,    -1,   256,   532,    -1,    40,
     352,   352,    -1,   194,   352,   352,    -1,   111,    -1,   261,
     111,    -1,    40,   352,   352,    -1,   194,   352,   352,    -1,
     111,    -1,   261,   111,    -1,   189,    -1,    13,    -1,   203,
      -1,    34,    -1,   107,    -1,    61,     5,    -1,   280,   362,
      -1,   303,     4,     4,     4,    -1,   352,    -1,   352,    97,
      -1,   194,   537,    -1,   290,   352,    -1,   290,   352,    97,
      -1,    40,    -1,   352,    -1,   111,    -1,    26,   539,    -1,
     124,   541,    -1,   205,   551,    -1,   112,   552,    -1,   218,
       5,    -1,   120,     5,   377,    -1,    61,     5,   377,    -1,
     270,     4,   377,    -1,   243,    87,   540,    -1,   120,     5,
     377,    -1,    61,     5,   377,    -1,   270,     4,   377,    -1,
     542,    -1,   157,   542,    -1,   281,   543,    -1,   267,   544,
      -1,   117,    87,   545,    -1,   192,   546,    -1,   243,   157,
     548,    -1,   243,    87,   549,    -1,   240,   550,    -1,   120,
       5,    -1,    61,     5,    -1,   270,     4,    -1,   120,     5,
      -1,    61,     5,    -1,   270,     4,    -1,   120,     5,    -1,
      61,     5,    -1,   270,     4,    -1,   120,     5,    -1,    61,
       5,    -1,   270,     4,    -1,   157,   547,    -1,   120,     5,
       4,    -1,    61,     5,     4,    -1,   270,     4,     4,    -1,
     120,     5,    -1,    61,     5,    -1,   270,     4,    -1,   120,
       5,    -1,    61,     5,    -1,   270,     4,    -1,   120,     5,
      -1,    61,     5,    -1,   270,     4,    -1,   120,     5,    -1,
      61,     5,    -1,   270,     4,    -1,   120,     5,   377,    -1,
      61,     5,   377,    -1,   270,     4,   377,    -1,   120,     5,
       5,   377,    -1,   554,     4,     4,   352,   352,   357,    -1,
      99,    -1,    50,    -1,   292,    -1,   136,    -1,   108,    -1,
      -1,     4,   352,   352,   352,   352,    -1,   204,    -1,   204,
       4,   352,   352,   352,   352,    -1,   124,   267,   556,    -1,
       4,    -1,   352,   362,    -1,     4,     4,    -1,     4,   352,
     362,    -1,   352,   352,    -1,   290,   352,   352,    -1,   363,
     367,   368,    -1,    16,   561,    -1,   241,     4,    -1,   239,
     560,    -1,    23,   559,    -1,     4,     4,    -1,     4,     5,
      -1,   284,     4,     5,    -1,     4,     4,    -1,     4,     5,
      -1,   284,     4,     5,    -1,     4,    -1,     4,   363,   367,
      -1,     4,     6,   363,   367,    -1,   229,    -1,   352,   352,
      -1,   352,   352,    12,   352,   352,    -1,   352,   352,    12,
     364,   352,   352,    -1,   352,   352,    12,   362,   367,   361,
      -1,   290,   564,    -1,   123,    -1,   123,   352,    -1,   352,
     352,    -1,   352,   352,    12,   352,   352,    -1,   352,   352,
      12,   364,   352,   352,    -1,   352,   352,    12,   362,   367,
     361,    -1
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
     809,   810,   811,   814,   815,   816,   817,   818,   819,   820,
     826,   827,   830,   831,   832,   833,   834,   837,   838,   839,
     842,   843,   848,   853,   860,   862,   864,   865,   866,   869,
     871,   874,   875,   878,   879,   880,   881,   882,   885,   887,
     889,   894,   899,   902,   903,   906,   907,   908,   915,   916,
     917,   918,   921,   922,   925,   926,   929,   930,   933,   935,
     939,   940,   943,   945,   946,   947,   948,   951,   952,   953,
     954,   955,   958,   960,   962,   963,   965,   967,   969,   971,
     975,   978,   979,   980,   983,   986,   987,   988,   989,   990,
     991,   992,   993,   994,   995,   996,   997,   998,   999,  1000,
    1001,  1002,  1003,  1004,  1006,  1007,  1008,  1009,  1010,  1011,
    1012,  1013,  1014,  1015,  1017,  1018,  1019,  1020,  1021,  1022,
    1023,  1025,  1027,  1028,  1031,  1032,  1033,  1034,  1035,  1036,
    1037,  1038,  1041,  1042,  1043,  1046,  1049,  1050,  1052,  1054,
    1055,  1056,  1057,  1058,  1059,  1066,  1067,  1070,  1071,  1072,
    1075,  1076,  1079,  1082,  1083,  1085,  1089,  1090,  1091,  1094,
    1098,  1100,  1101,  1102,  1103,  1104,  1105,  1106,  1107,  1108,
    1111,  1112,  1113,  1116,  1117,  1120,  1122,  1128,  1132,  1134,
    1136,  1139,  1140,  1142,  1145,  1148,  1149,  1153,  1155,  1158,
    1163,  1164,  1165,  1169,  1170,  1171,  1174,  1175,  1176,  1179,
    1180,  1182,  1183,  1184,  1185,  1186,  1187,  1188,  1189,  1190,
    1191,  1193,  1194,  1197,  1198,  1201,  1202,  1203,  1204,  1207,
    1208,  1211,  1213,  1216,  1220,  1221,  1222,  1223,  1226,  1227,
    1228,  1231,  1232,  1233,  1236,  1239,  1240,  1241,  1244,  1245,
    1246,  1247,  1248,  1249,  1252,  1253,  1254,  1255,  1256,  1257,
    1258,  1261,  1262,  1265,  1266,  1269,  1270,  1273,  1274,  1277,
    1278,  1279,  1282,  1283,  1286,  1287,  1290,  1293,  1301,  1302,
    1305,  1306,  1307,  1308,  1309,  1310,  1311,  1312,  1313,  1314,
    1315,  1316,  1317,  1318,  1319,  1320,  1321,  1324,  1327,  1328,
    1331,  1332,  1333,  1334,  1337,  1338,  1339,  1340,  1343,  1344,
    1345,  1346,  1347,  1348,  1351,  1352,  1353,  1354,  1355,  1356,
    1358,  1359,  1364,  1365,  1368,  1370,  1372,  1375,  1376,  1377,
    1378,  1379,  1380,  1383,  1385,  1387,  1389,  1390,  1392,  1394,
    1396,  1398,  1400,  1403,  1404,  1405,  1406,  1407,  1408,  1410,
    1411,  1412,  1415,  1418,  1420,  1422,  1424,  1426,  1428,  1430,
    1432,  1435,  1437,  1439,  1441,  1442,  1443,  1444,  1445,  1448,
    1449,  1450,  1451,  1452,  1453,  1454,  1456,  1458,  1459,  1460,
    1463,  1464,  1465,  1466,  1467,  1468,  1470,  1471,  1472,  1475,
    1476,  1477,  1478,  1479,  1482,  1485,  1488,  1491,  1494,  1497,
    1500,  1503,  1506,  1511,  1514,  1517,  1520,  1523,  1526,  1529,
    1532,  1535,  1538,  1541,  1546,  1549,  1552,  1555,  1558,  1561,
    1564,  1567,  1570,  1575,  1578,  1581,  1584,  1587,  1590,  1593,
    1596,  1599,  1602,  1605,  1610,  1612,  1613,  1614,  1615,  1616,
    1618,  1619,  1620,  1622,  1623,  1624,  1625,  1626,  1627,  1628,
    1630,  1632,  1633,  1634,  1637,  1638,  1639,  1640,  1641,  1642,
    1644,  1645,  1646,  1649,  1651,  1653,  1654,  1656,  1658,  1662,
    1663,  1666,  1667,  1668,  1671,  1678,  1679,  1680,  1681,  1682,
    1683,  1684,  1687,  1695,  1696,  1697,  1698,  1700,  1702,  1703,
    1703,  1704,  1705,  1706,  1707,  1708,  1709,  1711,  1712,  1714,
    1717,  1720,  1721,  1722,  1725,  1727,  1730,  1733,  1734,  1737,
    1741,  1744,  1746,  1749,  1752,  1756,  1761,  1766,  1768,  1769,
    1771,  1773,  1774,  1776,  1778,  1780,  1782,  1784,  1785,  1787,
    1789,  1793,  1798,  1800,  1802,  1804,  1806,  1808,  1810,  1812,
    1814,  1816,  1818,  1821,  1822,  1824,  1826,  1827,  1829,  1831,
    1832,  1833,  1835,  1837,  1838,  1839,  1841,  1842,  1843,  1845,
    1848,  1852,  1856,  1859,  1862,  1866,  1871,  1877,  1878,  1879,
    1881,  1882,  1884,  1888,  1890,  1891,  1892,  1894,  1897,  1899,
    1902,  1904,  1907,  1909,  1911,  1912,  1915,  1920,  1923,  1924,
    1925,  1928,  1931,  1935,  1936,  1938,  1939,  1940,  1942,  1943,
    1945,  1946,  1948,  1953,  1955,  1956,  1958,  1959,  1960,  1961,
    1962,  1963,  1965,  1967,  1969,  1970,  1972,  1973,  1975,  1977,
    1978,  1979,  1980,  1981,  1982,  1983,  1984,  1985,  1986,  1987,
    1989,  1991,  1993,  1994,  1995,  1996,  1998,  1999,  2000,  2001,
    2002,  2004,  2005,  2006,  2007,  2008,  2009,  2012,  2013,  2014,
    2015,  2016,  2017,  2018,  2019,  2020,  2021,  2022,  2023,  2024,
    2025,  2026,  2027,  2028,  2029,  2030,  2031,  2032,  2035,  2036,
    2037,  2038,  2039,  2040,  2048,  2055,  2064,  2073,  2080,  2087,
    2095,  2103,  2110,  2115,  2120,  2125,  2130,  2135,  2140,  2146,
    2156,  2166,  2176,  2183,  2193,  2203,  2212,  2224,  2237,  2242,
    2245,  2247,  2249,  2254,  2258,  2261,  2263,  2265,  2268,  2269,
    2270,  2271,  2272,  2273,  2274,  2277,  2278,  2279,  2280,  2281,
    2282,  2284,  2286,  2288,  2290,  2292,  2294,  2297,  2298,  2299,
    2300,  2302,  2305,  2306,  2308,  2310,  2311,  2312,  2314,  2317,
    2320,  2321,  2323,  2324,  2325,  2326,  2328,  2329,  2330,  2331,
    2332,  2334,  2336,  2337,  2339,  2342,  2343,  2344,  2346,  2348,
    2349,  2350,  2351,  2353,  2356,  2360,  2361,  2362,  2363,  2366,
    2369,  2371,  2372,  2373,  2374,  2376,  2379,  2380,  2382,  2383,
    2384,  2385,  2386,  2388,  2389,  2391,  2394,  2395,  2396,  2397,
    2398,  2400,  2402,  2403,  2404,  2405,  2407,  2409,  2410,  2411,
    2412,  2413,  2414,  2416,  2417,  2419,  2422,  2423,  2424,  2425,
    2428,  2429,  2432,  2433,  2436,  2437,  2440,  2453,  2454,  2458,
    2459,  2463,  2466,  2471,  2478,  2480,  2483,  2485,  2488,  2492,
    2493,  2494,  2495,  2496,  2497,  2498,  2500,  2504,  2505,  2508,
    2509,  2510,  2511,  2512,  2513,  2514,  2515,  2518,  2519,  2520,
    2521,  2522,  2523,  2524,  2525,  2526,  2527,  2528,  2531,  2532,
    2535,  2536,  2536,  2539,  2540,  2541,  2542,  2545,  2546,  2549,
    2550,  2553,  2557,  2558,  2558,  2561,  2562,  2565,  2568,  2572,
    2573,  2574,  2575,  2578,  2579,  2580,  2581,  2584,  2586,  2587,
    2592,  2594,  2595,  2596,  2597,  2600,  2601,  2606,  2610,  2611,
    2612,  2615,  2616,  2621,  2622,  2625,  2627,  2628,  2629,  2634,
    2635,  2636,  2637,  2640,  2641,  2644,  2646,  2648,  2649,  2652,
    2654,  2655,  2656,  2659,  2660,  2663,  2664,  2665,  2668,  2669,
    2670,  2673,  2674,  2675,  2676,  2677,  2680,  2681,  2682,  2685,
    2686,  2687,  2688,  2689,  2692,  2694,  2696,  2698,  2701,  2703,
    2705,  2708,  2709,  2710,  2711,  2712,  2713,  2714,  2715,  2716,
    2719,  2720,  2721,  2724,  2725,  2726,  2729,  2730,  2731,  2734,
    2735,  2736,  2739,  2740,  2741,  2742,  2745,  2746,  2747,  2750,
    2751,  2752,  2755,  2756,  2757,  2760,  2761,  2762,  2765,  2767,
    2769,  2773,  2777,  2779,  2782,  2783,  2784,  2785,  2788,  2789,
    2791,  2792,  2794,  2797,  2798,  2799,  2800,  2803,  2804,  2807,
    2809,  2810,  2811,  2812,  2815,  2816,  2817,  2820,  2821,  2822,
    2825,  2826,  2831,  2835,  2842,  2843,  2845,  2850,  2852,  2855,
    2856,  2857,  2858,  2860,  2865
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
  "BUFFER_", "BW_", "CALLBACK_", "CANVAS_", "CATALOG_", "CELESTIAL_",
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
     389,   389,   389,   390,   390,   390,   390,   390,   390,   390,
     391,   391,   392,   392,   392,   392,   392,   393,   393,   393,
     394,   394,   394,   394,   395,   395,   395,   395,   395,   396,
     396,   397,   397,   398,   398,   398,   398,   398,   399,   399,
     399,   399,   399,   400,   400,   401,   401,   401,   402,   402,
     402,   402,   403,   403,   404,   404,   405,   405,   406,   406,
     407,   407,   407,   407,   407,   407,   407,   408,   408,   408,
     408,   408,   409,   409,   409,   409,   409,   409,   409,   409,
     410,   411,   411,   411,   412,   413,   413,   413,   413,   413,
     413,   413,   413,   413,   413,   413,   413,   413,   413,   413,
     413,   413,   413,   413,   413,   413,   413,   413,   413,   413,
     413,   413,   413,   413,   413,   413,   413,   413,   413,   413,
     413,   413,   413,   413,   414,   414,   414,   414,   414,   414,
     414,   414,   415,   415,   415,   416,   417,   417,   417,   417,
     417,   417,   417,   417,   417,   418,   418,   419,   419,   419,
     420,   420,   421,   422,   422,   422,   423,   423,   423,   424,
     425,   425,   425,   425,   425,   425,   425,   425,   425,   425,
     426,   426,   426,   427,   427,   428,   428,   428,   429,   429,
     429,   430,   430,   430,   431,   432,   432,   433,   433,   433,
     434,   434,   434,   435,   435,   435,   436,   436,   436,   437,
     437,   437,   437,   437,   437,   437,   437,   437,   437,   437,
     437,   437,   437,   438,   438,   439,   439,   439,   439,   440,
     440,   441,   441,   441,   442,   442,   442,   442,   443,   443,
     443,   444,   444,   444,   445,   446,   446,   446,   447,   447,
     447,   447,   447,   447,   448,   448,   448,   448,   448,   448,
     448,   449,   449,   450,   450,   451,   451,   452,   452,   453,
     453,   453,   454,   454,   455,   455,   456,   456,   457,   457,
     458,   458,   458,   458,   458,   458,   458,   458,   458,   458,
     458,   458,   458,   458,   458,   458,   458,   459,   460,   460,
     461,   461,   461,   461,   462,   462,   462,   462,   463,   463,
     463,   463,   463,   463,   464,   464,   464,   464,   464,   464,
     464,   464,   465,   465,   466,   466,   466,   467,   467,   467,
     467,   467,   467,   468,   468,   468,   468,   468,   468,   468,
     468,   468,   468,   469,   469,   469,   469,   469,   469,   469,
     469,   469,   470,   471,   471,   471,   471,   471,   471,   471,
     471,   471,   471,   471,   471,   471,   471,   471,   471,   472,
     472,   472,   472,   472,   472,   472,   472,   472,   472,   472,
     473,   473,   473,   473,   473,   473,   473,   473,   473,   474,
     474,   474,   474,   474,   475,   475,   475,   475,   475,   475,
     475,   475,   475,   476,   476,   476,   476,   476,   476,   476,
     476,   476,   476,   476,   477,   477,   477,   477,   477,   477,
     477,   477,   477,   478,   478,   478,   478,   478,   478,   478,
     478,   478,   478,   478,   479,   479,   479,   479,   479,   479,
     479,   479,   479,   480,   480,   480,   480,   480,   480,   480,
     480,   480,   480,   480,   481,   481,   481,   481,   481,   481,
     481,   481,   481,   482,   482,   482,   482,   482,   482,   483,
     483,   484,   484,   484,   485,   486,   486,   486,   486,   486,
     486,   486,   487,   488,   488,   488,   488,   488,   488,   489,
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
     497,   497,   497,   497,   497,   497,   498,   498,   498,   498,
     499,   499,   500,   500,   501,   501,   502,   503,   503,   503,
     503,   503,   504,   504,   505,   505,   505,   505,   505,   506,
     506,   506,   506,   506,   506,   506,   506,   507,   507,   508,
     508,   508,   508,   508,   508,   508,   508,   509,   509,   509,
     509,   509,   509,   509,   509,   509,   509,   509,   510,   510,
     511,   512,   511,   513,   513,   513,   513,   514,   514,   515,
     515,   516,   517,   518,   517,   519,   519,   520,   521,   522,
     522,   522,   522,   523,   523,   523,   523,   524,   524,   524,
     524,   524,   524,   524,   524,   525,   525,   525,   526,   526,
     526,   527,   527,   527,   527,   528,   528,   528,   528,   529,
     529,   529,   529,   530,   530,   531,   531,   531,   531,   532,
     532,   532,   532,   533,   533,   534,   534,   534,   535,   535,
     535,   536,   536,   536,   536,   536,   537,   537,   537,   538,
     538,   538,   538,   538,   539,   539,   539,   539,   540,   540,
     540,   541,   541,   541,   541,   541,   541,   541,   541,   541,
     542,   542,   542,   543,   543,   543,   544,   544,   544,   545,
     545,   545,   546,   546,   546,   546,   547,   547,   547,   548,
     548,   548,   549,   549,   549,   550,   550,   550,   551,   551,
     551,   552,   553,   553,   554,   554,   554,   554,   555,   555,
     555,   555,   555,   556,   556,   556,   556,   557,   557,   558,
     558,   558,   558,   558,   559,   559,   559,   560,   560,   560,
     561,   561,   561,   562,   563,   563,   563,   563,   563,   564,
     564,   564,   564,   564,   564
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
       1,     1,     2,     2,     2,     2,     3,     3,     2,     2,
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
       1,     2,     1,     1,     1,     2,     2,     2,     0,     1,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     1,     2,     3,     1,     2,     2,     4,     6,
       1,    10,     1,     2,     3,     3,     2,     2,     2,     2,
       2,     2,     2,     4,     4,     4,     3,     3,     5,     4,
       4,     4,     3,     3,     3,     3,     2,     2,     4,     3,
       3,     3,     3,     4,     4,     4,     4,     5,     4,     6,
       7,     4,     4,     5,     2,     3,     3,     3,     2,     3,
       3,     3,     3,     4,     3,     5,     6,     3,     3,     4,
       3,     3,     3,     3,     3,     5,     3,     3,     4,     3,
       2,     2,     1,     3,     4,     4,     4,     4,     4,     6,
       4,     4,     5,     4,     4,     4,     4,     5,     4,     6,
       7,     4,     4,     5,     5,     5,     5,     5,     5,     7,
       5,     5,     6,     5,     5,     5,     5,     6,     5,     7,
       8,     5,     5,     6,     3,     3,     3,     3,     3,     5,
       3,     3,     4,     3,     3,     3,     3,     4,     3,     5,
       6,     3,     3,     4,     3,     3,     3,     3,     3,     5,
       3,     3,     4,     4,     4,     3,     5,     4,     4,     2,
       3,     6,     6,     1,     1,     1,     2,     2,     2,     3,
       3,     2,    12,     2,     2,     1,     3,     4,     2,     0,
       3,     1,     1,     2,     2,     2,     2,     2,     4,     4,
       4,     3,     4,     5,     7,     8,     6,     4,     8,     9,
       6,     6,     7,    10,    11,    12,     9,     5,     4,     5,
       6,     3,     5,     5,     5,     6,     5,     4,     9,    10,
      11,     9,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     7,     7,     2,     4,     4,     4,     4,     5,     4,
       4,     5,     5,     3,     4,     4,     4,     4,     6,     7,
       8,     9,     6,    10,    11,    12,     9,     3,     2,     3,
       5,     6,     7,     4,     3,     3,     6,     6,     6,     7,
       6,     7,     4,     4,     4,     6,     9,     4,     3,     4,
       6,     7,     7,     2,     3,     3,     3,     4,     2,     2,
       4,     7,    10,     3,     1,     3,     2,     2,     2,     2,
       3,     5,     4,     5,     2,     7,     3,     2,     2,     3,
       2,     2,     2,     3,     2,     3,     4,     3,     3,     5,
       6,     4,     2,     3,     2,     2,     4,     3,     3,     2,
       3,     1,     2,     1,     2,     2,     2,     1,     1,     1,
       1,     2,     1,     2,     2,     1,     2,     2,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     1,
       2,     2,     2,     3,     5,     7,     7,     6,     6,     6,
       6,     5,     6,     6,     6,     6,     6,     6,     6,    11,
       7,     7,     7,     9,     9,    10,    12,    12,     2,     2,
       3,     4,     4,     4,     2,     4,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     1,     1,     3,
       3,     4,     6,    10,     7,     7,     5,     2,     2,     3,
       4,     5,     3,     5,     5,     3,     4,     5,     5,     5,
       3,     5,     2,     3,     3,     5,     3,     3,     3,     4,
       5,     5,     3,     5,     5,     3,     4,     5,     5,     2,
       2,     3,     5,     6,     6,     3,     3,     3,     6,     5,
       5,     2,     3,     3,     5,     6,     3,     2,     2,     3,
       2,     3,     2,     3,     5,     6,     2,     2,     2,     1,
       4,     4,     1,     2,     2,     2,     2,     2,     2,     2,
       3,     2,     3,     2,     3,     1,     1,     1,     1,     1,
       0,     2,     0,     2,     0,     1,     0,     0,     1,     1,
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
       3,     4,     6,     1,     1,     1,     1,     1,     0,     5,
       1,     6,     3,     1,     2,     2,     3,     2,     3,     3,
       2,     2,     2,     2,     2,     2,     3,     2,     2,     3,
       1,     3,     4,     1,     2,     5,     6,     6,     2,     1,
       2,     2,     5,     6,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     6,     7,     0,     0,     0,     0,
       0,   300,     0,     0,     0,     0,     0,     0,     0,     0,
      21,     0,     0,     0,     0,     0,     0,     0,  1047,     0,
       0,     0,     0,     0,     0,     0,     0,  1047,    38,     0,
       0,     0,    43,     0,     0,     0,    47,  1228,    49,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     3,    54,    55,     0,   237,     5,     0,
       0,     0,     0,     0,     0,     8,     0,     0,   266,   268,
       0,     0,    10,   135,   137,   130,   131,   132,   136,   133,
     134,   271,    11,     0,   283,     0,     0,     0,    12,     0,
       0,     0,     0,   307,     0,    13,    69,    98,     0,   128,
      97,    77,    95,     0,    74,    76,    72,   129,    96,    73,
       0,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,    70,
      71,    75,   314,   143,    99,     0,    14,     0,    15,    16,
       0,     0,     0,     0,     0,     0,     0,    57,    56,     0,
       0,     0,     0,     2,     0,    17,     0,     0,     0,   376,
     390,     0,   396,     0,     0,     0,     0,     0,     0,     0,
     339,     0,   468,     0,     0,     0,     0,     0,  1047,     0,
     347,     0,   351,     0,     0,     0,   355,     0,   357,     0,
     359,     0,     0,   499,   363,    18,     0,   505,    19,   510,
       0,   528,   513,   514,   515,   516,   530,   518,   519,   523,
     520,     0,   522,   524,     0,     0,    20,    22,     0,   545,
       0,     0,     0,   550,     0,    23,     0,     0,     0,     0,
       0,     0,     0,    25,   704,    26,     0,     0,     0,     0,
       0,     0,   705,    27,     0,    28,  1051,  1048,  1049,  1050,
       0,  1109,     0,     0,     0,    30,     0,  1116,  1115,  1114,
    1113,    32,     0,     0,     0,     0,     0,   143,     0,    33,
       0,  1134,     0,  1131,    34,     0,     0,     0,     0,    37,
       0,    35,     0,     0,     0,     0,    40,     0,     0,  1161,
      41,     0,     0,     0,     0,     0,    42,  1224,  1223,  1227,
    1226,  1225,    44,     0,    45,     0,     0,     0,     0,     0,
     202,     0,     0,     0,    46,     0,     0,  1230,    48,     0,
       0,    50,     0,     0,     0,     0,   143,    51,  1253,    52,
       0,     0,    53,     1,     4,   220,     0,   212,     0,     0,
     214,     0,   222,   215,   219,   230,   231,   216,   232,     0,
     218,   240,   241,   239,   238,     0,     0,     0,   245,   253,
     256,   255,   254,   252,   244,   249,   250,   251,   243,     0,
       0,     0,     0,     0,     0,   248,     9,     0,     0,     0,
     267,     0,   272,     0,   282,   273,   284,   274,   285,   275,
     296,   276,     0,     0,   277,     0,    88,    89,    90,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     303,     0,     0,     0,     0,     0,   146,   152,   144,   145,
     147,   150,   153,   149,   148,   151,     0,     0,   320,    58,
      63,    64,    65,    66,    67,    59,    60,    61,    68,    62,
       0,   325,     0,   372,   368,   364,   365,   369,   366,   371,
     326,   375,   327,   288,   380,   384,   379,   291,   290,   289,
       0,     0,   328,   391,   330,     0,   329,     0,   398,   331,
     410,   402,   413,   403,   404,   406,     0,   408,   409,   143,
     332,     0,     0,   333,     0,     0,   143,   334,   423,   143,
     421,   335,   424,   337,   143,   425,   336,     0,   143,     0,
     338,   443,     0,   441,   459,     0,     0,     0,   447,   439,
       0,   449,   464,   452,   340,   469,   470,   341,     0,     0,
       0,   434,     0,   344,   430,   431,     0,   345,   346,     0,
     471,   472,   473,   349,   350,   474,   352,     0,   475,   476,
     477,   354,   483,   478,   479,   481,   356,   489,   491,   493,
     495,   488,   490,   497,   358,     0,     0,   502,     0,   362,
     143,   504,     0,   511,   529,   512,   531,   532,   533,   517,
     534,   536,   535,   537,   521,   525,   542,     0,     0,     0,
       0,   538,   526,     0,     0,   547,   546,     0,     0,     0,
       0,    24,     0,     0,   557,     0,   558,     0,     0,     0,
       0,     0,   559,     0,   703,     0,   560,     0,   561,     0,
       0,   562,     0,   708,   707,   706,     0,   711,     0,     0,
       0,   898,     0,     0,     0,   715,   719,   721,   722,     0,
       0,     0,     0,   834,     0,     0,     0,   871,     0,     0,
       0,     0,     0,     0,     0,   873,     0,     0,     0,    29,
    1110,  1111,  1112,    31,     0,     0,     0,     0,  1123,  1124,
       0,   143,     0,  1121,  1118,     0,     0,     0,   143,  1139,
    1142,  1140,  1141,  1135,  1136,  1137,  1138,     0,     0,     0,
      39,  1158,  1159,     0,  1166,  1168,  1167,  1163,  1164,  1162,
       0,     0,     0,     0,  1169,     0,  1172,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1170,  1181,     0,
       0,     0,  1171,  1173,     0,  1156,  1157,  1155,   200,     0,
     204,   196,     0,   206,   197,     0,   208,   198,  1154,  1153,
     199,   201,   203,     0,     0,   195,     0,     0,     0,     0,
    1237,  1250,  1240,     0,     0,  1243,     0,     0,  1242,  1241,
     154,  1259,     0,  1258,  1254,   221,   217,     0,   226,     0,
     223,     0,   242,   138,   141,   142,   140,   139,   257,   258,
     259,   247,   246,   261,   263,   262,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   143,     0,   304,    94,    91,
      92,    93,   143,   306,   305,     0,     0,     0,     0,     0,
       0,     0,   319,     0,   315,   313,   312,   324,   367,     0,
       0,   370,   385,   386,   381,   382,   387,   389,   388,   383,
     292,   293,   378,   377,   393,   392,     0,   397,   411,   412,
     401,   414,   407,   405,   400,     0,     0,     0,   143,   420,
     154,   154,   154,   143,     0,     0,   143,   460,   442,   453,
       0,   444,    78,   455,     0,     0,   446,   448,   143,   465,
     466,   451,     0,     0,     0,   436,     0,     0,     0,     0,
     946,   948,   947,     0,  1040,     0,  1019,     0,  1022,     0,
       0,  1042,  1044,     0,  1035,   348,     0,   480,   482,   492,
     485,   494,   486,   496,   487,   498,   484,     0,     0,   503,
     500,   501,   154,   527,   540,   539,   541,   543,     0,   556,
     544,     0,     0,     0,     0,     0,     0,   167,   167,   161,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   164,
     164,   161,     0,     0,   161,     0,     0,     0,     0,     0,
     598,   622,     0,     0,     0,   594,     0,     0,     0,     0,
     167,   161,     0,     0,   699,     0,   709,   710,   143,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   773,     0,     0,     0,     0,     0,   798,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   823,     0,
       0,   828,   829,     0,     0,     0,   850,   852,   851,     0,
     854,     0,     0,   862,   864,   865,   899,     0,     0,     0,
       0,   713,   714,   940,   938,   943,   942,   941,   939,   944,
       0,   718,     0,   723,     0,   937,     0,   724,   725,   726,
     727,     0,     0,     0,     0,     0,   836,     0,     0,   837,
    1061,     0,  1064,  1060,     0,     0,     0,   838,   872,   839,
    1080,  1085,  1082,  1081,  1079,  1086,  1083,  1077,  1084,  1078,
    1087,     0,     0,   844,     0,     0,     0,  1093,     0,  1095,
     847,     0,  1097,   848,   869,     0,     0,     0,   874,   875,
     876,  1122,     0,     0,  1129,  1125,     0,     0,     0,  1120,
    1119,  1133,  1132,     0,     0,  1147,     0,     0,  1143,     0,
    1151,     0,     0,  1144,     0,  1165,   189,   189,     0,   189,
       0,  1191,     0,  1190,  1182,     0,     0,     0,     0,  1186,
       0,     0,     0,  1189,     0,     0,     0,     0,     0,  1184,
    1192,     0,     0,     0,  1183,   189,   189,   189,     0,   205,
     207,   209,     0,   210,     0,    55,     0,  1232,     0,  1238,
       0,   143,  1244,  1245,     0,  1247,  1248,     0,   155,   156,
    1239,  1260,  1261,     0,   213,     0,   227,     0,     0,     0,
       0,   260,     0,     0,     0,     0,     0,     0,     0,     0,
     298,   143,     0,     0,     0,     0,   308,     0,   318,     0,
     317,   374,   373,     0,     0,     0,   143,     0,     0,   154,
     418,   422,   426,     0,     0,     0,   154,     0,    82,    81,
     461,   445,     0,   456,   458,   157,   467,   342,     0,     0,
      55,     0,   435,     0,     0,   958,     0,     0,     0,     0,
       0,     0,   972,     0,     0,     0,     0,     0,     0,   989,
     990,     0,     0,     0,     0,     0,  1001,     0,  1007,  1008,
    1010,  1012,     0,  1016,  1027,  1028,  1029,     0,  1031,  1036,
    1038,  1039,  1037,   945,     0,  1018,     0,  1017,   957,     0,
       0,  1023,     0,  1025,     0,  1024,  1045,  1026,  1033,     0,
       0,   360,     0,     0,   554,   555,     0,   552,   548,     0,
     167,   167,   167,   168,   169,   566,   567,   163,   162,     0,
     167,   167,   167,     0,   572,   582,   164,   167,   167,   167,
     165,   166,   167,   167,     0,   167,   167,     0,   164,     0,
     595,     0,     0,     0,   621,     0,   620,     0,     0,   597,
       0,   596,     0,     0,     0,     0,   164,   164,   161,     0,
       0,   161,     0,     0,     0,   167,   167,   695,     0,   167,
     167,   700,     0,   180,   181,   182,   183,   184,   185,     0,
      86,    87,    85,   731,     0,     0,     0,     0,     0,     0,
     892,   890,   885,     0,   895,   879,   896,   882,   894,   888,
     877,   891,   880,   878,   897,   893,     0,     0,     0,   751,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   783,     0,     0,     0,     0,     0,   797,
     799,     0,     0,   805,   804,     0,     0,   170,     0,     0,
       0,   143,     0,     0,   818,     0,     0,     0,     0,   824,
     825,   826,     0,     0,     0,   833,   849,   853,   855,   858,
     857,     0,     0,     0,   863,   900,   902,     0,   901,   716,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1046,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   720,     0,     0,     0,     0,
     835,     0,   143,     0,  1056,  1054,     0,     0,   143,     0,
    1059,   840,     0,     0,     0,   846,     0,     0,  1098,   867,
     868,     0,   870,  1128,  1130,  1127,  1126,  1117,     0,     0,
       0,  1148,     0,     0,  1152,  1160,   191,   192,   193,   194,
     190,  1175,  1174,     0,     0,     0,  1177,  1176,   189,     0,
       0,     0,  1185,     0,     0,     0,     0,     0,  1202,     0,
    1216,  1215,  1217,     0,     0,     0,  1188,     0,     0,     0,
    1187,  1197,  1196,  1198,  1194,  1193,  1195,  1219,  1218,  1220,
       0,     0,     0,    55,     0,  1234,     0,   143,  1251,  1246,
    1249,     0,     0,   143,     0,     0,     0,   224,     0,     0,
       0,     0,     0,     0,     0,     0,   295,   294,     0,     0,
     286,   297,   299,     0,   309,   311,   310,   143,   316,     0,
       0,     0,   154,   417,   143,     0,     0,     0,     0,   440,
     454,    80,    79,   463,     0,   457,   159,   160,   158,   450,
       0,     0,   438,   432,     0,     0,     0,     0,     0,     0,
     143,   959,     0,   962,     0,     0,   965,     0,   143,   970,
       0,   973,   974,     0,   976,   977,   978,     0,   982,     0,
       0,   985,     0,   991,     0,     0,     0,   996,   997,   995,
       0,     0,     0,  1002,  1003,     0,     0,  1006,  1009,  1011,
    1013,     0,     0,  1030,  1032,   949,  1041,   950,     0,     0,
    1043,  1034,     0,     0,   508,   509,     0,     0,   553,     0,
     563,   564,   565,   167,   569,   570,   571,     0,     0,     0,
     576,   577,   161,     0,     0,     0,   167,   583,   584,   585,
     586,   588,   164,   591,   592,     0,   167,     0,     0,     0,
     164,   164,   161,     0,     0,     0,     0,   619,     0,   623,
       0,     0,     0,     0,     0,   164,   164,   161,     0,     0,
     161,     0,     0,     0,     0,     0,   164,   164,   161,     0,
       0,   161,     0,     0,     0,     0,     0,   164,   164,   161,
       0,     0,   161,     0,     0,     0,     0,   164,   164,   161,
       0,     0,     0,   164,   599,   600,   601,   602,   604,     0,
     607,   608,     0,   164,     0,     0,   693,   694,   167,   697,
     698,     0,   730,   143,   732,     0,     0,   737,     0,     0,
       0,     0,     0,   884,   881,   887,   886,   883,   889,     0,
     748,     0,     0,     0,     0,   143,   757,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     774,   775,   776,     0,   780,   777,   779,     0,     0,   785,
     784,   786,   787,     0,     0,     0,     0,     0,     0,   143,
       0,   143,     0,   803,   176,   172,   177,   171,   174,   173,
     175,   812,   813,   814,     0,     0,     0,   817,   819,   143,
       0,   143,     0,   827,   830,   143,     0,   143,     0,   856,
     861,   903,   717,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1088,   928,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   929,
       0,     0,     0,     0,     0,   728,   729,   143,   154,     0,
     143,   143,  1062,  1063,     0,  1065,     0,   842,     0,   143,
    1094,  1096,   866,     0,  1145,  1146,  1149,  1150,   189,   189,
     189,  1221,  1200,  1199,  1201,  1204,  1203,  1207,  1206,  1208,
    1205,  1213,  1212,  1214,  1210,  1209,  1211,     0,     0,  1229,
    1236,     0,  1252,     0,   143,     0,  1255,     0,     0,   228,
       0,   225,     0,     0,     0,   264,     0,     0,     0,     0,
     143,     0,   301,   131,     0,   394,     0,   415,   154,   157,
       0,     0,   429,     0,     0,   433,   951,     0,     0,     0,
       0,   143,   960,   157,   157,   157,   143,   966,   157,   154,
     157,   157,   143,   979,   157,   157,   157,   143,   986,   157,
     157,   143,     0,   157,   143,   157,   157,   143,   157,   143,
    1020,  1021,     0,     0,   507,   549,     0,   568,   573,   574,
     575,     0,   579,   580,   581,   587,   167,   164,   593,   610,
     611,   612,   613,   614,     0,   616,   617,   164,     0,     0,
       0,   164,   164,   161,     0,     0,     0,     0,     0,     0,
     164,   164,   161,     0,     0,     0,     0,     0,     0,   164,
     164,   161,     0,     0,     0,   164,   167,   167,   167,   167,
     167,     0,   167,   167,     0,   164,   164,   167,   167,   167,
     167,   167,     0,   167,   167,     0,   164,   164,   673,   674,
     675,   676,   678,     0,   681,   682,     0,   164,   684,   685,
     686,   687,   688,     0,   690,   691,   164,   603,   164,     0,
     609,     0,     0,   696,     0,   733,   157,     0,     0,   157,
       0,     0,     0,   747,   157,   749,   752,   753,   157,   754,
     756,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   778,   781,   782,     0,   157,     0,
       0,     0,   800,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   859,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1089,  1068,     0,  1075,  1076,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   143,     0,     0,    83,     0,     0,   935,   936,
     154,     0,     0,     0,  1057,  1055,  1066,   841,   843,   154,
      36,  1179,  1178,  1180,  1222,     0,  1231,  1262,     0,     0,
    1257,  1256,   229,     0,     0,     0,   269,     0,     0,     0,
     287,   157,   395,   399,   416,   419,     0,   427,   462,     0,
       0,     0,     0,     0,   956,   961,   964,   963,   967,   968,
     969,   971,   975,   980,   981,   983,   984,   987,   988,   992,
     154,   157,   999,   154,  1000,  1004,   154,  1014,   154,     0,
       0,   506,     0,   578,   589,   167,   164,   618,   167,   167,
     167,   167,   167,     0,   167,   167,   164,   664,   665,   666,
     667,   668,     0,   670,   671,   164,   167,   167,   167,   167,
     167,     0,   167,   167,   164,   167,   633,   634,   635,   636,
     638,   164,   641,   642,     0,   167,   167,   653,   654,   655,
     656,   658,   164,   661,   662,     0,   167,   677,   164,     0,
     683,   164,   692,   605,   164,   701,   702,   143,   736,     0,
     157,   741,   740,     0,   143,     0,   750,   755,   143,     0,
     762,   763,   764,   765,   769,   770,   766,   767,   768,     0,
       0,   157,   788,   792,     0,   143,     0,     0,   801,   807,
     806,   157,   808,     0,   815,     0,   820,   157,   157,   810,
       0,     0,   860,     0,   178,   178,     0,     0,   178,     0,
     178,  1046,     0,     0,     0,     0,     0,     0,     0,     0,
    1067,     0,     0,   178,   178,     0,     0,     0,     0,     0,
       0,     0,     0,   930,     0,     0,     0,  1046,    84,     0,
     178,     0,  1091,   934,     0,     0,   211,  1264,  1263,     0,
       0,   233,     0,     0,     0,     0,   302,   428,   321,   952,
       0,   186,     0,   993,   994,   998,  1005,  1015,   353,   321,
       0,   590,   615,   624,   625,   626,   627,   628,   164,   630,
     631,   167,   164,   672,   644,   645,   646,   647,   648,   164,
     650,   651,   167,   637,   167,   164,   643,   657,   167,   164,
     663,   679,   164,   689,   606,     0,   157,   734,   742,     0,
       0,     0,     0,     0,   771,   772,   789,     0,     0,     0,
     802,   809,     0,   821,   822,   811,   157,   831,     0,   179,
    1046,  1046,    83,     0,  1046,     0,  1046,   904,   143,     0,
    1070,     0,  1073,  1107,  1074,  1072,  1069,     0,  1046,  1046,
      83,     0,     0,  1046,  1046,     0,     0,  1046,   933,   931,
     932,   911,  1046,  1046,  1091,  1102,     0,  1058,   845,     0,
       0,   235,     0,     0,     0,   322,   323,   343,     0,   187,
     188,   954,   955,   361,     0,   167,   632,   669,   167,   652,
     639,   167,   659,   167,   680,     0,   735,   157,   738,   157,
       0,   157,     0,   157,   790,   157,     0,   157,     0,  1046,
     917,   913,  1046,     0,   918,     0,   912,  1046,     0,  1071,
       0,   915,   914,  1046,     0,     0,   909,   907,  1046,   143,
     908,   910,   916,  1102,  1052,     0,     0,  1092,  1100,     0,
       0,     0,   265,   288,   291,   289,     0,     0,   143,   551,
     629,   649,   640,   660,   157,   739,   746,     0,   761,   758,
     791,   796,     0,   816,     0,   922,   906,    83,     0,   920,
    1108,     0,   905,    83,     0,   921,     0,  1053,  1104,  1106,
       0,  1099,     0,     0,   270,     0,     0,     0,     0,   186,
       0,   743,   143,   759,   793,   832,  1046,     0,     0,  1046,
       0,   157,  1105,  1101,   234,     0,     0,     0,     0,     0,
     953,   712,   143,   744,   760,   143,   794,   924,     0,  1046,
     923,     0,     0,   236,   281,     0,   280,     0,   745,   795,
      83,   925,    83,  1046,   279,   278,  1046,  1046,   919,   927,
     926
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    53,   419,   173,   152,  1230,  2477,  2478,   420,   421,
     422,   423,   153,   154,   155,    91,   788,   446,  1180,  1649,
    1319,  1332,  1315,  1891,  2570,  1379,  2621,  1551,   334,   741,
     744,   747,   755,    63,   357,   363,   367,   370,    68,   373,
      75,   388,   384,   378,   395,    82,   400,    92,    98,   405,
     407,   409,   481,   842,  1618,   411,   414,   105,   430,   156,
     158,  2617,   175,   215,   470,   831,   472,   482,   834,   839,
     484,   486,   845,   489,   847,   500,   850,   852,   503,   507,
     511,   513,   516,   520,   547,   543,  1242,   534,   871,   876,
     868,  1231,   881,   537,   553,   556,   561,   566,   574,   910,
     912,   914,   916,   579,   920,   218,   581,  1716,   236,   583,
     585,   589,   594,   602,   245,  1308,   605,   253,   614,  1324,
     616,   622,   965,  1340,   960,  1757,  1346,  1344,   961,  1759,
    1349,  1351,   628,   631,   626,   255,   263,   265,   669,  1042,
    1406,  1031,  1505,  1939,  2263,  1047,  1040,   905,  1283,  1287,
    1295,  1297,  1923,   270,  1056,  1059,  1067,  2235,  2236,  2237,
    1924,  2605,  2606,  1090,  1093,  2677,  2678,  2674,  2675,  2718,
    2238,  2239,   275,   281,   289,   683,   678,   294,   299,   693,
     700,  1118,  1123,   750,   738,   306,   310,   707,   316,   714,
    1556,   727,   728,  1154,  1149,  1562,  1139,  1568,  1580,  1576,
    1143,   732,   716,   322,   323,   338,  1167,   341,   347,   765,
     768,   762,   349,   352,   773
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2515
static const yytype_int16 yypact[] =
{
    5129,    63,    60,    18, -2515, -2515,   853,  -142,   449,   382,
     922,   463,  3075,   126,   181,  1161,    30,  5176,   787,  1595,
   -2515,   181,   578,   163,  1118,   218,    61,   217,   -23,   421,
     160,   791,   937,   137,   442,   469,   398,   -23, -2515,   153,
      16,   871, -2515,   412,   491,   752, -2515,   575, -2515,    65,
    3990,   277,    72,   598,   612,  1049,   312,   677,   682,    90,
     686,    -7,   582, -2515, -2515, -2515,   941,   824, -2515,   118,
      38,   181,   424,   697,   168, -2515,   724,   824, -2515, -2515,
     114,   824, -2515, -2515, -2515, -2515,   824, -2515, -2515, -2515,
   -2515, -2515, -2515,   159,   700,   756,   777,   504, -2515,   824,
    1230,   824,   824,   951,   824, -2515, -2515, -2515,   606, -2515,
   -2515, -2515, -2515,  4684, -2515, -2515, -2515, -2515, -2515, -2515,
     824, -2515, -2515, -2515, -2515, -2515, -2515, -2515, -2515, -2515,
   -2515, -2515, -2515, -2515, -2515, -2515, -2515, -2515, -2515, -2515,
   -2515, -2515, -2515, -2515, -2515, -2515, -2515, -2515, -2515, -2515,
   -2515, -2515, -2515,   844, -2515,   824, -2515,   901, -2515, -2515,
     181,   181,   181,   181,   181,   181,   181, -2515, -2515,   181,
     181,   181,   181, -2515,   731, -2515,   790,  1245,   810,    20,
     637,   763,    39,  4170,   579,  4765,  4646,   904,  4684,  3839,
   -2515,   521,   -41,   965,   889,   101,   566,   983,   -23,   -13,
   -2515,   914, -2515,   789,   747,   214, -2515,   165, -2515,   468,
   -2515,   446,   912,    68, -2515, -2515,  4833, -2515, -2515, -2515,
     953,  1002, -2515, -2515, -2515, -2515,   728, -2515, -2515, -2515,
   -2515,   490, -2515, -2515,  4833,  4229, -2515, -2515,   105, -2515,
    1037,  1041,    75, -2515,   824, -2515,  1047,   131,  1054,   225,
      42,  1062,    46, -2515, -2515, -2515,  1050,  1064,   181,   181,
     824,   824, -2515, -2515,  1070, -2515, -2515, -2515, -2515, -2515,
    2728, -2515,  1075,  1080,   824, -2515,  1082, -2515, -2515, -2515,
   -2515, -2515,   824,  1053,   181,  3122,   824,   844,   824, -2515,
    1086, -2515,  3183, -2515, -2515,   771,  1097,  1099,   824, -2515,
    1102, -2515,   608,  1107,  4833,  1110, -2515,  1106,   824,  1028,
   -2515,   663,  1007,   890,   432,  1124, -2515, -2515, -2515, -2515,
   -2515, -2515, -2515,  1132, -2515,   484,    26,    29,    58,   386,
   -2515,   824,   824,   220, -2515,   824,   885,  1159, -2515,   824,
     824, -2515,  1172,    23,    28,  1174,   844, -2515, -2515, -2515,
     949,   824, -2515, -2515, -2515, -2515,   824, -2515,  1179,  1193,
   -2515,   824,  1146, -2515, -2515, -2515, -2515, -2515, -2515,   824,
   -2515, -2515,   824, -2515, -2515,   474,   474,  1205, -2515, -2515,
   -2515, -2515, -2515, -2515, -2515, -2515, -2515, -2515, -2515,  1016,
     824,   824,  1216,  1221,  1222, -2515, -2515,   824,   824,   824,
   -2515,   824, -2515,  1224, -2515, -2515, -2515, -2515,  1073, -2515,
    1227, -2515,  4833,  1239, -2515,   824, -2515, -2515, -2515,   824,
    1220,  1269,  1269,  4833,   824,   824,   824,   824,   824,   824,
   -2515,   824,  4684,  1230,   824,   824, -2515, -2515, -2515, -2515,
   -2515, -2515, -2515, -2515, -2515, -2515,  1230,   824, -2515, -2515,
   -2515, -2515, -2515, -2515, -2515, -2515, -2515, -2515, -2515, -2515,
    1277, -2515,  1018,   455, -2515, -2515, -2515, -2515, -2515, -2515,
   -2515, -2515, -2515,   380, -2515, -2515, -2515,  1121, -2515,    -5,
     542,   542, -2515, -2515, -2515,  1284, -2515,  1300, -2515, -2515,
     -96, -2515,  1108, -2515, -2515, -2515,  1138, -2515, -2515,   844,
   -2515,  3557,   824, -2515,  4833,  4833,   844, -2515, -2515,   844,
   -2515, -2515, -2515, -2515,   844, -2515, -2515,  4833,   844,   824,
   -2515, -2515,  4833, -2515,  1304,   247,  1126,     9, -2515, -2515,
    1129,  4833,  3892, -2515, -2515, -2515, -2515, -2515,  1310,  1312,
    1320, -2515,  1136, -2515, -2515, -2515,   824, -2515, -2515,   535,
   -2515, -2515, -2515, -2515, -2515, -2515, -2515,   446, -2515, -2515,
   -2515, -2515, -2515, -2515,  1147,  1149, -2515, -2515,  1272,  1273,
    1274, -2515, -2515,  1123, -2515,   824,  1336,  1130,  3183, -2515,
     844, -2515,  1338, -2515, -2515, -2515, -2515, -2515, -2515, -2515,
   -2515, -2515, -2515, -2515, -2515, -2515, -2515,  4833,  4833,  4833,
    4833, -2515, -2515,  1344,   181, -2515, -2515,  1346,  1351,  1166,
     824, -2515,   274,  1279, -2515,  1359, -2515,    21,  1285,  4094,
      52,  1360, -2515,  1364, -2515,  1367, -2515,   107, -2515,  1368,
    1372, -2515,  1382, -2515, -2515, -2515,   824, -2515,  3183,  4550,
    1436,   537,  1377,   223,  1290, -2515, -2515, -2515,  1379,   770,
    1393,  1395,    43,   824,   -16,   356,    51,  4833,   181,  1572,
     923,     4,   146,   108,    45, -2515,  1384,  1385,  1399, -2515,
   -2515, -2515, -2515, -2515,   824,   824,   824,   824, -2515, -2515,
     824,   844,   824, -2515,   824,  1230,   824,  1409,   844, -2515,
   -2515, -2515, -2515, -2515, -2515, -2515, -2515,  1410,   371,   402,
   -2515, -2515, -2515,  1411, -2515, -2515, -2515, -2515,  1319, -2515,
    1412,  1413,  1333,  1417, -2515,  1418, -2515,  1419,  1339,  1420,
     500,   477,   531,   501,   569,  1423,   642, -2515, -2515,  1424,
    1426,  1428, -2515, -2515,  1432, -2515, -2515, -2515, -2515,  1433,
   -2515, -2515,  1435, -2515, -2515,  1437, -2515, -2515, -2515, -2515,
   -2515, -2515, -2515,   824,   824, -2515,   824,   964,   824,   824,
   -2515,  3154, -2515,  1119,  1440, -2515,  1143,  1441, -2515, -2515,
     352,   824,   824, -2515,  1416, -2515, -2515,  1444,  1190,   824,
    1425,   565, -2515, -2515, -2515, -2515, -2515, -2515, -2515, -2515,
   -2515, -2515, -2515, -2515, -2515, -2515,  1442,  1446,   824,   824,
     824,  1447,   181,  1448,  1449,   844,  4833, -2515, -2515, -2515,
   -2515, -2515,   844, -2515, -2515,   824,   824,   824,  4833,   824,
    1230,   824, -2515,   824, -2515, -2515, -2515, -2515, -2515,  1451,
    1452, -2515, -2515, -2515, -2515, -2515, -2515, -2515, -2515, -2515,
   -2515, -2515, -2515, -2515,   579, -2515,   824, -2515, -2515, -2515,
   -2515, -2515, -2515, -2515, -2515,  4833,  4833,   824,   844, -2515,
     352,   352,   352,   844,  1230,   824,   844, -2515, -2515, -2515,
     824, -2515,   -48,  1288,  1453,  1455, -2515, -2515,   844,  4833,
   -2515, -2515,  1456,  1457,  1459,  1170,   824,  4649,   664,   800,
   -2515, -2515, -2515,   824,   187,  1009, -2515,  1206, -2515,  1572,
    1209,   546,  1181,   806, -2515, -2515,   824, -2515, -2515, -2515,
   -2515, -2515, -2515, -2515, -2515, -2515, -2515,   824,  1461, -2515,
   -2515, -2515,   352, -2515, -2515, -2515, -2515, -2515,  4713, -2515,
   -2515,  1463,  1468,   824,  1470,  1471,  1472,    35,    35,   560,
    1464,  1475,  1477,  1481,  1233,  1240,  1483,  1484,  1502,   480,
     480,   560,  1505,  1506,   560,  1507,  1510,  3297,  1512,  1516,
   -2515, -2515,  1521,  1522,   188, -2515,  1524,  1525,  1526,  1527,
      35,   560,  1529,  1533, -2515,  1537, -2515, -2515,   844,   726,
    1271,  1307,   -31,  1308,  1406,   870,   409,  1541,    53,  1396,
    1445,   811,   502,  1509,   411,  1316,  1454,  1542,  1347,   120,
      41,   629,   404,  4684,  1572,  1514,   737,  1315,  1348,  1555,
     141, -2515, -2515,   400,  1557,  1558, -2515, -2515, -2515,  1562,
    1352,   130,  1572,  1362, -2515, -2515, -2515,   181,  1569,  1570,
     824, -2515, -2515, -2515, -2515, -2515, -2515, -2515, -2515, -2515,
       0, -2515,  2967, -2515,   824, -2515,   824, -2515, -2515, -2515,
   -2515,   824,   824,   824,   223,  4833, -2515,  1571,  1196, -2515,
   -2515,   824, -2515, -2515,   824,  4684,   824, -2515, -2515, -2515,
   -2515, -2515, -2515, -2515, -2515, -2515, -2515, -2515, -2515, -2515,
   -2515,   181,   824, -2515,   824,   223,  1573, -2515,   824,   824,
   -2515,   181, -2515, -2515, -2515,   979,  1574,  1575, -2515, -2515,
   -2515, -2515,   824,   824, -2515, -2515,  1230,   824,   824, -2515,
   -2515, -2515, -2515,  1577,   824, -2515,   824,  1466, -2515,   824,
   -2515,   824,  1473, -2515,  1578, -2515,   900,   900,   653,   900,
    1580, -2515,   716, -2515, -2515,  1585,  1586,   720,  1588, -2515,
    1589,  1591,  1593, -2515,   745,   760,  1599,  1602,  1605, -2515,
   -2515,  1608,  1611,  1606, -2515,   900,   900,   900,   824, -2515,
   -2515, -2515,   824, -2515,   824,  1092,  4833, -2515,   824, -2515,
    3183,   844, -2515, -2515,  1612, -2515, -2515,  1614, -2515, -2515,
   -2515, -2515,  1563,  3122, -2515,   824,  1610,   824,   824,   824,
    1116, -2515,  1619,  1622,   824,   824,    40,  1623,   181,   181,
   -2515,   844,   824,  1625,  1626,  1628, -2515,  4833, -2515,   824,
   -2515, -2515, -2515,   824,   824,   824,   844,  1631,  4833,   352,
   -2515, -2515, -2515,  1230,   824,  1632,   352,   824,  1604,  1607,
     552, -2515,  1638, -2515, -2515,   963, -2515, -2515,   824,  1633,
    1644,   824, -2515,  1641,   852,  4684,  1415,   503,  1421,    22,
    4833,   638, -2515,   251,  1515,    36,   729,  1422,   176, -2515,
   -2515,    31,  1487,   750,  1535,   -36,  1572,   -25, -2515,  1653,
    1429, -2515,   358, -2515, -2515, -2515, -2515,  1572,  1460, -2515,
   -2515, -2515, -2515, -2515,   824, -2515,   824, -2515, -2515,   824,
     824, -2515,   824, -2515,   824, -2515, -2515, -2515, -2515,  1465,
     824, -2515,   824,   164, -2515, -2515,  1656,  1658, -2515,   824,
      35,    35,    35, -2515, -2515, -2515, -2515, -2515, -2515,  1661,
      35,    35,    35,   655, -2515, -2515,   480,    35,    35,    35,
   -2515, -2515,    35,    35,  1663,    35,    35,  1665,   480,  1120,
   -2515,  1668,  1670,  1671, -2515,   532, -2515,   614,   647, -2515,
    1128, -2515,  1402,  1673,  1676,  1679,   480,   480,   560,  1681,
    1682,   560,  1686,  1683,  1689,    35,    35, -2515,  1690,    35,
      35, -2515,  1692, -2515, -2515, -2515, -2515, -2515, -2515,   181,
   -2515, -2515, -2515,  4684,  1289,   181,   824,  1297,  1211,   431,
   -2515, -2515, -2515,   744, -2515, -2515, -2515, -2515, -2515, -2515,
   -2515, -2515, -2515, -2515, -2515, -2515,  1694,   181,   824, -2515,
     181,  1695,   824,  4833,   181,  1353,  1458,  1467,   244,   263,
    1474,   273,  1397,  1401,  1697,  1698,  1704,   870,  1705,  1708,
    1709,  1408,  1427,  1199,  1711,   181,   824,  1326,  1403, -2515,
   -2515,   181,  4684, -2515, -2515,  4684,   824,   103,  1713,   181,
     824,   844,  1230,   181, -2515,  1716,  4684,  4833,   824, -2515,
   -2515, -2515,   181,   181,  4684, -2515, -2515, -2515, -2515, -2515,
   -2515,  4684,   824,   181, -2515, -2515, -2515,   824, -2515, -2515,
    1718,   824,  1495,   436,   824,  1501,   824,   472,   824, -2515,
     824,  1503,  1504,   824,   824,   824,   824,   824,   824,   824,
     824,    13,   824,   824,  1508, -2515,   824,   824,   824,   824,
   -2515,  4833,   844,  1720,  4833,  4833,   824,   824,   844,  1230,
   -2515,   824,   824,   824,  4833, -2515,   824,   824, -2515, -2515,
   -2515,  1723, -2515, -2515, -2515, -2515, -2515, -2515,  1725,   824,
     824, -2515,   824,   824, -2515, -2515, -2515, -2515, -2515, -2515,
   -2515, -2515, -2515,  1730,  1732,  1734, -2515, -2515,   900,  1735,
    1736,  1738, -2515,  1740,  1741,  1742,  1744,  1746, -2515,  1749,
   -2515, -2515, -2515,  1750,  1751,  1753, -2515,  1754,  1755,  1757,
   -2515, -2515, -2515, -2515, -2515, -2515, -2515, -2515, -2515, -2515,
     824,   824,   824,  1739,  4833, -2515,   824,   844, -2515, -2515,
   -2515,  3122,   824,   844,   824,   824,   824, -2515,   824,   824,
    1760,   824,  1758,  1748,   824,   824, -2515, -2515,  1762,  4833,
   -2515, -2515, -2515,   824, -2515, -2515, -2515,   844, -2515,   758,
     824,   758,   352, -2515,   844,  4833,   824,   824,  1766, -2515,
   -2515, -2515, -2515, -2515,   824, -2515, -2515, -2515, -2515, -2515,
     824,  1769, -2515, -2515,  4833,  1774,  1775,  1776,  1777,  4833,
     844, -2515,  4833, -2515,  4833,  4833,  4684,  4833,   844, -2515,
    4833, -2515, -2515,  4833, -2515, -2515,  4684,  4833, -2515,  4833,
    4833,  4684,  4833, -2515,  4833,  4833,   824, -2515, -2515, -2515,
    4833,  4833,  4833, -2515, -2515,  4833,  4833, -2515, -2515, -2515,
   -2515,  4833,  4833, -2515, -2515, -2515, -2515, -2515,   824,   824,
   -2515, -2515,  1779,   824, -2515, -2515,  1781,  1784, -2515,   824,
   -2515, -2515, -2515,    35, -2515, -2515, -2515,  1785,  1786,  1788,
   -2515, -2515,   560,  1790,  1791,  1792,    35, -2515, -2515, -2515,
   -2515, -2515,   480, -2515, -2515,  1794,    35,  1795,  1796,  1797,
     480,   480,   560,  1799,  1800,  1801,  1281, -2515,  1378, -2515,
    1380,  1478,  1802,  1803,  1804,   480,   480,   560,  1806,  1807,
     560,  1808,  1531,  1810,  1811,  1813,   480,   480,   560,  1815,
    1816,   560,  1819,  1544,  1821,  1825,  1826,   480,   480,   560,
    1817,  1828,   560,  1829,  1830,  1831,  1832,   480,   480,   560,
    1834,  1835,  1836,   480, -2515, -2515, -2515, -2515, -2515,  1838,
   -2515, -2515,  1839,   480,  1851,  1852, -2515, -2515,    35, -2515,
   -2515,  1854, -2515,   844, -2515,  4833,   824, -2515,   824,  4833,
     824,  1855,  1271, -2515, -2515, -2515, -2515, -2515, -2515,  1856,
   -2515,  4684,   181,  1862,  4684,   844, -2515,  1864,  1271,   824,
     824,   824,   824,   824,   824,   824,   824,   824,  1853,  1867,
   -2515, -2515, -2515,  1868, -2515, -2515, -2515,  1872,  1873, -2515,
   -2515, -2515, -2515,   824,  4833,   824,  1877,  1271,   181,   844,
    1230,   844,   824, -2515, -2515, -2515, -2515, -2515, -2515, -2515,
   -2515, -2515, -2515, -2515,   824,  1230,  1230, -2515, -2515,   844,
    1230,   844,   824, -2515, -2515,   844,  1230,   844,  1230, -2515,
   -2515, -2515, -2515,   824,   824,   824,   824,   824,   824,   824,
     824,   824,   824,  2253, -2515,   824,   824,   824,   824,   824,
     824,   824,   824,   824,   824,   824,  3557,  1878,   824, -2515,
     824,   824,   824,  1874,  1880, -2515, -2515,   844,   352,  1883,
     844,   844, -2515, -2515,  1230, -2515,   824, -2515,  1884,   844,
   -2515, -2515, -2515,  1886, -2515, -2515, -2515, -2515,   900,   900,
     900, -2515, -2515, -2515, -2515, -2515, -2515, -2515, -2515, -2515,
   -2515, -2515, -2515, -2515, -2515, -2515, -2515,  1271,   824, -2515,
   -2515,   824, -2515,   824,   844,   824, -2515,  1230,   824, -2515,
     824, -2515,  1793,  1887,  1888, -2515,  1892,   824,   824,  1893,
     844,  4833, -2515, -2515,   824, -2515,   824, -2515,   352,   963,
     824,  1895, -2515,   824,   446, -2515, -2515,  1896,  1897,  1898,
    1900,   844, -2515,   963,   963,   963,   844, -2515,   963,   352,
     963,   963,   844, -2515,   963,   963,   963,   844, -2515,   963,
     963,   844,  4833,   963,   844,   963,   963,   844,   963,   844,
   -2515, -2515,  1894,   446,  1901, -2515,   824, -2515, -2515, -2515,
   -2515,  1903, -2515, -2515, -2515, -2515,    35,   480, -2515, -2515,
   -2515, -2515, -2515, -2515,  1904, -2515, -2515,   480,  1915,  1916,
    1929,   480,   480,   560,  1905,  1932,  1935,  1937,  1938,  1940,
     480,   480,   560,  1942,  1943,  1945,  1946,  1951,  1952,   480,
     480,   560,  1944,  1957,  1958,   480,    35,    35,    35,    35,
      35,  1960,    35,    35,  1961,   480,   480,    35,    35,    35,
      35,    35,  1963,    35,    35,  1964,   480,   480, -2515, -2515,
   -2515, -2515, -2515,  1965, -2515, -2515,  1966,   480, -2515, -2515,
   -2515, -2515, -2515,  1967, -2515, -2515,   480, -2515,   480,  1968,
   -2515,  1969,  1970, -2515,  3183, -2515,   963,  1971,  4684,   963,
     824,  4833,  1972, -2515,   963, -2515, -2515, -2515,   963, -2515,
   -2515,  4833,  1973,   824,   824,   824,   824,   824,   824,   824,
     824,   824,   824,   824, -2515, -2515, -2515,  4684,   963,   824,
    4833,  1974, -2515,  1230,  1230,  1230,   824,  4684,  1230,   824,
    1230,  1230,  4833,  4684,  1230,   824,  1230, -2515,   824,   824,
     824,   824,   824,   824,  1271,   824,   824,   824,  1491,  1613,
    1630,  1637,  1640,  1642,  1645,  2253, -2515,  1647, -2515, -2515,
    1271,   824,   824,   824,   824,  1271,   824,   824,   824,   824,
     824,   824,   844,   824,  1680,  1271,   824,   824, -2515, -2515,
     352,   181,  1977,  1989, -2515, -2515, -2515, -2515, -2515,   352,
   -2515, -2515, -2515, -2515, -2515,   824, -2515, -2515,  1230,   824,
   -2515, -2515, -2515,  1137,  1993,  1994, -2515,   824,  1996,   758,
   -2515,   963, -2515, -2515, -2515, -2515,  1997, -2515, -2515,  1999,
    2002,  2004,  4833,  2005, -2515, -2515, -2515, -2515, -2515, -2515,
   -2515, -2515, -2515, -2515, -2515, -2515, -2515, -2515, -2515, -2515,
     352,   963, -2515,   352, -2515, -2515,   352, -2515,   352,  2007,
    2011, -2515,   824, -2515, -2515,    35,   480, -2515,    35,    35,
      35,    35,    35,  2012,    35,    35,   480, -2515, -2515, -2515,
   -2515, -2515,  2014, -2515, -2515,   480,    35,    35,    35,    35,
      35,  2015,    35,    35,   480,    35, -2515, -2515, -2515, -2515,
   -2515,   480, -2515, -2515,  2017,    35,    35, -2515, -2515, -2515,
   -2515, -2515,   480, -2515, -2515,  2019,    35, -2515,   480,  2020,
   -2515,   480, -2515, -2515,   480, -2515, -2515,   844, -2515,  4684,
     963, -2515, -2515,  2023,   844,   824, -2515, -2515,   844,   824,
   -2515, -2515, -2515, -2515, -2515, -2515, -2515, -2515, -2515,   824,
     824,   963, -2515, -2515,  2025,   844,   824,  1230, -2515, -2515,
   -2515,   963, -2515,   824, -2515,  1230, -2515,   963,   963, -2515,
    4833,  1271, -2515,   824,  2026,  2026,   824,   824,  2026,  1271,
    2026, -2515,  4833,   870,  2027,  2029,  2032,  2033,  2034,  2030,
   -2515,   181,  1271,  2026,  2026,   824,   824,  1271,   824,   824,
     824,   824,   824, -2515,  1230,   824,  2035, -2515, -2515,   824,
    2026,   181,    11, -2515,  2036,   181, -2515, -2515, -2515,  2037,
     824, -2515,  2038,  2040,  1783,   824, -2515, -2515,    47, -2515,
    2042,    70,  4833, -2515, -2515, -2515, -2515, -2515, -2515,    47,
     824, -2515, -2515, -2515, -2515, -2515, -2515, -2515,   480, -2515,
   -2515,    35,   480, -2515, -2515, -2515, -2515, -2515, -2515,   480,
   -2515, -2515,    35, -2515,    35,   480, -2515, -2515,    35,   480,
   -2515, -2515,   480, -2515, -2515,   824,   963, -2515, -2515,  4684,
    4833,   824,  4833,   824, -2515, -2515, -2515,  4684,  4833,   824,
   -2515, -2515,  4833, -2515, -2515, -2515,   963, -2515,  2041, -2515,
   -2515, -2515,  1271,   824, -2515,  2044, -2515, -2515,   844,  2045,
   -2515,  2048, -2515, -2515, -2515, -2515, -2515,  2049, -2515, -2515,
    1271,   824,  2050, -2515, -2515,   824,  4833, -2515, -2515, -2515,
   -2515, -2515, -2515, -2515,    11,  1551,  1572, -2515, -2515,  2051,
    2052, -2515,  1995,  2054,   134, -2515, -2515, -2515,  4833, -2515,
   -2515, -2515, -2515, -2515,  2055,    35, -2515, -2515,    35, -2515,
   -2515,    35, -2515,    35, -2515,  3183, -2515,   963, -2515,   963,
     824,   963,  2056,   963, -2515,   963,   824,   963,   824, -2515,
   -2515, -2515, -2515,  2057, -2515,   824, -2515, -2515,  2059, -2515,
     824, -2515, -2515, -2515,  2058,   824, -2515, -2515, -2515,   844,
   -2515, -2515, -2515,  1551, -2515,  1767,  1706,  1572, -2515,  2061,
    2062,  2066, -2515, -2515, -2515, -2515,   868,   868,   844, -2515,
   -2515, -2515, -2515, -2515,   963, -2515, -2515,  2070, -2515,  4684,
   -2515, -2515,  2071, -2515,  1271, -2515, -2515,  1271,   824, -2515,
   -2515,   824, -2515,  1271,   824, -2515,  4833, -2515,  1767, -2515,
     181, -2515,  2072,  2075, -2515,   824,   824,   824,   824,    70,
    2076,  4684,   844, -2515,  4684, -2515, -2515,   824,  2081, -2515,
     824,   963, -2515, -2515, -2515,  2082,  2083,   824,  2084,   824,
   -2515, -2515,   844, -2515, -2515,   844, -2515, -2515,  2087, -2515,
   -2515,  2088,  2089, -2515, -2515,  2090, -2515,  2091, -2515, -2515,
    1271, -2515,  1271, -2515, -2515, -2515, -2515, -2515, -2515, -2515,
   -2515
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2515, -2515,    -3, -2515,   573, -2515, -1748,  -919,  1666, -2515,
     801,  -132,  2078,   -49,  1163, -1625,  1717,  1278,  -705, -1930,
    -923,  1568,  1450, -2515, -1136, -2515,  -632, -1117, -2515, -2515,
   -2515, -2515, -2515, -2515, -2515, -2515, -2515, -2515, -2515, -2515,
   -2515, -2515, -2515, -2515, -2515, -2515, -2515, -2515, -2515, -2515,
   -2515, -2515,  -516,  -479, -2515, -2515, -2515, -2515, -2515, -2515,
   -2515,  -410, -2515, -2515, -2515, -2515, -2515, -2515, -2515, -2515,
   -2515, -2515, -2515, -2515, -2515, -2515, -2515, -2515, -2515, -2515,
   -2515, -2515, -2515, -2515, -2515, -2515, -2515, -2515, -2515, -2515,
   -2515, -2515, -2515, -2515, -2515, -2515, -2515, -2515, -2515, -2515,
   -2515, -2515, -2515, -2515, -2515, -2515, -2515, -2515, -2515, -2515,
   -2515, -2515, -2515, -2515, -2515, -2515, -2515, -2515, -2515, -2515,
   -2515, -2515, -2515, -2515, -2515, -2515, -2515, -2515, -2515, -2515,
   -2515, -2515, -2515, -2515, -2515, -2515, -2515, -2515, -2515, -2515,
   -1424, -2515, -2515, -2515, -2515, -2515,  -640, -2515, -2515, -2515,
   -2515, -2515, -2515,   415, -2515, -2515, -2515, -2515,  -135,  -652,
    -708,  -503, -2515, -2515, -2515, -2515,  -575,  -570, -2515, -2515,
   -2514, -2515, -2515, -2515, -2515, -2515, -2515, -2515, -2515, -2515,
   -2515, -2515, -2515, -2515, -2515, -2515, -2515, -2515, -2515, -2515,
   -2515, -2515,  1386, -2515, -2515, -2515, -2515, -2515, -2515, -2515,
   -2515, -2515, -2515, -2515, -2515, -2515, -2515, -2515, -2515, -2515,
   -2515, -2515, -2515, -2515, -2515
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1236
static const yytype_int16 yytable[] =
{
      67,   346,   843,  1863,  2014,  1479,  2016,  1081,   104,  1085,
    1552, -1090,  1557,   873,  1055,  1058,    64,    65,  1936,    64,
      65,    64,    65,    64,    65,   365,   945,   763,  1334,   286,
     106,  1337,   766,   106,   266,   946,   947,   309,  1587,  1588,
    1589,    64,    65,  1666,    64,    65,   340,  1033,  1368,   351,
    1094,   629,   356,   550,    64,    65,   362,  1676,  1683,   369,
    1050,  1383,   106,   372,   374,   106,   256,   383,    64,    65,
     390,   394,    55,   836,   397,    64,    65,  1443,   401,  2615,
    1410,   608,   948,   402,   577,  1228,  1616,  1060,  1034,  2295,
    1385,  1061,   739,    64,    65,   742,   415,   848,   424,   425,
     429,   431,  2619,  2305,  2306,  2307,  1694,   540,  2309,   603,
    2311,  2312,   106,    56,  2314,  2315,  2316,   435,   398,  2318,
    2319,   968,   375,  2322,   745,  2324,  2325,   257,  2327,    54,
    1884,    57,  1690,    64,    65,   623,   612,    64,    65,   962,
      76,   106,   290,  1695,  1095,   111,  1461,  1441,   111,   258,
    1096,  1885,   447,   624,  1886,  1220,  1221,  1222,   849,   157,
      58,  2719,  1062,  1087,   403,  1887,  1469,   837,   969,   551,
     535,    64,    65,  1444,   174,   874,   480,   111,    59,   246,
     111,   501,    60,  1063,  1714,   106,   562,  1691,  1888,   541,
      64,    65,  1313,  1352,    61,   609,  1229,  1681,  1696,  1684,
     259,   267,  1353,  1354,  2742,  1889,  1386,   473,   487,   963,
     307,   949,   950,   474,   303,   268,   488,  1303,  1035,  1314,
    1411,   542,   264,    64,    65,   379,   276,   111,   114,   625,
     617,   114,  1036,  1037,   115,   116,  2398,   115,   116,  2402,
    1054,   610,   838,   688,  2406,  1064,   391,  1291,  2407,  1355,
     475,   869,  1692,  1051,  1685,  1697,   111,   636,   637,  1667,
     114,   536,  1470,   114,   578,  1851,   115,   116,  2423,   115,
     116,   672,   366,  1677,   476,   558,   552,   269,  1671,   674,
     677,   951,   680,   684,  1853,   686,  1033,  1086,   934,   935,
    1412,   952,   953, -1090,  1856,   696,   954,   970,   604,   563,
     111,   822,  1480,   109,   706,   708,   308,   764,    66,  1617,
     114,   376,   767,   630,   825,  1937,   115,   116,   875,   119,
     477,  2683,   119,   955,  1038,  1039,  2616,  1034,   751,   752,
     754,  1445,   756,  1413,  1052,   936,   759,   760,   380,   114,
     392,  1065,   618,  1442,  1097,   115,   116,   772,   774,  2620,
      62,   119,  1453,   775,   119,   339,  1088,   399,   778,   780,
     260,  2496,   350,   478,   479,   377,   781,   971,   149,   782,
    1473,   149,   150,   151,   613,   150,   151,   972,  1356,  1357,
     361,   381,   382,   114,   404,  1700,  1462,   792,   793,   115,
     116,  2504,  1091,  1285,   797,   798,   799,  1715,   800,   748,
     149,   119,   564,   149,   150,   151,   261,   150,   151,   973,
      83,  1114,   807,  1682,  1511,   393,   808,   619,  1672,  1033,
    1471,   813,   814,   815,   816,   817,   818,  1463,   819,   565,
     119,   823,   824,   304,  2684,  1809,   291,  1089,  1812,    64,
      65,  1971,  1119,   753,   826,  1524,   292,   254,  1358,  1178,
     149,  1890,   302,    77,   150,   151,   305,  1035,  1359,  1360,
    1034,   117,   317,  1361,   937,   938,    64,    65,   620,  1832,
    2548,  1036,  1037,   300,   119,    64,    65,   478,  2685,   149,
    1057,  1852,  1115,   150,   151,   271,   301,   272,  1673,    78,
    1362,  2556,   621,   729,   559,   324,  1848,  1330,   855,   857,
    1854,  2561,   109,    99,   783,   567,   348,  2564,  2565,   412,
    1857,   318,   295,  1120,  1635,   568,   865,   560,   735,  1877,
     319,  1639,   100,   149,  1424,  1449,  1701,   150,   151,   921,
    1407,  1674,  1435,    84,   939,   413,  1833,  1761,  1135,   887,
     888,  1026,   569,   886,   940,   941,  1762,  1763,   320,    64,
      65,  1425,   730,  1109,  1426,    85,  1643,  1427,   829,    86,
      79,   717,   386,  1038,  1039,  1116,   521,  1027,   784,  1189,
     959,   544,   917,   832,   101,   749,   942,  1190,   358,   335,
     522,  1702,    64,    65,  1428,    64,    65,   159,  1144,   978,
    1035,   736,  1140,  1764,   237,   889,  1121,  1136,   353,   262,
     387,   890,   523,   273,  1036,  1037,   293,   933,   109,    87,
    1179,   296,  1429,   549,  1693,  1430,  2636,   354,   570,  1772,
     719,   524,   109,  1464,  1663,  1703,  1834,   833,  1773,  1774,
    1146,   545,  1117,   977,  1137,   109,  2648,   785,   525,  1331,
     590,   526,   830,    80,   385,  1450,  1408,    88,  1436,   891,
    1053,  1141,  1783,  1066,   571,    89,    90,   102,  1145,  1915,
     117,  1784,  1785,  1122,  2495,   892,   238,   527,   528,  1727,
    1728,  1101,  1102,  1103,  1104,  1775,  1835,  1105,   893,  1107,
     840,  1108,   359,  1110,   297,   894,   360,   737,  1208,  1147,
     895,   364,    81,   298,   239,  1920,  1038,  1039,  1028,   336,
      64,    65,   731,  1151,   321,   368,   591,  2695,  1786,  2696,
     274,  2698,  1171,  2700,  1553,  2701,  1729,  2703,   841,   572,
     529,   786,  1765,  1766,   710,  1317,   787,  1431,   530,   396,
    1274,   406,  1224,   449,   450,   451,   452,   453,   454,   455,
    1664,   896,   456,   457,   458,   459,   592,  1138,  1029,   103,
    1162,  1163,  1293,  1164,  1166,  1168,  1169,  1432,   698,  1669,
     897,   408,  1152,   240,  2730,   898,   117,   899,  1181,  1182,
     725,   573,   586,  1554,  1030,  1186,  1187,  1559,   241,   337,
     117,  1565,   410,   711,  1433,   593,    83,   531,   532,   325,
     900,   901,  1767,   117,  1275,  1193,  1194,  1195,   902,   326,
     432,  1142,  1768,  1769,  1776,  1777,  1573,  1770,  1373,  2071,
    1044,  2762,  1203,  1204,  1205,   587,  1207,   903,  1209,  1276,
    1210,  1577,  1318,  1298,  2652,   689,   327,    64,    65,  2084,
    1279,   634,   635,  1416,  1771,   242,  1560,  1787,  1788,  1148,
    1566,  1213,  2663,  1215,  2121,  1730,  1731,  2124,   460,  1836,
    1678,  2271,  2272,  2273,  1218,  2132,   461,   679,  2135,   533,
    1417,   690,  1225,  1418,   699,  1574,  2143,  1227,  1455,  2146,
     216,    64,    65,   904,  1778,  1670,  2153,   243,  1374,   436,
    1578,  1045,  1241,  1243,  1779,  1780,   217,   244,  1447,  1781,
    1284,  1286,  1289,  1419,   389,  1448,  1277,   311,  1294,   740,
     743,   746,   328,  1300,  1299,   448,   712,  1789,  1343,    84,
    1389,   691,  1153,  2172,  1301,  1732,  1782,  1790,  1791,   483,
     588,  1420,  1792,  1555,  1421,  1733,  1734,  2017,   471,  2182,
    1309,    85,   485,   713,  1654,  2013,  1390,   512,   329,  1837,
      64,    65,  1546,  1547,    64,    65,  1278,  1375,  1376,  1793,
     437,   717,    64,    65,    64,    65,   107,  1735,  2201,  2736,
    1456,  1280,  1377,  1082,  1046,  2739,  1679,    64,  1165,  1391,
     538,   438,   439,   440,  1535,  1392,   282,  1382,   539,   441,
     554,  1393,   330,   312,  1529,    87,  1561,  1646,  1647,  1838,
    1567,   426,   442,   109,   277,   313,  1530,  1446,   443,   548,
    1394,   576,  1378,   331,  1655,    93,   840,   718,   444,  1687,
     719,  1281,    64,    65,   692,  1575,  1688,  1457,  1472,   555,
    1395,    94,  2776,    88,  2777,   582,  1288,  1478,   557,  2579,
    1579,    89,    90,   584,  1083,  1396,  1422,  1282,   110,   332,
      69,  1506,   606,  1507,   841,   607,    70,   720,  1508,  1509,
    1510,   611,    64,    65,   632,   333,    64,    65,  1516,   615,
    1648,  1517,   427,  1520,   371,  1397,  1423,   627,  2274,   633,
    1548,  1549,   771,  1656,  1657,   638,   314,   802,   803,  1522,
     670,  1523,   721,    71,   671,  1526,  1527,   673,  1658,   315,
     687,  1636, -1233,   675,   112,    64,  1593,    95,  1550,  1533,
    1534,   694,  1398,   695,  1536,  1537,   697,    72,   355,    64,
      65,  1539,   701,  1540,   703,  1399,  1542,  1084,  1543,    64,
      65,  1597,   445,  1172,  1173,   709,  1400,   715,  1659,   733,
     722,   283,   278,   723,  1747,  1748,   734,   279,    96,   280,
      64,    65,  1794,  1795,   247,   428,   704,  1175,  1176,    64,
      65,   117,   757,    73,  1401,  1590,   118,   724,   779,  1591,
     725,  1592,  1594,   758,   676,  1596,  1402,   284,  1403,  1404,
    2343,   726,    97,    64,  1240,  1610,   761,   929,   769,  2352,
    1602,  1749,  1605,   776,  1607,  1608,  1609,  1611,  2361,  1796,
     160,  1614,  1615,    64,    65,   288,  2489,    74,   777,  1623,
    1514,  1515,  1185,  1869,  1870,   161,  1628,   162,  1405,   790,
    1629,  1630,  1631,   791,    64,    65,  1831,   705,  1380,  1381,
     794,  1637,   810,   811,  1640,   795,   796,   285,   801,   416,
     248,  1069,   804,    64,    65,  1650,  1092,   163,  1652,   416,
     417,   418,   249,  2261,   806,   164,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,    64,    65,   434,   250,  1380,  1381,
     418,  1705,   827,  1706,   828,   851,  1707,  1708,   844,  1709,
     835,  1710,    64,    65,  1825,  2088,  2089,  1712,   462,  1713,
      64,    65,  1829,   165,   846,  2449,  1719,   853,   867,  2571,
    1750,  1751,  2574,  2294,  2576,   882,   463,   883,  1797,  1798,
    1896,  2462,   872,   251,   884,   877,  2467,  2588,  2589,    64,
      65,  1874,   885,   464,  2310,   907,   252,   908,   909,   911,
     913,   918,  2090,   923,  2603,   465,   915,   502,   928,   510,
     930,   515,   519,   166,   919,   931,    64,    65,  1847,   546,
    1380,  1381,   932,   466,   944,   964,   943,   467,   966,   167,
     168,   967,   956,   974,   575,  1197,   169,   975,   170,   468,
    1752,  1826,  1032,  1828,  1830,  1382,   976,  1955,  1799,  1041,
    1753,  1754,  2097,  2098,  2106,  2107,  1043,  1048,  1800,  1801,
    1049,  1098,  1099,  1100,   171,  1841,    64,    65,  1876,  1844,
    1380,  1381,  1382,  1111,  1113,  1124,  1125,  1126,  1127,   469,
    1128,  1129,  1755,  1130,  1131,  1133,  1132,  1150,  1183,  1155,
    1802,  1156,  1157,  1873,  1875,  1382,  1158,  1188,  1159,  2099,
    1160,  2108,  1161,  1883,  1174,  1177,  1191,  1894,   682,  1184,
    1192,  1196,  1198,  1199,  1232,  1902,  1211,  1212,  1233,  1234,
    1237,  1290,  1238,  1239,  1292,  1296,  1302,  1306,  1320,  1909,
     172,  2091,  2092,  1307,  1911,  1310,  1311,  1312,  1913,  1321,
    1916,  1917,  1322,  1919,  1921,  1922,  1323,  1925,  1327,  1328,
    1928,  1929,  1930,  1931,  1932,  1933,  1934,  1935,  1938,  1940,
    1941,  1325,  1015,  1943,  1944,  1945,  1946,  1329,  1326,  1335,
    1336,  1388,  1338,  1952,  1953,  1339,  1016,  1345,  1956,  1957,
    1958,  1347,  2567,  1960,  1961,  1017,  1348,  1350,  1363,  1364,
    2575,  1365,  1366,  1369,  1414,  1018,  1964,  1965,  1370,  1966,
    1967,  2093,  1371,  2587,  1384,  1387,  1409,  1439,  2592,  1434,
    1415,  2094,  2095,  1437,  1454,  2481,  1458,  1440,  1459,  1438,
    1460,  1465,  1468,  1466,  2485,   685,  1019,  1467,  2100,  2101,
    2109,  2110,  1474,  1476,  1477,  1601,  1513,  1541,  1525,  1531,
    1532,  1538,  1545,  2096,  1544,  1558,  1020,  1987,  1988,  1989,
    1563,  1564,  1569,  1991,  1570,   821,  1571,  1572,  1993,  1996,
    1475,  1998,  1999,  2000,  1581,  2001,  2002,  1582,  2004,  1583,
    1586,  2007,  2008,  1584,   219,  2503,  1585,  1599,  2505,  1600,
    2011,  2506,  1606,  2507,   770,  1612,  1613,  2015,  1619,  1624,
    1625,  1021,  1626,  2020,  2021,  1633,  1638,  1651,  2102,   220,
    2111,  2023,  1641,  1645,  -437,  1642,  1653,  2024,  2103,  2104,
    2112,  2113,  1662,  1675,  1521,  1686,  1689,  1698,  1665,  1680,
    1717,  1711,  1718,  1070,  1528,  1723,  1704,  1742,  1022,  1745,
    1803,  1071,   221,  1756,  1699,  1758,  1760,  1072,  1804,   222,
    2105,  1805,  2114,  2052,  1806,  1810,  1811,  1814,   870,   223,
     224,  1813,  1023,  1815,  1818,  1849,   225,  1821,  1073,  1839,
    1843,  1860,  1861,  1858,  1850,  2060,  2061,  1859,  1862,  1864,
    2063,  1855,  1865,  1866,  1867,  1871,  2066,  1892,  1914,   226,
     906,  1898,  1074,  1912,  1918,  1949,  1926,  1927,  1962,  1963,
    1075,  1942,  1024,  1868,  1025,  1968,   227,  1969,  1970, -1235,
    1972,  1973,  1974,  2577,  1975,  1976,  2115,  1977,  2204,  1978,
    1979,   228,   229,  1980,  2006,  1981,  1982,  1983,   230,  1984,
    1985,  1986,  2005,  2208,  2209,  2003,  2009,  1076,  2211,  2601,
    2022,  1620,  1621,  2025,  2215,  1077,  2217,   854,   231,  2027,
    2028,  2029,  2030,  2062,   860,  2735,  2064,   861,  2065,  2613,
    2068,  2069,   862,  2070,  2072,  2073,   864,  2074,  2077,  2126,
    2079,  2080,  2081,  2085,  2086,  2283,  2087,  2116,  2117,  2118,
    2122,  2123,  2137,  2125,   232,  2127,  2128,  1078,  2129,  2133,
    2134,  2144,  2266,  2167,  2136,  2168,  2138,  2170,  1079,  1382,
    2139,  2140,  2145, -1103,  2147,  2148,  2149,  2150,  2154,  2155,
    2453,  2156,  2158,  2159,  1080,  1382,  2183,  2184,  2185,  2186,
    2187,  2188,  2189,  2190,  2191,  2161,  2162,  2192,   922,  2164,
    2171,  2173,  2650,  2651,   233,  2280,  2654,  2177,  2656,  2181,
    2197,  2193,  2199,  2194,  1382,   234,  2195,  2196,  2258,  2206,
    2661,  2662,  2200,  2253,  2259,  2666,  2667,  2262,  2268,  2670,
    2270,  2207,  2284,  2285,  2671,  2672,  2286,  2289,  2329,  2213,
    2297,  2300,  2301,  2302,   235,  2303,  2331,  2333,  2336,  2344,
    2218,  2219,  2220,  2221,  2222,  2223,  2224,  2225,  2226,  2227,
    2338,  2339,  2240,  2241,  2242,  2243,  2244,  2245,  2246,  2247,
    2248,  2249,  2250,  2251,  2340,  2254,  2345,  2255,  2256,  2257,
    2346,  2705,  2347,  2348,  2706,  2349,  2353,  2354,  2362,  2709,
    2355,  2356,  1822,  2267,  2676,  2712,  2357,  2358,  1827,  1106,
    2715,  2363,  2454,  2364,  2371,  2374,  1112,  2382,  2385,  2388,
    2389,  2391,  2394,  2395,  2396,  2399,  2405,  2409,  2426,  2455,
    1840,  2483,  2476,  1842,  1382,  2275,  2456,  1846,  2276,  2457,
    2277,  2458,  2279,  2484,  2459,  2281,  2461,  2282,  2491,  2492,
    2494,  2681,  2497,  2498,  2287,  2288,  2499,  1214,  1872,  2500,
    2502,  2292,  2508,  2293,  1878,  2509,  2518,  2296,  2522,  2529,
    2298,  2535,  1893,  2539,  2542,  2676,  1897,  2549,  2757,  2557,
    2569,  2760,  2580,  2581,  2585,  1903,  1904,  2582,  2583,  2584,
    2600,  2607,  2609,  2611,  2612,  2649,  1910,  2618,  2655,  2232,
    2658,  2771,  2659,  2660,  2665,  2720,  2679,  2680,  2682,  2689,
    2699,  2707,  2713,  2332,  2710,  2778,  2722,  2723,  2779,  2780,
    2724,  2427,  2428,  2429,  2731,  2734,  2433,  2744,  2435,  2436,
    2745,  2751,  2440,  1200,  2442,  2759,   809,  2763,  2764,  2766,
    1202,  2770,  2772,   789,  2773,  2774,  2775,  2750,  2687,  2623,
    2460,  2673,  2721,  2717,     0,     0,  1134,     0,     0,     0,
     287,     0,     0,     0,     0,  2397,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1219,     0,     0,     0,
       0,  1223,     0,     0,  1226,     0,  2487,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1235,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1452,  2403,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2410,  2411,  2412,  2413,  2414,  2415,  2416,  2417,  2418,  2419,
    2420,   433,     0,     0,     0,     0,  2424,     0,     0,     0,
       0,     0,     0,  2430,     0,     0,  2434,  2726,  2728,     0,
       0,     0,  2441,     0,     0,  2443,  2444,  2445,  2446,  2447,
    2448,  1382,  2450,  2451,  2452,     0,     0,     0,  1519,     0,
       0,     0,     0,     0,     0,     0,     0,  1382,  2463,  2464,
    2465,  2466,  1382,  2468,  2469,  2470,  2471,  2472,  2473,     0,
    2475,     0,  1382,  2479,  2480,     0,  1372,     0,     0,     0,
       0,   499,     0,   506,   509,     0,   514,   518,     0,     0,
       0,     0,  2486,     0,     0,     0,  2488,     0,     0,     0,
    2490,     0,     0,     0,  2493,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   580,  2560,     0,     0,     0,     0,
       0,     0,     0,  2563,     0,     0,     0,     0,  2228,     0,
       0,     0,   595,   601,     0,     0,     0,     0,     0,  2229,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2510,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2598,     0,  1070,  2230,  1604,     0,     0,     0,
       0,     0,  1071,     0,     0,     0,     0,     0,  1072,     0,
       0,     0,     0,   681,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1073,
       0,     0,   702,  2231,     0,     0,     0,     0,  1316,     0,
       0,     0,     0,  1644,     0,     0,     0,     0,     0,     0,
       0,     0,  2551,  1074,     0,     0,  2553,     0,  1661,     0,
       0,  1075,     0,     0,     0,  2176,  2554,  2555,     0,     0,
    1367,     0,     0,  2559,     0,     0,     0,     0,     0,     0,
    2562,     0,     0,     0,     0,     0,     0,     0,  1382,     0,
    2568,     0,     0,  2572,  2573,     0,  1382,     0,  1076,  1598,
       0,  2202,     0,     0,     0,     0,  1077,     0,     0,  1382,
       0,     0,  2590,  2591,  1382,  2593,  2594,  2595,  2596,  2597,
       0,     0,  2599,     0,     0,     0,  2602,     0,     0,  1622,
       0,     0,     0,     0,     0,     0,     0,  2610,     0,     0,
     805,     0,  2614,     0,  1632,     0,     0,     0,  1078,     0,
       0,   812,     0,     0,     0,     0,     0,  2624,     0,  1079,
     820,     0,     0,     0,     0,     0,     0,     0,  1333,     0,
       0,     0,     0,     0,     0,  1080,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2232,     0,  2233,     0,     0,
       0,     0,  2635,     0,     0,     0,  1824,     0,  2640,     0,
    2642,     0,     0,     0,     0,     0,  2646,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1382,
    2653,     0,     0,     0,     0,     0,     0,     0,     0,   856,
       0,     0,   858,   859,     0,     0,  2694,  1382,  2664,     0,
       0,  2234,  2668,     0,     0,   863,     0,     0,     0,     0,
     866,     0,     0,     0,     0,  1880,     0,     0,  1882,   878,
     880,  2686,     0,     0,     0,     0,     0,     0,     0,  1900,
       0,     0,     0,     0,     0,     0,     0,  1906,     0,     0,
       0,     0,     0,     0,  1908,     0,     0,  2697,     0,     0,
       0,     0,     0,  2702,     0,  2704,     0,     0,     0,     0,
       0,     0,  2708,     0,     0,     0,     0,  2711,     0,     0,
       0,     0,  2714,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   924,   925,   926,   927,     0,
       0,     0,     0,  2725,  2727,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1382,     0,     0,  1382,  2737,     0,     0,  2738,     0,
    1382,  2740,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2746,  2747,  2748,  2749,     0,     0,     0,  1895,
       0,     0,   639,   640,  2758,  1068,     0,  2761,     0,     0,
       0,     0,     0,     0,  2765,     0,  2767,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1720,  1721,  1722,     0,  1995,     0,     0,  1382,     0,  1382,
    1724,  1725,  1726,     0,     0,     0,     0,  1737,  1738,  1739,
       0,     0,  1740,  1741,     0,  1743,  1744,     0,   641,     0,
    1948,     0,     0,     0,   642,     0,  1954,     0,     0,     0,
       0,   643,     0,   644,     0,     0,     0,     0,   645,     0,
       0,   646,     0,     0,     0,  1816,  1817,   647,     0,  1819,
    1820,     0,     0,     0,     0,     0,     0,   648,     0,  2037,
       0,     0,     0,   649,  2482,     0,     0,     0,     0,  2043,
       0,     0,   650,     0,  2048,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   651,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1992,     0,     0,   652,     0,
       0,  1997,     0,     0,  1201,     0,     0,     0,     0,     0,
       0,     0,     0,   653,  1736,     0,  1206,     0,     0,     0,
       0,     0,   654,   655,     0,  2012,  1746,     0,     0,     0,
       0,     0,  2018,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   656,  1807,  1808,     0,     0,     0,     0,
       0,     0,     0,  1216,  1217,     0,     0,     0,  2032,     0,
       0,     0,     0,     0,   657,     0,  2039,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1236,   658,     0,
     659,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   660,     0,     0,     0,     0,   661,     0,
       0,     0,     0,     0,   662,     0,     0,     0,     0,  1481,
       0,   663,     0,     0,  1482,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2175,     0,  1305,  2179,     0,     0,
     664,     0,     0,     0,     0,  1483,  1484,     0,  1485,  1486,
       0,     0,     0,   665,   666,     0,   667,     0,     0,  1487,
       0,     0,     0,     0,  2586,     0,     0,     0,     0,     0,
       0,  1488,  1489,     0,     0,     0,     0,     0,     0,  1490,
       0,     0,  1491,     0,  2604,     0,     0,     0,  2608,     0,
       0,     0,     0,     0,     0,     0,   668,     0,     0,  1492,
       0,     0,     0,     0,     0,     0,  1493,  1494,     0,   106,
    1495,  1451,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   107,     0,     0,     0,     0,     0,
       0,  2165,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   108,     0,     0,     0,     0,
       0,     0,     0,  2180,     0,    64,    65,     0,     0,     0,
       0,   109,     0,  1512,     0,     0,     0,     0,     0,  1496,
       0,   107,     0,  1518,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2203,     0,  2205,
    1170,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2067,     0,     0,   110,  2210,   109,  2212,
       0,     0,     0,  2214,     0,  2216,  2075,  2299,     0,     0,
       0,     0,  1497,     0,   111,     0,  2078,     0,  1498,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1499,     0,     0,     0,     0,     0,     0,
       0,     0,  1500,   110,     0,  2260,  2330,     0,  2264,  2265,
       0,     0,   112,     0,     0,     0,     0,  2269,     0,     0,
       0,     0,     0,     0,  1595,     0,     0,     0,     0,     0,
    1501,  1502,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1603,     0,     0,     0,     0,     0,     0,  2163,   113,
       0,  1503,  2278,     0,     0,     0,     0,   114,     0,   112,
       0,     0,     0,   115,   116,  1627,     0,     0,  2290,   117,
       0,     0,     0,  2743,   118,     0,  1634,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2304,
    2076,     0,     0,     0,  2308,  1504,     0,     0,  2082,  2083,
    2313,     0,     0,  1660,     0,  2317,     0,     0,  1668,  2320,
       0,  2401,  2323,  2119,  2120,  2326,   117,  2328,     0,     0,
       0,   118,     0,     0,  2130,  2131,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2141,  2142,     0,     0,     0,
    2422,     0,     0,     0,     0,  2151,  2152,     0,   119,     0,
    2432,  2157,     0,     0,     0,     0,  2439,     0,     0,     0,
       0,  2160,     0,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,     0,     0,     0,     0,     0,   149,     0,     0,
       0,   150,   151,     0,     0,     0,     0,     0,     0,     0,
       0,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,  1341,
       0,  1823,     0,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,  1845,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
    1879,     0,     0,  1881,     0,     0,  2334,     0,     0,     0,
    2474,     0,     0,     0,  1899,  1901,     0,     0,     0,     0,
       0,     0,  1905,     0,     0,     0,     0,     0,     0,  1907,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      64,    65,  2547,     0,     0,     0,  2366,  2367,  2368,  2369,
    2370,     0,  2372,  2373,     0,     0,   107,  2377,  2378,  2379,
    2380,  2381,     0,  2383,  2384,     0,     0,     0,     0,  1947,
       0,     0,  1950,  1951,     0,     0,     0,     0,     0,     0,
       0,     0,  1959,     0,     0,     0,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,  1342,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2335,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2337,     0,     0,   110,  2341,
    2342,     0,     0,     0,     0,     0,     0,     0,  2350,  2351,
       0,     0,  1990,     0,     0,  2545,     0,  2359,  2360,  1994,
       0,     0,  2550,  2365,     0,     0,  2552,     0,     0,     0,
       0,     0,     0,  2375,  2376,     0,     0,  2010,     0,     0,
       0,     0,     0,  2558,  2386,  2387,     0,     0,     0,     0,
       0,     0,  2638,  2019,   112,  2390,     0,     0,     0,     0,
    2644,     0,     0,     0,  2392,     0,  2393,     0,     0,     0,
       0,     0,  2026,     0,     0,     0,     0,  2031,     0,     0,
    2033,     0,  2034,  2035,  2036,  2038,     0,     0,  2040,     0,
       0,  2041,     0,     0,  2042,  2044,     0,  2045,  2046,  2047,
    2049,     0,  2050,  2051,     0,     0,     0,     0,  2053,  2054,
    2055,     0,     0,  2056,  2057,     0,   118,     0,     0,  2058,
    2059,     0,     0,     0,     0,  2511,     0,     0,  2513,  2514,
    2515,  2516,  2517,     0,  2519,  2520,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2524,  2525,  2526,  2527,
    2528,     0,  2530,  2531,     0,  2533,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2536,  2537,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2540,     0,     0,     0,
       0,     0,     0,   517,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2657,     0,   107,     0,
       0,     0,  2733,     0,     0,     0,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,  2753,   109,   879,  2756,     0,     0,
       0,     0,     0,  2166,  2512,     0,     0,  2169,     0,     0,
       0,   107,     0,     0,  2521,     0,     0,     0,     0,  2174,
       0,     0,  2178,  2523,     0,     0,     0,     0,     0,     0,
       0,     0,  2532,     0,     0,     0,     0,     0,     0,  2534,
     110,     0,     0,     0,     0,     0,     0,  2716,     0,     0,
    2538,     0,  2198,     0,     0,     0,  2541,     0,     0,  2543,
       0,     0,  2544,     0,     0,     0,  2729,     0,     0,     0,
       0,  2626,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2629,     0,  2630,     0,     0,     0,  2632,     0,
       0,     0,     0,   110,     0,     0,   112,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   342,     0,     0,     0,
    2754,     0,     0,   343,  2252,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2768,     0,     0,  2769,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   112,
       0,     0,     0,   117,     0,     0,     0,     0,   118,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2690,     0,     0,  2691,     0,
       0,  2692,     0,  2693,     0,     0,  2625,     0,     0,  2291,
    2627,     0,     0,     0,     0,     0,     0,  2628,     0,     0,
       0,     0,     0,  2631,     0,     0,     0,  2633,     0,     0,
    2634,   118,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2321,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   107,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   344,
       0,   345,     0,     0,     0,   490,   491,     0,     0,   492,
       0,     0,     0,     0,     0,     0,  2400,   596,   107,  2404,
       0,   957,     0,     0,     0,     0,   958,     0,     0,  2408,
       0,   493,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   110,     0,     0,     0,  2421,     0,     0,  2425,     0,
       0,     0,     0,     0,     0,  2431,     0,   597,     0,     0,
    2437,  2438,     0,     0,     0,     0,     0,     0,     0,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   112,     0,     0,
     110,     0,     0,     0,     0,     0,     0,     0,     0,   494,
       0,     0,     0,     0,   598,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   495,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   496,     0,     0,     0,
    2501,     0,     0,     0,     0,     0,   112,     0,     0,   118,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   599,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,     0,     0,     0,     0,     0,     0,     0,     0,   497,
       0,     0,     0,     0,     0,     0,     0,     0,   118,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2546,     0,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,     0,   498,     0,
       0,     0,     0,     0,     0,   600,     0,     0,  2566,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2578,     0,     0,     0,     0,     0,     0,     0,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,     0,     0,     0,     0,
     979,   980,   981,     0,     0,     0,     0,     0,     0,     0,
    2622,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   982,   983,
       0,     0,   984,     0,     0,   985,     0,     0,     0,     0,
       0,     0,   986,     0,     0,     0,   987,     0,     0,     0,
       0,     0,     0,     0,   988,   989,     0,  2637,  2639,     0,
    2641,     0,   990,   991,     0,  2643,  2645,     0,     0,     0,
    2647,     0,     0,     0,     0,     0,     0,     0,     0,   992,
       0,     0,     0,     0,     0,   993,     0,     0,     0,   994,
     995,     0,     0,   996,     0,   107,     0,     0,     0,  1244,
    1245,  1246,     0,     0,  2669,     0,     0,     0,     0,     0,
     997,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2688,  1247,  1248,     0,
     998,  1249,   109,   107,     0,     0,     0,     0,  1250,     0,
       0,  1251,     0,     0,     0,  1252,     0,     0,     0,     0,
       0,     0,   999,  1253,  1254,     0,     0,     0,     0,     0,
       0,  1255,   107,     0,     0,     0,     0,     0,     0,     0,
     109,     0,     0,     0,     0,  1000,     0,   110,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1256,  1257,
       0,     0,  1258,     0,     0,     0,     0,     0,     0,  1304,
       0,     0,     0,  1001,     0,  1002,     0,  2732,     0,  1259,
       0,  1003,  1004,     0,   107,   110,     0,     0,     0,     0,
       0,     0,     0,     0,  2741,  1005,  1006,     0,     0,  1260,
       0,     0,     0,   112,     0,  1007,  1008,     0,     0,  2752,
       0,     0,  2755,     0,   110,     0,     0,     0,     0,     0,
       0,  1261,     0,     0,   504,     0,     0,     0,     0,     0,
    1262,     0,  1009,     0,  1010,     0,     0,     0,     0,     0,
       0,   112,     0,     0,     0,     0,  1011,     0,  1012,     0,
       0,     0,   107,     0,  1013,     0,     0,     0,     0,     0,
     117,     0,     0,     0,     0,   118,   110,     0,     0,     0,
     112,     0,  1263,     0,  1264,     0,     0,     0,     0,     0,
    1265,  1266,     0,     0,     0,     0,     0,     0,  1014,     0,
       0,     0,     0,     0,     0,  1267,     0,     0,   117,     0,
       0,     0,     0,   118,     0,  1268,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   112,   508,     0,     0,     0,     0,     0,     0,
       0,  1269,   118,  1270,   110,     0,     0,     0,     0,     0,
       0,     0,     0,  1271,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1272,     0,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,     0,   118,     0,     0,  1273,     0,     0,
     112,     0,     0,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,     0,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
       0,   505,   118,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
       1,     0,     0,     2,     0,     3,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     4,     0,
       0,     0,     0,     5,     6,     0,     7,     8,     9,     0,
       0,     0,     0,     0,     0,     0,    10,     0,     0,     0,
       0,     0,     0,    11,     0,    12,    13,   176,     0,     0,
     177,     0,   178,     0,    14,    15,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   179,     0,   180,   181,   182,     0,     0,     0,     0,
       0,     0,     0,   183,    16,   184,     0,     0,     0,     0,
     185,     0,   186,   187,   188,     0,    17,     0,     0,   189,
      18,   190,     0,    19,     0,     0,     0,     0,    20,    21,
       0,     0,     0,     0,     0,    22,     0,     0,     0,     0,
       0,    23,     0,     0,     0,     0,     0,     0,     0,     0,
     191,     0,     0,     0,    24,     0,     0,    25,    26,    27,
       0,     0,    28,    29,     0,     0,     0,   192,     0,     0,
       0,     0,     0,     0,     0,     0,    30,     0,   193,   194,
       0,     0,   195,     0,     0,     0,   196,     0,   197,     0,
       0,    31,    32,    33,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    34,     0,    35,     0,   198,
     199,     0,     0,   200,    36,     0,     0,    37,     0,     0,
      38,     0,    39,   201,    40,     0,     0,     0,     0,    41,
       0,     0,     0,     0,     0,     0,     0,     0,   202,   203,
       0,     0,    42,     0,     0,     0,   204,     0,    43,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    44,    45,     0,     0,     0,   205,
       0,   206,     0,     0,     0,     0,    46,     0,    47,     0,
       0,     0,     0,     0,    48,     0,     0,    49,    50,     0,
       0,     0,     0,     0,     0,   207,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   208,   209,     0,     0,     0,     0,     0,    51,     0,
     210,     0,     0,     0,    52,     0,     0,   211,     0,     0,
       0,     0,     0,   212,     0,   213,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   214
};

static const yytype_int16 yycheck[] =
{
       3,    50,   481,  1427,  1629,     5,  1631,   659,    11,     5,
    1127,     0,  1129,     4,   654,   655,     3,     4,     5,     3,
       4,     3,     4,     3,     4,    32,     5,     4,   951,    32,
       4,   954,     4,     4,    57,    14,    15,    40,  1155,  1156,
    1157,     3,     4,    21,     3,     4,    49,    63,   971,    52,
       5,     5,    55,    66,     3,     4,    59,    21,    27,    62,
      17,   980,     4,    66,    67,     4,     5,    70,     3,     4,
      73,    74,    12,    78,    77,     3,     4,    36,    81,    32,
      27,     6,    61,    86,    16,   133,    46,    36,   104,  2019,
     121,    40,    66,     3,     4,    66,    99,   193,   101,   102,
     103,   104,    32,  2033,  2034,  2035,   131,     6,  2038,     4,
    2040,  2041,     4,    53,  2044,  2045,  2046,   120,     4,  2049,
    2050,    14,     4,  2053,    66,  2055,  2056,    66,  2058,    66,
      27,    71,   168,     3,     4,    93,     5,     3,     4,    87,
     282,     4,     5,   168,    99,   119,     5,    27,   119,    88,
     105,    48,   155,   111,    51,   860,   861,   862,   254,    33,
     100,  2675,   111,    17,     5,    62,    36,   172,    61,   182,
     211,     3,     4,   132,   144,   166,   179,   119,   118,    16,
     119,   184,   122,   132,    20,     4,    21,   223,    85,    88,
       3,     4,   157,     5,   134,   120,   244,    21,   223,   168,
     139,   224,    14,    15,  2718,   102,   237,   187,   169,   157,
     194,   190,   191,   193,    61,   238,   177,   922,   234,   184,
     167,   120,     5,     3,     4,   187,    66,   119,   202,   187,
       5,   202,   248,   249,   208,   209,  2166,   208,   209,  2169,
     256,   244,   247,   292,  2174,   194,    78,   899,  2178,    61,
     230,     4,   288,   210,   223,   280,   119,   260,   261,   237,
     202,   302,   132,   202,   196,    21,   208,   209,  2198,   208,
     209,   274,   279,   237,   254,    61,   289,   300,    27,   282,
     283,   260,   285,   286,    21,   288,    63,   283,    14,    15,
     237,   270,   271,   282,    21,   298,   275,   190,   193,   134,
     119,   433,   302,    56,   307,   308,   290,   284,   290,   269,
     202,   193,   284,   267,   446,   302,   208,   209,   309,   293,
     300,   187,   293,   302,   340,   341,   279,   104,   331,   332,
     333,   290,   335,   280,   291,    61,   339,   340,   300,   202,
     172,   290,   117,   223,   299,   208,   209,   350,   351,   279,
     290,   293,  1004,   356,   293,   290,   210,   243,   361,   362,
     299,  2291,   290,   343,   344,   247,   369,   260,   342,   372,
    1022,   342,   346,   347,   243,   346,   347,   270,   190,   191,
     290,   343,   344,   202,   225,    27,   245,   390,   391,   208,
     209,  2321,   284,   206,   397,   398,   399,   233,   401,    13,
     342,   293,   237,   342,   346,   347,   345,   346,   347,   302,
      28,    40,   415,   237,  1054,   247,   419,   192,   167,    63,
     290,   424,   425,   426,   427,   428,   429,    27,   431,   264,
     293,   434,   435,   280,   300,  1358,   299,   291,  1361,     3,
       4,  1558,    40,   223,   447,  1085,   309,   229,   260,    97,
     342,   348,    37,     4,   346,   347,   303,   234,   270,   271,
     104,   214,    50,   275,   190,   191,     3,     4,   243,  1388,
    2400,   248,   249,     4,   293,     3,     4,   343,   344,   342,
     124,   237,   111,   346,   347,    64,    88,    66,   237,    40,
     302,  2421,   267,    61,   280,     4,  1415,    17,   501,   502,
     237,  2431,    56,    40,    30,    37,   229,  2437,  2438,     5,
     237,    99,    70,   111,  1219,    47,   519,   303,    34,  1438,
     108,  1226,    59,   342,    22,   121,   168,   346,   347,   578,
     121,   280,   121,   151,   260,    31,   105,     5,    61,     4,
       5,     4,    74,   546,   270,   271,    14,    15,   136,     3,
       4,    49,   120,   685,    52,   173,     4,    55,   103,   177,
     111,    61,   138,   340,   341,   194,    45,    30,    94,     4,
     619,     5,   575,   193,   111,   189,   302,    12,   266,     4,
      59,   223,     3,     4,    82,     3,     4,    14,    87,   638,
     234,   107,    61,    61,    21,    60,   194,   120,     0,    26,
     176,    66,    81,   182,   248,   249,    33,   610,    56,   227,
     258,   169,   110,   198,  1266,   113,  2546,     5,   150,     5,
     120,   100,    56,   223,   121,  1277,   195,   247,    14,    15,
      61,    65,   261,   636,   157,    56,  2566,   163,   117,   159,
     150,   120,   187,   194,    71,   241,   237,   265,   237,   114,
     653,   120,     5,   656,   186,   273,   274,   194,   157,   223,
     214,    14,    15,   261,  2289,   130,    88,   146,   147,    14,
      15,   674,   675,   676,   677,    61,   245,   680,   143,   682,
     138,   684,     5,   686,   242,   150,     4,   203,   820,   120,
     155,     5,   243,   251,   116,   223,   340,   341,   161,   124,
       3,     4,   270,    61,   292,   123,   216,  2637,    61,  2639,
     289,  2641,   761,  2643,    61,  2645,    61,  2647,   176,   251,
     199,   247,   190,   191,    61,   165,   252,   225,   207,     5,
      66,    31,   864,   160,   161,   162,   163,   164,   165,   166,
     237,   206,   169,   170,   171,   172,   256,   270,   211,   286,
     753,   754,   206,   756,   757,   758,   759,   255,   150,   121,
     225,     5,   120,   185,  2694,   230,   214,   232,   771,   772,
     270,   303,    44,   120,   237,   778,   779,    61,   200,   204,
     214,    61,     5,   120,   282,   295,    28,   266,   267,    37,
     255,   256,   260,   214,   130,   798,   799,   800,   263,    47,
     194,   270,   270,   271,   190,   191,    61,   275,    82,  1732,
      40,  2741,   815,   816,   817,    87,   819,   282,   821,   155,
     823,    61,   262,    17,  2572,    54,    74,     3,     4,  1752,
      30,   258,   259,    22,   302,   257,   120,   190,   191,   270,
     120,   844,  2590,   846,  1767,   190,   191,  1770,   117,   105,
     121,  1968,  1969,  1970,   857,  1778,    66,   284,  1781,   338,
      49,    90,   865,    52,   256,   120,  1789,   870,   131,  1792,
      83,     3,     4,   338,   260,   237,  1799,   299,   152,    35,
     120,   111,   885,   886,   270,   271,    99,   309,   259,   275,
     893,   894,   895,    82,   197,   266,   232,    26,   901,   326,
     327,   328,   150,   906,    98,     4,   243,   260,   957,   151,
      40,   140,   270,  1832,   917,   260,   302,   270,   271,   282,
     192,   110,   275,   270,   113,   270,   271,  1632,   118,  1848,
     933,   173,   169,   270,    82,   177,    66,    33,   186,   195,
       3,     4,    42,    43,     3,     4,   282,   221,   222,   302,
     106,    61,     3,     4,     3,     4,    19,   302,  1877,  2707,
     223,   161,   236,    40,   194,  2713,   237,     3,     4,    99,
       5,   127,   128,   129,  1106,   105,    39,   980,    89,   135,
      66,   111,   230,   112,     5,   227,   270,    24,    25,   245,
     270,    40,   148,    56,   203,   124,    17,  1000,   154,    16,
     130,    89,   276,   251,   152,    83,   138,   117,   164,   259,
     120,   211,     3,     4,   243,   270,   266,   280,  1021,   230,
     150,    99,  2770,   265,  2772,    72,    17,  1030,   281,  2453,
     270,   273,   274,    31,   111,   165,   225,   237,   101,   287,
     187,  1044,     5,  1046,   176,     4,   193,   157,  1051,  1052,
    1053,     4,     3,     4,     4,   303,     3,     4,  1061,     5,
      97,  1064,   111,  1066,   123,   195,   255,     5,  1987,     5,
     170,   171,   123,   221,   222,     5,   205,     4,     5,  1082,
       5,  1084,   192,   230,     4,  1088,  1089,     5,   236,   218,
       4,  1223,     0,    40,   157,     3,     4,   175,   198,  1102,
    1103,     4,   232,     4,  1107,  1108,     4,   254,    59,     3,
       4,  1114,     5,  1116,     4,   245,  1119,   194,  1121,     3,
       4,  1170,   278,     4,     5,    97,   256,   120,   276,     5,
     240,   194,   341,   243,    14,    15,     4,   346,   216,   348,
       3,     4,    14,    15,    26,   194,    40,     4,     5,     3,
       4,   214,   267,   300,   284,  1158,   219,   267,    12,  1162,
     270,  1164,  1165,     4,   111,  1168,   296,   230,   298,   299,
    2093,   281,   250,     3,     4,    59,     4,   604,     4,  2102,
    1183,    61,  1185,     4,  1187,  1188,  1189,  1190,  2111,    61,
      29,  1194,  1195,     3,     4,    32,    59,   344,     5,  1202,
       4,     5,    12,     4,     5,    44,  1209,    46,   338,     4,
    1213,  1214,  1215,   197,     3,     4,     5,   111,     7,     8,
       4,  1224,   421,   422,  1227,     4,     4,   290,     4,     9,
     112,   658,     5,     3,     4,  1238,   663,    76,  1241,     9,
      10,    11,   124,  1948,     5,    84,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,     3,     4,   113,   159,     7,     8,
      11,  1284,     5,  1286,   266,   177,  1289,  1290,     4,  1292,
     169,  1294,     3,     4,     5,    14,    15,  1300,    53,  1302,
       3,     4,     5,   142,     4,  2224,  1309,   169,     4,  2445,
     190,   191,  2448,  2018,  2450,     5,    71,     5,   190,   191,
    1452,  2240,   196,   205,     4,   196,  2245,  2463,  2464,     3,
       4,     5,   196,    88,  2039,   188,   218,   188,    66,    66,
      66,     5,    61,     5,  2480,   100,   223,   184,     4,   186,
       4,   188,   189,   192,   224,     4,     3,     4,     5,   196,
       7,     8,   196,   118,     5,     5,    87,   122,     4,   208,
     209,     4,    87,     5,   211,   802,   215,     5,   217,   134,
     260,  1384,     5,  1386,  1387,  1388,     4,  1519,   260,    99,
     270,   271,    14,    15,    14,    15,    17,     4,   270,   271,
       5,    17,    17,     4,   243,  1408,     3,     4,     5,  1412,
       7,     8,  1415,     4,     4,     4,    97,     5,     5,   174,
      87,     4,   302,     5,     5,     5,    87,     4,    12,     5,
     302,     5,     4,  1436,  1437,  1438,     4,    12,     5,    61,
       5,    61,     5,  1446,     4,     4,     4,  1450,   285,     5,
       4,     4,     4,     4,   166,  1458,     5,     5,     5,     4,
       4,   255,     5,     4,   255,   284,     5,     4,     4,  1472,
     309,   190,   191,     5,  1477,     5,     5,     5,  1481,     4,
    1483,  1484,     5,  1486,  1487,  1488,     5,  1490,     5,     5,
    1493,  1494,  1495,  1496,  1497,  1498,  1499,  1500,  1501,  1502,
    1503,   268,    66,  1506,  1507,  1508,  1509,     5,   268,     4,
       4,   105,     5,  1516,  1517,     5,    80,     5,  1521,  1522,
    1523,     5,  2441,  1526,  1527,    89,     5,     5,     4,     4,
    2449,     5,     5,     4,   138,    99,  1539,  1540,     5,  1542,
    1543,   260,     5,  2462,   237,   237,     5,     5,  2467,    40,
     105,   270,   271,   237,    40,  2260,   241,   210,   210,   105,
       5,     4,   210,     5,  2269,   287,   130,     5,   190,   191,
     190,   191,   210,     4,     4,    12,     5,   111,     5,     5,
       5,     4,     4,   302,   111,     5,   150,  1590,  1591,  1592,
       5,     5,     4,  1596,     5,   432,     5,     4,  1601,  1602,
    1027,  1604,  1605,  1606,     5,  1608,  1609,     5,  1611,     4,
       4,  1614,  1615,     5,    19,  2320,     5,     5,  2323,     5,
    1623,  2326,    12,  2328,   346,     6,     4,  1630,     5,     4,
       4,   195,     4,  1636,  1637,     4,     4,     4,   260,    44,
     260,  1644,    38,     5,     0,    38,     5,  1650,   270,   271,
     270,   271,   237,   138,  1081,   168,   121,     4,   237,   237,
       4,   196,     4,    91,  1091,     4,   206,     4,   232,     4,
     268,    99,    77,     5,   245,     5,     5,   105,     5,    84,
     302,     5,   302,  1686,     5,     4,     4,     4,   525,    94,
      95,     5,   256,     4,     4,   237,   101,     5,   126,     5,
       5,     4,     4,   306,   237,  1708,  1709,   306,     4,     4,
    1713,   237,     4,     4,   306,     4,  1719,     4,   223,   124,
     557,     5,   150,     5,   223,     5,   223,   223,     5,     4,
     158,   223,   296,   306,   298,     5,   141,     5,     4,     0,
       5,     5,     4,  2451,     4,     4,   268,     5,  1880,     5,
       4,   156,   157,     4,     6,     5,     5,     4,   163,     5,
       5,     4,     4,  1895,  1896,     5,     4,   195,  1900,  2477,
       4,  1198,  1199,     4,  1906,   203,  1908,   499,   183,     5,
       5,     5,     5,     4,   506,  2704,     5,   509,     4,     6,
       5,     5,   514,     5,     4,     4,   518,     5,     4,   268,
       5,     5,     5,     4,     4,    12,     5,     5,     5,     5,
       4,     4,   268,     5,   219,     5,     5,   245,     5,     4,
       4,     4,  1954,  1826,     5,  1828,     5,  1830,   256,  1832,
       5,     5,     4,   282,     5,     5,     5,     5,     4,     4,
     349,     5,     4,     4,   272,  1848,  1849,  1850,  1851,  1852,
    1853,  1854,  1855,  1856,  1857,     4,     4,     4,   580,     5,
       5,     5,  2570,  2571,   269,  1997,  2574,     5,  2576,     5,
    1873,     4,  1875,     5,  1877,   280,     4,     4,     4,  1882,
    2588,  2589,     5,     5,     4,  2593,  2594,     4,     4,  2597,
       4,  1894,     5,     5,  2602,  2603,     4,     4,     4,  1902,
       5,     5,     5,     5,   309,     5,     5,     4,     4,     4,
    1913,  1914,  1915,  1916,  1917,  1918,  1919,  1920,  1921,  1922,
       5,     5,  1925,  1926,  1927,  1928,  1929,  1930,  1931,  1932,
    1933,  1934,  1935,  1936,     5,  1938,     4,  1940,  1941,  1942,
       5,  2649,     5,     5,  2652,     5,     4,     4,     4,  2657,
       5,     5,  1379,  1956,  2606,  2663,     5,     5,  1385,   681,
    2668,     4,   349,     5,     4,     4,   688,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,   349,
    1407,     4,   302,  1410,  1987,  1988,   349,  1414,  1991,   349,
    1993,   349,  1995,     4,   349,  1998,   349,  2000,     5,     5,
       4,     6,     5,     4,  2007,  2008,     4,   844,  1435,     5,
       5,  2014,     5,  2016,  1441,     4,     4,  2020,     4,     4,
    2023,     4,  1449,     4,     4,  2677,  1453,     4,  2736,     4,
       4,  2739,     5,     4,     4,  1462,  1463,     5,     5,     5,
       5,     5,     5,     5,     4,     4,  1473,     5,     4,   282,
       5,  2759,     4,     4,     4,   349,     5,     5,     4,     4,
       4,     4,     4,  2066,     5,  2773,     5,     5,  2776,  2777,
       4,  2203,  2204,  2205,     4,     4,  2208,     5,  2210,  2211,
       5,     5,  2214,   805,  2216,     4,   420,     5,     5,     5,
     812,     4,     4,   376,     5,     5,     5,  2729,  2614,  2509,
    2235,  2604,  2677,  2673,    -1,    -1,   720,    -1,    -1,    -1,
      32,    -1,    -1,    -1,    -1,  2164,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   858,    -1,    -1,    -1,
      -1,   863,    -1,    -1,   866,    -1,  2278,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   878,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1003,  2170,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2183,  2184,  2185,  2186,  2187,  2188,  2189,  2190,  2191,  2192,
    2193,   113,    -1,    -1,    -1,    -1,  2199,    -1,    -1,    -1,
      -1,    -1,    -1,  2206,    -1,    -1,  2209,  2686,  2687,    -1,
      -1,    -1,  2215,    -1,    -1,  2218,  2219,  2220,  2221,  2222,
    2223,  2224,  2225,  2226,  2227,    -1,    -1,    -1,  1065,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2240,  2241,  2242,
    2243,  2244,  2245,  2246,  2247,  2248,  2249,  2250,  2251,    -1,
    2253,    -1,  2255,  2256,  2257,    -1,   978,    -1,    -1,    -1,
      -1,   183,    -1,   185,   186,    -1,   188,   189,    -1,    -1,
      -1,    -1,  2275,    -1,    -1,    -1,  2279,    -1,    -1,    -1,
    2283,    -1,    -1,    -1,  2287,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   216,  2427,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2435,    -1,    -1,    -1,    -1,    55,    -1,
      -1,    -1,   234,   235,    -1,    -1,    -1,    -1,    -1,    66,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2332,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2474,    -1,    91,    92,  1183,    -1,    -1,    -1,
      -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,   105,    -1,
      -1,    -1,    -1,   285,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   126,
      -1,    -1,   304,   130,    -1,    -1,    -1,    -1,   938,    -1,
      -1,    -1,    -1,  1230,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2405,   150,    -1,    -1,  2409,    -1,  1245,    -1,
      -1,   158,    -1,    -1,    -1,  1842,  2419,  2420,    -1,    -1,
     970,    -1,    -1,  2426,    -1,    -1,    -1,    -1,    -1,    -1,
    2433,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2441,    -1,
    2443,    -1,    -1,  2446,  2447,    -1,  2449,    -1,   195,  1171,
      -1,  1878,    -1,    -1,    -1,    -1,   203,    -1,    -1,  2462,
      -1,    -1,  2465,  2466,  2467,  2468,  2469,  2470,  2471,  2472,
      -1,    -1,  2475,    -1,    -1,    -1,  2479,    -1,    -1,  1201,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2490,    -1,    -1,
     412,    -1,  2495,    -1,  1216,    -1,    -1,    -1,   245,    -1,
      -1,   423,    -1,    -1,    -1,    -1,    -1,  2510,    -1,   256,
     432,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   950,    -1,
      -1,    -1,    -1,    -1,    -1,   272,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   282,    -1,   284,    -1,    -1,
      -1,    -1,  2545,    -1,    -1,    -1,  1383,    -1,  2551,    -1,
    2553,    -1,    -1,    -1,    -1,    -1,  2559,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2572,
    2573,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   501,
      -1,    -1,   504,   505,    -1,    -1,  2635,  2590,  2591,    -1,
      -1,   338,  2595,    -1,    -1,   517,    -1,    -1,    -1,    -1,
     522,    -1,    -1,    -1,    -1,  1442,    -1,    -1,  1445,   531,
     532,  2614,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1456,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1464,    -1,    -1,
      -1,    -1,    -1,    -1,  1471,    -1,    -1,  2640,    -1,    -1,
      -1,    -1,    -1,  2646,    -1,  2648,    -1,    -1,    -1,    -1,
      -1,    -1,  2655,    -1,    -1,    -1,    -1,  2660,    -1,    -1,
      -1,    -1,  2665,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   597,   598,   599,   600,    -1,
      -1,    -1,    -1,  2686,  2687,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2704,    -1,    -1,  2707,  2708,    -1,    -1,  2711,    -1,
    2713,  2714,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2725,  2726,  2727,  2728,    -1,    -1,    -1,  1451,
      -1,    -1,     4,     5,  2737,   657,    -1,  2740,    -1,    -1,
      -1,    -1,    -1,    -1,  2747,    -1,  2749,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1310,  1311,  1312,    -1,  1601,    -1,    -1,  2770,    -1,  2772,
    1320,  1321,  1322,    -1,    -1,    -1,    -1,  1327,  1328,  1329,
      -1,    -1,  1332,  1333,    -1,  1335,  1336,    -1,    60,    -1,
    1512,    -1,    -1,    -1,    66,    -1,  1518,    -1,    -1,    -1,
      -1,    73,    -1,    75,    -1,    -1,    -1,    -1,    80,    -1,
      -1,    83,    -1,    -1,    -1,  1365,  1366,    89,    -1,  1369,
    1370,    -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,  1666,
      -1,    -1,    -1,   105,  2261,    -1,    -1,    -1,    -1,  1676,
      -1,    -1,   114,    -1,  1681,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   130,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1597,    -1,    -1,   150,    -1,
      -1,  1603,    -1,    -1,   806,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   165,  1326,    -1,   818,    -1,    -1,    -1,
      -1,    -1,   174,   175,    -1,  1627,  1338,    -1,    -1,    -1,
      -1,    -1,  1634,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   195,  1356,  1357,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   855,   856,    -1,    -1,    -1,  1660,    -1,
      -1,    -1,    -1,    -1,   216,    -1,  1668,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   879,   230,    -1,
     232,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   245,    -1,    -1,    -1,    -1,   250,    -1,
      -1,    -1,    -1,    -1,   256,    -1,    -1,    -1,    -1,    22,
      -1,   263,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1841,    -1,   928,  1844,    -1,    -1,
     282,    -1,    -1,    -1,    -1,    48,    49,    -1,    51,    52,
      -1,    -1,    -1,   295,   296,    -1,   298,    -1,    -1,    62,
      -1,    -1,    -1,    -1,  2461,    -1,    -1,    -1,    -1,    -1,
      -1,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      -1,    -1,    85,    -1,  2481,    -1,    -1,    -1,  2485,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   338,    -1,    -1,   102,
      -1,    -1,    -1,    -1,    -1,    -1,   109,   110,    -1,     4,
     113,  1003,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,  1823,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1845,    -1,     3,     4,    -1,    -1,    -1,
      -1,    56,    -1,  1055,    -1,    -1,    -1,    -1,    -1,   172,
      -1,    19,    -1,  1065,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1879,    -1,  1881,
       6,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1723,    -1,    -1,   101,  1899,    56,  1901,
      -1,    -1,    -1,  1905,    -1,  1907,  1736,  2024,    -1,    -1,
      -1,    -1,   225,    -1,   119,    -1,  1746,    -1,   231,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   246,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   255,   101,    -1,  1947,  2063,    -1,  1950,  1951,
      -1,    -1,   157,    -1,    -1,    -1,    -1,  1959,    -1,    -1,
      -1,    -1,    -1,    -1,  1166,    -1,    -1,    -1,    -1,    -1,
     283,   284,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1183,    -1,    -1,    -1,    -1,    -1,    -1,  1818,   194,
      -1,   304,  1994,    -1,    -1,    -1,    -1,   202,    -1,   157,
      -1,    -1,    -1,   208,   209,  1207,    -1,    -1,  2010,   214,
      -1,    -1,    -1,  2720,   219,    -1,  1218,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2031,
    1742,    -1,    -1,    -1,  2036,   348,    -1,    -1,  1750,  1751,
    2042,    -1,    -1,  1245,    -1,  2047,    -1,    -1,  1250,  2051,
      -1,  2168,  2054,  1765,  1766,  2057,   214,  2059,    -1,    -1,
      -1,   219,    -1,    -1,  1776,  1777,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1787,  1788,    -1,    -1,    -1,
    2197,    -1,    -1,    -1,    -1,  1797,  1798,    -1,   293,    -1,
    2207,  1803,    -1,    -1,    -1,    -1,  2213,    -1,    -1,    -1,
      -1,  1813,    -1,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,    -1,    -1,    -1,    -1,    -1,   342,    -1,    -1,
      -1,   346,   347,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   162,
      -1,  1383,    -1,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,  1413,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
    1442,    -1,    -1,  1445,    -1,    -1,  2076,    -1,    -1,    -1,
    2252,    -1,    -1,    -1,  1456,  1457,    -1,    -1,    -1,    -1,
      -1,    -1,  1464,    -1,    -1,    -1,    -1,    -1,    -1,  1471,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,  2399,    -1,    -1,    -1,  2116,  2117,  2118,  2119,
    2120,    -1,  2122,  2123,    -1,    -1,    19,  2127,  2128,  2129,
    2130,  2131,    -1,  2133,  2134,    -1,    -1,    -1,    -1,  1511,
      -1,    -1,  1514,  1515,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1524,    -1,    -1,    -1,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2077,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2087,    -1,    -1,   101,  2091,
    2092,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2100,  2101,
      -1,    -1,  1594,    -1,    -1,  2397,    -1,  2109,  2110,  1601,
      -1,    -1,  2404,  2115,    -1,    -1,  2408,    -1,    -1,    -1,
      -1,    -1,    -1,  2125,  2126,    -1,    -1,  1619,    -1,    -1,
      -1,    -1,    -1,  2425,  2136,  2137,    -1,    -1,    -1,    -1,
      -1,    -1,  2549,  1635,   157,  2147,    -1,    -1,    -1,    -1,
    2557,    -1,    -1,    -1,  2156,    -1,  2158,    -1,    -1,    -1,
      -1,    -1,  1654,    -1,    -1,    -1,    -1,  1659,    -1,    -1,
    1662,    -1,  1664,  1665,  1666,  1667,    -1,    -1,  1670,    -1,
      -1,  1673,    -1,    -1,  1676,  1677,    -1,  1679,  1680,  1681,
    1682,    -1,  1684,  1685,    -1,    -1,    -1,    -1,  1690,  1691,
    1692,    -1,    -1,  1695,  1696,    -1,   219,    -1,    -1,  1701,
    1702,    -1,    -1,    -1,    -1,  2335,    -1,    -1,  2338,  2339,
    2340,  2341,  2342,    -1,  2344,  2345,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2356,  2357,  2358,  2359,
    2360,    -1,  2362,  2363,    -1,  2365,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2375,  2376,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2386,    -1,    -1,    -1,
      -1,    -1,    -1,     4,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2578,    -1,    19,    -1,
      -1,    -1,  2699,    -1,    -1,    -1,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,  2731,    56,     4,  2734,    -1,    -1,
      -1,    -1,    -1,  1825,  2336,    -1,    -1,  1829,    -1,    -1,
      -1,    19,    -1,    -1,  2346,    -1,    -1,    -1,    -1,  1841,
      -1,    -1,  1844,  2355,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2364,    -1,    -1,    -1,    -1,    -1,    -1,  2371,
     101,    -1,    -1,    -1,    -1,    -1,    -1,  2669,    -1,    -1,
    2382,    -1,  1874,    -1,    -1,    -1,  2388,    -1,    -1,  2391,
      -1,    -1,  2394,    -1,    -1,    -1,  2688,    -1,    -1,    -1,
      -1,  2521,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2532,    -1,  2534,    -1,    -1,    -1,  2538,    -1,
      -1,    -1,    -1,   101,    -1,    -1,   157,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    16,    -1,    -1,    -1,
    2732,    -1,    -1,    23,  1936,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2752,    -1,    -1,  2755,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   157,
      -1,    -1,    -1,   214,    -1,    -1,    -1,    -1,   219,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2625,    -1,    -1,  2628,    -1,
      -1,  2631,    -1,  2633,    -1,    -1,  2518,    -1,    -1,  2011,
    2522,    -1,    -1,    -1,    -1,    -1,    -1,  2529,    -1,    -1,
      -1,    -1,    -1,  2535,    -1,    -1,    -1,  2539,    -1,    -1,
    2542,   219,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2052,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   239,
      -1,   241,    -1,    -1,    -1,    65,    66,    -1,    -1,    69,
      -1,    -1,    -1,    -1,    -1,    -1,  2168,    18,    19,  2171,
      -1,   157,    -1,    -1,    -1,    -1,   162,    -1,    -1,  2181,
      -1,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   101,    -1,    -1,    -1,  2197,    -1,    -1,  2200,    -1,
      -1,    -1,    -1,    -1,    -1,  2207,    -1,    58,    -1,    -1,
    2212,  2213,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   157,    -1,    -1,
     101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   169,
      -1,    -1,    -1,    -1,   115,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   186,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,    -1,
    2302,    -1,    -1,    -1,    -1,    -1,   157,    -1,    -1,   219,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   173,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   269,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2399,    -1,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,    -1,   338,    -1,
      -1,    -1,    -1,    -1,    -1,   286,    -1,    -1,  2440,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2452,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,    -1,    -1,    -1,    -1,
      20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2502,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      -1,    -1,    52,    -1,    -1,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    74,    75,    -1,  2549,  2550,    -1,
    2552,    -1,    82,    83,    -1,  2557,  2558,    -1,    -1,    -1,
    2562,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,
      -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,   109,
     110,    -1,    -1,   113,    -1,    19,    -1,    -1,    -1,    20,
      21,    22,    -1,    -1,  2596,    -1,    -1,    -1,    -1,    -1,
     130,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2618,    48,    49,    -1,
     150,    52,    56,    19,    -1,    -1,    -1,    -1,    59,    -1,
      -1,    62,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,
      -1,    -1,   172,    74,    75,    -1,    -1,    -1,    -1,    -1,
      -1,    82,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      56,    -1,    -1,    -1,    -1,   195,    -1,   101,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,   110,
      -1,    -1,   113,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      -1,    -1,    -1,   223,    -1,   225,    -1,  2699,    -1,   130,
      -1,   231,   232,    -1,    19,   101,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2716,   245,   246,    -1,    -1,   150,
      -1,    -1,    -1,   157,    -1,   255,   256,    -1,    -1,  2731,
      -1,    -1,  2734,    -1,   101,    -1,    -1,    -1,    -1,    -1,
      -1,   172,    -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,
     181,    -1,   282,    -1,   284,    -1,    -1,    -1,    -1,    -1,
      -1,   157,    -1,    -1,    -1,    -1,   296,    -1,   298,    -1,
      -1,    -1,    19,    -1,   304,    -1,    -1,    -1,    -1,    -1,
     214,    -1,    -1,    -1,    -1,   219,   101,    -1,    -1,    -1,
     157,    -1,   223,    -1,   225,    -1,    -1,    -1,    -1,    -1,
     231,   232,    -1,    -1,    -1,    -1,    -1,    -1,   338,    -1,
      -1,    -1,    -1,    -1,    -1,   246,    -1,    -1,   214,    -1,
      -1,    -1,    -1,   219,    -1,   256,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   157,   277,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   282,   219,   284,   101,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   294,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   304,    -1,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,    -1,   219,    -1,    -1,   338,    -1,    -1,
     157,    -1,    -1,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,    -1,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
      -1,   286,   219,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
      41,    -1,    -1,    44,    -1,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    -1,
      -1,    -1,    -1,    64,    65,    -1,    67,    68,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    -1,    86,    87,    41,    -1,    -1,
      44,    -1,    46,    -1,    95,    96,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    65,    -1,    67,    68,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    77,   125,    79,    -1,    -1,    -1,    -1,
      84,    -1,    86,    87,    88,    -1,   137,    -1,    -1,    93,
     141,    95,    -1,   144,    -1,    -1,    -1,    -1,   149,   150,
      -1,    -1,    -1,    -1,    -1,   156,    -1,    -1,    -1,    -1,
      -1,   162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     124,    -1,    -1,    -1,   175,    -1,    -1,   178,   179,   180,
      -1,    -1,   183,   184,    -1,    -1,    -1,   141,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   197,    -1,   152,   153,
      -1,    -1,   156,    -1,    -1,    -1,   160,    -1,   162,    -1,
      -1,   212,   213,   214,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   226,    -1,   228,    -1,   183,
     184,    -1,    -1,   187,   235,    -1,    -1,   238,    -1,    -1,
     241,    -1,   243,   197,   245,    -1,    -1,    -1,    -1,   250,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   212,   213,
      -1,    -1,   263,    -1,    -1,    -1,   220,    -1,   269,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   285,   286,    -1,    -1,    -1,   243,
      -1,   245,    -1,    -1,    -1,    -1,   297,    -1,   299,    -1,
      -1,    -1,    -1,    -1,   305,    -1,    -1,   308,   309,    -1,
      -1,    -1,    -1,    -1,    -1,   269,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   285,   286,    -1,    -1,    -1,    -1,    -1,   339,    -1,
     294,    -1,    -1,    -1,   345,    -1,    -1,   301,    -1,    -1,
      -1,    -1,    -1,   307,    -1,   309,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   345
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
     300,   343,   344,   352,   392,   354,   138,   176,   391,   197,
     352,    78,   172,   247,   352,   394,     5,   352,     4,   243,
     396,   352,   352,     5,   225,   399,    31,   400,     5,   401,
       5,   405,     5,    31,   406,   352,     9,    10,    11,   352,
     358,   359,   360,   361,   352,   352,    40,   111,   194,   352,
     408,   352,   194,   362,   364,   352,    35,   106,   127,   128,
     129,   135,   148,   154,   164,   278,   367,   352,     4,   354,
     354,   354,   354,   354,   354,   354,   354,   354,   354,   354,
     117,    66,    53,    71,    88,   100,   118,   122,   134,   174,
     414,   118,   416,   187,   193,   230,   254,   300,   343,   344,
     352,   402,   417,   282,   420,   169,   421,   169,   177,   423,
      65,    66,    69,    91,   169,   186,   206,   269,   338,   362,
     425,   352,   364,   428,    59,   286,   362,   429,   277,   362,
     364,   430,    33,   431,   362,   364,   432,     4,   362,   364,
     433,    45,    59,    81,   100,   117,   120,   146,   147,   199,
     207,   266,   267,   338,   437,   211,   302,   443,     5,    89,
       6,    88,   120,   435,     5,    65,   364,   434,    16,   503,
      66,   182,   289,   444,    66,   230,   445,   281,    61,   280,
     303,   446,    21,   134,   237,   264,   447,    37,    47,    74,
     150,   186,   251,   303,   448,   364,    89,    16,   196,   453,
     362,   456,    72,   459,    31,   460,    44,    87,   192,   461,
     150,   216,   256,   295,   462,   362,    18,    58,   115,   173,
     286,   362,   463,     4,   193,   466,     5,     4,     6,   120,
     352,     4,     5,   243,   468,     5,   470,     5,   117,   192,
     243,   267,   471,    93,   111,   187,   484,     5,   482,     5,
     267,   483,     4,     5,   354,   354,   352,   352,     5,     4,
       5,    60,    66,    73,    75,    80,    83,    89,    99,   105,
     114,   130,   150,   165,   174,   175,   195,   216,   230,   232,
     245,   250,   256,   263,   282,   295,   296,   298,   338,   488,
       5,     4,   352,     5,   352,    40,   111,   352,   526,   354,
     352,   362,   364,   525,   352,   367,   352,     4,   363,    54,
      90,   140,   243,   529,     4,     4,   352,     4,   150,   256,
     530,     5,   362,     4,    40,   111,   352,   537,   352,    97,
      61,   120,   243,   270,   539,   120,   552,    61,   117,   120,
     157,   192,   240,   243,   267,   270,   281,   541,   542,    61,
     120,   270,   551,     5,     4,    34,   107,   203,   534,    66,
     354,   379,    66,   354,   380,    66,   354,   381,    13,   189,
     533,   352,   352,   223,   352,   382,   352,   267,     4,   352,
     352,     4,   561,     4,   284,   559,     4,   284,   560,     4,
     367,   123,   352,   564,   352,   352,     4,     5,   352,    12,
     352,   352,   352,    30,    94,   163,   247,   252,   366,   366,
       4,   197,   352,   352,     4,     4,     4,   352,   352,   352,
     352,     4,     4,     5,     5,   362,     5,   352,   352,   358,
     360,   360,   362,   352,   352,   352,   352,   352,   352,   352,
     362,   364,   361,   352,   352,   361,   352,     5,   266,   103,
     187,   415,   193,   247,   418,   169,    78,   172,   247,   419,
     138,   176,   403,   403,     4,   422,     4,   424,   193,   254,
     426,   177,   427,   169,   367,   352,   362,   352,   362,   362,
     367,   367,   367,   362,   367,   352,   362,     4,   440,     4,
     364,   438,   196,     4,   166,   309,   439,   196,   362,     4,
     362,   442,     5,     5,     4,   196,   352,     4,     5,    60,
      66,   114,   130,   143,   150,   155,   206,   225,   230,   232,
     255,   256,   263,   282,   338,   497,   364,   188,   188,    66,
     449,    66,   450,    66,   451,   223,   452,   352,     5,   224,
     454,   363,   367,     5,   362,   362,   362,   362,     4,   354,
       4,     4,   196,   352,    14,    15,    61,   190,   191,   260,
     270,   271,   302,    87,     5,     5,    14,    15,    61,   190,
     191,   260,   270,   271,   275,   302,    87,   157,   162,   363,
     474,   478,    87,   157,     5,   472,     4,     4,    14,    61,
     190,   260,   270,   302,     5,     5,     4,   352,   363,    20,
      21,    22,    48,    49,    52,    55,    62,    66,    74,    75,
      82,    83,    99,   105,   109,   110,   113,   130,   150,   172,
     195,   223,   225,   231,   232,   245,   246,   255,   256,   282,
     284,   296,   298,   304,   338,    66,    80,    89,    99,   130,
     150,   195,   232,   256,   296,   298,     4,    30,   161,   211,
     237,   491,     5,    63,   104,   234,   248,   249,   340,   341,
     496,    99,   489,    17,    40,   111,   194,   495,     4,     5,
      17,   210,   291,   352,   256,   496,   504,   124,   496,   505,
      36,    40,   111,   132,   194,   290,   352,   506,   362,   354,
      91,    99,   105,   126,   150,   158,   195,   203,   245,   256,
     272,   509,    40,   111,   194,     5,   283,    17,   210,   291,
     513,   284,   354,   514,     5,    99,   105,   299,    17,    17,
       4,   352,   352,   352,   352,   352,   367,   352,   352,   361,
     352,     4,   367,     4,    40,   111,   194,   261,   531,    40,
     111,   194,   261,   532,     4,    97,     5,     5,    87,     4,
       5,     5,    87,     5,   542,    61,   120,   157,   270,   546,
      61,   120,   270,   550,    87,   157,    61,   120,   270,   544,
       4,    61,   120,   270,   543,     5,     5,     4,     4,     5,
       5,     5,   352,   352,   352,     4,   352,   556,   352,   352,
       6,   363,     4,     5,     4,     4,     5,     4,    97,   258,
     368,   352,   352,    12,     5,    12,   352,   352,    12,     4,
      12,     4,     4,   352,   352,   352,     4,   354,     4,     4,
     367,   362,   367,   352,   352,   352,   362,   352,   361,   352,
     352,     5,     5,   352,   364,   352,   362,   362,   352,   367,
     368,   368,   368,   367,   361,   352,   367,   352,   133,   244,
     355,   441,   166,     5,     4,   367,   362,     4,     5,     4,
       4,   352,   436,   352,    20,    21,    22,    48,    49,    52,
      59,    62,    66,    74,    75,    82,   109,   110,   113,   130,
     150,   172,   181,   223,   225,   231,   232,   246,   256,   282,
     284,   294,   304,   338,    66,   130,   155,   232,   282,    30,
     161,   211,   237,   498,   352,   206,   352,   499,    17,   352,
     255,   509,   255,   206,   352,   500,   284,   501,    17,    98,
     352,   352,     5,   368,    56,   362,     4,     5,   465,   352,
       5,     5,     5,   157,   184,   372,   372,   165,   262,   370,
       4,     4,     5,     5,   469,   268,   268,     5,     5,     5,
      17,   159,   371,   371,   370,     4,     4,   370,     5,     5,
     473,   162,   337,   363,   477,     5,   476,     5,     5,   480,
       5,   481,     5,    14,    15,    61,   190,   191,   260,   270,
     271,   275,   302,     4,     4,     5,     5,   372,   370,     4,
       5,     5,   367,    82,   152,   221,   222,   236,   276,   375,
       7,     8,   352,   357,   237,   121,   237,   237,   105,    40,
      66,    99,   105,   111,   130,   150,   165,   195,   232,   245,
     256,   284,   296,   298,   299,   338,   490,   121,   237,     5,
      27,   167,   237,   280,   138,   105,    22,    49,    52,    82,
     110,   113,   225,   255,    22,    49,    52,    55,    82,   110,
     113,   225,   255,   282,    40,   121,   237,   237,   105,     5,
     210,    27,   223,    36,   132,   290,   352,   259,   266,   121,
     241,   362,   364,   509,    40,   131,   223,   280,   241,   210,
       5,     5,   245,    27,   223,     4,     5,     5,   210,    36,
     132,   290,   352,   509,   210,   354,     4,     4,   352,     5,
     302,    22,    27,    48,    49,    51,    52,    62,    74,    75,
      82,    85,   102,   109,   110,   113,   172,   225,   231,   246,
     255,   283,   284,   304,   348,   492,   352,   352,   352,   352,
     352,   496,   362,     5,     4,     5,   352,   352,   362,   364,
     352,   354,   352,   352,   496,     5,   352,   352,   354,     5,
      17,     5,     5,   352,   352,   361,   352,   352,     4,   352,
     352,   111,   352,   352,   111,     4,    42,    43,   170,   171,
     198,   377,   377,    61,   120,   270,   540,   377,     5,    61,
     120,   270,   545,     5,     5,    61,   120,   270,   547,     4,
       5,     5,     4,    61,   120,   270,   549,    61,   120,   270,
     548,     5,     5,     4,     5,     5,     4,   377,   377,   377,
     352,   352,   352,     4,   352,   362,   352,   363,   367,     5,
       5,    12,   352,   362,   364,   352,    12,   352,   352,   352,
      59,   352,     6,     4,   352,   352,    46,   269,   404,     5,
     354,   354,   367,   352,     4,     4,     4,   362,   352,   352,
     352,   352,   367,     4,   362,   368,   361,   352,     4,   368,
     352,    38,    38,     4,   364,     5,    24,    25,    97,   369,
     352,     4,   352,     5,    82,   152,   221,   222,   236,   276,
     362,   364,   237,   121,   237,   237,    21,   237,   362,   121,
     237,    27,   167,   237,   280,   138,    21,   237,   121,   237,
     237,    21,   237,    27,   168,   223,   168,   259,   266,   121,
     168,   223,   288,   509,   131,   168,   223,   280,     4,   245,
      27,   168,   223,   509,   206,   352,   352,   352,   352,   352,
     352,   196,   352,   352,    20,   233,   457,     4,     4,   352,
     372,   372,   372,     4,   372,   372,   372,    14,    15,    61,
     190,   191,   260,   270,   271,   302,   371,   372,   372,   372,
     372,   372,     4,   372,   372,     4,   371,    14,    15,    61,
     190,   191,   260,   270,   271,   302,     5,   475,     5,   479,
       5,     5,    14,    15,    61,   190,   191,   260,   270,   271,
     275,   302,     5,    14,    15,    61,   190,   191,   260,   270,
     271,   275,   302,     5,    14,    15,    61,   190,   191,   260,
     270,   271,   275,   302,    14,    15,    61,   190,   191,   260,
     270,   271,   302,   268,     5,     5,     5,   371,   371,   370,
       4,     4,   370,     5,     4,     4,   372,   372,     4,   372,
     372,     5,   354,   362,   364,     5,   352,   354,   352,     5,
     352,     5,   357,   105,   195,   245,   105,   195,   245,     5,
     354,   352,   354,     5,   352,   362,   354,     5,   357,   237,
     237,    21,   237,    21,   237,   237,    21,   237,   306,   306,
       4,     4,     4,   490,     4,     4,     4,   306,   306,     4,
       5,     4,   354,   352,     5,   352,     5,   357,   354,   362,
     364,   362,   364,   352,    27,    48,    51,    62,    85,   102,
     348,   373,     4,   354,   352,   367,   361,   354,     5,   362,
     364,   362,   352,   354,   354,   362,   364,   362,   364,   352,
     354,   352,     5,   352,   223,   223,   352,   352,   223,   352,
     223,   352,   352,   502,   510,   352,   223,   223,   352,   352,
     352,   352,   352,   352,   352,   352,     5,   302,   352,   493,
     352,   352,   223,   352,   352,   352,   352,   362,   367,     5,
     362,   362,   352,   352,   367,   361,   352,   352,   352,   362,
     352,   352,     5,     4,   352,   352,   352,   352,     5,     5,
       4,   377,     5,     5,     4,     4,     4,     5,     5,     4,
       4,     5,     5,     4,     5,     5,     4,   352,   352,   352,
     362,   352,   367,   352,   362,   364,   352,   367,   352,   352,
     352,   352,   352,     5,   352,     4,     6,   352,   352,     4,
     362,   352,   367,   177,   365,   352,   365,   368,   367,   362,
     352,   352,     4,   352,   352,     4,   362,     5,     5,     5,
       5,   362,   367,   362,   362,   362,   362,   364,   362,   367,
     362,   362,   362,   364,   362,   362,   362,   362,   364,   362,
     362,   362,   352,   362,   362,   362,   362,   362,   362,   362,
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
     367,   362,   369,   367,   369,   369,   367,   369,   367,     4,
     364,     5,   352,     4,   372,   371,     4,   371,     5,     5,
       5,   371,   371,   370,     4,     4,     5,     5,     5,     5,
     371,   371,   370,     4,     4,     5,     5,     5,     5,   371,
     371,   370,     4,     4,     5,   371,   372,   372,   372,   372,
     372,     4,   372,   372,     4,   371,   371,   372,   372,   372,
     372,   372,     4,   372,   372,     4,   371,   371,     4,     4,
     371,     4,   371,   371,     4,     4,     4,   363,   369,     4,
     362,   364,   369,   352,   362,     4,   369,   369,   362,     4,
     352,   352,   352,   352,   352,   352,   352,   352,   352,   352,
     352,   362,   364,   369,   352,   362,     4,   361,   361,   361,
     352,   362,   364,   361,   352,   361,   361,   362,   362,   364,
     361,   352,   361,   352,   352,   352,   352,   352,   352,   357,
     352,   352,   352,   349,   349,   349,   349,   349,   349,   349,
     508,   349,   357,   352,   352,   352,   352,   357,   352,   352,
     352,   352,   352,   352,   367,   352,   302,   356,   357,   352,
     352,   368,   354,     4,     4,   368,   352,   361,   352,    59,
     352,     5,     5,   352,     4,   365,   369,     5,     4,     4,
       5,   362,     5,   368,   369,   368,   368,   368,     5,     4,
     352,   372,   371,   372,   372,   372,   372,   372,     4,   372,
     372,   371,     4,   371,   372,   372,   372,   372,   372,     4,
     372,   372,   371,   372,   371,     4,   372,   372,   371,     4,
     372,   371,     4,   371,   371,   367,   362,   364,   369,     4,
     367,   352,   367,   352,   352,   352,   369,     4,   367,   352,
     361,   369,   352,   361,   369,   369,   362,   357,   352,     4,
     374,   374,   352,   352,   374,   357,   374,   510,   362,   490,
       5,     4,     5,     5,     5,     4,   354,   357,   374,   374,
     352,   352,   357,   352,   352,   352,   352,   352,   361,   352,
       5,   510,   352,   374,   354,   511,   512,     5,   354,     5,
     352,     5,     4,     6,   352,    32,   279,   411,     5,    32,
     279,   376,   362,   411,   352,   371,   372,   371,   371,   372,
     372,   371,   372,   371,   371,   352,   369,   362,   364,   362,
     352,   362,   352,   362,   364,   362,   352,   362,   369,     4,
     510,   510,   356,   352,   510,     4,   510,   367,     5,     4,
       4,   510,   510,   356,   352,     4,   510,   510,   352,   362,
     510,   510,   510,   511,   517,   518,   509,   515,   516,     5,
       5,     6,     4,   187,   300,   344,   352,   402,   362,     4,
     372,   372,   372,   372,   363,   369,   369,   352,   369,     4,
     369,   369,   352,   369,   352,   510,   510,     4,   352,   510,
       5,   352,   510,     4,   352,   510,   367,   517,   519,   520,
     349,   516,     5,     5,     4,   352,   403,   352,   403,   367,
     369,     4,   362,   364,     4,   357,   356,   352,   352,   356,
     352,   362,   520,   354,     5,     5,   352,   352,   352,   352,
     376,     5,   362,   364,   367,   362,   364,   510,   352,     4,
     510,   352,   369,     5,     5,   352,     5,   352,   367,   367,
       4,   510,     4,     5,     5,     5,   356,   356,   510,   510,
     510
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

  case 247:
#line 818 "frame/parser.Y"
    {fr->clipUserCmd(NAN,NAN);;}
    break;

  case 249:
#line 821 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 250:
#line 826 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::GLOBAL);;}
    break;

  case 251:
#line 827 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::LOCAL);;}
    break;

  case 252:
#line 830 "frame/parser.Y"
    {fr->clipModeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 253:
#line 831 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::MINMAX);;}
    break;

  case 254:
#line 832 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZSCALE);;}
    break;

  case 255:
#line 833 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZMAX);;}
    break;

  case 256:
#line 834 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::USERCLIP);;}
    break;

  case 257:
#line 837 "frame/parser.Y"
    {fr->clipMinMaxCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer),(yyvsp[(1) - (2)].integer));;}
    break;

  case 258:
#line 838 "frame/parser.Y"
    {fr->clipMinMaxModeCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer));;}
    break;

  case 259:
#line 839 "frame/parser.Y"
    {fr->clipMinMaxSampleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 260:
#line 842 "frame/parser.Y"
    {fr->clipZScaleCmd((yyvsp[(1) - (3)].real),(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 261:
#line 844 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleContrastCmd((yyvsp[(2) - (2)].real));
        ;}
    break;

  case 262:
#line 849 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleSampleCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 263:
#line 854 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleLineCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 264:
#line 861 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (6)].integer), (yyvsp[(2) - (6)].real), (yyvsp[(3) - (6)].real), (yyvsp[(4) - (6)].integer), (unsigned char*)(yyvsp[(5) - (6)].ptr), (yyvsp[(6) - (6)].integer));;}
    break;

  case 265:
#line 863 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].integer),(unsigned char*)(yyvsp[(9) - (10)].ptr),(yyvsp[(10) - (10)].integer));;}
    break;

  case 266:
#line 864 "frame/parser.Y"
    {fr->colormapBeginCmd();;}
    break;

  case 268:
#line 866 "frame/parser.Y"
    {fr->colormapEndCmd();;}
    break;

  case 269:
#line 870 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(1) - (6)].integer), (yyvsp[(2) - (6)].real), (yyvsp[(3) - (6)].real), (yyvsp[(4) - (6)].integer), (unsigned char*)(yyvsp[(5) - (6)].ptr), (yyvsp[(6) - (6)].integer));;}
    break;

  case 270:
#line 872 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].integer),(unsigned char*)(yyvsp[(9) - (10)].ptr),(yyvsp[(10) - (10)].integer));;}
    break;

  case 271:
#line 874 "frame/parser.Y"
    {fr->colorScaleCmd((FrScale::ColorScaleType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 272:
#line 875 "frame/parser.Y"
    {fr->colorScaleLogCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 278:
#line 886 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),(FrScale::ClipMode)(yyvsp[(9) - (13)].integer),100,(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 279:
#line 888 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),FrScale::AUTOCUT,(yyvsp[(9) - (13)].real),(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 280:
#line 890 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),(FrScale::ClipMode)(yyvsp[(9) - (12)].integer),100,FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 281:
#line 895 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),FrScale::AUTOCUT,(yyvsp[(9) - (12)].real),FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 282:
#line 899 "frame/parser.Y"
    {fr->contourCreatePolygonCmd();;}
    break;

  case 283:
#line 902 "frame/parser.Y"
    {fr->contourDeleteCmd();;}
    break;

  case 284:
#line 903 "frame/parser.Y"
    {fr->contourDeleteAuxCmd();;}
    break;

  case 285:
#line 906 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 286:
#line 907 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 287:
#line 909 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourLoadCmd((yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer),(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer));
	;}
    break;

  case 288:
#line 915 "frame/parser.Y"
    {(yyval.integer) = FrScale::MINMAX;;}
    break;

  case 289:
#line 916 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZSCALE;;}
    break;

  case 290:
#line 917 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZMAX;;}
    break;

  case 291:
#line 918 "frame/parser.Y"
    {(yyval.integer) = FrScale::USERCLIP;;}
    break;

  case 292:
#line 921 "frame/parser.Y"
    {(yyval.integer) = FrScale::GLOBAL;;}
    break;

  case 293:
#line 922 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOCAL;;}
    break;

  case 294:
#line 925 "frame/parser.Y"
    {(yyval.integer) = FVContour::SMOOTH;;}
    break;

  case 295:
#line 926 "frame/parser.Y"
    {(yyval.integer) = FVContour::BLOCK;;}
    break;

  case 296:
#line 929 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 297:
#line 930 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 298:
#line 934 "frame/parser.Y"
    {fr->contourSaveCmd((yyvsp[(1) - (3)].str), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 299:
#line 936 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (4)].str),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 300:
#line 939 "frame/parser.Y"
    {fr->cropCmd();;}
    break;

  case 301:
#line 941 "frame/parser.Y"
    {fr->cropCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 302:
#line 944 "frame/parser.Y"
    {fr->cropCenterCmd(Vector((yyvsp[(2) - (8)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), Vector((yyvsp[(5) - (8)].real),(yyvsp[(6) - (8)].real)), (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 304:
#line 946 "frame/parser.Y"
    {fr->cropBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 305:
#line 947 "frame/parser.Y"
    {fr->cropMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 306:
#line 948 "frame/parser.Y"
    {fr->cropEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 307:
#line 951 "frame/parser.Y"
    {fr->crop3dCmd();;}
    break;

  case 308:
#line 952 "frame/parser.Y"
    {fr->crop3dCmd((yyvsp[(1) - (3)].real), (yyvsp[(2) - (3)].real), (Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 309:
#line 953 "frame/parser.Y"
    {fr->crop3dBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 310:
#line 954 "frame/parser.Y"
    {fr->crop3dMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 311:
#line 955 "frame/parser.Y"
    {fr->crop3dEndCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 312:
#line 959 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), (Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 313:
#line 961 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 314:
#line 962 "frame/parser.Y"
    {fr->crosshairCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 315:
#line 963 "frame/parser.Y"
    {fr->crosshairWarpCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 316:
#line 966 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)), (Coord::InternalSystem)(yyvsp[(3) - (5)].integer));;}
    break;

  case 317:
#line 968 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 318:
#line 970 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer));;}
    break;

  case 319:
#line 972 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 320:
#line 975 "frame/parser.Y"
    {fr->axesOrderCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 321:
#line 978 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 322:
#line 979 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 323:
#line 980 "frame/parser.Y"
    {(yyval.integer) = Base::SUM;;}
    break;

  case 324:
#line 983 "frame/parser.Y"
    {fr->fitsyHasExtCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 325:
#line 986 "frame/parser.Y"
    {fr->getBgColorCmd();;}
    break;

  case 339:
#line 1000 "frame/parser.Y"
    {fr->getDATASECCmd();;}
    break;

  case 342:
#line 1003 "frame/parser.Y"
    {fr->getHistogramCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].integer));;}
    break;

  case 343:
#line 1005 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(3) - (9)].str),(yyvsp[(4) - (9)].str),Vector((yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real)),(Coord::InternalSystem)(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(Base::CutMethod)(yyvsp[(9) - (9)].integer));;}
    break;

  case 346:
#line 1008 "frame/parser.Y"
    {fr->getIRAFAlignCmd();;}
    break;

  case 347:
#line 1009 "frame/parser.Y"
    {fr->getMinMaxCmd();;}
    break;

  case 350:
#line 1012 "frame/parser.Y"
    {fr->getNANColorCmd();;}
    break;

  case 351:
#line 1013 "frame/parser.Y"
    {fr->getOrientCmd();;}
    break;

  case 353:
#line 1016 "frame/parser.Y"
    {fr->getPixelTableCmd(Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (Coord::InternalSystem)(yyvsp[(3) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(7) - (8)].integer), (yyvsp[(8) - (8)].str));;}
    break;

  case 355:
#line 1018 "frame/parser.Y"
    {fr->getRotateCmd();;}
    break;

  case 357:
#line 1020 "frame/parser.Y"
    {fr->getThreadsCmd();;}
    break;

  case 359:
#line 1022 "frame/parser.Y"
    {fr->getTypeCmd();;}
    break;

  case 360:
#line 1024 "frame/parser.Y"
    {fr->getValueCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 361:
#line 1026 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(3) - (9)].str),(yyvsp[(4) - (9)].str),Vector((yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real)),(Coord::InternalSystem)(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(Base::CutMethod)(yyvsp[(9) - (9)].integer));;}
    break;

  case 363:
#line 1028 "frame/parser.Y"
    {fr->getZoomCmd();;}
    break;

  case 364:
#line 1031 "frame/parser.Y"
    {fr->getBinDepthCmd();;}
    break;

  case 365:
#line 1032 "frame/parser.Y"
    {fr->getBinFactorCmd();;}
    break;

  case 366:
#line 1033 "frame/parser.Y"
    {fr->getBinFunctionCmd();;}
    break;

  case 367:
#line 1034 "frame/parser.Y"
    {fr->getBinBufferSizeCmd();;}
    break;

  case 368:
#line 1035 "frame/parser.Y"
    {fr->getBinCursorCmd();;}
    break;

  case 369:
#line 1036 "frame/parser.Y"
    {fr->getBinFilterCmd();;}
    break;

  case 371:
#line 1038 "frame/parser.Y"
    {fr->getBinListCmd();;}
    break;

  case 372:
#line 1041 "frame/parser.Y"
    {fr->getBinColsCmd();;}
    break;

  case 373:
#line 1042 "frame/parser.Y"
    {fr->getBinColsMinMaxCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 374:
#line 1043 "frame/parser.Y"
    {fr->getBinColsDimCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 375:
#line 1046 "frame/parser.Y"
    {fr->getBlockCmd();;}
    break;

  case 376:
#line 1049 "frame/parser.Y"
    {fr->getClipCmd();;}
    break;

  case 377:
#line 1051 "frame/parser.Y"
    {fr->getClipCmd((FrScale::ClipMode)(yyvsp[(1) - (2)].integer), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 378:
#line 1053 "frame/parser.Y"
    {fr->getClipCmd((yyvsp[(1) - (2)].real), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 379:
#line 1054 "frame/parser.Y"
    {fr->getClipScopeCmd();;}
    break;

  case 380:
#line 1055 "frame/parser.Y"
    {fr->getClipModeCmd();;}
    break;

  case 382:
#line 1057 "frame/parser.Y"
    {fr->getClipUserCmd();;}
    break;

  case 384:
#line 1060 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	;}
    break;

  case 385:
#line 1066 "frame/parser.Y"
    {fr->getClipMinMaxModeCmd();;}
    break;

  case 386:
#line 1067 "frame/parser.Y"
    {fr->getClipMinMaxSampleCmd();;}
    break;

  case 387:
#line 1070 "frame/parser.Y"
    {fr->getClipZScaleContrastCmd();;}
    break;

  case 388:
#line 1071 "frame/parser.Y"
    {fr->getClipZScaleSampleCmd();;}
    break;

  case 389:
#line 1072 "frame/parser.Y"
    {fr->getClipZScaleLineCmd();;}
    break;

  case 390:
#line 1075 "frame/parser.Y"
    {fr->getColorbarCmd();;}
    break;

  case 391:
#line 1076 "frame/parser.Y"
    {fr->getColorbarTagCmd();;}
    break;

  case 393:
#line 1082 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 394:
#line 1084 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 395:
#line 1086 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 396:
#line 1089 "frame/parser.Y"
    {fr->getColorScaleCmd();;}
    break;

  case 398:
#line 1091 "frame/parser.Y"
    {fr->getColorScaleLogCmd();;}
    break;

  case 399:
#line 1095 "frame/parser.Y"
    {fr->getColorScaleLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 400:
#line 1099 "frame/parser.Y"
    {fr->getContourCmd((Coord::CoordSystem)(yyvsp[(1) - (2)].integer),(Coord::SkyFrame)(yyvsp[(2) - (2)].integer));;}
    break;

  case 402:
#line 1101 "frame/parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 403:
#line 1102 "frame/parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 404:
#line 1103 "frame/parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 405:
#line 1104 "frame/parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 406:
#line 1105 "frame/parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 408:
#line 1107 "frame/parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 409:
#line 1108 "frame/parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 410:
#line 1111 "frame/parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 411:
#line 1112 "frame/parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 412:
#line 1113 "frame/parser.Y"
    {fr->getContourClipScopeCmd();;}
    break;

  case 413:
#line 1116 "frame/parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 414:
#line 1117 "frame/parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 415:
#line 1121 "frame/parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 416:
#line 1123 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 417:
#line 1129 "frame/parser.Y"
    {fr->getCoord3axisCmd((yyvsp[(1) - (4)].real), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 418:
#line 1133 "frame/parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 419:
#line 1135 "frame/parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 420:
#line 1136 "frame/parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 421:
#line 1139 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 422:
#line 1141 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 423:
#line 1142 "frame/parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 424:
#line 1145 "frame/parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 425:
#line 1148 "frame/parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 426:
#line 1150 "frame/parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 427:
#line 1154 "frame/parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 428:
#line 1156 "frame/parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 429:
#line 1159 "frame/parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 430:
#line 1163 "frame/parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 431:
#line 1164 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 432:
#line 1166 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)), (Coord::InternalSystem)(yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 433:
#line 1169 "frame/parser.Y"
    {fr->iisGetCmd((char*)(yyvsp[(1) - (5)].ptr),(yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 434:
#line 1170 "frame/parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 436:
#line 1174 "frame/parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 437:
#line 1175 "frame/parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 438:
#line 1176 "frame/parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 439:
#line 1179 "frame/parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 440:
#line 1181 "frame/parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 441:
#line 1182 "frame/parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 443:
#line 1184 "frame/parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 447:
#line 1188 "frame/parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 448:
#line 1189 "frame/parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 449:
#line 1190 "frame/parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 450:
#line 1192 "frame/parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::DistFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 452:
#line 1194 "frame/parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 453:
#line 1197 "frame/parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 454:
#line 1199 "frame/parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 455:
#line 1201 "frame/parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 456:
#line 1202 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 457:
#line 1203 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 458:
#line 1204 "frame/parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 459:
#line 1207 "frame/parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 460:
#line 1208 "frame/parser.Y"
    {fr->getFitsDepthCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 461:
#line 1212 "frame/parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 462:
#line 1214 "frame/parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 463:
#line 1217 "frame/parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 464:
#line 1220 "frame/parser.Y"
    {fr->getFitsSliceCmd(2);;}
    break;

  case 465:
#line 1221 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 466:
#line 1222 "frame/parser.Y"
    {fr->getFitsSliceCmd(2, (Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 467:
#line 1223 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (2)].integer), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 468:
#line 1226 "frame/parser.Y"
    {fr->getGridCmd();;}
    break;

  case 469:
#line 1227 "frame/parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 470:
#line 1228 "frame/parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 471:
#line 1231 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 472:
#line 1232 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 473:
#line 1233 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 474:
#line 1236 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 475:
#line 1239 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 476:
#line 1240 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 477:
#line 1241 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 478:
#line 1244 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 479:
#line 1245 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 480:
#line 1246 "frame/parser.Y"
    {fr->getSmoothRadiusMinorCmd();;}
    break;

  case 481:
#line 1247 "frame/parser.Y"
    {fr->getSmoothSigmaCmd();;}
    break;

  case 482:
#line 1248 "frame/parser.Y"
    {fr->getSmoothSigmaMinorCmd();;}
    break;

  case 483:
#line 1249 "frame/parser.Y"
    {fr->getSmoothAngleCmd();;}
    break;

  case 488:
#line 1256 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 489:
#line 1257 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 490:
#line 1258 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 491:
#line 1261 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 492:
#line 1262 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 493:
#line 1265 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 494:
#line 1266 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 495:
#line 1269 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 496:
#line 1270 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 497:
#line 1273 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 498:
#line 1274 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 499:
#line 1277 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 501:
#line 1279 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 502:
#line 1282 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 503:
#line 1283 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 505:
#line 1287 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 506:
#line 1291 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), 
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 507:
#line 1294 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer), 
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 508:
#line 1301 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 509:
#line 1302 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 510:
#line 1305 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 513:
#line 1308 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 514:
#line 1309 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 515:
#line 1310 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 516:
#line 1311 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 518:
#line 1313 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 519:
#line 1314 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 520:
#line 1315 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 522:
#line 1317 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 523:
#line 1318 "frame/parser.Y"
    {fr->hasImageCmd();;}
    break;

  case 524:
#line 1319 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 525:
#line 1320 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 527:
#line 1324 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 528:
#line 1327 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 529:
#line 1328 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 530:
#line 1331 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 531:
#line 1332 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 532:
#line 1333 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 533:
#line 1334 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 534:
#line 1337 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 535:
#line 1338 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 536:
#line 1339 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 537:
#line 1340 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 538:
#line 1343 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 539:
#line 1344 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 540:
#line 1345 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 541:
#line 1346 "frame/parser.Y"
    {fr->hasWCSLinearCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 542:
#line 1347 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 543:
#line 1348 "frame/parser.Y"
    {fr->hasWCS3DCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 544:
#line 1351 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 545:
#line 1352 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 546:
#line 1353 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 549:
#line 1357 "frame/parser.Y"
    {fr->iisSetCmd((const char*)(yyvsp[(2) - (6)].ptr),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 550:
#line 1358 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 551:
#line 1361 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 552:
#line 1364 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 553:
#line 1365 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 554:
#line 1369 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 555:
#line 1371 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 556:
#line 1372 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 563:
#line 1384 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 564:
#line 1386 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 565:
#line 1388 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 566:
#line 1389 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 567:
#line 1391 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 568:
#line 1393 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 569:
#line 1395 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 570:
#line 1397 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 571:
#line 1399 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 573:
#line 1403 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 574:
#line 1404 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 575:
#line 1405 "frame/parser.Y"
    {fr->loadArrayRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 576:
#line 1406 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 577:
#line 1407 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 578:
#line 1409 "frame/parser.Y"
    {fr->loadArrayRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 579:
#line 1410 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 580:
#line 1411 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 581:
#line 1412 "frame/parser.Y"
    {fr->loadArrayRGBCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 582:
#line 1415 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 583:
#line 1419 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 584:
#line 1421 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 585:
#line 1423 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 586:
#line 1425 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 587:
#line 1427 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 588:
#line 1429 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 589:
#line 1431 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 590:
#line 1433 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), 
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 591:
#line 1436 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 592:
#line 1438 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 593:
#line 1440 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 599:
#line 1448 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 600:
#line 1449 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 601:
#line 1450 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 602:
#line 1451 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 603:
#line 1452 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 604:
#line 1453 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 605:
#line 1455 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 606:
#line 1457 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 607:
#line 1458 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 608:
#line 1459 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 609:
#line 1460 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 610:
#line 1463 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 611:
#line 1464 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 612:
#line 1465 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 613:
#line 1466 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 614:
#line 1467 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 615:
#line 1469 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 616:
#line 1470 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 617:
#line 1471 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 618:
#line 1472 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 624:
#line 1483 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS, 
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 625:
#line 1486 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 626:
#line 1489 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 627:
#line 1492 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 628:
#line 1495 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 629:
#line 1498 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 630:
#line 1501 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 631:
#line 1504 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 632:
#line 1507 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 633:
#line 1512 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 634:
#line 1515 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 635:
#line 1518 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 636:
#line 1521 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 637:
#line 1524 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 638:
#line 1527 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 639:
#line 1530 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 640:
#line 1533 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 641:
#line 1536 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 642:
#line 1539 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 643:
#line 1542 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 644:
#line 1547 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 645:
#line 1550 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 646:
#line 1553 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 647:
#line 1556 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 648:
#line 1559 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 649:
#line 1562 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 650:
#line 1565 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 651:
#line 1568 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 652:
#line 1571 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 653:
#line 1576 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 654:
#line 1579 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 655:
#line 1582 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 656:
#line 1585 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 657:
#line 1588 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 658:
#line 1591 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 659:
#line 1594 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 660:
#line 1597 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 661:
#line 1600 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 662:
#line 1603 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 663:
#line 1606 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 664:
#line 1611 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 665:
#line 1612 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 666:
#line 1613 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 667:
#line 1614 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 668:
#line 1615 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 669:
#line 1617 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 670:
#line 1618 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 671:
#line 1619 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 672:
#line 1620 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 673:
#line 1622 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 674:
#line 1623 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 675:
#line 1624 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 676:
#line 1625 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 677:
#line 1626 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 678:
#line 1627 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 679:
#line 1629 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 680:
#line 1631 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 681:
#line 1632 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 682:
#line 1633 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 683:
#line 1634 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 684:
#line 1637 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 685:
#line 1638 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 686:
#line 1639 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 687:
#line 1640 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 688:
#line 1641 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 689:
#line 1643 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 690:
#line 1644 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 691:
#line 1645 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 692:
#line 1646 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 693:
#line 1650 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 694:
#line 1652 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 695:
#line 1653 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 696:
#line 1655 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 697:
#line 1657 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 698:
#line 1659 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 699:
#line 1662 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 700:
#line 1663 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 701:
#line 1666 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 702:
#line 1667 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 703:
#line 1668 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 704:
#line 1671 "frame/parser.Y"
    {
#ifdef MAC_OSX_TK
	  fr->macosxPrintCmd();
#endif
	;}
    break;

  case 705:
#line 1678 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 706:
#line 1679 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 707:
#line 1680 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 708:
#line 1681 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 709:
#line 1682 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 710:
#line 1683 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 711:
#line 1684 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 712:
#line 1688 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 714:
#line 1696 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 715:
#line 1697 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 716:
#line 1699 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 717:
#line 1701 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 718:
#line 1702 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 719:
#line 1703 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 721:
#line 1704 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 722:
#line 1705 "frame/parser.Y"
    {fr->markerDeleteCmd();;}
    break;

  case 723:
#line 1706 "frame/parser.Y"
    {fr->markerDeleteAllCmd();;}
    break;

  case 725:
#line 1708 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 726:
#line 1709 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 727:
#line 1711 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 728:
#line 1713 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 729:
#line 1715 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 730:
#line 1718 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 731:
#line 1720 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 732:
#line 1721 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 733:
#line 1723 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 734:
#line 1726 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (7)].integer), (yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real), (yyvsp[(6) - (7)].integer), (Coord::InternalSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 735:
#line 1728 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 736:
#line 1731 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 737:
#line 1733 "frame/parser.Y"
    {fr->markerBoxFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 738:
#line 1735 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), Vector((yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real)), 
	    Vector((yyvsp[(6) - (8)].real), (yyvsp[(6) - (8)].real)*(yyvsp[(5) - (8)].real)/(yyvsp[(4) - (8)].real)), (yyvsp[(7) - (8)].integer), (Coord::InternalSystem)(yyvsp[(8) - (8)].integer));;}
    break;

  case 739:
#line 1739 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 740:
#line 1742 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 741:
#line 1745 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (Coord::InternalSystem)(yyvsp[(6) - (6)].integer));;}
    break;

  case 742:
#line 1747 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)), 
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 743:
#line 1750 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 744:
#line 1754 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 745:
#line 1758 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 746:
#line 1763 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 747:
#line 1767 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 748:
#line 1768 "frame/parser.Y"
    {fr->markerCircleFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 749:
#line 1770 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].real), (Coord::InternalSystem)(yyvsp[(5) - (5)].integer));;}
    break;

  case 750:
#line 1772 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 751:
#line 1773 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 752:
#line 1775 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 753:
#line 1777 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 754:
#line 1779 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].real),(Coord::InternalSystem)(yyvsp[(5) - (5)].integer));;}
    break;

  case 755:
#line 1781 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 756:
#line 1783 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 757:
#line 1784 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 758:
#line 1786 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 759:
#line 1788 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 760:
#line 1791 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 761:
#line 1795 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 762:
#line 1799 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 763:
#line 1801 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 764:
#line 1803 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 765:
#line 1805 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 766:
#line 1807 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 767:
#line 1809 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 768:
#line 1811 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 769:
#line 1813 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 770:
#line 1815 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 771:
#line 1817 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 772:
#line 1819 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 773:
#line 1821 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 774:
#line 1823 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 775:
#line 1825 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 776:
#line 1826 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 777:
#line 1828 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 778:
#line 1830 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 779:
#line 1831 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 780:
#line 1832 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 781:
#line 1834 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 782:
#line 1836 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 783:
#line 1837 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 784:
#line 1838 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 785:
#line 1839 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 786:
#line 1841 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 787:
#line 1842 "frame/parser.Y"
    {fr->markerEllipseFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 788:
#line 1844 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(4) - (6)].real), (yyvsp[(5) - (6)].real)), (Coord::InternalSystem)(yyvsp[(6) - (6)].integer));;}
    break;

  case 789:
#line 1846 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 790:
#line 1850 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), 
	    Vector((yyvsp[(6) - (8)].real),(yyvsp[(6) - (8)].real)*(yyvsp[(5) - (8)].real)/(yyvsp[(4) - (8)].real)), (yyvsp[(7) - (8)].integer), (Coord::InternalSystem)(yyvsp[(8) - (8)].integer));;}
    break;

  case 791:
#line 1854 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 792:
#line 1857 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 793:
#line 1860 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 794:
#line 1864 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 795:
#line 1868 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 796:
#line 1873 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 797:
#line 1877 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 798:
#line 1878 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 799:
#line 1879 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 800:
#line 1881 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 801:
#line 1883 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(5) - (6)].vector)), Vector((yyvsp[(6) - (6)].vector)), (Coord::InternalSystem)(yyvsp[(4) - (6)].integer));;}
    break;

  case 802:
#line 1885 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 803:
#line 1889 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 804:
#line 1890 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 805:
#line 1891 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 806:
#line 1893 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)), (Coord::InternalSystem)(yyvsp[(4) - (6)].integer));;}
    break;

  case 807:
#line 1895 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 808:
#line 1898 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),(Coord::InternalSystem)(yyvsp[(6) - (6)].integer));;}
    break;

  case 809:
#line 1900 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 810:
#line 1903 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),(Coord::InternalSystem)(yyvsp[(6) - (6)].integer));;}
    break;

  case 811:
#line 1905 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 812:
#line 1908 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 813:
#line 1909 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 814:
#line 1911 "frame/parser.Y"
    {fr->markerPolygonFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 815:
#line 1913 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(4) - (6)].vector)), Vector((yyvsp[(5) - (6)].vector)),
	    (Coord::InternalSystem)(yyvsp[(3) - (6)].integer), (yyvsp[(6) - (6)].real));;}
    break;

  case 816:
#line 1917 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 817:
#line 1921 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 818:
#line 1923 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 819:
#line 1924 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 820:
#line 1926 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(5) - (6)].vector)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::InternalSystem)(yyvsp[(4) - (6)].integer));;}
    break;

  case 821:
#line 1929 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 822:
#line 1932 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 823:
#line 1935 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 824:
#line 1936 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 825:
#line 1938 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 826:
#line 1939 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 827:
#line 1940 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 828:
#line 1942 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 829:
#line 1943 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 830:
#line 1945 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 831:
#line 1947 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(5) - (7)].vector)), (Coord::InternalSystem)(yyvsp[(4) - (7)].integer), (yyvsp[(6) - (7)].real), (yyvsp[(7) - (7)].real));;}
    break;

  case 832:
#line 1950 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 833:
#line 1953 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 834:
#line 1955 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 835:
#line 1956 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 839:
#line 1961 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 840:
#line 1962 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 841:
#line 1964 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 842:
#line 1966 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 843:
#line 1968 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 844:
#line 1969 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 845:
#line 1971 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer));;}
    break;

  case 846:
#line 1972 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 849:
#line 1977 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 850:
#line 1978 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 851:
#line 1979 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 852:
#line 1980 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 853:
#line 1981 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 854:
#line 1982 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 855:
#line 1983 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 856:
#line 1984 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 857:
#line 1985 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 858:
#line 1986 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 859:
#line 1988 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (5)].str),Vector((yyvsp[(5) - (5)].vector)),(Coord::InternalSystem)(yyvsp[(4) - (5)].integer));;}
    break;

  case 860:
#line 1990 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 861:
#line 1992 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 862:
#line 1993 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 863:
#line 1994 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 864:
#line 1995 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 865:
#line 1996 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 866:
#line 1998 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 867:
#line 1999 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 868:
#line 2000 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 869:
#line 2001 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 870:
#line 2002 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 871:
#line 2004 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 872:
#line 2005 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 873:
#line 2006 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 874:
#line 2007 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 875:
#line 2008 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 876:
#line 2009 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 877:
#line 2012 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 878:
#line 2013 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 879:
#line 2014 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 880:
#line 2015 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 881:
#line 2016 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 882:
#line 2017 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 883:
#line 2018 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 884:
#line 2019 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 885:
#line 2020 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 886:
#line 2021 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 887:
#line 2022 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 888:
#line 2023 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 889:
#line 2024 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 890:
#line 2025 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 891:
#line 2026 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 892:
#line 2027 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 893:
#line 2028 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 894:
#line 2029 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 895:
#line 2030 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 896:
#line 2031 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 897:
#line 2032 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 898:
#line 2035 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 899:
#line 2036 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 900:
#line 2037 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 901:
#line 2038 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 902:
#line 2039 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 903:
#line 2041 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 904:
#line 2051 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 905:
#line 2059 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 906:
#line 2068 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 907:
#line 2076 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 908:
#line 2083 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 909:
#line 2090 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 910:
#line 2098 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 911:
#line 2106 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 912:
#line 2111 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 913:
#line 2116 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 914:
#line 2121 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 915:
#line 2126 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 916:
#line 2131 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 917:
#line 2136 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 918:
#line 2141 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 919:
#line 2150 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer), 
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 920:
#line 2160 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS), 
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 921:
#line 2170 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 922:
#line 2179 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 923:
#line 2187 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont, 
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 924:
#line 2197 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 925:
#line 2207 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 926:
#line 2217 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 927:
#line 2229 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 928:
#line 2238 "frame/parser.Y"
    {fr->createCompositeCmd(
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 930:
#line 2246 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 931:
#line 2248 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 932:
#line 2250 "frame/parser.Y"
    { 
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 933:
#line 2255 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 934:
#line 2258 "frame/parser.Y"
    {(yyval.dash)[0] = (yyvsp[(1) - (2)].integer); (yyval.dash)[1] = (yyvsp[(2) - (2)].integer);;}
    break;

  case 935:
#line 2262 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 936:
#line 2264 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 937:
#line 2265 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 938:
#line 2268 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 939:
#line 2269 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 940:
#line 2270 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 941:
#line 2271 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 942:
#line 2272 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 943:
#line 2273 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 944:
#line 2274 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 946:
#line 2278 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 947:
#line 2279 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 948:
#line 2280 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 949:
#line 2281 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 950:
#line 2282 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 951:
#line 2285 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 952:
#line 2287 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 953:
#line 2289 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 954:
#line 2291 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer),(Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 955:
#line 2293 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 956:
#line 2295 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 957:
#line 2297 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 958:
#line 2298 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 959:
#line 2299 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 960:
#line 2301 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 961:
#line 2303 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 962:
#line 2305 "frame/parser.Y"
    {fr->getMarkerBoxFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 963:
#line 2307 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 964:
#line 2309 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 965:
#line 2310 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 966:
#line 2311 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 967:
#line 2313 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 968:
#line 2315 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 969:
#line 2318 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), 
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 970:
#line 2320 "frame/parser.Y"
    {fr->getMarkerCircleFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 971:
#line 2322 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 972:
#line 2323 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 973:
#line 2324 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 974:
#line 2325 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 975:
#line 2327 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 976:
#line 2328 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 977:
#line 2329 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 978:
#line 2330 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 979:
#line 2331 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 980:
#line 2333 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 981:
#line 2335 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 982:
#line 2336 "frame/parser.Y"
    {fr->getMarkerEllipseFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 983:
#line 2338 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 984:
#line 2340 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 985:
#line 2342 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 986:
#line 2343 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 987:
#line 2345 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 988:
#line 2347 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 989:
#line 2348 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 990:
#line 2349 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 991:
#line 2350 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 992:
#line 2352 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 993:
#line 2354 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 994:
#line 2357 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 995:
#line 2360 "frame/parser.Y"
    {fr->getMarkerPolygonFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 996:
#line 2361 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 997:
#line 2362 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 998:
#line 2364 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 999:
#line 2367 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1000:
#line 2370 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1001:
#line 2371 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1002:
#line 2372 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1003:
#line 2373 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1004:
#line 2375 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1005:
#line 2377 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1006:
#line 2379 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1007:
#line 2380 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1008:
#line 2382 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1009:
#line 2383 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1010:
#line 2384 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1011:
#line 2385 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1012:
#line 2386 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1013:
#line 2388 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1014:
#line 2390 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1015:
#line 2392 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1016:
#line 2394 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1018:
#line 2396 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1019:
#line 2397 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1020:
#line 2399 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1021:
#line 2401 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1022:
#line 2402 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1023:
#line 2403 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1025:
#line 2405 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1027:
#line 2409 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1028:
#line 2410 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1029:
#line 2411 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1030:
#line 2412 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1031:
#line 2413 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1032:
#line 2414 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1033:
#line 2416 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1034:
#line 2417 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1035:
#line 2419 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1036:
#line 2422 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1037:
#line 2423 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1038:
#line 2424 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1039:
#line 2425 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1040:
#line 2428 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1041:
#line 2429 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1042:
#line 2432 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1043:
#line 2433 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1044:
#line 2436 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1045:
#line 2437 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1046:
#line 2440 "frame/parser.Y"
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

  case 1047:
#line 2453 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1048:
#line 2454 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1049:
#line 2458 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1050:
#line 2459 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1051:
#line 2463 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1052:
#line 2468 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer),
	    0, propQMask, propQValue, taglist);;}
    break;

  case 1053:
#line 2473 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer), 
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer),
	    1, propQMask, propQValue, taglist);;}
    break;

  case 1054:
#line 2479 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1055:
#line 2481 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].str),
	    (Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1056:
#line 2484 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1057:
#line 2486 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].integer),
	    (Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1058:
#line 2489 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (yyvsp[(4) - (6)].dash), (yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].str));;}
    break;

  case 1059:
#line 2492 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1060:
#line 2493 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1061:
#line 2494 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1062:
#line 2495 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1063:
#line 2496 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1064:
#line 2497 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1065:
#line 2499 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::InternalSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1066:
#line 2501 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1069:
#line 2508 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1070:
#line 2509 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1071:
#line 2510 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1072:
#line 2511 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1073:
#line 2512 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1074:
#line 2513 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1077:
#line 2518 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1078:
#line 2519 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1079:
#line 2520 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1080:
#line 2521 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1081:
#line 2522 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1082:
#line 2523 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1083:
#line 2524 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1084:
#line 2525 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1085:
#line 2526 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1086:
#line 2527 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1087:
#line 2528 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1090:
#line 2535 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1091:
#line 2536 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1093:
#line 2539 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1094:
#line 2540 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1095:
#line 2541 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1096:
#line 2542 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1097:
#line 2545 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1098:
#line 2546 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1101:
#line 2554 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1102:
#line 2557 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1103:
#line 2558 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1107:
#line 2565 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1108:
#line 2568 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1109:
#line 2572 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1110:
#line 2573 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1111:
#line 2574 "frame/parser.Y"
    {fr->maskMarkCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1112:
#line 2575 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1113:
#line 2578 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1114:
#line 2579 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1115:
#line 2580 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1116:
#line 2581 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1117:
#line 2585 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1118:
#line 2586 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1119:
#line 2588 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1120:
#line 2593 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1122:
#line 2595 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1124:
#line 2597 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1125:
#line 2600 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1126:
#line 2602 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1127:
#line 2607 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1128:
#line 2610 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1129:
#line 2611 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1130:
#line 2612 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1131:
#line 2615 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1132:
#line 2617 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1133:
#line 2621 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1134:
#line 2622 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1135:
#line 2626 "frame/parser.Y"
    {fr->psColorSpaceCmd((Widget::PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1136:
#line 2627 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1137:
#line 2628 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1138:
#line 2629 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  ;}
    break;

  case 1139:
#line 2634 "frame/parser.Y"
    {(yyval.integer) = Widget::BW;;}
    break;

  case 1140:
#line 2635 "frame/parser.Y"
    {(yyval.integer) = Widget::GRAY;;}
    break;

  case 1141:
#line 2636 "frame/parser.Y"
    {(yyval.integer) = Widget::RGB;;}
    break;

  case 1142:
#line 2637 "frame/parser.Y"
    {(yyval.integer) = Widget::CMYK;;}
    break;

  case 1145:
#line 2645 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1146:
#line 2647 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1147:
#line 2648 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1148:
#line 2649 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1149:
#line 2653 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1150:
#line 2654 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1151:
#line 2655 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1152:
#line 2656 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1153:
#line 2659 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1154:
#line 2660 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1155:
#line 2663 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1156:
#line 2664 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1157:
#line 2665 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1158:
#line 2668 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1159:
#line 2669 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1160:
#line 2670 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1161:
#line 2673 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1162:
#line 2674 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (2)].real))));;}
    break;

  case 1164:
#line 2676 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (2)].real))));;}
    break;

  case 1165:
#line 2677 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (3)].real))));;}
    break;

  case 1166:
#line 2680 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1167:
#line 2681 "frame/parser.Y"
    {fr->rotateMotionCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1168:
#line 2682 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1173:
#line 2689 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1174:
#line 2693 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1175:
#line 2695 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1176:
#line 2697 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1178:
#line 2702 "frame/parser.Y"
    {fr->saveArrayRGBCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1179:
#line 2704 "frame/parser.Y"
    {fr->saveArrayRGBCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1180:
#line 2706 "frame/parser.Y"
    {fr->saveArrayRGBCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1190:
#line 2719 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1191:
#line 2720 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1192:
#line 2721 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1193:
#line 2724 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1194:
#line 2725 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1195:
#line 2726 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1196:
#line 2729 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1197:
#line 2730 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1198:
#line 2731 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1199:
#line 2734 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1200:
#line 2735 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1201:
#line 2736 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1203:
#line 2740 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1204:
#line 2741 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1205:
#line 2742 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1206:
#line 2745 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1207:
#line 2746 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1208:
#line 2747 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1209:
#line 2750 "frame/parser.Y"
    {fr->saveFitsRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1210:
#line 2751 "frame/parser.Y"
    {fr->saveFitsRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1211:
#line 2752 "frame/parser.Y"
    {fr->saveFitsRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1212:
#line 2755 "frame/parser.Y"
    {fr->saveFitsRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1213:
#line 2756 "frame/parser.Y"
    {fr->saveFitsRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1214:
#line 2757 "frame/parser.Y"
    {fr->saveFitsRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1215:
#line 2760 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1216:
#line 2761 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1217:
#line 2762 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1218:
#line 2766 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1219:
#line 2768 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1220:
#line 2770 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1221:
#line 2774 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1222:
#line 2778 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1223:
#line 2779 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1224:
#line 2782 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1225:
#line 2783 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1226:
#line 2784 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1227:
#line 2785 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1228:
#line 2788 "frame/parser.Y"
    {fr->updateFitsCmd(0);;}
    break;

  case 1229:
#line 2790 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)),0);;}
    break;

  case 1230:
#line 2791 "frame/parser.Y"
    {fr->updateFitsCmd(1);;}
    break;

  case 1231:
#line 2793 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)),1);;}
    break;

  case 1233:
#line 2797 "frame/parser.Y"
    {fr->sliceCmd(2, (yyvsp[(1) - (1)].integer));;}
    break;

  case 1234:
#line 2798 "frame/parser.Y"
    {fr->sliceCmd(2, (yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1235:
#line 2799 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer), (yyvsp[(2) - (2)].integer));;}
    break;

  case 1236:
#line 2800 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (3)].integer), (yyvsp[(2) - (3)].real), (Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1237:
#line 2803 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1238:
#line 2804 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1239:
#line 2808 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1241:
#line 2810 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1244:
#line 2815 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1245:
#line 2816 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1246:
#line 2817 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1247:
#line 2820 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1248:
#line 2821 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1249:
#line 2822 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1250:
#line 2825 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1251:
#line 2827 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1252:
#line 2832 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (4)].integer), (FitsImage*)(yyvsp[(2) - (4)].ptr), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1253:
#line 2835 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1254:
#line 2842 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1255:
#line 2844 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1256:
#line 2846 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1257:
#line 2851 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1259:
#line 2855 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1260:
#line 2856 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1261:
#line 2857 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1262:
#line 2859 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1263:
#line 2861 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1264:
#line 2866 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 10919 "frame/parser.C"
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

