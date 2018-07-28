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
#define YYFINAL  352
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5428

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  350
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  215
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1252
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2762

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
     177,   180,   183,   186,   189,   192,   195,   198,   201,   203,
     205,   207,   209,   211,   213,   215,   217,   219,   220,   223,
     226,   228,   230,   231,   233,   235,   237,   239,   241,   243,
     245,   248,   251,   254,   257,   259,   261,   263,   265,   267,
     269,   271,   273,   275,   277,   279,   281,   283,   285,   287,
     289,   291,   293,   295,   297,   299,   301,   303,   305,   307,
     309,   311,   313,   315,   317,   319,   321,   323,   325,   327,
     329,   331,   333,   335,   337,   339,   341,   343,   345,   347,
     349,   351,   353,   354,   356,   358,   360,   362,   364,   366,
     368,   370,   372,   374,   375,   377,   379,   380,   382,   384,
     386,   387,   389,   391,   392,   394,   396,   397,   399,   401,
     402,   404,   406,   408,   410,   412,   414,   416,   417,   419,
     421,   423,   425,   427,   429,   431,   432,   434,   436,   437,
     439,   441,   443,   445,   447,   450,   453,   456,   459,   462,
     465,   468,   470,   473,   475,   478,   480,   483,   485,   488,
     491,   498,   501,   506,   509,   512,   515,   519,   522,   525,
     527,   530,   532,   535,   540,   546,   549,   553,   559,   566,
     568,   570,   572,   580,   592,   601,   614,   616,   619,   622,
     624,   626,   629,   632,   635,   638,   642,   646,   649,   652,
     654,   656,   658,   660,   662,   664,   666,   669,   672,   675,
     679,   682,   685,   688,   695,   706,   708,   711,   713,   720,
     731,   733,   736,   739,   742,   745,   748,   751,   765,   779,
     792,   805,   807,   808,   810,   812,   817,   824,   826,   828,
     830,   832,   834,   836,   838,   840,   842,   847,   851,   856,
     857,   864,   873,   876,   880,   884,   888,   889,   893,   898,
     903,   908,   912,   916,   918,   922,   928,   933,   938,   942,
     945,   946,   948,   950,   954,   957,   960,   963,   966,   969,
     972,   975,   978,   981,   984,   987,   990,   993,   996,   998,
    1001,  1004,  1009,  1019,  1022,  1025,  1028,  1030,  1034,  1037,
    1040,  1042,  1045,  1054,  1057,  1059,  1062,  1064,  1067,  1069,
    1074,  1084,  1087,  1089,  1091,  1093,  1095,  1098,  1100,  1102,
    1105,  1107,  1108,  1111,  1114,  1116,  1117,  1120,  1123,  1125,
    1127,  1130,  1133,  1136,  1138,  1140,  1142,  1144,  1146,  1148,
    1149,  1151,  1154,  1156,  1161,  1167,  1168,  1171,  1173,  1179,
    1182,  1185,  1187,  1189,  1191,  1194,  1196,  1199,  1201,  1203,
    1204,  1206,  1208,  1209,  1211,  1217,  1224,  1229,  1233,  1240,
    1243,  1245,  1249,  1251,  1253,  1255,  1259,  1266,  1274,  1280,
    1282,  1284,  1289,  1295,  1297,  1301,  1302,  1304,  1307,  1309,
    1314,  1316,  1319,  1321,  1324,  1328,  1331,  1333,  1336,  1338,
    1343,  1346,  1348,  1350,  1354,  1356,  1359,  1363,  1366,  1367,
    1369,  1371,  1376,  1379,  1380,  1382,  1384,  1387,  1388,  1390,
    1392,  1394,  1396,  1398,  1400,  1402,  1404,  1406,  1408,  1410,
    1413,  1415,  1418,  1420,  1423,  1426,  1429,  1432,  1434,  1436,
    1438,  1439,  1441,  1442,  1444,  1445,  1447,  1448,  1450,  1451,
    1454,  1457,  1458,  1460,  1463,  1465,  1472,  1478,  1480,  1482,
    1484,  1487,  1490,  1492,  1494,  1496,  1498,  1501,  1503,  1505,
    1507,  1510,  1512,  1514,  1516,  1519,  1522,  1525,  1526,  1528,
    1529,  1531,  1533,  1535,  1537,  1539,  1541,  1543,  1545,  1548,
    1551,  1554,  1556,  1559,  1563,  1565,  1568,  1571,  1576,  1583,
    1585,  1596,  1598,  1601,  1605,  1609,  1612,  1615,  1618,  1621,
    1624,  1627,  1630,  1635,  1640,  1645,  1649,  1653,  1659,  1664,
    1669,  1674,  1678,  1682,  1686,  1690,  1693,  1696,  1701,  1705,
    1709,  1713,  1717,  1722,  1727,  1732,  1737,  1743,  1748,  1755,
    1763,  1768,  1773,  1779,  1782,  1786,  1790,  1794,  1797,  1801,
    1805,  1809,  1813,  1818,  1822,  1828,  1835,  1839,  1843,  1848,
    1852,  1856,  1860,  1864,  1868,  1874,  1878,  1882,  1887,  1891,
    1894,  1897,  1899,  1903,  1908,  1913,  1918,  1923,  1928,  1935,
    1940,  1945,  1951,  1956,  1961,  1966,  1971,  1977,  1982,  1989,
    1997,  2002,  2007,  2013,  2019,  2025,  2031,  2037,  2043,  2051,
    2057,  2063,  2070,  2076,  2082,  2088,  2094,  2101,  2107,  2115,
    2124,  2130,  2136,  2143,  2147,  2151,  2155,  2159,  2163,  2169,
    2173,  2177,  2182,  2186,  2190,  2194,  2198,  2203,  2207,  2213,
    2220,  2224,  2228,  2233,  2237,  2241,  2245,  2249,  2253,  2259,
    2263,  2267,  2272,  2277,  2282,  2286,  2292,  2297,  2302,  2305,
    2309,  2316,  2323,  2325,  2327,  2329,  2332,  2335,  2338,  2342,
    2346,  2349,  2362,  2365,  2368,  2370,  2374,  2379,  2382,  2383,
    2387,  2389,  2391,  2394,  2397,  2400,  2403,  2406,  2411,  2416,
    2421,  2425,  2430,  2436,  2445,  2452,  2457,  2467,  2474,  2482,
    2493,  2505,  2518,  2528,  2534,  2539,  2546,  2550,  2556,  2562,
    2569,  2575,  2580,  2590,  2601,  2613,  2623,  2630,  2637,  2644,
    2651,  2658,  2665,  2672,  2679,  2686,  2694,  2702,  2705,  2710,
    2715,  2720,  2725,  2731,  2736,  2741,  2747,  2753,  2757,  2762,
    2767,  2772,  2777,  2785,  2795,  2802,  2813,  2825,  2838,  2848,
    2852,  2855,  2859,  2865,  2872,  2880,  2885,  2889,  2893,  2900,
    2907,  2915,  2923,  2928,  2933,  2938,  2948,  2953,  2957,  2962,
    2969,  2977,  2985,  2988,  2992,  2996,  3000,  3005,  3008,  3011,
    3016,  3027,  3031,  3033,  3037,  3040,  3043,  3046,  3049,  3053,
    3059,  3064,  3070,  3073,  3081,  3085,  3088,  3091,  3095,  3098,
    3101,  3104,  3108,  3111,  3115,  3120,  3124,  3128,  3134,  3141,
    3146,  3149,  3153,  3156,  3159,  3164,  3168,  3172,  3175,  3179,
    3181,  3184,  3186,  3189,  3192,  3195,  3197,  3199,  3201,  3203,
    3206,  3208,  3211,  3214,  3216,  3219,  3222,  3224,  3227,  3229,
    3231,  3233,  3235,  3237,  3239,  3241,  3243,  3244,  3246,  3249,
    3252,  3255,  3259,  3265,  3273,  3281,  3288,  3295,  3302,  3309,
    3315,  3322,  3329,  3336,  3343,  3350,  3357,  3364,  3376,  3384,
    3392,  3400,  3410,  3420,  3431,  3444,  3457,  3460,  3463,  3467,
    3472,  3477,  3482,  3485,  3490,  3495,  3497,  3499,  3501,  3503,
    3505,  3507,  3509,  3511,  3514,  3516,  3518,  3520,  3524,  3528,
    3533,  3540,  3551,  3559,  3567,  3573,  3576,  3579,  3583,  3588,
    3594,  3598,  3604,  3610,  3614,  3619,  3625,  3631,  3637,  3641,
    3647,  3650,  3654,  3658,  3664,  3668,  3672,  3676,  3681,  3687,
    3693,  3697,  3703,  3709,  3713,  3718,  3724,  3730,  3733,  3736,
    3740,  3746,  3753,  3760,  3764,  3768,  3772,  3779,  3785,  3791,
    3794,  3798,  3802,  3808,  3815,  3819,  3822,  3825,  3829,  3832,
    3836,  3839,  3843,  3849,  3856,  3859,  3862,  3865,  3867,  3872,
    3877,  3879,  3882,  3885,  3888,  3891,  3894,  3897,  3900,  3904,
    3907,  3911,  3914,  3918,  3920,  3922,  3924,  3926,  3928,  3929,
    3932,  3933,  3936,  3937,  3939,  3940,  3941,  3943,  3945,  3947,
    3949,  3957,  3966,  3969,  3974,  3977,  3982,  3989,  3992,  3994,
    3996,  4000,  4004,  4006,  4010,  4015,  4018,  4020,  4024,  4028,
    4033,  4037,  4041,  4045,  4047,  4049,  4051,  4053,  4055,  4057,
    4059,  4061,  4063,  4065,  4067,  4069,  4071,  4073,  4076,  4077,
    4078,  4081,  4083,  4087,  4089,  4093,  4095,  4098,  4101,  4103,
    4107,  4108,  4109,  4112,  4115,  4117,  4121,  4127,  4129,  4132,
    4135,  4138,  4140,  4142,  4144,  4146,  4151,  4154,  4158,  4162,
    4165,  4169,  4172,  4175,  4178,  4182,  4186,  4190,  4193,  4197,
    4199,  4203,  4207,  4209,  4212,  4215,  4218,  4221,  4223,  4225,
    4227,  4229,  4232,  4235,  4239,  4243,  4245,  4248,  4252,  4256,
    4258,  4261,  4263,  4265,  4267,  4269,  4271,  4274,  4277,  4282,
    4284,  4287,  4290,  4293,  4297,  4299,  4301,  4303,  4306,  4309,
    4312,  4315,  4318,  4322,  4326,  4330,  4334,  4338,  4342,  4346,
    4348,  4351,  4354,  4357,  4361,  4364,  4368,  4372,  4375,  4378,
    4381,  4384,  4387,  4390,  4393,  4396,  4399,  4402,  4405,  4408,
    4411,  4414,  4418,  4422,  4426,  4429,  4432,  4435,  4438,  4441,
    4444,  4447,  4450,  4453,  4456,  4459,  4462,  4466,  4470,  4474,
    4479,  4486,  4488,  4490,  4492,  4494,  4496,  4497,  4503,  4505,
    4512,  4516,  4518,  4521,  4524,  4528,  4531,  4535,  4539,  4542,
    4545,  4548,  4551,  4554,  4557,  4561,  4564,  4567,  4571,  4573,
    4577,  4582,  4584,  4587,  4593,  4600,  4607,  4610,  4612,  4615,
    4618,  4624,  4631
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
      -1,   192,   354,    -1,   215,   354,    -1,   217,   354,    -1,
     309,   354,    -1,    44,   354,    -1,    46,   354,    -1,    76,
     354,    -1,    84,   354,    -1,   142,   354,    -1,   243,   354,
      -1,     4,    -1,   342,    -1,   346,    -1,   209,    -1,   293,
      -1,   202,    -1,   347,    -1,   208,    -1,   119,    -1,    -1,
     244,    38,    -1,   133,    38,    -1,   244,    -1,   133,    -1,
      -1,   357,    -1,   352,    -1,     7,    -1,     8,    -1,     9,
      -1,    10,    -1,    11,    -1,   358,   358,    -1,   359,   360,
      -1,   360,   360,    -1,   352,   352,    -1,   157,    -1,   219,
      -1,   101,    -1,    19,    -1,   363,    -1,   309,    -1,   310,
      -1,   311,    -1,   312,    -1,   313,    -1,   314,    -1,   315,
      -1,   316,    -1,   317,    -1,   318,    -1,   319,    -1,   320,
      -1,   321,    -1,   322,    -1,   323,    -1,   324,    -1,   325,
      -1,   326,    -1,   327,    -1,   328,    -1,   329,    -1,   330,
      -1,   331,    -1,   332,    -1,   333,    -1,   334,    -1,   335,
      -1,   336,    -1,    56,    -1,   214,    -1,   173,    -1,   177,
      -1,   227,    -1,   273,    -1,   274,    -1,    28,    -1,   265,
      -1,   151,    -1,    30,    -1,   252,    -1,   247,    -1,    94,
      -1,   163,    -1,    -1,   127,    -1,   128,    -1,    35,    -1,
     129,    -1,   164,    -1,   154,    -1,   135,    -1,   278,    -1,
     106,    -1,   148,    -1,    -1,    97,    -1,   258,    -1,    -1,
      97,    -1,    24,    -1,    25,    -1,    -1,   262,    -1,   165,
      -1,    -1,    17,    -1,   159,    -1,    -1,   157,    -1,   184,
      -1,    -1,    62,    -1,    48,    -1,   102,    -1,    85,    -1,
     348,    -1,    27,    -1,    51,    -1,    -1,     4,    -1,    82,
      -1,   152,    -1,   221,    -1,   222,    -1,   236,    -1,   276,
      -1,    -1,    32,    -1,   279,    -1,    -1,   198,    -1,    42,
      -1,    43,    -1,   170,    -1,   171,    -1,   303,   382,    -1,
      47,   379,    -1,    74,   380,    -1,   150,   381,    -1,   186,
     533,    -1,    37,   534,    -1,   251,   352,    -1,   230,    -1,
     287,   352,    -1,   354,    -1,    66,     5,    -1,   354,    -1,
      66,     5,    -1,   354,    -1,    66,     5,    -1,   352,   352,
      -1,   223,   352,   352,   352,   352,   352,    -1,    12,   384,
      -1,    71,     5,     5,     5,    -1,   100,     4,    -1,   118,
     385,    -1,   134,   386,    -1,    53,   266,     4,    -1,   290,
     387,    -1,   122,     5,    -1,    59,    -1,   352,   352,    -1,
     352,    -1,   352,   352,    -1,   352,    12,   352,   352,    -1,
     352,   352,    12,   352,   352,    -1,   290,   352,    -1,   290,
     352,   352,    -1,   290,   352,    12,   352,   352,    -1,   290,
     352,   352,    12,   352,   352,    -1,    32,    -1,   279,    -1,
     123,    -1,   352,   352,    12,    59,     5,     5,     5,    -1,
     352,   352,     4,   352,   352,    12,    59,     5,     5,     5,
       5,    -1,   352,   352,    12,   352,   352,     5,     5,     5,
      -1,   352,   352,     4,   352,   352,    12,   352,   352,     5,
       5,     5,     5,    -1,   352,    -1,   352,   352,    -1,   290,
     389,    -1,   123,    -1,   352,    -1,   352,   352,    -1,   254,
     391,    -1,   193,   392,    -1,   187,   393,    -1,   300,   352,
     352,    -1,   300,   197,   197,    -1,   344,   394,    -1,   230,
     354,    -1,   138,    -1,   176,    -1,   352,    -1,   187,    -1,
     344,    -1,   343,    -1,   300,    -1,     4,   366,    -1,   193,
     366,    -1,   247,     4,    -1,   352,     4,     4,    -1,    78,
     352,    -1,   247,     4,    -1,   172,     4,    -1,     4,   352,
     352,     4,     6,     4,    -1,   243,   352,   352,   352,   352,
     352,   352,     4,     6,     4,    -1,    40,    -1,   194,   396,
      -1,   111,    -1,     4,   352,   352,     4,     6,     4,    -1,
     243,   352,   352,   352,   352,   352,   352,     4,     6,     4,
      -1,   365,    -1,   177,   352,    -1,    83,   399,    -1,    99,
     400,    -1,   175,   401,    -1,   216,   405,    -1,   250,   406,
      -1,     5,     4,     4,   404,     4,     4,   365,   352,   402,
     403,   352,   352,     5,    -1,     5,     4,     4,   404,     4,
       4,   365,   352,   352,   403,   352,   352,     5,    -1,     5,
       4,     4,   404,     4,     4,   365,   352,   402,   352,   352,
       5,    -1,     5,     4,     4,   404,     4,     4,   365,   352,
     352,   352,   352,     5,    -1,   225,    -1,    -1,    31,    -1,
       5,    -1,     5,     5,     4,   354,    -1,     5,     4,   354,
       5,   362,   367,    -1,   187,    -1,   344,    -1,   343,    -1,
     300,    -1,   138,    -1,   176,    -1,   269,    -1,    46,    -1,
       5,    -1,     5,     5,     4,   354,    -1,     5,   362,   367,
      -1,    31,     5,   362,   367,    -1,    -1,   352,   352,   352,
     352,   362,   367,    -1,    59,   361,   362,   367,   352,   352,
     362,   369,    -1,   286,   408,    -1,    40,   352,   352,    -1,
     194,   352,   352,    -1,   111,   352,   352,    -1,    -1,   352,
     352,   362,    -1,    40,   352,   352,     4,    -1,   194,   352,
     352,     4,    -1,   111,   352,   352,     4,    -1,   364,   352,
     352,    -1,   362,   367,   361,    -1,   354,    -1,   308,   352,
     352,    -1,    40,   194,   364,   352,   352,    -1,   194,   364,
     352,   352,    -1,    40,   194,   362,   361,    -1,   194,   362,
     361,    -1,    33,     4,    -1,    -1,    32,    -1,   279,    -1,
     144,   117,     5,    -1,    41,    66,    -1,    44,   414,    -1,
      46,   416,    -1,    65,   417,    -1,    68,   421,    -1,    67,
     420,    -1,    69,   423,    -1,    77,   425,    -1,    79,   428,
      -1,    84,   429,    -1,    86,   430,    -1,    88,   432,    -1,
      87,   431,    -1,    93,   433,    -1,    95,    -1,   124,   437,
      -1,   141,   443,    -1,   152,     5,     5,     4,    -1,   153,
      89,     5,     5,   352,   352,   364,     4,   411,    -1,   156,
     435,    -1,   160,   434,    -1,   162,    16,    -1,   187,    -1,
     183,   503,   497,    -1,   184,   444,    -1,   197,    66,    -1,
     212,    -1,   213,   445,    -1,   220,   281,   364,   352,   352,
       4,     4,     5,    -1,   243,   446,    -1,   245,    -1,   269,
     447,    -1,   285,    -1,   286,   448,    -1,   294,    -1,   301,
     364,   352,   352,    -1,   307,    89,     5,     5,   352,   352,
     364,     4,   411,    -1,   309,   453,    -1,   345,    -1,   100,
      -1,   118,    -1,   134,    -1,    53,   266,    -1,    88,    -1,
     122,    -1,    71,   415,    -1,   174,    -1,    -1,   187,     5,
      -1,   103,     5,    -1,   118,    -1,    -1,   402,   403,    -1,
     352,   403,    -1,   254,    -1,   193,    -1,   187,   418,    -1,
     300,   169,    -1,   344,   419,    -1,   230,    -1,   193,    -1,
     247,    -1,    78,    -1,   247,    -1,   172,    -1,    -1,   282,
      -1,   169,   422,    -1,     4,    -1,     4,   364,   352,   352,
      -1,     4,   352,   352,   365,   352,    -1,    -1,   169,   424,
      -1,   177,    -1,     4,   352,   352,   365,   352,    -1,   362,
     367,    -1,    65,   426,    -1,    66,    -1,    91,    -1,   169,
      -1,   206,   169,    -1,   186,    -1,    69,   427,    -1,   269,
      -1,   338,    -1,    -1,   193,    -1,   254,    -1,    -1,   177,
      -1,   352,   352,   362,   367,   368,    -1,   364,   352,   352,
     362,   367,   368,    -1,   352,   362,   362,     4,    -1,   362,
     367,   368,    -1,    59,   362,   367,   368,   362,   369,    -1,
     286,   362,    -1,   364,    -1,   362,   367,   368,    -1,   277,
      -1,    33,    -1,   364,    -1,   362,   367,   368,    -1,   362,
     367,   361,   352,   352,     5,    -1,     4,   362,   367,   361,
     352,   352,     5,    -1,   364,   352,   352,     4,     4,    -1,
       5,    -1,    65,    -1,   364,   352,   352,     5,    -1,     6,
       4,     4,     4,     4,    -1,    88,    -1,   120,   196,   436,
      -1,    -1,     4,    -1,   352,   352,    -1,   199,    -1,    59,
     362,   367,   368,    -1,    81,    -1,   100,   440,    -1,    45,
      -1,   117,   438,    -1,   120,   196,   441,    -1,   146,   439,
      -1,   147,    -1,   207,   196,    -1,   266,    -1,   266,   362,
     367,   369,    -1,   267,   442,    -1,   338,    -1,     4,    -1,
     364,   352,   352,    -1,     4,    -1,   166,     5,    -1,     4,
     166,     5,    -1,   309,     4,    -1,    -1,     4,    -1,   355,
      -1,   355,   364,   352,   352,    -1,   355,     4,    -1,    -1,
       4,    -1,   362,    -1,     4,   362,    -1,    -1,   211,    -1,
     302,    -1,    66,    -1,   182,    -1,   289,    -1,   230,    -1,
      61,    -1,   280,    -1,   303,    -1,   134,    -1,   237,    -1,
     237,   188,    -1,   264,    -1,   264,   188,    -1,    21,    -1,
     303,   452,    -1,    47,   449,    -1,    74,   450,    -1,   150,
     451,    -1,   186,    -1,    37,    -1,   251,    -1,    -1,    66,
      -1,    -1,    66,    -1,    -1,    66,    -1,    -1,   223,    -1,
      -1,    16,   454,    -1,   196,   363,    -1,    -1,   224,    -1,
      83,   456,    -1,    99,    -1,   362,   367,   368,   457,     5,
       5,    -1,   362,   367,   368,   457,     5,    -1,    20,    -1,
     233,    -1,    19,    -1,    44,   459,    -1,    77,   460,    -1,
      84,    -1,    94,    -1,    95,    -1,   101,    -1,   124,   461,
      -1,   141,    -1,   156,    -1,   163,    -1,   183,   462,    -1,
     219,    -1,   157,    -1,   269,    -1,   280,   362,    -1,   309,
     463,    -1,    72,     5,    -1,    -1,    31,    -1,    -1,    44,
      -1,    87,    -1,   192,    -1,   150,    -1,   256,    -1,   216,
      -1,   295,    -1,   362,    -1,   115,   362,    -1,    58,   362,
      -1,   173,   362,    -1,    18,    -1,   286,   362,    -1,   200,
       4,     4,    -1,   116,    -1,   185,     5,    -1,    88,   466,
      -1,   257,   120,   196,   465,    -1,   257,     6,     4,     4,
       4,     4,    -1,   299,    -1,   309,   352,   352,   352,   352,
     352,   352,   352,   352,     4,    -1,     5,    -1,     5,     4,
      -1,     4,     4,    56,    -1,     4,     4,   362,    -1,   193,
     354,    -1,    26,   468,    -1,   112,   470,    -1,   124,   471,
      -1,   159,   484,    -1,   205,   482,    -1,   218,   483,    -1,
       5,    14,     5,   372,    -1,     5,    15,     5,   372,    -1,
       5,    61,     5,   372,    -1,     5,   190,   372,    -1,     5,
     191,   372,    -1,     5,   260,   370,     4,   372,    -1,     5,
     270,     4,   372,    -1,     5,   271,     4,   372,    -1,     5,
     302,     5,   372,    -1,   243,    87,   469,    -1,     5,    14,
       5,    -1,     5,    15,     5,    -1,     5,    61,     5,    -1,
       5,   190,    -1,     5,   191,    -1,     5,   260,   370,     4,
      -1,     5,   270,     4,    -1,     5,   271,     4,    -1,     5,
     302,     5,    -1,     5,     5,   268,    -1,     5,    14,     5,
     372,    -1,     5,    15,     5,   372,    -1,     5,    61,     5,
     372,    -1,     5,   190,   371,   372,    -1,     5,     5,   268,
     371,   372,    -1,     5,   191,   371,   372,    -1,     5,   260,
     370,     4,   371,   372,    -1,     5,   275,   370,     4,     4,
     371,   372,    -1,     5,   270,     4,   372,    -1,     5,   271,
       4,   372,    -1,     5,   302,     5,   371,   372,    -1,   267,
     472,    -1,   117,    87,   473,    -1,   243,   157,   481,    -1,
     243,    87,   480,    -1,   192,   474,    -1,     5,    14,     5,
      -1,     5,    15,     5,    -1,     5,    61,     5,    -1,     5,
     190,   371,    -1,     5,     5,   268,   371,    -1,     5,   191,
     371,    -1,     5,   260,   370,     4,   371,    -1,     5,   275,
     370,     4,     4,   371,    -1,     5,   270,     4,    -1,     5,
     271,     4,    -1,     5,   302,     5,   371,    -1,     5,    14,
       5,    -1,     5,    15,     5,    -1,     5,    61,     5,    -1,
       5,   190,   371,    -1,     5,   191,   371,    -1,     5,   260,
     370,     4,   371,    -1,     5,   270,     4,    -1,     5,   271,
       4,    -1,     5,   302,     5,   371,    -1,   157,   162,   475,
      -1,   162,   476,    -1,   157,   477,    -1,   478,    -1,   157,
     337,   479,    -1,     5,    14,     5,   372,    -1,     5,    15,
       5,   372,    -1,     5,    61,     5,   372,    -1,     5,   190,
     371,   372,    -1,     5,   191,   371,   372,    -1,     5,   260,
     370,     4,   371,   372,    -1,     5,   270,     4,   372,    -1,
       5,   271,     4,   372,    -1,     5,   302,     5,   371,   372,
      -1,     5,    14,     5,   372,    -1,     5,    15,     5,   372,
      -1,     5,    61,     5,   372,    -1,     5,   190,   371,   372,
      -1,     5,     5,   268,   371,   372,    -1,     5,   191,   371,
     372,    -1,     5,   260,   370,     4,   371,   372,    -1,     5,
     275,   370,     4,     4,   371,   372,    -1,     5,   270,     4,
     372,    -1,     5,   271,     4,   372,    -1,     5,   302,     5,
     371,   372,    -1,   363,     5,    14,     5,   372,    -1,   363,
       5,    15,     5,   372,    -1,   363,     5,    61,     5,   372,
      -1,   363,     5,   190,   371,   372,    -1,   363,     5,   191,
     371,   372,    -1,   363,     5,   260,   370,     4,   371,   372,
      -1,   363,     5,   270,     4,   372,    -1,   363,     5,   271,
       4,   372,    -1,   363,     5,   302,     5,   371,   372,    -1,
     363,     5,    14,     5,   372,    -1,   363,     5,    15,     5,
     372,    -1,   363,     5,    61,     5,   372,    -1,   363,     5,
     190,   371,   372,    -1,   363,     5,     5,   268,   371,   372,
      -1,   363,     5,   191,   371,   372,    -1,   363,     5,   260,
     370,     4,   371,   372,    -1,   363,     5,   275,   370,     4,
       4,   371,   372,    -1,   363,     5,   270,     4,   372,    -1,
     363,     5,   271,     4,   372,    -1,   363,     5,   302,     5,
     371,   372,    -1,     5,    14,     5,    -1,     5,    15,     5,
      -1,     5,    61,     5,    -1,     5,   190,   371,    -1,     5,
     191,   371,    -1,     5,   260,   370,     4,   371,    -1,     5,
     270,     4,    -1,     5,   271,     4,    -1,     5,   302,     5,
     371,    -1,     5,    14,     5,    -1,     5,    15,     5,    -1,
       5,    61,     5,    -1,     5,   190,   371,    -1,     5,     5,
     268,   371,    -1,     5,   191,   371,    -1,     5,   260,   370,
       4,   371,    -1,     5,   275,   370,     4,     4,   371,    -1,
       5,   270,     4,    -1,     5,   271,     4,    -1,     5,   302,
       5,   371,    -1,     5,    14,     5,    -1,     5,    15,     5,
      -1,     5,    61,     5,    -1,     5,   190,   371,    -1,     5,
     191,   371,    -1,     5,   260,   370,     4,   371,    -1,     5,
     270,     4,    -1,     5,   271,     4,    -1,     5,   302,     5,
     371,    -1,     5,    14,     5,   372,    -1,     5,    61,     5,
     372,    -1,     5,   190,   372,    -1,     5,   260,   370,     4,
     372,    -1,     5,   270,     4,   372,    -1,     5,   302,     5,
     372,    -1,     5,     5,    -1,   267,     5,     5,    -1,    93,
       4,     4,     4,     4,     4,    -1,   187,     4,     4,     4,
       4,     4,    -1,   111,    -1,   229,    -1,   354,    -1,   139,
     354,    -1,    88,   354,    -1,    66,     5,    -1,     5,     4,
       4,    -1,   299,   352,   352,    -1,   345,   352,    -1,     5,
       5,   363,   367,     5,     5,   363,   367,   352,   363,   369,
       5,    -1,    60,   491,    -1,    66,     5,    -1,    80,    -1,
      73,   496,     5,    -1,    73,   496,   302,     5,    -1,    75,
      99,    -1,    -1,    83,   489,   492,    -1,    89,    -1,    99,
      -1,    99,    17,    -1,   105,   495,    -1,   114,     4,    -1,
     130,     5,    -1,   150,    17,    -1,   150,   210,   352,   352,
      -1,   150,   291,   352,   352,    -1,     4,    20,   375,   354,
      -1,     4,    21,   357,    -1,     4,    21,   357,   364,    -1,
       4,    21,   357,   362,   367,    -1,     4,    22,   237,   352,
     352,     4,   362,   369,    -1,     4,    22,   237,     5,   362,
     369,    -1,     4,    48,   121,   354,    -1,     4,    49,   237,
     352,   352,   352,     4,   362,   369,    -1,     4,    49,   237,
       5,   362,   369,    -1,     4,    48,   237,   352,   352,   362,
     369,    -1,     4,    52,   105,   357,   357,     4,   352,   352,
     352,     4,    -1,     4,    52,   105,   357,   357,     4,   352,
     352,   352,     4,   364,    -1,     4,    52,   105,   357,   357,
       4,   352,   352,   352,     4,   362,   367,    -1,     4,    52,
     105,     5,     5,   362,   367,   362,   369,    -1,     4,    55,
     490,     5,     5,    -1,     4,    62,   121,   354,    -1,     4,
      62,   237,   352,   362,   369,    -1,     4,    66,     5,    -1,
       4,    74,    27,   354,   354,    -1,     4,    74,   167,     5,
       5,    -1,     4,    74,   237,   352,   362,   369,    -1,     4,
      74,   280,   362,   367,    -1,     4,    75,   138,   354,    -1,
       4,    82,   105,   357,   357,     4,   352,   352,     4,    -1,
       4,    82,   105,   357,   357,     4,   352,   352,     4,   364,
      -1,     4,    82,   105,   357,   357,     4,   352,   352,     4,
     362,   367,    -1,     4,    82,   105,     5,     5,   362,   367,
     362,   369,    -1,     4,    83,    22,   237,   352,   352,    -1,
       4,    83,    49,   237,   352,   352,    -1,     4,    83,    52,
      21,   352,   352,    -1,     4,    83,    52,   237,   352,   352,
      -1,     4,    83,   110,   237,   352,   352,    -1,     4,    83,
     113,    21,   352,   352,    -1,     4,    83,   113,   237,   352,
     352,    -1,     4,    83,    82,    21,   352,   352,    -1,     4,
      83,    82,   237,   352,   352,    -1,     4,    83,   225,   306,
       4,   352,   352,    -1,     4,    83,   255,   306,     4,   352,
     352,    -1,     4,    99,    -1,     4,    99,    22,     4,    -1,
       4,    99,    49,     4,    -1,     4,    99,    52,     4,    -1,
       4,    99,   110,     4,    -1,     4,    99,    55,   490,     5,
      -1,     4,    99,   113,     4,    -1,     4,    99,    82,     4,
      -1,     4,    99,   225,   306,     4,    -1,     4,    99,   255,
     306,     4,    -1,     4,    99,   282,    -1,     4,    99,   282,
       5,    -1,     4,    99,   282,     4,    -1,     4,   105,    40,
       4,    -1,     4,   109,   121,   354,    -1,     4,   109,   237,
     352,   352,   362,   369,    -1,     4,   110,   237,   352,   352,
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
     352,   352,   362,   369,    -1,     4,   255,   241,   352,   352,
     362,   369,    -1,     4,   223,   259,   373,    -1,     4,   223,
     266,     4,    -1,     4,   225,   121,   354,    -1,     4,   231,
     362,   367,   361,   361,   352,   362,   369,    -1,     4,   232,
     509,   354,    -1,     4,   245,    40,    -1,     4,   246,   131,
       5,    -1,     4,   246,   223,   364,   361,   361,    -1,     4,
     246,   223,   362,   367,   361,   361,    -1,     4,   246,   280,
     362,   367,   362,   369,    -1,     4,   256,    -1,     4,   256,
     210,    -1,     4,   282,     5,    -1,     4,   284,     5,    -1,
       4,   284,   245,   354,    -1,     4,   296,    -1,     4,   298,
      -1,     4,   304,    27,   354,    -1,     4,   304,   223,   362,
     367,   361,   362,   369,   352,   357,    -1,     4,   338,     4,
      -1,   165,    -1,   165,   352,   352,    -1,   174,   504,    -1,
     175,   505,    -1,   195,   506,    -1,   230,   354,    -1,   232,
     509,   354,    -1,   232,   509,   354,   352,   352,    -1,   245,
      40,   352,   352,    -1,   245,   194,   352,   352,     4,    -1,
     245,   111,    -1,   250,     5,   496,   362,   367,   368,   354,
      -1,   250,   283,     5,    -1,   256,   513,    -1,   263,   514,
      -1,     5,    66,     5,    -1,     5,    80,    -1,     5,    99,
      -1,     5,    89,    -1,     5,   130,     5,    -1,     5,   150,
      -1,     5,   150,   210,    -1,     5,   195,   352,   352,    -1,
       5,   195,   132,    -1,     5,   195,    36,    -1,     5,   195,
     290,   364,   361,    -1,     5,   195,   290,   362,   367,   361,
      -1,     5,   232,   509,   354,    -1,     5,   256,    -1,     5,
     256,   210,    -1,     5,   296,    -1,     5,   298,    -1,   282,
     105,     5,     5,    -1,   282,    99,     5,    -1,   282,    99,
      17,    -1,   282,     5,    -1,   282,   299,     5,    -1,   216,
      -1,   216,   362,    -1,   295,    -1,   296,    17,    -1,   298,
      17,    -1,   338,     4,    -1,   256,    -1,   298,    -1,   150,
      -1,   296,    -1,    40,   195,    -1,   195,    -1,   111,   195,
      -1,    40,   105,    -1,   105,    -1,   111,   105,    -1,    40,
     245,    -1,   245,    -1,   111,   245,    -1,    99,    -1,   284,
      -1,    66,    -1,   338,    -1,   232,    -1,   130,    -1,   165,
      -1,   299,    -1,    -1,     4,    -1,    30,   354,    -1,   237,
     352,    -1,   161,     4,    -1,   211,     4,   352,    -1,    62,
     352,   352,   352,   510,    -1,   109,   352,   352,   352,   352,
     356,   510,    -1,    48,   352,   352,   352,   352,   356,   510,
      -1,   225,   352,   352,   352,   352,   510,    -1,   255,   352,
     352,   352,   352,   510,    -1,   172,   352,   352,   352,   352,
     510,    -1,   304,   352,   352,   352,   352,   510,    -1,   284,
     352,   352,   356,   510,    -1,    62,   223,   352,   352,   374,
     510,    -1,    48,   223,   352,   352,   374,   510,    -1,   102,
     223,   352,   352,   374,   510,    -1,    85,   223,   352,   352,
     374,   510,    -1,   348,   223,   352,   352,   374,   510,    -1,
      27,   223,   352,   352,   374,   510,    -1,    51,   223,   352,
     352,   374,   510,    -1,   246,   352,   352,   352,   352,   362,
     367,   362,   369,     5,   510,    -1,    74,   352,   352,   352,
     362,   367,   510,    -1,   231,   352,   352,   352,   352,   352,
     510,    -1,    22,   352,   352,   352,   352,     4,   510,    -1,
     110,   352,   352,   352,   352,   352,     4,   356,   510,    -1,
      49,   352,   352,   352,   352,   352,     4,   356,   510,    -1,
      82,   352,   352,   357,   357,     4,   352,   352,     4,   510,
      -1,   113,   352,   352,   357,   357,     4,   352,   352,   352,
       4,   356,   510,    -1,    52,   352,   352,   357,   357,     4,
     352,   352,   352,     4,   356,   510,    -1,    75,   510,    -1,
     283,   493,    -1,     5,   352,   352,    -1,   302,     5,   352,
     352,    -1,   352,   352,   302,     5,    -1,     5,   362,   367,
     361,    -1,     4,     4,    -1,    40,   352,   352,     4,    -1,
     194,   352,   352,     4,    -1,   111,    -1,   104,    -1,   340,
      -1,    63,    -1,   249,    -1,   248,    -1,   234,    -1,   341,
      -1,    60,   498,    -1,    66,    -1,   130,    -1,   114,    -1,
     143,   352,   352,    -1,   155,   352,   352,    -1,     4,    20,
      82,   362,    -1,     4,    20,   152,     5,     5,     4,    -1,
       4,    20,   221,     5,     5,     5,     5,   362,   367,   376,
      -1,     4,    20,   222,     5,     5,   362,   376,    -1,     4,
      20,   236,     5,     5,     5,   362,    -1,     4,    20,   276,
     362,   367,    -1,   155,    17,    -1,     4,    21,    -1,     4,
      21,   364,    -1,     4,    21,   362,   367,    -1,     4,    22,
     237,   362,   369,    -1,     4,    48,   121,    -1,     4,    49,
     237,   362,   369,    -1,     4,    48,   237,   362,   369,    -1,
       4,    52,    21,    -1,     4,    52,    21,   364,    -1,     4,
      52,    21,   362,   367,    -1,     4,    52,   237,   362,   369,
      -1,     4,    59,   362,   367,   368,    -1,     4,    62,   121,
      -1,     4,    62,   237,   362,   369,    -1,     4,    66,    -1,
       4,    74,    27,    -1,     4,    74,   167,    -1,     4,    74,
     237,   362,   369,    -1,     4,    74,   280,    -1,     4,    75,
     138,    -1,     4,    82,    21,    -1,     4,    82,    21,   364,
      -1,     4,    82,    21,   362,   367,    -1,     4,    82,   237,
     362,   369,    -1,     4,   109,   121,    -1,     4,   109,   237,
     362,   369,    -1,     4,   110,   237,   362,   369,    -1,     4,
     113,    21,    -1,     4,   113,    21,   364,    -1,     4,   113,
      21,   362,   367,    -1,     4,   113,   237,   362,   369,    -1,
       4,   130,    -1,     4,   150,    -1,     4,   172,    27,    -1,
       4,   172,   168,   362,   369,    -1,     4,   172,   223,   362,
     367,   368,    -1,     4,   181,   168,   352,   362,   369,    -1,
       4,   225,   121,    -1,     4,   223,   259,    -1,     4,   223,
     266,    -1,     4,   231,   223,   362,   367,   368,    -1,     4,
     231,   168,   362,   369,    -1,     4,   231,   288,   362,   369,
      -1,     4,   232,    -1,     4,   232,   509,    -1,     4,   246,
     131,    -1,     4,   246,   168,   362,   369,    -1,     4,   246,
     223,   362,   367,   368,    -1,     4,   246,   280,    -1,     4,
     256,    -1,     4,   282,    -1,     4,   282,     4,    -1,     4,
     284,    -1,     4,   284,   245,    -1,     4,   294,    -1,     4,
     304,    27,    -1,     4,   304,   168,   362,   369,    -1,     4,
     304,   223,   362,   367,   368,    -1,     4,   338,    -1,   150,
     499,    -1,   150,   206,    -1,   206,    -1,   225,   255,   352,
     352,    -1,   255,   255,   352,   352,    -1,   230,    -1,   232,
     509,    -1,   256,   500,    -1,   256,   206,    -1,   263,   501,
      -1,     5,    66,    -1,     5,   130,    -1,     5,   155,    -1,
       5,   232,   509,    -1,     5,   282,    -1,     5,   282,   206,
      -1,   282,    17,    -1,   282,    98,   196,    -1,   338,    -1,
      30,    -1,   237,    -1,   161,    -1,   211,    -1,    -1,   352,
     352,    -1,    -1,   352,   352,    -1,    -1,   284,    -1,    -1,
      -1,   224,    -1,   238,    -1,   300,    -1,    57,    -1,   496,
     362,   367,   368,   354,   511,   517,    -1,   256,   496,   362,
     367,   368,   354,   511,   517,    -1,   496,     5,    -1,   496,
       5,   362,   367,    -1,   496,     4,    -1,   496,     4,   362,
     367,    -1,   124,     5,     5,   494,     4,     5,    -1,   352,
     352,    -1,   132,    -1,    36,    -1,    40,   352,   352,    -1,
     194,   352,   352,    -1,   111,    -1,   290,   364,   361,    -1,
     290,   362,   367,   361,    -1,   507,   508,    -1,   508,    -1,
     509,   349,   354,    -1,    66,   349,     5,    -1,    92,   349,
       4,     4,    -1,   338,   349,     4,    -1,   130,   349,     5,
      -1,   284,   349,     5,    -1,   520,    -1,   521,    -1,   203,
      -1,   256,    -1,   150,    -1,    91,    -1,   126,    -1,   105,
      -1,   195,    -1,   245,    -1,    99,    -1,   158,    -1,   272,
      -1,   502,    -1,   502,   507,    -1,    -1,    -1,   512,   515,
      -1,    17,    -1,   210,   352,   352,    -1,   291,    -1,   291,
     352,   352,    -1,   354,    -1,   284,   354,    -1,   515,   516,
      -1,   516,    -1,   509,   349,   354,    -1,    -1,    -1,   518,
     519,    -1,   519,   520,    -1,   520,    -1,   282,   349,     5,
      -1,    55,   349,   490,     5,     5,    -1,    64,    -1,    66,
       5,    -1,   182,     4,    -1,   289,   352,    -1,   348,    -1,
     346,    -1,   341,    -1,   203,    -1,   352,   352,   352,   352,
      -1,   352,   352,    -1,   364,   352,   352,    -1,   362,   367,
     361,    -1,   290,   525,    -1,    39,   352,   352,    -1,   194,
     526,    -1,   230,   354,    -1,   352,   352,    -1,   364,   352,
     352,    -1,   362,   367,   361,    -1,    40,   352,   352,    -1,
     352,   352,    -1,   111,   352,   352,    -1,   354,    -1,   309,
     363,   367,    -1,     5,     4,     4,    -1,   299,    -1,    70,
     529,    -1,   169,     4,    -1,   242,     4,    -1,   251,   352,
      -1,    54,    -1,   140,    -1,   243,    -1,    90,    -1,   150,
     531,    -1,   256,   532,    -1,    40,   352,   352,    -1,   194,
     352,   352,    -1,   111,    -1,   261,   111,    -1,    40,   352,
     352,    -1,   194,   352,   352,    -1,   111,    -1,   261,   111,
      -1,   189,    -1,    13,    -1,   203,    -1,    34,    -1,   107,
      -1,    61,     5,    -1,   280,   362,    -1,   303,     4,     4,
       4,    -1,   352,    -1,   352,    97,    -1,   194,   537,    -1,
     290,   352,    -1,   290,   352,    97,    -1,    40,    -1,   352,
      -1,   111,    -1,    26,   539,    -1,   124,   541,    -1,   205,
     551,    -1,   112,   552,    -1,   218,     5,    -1,   120,     5,
     377,    -1,    61,     5,   377,    -1,   270,     4,   377,    -1,
     243,    87,   540,    -1,   120,     5,   377,    -1,    61,     5,
     377,    -1,   270,     4,   377,    -1,   542,    -1,   157,   542,
      -1,   281,   543,    -1,   267,   544,    -1,   117,    87,   545,
      -1,   192,   546,    -1,   243,   157,   548,    -1,   243,    87,
     549,    -1,   240,   550,    -1,   120,     5,    -1,    61,     5,
      -1,   270,     4,    -1,   120,     5,    -1,    61,     5,    -1,
     270,     4,    -1,   120,     5,    -1,    61,     5,    -1,   270,
       4,    -1,   120,     5,    -1,    61,     5,    -1,   270,     4,
      -1,   157,   547,    -1,   120,     5,     4,    -1,    61,     5,
       4,    -1,   270,     4,     4,    -1,   120,     5,    -1,    61,
       5,    -1,   270,     4,    -1,   120,     5,    -1,    61,     5,
      -1,   270,     4,    -1,   120,     5,    -1,    61,     5,    -1,
     270,     4,    -1,   120,     5,    -1,    61,     5,    -1,   270,
       4,    -1,   120,     5,   377,    -1,    61,     5,   377,    -1,
     270,     4,   377,    -1,   120,     5,     5,   377,    -1,   554,
       4,     4,   352,   352,   357,    -1,    99,    -1,    50,    -1,
     292,    -1,   136,    -1,   108,    -1,    -1,     4,   352,   352,
     352,   352,    -1,   204,    -1,   204,     4,   352,   352,   352,
     352,    -1,   124,   267,   556,    -1,     4,    -1,   352,   362,
      -1,     4,     4,    -1,     4,   352,   362,    -1,   352,   352,
      -1,   290,   352,   352,    -1,   363,   367,   368,    -1,    16,
     561,    -1,   241,     4,    -1,   239,   560,    -1,    23,   559,
      -1,     4,     4,    -1,     4,     5,    -1,   284,     4,     5,
      -1,     4,     4,    -1,     4,     5,    -1,   284,     4,     5,
      -1,     4,    -1,     4,   363,   367,    -1,     4,     6,   363,
     367,    -1,   229,    -1,   352,   352,    -1,   352,   352,    12,
     352,   352,    -1,   352,   352,    12,   364,   352,   352,    -1,
     352,   352,    12,   362,   367,   361,    -1,   290,   564,    -1,
     123,    -1,   123,   352,    -1,   352,   352,    -1,   352,   352,
      12,   352,   352,    -1,   352,   352,    12,   364,   352,   352,
      -1,   352,   352,    12,   362,   367,   361,    -1
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
     514,   515,   516,   517,   518,   519,   520,   521,   524,   526,
     527,   528,   529,   531,   532,   533,   534,   537,   538,   539,
     540,   541,   544,   545,   548,   549,   550,   553,   556,   559,
     562,   574,   581,   588,   596,   597,   598,   599,   600,   603,
     604,   605,   606,   607,   608,   609,   610,   611,   612,   613,
     614,   615,   616,   617,   618,   619,   620,   621,   622,   623,
     624,   625,   626,   627,   628,   629,   630,   633,   634,   637,
     638,   639,   640,   641,   642,   643,   644,   647,   648,   649,
     650,   651,   654,   655,   656,   657,   658,   659,   660,   661,
     662,   663,   664,   667,   668,   669,   672,   673,   674,   675,
     678,   679,   680,   683,   684,   685,   688,   689,   690,   693,
     694,   695,   696,   697,   698,   699,   700,   703,   704,   707,
     708,   709,   710,   711,   712,   715,   716,   717,   720,   721,
     722,   723,   724,   725,   728,   729,   730,   731,   732,   733,
     734,   735,   736,   740,   741,   744,   745,   748,   749,   752,
     753,   757,   758,   759,   760,   761,   762,   763,   764,   767,
     768,   771,   772,   773,   775,   777,   778,   779,   781,   785,
     786,   789,   790,   792,   795,   797,   803,   804,   805,   808,
     809,   810,   813,   814,   815,   816,   817,   818,   819,   825,
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
    1345,  1346,  1347,  1350,  1351,  1352,  1353,  1354,  1355,  1357,
    1358,  1363,  1364,  1367,  1369,  1371,  1374,  1375,  1376,  1377,
    1378,  1379,  1382,  1384,  1386,  1388,  1389,  1391,  1393,  1395,
    1397,  1399,  1402,  1403,  1404,  1405,  1406,  1407,  1409,  1410,
    1411,  1414,  1417,  1419,  1421,  1423,  1425,  1427,  1429,  1431,
    1434,  1436,  1438,  1440,  1441,  1442,  1443,  1444,  1447,  1448,
    1449,  1450,  1451,  1452,  1453,  1455,  1457,  1458,  1459,  1462,
    1463,  1464,  1465,  1466,  1467,  1469,  1470,  1471,  1474,  1475,
    1476,  1477,  1478,  1481,  1484,  1487,  1490,  1493,  1496,  1499,
    1502,  1505,  1510,  1513,  1516,  1519,  1522,  1525,  1528,  1531,
    1534,  1537,  1540,  1545,  1548,  1551,  1554,  1557,  1560,  1563,
    1566,  1569,  1574,  1577,  1580,  1583,  1586,  1589,  1592,  1595,
    1598,  1601,  1604,  1609,  1611,  1612,  1613,  1614,  1615,  1617,
    1618,  1619,  1621,  1622,  1623,  1624,  1625,  1626,  1627,  1629,
    1631,  1632,  1633,  1636,  1637,  1638,  1639,  1640,  1641,  1643,
    1644,  1645,  1648,  1650,  1652,  1653,  1655,  1657,  1661,  1662,
    1665,  1666,  1667,  1670,  1677,  1678,  1679,  1680,  1681,  1682,
    1683,  1686,  1694,  1695,  1696,  1697,  1699,  1701,  1702,  1702,
    1703,  1704,  1705,  1706,  1707,  1708,  1710,  1711,  1713,  1716,
    1719,  1720,  1721,  1724,  1727,  1730,  1731,  1735,  1738,  1741,
    1744,  1748,  1753,  1758,  1760,  1761,  1763,  1764,  1766,  1768,
    1770,  1772,  1773,  1775,  1777,  1781,  1786,  1788,  1790,  1792,
    1794,  1796,  1798,  1800,  1802,  1804,  1806,  1809,  1810,  1812,
    1814,  1815,  1817,  1819,  1820,  1821,  1823,  1825,  1826,  1827,
    1829,  1830,  1831,  1834,  1838,  1841,  1844,  1848,  1853,  1859,
    1860,  1861,  1863,  1864,  1866,  1870,  1872,  1873,  1874,  1876,
    1879,  1882,  1885,  1887,  1889,  1890,  1895,  1898,  1899,  1900,
    1903,  1906,  1910,  1911,  1913,  1914,  1915,  1917,  1918,  1920,
    1921,  1926,  1928,  1929,  1931,  1932,  1933,  1934,  1935,  1936,
    1938,  1940,  1942,  1943,  1945,  1946,  1948,  1950,  1951,  1952,
    1953,  1954,  1955,  1956,  1957,  1958,  1959,  1960,  1962,  1964,
    1966,  1967,  1968,  1969,  1971,  1972,  1973,  1974,  1975,  1977,
    1978,  1979,  1980,  1981,  1982,  1985,  1986,  1987,  1988,  1989,
    1990,  1991,  1992,  1993,  1994,  1995,  1996,  1997,  1998,  1999,
    2000,  2001,  2002,  2003,  2004,  2005,  2008,  2009,  2010,  2011,
    2012,  2013,  2021,  2028,  2037,  2046,  2053,  2060,  2068,  2076,
    2083,  2088,  2093,  2098,  2103,  2108,  2113,  2119,  2129,  2139,
    2149,  2156,  2166,  2176,  2185,  2197,  2210,  2215,  2218,  2220,
    2222,  2227,  2231,  2234,  2236,  2238,  2241,  2242,  2243,  2244,
    2245,  2246,  2247,  2250,  2251,  2252,  2253,  2254,  2255,  2257,
    2259,  2261,  2263,  2265,  2267,  2270,  2271,  2272,  2273,  2275,
    2278,  2279,  2281,  2283,  2284,  2285,  2287,  2290,  2293,  2294,
    2296,  2297,  2298,  2299,  2301,  2302,  2303,  2304,  2305,  2307,
    2309,  2310,  2312,  2315,  2316,  2317,  2319,  2321,  2322,  2323,
    2324,  2326,  2329,  2333,  2334,  2335,  2336,  2339,  2342,  2344,
    2345,  2346,  2347,  2349,  2352,  2353,  2355,  2356,  2357,  2358,
    2359,  2361,  2362,  2364,  2367,  2368,  2369,  2370,  2371,  2373,
    2375,  2376,  2377,  2378,  2380,  2382,  2383,  2384,  2385,  2386,
    2387,  2389,  2390,  2392,  2395,  2396,  2397,  2398,  2401,  2402,
    2405,  2406,  2409,  2410,  2413,  2426,  2427,  2431,  2432,  2436,
    2439,  2444,  2451,  2453,  2456,  2458,  2461,  2465,  2466,  2467,
    2468,  2469,  2470,  2471,  2473,  2477,  2478,  2481,  2482,  2483,
    2484,  2485,  2486,  2487,  2488,  2491,  2492,  2493,  2494,  2495,
    2496,  2497,  2498,  2499,  2500,  2501,  2504,  2505,  2508,  2509,
    2509,  2512,  2513,  2514,  2515,  2518,  2519,  2522,  2523,  2526,
    2530,  2531,  2531,  2534,  2535,  2538,  2541,  2545,  2546,  2547,
    2548,  2551,  2552,  2553,  2554,  2557,  2559,  2560,  2565,  2567,
    2568,  2569,  2570,  2573,  2574,  2579,  2583,  2584,  2585,  2588,
    2589,  2594,  2595,  2598,  2600,  2601,  2602,  2607,  2608,  2609,
    2610,  2613,  2614,  2617,  2619,  2621,  2622,  2625,  2627,  2628,
    2629,  2632,  2633,  2636,  2637,  2638,  2641,  2642,  2643,  2646,
    2647,  2648,  2649,  2650,  2653,  2654,  2655,  2658,  2659,  2660,
    2661,  2662,  2665,  2667,  2669,  2671,  2674,  2676,  2678,  2681,
    2682,  2683,  2684,  2685,  2686,  2687,  2688,  2689,  2692,  2693,
    2694,  2697,  2698,  2699,  2702,  2703,  2704,  2707,  2708,  2709,
    2712,  2713,  2714,  2715,  2718,  2719,  2720,  2723,  2724,  2725,
    2728,  2729,  2730,  2733,  2734,  2735,  2738,  2740,  2742,  2746,
    2750,  2752,  2755,  2756,  2757,  2758,  2761,  2762,  2764,  2765,
    2767,  2770,  2771,  2772,  2773,  2776,  2777,  2780,  2782,  2783,
    2784,  2785,  2788,  2789,  2790,  2793,  2794,  2795,  2798,  2799,
    2804,  2808,  2815,  2816,  2818,  2823,  2825,  2828,  2829,  2830,
    2831,  2833,  2838
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
     353,   353,   353,   353,   353,   353,   353,   353,   354,   354,
     354,   354,   354,   354,   354,   354,   354,   355,   355,   355,
     355,   355,   356,   356,   357,   357,   357,   358,   359,   360,
     361,   361,   361,   361,   362,   362,   362,   362,   362,   363,
     363,   363,   363,   363,   363,   363,   363,   363,   363,   363,
     363,   363,   363,   363,   363,   363,   363,   363,   363,   363,
     363,   363,   363,   363,   363,   363,   363,   364,   364,   365,
     365,   365,   365,   365,   365,   365,   365,   366,   366,   366,
     366,   366,   367,   367,   367,   367,   367,   367,   367,   367,
     367,   367,   367,   368,   368,   368,   369,   369,   369,   369,
     370,   370,   370,   371,   371,   371,   372,   372,   372,   373,
     373,   373,   373,   373,   373,   373,   373,   374,   374,   375,
     375,   375,   375,   375,   375,   376,   376,   376,   377,   377,
     377,   377,   377,   377,   378,   378,   378,   378,   378,   378,
     378,   378,   378,   379,   379,   380,   380,   381,   381,   382,
     382,   383,   383,   383,   383,   383,   383,   383,   383,   384,
     384,   385,   385,   385,   385,   385,   385,   385,   385,   386,
     386,   387,   387,   387,   387,   387,   388,   388,   388,   389,
     389,   389,   390,   390,   390,   390,   390,   390,   390,   391,
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
     463,   463,   463,   464,   464,   464,   464,   464,   464,   464,
     464,   465,   465,   466,   466,   466,   467,   467,   467,   467,
     467,   467,   468,   468,   468,   468,   468,   468,   468,   468,
     468,   468,   469,   469,   469,   469,   469,   469,   469,   469,
     469,   470,   471,   471,   471,   471,   471,   471,   471,   471,
     471,   471,   471,   471,   471,   471,   471,   471,   472,   472,
     472,   472,   472,   472,   472,   472,   472,   472,   472,   473,
     473,   473,   473,   473,   473,   473,   473,   473,   474,   474,
     474,   474,   474,   475,   475,   475,   475,   475,   475,   475,
     475,   475,   476,   476,   476,   476,   476,   476,   476,   476,
     476,   476,   476,   477,   477,   477,   477,   477,   477,   477,
     477,   477,   478,   478,   478,   478,   478,   478,   478,   478,
     478,   478,   478,   479,   479,   479,   479,   479,   479,   479,
     479,   479,   480,   480,   480,   480,   480,   480,   480,   480,
     480,   480,   480,   481,   481,   481,   481,   481,   481,   481,
     481,   481,   482,   482,   482,   482,   482,   482,   483,   483,
     484,   484,   484,   485,   486,   486,   486,   486,   486,   486,
     486,   487,   488,   488,   488,   488,   488,   488,   489,   488,
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
     497,   497,   497,   497,   498,   498,   498,   498,   499,   499,
     500,   500,   501,   501,   502,   503,   503,   503,   503,   503,
     504,   504,   505,   505,   505,   505,   505,   506,   506,   506,
     506,   506,   506,   506,   506,   507,   507,   508,   508,   508,
     508,   508,   508,   508,   508,   509,   509,   509,   509,   509,
     509,   509,   509,   509,   509,   509,   510,   510,   511,   512,
     511,   513,   513,   513,   513,   514,   514,   515,   515,   516,
     517,   518,   517,   519,   519,   520,   521,   522,   522,   522,
     522,   523,   523,   523,   523,   524,   524,   524,   524,   524,
     524,   524,   524,   525,   525,   525,   526,   526,   526,   527,
     527,   527,   527,   528,   528,   528,   528,   529,   529,   529,
     529,   530,   530,   531,   531,   531,   531,   532,   532,   532,
     532,   533,   533,   534,   534,   534,   535,   535,   535,   536,
     536,   536,   536,   536,   537,   537,   537,   538,   538,   538,
     538,   538,   539,   539,   539,   539,   540,   540,   540,   541,
     541,   541,   541,   541,   541,   541,   541,   541,   542,   542,
     542,   543,   543,   543,   544,   544,   544,   545,   545,   545,
     546,   546,   546,   546,   547,   547,   547,   548,   548,   548,
     549,   549,   549,   550,   550,   550,   551,   551,   551,   552,
     553,   553,   554,   554,   554,   554,   555,   555,   555,   555,
     555,   556,   556,   556,   556,   557,   557,   558,   558,   558,
     558,   558,   559,   559,   559,   560,   560,   560,   561,   561,
     561,   562,   563,   563,   563,   563,   563,   564,   564,   564,
     564,   564,   564
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
       2,     2,     2,     2,     2,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     2,     2,
       1,     1,     0,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     1,     1,     0,     1,     1,     1,
       0,     1,     1,     0,     1,     1,     0,     1,     1,     0,
       1,     1,     1,     1,     1,     1,     1,     0,     1,     1,
       1,     1,     1,     1,     1,     0,     1,     1,     0,     1,
       1,     1,     1,     1,     2,     2,     2,     2,     2,     2,
       2,     1,     2,     1,     2,     1,     2,     1,     2,     2,
       6,     2,     4,     2,     2,     2,     3,     2,     2,     1,
       2,     1,     2,     4,     5,     2,     3,     5,     6,     1,
       1,     1,     7,    11,     8,    12,     1,     2,     2,     1,
       1,     2,     2,     2,     2,     3,     3,     2,     2,     1,
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
       3,     4,     5,     8,     6,     4,     9,     6,     7,    10,
      11,    12,     9,     5,     4,     6,     3,     5,     5,     6,
       5,     4,     9,    10,    11,     9,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     7,     7,     2,     4,     4,
       4,     4,     5,     4,     4,     5,     5,     3,     4,     4,
       4,     4,     7,     9,     6,    10,    11,    12,     9,     3,
       2,     3,     5,     6,     7,     4,     3,     3,     6,     6,
       7,     7,     4,     4,     4,     9,     4,     3,     4,     6,
       7,     7,     2,     3,     3,     3,     4,     2,     2,     4,
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
       6,    10,     7,     7,     5,     2,     2,     3,     4,     5,
       3,     5,     5,     3,     4,     5,     5,     5,     3,     5,
       2,     3,     3,     5,     3,     3,     3,     4,     5,     5,
       3,     5,     5,     3,     4,     5,     5,     2,     2,     3,
       5,     6,     6,     3,     3,     3,     6,     5,     5,     2,
       3,     3,     5,     6,     3,     2,     2,     3,     2,     3,
       2,     3,     5,     6,     2,     2,     2,     1,     4,     4,
       1,     2,     2,     2,     2,     2,     2,     2,     3,     2,
       3,     2,     3,     1,     1,     1,     1,     1,     0,     2,
       0,     2,     0,     1,     0,     0,     1,     1,     1,     1,
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
       0,     0,     0,     0,     6,     7,     0,     0,     0,     0,
       0,   299,     0,     0,     0,     0,     0,     0,     0,     0,
      21,     0,     0,     0,     0,     0,     0,     0,  1035,     0,
       0,     0,     0,     0,     0,     0,     0,  1035,    38,     0,
       0,     0,    43,     0,     0,     0,    47,  1216,    49,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     3,    54,    55,     0,   236,     5,     0,
       0,     0,     0,     0,     0,     8,     0,     0,   265,   267,
       0,     0,    10,   134,   136,   129,   130,   131,   135,   132,
     133,   270,    11,     0,   282,     0,     0,     0,    12,     0,
       0,     0,     0,   306,     0,    13,    68,    97,     0,   127,
      96,    76,    94,     0,    73,    75,    71,   128,    95,    72,
       0,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,    69,
      70,    74,   313,   142,    98,     0,    14,     0,    15,    16,
       0,     0,     0,     0,     0,     0,    57,    56,     0,     0,
       0,     0,     2,     0,    17,     0,     0,     0,   375,   389,
       0,   395,     0,     0,     0,     0,     0,     0,     0,   338,
       0,   467,     0,     0,     0,     0,     0,  1035,     0,   346,
       0,   350,     0,     0,     0,   354,     0,   356,     0,   358,
       0,     0,   498,   362,    18,     0,   504,    19,   509,     0,
     527,   512,   513,   514,   515,   529,   517,   518,   522,   519,
       0,   521,   523,     0,     0,    20,    22,     0,   544,     0,
       0,     0,   549,     0,    23,     0,     0,     0,     0,     0,
       0,     0,    25,   703,    26,     0,     0,     0,     0,     0,
       0,   704,    27,     0,    28,  1039,  1036,  1037,  1038,     0,
    1097,     0,     0,     0,    30,     0,  1104,  1103,  1102,  1101,
      32,     0,     0,     0,     0,     0,   142,     0,    33,     0,
    1122,     0,  1119,    34,     0,     0,     0,     0,    37,     0,
      35,     0,     0,     0,     0,    40,     0,     0,  1149,    41,
       0,     0,     0,     0,     0,    42,  1212,  1211,  1215,  1214,
    1213,    44,     0,    45,     0,     0,     0,     0,     0,   201,
       0,     0,     0,    46,     0,     0,  1218,    48,     0,     0,
      50,     0,     0,     0,     0,   142,    51,  1241,    52,     0,
       0,    53,     1,     4,   219,     0,   211,     0,     0,   213,
       0,   221,   214,   218,   229,   230,   215,   231,     0,   217,
     239,   240,   238,   237,     0,     0,     0,   244,   252,   255,
     254,   253,   251,   243,   248,   249,   250,   242,     0,     0,
       0,     0,     0,     0,   247,     9,     0,     0,     0,   266,
       0,   271,     0,   281,   272,   283,   273,   284,   274,   295,
     275,     0,     0,   276,     0,    87,    88,    89,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   302,
       0,     0,     0,     0,     0,   145,   151,   143,   144,   146,
     149,   152,   148,   147,   150,     0,     0,   319,    62,    63,
      64,    65,    66,    58,    59,    60,    67,    61,     0,   324,
       0,   371,   367,   363,   364,   368,   365,   370,   325,   374,
     326,   287,   379,   383,   378,   290,   289,   288,     0,     0,
     327,   390,   329,     0,   328,     0,   397,   330,   409,   401,
     412,   402,   403,   405,     0,   407,   408,   142,   331,     0,
       0,   332,     0,     0,   142,   333,   422,   142,   420,   334,
     423,   336,   142,   424,   335,     0,   142,     0,   337,   442,
       0,   440,   458,     0,     0,     0,   446,   438,     0,   448,
     463,   451,   339,   468,   469,   340,     0,     0,     0,   433,
       0,   343,   429,   430,     0,   344,   345,     0,   470,   471,
     472,   348,   349,   473,   351,     0,   474,   475,   476,   353,
     482,   477,   478,   480,   355,   488,   490,   492,   494,   487,
     489,   496,   357,     0,     0,   501,     0,   361,   142,   503,
       0,   510,   528,   511,   530,   531,   532,   516,   533,   535,
     534,   536,   520,   524,   541,     0,     0,     0,     0,   537,
     525,     0,     0,   546,   545,     0,     0,     0,     0,    24,
       0,     0,   556,     0,   557,     0,     0,     0,     0,     0,
     558,     0,   702,     0,   559,     0,   560,     0,     0,   561,
       0,   707,   706,   705,     0,   710,     0,     0,     0,   886,
       0,     0,     0,   714,   718,   720,   721,     0,     0,     0,
       0,   822,     0,     0,     0,   859,     0,     0,     0,     0,
       0,     0,     0,   861,     0,     0,     0,    29,  1098,  1099,
    1100,    31,     0,     0,     0,     0,  1111,  1112,     0,   142,
       0,  1109,  1106,     0,     0,     0,   142,  1127,  1130,  1128,
    1129,  1123,  1124,  1125,  1126,     0,     0,     0,    39,  1146,
    1147,     0,  1154,  1156,  1155,  1151,  1152,  1150,     0,     0,
       0,     0,  1157,     0,  1160,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1158,  1169,     0,     0,     0,
    1159,  1161,     0,  1144,  1145,  1143,   199,     0,   203,   195,
       0,   205,   196,     0,   207,   197,  1142,  1141,   198,   200,
     202,     0,     0,   194,     0,     0,     0,     0,  1225,  1238,
    1228,     0,     0,  1231,     0,     0,  1230,  1229,   153,  1247,
       0,  1246,  1242,   220,   216,     0,   225,     0,   222,     0,
     241,   137,   140,   141,   139,   138,   256,   257,   258,   246,
     245,   260,   262,   261,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   142,     0,   303,    93,    90,    91,    92,
     142,   305,   304,     0,     0,     0,     0,     0,     0,     0,
     318,     0,   314,   312,   311,   323,   366,     0,     0,   369,
     384,   385,   380,   381,   386,   388,   387,   382,   291,   292,
     377,   376,   392,   391,     0,   396,   410,   411,   400,   413,
     406,   404,   399,     0,     0,     0,   142,   419,   153,   153,
     153,   142,     0,     0,   142,   459,   441,   452,     0,   443,
      77,   454,     0,     0,   445,   447,   142,   464,   465,   450,
       0,     0,     0,   435,     0,     0,     0,     0,   934,   936,
     935,     0,  1028,     0,  1007,     0,  1010,     0,     0,  1030,
    1032,     0,  1023,   347,     0,   479,   481,   491,   484,   493,
     485,   495,   486,   497,   483,     0,     0,   502,   499,   500,
     153,   526,   539,   538,   540,   542,     0,   555,   543,     0,
       0,     0,     0,     0,     0,   166,   166,   160,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   163,   163,   160,
       0,     0,   160,     0,     0,     0,     0,     0,   597,   621,
       0,     0,     0,   593,     0,     0,     0,     0,   166,   160,
       0,     0,   698,     0,   708,   709,   142,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     767,     0,     0,     0,     0,     0,   790,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   812,     0,     0,   817,
     818,     0,     0,     0,   838,   840,   839,     0,   842,     0,
       0,   850,   852,   853,   887,     0,     0,     0,     0,   712,
     713,   928,   926,   931,   930,   929,   927,   932,     0,   717,
       0,   722,     0,   925,     0,   723,   724,   725,   726,     0,
       0,     0,     0,     0,   824,     0,     0,   825,  1049,     0,
    1052,  1048,     0,     0,     0,   826,   860,   827,  1068,  1073,
    1070,  1069,  1067,  1074,  1071,  1065,  1072,  1066,  1075,     0,
       0,   832,     0,     0,     0,  1081,     0,  1083,   835,     0,
    1085,   836,   857,     0,     0,     0,   862,   863,   864,  1110,
       0,     0,  1117,  1113,     0,     0,     0,  1108,  1107,  1121,
    1120,     0,     0,  1135,     0,     0,  1131,     0,  1139,     0,
       0,  1132,     0,  1153,   188,   188,     0,   188,     0,  1179,
       0,  1178,  1170,     0,     0,     0,     0,  1174,     0,     0,
       0,  1177,     0,     0,     0,     0,     0,  1172,  1180,     0,
       0,     0,  1171,   188,   188,   188,     0,   204,   206,   208,
       0,   209,     0,    55,     0,  1220,     0,  1226,     0,   142,
    1232,  1233,     0,  1235,  1236,     0,   154,   155,  1227,  1248,
    1249,     0,   212,     0,   226,     0,     0,     0,     0,   259,
       0,     0,     0,     0,     0,     0,     0,     0,   297,   142,
       0,     0,     0,     0,   307,     0,   317,     0,   316,   373,
     372,     0,     0,     0,   142,     0,     0,   153,   417,   421,
     425,     0,     0,     0,   153,     0,    81,    80,   460,   444,
       0,   455,   457,   156,   466,   341,     0,     0,    55,     0,
     434,     0,     0,   946,     0,     0,     0,     0,     0,     0,
     960,     0,     0,     0,     0,     0,     0,   977,   978,     0,
       0,     0,     0,     0,   989,     0,   995,   996,   998,  1000,
       0,  1004,  1015,  1016,  1017,     0,  1019,  1024,  1026,  1027,
    1025,   933,     0,  1006,     0,  1005,   945,     0,     0,  1011,
       0,  1013,     0,  1012,  1033,  1014,  1021,     0,     0,   359,
       0,     0,   553,   554,     0,   551,   547,     0,   166,   166,
     166,   167,   168,   565,   566,   162,   161,     0,   166,   166,
     166,     0,   571,   581,   163,   166,   166,   166,   164,   165,
     166,   166,     0,   166,   166,     0,   163,     0,   594,     0,
       0,     0,   620,     0,   619,     0,     0,   596,     0,   595,
       0,     0,     0,     0,   163,   163,   160,     0,     0,   160,
       0,     0,     0,   166,   166,   694,     0,   166,   166,   699,
       0,   179,   180,   181,   182,   183,   184,     0,    85,    86,
      84,   730,     0,     0,     0,     0,     0,     0,   880,   878,
     873,     0,   883,   867,   884,   870,   882,   876,   865,   879,
     868,   866,   885,   881,     0,     0,     0,   746,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   777,     0,     0,     0,     0,     0,   789,   791,     0,
       0,   797,   796,     0,     0,   169,     0,     0,     0,   142,
       0,   807,     0,     0,     0,     0,   813,   814,   815,     0,
       0,     0,   821,   837,   841,   843,   846,   845,     0,     0,
       0,   851,   888,   890,     0,   889,   715,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1034,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   719,     0,     0,     0,     0,   823,     0,   142,
       0,  1044,  1042,     0,     0,   142,     0,  1047,   828,     0,
       0,     0,   834,     0,     0,  1086,   855,   856,     0,   858,
    1116,  1118,  1115,  1114,  1105,     0,     0,     0,  1136,     0,
       0,  1140,  1148,   190,   191,   192,   193,   189,  1163,  1162,
       0,     0,     0,  1165,  1164,   188,     0,     0,     0,  1173,
       0,     0,     0,     0,     0,  1190,     0,  1204,  1203,  1205,
       0,     0,     0,  1176,     0,     0,     0,  1175,  1185,  1184,
    1186,  1182,  1181,  1183,  1207,  1206,  1208,     0,     0,     0,
      55,     0,  1222,     0,   142,  1239,  1234,  1237,     0,     0,
     142,     0,     0,     0,   223,     0,     0,     0,     0,     0,
       0,     0,     0,   294,   293,     0,     0,   285,   296,   298,
       0,   308,   310,   309,   142,   315,     0,     0,     0,   153,
     416,   142,     0,     0,     0,     0,   439,   453,    79,    78,
     462,     0,   456,   158,   159,   157,   449,     0,     0,   437,
     431,     0,     0,     0,     0,     0,     0,   142,   947,     0,
     950,     0,     0,   953,     0,   142,   958,     0,   961,   962,
       0,   964,   965,   966,     0,   970,     0,     0,   973,     0,
     979,     0,     0,     0,   984,   985,   983,     0,     0,     0,
     990,   991,     0,     0,   994,   997,   999,  1001,     0,     0,
    1018,  1020,   937,  1029,   938,     0,     0,  1031,  1022,     0,
       0,   507,   508,     0,     0,   552,     0,   562,   563,   564,
     166,   568,   569,   570,     0,     0,     0,   575,   576,   160,
       0,     0,     0,   166,   582,   583,   584,   585,   587,   163,
     590,   591,     0,   166,     0,     0,     0,   163,   163,   160,
       0,     0,     0,     0,   618,     0,   622,     0,     0,     0,
       0,     0,   163,   163,   160,     0,     0,   160,     0,     0,
       0,     0,     0,   163,   163,   160,     0,     0,   160,     0,
       0,     0,     0,     0,   163,   163,   160,     0,     0,   160,
       0,     0,     0,     0,   163,   163,   160,     0,     0,     0,
     163,   598,   599,   600,   601,   603,     0,   606,   607,     0,
     163,     0,     0,   692,   693,   166,   696,   697,     0,   729,
     142,   731,     0,     0,   735,     0,     0,     0,     0,     0,
     872,   869,   875,   874,   871,   877,     0,   744,     0,     0,
       0,     0,   142,   751,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   768,   769,   770,
       0,   774,   771,   773,     0,     0,   779,   778,   780,   781,
       0,     0,     0,     0,     0,     0,   142,     0,   142,     0,
     795,   175,   171,   176,   170,   173,   172,   174,   802,   803,
     804,     0,     0,   806,   808,   142,     0,   142,     0,   816,
     819,   142,   142,     0,   844,   849,   891,   716,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1076,   916,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   917,     0,     0,     0,     0,     0,
     727,   728,   142,   153,     0,   142,   142,  1050,  1051,     0,
    1053,     0,   830,     0,   142,  1082,  1084,   854,     0,  1133,
    1134,  1137,  1138,   188,   188,   188,  1209,  1188,  1187,  1189,
    1192,  1191,  1195,  1194,  1196,  1193,  1201,  1200,  1202,  1198,
    1197,  1199,     0,     0,  1217,  1224,     0,  1240,     0,   142,
       0,  1243,     0,     0,   227,     0,   224,     0,     0,     0,
     263,     0,     0,     0,     0,   142,     0,   300,   130,     0,
     393,     0,   414,   153,   156,     0,     0,   428,     0,     0,
     432,   939,     0,     0,     0,     0,   142,   948,   156,   156,
     156,   142,   954,   156,   153,   156,   156,   142,   967,   156,
     156,   156,   142,   974,   156,   156,   142,     0,   156,   142,
     156,   156,   142,   156,   142,  1008,  1009,     0,     0,   506,
     548,     0,   567,   572,   573,   574,     0,   578,   579,   580,
     586,   166,   163,   592,   609,   610,   611,   612,   613,     0,
     615,   616,   163,     0,     0,     0,   163,   163,   160,     0,
       0,     0,     0,     0,     0,   163,   163,   160,     0,     0,
       0,     0,     0,     0,   163,   163,   160,     0,     0,     0,
     163,   166,   166,   166,   166,   166,     0,   166,   166,     0,
     163,   163,   166,   166,   166,   166,   166,     0,   166,   166,
       0,   163,   163,   672,   673,   674,   675,   677,     0,   680,
     681,     0,   163,   683,   684,   685,   686,   687,     0,   689,
     690,   163,   602,   163,     0,   608,     0,     0,   695,     0,
     732,   156,     0,     0,   156,     0,     0,     0,   743,   156,
     747,   748,   156,   750,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   772,   775,   776,
       0,   156,     0,     0,     0,   792,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   847,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1077,  1056,     0,  1063,
    1064,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   142,     0,     0,    82,     0,     0,   923,
     924,   153,     0,     0,     0,  1045,  1043,  1054,   829,   831,
     153,    36,  1167,  1166,  1168,  1210,     0,  1219,  1250,     0,
       0,  1245,  1244,   228,     0,     0,     0,   268,     0,     0,
       0,   286,   156,   394,   398,   415,   418,     0,   426,   461,
       0,     0,     0,     0,     0,   944,   949,   952,   951,   955,
     956,   957,   959,   963,   968,   969,   971,   972,   975,   976,
     980,   153,   156,   987,   153,   988,   992,   153,  1002,   153,
       0,     0,   505,     0,   577,   588,   166,   163,   617,   166,
     166,   166,   166,   166,     0,   166,   166,   163,   663,   664,
     665,   666,   667,     0,   669,   670,   163,   166,   166,   166,
     166,   166,     0,   166,   166,   163,   166,   632,   633,   634,
     635,   637,   163,   640,   641,     0,   166,   166,   652,   653,
     654,   655,   657,   163,   660,   661,     0,   166,   676,   163,
       0,   682,   163,   691,   604,   163,   700,   701,   142,   734,
       0,   156,   737,     0,   142,     0,   745,   749,   142,     0,
     756,   757,   758,   759,   763,   764,   760,   761,   762,     0,
       0,   156,   784,     0,   142,     0,     0,   793,   799,   798,
     156,     0,     0,   809,   156,   156,     0,   848,     0,   177,
     177,     0,     0,   177,     0,   177,  1034,     0,     0,     0,
       0,     0,     0,     0,     0,  1055,     0,     0,   177,   177,
       0,     0,     0,     0,     0,     0,     0,     0,   918,     0,
       0,     0,  1034,    83,     0,   177,     0,  1079,   922,     0,
       0,   210,  1252,  1251,     0,     0,   232,     0,     0,     0,
       0,   301,   427,   320,   940,     0,   185,     0,   981,   982,
     986,   993,  1003,   352,   320,     0,   589,   614,   623,   624,
     625,   626,   627,   163,   629,   630,   166,   163,   671,   643,
     644,   645,   646,   647,   163,   649,   650,   166,   636,   166,
     163,   642,   656,   166,   163,   662,   678,   163,   688,   605,
       0,   156,   738,     0,     0,     0,     0,     0,   765,   766,
     782,     0,     0,     0,   794,   800,     0,   810,   811,   801,
     156,     0,   178,  1034,  1034,    82,     0,  1034,     0,  1034,
     892,   142,     0,  1058,     0,  1061,  1095,  1062,  1060,  1057,
       0,  1034,  1034,    82,     0,     0,  1034,  1034,     0,     0,
    1034,   921,   919,   920,   899,  1034,  1034,  1079,  1090,     0,
    1046,   833,     0,     0,   234,     0,     0,     0,   321,   322,
     342,     0,   186,   187,   942,   943,   360,     0,   166,   631,
     668,   166,   651,   638,   166,   658,   166,   679,     0,   733,
     156,   156,     0,   156,     0,   156,   156,     0,   156,     0,
    1034,   905,   901,  1034,     0,   906,     0,   900,  1034,     0,
    1059,     0,   903,   902,  1034,     0,     0,   897,   895,  1034,
     142,   896,   898,   904,  1090,  1040,     0,     0,  1080,  1088,
       0,     0,     0,   264,   287,   290,   288,     0,     0,   142,
     550,   628,   648,   639,   659,   156,   736,   742,     0,   755,
     752,   783,   788,     0,   805,     0,   910,   894,    82,     0,
     908,  1096,     0,   893,    82,     0,   909,     0,  1041,  1092,
    1094,     0,  1087,     0,     0,   269,     0,     0,     0,     0,
     185,     0,   739,   142,   753,   785,   820,  1034,     0,     0,
    1034,     0,   156,  1093,  1089,   233,     0,     0,     0,     0,
       0,   941,   711,   142,   740,   754,   142,   786,   912,     0,
    1034,   911,     0,     0,   235,   280,     0,   279,     0,   741,
     787,    82,   913,    82,  1034,   278,   277,  1034,  1034,   907,
     915,   914
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    53,   418,   172,   152,  1228,  2462,  2463,   419,   420,
     421,   422,   153,   154,   155,    91,   786,   445,  1178,  1646,
    1317,  1330,  1313,  1888,  2553,  1377,  2604,  1548,   333,   739,
     742,   745,   753,    63,   356,   362,   366,   369,    68,   372,
      75,   387,   383,   377,   394,    82,   399,    92,    98,   404,
     406,   408,   479,   840,  1615,   410,   413,   105,   429,   156,
     158,  2600,   174,   214,   468,   829,   470,   480,   832,   837,
     482,   484,   843,   487,   845,   498,   848,   850,   501,   505,
     509,   511,   514,   518,   545,   541,  1240,   532,   869,   874,
     866,  1229,   879,   535,   551,   554,   559,   564,   572,   908,
     910,   912,   914,   577,   918,   217,   579,  1713,   235,   581,
     583,   587,   592,   600,   244,  1306,   603,   252,   612,  1322,
     614,   620,   963,  1338,   958,  1754,  1344,  1342,   959,  1756,
    1347,  1349,   626,   629,   624,   254,   262,   264,   667,  1040,
    1404,  1029,  1502,  1934,  2254,  1045,  1038,   903,  1281,  1285,
    1293,  1295,  1918,   269,  1054,  1057,  1065,  2226,  2227,  2228,
    1919,  2588,  2589,  1088,  1091,  2658,  2659,  2655,  2656,  2699,
    2229,  2230,   274,   280,   288,   681,   676,   293,   298,   691,
     698,  1116,  1121,   748,   736,   305,   309,   705,   315,   712,
    1553,   725,   726,  1152,  1147,  1559,  1137,  1565,  1577,  1573,
    1141,   730,   714,   321,   322,   337,  1165,   340,   346,   763,
     766,   760,   348,   351,   771
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2501
static const yytype_int16 yypact[] =
{
    5007,    61,   175,   111, -2501, -2501,   800,  -159,   499,  1190,
     819,   212,  3052,   152,   182,   358,    50,  5054,   828,  1071,
   -2501,   182,   319,   141,   850,   -61,     9,   199,   285,   177,
     112,   610,  2697,    90,   766,   209,   134,   285, -2501,    97,
      29,   795, -2501,     8,   254,  1075, -2501,    57, -2501,   122,
    3776,   228,   126,   521,   494,   132,   270,   584,   587,   151,
     590,   -20,   541, -2501, -2501, -2501,   978,  1046, -2501,    98,
      32,   182,    34,   641,   410, -2501,   601,  1046, -2501, -2501,
      78,  1046, -2501, -2501, -2501, -2501,  1046, -2501, -2501, -2501,
   -2501, -2501, -2501,    52,   627,   726,   730,   148, -2501,  1046,
    1189,  1046,  1046,   891,  1046, -2501, -2501, -2501,   508, -2501,
   -2501, -2501, -2501,  4589, -2501, -2501, -2501, -2501, -2501, -2501,
    1046, -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501,
   -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501,
   -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501,
   -2501, -2501, -2501,  1319, -2501,  1046, -2501,   755, -2501, -2501,
     182,   182,   182,   182,   182,   182, -2501, -2501,   182,   182,
     182,   182, -2501,   659, -2501,   732,   815,   682,   118,   567,
     654,   776,  4159,   626,  4642,  4128,   837,  4589,  3723, -2501,
     434,   302,   856,   835,    45,   551,   906,   285,   264, -2501,
     870, -2501,   712,   671,   169, -2501,   116, -2501,   512, -2501,
      25,   866,   489, -2501, -2501,  4711, -2501, -2501, -2501,   887,
     939, -2501, -2501, -2501, -2501,   511, -2501, -2501, -2501, -2501,
     383, -2501, -2501,  4711,  4216, -2501, -2501,    58, -2501,   968,
     980,    54, -2501,  1046, -2501,   988,   145,  1009,   268,   782,
    1016,    43, -2501, -2501, -2501,  1003,  1024,   182,   182,  1046,
    1046, -2501, -2501,  1026, -2501, -2501, -2501, -2501, -2501,  1141,
   -2501,  1035,  1020,  1046, -2501,  1037, -2501, -2501, -2501, -2501,
   -2501,  1046,  1030,   182,  3543,  1046,  1319,  1046, -2501,  1049,
   -2501,  3180, -2501, -2501,   717,  1062,  1076,  1046, -2501,  1078,
   -2501,   367,  1070,  4711,  1087, -2501,  1041,  1046,  1011, -2501,
     536,   979,  1774,   417,  1105, -2501, -2501, -2501, -2501, -2501,
   -2501, -2501,  1116, -2501,   702,    24,    27,   105,    66, -2501,
    1046,  1046,   173, -2501,  1046,   857,  1126, -2501,  1046,  1046,
   -2501,  1139,    12,    22,  1143,  1319, -2501, -2501, -2501,  1002,
    1046, -2501, -2501, -2501, -2501,  1046, -2501,  1146,  1149, -2501,
    1046,  1048, -2501, -2501, -2501, -2501, -2501, -2501,  1046, -2501,
   -2501,  1046, -2501, -2501,   414,   414,  1152, -2501, -2501, -2501,
   -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501,   967,  1046,
    1046,  1164,  1171,  1173, -2501, -2501,  1046,  1046,  1046, -2501,
    1046, -2501,  1175, -2501, -2501, -2501, -2501,   716, -2501,  1176,
   -2501,  4711,  1191, -2501,  1046, -2501, -2501, -2501,  1046,  1179,
    1195,  1195,  4711,  1046,  1046,  1046,  1046,  1046,  1046, -2501,
    1046,  4589,  1189,  1046,  1046, -2501, -2501, -2501, -2501, -2501,
   -2501, -2501, -2501, -2501, -2501,  1189,  1046, -2501, -2501, -2501,
   -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501,  1206, -2501,
     928,   -17, -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501,
   -2501,   -81, -2501, -2501, -2501,  1044, -2501,    -9,   498,   498,
   -2501, -2501, -2501,  1211, -2501,  1213, -2501, -2501,   298, -2501,
    1043, -2501, -2501, -2501,  1060, -2501, -2501,  1319, -2501,  3119,
    1046, -2501,  4711,  4711,  1319, -2501, -2501,  1319, -2501, -2501,
   -2501, -2501,  1319, -2501, -2501,  4711,  1319,  1046, -2501, -2501,
    4711, -2501,  1222,   446,  1068,     7, -2501, -2501,  1079,  4711,
    3977, -2501, -2501, -2501, -2501, -2501,  1232,  1234,  1241, -2501,
    1080, -2501, -2501, -2501,  1046, -2501, -2501,   482, -2501, -2501,
   -2501, -2501, -2501, -2501, -2501,    25, -2501, -2501, -2501, -2501,
   -2501, -2501,  1084,  1086, -2501, -2501,  1212,  1214,  1226, -2501,
   -2501,  1077, -2501,  1046,  1289,  1088,  3180, -2501,  1319, -2501,
    1294, -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501,
   -2501, -2501, -2501, -2501, -2501,  4711,  4711,  4711,  4711, -2501,
   -2501,  1299,   182, -2501, -2501,  1304,  1306,  1115,  1046, -2501,
     424,  1242, -2501,  1308, -2501,   188,  1244,  5055,    55,  1328,
   -2501,  1330, -2501,  1333, -2501,    16, -2501,  1342,  1345, -2501,
    1334, -2501, -2501, -2501,  1046, -2501,  3180,  4550,  1559,   502,
    1347,   222,  1256, -2501, -2501, -2501,  1336,   461,  1352,  1353,
       4,  1046,   220,   484,    51,  4711,   182,  2045,   818,    42,
      21,   135,    35, -2501,  1344,  1348,  1360, -2501, -2501, -2501,
   -2501, -2501,  1046,  1046,  1046,  1046, -2501, -2501,  1046,  1319,
    1046, -2501,  1046,  1189,  1046,  1364,  1319, -2501, -2501, -2501,
   -2501, -2501, -2501, -2501, -2501,  1366,   322,   415, -2501, -2501,
   -2501,  1368, -2501, -2501, -2501, -2501,  1278, -2501,  1371,  1372,
    1297,  1381, -2501,  1382, -2501,  1389,  1309,  1390,   470,    70,
     518,   435,   560,  1394,   563, -2501, -2501,  1395,  1396,  1398,
   -2501, -2501,  1401, -2501, -2501, -2501, -2501,  1404, -2501, -2501,
    1407, -2501, -2501,  1408, -2501, -2501, -2501, -2501, -2501, -2501,
   -2501,  1046,  1046, -2501,  1046,  1059,  1046,  1046, -2501,  1405,
   -2501,  1090,  1402, -2501,  1122,  1410, -2501, -2501,   -63,  1046,
    1046, -2501,  1403, -2501, -2501,  1411,  1101,  1046,  1406,   976,
   -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501,
   -2501, -2501, -2501, -2501,  1415,  1418,  1046,  1046,  1046,  1420,
     182,  1422,  1424,  1319,  4711, -2501, -2501, -2501, -2501, -2501,
    1319, -2501, -2501,  1046,  1046,  1046,  4711,  1046,  1189,  1046,
   -2501,  1046, -2501, -2501, -2501, -2501, -2501,  1429,  1430, -2501,
   -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501,
   -2501, -2501,   626, -2501,  1046, -2501, -2501, -2501, -2501, -2501,
   -2501, -2501, -2501,  4711,  4711,  1046,  1319, -2501,   -63,   -63,
     -63,  1319,  1189,  1046,  1319, -2501, -2501, -2501,  1046, -2501,
     445,  1263,  1435,  1438, -2501, -2501,  1319,  4711, -2501, -2501,
    1439,  1444,  1440,  1131,  1046,  4555,   337,   564, -2501, -2501,
   -2501,  1046,    81,  1019, -2501,  1196, -2501,  2045,  1201,   554,
    1169,   103, -2501, -2501,  1046, -2501, -2501, -2501, -2501, -2501,
   -2501, -2501, -2501, -2501, -2501,  1046,  1445, -2501, -2501, -2501,
     -63, -2501, -2501, -2501, -2501, -2501,  4670, -2501, -2501,  1453,
    1454,  1046,  1456,  1457,  1463,   456,   456,   -57,  1465,  1466,
    1467,  1469,  1208,  1217,  1481,  1493,  1494,    48,    48,   -57,
    1500,  1501,   -57,  1503,  1504,  5091,  1507,  1508, -2501, -2501,
    1509,  1513,   459, -2501,  1519,  1520,  1521,  1522,   456,   -57,
    1525,  1526, -2501,  1530, -2501, -2501,  1319,   852,  1166,  1221,
     -68,  1269,  1425,   833,   -55,  1533,     0,  1369,  1434,  1317,
    1183,  1485,   -53,  1303,  1443,  1539,  1335,    46,   102,   605,
     -33,  4711,  2045,  1510,   -27,  1310,  1339,  1548,    15, -2501,
   -2501,    49,  1550,  1551, -2501, -2501, -2501,  1553,  1349,   115,
    2045,  1350, -2501, -2501, -2501,   182,  1558,  1560,  1046, -2501,
   -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501,    13, -2501,
     695, -2501,  1046, -2501,  1046, -2501, -2501, -2501, -2501,  1046,
    1046,  1046,   222,  4711, -2501,  1561,  1135, -2501, -2501,  1046,
   -2501, -2501,  1046,  4589,  1046, -2501, -2501, -2501, -2501, -2501,
   -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501,   182,
    1046, -2501,  1046,   222,  1562, -2501,  1046,  1046, -2501,   182,
   -2501, -2501, -2501,   827,  1565,  1566, -2501, -2501, -2501, -2501,
    1046,  1046, -2501, -2501,  1189,  1046,  1046, -2501, -2501, -2501,
   -2501,  1569,  1046, -2501,  1046,  1452, -2501,  1046, -2501,  1046,
    1464, -2501,  1570, -2501,   820,   820,   604,   820,  1572, -2501,
     607, -2501, -2501,  1573,  1574,   630,  1576, -2501,  1577,  1578,
    1583, -2501,   697,   707,  1584,  1586,  1588, -2501, -2501,  1599,
    1601,  1606, -2501,   820,   820,   820,  1046, -2501, -2501, -2501,
    1046, -2501,  1046,   843,  4711, -2501,  1046, -2501,  3180,  1319,
   -2501, -2501,  1608, -2501, -2501,  1609, -2501, -2501, -2501, -2501,
    1543,  3543, -2501,  1046,  1604,  1046,  1046,  1046,   561, -2501,
    1575,  1607,  1046,  1046,    95,  1616,   182,   182, -2501,  1319,
    1046,  1618,  1619,  1622, -2501,  4711, -2501,  1046, -2501, -2501,
   -2501,  1046,  1046,  1046,  1319,  1623,  4711,   -63, -2501, -2501,
   -2501,  1189,  1046,  1625,   -63,  1046,  1595,  1596,   490, -2501,
    1631, -2501, -2501,   995, -2501, -2501,  1046,  1633,  1640,  1046,
   -2501,  1636,   915,  4589,  1351,    11,  1412,   124,  4711,    28,
   -2501,    53,  1505,   247,   453,  1413,   468, -2501, -2501,   573,
    1474,   651,  1524,   315,  2045,   555, -2501,  1643,  1409, -2501,
     619, -2501, -2501, -2501, -2501,  2045,  1447, -2501, -2501, -2501,
   -2501, -2501,  1046, -2501,  1046, -2501, -2501,  1046,  1046, -2501,
    1046, -2501,  1046, -2501, -2501, -2501, -2501,  1460,  1046, -2501,
    1046,    30, -2501, -2501,  1647,  1655, -2501,  1046,   456,   456,
     456, -2501, -2501, -2501, -2501, -2501, -2501,  1657,   456,   456,
     456,   694, -2501, -2501,    48,   456,   456,   456, -2501, -2501,
     456,   456,  1658,   456,   456,  1659,    48,   836, -2501,  1662,
    1663,  1664, -2501,   612, -2501,   638,   701, -2501,   971, -2501,
    1414,  1665,  1666,  1667,    48,    48,   -57,  1660,  1669,   -57,
    1670,  1672,  1674,   456,   456, -2501,  1675,   456,   456, -2501,
    1676, -2501, -2501, -2501, -2501, -2501, -2501,   182, -2501, -2501,
   -2501,  4589,  1246,   182,  1046,  1254,  1316,   348, -2501, -2501,
   -2501,   721, -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501,
   -2501, -2501, -2501, -2501,  1678,   182,  1046, -2501,   182,  1679,
    1046,  4711,   182,  1341,  1437,  1448,   474,   491,  1449,   519,
    1384,  1386,  1683,  1684,  1687,   833,  1689,  1690,  1691,  1393,
    1400,  1198,  1692,   182,  1046,  1265,  1385, -2501, -2501,   182,
    4589, -2501, -2501,  4589,  1046,    62,  1694,   182,  1046,  1319,
     182, -2501,  1696,  4589,  4711,  1046, -2501, -2501, -2501,   182,
     182,  4711, -2501, -2501, -2501, -2501, -2501, -2501,  4589,  1046,
     182, -2501, -2501, -2501,  1046, -2501, -2501,  1699,  1046,  1488,
     185,  1046,  1489,  1046,   194,  1046, -2501,  1046,  1523,  1527,
    1046,  1046,  1046,  1046,  1046,  1046,  1046,  1046,    20,  1046,
    1046,  1528, -2501,  1046,  1046,  1046,  1046, -2501,  4711,  1319,
    1703,  4711,  4711,  1046,  1046,  1319,  1189, -2501,  1046,  1046,
    1046,  4711, -2501,  1046,  1046, -2501, -2501, -2501,  1739, -2501,
   -2501, -2501, -2501, -2501, -2501,  1741,  1046,  1046, -2501,  1046,
    1046, -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501,
    1743,  1744,  1749, -2501, -2501,   820,  1750,  1751,  1755, -2501,
    1756,  1757,  1758,  1759,  1761, -2501,  1762, -2501, -2501, -2501,
    1763,  1765,  1767, -2501,  1768,  1770,  1772, -2501, -2501, -2501,
   -2501, -2501, -2501, -2501, -2501, -2501, -2501,  1046,  1046,  1046,
    1777,  4711, -2501,  1046,  1319, -2501, -2501, -2501,  3543,  1046,
    1319,  1046,  1046,  1046, -2501,  1046,  1046,  1773,  1046,  1776,
    1766,  1046,  1046, -2501, -2501,  1778,  4711, -2501, -2501, -2501,
    1046, -2501, -2501, -2501,  1319, -2501,  1392,  1046,  1392,   -63,
   -2501,  1319,  4711,  1046,  1046,  1779, -2501, -2501, -2501, -2501,
   -2501,  1046, -2501, -2501, -2501, -2501, -2501,  1046,  1781, -2501,
   -2501,  4711,  1783,  1784,  1785,  1787,  4711,  1319, -2501,  4711,
   -2501,  4711,  4711,  4589,  4711,  1319, -2501,  4711, -2501, -2501,
    4711, -2501, -2501,  4589,  4711, -2501,  4711,  4711,  4589,  4711,
   -2501,  4711,  4711,  1046, -2501, -2501, -2501,  4711,  4711,  4711,
   -2501, -2501,  4711,  4711, -2501, -2501, -2501, -2501,  4711,  4711,
   -2501, -2501, -2501, -2501, -2501,  1046,  1046, -2501, -2501,  1789,
    1046, -2501, -2501,  1790,  1792, -2501,  1046, -2501, -2501, -2501,
     456, -2501, -2501, -2501,  1793,  1794,  1795, -2501, -2501,   -57,
    1797,  1799,  1800,   456, -2501, -2501, -2501, -2501, -2501,    48,
   -2501, -2501,  1803,   456,  1804,  1805,  1806,    48,    48,   -57,
    1808,  1809,  1811,   996, -2501,  1057, -2501,  1072,  1499,  1814,
    1816,  1818,    48,    48,   -57,  1810,  1821,   -57,  1822,  1536,
    1823,  1824,  1825,    48,    48,   -57,  1827,  1828,   -57,  1829,
    1540,  1831,  1832,  1833,    48,    48,   -57,  1835,  1837,   -57,
    1847,  1849,  1851,  1853,    48,    48,   -57,  1855,  1858,  1860,
      48, -2501, -2501, -2501, -2501, -2501,  1859, -2501, -2501,  1866,
      48,  1868,  1869, -2501, -2501,   456, -2501, -2501,  1870, -2501,
    1319, -2501,  4711,  1046, -2501,  1046,  4711,  1046,  1872,  1166,
   -2501, -2501, -2501, -2501, -2501, -2501,  1875, -2501,  4711,   182,
    1876,  4711,  1319, -2501,  1877,  1166,  1046,  1046,  1046,  1046,
    1046,  1046,  1046,  1046,  1046,  1881,  1882, -2501, -2501, -2501,
    1884, -2501, -2501, -2501,  1886,  1892, -2501, -2501, -2501, -2501,
    1046,  4711,  1046,  1893,  1166,   182,  1319,  1189,  1319,  1046,
   -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501,
   -2501,  1046,  1189, -2501, -2501,  1319,  1189,  1319,  1046, -2501,
   -2501,  1319,  1319,  1189, -2501, -2501, -2501, -2501,  1046,  1046,
    1046,  1046,  1046,  1046,  1046,  1046,  1046,  1046,  1502, -2501,
    1046,  1046,  1046,  1046,  1046,  1046,  1046,  1046,  1046,  1046,
    1046,  3119,  1894,  1046, -2501,  1046,  1046,  1046,  1896,  1897,
   -2501, -2501,  1319,   -63,  1898,  1319,  1319, -2501, -2501,  1189,
   -2501,  1046, -2501,  1899,  1319, -2501, -2501, -2501,  1900, -2501,
   -2501, -2501, -2501,   820,   820,   820, -2501, -2501, -2501, -2501,
   -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501,
   -2501, -2501,  1166,  1046, -2501, -2501,  1046, -2501,  1046,  1319,
    1046, -2501,  1189,  1046, -2501,  1046, -2501,  1769,  1910,  1911,
   -2501,  1925,  1046,  1046,  1931,  1319,  4711, -2501, -2501,  1046,
   -2501,  1046, -2501,   -63,   995,  1046,  1933, -2501,  1046,    25,
   -2501, -2501,  1934,  1936,  1937,  1938,  1319, -2501,   995,   995,
     995,  1319, -2501,   995,   -63,   995,   995,  1319, -2501,   995,
     995,   995,  1319, -2501,   995,   995,  1319,  4711,   995,  1319,
     995,   995,  1319,   995,  1319, -2501, -2501,  1940,    25,  1941,
   -2501,  1046, -2501, -2501, -2501, -2501,  1943, -2501, -2501, -2501,
   -2501,   456,    48, -2501, -2501, -2501, -2501, -2501, -2501,  1945,
   -2501, -2501,    48,  1947,  1948,  1949,    48,    48,   -57,  1946,
    1951,  1952,  1953,  1954,  1955,    48,    48,   -57,  1957,  1958,
    1959,  1960,  1962,  1963,    48,    48,   -57,  1966,  1967,  1968,
      48,   456,   456,   456,   456,   456,  1970,   456,   456,  1971,
      48,    48,   456,   456,   456,   456,   456,  1973,   456,   456,
    1974,    48,    48, -2501, -2501, -2501, -2501, -2501,  1977, -2501,
   -2501,  1978,    48, -2501, -2501, -2501, -2501, -2501,  1980, -2501,
   -2501,    48, -2501,    48,  1982, -2501,  1984,  1985, -2501,  3180,
   -2501,   995,  1987,  4711,   995,  1046,  4711,  1989, -2501,   995,
   -2501, -2501,   995, -2501,  4711,  1990,  1046,  1046,  1046,  1046,
    1046,  1046,  1046,  1046,  1046,  1046,  1046, -2501, -2501, -2501,
    4711,   995,  1046,  4711,  1991, -2501,  1189,  1189,  1189,  1046,
    4711,  1189,  1189,  1189,  4711,  4711,  1189,  1189, -2501,  1046,
    1046,  1046,  1046,  1046,  1046,  1166,  1046,  1046,  1046,  1484,
    1614,  1648,  1652,  1653,  1654,  1661,  1502, -2501,  1671, -2501,
   -2501,  1166,  1046,  1046,  1046,  1046,  1166,  1046,  1046,  1046,
    1046,  1046,  1046,  1319,  1046,  1705,  1166,  1046,  1046, -2501,
   -2501,   -63,   182,  1992,  2005, -2501, -2501, -2501, -2501, -2501,
     -63, -2501, -2501, -2501, -2501, -2501,  1046, -2501, -2501,  1189,
    1046, -2501, -2501, -2501,  1034,  2006,  2008, -2501,  1046,  2014,
    1392, -2501,   995, -2501, -2501, -2501, -2501,  2016, -2501, -2501,
    2015,  2018,  2020,  4711,  2023, -2501, -2501, -2501, -2501, -2501,
   -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501,
   -2501,   -63,   995, -2501,   -63, -2501, -2501,   -63, -2501,   -63,
    2025,  2019, -2501,  1046, -2501, -2501,   456,    48, -2501,   456,
     456,   456,   456,   456,  2028,   456,   456,    48, -2501, -2501,
   -2501, -2501, -2501,  2030, -2501, -2501,    48,   456,   456,   456,
     456,   456,  2032,   456,   456,    48,   456, -2501, -2501, -2501,
   -2501, -2501,    48, -2501, -2501,  2033,   456,   456, -2501, -2501,
   -2501, -2501, -2501,    48, -2501, -2501,  2034,   456, -2501,    48,
    2035, -2501,    48, -2501, -2501,    48, -2501, -2501,  1319, -2501,
    4711,   995, -2501,  2036,  1319,  1046, -2501, -2501,  1319,  1046,
   -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501,  1046,
    1046,   995, -2501,  2039,  1319,  1046,  1189, -2501, -2501, -2501,
     995,  1046,  1189, -2501,   995,   995,  4711, -2501,  1046,  2041,
    2041,  1046,  1046,  2041,  1166,  2041, -2501,  4711,   833,  2043,
    2042,  2044,  2046,  2047,  2049, -2501,   182,  1166,  2041,  2041,
    1046,  1046,  1166,  1046,  1046,  1046,  1046,  1046, -2501,  1189,
    1046,  2051, -2501, -2501,  1046,  2041,   182,     6, -2501,  2052,
     182, -2501, -2501, -2501,  2054,  1046, -2501,  2057,  2059,  1891,
    1046, -2501, -2501,    60, -2501,  2061,    71,  4711, -2501, -2501,
   -2501, -2501, -2501, -2501,    60,  1046, -2501, -2501, -2501, -2501,
   -2501, -2501, -2501,    48, -2501, -2501,   456,    48, -2501, -2501,
   -2501, -2501, -2501, -2501,    48, -2501, -2501,   456, -2501,   456,
      48, -2501, -2501,   456,    48, -2501, -2501,    48, -2501, -2501,
    1046,   995, -2501,  4711,  4711,  1046,  4711,  1046, -2501, -2501,
   -2501,  4711,  4711,  1046, -2501, -2501,  4711, -2501, -2501, -2501,
     995,  2063, -2501, -2501, -2501,  1166,  1046, -2501,  2065, -2501,
   -2501,  1319,  2067, -2501,  2066, -2501, -2501, -2501, -2501, -2501,
    2069, -2501, -2501,  1166,  1046,  2070, -2501, -2501,  1046,  4711,
   -2501, -2501, -2501, -2501, -2501, -2501, -2501,     6,  1480,  2045,
   -2501, -2501,  2071,  2072, -2501,  2073,  2074,    38, -2501, -2501,
   -2501,  4711, -2501, -2501, -2501, -2501, -2501,  2078,   456, -2501,
   -2501,   456, -2501, -2501,   456, -2501,   456, -2501,  3180, -2501,
     995,   995,  1046,   995,  2079,   995,   995,  1046,   995,  1046,
   -2501, -2501, -2501, -2501,  2080, -2501,  1046, -2501, -2501,  2081,
   -2501,  1046, -2501, -2501, -2501,  2083,  1046, -2501, -2501, -2501,
    1319, -2501, -2501, -2501,  1480, -2501,  1571,  1701,  2045, -2501,
    2084,  2085,  2088, -2501, -2501, -2501, -2501,   693,   693,  1319,
   -2501, -2501, -2501, -2501, -2501,   995, -2501, -2501,  2090, -2501,
    4589, -2501, -2501,  2091, -2501,  1166, -2501, -2501,  1166,  1046,
   -2501, -2501,  1046, -2501,  1166,  1046, -2501,  4711, -2501,  1571,
   -2501,   182, -2501,  2092,  2094, -2501,  1046,  1046,  1046,  1046,
      71,  2096,  4589,  1319, -2501,  4589, -2501, -2501,  1046,  2098,
   -2501,  1046,   995, -2501, -2501, -2501,  2099,  2100,  1046,  2101,
    1046, -2501, -2501,  1319, -2501, -2501,  1319, -2501, -2501,  2103,
   -2501, -2501,  2104,  2106, -2501, -2501,  2107, -2501,  2108, -2501,
   -2501,  1166, -2501,  1166, -2501, -2501, -2501, -2501, -2501, -2501,
   -2501, -2501
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2501, -2501,    -3, -2501,   621, -2501, -1630,  -906,  1656, -2501,
     832,   139,  2077,   -49,    79, -1621,  1597,  1290,  -699,   799,
    -930,  1848,  1455, -2501, -1147, -2501,  -836, -1110, -2501, -2501,
   -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501,
   -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501,
   -2501, -2501,  -512,  -476, -2501, -2501, -2501, -2501, -2501, -2501,
   -2501,  -398, -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501,
   -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501,
   -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501,
   -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501,
   -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501,
   -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501,
   -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501,
   -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501,
   -1423, -2501, -2501, -2501, -2501, -2501,  -643, -2501, -2501, -2501,
   -2501, -2501, -2501,   163, -2501, -2501, -2501, -2501,  -123,  -653,
    -693,  -473, -2501, -2501, -2501, -2501,  -543,  -538, -2501, -2501,
   -2500, -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501,
   -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501,
   -2501, -2501,  1399, -2501, -2501, -2501, -2501, -2501, -2501, -2501,
   -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501, -2501,
   -2501, -2501, -2501, -2501, -2501
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1224
static const yytype_int16 yytable[] =
{
      67,   345,  1860,   841,  1079,  2009, -1078,  2011,   104,  1053,
    1056,   871,   364,   106,   255,  1549,   761,  1554,  1476,  1332,
    1458,  1048,  1335,    64,    65,  1931,   764,  1408,   106,   285,
     966,   106,    64,    65,  1176,    64,    65,   308,  1085,  1366,
    1092,    64,    65,  1584,  1585,  1586,   339,  1083,   627,   350,
    1711,   538,   355,  1383,    64,    65,   361,   402,   316,   368,
     606,   334,   601,   371,   373,  1328,  1405,   382,  1433,   834,
     389,   393,  1381,  1439,   396,   256,  1460,   967,   400,   746,
    1668,   109,   397,   401,    64,    65,   827,  1058,  1447,  1881,
     737,  1059,  2598,   740,   106,   289,   414,   257,   423,   424,
     428,   430,   374,  2602,  1452,    64,    65,   317,  1315,   106,
    1882,   287,   830,  1883,    64,    65,   318,   434,    64,    65,
    1296,    64,    65,    76,  1884,    64,    65,    54,   111,    64,
      65,  1133,  1660,   539,  1093,    64,    65,   560,  1441,   106,
    1094,  1613,   960,   111,   319,  1663,   111,  1885,   258,  1666,
     610,  1466,   446,   411,    64,    65,  2700,   245,   302,  1218,
    1219,  1220,  1060,   835,  1886,   540,   831,  1409,   253,  1384,
     828,   743,   385,   872,   607,   478,    64,    65,   275,   412,
     499,   335,  1406,  1061,  1434,   157,   106,    55,    64,    65,
    1134,   354,   433,   943,   173,  1177,  1453,    64,    65,  2723,
     301,  1297,   944,   945,   263,  1316,   968,  1329,  1448,   111,
     386,   114,   961,   299,  1049,    64,    65,   115,   116,   378,
    1669,  1301,   300,   306,   111,  2664,   114,  1135,    56,   114,
     556,  1086,   115,   116,  1442,   115,   116,  1410,   836,   117,
     608,   270,   686,   271,  1289,  1062,    57,  1467,  1661,   946,
     561,   602,    99,  1454,   111,   747,   634,   635,   323,   365,
    1459,   336,   500,  1712,   508,  1667,   513,   517,  1673,  1440,
     670,   100,  1461,   615,   544,    58,   969,   403,   672,   675,
    1411,   678,   682,  1031,   684,  1031,   970,  1283, -1078,   573,
    1670,   375,   114,    59,   694,  1050,   762,    60,   115,   116,
     320,   111,   119,   704,   706,   471,   765,   114,   259,    61,
     628,   472,  1087,   115,   116,  1477,   873,   119,   971,   307,
     119,   398,  1932,   101,  1032,  1084,  1032,   749,   750,   752,
     548,   754,   379,  1671,  1095,   757,   758,   114,  2665,  2599,
    1136,  1063,   265,   115,   116,   376,   770,   772,   473,  1450,
    2603,   149,   773,   562,   260,   150,   151,   776,   778,   272,
     547,  1664,  1112,   680,  1614,   779,   149,  1470,   780,   149,
     150,   151,   474,   150,   151,   380,   381,   303,   947,   948,
     563,   476,  2666,   119,   114,   616,   790,   791,   611,   290,
     115,   116,  1443,   795,   796,   797,   751,   798,   119,   291,
     304,    66,   160,  1272,   161,  1468,   102,   237,  1910,  1508,
    1887,   805,   338,    64,    65,   806,   349,  1915,   475,  1089,
     811,   812,   813,   814,   815,   816,  1806,   817,   119,  1809,
     821,   822,   149,  1113,   162,   238,   150,   151,   932,   933,
    1521,   360,   163,   824,   781,  1966,   549,   149,   949,   557,
     867,   150,   151,  1830,  1033,  1117,  1033,   347,   950,   951,
     617,   476,   477,   952,  1350,    62,   273,  1273,  1034,  1035,
    1034,  1035,   558,  1351,  1352,   119,  1052,   149,   727,   519,
    1829,   150,   151,  1687,  1674,   934,   885,   886,   390,  1678,
     953,   846,  1274,   520,  1640,  1848,   853,   855,   103,   353,
     164,  1042,   109,    77,   239,   575,  1024,  1845,   782,   266,
     819,   618,  1850,   533,   863,   521,  1114,   696,  1632,   240,
    1353,   352,  1142,   267,   149,  1636,  1118,   919,   150,   151,
    1874,   715,  1025,   588,   522,   619,   357,   728,  1688,    78,
    1853,   884,   887,  1831,    64,    65,   109,  1031,   888,   565,
     165,   523,   847,   550,   524,   584,   542,    64,    65,   566,
    1036,  1037,  1036,  1037,    64,    65,   166,   167,   957,  1275,
     915,   820,  1043,   168,  1675,   169,   241,   783,  1226,  1138,
     525,   526,   391,  1115,   823,   268,   567,   976,  1032,   358,
     717,   359,  1143,  1832,  1277,   363,   889,   708,   585,   589,
    1680,   170,   868,  1689,   534,   931,   395,   109,  1055,  1119,
      79,  1690,   890,  1311,   935,   936,   543,  1758,   242,  1276,
    1607,  1144,  1700,   697,  1149,   891,  1759,  1760,   243,    64,
      65,   975,   892,   527,   904,   159,   838,   893,  1139,   590,
    1312,   528,   236,  1769,    64,    65,  1697,   261,  1051,  1354,
    1355,  1064,  1770,  1771,   292,  1044,   709,   392,   405,  2480,
     117,   784,   568,  1026,   367,  1550,   785,   171,  1556,  1099,
    1100,  1101,  1102,  1761,   839,  1103,  1120,  1105,   591,  1106,
    1145,  1108,   109,  1150,   937,   576,  1691,   729,   894,  1227,
    1676,  1562,   384,    80,   938,   939,    64,    65,   569,  1772,
     529,   530,   431,   586,   117,  1679,  1780,   895,  1724,  1725,
    1169,  1849,   896,  1027,   897,  1781,  1782,  1478,  1033,  1356,
     800,   801,  1479,  1692,  1551,  1278,   940,  1557,  1851,  1357,
    1358,   407,  1034,  1035,  1359,   409,   733,   898,   899,  1028,
     723,  1681,    81,  1480,  1481,   900,  1482,  1483,  1160,  1161,
    1563,  1162,  1164,  1166,  1167,  1726,  1854,  1484,  1570,   447,
    1291,  1360,  1783,   570,   901,   117,  1179,  1180,  1574,  1485,
    1486,   687,   531,  1184,  1185,  1279,   458,  1487,  1693,   710,
    1488,   448,   449,   450,   451,   452,   453,  1698,  1140,   454,
     455,   456,   457,  1191,  1192,  1193,  1682,  1489,   459,  2066,
     469,  1280,  1762,  1763,  1490,  1491,   711,   688,  1492,   734,
    1201,  1202,  1203,   276,  1205,   571,  1207,  1571,  1208,  2079,
     902,   310,  1107,   483,  1036,  1037,  1833,  1575,  1773,  1774,
    1146,   838,  1526,  1151,  2116,  1694,   294,  2119,   388,  1211,
     117,  1213,  1699, -1221,  1527,  2127,    64,  1590,  2130,   481,
    1744,  1745,  1216,  2262,  2263,  2264,  2138,   689,  1080,  2141,
    1223,   536,  1543,  1544,  1445,  1225,  2148,  1493,   460,   839,
     510,  1446,  1764,  1387,  1552,   621,   246,  1558,   632,   633,
    1239,  1241,  1765,  1766,  1727,  1728,   461,  1767,  1282,  1284,
    1287,  1784,  1785,   622,    64,    65,  1292,  1746,  1775,  1388,
    1564,  1298,    93,   462,   677,   735,  1341,   311,  1776,  1777,
    1684,   215,  1299,  1778,  1768,   463,  1834,  1685,    94,   312,
    1494,  1212,   546,  2167,   537,  2633,  1495,   216,  1307,  1081,
    2012,   425,  1389,   464,  1371,   295,   552,   465,  1390,  2175,
    1779,  1496,   553,  2644,  1391,   485,   738,   741,   744,   466,
    1497,   277,   555,   486,  1729,   574,   278,  1206,   279,   580,
     690,  1786,   247,  1392,  1730,  1731,  1835,  1572,  2194,   623,
     582,  1787,  1788,   604,   248,  1380,  1789,  1576,  1498,  1499,
    1187,    64,    65,  1393,   605,  1791,  1792,    69,  1188,   467,
    1545,  1546,   609,    70,    95,  1444,  1732,  1651,  1394,  1500,
     313,  1222,   426,  1790,  1372,    64,    65,   630,   296,   249,
    2083,  2084,  1082,   314,   613,  2562,  1469,   297,  1547,  1643,
    1644,   625,    64,    65,   669,  1475,  1747,  1748,  1395,   631,
      71,   636,  1793,    64,    65,    96,  1286,    64,    65,  1503,
     668,  1504,   671,  1501,    64,    65,  1505,  1506,  1507,    64,
      65,    64,    65,   685,    72,   250,  1513,  2085,  2717,  1514,
     777,  1517,    64,  1163,  2720,  1396,   692,  1652,   251,    97,
     673,  2092,  2093,  1373,  1374,   699,  2265,  1519,  1397,  1520,
     693,   702,   695,  1523,  1524,   427,  2101,  2102,  1375,  1398,
     218,   701,  1645,  2474,  1170,  1171,  1749,  1530,  1531,   713,
      73,   370,  1533,  1534,    64,    65,  1750,  1751,   707,  1536,
     731,  1537,   324,  1183,  1539,   219,  1540,  1399,  2094,  1594,
     732,  2757,   325,  2758,   755,   769,  1173,  1174,  1376,  1400,
     756,  1401,  1402,  2103,    64,  1238,  1653,  1654,  1752,  1511,
    1512,   674,  1516,   759,    74,   637,   638,   767,   220,   326,
     774,  1655,   703,  1587,   775,   221,   788,  1588,  2334,  1589,
    1591,  1794,  1795,  1593,   789,   222,   223,  2343,   792,    64,
      65,  1403,   224,  1378,  1379,   793,  2352,   794,  1599,   799,
    1602,   802,  1604,  1605,  1606,  1608,  2086,  2087,   415,  1611,
    1612,  1656,    64,    65,   826,   225,   804,  1620,   415,   416,
     417,   639,  1866,  1867,  1625,  1422,   417,   640,  1626,  1627,
    1628,   825,   226,   833,   641,   842,   642,   844,    83,  1634,
     849,   643,  1637,   927,   644,   327,   865,   227,   228,   851,
     645,  1796,  1423,  1647,   229,  1424,  1649,   880,  1425,   881,
     646,  1797,  1798,  1532,  2252,   882,   647,  2095,  2096,    64,
      65,  1822,   808,   809,   230,   648,  2088,    64,    65,  1826,
    1601,   328,  2104,  2105,   870,  1426,  2089,  2090,    64,    65,
    1871,   649,   905,  1799,   906,   875,   883,  1067,   907,  1702,
     909,  1703,  1090,  2554,  1704,  1705,  2557,  1706,  2559,  1707,
     231,   650,   911,  1427,   916,  1709,  1428,  1710,  2091,   921,
     913,  2571,  2572,   926,  1716,   329,   651,  1641,   928,  2434,
     929,   930,   917,   942,  2285,   652,   653,  2097,  2586,    64,
      65,  1828,  1658,  1378,  1379,  2447,   330,  2098,  2099,   941,
    2452,   954,  2106,   962,   964,  2301,   654,   965,   974,  1414,
     232,    84,  2107,  2108,    64,    65,  1844,   972,  1378,  1379,
     973,   233,  1030,  1041,   435,  1039,  1046,   655,  1047,  2100,
    1633,  1096,   331,    85,  1098,  1097,  1415,    86,  1109,  1416,
    1111,   656,  1122,   657,  2109,  1123,  1124,  1125,   332,  1823,
     234,  1825,  1827,  1380,  1126,  1127,   658,  1128,    64,    65,
    1873,   659,  1378,  1379,  1129,  1131,  1130,   660,  1148,  1417,
    1153,  1154,  1155,  1838,   661,  1156,  1172,  1841,  1429,  1157,
    1380,  1168,  1158,  1159,  1175,  1181,  1182,    87,  1186,  1189,
      83,  1195,  1190,   662,  1194,   436,  1196,  1418,  1197,  1230,
    1419,  1870,  1872,  1380,  1209,  1210,   663,   664,  1430,   665,
    1231,  1880,  1232,  1235,  1237,  1891,   437,   438,   439,  1236,
    1300,  1288,  1898,  1294,   440,    88,  1290,  1304,  1382,  1305,
    1821,  1308,  1309,    89,    90,  1431,  1904,   441,  1310,  1318,
    1319,  1906,  1320,   442,  1321,  1908,  1323,  1911,  1912,   666,
    1914,  1916,  1917,   443,  1920,  1324,  1325,  1923,  1924,  1925,
    1926,  1927,  1928,  1929,  1930,  1933,  1935,  1936,  1326,  1327,
    1938,  1939,  1940,  1941,  1333,  1334,  1385,  1412,  1336,  1337,
    1947,  1948,  1343,  1345,  1346,  1951,  1952,  1953,  1348,  1877,
    1955,  1956,  1879,  1361,  1362,  1432,  1363,  1364,  2558,  1367,
    1386,  1368,  1896,  1959,  1960,  1369,  1961,  1962,  1407,  1413,
    1435,  2570,  1420,    84,  1437,  1438,  2575,  1903,  1436,  1456,
    1451,  1455,  2466,  1457,  1462,  1598,  1463,  2219,  1464,  1465,
    1471,  2470,  1473,  1538,  1474,    85,  1510,  1522,  2220,  2008,
    1528,  1529,  1421,  1535,  1542,  1541,   683,  1555,  1560,  1561,
    1566,  1609,  1567,  1568,  1982,  1983,  1984,  1569,  1659,  1578,
    1986,  1579,  1580,  1068,  2221,  1988,  1991,   444,  1993,  1994,
    1995,  1069,  1996,  1997,  1581,  1999,  1582,  1070,  2002,  2003,
    1583,  1610,  2488,  1596,  1597,  2490,  1603,  2006,  2491,    87,
    2492,  1616,  1621,  1622,  2010,  1013,  1623,  1630,  1071,  1635,
    2015,  2016,  2222,  1638,  1639,   768,  1642,  1648,  2018,  1014,
    -436,  1650,  1683,  1672,  2019,  1686,  1472,  1695,  1015,  1662,
    1677,  1714,  1072,  1701,  1696,  1950,  1708,    88,  1016,  1715,
    1073,  1720,  1739,  1742,  1807,    89,    90,  1753,  1755,  1757,
    1801,  1802,  1803,  1808,  1846,  1810,  1811,  1990,  1812,  1815,
    2047,  1818,  1800,  1836,  1840,  1847,  1852,  1857,  1858,  1017,
    1855,  1859,  1856,  1861,  1862,  1863,  1868,  1074,  1889,  1864,
    1518,  1894,  2055,  2056,  1907,  1075,  1865,  2058,  1944,  1018,
    1525,  1909,  1913,  2061,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,  2032,  2560,  1957,  1958,  1921,  1076,  1963,  1964,
    1922,  1937,  2038,  1965,  1019,  1967,  1968,  2043,  1077,  1969,
    1970,  1971, -1091,  1972,  1973,  1974,  1975,  2110,  1976,  2584,
    1977,  1978,  2001,  1979,  1078,  1980,  1981, -1223,  1998,  2716,
    2000,  2274,  2004,  2017,  2223,  2020,  2224,   852,  2022,  2023,
    2024,  1020,  2025,  2057,   858,  2059,  2060,   859,  2063,  2064,
    2065,  2067,   860,  2068,  2121,  2069,   862,  2072,  2132,  2074,
    2075,  2076,  2080,  2081,  2117,  1021,  2082,  1617,  1618,  2111,
    2162,  2112,  2163,  2113,  2165,  2118,  1380,  2120,  2122,  2123,
    2124,  2128,  2129,  2438,  2131,   715,  2133,  2134,  2135,  2139,
    2225,  2140,  1380,  2176,  2177,  2178,  2179,  2180,  2181,  2182,
    2183,  2184,  2142,  2223,  2143,  1022,  2144,  1023,  2145,  2149,
    2631,  2632,  2150,  2153,  2635,  2151,  2637,  2190,   920,  2192,
    2154,  1380,  2156,  2157,  2731,  2159,  2199,  2166,  2642,  2643,
    2168,  2171,  2174,  2647,  2648,  2185,  2186,  2651,  2200,  2187,
    2188,   716,  2652,  2653,   717,  2205,  2189,  2596,  2193,  2244,
    2249,  2250,  2253,  2259,  2261,  2209,  2210,  2211,  2212,  2213,
    2214,  2215,  2216,  2217,  2218,  2275,  2276,  2231,  2232,  2233,
    2234,  2235,  2236,  2237,  2238,  2239,  2240,  2241,  2242,  2277,
    2245,   718,  2246,  2247,  2248,  2280,  2657,  2686,  2288,  2291,
    2687,  2292,  2293,  2294,  2320,  2690,  2322,  2324,  2258,  2327,
    2335,  2693,  2329,  2330,  2331,  2336,  2696,  2337,  2338,  2339,
    2340,  2344,  2345,  2439,  2346,  2347,   719,  2348,  2349,  1104,
    2353,  2354,   787,  2355,  2362,  2365,  1110,  2373,  2376,  1380,
    2266,  2379,  2380,  2267,  2382,  2268,  2385,  2270,  2386,  2387,
    2272,  2390,  2273,  2395,  2399,  2415,  2468,  2440,  1819,  2278,
    2279,  2441,  2442,  2443,  1824,  2657,  2283,  2461,  2284,  2469,
    2444,  2476,  2287,  2477,   720,  2289,  2197,   721,  2479,  2483,
    2446,  2482,  2484,  2494,  2738,  2485,  1837,  2741,  2487,  1839,
    2493,  2201,  2503,  1843,  2507,  2203,  2514,  2520,  2524,  2527,
    2533,   722,  2208,  2541,   723,  2552,  2564,  2752,  2563,  2565,
    2701,  2566,  2567,  2568,  1869,   724,  2583,  2590,  2323,  2592,
    1875,  2759,  2594,  2595,  2760,  2761,  2601,  2630,  1890,  2636,
    2640,  1893,  2639,  2641,  2646,   807,  2660,  2661,  2663,  2662,
    1899,  1900,  2670,  2680,  2688,  2668,  2691,  2694,  2257,  2703,
    2704,  1905,  2705,  1198,  2712,  2715,  2606,  2725,  2290,  2726,
    1200,  2732,  2740,  2445,  2744,  2745,  2747,  2751,  2753,   286,
    2388,  2754,  2755,  2756,  2654,  2702,  2698,  1132,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2271,     0,     0,     0,     0,  1068,  2321,     0,     0,
       0,     0,     0,     0,  1069,     0,  1217,     0,     0,     0,
    1070,  1221,     0,     0,  1224,     0,     0,     0,     0,     0,
       0,     0,  2393,     0,     0,     0,  1233,     0,     0,     0,
       0,  1071,     0,  2400,  2401,  2402,  2403,  2404,  2405,  2406,
    2407,  2408,  2409,  2410,     0,     0,     0,     0,     0,  2413,
     432,  2707,  2709,     0,     0,  1072,  2419,     0,     0,     0,
       0,     0,     0,  1073,     0,     0,  2428,  2429,  2430,  2431,
    2432,  2433,  1380,  2435,  2436,  2437,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1380,  2448,
    2449,  2450,  2451,  1380,  2453,  2454,  2455,  2456,  2457,  2458,
    1074,  2460,     0,  1380,  2464,  2465,     0,     0,  1075,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   497,
       0,   504,   507,  2471,   512,   516,  1370,  2473,     0,     0,
       0,  2475,     0,     0,     0,  2478,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1076,     0,   578,     0,     0,     0,     0,     0,     0,     0,
       0,  1077,     0,     0,     0,     0,     0,     0,     0,     0,
     593,   599,     0,     0,     0,     0,     0,  1078,     0,     0,
    2495,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2416,  2417,  2418,     0,     0,
    2421,  2422,  2423,     0,     0,  2426,  2427,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   679,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     700,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1314,  2535,     0,     0,     0,  2537,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2538,  2539,  2472,     0,
       0,     0,  2543,     0,     0,     0,     0,     0,  2546,     0,
       0,     0,     0,  1365,     0,  2551,     0,     0,  2555,  2556,
       0,  1380,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1380,     0,     0,  2573,  2574,  1380,
    2576,  2577,  2578,  2579,  2580,     0,     0,  2582,     0,  1595,
    2170,  2585,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2593,     0,     0,     0,     0,  2597,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   803,  1619,
       0,     0,  2607,     0,     0,     0,  2195,     0,     0,   810,
       0,     0,     0,     0,  1629,     0,     0,     0,   818,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2618,     0,     0,
       0,     0,  2622,     0,  2624,     0,     0,     0,     0,     0,
    2627,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1380,  2634,     0,  2544,     0,     0,     0,     0,
       0,  2547,     0,     0,     0,     0,     0,     0,     0,  2675,
    1380,  2645,     0,     0,     0,  2649,   854,     0,     0,   856,
     857,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   861,     0,  2667,     0,     0,   864,  2581,     0,
       0,     0,     0,     0,     0,     0,   876,   878,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2678,
       0,     0,     0,     0,  2683,     0,  2685,     0,     0,     0,
       0,     0,     0,  2689,     0,     0,     0,     0,  2692,     0,
       0,     0,     0,  2695,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2706,  2708,     0,     0,     0,     0,
       0,     0,   922,   923,   924,   925,     0,     0,     0,     0,
       0,     0,  1380,     0,     0,  1380,  2718,     0,     0,  2719,
       0,  1380,  2721,     0,     0,     0,     0,     0,     0,     0,
      64,    65,     0,  2727,  2728,  2729,  2730,     0,     0,     0,
       0,     0,     0,     0,     0,  2739,   107,     0,  2742,     0,
       0,     0,     0,     0,     0,  2746,     0,  2748,     0,     0,
       0,     0,  1066,     0,     0,     0,   281,     0,     0,  1892,
       0,     0,     0,     0,     0,     0,     0,     0,  1380,     0,
    1380,     0,     0,   109,     0,     0,     0,     0,     0,  2714,
       0,     0,     0,  1717,  1718,  1719,     0,     0,     0,     0,
       0,     0,     0,  1721,  1722,  1723,     0,     0,     0,     0,
    1734,  1735,  1736,     0,     0,  1737,  1738,     0,  1740,  1741,
       0,  2734,     0,     0,  2737,     0,  1331,     0,   110,  1943,
       0,     0,     0,     0,     0,  1949,     0,     0,     0,     0,
       0,     0,     0,  2286,     0,     0,     0,     0,  1813,  1814,
       0,     0,  1816,  1817,     0,     0,     0,  2296,  2297,  2298,
       0,     0,  2300,     0,  2302,  2303,     0,     0,  2305,  2306,
    2307,     0,     0,  2309,  2310,     0,     0,  2313,     0,  2315,
    2316,     0,  2318,     0,   112,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2467,     0,     0,     0,     0,     0,     0,
       0,  1199,     0,     0,  1987,     0,     0,     0,     0,     0,
    1992,   282,     0,  1204,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   117,     0,     0,  2007,     0,   118,     0,     0,     0,
       0,  2013,     0,     0,     0,     0,     0,   283,     0,     0,
    1214,  1215,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2027,     0,     0,
       0,     0,     0,     0,  1234,  2034,     0,     0,     0,     0,
    2389,     0,     0,  2392,     0,     0,     0,     0,  2396,     0,
       0,  2397,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   284,     0,     0,
    2412,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1303,     0,     0,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   106,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2569,     0,     0,
       0,   107,     0,     0,     0,     0,     0,     0,  1449,     0,
       0,  2481,     0,     0,     0,     0,     0,  2587,     0,     0,
       0,  2591,   108,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   109,     0,
    2160,  2489,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    64,    65,     0,     0,     0,     0,     0,     0,
    1509,     0,  2173,     0,     0,     0,     0,     0,   107,     0,
    1515,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   110,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2196,     0,  2198,     0,
       0,   111,  1733,     0,     0,  2062,     0,     0,     0,     0,
       0,     0,     0,     0,  1743,  2202,     0,  2204,  2070,     0,
    2532,  2206,  2207,     0,     0,     0,     0,     0,  2073,     0,
       0,     0,  1804,  1805,     0,     0,     0,     0,     0,   112,
    2540,     0,     0,     0,     0,     0,     0,     0,     0,  2545,
     110,     0,     0,  2548,  2549,     0,     0,     0,     0,     0,
       0,     0,  2251,     0,     0,  2255,  2256,     0,     0,     0,
       0,  1592,     0,     0,  2260,     0,   113,     0,     0,     0,
       0,     0,     0,     0,   114,     0,     0,     0,  1600,     0,
     115,   116,     0,     0,     0,     0,   117,     0,     0,     0,
    2158,   118,     0,     0,     0,     0,   112,     0,     0,  2269,
       0,     0,  1624,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1631,     0,  2281,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2295,     0,     0,     0,
    1657,  2299,  2724,     0,     0,  1665,     0,  2304,     0,     0,
    2619,     0,  2308,     0,     0,     0,  2311,     0,   118,  2314,
       0,     0,  2317,     0,  2319,   119,     0,     0,     0,  2629,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,     0,
       0,     0,     0,     0,   149,     0,     0,     0,   150,   151,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2676,
    2677,     0,  2679,     0,  2681,  2682,     0,  2684,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,     0,     0,  1820,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2711,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1842,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,  1876,     0,     0,
    1878,  2743,     0,     0,     0,     0,  2325,     0,     0,     0,
    1895,  1897,     0,  2459,     0,     0,     0,     0,  1901,     0,
       0,     0,     0,     0,     0,  1902,    64,    65,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   107,     0,     0,     0,  2357,  2358,  2359,  2360,
    2361,     0,  2363,  2364,     0,     0,     0,  2368,  2369,  2370,
    2371,  2372,     0,  2374,  2375,  1942,     0,  2071,  1945,  1946,
       0,     0,     0,     0,     0,  2077,  2078,     0,  1954,   109,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2114,  2115,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2125,  2126,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2136,  2137,     0,     0,     0,     0,     0,     0,
       0,     0,  2146,  2147,   110,     0,     0,     0,  2152,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2155,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1985,     0,
       0,     0,     0,     0,     0,  1989,     0,     0,  2530,     0,
       0,     0,     0,     0,  2534,     0,     0,     0,  2536,     0,
       0,     0,     0,  2005,     0,     0,     0,     0,     0,     0,
     112,     0,     0,     0,  2542,     0,     0,     0,     0,  2014,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   515,  2021,     0,
       0,     0,     0,  2026,     0,     0,  2028,     0,  2029,  2030,
    2031,  2033,   107,     0,  2035,     0,     0,  2036,     0,     0,
    2037,  2039,     0,  2040,  2041,  2042,  2044,   117,  2045,  2046,
       0,     0,   118,     0,  2048,  2049,  2050,     0,     0,  2051,
    2052,     0,     0,     0,     0,  2053,  2054,     0,     0,   109,
       0,  2496,     0,     0,  2498,  2499,  2500,  2501,  2502,     0,
    2504,  2505,   341,     0,     0,     0,     0,     0,     0,   342,
       0,     0,  2509,  2510,  2511,  2512,  2513,     0,  2515,  2516,
       0,  2518,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2521,  2522,     0,   110,     0,     0,     0,     0,     0,
       0,     0,  2525,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2638,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     112,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2161,
       0,     0,     0,  2164,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2169,     0,     0,  2172,     0,
    2326,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2328,     0,     0,     0,  2332,  2333,     0,   117,     0,     0,
    2697,     0,   118,  2341,  2342,     0,     0,     0,  2191,     0,
       0,     0,  2350,  2351,     0,     0,     0,     0,  2356,  2710,
       0,  2609,     0,     0,     0,     0,     0,     0,  2366,  2367,
       0,     0,  2612,     0,  2613,     0,     0,     0,  2615,  2377,
    2378,   877,     0,     0,     0,     0,     0,     0,     0,     0,
    2381,     0,     0,     0,     0,     0,   107,     0,     0,  2383,
       0,  2384,     0,  2735,     0,     0,     0,     0,  2243,     0,
       0,     0,     0,     0,     0,   343,     0,   344,     0,     0,
       0,     0,     0,  2749,     0,     0,  2750,     0,     0,     0,
       0,     0,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
       0,     0,     0,  2671,     0,     0,  2672,     0,     0,  2673,
       0,  2674,     0,     0,     0,     0,     0,     0,   110,     0,
       0,     0,     0,  2282,     0,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2312,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   112,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   107,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2497,     0,     0,   107,     0,
       0,     0,     0,     0,   109,  2506,     0,     0,     0,     0,
       0,     0,     0,     0,  2508,     0,   118,     0,     0,     0,
       0,     0,     0,  2517,     0,     0,     0,     0,     0,     0,
    2519,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2523,     0,     0,   488,   489,     0,  2526,   490,   110,
    2528,     0,     0,  2529,   594,   107,     0,     0,     0,     0,
    2391,     0,     0,  2394,     0,     0,     0,     0,     0,     0,
     491,  2398,     0,     0,     0,     0,     0,     0,     0,     0,
     110,     0,     0,     0,     0,     0,     0,  2411,     0,     0,
    2414,     0,     0,     0,   595,     0,     0,  2420,     0,     0,
       0,  2424,  2425,     0,     0,   112,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,     0,     0,   112,   110,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   492,     0,
       0,   596,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   117,     0,     0,   493,     0,   118,     0,     0,
       0,  2608,     0,     0,     0,  2610,     0,     0,     0,     0,
       0,     0,  2611,     0,     0,   494,     0,     0,  2614,     0,
    2486,     0,  2616,   112,     0,  2617,     0,     0,   118,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   597,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   506,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   495,     0,
       0,     0,     0,     0,     0,   118,     0,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,     0,     0,  2531,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,     0,   496,     0,     0,
       0,     0,   598,  2550,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2561,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2605,     0,     0,     0,     0,     0,
     977,   978,   979,     0,     0,  1242,  1243,  1244,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   980,   981,
       0,     0,   982,  1245,  1246,   983,     0,  1247,   107,     0,
    2620,  2621,   984,  2623,  1248,     0,   985,  1249,  2625,  2626,
       0,  1250,     0,  2628,   986,   987,     0,     0,     0,  1251,
    1252,     0,   988,   989,     0,     0,     0,  1253,     0,     0,
       0,     0,     0,     0,     0,   109,     0,     0,     0,   990,
       0,     0,     0,     0,     0,   991,  2650,     0,     0,   992,
     993,   107,     0,   994,  1254,  1255,     0,     0,  1256,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2669,     0,
     995,     0,     0,     0,     0,  1257,     0,     0,     0,   107,
     110,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     996,   502,     0,     0,     0,  1258,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   997,     0,     0,     0,  1302,  1259,     0,     0,
     107,     0,     0,     0,     0,     0,  1260,     0,     0,     0,
       0,     0,     0,   110,     0,   998,   112,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2713,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   110,     0,   999,  2722,  1000,     0,     0,  1261,     0,
    1262,  1001,  1002,     0,     0,     0,  1263,  1264,     0,  2733,
       0,     0,  2736,     0,     0,  1003,  1004,     0,     0,   112,
       0,  1265,     0,   117,     0,  1005,  1006,     0,   118,     0,
       0,  1266,   110,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   112,     0,     0,
       0,     0,  1007,     0,  1008,     0,     0,  1267,     0,  1268,
       0,     0,     0,     0,     0,     0,  1009,     0,  1010,  1269,
       0,     0,     0,     0,  1011,     0,     0,     0,     0,  1270,
       0,   118,     0,     0,     0,     0,     0,     0,   112,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1012,   118,
       0,     0,     0,  1271,     0,     0,     0,     0,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,     0,     0,   503,     0,
     118,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,     1,     0,
       0,     2,     0,     3,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     4,     0,     0,     0,
       0,     5,     6,     0,     7,     8,     9,     0,     0,     0,
       0,     0,     0,     0,    10,     0,     0,     0,     0,     0,
       0,    11,     0,    12,    13,   175,     0,     0,   176,     0,
     177,     0,    14,    15,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   178,
       0,   179,   180,   181,     0,     0,     0,     0,     0,     0,
       0,   182,    16,   183,     0,     0,     0,     0,   184,     0,
     185,   186,   187,     0,    17,     0,     0,   188,    18,   189,
       0,    19,     0,     0,     0,     0,    20,    21,     0,     0,
       0,     0,     0,    22,     0,     0,     0,     0,     0,    23,
       0,     0,     0,     0,     0,     0,     0,     0,   190,     0,
       0,     0,    24,     0,     0,    25,    26,    27,     0,     0,
      28,    29,     0,     0,     0,   191,     0,     0,     0,     0,
       0,     0,     0,     0,    30,     0,   192,   193,     0,     0,
     194,     0,   955,     0,   195,     0,   196,   956,     0,    31,
      32,    33,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    34,     0,    35,     0,   197,   198,     0,
       0,   199,    36,     0,     0,    37,     0,     0,    38,     0,
      39,   200,    40,  1339,     0,     0,     0,    41,     0,     0,
       0,     0,     0,     0,     0,     0,   201,   202,     0,     0,
      42,     0,     0,     0,   203,     0,    43,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    44,    45,     0,     0,     0,   204,     0,   205,
       0,     0,     0,     0,    46,     0,    47,     0,     0,     0,
       0,     0,    48,     0,     0,    49,    50,     0,     0,     0,
       0,     0,     0,   206,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   207,
     208,     0,     0,     0,     0,     0,    51,     0,   209,     0,
       0,     0,    52,     0,     0,   210,     0,     0,     0,     0,
       0,   211,     0,   212,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,     0,     0,     0,     0,     0,     0,     0,   213,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,  1340
};

static const yytype_int16 yycheck[] =
{
       3,    50,  1425,   479,   657,  1626,     0,  1628,    11,   652,
     653,     4,    32,     4,     5,  1125,     4,  1127,     5,   949,
       5,    17,   952,     3,     4,     5,     4,    27,     4,    32,
      14,     4,     3,     4,    97,     3,     4,    40,    17,   969,
       5,     3,     4,  1153,  1154,  1155,    49,     5,     5,    52,
      20,     6,    55,   121,     3,     4,    59,     5,    50,    62,
       6,     4,     4,    66,    67,    17,   121,    70,   121,    78,
      73,    74,   978,    27,    77,    66,    27,    61,    81,    13,
      27,    56,     4,    86,     3,     4,   103,    36,   121,    27,
      66,    40,    32,    66,     4,     5,    99,    88,   101,   102,
     103,   104,     4,    32,   131,     3,     4,    99,   165,     4,
      48,    32,   193,    51,     3,     4,   108,   120,     3,     4,
      17,     3,     4,   282,    62,     3,     4,    66,   119,     3,
       4,    61,   121,    88,    99,     3,     4,    21,    36,     4,
     105,    46,    87,   119,   136,    21,   119,    85,   139,   121,
       5,    36,   155,     5,     3,     4,  2656,    16,    61,   858,
     859,   860,   111,   172,   102,   120,   247,   167,   229,   237,
     187,    66,   138,   166,   120,   178,     3,     4,    66,    31,
     183,   124,   237,   132,   237,    33,     4,    12,     3,     4,
     120,    59,   113,     5,   144,   258,   223,     3,     4,  2699,
      37,    98,    14,    15,     5,   262,   190,   159,   241,   119,
     176,   202,   157,     4,   210,     3,     4,   208,   209,   187,
     167,   920,    88,   194,   119,   187,   202,   157,    53,   202,
      61,   210,   208,   209,   132,   208,   209,   237,   247,   214,
     243,    64,   291,    66,   897,   194,    71,   132,   237,    61,
     134,   193,    40,   280,   119,   189,   259,   260,     4,   279,
     245,   204,   183,   233,   185,   237,   187,   188,    21,   223,
     273,    59,   223,     5,   195,   100,   260,   225,   281,   282,
     280,   284,   285,    63,   287,    63,   270,   206,   282,   210,
     237,   193,   202,   118,   297,   291,   284,   122,   208,   209,
     292,   119,   293,   306,   307,   187,   284,   202,   299,   134,
     267,   193,   291,   208,   209,   302,   309,   293,   302,   290,
     293,   243,   302,   111,   104,   283,   104,   330,   331,   332,
      66,   334,   300,   280,   299,   338,   339,   202,   300,   279,
     270,   290,    57,   208,   209,   247,   349,   350,   230,  1002,
     279,   342,   355,   237,   345,   346,   347,   360,   361,   182,
     197,   237,    40,   284,   269,   368,   342,  1020,   371,   342,
     346,   347,   254,   346,   347,   343,   344,   280,   190,   191,
     264,   343,   344,   293,   202,   117,   389,   390,   243,   299,
     208,   209,   290,   396,   397,   398,   223,   400,   293,   309,
     303,   290,    44,    66,    46,   290,   194,    88,   223,  1052,
     348,   414,   290,     3,     4,   418,   290,   223,   300,   284,
     423,   424,   425,   426,   427,   428,  1356,   430,   293,  1359,
     433,   434,   342,   111,    76,   116,   346,   347,    14,    15,
    1083,   290,    84,   446,    30,  1555,   182,   342,   260,   280,
       4,   346,   347,   105,   234,    40,   234,   229,   270,   271,
     192,   343,   344,   275,     5,   290,   289,   130,   248,   249,
     248,   249,   303,    14,    15,   293,   256,   342,    61,    45,
    1386,   346,   347,   168,   237,    61,     4,     5,    78,    21,
     302,   193,   155,    59,     4,    21,   499,   500,   286,     5,
     142,    40,    56,     4,   185,    16,     4,  1413,    94,   224,
     431,   243,    21,   211,   517,    81,   194,   150,  1217,   200,
      61,     0,    87,   238,   342,  1224,   111,   576,   346,   347,
    1436,    61,    30,   150,   100,   267,   266,   120,   223,    40,
      21,   544,    60,   195,     3,     4,    56,    63,    66,    37,
     192,   117,   254,   289,   120,    44,     5,     3,     4,    47,
     340,   341,   340,   341,     3,     4,   208,   209,   617,   232,
     573,   432,   111,   215,   121,   217,   257,   163,   133,    61,
     146,   147,   172,   261,   445,   300,    74,   636,   104,     5,
     120,     4,   157,   245,    30,     5,   114,    61,    87,   216,
      27,   243,   523,   288,   302,   608,     5,    56,   124,   194,
     111,  1264,   130,   157,   190,   191,    65,     5,   299,   282,
      59,    61,  1275,   256,    61,   143,    14,    15,   309,     3,
       4,   634,   150,   199,   555,    14,   138,   155,   120,   256,
     184,   207,    21,     5,     3,     4,    27,    26,   651,   190,
     191,   654,    14,    15,    33,   194,   120,   247,    31,  2280,
     214,   247,   150,   161,   123,    61,   252,   309,    61,   672,
     673,   674,   675,    61,   176,   678,   261,   680,   295,   682,
     120,   684,    56,   120,   260,   196,   131,   270,   206,   244,
     237,    61,    71,   194,   270,   271,     3,     4,   186,    61,
     266,   267,   194,   192,   214,   237,     5,   225,    14,    15,
     759,   237,   230,   211,   232,    14,    15,    22,   234,   260,
       4,     5,    27,   168,   120,   161,   302,   120,   237,   270,
     271,     5,   248,   249,   275,     5,    34,   255,   256,   237,
     270,   168,   243,    48,    49,   263,    51,    52,   751,   752,
     120,   754,   755,   756,   757,    61,   237,    62,    61,     4,
     206,   302,    61,   251,   282,   214,   769,   770,    61,    74,
      75,    54,   338,   776,   777,   211,   117,    82,   223,   243,
      85,   160,   161,   162,   163,   164,   165,   168,   270,   168,
     169,   170,   171,   796,   797,   798,   223,   102,    66,  1729,
     118,   237,   190,   191,   109,   110,   270,    90,   113,   107,
     813,   814,   815,   203,   817,   303,   819,   120,   821,  1749,
     338,    26,   683,   169,   340,   341,   105,   120,   190,   191,
     270,   138,     5,   270,  1764,   280,    70,  1767,   197,   842,
     214,   844,   223,     0,    17,  1775,     3,     4,  1778,   282,
      14,    15,   855,  1963,  1964,  1965,  1786,   140,    40,  1789,
     863,     5,    42,    43,   259,   868,  1796,   172,    53,   176,
      33,   266,   260,    40,   270,    93,    26,   270,   257,   258,
     883,   884,   270,   271,   190,   191,    71,   275,   891,   892,
     893,   190,   191,   111,     3,     4,   899,    61,   260,    66,
     270,   904,    83,    88,   283,   203,   955,   112,   270,   271,
     259,    83,   915,   275,   302,   100,   195,   266,    99,   124,
     225,   842,    16,  1829,    89,  2555,   231,    99,   931,   111,
    1629,    40,    99,   118,    82,   169,    66,   122,   105,  1845,
     302,   246,   230,  2573,   111,   169,   325,   326,   327,   134,
     255,   341,   281,   177,   260,    89,   346,   818,   348,    72,
     243,   260,   112,   130,   270,   271,   245,   270,  1874,   187,
      31,   270,   271,     5,   124,   978,   275,   270,   283,   284,
       4,     3,     4,   150,     4,    14,    15,   187,    12,   174,
     170,   171,     4,   193,   175,   998,   302,    82,   165,   304,
     205,   862,   111,   302,   152,     3,     4,     4,   242,   159,
      14,    15,   194,   218,     5,  2438,  1019,   251,   198,    24,
      25,     5,     3,     4,     4,  1028,   190,   191,   195,     5,
     230,     5,    61,     3,     4,   216,    17,     3,     4,  1042,
       5,  1044,     5,   348,     3,     4,  1049,  1050,  1051,     3,
       4,     3,     4,     4,   254,   205,  1059,    61,  2688,  1062,
      12,  1064,     3,     4,  2694,   232,     4,   152,   218,   250,
      40,    14,    15,   221,   222,     5,  1982,  1080,   245,  1082,
       4,    40,     4,  1086,  1087,   194,    14,    15,   236,   256,
      19,     4,    97,    59,     4,     5,   260,  1100,  1101,   120,
     300,   123,  1105,  1106,     3,     4,   270,   271,    97,  1112,
       5,  1114,    37,    12,  1117,    44,  1119,   284,    61,  1168,
       4,  2751,    47,  2753,   267,   123,     4,     5,   276,   296,
       4,   298,   299,    61,     3,     4,   221,   222,   302,     4,
       5,   111,  1063,     4,   344,     4,     5,     4,    77,    74,
       4,   236,   111,  1156,     5,    84,     4,  1160,  2088,  1162,
    1163,   190,   191,  1166,   197,    94,    95,  2097,     4,     3,
       4,   338,   101,     7,     8,     4,  2106,     4,  1181,     4,
    1183,     5,  1185,  1186,  1187,  1188,   190,   191,     9,  1192,
    1193,   276,     3,     4,   266,   124,     5,  1200,     9,    10,
      11,    60,     4,     5,  1207,    22,    11,    66,  1211,  1212,
    1213,     5,   141,   169,    73,     4,    75,     4,    28,  1222,
     177,    80,  1225,   602,    83,   150,     4,   156,   157,   169,
      89,   260,    49,  1236,   163,    52,  1239,     5,    55,     5,
      99,   270,   271,  1104,  1943,     4,   105,   190,   191,     3,
       4,     5,   420,   421,   183,   114,   260,     3,     4,     5,
    1181,   186,   190,   191,   196,    82,   270,   271,     3,     4,
       5,   130,   188,   302,   188,   196,   196,   656,    66,  1282,
      66,  1284,   661,  2430,  1287,  1288,  2433,  1290,  2435,  1292,
     219,   150,    66,   110,     5,  1298,   113,  1300,   302,     5,
     223,  2448,  2449,     4,  1307,   230,   165,  1228,     4,  2215,
       4,   196,   224,     5,  2013,   174,   175,   260,  2465,     3,
       4,     5,  1243,     7,     8,  2231,   251,   270,   271,    87,
    2236,    87,   260,     5,     4,  2034,   195,     4,     4,    22,
     269,   151,   270,   271,     3,     4,     5,     5,     7,     8,
       5,   280,     5,    17,    35,    99,     4,   216,     5,   302,
    1221,    17,   287,   173,     4,    17,    49,   177,     4,    52,
       4,   230,     4,   232,   302,    97,     5,     5,   303,  1382,
     309,  1384,  1385,  1386,    87,     4,   245,     5,     3,     4,
       5,   250,     7,     8,     5,     5,    87,   256,     4,    82,
       5,     5,     4,  1406,   263,     4,     4,  1410,   225,     5,
    1413,     6,     5,     5,     4,    12,     5,   227,    12,     4,
      28,   800,     4,   282,     4,   106,     4,   110,     4,   166,
     113,  1434,  1435,  1436,     5,     5,   295,   296,   255,   298,
       5,  1444,     4,     4,     4,  1448,   127,   128,   129,     5,
       5,   255,  1455,   284,   135,   265,   255,     4,   237,     5,
    1381,     5,     5,   273,   274,   282,  1469,   148,     5,     4,
       4,  1474,     5,   154,     5,  1478,   268,  1480,  1481,   338,
    1483,  1484,  1485,   164,  1487,   268,     5,  1490,  1491,  1492,
    1493,  1494,  1495,  1496,  1497,  1498,  1499,  1500,     5,     5,
    1503,  1504,  1505,  1506,     4,     4,   237,   138,     5,     5,
    1513,  1514,     5,     5,     5,  1518,  1519,  1520,     5,  1440,
    1523,  1524,  1443,     4,     4,    40,     5,     5,  2434,     4,
     105,     5,  1453,  1536,  1537,     5,  1539,  1540,     5,   105,
     237,  2447,   225,   151,     5,   210,  2452,  1468,   105,   210,
      40,   241,  2251,     5,     4,    12,     5,    55,     5,   210,
     210,  2260,     4,   111,     4,   173,     5,     5,    66,   177,
       5,     5,   255,     4,     4,   111,   286,     5,     5,     5,
       4,     6,     5,     5,  1587,  1588,  1589,     4,   237,     5,
    1593,     5,     4,    91,    92,  1598,  1599,   278,  1601,  1602,
    1603,    99,  1605,  1606,     5,  1608,     5,   105,  1611,  1612,
       4,     4,  2311,     5,     5,  2314,    12,  1620,  2317,   227,
    2319,     5,     4,     4,  1627,    66,     4,     4,   126,     4,
    1633,  1634,   130,    38,    38,   345,     5,     4,  1641,    80,
       0,     5,   168,   138,  1647,   121,  1025,     4,    89,   237,
     237,     4,   150,   206,   245,  1516,   196,   265,    99,     4,
     158,     4,     4,     4,     4,   273,   274,     5,     5,     5,
       5,     5,     5,     4,   237,     5,     4,  1598,     4,     4,
    1683,     5,   268,     5,     5,   237,   237,     4,     4,   130,
     306,     4,   306,     4,     4,     4,     4,   195,     4,   306,
    1079,     5,  1705,  1706,     5,   203,   306,  1710,     5,   150,
    1089,   223,   223,  1716,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,  1663,  2436,     5,     4,   223,   245,     5,     5,
     223,   223,  1673,     4,   195,     5,     5,  1678,   256,     4,
       4,     4,   282,     5,     5,     4,     4,   268,     5,  2462,
       5,     4,     6,     5,   272,     5,     4,     0,     5,  2685,
       4,    12,     4,     4,   282,     4,   284,   497,     5,     5,
       5,   232,     5,     4,   504,     5,     4,   507,     5,     5,
       5,     4,   512,     4,   268,     5,   516,     4,   268,     5,
       5,     5,     4,     4,     4,   256,     5,  1196,  1197,     5,
    1823,     5,  1825,     5,  1827,     4,  1829,     5,     5,     5,
       5,     4,     4,   349,     5,    61,     5,     5,     5,     4,
     338,     4,  1845,  1846,  1847,  1848,  1849,  1850,  1851,  1852,
    1853,  1854,     5,   282,     5,   296,     5,   298,     5,     4,
    2553,  2554,     4,     4,  2557,     5,  2559,  1870,   578,  1872,
       4,  1874,     4,     4,  2710,     5,  1879,     5,  2571,  2572,
       5,     5,     5,  2576,  2577,     4,     4,  2580,  1891,     5,
       4,   117,  2585,  2586,   120,  1898,     4,     6,     5,     5,
       4,     4,     4,     4,     4,  1908,  1909,  1910,  1911,  1912,
    1913,  1914,  1915,  1916,  1917,     5,     5,  1920,  1921,  1922,
    1923,  1924,  1925,  1926,  1927,  1928,  1929,  1930,  1931,     4,
    1933,   157,  1935,  1936,  1937,     4,  2589,  2630,     5,     5,
    2633,     5,     5,     5,     4,  2638,     5,     4,  1951,     4,
       4,  2644,     5,     5,     5,     4,  2649,     5,     5,     5,
       5,     4,     4,   349,     5,     5,   192,     5,     5,   679,
       4,     4,   375,     5,     4,     4,   686,     4,     4,  1982,
    1983,     4,     4,  1986,     4,  1988,     4,  1990,     4,     4,
    1993,     4,  1995,     4,     4,     4,     4,   349,  1377,  2002,
    2003,   349,   349,   349,  1383,  2658,  2009,   302,  2011,     4,
     349,     5,  2015,     5,   240,  2018,  1877,   243,     4,     4,
     349,     5,     4,     4,  2717,     5,  1405,  2720,     5,  1408,
       5,  1892,     4,  1412,     4,  1896,     4,     4,     4,     4,
       4,   267,  1903,     4,   270,     4,     4,  2740,     5,     5,
     349,     5,     5,     4,  1433,   281,     5,     5,  2061,     5,
    1439,  2754,     5,     4,  2757,  2758,     5,     4,  1447,     4,
       4,  1450,     5,     4,     4,   419,     5,     5,     4,     6,
    1459,  1460,     4,     4,     4,  2597,     5,     4,  1949,     5,
       5,  1470,     4,   803,     4,     4,  2494,     5,  2019,     5,
     810,     5,     4,  2226,     5,     5,     5,     4,     4,    32,
    2159,     5,     5,     5,  2587,  2658,  2654,   718,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1992,    -1,    -1,    -1,    -1,    91,  2058,    -1,    -1,
      -1,    -1,    -1,    -1,    99,    -1,   856,    -1,    -1,    -1,
     105,   861,    -1,    -1,   864,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2165,    -1,    -1,    -1,   876,    -1,    -1,    -1,
      -1,   126,    -1,  2176,  2177,  2178,  2179,  2180,  2181,  2182,
    2183,  2184,  2185,  2186,    -1,    -1,    -1,    -1,    -1,  2192,
     113,  2667,  2668,    -1,    -1,   150,  2199,    -1,    -1,    -1,
      -1,    -1,    -1,   158,    -1,    -1,  2209,  2210,  2211,  2212,
    2213,  2214,  2215,  2216,  2217,  2218,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2231,  2232,
    2233,  2234,  2235,  2236,  2237,  2238,  2239,  2240,  2241,  2242,
     195,  2244,    -1,  2246,  2247,  2248,    -1,    -1,   203,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   182,
      -1,   184,   185,  2266,   187,   188,   976,  2270,    -1,    -1,
      -1,  2274,    -1,    -1,    -1,  2278,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     245,    -1,   215,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   256,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     233,   234,    -1,    -1,    -1,    -1,    -1,   272,    -1,    -1,
    2323,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2196,  2197,  2198,    -1,    -1,
    2201,  2202,  2203,    -1,    -1,  2206,  2207,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   284,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     303,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   936,  2395,    -1,    -1,    -1,  2399,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2409,  2410,  2269,    -1,
      -1,    -1,  2415,    -1,    -1,    -1,    -1,    -1,  2421,    -1,
      -1,    -1,    -1,   968,    -1,  2428,    -1,    -1,  2431,  2432,
      -1,  2434,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2447,    -1,    -1,  2450,  2451,  2452,
    2453,  2454,  2455,  2456,  2457,    -1,    -1,  2460,    -1,  1169,
    1839,  2464,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2475,    -1,    -1,    -1,    -1,  2480,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   411,  1199,
      -1,    -1,  2495,    -1,    -1,    -1,  1875,    -1,    -1,   422,
      -1,    -1,    -1,    -1,  1214,    -1,    -1,    -1,   431,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2530,    -1,    -1,
      -1,    -1,  2535,    -1,  2537,    -1,    -1,    -1,    -1,    -1,
    2543,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2555,  2556,    -1,  2416,    -1,    -1,    -1,    -1,
      -1,  2422,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2618,
    2573,  2574,    -1,    -1,    -1,  2578,   499,    -1,    -1,   502,
     503,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   515,    -1,  2597,    -1,    -1,   520,  2459,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   529,   530,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2622,
      -1,    -1,    -1,    -1,  2627,    -1,  2629,    -1,    -1,    -1,
      -1,    -1,    -1,  2636,    -1,    -1,    -1,    -1,  2641,    -1,
      -1,    -1,    -1,  2646,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2667,  2668,    -1,    -1,    -1,    -1,
      -1,    -1,   595,   596,   597,   598,    -1,    -1,    -1,    -1,
      -1,    -1,  2685,    -1,    -1,  2688,  2689,    -1,    -1,  2692,
      -1,  2694,  2695,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,    -1,  2706,  2707,  2708,  2709,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2718,    19,    -1,  2721,    -1,
      -1,    -1,    -1,    -1,    -1,  2728,    -1,  2730,    -1,    -1,
      -1,    -1,   655,    -1,    -1,    -1,    39,    -1,    -1,  1449,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2751,    -1,
    2753,    -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,  2680,
      -1,    -1,    -1,  1308,  1309,  1310,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1318,  1319,  1320,    -1,    -1,    -1,    -1,
    1325,  1326,  1327,    -1,    -1,  1330,  1331,    -1,  1333,  1334,
      -1,  2712,    -1,    -1,  2715,    -1,   948,    -1,   101,  1509,
      -1,    -1,    -1,    -1,    -1,  1515,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2014,    -1,    -1,    -1,    -1,  1363,  1364,
      -1,    -1,  1367,  1368,    -1,    -1,    -1,  2028,  2029,  2030,
      -1,    -1,  2033,    -1,  2035,  2036,    -1,    -1,  2039,  2040,
    2041,    -1,    -1,  2044,  2045,    -1,    -1,  2048,    -1,  2050,
    2051,    -1,  2053,    -1,   157,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2252,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   804,    -1,    -1,  1594,    -1,    -1,    -1,    -1,    -1,
    1600,   194,    -1,   816,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   214,    -1,    -1,  1624,    -1,   219,    -1,    -1,    -1,
      -1,  1631,    -1,    -1,    -1,    -1,    -1,   230,    -1,    -1,
     853,   854,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1657,    -1,    -1,
      -1,    -1,    -1,    -1,   877,  1665,    -1,    -1,    -1,    -1,
    2161,    -1,    -1,  2164,    -1,    -1,    -1,    -1,  2169,    -1,
      -1,  2172,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   290,    -1,    -1,
    2191,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   926,    -1,    -1,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     4,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2446,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,  1001,    -1,
      -1,  2282,    -1,    -1,    -1,    -1,    -1,  2466,    -1,    -1,
      -1,  2470,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,
    1820,  2312,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,    -1,    -1,    -1,    -1,    -1,    -1,
    1053,    -1,  1842,    -1,    -1,    -1,    -1,    -1,    19,    -1,
    1063,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1876,    -1,  1878,    -1,
      -1,   119,  1324,    -1,    -1,  1720,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1336,  1895,    -1,  1897,  1733,    -1,
    2391,  1901,  1902,    -1,    -1,    -1,    -1,    -1,  1743,    -1,
      -1,    -1,  1354,  1355,    -1,    -1,    -1,    -1,    -1,   157,
    2411,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2420,
     101,    -1,    -1,  2424,  2425,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1942,    -1,    -1,  1945,  1946,    -1,    -1,    -1,
      -1,  1164,    -1,    -1,  1954,    -1,   194,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   202,    -1,    -1,    -1,  1181,    -1,
     208,   209,    -1,    -1,    -1,    -1,   214,    -1,    -1,    -1,
    1815,   219,    -1,    -1,    -1,    -1,   157,    -1,    -1,  1989,
      -1,    -1,  1205,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1216,    -1,  2005,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2026,    -1,    -1,    -1,
    1243,  2031,  2701,    -1,    -1,  1248,    -1,  2037,    -1,    -1,
    2531,    -1,  2042,    -1,    -1,    -1,  2046,    -1,   219,  2049,
      -1,    -1,  2052,    -1,  2054,   293,    -1,    -1,    -1,  2550,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,    -1,
      -1,    -1,    -1,    -1,   342,    -1,    -1,    -1,   346,   347,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2620,
    2621,    -1,  2623,    -1,  2625,  2626,    -1,  2628,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,    -1,    -1,  1381,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2675,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1411,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,  1440,    -1,    -1,
    1443,  2722,    -1,    -1,    -1,    -1,  2071,    -1,    -1,    -1,
    1453,  1454,    -1,  2243,    -1,    -1,    -1,    -1,  1461,    -1,
      -1,    -1,    -1,    -1,    -1,  1468,     3,     4,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    -1,  2111,  2112,  2113,  2114,
    2115,    -1,  2117,  2118,    -1,    -1,    -1,  2122,  2123,  2124,
    2125,  2126,    -1,  2128,  2129,  1508,    -1,  1739,  1511,  1512,
      -1,    -1,    -1,    -1,    -1,  1747,  1748,    -1,  1521,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1762,  1763,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1773,  1774,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1784,  1785,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1794,  1795,   101,    -1,    -1,    -1,  1800,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1810,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1591,    -1,
      -1,    -1,    -1,    -1,    -1,  1598,    -1,    -1,  2388,    -1,
      -1,    -1,    -1,    -1,  2394,    -1,    -1,    -1,  2398,    -1,
      -1,    -1,    -1,  1616,    -1,    -1,    -1,    -1,    -1,    -1,
     157,    -1,    -1,    -1,  2414,    -1,    -1,    -1,    -1,  1632,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,  1651,    -1,
      -1,    -1,    -1,  1656,    -1,    -1,  1659,    -1,  1661,  1662,
    1663,  1664,    19,    -1,  1667,    -1,    -1,  1670,    -1,    -1,
    1673,  1674,    -1,  1676,  1677,  1678,  1679,   214,  1681,  1682,
      -1,    -1,   219,    -1,  1687,  1688,  1689,    -1,    -1,  1692,
    1693,    -1,    -1,    -1,    -1,  1698,  1699,    -1,    -1,    56,
      -1,  2326,    -1,    -1,  2329,  2330,  2331,  2332,  2333,    -1,
    2335,  2336,    16,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      -1,    -1,  2347,  2348,  2349,  2350,  2351,    -1,  2353,  2354,
      -1,  2356,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2366,  2367,    -1,   101,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2377,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2561,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     157,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1822,
      -1,    -1,    -1,  1826,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1838,    -1,    -1,  1841,    -1,
    2072,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2082,    -1,    -1,    -1,  2086,  2087,    -1,   214,    -1,    -1,
    2650,    -1,   219,  2095,  2096,    -1,    -1,    -1,  1871,    -1,
      -1,    -1,  2104,  2105,    -1,    -1,    -1,    -1,  2110,  2669,
      -1,  2506,    -1,    -1,    -1,    -1,    -1,    -1,  2120,  2121,
      -1,    -1,  2517,    -1,  2519,    -1,    -1,    -1,  2523,  2131,
    2132,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2142,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,  2151,
      -1,  2153,    -1,  2713,    -1,    -1,    -1,    -1,  1931,    -1,
      -1,    -1,    -1,    -1,    -1,   239,    -1,   241,    -1,    -1,
      -1,    -1,    -1,  2733,    -1,    -1,  2736,    -1,    -1,    -1,
      -1,    -1,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
      -1,    -1,    -1,  2608,    -1,    -1,  2611,    -1,    -1,  2614,
      -1,  2616,    -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,
      -1,    -1,    -1,  2006,    -1,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2047,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   157,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2327,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    56,  2337,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2346,    -1,   219,    -1,    -1,    -1,
      -1,    -1,    -1,  2355,    -1,    -1,    -1,    -1,    -1,    -1,
    2362,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2373,    -1,    -1,    65,    66,    -1,  2379,    69,   101,
    2382,    -1,    -1,  2385,    18,    19,    -1,    -1,    -1,    -1,
    2163,    -1,    -1,  2166,    -1,    -1,    -1,    -1,    -1,    -1,
      91,  2174,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     101,    -1,    -1,    -1,    -1,    -1,    -1,  2190,    -1,    -1,
    2193,    -1,    -1,    -1,    58,    -1,    -1,  2200,    -1,    -1,
      -1,  2204,  2205,    -1,    -1,   157,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,    -1,    -1,   157,   101,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   169,    -1,
      -1,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   214,    -1,    -1,   186,    -1,   219,    -1,    -1,
      -1,  2503,    -1,    -1,    -1,  2507,    -1,    -1,    -1,    -1,
      -1,    -1,  2514,    -1,    -1,   206,    -1,    -1,  2520,    -1,
    2293,    -1,  2524,   157,    -1,  2527,    -1,    -1,   219,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   173,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   277,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   269,    -1,
      -1,    -1,    -1,    -1,    -1,   219,    -1,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,    -1,    -1,  2390,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,    -1,   338,    -1,    -1,
      -1,    -1,   286,  2426,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2437,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2487,    -1,    -1,    -1,    -1,    -1,
      20,    21,    22,    -1,    -1,    20,    21,    22,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      -1,    -1,    52,    48,    49,    55,    -1,    52,    19,    -1,
    2533,  2534,    62,  2536,    59,    -1,    66,    62,  2541,  2542,
      -1,    66,    -1,  2546,    74,    75,    -1,    -1,    -1,    74,
      75,    -1,    82,    83,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,    99,
      -1,    -1,    -1,    -1,    -1,   105,  2579,    -1,    -1,   109,
     110,    19,    -1,   113,   109,   110,    -1,    -1,   113,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2601,    -1,
     130,    -1,    -1,    -1,    -1,   130,    -1,    -1,    -1,    19,
     101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     150,    59,    -1,    -1,    -1,   150,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   172,    -1,    -1,    -1,    56,   172,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,   181,    -1,    -1,    -1,
      -1,    -1,    -1,   101,    -1,   195,   157,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2680,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   101,    -1,   223,  2697,   225,    -1,    -1,   223,    -1,
     225,   231,   232,    -1,    -1,    -1,   231,   232,    -1,  2712,
      -1,    -1,  2715,    -1,    -1,   245,   246,    -1,    -1,   157,
      -1,   246,    -1,   214,    -1,   255,   256,    -1,   219,    -1,
      -1,   256,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   157,    -1,    -1,
      -1,    -1,   282,    -1,   284,    -1,    -1,   282,    -1,   284,
      -1,    -1,    -1,    -1,    -1,    -1,   296,    -1,   298,   294,
      -1,    -1,    -1,    -1,   304,    -1,    -1,    -1,    -1,   304,
      -1,   219,    -1,    -1,    -1,    -1,    -1,    -1,   157,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   338,   219,
      -1,    -1,    -1,   338,    -1,    -1,    -1,    -1,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,    -1,    -1,   286,    -1,
     219,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,    41,    -1,
      -1,    44,    -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,
      -1,    64,    65,    -1,    67,    68,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    -1,    86,    87,    41,    -1,    -1,    44,    -1,
      46,    -1,    95,    96,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,
      -1,    67,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    77,   125,    79,    -1,    -1,    -1,    -1,    84,    -1,
      86,    87,    88,    -1,   137,    -1,    -1,    93,   141,    95,
      -1,   144,    -1,    -1,    -1,    -1,   149,   150,    -1,    -1,
      -1,    -1,    -1,   156,    -1,    -1,    -1,    -1,    -1,   162,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,
      -1,    -1,   175,    -1,    -1,   178,   179,   180,    -1,    -1,
     183,   184,    -1,    -1,    -1,   141,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   197,    -1,   152,   153,    -1,    -1,
     156,    -1,   157,    -1,   160,    -1,   162,   162,    -1,   212,
     213,   214,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   226,    -1,   228,    -1,   183,   184,    -1,
      -1,   187,   235,    -1,    -1,   238,    -1,    -1,   241,    -1,
     243,   197,   245,   162,    -1,    -1,    -1,   250,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   212,   213,    -1,    -1,
     263,    -1,    -1,    -1,   220,    -1,   269,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   285,   286,    -1,    -1,    -1,   243,    -1,   245,
      -1,    -1,    -1,    -1,   297,    -1,   299,    -1,    -1,    -1,
      -1,    -1,   305,    -1,    -1,   308,   309,    -1,    -1,    -1,
      -1,    -1,    -1,   269,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   285,
     286,    -1,    -1,    -1,    -1,    -1,   339,    -1,   294,    -1,
      -1,    -1,   345,    -1,    -1,   301,    -1,    -1,    -1,    -1,
      -1,   307,    -1,   309,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   345,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337
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
      44,    46,    76,    84,   142,   192,   208,   209,   215,   217,
     243,   309,   353,   144,   412,    41,    44,    46,    65,    67,
      68,    69,    77,    79,    84,    86,    87,    88,    93,    95,
     124,   141,   152,   153,   156,   160,   162,   183,   184,   187,
     197,   212,   213,   220,   243,   245,   269,   285,   286,   294,
     301,   307,   309,   345,   413,    83,    99,   455,    19,    44,
      77,    84,    94,    95,   101,   124,   141,   156,   157,   163,
     183,   219,   269,   280,   309,   458,   354,    88,   116,   185,
     200,   257,   299,   309,   464,    16,    26,   112,   124,   159,
     205,   218,   467,   229,   485,     5,    66,    88,   139,   299,
     345,   354,   486,     5,   487,    57,   224,   238,   300,   503,
      64,    66,   182,   289,   522,    66,   203,   341,   346,   348,
     523,    39,   194,   230,   290,   352,   362,   364,   524,     5,
     299,   309,   354,   527,    70,   169,   242,   251,   528,     4,
      88,   503,    61,   280,   303,   535,   194,   290,   352,   536,
      26,   112,   124,   205,   218,   538,    50,    99,   108,   136,
     292,   553,   554,     4,    37,    47,    74,   150,   186,   230,
     251,   287,   303,   378,     4,   124,   204,   555,   290,   352,
     557,    16,    23,   239,   241,   363,   558,   229,   562,   290,
     352,   563,     0,     5,    59,   352,   384,   266,     5,     4,
     290,   352,   385,     5,    32,   279,   386,   123,   352,   387,
     123,   352,   389,   352,     4,   193,   247,   393,   187,   300,
     343,   344,   352,   392,   354,   138,   176,   391,   197,   352,
      78,   172,   247,   352,   394,     5,   352,     4,   243,   396,
     352,   352,     5,   225,   399,    31,   400,     5,   401,     5,
     405,     5,    31,   406,   352,     9,    10,    11,   352,   358,
     359,   360,   361,   352,   352,    40,   111,   194,   352,   408,
     352,   194,   362,   364,   352,    35,   106,   127,   128,   129,
     135,   148,   154,   164,   278,   367,   352,     4,   354,   354,
     354,   354,   354,   354,   354,   354,   354,   354,   117,    66,
      53,    71,    88,   100,   118,   122,   134,   174,   414,   118,
     416,   187,   193,   230,   254,   300,   343,   344,   352,   402,
     417,   282,   420,   169,   421,   169,   177,   423,    65,    66,
      69,    91,   169,   186,   206,   269,   338,   362,   425,   352,
     364,   428,    59,   286,   362,   429,   277,   362,   364,   430,
      33,   431,   362,   364,   432,     4,   362,   364,   433,    45,
      59,    81,   100,   117,   120,   146,   147,   199,   207,   266,
     267,   338,   437,   211,   302,   443,     5,    89,     6,    88,
     120,   435,     5,    65,   364,   434,    16,   503,    66,   182,
     289,   444,    66,   230,   445,   281,    61,   280,   303,   446,
      21,   134,   237,   264,   447,    37,    47,    74,   150,   186,
     251,   303,   448,   364,    89,    16,   196,   453,   362,   456,
      72,   459,    31,   460,    44,    87,   192,   461,   150,   216,
     256,   295,   462,   362,    18,    58,   115,   173,   286,   362,
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
     352,    30,    94,   163,   247,   252,   366,   366,     4,   197,
     352,   352,     4,     4,     4,   352,   352,   352,   352,     4,
       4,     5,     5,   362,     5,   352,   352,   358,   360,   360,
     362,   352,   352,   352,   352,   352,   352,   352,   362,   364,
     361,   352,   352,   361,   352,     5,   266,   103,   187,   415,
     193,   247,   418,   169,    78,   172,   247,   419,   138,   176,
     403,   403,     4,   422,     4,   424,   193,   254,   426,   177,
     427,   169,   367,   352,   362,   352,   362,   362,   367,   367,
     367,   362,   367,   352,   362,     4,   440,     4,   364,   438,
     196,     4,   166,   309,   439,   196,   362,     4,   362,   442,
       5,     5,     4,   196,   352,     4,     5,    60,    66,   114,
     130,   143,   150,   155,   206,   225,   230,   232,   255,   256,
     263,   282,   338,   497,   364,   188,   188,    66,   449,    66,
     450,    66,   451,   223,   452,   352,     5,   224,   454,   363,
     367,     5,   362,   362,   362,   362,     4,   354,     4,     4,
     196,   352,    14,    15,    61,   190,   191,   260,   270,   271,
     302,    87,     5,     5,    14,    15,    61,   190,   191,   260,
     270,   271,   275,   302,    87,   157,   162,   363,   474,   478,
      87,   157,     5,   472,     4,     4,    14,    61,   190,   260,
     270,   302,     5,     5,     4,   352,   363,    20,    21,    22,
      48,    49,    52,    55,    62,    66,    74,    75,    82,    83,
      99,   105,   109,   110,   113,   130,   150,   172,   195,   223,
     225,   231,   232,   245,   246,   255,   256,   282,   284,   296,
     298,   304,   338,    66,    80,    89,    99,   130,   150,   195,
     232,   256,   296,   298,     4,    30,   161,   211,   237,   491,
       5,    63,   104,   234,   248,   249,   340,   341,   496,    99,
     489,    17,    40,   111,   194,   495,     4,     5,    17,   210,
     291,   352,   256,   496,   504,   124,   496,   505,    36,    40,
     111,   132,   194,   290,   352,   506,   362,   354,    91,    99,
     105,   126,   150,   158,   195,   203,   245,   256,   272,   509,
      40,   111,   194,     5,   283,    17,   210,   291,   513,   284,
     354,   514,     5,    99,   105,   299,    17,    17,     4,   352,
     352,   352,   352,   352,   367,   352,   352,   361,   352,     4,
     367,     4,    40,   111,   194,   261,   531,    40,   111,   194,
     261,   532,     4,    97,     5,     5,    87,     4,     5,     5,
      87,     5,   542,    61,   120,   157,   270,   546,    61,   120,
     270,   550,    87,   157,    61,   120,   270,   544,     4,    61,
     120,   270,   543,     5,     5,     4,     4,     5,     5,     5,
     352,   352,   352,     4,   352,   556,   352,   352,     6,   363,
       4,     5,     4,     4,     5,     4,    97,   258,   368,   352,
     352,    12,     5,    12,   352,   352,    12,     4,    12,     4,
       4,   352,   352,   352,     4,   354,     4,     4,   367,   362,
     367,   352,   352,   352,   362,   352,   361,   352,   352,     5,
       5,   352,   364,   352,   362,   362,   352,   367,   368,   368,
     368,   367,   361,   352,   367,   352,   133,   244,   355,   441,
     166,     5,     4,   367,   362,     4,     5,     4,     4,   352,
     436,   352,    20,    21,    22,    48,    49,    52,    59,    62,
      66,    74,    75,    82,   109,   110,   113,   130,   150,   172,
     181,   223,   225,   231,   232,   246,   256,   282,   284,   294,
     304,   338,    66,   130,   155,   232,   282,    30,   161,   211,
     237,   498,   352,   206,   352,   499,    17,   352,   255,   509,
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
     509,    40,   131,   223,   280,   241,   210,     5,     5,   245,
      27,   223,     4,     5,     5,   210,    36,   132,   290,   352,
     509,   210,   354,     4,     4,   352,     5,   302,    22,    27,
      48,    49,    51,    52,    62,    74,    75,    82,    85,   102,
     109,   110,   113,   172,   225,   231,   246,   255,   283,   284,
     304,   348,   492,   352,   352,   352,   352,   352,   496,   362,
       5,     4,     5,   352,   352,   362,   364,   352,   354,   352,
     352,   496,     5,   352,   352,   354,     5,    17,     5,     5,
     352,   352,   361,   352,   352,     4,   352,   352,   111,   352,
     352,   111,     4,    42,    43,   170,   171,   198,   377,   377,
      61,   120,   270,   540,   377,     5,    61,   120,   270,   545,
       5,     5,    61,   120,   270,   547,     4,     5,     5,     4,
      61,   120,   270,   549,    61,   120,   270,   548,     5,     5,
       4,     5,     5,     4,   377,   377,   377,   352,   352,   352,
       4,   352,   362,   352,   363,   367,     5,     5,    12,   352,
     362,   364,   352,    12,   352,   352,   352,    59,   352,     6,
       4,   352,   352,    46,   269,   404,     5,   354,   354,   367,
     352,     4,     4,     4,   362,   352,   352,   352,   352,   367,
       4,   362,   368,   361,   352,     4,   368,   352,    38,    38,
       4,   364,     5,    24,    25,    97,   369,   352,     4,   352,
       5,    82,   152,   221,   222,   236,   276,   362,   364,   237,
     121,   237,   237,    21,   237,   362,   121,   237,    27,   167,
     237,   280,   138,    21,   237,   121,   237,   237,    21,   237,
      27,   168,   223,   168,   259,   266,   121,   168,   223,   288,
     509,   131,   168,   223,   280,     4,   245,    27,   168,   223,
     509,   206,   352,   352,   352,   352,   352,   352,   196,   352,
     352,    20,   233,   457,     4,     4,   352,   372,   372,   372,
       4,   372,   372,   372,    14,    15,    61,   190,   191,   260,
     270,   271,   302,   371,   372,   372,   372,   372,   372,     4,
     372,   372,     4,   371,    14,    15,    61,   190,   191,   260,
     270,   271,   302,     5,   475,     5,   479,     5,     5,    14,
      15,    61,   190,   191,   260,   270,   271,   275,   302,     5,
      14,    15,    61,   190,   191,   260,   270,   271,   275,   302,
       5,    14,    15,    61,   190,   191,   260,   270,   271,   275,
     302,    14,    15,    61,   190,   191,   260,   270,   271,   302,
     268,     5,     5,     5,   371,   371,   370,     4,     4,   370,
       5,     4,     4,   372,   372,     4,   372,   372,     5,   354,
     362,   364,     5,   352,   354,   352,     5,   352,     5,   357,
     105,   195,   245,   105,   195,   245,     5,   354,   352,   354,
       5,   352,   362,   354,     5,   357,   237,   237,    21,   237,
      21,   237,   237,    21,   237,   306,   306,     4,     4,     4,
     490,     4,     4,     4,   306,   306,     4,     5,     4,   354,
     352,     5,   352,     5,   357,   354,   362,   364,   362,   364,
     352,    27,    48,    51,    62,    85,   102,   348,   373,     4,
     354,   352,   367,   354,     5,   362,   364,   362,   352,   354,
     354,   362,   362,   364,   352,   354,   352,     5,   352,   223,
     223,   352,   352,   223,   352,   223,   352,   352,   502,   510,
     352,   223,   223,   352,   352,   352,   352,   352,   352,   352,
     352,     5,   302,   352,   493,   352,   352,   223,   352,   352,
     352,   352,   362,   367,     5,   362,   362,   352,   352,   367,
     361,   352,   352,   352,   362,   352,   352,     5,     4,   352,
     352,   352,   352,     5,     5,     4,   377,     5,     5,     4,
       4,     4,     5,     5,     4,     4,     5,     5,     4,     5,
       5,     4,   352,   352,   352,   362,   352,   367,   352,   362,
     364,   352,   367,   352,   352,   352,   352,   352,     5,   352,
       4,     6,   352,   352,     4,   362,   352,   367,   177,   365,
     352,   365,   368,   367,   362,   352,   352,     4,   352,   352,
       4,   362,     5,     5,     5,     5,   362,   367,   362,   362,
     362,   362,   364,   362,   367,   362,   362,   362,   364,   362,
     362,   362,   362,   364,   362,   362,   362,   352,   362,   362,
     362,   362,   362,   362,   362,   352,   352,     4,   352,     5,
       4,   352,   372,     5,     5,     5,   370,     4,     4,     5,
     372,   371,     4,   372,     5,     5,     5,   371,   371,   370,
       4,     4,     5,    14,    15,    61,   190,   191,   260,   270,
     271,   302,    14,    15,    61,   190,   191,   260,   270,   271,
     302,    14,    15,    61,   190,   191,   260,   270,   271,   302,
     268,     5,     5,     5,   371,   371,   370,     4,     4,   370,
       5,   268,     5,     5,     5,   371,   371,   370,     4,     4,
     370,     5,   268,     5,     5,     5,   371,   371,   370,     4,
       4,   370,     5,     5,     5,     5,   371,   371,   370,     4,
       4,     5,   371,     4,     4,   371,     4,     4,   372,     5,
     367,   362,   352,   352,   362,   352,     5,   357,     5,   362,
     354,     5,   362,   367,     5,   357,   352,   352,   352,   352,
     352,   352,   352,   352,   352,     4,     4,     5,     4,     4,
     352,   362,   352,     5,   357,   354,   367,   361,   367,   352,
     352,   361,   367,   361,   367,   352,   367,   367,   361,   352,
     352,   352,   352,   352,   352,   352,   352,   352,   352,    55,
      66,    92,   130,   282,   284,   338,   507,   508,   509,   520,
     521,   352,   352,   352,   352,   352,   352,   352,   352,   352,
     352,   352,   352,   362,     5,   352,   352,   352,   352,     4,
       4,   367,   368,     4,   494,   367,   367,   361,   352,     4,
     367,     4,   377,   377,   377,   357,   352,   352,   352,   367,
     352,   361,   352,   352,    12,     5,     5,     4,   352,   352,
       4,   367,   362,   352,   352,   368,   369,   352,     5,   352,
     364,     5,     5,     5,     5,   367,   369,   369,   369,   367,
     369,   368,   369,   369,   367,   369,   369,   369,   367,   369,
     369,   367,   362,   369,   367,   369,   369,   367,   369,   367,
       4,   364,     5,   352,     4,   372,   371,     4,   371,     5,
       5,     5,   371,   371,   370,     4,     4,     5,     5,     5,
       5,   371,   371,   370,     4,     4,     5,     5,     5,     5,
     371,   371,   370,     4,     4,     5,   371,   372,   372,   372,
     372,   372,     4,   372,   372,     4,   371,   371,   372,   372,
     372,   372,   372,     4,   372,   372,     4,   371,   371,     4,
       4,   371,     4,   371,   371,     4,     4,     4,   363,   369,
       4,   362,   369,   352,   362,     4,   369,   369,   362,     4,
     352,   352,   352,   352,   352,   352,   352,   352,   352,   352,
     352,   362,   369,   352,   362,     4,   361,   361,   361,   352,
     362,   361,   361,   361,   362,   362,   361,   361,   352,   352,
     352,   352,   352,   352,   357,   352,   352,   352,   349,   349,
     349,   349,   349,   349,   349,   508,   349,   357,   352,   352,
     352,   352,   357,   352,   352,   352,   352,   352,   352,   367,
     352,   302,   356,   357,   352,   352,   368,   354,     4,     4,
     368,   352,   361,   352,    59,   352,     5,     5,   352,     4,
     365,   369,     5,     4,     4,     5,   362,     5,   368,   369,
     368,   368,   368,     5,     4,   352,   372,   371,   372,   372,
     372,   372,   372,     4,   372,   372,   371,     4,   371,   372,
     372,   372,   372,   372,     4,   372,   372,   371,   372,   371,
       4,   372,   372,   371,     4,   372,   371,     4,   371,   371,
     367,   362,   369,     4,   367,   352,   367,   352,   352,   352,
     369,     4,   367,   352,   361,   369,   352,   361,   369,   369,
     362,   352,     4,   374,   374,   352,   352,   374,   357,   374,
     510,   362,   490,     5,     4,     5,     5,     5,     4,   354,
     357,   374,   374,   352,   352,   357,   352,   352,   352,   352,
     352,   361,   352,     5,   510,   352,   374,   354,   511,   512,
       5,   354,     5,   352,     5,     4,     6,   352,    32,   279,
     411,     5,    32,   279,   376,   362,   411,   352,   371,   372,
     371,   371,   372,   372,   371,   372,   371,   371,   352,   369,
     362,   362,   352,   362,   352,   362,   362,   352,   362,   369,
       4,   510,   510,   356,   352,   510,     4,   510,   367,     5,
       4,     4,   510,   510,   356,   352,     4,   510,   510,   352,
     362,   510,   510,   510,   511,   517,   518,   509,   515,   516,
       5,     5,     6,     4,   187,   300,   344,   352,   402,   362,
       4,   372,   372,   372,   372,   363,   369,   369,   352,   369,
       4,   369,   369,   352,   369,   352,   510,   510,     4,   352,
     510,     5,   352,   510,     4,   352,   510,   367,   517,   519,
     520,   349,   516,     5,     5,     4,   352,   403,   352,   403,
     367,   369,     4,   362,   364,     4,   357,   356,   352,   352,
     356,   352,   362,   520,   354,     5,     5,   352,   352,   352,
     352,   376,     5,   362,   364,   367,   362,   364,   510,   352,
       4,   510,   352,   369,     5,     5,   352,     5,   352,   367,
     367,     4,   510,     4,     5,     5,     5,   356,   356,   510,
     510,   510
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
    {DebugMosaic=(yyvsp[(2) - (2)].integer);;}
    break;

  case 59:
#line 513 "frame/parser.Y"
    {yydebug=(yyvsp[(2) - (2)].integer);;}
    break;

  case 60:
#line 514 "frame/parser.Y"
    {DebugPerf=(yyvsp[(2) - (2)].integer);;}
    break;

  case 61:
#line 515 "frame/parser.Y"
    {DebugWCS=(yyvsp[(2) - (2)].integer);;}
    break;

  case 62:
#line 516 "frame/parser.Y"
    {DebugBin=(yyvsp[(2) - (2)].integer);;}
    break;

  case 63:
#line 517 "frame/parser.Y"
    {DebugBlock=(yyvsp[(2) - (2)].integer);;}
    break;

  case 64:
#line 518 "frame/parser.Y"
    {DebugCompress=(yyvsp[(2) - (2)].integer);;}
    break;

  case 65:
#line 519 "frame/parser.Y"
    {DebugCrop=(yyvsp[(2) - (2)].integer);;}
    break;

  case 66:
#line 520 "frame/parser.Y"
    {DebugGZ=(yyvsp[(2) - (2)].integer);;}
    break;

  case 67:
#line 521 "frame/parser.Y"
    {DebugRGB=(yyvsp[(2) - (2)].integer);;}
    break;

  case 68:
#line 524 "frame/parser.Y"
    {(yyval.integer)=((yyvsp[(1) - (1)].integer) ? 1 : 0);;}
    break;

  case 69:
#line 526 "frame/parser.Y"
    {(yyval.integer)=1;;}
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
#line 531 "frame/parser.Y"
    {(yyval.integer)=0;;}
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
#line 537 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 78:
#line 538 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 79:
#line 539 "frame/parser.Y"
    {(yyval.integer) = Base::FULLBASE;;}
    break;

  case 80:
#line 540 "frame/parser.Y"
    {(yyval.integer) = Base::ROOT;;}
    break;

  case 81:
#line 541 "frame/parser.Y"
    {(yyval.integer) = Base::FULL;;}
    break;

  case 82:
#line 544 "frame/parser.Y"
    {(yyval.real) = 0;;}
    break;

  case 83:
#line 545 "frame/parser.Y"
    {(yyval.real) = (yyvsp[(1) - (1)].real);;}
    break;

  case 84:
#line 548 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 85:
#line 549 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 86:
#line 550 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 87:
#line 553 "frame/parser.Y"
    {(yyval.real) = parseSEXStr((yyvsp[(1) - (1)].str));;}
    break;

  case 88:
#line 556 "frame/parser.Y"
    {(yyval.real) = parseHMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 89:
#line 559 "frame/parser.Y"
    {(yyval.real) = parseDMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 90:
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

  case 91:
#line 575 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 92:
#line 582 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 93:
#line 589 "frame/parser.Y"
    {
	  (yyval.vector)[0] = (yyvsp[(1) - (2)].real);
	  (yyval.vector)[1] = (yyvsp[(2) - (2)].real);
	  (yyval.vector)[2] = 1;
	;}
    break;

  case 94:
#line 596 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::IMAGE;;}
    break;

  case 95:
#line 597 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::PHYSICAL;;}
    break;

  case 96:
#line 598 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::DETECTOR;;}
    break;

  case 97:
#line 599 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::AMPLIFIER;;}
    break;

  case 98:
#line 600 "frame/parser.Y"
    {(yyval.integer) = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 99:
#line 603 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS;;}
    break;

  case 100:
#line 604 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSA;;}
    break;

  case 101:
#line 605 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSB;;}
    break;

  case 102:
#line 606 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSC;;}
    break;

  case 103:
#line 607 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSD;;}
    break;

  case 104:
#line 608 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSE;;}
    break;

  case 105:
#line 609 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSF;;}
    break;

  case 106:
#line 610 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSG;;}
    break;

  case 107:
#line 611 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSH;;}
    break;

  case 108:
#line 612 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSI;;}
    break;

  case 109:
#line 613 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSJ;;}
    break;

  case 110:
#line 614 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSK;;}
    break;

  case 111:
#line 615 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSL;;}
    break;

  case 112:
#line 616 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSM;;}
    break;

  case 113:
#line 617 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSN;;}
    break;

  case 114:
#line 618 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSO;;}
    break;

  case 115:
#line 619 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSP;;}
    break;

  case 116:
#line 620 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSQ;;}
    break;

  case 117:
#line 621 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSR;;}
    break;

  case 118:
#line 622 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSS;;}
    break;

  case 119:
#line 623 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCST;;}
    break;

  case 120:
#line 624 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSU;;}
    break;

  case 121:
#line 625 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSV;;}
    break;

  case 122:
#line 626 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSW;;}
    break;

  case 123:
#line 627 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSX;;}
    break;

  case 124:
#line 628 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSY;;}
    break;

  case 125:
#line 629 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSZ;;}
    break;

  case 126:
#line 630 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS0;;}
    break;

  case 127:
#line 633 "frame/parser.Y"
    {(yyval.integer) = Coord::CANVAS;;}
    break;

  case 128:
#line 634 "frame/parser.Y"
    {(yyval.integer) = Coord::PANNER;;}
    break;

  case 129:
#line 637 "frame/parser.Y"
    {(yyval.integer) = FrScale::LINEARSCALE;;}
    break;

  case 130:
#line 638 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOGSCALE;;}
    break;

  case 131:
#line 639 "frame/parser.Y"
    {(yyval.integer) = FrScale::POWSCALE;;}
    break;

  case 132:
#line 640 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQRTSCALE;;}
    break;

  case 133:
#line 641 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQUAREDSCALE;;}
    break;

  case 134:
#line 642 "frame/parser.Y"
    {(yyval.integer) = FrScale::ASINHSCALE;;}
    break;

  case 135:
#line 643 "frame/parser.Y"
    {(yyval.integer) = FrScale::SINHSCALE;;}
    break;

  case 136:
#line 644 "frame/parser.Y"
    {(yyval.integer) = FrScale::HISTEQUSCALE;;}
    break;

  case 137:
#line 647 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 138:
#line 648 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 139:
#line 649 "frame/parser.Y"
    {(yyval.integer)=FrScale::SAMPLE;;}
    break;

  case 140:
#line 650 "frame/parser.Y"
    {(yyval.integer)=FrScale::DATAMIN;;}
    break;

  case 141:
#line 651 "frame/parser.Y"
    {(yyval.integer)=FrScale::IRAFMIN;;}
    break;

  case 142:
#line 654 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 143:
#line 655 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 144:
#line 656 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4_NO_E;;}
    break;

  case 145:
#line 657 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 146:
#line 658 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 147:
#line 659 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 148:
#line 660 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 149:
#line 661 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::GALACTIC;;}
    break;

  case 150:
#line 662 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::SUPERGALACTIC;;}
    break;

  case 151:
#line 663 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ECLIPTIC;;}
    break;

  case 152:
#line 664 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::HELIOECLIPTIC;;}
    break;

  case 153:
#line 667 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 154:
#line 668 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 155:
#line 669 "frame/parser.Y"
    {(yyval.integer)=Coord::SEXAGESIMAL;;}
    break;

  case 156:
#line 672 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 157:
#line 673 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 158:
#line 674 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCMIN;;}
    break;

  case 159:
#line 675 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCSEC;;}
    break;

  case 160:
#line 678 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 161:
#line 679 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 162:
#line 680 "frame/parser.Y"
    {(yyval.integer) = Base::KEY;;}
    break;

  case 163:
#line 683 "frame/parser.Y"
    {;}
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
#line 688 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 167:
#line 689 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 168:
#line 690 "frame/parser.Y"
    {(yyval.integer) = Base::MASK;;}
    break;

  case 169:
#line 693 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 170:
#line 694 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 171:
#line 695 "frame/parser.Y"
    {(yyval.integer) = Point::BOX;;}
    break;

  case 172:
#line 696 "frame/parser.Y"
    {(yyval.integer) = Point::DIAMOND;;}
    break;

  case 173:
#line 697 "frame/parser.Y"
    {(yyval.integer) = Point::CROSS;;}
    break;

  case 174:
#line 698 "frame/parser.Y"
    {(yyval.integer) = Point::EX;;}
    break;

  case 175:
#line 699 "frame/parser.Y"
    {(yyval.integer) = Point::ARROW;;}
    break;

  case 176:
#line 700 "frame/parser.Y"
    {(yyval.integer) = Point::BOXCIRCLE;;}
    break;

  case 177:
#line 703 "frame/parser.Y"
    {(yyval.integer) = POINTSIZE;;}
    break;

  case 178:
#line 704 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 179:
#line 707 "frame/parser.Y"
    {(yyval.integer) = Marker::PANDA;;}
    break;

  case 180:
#line 708 "frame/parser.Y"
    {(yyval.integer) = Marker::HISTOGRAM;;}
    break;

  case 181:
#line 709 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT2D;;}
    break;

  case 182:
#line 710 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT3D;;}
    break;

  case 183:
#line 711 "frame/parser.Y"
    {(yyval.integer) = Marker::RADIAL;;}
    break;

  case 184:
#line 712 "frame/parser.Y"
    {(yyval.integer) = Marker::STATS;;}
    break;

  case 185:
#line 715 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 186:
#line 716 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 187:
#line 717 "frame/parser.Y"
    {(yyval.integer) = Marker::SUM;;}
    break;

  case 188:
#line 720 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 189:
#line 721 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 190:
#line 722 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 191:
#line 723 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 192:
#line 724 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 193:
#line 725 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 198:
#line 732 "frame/parser.Y"
    {fr->set3dRenderMethodCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 199:
#line 733 "frame/parser.Y"
    {fr->set3dRenderBackgroundCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 200:
#line 734 "frame/parser.Y"
    {fr->set3dScaleCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 201:
#line 735 "frame/parser.Y"
    {fr->set3dPreserveCmd();;}
    break;

  case 202:
#line 737 "frame/parser.Y"
    {/* needed for compatibility with old version of backup */;}
    break;

  case 203:
#line 740 "frame/parser.Y"
    {fr->set3dBorderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 204:
#line 741 "frame/parser.Y"
    {fr->set3dBorderColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 205:
#line 744 "frame/parser.Y"
    {fr->set3dCompassCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 206:
#line 745 "frame/parser.Y"
    {fr->set3dCompassColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 207:
#line 748 "frame/parser.Y"
    {fr->set3dHighliteCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 208:
#line 749 "frame/parser.Y"
    {fr->set3dHighliteColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 209:
#line 752 "frame/parser.Y"
    {fr->set3dViewCmd((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));;}
    break;

  case 210:
#line 754 "frame/parser.Y"
    {fr->set3dViewPointCmd(Vector3d((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 212:
#line 758 "frame/parser.Y"
    {fr->binColsCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 213:
#line 759 "frame/parser.Y"
    {fr->binDepthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 216:
#line 762 "frame/parser.Y"
    {fr->binBufferSizeCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 218:
#line 764 "frame/parser.Y"
    {fr->binFilterCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 219:
#line 767 "frame/parser.Y"
    {fr->binAboutCmd();;}
    break;

  case 220:
#line 768 "frame/parser.Y"
    {fr->binAboutCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 221:
#line 771 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 222:
#line 772 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 223:
#line 774 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(1) - (4)].real)), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 224:
#line 776 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 225:
#line 777 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 226:
#line 778 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 227:
#line 780 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 228:
#line 782 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 229:
#line 785 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::AVERAGE);;}
    break;

  case 230:
#line 786 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::SUM);;}
    break;

  case 231:
#line 789 "frame/parser.Y"
    {fr->binToFitCmd();;}
    break;

  case 232:
#line 791 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (7)].real),(yyvsp[(2) - (7)].real)), (yyvsp[(5) - (7)].str), (yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].str));;}
    break;

  case 233:
#line 794 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (11)].real),(yyvsp[(2) - (11)].real)), (yyvsp[(3) - (11)].integer), Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)), (yyvsp[(8) - (11)].str), (yyvsp[(9) - (11)].str), (yyvsp[(10) - (11)].str), (yyvsp[(11) - (11)].str));;}
    break;

  case 234:
#line 796 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (8)].real),(yyvsp[(2) - (8)].real)), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (yyvsp[(6) - (8)].str), (yyvsp[(7) - (8)].str), (yyvsp[(8) - (8)].str));;}
    break;

  case 235:
#line 799 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (12)].real),(yyvsp[(2) - (12)].real)), (yyvsp[(3) - (12)].integer), Vector((yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real)), Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), 
	    (yyvsp[(9) - (12)].str), (yyvsp[(10) - (12)].str), (yyvsp[(11) - (12)].str), (yyvsp[(12) - (12)].str));;}
    break;

  case 236:
#line 803 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 237:
#line 804 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 239:
#line 808 "frame/parser.Y"
    {fr->blockToFitCmd();;}
    break;

  case 240:
#line 809 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 241:
#line 810 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 245:
#line 816 "frame/parser.Y"
    {fr->clipUserCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 246:
#line 817 "frame/parser.Y"
    {fr->clipUserCmd(NAN,NAN);;}
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
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 539:
#line 1344 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 540:
#line 1345 "frame/parser.Y"
    {fr->hasWCSLinearCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 541:
#line 1346 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 542:
#line 1347 "frame/parser.Y"
    {fr->hasWCS3DCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 543:
#line 1350 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 544:
#line 1351 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 545:
#line 1352 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 548:
#line 1356 "frame/parser.Y"
    {fr->iisSetCmd((const char*)(yyvsp[(2) - (6)].ptr),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 549:
#line 1357 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 550:
#line 1360 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 551:
#line 1363 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 552:
#line 1364 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 553:
#line 1368 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 554:
#line 1370 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 555:
#line 1371 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 562:
#line 1383 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 563:
#line 1385 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 564:
#line 1387 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 565:
#line 1388 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 566:
#line 1390 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 567:
#line 1392 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 568:
#line 1394 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 569:
#line 1396 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 570:
#line 1398 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 572:
#line 1402 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 573:
#line 1403 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 574:
#line 1404 "frame/parser.Y"
    {fr->loadArrayRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 575:
#line 1405 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 576:
#line 1406 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 577:
#line 1408 "frame/parser.Y"
    {fr->loadArrayRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 578:
#line 1409 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 579:
#line 1410 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 580:
#line 1411 "frame/parser.Y"
    {fr->loadArrayRGBCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 581:
#line 1414 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 582:
#line 1418 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 583:
#line 1420 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 584:
#line 1422 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 585:
#line 1424 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 586:
#line 1426 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 587:
#line 1428 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 588:
#line 1430 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 589:
#line 1432 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), 
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 590:
#line 1435 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 591:
#line 1437 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 592:
#line 1439 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 598:
#line 1447 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 599:
#line 1448 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 600:
#line 1449 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 601:
#line 1450 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 602:
#line 1451 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 603:
#line 1452 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 604:
#line 1454 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 605:
#line 1456 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 606:
#line 1457 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 607:
#line 1458 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 608:
#line 1459 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 609:
#line 1462 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 610:
#line 1463 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 611:
#line 1464 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 612:
#line 1465 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 613:
#line 1466 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 614:
#line 1468 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 615:
#line 1469 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 616:
#line 1470 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 617:
#line 1471 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 623:
#line 1482 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS, 
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 624:
#line 1485 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 625:
#line 1488 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 626:
#line 1491 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 627:
#line 1494 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 628:
#line 1497 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 629:
#line 1500 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 630:
#line 1503 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 631:
#line 1506 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 632:
#line 1511 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 633:
#line 1514 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 634:
#line 1517 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 635:
#line 1520 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 636:
#line 1523 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 637:
#line 1526 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 638:
#line 1529 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 639:
#line 1532 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 640:
#line 1535 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 641:
#line 1538 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 642:
#line 1541 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 643:
#line 1546 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 644:
#line 1549 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 645:
#line 1552 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 646:
#line 1555 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 647:
#line 1558 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 648:
#line 1561 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 649:
#line 1564 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 650:
#line 1567 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 651:
#line 1570 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 652:
#line 1575 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 653:
#line 1578 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 654:
#line 1581 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 655:
#line 1584 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 656:
#line 1587 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 657:
#line 1590 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 658:
#line 1593 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 659:
#line 1596 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 660:
#line 1599 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 661:
#line 1602 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 662:
#line 1605 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 663:
#line 1610 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 664:
#line 1611 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 665:
#line 1612 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 666:
#line 1613 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 667:
#line 1614 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 668:
#line 1616 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 669:
#line 1617 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 670:
#line 1618 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 671:
#line 1619 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 672:
#line 1621 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 673:
#line 1622 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 674:
#line 1623 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 675:
#line 1624 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 676:
#line 1625 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 677:
#line 1626 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 678:
#line 1628 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 679:
#line 1630 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 680:
#line 1631 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 681:
#line 1632 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 682:
#line 1633 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 683:
#line 1636 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 684:
#line 1637 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 685:
#line 1638 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 686:
#line 1639 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 687:
#line 1640 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 688:
#line 1642 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 689:
#line 1643 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 690:
#line 1644 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 691:
#line 1645 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 692:
#line 1649 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 693:
#line 1651 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 694:
#line 1652 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 695:
#line 1654 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 696:
#line 1656 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 697:
#line 1658 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 698:
#line 1661 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 699:
#line 1662 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 700:
#line 1665 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 701:
#line 1666 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 702:
#line 1667 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 703:
#line 1670 "frame/parser.Y"
    {
#ifdef MAC_OSX_TK
	  fr->macosxPrintCmd();
#endif
	;}
    break;

  case 704:
#line 1677 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 705:
#line 1678 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 706:
#line 1679 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 707:
#line 1680 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 708:
#line 1681 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 709:
#line 1682 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 710:
#line 1683 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 711:
#line 1687 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 713:
#line 1695 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 714:
#line 1696 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 715:
#line 1698 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 716:
#line 1700 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 717:
#line 1701 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 718:
#line 1702 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 720:
#line 1703 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 721:
#line 1704 "frame/parser.Y"
    {fr->markerDeleteCmd();;}
    break;

  case 722:
#line 1705 "frame/parser.Y"
    {fr->markerDeleteAllCmd();;}
    break;

  case 724:
#line 1707 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 725:
#line 1708 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 726:
#line 1710 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 727:
#line 1712 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 728:
#line 1714 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 729:
#line 1717 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 730:
#line 1719 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 731:
#line 1720 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 732:
#line 1722 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 733:
#line 1725 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 734:
#line 1728 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 735:
#line 1730 "frame/parser.Y"
    {fr->markerBoxFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 736:
#line 1733 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 737:
#line 1736 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 738:
#line 1739 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)), 
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 739:
#line 1742 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 740:
#line 1746 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 741:
#line 1750 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 742:
#line 1755 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 743:
#line 1759 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 744:
#line 1760 "frame/parser.Y"
    {fr->markerCircleFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 745:
#line 1762 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 746:
#line 1763 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 747:
#line 1765 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 748:
#line 1767 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 749:
#line 1769 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 750:
#line 1771 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 751:
#line 1772 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 752:
#line 1774 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 753:
#line 1776 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 754:
#line 1779 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 755:
#line 1783 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 756:
#line 1787 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 757:
#line 1789 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 758:
#line 1791 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 759:
#line 1793 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 760:
#line 1795 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 761:
#line 1797 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 762:
#line 1799 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 763:
#line 1801 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 764:
#line 1803 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 765:
#line 1805 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 766:
#line 1807 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 767:
#line 1809 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 768:
#line 1811 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 769:
#line 1813 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 770:
#line 1814 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 771:
#line 1816 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 772:
#line 1818 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 773:
#line 1819 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 774:
#line 1820 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 775:
#line 1822 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 776:
#line 1824 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 777:
#line 1825 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 778:
#line 1826 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 779:
#line 1827 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 780:
#line 1829 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 781:
#line 1830 "frame/parser.Y"
    {fr->markerEllipseFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 782:
#line 1832 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 783:
#line 1836 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 784:
#line 1839 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 785:
#line 1842 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 786:
#line 1846 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 787:
#line 1850 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 788:
#line 1855 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 789:
#line 1859 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 790:
#line 1860 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 791:
#line 1861 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 792:
#line 1863 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 793:
#line 1865 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(5) - (6)].vector)), Vector((yyvsp[(6) - (6)].vector)), (Coord::InternalSystem)(yyvsp[(4) - (6)].integer));;}
    break;

  case 794:
#line 1867 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 795:
#line 1871 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 796:
#line 1872 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 797:
#line 1873 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 798:
#line 1875 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)), (Coord::InternalSystem)(yyvsp[(4) - (6)].integer));;}
    break;

  case 799:
#line 1877 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 800:
#line 1880 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 801:
#line 1883 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 802:
#line 1886 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 803:
#line 1887 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 804:
#line 1889 "frame/parser.Y"
    {fr->markerPolygonFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 805:
#line 1892 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 806:
#line 1896 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 807:
#line 1898 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 808:
#line 1899 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 809:
#line 1901 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(5) - (6)].vector)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::InternalSystem)(yyvsp[(4) - (6)].integer));;}
    break;

  case 810:
#line 1904 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 811:
#line 1907 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 812:
#line 1910 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 813:
#line 1911 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 814:
#line 1913 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 815:
#line 1914 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 816:
#line 1915 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 817:
#line 1917 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 818:
#line 1918 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 819:
#line 1920 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 820:
#line 1923 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 821:
#line 1926 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 822:
#line 1928 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 823:
#line 1929 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 827:
#line 1934 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 828:
#line 1935 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 829:
#line 1937 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 830:
#line 1939 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 831:
#line 1941 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 832:
#line 1942 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 833:
#line 1944 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer));;}
    break;

  case 834:
#line 1945 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 837:
#line 1950 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 838:
#line 1951 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 839:
#line 1952 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 840:
#line 1953 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 841:
#line 1954 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 842:
#line 1955 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 843:
#line 1956 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 844:
#line 1957 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 845:
#line 1958 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 846:
#line 1959 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 847:
#line 1961 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (5)].str),Vector((yyvsp[(5) - (5)].vector)),(Coord::InternalSystem)(yyvsp[(4) - (5)].integer));;}
    break;

  case 848:
#line 1963 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 849:
#line 1965 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 850:
#line 1966 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 851:
#line 1967 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 852:
#line 1968 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 853:
#line 1969 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 854:
#line 1971 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 855:
#line 1972 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 856:
#line 1973 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 857:
#line 1974 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 858:
#line 1975 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 859:
#line 1977 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 860:
#line 1978 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 861:
#line 1979 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 862:
#line 1980 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 863:
#line 1981 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 864:
#line 1982 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 865:
#line 1985 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 866:
#line 1986 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 867:
#line 1987 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 868:
#line 1988 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 869:
#line 1989 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 870:
#line 1990 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 871:
#line 1991 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 872:
#line 1992 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 873:
#line 1993 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 874:
#line 1994 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 875:
#line 1995 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 876:
#line 1996 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 877:
#line 1997 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 878:
#line 1998 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 879:
#line 1999 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 880:
#line 2000 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 881:
#line 2001 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 882:
#line 2002 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 883:
#line 2003 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 884:
#line 2004 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 885:
#line 2005 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 886:
#line 2008 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 887:
#line 2009 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 888:
#line 2010 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 889:
#line 2011 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 890:
#line 2012 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 891:
#line 2014 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 892:
#line 2024 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 893:
#line 2032 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 894:
#line 2041 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 895:
#line 2049 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 896:
#line 2056 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 897:
#line 2063 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 898:
#line 2071 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 899:
#line 2079 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 900:
#line 2084 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 901:
#line 2089 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 902:
#line 2094 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 903:
#line 2099 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 904:
#line 2104 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 905:
#line 2109 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 906:
#line 2114 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 907:
#line 2123 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer), 
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 908:
#line 2133 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS), 
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 909:
#line 2143 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 910:
#line 2152 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 911:
#line 2160 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont, 
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 912:
#line 2170 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 913:
#line 2180 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 914:
#line 2190 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 915:
#line 2202 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 916:
#line 2211 "frame/parser.Y"
    {fr->createCompositeCmd(
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 918:
#line 2219 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 919:
#line 2221 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 920:
#line 2223 "frame/parser.Y"
    { 
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 921:
#line 2228 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 922:
#line 2231 "frame/parser.Y"
    {(yyval.dash)[0] = (yyvsp[(1) - (2)].integer); (yyval.dash)[1] = (yyvsp[(2) - (2)].integer);;}
    break;

  case 923:
#line 2235 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 924:
#line 2237 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 925:
#line 2238 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 926:
#line 2241 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 927:
#line 2242 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 928:
#line 2243 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 929:
#line 2244 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 930:
#line 2245 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 931:
#line 2246 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 932:
#line 2247 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 934:
#line 2251 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 935:
#line 2252 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 936:
#line 2253 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 937:
#line 2254 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 938:
#line 2255 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 939:
#line 2258 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 940:
#line 2260 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 941:
#line 2262 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 942:
#line 2264 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer),(Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 943:
#line 2266 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 944:
#line 2268 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 945:
#line 2270 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 946:
#line 2271 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 947:
#line 2272 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 948:
#line 2274 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 949:
#line 2276 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 950:
#line 2278 "frame/parser.Y"
    {fr->getMarkerBoxFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 951:
#line 2280 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 952:
#line 2282 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 953:
#line 2283 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 954:
#line 2284 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 955:
#line 2286 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 956:
#line 2288 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 957:
#line 2291 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), 
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 958:
#line 2293 "frame/parser.Y"
    {fr->getMarkerCircleFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 959:
#line 2295 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 960:
#line 2296 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 961:
#line 2297 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 962:
#line 2298 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 963:
#line 2300 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 964:
#line 2301 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 965:
#line 2302 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 966:
#line 2303 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 967:
#line 2304 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 968:
#line 2306 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 969:
#line 2308 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 970:
#line 2309 "frame/parser.Y"
    {fr->getMarkerEllipseFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 971:
#line 2311 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 972:
#line 2313 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 973:
#line 2315 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 974:
#line 2316 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 975:
#line 2318 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 976:
#line 2320 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 977:
#line 2321 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 978:
#line 2322 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 979:
#line 2323 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 980:
#line 2325 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 981:
#line 2327 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 982:
#line 2330 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 983:
#line 2333 "frame/parser.Y"
    {fr->getMarkerPolygonFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 984:
#line 2334 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 985:
#line 2335 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 986:
#line 2337 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 987:
#line 2340 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 988:
#line 2343 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 989:
#line 2344 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 990:
#line 2345 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 991:
#line 2346 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 992:
#line 2348 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 993:
#line 2350 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 994:
#line 2352 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 995:
#line 2353 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 996:
#line 2355 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 997:
#line 2356 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 998:
#line 2357 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 999:
#line 2358 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1000:
#line 2359 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1001:
#line 2361 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1002:
#line 2363 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1003:
#line 2365 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1004:
#line 2367 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1006:
#line 2369 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1007:
#line 2370 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1008:
#line 2372 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1009:
#line 2374 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1010:
#line 2375 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1011:
#line 2376 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1013:
#line 2378 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1015:
#line 2382 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1016:
#line 2383 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1017:
#line 2384 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1018:
#line 2385 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1019:
#line 2386 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1020:
#line 2387 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1021:
#line 2389 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1022:
#line 2390 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1023:
#line 2392 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1024:
#line 2395 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1025:
#line 2396 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1026:
#line 2397 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1027:
#line 2398 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1028:
#line 2401 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1029:
#line 2402 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1030:
#line 2405 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1031:
#line 2406 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1032:
#line 2409 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1033:
#line 2410 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1034:
#line 2413 "frame/parser.Y"
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

  case 1035:
#line 2426 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1036:
#line 2427 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1037:
#line 2431 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1038:
#line 2432 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1039:
#line 2436 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1040:
#line 2441 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer),
	    0, propQMask, propQValue, taglist);;}
    break;

  case 1041:
#line 2446 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer), 
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer),
	    1, propQMask, propQValue, taglist);;}
    break;

  case 1042:
#line 2452 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1043:
#line 2454 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].str),
	    (Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1044:
#line 2457 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1045:
#line 2459 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].integer),
	    (Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1046:
#line 2462 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (yyvsp[(4) - (6)].dash), (yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].str));;}
    break;

  case 1047:
#line 2465 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1048:
#line 2466 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1049:
#line 2467 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1050:
#line 2468 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1051:
#line 2469 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1052:
#line 2470 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1053:
#line 2472 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::InternalSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1054:
#line 2474 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1057:
#line 2481 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1058:
#line 2482 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1059:
#line 2483 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1060:
#line 2484 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1061:
#line 2485 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1062:
#line 2486 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1065:
#line 2491 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1066:
#line 2492 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1067:
#line 2493 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1068:
#line 2494 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1069:
#line 2495 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1070:
#line 2496 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1071:
#line 2497 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1072:
#line 2498 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1073:
#line 2499 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1074:
#line 2500 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1075:
#line 2501 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1078:
#line 2508 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1079:
#line 2509 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1081:
#line 2512 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1082:
#line 2513 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1083:
#line 2514 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1084:
#line 2515 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1085:
#line 2518 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1086:
#line 2519 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1089:
#line 2527 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1090:
#line 2530 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1091:
#line 2531 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1095:
#line 2538 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1096:
#line 2541 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1097:
#line 2545 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1098:
#line 2546 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1099:
#line 2547 "frame/parser.Y"
    {fr->maskMarkCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1100:
#line 2548 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1101:
#line 2551 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1102:
#line 2552 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1103:
#line 2553 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1104:
#line 2554 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1105:
#line 2558 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1106:
#line 2559 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1107:
#line 2561 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1108:
#line 2566 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1110:
#line 2568 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1112:
#line 2570 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1113:
#line 2573 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1114:
#line 2575 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1115:
#line 2580 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1116:
#line 2583 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1117:
#line 2584 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1118:
#line 2585 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1119:
#line 2588 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1120:
#line 2590 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1121:
#line 2594 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1122:
#line 2595 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1123:
#line 2599 "frame/parser.Y"
    {fr->psColorSpaceCmd((Widget::PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1124:
#line 2600 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1125:
#line 2601 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1126:
#line 2602 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  ;}
    break;

  case 1127:
#line 2607 "frame/parser.Y"
    {(yyval.integer) = Widget::BW;;}
    break;

  case 1128:
#line 2608 "frame/parser.Y"
    {(yyval.integer) = Widget::GRAY;;}
    break;

  case 1129:
#line 2609 "frame/parser.Y"
    {(yyval.integer) = Widget::RGB;;}
    break;

  case 1130:
#line 2610 "frame/parser.Y"
    {(yyval.integer) = Widget::CMYK;;}
    break;

  case 1133:
#line 2618 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1134:
#line 2620 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1135:
#line 2621 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1136:
#line 2622 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1137:
#line 2626 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1138:
#line 2627 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1139:
#line 2628 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1140:
#line 2629 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1141:
#line 2632 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1142:
#line 2633 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1143:
#line 2636 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1144:
#line 2637 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1145:
#line 2638 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1146:
#line 2641 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1147:
#line 2642 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1148:
#line 2643 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1149:
#line 2646 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1150:
#line 2647 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (2)].real))));;}
    break;

  case 1152:
#line 2649 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (2)].real))));;}
    break;

  case 1153:
#line 2650 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (3)].real))));;}
    break;

  case 1154:
#line 2653 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1155:
#line 2654 "frame/parser.Y"
    {fr->rotateMotionCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1156:
#line 2655 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1161:
#line 2662 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1162:
#line 2666 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1163:
#line 2668 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1164:
#line 2670 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1166:
#line 2675 "frame/parser.Y"
    {fr->saveArrayRGBCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1167:
#line 2677 "frame/parser.Y"
    {fr->saveArrayRGBCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1168:
#line 2679 "frame/parser.Y"
    {fr->saveArrayRGBCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1178:
#line 2692 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1179:
#line 2693 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1180:
#line 2694 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1181:
#line 2697 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1182:
#line 2698 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1183:
#line 2699 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1184:
#line 2702 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1185:
#line 2703 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1186:
#line 2704 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1187:
#line 2707 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1188:
#line 2708 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1189:
#line 2709 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1191:
#line 2713 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1192:
#line 2714 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1193:
#line 2715 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1194:
#line 2718 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1195:
#line 2719 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1196:
#line 2720 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1197:
#line 2723 "frame/parser.Y"
    {fr->saveFitsRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1198:
#line 2724 "frame/parser.Y"
    {fr->saveFitsRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1199:
#line 2725 "frame/parser.Y"
    {fr->saveFitsRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1200:
#line 2728 "frame/parser.Y"
    {fr->saveFitsRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1201:
#line 2729 "frame/parser.Y"
    {fr->saveFitsRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1202:
#line 2730 "frame/parser.Y"
    {fr->saveFitsRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1203:
#line 2733 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1204:
#line 2734 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1205:
#line 2735 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1206:
#line 2739 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1207:
#line 2741 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1208:
#line 2743 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1209:
#line 2747 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1210:
#line 2751 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1211:
#line 2752 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1212:
#line 2755 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1213:
#line 2756 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1214:
#line 2757 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1215:
#line 2758 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1216:
#line 2761 "frame/parser.Y"
    {fr->updateFitsCmd(0);;}
    break;

  case 1217:
#line 2763 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)),0);;}
    break;

  case 1218:
#line 2764 "frame/parser.Y"
    {fr->updateFitsCmd(1);;}
    break;

  case 1219:
#line 2766 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)),1);;}
    break;

  case 1221:
#line 2770 "frame/parser.Y"
    {fr->sliceCmd(2, (yyvsp[(1) - (1)].integer));;}
    break;

  case 1222:
#line 2771 "frame/parser.Y"
    {fr->sliceCmd(2, (yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1223:
#line 2772 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer), (yyvsp[(2) - (2)].integer));;}
    break;

  case 1224:
#line 2773 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (3)].integer), (yyvsp[(2) - (3)].real), (Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1225:
#line 2776 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1226:
#line 2777 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1227:
#line 2781 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1229:
#line 2783 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1232:
#line 2788 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1233:
#line 2789 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1234:
#line 2790 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1235:
#line 2793 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1236:
#line 2794 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1237:
#line 2795 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1238:
#line 2798 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1239:
#line 2800 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1240:
#line 2805 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (4)].integer), (FitsImage*)(yyvsp[(2) - (4)].ptr), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1241:
#line 2808 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1242:
#line 2815 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1243:
#line 2817 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1244:
#line 2819 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1245:
#line 2824 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1247:
#line 2828 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1248:
#line 2829 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1249:
#line 2830 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1250:
#line 2832 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1251:
#line 2834 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1252:
#line 2839 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 10817 "frame/parser.C"
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


#line 2843 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

