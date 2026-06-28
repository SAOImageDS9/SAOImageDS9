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
     ANGDEGREE = 261,
     ANGRADIAN = 262,
     SEXSTR = 263,
     HMSSTR = 264,
     DMSSTR = 265,
     ABOUT_ = 266,
     AIP_ = 267,
     ALLOC_ = 268,
     ALLOCGZ_ = 269,
     ALIGN_ = 270,
     ALL_ = 271,
     ALT_ = 272,
     AMPLIFIER_ = 273,
     ANALYSIS_ = 274,
     ANGLE_ = 275,
     ANNULUS_ = 276,
     APPEND_ = 277,
     ARCMIN_ = 278,
     ARCSEC_ = 279,
     ARRAY_ = 280,
     ARROW_ = 281,
     ASINH_ = 282,
     AST_ = 283,
     AUTO_ = 284,
     AUX_ = 285,
     AVERAGE_ = 286,
     AXES_ = 287,
     AZIMUTH_ = 288,
     B1950_ = 289,
     BACK_ = 290,
     BACKGROUND_ = 291,
     BASE_ = 292,
     BBOX_ = 293,
     BEGIN_ = 294,
     BG_ = 295,
     BIG_ = 296,
     BIGENDIAN_ = 297,
     BIN_ = 298,
     BITPIX_ = 299,
     BLEND_ = 300,
     BLOCK_ = 301,
     BORDER_ = 302,
     BOTTOM_ = 303,
     BOX_ = 304,
     BOXANNULUS_ = 305,
     BOXCAR_ = 306,
     BOXCIRCLE_ = 307,
     BPANDA_ = 308,
     BUFFER_ = 309,
     BW_ = 310,
     CALLBACK_ = 311,
     CANVAS_ = 312,
     CATALOG_ = 313,
     CELESTIAL_ = 314,
     CENTER_ = 315,
     CENTROID_ = 316,
     CHANNEL_ = 317,
     CIRCLE_ = 318,
     CIAO_ = 319,
     CLEAR_ = 320,
     CLIP_ = 321,
     COLOR_ = 322,
     COLORBURN_ = 323,
     COLORDODGE_ = 324,
     COLORBAR_ = 325,
     COLORMAP_ = 326,
     COLORSCALE_ = 327,
     COLORSPACE_ = 328,
     COLS_ = 329,
     COLUMN_ = 330,
     COMMAND_ = 331,
     COMPASS_ = 332,
     COMPOSITE_ = 333,
     COMPRESS_ = 334,
     CONTOUR_ = 335,
     CONTRAST_ = 336,
     COORDINATES_ = 337,
     COPY_ = 338,
     COUNT_ = 339,
     CPANDA_ = 340,
     CREATE_ = 341,
     CROP_ = 342,
     CROSS_ = 343,
     CROSSHAIR_ = 344,
     CUBE_ = 345,
     CURSOR_ = 346,
     CUT_ = 347,
     CMYK_ = 348,
     DARKEN_ = 349,
     DASH_ = 350,
     DASHLIST_ = 351,
     DATA_ = 352,
     DATAMIN_ = 353,
     DATASEC_ = 354,
     DEBUG_ = 355,
     DEGREES_ = 356,
     DEFAULT_ = 357,
     DELETE_ = 358,
     DEPTH_ = 359,
     DETECTOR_ = 360,
     DIAMOND_ = 361,
     DIFFERENCE_ = 362,
     DIM_ = 363,
     DOWN_ = 364,
     DS9_ = 365,
     EDIT_ = 366,
     ECLIPTIC_ = 367,
     ELEVATION_ = 368,
     ELLIPTIC_ = 369,
     ELLIPSE_ = 370,
     ELLIPSEANNULUS_ = 371,
     END_ = 372,
     ENVI_ = 373,
     EPANDA_ = 374,
     EPSILON_ = 375,
     EQUATORIAL_ = 376,
     ERASE_ = 377,
     EXCLUSION_ = 378,
     EXT_ = 379,
     FADE_ = 380,
     FACTOR_ = 381,
     FALSE_ = 382,
     FILE_ = 383,
     FILL_ = 384,
     FILTER_ = 385,
     FIRST_ = 386,
     FIT_ = 387,
     FITS_ = 388,
     FITSY_ = 389,
     FIXED_ = 390,
     FK4_ = 391,
     FK5_ = 392,
     FONT_ = 393,
     FORMAT_ = 394,
     FOOTPRINT_ = 395,
     FROM_ = 396,
     FRONT_ = 397,
     FULL_ = 398,
     FUNCTION_ = 399,
     GALACTIC_ = 400,
     GAUSSIAN_ = 401,
     GET_ = 402,
     GLOBAL_ = 403,
     GRAPHICS_ = 404,
     GRAY_ = 405,
     GRID_ = 406,
     GZ_ = 407,
     HANDLE_ = 408,
     HARDLIGHT_ = 409,
     HAS_ = 410,
     HEAD_ = 411,
     HEADER_ = 412,
     HEIGHT_ = 413,
     HIDE_ = 414,
     HIGHLITE_ = 415,
     HISTEQU_ = 416,
     HISTOGRAM_ = 417,
     HORIZONTAL_ = 418,
     HUE_ = 419,
     HSV_ = 420,
     HLS_ = 421,
     ICRS_ = 422,
     ID_ = 423,
     IIS_ = 424,
     IMAGE_ = 425,
     INCLUDE_ = 426,
     INCR_ = 427,
     INFO_ = 428,
     ITERATION_ = 429,
     IRAF_ = 430,
     IRAFMIN_ = 431,
     J2000_ = 432,
     KEY_ = 433,
     KEYWORD_ = 434,
     LABEL_ = 435,
     LAYER_ = 436,
     LAYERNO_ = 437,
     LAST_ = 438,
     LENGTH_ = 439,
     LEVEL_ = 440,
     LIGHTEN_ = 441,
     LITTLE_ = 442,
     LITTLEENDIAN_ = 443,
     LINE_ = 444,
     LINEAR_ = 445,
     LIST_ = 446,
     LOAD_ = 447,
     LOCAL_ = 448,
     LOG_ = 449,
     LUMINOSITY_ = 450,
     MACOSX_ = 451,
     MAGNIFIER_ = 452,
     MATCH_ = 453,
     MAP_ = 454,
     MARK_ = 455,
     MARKER_ = 456,
     MASK_ = 457,
     MEDIAN_ = 458,
     MESSAGE_ = 459,
     METHOD_ = 460,
     MINMAX_ = 461,
     MINOR_ = 462,
     MIP_ = 463,
     MMAP_ = 464,
     MMAPINCR_ = 465,
     MOSAIC_ = 466,
     MODE_ = 467,
     MOTION_ = 468,
     MULTICOLOR_ = 469,
     MULTIPLY_ = 470,
     MOVE_ = 471,
     NAME_ = 472,
     NAN_ = 473,
     NATIVE_ = 474,
     NAXES_ = 475,
     NEW_ = 476,
     NEXT_ = 477,
     NO_ = 478,
     NONE_ = 479,
     NONNAN_ = 480,
     NONZERO_ = 481,
     NOW_ = 482,
     NRRD_ = 483,
     NUMBER_ = 484,
     OBJECT_ = 485,
     OFF_ = 486,
     ON_ = 487,
     ONLY_ = 488,
     OPTION_ = 489,
     ORIENT_ = 490,
     OVERLAY_ = 491,
     PAN_ = 492,
     PANNER_ = 493,
     PARSER_ = 494,
     PASTE_ = 495,
     PERF_ = 496,
     PHOTO_ = 497,
     PHYSICAL_ = 498,
     PIXEL_ = 499,
     PLOT2D_ = 500,
     PLOT3D_ = 501,
     POINT_ = 502,
     POINTER_ = 503,
     POLYGON_ = 504,
     POSTSCRIPT_ = 505,
     POW_ = 506,
     PRECISION_ = 507,
     PRINT_ = 508,
     PRESERVE_ = 509,
     PROJECTION_ = 510,
     PROPERTY_ = 511,
     PUBLICATION_ = 512,
     PROS_ = 513,
     QUERY_ = 514,
     RADIAL_ = 515,
     RADIUS_ = 516,
     RANGE_ = 517,
     REGION_ = 518,
     REPLACE_ = 519,
     RESAMPLE_ = 520,
     RESCAN_ = 521,
     RESET_ = 522,
     RESOLUTION_ = 523,
     RGB_ = 524,
     ROOT_ = 525,
     ROTATE_ = 526,
     RULER_ = 527,
     SAMPLE_ = 528,
     SAOIMAGE_ = 529,
     SAOTNG_ = 530,
     SAVE_ = 531,
     SATURATION_ = 532,
     SCALE_ = 533,
     SCAN_ = 534,
     SCIENTIFIC_ = 535,
     SCOPE_ = 536,
     SCREEN_ = 537,
     SEGMENT_ = 538,
     SELECT_ = 539,
     SET_ = 540,
     SEXAGESIMAL_ = 541,
     SHAPE_ = 542,
     SHARED_ = 543,
     SHIFT_ = 544,
     SHMID_ = 545,
     SHOW_ = 546,
     SIGMA_ = 547,
     SINH_ = 548,
     SIZE_ = 549,
     SLICE_ = 550,
     SMMAP_ = 551,
     SMOOTH_ = 552,
     SOFTLIGHT_ = 553,
     SOCKET_ = 554,
     SOCKETGZ_ = 555,
     SOURCE_ = 556,
     SQRT_ = 557,
     SQUARED_ = 558,
     SSHARED_ = 559,
     STATS_ = 560,
     STATUS_ = 561,
     SUM_ = 562,
     SYNC_ = 563,
     SYSTEM_ = 564,
     TABLE_ = 565,
     TAG_ = 566,
     TEMPLATE_ = 567,
     TEXT_ = 568,
     THREADS_ = 569,
     THREED_ = 570,
     THRESHOLD_ = 571,
     THICK_ = 572,
     TOP_ = 573,
     TRANSPARENCY_ = 574,
     TO_ = 575,
     TOGGLE_ = 576,
     TOPHAT_ = 577,
     TRUE_ = 578,
     TYPE_ = 579,
     UNDO_ = 580,
     UNHIGHLITE_ = 581,
     UNLOAD_ = 582,
     UNSELECT_ = 583,
     UPDATE_ = 584,
     UP_ = 585,
     USER_ = 586,
     VALUE_ = 587,
     VAR_ = 588,
     VIEW_ = 589,
     VECTOR_ = 590,
     VERSION_ = 591,
     VERTEX_ = 592,
     VERTICAL_ = 593,
     WARP_ = 594,
     WCS_ = 595,
     WCSA_ = 596,
     WCSB_ = 597,
     WCSC_ = 598,
     WCSD_ = 599,
     WCSE_ = 600,
     WCSF_ = 601,
     WCSG_ = 602,
     WCSH_ = 603,
     WCSI_ = 604,
     WCSJ_ = 605,
     WCSK_ = 606,
     WCSL_ = 607,
     WCSM_ = 608,
     WCSN_ = 609,
     WCSO_ = 610,
     WCSP_ = 611,
     WCSQ_ = 612,
     WCSR_ = 613,
     WCSS_ = 614,
     WCST_ = 615,
     WCSU_ = 616,
     WCSV_ = 617,
     WCSW_ = 618,
     WCSX_ = 619,
     WCSY_ = 620,
     WCSZ_ = 621,
     WCS0_ = 622,
     WFPC2_ = 623,
     WIDTH_ = 624,
     WIN32_ = 625,
     XML_ = 626,
     XY_ = 627,
     YES_ = 628,
     ZERO_ = 629,
     ZMAX_ = 630,
     ZSCALE_ = 631,
     ZOOM_ = 632
   };
#endif
/* Tokens.  */
#define REAL 258
#define INT 259
#define STRING 260
#define ANGDEGREE 261
#define ANGRADIAN 262
#define SEXSTR 263
#define HMSSTR 264
#define DMSSTR 265
#define ABOUT_ 266
#define AIP_ 267
#define ALLOC_ 268
#define ALLOCGZ_ 269
#define ALIGN_ 270
#define ALL_ 271
#define ALT_ 272
#define AMPLIFIER_ 273
#define ANALYSIS_ 274
#define ANGLE_ 275
#define ANNULUS_ 276
#define APPEND_ 277
#define ARCMIN_ 278
#define ARCSEC_ 279
#define ARRAY_ 280
#define ARROW_ 281
#define ASINH_ 282
#define AST_ 283
#define AUTO_ 284
#define AUX_ 285
#define AVERAGE_ 286
#define AXES_ 287
#define AZIMUTH_ 288
#define B1950_ 289
#define BACK_ 290
#define BACKGROUND_ 291
#define BASE_ 292
#define BBOX_ 293
#define BEGIN_ 294
#define BG_ 295
#define BIG_ 296
#define BIGENDIAN_ 297
#define BIN_ 298
#define BITPIX_ 299
#define BLEND_ 300
#define BLOCK_ 301
#define BORDER_ 302
#define BOTTOM_ 303
#define BOX_ 304
#define BOXANNULUS_ 305
#define BOXCAR_ 306
#define BOXCIRCLE_ 307
#define BPANDA_ 308
#define BUFFER_ 309
#define BW_ 310
#define CALLBACK_ 311
#define CANVAS_ 312
#define CATALOG_ 313
#define CELESTIAL_ 314
#define CENTER_ 315
#define CENTROID_ 316
#define CHANNEL_ 317
#define CIRCLE_ 318
#define CIAO_ 319
#define CLEAR_ 320
#define CLIP_ 321
#define COLOR_ 322
#define COLORBURN_ 323
#define COLORDODGE_ 324
#define COLORBAR_ 325
#define COLORMAP_ 326
#define COLORSCALE_ 327
#define COLORSPACE_ 328
#define COLS_ 329
#define COLUMN_ 330
#define COMMAND_ 331
#define COMPASS_ 332
#define COMPOSITE_ 333
#define COMPRESS_ 334
#define CONTOUR_ 335
#define CONTRAST_ 336
#define COORDINATES_ 337
#define COPY_ 338
#define COUNT_ 339
#define CPANDA_ 340
#define CREATE_ 341
#define CROP_ 342
#define CROSS_ 343
#define CROSSHAIR_ 344
#define CUBE_ 345
#define CURSOR_ 346
#define CUT_ 347
#define CMYK_ 348
#define DARKEN_ 349
#define DASH_ 350
#define DASHLIST_ 351
#define DATA_ 352
#define DATAMIN_ 353
#define DATASEC_ 354
#define DEBUG_ 355
#define DEGREES_ 356
#define DEFAULT_ 357
#define DELETE_ 358
#define DEPTH_ 359
#define DETECTOR_ 360
#define DIAMOND_ 361
#define DIFFERENCE_ 362
#define DIM_ 363
#define DOWN_ 364
#define DS9_ 365
#define EDIT_ 366
#define ECLIPTIC_ 367
#define ELEVATION_ 368
#define ELLIPTIC_ 369
#define ELLIPSE_ 370
#define ELLIPSEANNULUS_ 371
#define END_ 372
#define ENVI_ 373
#define EPANDA_ 374
#define EPSILON_ 375
#define EQUATORIAL_ 376
#define ERASE_ 377
#define EXCLUSION_ 378
#define EXT_ 379
#define FADE_ 380
#define FACTOR_ 381
#define FALSE_ 382
#define FILE_ 383
#define FILL_ 384
#define FILTER_ 385
#define FIRST_ 386
#define FIT_ 387
#define FITS_ 388
#define FITSY_ 389
#define FIXED_ 390
#define FK4_ 391
#define FK5_ 392
#define FONT_ 393
#define FORMAT_ 394
#define FOOTPRINT_ 395
#define FROM_ 396
#define FRONT_ 397
#define FULL_ 398
#define FUNCTION_ 399
#define GALACTIC_ 400
#define GAUSSIAN_ 401
#define GET_ 402
#define GLOBAL_ 403
#define GRAPHICS_ 404
#define GRAY_ 405
#define GRID_ 406
#define GZ_ 407
#define HANDLE_ 408
#define HARDLIGHT_ 409
#define HAS_ 410
#define HEAD_ 411
#define HEADER_ 412
#define HEIGHT_ 413
#define HIDE_ 414
#define HIGHLITE_ 415
#define HISTEQU_ 416
#define HISTOGRAM_ 417
#define HORIZONTAL_ 418
#define HUE_ 419
#define HSV_ 420
#define HLS_ 421
#define ICRS_ 422
#define ID_ 423
#define IIS_ 424
#define IMAGE_ 425
#define INCLUDE_ 426
#define INCR_ 427
#define INFO_ 428
#define ITERATION_ 429
#define IRAF_ 430
#define IRAFMIN_ 431
#define J2000_ 432
#define KEY_ 433
#define KEYWORD_ 434
#define LABEL_ 435
#define LAYER_ 436
#define LAYERNO_ 437
#define LAST_ 438
#define LENGTH_ 439
#define LEVEL_ 440
#define LIGHTEN_ 441
#define LITTLE_ 442
#define LITTLEENDIAN_ 443
#define LINE_ 444
#define LINEAR_ 445
#define LIST_ 446
#define LOAD_ 447
#define LOCAL_ 448
#define LOG_ 449
#define LUMINOSITY_ 450
#define MACOSX_ 451
#define MAGNIFIER_ 452
#define MATCH_ 453
#define MAP_ 454
#define MARK_ 455
#define MARKER_ 456
#define MASK_ 457
#define MEDIAN_ 458
#define MESSAGE_ 459
#define METHOD_ 460
#define MINMAX_ 461
#define MINOR_ 462
#define MIP_ 463
#define MMAP_ 464
#define MMAPINCR_ 465
#define MOSAIC_ 466
#define MODE_ 467
#define MOTION_ 468
#define MULTICOLOR_ 469
#define MULTIPLY_ 470
#define MOVE_ 471
#define NAME_ 472
#define NAN_ 473
#define NATIVE_ 474
#define NAXES_ 475
#define NEW_ 476
#define NEXT_ 477
#define NO_ 478
#define NONE_ 479
#define NONNAN_ 480
#define NONZERO_ 481
#define NOW_ 482
#define NRRD_ 483
#define NUMBER_ 484
#define OBJECT_ 485
#define OFF_ 486
#define ON_ 487
#define ONLY_ 488
#define OPTION_ 489
#define ORIENT_ 490
#define OVERLAY_ 491
#define PAN_ 492
#define PANNER_ 493
#define PARSER_ 494
#define PASTE_ 495
#define PERF_ 496
#define PHOTO_ 497
#define PHYSICAL_ 498
#define PIXEL_ 499
#define PLOT2D_ 500
#define PLOT3D_ 501
#define POINT_ 502
#define POINTER_ 503
#define POLYGON_ 504
#define POSTSCRIPT_ 505
#define POW_ 506
#define PRECISION_ 507
#define PRINT_ 508
#define PRESERVE_ 509
#define PROJECTION_ 510
#define PROPERTY_ 511
#define PUBLICATION_ 512
#define PROS_ 513
#define QUERY_ 514
#define RADIAL_ 515
#define RADIUS_ 516
#define RANGE_ 517
#define REGION_ 518
#define REPLACE_ 519
#define RESAMPLE_ 520
#define RESCAN_ 521
#define RESET_ 522
#define RESOLUTION_ 523
#define RGB_ 524
#define ROOT_ 525
#define ROTATE_ 526
#define RULER_ 527
#define SAMPLE_ 528
#define SAOIMAGE_ 529
#define SAOTNG_ 530
#define SAVE_ 531
#define SATURATION_ 532
#define SCALE_ 533
#define SCAN_ 534
#define SCIENTIFIC_ 535
#define SCOPE_ 536
#define SCREEN_ 537
#define SEGMENT_ 538
#define SELECT_ 539
#define SET_ 540
#define SEXAGESIMAL_ 541
#define SHAPE_ 542
#define SHARED_ 543
#define SHIFT_ 544
#define SHMID_ 545
#define SHOW_ 546
#define SIGMA_ 547
#define SINH_ 548
#define SIZE_ 549
#define SLICE_ 550
#define SMMAP_ 551
#define SMOOTH_ 552
#define SOFTLIGHT_ 553
#define SOCKET_ 554
#define SOCKETGZ_ 555
#define SOURCE_ 556
#define SQRT_ 557
#define SQUARED_ 558
#define SSHARED_ 559
#define STATS_ 560
#define STATUS_ 561
#define SUM_ 562
#define SYNC_ 563
#define SYSTEM_ 564
#define TABLE_ 565
#define TAG_ 566
#define TEMPLATE_ 567
#define TEXT_ 568
#define THREADS_ 569
#define THREED_ 570
#define THRESHOLD_ 571
#define THICK_ 572
#define TOP_ 573
#define TRANSPARENCY_ 574
#define TO_ 575
#define TOGGLE_ 576
#define TOPHAT_ 577
#define TRUE_ 578
#define TYPE_ 579
#define UNDO_ 580
#define UNHIGHLITE_ 581
#define UNLOAD_ 582
#define UNSELECT_ 583
#define UPDATE_ 584
#define UP_ 585
#define USER_ 586
#define VALUE_ 587
#define VAR_ 588
#define VIEW_ 589
#define VECTOR_ 590
#define VERSION_ 591
#define VERTEX_ 592
#define VERTICAL_ 593
#define WARP_ 594
#define WCS_ 595
#define WCSA_ 596
#define WCSB_ 597
#define WCSC_ 598
#define WCSD_ 599
#define WCSE_ 600
#define WCSF_ 601
#define WCSG_ 602
#define WCSH_ 603
#define WCSI_ 604
#define WCSJ_ 605
#define WCSK_ 606
#define WCSL_ 607
#define WCSM_ 608
#define WCSN_ 609
#define WCSO_ 610
#define WCSP_ 611
#define WCSQ_ 612
#define WCSR_ 613
#define WCSS_ 614
#define WCST_ 615
#define WCSU_ 616
#define WCSV_ 617
#define WCSW_ 618
#define WCSX_ 619
#define WCSY_ 620
#define WCSZ_ 621
#define WCS0_ 622
#define WFPC2_ 623
#define WIDTH_ 624
#define WIN32_ 625
#define XML_ 626
#define XY_ 627
#define YES_ 628
#define ZERO_ 629
#define ZMAX_ 630
#define ZSCALE_ 631
#define ZOOM_ 632




/* Copy the first part of user declarations.  */
#line 10 "frame/parser.Y"

#define YYDEBUG 1

#include <math.h>
#include <string.h>
#include <iostream>

#include "util.h"
#include "base.h"
#include "frame3d.h"
#include "fitsimage.h"
#include "fitsmask.h"
#include "marker.h"

#undef yyFlexLexer
#define yyFlexLexer frFlexLexer
#include <FlexLexer.h>

extern int frlex(void*, frFlexLexer*);
extern void frerror(Base*, frFlexLexer*, const char*);

static Coord::CoordSystem currentCoord = Coord::IMAGE;
static Coord::SkyFrame currentSky = Coord::ICRS;

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
#line 53 "frame/parser.Y"
{
#define FRBUFSIZE 4096
  char chr;
  char str[FRBUFSIZE];
  int integer;
  double real;
  double vector[3];
  int dash[2];
}
/* Line 193 of yacc.c.  */
#line 911 "frame/parser.C"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 924 "frame/parser.C"

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
#define YYFINAL  399
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5999

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  382
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  237
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1389
/* YYNRULES -- Number of states.  */
#define YYNSTATES  3038

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   632

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
       2,   381,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   379,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   380,   378,
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
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    13,    17,    20,    22,    24,
      27,    31,    34,    37,    40,    43,    46,    49,    52,    55,
      58,    61,    64,    67,    69,    72,    76,    79,    82,    85,
      89,    92,    95,    98,   101,   105,   108,   111,   114,   118,
     121,   124,   127,   130,   133,   136,   138,   142,   145,   148,
     151,   153,   156,   159,   162,   164,   167,   169,   172,   175,
     178,   181,   183,   185,   187,   190,   193,   196,   199,   202,
     205,   208,   211,   214,   217,   219,   221,   223,   225,   227,
     229,   231,   233,   235,   236,   239,   242,   244,   246,   247,
     249,   251,   253,   255,   257,   259,   261,   264,   267,   270,
     273,   275,   277,   279,   281,   283,   285,   287,   289,   291,
     293,   295,   297,   299,   301,   303,   305,   307,   309,   311,
     313,   315,   317,   319,   321,   323,   325,   327,   329,   331,
     333,   335,   337,   339,   341,   343,   344,   346,   348,   350,
     352,   354,   355,   357,   359,   361,   363,   365,   367,   369,
     371,   373,   375,   377,   379,   381,   383,   385,   387,   389,
     391,   393,   395,   397,   399,   401,   403,   405,   407,   409,
     411,   413,   414,   416,   418,   420,   422,   424,   426,   428,
     429,   431,   433,   434,   436,   438,   440,   441,   443,   445,
     446,   448,   450,   451,   453,   455,   456,   458,   460,   462,
     464,   466,   468,   470,   471,   473,   475,   477,   479,   481,
     483,   485,   486,   488,   490,   492,   493,   495,   497,   499,
     501,   503,   506,   509,   512,   515,   518,   521,   524,   527,
     530,   532,   535,   537,   540,   542,   545,   548,   555,   558,
     563,   566,   569,   572,   576,   579,   582,   584,   587,   589,
     592,   597,   603,   606,   610,   616,   623,   625,   627,   629,
     637,   649,   658,   671,   673,   676,   679,   681,   683,   686,
     689,   692,   695,   699,   703,   706,   709,   711,   713,   715,
     717,   719,   721,   723,   726,   729,   732,   734,   738,   741,
     744,   747,   753,   763,   773,   783,   791,   793,   796,   798,
     804,   814,   824,   834,   842,   844,   847,   850,   853,   856,
     859,   862,   876,   890,   903,   916,   918,   919,   921,   923,
     928,   935,   937,   939,   941,   943,   945,   947,   949,   951,
     953,   958,   962,   967,   968,   975,   984,   987,   991,   995,
     999,  1000,  1005,  1010,  1015,  1020,  1024,  1028,  1030,  1034,
    1040,  1045,  1050,  1054,  1057,  1058,  1060,  1062,  1064,  1066,
    1068,  1072,  1073,  1076,  1079,  1082,  1085,  1088,  1091,  1094,
    1097,  1100,  1103,  1106,  1109,  1112,  1115,  1117,  1120,  1123,
    1126,  1131,  1135,  1138,  1141,  1144,  1147,  1150,  1152,  1156,
    1159,  1162,  1165,  1168,  1170,  1173,  1182,  1185,  1187,  1190,
    1192,  1195,  1197,  1202,  1206,  1209,  1211,  1219,  1228,  1236,
    1245,  1247,  1249,  1251,  1254,  1256,  1258,  1261,  1263,  1264,
    1267,  1270,  1272,  1273,  1276,  1279,  1281,  1283,  1286,  1289,
    1292,  1294,  1296,  1298,  1300,  1302,  1304,  1305,  1307,  1310,
    1312,  1317,  1323,  1324,  1327,  1329,  1335,  1338,  1341,  1343,
    1345,  1347,  1350,  1352,  1355,  1357,  1359,  1360,  1362,  1364,
    1365,  1367,  1373,  1380,  1384,  1391,  1395,  1397,  1401,  1403,
    1405,  1407,  1411,  1418,  1426,  1432,  1435,  1437,  1443,  1448,
    1450,  1454,  1455,  1457,  1460,  1462,  1467,  1469,  1472,  1474,
    1477,  1481,  1484,  1486,  1489,  1491,  1496,  1499,  1501,  1503,
    1507,  1509,  1512,  1516,  1519,  1520,  1522,  1524,  1529,  1532,
    1533,  1535,  1539,  1544,  1549,  1550,  1552,  1554,  1556,  1558,
    1561,  1564,  1567,  1570,  1572,  1574,  1576,  1578,  1580,  1582,
    1584,  1585,  1587,  1589,  1591,  1593,  1595,  1597,  1599,  1601,
    1603,  1605,  1607,  1609,  1611,  1613,  1616,  1618,  1621,  1623,
    1626,  1629,  1632,  1635,  1637,  1639,  1641,  1642,  1644,  1645,
    1647,  1648,  1650,  1651,  1653,  1654,  1657,  1660,  1661,  1663,
    1666,  1668,  1675,  1681,  1683,  1685,  1687,  1690,  1693,  1696,
    1698,  1700,  1702,  1704,  1707,  1709,  1711,  1713,  1716,  1718,
    1720,  1722,  1725,  1728,  1731,  1732,  1734,  1735,  1737,  1739,
    1741,  1743,  1745,  1747,  1749,  1751,  1754,  1757,  1760,  1762,
    1765,  1769,  1771,  1774,  1777,  1782,  1788,  1790,  1801,  1803,
    1806,  1810,  1814,  1817,  1820,  1823,  1826,  1829,  1832,  1835,
    1840,  1845,  1850,  1854,  1858,  1864,  1869,  1874,  1879,  1883,
    1887,  1891,  1895,  1899,  1903,  1906,  1909,  1914,  1918,  1922,
    1926,  1930,  1935,  1940,  1945,  1950,  1956,  1961,  1968,  1976,
    1981,  1986,  1992,  1995,  1999,  2003,  2007,  2011,  2015,  2019,
    2023,  2026,  2030,  2034,  2038,  2042,  2047,  2051,  2057,  2064,
    2068,  2072,  2077,  2081,  2085,  2089,  2093,  2097,  2103,  2107,
    2111,  2116,  2120,  2123,  2126,  2128,  2132,  2137,  2142,  2147,
    2152,  2157,  2164,  2169,  2174,  2180,  2185,  2190,  2195,  2200,
    2206,  2211,  2218,  2226,  2231,  2236,  2242,  2248,  2254,  2260,
    2266,  2272,  2280,  2286,  2292,  2299,  2304,  2309,  2314,  2319,
    2324,  2331,  2336,  2341,  2347,  2353,  2359,  2365,  2371,  2378,
    2384,  2392,  2401,  2407,  2413,  2420,  2424,  2428,  2432,  2436,
    2441,  2445,  2451,  2458,  2462,  2466,  2471,  2475,  2479,  2483,
    2487,  2491,  2497,  2501,  2505,  2510,  2515,  2520,  2524,  2530,
    2535,  2540,  2543,  2547,  2554,  2561,  2563,  2565,  2567,  2570,
    2573,  2576,  2580,  2584,  2587,  2600,  2603,  2606,  2608,  2612,
    2617,  2620,  2621,  2625,  2627,  2630,  2633,  2636,  2639,  2642,
    2647,  2652,  2657,  2661,  2666,  2672,  2681,  2688,  2698,  2705,
    2713,  2724,  2736,  2749,  2759,  2765,  2772,  2776,  2782,  2788,
    2795,  2801,  2806,  2816,  2827,  2839,  2849,  2856,  2863,  2870,
    2877,  2884,  2891,  2898,  2905,  2912,  2920,  2928,  2931,  2936,
    2941,  2946,  2951,  2957,  2962,  2967,  2973,  2979,  2983,  2988,
    2993,  2998,  3006,  3016,  3023,  3034,  3046,  3059,  3069,  3073,
    3076,  3080,  3086,  3094,  3099,  3103,  3107,  3114,  3122,  3130,
    3135,  3140,  3150,  3155,  3159,  3164,  3172,  3180,  3183,  3187,
    3191,  3195,  3200,  3203,  3206,  3211,  3222,  3226,  3228,  3232,
    3235,  3238,  3241,  3244,  3248,  3254,  3259,  3265,  3268,  3271,
    3274,  3277,  3281,  3284,  3287,  3290,  3294,  3297,  3301,  3306,
    3310,  3314,  3321,  3326,  3329,  3333,  3336,  3339,  3344,  3348,
    3352,  3355,  3359,  3361,  3364,  3366,  3369,  3372,  3375,  3377,
    3379,  3381,  3383,  3386,  3388,  3391,  3394,  3396,  3399,  3402,
    3404,  3407,  3409,  3411,  3413,  3415,  3417,  3419,  3421,  3423,
    3424,  3426,  3429,  3432,  3435,  3439,  3445,  3453,  3461,  3468,
    3475,  3482,  3489,  3495,  3502,  3509,  3516,  3523,  3530,  3537,
    3544,  3556,  3564,  3572,  3580,  3590,  3600,  3611,  3624,  3637,
    3640,  3643,  3647,  3652,  3657,  3662,  3663,  3665,  3667,  3672,
    3677,  3679,  3681,  3683,  3685,  3687,  3689,  3691,  3693,  3696,
    3698,  3700,  3702,  3706,  3710,  3719,  3726,  3737,  3745,  3753,
    3759,  3762,  3765,  3769,  3774,  3780,  3786,  3792,  3796,  3801,
    3807,  3813,  3819,  3825,  3828,  3832,  3836,  3842,  3846,  3850,
    3854,  3859,  3865,  3871,  3877,  3883,  3887,  3892,  3898,  3904,
    3907,  3910,  3914,  3920,  3927,  3934,  3938,  3942,  3949,  3955,
    3961,  3964,  3968,  3972,  3978,  3985,  3989,  3992,  3995,  3999,
    4002,  4006,  4009,  4013,  4019,  4026,  4029,  4032,  4035,  4037,
    4042,  4047,  4049,  4052,  4055,  4058,  4061,  4064,  4067,  4070,
    4074,  4077,  4081,  4084,  4088,  4090,  4092,  4094,  4096,  4098,
    4099,  4102,  4103,  4106,  4107,  4109,  4110,  4111,  4113,  4115,
    4117,  4119,  4121,  4129,  4138,  4141,  4148,  4151,  4158,  4161,
    4165,  4168,  4170,  4172,  4176,  4180,  4182,  4187,  4190,  4192,
    4196,  4200,  4205,  4209,  4213,  4217,  4219,  4221,  4223,  4225,
    4227,  4229,  4231,  4233,  4235,  4237,  4239,  4241,  4243,  4245,
    4247,  4250,  4251,  4252,  4255,  4262,  4270,  4273,  4275,  4279,
    4281,  4285,  4287,  4289,  4291,  4294,  4297,  4299,  4303,  4304,
    4305,  4308,  4311,  4313,  4317,  4323,  4324,  4326,  4328,  4331,
    4334,  4338,  4341,  4345,  4348,  4352,  4355,  4359,  4361,  4364,
    4366,  4369,  4371,  4374,  4376,  4379,  4381,  4384,  4386,  4389,
    4391,  4394,  4396,  4399,  4402,  4406,  4409,  4412,  4415,  4418,
    4420,  4422,  4424,  4426,  4431,  4434,  4438,  4442,  4445,  4449,
    4452,  4455,  4458,  4462,  4466,  4470,  4473,  4477,  4479,  4483,
    4487,  4489,  4492,  4495,  4498,  4501,  4511,  4518,  4520,  4522,
    4524,  4526,  4529,  4532,  4536,  4540,  4542,  4545,  4549,  4553,
    4555,  4558,  4560,  4562,  4564,  4566,  4568,  4571,  4574,  4579,
    4582,  4585,  4588,  4591,  4594,  4599,  4602,  4605,  4608,  4611,
    4614,  4619,  4621,  4624,  4627,  4630,  4634,  4636,  4638,  4640,
    4643,  4646,  4649,  4652,  4655,  4659,  4663,  4667,  4671,  4675,
    4679,  4681,  4684,  4687,  4690,  4694,  4697,  4701,  4705,  4709,
    4713,  4717,  4721,  4724,  4727,  4730,  4733,  4736,  4739,  4742,
    4745,  4748,  4751,  4754,  4757,  4760,  4763,  4767,  4771,  4775,
    4778,  4781,  4784,  4788,  4792,  4796,  4799,  4802,  4805,  4808,
    4811,  4814,  4818,  4822,  4826,  4829,  4832,  4835,  4838,  4841,
    4844,  4848,  4852,  4856,  4859,  4862,  4865,  4868,  4871,  4874,
    4877,  4880,  4883,  4887,  4891,  4895,  4900,  4907,  4910,  4912,
    4914,  4916,  4918,  4920,  4921,  4927,  4929,  4936,  4940,  4942,
    4945,  4948,  4951,  4955,  4959,  4962,  4965,  4968,  4971,  4974,
    4977,  4981,  4984,  4987,  4991,  4993,  4997,  5002,  5005,  5007,
    5010,  5016,  5023,  5030,  5033,  5035,  5038,  5041,  5047,  5054
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     383,     0,    -1,   100,   385,    -1,    43,   417,    -1,    40,
      67,     5,    -1,    40,    67,   386,    -1,    46,   422,    -1,
      60,    -1,    65,    -1,    66,   424,    -1,    70,   311,     5,
      -1,    71,   429,    -1,    72,   431,    -1,    80,   432,    -1,
      87,   441,    -1,    89,   443,    -1,    90,   444,    -1,    99,
     386,    -1,   125,   446,    -1,   134,   447,    -1,   147,   448,
      -1,   151,   497,    -1,   155,   500,    -1,   159,    -1,   160,
     386,    -1,   160,    67,     5,    -1,   165,   583,    -1,   166,
     582,    -1,   169,   506,    -1,   175,    15,     4,    -1,   192,
     509,    -1,   196,   527,    -1,   197,   528,    -1,   198,   529,
      -1,   201,   545,   530,    -1,   202,   566,    -1,   181,   565,
      -1,   214,   581,    -1,   218,    67,     5,    -1,   235,   567,
      -1,   237,   568,    -1,   238,   571,    -1,   259,    91,    -1,
     252,   573,    -1,   250,   572,    -1,   267,    -1,   263,   545,
     575,    -1,   269,   580,    -1,   271,   584,    -1,   276,   586,
      -1,   291,    -1,   297,   607,    -1,   314,     4,    -1,   315,
     412,    -1,   327,    -1,   329,   609,    -1,   336,    -1,   339,
     611,    -1,   340,   612,    -1,   370,   616,    -1,   377,   617,
      -1,     3,    -1,     4,    -1,   386,    -1,   211,   386,    -1,
     239,   386,    -1,   241,   386,    -1,   340,   386,    -1,    43,
     386,    -1,    46,   386,    -1,    79,   386,    -1,    87,   386,
      -1,   152,   386,    -1,   269,   386,    -1,     4,    -1,   373,
      -1,   378,    -1,   232,    -1,   323,    -1,   223,    -1,   379,
      -1,   231,    -1,   127,    -1,    -1,   270,    37,    -1,   143,
      37,    -1,   270,    -1,   143,    -1,    -1,   389,    -1,   384,
      -1,     6,    -1,     7,    -1,     8,    -1,     9,    -1,    10,
      -1,   390,   390,    -1,   391,   392,    -1,   392,   392,    -1,
     384,   384,    -1,   170,    -1,   243,    -1,   105,    -1,    18,
      -1,   395,    -1,   340,    -1,   341,    -1,   342,    -1,   343,
      -1,   344,    -1,   345,    -1,   346,    -1,   347,    -1,   348,
      -1,   349,    -1,   350,    -1,   351,    -1,   352,    -1,   353,
      -1,   354,    -1,   355,    -1,   356,    -1,   357,    -1,   358,
      -1,   359,    -1,   360,    -1,   361,    -1,   362,    -1,   363,
      -1,   364,    -1,   365,    -1,   366,    -1,   367,    -1,    57,
      -1,   238,    -1,    -1,   374,    -1,   226,    -1,   218,    -1,
     225,    -1,   262,    -1,    -1,   301,    -1,   215,    -1,   282,
      -1,   236,    -1,    94,    -1,   186,    -1,    69,    -1,    68,
      -1,   154,    -1,   298,    -1,   107,    -1,   123,    -1,   164,
      -1,   277,    -1,    67,    -1,   195,    -1,   190,    -1,   194,
      -1,   251,    -1,   302,    -1,   303,    -1,    27,    -1,   293,
      -1,   161,    -1,    29,    -1,   279,    -1,   273,    -1,    98,
      -1,   176,    -1,    -1,   136,    -1,    34,    -1,   137,    -1,
     177,    -1,   167,    -1,   145,    -1,   112,    -1,    -1,   101,
      -1,   286,    -1,    -1,   101,    -1,    23,    -1,    24,    -1,
      -1,   290,    -1,   178,    -1,    -1,    16,    -1,   172,    -1,
      -1,   170,    -1,   202,    -1,    -1,    63,    -1,    49,    -1,
     106,    -1,    88,    -1,   380,    -1,    26,    -1,    52,    -1,
      -1,     4,    -1,    85,    -1,   162,    -1,   245,    -1,   246,
      -1,   260,    -1,   305,    -1,    -1,    31,    -1,   307,    -1,
     203,    -1,    -1,   219,    -1,    41,    -1,    42,    -1,   187,
      -1,   188,    -1,   334,   416,    -1,    47,   413,    -1,    77,
     414,    -1,   160,   415,    -1,   205,   578,    -1,    36,   579,
      -1,   278,   384,    -1,   308,     4,    -1,   316,   384,    -1,
     386,    -1,    67,     5,    -1,   386,    -1,    67,     5,    -1,
     386,    -1,    67,     5,    -1,   384,   384,    -1,   247,   384,
     384,   384,   384,   384,    -1,    11,   418,    -1,    74,     5,
       5,     5,    -1,   104,     4,    -1,   126,   419,    -1,   144,
     420,    -1,    54,   294,     4,    -1,   320,   421,    -1,   130,
       5,    -1,    60,    -1,   384,   384,    -1,   384,    -1,   384,
     384,    -1,   384,    11,   384,   384,    -1,   384,   384,    11,
     384,   384,    -1,   320,   384,    -1,   320,   384,   384,    -1,
     320,   384,    11,   384,   384,    -1,   320,   384,   384,    11,
     384,   384,    -1,    31,    -1,   307,    -1,   132,    -1,   384,
     384,    11,    60,     5,     5,     5,    -1,   384,   384,     4,
     384,   384,    11,    60,     5,     5,     5,     5,    -1,   384,
     384,    11,   384,   384,     5,     5,     5,    -1,   384,   384,
       4,   384,   384,    11,   384,   384,     5,     5,     5,     5,
      -1,   384,    -1,   384,   384,    -1,   320,   423,    -1,   132,
      -1,   384,    -1,   384,   384,    -1,   281,   425,    -1,   212,
     426,    -1,   206,   427,    -1,   331,   384,   384,    -1,   331,
     218,   218,    -1,   376,   428,    -1,   254,   386,    -1,   148,
      -1,   193,    -1,   384,    -1,   206,    -1,   376,    -1,   375,
      -1,   331,    -1,     4,   400,    -1,   212,   400,    -1,   273,
       4,    -1,   266,    -1,   384,     4,     4,    -1,    81,   384,
      -1,   273,     4,    -1,   189,     4,    -1,     4,   384,   384,
       4,     4,    -1,   269,   384,   384,   384,   384,   384,   384,
       4,     4,    -1,   165,   384,   384,   384,   384,   384,   384,
       4,     4,    -1,   166,   384,   384,   384,   384,   384,   384,
       4,     4,    -1,   214,     4,     4,     5,     5,     5,     4,
      -1,    39,    -1,   213,   430,    -1,   117,    -1,     4,   384,
     384,     4,     4,    -1,   269,   384,   384,   384,   384,   384,
     384,     4,     4,    -1,   165,   384,   384,   384,   384,   384,
     384,     4,     4,    -1,   166,   384,   384,   384,   384,   384,
     384,     4,     4,    -1,   214,     4,     4,     5,     5,     5,
       4,    -1,   399,    -1,   194,   384,    -1,    86,   433,    -1,
     103,   434,    -1,   192,   435,    -1,   240,   439,    -1,   276,
     440,    -1,     5,     4,     4,   438,     4,     4,   399,   384,
     436,   437,   384,   384,     5,    -1,     5,     4,     4,   438,
       4,     4,   399,   384,   384,   437,   384,   384,     5,    -1,
       5,     4,     4,   438,     4,     4,   399,   384,   436,   384,
     384,     5,    -1,     5,     4,     4,   438,     4,     4,   399,
     384,   384,   384,   384,     5,    -1,   249,    -1,    -1,    30,
      -1,     5,    -1,     5,     5,     4,   386,    -1,     5,     4,
     386,     5,   394,   401,    -1,   206,    -1,   376,    -1,   375,
      -1,   331,    -1,   148,    -1,   193,    -1,   297,    -1,    46,
      -1,     5,    -1,     5,     5,     4,   386,    -1,     5,   394,
     401,    -1,    30,     5,   394,   401,    -1,    -1,   384,   384,
     384,   384,   394,   401,    -1,    60,   393,   394,   401,   384,
     384,   394,   403,    -1,   315,   442,    -1,    39,   384,   384,
      -1,   213,   384,   384,    -1,   117,   384,   384,    -1,    -1,
     384,   384,   394,   401,    -1,    39,   384,   384,     4,    -1,
     213,   384,   384,     4,    -1,   117,   384,   384,     4,    -1,
     396,   384,   384,    -1,   394,   401,   393,    -1,   386,    -1,
     339,   384,   384,    -1,    39,   213,   396,   384,   384,    -1,
     213,   396,   384,   384,    -1,    39,   213,   394,   393,    -1,
     213,   394,   393,    -1,    32,     4,    -1,    -1,    31,    -1,
     307,    -1,   203,    -1,   384,    -1,    65,    -1,   155,   124,
       5,    -1,    -1,    40,    67,    -1,    43,   451,    -1,    46,
     453,    -1,    66,   454,    -1,    71,   458,    -1,    70,   457,
      -1,    72,   460,    -1,    80,   462,    -1,    82,   465,    -1,
      87,   466,    -1,    89,   467,    -1,    91,   469,    -1,    90,
     468,    -1,    97,   470,    -1,    99,    -1,   133,   474,    -1,
     151,   480,    -1,   160,    67,    -1,   162,     5,     5,     4,
      -1,   163,    92,   449,    -1,   165,   488,    -1,   166,   487,
      -1,   169,   472,    -1,   173,   471,    -1,   175,    15,    -1,
     206,    -1,   201,   545,   539,    -1,   202,   482,    -1,   181,
     481,    -1,   214,   486,    -1,   218,    67,    -1,   235,    -1,
     237,   484,    -1,   244,   310,   396,   384,   384,     4,     4,
       5,    -1,   269,   485,    -1,   271,    -1,   297,   489,    -1,
     314,    -1,   315,   490,    -1,   324,    -1,   332,   396,   384,
     384,    -1,   338,    92,   450,    -1,   340,   495,    -1,   377,
      -1,     5,     5,   384,   384,   396,     4,   445,    -1,     5,
       5,   384,   384,   394,   401,     4,   445,    -1,     5,     5,
     384,   384,   396,     4,   445,    -1,     5,     5,   384,   384,
     394,   401,     4,   445,    -1,   104,    -1,   126,    -1,   144,
      -1,    54,   294,    -1,    91,    -1,   130,    -1,    74,   452,
      -1,   191,    -1,    -1,   206,     5,    -1,   108,     5,    -1,
     126,    -1,    -1,   436,   437,    -1,   384,   437,    -1,   281,
      -1,   212,    -1,   206,   455,    -1,   331,   185,    -1,   376,
     456,    -1,   254,    -1,   212,    -1,   273,    -1,    81,    -1,
     273,    -1,   189,    -1,    -1,   311,    -1,   185,   459,    -1,
       4,    -1,     4,   396,   384,   384,    -1,     4,   384,   384,
     399,   384,    -1,    -1,   185,   461,    -1,   194,    -1,     4,
     384,   384,   399,   384,    -1,   394,   401,    -1,    66,   463,
      -1,    67,    -1,    95,    -1,   185,    -1,   229,   185,    -1,
     205,    -1,    72,   464,    -1,   297,    -1,   369,    -1,    -1,
     212,    -1,   281,    -1,    -1,   194,    -1,   384,   384,   394,
     401,   402,    -1,   396,   384,   384,   394,   401,   402,    -1,
     394,   401,   402,    -1,    60,   394,   401,   402,   394,   403,
      -1,   315,   394,   401,    -1,   396,    -1,   394,   401,   402,
      -1,   306,    -1,    32,    -1,   396,    -1,   394,   401,   402,
      -1,   394,   401,   393,   384,   384,     5,    -1,     4,   394,
     401,   393,   384,   384,     5,    -1,   396,   384,   384,     4,
       4,    -1,     5,   387,    -1,    66,    -1,   396,   384,   384,
       5,   387,    -1,     4,     4,     4,     4,    -1,    91,    -1,
     128,   217,   473,    -1,    -1,     4,    -1,   384,   384,    -1,
     220,    -1,    60,   394,   401,   402,    -1,    84,    -1,   104,
     477,    -1,    44,    -1,   124,   475,    -1,   128,   217,   478,
      -1,   157,   476,    -1,   158,    -1,   230,   217,    -1,   294,
      -1,   294,   394,   401,   403,    -1,   295,   479,    -1,   369,
      -1,     4,    -1,   396,   384,   384,    -1,     4,    -1,   179,
       5,    -1,     4,   179,     5,    -1,   340,     4,    -1,    -1,
       4,    -1,   387,    -1,   387,   396,   384,   384,    -1,   387,
       4,    -1,    -1,     4,    -1,   141,   170,   394,    -1,   141,
     170,     4,   394,    -1,   320,   170,   384,   394,    -1,    -1,
     234,    -1,   333,    -1,    84,    -1,   182,    -1,    67,   483,
      -1,    45,   483,    -1,   319,   483,    -1,   334,   483,    -1,
      67,    -1,   200,    -1,   262,    -1,   309,    -1,   319,    -1,
      84,    -1,    45,    -1,    -1,     4,    -1,   254,    -1,    62,
      -1,   309,    -1,   334,    -1,   309,    -1,    62,    -1,   309,
      -1,   334,    -1,    62,    -1,   309,    -1,   334,    -1,   144,
      -1,   261,    -1,   261,   207,    -1,   292,    -1,   292,   207,
      -1,    20,    -1,   334,   494,    -1,    47,   491,    -1,    77,
     492,    -1,   160,   493,    -1,   205,    -1,    36,    -1,   278,
      -1,    -1,    67,    -1,    -1,    67,    -1,    -1,    67,    -1,
      -1,   247,    -1,    -1,    15,   496,    -1,   217,   395,    -1,
      -1,   248,    -1,    86,   498,    -1,   103,    -1,   394,   401,
     402,   499,     5,     5,    -1,   394,   401,   402,   499,     5,
      -1,    19,    -1,   257,    -1,    18,    -1,    40,    67,    -1,
      43,   501,    -1,    80,   502,    -1,    87,    -1,    98,    -1,
      99,    -1,   105,    -1,   133,   503,    -1,   151,    -1,   169,
      -1,   176,    -1,   201,   504,    -1,   243,    -1,   170,    -1,
     297,    -1,   309,   394,    -1,   340,   505,    -1,    75,     5,
      -1,    -1,    30,    -1,    -1,    43,    -1,    90,    -1,   211,
      -1,   160,    -1,   284,    -1,   240,    -1,   325,    -1,   394,
      -1,    59,   394,    -1,   121,   394,    -1,   190,   394,    -1,
      17,    -1,   315,   394,    -1,   221,     4,     4,    -1,   122,
      -1,   204,     5,    -1,    91,   508,    -1,   285,   128,   217,
     507,    -1,   285,     4,     4,     4,     4,    -1,   329,    -1,
     340,   384,   384,   384,   384,   384,   384,   384,   384,     4,
      -1,     5,    -1,     5,     4,    -1,     4,     4,    57,    -1,
       4,     4,   394,    -1,   212,   386,    -1,    25,   510,    -1,
     118,   512,    -1,   133,   513,    -1,   172,   526,    -1,   228,
     524,    -1,   242,   525,    -1,     5,    13,     5,   406,    -1,
       5,    14,     5,   406,    -1,     5,    62,     5,   406,    -1,
       5,   209,   406,    -1,     5,   210,   406,    -1,     5,   288,
     404,     4,   406,    -1,     5,   299,     4,   406,    -1,     5,
     300,     4,   406,    -1,     5,   333,     5,   406,    -1,   269,
      90,   511,    -1,   166,    90,   511,    -1,   165,    90,   511,
      -1,     5,    13,     5,    -1,     5,    14,     5,    -1,     5,
      62,     5,    -1,     5,   209,    -1,     5,   210,    -1,     5,
     288,   404,     4,    -1,     5,   299,     4,    -1,     5,   300,
       4,    -1,     5,   333,     5,    -1,     5,     5,   296,    -1,
       5,    13,     5,   406,    -1,     5,    14,     5,   406,    -1,
       5,    62,     5,   406,    -1,     5,   209,   405,   406,    -1,
       5,     5,   296,   405,   406,    -1,     5,   210,   405,   406,
      -1,     5,   288,   404,     4,   405,   406,    -1,     5,   304,
     404,     4,     4,   405,   406,    -1,     5,   299,     4,   406,
      -1,     5,   300,     4,   406,    -1,     5,   333,     5,   405,
     406,    -1,   295,   514,    -1,   124,    90,   515,    -1,   269,
     170,   523,    -1,   269,    90,   522,    -1,   166,   170,   523,
      -1,   166,    90,   522,    -1,   165,   170,   523,    -1,   165,
      90,   522,    -1,   211,   516,    -1,     5,    13,     5,    -1,
       5,    14,     5,    -1,     5,    62,     5,    -1,     5,   209,
     405,    -1,     5,     5,   296,   405,    -1,     5,   210,   405,
      -1,     5,   288,   404,     4,   405,    -1,     5,   304,   404,
       4,     4,   405,    -1,     5,   299,     4,    -1,     5,   300,
       4,    -1,     5,   333,     5,   405,    -1,     5,    13,     5,
      -1,     5,    14,     5,    -1,     5,    62,     5,    -1,     5,
     209,   405,    -1,     5,   210,   405,    -1,     5,   288,   404,
       4,   405,    -1,     5,   299,     4,    -1,     5,   300,     4,
      -1,     5,   333,     5,   405,    -1,   170,   175,   517,    -1,
     175,   518,    -1,   170,   519,    -1,   521,    -1,   170,   368,
     520,    -1,     5,    13,     5,   406,    -1,     5,    14,     5,
     406,    -1,     5,    62,     5,   406,    -1,     5,   209,   405,
     406,    -1,     5,   210,   405,   406,    -1,     5,   288,   404,
       4,   405,   406,    -1,     5,   299,     4,   406,    -1,     5,
     300,     4,   406,    -1,     5,   333,     5,   405,   406,    -1,
       5,    13,     5,   406,    -1,     5,    14,     5,   406,    -1,
       5,    62,     5,   406,    -1,     5,   209,   405,   406,    -1,
       5,     5,   296,   405,   406,    -1,     5,   210,   405,   406,
      -1,     5,   288,   404,     4,   405,   406,    -1,     5,   304,
     404,     4,     4,   405,   406,    -1,     5,   299,     4,   406,
      -1,     5,   300,     4,   406,    -1,     5,   333,     5,   405,
     406,    -1,   395,     5,    13,     5,   406,    -1,   395,     5,
      14,     5,   406,    -1,   395,     5,    62,     5,   406,    -1,
     395,     5,   209,   405,   406,    -1,   395,     5,   210,   405,
     406,    -1,   395,     5,   288,   404,     4,   405,   406,    -1,
     395,     5,   299,     4,   406,    -1,   395,     5,   300,     4,
     406,    -1,   395,     5,   333,     5,   405,   406,    -1,     5,
      13,     5,   406,    -1,     5,    14,     5,   406,    -1,     5,
      62,     5,   406,    -1,     5,   209,   405,   406,    -1,     5,
     210,   405,   406,    -1,     5,   288,   404,     4,   405,   406,
      -1,     5,   299,     4,   406,    -1,     5,   300,     4,   406,
      -1,     5,   333,     5,   405,   406,    -1,   395,     5,    13,
       5,   406,    -1,   395,     5,    14,     5,   406,    -1,   395,
       5,    62,     5,   406,    -1,   395,     5,   209,   405,   406,
      -1,   395,     5,     5,   296,   405,   406,    -1,   395,     5,
     210,   405,   406,    -1,   395,     5,   288,   404,     4,   405,
     406,    -1,   395,     5,   304,   404,     4,     4,   405,   406,
      -1,   395,     5,   299,     4,   406,    -1,   395,     5,   300,
       4,   406,    -1,   395,     5,   333,     5,   405,   406,    -1,
       5,    13,     5,    -1,     5,    14,     5,    -1,     5,    62,
       5,    -1,     5,   209,   405,    -1,     5,     5,   296,   405,
      -1,     5,   210,   405,    -1,     5,   288,   404,     4,   405,
      -1,     5,   304,   404,     4,     4,   405,    -1,     5,   299,
       4,    -1,     5,   300,     4,    -1,     5,   333,     5,   405,
      -1,     5,    13,     5,    -1,     5,    14,     5,    -1,     5,
      62,     5,    -1,     5,   209,   405,    -1,     5,   210,   405,
      -1,     5,   288,   404,     4,   405,    -1,     5,   299,     4,
      -1,     5,   300,     4,    -1,     5,   333,     5,   405,    -1,
       5,    13,     5,   406,    -1,     5,    62,     5,   406,    -1,
       5,   209,   406,    -1,     5,   288,   404,     4,   406,    -1,
       5,   299,     4,   406,    -1,     5,   333,     5,   406,    -1,
       5,     5,    -1,   295,     5,     5,    -1,    97,     4,     4,
       4,     4,     4,    -1,   206,     4,     4,     4,     4,     4,
      -1,   117,    -1,   253,    -1,   386,    -1,   149,   386,    -1,
      91,   386,    -1,    67,     5,    -1,     5,     4,     4,    -1,
     329,   384,   384,    -1,   377,   384,    -1,     5,     5,   395,
     401,     5,     5,   395,   401,   384,   395,   403,     5,    -1,
      61,   533,    -1,    67,     5,    -1,    83,    -1,    76,   538,
       5,    -1,    76,   538,   333,     5,    -1,    78,   103,    -1,
      -1,    86,   531,   534,    -1,    92,    -1,   103,   536,    -1,
     111,   537,    -1,   120,     4,    -1,   138,     5,    -1,   160,
      16,    -1,   160,   233,   384,   384,    -1,   160,   321,   384,
     384,    -1,     4,    19,   409,   386,    -1,     4,    20,   389,
      -1,     4,    20,   389,   396,    -1,     4,    20,   389,   394,
     401,    -1,     4,    21,   261,   384,   384,     4,   394,   403,
      -1,     4,    21,   261,     5,   394,   403,    -1,     4,    50,
     261,   384,   384,   384,     4,   394,   403,    -1,     4,    50,
     261,     5,   394,   403,    -1,     4,    49,   261,   384,   384,
     394,   403,    -1,     4,    53,   111,   389,   389,     4,   384,
     384,   384,     4,    -1,     4,    53,   111,   389,   389,     4,
     384,   384,   384,     4,   396,    -1,     4,    53,   111,   389,
     389,     4,   384,   384,   384,     4,   394,   401,    -1,     4,
      53,   111,     5,     5,   394,   401,   394,   403,    -1,     4,
      56,   532,     5,     5,    -1,     4,    63,   261,   384,   394,
     403,    -1,     4,    67,     5,    -1,     4,    77,    26,   386,
     386,    -1,     4,    77,   180,     5,     5,    -1,     4,    77,
     261,   384,   394,   403,    -1,     4,    77,   309,   394,   401,
      -1,     4,    78,   148,   386,    -1,     4,    85,   111,   389,
     389,     4,   384,   384,     4,    -1,     4,    85,   111,   389,
     389,     4,   384,   384,     4,   396,    -1,     4,    85,   111,
     389,   389,     4,   384,   384,     4,   394,   401,    -1,     4,
      85,   111,     5,     5,   394,   401,   394,   403,    -1,     4,
      86,    21,   261,   384,   384,    -1,     4,    86,    50,   261,
     384,   384,    -1,     4,    86,    53,    20,   384,   384,    -1,
       4,    86,    53,   261,   384,   384,    -1,     4,    86,   116,
     261,   384,   384,    -1,     4,    86,   119,    20,   384,   384,
      -1,     4,    86,   119,   261,   384,   384,    -1,     4,    86,
      85,    20,   384,   384,    -1,     4,    86,    85,   261,   384,
     384,    -1,     4,    86,   249,   337,     4,   384,   384,    -1,
       4,    86,   283,   337,     4,   384,   384,    -1,     4,   103,
      -1,     4,   103,    21,     4,    -1,     4,   103,    50,     4,
      -1,     4,   103,    53,     4,    -1,     4,   103,   116,     4,
      -1,     4,   103,    56,   532,     5,    -1,     4,   103,   119,
       4,    -1,     4,   103,    85,     4,    -1,     4,   103,   249,
     337,     4,    -1,     4,   103,   283,   337,     4,    -1,     4,
     103,   311,    -1,     4,   103,   311,     5,    -1,     4,   103,
     311,     4,    -1,     4,   111,    39,     4,    -1,     4,   115,
     261,   384,   384,   394,   403,    -1,     4,   116,   261,   384,
     384,   384,     4,   394,   403,    -1,     4,   116,   261,     5,
     394,   403,    -1,     4,   119,   111,   389,   389,     4,   384,
     384,   384,     4,    -1,     4,   119,   111,   389,   389,     4,
     384,   384,   384,     4,   396,    -1,     4,   119,   111,   389,
     389,     4,   384,   384,   384,     4,   394,   401,    -1,     4,
     119,   111,     5,     5,   394,   401,   394,   403,    -1,     4,
     138,     5,    -1,     4,   160,    -1,     4,   160,   233,    -1,
       4,   189,    26,   386,   386,    -1,     4,   189,   247,   394,
     401,   393,   393,    -1,     4,   216,   384,   384,    -1,     4,
     216,   142,    -1,     4,   216,    35,    -1,     4,   216,   320,
     394,   401,   393,    -1,     4,   249,   267,   384,   384,   394,
     403,    -1,     4,   283,   267,   384,   384,   394,   403,    -1,
       4,   247,   287,   407,    -1,     4,   247,   294,     4,    -1,
       4,   255,   394,   401,   393,   393,   384,   394,   403,    -1,
       4,   256,   551,   386,    -1,     4,   271,    39,    -1,     4,
     272,   139,     5,    -1,     4,   272,   247,   394,   401,   393,
     393,    -1,     4,   272,   309,   394,   401,   394,   403,    -1,
       4,   284,    -1,     4,   284,   233,    -1,     4,   311,     5,
      -1,     4,   313,     5,    -1,     4,   313,   271,   386,    -1,
       4,   326,    -1,     4,   328,    -1,     4,   335,    26,   386,
      -1,     4,   335,   247,   394,   401,   393,   394,   403,   384,
     389,    -1,     4,   369,     4,    -1,   178,    -1,   178,   384,
     384,    -1,   191,   546,    -1,   192,   547,    -1,   216,   548,
      -1,   254,   386,    -1,   256,   551,   386,    -1,   256,   551,
     386,   384,   384,    -1,   271,    39,   384,   384,    -1,   271,
     213,   384,   384,     4,    -1,   271,   117,    -1,   276,   555,
      -1,   284,   556,    -1,   291,   557,    -1,     5,    67,     5,
      -1,     5,    83,    -1,     5,   103,    -1,     5,    92,    -1,
       5,   138,     5,    -1,     5,   160,    -1,     5,   160,   233,
      -1,     5,   216,   384,   384,    -1,     5,   216,   142,    -1,
       5,   216,    35,    -1,     5,   216,   320,   394,   401,   393,
      -1,     5,   256,   551,   386,    -1,     5,   284,    -1,     5,
     284,   233,    -1,     5,   326,    -1,     5,   328,    -1,   311,
     111,     5,     5,    -1,   311,   103,     5,    -1,   311,   103,
      16,    -1,   311,     5,    -1,   311,   329,     5,    -1,   240,
      -1,   240,   394,    -1,   325,    -1,   326,    16,    -1,   328,
      16,    -1,   369,     4,    -1,   284,    -1,   328,    -1,   160,
      -1,   326,    -1,    39,   216,    -1,   216,    -1,   117,   216,
      -1,    39,   111,    -1,   111,    -1,   117,   111,    -1,    39,
     271,    -1,   271,    -1,   117,   271,    -1,   103,    -1,   313,
      -1,    67,    -1,   369,    -1,   256,    -1,   138,    -1,   178,
      -1,   329,    -1,    -1,     4,    -1,    29,   386,    -1,   261,
     384,    -1,   174,     4,    -1,   234,     4,   384,    -1,    63,
     384,   384,   384,   552,    -1,   115,   384,   384,   384,   384,
     388,   552,    -1,    49,   384,   384,   384,   384,   388,   552,
      -1,   249,   384,   384,   384,   384,   552,    -1,   283,   384,
     384,   384,   384,   552,    -1,   189,   384,   384,   384,   384,
     552,    -1,   335,   384,   384,   384,   384,   552,    -1,   313,
     384,   384,   388,   552,    -1,    63,   247,   384,   384,   408,
     552,    -1,    49,   247,   384,   384,   408,   552,    -1,   106,
     247,   384,   384,   408,   552,    -1,    88,   247,   384,   384,
     408,   552,    -1,   380,   247,   384,   384,   408,   552,    -1,
      26,   247,   384,   384,   408,   552,    -1,    52,   247,   384,
     384,   408,   552,    -1,   272,   384,   384,   384,   384,   394,
     401,   394,   403,     5,   552,    -1,    77,   384,   384,   384,
     394,   401,   552,    -1,   255,   384,   384,   384,   384,   384,
     552,    -1,    21,   384,   384,   384,   384,     4,   552,    -1,
     116,   384,   384,   384,   384,   384,     4,   388,   552,    -1,
      50,   384,   384,   384,   384,   384,     4,   388,   552,    -1,
      85,   384,   384,   389,   389,     4,   384,   384,     4,   552,
      -1,   119,   384,   384,   389,   389,     4,   384,   384,   384,
       4,   388,   552,    -1,    53,   384,   384,   389,   389,     4,
     384,   384,   384,     4,   388,   552,    -1,    78,   552,    -1,
     312,   535,    -1,     5,   384,   384,    -1,   333,     5,   384,
     384,    -1,   384,   384,   333,     5,    -1,     5,   394,   401,
     393,    -1,    -1,   284,    -1,    16,    -1,    39,   384,   384,
       4,    -1,   213,   384,   384,     4,    -1,   117,    -1,   110,
      -1,   371,    -1,    64,    -1,   275,    -1,   274,    -1,   258,
      -1,   372,    -1,    61,   540,    -1,    67,    -1,   138,    -1,
     120,    -1,   153,   384,   384,    -1,   168,   384,   384,    -1,
       4,    19,    85,     5,     5,     5,   394,     4,    -1,     4,
      19,   162,     5,     5,     4,    -1,     4,    19,   245,     5,
       5,     5,     5,   394,   401,   410,    -1,     4,    19,   246,
       5,     5,   394,   410,    -1,     4,    19,   260,     5,     5,
       5,   394,    -1,     4,    19,   305,   394,   401,    -1,   168,
      16,    -1,     4,    20,    -1,     4,    20,   396,    -1,     4,
      20,   394,   401,    -1,     4,    21,   261,   394,   403,    -1,
       4,    50,   261,   394,   403,    -1,     4,    49,   261,   394,
     403,    -1,     4,    53,    20,    -1,     4,    53,    20,   396,
      -1,     4,    53,    20,   394,   401,    -1,     4,    53,   261,
     394,   403,    -1,     4,    60,   394,   401,   402,    -1,     4,
      63,   261,   394,   403,    -1,     4,    67,    -1,     4,    77,
      26,    -1,     4,    77,   180,    -1,     4,    77,   261,   394,
     403,    -1,     4,    77,   309,    -1,     4,    78,   148,    -1,
       4,    85,    20,    -1,     4,    85,    20,   396,    -1,     4,
      85,    20,   394,   401,    -1,     4,    85,   261,   394,   403,
      -1,     4,   115,   261,   394,   403,    -1,     4,   116,   261,
     394,   403,    -1,     4,   119,    20,    -1,     4,   119,    20,
     396,    -1,     4,   119,    20,   394,   401,    -1,     4,   119,
     261,   394,   403,    -1,     4,   138,    -1,     4,   160,    -1,
       4,   189,    26,    -1,     4,   189,   184,   394,   403,    -1,
       4,   189,   247,   394,   401,   402,    -1,     4,   199,   184,
     384,   394,   403,    -1,     4,   247,   287,    -1,     4,   247,
     294,    -1,     4,   255,   247,   394,   401,   402,    -1,     4,
     255,   184,   394,   403,    -1,     4,   255,   317,   394,   403,
      -1,     4,   256,    -1,     4,   256,   551,    -1,     4,   272,
     139,    -1,     4,   272,   184,   394,   403,    -1,     4,   272,
     247,   394,   401,   402,    -1,     4,   272,   309,    -1,     4,
     284,    -1,     4,   311,    -1,     4,   311,     4,    -1,     4,
     313,    -1,     4,   313,   271,    -1,     4,   324,    -1,     4,
     335,    26,    -1,     4,   335,   184,   394,   403,    -1,     4,
     335,   247,   394,   401,   402,    -1,     4,   369,    -1,   160,
     541,    -1,   160,   229,    -1,   229,    -1,   249,   283,   384,
     384,    -1,   283,   283,   384,   384,    -1,   254,    -1,   256,
     551,    -1,   284,   542,    -1,   284,   229,    -1,   291,   543,
      -1,     5,    67,    -1,     5,   138,    -1,     5,   168,    -1,
       5,   256,   551,    -1,     5,   311,    -1,     5,   311,   229,
      -1,   311,    16,    -1,   311,   102,   217,    -1,   369,    -1,
      29,    -1,   261,    -1,   174,    -1,   234,    -1,    -1,   384,
     384,    -1,    -1,   384,   384,    -1,    -1,   313,    -1,    -1,
      -1,   248,    -1,   263,    -1,   331,    -1,    58,    -1,   140,
      -1,   538,   394,   401,   402,   386,   553,   560,    -1,   284,
     538,   394,   401,   402,   386,   553,   560,    -1,   538,     5,
      -1,   538,     5,     4,     5,   394,   401,    -1,   538,     4,
      -1,   538,     4,     4,     5,   394,   401,    -1,   133,     5,
      -1,   133,     5,     5,    -1,   384,   384,    -1,   142,    -1,
      35,    -1,    39,   384,   384,    -1,   213,   384,   384,    -1,
     117,    -1,   320,   394,   401,   393,    -1,   549,   550,    -1,
     550,    -1,   551,   381,   386,    -1,    67,   381,     5,    -1,
      96,   381,     4,     4,    -1,   369,   381,     4,    -1,   138,
     381,     5,    -1,   313,   381,     5,    -1,   563,    -1,   564,
      -1,   224,    -1,   284,    -1,   160,    -1,    95,    -1,   135,
      -1,   111,    -1,   216,    -1,   271,    -1,   103,    -1,   171,
      -1,   301,    -1,   129,    -1,   544,    -1,   544,   549,    -1,
      -1,    -1,   554,   558,    -1,     5,   538,   394,   401,   402,
     386,    -1,   284,     5,   538,   394,   401,   402,   386,    -1,
     312,     5,    -1,    16,    -1,   233,   384,   384,    -1,   321,
      -1,   321,   384,   384,    -1,   131,    -1,   183,    -1,   386,
      -1,   313,   386,    -1,   558,   559,    -1,   559,    -1,   551,
     381,   386,    -1,    -1,    -1,   561,   562,    -1,   562,   563,
      -1,   563,    -1,   311,   381,     5,    -1,    56,   381,   532,
       5,     5,    -1,    -1,    86,    -1,     4,    -1,   182,     4,
      -1,    67,     5,    -1,     4,    67,     5,    -1,    45,   398,
      -1,     4,    45,   398,    -1,   319,   384,    -1,     4,   319,
     384,    -1,   334,   386,    -1,     4,   334,   386,    -1,   291,
      -1,     4,   291,    -1,   159,    -1,     4,   159,    -1,   103,
      -1,     4,   103,    -1,   330,    -1,     4,   330,    -1,   109,
      -1,     4,   109,    -1,   318,    -1,     4,   318,    -1,    48,
      -1,     4,    48,    -1,    65,    -1,    67,     5,    -1,   200,
     397,    -1,   262,   384,   384,    -1,   309,   394,    -1,   319,
     384,    -1,    45,   398,    -1,   200,     4,    -1,   380,    -1,
     378,    -1,   372,    -1,   224,    -1,   384,   384,   384,   384,
      -1,   384,   384,    -1,   396,   384,   384,    -1,   394,   401,
     393,    -1,   320,   569,    -1,    38,   384,   384,    -1,   213,
     570,    -1,   254,   386,    -1,   384,   384,    -1,   396,   384,
     384,    -1,   394,   401,   393,    -1,    39,   384,   384,    -1,
     384,   384,    -1,   117,   384,   384,    -1,   386,    -1,   340,
     395,   401,    -1,     5,     4,     4,    -1,   329,    -1,    73,
     574,    -1,   185,     4,    -1,   268,     4,    -1,   278,   384,
      -1,     4,     4,     4,     4,     4,     4,     4,     4,     4,
      -1,     4,     4,     4,     4,     4,     4,    -1,    55,    -1,
     150,    -1,   269,    -1,    93,    -1,   160,   576,    -1,   284,
     577,    -1,    39,   384,   384,    -1,   213,   384,   384,    -1,
     117,    -1,   289,   117,    -1,    39,   384,   384,    -1,   213,
     384,   384,    -1,   117,    -1,   289,   117,    -1,   208,    -1,
      12,    -1,   224,    -1,    33,    -1,   113,    -1,    62,     5,
      -1,   309,   394,    -1,   334,     4,     4,     4,    -1,   309,
     394,    -1,    62,     5,    -1,    62,   164,    -1,    62,   277,
      -1,   309,   394,    -1,   334,     4,     4,     4,    -1,    62,
       5,    -1,    62,   164,    -1,    62,   277,    -1,    62,   332,
      -1,   309,   394,    -1,   334,     4,     4,     4,    -1,   384,
      -1,   384,   101,    -1,   213,   585,    -1,   320,   384,    -1,
     320,   384,   101,    -1,    39,    -1,   384,    -1,   117,    -1,
      25,   587,    -1,   133,   588,    -1,   228,   605,    -1,   118,
     606,    -1,   242,     5,    -1,   128,     5,   411,    -1,    62,
       5,   411,    -1,   299,     4,   411,    -1,   269,    90,   595,
      -1,   166,    90,   598,    -1,   165,    90,   601,    -1,   589,
      -1,   170,   589,    -1,   310,   590,    -1,   295,   591,    -1,
     124,    90,   592,    -1,   211,   593,    -1,   269,   170,   596,
      -1,   269,    90,   597,    -1,   166,   170,   599,    -1,   166,
      90,   600,    -1,   165,   170,   602,    -1,   165,    90,   603,
      -1,   265,   604,    -1,   128,     5,    -1,    62,     5,    -1,
     299,     4,    -1,   128,     5,    -1,    62,     5,    -1,   299,
       4,    -1,   128,     5,    -1,    62,     5,    -1,   299,     4,
      -1,   128,     5,    -1,    62,     5,    -1,   299,     4,    -1,
     170,   594,    -1,   128,     5,     4,    -1,    62,     5,     4,
      -1,   299,     4,     4,    -1,   128,     5,    -1,    62,     5,
      -1,   299,     4,    -1,   128,     5,   411,    -1,    62,     5,
     411,    -1,   299,     4,   411,    -1,   128,     5,    -1,    62,
       5,    -1,   299,     4,    -1,   128,     5,    -1,    62,     5,
      -1,   299,     4,    -1,   128,     5,   411,    -1,    62,     5,
     411,    -1,   299,     4,   411,    -1,   128,     5,    -1,    62,
       5,    -1,   299,     4,    -1,   128,     5,    -1,    62,     5,
      -1,   299,     4,    -1,   128,     5,   411,    -1,    62,     5,
     411,    -1,   299,     4,   411,    -1,   128,     5,    -1,    62,
       5,    -1,   299,     4,    -1,   128,     5,    -1,    62,     5,
      -1,   299,     4,    -1,   128,     5,    -1,    62,     5,    -1,
     299,     4,    -1,   128,     5,   411,    -1,    62,     5,   411,
      -1,   299,     4,   411,    -1,   128,     5,     5,   411,    -1,
     608,     4,     4,   384,   384,   389,    -1,   608,     4,    -1,
     103,    -1,    51,    -1,   322,    -1,   146,    -1,   114,    -1,
      -1,     4,   384,   384,   384,   384,    -1,   227,    -1,   227,
       4,   384,   384,   384,   384,    -1,   133,   295,   610,    -1,
       4,    -1,     4,     4,    -1,   384,   394,    -1,   384,   384,
      -1,   320,   384,   384,    -1,   395,   401,   402,    -1,    15,
     615,    -1,   267,     4,    -1,   264,   614,    -1,    22,   613,
      -1,     4,     4,    -1,     4,     5,    -1,   313,     4,     5,
      -1,     4,     4,    -1,     4,     5,    -1,   313,     4,     5,
      -1,     4,    -1,     4,   395,   401,    -1,   320,     4,   395,
     401,    -1,   248,    65,    -1,   253,    -1,   384,   384,    -1,
     384,   384,    11,   384,   384,    -1,   384,   384,    11,   396,
     384,   384,    -1,   384,   384,    11,   394,   401,   393,    -1,
     320,   618,    -1,   132,    -1,   132,   384,    -1,   384,   384,
      -1,   384,   384,    11,   384,   384,    -1,   384,   384,    11,
     396,   384,   384,    -1,   384,   384,    11,   394,   401,   393,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   487,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     545,   548,   549,   552,   553,   554,   555,   556,   557,   558,
     559,   560,   561,   562,   565,   567,   568,   569,   570,   572,
     573,   574,   575,   578,   579,   580,   581,   582,   585,   586,
     589,   590,   591,   594,   597,   600,   603,   615,   622,   629,
     637,   638,   639,   640,   641,   644,   645,   646,   647,   648,
     649,   650,   651,   652,   653,   654,   655,   656,   657,   658,
     659,   660,   661,   662,   663,   664,   665,   666,   667,   668,
     669,   670,   671,   674,   675,   678,   679,   680,   681,   682,
     683,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,   701,   702,   705,   706,
     707,   708,   709,   710,   711,   712,   715,   716,   717,   718,
     719,   722,   723,   724,   725,   726,   727,   728,   729,   732,
     733,   734,   737,   738,   739,   740,   743,   744,   745,   748,
     749,   750,   753,   754,   755,   758,   759,   760,   761,   762,
     763,   764,   765,   768,   769,   772,   773,   774,   775,   776,
     777,   780,   781,   782,   783,   786,   787,   788,   789,   790,
     791,   794,   795,   796,   797,   798,   799,   800,   801,   802,
     806,   807,   810,   811,   814,   815,   818,   819,   823,   824,
     825,   826,   827,   828,   829,   830,   833,   834,   837,   838,
     839,   841,   843,   844,   845,   847,   851,   852,   855,   856,
     858,   861,   863,   869,   870,   871,   874,   875,   876,   879,
     880,   881,   882,   883,   884,   885,   891,   892,   895,   896,
     897,   898,   899,   902,   903,   904,   905,   908,   909,   914,
     919,   926,   928,   930,   932,   934,   936,   937,   938,   941,
     943,   945,   947,   949,   952,   953,   956,   957,   958,   959,
     960,   963,   966,   969,   975,   981,   984,   985,   988,   989,
     990,   997,   998,   999,  1000,  1003,  1004,  1007,  1008,  1011,
    1012,  1015,  1017,  1021,  1022,  1025,  1027,  1028,  1029,  1030,
    1033,  1034,  1036,  1037,  1038,  1041,  1043,  1045,  1046,  1048,
    1050,  1052,  1054,  1058,  1061,  1062,  1063,  1064,  1067,  1068,
    1071,  1074,  1075,  1076,  1077,  1078,  1079,  1080,  1081,  1082,
    1083,  1084,  1085,  1086,  1087,  1088,  1089,  1090,  1091,  1092,
    1093,  1094,  1095,  1096,  1097,  1098,  1099,  1100,  1101,  1102,
    1103,  1104,  1105,  1106,  1107,  1108,  1110,  1111,  1112,  1113,
    1114,  1115,  1116,  1118,  1119,  1120,  1123,  1125,  1129,  1131,
    1135,  1136,  1137,  1138,  1139,  1140,  1141,  1142,  1145,  1146,
    1147,  1150,  1153,  1154,  1156,  1158,  1159,  1160,  1161,  1162,
    1163,  1170,  1171,  1174,  1175,  1176,  1179,  1180,  1183,  1186,
    1187,  1189,  1193,  1194,  1195,  1198,  1202,  1204,  1205,  1206,
    1207,  1208,  1209,  1210,  1211,  1212,  1215,  1216,  1217,  1220,
    1221,  1224,  1226,  1234,  1236,  1238,  1242,  1243,  1245,  1248,
    1251,  1252,  1256,  1258,  1261,  1266,  1267,  1268,  1272,  1273,
    1274,  1277,  1278,  1279,  1282,  1283,  1285,  1286,  1287,  1288,
    1289,  1290,  1291,  1292,  1293,  1294,  1296,  1297,  1300,  1301,
    1304,  1305,  1306,  1307,  1310,  1311,  1314,  1316,  1319,  1323,
    1324,  1325,  1327,  1329,  1333,  1334,  1335,  1338,  1339,  1340,
    1341,  1342,  1343,  1346,  1347,  1348,  1349,  1350,  1351,  1352,
    1355,  1356,  1359,  1362,  1363,  1364,  1367,  1370,  1371,  1372,
    1375,  1376,  1377,  1380,  1381,  1382,  1383,  1384,  1385,  1388,
    1389,  1390,  1391,  1392,  1393,  1394,  1397,  1398,  1401,  1402,
    1405,  1406,  1409,  1410,  1413,  1414,  1415,  1418,  1419,  1422,
    1423,  1426,  1429,  1437,  1438,  1441,  1442,  1443,  1444,  1445,
    1446,  1447,  1448,  1449,  1450,  1451,  1452,  1453,  1454,  1455,
    1456,  1457,  1458,  1461,  1464,  1465,  1468,  1469,  1470,  1471,
    1474,  1475,  1476,  1477,  1480,  1481,  1482,  1483,  1484,  1485,
    1488,  1489,  1490,  1491,  1492,  1493,  1495,  1496,  1501,  1502,
    1505,  1507,  1509,  1512,  1513,  1514,  1515,  1516,  1517,  1520,
    1522,  1524,  1526,  1527,  1529,  1531,  1533,  1535,  1537,  1538,
    1539,  1542,  1543,  1544,  1545,  1546,  1547,  1549,  1550,  1551,
    1554,  1557,  1559,  1561,  1563,  1565,  1567,  1569,  1571,  1574,
    1576,  1578,  1580,  1581,  1582,  1583,  1584,  1585,  1586,  1587,
    1588,  1591,  1592,  1593,  1594,  1595,  1596,  1597,  1599,  1601,
    1602,  1603,  1606,  1607,  1608,  1609,  1610,  1611,  1613,  1614,
    1615,  1618,  1619,  1620,  1621,  1622,  1625,  1628,  1631,  1634,
    1637,  1640,  1643,  1646,  1649,  1654,  1657,  1660,  1663,  1666,
    1669,  1672,  1675,  1678,  1681,  1684,  1689,  1692,  1695,  1698,
    1701,  1704,  1707,  1710,  1713,  1718,  1720,  1722,  1724,  1726,
    1728,  1733,  1735,  1737,  1741,  1744,  1747,  1750,  1753,  1756,
    1759,  1762,  1765,  1768,  1771,  1776,  1777,  1778,  1779,  1780,
    1781,  1782,  1784,  1786,  1787,  1788,  1791,  1792,  1793,  1794,
    1795,  1796,  1798,  1799,  1800,  1803,  1805,  1807,  1808,  1810,
    1812,  1816,  1817,  1820,  1821,  1822,  1825,  1828,  1829,  1830,
    1831,  1832,  1833,  1834,  1837,  1845,  1846,  1847,  1848,  1850,
    1852,  1853,  1853,  1854,  1855,  1856,  1857,  1858,  1860,  1861,
    1863,  1866,  1869,  1870,  1871,  1874,  1877,  1880,  1884,  1887,
    1890,  1893,  1897,  1902,  1907,  1909,  1911,  1912,  1914,  1916,
    1918,  1920,  1921,  1923,  1925,  1929,  1934,  1936,  1938,  1940,
    1942,  1944,  1946,  1948,  1950,  1952,  1954,  1957,  1958,  1960,
    1962,  1963,  1965,  1967,  1968,  1969,  1971,  1973,  1974,  1975,
    1977,  1978,  1981,  1985,  1988,  1991,  1995,  2000,  2006,  2007,
    2008,  2010,  2011,  2015,  2017,  2018,  2019,  2022,  2025,  2028,
    2030,  2032,  2037,  2040,  2041,  2042,  2045,  2049,  2050,  2052,
    2053,  2054,  2056,  2057,  2059,  2060,  2065,  2067,  2068,  2070,
    2071,  2072,  2073,  2074,  2075,  2077,  2079,  2081,  2082,  2083,
    2085,  2087,  2088,  2089,  2090,  2091,  2092,  2093,  2094,  2095,
    2096,  2097,  2099,  2101,  2102,  2103,  2104,  2106,  2107,  2108,
    2109,  2110,  2112,  2113,  2114,  2115,  2116,  2117,  2120,  2121,
    2122,  2123,  2124,  2125,  2126,  2127,  2128,  2129,  2130,  2131,
    2132,  2133,  2134,  2135,  2136,  2137,  2138,  2139,  2140,  2143,
    2144,  2145,  2146,  2147,  2148,  2156,  2163,  2172,  2181,  2188,
    2195,  2203,  2211,  2218,  2223,  2228,  2233,  2238,  2243,  2248,
    2254,  2264,  2274,  2284,  2291,  2301,  2311,  2320,  2332,  2345,
    2350,  2353,  2355,  2357,  2362,  2366,  2367,  2368,  2374,  2376,
    2378,  2381,  2382,  2383,  2384,  2385,  2386,  2387,  2390,  2391,
    2392,  2393,  2394,  2395,  2397,  2399,  2401,  2403,  2405,  2407,
    2410,  2411,  2412,  2413,  2415,  2418,  2420,  2422,  2423,  2424,
    2426,  2429,  2432,  2434,  2435,  2436,  2437,  2439,  2440,  2441,
    2442,  2443,  2445,  2447,  2449,  2452,  2453,  2454,  2456,  2459,
    2460,  2461,  2462,  2464,  2467,  2471,  2472,  2473,  2476,  2479,
    2481,  2482,  2483,  2484,  2486,  2489,  2490,  2492,  2493,  2494,
    2495,  2496,  2498,  2499,  2501,  2504,  2505,  2506,  2507,  2508,
    2510,  2512,  2513,  2514,  2515,  2517,  2519,  2520,  2521,  2522,
    2523,  2524,  2526,  2527,  2529,  2532,  2533,  2534,  2535,  2538,
    2539,  2542,  2543,  2546,  2547,  2550,  2563,  2564,  2568,  2569,
    2573,  2574,  2577,  2581,  2587,  2589,  2592,  2594,  2597,  2599,
    2603,  2604,  2605,  2606,  2607,  2608,  2609,  2613,  2614,  2617,
    2618,  2619,  2620,  2621,  2622,  2623,  2624,  2627,  2628,  2629,
    2630,  2631,  2632,  2633,  2634,  2635,  2636,  2637,  2638,  2641,
    2642,  2645,  2646,  2646,  2649,  2651,  2653,  2656,  2657,  2658,
    2659,  2660,  2661,  2664,  2665,  2668,  2669,  2672,  2676,  2677,
    2677,  2680,  2681,  2684,  2687,  2691,  2692,  2693,  2694,  2695,
    2696,  2697,  2698,  2699,  2700,  2701,  2702,  2704,  2705,  2706,
    2707,  2708,  2709,  2710,  2711,  2712,  2713,  2714,  2715,  2716,
    2717,  2720,  2721,  2722,  2723,  2724,  2725,  2726,  2727,  2733,
    2734,  2735,  2736,  2739,  2741,  2742,  2747,  2749,  2750,  2751,
    2752,  2755,  2756,  2761,  2765,  2766,  2767,  2770,  2771,  2776,
    2777,  2780,  2782,  2783,  2784,  2789,  2791,  2797,  2798,  2799,
    2800,  2803,  2804,  2807,  2809,  2811,  2812,  2815,  2817,  2818,
    2819,  2822,  2823,  2826,  2827,  2828,  2831,  2832,  2833,  2836,
    2840,  2841,  2842,  2843,  2844,  2847,  2848,  2849,  2850,  2851,
    2852,  2855,  2856,  2857,  2858,  2859,  2862,  2863,  2864,  2867,
    2868,  2869,  2870,  2871,  2874,  2876,  2878,  2880,  2881,  2882,
    2885,  2886,  2887,  2888,  2889,  2890,  2891,  2892,  2893,  2894,
    2895,  2896,  2897,  2900,  2901,  2902,  2905,  2906,  2907,  2910,
    2911,  2912,  2915,  2916,  2917,  2920,  2921,  2922,  2923,  2926,
    2927,  2928,  2931,  2933,  2935,  2939,  2940,  2941,  2944,  2945,
    2946,  2949,  2951,  2953,  2957,  2958,  2959,  2962,  2963,  2964,
    2967,  2969,  2971,  2975,  2976,  2977,  2980,  2981,  2982,  2985,
    2986,  2987,  2990,  2992,  2994,  2998,  3002,  3004,  3009,  3012,
    3013,  3014,  3015,  3018,  3019,  3022,  3024,  3026,  3029,  3030,
    3031,  3034,  3035,  3038,  3040,  3041,  3042,  3043,  3046,  3047,
    3048,  3051,  3052,  3053,  3056,  3057,  3062,  3064,  3067,  3074,
    3075,  3077,  3082,  3084,  3087,  3088,  3089,  3090,  3092,  3097
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "REAL", "INT", "STRING", "ANGDEGREE",
  "ANGRADIAN", "SEXSTR", "HMSSTR", "DMSSTR", "ABOUT_", "AIP_", "ALLOC_",
  "ALLOCGZ_", "ALIGN_", "ALL_", "ALT_", "AMPLIFIER_", "ANALYSIS_",
  "ANGLE_", "ANNULUS_", "APPEND_", "ARCMIN_", "ARCSEC_", "ARRAY_",
  "ARROW_", "ASINH_", "AST_", "AUTO_", "AUX_", "AVERAGE_", "AXES_",
  "AZIMUTH_", "B1950_", "BACK_", "BACKGROUND_", "BASE_", "BBOX_", "BEGIN_",
  "BG_", "BIG_", "BIGENDIAN_", "BIN_", "BITPIX_", "BLEND_", "BLOCK_",
  "BORDER_", "BOTTOM_", "BOX_", "BOXANNULUS_", "BOXCAR_", "BOXCIRCLE_",
  "BPANDA_", "BUFFER_", "BW_", "CALLBACK_", "CANVAS_", "CATALOG_",
  "CELESTIAL_", "CENTER_", "CENTROID_", "CHANNEL_", "CIRCLE_", "CIAO_",
  "CLEAR_", "CLIP_", "COLOR_", "COLORBURN_", "COLORDODGE_", "COLORBAR_",
  "COLORMAP_", "COLORSCALE_", "COLORSPACE_", "COLS_", "COLUMN_",
  "COMMAND_", "COMPASS_", "COMPOSITE_", "COMPRESS_", "CONTOUR_",
  "CONTRAST_", "COORDINATES_", "COPY_", "COUNT_", "CPANDA_", "CREATE_",
  "CROP_", "CROSS_", "CROSSHAIR_", "CUBE_", "CURSOR_", "CUT_", "CMYK_",
  "DARKEN_", "DASH_", "DASHLIST_", "DATA_", "DATAMIN_", "DATASEC_",
  "DEBUG_", "DEGREES_", "DEFAULT_", "DELETE_", "DEPTH_", "DETECTOR_",
  "DIAMOND_", "DIFFERENCE_", "DIM_", "DOWN_", "DS9_", "EDIT_", "ECLIPTIC_",
  "ELEVATION_", "ELLIPTIC_", "ELLIPSE_", "ELLIPSEANNULUS_", "END_",
  "ENVI_", "EPANDA_", "EPSILON_", "EQUATORIAL_", "ERASE_", "EXCLUSION_",
  "EXT_", "FADE_", "FACTOR_", "FALSE_", "FILE_", "FILL_", "FILTER_",
  "FIRST_", "FIT_", "FITS_", "FITSY_", "FIXED_", "FK4_", "FK5_", "FONT_",
  "FORMAT_", "FOOTPRINT_", "FROM_", "FRONT_", "FULL_", "FUNCTION_",
  "GALACTIC_", "GAUSSIAN_", "GET_", "GLOBAL_", "GRAPHICS_", "GRAY_",
  "GRID_", "GZ_", "HANDLE_", "HARDLIGHT_", "HAS_", "HEAD_", "HEADER_",
  "HEIGHT_", "HIDE_", "HIGHLITE_", "HISTEQU_", "HISTOGRAM_", "HORIZONTAL_",
  "HUE_", "HSV_", "HLS_", "ICRS_", "ID_", "IIS_", "IMAGE_", "INCLUDE_",
  "INCR_", "INFO_", "ITERATION_", "IRAF_", "IRAFMIN_", "J2000_", "KEY_",
  "KEYWORD_", "LABEL_", "LAYER_", "LAYERNO_", "LAST_", "LENGTH_", "LEVEL_",
  "LIGHTEN_", "LITTLE_", "LITTLEENDIAN_", "LINE_", "LINEAR_", "LIST_",
  "LOAD_", "LOCAL_", "LOG_", "LUMINOSITY_", "MACOSX_", "MAGNIFIER_",
  "MATCH_", "MAP_", "MARK_", "MARKER_", "MASK_", "MEDIAN_", "MESSAGE_",
  "METHOD_", "MINMAX_", "MINOR_", "MIP_", "MMAP_", "MMAPINCR_", "MOSAIC_",
  "MODE_", "MOTION_", "MULTICOLOR_", "MULTIPLY_", "MOVE_", "NAME_", "NAN_",
  "NATIVE_", "NAXES_", "NEW_", "NEXT_", "NO_", "NONE_", "NONNAN_",
  "NONZERO_", "NOW_", "NRRD_", "NUMBER_", "OBJECT_", "OFF_", "ON_",
  "ONLY_", "OPTION_", "ORIENT_", "OVERLAY_", "PAN_", "PANNER_", "PARSER_",
  "PASTE_", "PERF_", "PHOTO_", "PHYSICAL_", "PIXEL_", "PLOT2D_", "PLOT3D_",
  "POINT_", "POINTER_", "POLYGON_", "POSTSCRIPT_", "POW_", "PRECISION_",
  "PRINT_", "PRESERVE_", "PROJECTION_", "PROPERTY_", "PUBLICATION_",
  "PROS_", "QUERY_", "RADIAL_", "RADIUS_", "RANGE_", "REGION_", "REPLACE_",
  "RESAMPLE_", "RESCAN_", "RESET_", "RESOLUTION_", "RGB_", "ROOT_",
  "ROTATE_", "RULER_", "SAMPLE_", "SAOIMAGE_", "SAOTNG_", "SAVE_",
  "SATURATION_", "SCALE_", "SCAN_", "SCIENTIFIC_", "SCOPE_", "SCREEN_",
  "SEGMENT_", "SELECT_", "SET_", "SEXAGESIMAL_", "SHAPE_", "SHARED_",
  "SHIFT_", "SHMID_", "SHOW_", "SIGMA_", "SINH_", "SIZE_", "SLICE_",
  "SMMAP_", "SMOOTH_", "SOFTLIGHT_", "SOCKET_", "SOCKETGZ_", "SOURCE_",
  "SQRT_", "SQUARED_", "SSHARED_", "STATS_", "STATUS_", "SUM_", "SYNC_",
  "SYSTEM_", "TABLE_", "TAG_", "TEMPLATE_", "TEXT_", "THREADS_", "THREED_",
  "THRESHOLD_", "THICK_", "TOP_", "TRANSPARENCY_", "TO_", "TOGGLE_",
  "TOPHAT_", "TRUE_", "TYPE_", "UNDO_", "UNHIGHLITE_", "UNLOAD_",
  "UNSELECT_", "UPDATE_", "UP_", "USER_", "VALUE_", "VAR_", "VIEW_",
  "VECTOR_", "VERSION_", "VERTEX_", "VERTICAL_", "WARP_", "WCS_", "WCSA_",
  "WCSB_", "WCSC_", "WCSD_", "WCSE_", "WCSF_", "WCSG_", "WCSH_", "WCSI_",
  "WCSJ_", "WCSK_", "WCSL_", "WCSM_", "WCSN_", "WCSO_", "WCSP_", "WCSQ_",
  "WCSR_", "WCSS_", "WCST_", "WCSU_", "WCSV_", "WCSW_", "WCSX_", "WCSY_",
  "WCSZ_", "WCS0_", "WFPC2_", "WIDTH_", "WIN32_", "XML_", "XY_", "YES_",
  "ZERO_", "ZMAX_", "ZSCALE_", "ZOOM_", "'Y'", "'N'", "'X'", "'='",
  "$accept", "command", "numeric", "debug", "yesno", "fileNameType",
  "optangle", "angle", "sexagesimal", "hms", "dms", "coord", "coordSystem",
  "wcsSystem", "internalSystem", "maskType", "maskBlend", "scaleType",
  "minmaxMode", "skyFrame", "skyFormat", "skyDist", "shmType", "incrLoad",
  "layerType", "pointShape", "pointSize", "analysisTask", "analysisMethod",
  "endian", "threed", "threedBorder", "threedCompass", "threedHighlite",
  "threedView", "bin", "binAbout", "binFactor", "binFunction", "binTo",
  "block", "blockTo", "clip", "clipScope", "clipMode", "clipMinMax",
  "clipZScale", "colormap", "colormapMotion", "colorscale", "contour",
  "contourCreate", "contourDelete", "contourLoad", "contourClipMode",
  "contourClipScope", "contourMethod", "contourPaste", "contourSave",
  "crop", "crop3d", "crosshair", "cube", "cutMethod", "fade", "fitsy",
  "get", "getHorzCut", "getVertCut", "getBin", "getBinCols", "getBlock",
  "getClip", "getClipMinMax", "getClipZScale", "getColorbar",
  "getColorMap", "getColorMapLevel", "getColorScale", "getColorScaleLevel",
  "getContour", "getContourClip", "getContourColorScale", "getCoord",
  "getCrop", "getCrosshair", "getCube", "getCursor", "getData", "getInfo",
  "getiis", "getIISFileName", "getFits", "getFitsExt", "getFitsHeader",
  "getFitsDepth", "getFitsFileName", "getFitsSlice", "getGrid", "getLayer",
  "getMask", "layerRef", "getPan", "getRGB", "getMultiColor", "getHLS",
  "getHSV", "getSmooth", "getThreed", "getThreedBorder",
  "getThreedCompass", "getThreedHighlite", "getThreedView", "getWCS",
  "getWCSAlign", "grid", "gridCreate", "gridType", "has", "hasBin",
  "hasContour", "hasFits", "hasMarker", "hasWCS", "iis", "iisSetFileName",
  "iiscursor", "load", "loadArr", "loadArrayRGBCube", "loadENVI",
  "loadFits", "loadFitsSlice", "loadFitsExtCube", "loadFitsMosaic",
  "loadFitsMosaicImageIRAF", "loadFitsMosaicIRAF",
  "loadFitsMosaicImageWCS", "loadFitsMosaicImageWFPC2",
  "loadFitsMosaicWCS", "loadFitsRGBCube", "loadFitsRGBImage", "loadNRRD",
  "loadPhoto", "loadIncr", "macosx", "magnifier", "match", "marker", "@1",
  "markerCallBack", "markerCentroid", "markerCreate",
  "markerCreateTemplate", "markerDelete", "markerEdit", "markerFormat",
  "markerGet", "markerGetCentroid", "markerGetHighlite", "markerGetSelect",
  "markerGetShow", "markerInitProp", "markerLayer", "markerList",
  "markerLoad", "markerMoveSelected", "markerProps", "markerProp",
  "markerProperty", "markerProperties", "markerQuery", "@2", "markerSave",
  "markerSelect", "markerShow", "queries", "query", "markerTags", "@3",
  "tags", "tag", "callback", "layer", "mask", "orient", "pan", "panTo",
  "panMotion", "panner", "postscript", "precision", "pscolorspace",
  "region", "regionHighlite", "regionSelect", "renderMethod",
  "renderBackground", "rgb", "multicolor", "hls", "hsv", "rotate",
  "rotateMotion", "save", "saveArray", "saveFits", "saveFitsImage",
  "saveFitsTable", "saveFitsSlice", "saveFitsExtCube", "saveFitsMosaic",
  "saveFitsMosaicImage", "saveArrayRGBCube", "saveFitsRGBImage",
  "saveFitsRGBCube", "saveArrayHLSCube", "saveFitsHLSImage",
  "saveFitsHLSCube", "saveArrayHSVCube", "saveFitsHSVImage",
  "saveFitsHSVCube", "saveFitsResample", "saveNRRD", "saveENVI", "smooth",
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
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,   607,   608,   609,   610,   611,   612,   613,   614,
     615,   616,   617,   618,   619,   620,   621,   622,   623,   624,
     625,   626,   627,   628,   629,   630,   631,   632,    89,    78,
      88,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   382,   383,   383,   383,   383,   383,   383,   383,   383,
     383,   383,   383,   383,   383,   383,   383,   383,   383,   383,
     383,   383,   383,   383,   383,   383,   383,   383,   383,   383,
     383,   383,   383,   383,   383,   383,   383,   383,   383,   383,
     383,   383,   383,   383,   383,   383,   383,   383,   383,   383,
     383,   383,   383,   383,   383,   383,   383,   383,   383,   383,
     383,   384,   384,   385,   385,   385,   385,   385,   385,   385,
     385,   385,   385,   385,   386,   386,   386,   386,   386,   386,
     386,   386,   386,   387,   387,   387,   387,   387,   388,   388,
     389,   389,   389,   390,   391,   392,   393,   393,   393,   393,
     394,   394,   394,   394,   394,   395,   395,   395,   395,   395,
     395,   395,   395,   395,   395,   395,   395,   395,   395,   395,
     395,   395,   395,   395,   395,   395,   395,   395,   395,   395,
     395,   395,   395,   396,   396,   397,   397,   397,   397,   397,
     397,   398,   398,   398,   398,   398,   398,   398,   398,   398,
     398,   398,   398,   398,   398,   398,   398,   398,   399,   399,
     399,   399,   399,   399,   399,   399,   400,   400,   400,   400,
     400,   401,   401,   401,   401,   401,   401,   401,   401,   402,
     402,   402,   403,   403,   403,   403,   404,   404,   404,   405,
     405,   405,   406,   406,   406,   407,   407,   407,   407,   407,
     407,   407,   407,   408,   408,   409,   409,   409,   409,   409,
     409,   410,   410,   410,   410,   411,   411,   411,   411,   411,
     411,   412,   412,   412,   412,   412,   412,   412,   412,   412,
     413,   413,   414,   414,   415,   415,   416,   416,   417,   417,
     417,   417,   417,   417,   417,   417,   418,   418,   419,   419,
     419,   419,   419,   419,   419,   419,   420,   420,   421,   421,
     421,   421,   421,   422,   422,   422,   423,   423,   423,   424,
     424,   424,   424,   424,   424,   424,   425,   425,   426,   426,
     426,   426,   426,   427,   427,   427,   427,   428,   428,   428,
     428,   429,   429,   429,   429,   429,   429,   429,   429,   430,
     430,   430,   430,   430,   431,   431,   432,   432,   432,   432,
     432,   433,   433,   433,   433,   433,   434,   434,   435,   435,
     435,   436,   436,   436,   436,   437,   437,   438,   438,   439,
     439,   440,   440,   441,   441,   441,   441,   441,   441,   441,
     442,   442,   442,   442,   442,   443,   443,   443,   443,   443,
     443,   443,   443,   444,   445,   445,   445,   445,   446,   446,
     447,   448,   448,   448,   448,   448,   448,   448,   448,   448,
     448,   448,   448,   448,   448,   448,   448,   448,   448,   448,
     448,   448,   448,   448,   448,   448,   448,   448,   448,   448,
     448,   448,   448,   448,   448,   448,   448,   448,   448,   448,
     448,   448,   448,   448,   448,   448,   449,   449,   450,   450,
     451,   451,   451,   451,   451,   451,   451,   451,   452,   452,
     452,   453,   454,   454,   454,   454,   454,   454,   454,   454,
     454,   455,   455,   456,   456,   456,   457,   457,   458,   459,
     459,   459,   460,   460,   460,   461,   462,   462,   462,   462,
     462,   462,   462,   462,   462,   462,   463,   463,   463,   464,
     464,   465,   465,   466,   466,   466,   467,   467,   467,   468,
     469,   469,   470,   470,   470,   471,   471,   471,   472,   472,
     472,   473,   473,   473,   474,   474,   474,   474,   474,   474,
     474,   474,   474,   474,   474,   474,   474,   474,   475,   475,
     476,   476,   476,   476,   477,   477,   478,   478,   478,   479,
     479,   479,   479,   479,   480,   480,   480,   481,   481,   481,
     481,   481,   481,   482,   482,   482,   482,   482,   482,   482,
     483,   483,   484,   485,   485,   485,   486,   487,   487,   487,
     488,   488,   488,   489,   489,   489,   489,   489,   489,   490,
     490,   490,   490,   490,   490,   490,   491,   491,   492,   492,
     493,   493,   494,   494,   495,   495,   495,   496,   496,   497,
     497,   498,   498,   499,   499,   500,   500,   500,   500,   500,
     500,   500,   500,   500,   500,   500,   500,   500,   500,   500,
     500,   500,   500,   501,   502,   502,   503,   503,   503,   503,
     504,   504,   504,   504,   505,   505,   505,   505,   505,   505,
     506,   506,   506,   506,   506,   506,   506,   506,   507,   507,
     508,   508,   508,   509,   509,   509,   509,   509,   509,   510,
     510,   510,   510,   510,   510,   510,   510,   510,   510,   510,
     510,   511,   511,   511,   511,   511,   511,   511,   511,   511,
     512,   513,   513,   513,   513,   513,   513,   513,   513,   513,
     513,   513,   513,   513,   513,   513,   513,   513,   513,   513,
     513,   514,   514,   514,   514,   514,   514,   514,   514,   514,
     514,   514,   515,   515,   515,   515,   515,   515,   515,   515,
     515,   516,   516,   516,   516,   516,   517,   517,   517,   517,
     517,   517,   517,   517,   517,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   519,   519,   519,   519,
     519,   519,   519,   519,   519,   520,   520,   520,   520,   520,
     520,   520,   520,   520,   521,   521,   521,   521,   521,   521,
     521,   521,   521,   521,   521,   522,   522,   522,   522,   522,
     522,   522,   522,   522,   522,   522,   523,   523,   523,   523,
     523,   523,   523,   523,   523,   524,   524,   524,   524,   524,
     524,   525,   525,   526,   526,   526,   527,   528,   528,   528,
     528,   528,   528,   528,   529,   530,   530,   530,   530,   530,
     530,   531,   530,   530,   530,   530,   530,   530,   530,   530,
     530,   530,   530,   530,   530,   530,   530,   530,   530,   530,
     530,   530,   530,   530,   530,   530,   530,   530,   530,   530,
     530,   530,   530,   530,   530,   530,   530,   530,   530,   530,
     530,   530,   530,   530,   530,   530,   530,   530,   530,   530,
     530,   530,   530,   530,   530,   530,   530,   530,   530,   530,
     530,   530,   530,   530,   530,   530,   530,   530,   530,   530,
     530,   530,   530,   530,   530,   530,   530,   530,   530,   530,
     530,   530,   530,   530,   530,   530,   530,   530,   530,   530,
     530,   530,   530,   530,   530,   530,   530,   530,   530,   530,
     530,   530,   530,   530,   530,   530,   530,   530,   530,   530,
     530,   530,   530,   530,   530,   530,   530,   530,   530,   530,
     530,   530,   530,   530,   530,   530,   530,   530,   530,   530,
     530,   530,   530,   530,   530,   530,   530,   530,   532,   532,
     532,   532,   532,   532,   532,   532,   532,   532,   532,   532,
     532,   532,   532,   532,   532,   532,   532,   532,   532,   533,
     533,   533,   533,   533,   533,   534,   534,   534,   534,   534,
     534,   534,   534,   534,   534,   534,   534,   534,   534,   534,
     534,   534,   534,   534,   534,   534,   534,   534,   534,   534,
     534,   535,   535,   535,   535,   536,   536,   536,   537,   537,
     537,   538,   538,   538,   538,   538,   538,   538,   539,   539,
     539,   539,   539,   539,   539,   539,   539,   539,   539,   539,
     539,   539,   539,   539,   539,   539,   539,   539,   539,   539,
     539,   539,   539,   539,   539,   539,   539,   539,   539,   539,
     539,   539,   539,   539,   539,   539,   539,   539,   539,   539,
     539,   539,   539,   539,   539,   539,   539,   539,   539,   539,
     539,   539,   539,   539,   539,   539,   539,   539,   539,   539,
     539,   539,   539,   539,   539,   539,   539,   539,   539,   539,
     539,   539,   539,   539,   539,   539,   539,   539,   539,   539,
     539,   539,   539,   539,   539,   540,   540,   540,   540,   541,
     541,   542,   542,   543,   543,   544,   545,   545,   545,   545,
     545,   545,   546,   546,   547,   547,   547,   547,   547,   547,
     548,   548,   548,   548,   548,   548,   548,   549,   549,   550,
     550,   550,   550,   550,   550,   550,   550,   551,   551,   551,
     551,   551,   551,   551,   551,   551,   551,   551,   551,   552,
     552,   553,   554,   553,   555,   555,   555,   556,   556,   556,
     556,   556,   556,   557,   557,   558,   558,   559,   560,   561,
     560,   562,   562,   563,   564,   565,   565,   565,   565,   565,
     565,   565,   565,   565,   565,   565,   565,   565,   565,   565,
     565,   565,   565,   565,   565,   565,   565,   565,   565,   565,
     565,   566,   566,   566,   566,   566,   566,   566,   566,   567,
     567,   567,   567,   568,   568,   568,   568,   568,   568,   568,
     568,   569,   569,   569,   570,   570,   570,   571,   571,   571,
     571,   572,   572,   572,   572,   573,   573,   574,   574,   574,
     574,   575,   575,   576,   576,   576,   576,   577,   577,   577,
     577,   578,   578,   579,   579,   579,   580,   580,   580,   581,
     582,   582,   582,   582,   582,   583,   583,   583,   583,   583,
     583,   584,   584,   584,   584,   584,   585,   585,   585,   586,
     586,   586,   586,   586,   587,   587,   587,   587,   587,   587,
     588,   588,   588,   588,   588,   588,   588,   588,   588,   588,
     588,   588,   588,   589,   589,   589,   590,   590,   590,   591,
     591,   591,   592,   592,   592,   593,   593,   593,   593,   594,
     594,   594,   595,   595,   595,   596,   596,   596,   597,   597,
     597,   598,   598,   598,   599,   599,   599,   600,   600,   600,
     601,   601,   601,   602,   602,   602,   603,   603,   603,   604,
     604,   604,   605,   605,   605,   606,   607,   607,   607,   608,
     608,   608,   608,   609,   609,   609,   609,   609,   610,   610,
     610,   611,   611,   612,   612,   612,   612,   612,   613,   613,
     613,   614,   614,   614,   615,   615,   615,   615,   616,   617,
     617,   617,   617,   617,   618,   618,   618,   618,   618,   618
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     3,     3,     2,     1,     1,     2,
       3,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     1,     2,     3,     2,     2,     2,     3,
       2,     2,     2,     2,     3,     2,     2,     2,     3,     2,
       2,     2,     2,     2,     2,     1,     3,     2,     2,     2,
       1,     2,     2,     2,     1,     2,     1,     2,     2,     2,
       2,     1,     1,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     2,     2,     1,     1,     0,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     1,     1,     1,     1,
       1,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     1,     1,     1,     1,     1,     1,     1,     0,
       1,     1,     0,     1,     1,     1,     0,     1,     1,     0,
       1,     1,     0,     1,     1,     0,     1,     1,     1,     1,
       1,     1,     1,     0,     1,     1,     1,     1,     1,     1,
       1,     0,     1,     1,     1,     0,     1,     1,     1,     1,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       1,     2,     1,     2,     1,     2,     2,     6,     2,     4,
       2,     2,     2,     3,     2,     2,     1,     2,     1,     2,
       4,     5,     2,     3,     5,     6,     1,     1,     1,     7,
      11,     8,    12,     1,     2,     2,     1,     1,     2,     2,
       2,     2,     3,     3,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     1,     3,     2,     2,
       2,     5,     9,     9,     9,     7,     1,     2,     1,     5,
       9,     9,     9,     7,     1,     2,     2,     2,     2,     2,
       2,    13,    13,    12,    12,     1,     0,     1,     1,     4,
       6,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     3,     4,     0,     6,     8,     2,     3,     3,     3,
       0,     4,     4,     4,     4,     3,     3,     1,     3,     5,
       4,     4,     3,     2,     0,     1,     1,     1,     1,     1,
       3,     0,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     2,     2,
       4,     3,     2,     2,     2,     2,     2,     1,     3,     2,
       2,     2,     2,     1,     2,     8,     2,     1,     2,     1,
       2,     1,     4,     3,     2,     1,     7,     8,     7,     8,
       1,     1,     1,     2,     1,     1,     2,     1,     0,     2,
       2,     1,     0,     2,     2,     1,     1,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     0,     1,     2,     1,
       4,     5,     0,     2,     1,     5,     2,     2,     1,     1,
       1,     2,     1,     2,     1,     1,     0,     1,     1,     0,
       1,     5,     6,     3,     6,     3,     1,     3,     1,     1,
       1,     3,     6,     7,     5,     2,     1,     5,     4,     1,
       3,     0,     1,     2,     1,     4,     1,     2,     1,     2,
       3,     2,     1,     2,     1,     4,     2,     1,     1,     3,
       1,     2,     3,     2,     0,     1,     1,     4,     2,     0,
       1,     3,     4,     4,     0,     1,     1,     1,     1,     2,
       2,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     2,     1,     2,
       2,     2,     2,     1,     1,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     2,     2,     0,     1,     2,
       1,     6,     5,     1,     1,     1,     2,     2,     2,     1,
       1,     1,     1,     2,     1,     1,     1,     2,     1,     1,
       1,     2,     2,     2,     0,     1,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     1,     2,
       3,     1,     2,     2,     4,     5,     1,    10,     1,     2,
       3,     3,     2,     2,     2,     2,     2,     2,     2,     4,
       4,     4,     3,     3,     5,     4,     4,     4,     3,     3,
       3,     3,     3,     3,     2,     2,     4,     3,     3,     3,
       3,     4,     4,     4,     4,     5,     4,     6,     7,     4,
       4,     5,     2,     3,     3,     3,     3,     3,     3,     3,
       2,     3,     3,     3,     3,     4,     3,     5,     6,     3,
       3,     4,     3,     3,     3,     3,     3,     5,     3,     3,
       4,     3,     2,     2,     1,     3,     4,     4,     4,     4,
       4,     6,     4,     4,     5,     4,     4,     4,     4,     5,
       4,     6,     7,     4,     4,     5,     5,     5,     5,     5,
       5,     7,     5,     5,     6,     4,     4,     4,     4,     4,
       6,     4,     4,     5,     5,     5,     5,     5,     6,     5,
       7,     8,     5,     5,     6,     3,     3,     3,     3,     4,
       3,     5,     6,     3,     3,     4,     3,     3,     3,     3,
       3,     5,     3,     3,     4,     4,     4,     3,     5,     4,
       4,     2,     3,     6,     6,     1,     1,     1,     2,     2,
       2,     3,     3,     2,    12,     2,     2,     1,     3,     4,
       2,     0,     3,     1,     2,     2,     2,     2,     2,     4,
       4,     4,     3,     4,     5,     8,     6,     9,     6,     7,
      10,    11,    12,     9,     5,     6,     3,     5,     5,     6,
       5,     4,     9,    10,    11,     9,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     7,     7,     2,     4,     4,
       4,     4,     5,     4,     4,     5,     5,     3,     4,     4,
       4,     7,     9,     6,    10,    11,    12,     9,     3,     2,
       3,     5,     7,     4,     3,     3,     6,     7,     7,     4,
       4,     9,     4,     3,     4,     7,     7,     2,     3,     3,
       3,     4,     2,     2,     4,    10,     3,     1,     3,     2,
       2,     2,     2,     3,     5,     4,     5,     2,     2,     2,
       2,     3,     2,     2,     2,     3,     2,     3,     4,     3,
       3,     6,     4,     2,     3,     2,     2,     4,     3,     3,
       2,     3,     1,     2,     1,     2,     2,     2,     1,     1,
       1,     1,     2,     1,     2,     2,     1,     2,     2,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       1,     2,     2,     2,     3,     5,     7,     7,     6,     6,
       6,     6,     5,     6,     6,     6,     6,     6,     6,     6,
      11,     7,     7,     7,     9,     9,    10,    12,    12,     2,
       2,     3,     4,     4,     4,     0,     1,     1,     4,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       1,     1,     3,     3,     8,     6,    10,     7,     7,     5,
       2,     2,     3,     4,     5,     5,     5,     3,     4,     5,
       5,     5,     5,     2,     3,     3,     5,     3,     3,     3,
       4,     5,     5,     5,     5,     3,     4,     5,     5,     2,
       2,     3,     5,     6,     6,     3,     3,     6,     5,     5,
       2,     3,     3,     5,     6,     3,     2,     2,     3,     2,
       3,     2,     3,     5,     6,     2,     2,     2,     1,     4,
       4,     1,     2,     2,     2,     2,     2,     2,     2,     3,
       2,     3,     2,     3,     1,     1,     1,     1,     1,     0,
       2,     0,     2,     0,     1,     0,     0,     1,     1,     1,
       1,     1,     7,     8,     2,     6,     2,     6,     2,     3,
       2,     1,     1,     3,     3,     1,     4,     2,     1,     3,
       3,     4,     3,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     0,     0,     2,     6,     7,     2,     1,     3,     1,
       3,     1,     1,     1,     2,     2,     1,     3,     0,     0,
       2,     2,     1,     3,     5,     0,     1,     1,     2,     2,
       3,     2,     3,     2,     3,     2,     3,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     2,     2,     3,     2,     2,     2,     2,     1,
       1,     1,     1,     4,     2,     3,     3,     2,     3,     2,
       2,     2,     3,     3,     3,     2,     3,     1,     3,     3,
       1,     2,     2,     2,     2,     9,     6,     1,     1,     1,
       1,     2,     2,     3,     3,     1,     2,     3,     3,     1,
       2,     1,     1,     1,     1,     1,     2,     2,     4,     2,
       2,     2,     2,     2,     4,     2,     2,     2,     2,     2,
       4,     1,     2,     2,     2,     3,     1,     1,     1,     2,
       2,     2,     2,     2,     3,     3,     3,     3,     3,     3,
       1,     2,     2,     2,     3,     2,     3,     3,     3,     3,
       3,     3,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     3,     3,     3,     2,
       2,     2,     3,     3,     3,     2,     2,     2,     2,     2,
       2,     3,     3,     3,     2,     2,     2,     2,     2,     2,
       3,     3,     3,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     3,     3,     3,     4,     6,     2,     1,     1,
       1,     1,     1,     0,     5,     1,     6,     3,     1,     2,
       2,     2,     3,     3,     2,     2,     2,     2,     2,     2,
       3,     2,     2,     3,     1,     3,     4,     2,     1,     2,
       5,     6,     6,     2,     1,     2,     2,     5,     6,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     7,     8,     0,     0,     0,     0,
       0,   333,     0,     0,     0,     0,     0,     0,   361,     0,
       0,    23,     0,     0,     0,     0,     0,  1165,     0,     0,
       0,     0,  1096,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1096,    45,     0,     0,     0,    50,     0,     0,
       0,    54,  1353,    56,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     3,    61,
      62,     0,   263,     6,     0,     0,     0,     0,     0,     0,
       9,     0,     0,   296,   298,     0,     0,     0,     0,     0,
      11,   163,   165,   158,   159,   160,   164,   161,   162,   304,
      12,     0,   316,     0,     0,     0,    13,     0,     0,     0,
       0,   340,     0,    14,    74,   103,     0,   133,   102,    82,
     100,     0,    79,    81,    77,   134,   101,    78,     0,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,    75,    76,    80,
     347,   171,   104,     0,    15,     0,    16,    17,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     2,    63,
     359,   358,    18,     0,    19,     0,     0,     0,   422,   436,
       0,   442,     0,     0,     0,     0,     0,     0,     0,   376,
       0,   514,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1096,     0,   387,     0,     0,   393,     0,     0,     0,
     397,     0,   399,     0,   401,     0,     0,   564,   405,    20,
       0,   570,    21,   575,     0,     0,   594,   579,   580,   581,
     582,   596,   584,   585,   589,   586,     0,   588,   590,     0,
       0,    22,     0,    24,     0,     0,     0,    26,     0,     0,
       0,    27,     0,   611,     0,     0,     0,   616,     0,    28,
       0,  1167,   141,  1189,     0,  1166,  1181,  1185,  1179,     0,
    1177,  1187,     0,  1183,     0,    36,     0,     0,     0,     0,
       0,     0,    30,   776,    31,     0,     0,     0,     0,     0,
       0,   777,    32,     0,    33,  1100,  1101,  1097,  1098,  1099,
       0,   141,  1191,     0,   135,     0,     0,     0,    35,     0,
      37,     0,  1202,  1201,  1200,  1199,    39,     0,     0,     0,
       0,     0,   171,     0,    40,     0,  1220,     0,  1217,    41,
       0,     0,     0,     0,    44,     0,    43,    42,     0,     0,
       0,     0,    47,     0,     0,  1261,    48,     0,     0,     0,
       0,     0,    49,  1349,  1348,  1352,  1351,  1350,    51,     0,
      52,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      53,     0,     0,  1355,    55,     0,     0,    57,     0,     0,
       0,     0,   171,    58,  1378,    59,     0,     0,    60,     1,
       4,     5,   246,     0,   238,     0,     0,   240,     0,   248,
     241,   245,   256,   257,   242,   258,     0,   244,   266,   267,
     265,   264,     0,     0,   286,     0,   271,   279,   282,   281,
     280,   278,   270,   275,   276,   277,   269,     0,     0,     0,
       0,     0,     0,   274,    10,     0,     0,     0,     0,     0,
       0,     0,     0,   297,     0,     0,   305,     0,   315,   306,
     317,   307,   318,   308,   329,   309,     0,     0,   310,     0,
      93,    94,    95,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   336,     0,     0,     0,     0,     0,
     173,   178,   172,   174,   177,   176,   175,     0,     0,   353,
      68,    69,    70,    71,    72,    64,    65,    66,    73,    67,
       0,   362,     0,   418,   414,   410,   411,   415,   412,   417,
     363,   421,   364,   321,   426,   430,   425,   324,   323,   322,
       0,     0,   365,   437,   367,     0,   366,     0,   444,   368,
     456,   448,   459,   449,   450,   452,     0,   454,   455,   171,
     369,     0,     0,   370,     0,     0,   171,   371,   468,   171,
     466,   372,   469,   374,   171,   470,   373,     0,   171,     0,
     375,   488,     0,   486,   504,     0,     0,     0,   492,   484,
       0,   494,   509,   497,   377,   515,   516,   378,   379,     0,
       0,   540,   541,   542,   382,   537,   538,   539,   383,     0,
     479,     0,   384,    83,   476,     0,   385,   386,   530,   530,
     517,   518,   530,   530,   390,     0,   529,   523,   528,   524,
     525,   526,   527,   389,   536,   391,   392,   532,   394,     0,
     533,   534,   535,   396,   548,   543,   544,   546,   398,   554,
     556,   558,   560,   553,   555,   562,   400,     0,     0,   567,
       0,   404,   171,   569,   576,     0,   577,   595,   578,   597,
     598,   599,   583,   600,   602,   601,   603,   587,   591,   608,
       0,     0,     0,     0,   604,   592,    25,  1255,  1256,  1257,
    1258,  1259,     0,  1250,  1251,  1252,  1253,     0,     0,     0,
     613,   612,     0,     0,     0,     0,    29,   141,  1190,     0,
    1182,  1186,  1180,  1178,  1188,     0,  1184,     0,   156,   149,
     148,   146,   152,   153,   150,   154,   147,   157,   143,   145,
     155,   144,   151,   142,  1171,  1169,  1168,  1173,  1175,     0,
       0,     0,     0,   623,     0,   624,     0,     0,     0,     0,
       0,     0,     0,   625,     0,   775,     0,   626,     0,   627,
       0,     0,   628,     0,   780,   779,   778,     0,   783,     0,
       0,     0,   949,     0,     0,     0,   787,   791,   793,   985,
       0,     0,     0,     0,   887,     0,     0,     0,   922,     0,
       0,     0,     0,     0,     0,     0,   924,     0,     0,     0,
      34,  1197,  1192,  1198,   138,   139,   137,   140,   136,  1193,
       0,  1195,  1196,  1249,    38,     0,     0,     0,     0,  1209,
    1210,     0,   171,     0,  1207,  1204,     0,     0,     0,   171,
    1227,  1230,  1228,  1229,  1221,  1222,  1223,  1224,     0,     0,
       0,    46,  1246,  1247,     0,  1266,  1268,  1267,  1263,  1264,
    1262,     0,     0,     0,     0,     0,     0,  1269,     0,  1272,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1270,  1280,     0,     0,     0,  1271,  1273,  1347,
    1244,  1245,  1243,   226,     0,   230,   222,     0,   232,   223,
       0,   234,   224,  1242,  1241,   225,   227,   228,   229,     0,
       0,   221,     0,     0,     0,     0,  1361,  1374,     0,     0,
    1364,     0,     0,  1367,     0,     0,  1366,  1365,   179,  1384,
       0,  1383,  1379,   247,   243,     0,   252,     0,   249,     0,
     268,   166,   169,   170,   168,   167,   283,   284,   285,   273,
     272,   288,   290,   289,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   171,
       0,   337,    99,    96,    97,    98,   171,   339,   338,     0,
       0,     0,     0,     0,     0,     0,   352,     0,   348,   346,
     345,   360,   413,     0,     0,   416,   431,   432,   427,   428,
     433,   435,   434,   429,   325,   326,   424,   423,   439,   438,
       0,   443,   457,   458,   447,   460,   453,   451,   446,     0,
       0,   171,   171,   179,   179,   179,   171,     0,     0,   171,
     505,   487,   498,     0,   489,    83,   500,     0,     0,   491,
     493,   171,   510,     0,     0,   496,     0,     0,   381,     0,
     481,    87,    86,   475,     0,   531,   520,   519,   521,   522,
       0,     0,     0,   999,  1001,  1000,     0,  1089,     0,  1068,
       0,  1071,     0,     0,  1091,  1093,     0,  1084,   388,     0,
     545,   547,   557,   550,   559,   551,   561,   552,   563,   549,
       0,     0,   403,   568,   565,   566,   179,   593,   605,   606,
     607,   609,     0,     0,     0,   622,   610,     0,     0,     0,
    1172,  1170,  1174,  1176,     0,     0,     0,   192,   192,   186,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   189,   189,   186,     0,     0,   186,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   670,   694,     0,     0,
       0,   662,     0,     0,     0,     0,   192,   186,     0,     0,
     771,     0,   781,   782,   171,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   837,     0,
       0,     0,     0,     0,   859,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   877,     0,     0,   882,   883,     0,
       0,     0,   902,   904,   903,     0,   906,     0,     0,   913,
     915,   916,   950,     0,     0,     0,     0,   785,   786,   993,
     991,   996,   995,   994,   992,   997,     0,   790,     0,   987,
     986,   794,     0,   990,     0,   795,   796,   797,   798,     0,
       0,     0,     0,     0,   889,     0,     0,   890,  1112,     0,
    1115,  1111,     0,     0,     0,   891,   923,   892,  1130,  1135,
    1132,  1138,  1131,  1129,  1136,  1133,  1127,  1134,  1128,  1137,
       0,     0,   897,     0,     0,     0,     0,   898,  1147,  1151,
    1152,     0,  1149,   899,     0,  1153,   900,   920,     0,     0,
       0,   925,   926,   927,  1194,  1208,     0,     0,  1215,  1211,
       0,     0,     0,  1206,  1205,  1219,  1218,     0,     0,  1235,
       0,     0,  1231,     0,  1239,     0,     0,  1232,     0,  1265,
     215,   215,     0,     0,     0,   215,     0,  1294,     0,  1293,
       0,     0,     0,     0,  1281,     0,     0,     0,     0,  1285,
       0,     0,     0,  1292,     0,     0,     0,     0,     0,  1283,
    1295,     0,     0,     0,  1282,   215,   215,   215,     0,   231,
     233,   235,     0,   236,     0,    62,     0,  1357,     0,  1362,
     171,  1377,     0,  1368,  1369,     0,  1371,  1372,     0,   180,
     181,  1363,  1385,  1386,     0,   239,     0,   253,     0,     0,
       0,     0,   287,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   331,   171,     0,
       0,     0,     0,   171,     0,   351,     0,   350,   420,   419,
       0,     0,     0,   171,     0,   179,   465,   463,   467,   471,
       0,     0,     0,   179,     0,   506,   490,     0,   501,   503,
     182,     0,     0,   380,     0,     0,    62,     0,   480,    85,
      84,     0,     0,  1011,     0,     0,     0,     0,     0,     0,
    1023,     0,     0,     0,     0,     0,     0,  1039,  1040,     0,
       0,     0,     0,  1050,     0,  1056,  1057,  1059,  1061,     0,
    1065,  1076,  1077,  1078,     0,  1080,  1085,  1087,  1088,  1086,
     998,     0,  1067,     0,  1066,  1010,     0,     0,  1072,     0,
    1074,     0,  1073,  1094,  1075,  1082,     0,     0,   402,     0,
       0,  1260,  1254,   620,   621,     0,   618,   614,     0,   192,
     192,   192,   193,   194,   632,   633,   188,   187,     0,   192,
     192,   192,     0,   640,   639,   638,   650,   189,   192,   192,
     192,   190,   191,   192,   192,     0,   192,   192,     0,   189,
       0,   663,     0,   669,     0,   668,   667,   666,     0,     0,
       0,   693,     0,   692,     0,   665,   664,     0,     0,     0,
       0,   189,   189,   186,     0,     0,   186,     0,     0,     0,
     192,   192,   767,     0,   192,   192,   772,     0,   205,   206,
     207,   208,   209,   210,     0,    91,    92,    90,   802,     0,
       0,     0,     0,     0,   943,   941,   936,     0,   946,   930,
     947,   933,   945,   939,   928,   942,   931,   929,   948,   944,
       0,     0,   816,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   847,     0,     0,     0,
       0,   858,   860,     0,     0,   865,   864,     0,     0,   195,
       0,     0,   171,     0,   873,     0,     0,     0,     0,   878,
     879,   880,     0,     0,     0,   886,   901,   905,   907,   910,
     909,     0,     0,     0,   914,   951,   953,     0,   952,   788,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1095,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   792,     0,     0,     0,     0,
     888,     0,   171,  1108,  1106,  1104,     0,     0,   171,  1110,
     893,     0,     0,     0,     0,  1146,     0,     0,  1154,   918,
     919,     0,   921,  1214,  1216,  1213,  1212,  1203,     0,     0,
       0,  1236,     0,     0,  1240,  1248,   217,   218,   219,   220,
     216,  1275,  1274,     0,     0,     0,  1279,     0,     0,     0,
    1278,     0,     0,     0,  1277,  1276,   215,     0,     0,     0,
    1284,     0,     0,     0,  1291,     0,     0,     0,  1290,     0,
       0,     0,  1289,     0,     0,     0,  1288,     0,     0,     0,
       0,     0,  1305,     0,  1340,  1339,  1341,     0,     0,     0,
    1287,     0,     0,     0,  1286,  1300,  1299,  1301,  1297,  1296,
    1298,  1343,  1342,  1344,     0,     0,     0,  1359,  1360,     0,
    1375,   171,  1370,  1373,     0,     0,   171,     0,     0,     0,
     250,     0,     0,     0,     0,   291,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   328,   327,     0,     0,   319,
     330,   332,     0,   342,   344,   343,   341,   171,   349,     0,
       0,     0,   179,   171,     0,     0,     0,     0,   485,   499,
     508,     0,   502,   184,   185,   183,   495,     0,   511,     0,
       0,   478,   483,    83,     0,     0,     0,     0,     0,     0,
     171,  1012,     0,     0,     0,  1017,     0,   171,     0,  1024,
    1025,     0,  1027,  1028,  1029,     0,     0,     0,  1035,     0,
    1041,     0,     0,     0,  1045,  1046,     0,     0,     0,  1051,
    1052,     0,     0,  1055,  1058,  1060,  1062,     0,     0,  1079,
    1081,  1002,  1090,  1003,     0,     0,  1092,  1083,     0,     0,
     573,   574,     0,   615,   619,     0,   629,   630,   631,   192,
     635,   636,   637,     0,     0,     0,   644,   645,   186,     0,
       0,     0,   192,   651,   652,   653,   654,   656,   189,   659,
     660,     0,   192,     0,     0,     0,   189,   189,   186,     0,
       0,     0,     0,     0,     0,     0,   189,   189,   186,     0,
       0,   186,     0,     0,     0,     0,   189,   189,   186,     0,
       0,     0,     0,   691,     0,   695,     0,     0,     0,     0,
       0,   189,   189,   186,     0,     0,   186,     0,     0,     0,
       0,     0,   189,   189,   186,     0,     0,   186,     0,   189,
     671,   672,   673,   674,   676,     0,   679,   680,     0,   189,
       0,     0,   765,   766,   192,   769,   770,     0,   801,   171,
     803,     0,     0,     0,     0,     0,     0,     0,   935,   932,
     938,   937,   934,   940,     0,     0,     0,     0,     0,   171,
     821,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   838,   839,   840,     0,   844,   841,
     843,     0,     0,   849,   848,   850,     0,     0,     0,     0,
       0,     0,   171,   171,   863,   201,   197,   202,   196,   199,
     198,   200,   869,   870,     0,     0,   872,   874,   171,   171,
       0,   881,   884,   171,   171,   908,   912,   954,   789,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1139,
     979,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   980,     0,     0,     0,     0,
       0,   799,   800,   171,   179,  1109,     0,     0,  1113,  1114,
       0,     0,   895,     0,   171,     0,  1148,  1150,   917,     0,
    1233,  1234,  1237,  1238,   215,   215,   215,   215,   215,   215,
     215,   215,   215,  1345,  1303,  1302,  1304,  1337,  1336,  1338,
    1334,  1333,  1335,  1328,  1327,  1329,  1325,  1324,  1326,  1307,
    1306,  1310,  1309,  1311,  1308,  1319,  1318,  1320,  1316,  1315,
    1317,     0,     0,  1354,     0,  1376,     0,   171,     0,  1380,
       0,     0,   254,     0,   251,     0,     0,     0,     0,     0,
     299,     0,     0,     0,     0,     0,     0,     0,   171,     0,
     334,   159,     0,   440,     0,   461,   179,   182,     0,     0,
     474,     0,   512,   513,     0,   477,     0,     0,     0,     0,
       0,   171,  1013,   182,   182,   182,   171,  1018,   182,   179,
     182,   182,   171,  1030,   182,   182,   182,   171,  1036,   182,
     182,   171,     0,   182,   171,   182,   182,   171,   182,   171,
    1069,  1070,     0,     0,   572,     0,   634,   641,   642,   643,
       0,   647,   648,   649,   655,   192,   189,   661,   682,   683,
     684,   685,   686,     0,   688,   689,   189,   189,   745,   746,
     747,   748,   750,     0,   753,   754,     0,   189,   756,   757,
     758,   759,   760,     0,   762,   763,   189,     0,     0,     0,
     189,   189,   186,     0,     0,     0,     0,     0,     0,   189,
     189,   186,     0,     0,     0,     0,     0,     0,   189,   189,
     186,     0,     0,     0,   189,   192,   192,   192,   192,   192,
       0,   192,   192,     0,   189,   189,   192,   192,   192,   192,
     192,     0,   192,   192,     0,   189,   675,   189,     0,   681,
       0,     0,   768,     0,   804,   182,     0,     0,   182,     0,
       0,     0,   814,   182,   817,   818,   182,   820,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   842,   845,   846,     0,   182,     0,     0,     0,   861,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1140,  1118,     0,  1125,
    1126,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   171,     0,     0,    88,     0,     0,   988,
     989,   179,     0,     0,     0,  1116,   894,   896,   179,   171,
    1226,  1331,  1330,  1332,  1322,  1321,  1323,  1313,  1312,  1314,
    1346,     0,  1356,  1387,     0,     0,  1382,  1381,   255,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   295,     0,
       0,   320,   182,   441,   445,   462,   464,     0,   472,   507,
     171,     0,     0,     0,     0,     0,     0,  1009,  1014,  1016,
    1015,  1019,  1020,  1021,  1022,  1026,  1031,  1032,  1033,  1034,
    1037,  1038,  1042,   179,   182,  1048,   179,  1049,  1053,   179,
    1063,   179,     0,   171,     0,   571,     0,   646,   657,   192,
     189,   690,   749,   189,     0,   755,   189,   764,   192,   192,
     192,   192,   192,     0,   192,   192,   189,   192,   192,   192,
     192,   192,     0,   192,   192,   189,   192,   192,   192,   192,
     192,     0,   192,   192,   189,   192,   705,   706,   707,   708,
     710,   189,   713,   714,     0,   192,   192,   734,   735,   736,
     737,   739,   189,   742,   743,     0,   192,   677,   189,   773,
     774,   171,   806,     0,   182,   808,     0,   171,     0,   815,
     819,   171,     0,   826,   827,   828,   829,   833,   834,   830,
     831,   832,     0,     0,   182,   853,     0,   171,     0,     0,
     866,   182,     0,     0,   182,   182,     0,   911,     0,   203,
     203,     0,     0,   203,     0,   203,  1095,     0,     0,     0,
       0,     0,     0,     0,     0,  1117,     0,     0,   203,   203,
       0,     0,     0,     0,     0,     0,     0,     0,   981,     0,
       0,     0,  1095,    89,     0,   203,     0,  1142,   171,   171,
       0,   179,     0,   237,  1389,  1388,     0,     0,   259,     0,
       0,     0,     0,     0,   303,     0,     0,     0,   335,   473,
       0,   354,     0,  1005,     0,   211,     0,  1043,  1044,  1047,
    1054,  1064,   395,     0,   354,     0,   658,   687,   751,   189,
     761,   696,   697,   698,   699,   700,   189,   702,   703,   192,
     725,   726,   727,   728,   729,   189,   731,   732,   192,   716,
     717,   718,   719,   720,   189,   722,   723,   192,   709,   192,
     189,   715,   738,   192,   189,   744,   678,     0,   182,   809,
       0,     0,     0,     0,     0,   835,   836,   851,     0,     0,
       0,   862,   867,     0,   875,   876,   868,   182,     0,   204,
    1095,  1095,    88,     0,  1095,     0,  1095,   955,   171,     0,
    1120,     0,  1123,  1163,  1124,  1122,  1119,     0,  1095,  1095,
      88,     0,     0,  1095,  1095,     0,     0,  1095,   984,   982,
     983,   962,  1095,  1095,  1142,  1158,     0,  1107,  1105,  1144,
       0,     0,     0,     0,   261,   293,   294,     0,     0,     0,
     292,     0,   354,   355,   357,   356,   406,     0,     0,   212,
     214,   213,  1007,  1008,   354,   408,     0,   752,   192,   704,
     192,   733,   192,   724,   711,   192,   740,   192,     0,   805,
     182,   182,     0,   182,     0,   182,   182,     0,   182,     0,
    1095,   968,   964,  1095,     0,   969,     0,   963,  1095,     0,
    1121,     0,   966,   965,  1095,     0,     0,   960,   958,  1095,
     171,   959,   961,   967,  1158,  1102,     0,     0,  1143,  1156,
    1145,  1225,     0,     0,   301,   302,   300,   321,   324,   322,
       0,     0,   407,  1004,   171,   409,   617,   701,   730,   721,
     712,   741,   182,   807,   813,     0,   825,   822,   852,   857,
       0,   871,     0,   973,   957,    88,     0,   971,  1164,     0,
     956,    88,     0,   972,     0,  1103,  1160,  1162,     0,  1155,
       0,     0,     0,     0,     0,     0,   211,     0,   810,   171,
     823,   854,   885,  1095,     0,     0,  1095,     0,   182,  1161,
    1157,   260,     0,     0,     0,     0,     0,  1006,   784,   171,
     811,   824,   171,   855,   975,     0,  1095,   974,     0,     0,
     262,   314,     0,   313,     0,   812,   856,    88,   976,    88,
    1095,   312,   311,  1095,  1095,   970,   978,   977
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    58,  1577,   178,   160,  1033,  2702,  2703,   474,   475,
     476,   477,   161,   162,   163,   799,   724,    99,   926,   497,
    1361,  1866,  1508,  1523,  1504,  2102,  2810,  1574,  2872,  1741,
     380,   876,   879,   882,   891,    68,   404,   410,   414,   417,
      73,   420,    80,   436,   432,   426,   443,    90,   453,   100,
     106,   459,   461,   463,   531,   986,  1837,   465,   468,   113,
     484,   164,   166,  2866,   182,   184,   229,  1028,  1072,   520,
     975,   522,   532,   978,   983,   534,   536,   989,   539,   991,
     550,   994,   996,   553,   557,   561,   563,   566,   570,   606,
     602,  1428,   584,  1014,  1019,  1011,  1416,  1025,   587,   614,
     623,  1036,   628,   633,   625,   598,   594,   638,   646,  1063,
    1065,  1067,  1069,   651,  1074,   232,   653,  1932,   251,   656,
     658,   662,   667,   675,   269,  1497,   690,   292,   733,  1513,
     735,   743,  1131,  1531,  1126,  1993,  1543,  1541,  1995,  1127,
    1533,  1535,   749,   752,   747,   294,   302,   304,   790,  1208,
    1600,  1197,  1695,  2145,  1211,  1215,  1206,  1058,  1470,  1474,
    1482,  1484,  2129,   310,  1224,  1227,  1235,  2456,  2457,  2458,
    2130,  2845,  2846,  1257,  1263,  1266,  2928,  2929,  2925,  2926,
    2976,  2459,  2460,   285,   318,   326,   334,   814,   809,   339,
     344,   346,   824,   831,  1292,  1297,   885,   873,   352,   320,
     261,   257,   356,   838,   362,   847,   862,   863,  1334,  1329,
    1760,  1319,  1782,  1754,  1794,  1790,  1750,  1776,  1772,  1746,
    1768,  1764,  1323,   867,   849,   368,   369,   384,  1347,   387,
     393,   903,   906,   900,   395,   398,   911
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2770
static const yytype_int16 yypact[] =
{
    5403,    97,    78,    19, -2770, -2770,  1223,  -145,  1325,   595,
     841,   522,  1418,   165,   354,    13,   650,    96,  5593,   528,
    1158, -2770,    44,   222,   245,  1227,   154,   549,   847,   -33,
     195,   223,   451,   815,    -4,   462,   930,  2834,   179,   -10,
     543,   471,   451, -2770,   327,    21,  1292, -2770,   582,   609,
     531, -2770,   497, -2770,    41,  3487,   375,    92,   640,   137,
     159,   340,   652,   641,   109,   714,    10,   169, -2770, -2770,
   -2770,   608,  1058, -2770,   572,    32,   354,    57,   312,   812,
   -2770,   762,  1058, -2770, -2770,  1058,  1058,    74,   656,  1058,
   -2770, -2770, -2770, -2770,  1058, -2770, -2770, -2770, -2770, -2770,
   -2770,    60,   658,   818,   820,   613, -2770,  1058,  1450,  1058,
    1058,   707,  1058, -2770, -2770, -2770,   628, -2770, -2770, -2770,
   -2770,  4948, -2770, -2770, -2770, -2770, -2770, -2770,  1058, -2770,
   -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770,
   -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770,
   -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770,
   -2770,  1382, -2770,  1058, -2770,   873, -2770, -2770,   354,   354,
     354,   354,   354,   354,   354,   354,   354,   354, -2770, -2770,
   -2770, -2770, -2770,   720, -2770,   795,  1532,   755,   123,   574,
     738,   461,  4284,   927,  5001,  3717,   889,  4948,  3199, -2770,
    1123,   -91,   838,   948,   884,   400,   407,   634,  1153,   964,
     438,   451,  1187, -2770,   705,   953, -2770,   768,   716,   409,
   -2770,   663, -2770,   467, -2770,   552,   940,    31, -2770, -2770,
    5075, -2770, -2770, -2770,   967,   965,  1023, -2770, -2770, -2770,
   -2770,    80, -2770, -2770, -2770, -2770,   843, -2770, -2770,  5075,
    4553, -2770,  1052, -2770,    23,  5075,  1083, -2770,    42,  5075,
    1090, -2770,    77, -2770,  1098,  1101,    99, -2770,  1058, -2770,
    1116,  1198,  1807, -2770,  1126, -2770, -2770, -2770, -2770,  1122,
   -2770, -2770,  1058, -2770,   354, -2770,   669,  1128,   501,   999,
    1138,    28, -2770, -2770, -2770,  1144,  1157,   354,   354,  1058,
    1058, -2770, -2770,  1159, -2770, -2770, -2770, -2770, -2770, -2770,
    1012,  1807, -2770,  1161,     7,  1058,  5075,  1058, -2770,  5075,
   -2770,  1172, -2770, -2770, -2770, -2770, -2770,  1058,  1183,   354,
    3032,  1058,  1382,  1058, -2770,  1190, -2770,  3926, -2770, -2770,
     671,  1195,  1211,  1058, -2770,  1219, -2770, -2770,     1,  1197,
    5075,  1240, -2770,  1309,  1058,  1148, -2770,   956,  1125,  1671,
      48,  1255, -2770, -2770, -2770, -2770, -2770, -2770, -2770,  1263,
   -2770,   146,   114,   134,   227,   112,  1058,  1266,  1058,   125,
   -2770,  1058,   980,  1278, -2770,  1058,  1058, -2770,    39,     8,
      58,  1280,  1382, -2770, -2770, -2770,   620,  1058, -2770, -2770,
   -2770, -2770, -2770,  1058, -2770,  1282,  1284, -2770,  1058,   783,
   -2770, -2770, -2770, -2770, -2770, -2770,  1058, -2770, -2770,  1058,
   -2770, -2770,   646,   646, -2770,  1290, -2770, -2770, -2770, -2770,
   -2770, -2770, -2770, -2770, -2770, -2770, -2770,  1081,  1058,  1058,
    1312,  1315,  1318, -2770, -2770,  1058,  1058,  1058,  1058,  1058,
    1058,  1321,  1058, -2770,  1326,  1058, -2770,  1329, -2770, -2770,
   -2770, -2770,   896, -2770,  1331, -2770,  5075,  1341, -2770,  1058,
   -2770, -2770, -2770,  1058,  1354,  1363,  1363,  5075,  1058,  1058,
    1058,  1058,  1058,  1058, -2770,  1058,  4948,  1450,  1058,  1058,
   -2770, -2770, -2770, -2770, -2770, -2770, -2770,  1450,  1058, -2770,
   -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770,
    1387, -2770,  1106,   -20, -2770, -2770, -2770, -2770, -2770, -2770,
   -2770, -2770, -2770,   383, -2770, -2770, -2770,  1217, -2770,   902,
     455,   455, -2770, -2770, -2770,  1410, -2770,  1416, -2770, -2770,
    -122, -2770,  1236, -2770, -2770, -2770,  1247, -2770, -2770,  1382,
   -2770,  1058,  1058, -2770,  5075,  5075,  1382, -2770, -2770,  1382,
   -2770, -2770, -2770, -2770,  1382, -2770, -2770,  5075,  1382,  1058,
   -2770, -2770,  5075, -2770,  1419,   190,  1224,    12, -2770, -2770,
    1239,  5075,    54, -2770, -2770, -2770, -2770, -2770, -2770,  1459,
    1464, -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770,  1476,
   -2770,  1264, -2770,    25, -2770,  1058, -2770, -2770,  1479,  1479,
   -2770, -2770,  1479,  1479, -2770,  1579, -2770, -2770, -2770, -2770,
   -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770,   552,
   -2770, -2770, -2770, -2770, -2770, -2770,  1281,  1298, -2770, -2770,
    1420,  1430,  1441, -2770, -2770,  1262, -2770,  1058,  1480,  1267,
    3926, -2770,  1382, -2770, -2770,  1508, -2770, -2770, -2770, -2770,
   -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770,
    5075,  5075,  5075,  5075, -2770, -2770, -2770, -2770, -2770, -2770,
   -2770, -2770,  1517, -2770, -2770, -2770, -2770,  1518,  1520,   354,
   -2770, -2770,  1522,  1525,  1319,  1058, -2770,  1807, -2770,  1530,
   -2770, -2770, -2770, -2770, -2770,  1058, -2770,   354, -2770, -2770,
   -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770,
   -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770,   371,
    1447,  1460,  1461, -2770,  1547, -2770,   459,  1463,    65,   163,
    5594,   456,  1552, -2770,  1556, -2770,  1559, -2770,     5, -2770,
    1560,  1561, -2770,  1565, -2770, -2770, -2770,  1058, -2770,  3926,
    4906,  1277,   777,  1566,   193,  1469, -2770, -2770, -2770,    34,
     938,  1570,  1575,   176,  1058,   216,   784,    95,  5075,   354,
    2105,   982,   141,    98,   328,    33, -2770,  1548,  1581,  1571,
   -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770,
    1058, -2770, -2770, -2770, -2770,  1058,  1058,  1058,  1058, -2770,
   -2770,  1058,  1382,  1058, -2770,  1058,  1450,  1058,  1577,  1382,
   -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770,  1591,   484,
     683, -2770, -2770, -2770,  1596, -2770, -2770, -2770, -2770,  1500,
   -2770,  1599,  1602,  1519,  1521,  1523,  1604, -2770,  1605, -2770,
    1607,  1524,  1611,   508,   514,   537,   399,   567,   560,   575,
    1613,   627, -2770, -2770,  1614,  1615,  1617, -2770, -2770,  1618,
   -2770, -2770, -2770, -2770,  1619, -2770, -2770,  1622, -2770, -2770,
    1623, -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770,  1058,
    1058, -2770,  1058,  1178,  1058,  1058, -2770,  3926,  1553,  1626,
   -2770,  1216,  1628, -2770,  1229,  1629, -2770, -2770,   -14,  1058,
    1058, -2770,  1631, -2770, -2770,  1632,  1108,  1058,  1633,   606,
   -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770,
   -2770, -2770, -2770, -2770,  1630,  1635,  1058,  1058,  1058,  1058,
    1058,  1639,  1058,  1642,  1058,  1644,   354,  1647,  1648,  1382,
    5075, -2770, -2770, -2770, -2770, -2770,  1382, -2770, -2770,  1058,
    1058,  1058,  5075,  1058,  1450,  1058, -2770,  1058, -2770, -2770,
   -2770, -2770, -2770,  1649,  1650, -2770, -2770, -2770, -2770, -2770,
   -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770,   927, -2770,
    1058, -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770,  5075,
    1058,  1382,  1382,   -14,   -14,   -14,  1382,  1450,  1058,  1382,
   -2770, -2770, -2770,  1058, -2770,    25,  1474,  1652,  1656, -2770,
   -2770,  1382, -2770,  1493,  1495, -2770,  1662,  1664, -2770,  1663,
    1238,  1641,  1654, -2770,  1058, -2770, -2770, -2770, -2770, -2770,
    4911,    -1,   978, -2770, -2770, -2770,  1058,    70,   996, -2770,
    1389, -2770,  2105,  1396,   267,  1379,   119, -2770, -2770,  1058,
   -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770,
    1058,  1692, -2770, -2770, -2770, -2770,   -14, -2770, -2770, -2770,
   -2770, -2770,  1694,  1696,  5029, -2770, -2770,  1697,  1700,  1058,
   -2770, -2770, -2770, -2770,  1701,  1705,  1706,   -25,   -25,   -30,
    1698,  1708,  1710,  1711,  1711,  1711,  1422,  1423,  1715,  1716,
    1717,   105,   105,   -30,  1720,  1721,   -30,  1723,  1729,  1730,
    1731,  1730,  1731,  5631,  1733,  1735, -2770, -2770,  1730,  1731,
     737, -2770,  1727,  1738,  1739,  1740,   -25,   -30,  1742,  1743,
   -2770,  1744, -2770, -2770,  1382,  1016,  1185,  1482,  1491,  1492,
    1643,   504,  1494,  1751,   412,  1638,  1676,  1121,   799,  1749,
    1528,  1529,  1681,  1788,  1567,   502,    36,   393,  1527,  5075,
    2105,  1759,   -17,  1538,  1574,  1799,    27, -2770, -2770,   506,
    1805,  1808, -2770, -2770, -2770,  1812,  1587,    81,  2105,  1589,
   -2770, -2770, -2770,   354,  1806,  1821,  1058, -2770, -2770, -2770,
   -2770, -2770, -2770, -2770, -2770, -2770,     9, -2770,  4146, -2770,
   -2770, -2770,  1058, -2770,  1058, -2770, -2770, -2770, -2770,  1058,
    1058,  1058,   193,  5075, -2770,  1825,  1347, -2770, -2770,  1058,
   -2770, -2770,  1058,  5075,  1058, -2770, -2770, -2770, -2770, -2770,
   -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770,
     354,  1058, -2770,  1058,   193,  1829,  1833, -2770, -2770, -2770,
   -2770,  1058,  1058, -2770,   354, -2770, -2770, -2770,   258,  1835,
    1837, -2770, -2770, -2770, -2770, -2770,  1058,  1058, -2770, -2770,
    1450,  1058,  1058, -2770, -2770, -2770, -2770,  1840,  1058, -2770,
    1058,  1728, -2770,  1058, -2770,  1058,  1732, -2770,  1842, -2770,
    1343,  1343,   655,   667,   703,  1343,  1843, -2770,   729, -2770,
     731,   736,   767,   794, -2770,  1845,  1846,   801,  1850, -2770,
    1851,  1852,  1855, -2770,   854,   901,  1856,  1860,  1862, -2770,
   -2770,  1863,  1864,  1867, -2770,  1343,  1343,  1343,  1058, -2770,
   -2770, -2770,  1058, -2770,  1058,   871,  5075, -2770,  1058, -2770,
    1382, -2770,  3926, -2770, -2770,  1868, -2770, -2770,  1872, -2770,
   -2770, -2770, -2770,  1844,  3032, -2770,  1058,  1849,  1058,  1058,
    1058,  1005, -2770,  1874,  1058,  1058,  1875,  1058,  1058,  1876,
    1058,  1878,  1058,    14,  1879,   354,   354, -2770,  1382,  1058,
    1881,  1882,  1883,  1382,  5075, -2770,  1058, -2770, -2770, -2770,
    1058,  1058,  1058,  1382,  5075,   -14, -2770, -2770, -2770, -2770,
    1450,  1058,  1884,   -14,  1058,   192, -2770,  1886, -2770, -2770,
     885,  3244,  1058, -2770,  1058,  1885,  1880,  1058, -2770, -2770,
   -2770,  1887,  1265,  4948,  1634,  1636,  1637,    29,  5075,  1645,
   -2770,   439,  1724,    73,  1646,  1657,   127, -2770, -2770,    26,
    1709,   474,  -114,  2105,   829, -2770,  1890,  1625, -2770,   529,
   -2770, -2770, -2770, -2770,  2105,  1670, -2770, -2770, -2770, -2770,
   -2770,  1058, -2770,  1058, -2770, -2770,  1058,  1058, -2770,  1058,
   -2770,  1058, -2770, -2770, -2770, -2770,  1685,  1058, -2770,  1058,
     183, -2770, -2770, -2770, -2770,  1900,  1901, -2770,  1058,   -25,
     -25,   -25, -2770, -2770, -2770, -2770, -2770, -2770,  1904,   -25,
     -25,   -25,   570, -2770, -2770, -2770, -2770,   105,   -25,   -25,
     -25, -2770, -2770,   -25,   -25,  1905,   -25,   -25,  1906,   105,
     840, -2770,   764, -2770,   897, -2770, -2770, -2770,  1908,  1910,
    1912, -2770,   814, -2770,   837, -2770, -2770,  1624,  1918,  1919,
    1920,   105,   105,   -30,  1907,  1923,   -30,  1924,  1927,  1929,
     -25,   -25, -2770,  1930,   -25,   -25, -2770,  1932, -2770, -2770,
   -2770, -2770, -2770, -2770,   354, -2770, -2770, -2770,  4948,  1435,
    1058,  1458,  1496,   858, -2770, -2770, -2770,   864, -2770, -2770,
   -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770,
    1933,  1058, -2770,   354,  1936,  1058,  5075,   354,  1537,  1667,
    1674,   138,   160,  1682,   173,  1608,  1609,  1938,  1940,  1943,
     504,  1945,  1946,  1947,  1616,  1620,  1385,  1948,  1058,  1543,
    1586, -2770, -2770,   354,  5075, -2770, -2770,  5075,  1058,    68,
    1950,  1058,  1382,   354, -2770,  1951,  5075,  5075,  1058, -2770,
   -2770, -2770,   354,   354,  5075, -2770, -2770, -2770, -2770, -2770,
   -2770,  5075,  1058,   354, -2770, -2770, -2770,  1058, -2770, -2770,
    1953,  1058,  1712,   150,  1058,  1713,  1058,   185,  1058, -2770,
    1058,  1718,  1722,  1058,  1058,  1058,  1058,  1058,  1058,  1058,
    1058,    16,  1058,  1058,  1736, -2770,  1058,  1058,  1058,  1058,
   -2770,  5075,  1382,  1957,  1959,  1960,  1058,  1058,  1382, -2770,
    1058,  1058,  1058,  5075,   193, -2770,  1058,  1058, -2770, -2770,
   -2770,  1962, -2770, -2770, -2770, -2770, -2770, -2770,  1969,  1058,
    1058, -2770,  1058,  1058, -2770, -2770, -2770, -2770, -2770, -2770,
   -2770, -2770, -2770,  1970,  1971,  1973, -2770,  1975,  1977,  1974,
   -2770,  1979,  1980,  1982, -2770, -2770,  1343,  1983,  1984,  1986,
   -2770,  1987,  1989,  1991, -2770,  1992,  1994,  1996, -2770,  1998,
    2002,  1997, -2770,  2004,  2005,  2007, -2770,  2008,  2009,  2010,
    2011,  2016, -2770,  2017, -2770, -2770, -2770,  2018,  2019,  2021,
   -2770,  2022,  2024,  2026, -2770, -2770, -2770, -2770, -2770, -2770,
   -2770, -2770, -2770, -2770,  1058,  1058,  1058, -2770, -2770,  1058,
   -2770,  1382, -2770, -2770,  3032,  1058,  1382,  1058,  1058,  1058,
   -2770,  1058,  1058,  2027,  1058, -2770,  1058,  1058,  2029,  1058,
    1058,  2030,  1058,  2031,  1058, -2770, -2770,  2033,  5075, -2770,
   -2770, -2770,  1058, -2770, -2770, -2770, -2770,  1382, -2770,  1103,
    1058,  1103,   -14,  1382,  5075,  1058,  1058,  2034, -2770, -2770,
   -2770,  1058, -2770, -2770, -2770, -2770, -2770,  5075, -2770,  5075,
    1058, -2770, -2770,    25,  2036,  2039,  2040,  2041,  2042,  5075,
    1382, -2770,  5075,  5075,  5075,  4948,  5075,  1382,  5075, -2770,
   -2770,  5075, -2770, -2770,  4948,  5075,  5075,  5075,  4948,  5075,
   -2770,  5075,  5075,  1058, -2770, -2770,  5075,  5075,  5075, -2770,
   -2770,  5075,  5075, -2770, -2770, -2770, -2770,  5075,  5075, -2770,
   -2770, -2770, -2770, -2770,  1058,  1058, -2770, -2770,  2044,  1058,
   -2770, -2770,  2045, -2770, -2770,  1058, -2770, -2770, -2770,   -25,
   -2770, -2770, -2770,  2046,  2047,  2048, -2770, -2770,   -30,  2050,
    2051,  2052,   -25, -2770, -2770, -2770, -2770, -2770,   105, -2770,
   -2770,  2054,   -25,  2064,  2065,  2066,   105,   105,   -30,  2069,
    2070,  2071,  1659,  2072,  2073,  2074,   105,   105,   -30,  2076,
    2077,   -30,  2081,  2082,  2083,  2085,   105,   105,   -30,  2078,
    2087,  2088,   936, -2770,  1095, -2770,  1146,  1678,  2089,  2090,
    2091,   105,   105,   -30,  2093,  2094,   -30,  2095,  1691,  2098,
    2099,  2104,   105,   105,   -30,  2106,  2107,   -30,  2108,   105,
   -2770, -2770, -2770, -2770, -2770,  2110, -2770, -2770,  2111,   105,
    2122,  2123, -2770, -2770,   -25, -2770, -2770,  2135, -2770,  1382,
   -2770,  5075,  1058,  1058,  5075,  1058,  2137,  1185, -2770, -2770,
   -2770, -2770, -2770, -2770,  2141,  5075,   354,  2142,  5075,  1382,
   -2770,  2143,  1185,  1058,  1058,  1058,  1058,  1058,  1058,  1058,
    1058,  1058,  2145,  2146, -2770, -2770, -2770,  2147, -2770, -2770,
   -2770,  2149,  2151, -2770, -2770, -2770,  1058,  5075,  1058,  2155,
    1185,   354,  1382,  1382, -2770, -2770, -2770, -2770, -2770, -2770,
   -2770, -2770, -2770, -2770,  1058,  1450, -2770, -2770,  1382,  1382,
    1058, -2770, -2770,  1382,  1382, -2770, -2770, -2770, -2770,  1058,
    1058,  1058,  1058,  1058,  1058,  1058,  1058,  1058,  1058,  2535,
   -2770,  1058,  1058,  1058,  1058,  1058,  1058,  1058,  1058,  1058,
    1058,  1058,  2001,  2156,  1058, -2770,  1058,  1058,  1058,  2152,
    2158, -2770, -2770,  1382,   -14, -2770,  2159,  2160, -2770, -2770,
    1450,  1058, -2770,  2162,  1382,  5075, -2770, -2770, -2770,  2163,
   -2770, -2770, -2770, -2770,  1343,  1343,  1343,  1343,  1343,  1343,
    1343,  1343,  1343, -2770, -2770, -2770, -2770, -2770, -2770, -2770,
   -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770,
   -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770,
   -2770,  1185,  1058, -2770,  1058, -2770,  1058,  1382,  1058, -2770,
    1450,  1058, -2770,  1058, -2770,  1985,  2164,  2165,  1058,  1058,
   -2770,  1058,  1058,  2167,  1058,  2169,  1058,  2170,  1382,  5075,
   -2770, -2770,  1058, -2770,  1058, -2770,   -14,   885,  1058,  2172,
   -2770,  1058, -2770, -2770,  4948, -2770,  2173,  2174,  2175,  2176,
    2177,  1382, -2770,   885,   885,   885,  1382, -2770,   885,   -14,
     885,   885,  1382, -2770,   885,   885,   885,  1382, -2770,   885,
     885,  1382,  5075,   885,  1382,   885,   885,  1382,   885,  1382,
   -2770, -2770,  2171,  4948,  2178,  1058, -2770, -2770, -2770, -2770,
    2180, -2770, -2770, -2770, -2770,   -25,   105, -2770, -2770, -2770,
   -2770, -2770, -2770,  2181, -2770, -2770,   105,   105, -2770, -2770,
   -2770, -2770, -2770,  2182, -2770, -2770,  2183,   105, -2770, -2770,
   -2770, -2770, -2770,  2184, -2770, -2770,   105,  2186,  2189,  2190,
     105,   105,   -30,  2194,  2195,  2196,  2197,  2198,  2199,   105,
     105,   -30,  2201,  2202,  2205,  2207,  2209,  2214,   105,   105,
     -30,  2203,  2217,  2218,   105,   -25,   -25,   -25,   -25,   -25,
    2220,   -25,   -25,  2223,   105,   105,   -25,   -25,   -25,   -25,
     -25,  2226,   -25,   -25,  2228,   105, -2770,   105,  2231, -2770,
    2232,  2233, -2770,  3926, -2770,   885,  2234,  5075,   885,  1058,
    5075,  2238, -2770,   885, -2770, -2770,   885, -2770,  5075,  2239,
    1058,  1058,  1058,  1058,  1058,  1058,  1058,  1058,  1058,  1058,
    1058, -2770, -2770, -2770,  5075,   885,  1058,  5075,  2242, -2770,
    1450,  1450,  5075,  1450,  1450,  5075,  5075,  1450,  1450,  1058,
    1058,  1058,  1058,  1058,  1058,  1185,  1058,  1058,  1058,  1610,
    1653,  1668,  1675,  1770,  1782,  1787,  2535, -2770,  1841, -2770,
   -2770,  1185,  1058,  1058,  1058,  1058,  1185,  1058,  1058,  1058,
    1058,  1058,  1058,  1382,  1058,  1673,  1185,  1058,  1058, -2770,
   -2770,   -14,   354,  5075,  5075, -2770, -2770, -2770,   -14,  1382,
    2247, -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770,
   -2770,  1058, -2770, -2770,  1450,  1058, -2770, -2770, -2770,  1328,
    2249,  2250,  2252,  2253,  1058,  1058,  2254,  1058, -2770,  2255,
    1103, -2770,   885, -2770, -2770, -2770, -2770,  2256, -2770, -2770,
    1382,  2258,  2259,  2262,  2263,  5075,  2264, -2770, -2770, -2770,
   -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770,
   -2770, -2770, -2770,   -14,   885, -2770,   -14, -2770, -2770,   -14,
   -2770,   -14,  2265,  1382,  2267, -2770,  1058, -2770, -2770,   -25,
     105, -2770, -2770,   105,  2269, -2770,   105, -2770,   -25,   -25,
     -25,   -25,   -25,  2270,   -25,   -25,   105,   -25,   -25,   -25,
     -25,   -25,  2271,   -25,   -25,   105,   -25,   -25,   -25,   -25,
     -25,  2273,   -25,   -25,   105,   -25, -2770, -2770, -2770, -2770,
   -2770,   105, -2770, -2770,  2274,   -25,   -25, -2770, -2770, -2770,
   -2770, -2770,   105, -2770, -2770,  2275,   -25, -2770,   105, -2770,
   -2770,  1382, -2770,  5075,   885, -2770,  2276,  1382,  1058, -2770,
   -2770,  1382,  1058, -2770, -2770, -2770, -2770, -2770, -2770, -2770,
   -2770, -2770,  1058,  1058,   885, -2770,  2277,  1382,  1058,  1450,
   -2770,   885,  1058,  1450,   885,   885,  5075, -2770,  1058,  2278,
    2278,  1058,  1058,  2278,  1185,  2278, -2770,  5075,   504,  2279,
    2282,  2283,  2284,  2285,  2287, -2770,   354,  1185,  2278,  2278,
    1058,  1058,  1185,  1058,  1058,  1058,  1058,  1058, -2770,  1450,
    1058,  2288, -2770, -2770,  1058,  2278,   354,    53,  1382,  1382,
     354,   -14,  2290, -2770, -2770, -2770,  2291,  1058, -2770,  2292,
    2294,  2295,  2296,  2297, -2770,  2298,  2299,  1058, -2770, -2770,
    2302,    -5,  5075, -2770,  2303,     6,  5075, -2770, -2770, -2770,
   -2770, -2770, -2770,  2305,    -5,  1058, -2770, -2770, -2770,   105,
   -2770, -2770, -2770, -2770, -2770, -2770,   105, -2770, -2770,   -25,
   -2770, -2770, -2770, -2770, -2770,   105, -2770, -2770,   -25, -2770,
   -2770, -2770, -2770, -2770,   105, -2770, -2770,   -25, -2770,   -25,
     105, -2770, -2770,   -25,   105, -2770, -2770,  1058,   885, -2770,
    5075,  5075,  1058,  5075,  1058, -2770, -2770, -2770,  5075,  5075,
    1058, -2770, -2770,  5075, -2770, -2770, -2770,   885,  2308, -2770,
   -2770, -2770,  1185,  1058, -2770,  2309, -2770, -2770,  1382,  2310,
   -2770,  2313, -2770, -2770, -2770, -2770, -2770,  2314, -2770, -2770,
    1185,  1058,  2315, -2770, -2770,  1058,  5075, -2770, -2770, -2770,
   -2770, -2770, -2770, -2770,    53,  1703,  2105, -2770, -2770, -2770,
     354,  2316,  2317,  2319, -2770, -2770, -2770,  2321,  2323,  2324,
   -2770,   214,    -5, -2770, -2770, -2770, -2770,  2326,  5075, -2770,
   -2770, -2770, -2770, -2770,    -5, -2770,  2328, -2770,   -25, -2770,
     -25, -2770,   -25, -2770, -2770,   -25, -2770,   -25,  3926, -2770,
     885,   885,  1058,   885,  2329,   885,   885,  1058,   885,  1058,
   -2770, -2770, -2770, -2770,  2330, -2770,  1058, -2770, -2770,  2331,
   -2770,  1058, -2770, -2770, -2770,  2333,  1058, -2770, -2770, -2770,
    1382, -2770, -2770, -2770,  1703, -2770,  1748,  1902,  2105, -2770,
   -2770, -2770,  2335,  2364, -2770, -2770, -2770, -2770, -2770, -2770,
    1210,  1210, -2770, -2770,  1382, -2770, -2770, -2770, -2770, -2770,
   -2770, -2770,   885, -2770, -2770,  2334, -2770,  4948, -2770, -2770,
    2366, -2770,  1185, -2770, -2770,  1185,  1058, -2770, -2770,  1058,
   -2770,  1185,  1058, -2770,  5075, -2770,  1748, -2770,   354, -2770,
    2367,  2368,  1058,  1058,  1058,  1058,     6,  2370,  4948,  1382,
   -2770,  4948, -2770, -2770,  1058,  2373, -2770,  1058,   885, -2770,
   -2770, -2770,  2374,  2375,  1058,  2376,  1058, -2770, -2770,  1382,
   -2770, -2770,  1382, -2770, -2770,  2378, -2770, -2770,  2379,  2381,
   -2770, -2770,  2382, -2770,  2383, -2770, -2770,  1185, -2770,  1185,
   -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2770, -2770,    -3, -2770,   365, -1012, -1651, -1119,  1557, -2770,
     968,  -241,  2055,   -54,    18, -2770,  -307, -1844,  1603,  1767,
    -974,   470, -1036,  1795,  1726, -2770, -1223, -2770,  -911, -1186,
   -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770,
   -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770,
   -2770, -2770, -2770, -2770,  -749,  -516, -2770, -2770, -2770, -2770,
   -2770, -2770, -2770, -2181, -2770, -2770, -2770, -2770, -2770, -2770,
   -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770,
   -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770,
   -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770,
   -2770,   800, -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770,
   -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770,
   -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770,   367,
   -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770,
    -310,   -51, -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770,
   -1618, -2770, -2770, -2770, -2770, -2770,  -766, -2770, -2770, -2770,
   -2770, -2770, -2770,    55, -2770, -2770, -2770, -2770,  -196,  -774,
     619,  -577, -2770, -2770, -2770, -2770, -2770,  -641,  -629, -2770,
   -2770, -2769, -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770,
   -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770,
   -2770, -2770, -2770, -2770, -2770, -2770, -2770,  1452, -2770, -2770,
   -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770,
   -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770, -2770,
   -2770, -2770, -2770, -2770, -2770, -2770, -2770
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1359
static const yytype_int16 yytable[] =
{
      72,   392,  2077,  1415,   791,  2242,  1250,  2244,   112,  1223,
    1226,   793,   901,   181,  1669,   987,  1016,   114,  1134,    69,
      70,  2142,    69,    70,    69,    70,  2863,  1578,   677,  1407,
    1408,  1409,  1651,   750,   331,    69,    70,  2869,  1267,    69,
      70,   412,   355,   897,    69,    70,   649,   683,   114,  1885,
    1209,   386,  1900, -1141,   397,   333,   168,   403,  1022,   169,
    1835,   409,   904,   340,   416,   457,  1461,  1135,   419,   421,
    1906,  1635,   431,    69,    70,   438,   442,  1525,   448,   445,
    1528,   688,   446,   447,    69,    70,   455,  1359,   973,    60,
     992,   456,   170,  1894,  2095,    69,    70,   348,    69,    70,
     171,  1563,  1490,   693,   469,   473,   478,   479,   483,   485,
     864,   252,    69,    70,  1258,  1742,  1659,  2096,   114,  1755,
    2097,  1521,  1645,   659,   883,   489,    69,    70,    69,    70,
    1228,  2098,    61,  1907,  1229,  1485,  1268,  1462,   114,   488,
     119,   114,   400,   585,  1269,  1502,  1254,  1898,  1506,  1801,
    1802,  1803,    62,    69,    70,  1119,  2099,  2977,  2065,   993,
     498,   829,    69,    70,    59,   172,    81,  1463,  1031,   270,
     660,   119,    69,    70,  2100,   341,   865,  1503,  1636,   870,
    2067,   874,    63,   114,   335,   530,   974,   678,    69,    70,
     551,  1017,  1218,  2070,  1012,  1023,  1860,   165,  2864,   114,
     295,   877,  1930,  1908,    64,   434,   684,  2999,    65,  2870,
    1901,   552,  1230,   560,  1136,   565,   569,    69,    70,   402,
     293,  1486,    66,  1660,   173,   794,   605,   694,   303,  1259,
    1646,   114,   795,   796,   353,  1120,   122,  1231,   427,   449,
     450,   119,   586,   647,   123,   124,   966,   117,   650,   117,
     435,   183,   174,  1121,   175,  1464,   969,  1199,   342,   871,
    1507,   119,   296,  1719,   119,   695,   615,   122,   343,   797,
      69,    70,  1360,  1902,  1720,   123,   124,  1522,  1478,   727,
    1199,  1260,   176,   819,   254,   830,   297,   898,   451,   689,
    1886,   661,  1647,  1137,   880,  1032,   757,   758,  1652,  1472,
     679,   415,  2865,  1200,  1138,   319,   119,   258,  1232,   458,
    1465,  1836,   800,  2871,   802,    69,    70,   413,  1210,   685,
     884,   902,   119,   751,   805,   808,  1200,   811,   815,   523,
     817,  1261,   114,  1122,  1895,   524,   127,   122,  1139,    71,
     827,   354,  1670,   452,   298,   123,   124,   866,   813,  2143,
     837,   839,  1018,   177,   119,   680,  1637,   122,   114,   899,
     122,   385,  1270,   428, -1141,   123,   124,   127,   123,   124,
     872,   905,   889,   886,  1024,   888,   890,   525,   892,   167,
     179,   798,   895,   896,  1094,  1095,   157,   253,  1899,   349,
    1090,   158,   159,   910,   912,   301,  1643,  2121,    67,  2066,
     913,  1661,   122,   338,   526,   916,   918,   429,   430,  1219,
     123,   124,   396,   919,  1663,  1233,   920,   157,   122,  1262,
    2937,  2068,   158,   159,   401,  1255,   123,   124,   125,   408,
     125,  1854,  2126,  1096,  2071,   930,   931,   127,  1603,  1858,
    1931,   433,   935,   936,   937,   938,   939,   940,  2101,   942,
     122,  1201,   944,  1256,   527,   119,  1701,   127,   123,   124,
     127,  1315,   591,  2047,  1107,  1889,   951,  1202,  1203,   595,
     952,   630,  1108,  1109,  1201,   957,   958,   959,   960,   961,
     962,   119,   963,   608,   473,   967,   968,   157,  1713,  2062,
    1202,  1203,   158,   159,   473,   970,  1480,  1220,   528,   529,
    1222,   381,   127,   639,   965,   609,   736,   157,   336,   305,
     157,  2090,   158,   159,   640,   158,   159,  2025,   127,   337,
    2028,  1110,   610,  1288,   299,    69,    70,  1316,  1633,   321,
     437,   255,  1653,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,  1583,   641,  2938,  1128,   345,   999,  1000,
     127,   122,   157,   271,   259,  1916,   256,   158,   159,   123,
     124,   107,   347,  2875,  1204,  1205,  1008,   371,   157,  1317,
    2183,  1584,   300,   158,   159,  1283,   422,   122,   372,   260,
    1097,  1098,   108,  1943,  1944,   123,   124,  1204,  1205,   528,
    2939,   306,  1604,  1013,   272,   976,  1075,   273,  1310,   850,
     157,  1289,  1034,   984,  1312,   158,   159,  1585,   373,   117,
    1370,    69,    70,   370,   230,  1586,   274,  1371,   466,  1890,
     611,  1587,    91,    69,    70,   737,  1129,   642,   394,  1320,
     382,   231,  1945,   363,   405,   275,   350,  1326,   599,   109,
     399,  1264,  1588,   467,  1070,   407,   537,  1059,   985,   728,
    1324,   127,   276,    69,    70,   538,   977,   406,   277,  1099,
     454,   351,   755,   756,  1589,   852,   738,   739,  1111,  1112,
    1100,  1101,   643,  1605,   729,   921,  2727,   127,  1311,  1909,
    1639,  2942,  1590,   634,  1313,   364,  1125,  1640,   460,  1331,
    1919,   374,  1089,  2945,   810,  1321,   365,  1290,  1318,   307,
    1891,   157,  1092,  1327,  1102,  1144,   158,   159,   278,   592,
      69,    70,   740,  1917,   308,   180,   596,  1743,   631,   411,
    1591,  1606,  1293,  1395,   383,   600,   820,   157,   366,  1747,
    1325,   279,   158,   159,   593,   110,   375,   875,   878,   881,
     418,   597,  1547,   632,   922,   644,   480,  1113,  1892,  1634,
    1548,  1549,   909,  1654,  1143,  1332,    92,   612,  1114,  1115,
    1592,  1904,   601,  1116,   821,  1751,  1411,   444,  1905,  1972,
     741,  1221,   613,  1291,  1234,  1593,  1918,  1973,  1974,  1946,
    1947,  1192,   309,  1744,   423,    93,    69,    70,  1594,    94,
     125,  1757,  1117,  1761,   917,  1748,   742,  1274,  1765,  1550,
    1294,   645,  1275,  1276,  1277,  1278,  1193,   635,  1279,   376,
    1281,  1536,  1282,   473,  1284,    69,    70,  1595,  1545,  1997,
    1617,   822,   923,   462,   481,   464,  1975,  1998,  1999,  1769,
    1596,  1752,  1597,  1598,   730,   731,   860,   111,   424,   377,
     280,   486,  2008,  1350,   510,   425,    95,   378,  1199,  1618,
    2009,  2010,  1619,  1963,  1964,  1620,  1773,  1758,  1948,  1762,
     311,  2255,   511,  1779,  1766,   379,  1322,   281,   282,  1949,
    1950, -1358,   286,  1599,  1328,  1807,  2000,   499,  2245,   283,
     312,   521,   313,   284,  1621,   533,  1342,  1343,    96,  1344,
    1346,  1348,  1349,   439,  1200,  1770,  1295,    97,    98,  2011,
     946,   947,  1965,  1951,   367,   588,  1362,  1363,  1863,  1864,
    1983,  1984,  2300,  1367,  1368,  1622,  1787,  1225,  1623,   924,
     482,   562,  1774,   535,   636,   925,  1333,   101,  2401,  1780,
      69,    70,  2313,  1374,  1375,  1376,  1377,  1378,   732,  1380,
     823,  1382,  2323,  2409,   102,  2326,  1551,  1552,  2165,  2337,
    2338,  1194,  2333,   589,  1745,   637,  1390,  1391,  1392,  1985,
    1394,   473,  1396,  1791,  1397,   287,  1749,  2370,  1910,  2048,
    2373,  2428,  1296,  1976,  1977,  2051,   590,  1212,  2381,   607,
     288,  2384,  1788,   980,   117,  1400,  1865,  1402,  2491,  2492,
    2493,  2494,  2495,  2496,  2497,  2498,  2499,  1404,  2339,    69,
      70,   440,  1753,   663,   473,  1412,  1401,  1466,    69,    70,
    1414,  1195,  1475,  1911,   624,   314,   760,   761,   841,   289,
     626,  1251,   627,  2001,  2002,  1553,   629,  1427,  1759,  1792,
    1763,  1431,   648,   103,   654,  1767,  1554,  1555,  1196,  1725,
     655,  1556,  1201,  1471,  1473,  1476,  2012,  2013,  1624,  1966,
    1967,  1481,  1978,   657,  1085,  1213,  1487,   676,  1202,  1203,
    2819,    69,    70,  1979,  1980,  1823,  1771,  1488,  1981,  1540,
    1557,  1537,  1093,   762,  2049,   290,  1912,   315,  1546,   763,
    2052,   104,  1625,   664,   842,   441,  1498,   682,   764,   291,
     765,   981,  2500,  1775,   687,   766,   744,  1982,   767,  1252,
    1781,  1568,  2003,   691,   768,   692,  1986,  1987,  2346,  2347,
    1626,    69,    70,  2004,  2005,   769,   745,   105,  2006,  1366,
     696,   843,   844,   770,   316,  2014,   726,   665,  1968,  2050,
      91,   725,   771,   734,   317,  2053,  2015,  2016,  1913,  1969,
    1970,  2017,  1609,   748,  1237,  2340,  2341,  2007,   753,  1265,
     772,  1214,  1467,  1789,   322,  1204,  1205,  2348,   603,  2355,
    2356,  2903,   754,  1638,   759,   125,   792,   571,   666,  1855,
    2018,  1610,   773,  1971,  1611,   982,   233,   804,  1569,  2914,
    2482,    69,  1345,   572,  1662,  1988,    69,    70,    69,    70,
     774,  1575,  1576,  1668,   818,  1253,  1989,  1990,   234,   825,
    1793,   235,   832,   775,   776,   746,  1612,   573,  2357,  1696,
     117,  1697,  1468,    69,    70,   826,  1698,  1699,  1700,   604,
    1353,  1354,   806,   828,  2342,   845,  1706,   574,   777,  1707,
    1991,  1709,   616,  1356,  1357,  2343,  2344,  1613,   236,  1469,
    1614,    69,  1426,   697,   834,   237,   698,   575,  1711,   840,
    1712,   576,   778,   848,   617,   846,   238,   239,  1716,  1717,
     868,  1570,  1571,   240,    92,   699,   779,   869,   780,  2345,
     887,   618,  2525,  1723,  1724,   893,  1572,   473,  1726,  1727,
     577,   578,   894,   781,   907,  1729,   914,  1730,   782,   915,
    1732,   241,  1733,    93,   928,  2543,   783,  2241,  1811,   929,
     807,   700,   323,   784,  2349,  2350,  2583,   701,   324,   242,
     325,  1384,    69,    70,  2993,  2592,   932,   357,   262,   933,
    2996,  1573,   934,   785,  2601,   941,  2674,   243,   244,    82,
     943,    69,    70,   945,   245,  1804,   948,   786,   787,  1805,
     788,  1806,  2687,   579,  1181,  1809,   950,  2692,   835,   263,
    1874,  1704,  1705,   580,    95,  2358,  2359,   702,   984,   246,
    1182,  1815,   470,  1818,    83,  1820,  1821,  1822,  1824,  1183,
    1615,  1826,  1827,   472,  1829,  1830,  3033,  1832,  3034,  1834,
    1184,   789,  1817,  2351,  1736,  1737,  1842,   619,  2716,  2083,
    2084,   125,   971,  1848,  2352,  2353,    96,  1849,  1850,  1851,
     972,   247,   979,   985,  1616,    97,    98,   473,  1856,  1037,
     358,  1859,  1038,  1039,   988,  1185,   490,   581,   582,  1869,
     990,  1870,   114,  1010,  1872,   359,   836,  1875,  2354,    74,
     995,   264,   997,  1861,  2360,    75,   115,  1186,    69,    70,
    2041,  1015,    84,   954,   955,  2361,  2362,  2811,   265,   620,
    2814,  1881,  2816,    69,    70,   248,  1020,   116,   470,   471,
     472,    69,    70,  2044,  1026,  2828,  2829,   249,  1921,  1027,
    1922,  1514,  1515,  1923,  1924,   117,  1925,    76,  1926,  2363,
    1029,  1030,  2843,  1035,  1928,  1071,  1929,  1062,  1060,   703,
      85,    86,   583,  1187,   491,  1935,   621,  1064,   250,    69,
      70,  2046,  1575,  1576,    77,  1061,   622,  2706,  1066,  1068,
    1876,  1877,   266,  1077,  2710,  1073,   704,   705,   492,   493,
     360,  1082,  1083,   118,  1084,  1878,  1086,   494,   706,  1087,
    1738,  1739,   707,  1188,   361,  1091,  1088,  1103,    87,    88,
      69,    70,  2061,  1575,  1576,   119,    69,    70,  2087,   495,
    1104,  1105,  1106,  1118,    78,  2815,   267,  1130,  1665,   496,
    1132,  1189,  1740,  1133,  1271,  1140,  1141,   268,  2827,  1142,
    1879,  1198,  1207,  2832,  1216,  1273,  2042,  2043,  2045,  2737,
    1217,  1285,  2739,  1040,  1041,  2740,   512,  2741,   120,    69,
      70,  2089,  1575,  1576,    89,  1287,  2040,  1272,  2055,    79,
    1298,  1299,  2058,  1190,  1300,  1191,   513,  1301,  1305,  1302,
    1306,  1303,  1307,  1304,  1308,  1710,  1309,  1330,  1351,  1335,
    1336,  1337,  1338,   514,  1339,  2086,  2088,  1340,  1341,  1718,
    1352,   121,  1355,  1358,  1372,  2094,   515,  1365,  2104,  1373,
    1042,   122,  1364,  1379,  1369,  2110,  1043,  1381,  1383,   123,
     124,  1385,  1386,  1417,  1398,  1399,   125,  1418,   516,  2115,
    1419,   126,   517,  1421,  2117,  1422,  1423,  1425,  2119,  1424,
    2122,  2123,  1477,  2125,  2127,  2128,   518,  2131,  1429,  1479,
    2134,  2135,  2136,  2137,  2138,  2139,  2140,  2141,  2144,  2146,
    2147,  1430,  1483,  2149,  2150,  2151,  2152,  1489,  1491,  1044,
    1492,  1495,  1509,  2158,  2159,  1496,  1499,  2161,  2162,  2163,
    1500,  1501,  1510,  2166,  2167,  1511,  1512,  1045,  1516,  1517,
    1518,  1519,  1520,   519,  1526,  1527,  2170,  2171,  1529,  2172,
    2173,  1558,  1046,   850,  1530,  1532,  1534,  2850,  1542,  1047,
    1544,   127,  1559,  1579,  1560,  1561,  1564,  1048,  1565,  1566,
    1839,  1840,  1580,  1581,  1582,  1601,  1602,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,  1607,  1608,  1627,  1628,
    1629,   157,  1630,  1631,  1641,   851,   158,   159,  1644,   852,
    1632,  2211,  2212,  2213,  1650,  1648,  2214,  1649,  1049,  1655,
    1666,  2216,  2219,  1656,  2221,  2222,  2223,  1657,  2224,  2225,
    1658,  2227,  1664,  2228,  2229,  1667,  2231,  2232,  1050,  2234,
    1703,  2236,  2218,  1051,  1714,  1052,   853,   854,  1715,  2239,
    1721,   855,  1722,  2992,  1728,  1731,  1735,  2243,  1756,  1734,
    1777,  1778,  2248,  2249,  1783,  1814,  1784,  1785,  2251,  1786,
    1819,  1795,  1053,  1054,  2433,  1796,  1797,  2254,  1798,  1799,
    1055,  1800,  1893,  1812,   708,   709,   710,  1813,  1825,  1828,
    -482,  1831,   856,  1833,  1838,  1843,  1844,  1845,  1857,  1871,
    1056,  1862,  1873,  1903,  1914,  1882,  1915,  1883,  1884,  1920,
    2282,   711,  1927,  2267,  1933,  1934,  1888,  1896,  1939,  1958,
    1961,  2026,  2273,  1992,   712,  1994,  2278,  1996,  1897,  2485,
    2019,  2290,  2291,  2020,  2021,  2022,  2293,  2027,  2063,  2029,
     713,  2030,  2295,  2031,  2034,  2064,   857,  2037,  2054,  2038,
     858,  2057,  2074,  2069,  2075,  2072,  2073,  2076,  1057,  2078,
    2079,  2080,  2085,  2081,  2103,  2317,  2107,  2082,  2118,  2120,
    2124,   714,  2155,  2156,  2157,  2132,   859,  2168,  2056,  2133,
     860,   715,  2060,  2169,  2364,  2174,  2175,  2176,  2179,  2506,
    2177,   861,  2178,  2148,  2180,  2181,  2182,  2375,  2184,  2185,
    2186,  2678,  2187,   716,  2188,  2189,  2509,  2190,  2091,  2191,
    2192,  2195,   717,  2193,    69,    70,  2701,  2194,  2106,  2196,
    2197,  2198,  2199,  2200, -1159,  2201,  2202,  2111,  2112,   115,
    2203,  2204,   718,  2205,  2206,  2207,   927,  2208,  2116,  2209,
    2210,   953,  2226,  2230,  2679,  2233,  2235,  2237,  2250,  2396,
    2397,  2256,  2399,   719,  2257,  2258,  2259,  2260,  2292,  2680,
    2294,  2297,  2298,  2299,  2301,  2302,  2681,  2303,  2306,  2453,
    2410,  2411,  2412,  2413,  2414,  2415,  2416,  2417,  2418,  2308,
    2309,  2310,  2927,  2314,  2315,  3007,  2316,  2318,  2319,  2320,
    2324,  2325,  2334,  2424,   720,  2426,  2327,  2328,  2329,   721,
    2330,  2335,   332,  2336,  2365,  2366,  2367,  2371,  2372,   816,
    2374,  2432,   473,  2376,  2377,   722,   118,  2436,   723,  2378,
    2382,  2383,  2941,  2385,  2387,  2388,  2439,  2440,  2441,  2442,
    2443,  2444,  2445,  2446,  2447,  2448,  2390,  2391,  2461,  2462,
    2463,  2464,  2465,  2466,  2467,  2468,  2469,  2470,  2471,  2472,
    2393,  2475,  2400,  2476,  2477,  2478,  2402,  2405,  2408,  2419,
    2420,  2682,  2421,  2422,  2927,  2423,  2479,   473,  2486,   908,
    2427,  2474,  2480,  2683,  2483,  2484,  2487,  2490,  2684,  2510,
    2511,   120,  2516,  2518,  2520,  2562,   487,  2528,  2532,  2533,
    2534,  2535,  2536,  2565,  2567,  2570,  2573,  2574,  2576,  2659,
    2660,  2578,  2662,  2663,  2579,  2580,  2666,  2667,  2584,  2585,
    1238,  2586,  2587,  2588,  2589,  2593,  2594,  2602,  1239,  2501,
    2595,  2502,  2596,  2503,  2597,  2505,  1240,   473,  2507,  2598,
    2508,  2603,  2686,  2604,  2611,  2512,  2513,  2614,  2514,  2515,
    2622,  2517,  2625,  2519,  1241,  2628,  2629,  2630,  2633,  2523,
    1242,  2524,  2638,  2642,   126,  2527,  2658,   549,  2529,   556,
     559,  2712,   564,   568,  2718,  2719,  2720,  2721,  2724,  2726,
    2685,  2729,  2731,  2714,  2732,  1243,  2733,  2924,  2734,  2736,
    2742,  2744,  2531,  2749,  2756,  2765,  1244,  2774,  2780,  2784,
    2790,  2798,  2809,  2978,  2820,   652,  2821,  2979,  2822,  2823,
    2824,  2825,  2566,  2840,  2851,  2975,  2852,  2854,  2855,  2856,
    2857,  2858,  2859,  2860,   668,   674,  2862,  1314,  2868,  2874,
     681,  2564,  2900,  2906,   686,  2909,   998,  2910,  2911,  2916,
    2931,  1245,  2932,  1003,  2933,  2934,  1004,  2935,  2936,  1246,
    2943,  1005,  2946,  2957,  2965,  1007,  2968,  2971,  2988,  2631,
    2980,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,  2981,
    2991,   801,  3001,  3002,   803,  3008,  1247,  3016,     0,  3020,
    3021,  3023,  3027,  3029,     0,   812,  3030,  3031,  3032,  1248,
       0,     0,     0,     0,     0,     0,  2636,     0,     0,     0,
       0,     0,     0,     0,     0,   833,  1249,  2643,  2644,  2645,
    2646,  2647,  2648,  2649,  2650,  2651,  2652,  2653,  2801,  1076,
       0,  2404,  2804,  2656,  2983,  2985,     0,   473,   473,     0,
     473,   473,     0,     0,   473,   473,  2668,  2669,  2670,  2671,
    2672,  2673,     0,  2675,  2676,  2677,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2429,     0,  2838,  2688,
    2689,  2690,  2691,     0,  2693,  2694,  2695,  2696,  2697,  2698,
       0,  2700,     0,     0,  2704,  2705,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2713,     0,
       0,   473,  2715,     0,     0,     0,  2717,     0,     0,     0,
       0,  2722,  2723,     0,  2725,     0,     0,     0,     0,     0,
       0,   949,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   956,     0,     0,     0,     0,     0,     0,     0,
       0,   964,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2745,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1280,
       0,     0,     0,     0,     0,     0,  1286,     0,     0,     0,
       0,  2449,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2450,     0,     0,     0,     0,     0,     0,  1001,
    1002,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1006,     0,     0,     0,     0,  1009,     0,     0,
    1238,  2451,     0,     0,     0,  2792,  1021,     0,  1239,  2794,
       0,     0,     0,     0,     0,     0,  1240,     0,     0,  2795,
    2796,     0,     0,     0,     0,  2800,   473,     0,     0,  2803,
     473,     0,     0,     0,  1241,  2808,     0,     0,  2812,  2813,
    1242,     0,     0,  2452,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2830,  2831,     0,
    2833,  2834,  2835,  2836,  2837,  1243,   473,  2839,     0,     0,
       0,  2842,     0,     0,     0,     0,  1244,     0,     0,     0,
       0,     0,     0,     0,  2853,     0,  1387,  2526,     0,     0,
       0,     0,     0,  1389,  2861,  1078,  1079,  1080,  1081,     0,
       0,     0,     0,  2538,  2539,  2540,     0,     0,  2542,     0,
    2544,  2545,  2876,     0,  2547,  2548,  2549,     0,     0,  2551,
    2552,  1245,     0,  2555,     0,  2557,  2558,     0,  2560,  1246,
       0,     0,     0,     0,     0,     0,     0,     0,  1405,  1406,
       0,     0,     0,  1410,     0,     0,  1413,     0,     0,     0,
       0,     0,     0,     0,  2888,     0,     0,     0,  1420,  2892,
       0,  2894,     0,     0,     0,     0,     0,  2897,     0,     0,
       0,     0,     0,     0,     0,     0,  1247,     0,     0,     0,
    2904,     0,     0,     0,     0,     0,     0,     0,     0,  1248,
       0,     0,     0,     0,  1505,     0,     0,     0,  2915,     0,
       0,     0,  2919,  1236,  2952,     0,  1249,    69,    70,     0,
       0,     0,     0,     0,     0,     0,  2453,  2707,  2454,     0,
       0,     0,   115,     0,     0,     0,     0,     0,  2940,     0,
       0,     0,  1562,     0,     0,  2632,     0,     0,  2635,     0,
       0,     0,   327,  2639,     0,     0,  2640,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2955,
       0,   117,     0,     0,  2960,  2655,  2962,     0,     0,     0,
       0,     0,     0,  2966,  2455,     0,     0,  1524,  2969,     0,
       0,  1567,     0,  2972,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2982,  2984,   118,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2994,     0,     0,  2995,     0,     0,  2997,
       0,     0,     0,     0,     0,  2990,     0,     0,     0,  3003,
    3004,  3005,  3006,     0,     0,     0,     0,     0,     0,     0,
       0,  3015,  2728,     0,  3018,     0,     0,     0,     0,     0,
       0,  3022,     0,  3024,   120,  1388,  3010,     0,     0,  3013,
       0,     0,     0,     0,     0,     0,     0,  1393,     0,     0,
       0,     0,     0,     0,  2738,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    69,    70,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   328,     0,     0,
     115,  2826,     0,     0,  1403,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2844,   125,     0,     0,  2849,     0,   126,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   329,   117,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2789,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1810,     0,     0,
       0,     0,     0,     0,  2797,     0,     0,     0,     0,     0,
       0,  2802,     0,     0,  2805,  2806,     0,   118,     0,  1494,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   330,  1841,     0,     0,     0,     0,
    1846,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1852,     0,     0,     0,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   120,   567,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2930,     0,   115,     0,     0,
       0,     0,     0,     0,  1642,  1936,  1937,  1938,     0,     0,
       0,     0,     0,     0,     0,  1940,  1941,  1942,     0,     0,
       0,     0,     0,     0,  1953,  1954,  1955,     0,  1867,  1956,
    1957,     0,  1959,  1960,     0,     0,   117,     0,  2889,     0,
       0,     0,   115,     0,     0,     0,     0,     0,     0,     0,
     125,     0,     0,     0,     0,   126,     0,  2899,  1702,     0,
       0,     0,     0,     0,     0,     0,  2032,  2033,  1708,     0,
    2035,  2036,     0,     0,     0,  2817,     0,     0,     0,     0,
       0,     0,     0,     0,   118,     0,     0,     0,     0,     0,
       0,     0,  1952,     0,     0,     0,     0,     0,     0,     0,
       0,  2841,     0,     0,  1962,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  3000,     0,     0,  2023,  2024,     0,   118,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2953,  2954,     0,  2956,     0,  2958,  2959,     0,  2961,   120,
       0,     0,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
       0,  1808,     0,     0,     0,     0,     0,     0,     0,  2105,
       0,     0,     0,     0,   120,     0,     0,     0,     0,  1816,
       0,     0,  2987,     0,     0,     0,     0,     0,     0,  2901,
    2902,     0,     0,  2905,     0,  2907,     0,   125,     0,     0,
       0,     0,   126,     0,     0,     0,     0,  2912,  2913,  1847,
       0,     0,  2917,  2918,     0,     0,  2921,     0,     0,  1853,
       0,  2922,  2923,     0,     0,     0,     0,     0,  3019,  2154,
       0,     0,     0,     0,     0,  2160,  1868,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   126,  1880,     0,
       0,     0,     0,  1887,     0,     0,     0,     0,     0,     0,
       0,     0,   388,     0,     0,     0,     0,     0,     0,   389,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2963,
       0,     0,  2964,     0,     0,     0,     0,  2967,     0,     0,
       0,     0,     0,  2970,     0,     0,     0,     0,  2973,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2215,     0,
       0,     0,     0,  2220,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,  3014,     0,  2240,  3017,     0,     0,     0,     0,
    2246,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2039,     0,  3028,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2262,     0,  3035,
       0,     0,  3036,  3037,  2269,     0,     0,     0,     0,     0,
       0,  2059,     0,     0,     0,  2296,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2304,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2307,  2092,
       0,     0,  2093,     0,     0,     0,     0,     0,     0,     0,
       0,  2108,  2109,     0,     0,     0,     0,     0,     0,  2113,
       0,     0,     0,     0,     0,     0,  2114,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   115,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   390,     0,  2305,   391,     0,  2153,     0,     0,     0,
    2392,  2311,  2312,     0,     0,     0,     0,     0,  2164,     0,
       0,  2321,  2322,     0,   117,     0,     0,     0,     0,     0,
       0,  2331,  2332,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2368,  2369,     0,     0,
       0,     0,     0,     0,     0,     0,  2394,  2379,  2380,     0,
       0,     0,     0,     0,  2386,     0,     0,     0,     0,     0,
       0,     0,   118,     0,  2389,     0,  2407,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,     0,     0,     0,     0,  2430,
    2431,     0,     0,     0,     0,     0,     0,     0,     0,  2217,
       0,     0,     0,     0,     0,  2434,  2435,     0,     0,     0,
    2437,  2438,     0,     0,     0,     0,     0,   120,     0,     0,
       0,     0,     0,  2238,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2247,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2481,     0,  2252,     0,  2253,     0,     0,     0,     0,     0,
       0,  2488,     0,     0,  2261,     0,     0,  2263,  2264,  2265,
    2266,  2268,     0,  2270,     0,     0,  2271,     0,     0,  2272,
    2274,  2275,  2276,  2277,  2279,   125,  2280,  2281,     0,     0,
     126,  2283,  2284,  2285,     0,     0,  2286,  2287,     0,     0,
       0,     0,  2288,  2289,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2504,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2521,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   558,     0,     0,     0,     0,  2537,     0,
       0,  2568,     0,  2541,     0,     0,     0,     0,     0,  2546,
       0,     0,     0,     0,  2550,     0,     0,     0,  2553,     0,
       0,  2556,     0,     0,  2559,     0,  2561,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,     0,     0,     0,     0,     0,
       0,  2606,  2607,  2608,  2609,  2610,  2395,  2612,  2613,  2398,
       0,  2569,  2617,  2618,  2619,  2620,  2621,     0,  2623,  2624,
    2403,  2571,  2572,  2406,     0,     0,     0,     0,     0,     0,
       0,     0,  2575,     0,     0,     0,     0,     0,     0,     0,
       0,  2577,     0,     0,     0,  2581,  2582,     0,     0,     0,
       0,     0,  2425,     0,  2590,  2591,     0,     0,     0,     0,
       0,     0,     0,  2599,  2600,     0,     0,     0,     0,  2605,
       0,     0,     0,     0,     0,     0,     0,  1671,     0,  2615,
    2616,     0,  1672,     0,     0,     0,     0,     0,     0,     0,
    2626,     0,  2627,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1673,  1674,  2473,  1675,  1676,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1677,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2489,     0,     0,  1678,  1679,     0,     0,     0,     0,     0,
       0,  1680,     0,     0,  1681,     0,     0,     0,     0,     0,
    2699,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1682,     0,     0,     0,  2711,     0,     0,     0,
       0,  1683,  1684,     0,     0,  1685,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,  2522,  2746,     0,  2730,     0,     0,
       0,     0,   115,     0,  2751,  2752,  2753,  2754,  2755,  2530,
    2757,  2758,     0,  2760,  2761,  2762,  2763,  2764,     0,  2766,
    2767,     0,  2769,  2770,  2771,  2772,  2773,     0,  2775,  2776,
    2743,  2778,     0,     0,     0,  1686,     0,  2554,     0,     0,
       0,  2781,  2782,     0,     0,     0,     0,     0,  2563,     0,
     540,   541,  2785,     0,     0,     0,   542,     0,     0,     0,
       0,     0,     0,     0,     0,  2747,     0,     0,  2748,     0,
       0,  2750,     0,     0,     0,     0,     0,     0,     0,   543,
       0,  2759,     0,     0,     0,     0,     0,     0,     0,   118,
    2768,     0,     0,     0,     0,  1687,     0,     0,  2787,  2777,
       0,  1688,     0,     0,  2791,     0,  2779,     0,  2793,     0,
       0,     0,     0,     0,     0,     0,     0,  2783,  1689,     0,
       0,     0,     0,  2786,  2799,     0,     0,     0,     0,  1690,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2634,     0,   120,  2637,     0,     0,  1691,  1692,
       0,     0,     0,  2641,     0,     0,     0,     0,     0,   544,
       0,     0,     0,     0,     0,  2847,  2848,     0,     0,  2654,
       0,  1693,  2657,     0,     0,  2879,     0,  2661,     0,   545,
    2664,  2665,     0,     0,  2881,     0,     0,     0,     0,     0,
       0,     0,     0,  2883,     0,  2884,     0,     0,     0,  2886,
       0,     0,     0,   546,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1694,   126,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2708,  2709,
       0,     0,     0,     0,  2877,     0,     0,     0,     0,     0,
       0,  2878,     0,     0,     0,     0,     0,     0,     0,     0,
    2880,     0,     0,     0,     0,     0,     0,     0,     0,  2882,
     669,   115,     0,     0,     0,  2885,     0,     0,     0,  2887,
       0,   547,     0,     0,     0,  2908,     0,     0,     0,     0,
    2735,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2947,     0,  2948,     0,  2949,     0,
       0,  2950,   670,  2951,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,     0,   548,     0,     0,     0,     0,   118,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   671,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2974,  2788,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2986,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2807,     0,   120,     0,     0,     0,     0,     0,     0,
       0,     0,  2818,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   672,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  3011,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  3025,     0,     0,  3026,
       0,     0,     0,     0,     0,     0,     0,  2867,     0,     0,
       0,  2873,     0,     0,     0,     0,   126,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2890,  2891,     0,  2893,     0,
       0,     0,     0,  2895,  2896,     0,     0,     0,  2898,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   673,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2920,     0,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,     0,     0,  2944,     0,  1145,  1146,  1147,     0,     0,
    1432,  1433,  1434,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1148,  1149,     0,     0,  1150,
    1435,  1436,  1151,     0,  1437,     0,   115,     0,     0,  1152,
       0,  1438,     0,  1153,  1439,     0,     0,     0,  1440,     0,
       0,     0,     0,  1154,  1155,     0,     0,     0,  1441,  1442,
       0,  1156,  1157,     0,     0,     0,  1443,     0,     0,     0,
       0,     0,     0,     0,     0,   117,     0,     0,     0,  1158,
       0,     0,  2989,     0,     0,     0,     0,  1159,     0,   115,
       0,  1160,  1161,     0,     0,  1162,  1444,  1445,     0,  2998,
    1446,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  3009,  1163,     0,  3012,   115,     0,  1447,
       0,     0,     0,   118,     0,     0,     0,     0,     0,     0,
       0,   554,     0,     0,     0,     0,  1164,     0,     0,     0,
       0,  1448,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1493,     0,     0,     0,
       0,     0,     0,   115,     0,  1165,     0,     0,     0,     0,
    1449,     0,     0,     0,     0,     0,   118,     0,     0,     0,
    1450,     0,     0,     0,     0,     0,     0,     0,   120,     0,
       0,     0,  1166,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   118,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1167,     0,  1168,     0,     0,  1451,     0,
       0,  1169,  1170,     0,     0,     0,  1452,  1453,     0,     0,
       0,   120,     0,     0,     0,     0,     0,  1171,  1172,     0,
     118,     0,     0,  1454,     0,     0,   125,     0,     0,  1173,
    1174,   126,     0,     0,     0,  1455,     0,     0,     0,   120,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1175,     0,  1176,
       0,     0,  1456,     0,  1457,     0,     0,     0,     0,     0,
       0,     0,  1177,     0,  1178,  1458,     0,     0,     0,     0,
       0,  1179,     0,     0,   126,   120,  1459,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   126,     0,     0,  1180,     0,     0,     0,     0,
    1460,     0,     0,     0,     0,     0,     0,     0,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   555,     0,   126,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,     1,     0,     0,     2,     0,     0,     3,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     4,     0,     0,     0,     0,     5,     6,
       0,     0,     0,     7,     8,     9,     0,     0,     0,     0,
       0,     0,     0,    10,     0,     0,     0,     0,     0,     0,
      11,     0,    12,    13,     0,     0,     0,     0,     0,     0,
       0,     0,    14,    15,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    16,     0,
       0,     0,     0,     0,     0,     0,     0,    17,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      18,     0,     0,     0,    19,     0,     0,     0,    20,     0,
       0,     0,    21,    22,     0,     0,     0,     0,    23,    24,
       0,     0,    25,     0,     0,     0,     0,     0,    26,     0,
       0,     0,     0,     0,    27,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,     0,     0,     0,    29,
      30,    31,     0,     0,    32,    33,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    34,     0,     0,
       0,    35,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   185,     0,     0,   186,     0,    36,   187,
      37,    38,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    39,     0,    40,     0,     0,     0,   188,
       0,     0,    41,   189,   190,   191,    42,     0,     0,     0,
      43,     0,    44,   192,    45,   193,     0,     0,     0,    46,
     194,     0,   195,   196,   197,     0,     0,     0,     0,     0,
     198,     0,   199,     0,    47,     0,     0,     0,     0,     0,
      48,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    49,    50,     0,
       0,     0,     0,     0,     0,     0,   200,     0,     0,     0,
      51,     0,    52,     0,     0,     0,     0,     0,     0,    53,
       0,     0,    54,    55,   201,     0,     0,     0,     0,     0,
       0,     0,     0,   202,     0,   203,   204,     0,   205,   206,
       0,     0,   207,     0,  1123,     0,   208,     0,   209,  1124,
       0,     0,     0,    56,   210,     0,     0,     0,     0,     0,
      57,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   211,   212,     0,     0,     0,   213,
       0,     0,     0,     0,     0,     0,  1538,   214,     0,     0,
       0,   215,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   216,     0,
     217,     0,     0,     0,     0,     0,     0,   218,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   219,     0,   220,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     221,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   222,   223,     0,
       0,     0,     0,     0,     0,     0,     0,   224,     0,     0,
       0,     0,     0,     0,     0,   225,     0,     0,     0,     0,
       0,   226,     0,   227,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,     0,     0,     0,     0,     0,     0,     0,     0,
     228,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,  1539
};

static const yytype_int16 yycheck[] =
{
       3,    55,  1620,  1015,   311,  1849,   780,  1851,    11,   775,
     776,     4,     4,    16,     5,   531,     4,     4,    13,     3,
       4,     5,     3,     4,     3,     4,    31,  1146,     5,  1003,
    1004,  1005,     5,     5,    37,     3,     4,    31,     5,     3,
       4,    31,    45,     4,     3,     4,    15,     5,     4,    20,
      16,    54,    26,     0,    57,    37,    43,    60,     4,    46,
      46,    64,     4,    73,    67,     5,    67,    62,    71,    72,
     184,    35,    75,     3,     4,    78,    79,  1113,     4,    82,
    1116,     4,    85,    86,     3,     4,    89,   101,   108,    11,
     212,    94,    79,    20,    26,     3,     4,    42,     3,     4,
      87,  1137,  1076,     4,   107,   108,   109,   110,   111,   112,
      62,    67,     3,     4,    16,  1301,    35,    49,     4,  1305,
      52,    16,   139,    43,    12,   128,     3,     4,     3,     4,
      35,    63,    54,   247,    39,    16,   103,   138,     4,   121,
     127,     4,     5,   234,   111,   170,     5,    20,   178,  1335,
    1336,  1337,    74,     3,     4,    90,    88,  2926,    20,   281,
     163,   160,     3,     4,    67,   152,   311,   168,   143,    15,
      90,   127,     3,     4,   106,   185,   128,   202,   142,    33,
      20,    67,   104,     4,     5,   188,   206,   164,     3,     4,
     193,   179,    16,    20,     4,   141,     4,    32,   203,     4,
       5,    67,    19,   317,   126,   148,   164,  2976,   130,   203,
     184,   193,   117,   195,   209,   197,   198,     3,     4,    60,
     253,   102,   144,   142,   211,   218,   208,   128,     5,   131,
     247,     4,   225,   226,   213,   170,   223,   142,   206,   165,
     166,   127,   333,   225,   231,   232,   487,    57,   217,    57,
     193,   155,   239,    90,   241,   256,   497,    64,   268,   113,
     290,   127,    67,     5,   127,   268,   211,   223,   278,   262,
       3,     4,   286,   247,    16,   231,   232,   172,  1052,   282,
      64,   183,   269,   337,    62,   284,    91,   248,   214,   212,
     261,   211,   309,   288,    67,   270,   299,   300,   271,   229,
     277,   132,   307,   110,   299,   309,   127,    62,   213,   249,
     311,   297,   315,   307,   317,     3,     4,   307,   284,   277,
     208,   313,   127,   295,   327,   328,   110,   330,   331,   206,
     333,   233,     4,   170,   261,   212,   323,   223,   333,   320,
     343,   320,   333,   269,   149,   231,   232,   299,   330,   333,
     353,   354,   340,   340,   127,   332,   320,   223,     4,   320,
     223,   320,   329,   331,   311,   231,   232,   323,   231,   232,
     224,   313,   247,   376,   320,   378,   379,   254,   381,    14,
      15,   374,   385,   386,    13,    14,   373,    22,   261,    62,
     697,   378,   379,   396,   397,    30,  1170,   247,   320,   261,
     403,   320,   223,    38,   281,   408,   409,   375,   376,   233,
     231,   232,   320,   416,  1188,   320,   419,   373,   223,   321,
     206,   261,   378,   379,    59,   284,   231,   232,   238,   320,
     238,  1405,   247,    62,   261,   438,   439,   323,    26,  1413,
     257,    76,   445,   446,   447,   448,   449,   450,   380,   452,
     223,   258,   455,   312,   331,   127,  1222,   323,   231,   232,
     323,    62,    62,  1582,     5,    26,   469,   274,   275,    62,
     473,    62,    13,    14,   258,   478,   479,   480,   481,   482,
     483,   127,   485,    45,   487,   488,   489,   373,  1254,  1608,
     274,   275,   378,   379,   497,   498,   229,   321,   375,   376,
     284,     4,   323,    36,   486,    67,     5,   373,   329,    58,
     373,  1630,   378,   379,    47,   378,   379,  1553,   323,   340,
    1556,    62,    84,    39,   329,     3,     4,   128,    26,    67,
     218,   309,    26,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,    39,    77,   331,    90,     4,   551,   552,
     323,   223,   373,     4,   309,    26,   334,   378,   379,   231,
     232,    39,    91,  2744,   371,   372,   569,    36,   373,   170,
    1756,    67,   377,   378,   379,   816,     4,   223,    47,   334,
     209,   210,    60,    13,    14,   231,   232,   371,   372,   375,
     376,   140,   180,   575,    45,   212,   650,    48,    90,    62,
     373,   117,   605,   148,    90,   378,   379,   103,    77,    57,
       4,     3,     4,     4,    86,   111,    67,    11,     5,   180,
     182,   117,    27,     3,     4,   124,   170,   160,   253,    62,
     133,   103,    62,    51,   294,    86,   309,    62,     4,   117,
       0,   313,   138,    30,   647,     4,   185,   629,   193,   284,
      90,   323,   103,     3,     4,   194,   273,     5,   109,   288,
       4,   334,   297,   298,   160,   128,   165,   166,   209,   210,
     299,   300,   205,   261,     5,    29,  2520,   323,   170,  1453,
     287,  2862,   178,    20,   170,   103,   740,   294,    30,    62,
    1464,   160,   695,  2874,   329,   128,   114,   213,   299,   248,
     261,   373,   705,   128,   333,   759,   378,   379,   159,   309,
       3,     4,   211,   184,   263,    65,   309,    62,   309,     5,
     216,   309,    39,   964,   227,    91,    55,   373,   146,    62,
     170,   182,   378,   379,   334,   213,   205,   372,   373,   374,
     132,   334,     5,   334,    98,   278,    39,   288,   309,   247,
      13,    14,   132,   247,   757,   128,   161,   319,   299,   300,
     256,   287,   128,   304,    93,    62,  1007,     5,   294,     5,
     269,   774,   334,   289,   777,   271,   247,    13,    14,   209,
     210,     4,   331,   128,   212,   190,     3,     4,   284,   194,
     238,    62,   333,    62,    11,   128,   295,   800,    62,    62,
     117,   334,   805,   806,   807,   808,    29,   144,   811,   278,
     813,  1121,   815,   816,   817,     3,     4,   313,  1128,     5,
      21,   150,   176,     5,   117,     5,    62,    13,    14,    62,
     326,   128,   328,   329,   165,   166,   299,   315,   266,   308,
     291,   213,     5,   897,   124,   273,   251,   316,    64,    50,
      13,    14,    53,    13,    14,    56,    62,   128,   288,   128,
      45,  1873,    67,    62,   128,   334,   299,   318,   319,   299,
     300,     0,    25,   369,   299,     4,    62,     4,  1852,   330,
      65,   126,    67,   334,    85,   311,   889,   890,   293,   892,
     893,   894,   895,    81,   110,   128,   213,   302,   303,    62,
       4,     5,    62,   333,   322,    67,   909,   910,    23,    24,
      13,    14,  1948,   916,   917,   116,    62,   133,   119,   273,
     213,    32,   128,   185,   261,   279,   299,    86,  2047,   128,
       3,     4,  1968,   936,   937,   938,   939,   940,   269,   942,
     269,   944,  1978,  2062,   103,  1981,   209,   210,  1714,    13,
      14,   174,  1988,     5,   299,   292,   959,   960,   961,    62,
     963,   964,   965,    62,   967,   118,   299,  2003,   139,   111,
    2006,  2090,   289,   209,   210,   111,    92,    39,  2014,    15,
     133,  2017,   128,    81,    57,   988,   101,   990,  2174,  2175,
    2176,  2177,  2178,  2179,  2180,  2181,  2182,  1000,    62,     3,
       4,   189,   299,   160,  1007,  1008,   988,    29,     3,     4,
    1013,   234,    16,   184,   309,   200,     4,     5,    62,   172,
      67,    39,   254,   209,   210,   288,   310,  1030,   299,   128,
     299,  1034,    92,   192,    67,   299,   299,   300,   261,  1280,
      75,   304,   258,  1046,  1047,  1048,   209,   210,   249,   209,
     210,  1054,   288,    30,   689,   117,  1059,     5,   274,   275,
    2678,     3,     4,   299,   300,    60,   299,  1070,   304,  1123,
     333,  1122,   707,    61,   216,   228,   247,   262,  1129,    67,
     216,   240,   283,   240,   128,   273,  1089,     4,    76,   242,
      78,   189,  2211,   299,     4,    83,    97,   333,    86,   117,
     299,    85,   288,     5,    92,     4,   209,   210,    13,    14,
     311,     3,     4,   299,   300,   103,   117,   276,   304,    11,
       4,   165,   166,   111,   309,   288,     4,   284,   288,   271,
      27,     5,   120,     5,   319,   271,   299,   300,   309,   299,
     300,   304,    21,     5,   779,   209,   210,   333,     4,   784,
     138,   213,   174,   299,   224,   371,   372,    62,     5,    13,
      14,  2812,     5,  1166,     5,   238,     5,    44,   325,  1410,
     333,    50,   160,   333,    53,   273,    18,     5,   162,  2830,
    2154,     3,     4,    60,  1187,   288,     3,     4,     3,     4,
     178,     6,     7,  1196,     4,   213,   299,   300,    40,     4,
     299,    43,     5,   191,   192,   206,    85,    84,    62,  1212,
      57,  1214,   234,     3,     4,     4,  1219,  1220,  1221,    66,
       4,     5,    39,     4,   288,   269,  1229,   104,   216,  1232,
     333,  1234,    45,     4,     5,   299,   300,   116,    80,   261,
     119,     3,     4,    45,     4,    87,    48,   124,  1251,   101,
    1253,   128,   240,   128,    67,   299,    98,    99,  1261,  1262,
       5,   245,   246,   105,   161,    67,   254,     4,   256,   333,
       4,    84,  2246,  1276,  1277,   295,   260,  1280,  1281,  1282,
     157,   158,     4,   271,     4,  1288,     4,  1290,   276,     5,
    1293,   133,  1295,   190,     4,  2269,   284,   194,  1352,   218,
     117,   103,   372,   291,   209,   210,  2342,   109,   378,   151,
     380,   946,     3,     4,  2965,  2351,     4,    25,    91,     4,
    2971,   305,     4,   311,  2360,     4,  2445,   169,   170,     4,
       4,     3,     4,     4,   176,  1338,     5,   325,   326,  1342,
     328,  1344,  2461,   220,    67,  1348,     5,  2466,    39,   122,
      85,     4,     5,   230,   251,   209,   210,   159,   148,   201,
      83,  1364,     8,  1366,    39,  1368,  1369,  1370,  1371,    92,
     249,  1374,  1375,    10,  1377,  1378,  3027,  1380,  3029,  1382,
     103,   369,  1364,   288,    41,    42,  1389,   200,    60,     4,
       5,   238,     5,  1396,   299,   300,   293,  1400,  1401,  1402,
     294,   243,   185,   193,   283,   302,   303,  1410,  1411,   609,
     118,  1414,   612,   613,     4,   138,    34,   294,   295,  1422,
       4,  1424,     4,     4,  1427,   133,   117,   162,   333,   206,
     194,   204,   185,  1415,   288,   212,    18,   160,     3,     4,
       5,   217,   117,   475,   476,   299,   300,  2670,   221,   262,
    2673,  1433,  2675,     3,     4,   297,   217,    39,     8,     9,
      10,     3,     4,     5,     5,  2688,  2689,   309,  1471,     5,
    1473,  1104,  1105,  1476,  1477,    57,  1479,   254,  1481,   333,
       4,   217,  2705,     4,  1487,     5,  1489,    67,   207,   291,
     165,   166,   369,   216,   112,  1498,   309,    67,   340,     3,
       4,     5,     6,     7,   281,   207,   319,  2481,    67,   247,
     245,   246,   285,     5,  2488,   248,   318,   319,   136,   137,
     228,     4,     4,   105,     4,   260,     4,   145,   330,     4,
     187,   188,   334,   256,   242,     5,   217,    90,   213,   214,
       3,     4,     5,     6,     7,   127,     3,     4,     5,   167,
      90,    90,     5,    90,   331,  2674,   329,     5,  1193,   177,
       4,   284,   219,     4,    16,     5,     5,   340,  2687,     4,
     305,     5,   103,  2692,     4,     4,  1579,  1580,  1581,  2553,
       5,     4,  2556,     4,     5,  2559,    54,  2561,   170,     3,
       4,     5,     6,     7,   269,     4,  1578,    16,  1601,   376,
       4,   101,  1605,   326,     5,   328,    74,     5,     4,    90,
       5,    90,     5,    90,    90,  1250,     5,     4,    65,     5,
       5,     4,     4,    91,     5,  1628,  1629,     5,     5,  1264,
       4,   213,     4,     4,     4,  1638,   104,     5,  1641,     4,
      61,   223,    11,     4,    11,  1648,    67,     5,     4,   231,
     232,     4,     4,   179,     5,     5,   238,     5,   126,  1662,
       4,   243,   130,   170,  1667,   170,     4,     4,  1671,     5,
    1673,  1674,   283,  1676,  1677,  1678,   144,  1680,    37,   283,
    1683,  1684,  1685,  1686,  1687,  1688,  1689,  1690,  1691,  1692,
    1693,    37,   313,  1696,  1697,  1698,  1699,     5,     4,   120,
       4,     4,     4,  1706,  1707,     5,     5,  1710,  1711,  1712,
       5,     5,     4,  1716,  1717,     5,     5,   138,   296,   296,
       5,     5,     5,   191,     4,     4,  1729,  1730,     5,  1732,
    1733,     4,   153,    62,     5,     5,     5,  2711,     5,   160,
       5,   323,     4,   261,     5,     5,     4,   168,     5,     5,
    1385,  1386,   261,   261,   111,   261,     5,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   148,   111,    39,   261,
     261,   373,   111,     5,   267,   124,   378,   379,    39,   128,
     233,  1804,  1805,  1806,     5,   267,  1809,   233,   229,     4,
       4,  1814,  1815,     5,  1817,  1818,  1819,     5,  1821,  1822,
     233,  1824,   233,  1826,  1827,     4,  1829,  1830,   249,  1832,
       5,  1834,  1814,   254,     5,   256,   165,   166,     5,  1842,
       5,   170,     5,  2962,     4,   117,     4,  1850,     5,   117,
       5,     5,  1855,  1856,     4,    11,     5,     5,  1861,     4,
      11,     5,   283,   284,  2105,     5,     4,  1870,     5,     5,
     291,     4,   148,     5,    67,    68,    69,     5,     4,     4,
       0,     5,   211,     5,     5,     4,     4,     4,     4,     4,
     311,     5,     5,   184,     4,   261,   271,   261,   261,   229,
    1903,    94,   217,  1885,     4,     4,   261,   261,     4,     4,
       4,     4,  1894,     5,   107,     5,  1898,     5,   261,  2160,
     296,  1924,  1925,     5,     5,     5,  1929,     4,   261,     5,
     123,     4,  1935,     4,     4,   261,   265,     5,     5,  1574,
     269,     5,     4,   261,     4,   337,   337,     4,   369,     4,
       4,     4,     4,   337,     4,   296,     5,   337,     5,   247,
     247,   154,     5,     4,     4,   247,   295,     5,  1603,   247,
     299,   164,  1607,     4,   296,     5,     5,     4,     4,  2220,
       5,   310,     5,   247,     5,     5,     4,   296,     5,     5,
       4,   381,     5,   186,     5,     4,    11,     5,  1633,     5,
       4,     4,   195,     5,     3,     4,   333,     5,  1643,     5,
       5,     4,     4,     4,   311,     5,     5,  1652,  1653,    18,
       4,     4,   215,     5,     5,     4,   423,     5,  1663,     5,
       4,   474,     5,     4,   381,     5,     5,     4,     4,  2042,
    2043,     5,  2045,   236,     5,     5,     5,     5,     4,   381,
       5,     5,     5,     5,     4,     4,   381,     5,     4,   311,
    2063,  2064,  2065,  2066,  2067,  2068,  2069,  2070,  2071,     5,
       5,     5,  2846,     4,     4,  2986,     5,     5,     5,     5,
       4,     4,     4,  2086,   277,  2088,     5,     5,     5,   282,
       5,     4,    37,     5,     5,     5,     5,     4,     4,   332,
       5,  2104,  2105,     5,     5,   298,   105,  2110,   301,     5,
       4,     4,  2861,     5,     4,     4,  2119,  2120,  2121,  2122,
    2123,  2124,  2125,  2126,  2127,  2128,     4,     4,  2131,  2132,
    2133,  2134,  2135,  2136,  2137,  2138,  2139,  2140,  2141,  2142,
       5,  2144,     5,  2146,  2147,  2148,     5,     5,     5,     4,
       4,   381,     5,     4,  2928,     4,     4,  2160,  2161,   392,
       5,     5,     4,   381,     5,     5,     4,     4,   381,     5,
       5,   170,     5,     4,     4,     4,   121,     5,     5,     5,
       5,     5,     5,     5,     4,     4,     4,     4,     4,  2430,
    2431,     5,  2433,  2434,     5,     5,  2437,  2438,     4,     4,
      95,     5,     5,     5,     5,     4,     4,     4,   103,  2212,
       5,  2214,     5,  2216,     5,  2218,   111,  2220,  2221,     5,
    2223,     4,   381,     5,     4,  2228,  2229,     4,  2231,  2232,
       4,  2234,     4,  2236,   129,     4,     4,     4,     4,  2242,
     135,  2244,     4,     4,   243,  2248,     4,   192,  2251,   194,
     195,     4,   197,   198,     5,     5,     4,     4,     4,     4,
    2456,     5,     4,  2504,     5,   160,     4,  2844,     5,     5,
       5,     4,  2254,     4,     4,     4,   171,     4,     4,     4,
       4,     4,     4,   381,     5,   230,     4,  2928,     5,     5,
       5,     4,  2295,     5,     4,  2924,     5,     5,     4,     4,
       4,     4,     4,     4,   249,   250,     4,   855,     5,     4,
     255,  2293,     4,     4,   259,     5,   549,     4,     4,     4,
       4,   216,     5,   556,     5,     4,   559,     4,     4,   224,
       4,   564,     4,     4,     4,   568,     5,     4,     4,  2393,
       5,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,     5,
       4,   316,     5,     5,   319,     5,   271,     4,    -1,     5,
       5,     5,     4,     4,    -1,   330,     5,     5,     5,   284,
      -1,    -1,    -1,    -1,    -1,    -1,  2399,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   350,   301,  2410,  2411,  2412,
    2413,  2414,  2415,  2416,  2417,  2418,  2419,  2420,  2659,   652,
      -1,  2056,  2663,  2426,  2940,  2941,    -1,  2430,  2431,    -1,
    2433,  2434,    -1,    -1,  2437,  2438,  2439,  2440,  2441,  2442,
    2443,  2444,    -1,  2446,  2447,  2448,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2091,    -1,  2699,  2462,
    2463,  2464,  2465,    -1,  2467,  2468,  2469,  2470,  2471,  2472,
      -1,  2474,    -1,    -1,  2477,  2478,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2501,    -1,
      -1,  2504,  2505,    -1,    -1,    -1,  2509,    -1,    -1,    -1,
      -1,  2514,  2515,    -1,  2517,    -1,    -1,    -1,    -1,    -1,
      -1,   466,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   477,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   486,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2566,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   812,
      -1,    -1,    -1,    -1,    -1,    -1,   819,    -1,    -1,    -1,
      -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,   554,
     555,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   567,    -1,    -1,    -1,    -1,   572,    -1,    -1,
      95,    96,    -1,    -1,    -1,  2638,   581,    -1,   103,  2642,
      -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,    -1,  2652,
    2653,    -1,    -1,    -1,    -1,  2658,  2659,    -1,    -1,  2662,
    2663,    -1,    -1,    -1,   129,  2668,    -1,    -1,  2671,  2672,
     135,    -1,    -1,   138,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2690,  2691,    -1,
    2693,  2694,  2695,  2696,  2697,   160,  2699,  2700,    -1,    -1,
      -1,  2704,    -1,    -1,    -1,    -1,   171,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2717,    -1,   949,  2247,    -1,    -1,
      -1,    -1,    -1,   956,  2727,   670,   671,   672,   673,    -1,
      -1,    -1,    -1,  2263,  2264,  2265,    -1,    -1,  2268,    -1,
    2270,  2271,  2745,    -1,  2274,  2275,  2276,    -1,    -1,  2279,
    2280,   216,    -1,  2283,    -1,  2285,  2286,    -1,  2288,   224,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1001,  1002,
      -1,    -1,    -1,  1006,    -1,    -1,  1009,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2787,    -1,    -1,    -1,  1021,  2792,
      -1,  2794,    -1,    -1,    -1,    -1,    -1,  2800,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   271,    -1,    -1,    -1,
    2813,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   284,
      -1,    -1,    -1,    -1,  1098,    -1,    -1,    -1,  2831,    -1,
      -1,    -1,  2835,   778,  2888,    -1,   301,     3,     4,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   311,  2482,   313,    -1,
      -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,  2861,    -1,
      -1,    -1,  1136,    -1,    -1,  2395,    -1,    -1,  2398,    -1,
      -1,    -1,    38,  2403,    -1,    -1,  2406,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2892,
      -1,    57,    -1,    -1,  2897,  2425,  2899,    -1,    -1,    -1,
      -1,    -1,    -1,  2906,   369,    -1,    -1,  1112,  2911,    -1,
      -1,  1144,    -1,  2916,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2940,  2941,   105,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2966,    -1,    -1,  2969,    -1,    -1,  2972,
      -1,    -1,    -1,    -1,    -1,  2957,    -1,    -1,    -1,  2982,
    2983,  2984,  2985,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2994,  2522,    -1,  2997,    -1,    -1,    -1,    -1,    -1,
      -1,  3004,    -1,  3006,   170,   950,  2988,    -1,    -1,  2991,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   962,    -1,    -1,
      -1,    -1,    -1,    -1,  2554,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   213,    -1,    -1,
      18,  2686,    -1,    -1,   999,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2706,   238,    -1,    -1,  2710,    -1,   243,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   254,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2634,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1350,    -1,    -1,
      -1,    -1,    -1,    -1,  2654,    -1,    -1,    -1,    -1,    -1,
      -1,  2661,    -1,    -1,  2664,  2665,    -1,   105,    -1,  1084,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   320,  1388,    -1,    -1,    -1,    -1,
    1393,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1403,    -1,    -1,    -1,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   170,     4,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2850,    -1,    18,    -1,    -1,
      -1,    -1,    -1,    -1,  1169,  1499,  1500,  1501,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1509,  1510,  1511,    -1,    -1,
      -1,    -1,    -1,    -1,  1518,  1519,  1520,    -1,     4,  1523,
    1524,    -1,  1526,  1527,    -1,    -1,    57,    -1,  2788,    -1,
      -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     238,    -1,    -1,    -1,    -1,   243,    -1,  2807,  1223,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1560,  1561,  1233,    -1,
    1564,  1565,    -1,    -1,    -1,  2676,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1517,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2702,    -1,    -1,  1529,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2978,    -1,    -1,  1551,  1552,    -1,   105,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2890,  2891,    -1,  2893,    -1,  2895,  2896,    -1,  2898,   170,
      -1,    -1,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
      -1,  1346,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1642,
      -1,    -1,    -1,    -1,   170,    -1,    -1,    -1,    -1,  1364,
      -1,    -1,  2952,    -1,    -1,    -1,    -1,    -1,    -1,  2810,
    2811,    -1,    -1,  2814,    -1,  2816,    -1,   238,    -1,    -1,
      -1,    -1,   243,    -1,    -1,    -1,    -1,  2828,  2829,  1394,
      -1,    -1,  2833,  2834,    -1,    -1,  2837,    -1,    -1,  1404,
      -1,  2842,  2843,    -1,    -1,    -1,    -1,    -1,  2998,  1702,
      -1,    -1,    -1,    -1,    -1,  1708,  1421,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   243,  1433,    -1,
      -1,    -1,    -1,  1438,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2900,
      -1,    -1,  2903,    -1,    -1,    -1,    -1,  2908,    -1,    -1,
      -1,    -1,    -1,  2914,    -1,    -1,    -1,    -1,  2919,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1811,    -1,
      -1,    -1,    -1,  1816,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,  2993,    -1,  1847,  2996,    -1,    -1,    -1,    -1,
    1853,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1578,    -1,  3016,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1880,    -1,  3030,
      -1,    -1,  3033,  3034,  1887,    -1,    -1,    -1,    -1,    -1,
      -1,  1606,    -1,    -1,    -1,  1939,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1952,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1962,  1634,
      -1,    -1,  1637,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1646,  1647,    -1,    -1,    -1,    -1,    -1,    -1,  1654,
      -1,    -1,    -1,    -1,    -1,    -1,  1661,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   264,    -1,  1958,   267,    -1,  1701,    -1,    -1,    -1,
    2034,  1966,  1967,    -1,    -1,    -1,    -1,    -1,  1713,    -1,
      -1,  1976,  1977,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      -1,  1986,  1987,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2001,  2002,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2039,  2012,  2013,    -1,
      -1,    -1,    -1,    -1,  2019,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   105,    -1,  2029,    -1,  2059,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,    -1,    -1,    -1,    -1,  2092,
    2093,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1814,
      -1,    -1,    -1,    -1,    -1,  2108,  2109,    -1,    -1,    -1,
    2113,  2114,    -1,    -1,    -1,    -1,    -1,   170,    -1,    -1,
      -1,    -1,    -1,  1838,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1854,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2153,    -1,  1867,    -1,  1869,    -1,    -1,    -1,    -1,    -1,
      -1,  2164,    -1,    -1,  1879,    -1,    -1,  1882,  1883,  1884,
    1885,  1886,    -1,  1888,    -1,    -1,  1891,    -1,    -1,  1894,
    1895,  1896,  1897,  1898,  1899,   238,  1901,  1902,    -1,    -1,
     243,  1906,  1907,  1908,    -1,    -1,  1911,  1912,    -1,    -1,
      -1,    -1,  1917,  1918,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2217,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2238,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   306,    -1,    -1,    -1,    -1,  2261,    -1,
      -1,  2305,    -1,  2266,    -1,    -1,    -1,    -1,    -1,  2272,
      -1,    -1,    -1,    -1,  2277,    -1,    -1,    -1,  2281,    -1,
      -1,  2284,    -1,    -1,  2287,    -1,  2289,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,    -1,    -1,    -1,    -1,    -1,
      -1,  2365,  2366,  2367,  2368,  2369,  2041,  2371,  2372,  2044,
      -1,  2306,  2376,  2377,  2378,  2379,  2380,    -1,  2382,  2383,
    2055,  2316,  2317,  2058,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2327,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2336,    -1,    -1,    -1,  2340,  2341,    -1,    -1,    -1,
      -1,    -1,  2087,    -1,  2349,  2350,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2358,  2359,    -1,    -1,    -1,    -1,  2364,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,  2374,
    2375,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2385,    -1,  2387,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    50,  2142,    52,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2165,    -1,    -1,    77,    78,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    -1,    -1,    88,    -1,    -1,    -1,    -1,    -1,
    2473,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   106,    -1,    -1,    -1,  2489,    -1,    -1,    -1,
      -1,   115,   116,    -1,    -1,   119,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,  2239,  2569,    -1,  2530,    -1,    -1,
      -1,    -1,    18,    -1,  2578,  2579,  2580,  2581,  2582,  2254,
    2584,  2585,    -1,  2587,  2588,  2589,  2590,  2591,    -1,  2593,
    2594,    -1,  2596,  2597,  2598,  2599,  2600,    -1,  2602,  2603,
    2563,  2605,    -1,    -1,    -1,   189,    -1,  2282,    -1,    -1,
      -1,  2615,  2616,    -1,    -1,    -1,    -1,    -1,  2293,    -1,
      66,    67,  2626,    -1,    -1,    -1,    72,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2570,    -1,    -1,  2573,    -1,
      -1,  2576,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,
      -1,  2586,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,
    2595,    -1,    -1,    -1,    -1,   249,    -1,    -1,  2631,  2604,
      -1,   255,    -1,    -1,  2637,    -1,  2611,    -1,  2641,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2622,   272,    -1,
      -1,    -1,    -1,  2628,  2657,    -1,    -1,    -1,    -1,   283,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2397,    -1,   170,  2400,    -1,    -1,   312,   313,
      -1,    -1,    -1,  2408,    -1,    -1,    -1,    -1,    -1,   185,
      -1,    -1,    -1,    -1,    -1,  2708,  2709,    -1,    -1,  2424,
      -1,   335,  2427,    -1,    -1,  2759,    -1,  2432,    -1,   205,
    2435,  2436,    -1,    -1,  2768,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2777,    -1,  2779,    -1,    -1,    -1,  2783,
      -1,    -1,    -1,   229,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   380,   243,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2483,  2484,
      -1,    -1,    -1,    -1,  2749,    -1,    -1,    -1,    -1,    -1,
      -1,  2756,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2765,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2774,
      17,    18,    -1,    -1,    -1,  2780,    -1,    -1,    -1,  2784,
      -1,   297,    -1,    -1,    -1,  2818,    -1,    -1,    -1,    -1,
    2535,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2878,    -1,  2880,    -1,  2882,    -1,
      -1,  2885,    59,  2887,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,    -1,   369,    -1,    -1,    -1,    -1,   105,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   121,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2920,  2633,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2944,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2666,    -1,   170,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2677,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   190,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2989,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  3009,    -1,    -1,  3012,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2732,    -1,    -1,
      -1,  2736,    -1,    -1,    -1,    -1,   243,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2790,  2791,    -1,  2793,    -1,
      -1,    -1,    -1,  2798,  2799,    -1,    -1,    -1,  2803,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   315,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2836,    -1,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,    -1,    -1,  2868,    -1,    19,    20,    21,    -1,    -1,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    50,    -1,    -1,    53,
      49,    50,    56,    -1,    53,    -1,    18,    -1,    -1,    63,
      -1,    60,    -1,    67,    63,    -1,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    77,    78,    -1,    -1,    -1,    77,    78,
      -1,    85,    86,    -1,    -1,    -1,    85,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,   103,
      -1,    -1,  2957,    -1,    -1,    -1,    -1,   111,    -1,    18,
      -1,   115,   116,    -1,    -1,   119,   115,   116,    -1,  2974,
     119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2988,   138,    -1,  2991,    18,    -1,   138,
      -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    60,    -1,    -1,    -1,    -1,   160,    -1,    -1,    -1,
      -1,   160,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    18,    -1,   189,    -1,    -1,    -1,    -1,
     189,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,
     199,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   170,    -1,
      -1,    -1,   216,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   247,    -1,   249,    -1,    -1,   247,    -1,
      -1,   255,   256,    -1,    -1,    -1,   255,   256,    -1,    -1,
      -1,   170,    -1,    -1,    -1,    -1,    -1,   271,   272,    -1,
     105,    -1,    -1,   272,    -1,    -1,   238,    -1,    -1,   283,
     284,   243,    -1,    -1,    -1,   284,    -1,    -1,    -1,   170,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   311,    -1,   313,
      -1,    -1,   311,    -1,   313,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   326,    -1,   328,   324,    -1,    -1,    -1,    -1,
      -1,   335,    -1,    -1,   243,   170,   335,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   243,    -1,    -1,   369,    -1,    -1,    -1,    -1,
     369,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   315,    -1,   243,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,    40,    -1,    -1,    43,    -1,    -1,    46,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,    65,    66,
      -1,    -1,    -1,    70,    71,    72,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,
      87,    -1,    89,    90,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    99,   100,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     147,    -1,    -1,    -1,   151,    -1,    -1,    -1,   155,    -1,
      -1,    -1,   159,   160,    -1,    -1,    -1,    -1,   165,   166,
      -1,    -1,   169,    -1,    -1,    -1,    -1,    -1,   175,    -1,
      -1,    -1,    -1,    -1,   181,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   192,    -1,    -1,    -1,   196,
     197,   198,    -1,    -1,   201,   202,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   214,    -1,    -1,
      -1,   218,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    43,    -1,   235,    46,
     237,   238,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   250,    -1,   252,    -1,    -1,    -1,    66,
      -1,    -1,   259,    70,    71,    72,   263,    -1,    -1,    -1,
     267,    -1,   269,    80,   271,    82,    -1,    -1,    -1,   276,
      87,    -1,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,
      97,    -1,    99,    -1,   291,    -1,    -1,    -1,    -1,    -1,
     297,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   314,   315,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   133,    -1,    -1,    -1,
     327,    -1,   329,    -1,    -1,    -1,    -1,    -1,    -1,   336,
      -1,    -1,   339,   340,   151,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   160,    -1,   162,   163,    -1,   165,   166,
      -1,    -1,   169,    -1,   170,    -1,   173,    -1,   175,   175,
      -1,    -1,    -1,   370,   181,    -1,    -1,    -1,    -1,    -1,
     377,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   201,   202,    -1,    -1,    -1,   206,
      -1,    -1,    -1,    -1,    -1,    -1,   175,   214,    -1,    -1,
      -1,   218,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   235,    -1,
     237,    -1,    -1,    -1,    -1,    -1,    -1,   244,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   269,    -1,   271,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     297,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   314,   315,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   324,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   332,    -1,    -1,    -1,    -1,
      -1,   338,    -1,   340,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     377,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    40,    43,    46,    60,    65,    66,    70,    71,    72,
      80,    87,    89,    90,    99,   100,   125,   134,   147,   151,
     155,   159,   160,   165,   166,   169,   175,   181,   192,   196,
     197,   198,   201,   202,   214,   218,   235,   237,   238,   250,
     252,   259,   263,   267,   269,   271,   276,   291,   297,   314,
     315,   327,   329,   336,   339,   340,   370,   377,   383,    67,
      11,    54,    74,   104,   126,   130,   144,   320,   417,     3,
       4,   320,   384,   422,   206,   212,   254,   281,   331,   376,
     424,   311,     4,    39,   117,   165,   166,   213,   214,   269,
     429,    27,   161,   190,   194,   251,   293,   302,   303,   399,
     431,    86,   103,   192,   240,   276,   432,    39,    60,   117,
     213,   315,   384,   441,     4,    18,    39,    57,   105,   127,
     170,   213,   223,   231,   232,   238,   243,   323,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   373,   378,   379,
     386,   394,   395,   396,   443,    32,   444,   386,    43,    46,
      79,    87,   152,   211,   239,   241,   269,   340,   385,   386,
      65,   384,   446,   155,   447,    40,    43,    46,    66,    70,
      71,    72,    80,    82,    87,    89,    90,    91,    97,    99,
     133,   151,   160,   162,   163,   165,   166,   169,   173,   175,
     181,   201,   202,   206,   214,   218,   235,   237,   244,   269,
     271,   297,   314,   315,   324,   332,   338,   340,   377,   448,
      86,   103,   497,    18,    40,    43,    80,    87,    98,    99,
     105,   133,   151,   169,   170,   176,   201,   243,   297,   309,
     340,   500,    67,   386,    62,   309,   334,   583,    62,   309,
     334,   582,    91,   122,   204,   221,   285,   329,   340,   506,
      15,     4,    45,    48,    67,    86,   103,   109,   159,   182,
     291,   318,   319,   330,   334,   565,    25,   118,   133,   172,
     228,   242,   509,   253,   527,     5,    67,    91,   149,   329,
     377,   386,   528,     5,   529,    58,   140,   248,   263,   331,
     545,    45,    65,    67,   200,   262,   309,   319,   566,   309,
     581,    67,   224,   372,   378,   380,   567,    38,   213,   254,
     320,   384,   394,   396,   568,     5,   329,   340,   386,   571,
      73,   185,   268,   278,   572,     4,   573,    91,   545,    62,
     309,   334,   580,   213,   320,   384,   584,    25,   118,   133,
     228,   242,   586,    51,   103,   114,   146,   322,   607,   608,
       4,    36,    47,    77,   160,   205,   278,   308,   316,   334,
     412,     4,   133,   227,   609,   320,   384,   611,    15,    22,
     264,   267,   395,   612,   253,   616,   320,   384,   617,     0,
       5,   386,    60,   384,   418,   294,     5,     4,   320,   384,
     419,     5,    31,   307,   420,   132,   384,   421,   132,   384,
     423,   384,     4,   212,   266,   273,   427,   206,   331,   375,
     376,   384,   426,   386,   148,   193,   425,   218,   384,    81,
     189,   273,   384,   428,     5,   384,   384,   384,     4,   165,
     166,   214,   269,   430,     4,   384,   384,     5,   249,   433,
      30,   434,     5,   435,     5,   439,     5,    30,   440,   384,
       8,     9,    10,   384,   390,   391,   392,   393,   384,   384,
      39,   117,   213,   384,   442,   384,   213,   394,   396,   384,
      34,   112,   136,   137,   145,   167,   177,   401,   384,     4,
     386,   386,   386,   386,   386,   386,   386,   386,   386,   386,
     124,    67,    54,    74,    91,   104,   126,   130,   144,   191,
     451,   126,   453,   206,   212,   254,   281,   331,   375,   376,
     384,   436,   454,   311,   457,   185,   458,   185,   194,   460,
      66,    67,    72,    95,   185,   205,   229,   297,   369,   394,
     462,   384,   396,   465,    60,   315,   394,   466,   306,   394,
     396,   467,    32,   468,   394,   396,   469,     4,   394,   396,
     470,    44,    60,    84,   104,   124,   128,   157,   158,   220,
     230,   294,   295,   369,   474,   234,   333,   480,    67,     5,
      92,    62,   309,   334,   488,    62,   309,   334,   487,     4,
      91,   128,   472,     5,    66,   396,   471,    15,    45,    67,
      84,   182,   319,   334,   481,   545,    45,    67,    84,   200,
     262,   309,   319,   482,   309,   486,    67,   254,   484,   310,
      62,   309,   334,   485,    20,   144,   261,   292,   489,    36,
      47,    77,   160,   205,   278,   334,   490,   396,    92,    15,
     217,   495,   394,   498,    67,    75,   501,    30,   502,    43,
      90,   211,   503,   160,   240,   284,   325,   504,   394,    17,
      59,   121,   190,   315,   394,   505,     5,     5,   164,   277,
     332,   394,     4,     5,   164,   277,   394,     4,     4,   212,
     508,     5,     4,     4,   128,   384,     4,    45,    48,    67,
     103,   109,   159,   291,   318,   319,   330,   334,    67,    68,
      69,    94,   107,   123,   154,   164,   186,   195,   215,   236,
     277,   282,   298,   301,   398,     5,     4,   384,   386,     5,
     165,   166,   269,   510,     5,   512,     5,   124,   165,   166,
     211,   269,   295,   513,    97,   117,   206,   526,     5,   524,
       5,   295,   525,     4,     5,   386,   386,   384,   384,     5,
       4,     5,    61,    67,    76,    78,    83,    86,    92,   103,
     111,   120,   138,   160,   178,   191,   192,   216,   240,   254,
     256,   271,   276,   284,   291,   311,   325,   326,   328,   369,
     530,   398,     5,     4,   218,   225,   226,   262,   374,   397,
     384,   394,   384,   394,     5,   384,    39,   117,   384,   570,
     386,   384,   394,   396,   569,   384,   401,   384,     4,   395,
      55,    93,   150,   269,   574,     4,     4,   384,     4,   160,
     284,   575,     5,   394,     4,    39,   117,   384,   585,   384,
     101,    62,   128,   165,   166,   269,   299,   587,   128,   606,
      62,   124,   128,   165,   166,   170,   211,   265,   269,   295,
     299,   310,   588,   589,    62,   128,   299,   605,     5,     4,
      33,   113,   224,   579,    67,   386,   413,    67,   386,   414,
      67,   386,   415,    12,   208,   578,   384,     4,   384,   247,
     384,   416,   384,   295,     4,   384,   384,     4,   248,   320,
     615,     4,   313,   613,     4,   313,   614,     4,   401,   132,
     384,   618,   384,   384,     4,     5,   384,    11,   384,   384,
     384,    29,    98,   176,   273,   279,   400,   400,     4,   218,
     384,   384,     4,     4,     4,   384,   384,   384,   384,   384,
     384,     4,   384,     4,   384,     4,     4,     5,     5,   394,
       5,   384,   384,   390,   392,   392,   394,   384,   384,   384,
     384,   384,   384,   384,   394,   396,   393,   384,   384,   393,
     384,     5,   294,   108,   206,   452,   212,   273,   455,   185,
      81,   189,   273,   456,   148,   193,   437,   437,     4,   459,
       4,   461,   212,   281,   463,   194,   464,   185,   401,   384,
     384,   394,   394,   401,   401,   401,   394,   401,   384,   394,
       4,   477,     4,   396,   475,   217,     4,   179,   340,   476,
     217,   394,     4,   141,   320,   479,     5,     5,   449,     4,
     217,   143,   270,   387,   384,     4,   483,   483,   483,   483,
       4,     5,    61,    67,   120,   138,   153,   160,   168,   229,
     249,   254,   256,   283,   284,   291,   311,   369,   539,   396,
     207,   207,    67,   491,    67,   492,    67,   493,   247,   494,
     384,     5,   450,   248,   496,   395,   401,     5,   394,   394,
     394,   394,     4,     4,     4,   386,     4,     4,   217,   384,
     398,     5,   384,   386,    13,    14,    62,   209,   210,   288,
     299,   300,   333,    90,    90,    90,     5,     5,    13,    14,
      62,   209,   210,   288,   299,   300,   304,   333,    90,    90,
     170,    90,   170,   170,   175,   395,   516,   521,    90,   170,
       5,   514,     4,     4,    13,    62,   209,   288,   299,   333,
       5,     5,     4,   384,   395,    19,    20,    21,    49,    50,
      53,    56,    63,    67,    77,    78,    85,    86,   103,   111,
     115,   116,   119,   138,   160,   189,   216,   247,   249,   255,
     256,   271,   272,   283,   284,   311,   313,   326,   328,   335,
     369,    67,    83,    92,   103,   138,   160,   216,   256,   284,
     326,   328,     4,    29,   174,   234,   261,   533,     5,    64,
     110,   258,   274,   275,   371,   372,   538,   103,   531,    16,
     284,   536,    39,   117,   213,   537,     4,     5,    16,   233,
     321,   384,   284,   538,   546,   133,   538,   547,    35,    39,
     117,   142,   213,   320,   384,   548,   394,   386,    95,   103,
     111,   129,   135,   160,   171,   216,   224,   271,   284,   301,
     551,    39,   117,   213,     5,   284,   312,   555,    16,   131,
     183,   233,   321,   556,   313,   386,   557,     5,   103,   111,
     329,    16,    16,     4,   384,   384,   384,   384,   384,   384,
     401,   384,   384,   393,   384,     4,   401,     4,    39,   117,
     213,   289,   576,    39,   117,   213,   289,   577,     4,   101,
       5,     5,    90,    90,    90,     4,     5,     5,    90,     5,
      90,   170,    90,   170,   589,    62,   128,   170,   299,   593,
      62,   128,   299,   604,    90,   170,    62,   128,   299,   591,
       4,    62,   128,   299,   590,     5,     5,     4,     4,     5,
       5,     5,   384,   384,   384,     4,   384,   610,   384,   384,
     395,    65,     4,     4,     5,     4,     4,     5,     4,   101,
     286,   402,   384,   384,    11,     5,    11,   384,   384,    11,
       4,    11,     4,     4,   384,   384,   384,   384,   384,     4,
     384,     5,   384,     4,   386,     4,     4,   401,   394,   401,
     384,   384,   384,   394,   384,   393,   384,   384,     5,     5,
     384,   396,   384,   394,   384,   401,   401,   402,   402,   402,
     401,   393,   384,   401,   384,   387,   478,   179,     5,     4,
     401,   170,   170,     4,     5,     4,     4,   384,   473,    37,
      37,   384,    19,    20,    21,    49,    50,    53,    60,    63,
      67,    77,    78,    85,   115,   116,   119,   138,   160,   189,
     199,   247,   255,   256,   272,   284,   311,   313,   324,   335,
     369,    67,   138,   168,   256,   311,    29,   174,   234,   261,
     540,   384,   229,   384,   541,    16,   384,   283,   551,   283,
     229,   384,   542,   313,   543,    16,   102,   384,   384,     5,
     402,     4,     4,    57,   394,     4,     5,   507,   384,     5,
       5,     5,   170,   202,   406,   406,   178,   290,   404,     4,
       4,     5,     5,   511,   511,   511,   296,   296,     5,     5,
       5,    16,   172,   405,   405,   404,     4,     4,   404,     5,
       5,   515,     5,   522,     5,   523,   522,   523,   175,   368,
     395,   519,     5,   518,     5,   522,   523,     5,    13,    14,
      62,   209,   210,   288,   299,   300,   304,   333,     4,     4,
       5,     5,   406,   404,     4,     5,     5,   401,    85,   162,
     245,   246,   260,   305,   409,     6,     7,   384,   389,   261,
     261,   261,   111,    39,    67,   103,   111,   117,   138,   160,
     178,   216,   256,   271,   284,   313,   326,   328,   329,   369,
     532,   261,     5,    26,   180,   261,   309,   148,   111,    21,
      50,    53,    85,   116,   119,   249,   283,    21,    50,    53,
      56,    85,   116,   119,   249,   283,   311,    39,   261,   261,
     111,     5,   233,    26,   247,    35,   142,   320,   384,   287,
     294,   267,   394,   551,    39,   139,   247,   309,   267,   233,
       5,     5,   271,    26,   247,     4,     5,     5,   233,    35,
     142,   320,   384,   551,   233,   386,     4,     4,   384,     5,
     333,    21,    26,    49,    50,    52,    53,    63,    77,    78,
      85,    88,   106,   115,   116,   119,   189,   249,   255,   272,
     283,   312,   313,   335,   380,   534,   384,   384,   384,   384,
     384,   538,   394,     5,     4,     5,   384,   384,   394,   384,
     386,   384,   384,   538,     5,     5,   384,   384,   386,     5,
      16,     5,     5,   384,   384,   393,   384,   384,     4,   384,
     384,   117,   384,   384,   117,     4,    41,    42,   187,   188,
     219,   411,   411,    62,   128,   299,   601,    62,   128,   299,
     598,    62,   128,   299,   595,   411,     5,    62,   128,   299,
     592,    62,   128,   299,   603,    62,   128,   299,   602,    62,
     128,   299,   600,    62,   128,   299,   599,     5,     5,    62,
     128,   299,   594,     4,     5,     5,     4,    62,   128,   299,
     597,    62,   128,   299,   596,     5,     5,     4,     5,     5,
       4,   411,   411,   411,   384,   384,   384,     4,   394,   384,
     401,   395,     5,     5,    11,   384,   394,   396,   384,    11,
     384,   384,   384,    60,   384,     4,   384,   384,     4,   384,
     384,     5,   384,     5,   384,    46,   297,   438,     5,   386,
     386,   401,   384,     4,     4,     4,   401,   394,   384,   384,
     384,   384,   401,   394,   402,   393,   384,     4,   402,   384,
       4,   396,     5,    23,    24,   101,   403,     4,   394,   384,
     384,     4,   384,     5,    85,   162,   245,   246,   260,   305,
     394,   396,   261,   261,   261,    20,   261,   394,   261,    26,
     180,   261,   309,   148,    20,   261,   261,   261,    20,   261,
      26,   184,   247,   184,   287,   294,   184,   247,   317,   551,
     139,   184,   247,   309,     4,   271,    26,   184,   247,   551,
     229,   384,   384,   384,   384,   384,   384,   217,   384,   384,
      19,   257,   499,     4,     4,   384,   406,   406,   406,     4,
     406,   406,   406,    13,    14,    62,   209,   210,   288,   299,
     300,   333,   405,   406,   406,   406,   406,   406,     4,   406,
     406,     4,   405,    13,    14,    62,   209,   210,   288,   299,
     300,   333,     5,    13,    14,    62,   209,   210,   288,   299,
     300,   304,   333,    13,    14,    62,   209,   210,   288,   299,
     300,   333,     5,   517,     5,   520,     5,     5,    13,    14,
      62,   209,   210,   288,   299,   300,   304,   333,     5,    13,
      14,    62,   209,   210,   288,   299,   300,   304,   333,   296,
       5,     5,     5,   405,   405,   404,     4,     4,   404,     5,
       4,     4,   406,   406,     4,   406,   406,     5,   386,   394,
     396,     5,   384,   384,     5,   384,     5,   389,   111,   216,
     271,   111,   216,   271,     5,   384,   386,     5,   384,   394,
     386,     5,   389,   261,   261,    20,   261,    20,   261,   261,
      20,   261,   337,   337,     4,     4,     4,   532,     4,     4,
       4,   337,   337,     4,     5,     4,   384,     5,   384,     5,
     389,   386,   394,   394,   384,    26,    49,    52,    63,    88,
     106,   380,   407,     4,   384,   401,   386,     5,   394,   394,
     384,   386,   386,   394,   394,   384,   386,   384,     5,   384,
     247,   247,   384,   384,   247,   384,   247,   384,   384,   544,
     552,   384,   247,   247,   384,   384,   384,   384,   384,   384,
     384,   384,     5,   333,   384,   535,   384,   384,   247,   384,
     384,   384,   384,   394,   401,     5,     4,     4,   384,   384,
     401,   384,   384,   384,   394,   538,   384,   384,     5,     4,
     384,   384,   384,   384,     5,     5,     4,     5,     5,     4,
       5,     5,     4,   411,     5,     5,     4,     5,     5,     4,
       5,     5,     4,     5,     5,     4,     5,     5,     4,     4,
       4,     5,     5,     4,     4,     5,     5,     4,     5,     5,
       4,   384,   384,   384,   384,   401,   384,   394,   396,   384,
     401,   384,   384,   384,   384,   384,     5,   384,   384,   384,
       4,   384,   384,     5,   384,     5,   384,     4,   394,   384,
     401,   194,   399,   384,   399,   402,   401,   394,   384,   384,
       4,   384,   394,   394,   384,   387,     5,     5,     5,     5,
       5,   394,   401,   394,   394,   394,   394,   396,   394,   401,
     394,   394,   394,   396,   394,   394,   394,   394,   396,   394,
     394,   394,   384,   394,   394,   394,   394,   394,   394,   394,
     384,   384,     4,   384,     5,   384,   406,     5,     5,     5,
     404,     4,     4,     5,   406,   405,     4,   406,     5,     5,
       5,   405,   405,   404,     4,     4,     5,   296,     5,     5,
       5,   405,   405,   404,     4,     4,   404,     5,     5,     5,
       5,   405,   405,   404,     4,     4,     5,    13,    14,    62,
     209,   210,   288,   299,   300,   333,    13,    14,    62,   209,
     210,   288,   299,   300,   333,    13,    14,    62,   209,   210,
     288,   299,   300,   333,   296,     5,     5,     5,   405,   405,
     404,     4,     4,   404,     5,   296,     5,     5,     5,   405,
     405,   404,     4,     4,   404,     5,   405,     4,     4,   405,
       4,     4,   406,     5,   401,   394,   384,   384,   394,   384,
       5,   389,     5,   394,   386,     5,   394,   401,     5,   389,
     384,   384,   384,   384,   384,   384,   384,   384,   384,     4,
       4,     5,     4,     4,   384,   394,   384,     5,   389,   386,
     401,   401,   384,   393,   401,   401,   384,   401,   401,   384,
     384,   384,   384,   384,   384,   384,   384,   384,   384,    56,
      67,    96,   138,   311,   313,   369,   549,   550,   551,   563,
     564,   384,   384,   384,   384,   384,   384,   384,   384,   384,
     384,   384,   384,   394,     5,   384,   384,   384,   384,     4,
       4,   401,   402,     5,     5,   393,   384,     4,   401,   394,
       4,   411,   411,   411,   411,   411,   411,   411,   411,   411,
     389,   384,   384,   384,   401,   384,   393,   384,   384,    11,
       5,     5,   384,   384,   384,   384,     5,   384,     4,   384,
       4,   401,   394,   384,   384,   402,   403,   384,     5,   384,
     394,   396,     5,     5,     5,     5,     5,   401,   403,   403,
     403,   401,   403,   402,   403,   403,   401,   403,   403,   403,
     401,   403,   403,   401,   394,   403,   401,   403,   403,   401,
     403,   401,     4,   394,   396,     5,   384,     4,   406,   405,
       4,   405,   405,     4,     4,   405,     4,   405,     5,     5,
       5,   405,   405,   404,     4,     4,     5,     5,     5,     5,
     405,   405,   404,     4,     4,     5,     5,     5,     5,   405,
     405,   404,     4,     4,     5,   405,   406,   406,   406,   406,
     406,     4,   406,   406,     4,   405,   405,   406,   406,   406,
     406,   406,     4,   406,   406,     4,   405,   405,     4,     4,
       4,   395,   403,     4,   394,   403,   384,   394,     4,   403,
     403,   394,     4,   384,   384,   384,   384,   384,   384,   384,
     384,   384,   384,   384,   394,   403,   384,   394,     4,   393,
     393,   394,   393,   393,   394,   394,   393,   393,   384,   384,
     384,   384,   384,   384,   389,   384,   384,   384,   381,   381,
     381,   381,   381,   381,   381,   550,   381,   389,   384,   384,
     384,   384,   389,   384,   384,   384,   384,   384,   384,   401,
     384,   333,   388,   389,   384,   384,   402,   386,   394,   394,
     402,   401,     4,   384,   393,   384,    60,   384,     5,     5,
       4,     4,   384,   384,     4,   384,     4,   399,   403,     5,
     401,     4,     5,     4,     5,   394,     5,   402,   403,   402,
     402,   402,     5,   401,     4,   384,   406,   405,   405,     4,
     405,   406,   406,   406,   406,   406,     4,   406,   406,   405,
     406,   406,   406,   406,   406,     4,   406,   406,   405,   406,
     406,   406,   406,   406,     4,   406,   406,   405,   406,   405,
       4,   406,   406,   405,     4,   406,   405,   401,   394,   403,
       4,   401,   384,   401,   384,   384,   384,   403,     4,   401,
     384,   393,   403,   384,   393,   403,   403,   394,   384,     4,
     408,   408,   384,   384,   408,   389,   408,   552,   394,   532,
       5,     4,     5,     5,     5,     4,   386,   389,   408,   408,
     384,   384,   389,   384,   384,   384,   384,   384,   393,   384,
       5,   552,   384,   408,   386,   553,   554,   401,   401,   386,
     402,     4,     5,   384,     5,     4,     4,     4,     4,     4,
       4,   384,     4,    31,   203,   307,   445,   394,     5,    31,
     203,   307,   410,   394,     4,   445,   384,   405,   405,   406,
     405,   406,   405,   406,   406,   405,   406,   405,   384,   403,
     394,   394,   384,   394,   384,   394,   394,   384,   394,   403,
       4,   552,   552,   388,   384,   552,     4,   552,   401,     5,
       4,     4,   552,   552,   388,   384,     4,   552,   552,   384,
     394,   552,   552,   552,   553,   560,   561,   551,   558,   559,
     386,     4,     5,     5,     4,     4,     4,   206,   331,   376,
     384,   436,   445,     4,   394,   445,     4,   406,   406,   406,
     406,   406,   395,   403,   403,   384,   403,     4,   403,   403,
     384,   403,   384,   552,   552,     4,   384,   552,     5,   384,
     552,     4,   384,   552,   401,   560,   562,   563,   381,   559,
       5,     5,   384,   437,   384,   437,   401,   403,     4,   394,
     396,     4,   389,   388,   384,   384,   388,   384,   394,   563,
     386,     5,     5,   384,   384,   384,   384,   410,     5,   394,
     396,   401,   394,   396,   552,   384,     4,   552,   384,   403,
       5,     5,   384,     5,   384,   401,   401,     4,   552,     4,
       5,     5,     5,   388,   388,   552,   552,   552
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
#line 489 "frame/parser.Y"
    {fr->bgColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 5:
#line 490 "frame/parser.Y"
    {fr->useBgColorCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 7:
#line 492 "frame/parser.Y"
    {fr->centerCmd();;}
    break;

  case 8:
#line 493 "frame/parser.Y"
    {fr->clearCmd();;}
    break;

  case 10:
#line 495 "frame/parser.Y"
    {fr->colorbarTagCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 17:
#line 502 "frame/parser.Y"
    {fr->DATASECCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 23:
#line 508 "frame/parser.Y"
    {fr->hideCmd();;}
    break;

  case 24:
#line 509 "frame/parser.Y"
    {fr->highliteCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 25:
#line 510 "frame/parser.Y"
    {fr->highliteColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 29:
#line 514 "frame/parser.Y"
    {fr->irafAlignCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 38:
#line 523 "frame/parser.Y"
    {fr->nanColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 42:
#line 527 "frame/parser.Y"
    {fr->queryCursorCmd();;}
    break;

  case 45:
#line 530 "frame/parser.Y"
    {fr->resetCmd();;}
    break;

  case 50:
#line 535 "frame/parser.Y"
    {fr->showCmd();;}
    break;

  case 52:
#line 537 "frame/parser.Y"
    {fr->threadsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 54:
#line 539 "frame/parser.Y"
    {fr->unloadFitsCmd();;}
    break;

  case 56:
#line 541 "frame/parser.Y"
    {fr->msg("Frame 1.0");;}
    break;

  case 61:
#line 548 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 62:
#line 549 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 63:
#line 552 "frame/parser.Y"
    {yydebug=(yyvsp[(1) - (1)].integer);;}
    break;

  case 64:
#line 553 "frame/parser.Y"
    {DebugMosaic=(yyvsp[(2) - (2)].integer);;}
    break;

  case 65:
#line 554 "frame/parser.Y"
    {yydebug=(yyvsp[(2) - (2)].integer);;}
    break;

  case 66:
#line 555 "frame/parser.Y"
    {DebugPerf=(yyvsp[(2) - (2)].integer);;}
    break;

  case 67:
#line 556 "frame/parser.Y"
    {DebugWCS=(yyvsp[(2) - (2)].integer);;}
    break;

  case 68:
#line 557 "frame/parser.Y"
    {DebugBin=(yyvsp[(2) - (2)].integer);;}
    break;

  case 69:
#line 558 "frame/parser.Y"
    {DebugBlock=(yyvsp[(2) - (2)].integer);;}
    break;

  case 70:
#line 559 "frame/parser.Y"
    {DebugCompress=(yyvsp[(2) - (2)].integer);;}
    break;

  case 71:
#line 560 "frame/parser.Y"
    {DebugCrop=(yyvsp[(2) - (2)].integer);;}
    break;

  case 72:
#line 561 "frame/parser.Y"
    {DebugGZ=(yyvsp[(2) - (2)].integer);;}
    break;

  case 73:
#line 562 "frame/parser.Y"
    {DebugRGB=(yyvsp[(2) - (2)].integer);;}
    break;

  case 74:
#line 565 "frame/parser.Y"
    {(yyval.integer)=((yyvsp[(1) - (1)].integer) ? 1 : 0);;}
    break;

  case 75:
#line 567 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 76:
#line 568 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 77:
#line 569 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 78:
#line 570 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 79:
#line 572 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 80:
#line 573 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 81:
#line 574 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 82:
#line 575 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 83:
#line 578 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 84:
#line 579 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 85:
#line 580 "frame/parser.Y"
    {(yyval.integer) = Base::FULLBASE;;}
    break;

  case 86:
#line 581 "frame/parser.Y"
    {(yyval.integer) = Base::ROOT;;}
    break;

  case 87:
#line 582 "frame/parser.Y"
    {(yyval.integer) = Base::FULL;;}
    break;

  case 88:
#line 585 "frame/parser.Y"
    {(yyval.real) = 0;;}
    break;

  case 89:
#line 586 "frame/parser.Y"
    {(yyval.real) = (yyvsp[(1) - (1)].real);;}
    break;

  case 90:
#line 589 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 91:
#line 590 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 92:
#line 591 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 93:
#line 594 "frame/parser.Y"
    {(yyval.real) = parseSEXStr((yyvsp[(1) - (1)].str));;}
    break;

  case 94:
#line 597 "frame/parser.Y"
    {(yyval.real) = parseHMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 95:
#line 600 "frame/parser.Y"
    {(yyval.real) = parseDMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 96:
#line 604 "frame/parser.Y"
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

  case 97:
#line 616 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 98:
#line 623 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 99:
#line 630 "frame/parser.Y"
    {
	  (yyval.vector)[0] = (yyvsp[(1) - (2)].real);
	  (yyval.vector)[1] = (yyvsp[(2) - (2)].real);
	  (yyval.vector)[2] = 1;
	;}
    break;

  case 100:
#line 637 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::IMAGE;;}
    break;

  case 101:
#line 638 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::PHYSICAL;;}
    break;

  case 102:
#line 639 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::DETECTOR;;}
    break;

  case 103:
#line 640 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::AMPLIFIER;;}
    break;

  case 104:
#line 641 "frame/parser.Y"
    {(yyval.integer) = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 105:
#line 644 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS;;}
    break;

  case 106:
#line 645 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSA;;}
    break;

  case 107:
#line 646 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSB;;}
    break;

  case 108:
#line 647 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSC;;}
    break;

  case 109:
#line 648 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSD;;}
    break;

  case 110:
#line 649 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSE;;}
    break;

  case 111:
#line 650 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSF;;}
    break;

  case 112:
#line 651 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSG;;}
    break;

  case 113:
#line 652 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSH;;}
    break;

  case 114:
#line 653 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSI;;}
    break;

  case 115:
#line 654 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSJ;;}
    break;

  case 116:
#line 655 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSK;;}
    break;

  case 117:
#line 656 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSL;;}
    break;

  case 118:
#line 657 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSM;;}
    break;

  case 119:
#line 658 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSN;;}
    break;

  case 120:
#line 659 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSO;;}
    break;

  case 121:
#line 660 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSP;;}
    break;

  case 122:
#line 661 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSQ;;}
    break;

  case 123:
#line 662 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSR;;}
    break;

  case 124:
#line 663 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSS;;}
    break;

  case 125:
#line 664 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCST;;}
    break;

  case 126:
#line 665 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSU;;}
    break;

  case 127:
#line 666 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSV;;}
    break;

  case 128:
#line 667 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSW;;}
    break;

  case 129:
#line 668 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSX;;}
    break;

  case 130:
#line 669 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSY;;}
    break;

  case 131:
#line 670 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSZ;;}
    break;

  case 132:
#line 671 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS0;;}
    break;

  case 133:
#line 674 "frame/parser.Y"
    {(yyval.integer) = Coord::CANVAS;;}
    break;

  case 134:
#line 675 "frame/parser.Y"
    {(yyval.integer) = Coord::PANNER;;}
    break;

  case 135:
#line 678 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 136:
#line 679 "frame/parser.Y"
    {(yyval.integer) = FitsMask::ZERO;;}
    break;

  case 137:
#line 680 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 138:
#line 681 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NaN;;}
    break;

  case 139:
#line 682 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONNaN;;}
    break;

  case 140:
#line 683 "frame/parser.Y"
    {(yyval.integer) = FitsMask::RANGE;;}
    break;

  case 141:
#line 686 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 142:
#line 687 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 143:
#line 688 "frame/parser.Y"
    {(yyval.integer) = FitsMask::MULTIPLY;;}
    break;

  case 144:
#line 689 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SCREEN;;}
    break;

  case 145:
#line 690 "frame/parser.Y"
    {(yyval.integer) = FitsMask::OVERLAY;;}
    break;

  case 146:
#line 691 "frame/parser.Y"
    {(yyval.integer) = FitsMask::DARKEN;;}
    break;

  case 147:
#line 692 "frame/parser.Y"
    {(yyval.integer) = FitsMask::LIGHTEN;;}
    break;

  case 148:
#line 693 "frame/parser.Y"
    {(yyval.integer) = FitsMask::COLOR_DODGE;;}
    break;

  case 149:
#line 694 "frame/parser.Y"
    {(yyval.integer) = FitsMask::COLOR_BURN;;}
    break;

  case 150:
#line 695 "frame/parser.Y"
    {(yyval.integer) = FitsMask::HARD_LIGHT;;}
    break;

  case 151:
#line 696 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOFT_LIGHT;;}
    break;

  case 152:
#line 697 "frame/parser.Y"
    {(yyval.integer) = FitsMask::DIFFERENCE;;}
    break;

  case 153:
#line 698 "frame/parser.Y"
    {(yyval.integer) = FitsMask::EXCLUSION;;}
    break;

  case 154:
#line 699 "frame/parser.Y"
    {(yyval.integer) = FitsMask::HUE;;}
    break;

  case 155:
#line 700 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SATURATION;;}
    break;

  case 156:
#line 701 "frame/parser.Y"
    {(yyval.integer) = FitsMask::COLOR;;}
    break;

  case 157:
#line 702 "frame/parser.Y"
    {(yyval.integer) = FitsMask::LUMINOSITY;;}
    break;

  case 158:
#line 705 "frame/parser.Y"
    {(yyval.integer) = FrScale::LINEARSCALE;;}
    break;

  case 159:
#line 706 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOGSCALE;;}
    break;

  case 160:
#line 707 "frame/parser.Y"
    {(yyval.integer) = FrScale::POWSCALE;;}
    break;

  case 161:
#line 708 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQRTSCALE;;}
    break;

  case 162:
#line 709 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQUAREDSCALE;;}
    break;

  case 163:
#line 710 "frame/parser.Y"
    {(yyval.integer) = FrScale::ASINHSCALE;;}
    break;

  case 164:
#line 711 "frame/parser.Y"
    {(yyval.integer) = FrScale::SINHSCALE;;}
    break;

  case 165:
#line 712 "frame/parser.Y"
    {(yyval.integer) = FrScale::HISTEQUSCALE;;}
    break;

  case 166:
#line 715 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 167:
#line 716 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 168:
#line 717 "frame/parser.Y"
    {(yyval.integer)=FrScale::SAMPLE;;}
    break;

  case 169:
#line 718 "frame/parser.Y"
    {(yyval.integer)=FrScale::DATAMIN;;}
    break;

  case 170:
#line 719 "frame/parser.Y"
    {(yyval.integer)=FrScale::IRAFMIN;;}
    break;

  case 171:
#line 722 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 172:
#line 723 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 173:
#line 724 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 174:
#line 725 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 175:
#line 726 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 176:
#line 727 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 177:
#line 728 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::GALACTIC;;}
    break;

  case 178:
#line 729 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ECLIPTIC;;}
    break;

  case 179:
#line 732 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 180:
#line 733 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 181:
#line 734 "frame/parser.Y"
    {(yyval.integer)=Coord::SEXAGESIMAL;;}
    break;

  case 182:
#line 737 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 183:
#line 738 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 184:
#line 739 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCMIN;;}
    break;

  case 185:
#line 740 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCSEC;;}
    break;

  case 186:
#line 743 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 187:
#line 744 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 188:
#line 745 "frame/parser.Y"
    {(yyval.integer) = Base::KEY;;}
    break;

  case 189:
#line 748 "frame/parser.Y"
    {;}
    break;

  case 190:
#line 749 "frame/parser.Y"
    {;}
    break;

  case 191:
#line 750 "frame/parser.Y"
    {;}
    break;

  case 192:
#line 753 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 193:
#line 754 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 194:
#line 755 "frame/parser.Y"
    {(yyval.integer) = Base::MASK;;}
    break;

  case 195:
#line 758 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 196:
#line 759 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 197:
#line 760 "frame/parser.Y"
    {(yyval.integer) = Point::BOX;;}
    break;

  case 198:
#line 761 "frame/parser.Y"
    {(yyval.integer) = Point::DIAMOND;;}
    break;

  case 199:
#line 762 "frame/parser.Y"
    {(yyval.integer) = Point::CROSS;;}
    break;

  case 200:
#line 763 "frame/parser.Y"
    {(yyval.integer) = Point::EX;;}
    break;

  case 201:
#line 764 "frame/parser.Y"
    {(yyval.integer) = Point::ARROW;;}
    break;

  case 202:
#line 765 "frame/parser.Y"
    {(yyval.integer) = Point::BOXCIRCLE;;}
    break;

  case 203:
#line 768 "frame/parser.Y"
    {(yyval.integer) = POINTSIZE;;}
    break;

  case 204:
#line 769 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 205:
#line 772 "frame/parser.Y"
    {(yyval.integer) = Marker::PANDA;;}
    break;

  case 206:
#line 773 "frame/parser.Y"
    {(yyval.integer) = Marker::HISTOGRAM;;}
    break;

  case 207:
#line 774 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT2D;;}
    break;

  case 208:
#line 775 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT3D;;}
    break;

  case 209:
#line 776 "frame/parser.Y"
    {(yyval.integer) = Marker::RADIAL;;}
    break;

  case 210:
#line 777 "frame/parser.Y"
    {(yyval.integer) = Marker::STATS;;}
    break;

  case 211:
#line 780 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 212:
#line 781 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 213:
#line 782 "frame/parser.Y"
    {(yyval.integer) = Marker::SUM;;}
    break;

  case 214:
#line 783 "frame/parser.Y"
    {(yyval.integer) = Marker::MEDIAN;;}
    break;

  case 215:
#line 786 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 216:
#line 787 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 217:
#line 788 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 218:
#line 789 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 219:
#line 790 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 220:
#line 791 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 225:
#line 798 "frame/parser.Y"
    {fr->set3dRenderMethodCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 226:
#line 799 "frame/parser.Y"
    {fr->set3dRenderBackgroundCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 227:
#line 800 "frame/parser.Y"
    {fr->set3dScaleCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 228:
#line 801 "frame/parser.Y"
    {fr->set3dSyncCmd((yyvsp[(2) - (2)].integer));}
    break;

  case 229:
#line 803 "frame/parser.Y"
    {/* needed for compatibility with old version of backup */;}
    break;

  case 230:
#line 806 "frame/parser.Y"
    {fr->set3dBorderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 231:
#line 807 "frame/parser.Y"
    {fr->set3dBorderColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 232:
#line 810 "frame/parser.Y"
    {fr->set3dCompassCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 233:
#line 811 "frame/parser.Y"
    {fr->set3dCompassColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 234:
#line 814 "frame/parser.Y"
    {fr->set3dHighliteCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 235:
#line 815 "frame/parser.Y"
    {fr->set3dHighliteColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 236:
#line 818 "frame/parser.Y"
    {fr->set3dViewCmd((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));;}
    break;

  case 237:
#line 820 "frame/parser.Y"
    {fr->set3dViewPointCmd(Vector3d((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 239:
#line 824 "frame/parser.Y"
    {fr->binColsCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 240:
#line 825 "frame/parser.Y"
    {fr->binDepthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 243:
#line 828 "frame/parser.Y"
    {fr->binBufferSizeCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 245:
#line 830 "frame/parser.Y"
    {fr->binFilterCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 246:
#line 833 "frame/parser.Y"
    {fr->binAboutCmd();;}
    break;

  case 247:
#line 834 "frame/parser.Y"
    {fr->binAboutCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 248:
#line 837 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 249:
#line 838 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 250:
#line 840 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(1) - (4)].real)), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 251:
#line 842 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 252:
#line 843 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 253:
#line 844 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 254:
#line 846 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 255:
#line 848 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 256:
#line 851 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::AVERAGE);;}
    break;

  case 257:
#line 852 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::SUM);;}
    break;

  case 258:
#line 855 "frame/parser.Y"
    {fr->binToFitCmd();;}
    break;

  case 259:
#line 857 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (7)].real),(yyvsp[(2) - (7)].real)), (yyvsp[(5) - (7)].str), (yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].str));;}
    break;

  case 260:
#line 860 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (11)].real),(yyvsp[(2) - (11)].real)), (yyvsp[(3) - (11)].integer), Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)), (yyvsp[(8) - (11)].str), (yyvsp[(9) - (11)].str), (yyvsp[(10) - (11)].str), (yyvsp[(11) - (11)].str));;}
    break;

  case 261:
#line 862 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (8)].real),(yyvsp[(2) - (8)].real)), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (yyvsp[(6) - (8)].str), (yyvsp[(7) - (8)].str), (yyvsp[(8) - (8)].str));;}
    break;

  case 262:
#line 865 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (12)].real),(yyvsp[(2) - (12)].real)), (yyvsp[(3) - (12)].integer), Vector((yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real)), Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    (yyvsp[(9) - (12)].str), (yyvsp[(10) - (12)].str), (yyvsp[(11) - (12)].str), (yyvsp[(12) - (12)].str));;}
    break;

  case 263:
#line 869 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 264:
#line 870 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 266:
#line 874 "frame/parser.Y"
    {fr->blockToFitCmd();;}
    break;

  case 267:
#line 875 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 268:
#line 876 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 272:
#line 882 "frame/parser.Y"
    {fr->clipUserCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 273:
#line 883 "frame/parser.Y"
    {fr->clipUserCmd(NAN,NAN);;}
    break;

  case 275:
#line 886 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 276:
#line 891 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::GLOBAL);;}
    break;

  case 277:
#line 892 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::LOCAL);;}
    break;

  case 278:
#line 895 "frame/parser.Y"
    {fr->clipModeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 279:
#line 896 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::MINMAX);;}
    break;

  case 280:
#line 897 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZSCALE);;}
    break;

  case 281:
#line 898 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZMAX);;}
    break;

  case 282:
#line 899 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::USERCLIP);;}
    break;

  case 283:
#line 902 "frame/parser.Y"
    {fr->clipMinMaxCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer),(yyvsp[(1) - (2)].integer));;}
    break;

  case 284:
#line 903 "frame/parser.Y"
    {fr->clipMinMaxModeCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer));;}
    break;

  case 285:
#line 904 "frame/parser.Y"
    {fr->clipMinMaxSampleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 286:
#line 905 "frame/parser.Y"
    {fr->clipMinMaxRescanCmd();;}
    break;

  case 287:
#line 908 "frame/parser.Y"
    {fr->clipZScaleCmd((yyvsp[(1) - (3)].real),(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 288:
#line 910 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleContrastCmd((yyvsp[(2) - (2)].real));
        ;}
    break;

  case 289:
#line 915 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleSampleCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 290:
#line 920 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleLineCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 291:
#line 927 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].real), (yyvsp[(3) - (5)].real), (yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].integer));;}
    break;

  case 292:
#line 929 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 293:
#line 931 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 294:
#line 933 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 295:
#line 935 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (7)].integer),(yyvsp[(3) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(yyvsp[(7) - (7)].integer));;}
    break;

  case 299:
#line 942 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].real), (yyvsp[(3) - (5)].real), (yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].integer));;}
    break;

  case 300:
#line 944 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 301:
#line 946 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 302:
#line 948 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 303:
#line 950 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (7)].integer),(yyvsp[(3) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(yyvsp[(7) - (7)].integer));;}
    break;

  case 304:
#line 952 "frame/parser.Y"
    {fr->colorScaleCmd((FrScale::ColorScaleType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 305:
#line 953 "frame/parser.Y"
    {fr->colorScaleLogCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 311:
#line 964 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),(FrScale::ClipMode)(yyvsp[(9) - (13)].integer),100,(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 312:
#line 967 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),FrScale::AUTOCUT,(yyvsp[(9) - (13)].real),(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 313:
#line 970 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),(FrScale::ClipMode)(yyvsp[(9) - (12)].integer),100,FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 314:
#line 976 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),FrScale::AUTOCUT,(yyvsp[(9) - (12)].real),FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 315:
#line 981 "frame/parser.Y"
    {fr->contourCreatePolygonCmd();;}
    break;

  case 316:
#line 984 "frame/parser.Y"
    {fr->contourDeleteCmd();;}
    break;

  case 317:
#line 985 "frame/parser.Y"
    {fr->contourDeleteAuxCmd();;}
    break;

  case 318:
#line 988 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 319:
#line 989 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 320:
#line 991 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourLoadCmd((yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer),(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer));
	;}
    break;

  case 321:
#line 997 "frame/parser.Y"
    {(yyval.integer) = FrScale::MINMAX;;}
    break;

  case 322:
#line 998 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZSCALE;;}
    break;

  case 323:
#line 999 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZMAX;;}
    break;

  case 324:
#line 1000 "frame/parser.Y"
    {(yyval.integer) = FrScale::USERCLIP;;}
    break;

  case 325:
#line 1003 "frame/parser.Y"
    {(yyval.integer) = FrScale::GLOBAL;;}
    break;

  case 326:
#line 1004 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOCAL;;}
    break;

  case 327:
#line 1007 "frame/parser.Y"
    {(yyval.integer) = FVContour::SMOOTH;;}
    break;

  case 328:
#line 1008 "frame/parser.Y"
    {(yyval.integer) = FVContour::BLOCK;;}
    break;

  case 329:
#line 1011 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 330:
#line 1012 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 331:
#line 1016 "frame/parser.Y"
    {fr->contourSaveCmd((yyvsp[(1) - (3)].str), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 332:
#line 1018 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (4)].str),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 333:
#line 1021 "frame/parser.Y"
    {fr->cropCmd();;}
    break;

  case 334:
#line 1023 "frame/parser.Y"
    {fr->cropCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 335:
#line 1026 "frame/parser.Y"
    {fr->cropCenterCmd(Vector((yyvsp[(2) - (8)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), Vector((yyvsp[(5) - (8)].real),(yyvsp[(6) - (8)].real)), (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 337:
#line 1028 "frame/parser.Y"
    {fr->cropBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 338:
#line 1029 "frame/parser.Y"
    {fr->cropMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 339:
#line 1030 "frame/parser.Y"
    {fr->cropEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 340:
#line 1033 "frame/parser.Y"
    {fr->crop3dCmd();;}
    break;

  case 341:
#line 1035 "frame/parser.Y"
    {fr->crop3dCmd((yyvsp[(1) - (4)].real), (yyvsp[(2) - (4)].real), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 342:
#line 1036 "frame/parser.Y"
    {fr->crop3dBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 343:
#line 1037 "frame/parser.Y"
    {fr->crop3dMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 344:
#line 1038 "frame/parser.Y"
    {fr->crop3dEndCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 345:
#line 1042 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), (Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 346:
#line 1044 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 347:
#line 1045 "frame/parser.Y"
    {fr->crosshairCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 348:
#line 1046 "frame/parser.Y"
    {fr->crosshairWarpCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 349:
#line 1049 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)), (Coord::InternalSystem)(yyvsp[(3) - (5)].integer));;}
    break;

  case 350:
#line 1051 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 351:
#line 1053 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer));;}
    break;

  case 352:
#line 1055 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 353:
#line 1058 "frame/parser.Y"
    {fr->axesOrderCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 354:
#line 1061 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 355:
#line 1062 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 356:
#line 1063 "frame/parser.Y"
    {(yyval.integer) = Base::SUM;;}
    break;

  case 357:
#line 1064 "frame/parser.Y"
    {(yyval.integer) = Base::MEDIAN;;}
    break;

  case 358:
#line 1067 "frame/parser.Y"
    {fr->fadeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 359:
#line 1068 "frame/parser.Y"
    {fr->fadeClearCmd();;}
    break;

  case 360:
#line 1071 "frame/parser.Y"
    {fr->fitsyHasExtCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 361:
#line 1074 "frame/parser.Y"
    {fr->getCmd();;}
    break;

  case 362:
#line 1075 "frame/parser.Y"
    {fr->getBgColorCmd();;}
    break;

  case 376:
#line 1089 "frame/parser.Y"
    {fr->getDATASECCmd();;}
    break;

  case 379:
#line 1092 "frame/parser.Y"
    {fr->getHighliteColorCmd();;}
    break;

  case 380:
#line 1093 "frame/parser.Y"
    {fr->getHistogramCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].integer));;}
    break;

  case 386:
#line 1099 "frame/parser.Y"
    {fr->getIRAFAlignCmd();;}
    break;

  case 387:
#line 1100 "frame/parser.Y"
    {fr->getMinMaxCmd();;}
    break;

  case 392:
#line 1105 "frame/parser.Y"
    {fr->getNANColorCmd();;}
    break;

  case 393:
#line 1106 "frame/parser.Y"
    {fr->getOrientCmd();;}
    break;

  case 395:
#line 1109 "frame/parser.Y"
    {fr->getPixelTableCmd(Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (Coord::InternalSystem)(yyvsp[(3) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(7) - (8)].integer), (yyvsp[(8) - (8)].str));;}
    break;

  case 397:
#line 1111 "frame/parser.Y"
    {fr->getRotateCmd();;}
    break;

  case 399:
#line 1113 "frame/parser.Y"
    {fr->getThreadsCmd();;}
    break;

  case 401:
#line 1115 "frame/parser.Y"
    {fr->getTypeCmd();;}
    break;

  case 402:
#line 1117 "frame/parser.Y"
    {fr->getValueCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 405:
#line 1120 "frame/parser.Y"
    {fr->getZoomCmd();;}
    break;

  case 406:
#line 1124 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 407:
#line 1126 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 408:
#line 1130 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 409:
#line 1132 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 410:
#line 1135 "frame/parser.Y"
    {fr->getBinDepthCmd();;}
    break;

  case 411:
#line 1136 "frame/parser.Y"
    {fr->getBinFactorCmd();;}
    break;

  case 412:
#line 1137 "frame/parser.Y"
    {fr->getBinFunctionCmd();;}
    break;

  case 413:
#line 1138 "frame/parser.Y"
    {fr->getBinBufferSizeCmd();;}
    break;

  case 414:
#line 1139 "frame/parser.Y"
    {fr->getBinCursorCmd();;}
    break;

  case 415:
#line 1140 "frame/parser.Y"
    {fr->getBinFilterCmd();;}
    break;

  case 417:
#line 1142 "frame/parser.Y"
    {fr->getBinListCmd();;}
    break;

  case 418:
#line 1145 "frame/parser.Y"
    {fr->getBinColsCmd();;}
    break;

  case 419:
#line 1146 "frame/parser.Y"
    {fr->getBinColsMinMaxCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 420:
#line 1147 "frame/parser.Y"
    {fr->getBinColsDimCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 421:
#line 1150 "frame/parser.Y"
    {fr->getBlockCmd();;}
    break;

  case 422:
#line 1153 "frame/parser.Y"
    {fr->getClipCmd();;}
    break;

  case 423:
#line 1155 "frame/parser.Y"
    {fr->getClipCmd((FrScale::ClipMode)(yyvsp[(1) - (2)].integer), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 424:
#line 1157 "frame/parser.Y"
    {fr->getClipCmd((yyvsp[(1) - (2)].real), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 425:
#line 1158 "frame/parser.Y"
    {fr->getClipScopeCmd();;}
    break;

  case 426:
#line 1159 "frame/parser.Y"
    {fr->getClipModeCmd();;}
    break;

  case 428:
#line 1161 "frame/parser.Y"
    {fr->getClipUserCmd();;}
    break;

  case 430:
#line 1164 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	;}
    break;

  case 431:
#line 1170 "frame/parser.Y"
    {fr->getClipMinMaxModeCmd();;}
    break;

  case 432:
#line 1171 "frame/parser.Y"
    {fr->getClipMinMaxSampleCmd();;}
    break;

  case 433:
#line 1174 "frame/parser.Y"
    {fr->getClipZScaleContrastCmd();;}
    break;

  case 434:
#line 1175 "frame/parser.Y"
    {fr->getClipZScaleSampleCmd();;}
    break;

  case 435:
#line 1176 "frame/parser.Y"
    {fr->getClipZScaleLineCmd();;}
    break;

  case 436:
#line 1179 "frame/parser.Y"
    {fr->getColorbarCmd();;}
    break;

  case 437:
#line 1180 "frame/parser.Y"
    {fr->getColorbarTagCmd();;}
    break;

  case 439:
#line 1186 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 440:
#line 1188 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 441:
#line 1190 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 442:
#line 1193 "frame/parser.Y"
    {fr->getColorScaleCmd();;}
    break;

  case 444:
#line 1195 "frame/parser.Y"
    {fr->getColorScaleLogCmd();;}
    break;

  case 445:
#line 1199 "frame/parser.Y"
    {fr->getColorScaleLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 446:
#line 1203 "frame/parser.Y"
    {fr->getContourCmd((Coord::CoordSystem)(yyvsp[(1) - (2)].integer),(Coord::SkyFrame)(yyvsp[(2) - (2)].integer));;}
    break;

  case 448:
#line 1205 "frame/parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 449:
#line 1206 "frame/parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 450:
#line 1207 "frame/parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 451:
#line 1208 "frame/parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 452:
#line 1209 "frame/parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 454:
#line 1211 "frame/parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 455:
#line 1212 "frame/parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 456:
#line 1215 "frame/parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 457:
#line 1216 "frame/parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 458:
#line 1217 "frame/parser.Y"
    {fr->getContourClipScopeCmd();;}
    break;

  case 459:
#line 1220 "frame/parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 460:
#line 1221 "frame/parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 461:
#line 1225 "frame/parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 462:
#line 1227 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 463:
#line 1235 "frame/parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 464:
#line 1237 "frame/parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 465:
#line 1239 "frame/parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 466:
#line 1242 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 467:
#line 1244 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 468:
#line 1245 "frame/parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 469:
#line 1248 "frame/parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 470:
#line 1251 "frame/parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 471:
#line 1253 "frame/parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 472:
#line 1257 "frame/parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 473:
#line 1259 "frame/parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 474:
#line 1262 "frame/parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 475:
#line 1266 "frame/parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (2)].str), (Base::FileNameType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 476:
#line 1267 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 477:
#line 1269 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)), (Coord::InternalSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (Base::FileNameType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 478:
#line 1272 "frame/parser.Y"
    {fr->iisGetCmd((yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 479:
#line 1273 "frame/parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 481:
#line 1277 "frame/parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 482:
#line 1278 "frame/parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 483:
#line 1279 "frame/parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 484:
#line 1282 "frame/parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 485:
#line 1284 "frame/parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 486:
#line 1285 "frame/parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 488:
#line 1287 "frame/parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 492:
#line 1291 "frame/parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 493:
#line 1292 "frame/parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 494:
#line 1293 "frame/parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 495:
#line 1295 "frame/parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::DistFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 497:
#line 1297 "frame/parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 498:
#line 1300 "frame/parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 499:
#line 1302 "frame/parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 500:
#line 1304 "frame/parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 501:
#line 1305 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 502:
#line 1306 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 503:
#line 1307 "frame/parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 504:
#line 1310 "frame/parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 505:
#line 1311 "frame/parser.Y"
    {fr->getFitsDepthCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 506:
#line 1315 "frame/parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 507:
#line 1317 "frame/parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 508:
#line 1320 "frame/parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 509:
#line 1323 "frame/parser.Y"
    {fr->getFitsSliceCmd(2);;}
    break;

  case 510:
#line 1324 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 511:
#line 1326 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 512:
#line 1328 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((yyvsp[(3) - (4)].integer), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 513:
#line 1330 "frame/parser.Y"
    {fr->getFitsSliceToImageCmd((yyvsp[(3) - (4)].real), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 514:
#line 1333 "frame/parser.Y"
    {fr->getGridCmd();;}
    break;

  case 515:
#line 1334 "frame/parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 516:
#line 1335 "frame/parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 517:
#line 1338 "frame/parser.Y"
    {fr->getLayerCountCmd();;}
    break;

  case 518:
#line 1339 "frame/parser.Y"
    {fr->getLayerNoCmd();;}
    break;

  case 519:
#line 1340 "frame/parser.Y"
    {fr->getLayerColorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 520:
#line 1341 "frame/parser.Y"
    {fr->getLayerBlendCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 521:
#line 1342 "frame/parser.Y"
    {fr->getLayerTransparencyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 522:
#line 1343 "frame/parser.Y"
    {fr->getLayerViewCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 523:
#line 1346 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 524:
#line 1347 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 525:
#line 1348 "frame/parser.Y"
    {fr->getMaskRangeCmd();;}
    break;

  case 526:
#line 1349 "frame/parser.Y"
    {fr->getMaskSystemCmd();;}
    break;

  case 527:
#line 1350 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 528:
#line 1351 "frame/parser.Y"
    {fr->getMaskCountCmd();;}
    break;

  case 529:
#line 1352 "frame/parser.Y"
    {fr->getMaskBlendCmd();;}
    break;

  case 530:
#line 1355 "frame/parser.Y"
    {(yyval.integer) = 0;;}
    break;

  case 531:
#line 1356 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 532:
#line 1359 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 533:
#line 1362 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 534:
#line 1363 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 535:
#line 1364 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 536:
#line 1367 "frame/parser.Y"
    {fr->getMultiColorSystemCmd();;}
    break;

  case 537:
#line 1370 "frame/parser.Y"
    {fr->getHLSChannelCmd();;}
    break;

  case 538:
#line 1371 "frame/parser.Y"
    {fr->getHLSSystemCmd();;}
    break;

  case 539:
#line 1372 "frame/parser.Y"
    {fr->getHLSViewCmd();;}
    break;

  case 540:
#line 1375 "frame/parser.Y"
    {fr->getHSVChannelCmd();;}
    break;

  case 541:
#line 1376 "frame/parser.Y"
    {fr->getHSVSystemCmd();;}
    break;

  case 542:
#line 1377 "frame/parser.Y"
    {fr->getHSVViewCmd();;}
    break;

  case 543:
#line 1380 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 544:
#line 1381 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 545:
#line 1382 "frame/parser.Y"
    {fr->getSmoothRadiusMinorCmd();;}
    break;

  case 546:
#line 1383 "frame/parser.Y"
    {fr->getSmoothSigmaCmd();;}
    break;

  case 547:
#line 1384 "frame/parser.Y"
    {fr->getSmoothSigmaMinorCmd();;}
    break;

  case 548:
#line 1385 "frame/parser.Y"
    {fr->getSmoothAngleCmd();;}
    break;

  case 553:
#line 1392 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 554:
#line 1393 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 555:
#line 1394 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 556:
#line 1397 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 557:
#line 1398 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 558:
#line 1401 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 559:
#line 1402 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 560:
#line 1405 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 561:
#line 1406 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 562:
#line 1409 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 563:
#line 1410 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 564:
#line 1413 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 566:
#line 1415 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 567:
#line 1418 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 568:
#line 1419 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 570:
#line 1423 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 571:
#line 1427 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 572:
#line 1430 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer),
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 573:
#line 1437 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 574:
#line 1438 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 575:
#line 1441 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 576:
#line 1442 "frame/parser.Y"
    {fr->hasBgColorCmd();;}
    break;

  case 579:
#line 1445 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 580:
#line 1446 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 581:
#line 1447 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 582:
#line 1448 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 584:
#line 1450 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 585:
#line 1451 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 586:
#line 1452 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 588:
#line 1454 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 589:
#line 1455 "frame/parser.Y"
    {fr->hasImageCmd();;}
    break;

  case 590:
#line 1456 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 591:
#line 1457 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 593:
#line 1461 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 594:
#line 1464 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 595:
#line 1465 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 596:
#line 1468 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 597:
#line 1469 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 598:
#line 1470 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 599:
#line 1471 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 600:
#line 1474 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 601:
#line 1475 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 602:
#line 1476 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 603:
#line 1477 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 604:
#line 1480 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 605:
#line 1481 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 606:
#line 1482 "frame/parser.Y"
    {fr->hasWCSEquCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 607:
#line 1483 "frame/parser.Y"
    {fr->hasWCSLinearCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 608:
#line 1484 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 609:
#line 1485 "frame/parser.Y"
    {fr->hasWCS3DCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 610:
#line 1488 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 611:
#line 1489 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 612:
#line 1490 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 615:
#line 1494 "frame/parser.Y"
    {fr->iisSetCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 616:
#line 1495 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 617:
#line 1498 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 618:
#line 1501 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 619:
#line 1502 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 620:
#line 1506 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 621:
#line 1508 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 622:
#line 1509 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 629:
#line 1521 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 630:
#line 1523 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 631:
#line 1525 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 632:
#line 1526 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 633:
#line 1528 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 634:
#line 1530 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 635:
#line 1532 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 636:
#line 1534 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 637:
#line 1536 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 641:
#line 1542 "frame/parser.Y"
    {fr->loadRGBArrayCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 642:
#line 1543 "frame/parser.Y"
    {fr->loadRGBArrayCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 643:
#line 1544 "frame/parser.Y"
    {fr->loadRGBArrayCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 644:
#line 1545 "frame/parser.Y"
    {fr->loadRGBArrayCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 645:
#line 1546 "frame/parser.Y"
    {fr->loadRGBArrayCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 646:
#line 1548 "frame/parser.Y"
    {fr->loadRGBArrayCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 647:
#line 1549 "frame/parser.Y"
    {fr->loadRGBArrayCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 648:
#line 1550 "frame/parser.Y"
    {fr->loadRGBArrayCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 649:
#line 1551 "frame/parser.Y"
    {fr->loadRGBArrayCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 650:
#line 1554 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 651:
#line 1558 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 652:
#line 1560 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 653:
#line 1562 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 654:
#line 1564 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 655:
#line 1566 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 656:
#line 1568 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 657:
#line 1570 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 658:
#line 1572 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str),
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 659:
#line 1575 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 660:
#line 1577 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 661:
#line 1579 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 671:
#line 1591 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 672:
#line 1592 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 673:
#line 1593 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 674:
#line 1594 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 675:
#line 1595 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 676:
#line 1596 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 677:
#line 1598 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 678:
#line 1600 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 679:
#line 1601 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 680:
#line 1602 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 681:
#line 1603 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 682:
#line 1606 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 683:
#line 1607 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 684:
#line 1608 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 685:
#line 1609 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 686:
#line 1610 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 687:
#line 1612 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 688:
#line 1613 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 689:
#line 1614 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 690:
#line 1615 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 696:
#line 1626 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 697:
#line 1629 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 698:
#line 1632 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 699:
#line 1635 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 700:
#line 1638 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 701:
#line 1641 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 702:
#line 1644 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 703:
#line 1647 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 704:
#line 1650 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 705:
#line 1655 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 706:
#line 1658 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 707:
#line 1661 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 708:
#line 1664 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 709:
#line 1667 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 710:
#line 1670 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 711:
#line 1673 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 712:
#line 1676 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 713:
#line 1679 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 714:
#line 1682 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 715:
#line 1685 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 716:
#line 1690 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 717:
#line 1693 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 718:
#line 1696 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 719:
#line 1699 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 720:
#line 1702 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 721:
#line 1705 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer),
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 722:
#line 1708 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 723:
#line 1711 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 724:
#line 1714 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 725:
#line 1719 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 726:
#line 1721 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 727:
#line 1723 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 728:
#line 1725 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 729:
#line 1727 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 730:
#line 1729 "frame/parser.Y"
    {
	  fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str),
					   (Base::LayerType)(yyvsp[(6) - (6)].integer));
        ;}
    break;

  case 731:
#line 1734 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 732:
#line 1736 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 733:
#line 1738 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 734:
#line 1742 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 735:
#line 1745 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 736:
#line 1748 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 737:
#line 1751 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 738:
#line 1754 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 739:
#line 1757 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 740:
#line 1760 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer),
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 741:
#line 1763 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer),
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 742:
#line 1766 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 743:
#line 1769 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 744:
#line 1772 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 745:
#line 1776 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 746:
#line 1777 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 747:
#line 1778 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 748:
#line 1779 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 749:
#line 1780 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 750:
#line 1781 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 751:
#line 1783 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 752:
#line 1785 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 753:
#line 1786 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 754:
#line 1787 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 755:
#line 1788 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 756:
#line 1791 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 757:
#line 1792 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 758:
#line 1793 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 759:
#line 1794 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 760:
#line 1795 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 761:
#line 1797 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 762:
#line 1798 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 763:
#line 1799 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 764:
#line 1800 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 765:
#line 1804 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 766:
#line 1806 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 767:
#line 1807 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 768:
#line 1809 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 769:
#line 1811 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 770:
#line 1813 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 771:
#line 1816 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 772:
#line 1817 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 773:
#line 1820 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 774:
#line 1821 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 775:
#line 1822 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 776:
#line 1825 "frame/parser.Y"
    {;}
    break;

  case 777:
#line 1828 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 778:
#line 1829 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 779:
#line 1830 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 780:
#line 1831 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 781:
#line 1832 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 782:
#line 1833 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 783:
#line 1834 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 784:
#line 1838 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 786:
#line 1846 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 787:
#line 1847 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 788:
#line 1849 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 789:
#line 1851 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 790:
#line 1852 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 791:
#line 1853 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 793:
#line 1854 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 796:
#line 1857 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 797:
#line 1858 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 798:
#line 1860 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 799:
#line 1862 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 800:
#line 1864 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 801:
#line 1867 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 802:
#line 1869 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 803:
#line 1870 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 804:
#line 1872 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 805:
#line 1875 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 806:
#line 1878 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 807:
#line 1882 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 808:
#line 1885 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 809:
#line 1888 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 810:
#line 1891 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 811:
#line 1895 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 812:
#line 1899 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 813:
#line 1904 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str),
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 814:
#line 1908 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 815:
#line 1910 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 816:
#line 1911 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 817:
#line 1913 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 818:
#line 1915 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 819:
#line 1917 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 820:
#line 1919 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 821:
#line 1920 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 822:
#line 1922 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 823:
#line 1924 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 824:
#line 1927 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 825:
#line 1931 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 826:
#line 1935 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 827:
#line 1937 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 828:
#line 1939 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 829:
#line 1941 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 830:
#line 1943 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 831:
#line 1945 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 832:
#line 1947 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 833:
#line 1949 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 834:
#line 1951 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 835:
#line 1953 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 836:
#line 1955 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 837:
#line 1957 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 838:
#line 1959 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 839:
#line 1961 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 840:
#line 1962 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 841:
#line 1964 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 842:
#line 1966 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 843:
#line 1967 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 844:
#line 1968 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 845:
#line 1970 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 846:
#line 1972 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 847:
#line 1973 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 848:
#line 1974 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 849:
#line 1975 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 850:
#line 1977 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 851:
#line 1979 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 852:
#line 1983 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 853:
#line 1986 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 854:
#line 1989 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 855:
#line 1993 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 856:
#line 1997 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 857:
#line 2002 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str),
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 858:
#line 2006 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 859:
#line 2007 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 860:
#line 2008 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 861:
#line 2010 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 862:
#line 2012 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 863:
#line 2016 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 864:
#line 2017 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 865:
#line 2018 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 866:
#line 2020 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 867:
#line 2023 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 868:
#line 2026 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 869:
#line 2029 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 870:
#line 2030 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 871:
#line 2034 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 872:
#line 2038 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 873:
#line 2040 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 874:
#line 2041 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 875:
#line 2043 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 876:
#line 2046 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 877:
#line 2049 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 878:
#line 2050 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 879:
#line 2052 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 880:
#line 2053 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 881:
#line 2054 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 882:
#line 2056 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 883:
#line 2057 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 884:
#line 2059 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 885:
#line 2062 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 886:
#line 2065 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 887:
#line 2067 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 888:
#line 2068 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 892:
#line 2073 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 893:
#line 2074 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 894:
#line 2076 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 895:
#line 2078 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 896:
#line 2080 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 897:
#line 2081 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 901:
#line 2087 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 902:
#line 2088 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 903:
#line 2089 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 904:
#line 2090 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 905:
#line 2091 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 906:
#line 2092 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 907:
#line 2093 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 908:
#line 2094 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 909:
#line 2095 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 910:
#line 2096 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 911:
#line 2098 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 912:
#line 2100 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 913:
#line 2101 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 914:
#line 2102 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 915:
#line 2103 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 916:
#line 2104 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 917:
#line 2106 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 918:
#line 2107 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 919:
#line 2108 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 920:
#line 2109 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 921:
#line 2110 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 922:
#line 2112 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 923:
#line 2113 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 924:
#line 2114 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 925:
#line 2115 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 926:
#line 2116 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 927:
#line 2117 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 928:
#line 2120 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 929:
#line 2121 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 930:
#line 2122 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 931:
#line 2123 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 932:
#line 2124 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 933:
#line 2125 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 934:
#line 2126 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 935:
#line 2127 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 936:
#line 2128 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 937:
#line 2129 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 938:
#line 2130 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 939:
#line 2131 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 940:
#line 2132 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 941:
#line 2133 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 942:
#line 2134 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 943:
#line 2135 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 944:
#line 2136 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 945:
#line 2137 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 946:
#line 2138 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 947:
#line 2139 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 948:
#line 2140 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 949:
#line 2143 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 950:
#line 2144 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 951:
#line 2145 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 952:
#line 2146 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 953:
#line 2147 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 954:
#line 2149 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 955:
#line 2159 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 956:
#line 2167 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 957:
#line 2176 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 958:
#line 2184 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 959:
#line 2191 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 960:
#line 2198 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 961:
#line 2206 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 962:
#line 2214 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 963:
#line 2219 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 964:
#line 2224 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 965:
#line 2229 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 966:
#line 2234 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 967:
#line 2239 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 968:
#line 2244 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 969:
#line 2249 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 970:
#line 2258 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer),
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 971:
#line 2268 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 972:
#line 2278 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 973:
#line 2287 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 974:
#line 2295 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 975:
#line 2305 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 976:
#line 2315 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 977:
#line 2325 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 978:
#line 2337 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 979:
#line 2346 "frame/parser.Y"
    {fr->createCompositeCmd(
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 981:
#line 2354 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 982:
#line 2356 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 983:
#line 2358 "frame/parser.Y"
    {
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 984:
#line 2363 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 985:
#line 2366 "frame/parser.Y"
    {fr->markerDeleteAllCmd(0);;}
    break;

  case 986:
#line 2367 "frame/parser.Y"
    {fr->markerDeleteAllCmd(1);;}
    break;

  case 987:
#line 2368 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerDeleteAllCmd(0);
        ;}
    break;

  case 988:
#line 2375 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 989:
#line 2377 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 990:
#line 2378 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 991:
#line 2381 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 992:
#line 2382 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 993:
#line 2383 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 994:
#line 2384 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 995:
#line 2385 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 996:
#line 2386 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 997:
#line 2387 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 999:
#line 2391 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 1000:
#line 2392 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 1001:
#line 2393 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 1002:
#line 2394 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1003:
#line 2395 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1004:
#line 2398 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(yyvsp[(6) - (8)].str),(Coord::CoordSystem)(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 1005:
#line 2400 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 1006:
#line 2402 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 1007:
#line 2404 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 1008:
#line 2406 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 1009:
#line 2408 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1010:
#line 2410 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 1011:
#line 2411 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1012:
#line 2412 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1013:
#line 2414 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1014:
#line 2416 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1015:
#line 2419 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1016:
#line 2421 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1017:
#line 2422 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1018:
#line 2423 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1019:
#line 2425 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1020:
#line 2427 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1021:
#line 2430 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer),
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1022:
#line 2433 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1023:
#line 2434 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1024:
#line 2435 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1025:
#line 2436 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1026:
#line 2438 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1027:
#line 2439 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1028:
#line 2440 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1029:
#line 2441 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1030:
#line 2442 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1031:
#line 2444 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1032:
#line 2446 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1033:
#line 2448 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1034:
#line 2450 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer),
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1035:
#line 2452 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1036:
#line 2453 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1037:
#line 2455 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1038:
#line 2457 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1039:
#line 2459 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1040:
#line 2460 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1041:
#line 2461 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1042:
#line 2463 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1043:
#line 2465 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1044:
#line 2468 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1045:
#line 2471 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1046:
#line 2472 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1047:
#line 2474 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1048:
#line 2477 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer),
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1049:
#line 2480 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1050:
#line 2481 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1051:
#line 2482 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1052:
#line 2483 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1053:
#line 2485 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1054:
#line 2487 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1055:
#line 2489 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1056:
#line 2490 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1057:
#line 2492 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1058:
#line 2493 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1059:
#line 2494 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1060:
#line 2495 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1061:
#line 2496 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1062:
#line 2498 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1063:
#line 2500 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1064:
#line 2502 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1065:
#line 2504 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1067:
#line 2506 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1068:
#line 2507 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1069:
#line 2509 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1070:
#line 2511 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1071:
#line 2512 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1072:
#line 2513 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1074:
#line 2515 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1076:
#line 2519 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1077:
#line 2520 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1078:
#line 2521 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1079:
#line 2522 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1080:
#line 2523 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1081:
#line 2524 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1082:
#line 2526 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1083:
#line 2527 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1084:
#line 2529 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1085:
#line 2532 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1086:
#line 2533 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1087:
#line 2534 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1088:
#line 2535 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1089:
#line 2538 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1090:
#line 2539 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1091:
#line 2542 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1092:
#line 2543 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1093:
#line 2546 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1094:
#line 2547 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1095:
#line 2550 "frame/parser.Y"
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

  case 1096:
#line 2563 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1097:
#line 2564 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1098:
#line 2568 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1099:
#line 2569 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1100:
#line 2573 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1101:
#line 2574 "frame/parser.Y"
    {fr->markerLayerCmd(Base::FOOTPRINT);;}
    break;

  case 1102:
#line 2579 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), 0, propQMask, propQValue, taglist);;}
    break;

  case 1103:
#line 2583 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), 1, propQMask, propQValue, taglist);;}
    break;

  case 1104:
#line 2588 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str),0,"green",Coord::PHYSICAL,Coord::ICRS);;}
    break;

  case 1105:
#line 2590 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1106:
#line 2593 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer),0,"green",Coord::PHYSICAL,Coord::ICRS);;}
    break;

  case 1107:
#line 2595 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1108:
#line 2598 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (2)].str), "green");;}
    break;

  case 1109:
#line 2600 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));;}
    break;

  case 1110:
#line 2603 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1111:
#line 2604 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1112:
#line 2605 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1113:
#line 2606 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1114:
#line 2607 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1115:
#line 2608 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1116:
#line 2610 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1119:
#line 2617 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1120:
#line 2618 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1121:
#line 2619 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1122:
#line 2620 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1123:
#line 2621 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1124:
#line 2622 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1127:
#line 2627 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1128:
#line 2628 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1129:
#line 2629 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1130:
#line 2630 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1131:
#line 2631 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1132:
#line 2632 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1133:
#line 2633 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1134:
#line 2634 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1135:
#line 2635 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1136:
#line 2636 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1137:
#line 2637 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1138:
#line 2638 "frame/parser.Y"
    {(yyval.integer) = Marker::FILL;;}
    break;

  case 1141:
#line 2645 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1142:
#line 2646 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1144:
#line 2650 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(1) - (6)].str), (Base::MarkerFormat)(yyvsp[(2) - (6)].integer), (Coord::CoordSystem)(yyvsp[(3) - (6)].integer), (Coord::SkyFrame)(yyvsp[(4) - (6)].integer), (Coord::SkyFormat)(yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].integer), 0);;}
    break;

  case 1145:
#line 2652 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer), 1);;}
    break;

  case 1146:
#line 2653 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1147:
#line 2656 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1148:
#line 2657 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1149:
#line 2658 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1150:
#line 2659 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1151:
#line 2660 "frame/parser.Y"
    {fr->markerSelectFirstCmd();;}
    break;

  case 1152:
#line 2661 "frame/parser.Y"
    {fr->markerSelectLastCmd();;}
    break;

  case 1153:
#line 2664 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1154:
#line 2665 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1157:
#line 2673 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1158:
#line 2676 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1159:
#line 2677 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1163:
#line 2684 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1164:
#line 2687 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1165:
#line 2691 "frame/parser.Y"
    {fr->layerCreateCmd();;}
    break;

  case 1166:
#line 2692 "frame/parser.Y"
    {fr->layerCreateCmd();;}
    break;

  case 1167:
#line 2693 "frame/parser.Y"
    {fr->layerNoCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1168:
#line 2694 "frame/parser.Y"
    {fr->layerNoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1169:
#line 2695 "frame/parser.Y"
    {fr->layerColorCmd(0,(yyvsp[(2) - (2)].str));;}
    break;

  case 1170:
#line 2696 "frame/parser.Y"
    {fr->layerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1171:
#line 2697 "frame/parser.Y"
    {fr->layerBlendCmd(0,(FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1172:
#line 2698 "frame/parser.Y"
    {fr->layerBlendCmd((yyvsp[(1) - (3)].integer),(FitsMask::MaskBlend)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1173:
#line 2699 "frame/parser.Y"
    {fr->layerTransparencyCmd(0,(yyvsp[(2) - (2)].real));;}
    break;

  case 1174:
#line 2700 "frame/parser.Y"
    {fr->layerTransparencyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 1175:
#line 2701 "frame/parser.Y"
    {fr->layerViewCmd(0,(yyvsp[(2) - (2)].integer));;}
    break;

  case 1176:
#line 2702 "frame/parser.Y"
    {fr->layerViewCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1177:
#line 2704 "frame/parser.Y"
    {fr->layerShowCmd(0);;}
    break;

  case 1178:
#line 2705 "frame/parser.Y"
    {fr->layerShowCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1179:
#line 2706 "frame/parser.Y"
    {fr->layerHideCmd(0);;}
    break;

  case 1180:
#line 2707 "frame/parser.Y"
    {fr->layerHideCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1181:
#line 2708 "frame/parser.Y"
    {fr->layerDeleteCmd(0);;}
    break;

  case 1182:
#line 2709 "frame/parser.Y"
    {fr->layerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1183:
#line 2710 "frame/parser.Y"
    {fr->layerUpCmd(0);;}
    break;

  case 1184:
#line 2711 "frame/parser.Y"
    {fr->layerUpCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1185:
#line 2712 "frame/parser.Y"
    {fr->layerDownCmd(0);;}
    break;

  case 1186:
#line 2713 "frame/parser.Y"
    {fr->layerDownCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1187:
#line 2714 "frame/parser.Y"
    {fr->layerTopCmd(0);;}
    break;

  case 1188:
#line 2715 "frame/parser.Y"
    {fr->layerTopCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1189:
#line 2716 "frame/parser.Y"
    {fr->layerBottomCmd(0);;}
    break;

  case 1190:
#line 2717 "frame/parser.Y"
    {fr->layerBottomCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1191:
#line 2720 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1192:
#line 2721 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1193:
#line 2722 "frame/parser.Y"
    {fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1194:
#line 2723 "frame/parser.Y"
    {fr->maskRangeCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 1195:
#line 2724 "frame/parser.Y"
    {fr->maskSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1196:
#line 2725 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1197:
#line 2726 "frame/parser.Y"
    {fr->maskBlendCmd((FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1198:
#line 2727 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1199:
#line 2733 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1200:
#line 2734 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1201:
#line 2735 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1202:
#line 2736 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1203:
#line 2740 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1204:
#line 2741 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1205:
#line 2743 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1206:
#line 2748 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1208:
#line 2750 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1210:
#line 2752 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1211:
#line 2755 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1212:
#line 2757 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1213:
#line 2762 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1214:
#line 2765 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1215:
#line 2766 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1216:
#line 2767 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1217:
#line 2770 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1218:
#line 2772 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1219:
#line 2776 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1220:
#line 2777 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1221:
#line 2781 "frame/parser.Y"
    {fr->psColorSpaceCmd((PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1222:
#line 2782 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1223:
#line 2783 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1224:
#line 2784 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 1225:
#line 2790 "frame/parser.Y"
    {fr->precCmd((yyvsp[(1) - (9)].integer),(yyvsp[(2) - (9)].integer),(yyvsp[(3) - (9)].integer),(yyvsp[(4) - (9)].integer),(yyvsp[(5) - (9)].integer),(yyvsp[(6) - (9)].integer),(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 1226:
#line 2791 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->precCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 1227:
#line 2797 "frame/parser.Y"
    {(yyval.integer) = BW;;}
    break;

  case 1228:
#line 2798 "frame/parser.Y"
    {(yyval.integer) = GRAY;;}
    break;

  case 1229:
#line 2799 "frame/parser.Y"
    {(yyval.integer) = RGB;;}
    break;

  case 1230:
#line 2800 "frame/parser.Y"
    {(yyval.integer) = CMYK;;}
    break;

  case 1233:
#line 2808 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1234:
#line 2810 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1235:
#line 2811 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1236:
#line 2812 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1237:
#line 2816 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1238:
#line 2817 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1239:
#line 2818 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1240:
#line 2819 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1241:
#line 2822 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1242:
#line 2823 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1243:
#line 2826 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1244:
#line 2827 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1245:
#line 2828 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1246:
#line 2831 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1247:
#line 2832 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1248:
#line 2833 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1249:
#line 2837 "frame/parser.Y"
    {fr->setMultiColorSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1250:
#line 2840 "frame/parser.Y"
    {fr->setHLSChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1251:
#line 2841 "frame/parser.Y"
    {fr->setHLSChannelCmd("hue");;}
    break;

  case 1252:
#line 2842 "frame/parser.Y"
    {fr->setHLSChannelCmd("saturation");;}
    break;

  case 1253:
#line 2843 "frame/parser.Y"
    {fr->setHLSSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1254:
#line 2844 "frame/parser.Y"
    {fr->setHLSViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1255:
#line 2847 "frame/parser.Y"
    {fr->setHSVChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1256:
#line 2848 "frame/parser.Y"
    {fr->setHSVChannelCmd("hue");;}
    break;

  case 1257:
#line 2849 "frame/parser.Y"
    {fr->setHSVChannelCmd("saturation");;}
    break;

  case 1258:
#line 2850 "frame/parser.Y"
    {fr->setHSVChannelCmd("value");;}
    break;

  case 1259:
#line 2851 "frame/parser.Y"
    {fr->setHSVSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1260:
#line 2852 "frame/parser.Y"
    {fr->setHSVViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1261:
#line 2855 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1262:
#line 2856 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (2)].real))));;}
    break;

  case 1264:
#line 2858 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (2)].real))));;}
    break;

  case 1265:
#line 2859 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (3)].real))));;}
    break;

  case 1266:
#line 2862 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1267:
#line 2863 "frame/parser.Y"
    {fr->rotateMotionCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1268:
#line 2864 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1273:
#line 2871 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1274:
#line 2875 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1275:
#line 2877 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1276:
#line 2879 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1293:
#line 2900 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1294:
#line 2901 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1295:
#line 2902 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1296:
#line 2905 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1297:
#line 2906 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1298:
#line 2907 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1299:
#line 2910 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1300:
#line 2911 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1301:
#line 2912 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1302:
#line 2915 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1303:
#line 2916 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1304:
#line 2917 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1306:
#line 2921 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1307:
#line 2922 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1308:
#line 2923 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1309:
#line 2926 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1310:
#line 2927 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1311:
#line 2928 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1312:
#line 2932 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1313:
#line 2934 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1314:
#line 2936 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1315:
#line 2939 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1316:
#line 2940 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1317:
#line 2941 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1318:
#line 2944 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1319:
#line 2945 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1320:
#line 2946 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1321:
#line 2950 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1322:
#line 2952 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1323:
#line 2954 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1324:
#line 2957 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1325:
#line 2958 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1326:
#line 2959 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1327:
#line 2962 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1328:
#line 2963 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1329:
#line 2964 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1330:
#line 2968 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1331:
#line 2970 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1332:
#line 2972 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1333:
#line 2975 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1334:
#line 2976 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1335:
#line 2977 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1336:
#line 2980 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1337:
#line 2981 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1338:
#line 2982 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1339:
#line 2985 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1340:
#line 2986 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1341:
#line 2987 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1342:
#line 2991 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1343:
#line 2993 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1344:
#line 2995 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1345:
#line 2999 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1346:
#line 3003 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1347:
#line 3005 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1348:
#line 3009 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1349:
#line 3012 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1350:
#line 3013 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1351:
#line 3014 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1352:
#line 3015 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1353:
#line 3018 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1354:
#line 3020 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1355:
#line 3022 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1356:
#line 3025 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 1358:
#line 3029 "frame/parser.Y"
    {fr->sliceCmd(2,(yyvsp[(1) - (1)].integer));;}
    break;

  case 1359:
#line 3030 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1360:
#line 3031 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1361:
#line 3034 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1362:
#line 3035 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1363:
#line 3039 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1365:
#line 3041 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1368:
#line 3046 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1369:
#line 3047 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1370:
#line 3048 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1371:
#line 3051 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1372:
#line 3052 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1373:
#line 3053 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1374:
#line 3056 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1375:
#line 3058 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1376:
#line 3063 "frame/parser.Y"
    {fr->wcsAlign2Cmd((yyvsp[(2) - (4)].integer), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1377:
#line 3064 "frame/parser.Y"
    {fr->wcsAlignPointerClearCmd();;}
    break;

  case 1378:
#line 3067 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1379:
#line 3074 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1380:
#line 3076 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1381:
#line 3078 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1382:
#line 3083 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1384:
#line 3087 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1385:
#line 3088 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1386:
#line 3089 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1387:
#line 3091 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1388:
#line 3093 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1389:
#line 3098 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 11745 "frame/parser.C"
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


#line 3102 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

