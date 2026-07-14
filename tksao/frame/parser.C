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
     FIP_ = 387,
     FIT_ = 388,
     FITS_ = 389,
     FITSY_ = 390,
     FIXED_ = 391,
     FK4_ = 392,
     FK5_ = 393,
     FONT_ = 394,
     FORMAT_ = 395,
     FOOTPRINT_ = 396,
     FROM_ = 397,
     FRONT_ = 398,
     FULL_ = 399,
     FUNCTION_ = 400,
     GALACTIC_ = 401,
     GAUSSIAN_ = 402,
     GET_ = 403,
     GLOBAL_ = 404,
     GRAPHICS_ = 405,
     GRAY_ = 406,
     GRID_ = 407,
     GZ_ = 408,
     HANDLE_ = 409,
     HARDLIGHT_ = 410,
     HAS_ = 411,
     HEAD_ = 412,
     HEADER_ = 413,
     HEIGHT_ = 414,
     HIDE_ = 415,
     HIGHLITE_ = 416,
     HISTEQU_ = 417,
     HISTOGRAM_ = 418,
     HORIZONTAL_ = 419,
     HUE_ = 420,
     HSV_ = 421,
     HLS_ = 422,
     ICRS_ = 423,
     ID_ = 424,
     IIS_ = 425,
     IMAGE_ = 426,
     INCLUDE_ = 427,
     INCR_ = 428,
     INFO_ = 429,
     ITERATION_ = 430,
     IRAF_ = 431,
     IRAFMIN_ = 432,
     J2000_ = 433,
     KEY_ = 434,
     KEYWORD_ = 435,
     LABEL_ = 436,
     LAYER_ = 437,
     LAYERNO_ = 438,
     LAST_ = 439,
     LENGTH_ = 440,
     LEVEL_ = 441,
     LIGHTEN_ = 442,
     LITTLE_ = 443,
     LITTLEENDIAN_ = 444,
     LINE_ = 445,
     LINEAR_ = 446,
     LIST_ = 447,
     LOAD_ = 448,
     LOCAL_ = 449,
     LOG_ = 450,
     LUMINOSITY_ = 451,
     MACOSX_ = 452,
     MAGNIFIER_ = 453,
     MATCH_ = 454,
     MAP_ = 455,
     MARK_ = 456,
     MARKER_ = 457,
     MASK_ = 458,
     MEDIAN_ = 459,
     MESSAGE_ = 460,
     METHOD_ = 461,
     MINMAX_ = 462,
     MINOR_ = 463,
     MIP_ = 464,
     MMAP_ = 465,
     MMAPINCR_ = 466,
     MOSAIC_ = 467,
     MODE_ = 468,
     MOTION_ = 469,
     MULTICOLOR_ = 470,
     MULTIPLY_ = 471,
     MOVE_ = 472,
     NAME_ = 473,
     NAN_ = 474,
     NATIVE_ = 475,
     NAXES_ = 476,
     NEW_ = 477,
     NEXT_ = 478,
     NO_ = 479,
     NONE_ = 480,
     NONNAN_ = 481,
     NONZERO_ = 482,
     NOW_ = 483,
     NRRD_ = 484,
     NUMBER_ = 485,
     OBJECT_ = 486,
     OFF_ = 487,
     ON_ = 488,
     ONLY_ = 489,
     OPTION_ = 490,
     ORIENT_ = 491,
     OVERLAY_ = 492,
     PAN_ = 493,
     PANNER_ = 494,
     PARSER_ = 495,
     PASTE_ = 496,
     PERF_ = 497,
     PHOTO_ = 498,
     PHYSICAL_ = 499,
     PIXEL_ = 500,
     PLOT2D_ = 501,
     PLOT3D_ = 502,
     POINT_ = 503,
     POINTER_ = 504,
     POLYGON_ = 505,
     POSTSCRIPT_ = 506,
     POW_ = 507,
     PRECISION_ = 508,
     PRINT_ = 509,
     PRESERVE_ = 510,
     PROJECTION_ = 511,
     PROPERTY_ = 512,
     PUBLICATION_ = 513,
     PROS_ = 514,
     QUERY_ = 515,
     RADIAL_ = 516,
     RADIUS_ = 517,
     RANGE_ = 518,
     REGION_ = 519,
     REPLACE_ = 520,
     RESAMPLE_ = 521,
     RESCAN_ = 522,
     RESET_ = 523,
     RESOLUTION_ = 524,
     RGB_ = 525,
     ROOT_ = 526,
     ROTATE_ = 527,
     RULER_ = 528,
     SAMPLE_ = 529,
     SAOIMAGE_ = 530,
     SAOTNG_ = 531,
     SAVE_ = 532,
     SATURATION_ = 533,
     SCALE_ = 534,
     SCAN_ = 535,
     SCIENTIFIC_ = 536,
     SCOPE_ = 537,
     SCREEN_ = 538,
     SEGMENT_ = 539,
     SELECT_ = 540,
     SET_ = 541,
     SEXAGESIMAL_ = 542,
     SHAPE_ = 543,
     SHARED_ = 544,
     SHIFT_ = 545,
     SHMID_ = 546,
     SHOW_ = 547,
     SIGMA_ = 548,
     SINH_ = 549,
     SIZE_ = 550,
     SLICE_ = 551,
     SMMAP_ = 552,
     SMOOTH_ = 553,
     SOFTLIGHT_ = 554,
     SOCKET_ = 555,
     SOCKETGZ_ = 556,
     SOURCE_ = 557,
     SQRT_ = 558,
     SQUARED_ = 559,
     SSHARED_ = 560,
     STATS_ = 561,
     STATUS_ = 562,
     SUM_ = 563,
     SYNC_ = 564,
     SYSTEM_ = 565,
     TABLE_ = 566,
     TAG_ = 567,
     TEMPLATE_ = 568,
     TEXT_ = 569,
     THREADS_ = 570,
     THREED_ = 571,
     THRESHOLD_ = 572,
     THICK_ = 573,
     TOP_ = 574,
     TRANSPARENCY_ = 575,
     TO_ = 576,
     TOGGLE_ = 577,
     TOPHAT_ = 578,
     TRUE_ = 579,
     TYPE_ = 580,
     UNDO_ = 581,
     UNHIGHLITE_ = 582,
     UNLOAD_ = 583,
     UNSELECT_ = 584,
     UPDATE_ = 585,
     UP_ = 586,
     USER_ = 587,
     VALUE_ = 588,
     VAR_ = 589,
     VIEW_ = 590,
     VECTOR_ = 591,
     VERSION_ = 592,
     VERTEX_ = 593,
     VERTICAL_ = 594,
     WARP_ = 595,
     WCS_ = 596,
     WCSA_ = 597,
     WCSB_ = 598,
     WCSC_ = 599,
     WCSD_ = 600,
     WCSE_ = 601,
     WCSF_ = 602,
     WCSG_ = 603,
     WCSH_ = 604,
     WCSI_ = 605,
     WCSJ_ = 606,
     WCSK_ = 607,
     WCSL_ = 608,
     WCSM_ = 609,
     WCSN_ = 610,
     WCSO_ = 611,
     WCSP_ = 612,
     WCSQ_ = 613,
     WCSR_ = 614,
     WCSS_ = 615,
     WCST_ = 616,
     WCSU_ = 617,
     WCSV_ = 618,
     WCSW_ = 619,
     WCSX_ = 620,
     WCSY_ = 621,
     WCSZ_ = 622,
     WCS0_ = 623,
     WFPC2_ = 624,
     WIDTH_ = 625,
     WIN32_ = 626,
     XML_ = 627,
     XY_ = 628,
     YES_ = 629,
     ZERO_ = 630,
     ZMAX_ = 631,
     ZSCALE_ = 632,
     ZOOM_ = 633
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
#define FIP_ 387
#define FIT_ 388
#define FITS_ 389
#define FITSY_ 390
#define FIXED_ 391
#define FK4_ 392
#define FK5_ 393
#define FONT_ 394
#define FORMAT_ 395
#define FOOTPRINT_ 396
#define FROM_ 397
#define FRONT_ 398
#define FULL_ 399
#define FUNCTION_ 400
#define GALACTIC_ 401
#define GAUSSIAN_ 402
#define GET_ 403
#define GLOBAL_ 404
#define GRAPHICS_ 405
#define GRAY_ 406
#define GRID_ 407
#define GZ_ 408
#define HANDLE_ 409
#define HARDLIGHT_ 410
#define HAS_ 411
#define HEAD_ 412
#define HEADER_ 413
#define HEIGHT_ 414
#define HIDE_ 415
#define HIGHLITE_ 416
#define HISTEQU_ 417
#define HISTOGRAM_ 418
#define HORIZONTAL_ 419
#define HUE_ 420
#define HSV_ 421
#define HLS_ 422
#define ICRS_ 423
#define ID_ 424
#define IIS_ 425
#define IMAGE_ 426
#define INCLUDE_ 427
#define INCR_ 428
#define INFO_ 429
#define ITERATION_ 430
#define IRAF_ 431
#define IRAFMIN_ 432
#define J2000_ 433
#define KEY_ 434
#define KEYWORD_ 435
#define LABEL_ 436
#define LAYER_ 437
#define LAYERNO_ 438
#define LAST_ 439
#define LENGTH_ 440
#define LEVEL_ 441
#define LIGHTEN_ 442
#define LITTLE_ 443
#define LITTLEENDIAN_ 444
#define LINE_ 445
#define LINEAR_ 446
#define LIST_ 447
#define LOAD_ 448
#define LOCAL_ 449
#define LOG_ 450
#define LUMINOSITY_ 451
#define MACOSX_ 452
#define MAGNIFIER_ 453
#define MATCH_ 454
#define MAP_ 455
#define MARK_ 456
#define MARKER_ 457
#define MASK_ 458
#define MEDIAN_ 459
#define MESSAGE_ 460
#define METHOD_ 461
#define MINMAX_ 462
#define MINOR_ 463
#define MIP_ 464
#define MMAP_ 465
#define MMAPINCR_ 466
#define MOSAIC_ 467
#define MODE_ 468
#define MOTION_ 469
#define MULTICOLOR_ 470
#define MULTIPLY_ 471
#define MOVE_ 472
#define NAME_ 473
#define NAN_ 474
#define NATIVE_ 475
#define NAXES_ 476
#define NEW_ 477
#define NEXT_ 478
#define NO_ 479
#define NONE_ 480
#define NONNAN_ 481
#define NONZERO_ 482
#define NOW_ 483
#define NRRD_ 484
#define NUMBER_ 485
#define OBJECT_ 486
#define OFF_ 487
#define ON_ 488
#define ONLY_ 489
#define OPTION_ 490
#define ORIENT_ 491
#define OVERLAY_ 492
#define PAN_ 493
#define PANNER_ 494
#define PARSER_ 495
#define PASTE_ 496
#define PERF_ 497
#define PHOTO_ 498
#define PHYSICAL_ 499
#define PIXEL_ 500
#define PLOT2D_ 501
#define PLOT3D_ 502
#define POINT_ 503
#define POINTER_ 504
#define POLYGON_ 505
#define POSTSCRIPT_ 506
#define POW_ 507
#define PRECISION_ 508
#define PRINT_ 509
#define PRESERVE_ 510
#define PROJECTION_ 511
#define PROPERTY_ 512
#define PUBLICATION_ 513
#define PROS_ 514
#define QUERY_ 515
#define RADIAL_ 516
#define RADIUS_ 517
#define RANGE_ 518
#define REGION_ 519
#define REPLACE_ 520
#define RESAMPLE_ 521
#define RESCAN_ 522
#define RESET_ 523
#define RESOLUTION_ 524
#define RGB_ 525
#define ROOT_ 526
#define ROTATE_ 527
#define RULER_ 528
#define SAMPLE_ 529
#define SAOIMAGE_ 530
#define SAOTNG_ 531
#define SAVE_ 532
#define SATURATION_ 533
#define SCALE_ 534
#define SCAN_ 535
#define SCIENTIFIC_ 536
#define SCOPE_ 537
#define SCREEN_ 538
#define SEGMENT_ 539
#define SELECT_ 540
#define SET_ 541
#define SEXAGESIMAL_ 542
#define SHAPE_ 543
#define SHARED_ 544
#define SHIFT_ 545
#define SHMID_ 546
#define SHOW_ 547
#define SIGMA_ 548
#define SINH_ 549
#define SIZE_ 550
#define SLICE_ 551
#define SMMAP_ 552
#define SMOOTH_ 553
#define SOFTLIGHT_ 554
#define SOCKET_ 555
#define SOCKETGZ_ 556
#define SOURCE_ 557
#define SQRT_ 558
#define SQUARED_ 559
#define SSHARED_ 560
#define STATS_ 561
#define STATUS_ 562
#define SUM_ 563
#define SYNC_ 564
#define SYSTEM_ 565
#define TABLE_ 566
#define TAG_ 567
#define TEMPLATE_ 568
#define TEXT_ 569
#define THREADS_ 570
#define THREED_ 571
#define THRESHOLD_ 572
#define THICK_ 573
#define TOP_ 574
#define TRANSPARENCY_ 575
#define TO_ 576
#define TOGGLE_ 577
#define TOPHAT_ 578
#define TRUE_ 579
#define TYPE_ 580
#define UNDO_ 581
#define UNHIGHLITE_ 582
#define UNLOAD_ 583
#define UNSELECT_ 584
#define UPDATE_ 585
#define UP_ 586
#define USER_ 587
#define VALUE_ 588
#define VAR_ 589
#define VIEW_ 590
#define VECTOR_ 591
#define VERSION_ 592
#define VERTEX_ 593
#define VERTICAL_ 594
#define WARP_ 595
#define WCS_ 596
#define WCSA_ 597
#define WCSB_ 598
#define WCSC_ 599
#define WCSD_ 600
#define WCSE_ 601
#define WCSF_ 602
#define WCSG_ 603
#define WCSH_ 604
#define WCSI_ 605
#define WCSJ_ 606
#define WCSK_ 607
#define WCSL_ 608
#define WCSM_ 609
#define WCSN_ 610
#define WCSO_ 611
#define WCSP_ 612
#define WCSQ_ 613
#define WCSR_ 614
#define WCSS_ 615
#define WCST_ 616
#define WCSU_ 617
#define WCSV_ 618
#define WCSW_ 619
#define WCSX_ 620
#define WCSY_ 621
#define WCSZ_ 622
#define WCS0_ 623
#define WFPC2_ 624
#define WIDTH_ 625
#define WIN32_ 626
#define XML_ 627
#define XY_ 628
#define YES_ 629
#define ZERO_ 630
#define ZMAX_ 631
#define ZSCALE_ 632
#define ZOOM_ 633




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
#line 913 "frame/parser.C"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 926 "frame/parser.C"

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
#define YYLAST   5913

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  383
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  237
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1390
/* YYNRULES -- Number of states.  */
#define YYNSTATES  3039

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   633

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
       2,   382,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   380,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   381,   379,
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
     375,   376,   377,   378
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
    4555,  4558,  4560,  4562,  4564,  4566,  4568,  4570,  4573,  4576,
    4581,  4584,  4587,  4590,  4593,  4596,  4601,  4604,  4607,  4610,
    4613,  4616,  4621,  4623,  4626,  4629,  4632,  4636,  4638,  4640,
    4642,  4645,  4648,  4651,  4654,  4657,  4661,  4665,  4669,  4673,
    4677,  4681,  4683,  4686,  4689,  4692,  4696,  4699,  4703,  4707,
    4711,  4715,  4719,  4723,  4726,  4729,  4732,  4735,  4738,  4741,
    4744,  4747,  4750,  4753,  4756,  4759,  4762,  4765,  4769,  4773,
    4777,  4780,  4783,  4786,  4790,  4794,  4798,  4801,  4804,  4807,
    4810,  4813,  4816,  4820,  4824,  4828,  4831,  4834,  4837,  4840,
    4843,  4846,  4850,  4854,  4858,  4861,  4864,  4867,  4870,  4873,
    4876,  4879,  4882,  4885,  4889,  4893,  4897,  4902,  4909,  4912,
    4914,  4916,  4918,  4920,  4922,  4923,  4929,  4931,  4938,  4942,
    4944,  4947,  4950,  4953,  4957,  4961,  4964,  4967,  4970,  4973,
    4976,  4979,  4983,  4986,  4989,  4993,  4995,  4999,  5004,  5007,
    5009,  5012,  5018,  5025,  5032,  5035,  5037,  5040,  5043,  5049,
    5056
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     384,     0,    -1,   100,   386,    -1,    43,   418,    -1,    40,
      67,     5,    -1,    40,    67,   387,    -1,    46,   423,    -1,
      60,    -1,    65,    -1,    66,   425,    -1,    70,   312,     5,
      -1,    71,   430,    -1,    72,   432,    -1,    80,   433,    -1,
      87,   442,    -1,    89,   444,    -1,    90,   445,    -1,    99,
     387,    -1,   125,   447,    -1,   135,   448,    -1,   148,   449,
      -1,   152,   498,    -1,   156,   501,    -1,   160,    -1,   161,
     387,    -1,   161,    67,     5,    -1,   166,   584,    -1,   167,
     583,    -1,   170,   507,    -1,   176,    15,     4,    -1,   193,
     510,    -1,   197,   528,    -1,   198,   529,    -1,   199,   530,
      -1,   202,   546,   531,    -1,   203,   567,    -1,   182,   566,
      -1,   215,   582,    -1,   219,    67,     5,    -1,   236,   568,
      -1,   238,   569,    -1,   239,   572,    -1,   260,    91,    -1,
     253,   574,    -1,   251,   573,    -1,   268,    -1,   264,   546,
     576,    -1,   270,   581,    -1,   272,   585,    -1,   277,   587,
      -1,   292,    -1,   298,   608,    -1,   315,     4,    -1,   316,
     413,    -1,   328,    -1,   330,   610,    -1,   337,    -1,   340,
     612,    -1,   341,   613,    -1,   371,   617,    -1,   378,   618,
      -1,     3,    -1,     4,    -1,   387,    -1,   212,   387,    -1,
     240,   387,    -1,   242,   387,    -1,   341,   387,    -1,    43,
     387,    -1,    46,   387,    -1,    79,   387,    -1,    87,   387,
      -1,   153,   387,    -1,   270,   387,    -1,     4,    -1,   374,
      -1,   379,    -1,   233,    -1,   324,    -1,   224,    -1,   380,
      -1,   232,    -1,   127,    -1,    -1,   271,    37,    -1,   144,
      37,    -1,   271,    -1,   144,    -1,    -1,   390,    -1,   385,
      -1,     6,    -1,     7,    -1,     8,    -1,     9,    -1,    10,
      -1,   391,   391,    -1,   392,   393,    -1,   393,   393,    -1,
     385,   385,    -1,   171,    -1,   244,    -1,   105,    -1,    18,
      -1,   396,    -1,   341,    -1,   342,    -1,   343,    -1,   344,
      -1,   345,    -1,   346,    -1,   347,    -1,   348,    -1,   349,
      -1,   350,    -1,   351,    -1,   352,    -1,   353,    -1,   354,
      -1,   355,    -1,   356,    -1,   357,    -1,   358,    -1,   359,
      -1,   360,    -1,   361,    -1,   362,    -1,   363,    -1,   364,
      -1,   365,    -1,   366,    -1,   367,    -1,   368,    -1,    57,
      -1,   239,    -1,    -1,   375,    -1,   227,    -1,   219,    -1,
     226,    -1,   263,    -1,    -1,   302,    -1,   216,    -1,   283,
      -1,   237,    -1,    94,    -1,   187,    -1,    69,    -1,    68,
      -1,   155,    -1,   299,    -1,   107,    -1,   123,    -1,   165,
      -1,   278,    -1,    67,    -1,   196,    -1,   191,    -1,   195,
      -1,   252,    -1,   303,    -1,   304,    -1,    27,    -1,   294,
      -1,   162,    -1,    29,    -1,   280,    -1,   274,    -1,    98,
      -1,   177,    -1,    -1,   137,    -1,    34,    -1,   138,    -1,
     178,    -1,   168,    -1,   146,    -1,   112,    -1,    -1,   101,
      -1,   287,    -1,    -1,   101,    -1,    23,    -1,    24,    -1,
      -1,   291,    -1,   179,    -1,    -1,    16,    -1,   173,    -1,
      -1,   171,    -1,   203,    -1,    -1,    63,    -1,    49,    -1,
     106,    -1,    88,    -1,   381,    -1,    26,    -1,    52,    -1,
      -1,     4,    -1,    85,    -1,   163,    -1,   246,    -1,   247,
      -1,   261,    -1,   306,    -1,    -1,    31,    -1,   308,    -1,
     204,    -1,    -1,   220,    -1,    41,    -1,    42,    -1,   188,
      -1,   189,    -1,   335,   417,    -1,    47,   414,    -1,    77,
     415,    -1,   161,   416,    -1,   206,   579,    -1,    36,   580,
      -1,   279,   385,    -1,   309,     4,    -1,   317,   385,    -1,
     387,    -1,    67,     5,    -1,   387,    -1,    67,     5,    -1,
     387,    -1,    67,     5,    -1,   385,   385,    -1,   248,   385,
     385,   385,   385,   385,    -1,    11,   419,    -1,    74,     5,
       5,     5,    -1,   104,     4,    -1,   126,   420,    -1,   145,
     421,    -1,    54,   295,     4,    -1,   321,   422,    -1,   130,
       5,    -1,    60,    -1,   385,   385,    -1,   385,    -1,   385,
     385,    -1,   385,    11,   385,   385,    -1,   385,   385,    11,
     385,   385,    -1,   321,   385,    -1,   321,   385,   385,    -1,
     321,   385,    11,   385,   385,    -1,   321,   385,   385,    11,
     385,   385,    -1,    31,    -1,   308,    -1,   133,    -1,   385,
     385,    11,    60,     5,     5,     5,    -1,   385,   385,     4,
     385,   385,    11,    60,     5,     5,     5,     5,    -1,   385,
     385,    11,   385,   385,     5,     5,     5,    -1,   385,   385,
       4,   385,   385,    11,   385,   385,     5,     5,     5,     5,
      -1,   385,    -1,   385,   385,    -1,   321,   424,    -1,   133,
      -1,   385,    -1,   385,   385,    -1,   282,   426,    -1,   213,
     427,    -1,   207,   428,    -1,   332,   385,   385,    -1,   332,
     219,   219,    -1,   377,   429,    -1,   255,   387,    -1,   149,
      -1,   194,    -1,   385,    -1,   207,    -1,   377,    -1,   376,
      -1,   332,    -1,     4,   401,    -1,   213,   401,    -1,   274,
       4,    -1,   267,    -1,   385,     4,     4,    -1,    81,   385,
      -1,   274,     4,    -1,   190,     4,    -1,     4,   385,   385,
       4,     4,    -1,   270,   385,   385,   385,   385,   385,   385,
       4,     4,    -1,   166,   385,   385,   385,   385,   385,   385,
       4,     4,    -1,   167,   385,   385,   385,   385,   385,   385,
       4,     4,    -1,   215,     4,     4,     5,     5,     5,     4,
      -1,    39,    -1,   214,   431,    -1,   117,    -1,     4,   385,
     385,     4,     4,    -1,   270,   385,   385,   385,   385,   385,
     385,     4,     4,    -1,   166,   385,   385,   385,   385,   385,
     385,     4,     4,    -1,   167,   385,   385,   385,   385,   385,
     385,     4,     4,    -1,   215,     4,     4,     5,     5,     5,
       4,    -1,   400,    -1,   195,   385,    -1,    86,   434,    -1,
     103,   435,    -1,   193,   436,    -1,   241,   440,    -1,   277,
     441,    -1,     5,     4,     4,   439,     4,     4,   400,   385,
     437,   438,   385,   385,     5,    -1,     5,     4,     4,   439,
       4,     4,   400,   385,   385,   438,   385,   385,     5,    -1,
       5,     4,     4,   439,     4,     4,   400,   385,   437,   385,
     385,     5,    -1,     5,     4,     4,   439,     4,     4,   400,
     385,   385,   385,   385,     5,    -1,   250,    -1,    -1,    30,
      -1,     5,    -1,     5,     5,     4,   387,    -1,     5,     4,
     387,     5,   395,   402,    -1,   207,    -1,   377,    -1,   376,
      -1,   332,    -1,   149,    -1,   194,    -1,   298,    -1,    46,
      -1,     5,    -1,     5,     5,     4,   387,    -1,     5,   395,
     402,    -1,    30,     5,   395,   402,    -1,    -1,   385,   385,
     385,   385,   395,   402,    -1,    60,   394,   395,   402,   385,
     385,   395,   404,    -1,   316,   443,    -1,    39,   385,   385,
      -1,   214,   385,   385,    -1,   117,   385,   385,    -1,    -1,
     385,   385,   395,   402,    -1,    39,   385,   385,     4,    -1,
     214,   385,   385,     4,    -1,   117,   385,   385,     4,    -1,
     397,   385,   385,    -1,   395,   402,   394,    -1,   387,    -1,
     340,   385,   385,    -1,    39,   214,   397,   385,   385,    -1,
     214,   397,   385,   385,    -1,    39,   214,   395,   394,    -1,
     214,   395,   394,    -1,    32,     4,    -1,    -1,    31,    -1,
     308,    -1,   204,    -1,   385,    -1,    65,    -1,   156,   124,
       5,    -1,    -1,    40,    67,    -1,    43,   452,    -1,    46,
     454,    -1,    66,   455,    -1,    71,   459,    -1,    70,   458,
      -1,    72,   461,    -1,    80,   463,    -1,    82,   466,    -1,
      87,   467,    -1,    89,   468,    -1,    91,   470,    -1,    90,
     469,    -1,    97,   471,    -1,    99,    -1,   134,   475,    -1,
     152,   481,    -1,   161,    67,    -1,   163,     5,     5,     4,
      -1,   164,    92,   450,    -1,   166,   489,    -1,   167,   488,
      -1,   170,   473,    -1,   174,   472,    -1,   176,    15,    -1,
     207,    -1,   202,   546,   540,    -1,   203,   483,    -1,   182,
     482,    -1,   215,   487,    -1,   219,    67,    -1,   236,    -1,
     238,   485,    -1,   245,   311,   397,   385,   385,     4,     4,
       5,    -1,   270,   486,    -1,   272,    -1,   298,   490,    -1,
     315,    -1,   316,   491,    -1,   325,    -1,   333,   397,   385,
     385,    -1,   339,    92,   451,    -1,   341,   496,    -1,   378,
      -1,     5,     5,   385,   385,   397,     4,   446,    -1,     5,
       5,   385,   385,   395,   402,     4,   446,    -1,     5,     5,
     385,   385,   397,     4,   446,    -1,     5,     5,   385,   385,
     395,   402,     4,   446,    -1,   104,    -1,   126,    -1,   145,
      -1,    54,   295,    -1,    91,    -1,   130,    -1,    74,   453,
      -1,   192,    -1,    -1,   207,     5,    -1,   108,     5,    -1,
     126,    -1,    -1,   437,   438,    -1,   385,   438,    -1,   282,
      -1,   213,    -1,   207,   456,    -1,   332,   186,    -1,   377,
     457,    -1,   255,    -1,   213,    -1,   274,    -1,    81,    -1,
     274,    -1,   190,    -1,    -1,   312,    -1,   186,   460,    -1,
       4,    -1,     4,   397,   385,   385,    -1,     4,   385,   385,
     400,   385,    -1,    -1,   186,   462,    -1,   195,    -1,     4,
     385,   385,   400,   385,    -1,   395,   402,    -1,    66,   464,
      -1,    67,    -1,    95,    -1,   186,    -1,   230,   186,    -1,
     206,    -1,    72,   465,    -1,   298,    -1,   370,    -1,    -1,
     213,    -1,   282,    -1,    -1,   195,    -1,   385,   385,   395,
     402,   403,    -1,   397,   385,   385,   395,   402,   403,    -1,
     395,   402,   403,    -1,    60,   395,   402,   403,   395,   404,
      -1,   316,   395,   402,    -1,   397,    -1,   395,   402,   403,
      -1,   307,    -1,    32,    -1,   397,    -1,   395,   402,   403,
      -1,   395,   402,   394,   385,   385,     5,    -1,     4,   395,
     402,   394,   385,   385,     5,    -1,   397,   385,   385,     4,
       4,    -1,     5,   388,    -1,    66,    -1,   397,   385,   385,
       5,   388,    -1,     4,     4,     4,     4,    -1,    91,    -1,
     128,   218,   474,    -1,    -1,     4,    -1,   385,   385,    -1,
     221,    -1,    60,   395,   402,   403,    -1,    84,    -1,   104,
     478,    -1,    44,    -1,   124,   476,    -1,   128,   218,   479,
      -1,   158,   477,    -1,   159,    -1,   231,   218,    -1,   295,
      -1,   295,   395,   402,   404,    -1,   296,   480,    -1,   370,
      -1,     4,    -1,   397,   385,   385,    -1,     4,    -1,   180,
       5,    -1,     4,   180,     5,    -1,   341,     4,    -1,    -1,
       4,    -1,   388,    -1,   388,   397,   385,   385,    -1,   388,
       4,    -1,    -1,     4,    -1,   142,   171,   395,    -1,   142,
     171,     4,   395,    -1,   321,   171,   385,   395,    -1,    -1,
     235,    -1,   334,    -1,    84,    -1,   183,    -1,    67,   484,
      -1,    45,   484,    -1,   320,   484,    -1,   335,   484,    -1,
      67,    -1,   201,    -1,   263,    -1,   310,    -1,   320,    -1,
      84,    -1,    45,    -1,    -1,     4,    -1,   255,    -1,    62,
      -1,   310,    -1,   335,    -1,   310,    -1,    62,    -1,   310,
      -1,   335,    -1,    62,    -1,   310,    -1,   335,    -1,   145,
      -1,   262,    -1,   262,   208,    -1,   293,    -1,   293,   208,
      -1,    20,    -1,   335,   495,    -1,    47,   492,    -1,    77,
     493,    -1,   161,   494,    -1,   206,    -1,    36,    -1,   279,
      -1,    -1,    67,    -1,    -1,    67,    -1,    -1,    67,    -1,
      -1,   248,    -1,    -1,    15,   497,    -1,   218,   396,    -1,
      -1,   249,    -1,    86,   499,    -1,   103,    -1,   395,   402,
     403,   500,     5,     5,    -1,   395,   402,   403,   500,     5,
      -1,    19,    -1,   258,    -1,    18,    -1,    40,    67,    -1,
      43,   502,    -1,    80,   503,    -1,    87,    -1,    98,    -1,
      99,    -1,   105,    -1,   134,   504,    -1,   152,    -1,   170,
      -1,   177,    -1,   202,   505,    -1,   244,    -1,   171,    -1,
     298,    -1,   310,   395,    -1,   341,   506,    -1,    75,     5,
      -1,    -1,    30,    -1,    -1,    43,    -1,    90,    -1,   212,
      -1,   161,    -1,   285,    -1,   241,    -1,   326,    -1,   395,
      -1,    59,   395,    -1,   121,   395,    -1,   191,   395,    -1,
      17,    -1,   316,   395,    -1,   222,     4,     4,    -1,   122,
      -1,   205,     5,    -1,    91,   509,    -1,   286,   128,   218,
     508,    -1,   286,     4,     4,     4,     4,    -1,   330,    -1,
     341,   385,   385,   385,   385,   385,   385,   385,   385,     4,
      -1,     5,    -1,     5,     4,    -1,     4,     4,    57,    -1,
       4,     4,   395,    -1,   213,   387,    -1,    25,   511,    -1,
     118,   513,    -1,   134,   514,    -1,   173,   527,    -1,   229,
     525,    -1,   243,   526,    -1,     5,    13,     5,   407,    -1,
       5,    14,     5,   407,    -1,     5,    62,     5,   407,    -1,
       5,   210,   407,    -1,     5,   211,   407,    -1,     5,   289,
     405,     4,   407,    -1,     5,   300,     4,   407,    -1,     5,
     301,     4,   407,    -1,     5,   334,     5,   407,    -1,   270,
      90,   512,    -1,   167,    90,   512,    -1,   166,    90,   512,
      -1,     5,    13,     5,    -1,     5,    14,     5,    -1,     5,
      62,     5,    -1,     5,   210,    -1,     5,   211,    -1,     5,
     289,   405,     4,    -1,     5,   300,     4,    -1,     5,   301,
       4,    -1,     5,   334,     5,    -1,     5,     5,   297,    -1,
       5,    13,     5,   407,    -1,     5,    14,     5,   407,    -1,
       5,    62,     5,   407,    -1,     5,   210,   406,   407,    -1,
       5,     5,   297,   406,   407,    -1,     5,   211,   406,   407,
      -1,     5,   289,   405,     4,   406,   407,    -1,     5,   305,
     405,     4,     4,   406,   407,    -1,     5,   300,     4,   407,
      -1,     5,   301,     4,   407,    -1,     5,   334,     5,   406,
     407,    -1,   296,   515,    -1,   124,    90,   516,    -1,   270,
     171,   524,    -1,   270,    90,   523,    -1,   167,   171,   524,
      -1,   167,    90,   523,    -1,   166,   171,   524,    -1,   166,
      90,   523,    -1,   212,   517,    -1,     5,    13,     5,    -1,
       5,    14,     5,    -1,     5,    62,     5,    -1,     5,   210,
     406,    -1,     5,     5,   297,   406,    -1,     5,   211,   406,
      -1,     5,   289,   405,     4,   406,    -1,     5,   305,   405,
       4,     4,   406,    -1,     5,   300,     4,    -1,     5,   301,
       4,    -1,     5,   334,     5,   406,    -1,     5,    13,     5,
      -1,     5,    14,     5,    -1,     5,    62,     5,    -1,     5,
     210,   406,    -1,     5,   211,   406,    -1,     5,   289,   405,
       4,   406,    -1,     5,   300,     4,    -1,     5,   301,     4,
      -1,     5,   334,     5,   406,    -1,   171,   176,   518,    -1,
     176,   519,    -1,   171,   520,    -1,   522,    -1,   171,   369,
     521,    -1,     5,    13,     5,   407,    -1,     5,    14,     5,
     407,    -1,     5,    62,     5,   407,    -1,     5,   210,   406,
     407,    -1,     5,   211,   406,   407,    -1,     5,   289,   405,
       4,   406,   407,    -1,     5,   300,     4,   407,    -1,     5,
     301,     4,   407,    -1,     5,   334,     5,   406,   407,    -1,
       5,    13,     5,   407,    -1,     5,    14,     5,   407,    -1,
       5,    62,     5,   407,    -1,     5,   210,   406,   407,    -1,
       5,     5,   297,   406,   407,    -1,     5,   211,   406,   407,
      -1,     5,   289,   405,     4,   406,   407,    -1,     5,   305,
     405,     4,     4,   406,   407,    -1,     5,   300,     4,   407,
      -1,     5,   301,     4,   407,    -1,     5,   334,     5,   406,
     407,    -1,   396,     5,    13,     5,   407,    -1,   396,     5,
      14,     5,   407,    -1,   396,     5,    62,     5,   407,    -1,
     396,     5,   210,   406,   407,    -1,   396,     5,   211,   406,
     407,    -1,   396,     5,   289,   405,     4,   406,   407,    -1,
     396,     5,   300,     4,   407,    -1,   396,     5,   301,     4,
     407,    -1,   396,     5,   334,     5,   406,   407,    -1,     5,
      13,     5,   407,    -1,     5,    14,     5,   407,    -1,     5,
      62,     5,   407,    -1,     5,   210,   406,   407,    -1,     5,
     211,   406,   407,    -1,     5,   289,   405,     4,   406,   407,
      -1,     5,   300,     4,   407,    -1,     5,   301,     4,   407,
      -1,     5,   334,     5,   406,   407,    -1,   396,     5,    13,
       5,   407,    -1,   396,     5,    14,     5,   407,    -1,   396,
       5,    62,     5,   407,    -1,   396,     5,   210,   406,   407,
      -1,   396,     5,     5,   297,   406,   407,    -1,   396,     5,
     211,   406,   407,    -1,   396,     5,   289,   405,     4,   406,
     407,    -1,   396,     5,   305,   405,     4,     4,   406,   407,
      -1,   396,     5,   300,     4,   407,    -1,   396,     5,   301,
       4,   407,    -1,   396,     5,   334,     5,   406,   407,    -1,
       5,    13,     5,    -1,     5,    14,     5,    -1,     5,    62,
       5,    -1,     5,   210,   406,    -1,     5,     5,   297,   406,
      -1,     5,   211,   406,    -1,     5,   289,   405,     4,   406,
      -1,     5,   305,   405,     4,     4,   406,    -1,     5,   300,
       4,    -1,     5,   301,     4,    -1,     5,   334,     5,   406,
      -1,     5,    13,     5,    -1,     5,    14,     5,    -1,     5,
      62,     5,    -1,     5,   210,   406,    -1,     5,   211,   406,
      -1,     5,   289,   405,     4,   406,    -1,     5,   300,     4,
      -1,     5,   301,     4,    -1,     5,   334,     5,   406,    -1,
       5,    13,     5,   407,    -1,     5,    62,     5,   407,    -1,
       5,   210,   407,    -1,     5,   289,   405,     4,   407,    -1,
       5,   300,     4,   407,    -1,     5,   334,     5,   407,    -1,
       5,     5,    -1,   296,     5,     5,    -1,    97,     4,     4,
       4,     4,     4,    -1,   207,     4,     4,     4,     4,     4,
      -1,   117,    -1,   254,    -1,   387,    -1,   150,   387,    -1,
      91,   387,    -1,    67,     5,    -1,     5,     4,     4,    -1,
     330,   385,   385,    -1,   378,   385,    -1,     5,     5,   396,
     402,     5,     5,   396,   402,   385,   396,   404,     5,    -1,
      61,   534,    -1,    67,     5,    -1,    83,    -1,    76,   539,
       5,    -1,    76,   539,   334,     5,    -1,    78,   103,    -1,
      -1,    86,   532,   535,    -1,    92,    -1,   103,   537,    -1,
     111,   538,    -1,   120,     4,    -1,   139,     5,    -1,   161,
      16,    -1,   161,   234,   385,   385,    -1,   161,   322,   385,
     385,    -1,     4,    19,   410,   387,    -1,     4,    20,   390,
      -1,     4,    20,   390,   397,    -1,     4,    20,   390,   395,
     402,    -1,     4,    21,   262,   385,   385,     4,   395,   404,
      -1,     4,    21,   262,     5,   395,   404,    -1,     4,    50,
     262,   385,   385,   385,     4,   395,   404,    -1,     4,    50,
     262,     5,   395,   404,    -1,     4,    49,   262,   385,   385,
     395,   404,    -1,     4,    53,   111,   390,   390,     4,   385,
     385,   385,     4,    -1,     4,    53,   111,   390,   390,     4,
     385,   385,   385,     4,   397,    -1,     4,    53,   111,   390,
     390,     4,   385,   385,   385,     4,   395,   402,    -1,     4,
      53,   111,     5,     5,   395,   402,   395,   404,    -1,     4,
      56,   533,     5,     5,    -1,     4,    63,   262,   385,   395,
     404,    -1,     4,    67,     5,    -1,     4,    77,    26,   387,
     387,    -1,     4,    77,   181,     5,     5,    -1,     4,    77,
     262,   385,   395,   404,    -1,     4,    77,   310,   395,   402,
      -1,     4,    78,   149,   387,    -1,     4,    85,   111,   390,
     390,     4,   385,   385,     4,    -1,     4,    85,   111,   390,
     390,     4,   385,   385,     4,   397,    -1,     4,    85,   111,
     390,   390,     4,   385,   385,     4,   395,   402,    -1,     4,
      85,   111,     5,     5,   395,   402,   395,   404,    -1,     4,
      86,    21,   262,   385,   385,    -1,     4,    86,    50,   262,
     385,   385,    -1,     4,    86,    53,    20,   385,   385,    -1,
       4,    86,    53,   262,   385,   385,    -1,     4,    86,   116,
     262,   385,   385,    -1,     4,    86,   119,    20,   385,   385,
      -1,     4,    86,   119,   262,   385,   385,    -1,     4,    86,
      85,    20,   385,   385,    -1,     4,    86,    85,   262,   385,
     385,    -1,     4,    86,   250,   338,     4,   385,   385,    -1,
       4,    86,   284,   338,     4,   385,   385,    -1,     4,   103,
      -1,     4,   103,    21,     4,    -1,     4,   103,    50,     4,
      -1,     4,   103,    53,     4,    -1,     4,   103,   116,     4,
      -1,     4,   103,    56,   533,     5,    -1,     4,   103,   119,
       4,    -1,     4,   103,    85,     4,    -1,     4,   103,   250,
     338,     4,    -1,     4,   103,   284,   338,     4,    -1,     4,
     103,   312,    -1,     4,   103,   312,     5,    -1,     4,   103,
     312,     4,    -1,     4,   111,    39,     4,    -1,     4,   115,
     262,   385,   385,   395,   404,    -1,     4,   116,   262,   385,
     385,   385,     4,   395,   404,    -1,     4,   116,   262,     5,
     395,   404,    -1,     4,   119,   111,   390,   390,     4,   385,
     385,   385,     4,    -1,     4,   119,   111,   390,   390,     4,
     385,   385,   385,     4,   397,    -1,     4,   119,   111,   390,
     390,     4,   385,   385,   385,     4,   395,   402,    -1,     4,
     119,   111,     5,     5,   395,   402,   395,   404,    -1,     4,
     139,     5,    -1,     4,   161,    -1,     4,   161,   234,    -1,
       4,   190,    26,   387,   387,    -1,     4,   190,   248,   395,
     402,   394,   394,    -1,     4,   217,   385,   385,    -1,     4,
     217,   143,    -1,     4,   217,    35,    -1,     4,   217,   321,
     395,   402,   394,    -1,     4,   250,   268,   385,   385,   395,
     404,    -1,     4,   284,   268,   385,   385,   395,   404,    -1,
       4,   248,   288,   408,    -1,     4,   248,   295,     4,    -1,
       4,   256,   395,   402,   394,   394,   385,   395,   404,    -1,
       4,   257,   552,   387,    -1,     4,   272,    39,    -1,     4,
     273,   140,     5,    -1,     4,   273,   248,   395,   402,   394,
     394,    -1,     4,   273,   310,   395,   402,   395,   404,    -1,
       4,   285,    -1,     4,   285,   234,    -1,     4,   312,     5,
      -1,     4,   314,     5,    -1,     4,   314,   272,   387,    -1,
       4,   327,    -1,     4,   329,    -1,     4,   336,    26,   387,
      -1,     4,   336,   248,   395,   402,   394,   395,   404,   385,
     390,    -1,     4,   370,     4,    -1,   179,    -1,   179,   385,
     385,    -1,   192,   547,    -1,   193,   548,    -1,   217,   549,
      -1,   255,   387,    -1,   257,   552,   387,    -1,   257,   552,
     387,   385,   385,    -1,   272,    39,   385,   385,    -1,   272,
     214,   385,   385,     4,    -1,   272,   117,    -1,   277,   556,
      -1,   285,   557,    -1,   292,   558,    -1,     5,    67,     5,
      -1,     5,    83,    -1,     5,   103,    -1,     5,    92,    -1,
       5,   139,     5,    -1,     5,   161,    -1,     5,   161,   234,
      -1,     5,   217,   385,   385,    -1,     5,   217,   143,    -1,
       5,   217,    35,    -1,     5,   217,   321,   395,   402,   394,
      -1,     5,   257,   552,   387,    -1,     5,   285,    -1,     5,
     285,   234,    -1,     5,   327,    -1,     5,   329,    -1,   312,
     111,     5,     5,    -1,   312,   103,     5,    -1,   312,   103,
      16,    -1,   312,     5,    -1,   312,   330,     5,    -1,   241,
      -1,   241,   395,    -1,   326,    -1,   327,    16,    -1,   329,
      16,    -1,   370,     4,    -1,   285,    -1,   329,    -1,   161,
      -1,   327,    -1,    39,   217,    -1,   217,    -1,   117,   217,
      -1,    39,   111,    -1,   111,    -1,   117,   111,    -1,    39,
     272,    -1,   272,    -1,   117,   272,    -1,   103,    -1,   314,
      -1,    67,    -1,   370,    -1,   257,    -1,   139,    -1,   179,
      -1,   330,    -1,    -1,     4,    -1,    29,   387,    -1,   262,
     385,    -1,   175,     4,    -1,   235,     4,   385,    -1,    63,
     385,   385,   385,   553,    -1,   115,   385,   385,   385,   385,
     389,   553,    -1,    49,   385,   385,   385,   385,   389,   553,
      -1,   250,   385,   385,   385,   385,   553,    -1,   284,   385,
     385,   385,   385,   553,    -1,   190,   385,   385,   385,   385,
     553,    -1,   336,   385,   385,   385,   385,   553,    -1,   314,
     385,   385,   389,   553,    -1,    63,   248,   385,   385,   409,
     553,    -1,    49,   248,   385,   385,   409,   553,    -1,   106,
     248,   385,   385,   409,   553,    -1,    88,   248,   385,   385,
     409,   553,    -1,   381,   248,   385,   385,   409,   553,    -1,
      26,   248,   385,   385,   409,   553,    -1,    52,   248,   385,
     385,   409,   553,    -1,   273,   385,   385,   385,   385,   395,
     402,   395,   404,     5,   553,    -1,    77,   385,   385,   385,
     395,   402,   553,    -1,   256,   385,   385,   385,   385,   385,
     553,    -1,    21,   385,   385,   385,   385,     4,   553,    -1,
     116,   385,   385,   385,   385,   385,     4,   389,   553,    -1,
      50,   385,   385,   385,   385,   385,     4,   389,   553,    -1,
      85,   385,   385,   390,   390,     4,   385,   385,     4,   553,
      -1,   119,   385,   385,   390,   390,     4,   385,   385,   385,
       4,   389,   553,    -1,    53,   385,   385,   390,   390,     4,
     385,   385,   385,     4,   389,   553,    -1,    78,   553,    -1,
     313,   536,    -1,     5,   385,   385,    -1,   334,     5,   385,
     385,    -1,   385,   385,   334,     5,    -1,     5,   395,   402,
     394,    -1,    -1,   285,    -1,    16,    -1,    39,   385,   385,
       4,    -1,   214,   385,   385,     4,    -1,   117,    -1,   110,
      -1,   372,    -1,    64,    -1,   276,    -1,   275,    -1,   259,
      -1,   373,    -1,    61,   541,    -1,    67,    -1,   139,    -1,
     120,    -1,   154,   385,   385,    -1,   169,   385,   385,    -1,
       4,    19,    85,     5,     5,     5,   395,     4,    -1,     4,
      19,   163,     5,     5,     4,    -1,     4,    19,   246,     5,
       5,     5,     5,   395,   402,   411,    -1,     4,    19,   247,
       5,     5,   395,   411,    -1,     4,    19,   261,     5,     5,
       5,   395,    -1,     4,    19,   306,   395,   402,    -1,   169,
      16,    -1,     4,    20,    -1,     4,    20,   397,    -1,     4,
      20,   395,   402,    -1,     4,    21,   262,   395,   404,    -1,
       4,    50,   262,   395,   404,    -1,     4,    49,   262,   395,
     404,    -1,     4,    53,    20,    -1,     4,    53,    20,   397,
      -1,     4,    53,    20,   395,   402,    -1,     4,    53,   262,
     395,   404,    -1,     4,    60,   395,   402,   403,    -1,     4,
      63,   262,   395,   404,    -1,     4,    67,    -1,     4,    77,
      26,    -1,     4,    77,   181,    -1,     4,    77,   262,   395,
     404,    -1,     4,    77,   310,    -1,     4,    78,   149,    -1,
       4,    85,    20,    -1,     4,    85,    20,   397,    -1,     4,
      85,    20,   395,   402,    -1,     4,    85,   262,   395,   404,
      -1,     4,   115,   262,   395,   404,    -1,     4,   116,   262,
     395,   404,    -1,     4,   119,    20,    -1,     4,   119,    20,
     397,    -1,     4,   119,    20,   395,   402,    -1,     4,   119,
     262,   395,   404,    -1,     4,   139,    -1,     4,   161,    -1,
       4,   190,    26,    -1,     4,   190,   185,   395,   404,    -1,
       4,   190,   248,   395,   402,   403,    -1,     4,   200,   185,
     385,   395,   404,    -1,     4,   248,   288,    -1,     4,   248,
     295,    -1,     4,   256,   248,   395,   402,   403,    -1,     4,
     256,   185,   395,   404,    -1,     4,   256,   318,   395,   404,
      -1,     4,   257,    -1,     4,   257,   552,    -1,     4,   273,
     140,    -1,     4,   273,   185,   395,   404,    -1,     4,   273,
     248,   395,   402,   403,    -1,     4,   273,   310,    -1,     4,
     285,    -1,     4,   312,    -1,     4,   312,     4,    -1,     4,
     314,    -1,     4,   314,   272,    -1,     4,   325,    -1,     4,
     336,    26,    -1,     4,   336,   185,   395,   404,    -1,     4,
     336,   248,   395,   402,   403,    -1,     4,   370,    -1,   161,
     542,    -1,   161,   230,    -1,   230,    -1,   250,   284,   385,
     385,    -1,   284,   284,   385,   385,    -1,   255,    -1,   257,
     552,    -1,   285,   543,    -1,   285,   230,    -1,   292,   544,
      -1,     5,    67,    -1,     5,   139,    -1,     5,   169,    -1,
       5,   257,   552,    -1,     5,   312,    -1,     5,   312,   230,
      -1,   312,    16,    -1,   312,   102,   218,    -1,   370,    -1,
      29,    -1,   262,    -1,   175,    -1,   235,    -1,    -1,   385,
     385,    -1,    -1,   385,   385,    -1,    -1,   314,    -1,    -1,
      -1,   249,    -1,   264,    -1,   332,    -1,    58,    -1,   141,
      -1,   539,   395,   402,   403,   387,   554,   561,    -1,   285,
     539,   395,   402,   403,   387,   554,   561,    -1,   539,     5,
      -1,   539,     5,     4,     5,   395,   402,    -1,   539,     4,
      -1,   539,     4,     4,     5,   395,   402,    -1,   134,     5,
      -1,   134,     5,     5,    -1,   385,   385,    -1,   143,    -1,
      35,    -1,    39,   385,   385,    -1,   214,   385,   385,    -1,
     117,    -1,   321,   395,   402,   394,    -1,   550,   551,    -1,
     551,    -1,   552,   382,   387,    -1,    67,   382,     5,    -1,
      96,   382,     4,     4,    -1,   370,   382,     4,    -1,   139,
     382,     5,    -1,   314,   382,     5,    -1,   564,    -1,   565,
      -1,   225,    -1,   285,    -1,   161,    -1,    95,    -1,   136,
      -1,   111,    -1,   217,    -1,   272,    -1,   103,    -1,   172,
      -1,   302,    -1,   129,    -1,   545,    -1,   545,   550,    -1,
      -1,    -1,   555,   559,    -1,     5,   539,   395,   402,   403,
     387,    -1,   285,     5,   539,   395,   402,   403,   387,    -1,
     313,     5,    -1,    16,    -1,   234,   385,   385,    -1,   322,
      -1,   322,   385,   385,    -1,   131,    -1,   184,    -1,   387,
      -1,   314,   387,    -1,   559,   560,    -1,   560,    -1,   552,
     382,   387,    -1,    -1,    -1,   562,   563,    -1,   563,   564,
      -1,   564,    -1,   312,   382,     5,    -1,    56,   382,   533,
       5,     5,    -1,    -1,    86,    -1,     4,    -1,   183,     4,
      -1,    67,     5,    -1,     4,    67,     5,    -1,    45,   399,
      -1,     4,    45,   399,    -1,   320,   385,    -1,     4,   320,
     385,    -1,   335,   387,    -1,     4,   335,   387,    -1,   292,
      -1,     4,   292,    -1,   160,    -1,     4,   160,    -1,   103,
      -1,     4,   103,    -1,   331,    -1,     4,   331,    -1,   109,
      -1,     4,   109,    -1,   319,    -1,     4,   319,    -1,    48,
      -1,     4,    48,    -1,    65,    -1,    67,     5,    -1,   201,
     398,    -1,   263,   385,   385,    -1,   310,   395,    -1,   320,
     385,    -1,    45,   399,    -1,   201,     4,    -1,   381,    -1,
     379,    -1,   373,    -1,   225,    -1,   385,   385,   385,   385,
      -1,   385,   385,    -1,   397,   385,   385,    -1,   395,   402,
     394,    -1,   321,   570,    -1,    38,   385,   385,    -1,   214,
     571,    -1,   255,   387,    -1,   385,   385,    -1,   397,   385,
     385,    -1,   395,   402,   394,    -1,    39,   385,   385,    -1,
     385,   385,    -1,   117,   385,   385,    -1,   387,    -1,   341,
     396,   402,    -1,     5,     4,     4,    -1,   330,    -1,    73,
     575,    -1,   186,     4,    -1,   269,     4,    -1,   279,   385,
      -1,     4,     4,     4,     4,     4,     4,     4,     4,     4,
      -1,     4,     4,     4,     4,     4,     4,    -1,    55,    -1,
     151,    -1,   270,    -1,    93,    -1,   161,   577,    -1,   285,
     578,    -1,    39,   385,   385,    -1,   214,   385,   385,    -1,
     117,    -1,   290,   117,    -1,    39,   385,   385,    -1,   214,
     385,   385,    -1,   117,    -1,   290,   117,    -1,   209,    -1,
      12,    -1,   132,    -1,   225,    -1,    33,    -1,   113,    -1,
      62,     5,    -1,   310,   395,    -1,   335,     4,     4,     4,
      -1,   310,   395,    -1,    62,     5,    -1,    62,   165,    -1,
      62,   278,    -1,   310,   395,    -1,   335,     4,     4,     4,
      -1,    62,     5,    -1,    62,   165,    -1,    62,   278,    -1,
      62,   333,    -1,   310,   395,    -1,   335,     4,     4,     4,
      -1,   385,    -1,   385,   101,    -1,   214,   586,    -1,   321,
     385,    -1,   321,   385,   101,    -1,    39,    -1,   385,    -1,
     117,    -1,    25,   588,    -1,   134,   589,    -1,   229,   606,
      -1,   118,   607,    -1,   243,     5,    -1,   128,     5,   412,
      -1,    62,     5,   412,    -1,   300,     4,   412,    -1,   270,
      90,   596,    -1,   167,    90,   599,    -1,   166,    90,   602,
      -1,   590,    -1,   171,   590,    -1,   311,   591,    -1,   296,
     592,    -1,   124,    90,   593,    -1,   212,   594,    -1,   270,
     171,   597,    -1,   270,    90,   598,    -1,   167,   171,   600,
      -1,   167,    90,   601,    -1,   166,   171,   603,    -1,   166,
      90,   604,    -1,   266,   605,    -1,   128,     5,    -1,    62,
       5,    -1,   300,     4,    -1,   128,     5,    -1,    62,     5,
      -1,   300,     4,    -1,   128,     5,    -1,    62,     5,    -1,
     300,     4,    -1,   128,     5,    -1,    62,     5,    -1,   300,
       4,    -1,   171,   595,    -1,   128,     5,     4,    -1,    62,
       5,     4,    -1,   300,     4,     4,    -1,   128,     5,    -1,
      62,     5,    -1,   300,     4,    -1,   128,     5,   412,    -1,
      62,     5,   412,    -1,   300,     4,   412,    -1,   128,     5,
      -1,    62,     5,    -1,   300,     4,    -1,   128,     5,    -1,
      62,     5,    -1,   300,     4,    -1,   128,     5,   412,    -1,
      62,     5,   412,    -1,   300,     4,   412,    -1,   128,     5,
      -1,    62,     5,    -1,   300,     4,    -1,   128,     5,    -1,
      62,     5,    -1,   300,     4,    -1,   128,     5,   412,    -1,
      62,     5,   412,    -1,   300,     4,   412,    -1,   128,     5,
      -1,    62,     5,    -1,   300,     4,    -1,   128,     5,    -1,
      62,     5,    -1,   300,     4,    -1,   128,     5,    -1,    62,
       5,    -1,   300,     4,    -1,   128,     5,   412,    -1,    62,
       5,   412,    -1,   300,     4,   412,    -1,   128,     5,     5,
     412,    -1,   609,     4,     4,   385,   385,   390,    -1,   609,
       4,    -1,   103,    -1,    51,    -1,   323,    -1,   147,    -1,
     114,    -1,    -1,     4,   385,   385,   385,   385,    -1,   228,
      -1,   228,     4,   385,   385,   385,   385,    -1,   134,   296,
     611,    -1,     4,    -1,     4,     4,    -1,   385,   395,    -1,
     385,   385,    -1,   321,   385,   385,    -1,   396,   402,   403,
      -1,    15,   616,    -1,   268,     4,    -1,   265,   615,    -1,
      22,   614,    -1,     4,     4,    -1,     4,     5,    -1,   314,
       4,     5,    -1,     4,     4,    -1,     4,     5,    -1,   314,
       4,     5,    -1,     4,    -1,     4,   396,   402,    -1,   321,
       4,   396,   402,    -1,   249,    65,    -1,   254,    -1,   385,
     385,    -1,   385,   385,    11,   385,   385,    -1,   385,   385,
      11,   397,   385,   385,    -1,   385,   385,    11,   395,   402,
     394,    -1,   321,   619,    -1,   133,    -1,   133,   385,    -1,
     385,   385,    -1,   385,   385,    11,   385,   385,    -1,   385,
     385,    11,   397,   385,   385,    -1,   385,   385,    11,   395,
     402,   394,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   488,   488,   489,   490,   491,   492,   493,   494,   495,
     496,   497,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,   513,   514,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,   529,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   541,   542,   543,   544,   545,
     546,   549,   550,   553,   554,   555,   556,   557,   558,   559,
     560,   561,   562,   563,   566,   568,   569,   570,   571,   573,
     574,   575,   576,   579,   580,   581,   582,   583,   586,   587,
     590,   591,   592,   595,   598,   601,   604,   616,   623,   630,
     638,   639,   640,   641,   642,   645,   646,   647,   648,   649,
     650,   651,   652,   653,   654,   655,   656,   657,   658,   659,
     660,   661,   662,   663,   664,   665,   666,   667,   668,   669,
     670,   671,   672,   675,   676,   679,   680,   681,   682,   683,
     684,   687,   688,   689,   690,   691,   692,   693,   694,   695,
     696,   697,   698,   699,   700,   701,   702,   703,   706,   707,
     708,   709,   710,   711,   712,   713,   716,   717,   718,   719,
     720,   723,   724,   725,   726,   727,   728,   729,   730,   733,
     734,   735,   738,   739,   740,   741,   744,   745,   746,   749,
     750,   751,   754,   755,   756,   759,   760,   761,   762,   763,
     764,   765,   766,   769,   770,   773,   774,   775,   776,   777,
     778,   781,   782,   783,   784,   787,   788,   789,   790,   791,
     792,   795,   796,   797,   798,   799,   800,   801,   802,   803,
     807,   808,   811,   812,   815,   816,   819,   820,   824,   825,
     826,   827,   828,   829,   830,   831,   834,   835,   838,   839,
     840,   842,   844,   845,   846,   848,   852,   853,   856,   857,
     859,   862,   864,   870,   871,   872,   875,   876,   877,   880,
     881,   882,   883,   884,   885,   886,   892,   893,   896,   897,
     898,   899,   900,   903,   904,   905,   906,   909,   910,   915,
     920,   927,   929,   931,   933,   935,   937,   938,   939,   942,
     944,   946,   948,   950,   953,   954,   957,   958,   959,   960,
     961,   964,   967,   970,   976,   982,   985,   986,   989,   990,
     991,   998,   999,  1000,  1001,  1004,  1005,  1008,  1009,  1012,
    1013,  1016,  1018,  1022,  1023,  1026,  1028,  1029,  1030,  1031,
    1034,  1035,  1037,  1038,  1039,  1042,  1044,  1046,  1047,  1049,
    1051,  1053,  1055,  1059,  1062,  1063,  1064,  1065,  1068,  1069,
    1072,  1075,  1076,  1077,  1078,  1079,  1080,  1081,  1082,  1083,
    1084,  1085,  1086,  1087,  1088,  1089,  1090,  1091,  1092,  1093,
    1094,  1095,  1096,  1097,  1098,  1099,  1100,  1101,  1102,  1103,
    1104,  1105,  1106,  1107,  1108,  1109,  1111,  1112,  1113,  1114,
    1115,  1116,  1117,  1119,  1120,  1121,  1124,  1126,  1130,  1132,
    1136,  1137,  1138,  1139,  1140,  1141,  1142,  1143,  1146,  1147,
    1148,  1151,  1154,  1155,  1157,  1159,  1160,  1161,  1162,  1163,
    1164,  1171,  1172,  1175,  1176,  1177,  1180,  1181,  1184,  1187,
    1188,  1190,  1194,  1195,  1196,  1199,  1203,  1205,  1206,  1207,
    1208,  1209,  1210,  1211,  1212,  1213,  1216,  1217,  1218,  1221,
    1222,  1225,  1227,  1235,  1237,  1239,  1243,  1244,  1246,  1249,
    1252,  1253,  1257,  1259,  1262,  1267,  1268,  1269,  1273,  1274,
    1275,  1278,  1279,  1280,  1283,  1284,  1286,  1287,  1288,  1289,
    1290,  1291,  1292,  1293,  1294,  1295,  1297,  1298,  1301,  1302,
    1305,  1306,  1307,  1308,  1311,  1312,  1315,  1317,  1320,  1324,
    1325,  1326,  1328,  1330,  1334,  1335,  1336,  1339,  1340,  1341,
    1342,  1343,  1344,  1347,  1348,  1349,  1350,  1351,  1352,  1353,
    1356,  1357,  1360,  1363,  1364,  1365,  1368,  1371,  1372,  1373,
    1376,  1377,  1378,  1381,  1382,  1383,  1384,  1385,  1386,  1389,
    1390,  1391,  1392,  1393,  1394,  1395,  1398,  1399,  1402,  1403,
    1406,  1407,  1410,  1411,  1414,  1415,  1416,  1419,  1420,  1423,
    1424,  1427,  1430,  1438,  1439,  1442,  1443,  1444,  1445,  1446,
    1447,  1448,  1449,  1450,  1451,  1452,  1453,  1454,  1455,  1456,
    1457,  1458,  1459,  1462,  1465,  1466,  1469,  1470,  1471,  1472,
    1475,  1476,  1477,  1478,  1481,  1482,  1483,  1484,  1485,  1486,
    1489,  1490,  1491,  1492,  1493,  1494,  1496,  1497,  1502,  1503,
    1506,  1508,  1510,  1513,  1514,  1515,  1516,  1517,  1518,  1521,
    1523,  1525,  1527,  1528,  1530,  1532,  1534,  1536,  1538,  1539,
    1540,  1543,  1544,  1545,  1546,  1547,  1548,  1550,  1551,  1552,
    1555,  1558,  1560,  1562,  1564,  1566,  1568,  1570,  1572,  1575,
    1577,  1579,  1581,  1582,  1583,  1584,  1585,  1586,  1587,  1588,
    1589,  1592,  1593,  1594,  1595,  1596,  1597,  1598,  1600,  1602,
    1603,  1604,  1607,  1608,  1609,  1610,  1611,  1612,  1614,  1615,
    1616,  1619,  1620,  1621,  1622,  1623,  1626,  1629,  1632,  1635,
    1638,  1641,  1644,  1647,  1650,  1655,  1658,  1661,  1664,  1667,
    1670,  1673,  1676,  1679,  1682,  1685,  1690,  1693,  1696,  1699,
    1702,  1705,  1708,  1711,  1714,  1719,  1721,  1723,  1725,  1727,
    1729,  1734,  1736,  1738,  1742,  1745,  1748,  1751,  1754,  1757,
    1760,  1763,  1766,  1769,  1772,  1777,  1778,  1779,  1780,  1781,
    1782,  1783,  1785,  1787,  1788,  1789,  1792,  1793,  1794,  1795,
    1796,  1797,  1799,  1800,  1801,  1804,  1806,  1808,  1809,  1811,
    1813,  1817,  1818,  1821,  1822,  1823,  1826,  1829,  1830,  1831,
    1832,  1833,  1834,  1835,  1838,  1846,  1847,  1848,  1849,  1851,
    1853,  1854,  1854,  1855,  1856,  1857,  1858,  1859,  1861,  1862,
    1864,  1867,  1870,  1871,  1872,  1875,  1878,  1881,  1885,  1888,
    1891,  1894,  1898,  1903,  1908,  1910,  1912,  1913,  1915,  1917,
    1919,  1921,  1922,  1924,  1926,  1930,  1935,  1937,  1939,  1941,
    1943,  1945,  1947,  1949,  1951,  1953,  1955,  1958,  1959,  1961,
    1963,  1964,  1966,  1968,  1969,  1970,  1972,  1974,  1975,  1976,
    1978,  1979,  1982,  1986,  1989,  1992,  1996,  2001,  2007,  2008,
    2009,  2011,  2012,  2016,  2018,  2019,  2020,  2023,  2026,  2029,
    2031,  2033,  2038,  2041,  2042,  2043,  2046,  2050,  2051,  2053,
    2054,  2055,  2057,  2058,  2060,  2061,  2066,  2068,  2069,  2071,
    2072,  2073,  2074,  2075,  2076,  2078,  2080,  2082,  2083,  2084,
    2086,  2088,  2089,  2090,  2091,  2092,  2093,  2094,  2095,  2096,
    2097,  2098,  2100,  2102,  2103,  2104,  2105,  2107,  2108,  2109,
    2110,  2111,  2113,  2114,  2115,  2116,  2117,  2118,  2121,  2122,
    2123,  2124,  2125,  2126,  2127,  2128,  2129,  2130,  2131,  2132,
    2133,  2134,  2135,  2136,  2137,  2138,  2139,  2140,  2141,  2144,
    2145,  2146,  2147,  2148,  2149,  2157,  2164,  2173,  2182,  2189,
    2196,  2204,  2212,  2219,  2224,  2229,  2234,  2239,  2244,  2249,
    2255,  2265,  2275,  2285,  2292,  2302,  2312,  2321,  2333,  2346,
    2351,  2354,  2356,  2358,  2363,  2367,  2368,  2369,  2375,  2377,
    2379,  2382,  2383,  2384,  2385,  2386,  2387,  2388,  2391,  2392,
    2393,  2394,  2395,  2396,  2398,  2400,  2402,  2404,  2406,  2408,
    2411,  2412,  2413,  2414,  2416,  2419,  2421,  2423,  2424,  2425,
    2427,  2430,  2433,  2435,  2436,  2437,  2438,  2440,  2441,  2442,
    2443,  2444,  2446,  2448,  2450,  2453,  2454,  2455,  2457,  2460,
    2461,  2462,  2463,  2465,  2468,  2472,  2473,  2474,  2477,  2480,
    2482,  2483,  2484,  2485,  2487,  2490,  2491,  2493,  2494,  2495,
    2496,  2497,  2499,  2500,  2502,  2505,  2506,  2507,  2508,  2509,
    2511,  2513,  2514,  2515,  2516,  2518,  2520,  2521,  2522,  2523,
    2524,  2525,  2527,  2528,  2530,  2533,  2534,  2535,  2536,  2539,
    2540,  2543,  2544,  2547,  2548,  2551,  2564,  2565,  2569,  2570,
    2574,  2575,  2578,  2582,  2588,  2590,  2593,  2595,  2598,  2600,
    2604,  2605,  2606,  2607,  2608,  2609,  2610,  2614,  2615,  2618,
    2619,  2620,  2621,  2622,  2623,  2624,  2625,  2628,  2629,  2630,
    2631,  2632,  2633,  2634,  2635,  2636,  2637,  2638,  2639,  2642,
    2643,  2646,  2647,  2647,  2650,  2652,  2654,  2657,  2658,  2659,
    2660,  2661,  2662,  2665,  2666,  2669,  2670,  2673,  2677,  2678,
    2678,  2681,  2682,  2685,  2688,  2692,  2693,  2694,  2695,  2696,
    2697,  2698,  2699,  2700,  2701,  2702,  2703,  2705,  2706,  2707,
    2708,  2709,  2710,  2711,  2712,  2713,  2714,  2715,  2716,  2717,
    2718,  2721,  2722,  2723,  2724,  2725,  2726,  2727,  2728,  2734,
    2735,  2736,  2737,  2740,  2742,  2743,  2748,  2750,  2751,  2752,
    2753,  2756,  2757,  2762,  2766,  2767,  2768,  2771,  2772,  2777,
    2778,  2781,  2783,  2784,  2785,  2790,  2792,  2798,  2799,  2800,
    2801,  2804,  2805,  2808,  2810,  2812,  2813,  2816,  2818,  2819,
    2820,  2823,  2824,  2825,  2828,  2829,  2830,  2833,  2834,  2835,
    2838,  2842,  2843,  2844,  2845,  2846,  2849,  2850,  2851,  2852,
    2853,  2854,  2857,  2858,  2859,  2860,  2861,  2864,  2865,  2866,
    2869,  2870,  2871,  2872,  2873,  2876,  2878,  2880,  2882,  2883,
    2884,  2887,  2888,  2889,  2890,  2891,  2892,  2893,  2894,  2895,
    2896,  2897,  2898,  2899,  2902,  2903,  2904,  2907,  2908,  2909,
    2912,  2913,  2914,  2917,  2918,  2919,  2922,  2923,  2924,  2925,
    2928,  2929,  2930,  2933,  2935,  2937,  2941,  2942,  2943,  2946,
    2947,  2948,  2951,  2953,  2955,  2959,  2960,  2961,  2964,  2965,
    2966,  2969,  2971,  2973,  2977,  2978,  2979,  2982,  2983,  2984,
    2987,  2988,  2989,  2992,  2994,  2996,  3000,  3004,  3006,  3011,
    3014,  3015,  3016,  3017,  3020,  3021,  3024,  3026,  3028,  3031,
    3032,  3033,  3036,  3037,  3040,  3042,  3043,  3044,  3045,  3048,
    3049,  3050,  3053,  3054,  3055,  3058,  3059,  3064,  3066,  3069,
    3076,  3077,  3079,  3084,  3086,  3089,  3090,  3091,  3092,  3094,
    3099
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
  "FIRST_", "FIP_", "FIT_", "FITS_", "FITSY_", "FIXED_", "FK4_", "FK5_",
  "FONT_", "FORMAT_", "FOOTPRINT_", "FROM_", "FRONT_", "FULL_",
  "FUNCTION_", "GALACTIC_", "GAUSSIAN_", "GET_", "GLOBAL_", "GRAPHICS_",
  "GRAY_", "GRID_", "GZ_", "HANDLE_", "HARDLIGHT_", "HAS_", "HEAD_",
  "HEADER_", "HEIGHT_", "HIDE_", "HIGHLITE_", "HISTEQU_", "HISTOGRAM_",
  "HORIZONTAL_", "HUE_", "HSV_", "HLS_", "ICRS_", "ID_", "IIS_", "IMAGE_",
  "INCLUDE_", "INCR_", "INFO_", "ITERATION_", "IRAF_", "IRAFMIN_",
  "J2000_", "KEY_", "KEYWORD_", "LABEL_", "LAYER_", "LAYERNO_", "LAST_",
  "LENGTH_", "LEVEL_", "LIGHTEN_", "LITTLE_", "LITTLEENDIAN_", "LINE_",
  "LINEAR_", "LIST_", "LOAD_", "LOCAL_", "LOG_", "LUMINOSITY_", "MACOSX_",
  "MAGNIFIER_", "MATCH_", "MAP_", "MARK_", "MARKER_", "MASK_", "MEDIAN_",
  "MESSAGE_", "METHOD_", "MINMAX_", "MINOR_", "MIP_", "MMAP_", "MMAPINCR_",
  "MOSAIC_", "MODE_", "MOTION_", "MULTICOLOR_", "MULTIPLY_", "MOVE_",
  "NAME_", "NAN_", "NATIVE_", "NAXES_", "NEW_", "NEXT_", "NO_", "NONE_",
  "NONNAN_", "NONZERO_", "NOW_", "NRRD_", "NUMBER_", "OBJECT_", "OFF_",
  "ON_", "ONLY_", "OPTION_", "ORIENT_", "OVERLAY_", "PAN_", "PANNER_",
  "PARSER_", "PASTE_", "PERF_", "PHOTO_", "PHYSICAL_", "PIXEL_", "PLOT2D_",
  "PLOT3D_", "POINT_", "POINTER_", "POLYGON_", "POSTSCRIPT_", "POW_",
  "PRECISION_", "PRINT_", "PRESERVE_", "PROJECTION_", "PROPERTY_",
  "PUBLICATION_", "PROS_", "QUERY_", "RADIAL_", "RADIUS_", "RANGE_",
  "REGION_", "REPLACE_", "RESAMPLE_", "RESCAN_", "RESET_", "RESOLUTION_",
  "RGB_", "ROOT_", "ROTATE_", "RULER_", "SAMPLE_", "SAOIMAGE_", "SAOTNG_",
  "SAVE_", "SATURATION_", "SCALE_", "SCAN_", "SCIENTIFIC_", "SCOPE_",
  "SCREEN_", "SEGMENT_", "SELECT_", "SET_", "SEXAGESIMAL_", "SHAPE_",
  "SHARED_", "SHIFT_", "SHMID_", "SHOW_", "SIGMA_", "SINH_", "SIZE_",
  "SLICE_", "SMMAP_", "SMOOTH_", "SOFTLIGHT_", "SOCKET_", "SOCKETGZ_",
  "SOURCE_", "SQRT_", "SQUARED_", "SSHARED_", "STATS_", "STATUS_", "SUM_",
  "SYNC_", "SYSTEM_", "TABLE_", "TAG_", "TEMPLATE_", "TEXT_", "THREADS_",
  "THREED_", "THRESHOLD_", "THICK_", "TOP_", "TRANSPARENCY_", "TO_",
  "TOGGLE_", "TOPHAT_", "TRUE_", "TYPE_", "UNDO_", "UNHIGHLITE_",
  "UNLOAD_", "UNSELECT_", "UPDATE_", "UP_", "USER_", "VALUE_", "VAR_",
  "VIEW_", "VECTOR_", "VERSION_", "VERTEX_", "VERTICAL_", "WARP_", "WCS_",
  "WCSA_", "WCSB_", "WCSC_", "WCSD_", "WCSE_", "WCSF_", "WCSG_", "WCSH_",
  "WCSI_", "WCSJ_", "WCSK_", "WCSL_", "WCSM_", "WCSN_", "WCSO_", "WCSP_",
  "WCSQ_", "WCSR_", "WCSS_", "WCST_", "WCSU_", "WCSV_", "WCSW_", "WCSX_",
  "WCSY_", "WCSZ_", "WCS0_", "WFPC2_", "WIDTH_", "WIN32_", "XML_", "XY_",
  "YES_", "ZERO_", "ZMAX_", "ZSCALE_", "ZOOM_", "'Y'", "'N'", "'X'", "'='",
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
     625,   626,   627,   628,   629,   630,   631,   632,   633,    89,
      78,    88,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   383,   384,   384,   384,   384,   384,   384,   384,   384,
     384,   384,   384,   384,   384,   384,   384,   384,   384,   384,
     384,   384,   384,   384,   384,   384,   384,   384,   384,   384,
     384,   384,   384,   384,   384,   384,   384,   384,   384,   384,
     384,   384,   384,   384,   384,   384,   384,   384,   384,   384,
     384,   384,   384,   384,   384,   384,   384,   384,   384,   384,
     384,   385,   385,   386,   386,   386,   386,   386,   386,   386,
     386,   386,   386,   386,   387,   387,   387,   387,   387,   387,
     387,   387,   387,   388,   388,   388,   388,   388,   389,   389,
     390,   390,   390,   391,   392,   393,   394,   394,   394,   394,
     395,   395,   395,   395,   395,   396,   396,   396,   396,   396,
     396,   396,   396,   396,   396,   396,   396,   396,   396,   396,
     396,   396,   396,   396,   396,   396,   396,   396,   396,   396,
     396,   396,   396,   397,   397,   398,   398,   398,   398,   398,
     398,   399,   399,   399,   399,   399,   399,   399,   399,   399,
     399,   399,   399,   399,   399,   399,   399,   399,   400,   400,
     400,   400,   400,   400,   400,   400,   401,   401,   401,   401,
     401,   402,   402,   402,   402,   402,   402,   402,   402,   403,
     403,   403,   404,   404,   404,   404,   405,   405,   405,   406,
     406,   406,   407,   407,   407,   408,   408,   408,   408,   408,
     408,   408,   408,   409,   409,   410,   410,   410,   410,   410,
     410,   411,   411,   411,   411,   412,   412,   412,   412,   412,
     412,   413,   413,   413,   413,   413,   413,   413,   413,   413,
     414,   414,   415,   415,   416,   416,   417,   417,   418,   418,
     418,   418,   418,   418,   418,   418,   419,   419,   420,   420,
     420,   420,   420,   420,   420,   420,   421,   421,   422,   422,
     422,   422,   422,   423,   423,   423,   424,   424,   424,   425,
     425,   425,   425,   425,   425,   425,   426,   426,   427,   427,
     427,   427,   427,   428,   428,   428,   428,   429,   429,   429,
     429,   430,   430,   430,   430,   430,   430,   430,   430,   431,
     431,   431,   431,   431,   432,   432,   433,   433,   433,   433,
     433,   434,   434,   434,   434,   434,   435,   435,   436,   436,
     436,   437,   437,   437,   437,   438,   438,   439,   439,   440,
     440,   441,   441,   442,   442,   442,   442,   442,   442,   442,
     443,   443,   443,   443,   443,   444,   444,   444,   444,   444,
     444,   444,   444,   445,   446,   446,   446,   446,   447,   447,
     448,   449,   449,   449,   449,   449,   449,   449,   449,   449,
     449,   449,   449,   449,   449,   449,   449,   449,   449,   449,
     449,   449,   449,   449,   449,   449,   449,   449,   449,   449,
     449,   449,   449,   449,   449,   449,   449,   449,   449,   449,
     449,   449,   449,   449,   449,   449,   450,   450,   451,   451,
     452,   452,   452,   452,   452,   452,   452,   452,   453,   453,
     453,   454,   455,   455,   455,   455,   455,   455,   455,   455,
     455,   456,   456,   457,   457,   457,   458,   458,   459,   460,
     460,   460,   461,   461,   461,   462,   463,   463,   463,   463,
     463,   463,   463,   463,   463,   463,   464,   464,   464,   465,
     465,   466,   466,   467,   467,   467,   468,   468,   468,   469,
     470,   470,   471,   471,   471,   472,   472,   472,   473,   473,
     473,   474,   474,   474,   475,   475,   475,   475,   475,   475,
     475,   475,   475,   475,   475,   475,   475,   475,   476,   476,
     477,   477,   477,   477,   478,   478,   479,   479,   479,   480,
     480,   480,   480,   480,   481,   481,   481,   482,   482,   482,
     482,   482,   482,   483,   483,   483,   483,   483,   483,   483,
     484,   484,   485,   486,   486,   486,   487,   488,   488,   488,
     489,   489,   489,   490,   490,   490,   490,   490,   490,   491,
     491,   491,   491,   491,   491,   491,   492,   492,   493,   493,
     494,   494,   495,   495,   496,   496,   496,   497,   497,   498,
     498,   499,   499,   500,   500,   501,   501,   501,   501,   501,
     501,   501,   501,   501,   501,   501,   501,   501,   501,   501,
     501,   501,   501,   502,   503,   503,   504,   504,   504,   504,
     505,   505,   505,   505,   506,   506,   506,   506,   506,   506,
     507,   507,   507,   507,   507,   507,   507,   507,   508,   508,
     509,   509,   509,   510,   510,   510,   510,   510,   510,   511,
     511,   511,   511,   511,   511,   511,   511,   511,   511,   511,
     511,   512,   512,   512,   512,   512,   512,   512,   512,   512,
     513,   514,   514,   514,   514,   514,   514,   514,   514,   514,
     514,   514,   514,   514,   514,   514,   514,   514,   514,   514,
     514,   515,   515,   515,   515,   515,   515,   515,   515,   515,
     515,   515,   516,   516,   516,   516,   516,   516,   516,   516,
     516,   517,   517,   517,   517,   517,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   519,   519,   519,   519,   519,
     519,   519,   519,   519,   519,   519,   520,   520,   520,   520,
     520,   520,   520,   520,   520,   521,   521,   521,   521,   521,
     521,   521,   521,   521,   522,   522,   522,   522,   522,   522,
     522,   522,   522,   522,   522,   523,   523,   523,   523,   523,
     523,   523,   523,   523,   523,   523,   524,   524,   524,   524,
     524,   524,   524,   524,   524,   525,   525,   525,   525,   525,
     525,   526,   526,   527,   527,   527,   528,   529,   529,   529,
     529,   529,   529,   529,   530,   531,   531,   531,   531,   531,
     531,   532,   531,   531,   531,   531,   531,   531,   531,   531,
     531,   531,   531,   531,   531,   531,   531,   531,   531,   531,
     531,   531,   531,   531,   531,   531,   531,   531,   531,   531,
     531,   531,   531,   531,   531,   531,   531,   531,   531,   531,
     531,   531,   531,   531,   531,   531,   531,   531,   531,   531,
     531,   531,   531,   531,   531,   531,   531,   531,   531,   531,
     531,   531,   531,   531,   531,   531,   531,   531,   531,   531,
     531,   531,   531,   531,   531,   531,   531,   531,   531,   531,
     531,   531,   531,   531,   531,   531,   531,   531,   531,   531,
     531,   531,   531,   531,   531,   531,   531,   531,   531,   531,
     531,   531,   531,   531,   531,   531,   531,   531,   531,   531,
     531,   531,   531,   531,   531,   531,   531,   531,   531,   531,
     531,   531,   531,   531,   531,   531,   531,   531,   531,   531,
     531,   531,   531,   531,   531,   531,   531,   531,   533,   533,
     533,   533,   533,   533,   533,   533,   533,   533,   533,   533,
     533,   533,   533,   533,   533,   533,   533,   533,   533,   534,
     534,   534,   534,   534,   534,   535,   535,   535,   535,   535,
     535,   535,   535,   535,   535,   535,   535,   535,   535,   535,
     535,   535,   535,   535,   535,   535,   535,   535,   535,   535,
     535,   536,   536,   536,   536,   537,   537,   537,   538,   538,
     538,   539,   539,   539,   539,   539,   539,   539,   540,   540,
     540,   540,   540,   540,   540,   540,   540,   540,   540,   540,
     540,   540,   540,   540,   540,   540,   540,   540,   540,   540,
     540,   540,   540,   540,   540,   540,   540,   540,   540,   540,
     540,   540,   540,   540,   540,   540,   540,   540,   540,   540,
     540,   540,   540,   540,   540,   540,   540,   540,   540,   540,
     540,   540,   540,   540,   540,   540,   540,   540,   540,   540,
     540,   540,   540,   540,   540,   540,   540,   540,   540,   540,
     540,   540,   540,   540,   540,   540,   540,   540,   540,   540,
     540,   540,   540,   540,   540,   541,   541,   541,   541,   542,
     542,   543,   543,   544,   544,   545,   546,   546,   546,   546,
     546,   546,   547,   547,   548,   548,   548,   548,   548,   548,
     549,   549,   549,   549,   549,   549,   549,   550,   550,   551,
     551,   551,   551,   551,   551,   551,   551,   552,   552,   552,
     552,   552,   552,   552,   552,   552,   552,   552,   552,   553,
     553,   554,   555,   554,   556,   556,   556,   557,   557,   557,
     557,   557,   557,   558,   558,   559,   559,   560,   561,   562,
     561,   563,   563,   564,   565,   566,   566,   566,   566,   566,
     566,   566,   566,   566,   566,   566,   566,   566,   566,   566,
     566,   566,   566,   566,   566,   566,   566,   566,   566,   566,
     566,   567,   567,   567,   567,   567,   567,   567,   567,   568,
     568,   568,   568,   569,   569,   569,   569,   569,   569,   569,
     569,   570,   570,   570,   571,   571,   571,   572,   572,   572,
     572,   573,   573,   573,   573,   574,   574,   575,   575,   575,
     575,   576,   576,   577,   577,   577,   577,   578,   578,   578,
     578,   579,   579,   579,   580,   580,   580,   581,   581,   581,
     582,   583,   583,   583,   583,   583,   584,   584,   584,   584,
     584,   584,   585,   585,   585,   585,   585,   586,   586,   586,
     587,   587,   587,   587,   587,   588,   588,   588,   588,   588,
     588,   589,   589,   589,   589,   589,   589,   589,   589,   589,
     589,   589,   589,   589,   590,   590,   590,   591,   591,   591,
     592,   592,   592,   593,   593,   593,   594,   594,   594,   594,
     595,   595,   595,   596,   596,   596,   597,   597,   597,   598,
     598,   598,   599,   599,   599,   600,   600,   600,   601,   601,
     601,   602,   602,   602,   603,   603,   603,   604,   604,   604,
     605,   605,   605,   606,   606,   606,   607,   608,   608,   608,
     609,   609,   609,   609,   610,   610,   610,   610,   610,   611,
     611,   611,   612,   612,   613,   613,   613,   613,   613,   614,
     614,   614,   615,   615,   615,   616,   616,   616,   616,   617,
     618,   618,   618,   618,   618,   619,   619,   619,   619,   619,
     619
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
       2,     1,     1,     1,     1,     1,     1,     2,     2,     4,
       2,     2,     2,     2,     2,     4,     2,     2,     2,     2,
       2,     4,     1,     2,     2,     2,     3,     1,     1,     1,
       2,     2,     2,     2,     2,     3,     3,     3,     3,     3,
       3,     1,     2,     2,     2,     3,     2,     3,     3,     3,
       3,     3,     3,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     3,     3,     3,
       2,     2,     2,     3,     3,     3,     2,     2,     2,     2,
       2,     2,     3,     3,     3,     2,     2,     2,     2,     2,
       2,     3,     3,     3,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     3,     3,     3,     4,     6,     2,     1,
       1,     1,     1,     1,     0,     5,     1,     6,     3,     1,
       2,     2,     2,     3,     3,     2,     2,     2,     2,     2,
       2,     3,     2,     2,     3,     1,     3,     4,     2,     1,
       2,     5,     6,     6,     2,     1,     2,     2,     5,     6,
       6
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
       0,    54,  1354,    56,     0,     0,     0,     0,     0,     0,
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
       0,     0,    47,     0,     0,  1262,    48,     0,     0,     0,
       0,     0,    49,  1350,  1349,  1353,  1352,  1351,    51,     0,
      52,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      53,     0,     0,  1356,    55,     0,     0,    57,     0,     0,
       0,     0,   171,    58,  1379,    59,     0,     0,    60,     1,
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
       0,     0,     0,     0,   604,   592,    25,  1256,  1257,  1258,
    1259,  1260,     0,  1251,  1252,  1253,  1254,     0,     0,     0,
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
       0,  1195,  1196,  1250,    38,     0,     0,     0,     0,  1209,
    1210,     0,   171,     0,  1207,  1204,     0,     0,     0,   171,
    1227,  1230,  1228,  1229,  1221,  1222,  1223,  1224,     0,     0,
       0,    46,  1247,  1248,     0,  1267,  1269,  1268,  1264,  1265,
    1263,     0,     0,     0,     0,     0,     0,  1270,     0,  1273,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1271,  1281,     0,     0,     0,  1272,  1274,  1348,
    1245,  1246,  1244,   226,     0,   230,   222,     0,   232,   223,
       0,   234,   224,  1242,  1243,  1241,   225,   227,   228,   229,
       0,     0,   221,     0,     0,     0,     0,  1362,  1375,     0,
       0,  1365,     0,     0,  1368,     0,     0,  1367,  1366,   179,
    1385,     0,  1384,  1380,   247,   243,     0,   252,     0,   249,
       0,   268,   166,   169,   170,   168,   167,   283,   284,   285,
     273,   272,   288,   290,   289,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     171,     0,   337,    99,    96,    97,    98,   171,   339,   338,
       0,     0,     0,     0,     0,     0,     0,   352,     0,   348,
     346,   345,   360,   413,     0,     0,   416,   431,   432,   427,
     428,   433,   435,   434,   429,   325,   326,   424,   423,   439,
     438,     0,   443,   457,   458,   447,   460,   453,   451,   446,
       0,     0,   171,   171,   179,   179,   179,   171,     0,     0,
     171,   505,   487,   498,     0,   489,    83,   500,     0,     0,
     491,   493,   171,   510,     0,     0,   496,     0,     0,   381,
       0,   481,    87,    86,   475,     0,   531,   520,   519,   521,
     522,     0,     0,     0,   999,  1001,  1000,     0,  1089,     0,
    1068,     0,  1071,     0,     0,  1091,  1093,     0,  1084,   388,
       0,   545,   547,   557,   550,   559,   551,   561,   552,   563,
     549,     0,     0,   403,   568,   565,   566,   179,   593,   605,
     606,   607,   609,     0,     0,     0,   622,   610,     0,     0,
       0,  1172,  1170,  1174,  1176,     0,     0,     0,   192,   192,
     186,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   189,   189,   186,     0,     0,   186,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   670,   694,     0,
       0,     0,   662,     0,     0,     0,     0,   192,   186,     0,
       0,   771,     0,   781,   782,   171,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   837,
       0,     0,     0,     0,     0,   859,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   877,     0,     0,   882,   883,
       0,     0,     0,   902,   904,   903,     0,   906,     0,     0,
     913,   915,   916,   950,     0,     0,     0,     0,   785,   786,
     993,   991,   996,   995,   994,   992,   997,     0,   790,     0,
     987,   986,   794,     0,   990,     0,   795,   796,   797,   798,
       0,     0,     0,     0,     0,   889,     0,     0,   890,  1112,
       0,  1115,  1111,     0,     0,     0,   891,   923,   892,  1130,
    1135,  1132,  1138,  1131,  1129,  1136,  1133,  1127,  1134,  1128,
    1137,     0,     0,   897,     0,     0,     0,     0,   898,  1147,
    1151,  1152,     0,  1149,   899,     0,  1153,   900,   920,     0,
       0,     0,   925,   926,   927,  1194,  1208,     0,     0,  1215,
    1211,     0,     0,     0,  1206,  1205,  1219,  1218,     0,     0,
    1235,     0,     0,  1231,     0,  1239,     0,     0,  1232,     0,
    1266,   215,   215,     0,     0,     0,   215,     0,  1295,     0,
    1294,     0,     0,     0,     0,  1282,     0,     0,     0,     0,
    1286,     0,     0,     0,  1293,     0,     0,     0,     0,     0,
    1284,  1296,     0,     0,     0,  1283,   215,   215,   215,     0,
     231,   233,   235,     0,   236,     0,    62,     0,  1358,     0,
    1363,   171,  1378,     0,  1369,  1370,     0,  1372,  1373,     0,
     180,   181,  1364,  1386,  1387,     0,   239,     0,   253,     0,
       0,     0,     0,   287,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   331,   171,
       0,     0,     0,     0,   171,     0,   351,     0,   350,   420,
     419,     0,     0,     0,   171,     0,   179,   465,   463,   467,
     471,     0,     0,     0,   179,     0,   506,   490,     0,   501,
     503,   182,     0,     0,   380,     0,     0,    62,     0,   480,
      85,    84,     0,     0,  1011,     0,     0,     0,     0,     0,
       0,  1023,     0,     0,     0,     0,     0,     0,  1039,  1040,
       0,     0,     0,     0,  1050,     0,  1056,  1057,  1059,  1061,
       0,  1065,  1076,  1077,  1078,     0,  1080,  1085,  1087,  1088,
    1086,   998,     0,  1067,     0,  1066,  1010,     0,     0,  1072,
       0,  1074,     0,  1073,  1094,  1075,  1082,     0,     0,   402,
       0,     0,  1261,  1255,   620,   621,     0,   618,   614,     0,
     192,   192,   192,   193,   194,   632,   633,   188,   187,     0,
     192,   192,   192,     0,   640,   639,   638,   650,   189,   192,
     192,   192,   190,   191,   192,   192,     0,   192,   192,     0,
     189,     0,   663,     0,   669,     0,   668,   667,   666,     0,
       0,     0,   693,     0,   692,     0,   665,   664,     0,     0,
       0,     0,   189,   189,   186,     0,     0,   186,     0,     0,
       0,   192,   192,   767,     0,   192,   192,   772,     0,   205,
     206,   207,   208,   209,   210,     0,    91,    92,    90,   802,
       0,     0,     0,     0,     0,   943,   941,   936,     0,   946,
     930,   947,   933,   945,   939,   928,   942,   931,   929,   948,
     944,     0,     0,   816,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   847,     0,     0,
       0,     0,   858,   860,     0,     0,   865,   864,     0,     0,
     195,     0,     0,   171,     0,   873,     0,     0,     0,     0,
     878,   879,   880,     0,     0,     0,   886,   901,   905,   907,
     910,   909,     0,     0,     0,   914,   951,   953,     0,   952,
     788,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1095,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   792,     0,     0,     0,
       0,   888,     0,   171,  1108,  1106,  1104,     0,     0,   171,
    1110,   893,     0,     0,     0,     0,  1146,     0,     0,  1154,
     918,   919,     0,   921,  1214,  1216,  1213,  1212,  1203,     0,
       0,     0,  1236,     0,     0,  1240,  1249,   217,   218,   219,
     220,   216,  1276,  1275,     0,     0,     0,  1280,     0,     0,
       0,  1279,     0,     0,     0,  1278,  1277,   215,     0,     0,
       0,  1285,     0,     0,     0,  1292,     0,     0,     0,  1291,
       0,     0,     0,  1290,     0,     0,     0,  1289,     0,     0,
       0,     0,     0,  1306,     0,  1341,  1340,  1342,     0,     0,
       0,  1288,     0,     0,     0,  1287,  1301,  1300,  1302,  1298,
    1297,  1299,  1344,  1343,  1345,     0,     0,     0,  1360,  1361,
       0,  1376,   171,  1371,  1374,     0,     0,   171,     0,     0,
       0,   250,     0,     0,     0,     0,   291,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   328,   327,     0,     0,
     319,   330,   332,     0,   342,   344,   343,   341,   171,   349,
       0,     0,     0,   179,   171,     0,     0,     0,     0,   485,
     499,   508,     0,   502,   184,   185,   183,   495,     0,   511,
       0,     0,   478,   483,    83,     0,     0,     0,     0,     0,
       0,   171,  1012,     0,     0,     0,  1017,     0,   171,     0,
    1024,  1025,     0,  1027,  1028,  1029,     0,     0,     0,  1035,
       0,  1041,     0,     0,     0,  1045,  1046,     0,     0,     0,
    1051,  1052,     0,     0,  1055,  1058,  1060,  1062,     0,     0,
    1079,  1081,  1002,  1090,  1003,     0,     0,  1092,  1083,     0,
       0,   573,   574,     0,   615,   619,     0,   629,   630,   631,
     192,   635,   636,   637,     0,     0,     0,   644,   645,   186,
       0,     0,     0,   192,   651,   652,   653,   654,   656,   189,
     659,   660,     0,   192,     0,     0,     0,   189,   189,   186,
       0,     0,     0,     0,     0,     0,     0,   189,   189,   186,
       0,     0,   186,     0,     0,     0,     0,   189,   189,   186,
       0,     0,     0,     0,   691,     0,   695,     0,     0,     0,
       0,     0,   189,   189,   186,     0,     0,   186,     0,     0,
       0,     0,     0,   189,   189,   186,     0,     0,   186,     0,
     189,   671,   672,   673,   674,   676,     0,   679,   680,     0,
     189,     0,     0,   765,   766,   192,   769,   770,     0,   801,
     171,   803,     0,     0,     0,     0,     0,     0,     0,   935,
     932,   938,   937,   934,   940,     0,     0,     0,     0,     0,
     171,   821,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   838,   839,   840,     0,   844,
     841,   843,     0,     0,   849,   848,   850,     0,     0,     0,
       0,     0,     0,   171,   171,   863,   201,   197,   202,   196,
     199,   198,   200,   869,   870,     0,     0,   872,   874,   171,
     171,     0,   881,   884,   171,   171,   908,   912,   954,   789,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1139,   979,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   980,     0,     0,     0,
       0,     0,   799,   800,   171,   179,  1109,     0,     0,  1113,
    1114,     0,     0,   895,     0,   171,     0,  1148,  1150,   917,
       0,  1233,  1234,  1237,  1238,   215,   215,   215,   215,   215,
     215,   215,   215,   215,  1346,  1304,  1303,  1305,  1338,  1337,
    1339,  1335,  1334,  1336,  1329,  1328,  1330,  1326,  1325,  1327,
    1308,  1307,  1311,  1310,  1312,  1309,  1320,  1319,  1321,  1317,
    1316,  1318,     0,     0,  1355,     0,  1377,     0,   171,     0,
    1381,     0,     0,   254,     0,   251,     0,     0,     0,     0,
       0,   299,     0,     0,     0,     0,     0,     0,     0,   171,
       0,   334,   159,     0,   440,     0,   461,   179,   182,     0,
       0,   474,     0,   512,   513,     0,   477,     0,     0,     0,
       0,     0,   171,  1013,   182,   182,   182,   171,  1018,   182,
     179,   182,   182,   171,  1030,   182,   182,   182,   171,  1036,
     182,   182,   171,     0,   182,   171,   182,   182,   171,   182,
     171,  1069,  1070,     0,     0,   572,     0,   634,   641,   642,
     643,     0,   647,   648,   649,   655,   192,   189,   661,   682,
     683,   684,   685,   686,     0,   688,   689,   189,   189,   745,
     746,   747,   748,   750,     0,   753,   754,     0,   189,   756,
     757,   758,   759,   760,     0,   762,   763,   189,     0,     0,
       0,   189,   189,   186,     0,     0,     0,     0,     0,     0,
     189,   189,   186,     0,     0,     0,     0,     0,     0,   189,
     189,   186,     0,     0,     0,   189,   192,   192,   192,   192,
     192,     0,   192,   192,     0,   189,   189,   192,   192,   192,
     192,   192,     0,   192,   192,     0,   189,   675,   189,     0,
     681,     0,     0,   768,     0,   804,   182,     0,     0,   182,
       0,     0,     0,   814,   182,   817,   818,   182,   820,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   842,   845,   846,     0,   182,     0,     0,     0,
     861,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1140,  1118,     0,
    1125,  1126,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   171,     0,     0,    88,     0,     0,
     988,   989,   179,     0,     0,     0,  1116,   894,   896,   179,
     171,  1226,  1332,  1331,  1333,  1323,  1322,  1324,  1314,  1313,
    1315,  1347,     0,  1357,  1388,     0,     0,  1383,  1382,   255,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   295,
       0,     0,   320,   182,   441,   445,   462,   464,     0,   472,
     507,   171,     0,     0,     0,     0,     0,     0,  1009,  1014,
    1016,  1015,  1019,  1020,  1021,  1022,  1026,  1031,  1032,  1033,
    1034,  1037,  1038,  1042,   179,   182,  1048,   179,  1049,  1053,
     179,  1063,   179,     0,   171,     0,   571,     0,   646,   657,
     192,   189,   690,   749,   189,     0,   755,   189,   764,   192,
     192,   192,   192,   192,     0,   192,   192,   189,   192,   192,
     192,   192,   192,     0,   192,   192,   189,   192,   192,   192,
     192,   192,     0,   192,   192,   189,   192,   705,   706,   707,
     708,   710,   189,   713,   714,     0,   192,   192,   734,   735,
     736,   737,   739,   189,   742,   743,     0,   192,   677,   189,
     773,   774,   171,   806,     0,   182,   808,     0,   171,     0,
     815,   819,   171,     0,   826,   827,   828,   829,   833,   834,
     830,   831,   832,     0,     0,   182,   853,     0,   171,     0,
       0,   866,   182,     0,     0,   182,   182,     0,   911,     0,
     203,   203,     0,     0,   203,     0,   203,  1095,     0,     0,
       0,     0,     0,     0,     0,     0,  1117,     0,     0,   203,
     203,     0,     0,     0,     0,     0,     0,     0,     0,   981,
       0,     0,     0,  1095,    89,     0,   203,     0,  1142,   171,
     171,     0,   179,     0,   237,  1390,  1389,     0,     0,   259,
       0,     0,     0,     0,     0,   303,     0,     0,     0,   335,
     473,     0,   354,     0,  1005,     0,   211,     0,  1043,  1044,
    1047,  1054,  1064,   395,     0,   354,     0,   658,   687,   751,
     189,   761,   696,   697,   698,   699,   700,   189,   702,   703,
     192,   725,   726,   727,   728,   729,   189,   731,   732,   192,
     716,   717,   718,   719,   720,   189,   722,   723,   192,   709,
     192,   189,   715,   738,   192,   189,   744,   678,     0,   182,
     809,     0,     0,     0,     0,     0,   835,   836,   851,     0,
       0,     0,   862,   867,     0,   875,   876,   868,   182,     0,
     204,  1095,  1095,    88,     0,  1095,     0,  1095,   955,   171,
       0,  1120,     0,  1123,  1163,  1124,  1122,  1119,     0,  1095,
    1095,    88,     0,     0,  1095,  1095,     0,     0,  1095,   984,
     982,   983,   962,  1095,  1095,  1142,  1158,     0,  1107,  1105,
    1144,     0,     0,     0,     0,   261,   293,   294,     0,     0,
       0,   292,     0,   354,   355,   357,   356,   406,     0,     0,
     212,   214,   213,  1007,  1008,   354,   408,     0,   752,   192,
     704,   192,   733,   192,   724,   711,   192,   740,   192,     0,
     805,   182,   182,     0,   182,     0,   182,   182,     0,   182,
       0,  1095,   968,   964,  1095,     0,   969,     0,   963,  1095,
       0,  1121,     0,   966,   965,  1095,     0,     0,   960,   958,
    1095,   171,   959,   961,   967,  1158,  1102,     0,     0,  1143,
    1156,  1145,  1225,     0,     0,   301,   302,   300,   321,   324,
     322,     0,     0,   407,  1004,   171,   409,   617,   701,   730,
     721,   712,   741,   182,   807,   813,     0,   825,   822,   852,
     857,     0,   871,     0,   973,   957,    88,     0,   971,  1164,
       0,   956,    88,     0,   972,     0,  1103,  1160,  1162,     0,
    1155,     0,     0,     0,     0,     0,     0,   211,     0,   810,
     171,   823,   854,   885,  1095,     0,     0,  1095,     0,   182,
    1161,  1157,   260,     0,     0,     0,     0,     0,  1006,   784,
     171,   811,   824,   171,   855,   975,     0,  1095,   974,     0,
       0,   262,   314,     0,   313,     0,   812,   856,    88,   976,
      88,  1095,   312,   311,  1095,  1095,   970,   978,   977
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    58,  1578,   178,   160,  1034,  2703,  2704,   474,   475,
     476,   477,   161,   162,   163,   799,   724,    99,   927,   497,
    1362,  1867,  1509,  1524,  1505,  2103,  2811,  1575,  2873,  1742,
     380,   876,   879,   882,   892,    68,   404,   410,   414,   417,
      73,   420,    80,   436,   432,   426,   443,    90,   453,   100,
     106,   459,   461,   463,   531,   987,  1838,   465,   468,   113,
     484,   164,   166,  2867,   182,   184,   229,  1029,  1073,   520,
     976,   522,   532,   979,   984,   534,   536,   990,   539,   992,
     550,   995,   997,   553,   557,   561,   563,   566,   570,   606,
     602,  1429,   584,  1015,  1020,  1012,  1417,  1026,   587,   614,
     623,  1037,   628,   633,   625,   598,   594,   638,   646,  1064,
    1066,  1068,  1070,   651,  1075,   232,   653,  1933,   251,   656,
     658,   662,   667,   675,   269,  1498,   690,   292,   733,  1514,
     735,   743,  1132,  1532,  1127,  1994,  1544,  1542,  1996,  1128,
    1534,  1536,   749,   752,   747,   294,   302,   304,   790,  1209,
    1601,  1198,  1696,  2146,  1212,  1216,  1207,  1059,  1471,  1475,
    1483,  1485,  2130,   310,  1225,  1228,  1236,  2457,  2458,  2459,
    2131,  2846,  2847,  1258,  1264,  1267,  2929,  2930,  2926,  2927,
    2977,  2460,  2461,   285,   318,   326,   334,   814,   809,   339,
     344,   346,   824,   831,  1293,  1298,   886,   873,   352,   320,
     261,   257,   356,   838,   362,   847,   862,   863,  1335,  1330,
    1761,  1320,  1783,  1755,  1795,  1791,  1751,  1777,  1773,  1747,
    1769,  1765,  1324,   867,   849,   368,   369,   384,  1348,   387,
     393,   904,   907,   901,   395,   398,   912
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2781
static const yytype_int16 yypact[] =
{
    5344,   100,   604,    67, -2781, -2781,  1190,  -174,  1118,   570,
      26,   287,  3359,   164,   341,   419,  1264,    82,  5535,    91,
    1448, -2781,    48,   -35,    -4,  1100,   183,   364,  1033,   -52,
     109,   199,     4,   887,   -83,   174,   363,  3754,   131,   -32,
     256,   185,     4, -2781,   146,    16,  1034, -2781,   513,   426,
    1148, -2781,   444, -2781,    86,  3539,   299,   137,   586,   129,
    1234,   322,   623,   626,   139,   628,     5,   162, -2781, -2781,
   -2781,   952,   973, -2781,   303,    14,   341,   -25,   722,   565,
   -2781,   650,   973, -2781, -2781,   973,   973,   602,   653,   973,
   -2781, -2781, -2781, -2781,   973, -2781, -2781, -2781, -2781, -2781,
   -2781,   243,   638,   683,   691,   150, -2781,   973,  1407,   973,
     973,  1127,   973, -2781, -2781, -2781,   497, -2781, -2781, -2781,
   -2781,  4816, -2781, -2781, -2781, -2781, -2781, -2781,   973, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781,  1355, -2781,   973, -2781,   720, -2781, -2781,   341,   341,
     341,   341,   341,   341,   341,   341,   341,   341, -2781, -2781,
   -2781, -2781, -2781,   603, -2781,   674,  1446,   607,    22,   433,
     567,   404,  4107,   523,  4869,  4724,   735,  4816,  4066, -2781,
    1300,  -112,   725,   801,   689,   182,   190,   600,  1058,   806,
     514,     4,  1008, -2781,   530,   757, -2781,   572,   539,   220,
   -2781,    36, -2781,   589, -2781,    54,   767,    32, -2781, -2781,
    5015, -2781, -2781, -2781,   803,   809,   882, -2781, -2781, -2781,
   -2781,    58, -2781, -2781, -2781, -2781,   591, -2781, -2781,  5015,
    4503, -2781,   918, -2781,    38,  5015,   945, -2781,    89,  5015,
     965, -2781,   516, -2781,   970,  1005,   133, -2781,   973, -2781,
    1017,  1449,  2503, -2781,  1007, -2781, -2781, -2781, -2781,  1021,
   -2781, -2781,   973, -2781,   341, -2781,   510,  1042,   959,   662,
    1051,    60, -2781, -2781, -2781,  1057,  1061,   341,   341,   973,
     973, -2781, -2781,  1064, -2781, -2781, -2781, -2781, -2781, -2781,
    1178,  2503, -2781,  1072,     6,   973,  5015,   973, -2781,  5015,
   -2781,  1074, -2781, -2781, -2781, -2781, -2781,   973,  1098,   341,
    2186,   973,  1355,   973, -2781,  1082, -2781,  5536, -2781, -2781,
     930,  1085,  1095,   973, -2781,  1099, -2781, -2781,   -73,  1124,
    5015,  1101, -2781,  1320,   973,  1022, -2781,   972,  1004,  1736,
     546,  1131, -2781, -2781, -2781, -2781, -2781, -2781, -2781,  1150,
   -2781,    59,   178,   290,   330,   899,   973,  1157,   973,   160,
   -2781,   973,   869,  1172, -2781,   973,   973, -2781,    17,    25,
      46,  1174,  1355, -2781, -2781, -2781,  1110,   973, -2781, -2781,
   -2781, -2781, -2781,   973, -2781,  1184,  1196, -2781,   973,  1279,
   -2781, -2781, -2781, -2781, -2781, -2781,   973, -2781, -2781,   973,
   -2781, -2781,   503,   503, -2781,  1204, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781,   997,   973,   973,
    1217,  1222,  1224, -2781, -2781,   973,   973,   973,   973,   973,
     973,  1237,   973, -2781,  1242,   973, -2781,  1244, -2781, -2781,
   -2781, -2781,  1036, -2781,  1245, -2781,  5015,  1282, -2781,   973,
   -2781, -2781, -2781,   973,  1261,  1285,  1285,  5015,   973,   973,
     973,   973,   973,   973, -2781,   973,  4816,  1407,   973,   973,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781,  1407,   973, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
    1295, -2781,  1011,    66, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781,   -87, -2781, -2781, -2781,  1140, -2781,   820,
       7,     7, -2781, -2781, -2781,  1309, -2781,  1331, -2781, -2781,
    -120, -2781,  1143, -2781, -2781, -2781,  1165, -2781, -2781,  1355,
   -2781,   973,   973, -2781,  5015,  5015,  1355, -2781, -2781,  1355,
   -2781, -2781, -2781, -2781,  1355, -2781, -2781,  5015,  1355,   973,
   -2781, -2781,  5015, -2781,  1343,   260,  1147,     3, -2781, -2781,
    1156,  5015,    31, -2781, -2781, -2781, -2781, -2781, -2781,  1356,
    1372, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,  1378,
   -2781,  1167, -2781,   -47, -2781,   973, -2781, -2781,  1389,  1389,
   -2781, -2781,  1389,  1389, -2781,   861, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,    54,
   -2781, -2781, -2781, -2781, -2781, -2781,  1188,  1193, -2781, -2781,
    1335,  1340,  1347, -2781, -2781,  1170, -2781,   973,  1416,  1177,
    5536, -2781,  1355, -2781, -2781,  1418, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
    5015,  5015,  5015,  5015, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781,  1425, -2781, -2781, -2781, -2781,  1428,  1434,   341,
   -2781, -2781,  1440,  1442,  1231,   973, -2781,  2503, -2781,  1451,
   -2781, -2781, -2781, -2781, -2781,   973, -2781,   341, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,   412,
    1361,  1363,  1364, -2781,  1459, -2781,   562,  1383,    69,    71,
    3297,   117,  1463, -2781,  1474, -2781,  1480, -2781,   261, -2781,
    1481,  1484, -2781,  1491, -2781, -2781, -2781,   973, -2781,  5536,
    4682,  1561,   583,  1493,   525,  1396, -2781, -2781, -2781,    80,
      88,  1498,  1501,    37,   973,   481,   761,   175,  5015,   341,
    2084,   521,   184,     0,   205,    19, -2781,  1487,  1494,  1505,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
     973, -2781, -2781, -2781, -2781,   973,   973,   973,   973, -2781,
   -2781,   973,  1355,   973, -2781,   973,  1407,   973,  1509,  1355,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,  1510,   504,
     517, -2781, -2781, -2781,  1520, -2781, -2781, -2781, -2781,  1424,
   -2781,  1522,  1524,  1444,  1450,  1452,  1528, -2781,  1525, -2781,
    1538,  1454,  1540,   438,   461,   575,   543,   578,   536,   619,
    1545,   620, -2781, -2781,  1546,  1552,  1558, -2781, -2781,  1560,
   -2781, -2781, -2781, -2781,  1563, -2781, -2781,  1565, -2781, -2781,
    1568, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
     973,   973, -2781,   973,  1047,   973,   973, -2781,  5536,  1500,
    1562, -2781,  1105,  1571, -2781,  1138,  1577, -2781, -2781,   430,
     973,   973, -2781,  1573, -2781, -2781,  1580,  1402,   973,  1576,
     596, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781,  1585,  1588,   973,   973,   973,
     973,   973,  1589,   973,  1593,   973,  1590,   341,  1611,  1613,
    1355,  5015, -2781, -2781, -2781, -2781, -2781,  1355, -2781, -2781,
     973,   973,   973,  5015,   973,  1407,   973, -2781,   973, -2781,
   -2781, -2781, -2781, -2781,  1624,  1626, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,   523,
   -2781,   973, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
    5015,   973,  1355,  1355,   430,   430,   430,  1355,  1407,   973,
    1355, -2781, -2781, -2781,   973, -2781,   -47,  1453,  1627,  1630,
   -2781, -2781,  1355, -2781,  1466,  1469, -2781,  1637,  1638, -2781,
    1641,  1195,  1605,  1618, -2781,   973, -2781, -2781, -2781, -2781,
   -2781,   770,   860,   621, -2781, -2781, -2781,   973,    81,  1249,
   -2781,  1370, -2781,  2084,  1373,   579,  1342,   116, -2781, -2781,
     973, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781,   973,  1653, -2781, -2781, -2781, -2781,   430, -2781, -2781,
   -2781, -2781, -2781,  1655,  1657,  4943, -2781, -2781,  1658,  1661,
     973, -2781, -2781, -2781, -2781,  1662,  1663,  1668,   482,   482,
     -60,  1659,  1673,  1674,  1675,  1675,  1675,  1401,  1404,  1688,
    1694,  1697,    84,    84,   -60,  1699,  1702,   -60,  1706,  1707,
    1708,  1711,  1708,  1711,  4971,  1714,  1720, -2781, -2781,  1708,
    1711,   605, -2781,  1703,  1722,  1724,  1727,   482,   -60,  1729,
    1730, -2781,  1731, -2781, -2781,  1355,  1073,  1645,  1472,  1475,
    1482,  1631,   863,  1483,  1742,   282,  1599,  1639,   170,   666,
    1710,  1492,  1495,  1642,  1750,  1527,   173,    45,  -102,  1496,
    5015,  2084,  1721,   864,  1497,  1529,  1754,   105, -2781, -2781,
     425,  1758,  1761, -2781, -2781, -2781,  1762,  1536,    63,  2084,
    1537, -2781, -2781, -2781,   341,  1768,  1769,   973, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781,     9, -2781,  2884,
   -2781, -2781, -2781,   973, -2781,   973, -2781, -2781, -2781, -2781,
     973,   973,   973,   525,  5015, -2781,  1772,  1219, -2781, -2781,
     973, -2781, -2781,   973,  5015,   973, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781,   341,   973, -2781,   973,   525,  1774,  1777, -2781, -2781,
   -2781, -2781,   973,   973, -2781,   341, -2781, -2781, -2781,   152,
    1778,  1781, -2781, -2781, -2781, -2781, -2781,   973,   973, -2781,
   -2781,  1407,   973,   973, -2781, -2781, -2781, -2781,  1770,   973,
   -2781,   973,  1670, -2781,   973, -2781,   973,  1676, -2781,  1786,
   -2781,  1161,  1161,   701,   713,   714,  1161,  1787, -2781,   749,
   -2781,   776,   790,   798,   819, -2781,  1789,  1790,   859,  1792,
   -2781,  1794,  1795,  1793, -2781,   905,   911,  1796,  1800,  1802,
   -2781, -2781,  1803,  1804,  1806, -2781,  1161,  1161,  1161,   973,
   -2781, -2781, -2781,   973, -2781,   973,   149,  5015, -2781,   973,
   -2781,  1355, -2781,  5536, -2781, -2781,  1809, -2781, -2781,  1816,
   -2781, -2781, -2781, -2781,  1780,  2186, -2781,   973,  1812,   973,
     973,   973,  1298, -2781,  1807,   973,   973,  1822,   973,   973,
    1824,   973,  1826,   973,   -13,  1829,   341,   341, -2781,  1355,
     973,  1831,  1832,  1833,  1355,  5015, -2781,   973, -2781, -2781,
   -2781,   973,   973,   973,  1355,  5015,   430, -2781, -2781, -2781,
   -2781,  1407,   973,  1834,   430,   973,   641, -2781,  1836, -2781,
   -2781,  1139,  4193,   973, -2781,   973,  1835,  1843,   973, -2781,
   -2781, -2781,  1842,  1084,  4816,  1587,  1596,  1600,    39,  5015,
    1603, -2781,   332,  1701,    53,  1604,  1609,    57, -2781, -2781,
      61,  1678,   325,   -90,  2084,   879, -2781,  1857,  1595, -2781,
     697, -2781, -2781, -2781, -2781,  2084,  1643, -2781, -2781, -2781,
   -2781, -2781,   973, -2781,   973, -2781, -2781,   973,   973, -2781,
     973, -2781,   973, -2781, -2781, -2781, -2781,  1654,   973, -2781,
     973,   127, -2781, -2781, -2781, -2781,  1873,  1883, -2781,   973,
     482,   482,   482, -2781, -2781, -2781, -2781, -2781, -2781,  1885,
     482,   482,   482,   886, -2781, -2781, -2781, -2781,    84,   482,
     482,   482, -2781, -2781,   482,   482,  1887,   482,   482,  1888,
      84,  1301, -2781,   773, -2781,  1726, -2781, -2781, -2781,  1889,
    1890,  1891, -2781,  1003, -2781,  1142, -2781, -2781,  1602,  1892,
    1893,  1895,    84,    84,   -60,  1901,  1902,   -60,  1903,  1905,
    1906,   482,   482, -2781,  1907,   482,   482, -2781,  1909, -2781,
   -2781, -2781, -2781, -2781, -2781,   341, -2781, -2781, -2781,  4816,
    1457,   973,  1477,  1601,   924, -2781, -2781, -2781,  1049, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781,  1910,   973, -2781,   341,  1911,   973,  5015,   341,  1607,
    1650,  1656,   108,   124,  1664,   172,  1555,  1581,  1916,  1917,
    1920,   863,  1921,  1927,  1928,  1597,  1608,  1253,  1934,   973,
    1514,  1617, -2781, -2781,   341,  5015, -2781, -2781,  5015,   973,
      11,  1935,   973,  1355,   341, -2781,  1937,  5015,  5015,   973,
   -2781, -2781, -2781,   341,   341,  5015, -2781, -2781, -2781, -2781,
   -2781, -2781,  5015,   973,   341, -2781, -2781, -2781,   973, -2781,
   -2781,  1938,   973,  1704,   167,   973,  1705,   973,   259,   973,
   -2781,   973,  1709,  1713,   973,   973,   973,   973,   973,   973,
     973,   973,    35,   973,   973,  1715, -2781,   973,   973,   973,
     973, -2781,  5015,  1355,  1940,  1943,  1946,   973,   973,  1355,
   -2781,   973,   973,   973,  5015,   525, -2781,   973,   973, -2781,
   -2781, -2781,  1949, -2781, -2781, -2781, -2781, -2781, -2781,  1947,
     973,   973, -2781,   973,   973, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781,  1951,  1953,  1955, -2781,  1957,  1959,
    1961, -2781,  1963,  1965,  1962, -2781, -2781,  1161,  1966,  1967,
    1970, -2781,  1972,  1973,  1975, -2781,  1976,  1977,  1979, -2781,
    1982,  1983,  1985, -2781,  1986,  1988,  1990, -2781,  1993,  1994,
    1995,  1996,  2000, -2781,  2001, -2781, -2781, -2781,  2002,  2003,
    2009, -2781,  2011,  2012,  2010, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781,   973,   973,   973, -2781, -2781,
     973, -2781,  1355, -2781, -2781,  2186,   973,  1355,   973,   973,
     973, -2781,   973,   973,  2015,   973, -2781,   973,   973,  2019,
     973,   973,  2020,   973,  2025,   973, -2781, -2781,  2027,  5015,
   -2781, -2781, -2781,   973, -2781, -2781, -2781, -2781,  1355, -2781,
     876,   973,   876,   430,  1355,  5015,   973,   973,  2029, -2781,
   -2781, -2781,   973, -2781, -2781, -2781, -2781, -2781,  5015, -2781,
    5015,   973, -2781, -2781,   -47,  2030,  2034,  2037,  2040,  2041,
    5015,  1355, -2781,  5015,  5015,  5015,  4816,  5015,  1355,  5015,
   -2781, -2781,  5015, -2781, -2781,  4816,  5015,  5015,  5015,  4816,
    5015, -2781,  5015,  5015,   973, -2781, -2781,  5015,  5015,  5015,
   -2781, -2781,  5015,  5015, -2781, -2781, -2781, -2781,  5015,  5015,
   -2781, -2781, -2781, -2781, -2781,   973,   973, -2781, -2781,  2044,
     973, -2781, -2781,  2045, -2781, -2781,   973, -2781, -2781, -2781,
     482, -2781, -2781, -2781,  2046,  2047,  2048, -2781, -2781,   -60,
    2050,  2051,  2053,   482, -2781, -2781, -2781, -2781, -2781,    84,
   -2781, -2781,  2052,   482,  2054,  2065,  2068,    84,    84,   -60,
    2081,  2083,  2085,  1683,  2086,  2087,  2089,    84,    84,   -60,
    2091,  2092,   -60,  2094,  2095,  2096,  2099,    84,    84,   -60,
    2093,  2101,  2104,  1866, -2781,  1868, -2781,  1872,  1693,  2105,
    2106,  2107,    84,    84,   -60,  2102,  2109,   -60,  2110,  1752,
    2111,  2122,  2123,    84,    84,   -60,  2137,  2139,   -60,  2142,
      84, -2781, -2781, -2781, -2781, -2781,  2144, -2781, -2781,  2145,
      84,  2146,  2147, -2781, -2781,   482, -2781, -2781,  2148, -2781,
    1355, -2781,  5015,   973,   973,  5015,   973,  2151,  1645, -2781,
   -2781, -2781, -2781, -2781, -2781,  2155,  5015,   341,  2157,  5015,
    1355, -2781,  2158,  1645,   973,   973,   973,   973,   973,   973,
     973,   973,   973,  2160,  2161, -2781, -2781, -2781,  2165, -2781,
   -2781, -2781,  2167,  2170, -2781, -2781, -2781,   973,  5015,   973,
    2171,  1645,   341,  1355,  1355, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781,   973,  1407, -2781, -2781,  1355,
    1355,   973, -2781, -2781,  1355,  1355, -2781, -2781, -2781, -2781,
     973,   973,   973,   973,   973,   973,   973,   973,   973,   973,
    3047, -2781,   973,   973,   973,   973,   973,   973,   973,   973,
     973,   973,   973,  2950,  2172,   973, -2781,   973,   973,   973,
    2174,  2176, -2781, -2781,  1355,   430, -2781,  2177,  2178, -2781,
   -2781,  1407,   973, -2781,  2180,  1355,  5015, -2781, -2781, -2781,
    2181, -2781, -2781, -2781, -2781,  1161,  1161,  1161,  1161,  1161,
    1161,  1161,  1161,  1161, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781,  1645,   973, -2781,   973, -2781,   973,  1355,   973,
   -2781,  1407,   973, -2781,   973, -2781,  2013,  2183,  2187,   973,
     973, -2781,   973,   973,  2188,   973,  2182,   973,  2190,  1355,
    5015, -2781, -2781,   973, -2781,   973, -2781,   430,  1139,   973,
    2196, -2781,   973, -2781, -2781,  4816, -2781,  2198,  2200,  2202,
    2203,  2204,  1355, -2781,  1139,  1139,  1139,  1355, -2781,  1139,
     430,  1139,  1139,  1355, -2781,  1139,  1139,  1139,  1355, -2781,
    1139,  1139,  1355,  5015,  1139,  1355,  1139,  1139,  1355,  1139,
    1355, -2781, -2781,  2207,  4816,  2210,   973, -2781, -2781, -2781,
   -2781,  2213, -2781, -2781, -2781, -2781,   482,    84, -2781, -2781,
   -2781, -2781, -2781, -2781,  2218, -2781, -2781,    84,    84, -2781,
   -2781, -2781, -2781, -2781,  2219, -2781, -2781,  2220,    84, -2781,
   -2781, -2781, -2781, -2781,  2221, -2781, -2781,    84,  2223,  2226,
    2228,    84,    84,   -60,  2231,  2232,  2233,  2234,  2236,  2239,
      84,    84,   -60,  2243,  2244,  2245,  2246,  2247,  2248,    84,
      84,   -60,  2255,  2256,  2258,    84,   482,   482,   482,   482,
     482,  2260,   482,   482,  2261,    84,    84,   482,   482,   482,
     482,   482,  2262,   482,   482,  2263,    84, -2781,    84,  2264,
   -2781,  2265,  2266, -2781,  5536, -2781,  1139,  2267,  5015,  1139,
     973,  5015,  2268, -2781,  1139, -2781, -2781,  1139, -2781,  5015,
    2270,   973,   973,   973,   973,   973,   973,   973,   973,   973,
     973,   973, -2781, -2781, -2781,  5015,  1139,   973,  5015,  2271,
   -2781,  1407,  1407,  5015,  1407,  1407,  5015,  5015,  1407,  1407,
     973,   973,   973,   973,   973,   973,  1645,   973,   973,   973,
    1732,  1799,  1855,  1894,  1896,  1897,  1898,  3047, -2781,  1899,
   -2781, -2781,  1645,   973,   973,   973,   973,  1645,   973,   973,
     973,   973,   973,   973,  1355,   973,  1755,  1645,   973,   973,
   -2781, -2781,   430,   341,  5015,  5015, -2781, -2781, -2781,   430,
    1355,  2273, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781,   973, -2781, -2781,  1407,   973, -2781, -2781, -2781,
    1388,  2277,  2278,  2280,  2281,   973,   973,  2282,   973, -2781,
    2283,   876, -2781,  1139, -2781, -2781, -2781, -2781,  2284, -2781,
   -2781,  1355,  2286,  2287,  2290,  2291,  5015,  2292, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781,   430,  1139, -2781,   430, -2781, -2781,
     430, -2781,   430,  2293,  1355,  2295, -2781,   973, -2781, -2781,
     482,    84, -2781, -2781,    84,  2296, -2781,    84, -2781,   482,
     482,   482,   482,   482,  2298,   482,   482,    84,   482,   482,
     482,   482,   482,  2299,   482,   482,    84,   482,   482,   482,
     482,   482,  2301,   482,   482,    84,   482, -2781, -2781, -2781,
   -2781, -2781,    84, -2781, -2781,  2302,   482,   482, -2781, -2781,
   -2781, -2781, -2781,    84, -2781, -2781,  2303,   482, -2781,    84,
   -2781, -2781,  1355, -2781,  5015,  1139, -2781,  2304,  1355,   973,
   -2781, -2781,  1355,   973, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781,   973,   973,  1139, -2781,  2306,  1355,   973,
    1407, -2781,  1139,   973,  1407,  1139,  1139,  5015, -2781,   973,
    2307,  2307,   973,   973,  2307,  1645,  2307, -2781,  5015,   863,
    2308,  2310,  2311,  2312,  2313,  2315, -2781,   341,  1645,  2307,
    2307,   973,   973,  1645,   973,   973,   973,   973,   973, -2781,
    1407,   973,  2316, -2781, -2781,   973,  2307,   341,    23,  1355,
    1355,   341,   430,  2318, -2781, -2781, -2781,  2319,   973, -2781,
    2322,  2325,  2326,  2327,  2328, -2781,  2329,  2330,   973, -2781,
   -2781,  2331,    -9,  5015, -2781,  2332,    13,  5015, -2781, -2781,
   -2781, -2781, -2781, -2781,  2334,    -9,   973, -2781, -2781, -2781,
      84, -2781, -2781, -2781, -2781, -2781, -2781,    84, -2781, -2781,
     482, -2781, -2781, -2781, -2781, -2781,    84, -2781, -2781,   482,
   -2781, -2781, -2781, -2781, -2781,    84, -2781, -2781,   482, -2781,
     482,    84, -2781, -2781,   482,    84, -2781, -2781,   973,  1139,
   -2781,  5015,  5015,   973,  5015,   973, -2781, -2781, -2781,  5015,
    5015,   973, -2781, -2781,  5015, -2781, -2781, -2781,  1139,  2335,
   -2781, -2781, -2781,  1645,   973, -2781,  2337, -2781, -2781,  1355,
    2338, -2781,  2340, -2781, -2781, -2781, -2781, -2781,  2342, -2781,
   -2781,  1645,   973,  2343, -2781, -2781,   973,  5015, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781,    23,  1776,  2084, -2781, -2781,
   -2781,   341,  2344,  2347,  2348, -2781, -2781, -2781,  2350,  2351,
    2356, -2781,    42,    -9, -2781, -2781, -2781, -2781,  2357,  5015,
   -2781, -2781, -2781, -2781, -2781,    -9, -2781,  2358, -2781,   482,
   -2781,   482, -2781,   482, -2781, -2781,   482, -2781,   482,  5536,
   -2781,  1139,  1139,   973,  1139,  2359,  1139,  1139,   973,  1139,
     973, -2781, -2781, -2781, -2781,  2360, -2781,   973, -2781, -2781,
    2361, -2781,   973, -2781, -2781, -2781,  2366,   973, -2781, -2781,
   -2781,  1355, -2781, -2781, -2781,  1776, -2781,  1840,  1913,  2084,
   -2781, -2781, -2781,  2367,  2369, -2781, -2781, -2781, -2781, -2781,
   -2781,   854,   854, -2781, -2781,  1355, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781,  1139, -2781, -2781,  2371, -2781,  4816, -2781,
   -2781,  2372, -2781,  1645, -2781, -2781,  1645,   973, -2781, -2781,
     973, -2781,  1645,   973, -2781,  5015, -2781,  1840, -2781,   341,
   -2781,  2373,  2374,   973,   973,   973,   973,    13,  2375,  4816,
    1355, -2781,  4816, -2781, -2781,   973,  2377, -2781,   973,  1139,
   -2781, -2781, -2781,  2380,  2382,   973,  2383,   973, -2781, -2781,
    1355, -2781, -2781,  1355, -2781, -2781,  2378, -2781, -2781,  2386,
    2387, -2781, -2781,  2388, -2781,  2390, -2781, -2781,  1645, -2781,
    1645, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2781, -2781,    -3, -2781,   365, -1013, -2202, -1119,  1717, -2781,
     835,  -177,  1526,   -54,    18, -2781,  -296, -1846,  1865,  2116,
    -974,   612, -1036,     8,  1252, -2781, -1135, -2781,  -812, -1186,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781,  -542,  -522, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2624, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781,   827, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,   250,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
    -481,  -430, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -1619, -2781, -2781, -2781, -2781, -2781,  -764, -2781, -2781, -2781,
   -2781, -2781, -2781,    76, -2781, -2781, -2781, -2781,  -134,  -775,
    -960,  -503, -2781, -2781, -2781, -2781, -2781,  -564,  -554, -2781,
   -2781, -2780, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781,  1543, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781, -2781,
   -2781, -2781, -2781, -2781, -2781, -2781, -2781
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1360
static const yytype_int16 yytable[] =
{
      72,   392,  2078,  1416,  2243,  1251,  2245,  1017,   112,   988,
     793,  1224,  1227,   181,  1670,   791,  1259,    69,    70,    69,
      70,   898,  2864, -1141,  1268,    69,    70,   254,  1579,   902,
    1408,  1409,  1410,  1836,   331,  1023,   412,  2096,    69,    70,
    2143,   340,   355,   677,  2870,    69,    70,   649,    69,    70,
     905,   386,   114,  1219,   397,   333,   634,   403,   258,  1886,
    2097,   409,   305,  2098,   416,   750,    69,    70,   419,   421,
      69,    70,   431,  1895,  2099,   438,   442,  1899,  1526,   445,
    1636,  1529,   446,   447,    69,    70,   455,  1901,   829,    69,
      70,   456,   870,   993,   683,  1907,  1210,  1032,  1660,  2100,
    1522,   659,  1564,  1491,   469,   473,   478,   479,   483,   485,
    1652,   117,   101,   114,   295,   252,  1743,  2101,   348,  1507,
    1756,  2876,  1269,   585,   434,   489,   977,  1213,  2066,   102,
    1270,  1260,  1486,   114,   400,   114,   335,   693,    81,   488,
      69,    70,    69,    70,  2068,   306,  1931,  2978,   660, -1359,
    1802,  1803,  1804,  1808,   341,   466,   985,  1720,  1908,  1120,
     498,  1122,   994,    69,    70,    69,    70,    59,  1721,   435,
      69,    70,   871,  1024,   974,   119,   296,   230,    69,    70,
     467,   635,   114,  1018,  1261,   530,  1640,   978,  1637,  1255,
     551,  1610,  2071,  1641,   231,  2865,   165,  3000,   270,  1634,
     297,   986,   293,   678,   303,  1214,  1661,  1129,   349,   114,
    1229,   552,   830,   560,  1230,   565,   569,  2871,  1487,   103,
    1611,   427,   586,  1612,  1033,   794,   605,   319,  1909,   523,
     353,  1508,   795,   796,  1262,   524,   119,   342,   183,  2943,
    1121,   321,  1123,   647,   591,   874,  1902,   343,   457,  2938,
     650,  2946,   595,   307,   684,  1613,   119,  1523,   119,   298,
     345,   694,    69,    70,  1013,   695,   899,   104,   308,   797,
     661,  1220,   122,   975,  1135,   255,   347,   525,  1479,   727,
     123,   124,   630,   819,   872,  1837,  1614,   615,  1130,  1615,
      69,    70,  1231,   125,   114,   415,   757,   758,   636,  2866,
     256,  1887,  1215,   105,   526,   119,   259,   422,  1604,  1903,
     967,  1473,   800,   413,   802,  1896,   679,   117,  1232,  1900,
     970,  2872,  1263,  1136,   805,   808,   107,   811,   815,   637,
     817,   260,   119,   122,   114, -1141,   309,   354,   900,   903,
     827,   123,   124,  1671,  1019,   114,   428,   108,   813,  1271,
     837,   839,  1025,   122,   527,   122,   751,   877,  1890,  1221,
     906,   123,   124,   123,   124,  1211,  1638,   685,   271,  2144,
    2067,   680,   127,   887,  2939,   889,   891,  1653,   893,   167,
     179,   798,   896,   897,  1662,  1932,  2069,   253,    71,  1233,
     429,   430,  2102,   911,   913,   301,  1644,   880,   528,   529,
     914,  1091,   122,   338,   109,   917,   919,   385,   890,   272,
     123,   124,   273,   920,  1664,  2122,   921,   119,   528,  2940,
    1616,  1635,   157,   114,   401,  1095,  1096,   158,   159,   122,
     370,   274,  1855,   127,  2072,   931,   932,   123,   124,   299,
    1859,   433,   936,   937,   938,   939,   940,   941,   381,   943,
     275,  1654,   945,   127,  1617,   127,   350,   119,   396,  1702,
     408,   336,   168,  1605,  2048,   169,   952,   276,   119,  1256,
     953,  1137,   337,   277,  1097,   958,   959,   960,   961,   962,
     963,   351,   964,   157,   473,   968,   969,   300,   158,   159,
    2063,  1714,   592,   458,   473,   971,  1234,  1257,   170,   125,
     596,   110,   127,   157,   966,   157,   171,  2127,   158,   159,
     158,   159,  2091,  1891,   122,   729,   423,   593,  2026,  1265,
     688,  2029,   123,   124,   278,   597,    69,    70,  1311,   127,
     631,  1360,   922,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,  1289,  1606,  1200,   119,   279,  1000,  1001,
    1138,  1313,   157,   394,   122,   632,  1294,   158,   159,   608,
    1252,  1139,   123,   124,   363,   122,  1009,  1108,    69,    70,
     424,  2184,   172,   123,   124,  1109,  1110,   425,   382,   157,
     117,   609,    69,    70,   158,   159,   399,  1193,   322,  1200,
     537,  1201,  1607,  1014,  1892,  1140,  1076,    91,   610,   538,
    1371,   923,  1035,   111,   599,  1316,   448,  1372,   864,  1312,
    1548,  2904,  1194,  1905,   127,    60,   364,   405,  1549,  1550,
    1906,  1290,  1098,  1099,  1111,   639,  1325,   365,   406,  2915,
     407,   173,  1314,   411,  1295,  1201,   640,   850,  1253,  1284,
    1321,  1537,  1893,   122,  1071,  1861,   439,  1060,  1546,   728,
    1467,   123,   124,  1503,   127,   444,   280,   454,    61,   174,
     366,   175,   755,   756,   157,   127,   641,  1551,   460,   158,
     159,  1317,   383,  1655,   865,  2728,   730,   731,    62,  1910,
     924,  1327,  1332,   281,   282,  1504,  1126,  1618,   462,   176,
    1920,   600,  1090,  1538,   810,   283,   464,   611,   117,   284,
    1547,  1100,  1093,   852,   157,  1145,  1322,  1326,    63,   158,
     159,   486,  1101,  1102,  1318,   157,  1619,  1361,  1291,  1620,
     158,   159,  1621,  1917,   499,    69,    70,   510,   601,   689,
      64,  1296,    92,   521,    65,  1254,   323,   875,   878,   881,
    1202,   511,   324,   127,   325,   533,  1103,  1328,  1333,    66,
     642,  1622,   663,   535,  1144,   440,  1203,  1204,  1195,   744,
     177,    93,   125,  1744,  2994,    94,  1223,   562,   449,   450,
    2997,  1222,  1112,  1113,  1235,  1748,  1752,   925,  1973,   745,
     732,   590,  1623,   926,  1202,  1624,  1974,  1975,  1396,  1433,
    1434,  1435,   588,   157,  1292,   643,  1468,  1275,   158,   159,
    1203,  1204,  1276,  1277,  1278,  1279,   589,  1297,  1280,  1481,
    1282,  1758,  1283,   473,  1285,  1552,  1553,   451,  1196,  1436,
    1437,   607,    95,  1438,   626,  1200,  3034,   627,  3035,  1745,
    1439,  1412,   664,  1440,   612,  1976,   367,  1441,  1762,   441,
     624,  1749,  1753,  1319,  1351,  1197,   866,  1442,  1443,   613,
     629,  1114,  1766,  1205,  1206,  1444,  1469,    69,    70,   648,
    1770,  2256,  1115,  1116,    96,  1041,  1042,  1117,   644,   746,
     654,  1201,   452,    97,    98,   860,   665,  1759,  1323,  2246,
     125,  1774,  1918,  1470,   655,  1445,  1446,  1343,  1344,  1447,
    1345,  1347,  1349,  1350,  1554,  1226,  1118,  1205,  1206,  1944,
    1945,   981,  1584,    91,  1763,  1555,  1556,  1363,  1364,  1448,
    1557,   883,   657,  2301,  1368,  1369,  1625,   666,  1767,  1329,
    1334,  1780,  1043,   676,   645,    67,  1771,  1462,  1044,  2402,
    1585,  1449,   311,  2314,  1375,  1376,  1377,  1378,  1379,  1558,
    1381,   437,  1383,  2324,  2410,  1919,  2327,  1775,  1946,   682,
    1626,  2166,   312,  2334,   313,    69,    70,  1391,  1392,  1393,
    1450,  1395,   473,  1397,   736,  1398,  1586,  1788,  2371,   687,
    1451,  2374,  2429,  1792,  1587,   691,    69,    70,  1627,  2382,
    1588,  1045,  2385,  1977,  1978,   820,  1401,  1781,  1403,  2492,
    2493,  2494,  2495,  2496,  2497,  2498,  2499,  2500,  1405,  1463,
    1046,  1746,  1589,   985,  1646,   473,  1413,  1402,  1998,   692,
     982,  1415,   725,  1750,  1754,  1047,  1999,  2000,  1452,  1911,
    1202,   696,  1048,   821,  1590,   726,  1453,  1454,  1428,  1464,
    1049,   884,  1432,  1789,   841,  2049,  1203,  1204,    92,  1793,
     947,   948,  1591,  1455,  1472,  1474,  1477,   734,   986,  1760,
      69,  1346,  1482,   616,  1086,  1456,   748,  1488,   286,   357,
    2820,   753,  1979,   603,  1912,  2001,   754,    93,  1489,   759,
    1541,  2242,  1094,  1980,  1981,   617,  1764,   792,  1982,   804,
    1592,   822,  1457,   737,  1458,   418,   818,  1499,   314,   825,
    1768,  1050,   618,  2501,   983,  1459,  1947,  1948,  1772,   826,
     842,    69,    70,   828,  1726,   834,  1460,  1983,   885,  1354,
    1355,  1051,  1647,    69,    70,   117,  1052,  1465,  1053,  1776,
    1593,  1525,    82,   840,   604,   738,   739,  1913,    95,   832,
      69,    70,   848,  1205,  1206,  1594,   868,   806,   843,   844,
    1461,  2050,  1357,  1358,  1238,  1054,  1055,  2009,  1595,  1266,
     315,   287,   358,  1056,   869,  2010,  2011,    83,  1569,  1782,
    2052,   888,  1864,  1865,  1639,   894,   480,   288,   359,  1875,
      96,   740,  1466,  1057,  1648,  1949,   895,  1596,   908,    97,
      98,  2483,   760,   761,   371,  1663,  1950,  1951,   915,  1914,
    1597,   262,  1598,  1599,  1669,   372,  2051,   316,    69,  1427,
     823,   916,  1737,  1738,  2012,  1790,   289,   317,   929,   619,
    1697,  1794,  1698,  2002,  2003,   807,   930,  1699,  1700,  1701,
    1952,   933,   263,  1705,  1706,   373,   934,  1707,   935,   741,
    1708,  1058,  1710,  1600,  1856,    84,  1570,    69,    70,   762,
    1866,   942,   845,   910,   481,   763,   944,  1876,   946,  1712,
     949,  1713,    69,    70,   764,   742,   765,  2084,  2085,  1717,
    1718,   766,   290,   360,   767,  1476,  2053,    69,    70,   470,
     768,   620,   846,  2526,  1724,  1725,   291,   361,   473,  1727,
    1728,   769,    69,    70,    85,    86,  1730,   951,  1731,   770,
     918,  1733,  2004,  1734,   402,   472,  2544,   125,   771,  1812,
     972,    69,    70,  2005,  2006,   264,   973,  2584,  2007,   374,
     955,   956,  1385,   989,  1964,  1965,  2593,   772,   621,  1571,
    1572,  2054,   265,    69,    70,  2602,   980,  2675,   622,   180,
    1877,  1878,    87,    88,  1573,   991,  1805,  2008,   996,   773,
    1806,   482,  1807,  2688,   571,  1879,  1810,  1011,  2693,  1739,
    1740,   998,  2013,  2014,   375,  1515,  1516,   774,  1824,   835,
     572,  1027,  1816,  1966,  1819,  1016,  1821,  1822,  1823,  1825,
     775,   776,  1827,  1828,  1021,  1830,  1831,  1028,  1833,  1574,
    1835,  1741,  1030,  1818,   573,  1031,   266,  1843,    89,   490,
    1880,    69,    70,  1036,  1849,   777,  1061,    74,  1850,  1851,
    1852,  1062,  1063,    75,   574,    69,    70,  1065,   473,  1857,
      69,    70,  1860,  1367,  1067,   470,   471,   472,  1069,   778,
    1870,  1072,  1871,  1078,   575,  1873,  1074,   376,   576,  1083,
     267,  2015,  1084,   779,  1862,   780,  1038,   836,  1085,  1039,
    1040,   268,  2016,  2017,  1087,    76,  1088,  2018,  2717,  1089,
     781,  1104,  1882,  1105,  1106,   782,  1092,   377,   577,   578,
      69,    70,  2042,   783,  1107,   378,   233,   491,  1131,  1922,
     784,  1923,    77,  1119,  1924,  1925,  2019,  1926,  1133,  1927,
      69,    70,  2045,   379,  1134,  1929,  1141,  1930,   234,  1142,
     785,   235,   492,   493,   697,  1143,  1936,   698,  1199,  1208,
     512,   494,  1217,  1272,   786,   787,  1218,   788,  2707,  1274,
    1273,  1967,  1968,  1286,  1288,  2711,   699,    69,    70,  2088,
     513,   579,    78,   495,  1299,  1300,  1953,  1301,   236,  1302,
    1307,   580,  1306,   496,  1303,   237,  2812,   514,  1963,  2815,
    1304,  2817,  1305,  1308,  1309,  1310,   238,   239,   789,  1331,
     515,  1336,   700,   240,  2829,  2830,  2816,  1337,   701,  1666,
    2024,  2025,  1338,   332,  1339,  1352,  1353,    79,  1340,  2828,
    1341,  2844,   516,  1342,  2833,  1356,   517,  2043,  2044,  2046,
    2738,  1359,   241,  2740,  1365,  1366,  2741,  1370,  2742,  1373,
    1969,   518,  1374,  1380,  1384,   581,   582,  2041,  1382,  2056,
     242,  1970,  1971,  2059,    69,    70,  2047,  1576,  1577,   702,
      69,    70,  2062,  1576,  1577,  1386,  1711,  1387,   243,   244,
      69,    70,  2090,  1576,  1577,   245,  2087,  2089,  1182,  1399,
    1719,  1400,  1419,  1418,  1420,  1972,  2095,  1422,   519,  2105,
    1423,  1424,  1430,  1425,  1183,  1426,  2111,   487,    69,    70,
     246,  1576,  1577,  1184,  1478,  1431,  1484,  1480,  1490,  1492,
    2116,  1493,  1496,  1510,  1185,  2118,  1497,  1500,  1501,  2120,
     583,  2123,  2124,  1502,  2126,  2128,  2129,  1511,  2132,  1512,
    1513,  2135,  2136,  2137,  2138,  2139,  2140,  2141,  2142,  2145,
    2147,  2148,   247,  1519,  2150,  2151,  2152,  2153,  1517,  1520,
    1186,  1518,  1521,  1527,  2159,  2160,  1528,  1559,  2162,  2163,
    2164,  1530,  1531,  1533,  2167,  2168,  1535,  2818,   549,  1543,
     556,   559,  1187,   564,   568,  1545,  1560,  2171,  2172,  1561,
    2173,  2174,  1562,  1565,  1580,  1566,  1567,  1581,  2851,  1984,
    1985,   703,  1583,  2842,  1582,  1602,   248,  1603,  1608,  1628,
    1609,  1840,  1841,  1631,  1629,  1632,   652,  1630,   249,  1651,
    1645,  1633,  1656,  1650,  1642,  1649,  1657,  1658,   704,   705,
    1659,  1665,  1667,  1668,  1729,   668,   674,  1704,  1188,  1715,
     706,   681,  1716,  1722,   707,   686,  1723,  1732,  1986,   250,
    1736,  1815,  1757,  1735,  1778,  1779,  1784,  1787,   850,  1785,
    1786,  1796,  2212,  2213,  2214,  1797,  1798,  2215,  1799,  1800,
    1801,  1826,  2217,  2220,  1813,  2222,  2223,  2224,  1189,  2225,
    2226,  1814,  2228,  1820,  2229,  2230,  1829,  2232,  2233,  1832,
    2235,  1834,  2237,  2219,  1839,  1844,  1845,  1846,  1858,  1872,
    2240,  1863,   801,  -482,  2993,   803,  1190,  1874,  2244,  1883,
    1894,  2902,  2903,  2249,  2250,  2906,   812,  2908,  1884,  2252,
     851,  1915,  1885,  1904,   852,  1889,  1897,  1916,  2255,  2913,
    2914,  1898,  1928,  1921,  2918,  2919,   833,  1934,  2922,  2338,
    2339,  2347,  2348,  2923,  2924,  2356,  2357,  1935,  1191,  1940,
    1192,  1959,  1962,  2073,  1993,  1995,  1997,  2021,  2022,  2020,
    2023,  2283,   853,   854,  2268,  2027,  2028,   855,  2030,  2031,
    2032,  2035,  2064,  2274,  2038,  2055,  2058,  2279,  2065,  2074,
    2075,  2076,  2291,  2292,  2077,  2079,  2070,  2294,  2340,  2434,
    2349,  2080,  2081,  2296,  2358,  2082,  1987,  1988,  2086,  2104,
    2039,  2964,  2108,  2119,  2965,  2156,  2083,  2157,   856,  2968,
    2158,  2170,  2121,  2125,  2169,  2971,  2175,  2133,  2176,  2177,
    2974,  2134,  2178,  2149,  2179,  2180,  2183,  2306,  2181,  2057,
    2182,  2185,  2186,  2061,  2187,  2312,  2313,  2188,  2189,  2190,
    2318,  2191,  2192,  2193,  2486,  2322,  2323,  2194,  2195,  2196,
    2365,  2197,   950,  2198,  2199,  2332,  2333,  2200,  2201,  2092,
    2202,  2203,   857,   957,  2204,  2205,   858,  2206,  2207,  2107,
    2369,  2370,   965,  2208,  2211,  1989,  2209,  2210,  2112,  2113,
    2227,  2380,  2381,  2231,  2510,  2234,  1990,  1991,  2387,  2117,
    2236,  2238,   859,  2251,  3015,  2257,   860,  3018,  2390,  2258,
    2397,  2398,  2259,  2400,  2507,  2260,  2261,   861,  2293,  2376,
    2295,  2298,  2299,  2300,  2302,  2303,  2307,  3029,  2304,  2309,
    1992,  2411,  2412,  2413,  2414,  2415,  2416,  2417,  2418,  2419,
    2310,  3036,  2928,  2311,  3037,  3038,  2341,  2342,  2350,  2351,
    1002,  1003,  2359,  2360,  2425,  2315,  2427,  2316, -1159,  2702,
    2317,  2319,  2320,  1007,  2321,  2325,  2326,  2335,  1010,  2328,
    2329,  2330,  2433,   473,  2331,  2336,  2372,  1022,  2437,  2337,
    2366,  2367,  2368,  2373,  2679,  2375,  2377,  2440,  2441,  2442,
    2443,  2444,  2445,  2446,  2447,  2448,  2449,  2378,  2379,  2462,
    2463,  2464,  2465,  2466,  2467,  2468,  2469,  2470,  2471,  2472,
    2473,  2383,  2476,  2384,  2477,  2478,  2479,  2386,  2388,  2389,
    2391,  2392,  2454,  2394,  2928,  2343,  2401,  2352,   473,  2487,
    2403,  2361,  2406,  2409,  2420,  2421,  2344,  2345,  2353,  2354,
    2422,  2423,  2362,  2363,  2424,  3008,  2428,  2475,  2480,  1239,
    2481,  2680,  2484,  2485,  2488,  2491,  2519,  1240,  2511,    69,
      70,   954,  2512,  2517,  2521,  1241,  1079,  1080,  1081,  1082,
    2346,  2529,  2355,  2533,   115,  2534,  2364,  2535,  2536,  2537,
    2502,  2563,  2503,  1242,  2504,  2566,  2506,  2568,   473,  2508,
    1243,  2509,  2571,  2574,  2575,  2577,  2513,  2514,  2579,  2515,
    2516,  2580,  2518,  2581,  2520,  2585,  2586,  2681,  2587,  2588,
    2524,  2589,  2525,   117,  2590,  1244,  2528,  2594,  2595,  2530,
    2596,  2597,  2598,  2599,  2660,  2661,  1245,  2663,  2664,  2603,
    2604,  2667,  2668,  2605,  2612,  2615,  2623,  2626,  2629,  2630,
    2631,  2634,  2639,  2532,  2643,  2659,  2682,  2713,  2683,  2684,
    2685,  2687,  2719,  2720,  2721,  2722,  2725,  2727,   928,  2730,
    2732,   118,  2733,  2567,  2734,  2979,  2735,  2737,  2743,  2745,
    2750,  1246,  2757,  2766,  1237,  2775,  2781,  2785,  2791,  1247,
    2799,  2810,  2565,  2821,  2822,  2570,  2823,  2824,  2825,  2826,
    2942,  2841,  2852,  2686,  2853,  2572,  2573,  2855,  2715,  2856,
    2857,  2858,  2859,  2860,  2861,  2863,  2576,  2869,  2875,  2901,
    2632,  2907,  2925,  2910,  2911,  2578,  2912,  2917,  2932,  2582,
    2583,  1506,  2933,  2934,  2935,  2936,  1248,   120,  2591,  2592,
    2937,  2944,  2947,  2958,  2966,  2980,  2969,  2600,  2601,  1249,
    2972,  2976,  2981,  2606,  2982,  2989,  2992,     0,  3002,  3003,
    3009,  3017,  3028,  2616,  2617,  3021,  1250,  3022,  3024,  1563,
    3030,     0,  3031,  3032,  2627,  3033,  2628,  2637,  1315,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2644,  2645,
    2646,  2647,  2648,  2649,  2650,  2651,  2652,  2653,  2654,  2984,
    2986,     0,  2405,     0,  2657,   125,     0,     0,   473,   473,
     126,   473,   473,     0,     0,   473,   473,  2669,  2670,  2671,
    2672,  2673,  2674,     0,  2676,  2677,  2678,     0,   816,     0,
       0,     0,     0,     0,     0,     0,     0,  2430,     0,     0,
    2689,  2690,  2691,  2692,     0,  2694,  2695,  2696,  2697,  2698,
    2699,     0,  2701,     0,     0,  2705,  2706,  1389,     0,     0,
       0,     0,     0,  2802,     0,     0,     0,  2805,     0,  1394,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2714,
       0,     0,   473,  2716,     0,     0,     0,  2718,   909,     0,
       0,     0,  2723,  2724,     0,  2726,     0,     0,     0,     0,
       0,     0,     0,  2839,     0,     0,  1404,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2746,     0,     0,     0,     0,     0,
     708,   709,   710,     0,     0,     0,     0,     0,     0,  2748,
       0,     0,  2749,     0,     0,  2751,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2760,     0,   711,     0,     0,
       0,     0,     0,     0,  2769,     0,     0,     0,     0,     0,
     712,  1495,     0,  2778,     0,     0,     0,     0,     0,     0,
    2780,     0,     0,     0,     0,     0,   713,     0,     0,     0,
       0,  2784,     0,     0,     0,     0,  2793,  2787,     0,     0,
    2795,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2796,  2797,     0,     0,     0,     0,  2801,   473,   714,     0,
    2804,   473,     0,     0,     0,   999,  2809,     0,   715,  2813,
    2814,     0,  1004,     0,     0,  1005,     0,     0,     0,     0,
    1006,     0,     0,     0,  1008,     0,     0,     0,  2831,  2832,
     716,  2834,  2835,  2836,  2837,  2838,  1643,   473,  2840,   717,
       0,     0,  2843,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2854,     0,     0,     0,   718,
       0,     0,     0,     0,     0,  2862,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     719,     0,     0,  2877,     0,     0,     0,     0,     0,     0,
    1703,     0,  1937,  1938,  1939,     0,     0,     0,  2878,     0,
    1709,     0,  1941,  1942,  1943,  2879,     0,     0,  1077,     0,
       0,  1954,  1955,  1956,  2881,     0,  1957,  1958,     0,  1960,
    1961,   720,     0,  2883,     0,  2889,   721,     0,     0,  2886,
    2893,     0,  2895,  2888,     0,     0,     0,     0,  2898,     0,
       0,     0,   722,     0,     0,   723,     0,     0,     0,     0,
       0,  2905,     0,  2033,  2034,     0,     0,  2036,  2037,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2916,
       0,     0,     0,  2920,     0,  2953,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2708,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2941,
    2527,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1809,     0,     0,  2539,  2540,  2541,     0,
       0,  2543,     0,  2545,  2546,     0,     0,  2548,  2549,  2550,
    2956,  1817,  2552,  2553,     0,  2961,  2556,  2963,  2558,  2559,
       0,  2561,     0,     0,  2967,  1672,     0,     0,     0,  2970,
    1673,     0,     0,     0,  2973,     0,     0,     0,     0,     0,
       0,  1848,     0,     0,     0,     0,     0,     0,  1281,     0,
       0,  1854,     0,  1674,  1675,  1287,  1676,  1677,  2983,  2985,
       0,     0,     0,     0,     0,     0,     0,  1678,  1869,     0,
       0,     0,     0,    69,    70,     0,     0,     0,     0,     0,
    1881,  1679,  1680,     0,  2995,  1888,     0,  2996,   115,  1681,
    2998,     0,  1682,     0,     0,     0,  2991,     0,     0,     0,
    3004,  3005,  3006,  3007,     0,     0,     0,     0,     0,     0,
    1683,     0,  3016,     0,     0,  3019,     0,     0,     0,  1684,
    1685,     0,  3023,  1686,  3025,     0,     0,  3011,  2633,     0,
    3014,  2636,     0,     0,     0,     0,  2640,     0,     0,  2641,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2656,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2827,     0,     0,   118,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1388,     0,     0,     0,
       0,     0,  2845,  1390,  1687,     0,  2850,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2450,     0,  2040,     0,     0,     0,     0,
       0,     0,     0,     0,  2451,     0,     0,     0,  1406,  1407,
       0,   120,     0,  1411,     0,     0,  1414,     0,     0,     0,
       0,     0,     0,  2060,  1688,  2729,     0,     0,  1421,     0,
    1689,     0,  1239,  2452,     0,     0,     0,     0,     0,     0,
    1240,     0,     0,     0,     0,     0,     0,  1690,  1241,     0,
       0,  2093,     0,     0,  2094,     0,     0,  2739,  1691,     0,
       0,     0,     0,  2109,  2110,     0,  1242,     0,     0,     0,
       0,  2114,     0,  1243,     0,     0,  2453,     0,  2115,     0,
       0,     0,  2297,     0,   126,     0,     0,  1692,  1693,     0,
       0,     0,     0,     0,     0,  2305,     0,     0,  1244,     0,
       0,     0,     0,     0,     0,  2308,  2931,     0,     0,  1245,
    1694,     0,     0,     0,     0,     0,     0,     0,  2154,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2165,     0,     0,     0,     0,     0,     0,  2790,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1568,     0,     0,  1246,  1695,     0,  2798,     0,     0,
       0,     0,  1247,     0,  2803,     0,     0,  2806,  2807,     0,
       0,     0,     0,     0,     0,     0,     0,  2393,     0,     0,
       0,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,  1248,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1249,     0,     0,     0,     0,     0,     0,     0,
       0,  2218,     0,     0,  3001,     0,     0,     0,     0,  1250,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2454,
       0,  2455,     0,   114,     0,  2239,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   115,     0,     0,
       0,  2248,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2253,     0,  2254,     0,   116,     0,
       0,  2890,     0,     0,     0,     0,  2262,     0,     0,  2264,
    2265,  2266,  2267,  2269,     0,  2271,   117,  2456,  2272,     0,
    2900,  2273,  2275,  2276,  2277,  2278,  2280,     0,  2281,  2282,
       0,     0,     0,  2284,  2285,  2286,     0,     0,  2287,  2288,
       0,     0,     0,     0,  2289,  2290,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   118,     0,     0,  1811,  1124,     0,
       0,     0,     0,  1125,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   119,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2954,  2955,  1842,  2957,     0,  2959,  2960,
    1847,  2962,     0,     0,     0,     0,     0,     0,     0,     0,
    1853,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     120,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   388,     0,     0,     0,  2569,     0,
       0,   389,     0,     0,     0,  2988,     0,     0,  2396,     0,
       0,  2399,     0,   121,     0,     0,     0,     0,     0,     0,
       0,     0,  2404,   122,     0,  2407,     0,     0,     0,     0,
       0,   123,   124,     0,     0,     0,     0,     0,   125,     0,
       0,     0,     0,   126,     0,     0,     0,     0,     0,     0,
       0,  3020,     0,     0,  2426,     0,     0,     0,  2607,  2608,
    2609,  2610,  2611,     0,  2613,  2614,     0,     0,     0,  2618,
    2619,  2620,  2621,  2622,     0,  2624,  2625,     0,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,     0,     0,     0,  2474,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   127,     0,     0,     0,     0,     0,     0,
       0,     0,  2490,     0,     0,     0,     0,     0,     0,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,     0,     0,
       0,     0,     0,   157,     0,     0,     0,     0,   158,   159,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    69,    70,  2106,
       0,     0,     0,     0,     0,     0,  2523,     0,     0,     0,
       0,     0,   115,     0,     0,     0,     0,     0,     0,     0,
       0,  2531,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   327,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   390,     0,     0,   391,     0,  2555,
       0,   117,     0,     0,     0,     0,     0,     0,     0,  2155,
    2564,     0,  2747,     0,     0,  2161,     0,     0,     0,     0,
       0,  2752,  2753,  2754,  2755,  2756,     0,  2758,  2759,     0,
    2761,  2762,  2763,  2764,  2765,     0,  2767,  2768,     0,  2770,
    2771,  2772,  2773,  2774,     0,  2776,  2777,     0,  2779,   118,
       0,     0,     0,     0,     0,     0,     0,     0,  2782,  2783,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2786,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2635,   120,     0,  2638,  2216,     0,
       0,     0,     0,  2221,     0,  2642,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2655,     0,     0,  2658,     0,     0,     0,     0,  2662,
       0,     0,  2665,  2666,  2241,     0,     0,     0,   328,     0,
    2247,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   125,     0,     0,     0,  2263,   126,     0,
       0,     0,     0,     0,  2270,     0,     0,     0,     0,   329,
    2709,  2710,  2880,     0,     0,     0,     0,     0,     0,     0,
       0,  2882,     0,     0,     0,     0,     0,     0,     0,     0,
    2884,     0,  2885,     0,     0,     0,  2887,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2736,     0,     0,     0,     0,     0,     0,     0,
     567,     0,     0,     0,     0,   330,     0,     0,     0,     0,
       0,     0,     0,     0,   115,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   117,     0,   115,     0,     0,     0,     0,
       0,  2948,     0,  2949,     0,  2950,     0,     0,  2951,     0,
    2952,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2395,     0,     0,     0,
    2789,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   118,     0,   540,   541,     0,  2408,     0,     0,   542,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2808,     0,     0,     0,  1868,     0,     0,
       0,     0,   543,     0,  2819,     0,     0,     0,     0,  2431,
    2432,   115,   118,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2435,  2436,     0,     0,     0,
    2438,  2439,     0,     0,     0,     0,     0,   120,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2868,
       0,     0,     0,  2874,     0,     0,     0,     0,     0,     0,
    2482,     0,     0,     0,     0,     0,     0,     0,   120,     0,
       0,  2489,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   544,     0,     0,     0,     0,   118,     0,
       0,     0,     0,     0,     0,   125,     0,     0,     0,     0,
     126,     0,     0,   545,     0,     0,     0,  2891,  2892,     0,
    2894,     0,     0,     0,     0,  2896,  2897,     0,     0,     0,
    2899,     0,     0,     0,  2505,     0,     0,   546,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   126,     0,     0,     0,  2522,     0,     0,     0,     0,
       0,     0,     0,  2921,   120,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2538,     0,
       0,     0,     0,  2542,     0,     0,     0,     0,     0,  2547,
       0,     0,     0,     0,  2551,  2945,     0,     0,  2554,     0,
       0,  2557,     0,     0,  2560,   547,  2562,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,     0,     0,   126,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,     0,   548,     0,     0,
       0,     0,     0,     0,  2990,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2999,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  3010,     0,     0,  3013,     0,
     669,   115,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   670,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2700,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2712,     0,   118,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   671,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2731,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   120,     0,     0,     0,     0,     0,
    2744,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   672,     0,     0,     0,     0,     0,
       0,  1146,  1147,  1148,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1149,  1150,     0,     0,  1151,     0,     0,  1152,     0,
       0,     0,   115,     0,     0,  1153,     0,   126,  2788,  1154,
       0,     0,     0,     0,  2792,     0,     0,     0,  2794,  1155,
    1156,     0,     0,     0,     0,     0,     0,  1157,  1158,     0,
       0,     0,     0,     0,  2800,     0,     0,     0,     0,     0,
       0,   117,     0,     0,     0,  1159,     0,     0,     0,     0,
       0,     0,     0,  1160,     0,     0,     0,  1161,  1162,     0,
       0,  1163,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   673,
       0,  1164,     0,     0,     0,  2848,  2849,     0,     0,   118,
       0,     0,     0,     0,   115,     0,     0,     0,     0,     0,
       0,     0,     0,  1165,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,  1166,   117,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   115,     0,     0,
       0,     0,     0,     0,     0,   120,     0,     0,     0,  1167,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   118,     0,     0,     0,     0,     0,     0,     0,   554,
    1168,     0,  1169,     0,     0,  2909,     0,     0,  1170,  1171,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1172,  1173,     0,     0,     0,     0,
       0,   115,     0,   125,     0,     0,  1174,  1175,   126,     0,
       0,     0,     0,     0,   118,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   120,     0,     0,
       0,     0,     0,     0,  1176,     0,  1177,     0,     0,     0,
    1494,     0,     0,     0,     0,     0,     0,     0,     0,  1178,
       0,  1179,     0,     0,     0,     0,     0,     0,  1180,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   558,     0,   115,     0,     0,     0,  2975,     0,     0,
     120,     0,     0,     0,     0,     0,     0,     0,   118,     0,
       0,     0,  1181,     0,     0,   125,     0,     0,     0,     0,
     126,  2987,     0,     0,     0,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  3012,     0,     0,     0,
       0,     0,     0,   126,   120,     0,     0,     0,     0,     0,
     118,     0,     0,     0,     0,     0,  3026,     0,     0,  3027,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1539,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   555,   120,   126,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   126,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
    1540,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,     1,     0,     0,     2,     0,     0,
       3,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     4,     0,     0,     0,     0,     5,
       6,     0,     0,     0,     7,     8,     9,     0,     0,     0,
       0,     0,     0,     0,    10,     0,     0,     0,     0,     0,
       0,    11,     0,    12,    13,     0,     0,     0,     0,     0,
       0,     0,     0,    14,    15,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    16,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    17,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    18,     0,     0,     0,    19,     0,     0,     0,
      20,     0,     0,     0,    21,    22,     0,     0,     0,     0,
      23,    24,     0,     0,    25,     0,     0,     0,     0,     0,
      26,     0,     0,     0,     0,     0,    27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    28,     0,     0,
       0,    29,    30,    31,     0,     0,    32,    33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    34,
       0,     0,     0,    35,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   185,     0,     0,   186,     0,
      36,   187,    37,    38,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    39,     0,    40,     0,     0,
       0,   188,     0,     0,    41,   189,   190,   191,    42,     0,
       0,     0,    43,     0,    44,   192,    45,   193,     0,     0,
       0,    46,   194,     0,   195,   196,   197,     0,     0,     0,
       0,     0,   198,     0,   199,     0,    47,     0,     0,     0,
       0,     0,    48,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    49,
      50,     0,     0,     0,     0,     0,     0,     0,     0,   200,
       0,     0,    51,     0,    52,     0,     0,     0,     0,     0,
       0,    53,     0,     0,    54,    55,     0,   201,     0,     0,
       0,     0,     0,     0,     0,     0,   202,     0,   203,   204,
       0,   205,   206,     0,     0,   207,     0,     0,     0,   208,
       0,   209,     0,     0,     0,    56,     0,   210,     0,     0,
       0,     0,    57,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   211,   212,     0,
       0,     0,   213,     0,     0,     0,     0,     0,     0,     0,
     214,     0,     0,     0,   215,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   216,     0,   217,     0,     0,     0,     0,     0,     0,
     218,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   219,     0,   220,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   221,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     222,   223,     0,     0,     0,     0,     0,     0,     0,     0,
     224,     0,     0,     0,     0,     0,     0,     0,   225,     0,
       0,     0,     0,     0,   226,     0,   227,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,     0,     0,     0,     0,     0,
       0,     0,     0,   228
};

static const yytype_int16 yycheck[] =
{
       3,    55,  1621,  1016,  1850,   780,  1852,     4,    11,   531,
       4,   775,   776,    16,     5,   311,    16,     3,     4,     3,
       4,     4,    31,     0,     5,     3,     4,    62,  1147,     4,
    1004,  1005,  1006,    46,    37,     4,    31,    26,     3,     4,
       5,    73,    45,     5,    31,     3,     4,    15,     3,     4,
       4,    54,     4,    16,    57,    37,    20,    60,    62,    20,
      49,    64,    58,    52,    67,     5,     3,     4,    71,    72,
       3,     4,    75,    20,    63,    78,    79,    20,  1114,    82,
      35,  1117,    85,    86,     3,     4,    89,    26,   161,     3,
       4,    94,    33,   213,     5,   185,    16,   144,    35,    88,
      16,    43,  1138,  1077,   107,   108,   109,   110,   111,   112,
       5,    57,    86,     4,     5,    67,  1302,   106,    42,   179,
    1306,  2745,   103,   235,   149,   128,   213,    39,    20,   103,
     111,   131,    16,     4,     5,     4,     5,     4,   312,   121,
       3,     4,     3,     4,    20,   141,    19,  2927,    90,     0,
    1336,  1337,  1338,     4,   186,     5,   149,     5,   248,    90,
     163,    90,   282,     3,     4,     3,     4,    67,    16,   194,
       3,     4,   113,   142,   108,   127,    67,    86,     3,     4,
      30,   145,     4,   180,   184,   188,   288,   274,   143,     5,
     193,    21,    20,   295,   103,   204,    32,  2977,    15,    26,
      91,   194,   254,   165,     5,   117,   143,    90,    62,     4,
      35,   193,   285,   195,    39,   197,   198,   204,   102,   193,
      50,   207,   334,    53,   271,   219,   208,   310,   318,   207,
     214,   291,   226,   227,   234,   213,   127,   269,   156,  2863,
     171,    67,   171,   225,    62,    67,   185,   279,     5,   207,
     218,  2875,    62,   249,   165,    85,   127,   173,   127,   150,
       4,   128,     3,     4,     4,   268,   249,   241,   264,   263,
     212,   234,   224,   207,    13,   310,    91,   255,  1053,   282,
     232,   233,    62,   337,   225,   298,   116,   211,   171,   119,
       3,     4,   117,   239,     4,   133,   299,   300,   262,   308,
     335,   262,   214,   277,   282,   127,   310,     4,    26,   248,
     487,   230,   315,   308,   317,   262,   278,    57,   143,   262,
     497,   308,   322,    62,   327,   328,    39,   330,   331,   293,
     333,   335,   127,   224,     4,   312,   332,   321,   321,   314,
     343,   232,   233,   334,   341,     4,   332,    60,   330,   330,
     353,   354,   321,   224,   332,   224,   296,    67,    26,   322,
     314,   232,   233,   232,   233,   285,   321,   278,     4,   334,
     262,   333,   324,   376,   332,   378,   379,   272,   381,    14,
      15,   375,   385,   386,   321,   258,   262,    22,   321,   214,
     376,   377,   381,   396,   397,    30,  1171,    67,   376,   377,
     403,   697,   224,    38,   117,   408,   409,   321,   248,    45,
     232,   233,    48,   416,  1189,   248,   419,   127,   376,   377,
     250,   248,   374,     4,    59,    13,    14,   379,   380,   224,
       4,    67,  1406,   324,   262,   438,   439,   232,   233,   330,
    1414,    76,   445,   446,   447,   448,   449,   450,     4,   452,
      86,    26,   455,   324,   284,   324,   310,   127,   321,  1223,
     321,   330,    43,   181,  1583,    46,   469,   103,   127,   285,
     473,   210,   341,   109,    62,   478,   479,   480,   481,   482,
     483,   335,   485,   374,   487,   488,   489,   378,   379,   380,
    1609,  1255,   310,   250,   497,   498,   321,   313,    79,   239,
     310,   214,   324,   374,   486,   374,    87,   248,   379,   380,
     379,   380,  1631,   181,   224,     5,   213,   335,  1554,   314,
       4,  1557,   232,   233,   160,   335,     3,     4,    90,   324,
     310,   101,    29,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,    39,   262,    64,   127,   183,   551,   552,
     289,    90,   374,   254,   224,   335,    39,   379,   380,    45,
      39,   300,   232,   233,    51,   224,   569,     5,     3,     4,
     267,  1757,   153,   232,   233,    13,    14,   274,   134,   374,
      57,    67,     3,     4,   379,   380,     0,     4,   225,    64,
     186,   110,   310,   575,   262,   334,   650,    27,    84,   195,
       4,    98,   605,   316,     4,    62,     4,    11,    62,   171,
       5,  2813,    29,   288,   324,    11,   103,   295,    13,    14,
     295,   117,   210,   211,    62,    36,    90,   114,     5,  2831,
       4,   212,   171,     5,   117,   110,    47,    62,   117,   816,
      62,  1122,   310,   224,   647,     4,    81,   629,  1129,   284,
      29,   232,   233,   171,   324,     5,   292,     4,    54,   240,
     147,   242,   297,   298,   374,   324,    77,    62,    30,   379,
     380,   128,   228,   248,   128,  2521,   166,   167,    74,  1454,
     177,    62,    62,   319,   320,   203,   740,    21,     5,   270,
    1465,    91,   695,  1123,   329,   331,     5,   183,    57,   335,
    1130,   289,   705,   128,   374,   759,   128,   171,   104,   379,
     380,   214,   300,   301,   171,   374,    50,   287,   214,    53,
     379,   380,    56,    26,     4,     3,     4,   124,   128,   213,
     126,   214,   162,   126,   130,   214,   373,   372,   373,   374,
     259,    67,   379,   324,   381,   312,   334,   128,   128,   145,
     161,    85,   161,   186,   757,   190,   275,   276,   175,    97,
     341,   191,   239,    62,  2966,   195,   285,    32,   166,   167,
    2972,   774,   210,   211,   777,    62,    62,   274,     5,   117,
     270,    92,   116,   280,   259,   119,    13,    14,   965,    19,
      20,    21,    67,   374,   290,   206,   175,   800,   379,   380,
     275,   276,   805,   806,   807,   808,     5,   290,   811,   230,
     813,    62,   815,   816,   817,   210,   211,   215,   235,    49,
      50,    15,   252,    53,    67,    64,  3028,   255,  3030,   128,
      60,  1008,   241,    63,   320,    62,   323,    67,    62,   274,
     310,   128,   128,   300,   898,   262,   300,    77,    78,   335,
     311,   289,    62,   372,   373,    85,   235,     3,     4,    92,
      62,  1874,   300,   301,   294,     4,     5,   305,   279,   207,
      67,   110,   270,   303,   304,   300,   285,   128,   300,  1853,
     239,    62,   185,   262,    75,   115,   116,   890,   891,   119,
     893,   894,   895,   896,   289,   134,   334,   372,   373,    13,
      14,    81,    39,    27,   128,   300,   301,   910,   911,   139,
     305,    12,    30,  1949,   917,   918,   250,   326,   128,   300,
     300,    62,    61,     5,   335,   321,   128,    67,    67,  2048,
      67,   161,    45,  1969,   937,   938,   939,   940,   941,   334,
     943,   219,   945,  1979,  2063,   248,  1982,   128,    62,     4,
     284,  1715,    65,  1989,    67,     3,     4,   960,   961,   962,
     190,   964,   965,   966,     5,   968,   103,    62,  2004,     4,
     200,  2007,  2091,    62,   111,     5,     3,     4,   312,  2015,
     117,   120,  2018,   210,   211,    55,   989,   128,   991,  2175,
    2176,  2177,  2178,  2179,  2180,  2181,  2182,  2183,  1001,   139,
     139,   300,   139,   149,   140,  1008,  1009,   989,     5,     4,
     190,  1014,     5,   300,   300,   154,    13,    14,   248,   140,
     259,     4,   161,    93,   161,     4,   256,   257,  1031,   169,
     169,   132,  1035,   128,    62,   111,   275,   276,   162,   128,
       4,     5,   179,   273,  1047,  1048,  1049,     5,   194,   300,
       3,     4,  1055,    45,   689,   285,     5,  1060,    25,    25,
    2679,     4,   289,     5,   185,    62,     5,   191,  1071,     5,
    1124,   195,   707,   300,   301,    67,   300,     5,   305,     5,
     217,   151,   312,   124,   314,   133,     4,  1090,   201,     4,
     300,   230,    84,  2212,   274,   325,   210,   211,   300,     4,
     128,     3,     4,     4,  1281,     4,   336,   334,   209,     4,
       5,   250,   248,     3,     4,    57,   255,   257,   257,   300,
     257,  1113,     4,   101,    66,   166,   167,   248,   252,     5,
       3,     4,   128,   372,   373,   272,     5,    39,   166,   167,
     370,   217,     4,     5,   779,   284,   285,     5,   285,   784,
     263,   118,   118,   292,     4,    13,    14,    39,    85,   300,
     111,     4,    23,    24,  1167,   296,    39,   134,   134,    85,
     294,   212,   312,   312,   310,   289,     4,   314,     4,   303,
     304,  2155,     4,     5,    36,  1188,   300,   301,     4,   310,
     327,    91,   329,   330,  1197,    47,   272,   310,     3,     4,
     270,     5,    41,    42,    62,   300,   173,   320,     4,   201,
    1213,   300,  1215,   210,   211,   117,   219,  1220,  1221,  1222,
     334,     4,   122,     4,     5,    77,     4,  1230,     4,   270,
    1233,   370,  1235,   370,  1411,   117,   163,     3,     4,    61,
     101,     4,   270,   133,   117,    67,     4,   163,     4,  1252,
       5,  1254,     3,     4,    76,   296,    78,     4,     5,  1262,
    1263,    83,   229,   229,    86,    16,   217,     3,     4,     8,
      92,   263,   300,  2247,  1277,  1278,   243,   243,  1281,  1282,
    1283,   103,     3,     4,   166,   167,  1289,     5,  1291,   111,
      11,  1294,   289,  1296,    60,    10,  2270,   239,   120,  1353,
       5,     3,     4,   300,   301,   205,   295,  2343,   305,   161,
     475,   476,   947,     4,    13,    14,  2352,   139,   310,   246,
     247,   272,   222,     3,     4,  2361,   186,  2446,   320,    65,
     246,   247,   214,   215,   261,     4,  1339,   334,   195,   161,
    1343,   214,  1345,  2462,    44,   261,  1349,     4,  2467,   188,
     189,   186,   210,   211,   206,  1105,  1106,   179,    60,    39,
      60,     5,  1365,    62,  1367,   218,  1369,  1370,  1371,  1372,
     192,   193,  1375,  1376,   218,  1378,  1379,     5,  1381,   306,
    1383,   220,     4,  1365,    84,   218,   286,  1390,   270,    34,
     306,     3,     4,     4,  1397,   217,   208,   207,  1401,  1402,
    1403,   208,    67,   213,   104,     3,     4,    67,  1411,  1412,
       3,     4,  1415,    11,    67,     8,     9,    10,   248,   241,
    1423,     5,  1425,     5,   124,  1428,   249,   279,   128,     4,
     330,   289,     4,   255,  1416,   257,   609,   117,     4,   612,
     613,   341,   300,   301,     4,   255,     4,   305,    60,   218,
     272,    90,  1434,    90,    90,   277,     5,   309,   158,   159,
       3,     4,     5,   285,     5,   317,    18,   112,     5,  1472,
     292,  1474,   282,    90,  1477,  1478,   334,  1480,     4,  1482,
       3,     4,     5,   335,     4,  1488,     5,  1490,    40,     5,
     312,    43,   137,   138,    45,     4,  1499,    48,     5,   103,
      54,   146,     4,    16,   326,   327,     5,   329,  2482,     4,
      16,   210,   211,     4,     4,  2489,    67,     3,     4,     5,
      74,   221,   332,   168,     4,   101,  1518,     5,    80,     5,
       5,   231,     4,   178,    90,    87,  2671,    91,  1530,  2674,
      90,  2676,    90,     5,    90,     5,    98,    99,   370,     4,
     104,     5,   103,   105,  2689,  2690,  2675,     5,   109,  1194,
    1552,  1553,     4,    37,     4,    65,     4,   377,     5,  2688,
       5,  2706,   126,     5,  2693,     4,   130,  1580,  1581,  1582,
    2554,     4,   134,  2557,    11,     5,  2560,    11,  2562,     4,
     289,   145,     4,     4,     4,   295,   296,  1579,     5,  1602,
     152,   300,   301,  1606,     3,     4,     5,     6,     7,   160,
       3,     4,     5,     6,     7,     4,  1251,     4,   170,   171,
       3,     4,     5,     6,     7,   177,  1629,  1630,    67,     5,
    1265,     5,     5,   180,     4,   334,  1639,   171,   192,  1642,
     171,     4,    37,     5,    83,     4,  1649,   121,     3,     4,
     202,     6,     7,    92,   284,    37,   314,   284,     5,     4,
    1663,     4,     4,     4,   103,  1668,     5,     5,     5,  1672,
     370,  1674,  1675,     5,  1677,  1678,  1679,     4,  1681,     5,
       5,  1684,  1685,  1686,  1687,  1688,  1689,  1690,  1691,  1692,
    1693,  1694,   244,     5,  1697,  1698,  1699,  1700,   297,     5,
     139,   297,     5,     4,  1707,  1708,     4,     4,  1711,  1712,
    1713,     5,     5,     5,  1717,  1718,     5,  2677,   192,     5,
     194,   195,   161,   197,   198,     5,     4,  1730,  1731,     5,
    1733,  1734,     5,     4,   262,     5,     5,   262,  2712,    13,
      14,   292,   111,  2703,   262,   262,   298,     5,   149,    39,
     111,  1386,  1387,   111,   262,     5,   230,   262,   310,     5,
      39,   234,     4,   234,   268,   268,     5,     5,   319,   320,
     234,   234,     4,     4,     4,   249,   250,     5,   217,     5,
     331,   255,     5,     5,   335,   259,     5,   117,    62,   341,
       4,    11,     5,   117,     5,     5,     4,     4,    62,     5,
       5,     5,  1805,  1806,  1807,     5,     4,  1810,     5,     5,
       4,     4,  1815,  1816,     5,  1818,  1819,  1820,   257,  1822,
    1823,     5,  1825,    11,  1827,  1828,     4,  1830,  1831,     5,
    1833,     5,  1835,  1815,     5,     4,     4,     4,     4,     4,
    1843,     5,   316,     0,  2963,   319,   285,     5,  1851,   262,
     149,  2811,  2812,  1856,  1857,  2815,   330,  2817,   262,  1862,
     124,     4,   262,   185,   128,   262,   262,   272,  1871,  2829,
    2830,   262,   218,   230,  2834,  2835,   350,     4,  2838,    13,
      14,    13,    14,  2843,  2844,    13,    14,     4,   327,     4,
     329,     4,     4,   338,     5,     5,     5,     5,     5,   297,
       5,  1904,   166,   167,  1886,     4,     4,   171,     5,     4,
       4,     4,   262,  1895,     5,     5,     5,  1899,   262,   338,
       4,     4,  1925,  1926,     4,     4,   262,  1930,    62,  2106,
      62,     4,     4,  1936,    62,   338,   210,   211,     4,     4,
    1575,  2901,     5,     5,  2904,     5,   338,     4,   212,  2909,
       4,     4,   248,   248,     5,  2915,     5,   248,     5,     4,
    2920,   248,     5,   248,     5,     4,     4,  1959,     5,  1604,
       5,     5,     5,  1608,     4,  1967,  1968,     5,     5,     4,
     297,     5,     5,     4,  2161,  1977,  1978,     5,     5,     4,
     297,     5,   466,     5,     4,  1987,  1988,     4,     4,  1634,
       5,     5,   266,   477,     4,     4,   270,     5,     5,  1644,
    2002,  2003,   486,     4,     4,   289,     5,     5,  1653,  1654,
       5,  2013,  2014,     4,    11,     5,   300,   301,  2020,  1664,
       5,     4,   296,     4,  2994,     5,   300,  2997,  2030,     5,
    2043,  2044,     5,  2046,  2221,     5,     5,   311,     4,   297,
       5,     5,     5,     5,     4,     4,     4,  3017,     5,     5,
     334,  2064,  2065,  2066,  2067,  2068,  2069,  2070,  2071,  2072,
       5,  3031,  2847,     5,  3034,  3035,   210,   211,   210,   211,
     554,   555,   210,   211,  2087,     4,  2089,     4,   312,   334,
       5,     5,     5,   567,     5,     4,     4,     4,   572,     5,
       5,     5,  2105,  2106,     5,     4,     4,   581,  2111,     5,
       5,     5,     5,     4,   382,     5,     5,  2120,  2121,  2122,
    2123,  2124,  2125,  2126,  2127,  2128,  2129,     5,     5,  2132,
    2133,  2134,  2135,  2136,  2137,  2138,  2139,  2140,  2141,  2142,
    2143,     4,  2145,     4,  2147,  2148,  2149,     5,     4,     4,
       4,     4,   312,     5,  2929,   289,     5,   289,  2161,  2162,
       5,   289,     5,     5,     4,     4,   300,   301,   300,   301,
       5,     4,   300,   301,     4,  2987,     5,     5,     4,    95,
       4,   382,     5,     5,     4,     4,     4,   103,     5,     3,
       4,   474,     5,     5,     4,   111,   670,   671,   672,   673,
     334,     5,   334,     5,    18,     5,   334,     5,     5,     5,
    2213,     4,  2215,   129,  2217,     5,  2219,     4,  2221,  2222,
     136,  2224,     4,     4,     4,     4,  2229,  2230,     5,  2232,
    2233,     5,  2235,     5,  2237,     4,     4,   382,     5,     5,
    2243,     5,  2245,    57,     5,   161,  2249,     4,     4,  2252,
       5,     5,     5,     5,  2431,  2432,   172,  2434,  2435,     4,
       4,  2438,  2439,     5,     4,     4,     4,     4,     4,     4,
       4,     4,     4,  2255,     4,     4,   382,     4,   382,   382,
     382,   382,     5,     5,     4,     4,     4,     4,   423,     5,
       4,   105,     5,  2296,     4,   382,     5,     5,     5,     4,
       4,   217,     4,     4,   778,     4,     4,     4,     4,   225,
       4,     4,  2294,     5,     4,  2307,     5,     5,     5,     4,
    2862,     5,     4,  2457,     5,  2317,  2318,     5,  2505,     4,
       4,     4,     4,     4,     4,     4,  2328,     5,     4,     4,
    2394,     4,  2845,     5,     4,  2337,     4,     4,     4,  2341,
    2342,  1099,     5,     5,     4,     4,   272,   171,  2350,  2351,
       4,     4,     4,     4,     4,  2929,     5,  2359,  2360,   285,
       4,  2925,     5,  2365,     5,     4,     4,    -1,     5,     5,
       5,     4,     4,  2375,  2376,     5,   302,     5,     5,  1137,
       4,    -1,     5,     5,  2386,     5,  2388,  2400,   855,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2411,  2412,
    2413,  2414,  2415,  2416,  2417,  2418,  2419,  2420,  2421,  2941,
    2942,    -1,  2057,    -1,  2427,   239,    -1,    -1,  2431,  2432,
     244,  2434,  2435,    -1,    -1,  2438,  2439,  2440,  2441,  2442,
    2443,  2444,  2445,    -1,  2447,  2448,  2449,    -1,   332,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2092,    -1,    -1,
    2463,  2464,  2465,  2466,    -1,  2468,  2469,  2470,  2471,  2472,
    2473,    -1,  2475,    -1,    -1,  2478,  2479,   951,    -1,    -1,
      -1,    -1,    -1,  2660,    -1,    -1,    -1,  2664,    -1,   963,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2502,
      -1,    -1,  2505,  2506,    -1,    -1,    -1,  2510,   392,    -1,
      -1,    -1,  2515,  2516,    -1,  2518,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2700,    -1,    -1,  1000,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2567,    -1,    -1,    -1,    -1,    -1,
      67,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,  2571,
      -1,    -1,  2574,    -1,    -1,  2577,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2587,    -1,    94,    -1,    -1,
      -1,    -1,    -1,    -1,  2596,    -1,    -1,    -1,    -1,    -1,
     107,  1085,    -1,  2605,    -1,    -1,    -1,    -1,    -1,    -1,
    2612,    -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,
      -1,  2623,    -1,    -1,    -1,    -1,  2639,  2629,    -1,    -1,
    2643,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2653,  2654,    -1,    -1,    -1,    -1,  2659,  2660,   155,    -1,
    2663,  2664,    -1,    -1,    -1,   549,  2669,    -1,   165,  2672,
    2673,    -1,   556,    -1,    -1,   559,    -1,    -1,    -1,    -1,
     564,    -1,    -1,    -1,   568,    -1,    -1,    -1,  2691,  2692,
     187,  2694,  2695,  2696,  2697,  2698,  1170,  2700,  2701,   196,
      -1,    -1,  2705,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2718,    -1,    -1,    -1,   216,
      -1,    -1,    -1,    -1,    -1,  2728,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     237,    -1,    -1,  2746,    -1,    -1,    -1,    -1,    -1,    -1,
    1224,    -1,  1500,  1501,  1502,    -1,    -1,    -1,  2750,    -1,
    1234,    -1,  1510,  1511,  1512,  2757,    -1,    -1,   652,    -1,
      -1,  1519,  1520,  1521,  2766,    -1,  1524,  1525,    -1,  1527,
    1528,   278,    -1,  2775,    -1,  2788,   283,    -1,    -1,  2781,
    2793,    -1,  2795,  2785,    -1,    -1,    -1,    -1,  2801,    -1,
      -1,    -1,   299,    -1,    -1,   302,    -1,    -1,    -1,    -1,
      -1,  2814,    -1,  1561,  1562,    -1,    -1,  1565,  1566,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2832,
      -1,    -1,    -1,  2836,    -1,  2889,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2483,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2862,
    2248,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1347,    -1,    -1,  2264,  2265,  2266,    -1,
      -1,  2269,    -1,  2271,  2272,    -1,    -1,  2275,  2276,  2277,
    2893,  1365,  2280,  2281,    -1,  2898,  2284,  2900,  2286,  2287,
      -1,  2289,    -1,    -1,  2907,    21,    -1,    -1,    -1,  2912,
      26,    -1,    -1,    -1,  2917,    -1,    -1,    -1,    -1,    -1,
      -1,  1395,    -1,    -1,    -1,    -1,    -1,    -1,   812,    -1,
      -1,  1405,    -1,    49,    50,   819,    52,    53,  2941,  2942,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,  1422,    -1,
      -1,    -1,    -1,     3,     4,    -1,    -1,    -1,    -1,    -1,
    1434,    77,    78,    -1,  2967,  1439,    -1,  2970,    18,    85,
    2973,    -1,    88,    -1,    -1,    -1,  2958,    -1,    -1,    -1,
    2983,  2984,  2985,  2986,    -1,    -1,    -1,    -1,    -1,    -1,
     106,    -1,  2995,    -1,    -1,  2998,    -1,    -1,    -1,   115,
     116,    -1,  3005,   119,  3007,    -1,    -1,  2989,  2396,    -1,
    2992,  2399,    -1,    -1,    -1,    -1,  2404,    -1,    -1,  2407,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2426,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2687,    -1,    -1,   105,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   950,    -1,    -1,    -1,
      -1,    -1,  2707,   957,   190,    -1,  2711,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    56,    -1,  1579,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,  1002,  1003,
      -1,   171,    -1,  1007,    -1,    -1,  1010,    -1,    -1,    -1,
      -1,    -1,    -1,  1607,   250,  2523,    -1,    -1,  1022,    -1,
     256,    -1,    95,    96,    -1,    -1,    -1,    -1,    -1,    -1,
     103,    -1,    -1,    -1,    -1,    -1,    -1,   273,   111,    -1,
      -1,  1635,    -1,    -1,  1638,    -1,    -1,  2555,   284,    -1,
      -1,    -1,    -1,  1647,  1648,    -1,   129,    -1,    -1,    -1,
      -1,  1655,    -1,   136,    -1,    -1,   139,    -1,  1662,    -1,
      -1,    -1,  1940,    -1,   244,    -1,    -1,   313,   314,    -1,
      -1,    -1,    -1,    -1,    -1,  1953,    -1,    -1,   161,    -1,
      -1,    -1,    -1,    -1,    -1,  1963,  2851,    -1,    -1,   172,
     336,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1702,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1714,    -1,    -1,    -1,    -1,    -1,    -1,  2635,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1145,    -1,    -1,   217,   381,    -1,  2655,    -1,    -1,
      -1,    -1,   225,    -1,  2662,    -1,    -1,  2665,  2666,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2035,    -1,    -1,
      -1,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   272,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   285,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1815,    -1,    -1,  2979,    -1,    -1,    -1,    -1,   302,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   312,
      -1,   314,    -1,     4,    -1,  1839,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,    -1,
      -1,  1855,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1868,    -1,  1870,    -1,    39,    -1,
      -1,  2789,    -1,    -1,    -1,    -1,  1880,    -1,    -1,  1883,
    1884,  1885,  1886,  1887,    -1,  1889,    57,   370,  1892,    -1,
    2808,  1895,  1896,  1897,  1898,  1899,  1900,    -1,  1902,  1903,
      -1,    -1,    -1,  1907,  1908,  1909,    -1,    -1,  1912,  1913,
      -1,    -1,    -1,    -1,  1918,  1919,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   105,    -1,    -1,  1351,   171,    -1,
      -1,    -1,    -1,   176,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   127,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2891,  2892,  1389,  2894,    -1,  2896,  2897,
    1394,  2899,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1404,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     171,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    15,    -1,    -1,    -1,  2306,    -1,
      -1,    22,    -1,    -1,    -1,  2953,    -1,    -1,  2042,    -1,
      -1,  2045,    -1,   214,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2056,   224,    -1,  2059,    -1,    -1,    -1,    -1,
      -1,   232,   233,    -1,    -1,    -1,    -1,    -1,   239,    -1,
      -1,    -1,    -1,   244,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2999,    -1,    -1,  2088,    -1,    -1,    -1,  2366,  2367,
    2368,  2369,  2370,    -1,  2372,  2373,    -1,    -1,    -1,  2377,
    2378,  2379,  2380,  2381,    -1,  2383,  2384,    -1,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,    -1,    -1,    -1,  2143,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   324,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2166,    -1,    -1,    -1,    -1,    -1,    -1,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,    -1,    -1,
      -1,    -1,    -1,   374,    -1,    -1,    -1,    -1,   379,   380,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,  1643,
      -1,    -1,    -1,    -1,    -1,    -1,  2240,    -1,    -1,    -1,
      -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2255,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   265,    -1,    -1,   268,    -1,  2283,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1703,
    2294,    -1,  2570,    -1,    -1,  1709,    -1,    -1,    -1,    -1,
      -1,  2579,  2580,  2581,  2582,  2583,    -1,  2585,  2586,    -1,
    2588,  2589,  2590,  2591,  2592,    -1,  2594,  2595,    -1,  2597,
    2598,  2599,  2600,  2601,    -1,  2603,  2604,    -1,  2606,   105,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2616,  2617,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2627,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2398,   171,    -1,  2401,  1812,    -1,
      -1,    -1,    -1,  1817,    -1,  2409,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2425,    -1,    -1,  2428,    -1,    -1,    -1,    -1,  2433,
      -1,    -1,  2436,  2437,  1848,    -1,    -1,    -1,   214,    -1,
    1854,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   239,    -1,    -1,    -1,  1881,   244,    -1,
      -1,    -1,    -1,    -1,  1888,    -1,    -1,    -1,    -1,   255,
    2484,  2485,  2760,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2769,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2778,    -1,  2780,    -1,    -1,    -1,  2784,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2536,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       4,    -1,    -1,    -1,    -1,   321,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,    57,    -1,    18,    -1,    -1,    -1,    -1,
      -1,  2879,    -1,  2881,    -1,  2883,    -1,    -1,  2886,    -1,
    2888,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2040,    -1,    -1,    -1,
    2634,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   105,    -1,    66,    67,    -1,  2060,    -1,    -1,    72,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2667,    -1,    -1,    -1,     4,    -1,    -1,
      -1,    -1,    95,    -1,  2678,    -1,    -1,    -1,    -1,  2093,
    2094,    18,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2109,  2110,    -1,    -1,    -1,
    2114,  2115,    -1,    -1,    -1,    -1,    -1,   171,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2733,
      -1,    -1,    -1,  2737,    -1,    -1,    -1,    -1,    -1,    -1,
    2154,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   171,    -1,
      -1,  2165,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   186,    -1,    -1,    -1,    -1,   105,    -1,
      -1,    -1,    -1,    -1,    -1,   239,    -1,    -1,    -1,    -1,
     244,    -1,    -1,   206,    -1,    -1,    -1,  2791,  2792,    -1,
    2794,    -1,    -1,    -1,    -1,  2799,  2800,    -1,    -1,    -1,
    2804,    -1,    -1,    -1,  2218,    -1,    -1,   230,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   244,    -1,    -1,    -1,  2239,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2837,   171,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2262,    -1,
      -1,    -1,    -1,  2267,    -1,    -1,    -1,    -1,    -1,  2273,
      -1,    -1,    -1,    -1,  2278,  2869,    -1,    -1,  2282,    -1,
      -1,  2285,    -1,    -1,  2288,   298,  2290,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,    -1,    -1,   244,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,    -1,   370,    -1,    -1,
      -1,    -1,    -1,    -1,  2958,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2975,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2989,    -1,    -1,  2992,    -1,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2474,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2490,    -1,   105,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   121,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2531,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   171,    -1,    -1,    -1,    -1,    -1,
    2564,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   191,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,    -1,    -1,    53,    -1,    -1,    56,    -1,
      -1,    -1,    18,    -1,    -1,    63,    -1,   244,  2632,    67,
      -1,    -1,    -1,    -1,  2638,    -1,    -1,    -1,  2642,    77,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    -1,
      -1,    -1,    -1,    -1,  2658,    -1,    -1,    -1,    -1,    -1,
      -1,    57,    -1,    -1,    -1,   103,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   111,    -1,    -1,    -1,   115,   116,    -1,
      -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   316,
      -1,   139,    -1,    -1,    -1,  2709,  2710,    -1,    -1,   105,
      -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   161,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   190,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   171,    -1,    -1,    -1,   217,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,
     248,    -1,   250,    -1,    -1,  2819,    -1,    -1,   256,   257,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   272,   273,    -1,    -1,    -1,    -1,
      -1,    18,    -1,   239,    -1,    -1,   284,   285,   244,    -1,
      -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   171,    -1,    -1,
      -1,    -1,    -1,    -1,   312,    -1,   314,    -1,    -1,    -1,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   327,
      -1,   329,    -1,    -1,    -1,    -1,    -1,    -1,   336,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   307,    -1,    18,    -1,    -1,    -1,  2921,    -1,    -1,
     171,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,    -1,
      -1,    -1,   370,    -1,    -1,   239,    -1,    -1,    -1,    -1,
     244,  2945,    -1,    -1,    -1,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2990,    -1,    -1,    -1,
      -1,    -1,    -1,   244,   171,    -1,    -1,    -1,    -1,    -1,
     105,    -1,    -1,    -1,    -1,    -1,  3010,    -1,    -1,  3013,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   316,   171,   244,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   244,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,    40,    -1,    -1,    43,    -1,    -1,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,    65,
      66,    -1,    -1,    -1,    70,    71,    72,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    -1,    89,    90,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    99,   100,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   148,    -1,    -1,    -1,   152,    -1,    -1,    -1,
     156,    -1,    -1,    -1,   160,   161,    -1,    -1,    -1,    -1,
     166,   167,    -1,    -1,   170,    -1,    -1,    -1,    -1,    -1,
     176,    -1,    -1,    -1,    -1,    -1,   182,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   193,    -1,    -1,
      -1,   197,   198,   199,    -1,    -1,   202,   203,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   215,
      -1,    -1,    -1,   219,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    43,    -1,
     236,    46,   238,   239,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   251,    -1,   253,    -1,    -1,
      -1,    66,    -1,    -1,   260,    70,    71,    72,   264,    -1,
      -1,    -1,   268,    -1,   270,    80,   272,    82,    -1,    -1,
      -1,   277,    87,    -1,    89,    90,    91,    -1,    -1,    -1,
      -1,    -1,    97,    -1,    99,    -1,   292,    -1,    -1,    -1,
      -1,    -1,   298,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   315,
     316,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,
      -1,    -1,   328,    -1,   330,    -1,    -1,    -1,    -1,    -1,
      -1,   337,    -1,    -1,   340,   341,    -1,   152,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   161,    -1,   163,   164,
      -1,   166,   167,    -1,    -1,   170,    -1,    -1,    -1,   174,
      -1,   176,    -1,    -1,    -1,   371,    -1,   182,    -1,    -1,
      -1,    -1,   378,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   202,   203,    -1,
      -1,    -1,   207,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     215,    -1,    -1,    -1,   219,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   236,    -1,   238,    -1,    -1,    -1,    -1,    -1,    -1,
     245,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   270,    -1,   272,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   298,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     315,   316,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     325,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   333,    -1,
      -1,    -1,    -1,    -1,   339,    -1,   341,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   378
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    40,    43,    46,    60,    65,    66,    70,    71,    72,
      80,    87,    89,    90,    99,   100,   125,   135,   148,   152,
     156,   160,   161,   166,   167,   170,   176,   182,   193,   197,
     198,   199,   202,   203,   215,   219,   236,   238,   239,   251,
     253,   260,   264,   268,   270,   272,   277,   292,   298,   315,
     316,   328,   330,   337,   340,   341,   371,   378,   384,    67,
      11,    54,    74,   104,   126,   130,   145,   321,   418,     3,
       4,   321,   385,   423,   207,   213,   255,   282,   332,   377,
     425,   312,     4,    39,   117,   166,   167,   214,   215,   270,
     430,    27,   162,   191,   195,   252,   294,   303,   304,   400,
     432,    86,   103,   193,   241,   277,   433,    39,    60,   117,
     214,   316,   385,   442,     4,    18,    39,    57,   105,   127,
     171,   214,   224,   232,   233,   239,   244,   324,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   374,   379,   380,
     387,   395,   396,   397,   444,    32,   445,   387,    43,    46,
      79,    87,   153,   212,   240,   242,   270,   341,   386,   387,
      65,   385,   447,   156,   448,    40,    43,    46,    66,    70,
      71,    72,    80,    82,    87,    89,    90,    91,    97,    99,
     134,   152,   161,   163,   164,   166,   167,   170,   174,   176,
     182,   202,   203,   207,   215,   219,   236,   238,   245,   270,
     272,   298,   315,   316,   325,   333,   339,   341,   378,   449,
      86,   103,   498,    18,    40,    43,    80,    87,    98,    99,
     105,   134,   152,   170,   171,   177,   202,   244,   298,   310,
     341,   501,    67,   387,    62,   310,   335,   584,    62,   310,
     335,   583,    91,   122,   205,   222,   286,   330,   341,   507,
      15,     4,    45,    48,    67,    86,   103,   109,   160,   183,
     292,   319,   320,   331,   335,   566,    25,   118,   134,   173,
     229,   243,   510,   254,   528,     5,    67,    91,   150,   330,
     378,   387,   529,     5,   530,    58,   141,   249,   264,   332,
     546,    45,    65,    67,   201,   263,   310,   320,   567,   310,
     582,    67,   225,   373,   379,   381,   568,    38,   214,   255,
     321,   385,   395,   397,   569,     5,   330,   341,   387,   572,
      73,   186,   269,   279,   573,     4,   574,    91,   546,    62,
     310,   335,   581,   214,   321,   385,   585,    25,   118,   134,
     229,   243,   587,    51,   103,   114,   147,   323,   608,   609,
       4,    36,    47,    77,   161,   206,   279,   309,   317,   335,
     413,     4,   134,   228,   610,   321,   385,   612,    15,    22,
     265,   268,   396,   613,   254,   617,   321,   385,   618,     0,
       5,   387,    60,   385,   419,   295,     5,     4,   321,   385,
     420,     5,    31,   308,   421,   133,   385,   422,   133,   385,
     424,   385,     4,   213,   267,   274,   428,   207,   332,   376,
     377,   385,   427,   387,   149,   194,   426,   219,   385,    81,
     190,   274,   385,   429,     5,   385,   385,   385,     4,   166,
     167,   215,   270,   431,     4,   385,   385,     5,   250,   434,
      30,   435,     5,   436,     5,   440,     5,    30,   441,   385,
       8,     9,    10,   385,   391,   392,   393,   394,   385,   385,
      39,   117,   214,   385,   443,   385,   214,   395,   397,   385,
      34,   112,   137,   138,   146,   168,   178,   402,   385,     4,
     387,   387,   387,   387,   387,   387,   387,   387,   387,   387,
     124,    67,    54,    74,    91,   104,   126,   130,   145,   192,
     452,   126,   454,   207,   213,   255,   282,   332,   376,   377,
     385,   437,   455,   312,   458,   186,   459,   186,   195,   461,
      66,    67,    72,    95,   186,   206,   230,   298,   370,   395,
     463,   385,   397,   466,    60,   316,   395,   467,   307,   395,
     397,   468,    32,   469,   395,   397,   470,     4,   395,   397,
     471,    44,    60,    84,   104,   124,   128,   158,   159,   221,
     231,   295,   296,   370,   475,   235,   334,   481,    67,     5,
      92,    62,   310,   335,   489,    62,   310,   335,   488,     4,
      91,   128,   473,     5,    66,   397,   472,    15,    45,    67,
      84,   183,   320,   335,   482,   546,    45,    67,    84,   201,
     263,   310,   320,   483,   310,   487,    67,   255,   485,   311,
      62,   310,   335,   486,    20,   145,   262,   293,   490,    36,
      47,    77,   161,   206,   279,   335,   491,   397,    92,    15,
     218,   496,   395,   499,    67,    75,   502,    30,   503,    43,
      90,   212,   504,   161,   241,   285,   326,   505,   395,    17,
      59,   121,   191,   316,   395,   506,     5,     5,   165,   278,
     333,   395,     4,     5,   165,   278,   395,     4,     4,   213,
     509,     5,     4,     4,   128,   385,     4,    45,    48,    67,
     103,   109,   160,   292,   319,   320,   331,   335,    67,    68,
      69,    94,   107,   123,   155,   165,   187,   196,   216,   237,
     278,   283,   299,   302,   399,     5,     4,   385,   387,     5,
     166,   167,   270,   511,     5,   513,     5,   124,   166,   167,
     212,   270,   296,   514,    97,   117,   207,   527,     5,   525,
       5,   296,   526,     4,     5,   387,   387,   385,   385,     5,
       4,     5,    61,    67,    76,    78,    83,    86,    92,   103,
     111,   120,   139,   161,   179,   192,   193,   217,   241,   255,
     257,   272,   277,   285,   292,   312,   326,   327,   329,   370,
     531,   399,     5,     4,   219,   226,   227,   263,   375,   398,
     385,   395,   385,   395,     5,   385,    39,   117,   385,   571,
     387,   385,   395,   397,   570,   385,   402,   385,     4,   396,
      55,    93,   151,   270,   575,     4,     4,   385,     4,   161,
     285,   576,     5,   395,     4,    39,   117,   385,   586,   385,
     101,    62,   128,   166,   167,   270,   300,   588,   128,   607,
      62,   124,   128,   166,   167,   171,   212,   266,   270,   296,
     300,   311,   589,   590,    62,   128,   300,   606,     5,     4,
      33,   113,   225,   580,    67,   387,   414,    67,   387,   415,
      67,   387,   416,    12,   132,   209,   579,   385,     4,   385,
     248,   385,   417,   385,   296,     4,   385,   385,     4,   249,
     321,   616,     4,   314,   614,     4,   314,   615,     4,   402,
     133,   385,   619,   385,   385,     4,     5,   385,    11,   385,
     385,   385,    29,    98,   177,   274,   280,   401,   401,     4,
     219,   385,   385,     4,     4,     4,   385,   385,   385,   385,
     385,   385,     4,   385,     4,   385,     4,     4,     5,     5,
     395,     5,   385,   385,   391,   393,   393,   395,   385,   385,
     385,   385,   385,   385,   385,   395,   397,   394,   385,   385,
     394,   385,     5,   295,   108,   207,   453,   213,   274,   456,
     186,    81,   190,   274,   457,   149,   194,   438,   438,     4,
     460,     4,   462,   213,   282,   464,   195,   465,   186,   402,
     385,   385,   395,   395,   402,   402,   402,   395,   402,   385,
     395,     4,   478,     4,   397,   476,   218,     4,   180,   341,
     477,   218,   395,     4,   142,   321,   480,     5,     5,   450,
       4,   218,   144,   271,   388,   385,     4,   484,   484,   484,
     484,     4,     5,    61,    67,   120,   139,   154,   161,   169,
     230,   250,   255,   257,   284,   285,   292,   312,   370,   540,
     397,   208,   208,    67,   492,    67,   493,    67,   494,   248,
     495,   385,     5,   451,   249,   497,   396,   402,     5,   395,
     395,   395,   395,     4,     4,     4,   387,     4,     4,   218,
     385,   399,     5,   385,   387,    13,    14,    62,   210,   211,
     289,   300,   301,   334,    90,    90,    90,     5,     5,    13,
      14,    62,   210,   211,   289,   300,   301,   305,   334,    90,
      90,   171,    90,   171,   171,   176,   396,   517,   522,    90,
     171,     5,   515,     4,     4,    13,    62,   210,   289,   300,
     334,     5,     5,     4,   385,   396,    19,    20,    21,    49,
      50,    53,    56,    63,    67,    77,    78,    85,    86,   103,
     111,   115,   116,   119,   139,   161,   190,   217,   248,   250,
     256,   257,   272,   273,   284,   285,   312,   314,   327,   329,
     336,   370,    67,    83,    92,   103,   139,   161,   217,   257,
     285,   327,   329,     4,    29,   175,   235,   262,   534,     5,
      64,   110,   259,   275,   276,   372,   373,   539,   103,   532,
      16,   285,   537,    39,   117,   214,   538,     4,     5,    16,
     234,   322,   385,   285,   539,   547,   134,   539,   548,    35,
      39,   117,   143,   214,   321,   385,   549,   395,   387,    95,
     103,   111,   129,   136,   161,   172,   217,   225,   272,   285,
     302,   552,    39,   117,   214,     5,   285,   313,   556,    16,
     131,   184,   234,   322,   557,   314,   387,   558,     5,   103,
     111,   330,    16,    16,     4,   385,   385,   385,   385,   385,
     385,   402,   385,   385,   394,   385,     4,   402,     4,    39,
     117,   214,   290,   577,    39,   117,   214,   290,   578,     4,
     101,     5,     5,    90,    90,    90,     4,     5,     5,    90,
       5,    90,   171,    90,   171,   590,    62,   128,   171,   300,
     594,    62,   128,   300,   605,    90,   171,    62,   128,   300,
     592,     4,    62,   128,   300,   591,     5,     5,     4,     4,
       5,     5,     5,   385,   385,   385,     4,   385,   611,   385,
     385,   396,    65,     4,     4,     5,     4,     4,     5,     4,
     101,   287,   403,   385,   385,    11,     5,    11,   385,   385,
      11,     4,    11,     4,     4,   385,   385,   385,   385,   385,
       4,   385,     5,   385,     4,   387,     4,     4,   402,   395,
     402,   385,   385,   385,   395,   385,   394,   385,   385,     5,
       5,   385,   397,   385,   395,   385,   402,   402,   403,   403,
     403,   402,   394,   385,   402,   385,   388,   479,   180,     5,
       4,   402,   171,   171,     4,     5,     4,     4,   385,   474,
      37,    37,   385,    19,    20,    21,    49,    50,    53,    60,
      63,    67,    77,    78,    85,   115,   116,   119,   139,   161,
     190,   200,   248,   256,   257,   273,   285,   312,   314,   325,
     336,   370,    67,   139,   169,   257,   312,    29,   175,   235,
     262,   541,   385,   230,   385,   542,    16,   385,   284,   552,
     284,   230,   385,   543,   314,   544,    16,   102,   385,   385,
       5,   403,     4,     4,    57,   395,     4,     5,   508,   385,
       5,     5,     5,   171,   203,   407,   407,   179,   291,   405,
       4,     4,     5,     5,   512,   512,   512,   297,   297,     5,
       5,     5,    16,   173,   406,   406,   405,     4,     4,   405,
       5,     5,   516,     5,   523,     5,   524,   523,   524,   176,
     369,   396,   520,     5,   519,     5,   523,   524,     5,    13,
      14,    62,   210,   211,   289,   300,   301,   305,   334,     4,
       4,     5,     5,   407,   405,     4,     5,     5,   402,    85,
     163,   246,   247,   261,   306,   410,     6,     7,   385,   390,
     262,   262,   262,   111,    39,    67,   103,   111,   117,   139,
     161,   179,   217,   257,   272,   285,   314,   327,   329,   330,
     370,   533,   262,     5,    26,   181,   262,   310,   149,   111,
      21,    50,    53,    85,   116,   119,   250,   284,    21,    50,
      53,    56,    85,   116,   119,   250,   284,   312,    39,   262,
     262,   111,     5,   234,    26,   248,    35,   143,   321,   385,
     288,   295,   268,   395,   552,    39,   140,   248,   310,   268,
     234,     5,     5,   272,    26,   248,     4,     5,     5,   234,
      35,   143,   321,   385,   552,   234,   387,     4,     4,   385,
       5,   334,    21,    26,    49,    50,    52,    53,    63,    77,
      78,    85,    88,   106,   115,   116,   119,   190,   250,   256,
     273,   284,   313,   314,   336,   381,   535,   385,   385,   385,
     385,   385,   539,   395,     5,     4,     5,   385,   385,   395,
     385,   387,   385,   385,   539,     5,     5,   385,   385,   387,
       5,    16,     5,     5,   385,   385,   394,   385,   385,     4,
     385,   385,   117,   385,   385,   117,     4,    41,    42,   188,
     189,   220,   412,   412,    62,   128,   300,   602,    62,   128,
     300,   599,    62,   128,   300,   596,   412,     5,    62,   128,
     300,   593,    62,   128,   300,   604,    62,   128,   300,   603,
      62,   128,   300,   601,    62,   128,   300,   600,     5,     5,
      62,   128,   300,   595,     4,     5,     5,     4,    62,   128,
     300,   598,    62,   128,   300,   597,     5,     5,     4,     5,
       5,     4,   412,   412,   412,   385,   385,   385,     4,   395,
     385,   402,   396,     5,     5,    11,   385,   395,   397,   385,
      11,   385,   385,   385,    60,   385,     4,   385,   385,     4,
     385,   385,     5,   385,     5,   385,    46,   298,   439,     5,
     387,   387,   402,   385,     4,     4,     4,   402,   395,   385,
     385,   385,   385,   402,   395,   403,   394,   385,     4,   403,
     385,     4,   397,     5,    23,    24,   101,   404,     4,   395,
     385,   385,     4,   385,     5,    85,   163,   246,   247,   261,
     306,   395,   397,   262,   262,   262,    20,   262,   395,   262,
      26,   181,   262,   310,   149,    20,   262,   262,   262,    20,
     262,    26,   185,   248,   185,   288,   295,   185,   248,   318,
     552,   140,   185,   248,   310,     4,   272,    26,   185,   248,
     552,   230,   385,   385,   385,   385,   385,   385,   218,   385,
     385,    19,   258,   500,     4,     4,   385,   407,   407,   407,
       4,   407,   407,   407,    13,    14,    62,   210,   211,   289,
     300,   301,   334,   406,   407,   407,   407,   407,   407,     4,
     407,   407,     4,   406,    13,    14,    62,   210,   211,   289,
     300,   301,   334,     5,    13,    14,    62,   210,   211,   289,
     300,   301,   305,   334,    13,    14,    62,   210,   211,   289,
     300,   301,   334,     5,   518,     5,   521,     5,     5,    13,
      14,    62,   210,   211,   289,   300,   301,   305,   334,     5,
      13,    14,    62,   210,   211,   289,   300,   301,   305,   334,
     297,     5,     5,     5,   406,   406,   405,     4,     4,   405,
       5,     4,     4,   407,   407,     4,   407,   407,     5,   387,
     395,   397,     5,   385,   385,     5,   385,     5,   390,   111,
     217,   272,   111,   217,   272,     5,   385,   387,     5,   385,
     395,   387,     5,   390,   262,   262,    20,   262,    20,   262,
     262,    20,   262,   338,   338,     4,     4,     4,   533,     4,
       4,     4,   338,   338,     4,     5,     4,   385,     5,   385,
       5,   390,   387,   395,   395,   385,    26,    49,    52,    63,
      88,   106,   381,   408,     4,   385,   402,   387,     5,   395,
     395,   385,   387,   387,   395,   395,   385,   387,   385,     5,
     385,   248,   248,   385,   385,   248,   385,   248,   385,   385,
     545,   553,   385,   248,   248,   385,   385,   385,   385,   385,
     385,   385,   385,     5,   334,   385,   536,   385,   385,   248,
     385,   385,   385,   385,   395,   402,     5,     4,     4,   385,
     385,   402,   385,   385,   385,   395,   539,   385,   385,     5,
       4,   385,   385,   385,   385,     5,     5,     4,     5,     5,
       4,     5,     5,     4,   412,     5,     5,     4,     5,     5,
       4,     5,     5,     4,     5,     5,     4,     5,     5,     4,
       4,     4,     5,     5,     4,     4,     5,     5,     4,     5,
       5,     4,   385,   385,   385,   385,   402,   385,   395,   397,
     385,   402,   385,   385,   385,   385,   385,     5,   385,   385,
     385,     4,   385,   385,     5,   385,     5,   385,     4,   395,
     385,   402,   195,   400,   385,   400,   403,   402,   395,   385,
     385,     4,   385,   395,   395,   385,   388,     5,     5,     5,
       5,     5,   395,   402,   395,   395,   395,   395,   397,   395,
     402,   395,   395,   395,   397,   395,   395,   395,   395,   397,
     395,   395,   395,   385,   395,   395,   395,   395,   395,   395,
     395,   385,   385,     4,   385,     5,   385,   407,     5,     5,
       5,   405,     4,     4,     5,   407,   406,     4,   407,     5,
       5,     5,   406,   406,   405,     4,     4,     5,   297,     5,
       5,     5,   406,   406,   405,     4,     4,   405,     5,     5,
       5,     5,   406,   406,   405,     4,     4,     5,    13,    14,
      62,   210,   211,   289,   300,   301,   334,    13,    14,    62,
     210,   211,   289,   300,   301,   334,    13,    14,    62,   210,
     211,   289,   300,   301,   334,   297,     5,     5,     5,   406,
     406,   405,     4,     4,   405,     5,   297,     5,     5,     5,
     406,   406,   405,     4,     4,   405,     5,   406,     4,     4,
     406,     4,     4,   407,     5,   402,   395,   385,   385,   395,
     385,     5,   390,     5,   395,   387,     5,   395,   402,     5,
     390,   385,   385,   385,   385,   385,   385,   385,   385,   385,
       4,     4,     5,     4,     4,   385,   395,   385,     5,   390,
     387,   402,   402,   385,   394,   402,   402,   385,   402,   402,
     385,   385,   385,   385,   385,   385,   385,   385,   385,   385,
      56,    67,    96,   139,   312,   314,   370,   550,   551,   552,
     564,   565,   385,   385,   385,   385,   385,   385,   385,   385,
     385,   385,   385,   385,   395,     5,   385,   385,   385,   385,
       4,     4,   402,   403,     5,     5,   394,   385,     4,   402,
     395,     4,   412,   412,   412,   412,   412,   412,   412,   412,
     412,   390,   385,   385,   385,   402,   385,   394,   385,   385,
      11,     5,     5,   385,   385,   385,   385,     5,   385,     4,
     385,     4,   402,   395,   385,   385,   403,   404,   385,     5,
     385,   395,   397,     5,     5,     5,     5,     5,   402,   404,
     404,   404,   402,   404,   403,   404,   404,   402,   404,   404,
     404,   402,   404,   404,   402,   395,   404,   402,   404,   404,
     402,   404,   402,     4,   395,   397,     5,   385,     4,   407,
     406,     4,   406,   406,     4,     4,   406,     4,   406,     5,
       5,     5,   406,   406,   405,     4,     4,     5,     5,     5,
       5,   406,   406,   405,     4,     4,     5,     5,     5,     5,
     406,   406,   405,     4,     4,     5,   406,   407,   407,   407,
     407,   407,     4,   407,   407,     4,   406,   406,   407,   407,
     407,   407,   407,     4,   407,   407,     4,   406,   406,     4,
       4,     4,   396,   404,     4,   395,   404,   385,   395,     4,
     404,   404,   395,     4,   385,   385,   385,   385,   385,   385,
     385,   385,   385,   385,   385,   395,   404,   385,   395,     4,
     394,   394,   395,   394,   394,   395,   395,   394,   394,   385,
     385,   385,   385,   385,   385,   390,   385,   385,   385,   382,
     382,   382,   382,   382,   382,   382,   551,   382,   390,   385,
     385,   385,   385,   390,   385,   385,   385,   385,   385,   385,
     402,   385,   334,   389,   390,   385,   385,   403,   387,   395,
     395,   403,   402,     4,   385,   394,   385,    60,   385,     5,
       5,     4,     4,   385,   385,     4,   385,     4,   400,   404,
       5,   402,     4,     5,     4,     5,   395,     5,   403,   404,
     403,   403,   403,     5,   402,     4,   385,   407,   406,   406,
       4,   406,   407,   407,   407,   407,   407,     4,   407,   407,
     406,   407,   407,   407,   407,   407,     4,   407,   407,   406,
     407,   407,   407,   407,   407,     4,   407,   407,   406,   407,
     406,     4,   407,   407,   406,     4,   407,   406,   402,   395,
     404,     4,   402,   385,   402,   385,   385,   385,   404,     4,
     402,   385,   394,   404,   385,   394,   404,   404,   395,   385,
       4,   409,   409,   385,   385,   409,   390,   409,   553,   395,
     533,     5,     4,     5,     5,     5,     4,   387,   390,   409,
     409,   385,   385,   390,   385,   385,   385,   385,   385,   394,
     385,     5,   553,   385,   409,   387,   554,   555,   402,   402,
     387,   403,     4,     5,   385,     5,     4,     4,     4,     4,
       4,     4,   385,     4,    31,   204,   308,   446,   395,     5,
      31,   204,   308,   411,   395,     4,   446,   385,   406,   406,
     407,   406,   407,   406,   407,   407,   406,   407,   406,   385,
     404,   395,   395,   385,   395,   385,   395,   395,   385,   395,
     404,     4,   553,   553,   389,   385,   553,     4,   553,   402,
       5,     4,     4,   553,   553,   389,   385,     4,   553,   553,
     385,   395,   553,   553,   553,   554,   561,   562,   552,   559,
     560,   387,     4,     5,     5,     4,     4,     4,   207,   332,
     377,   385,   437,   446,     4,   395,   446,     4,   407,   407,
     407,   407,   407,   396,   404,   404,   385,   404,     4,   404,
     404,   385,   404,   385,   553,   553,     4,   385,   553,     5,
     385,   553,     4,   385,   553,   402,   561,   563,   564,   382,
     560,     5,     5,   385,   438,   385,   438,   402,   404,     4,
     395,   397,     4,   390,   389,   385,   385,   389,   385,   395,
     564,   387,     5,     5,   385,   385,   385,   385,   411,     5,
     395,   397,   402,   395,   397,   553,   385,     4,   553,   385,
     404,     5,     5,   385,     5,   385,   402,   402,     4,   553,
       4,     5,     5,     5,   389,   389,   553,   553,   553
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
#line 490 "frame/parser.Y"
    {fr->bgColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 5:
#line 491 "frame/parser.Y"
    {fr->useBgColorCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 7:
#line 493 "frame/parser.Y"
    {fr->centerCmd();;}
    break;

  case 8:
#line 494 "frame/parser.Y"
    {fr->clearCmd();;}
    break;

  case 10:
#line 496 "frame/parser.Y"
    {fr->colorbarTagCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 17:
#line 503 "frame/parser.Y"
    {fr->DATASECCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 23:
#line 509 "frame/parser.Y"
    {fr->hideCmd();;}
    break;

  case 24:
#line 510 "frame/parser.Y"
    {fr->highliteCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 25:
#line 511 "frame/parser.Y"
    {fr->highliteColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 29:
#line 515 "frame/parser.Y"
    {fr->irafAlignCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 38:
#line 524 "frame/parser.Y"
    {fr->nanColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 42:
#line 528 "frame/parser.Y"
    {fr->queryCursorCmd();;}
    break;

  case 45:
#line 531 "frame/parser.Y"
    {fr->resetCmd();;}
    break;

  case 50:
#line 536 "frame/parser.Y"
    {fr->showCmd();;}
    break;

  case 52:
#line 538 "frame/parser.Y"
    {fr->threadsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 54:
#line 540 "frame/parser.Y"
    {fr->unloadFitsCmd();;}
    break;

  case 56:
#line 542 "frame/parser.Y"
    {fr->msg("Frame 1.0");;}
    break;

  case 61:
#line 549 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 62:
#line 550 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 63:
#line 553 "frame/parser.Y"
    {yydebug=(yyvsp[(1) - (1)].integer);;}
    break;

  case 64:
#line 554 "frame/parser.Y"
    {DebugMosaic=(yyvsp[(2) - (2)].integer);;}
    break;

  case 65:
#line 555 "frame/parser.Y"
    {yydebug=(yyvsp[(2) - (2)].integer);;}
    break;

  case 66:
#line 556 "frame/parser.Y"
    {DebugPerf=(yyvsp[(2) - (2)].integer);;}
    break;

  case 67:
#line 557 "frame/parser.Y"
    {DebugWCS=(yyvsp[(2) - (2)].integer);;}
    break;

  case 68:
#line 558 "frame/parser.Y"
    {DebugBin=(yyvsp[(2) - (2)].integer);;}
    break;

  case 69:
#line 559 "frame/parser.Y"
    {DebugBlock=(yyvsp[(2) - (2)].integer);;}
    break;

  case 70:
#line 560 "frame/parser.Y"
    {DebugCompress=(yyvsp[(2) - (2)].integer);;}
    break;

  case 71:
#line 561 "frame/parser.Y"
    {DebugCrop=(yyvsp[(2) - (2)].integer);;}
    break;

  case 72:
#line 562 "frame/parser.Y"
    {DebugGZ=(yyvsp[(2) - (2)].integer);;}
    break;

  case 73:
#line 563 "frame/parser.Y"
    {DebugRGB=(yyvsp[(2) - (2)].integer);;}
    break;

  case 74:
#line 566 "frame/parser.Y"
    {(yyval.integer)=((yyvsp[(1) - (1)].integer) ? 1 : 0);;}
    break;

  case 75:
#line 568 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 76:
#line 569 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 77:
#line 570 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 78:
#line 571 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 79:
#line 573 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 80:
#line 574 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 81:
#line 575 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 82:
#line 576 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 83:
#line 579 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 84:
#line 580 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 85:
#line 581 "frame/parser.Y"
    {(yyval.integer) = Base::FULLBASE;;}
    break;

  case 86:
#line 582 "frame/parser.Y"
    {(yyval.integer) = Base::ROOT;;}
    break;

  case 87:
#line 583 "frame/parser.Y"
    {(yyval.integer) = Base::FULL;;}
    break;

  case 88:
#line 586 "frame/parser.Y"
    {(yyval.real) = 0;;}
    break;

  case 89:
#line 587 "frame/parser.Y"
    {(yyval.real) = (yyvsp[(1) - (1)].real);;}
    break;

  case 90:
#line 590 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 91:
#line 591 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 92:
#line 592 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 93:
#line 595 "frame/parser.Y"
    {(yyval.real) = parseSEXStr((yyvsp[(1) - (1)].str));;}
    break;

  case 94:
#line 598 "frame/parser.Y"
    {(yyval.real) = parseHMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 95:
#line 601 "frame/parser.Y"
    {(yyval.real) = parseDMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 96:
#line 605 "frame/parser.Y"
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
#line 617 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 98:
#line 624 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 99:
#line 631 "frame/parser.Y"
    {
	  (yyval.vector)[0] = (yyvsp[(1) - (2)].real);
	  (yyval.vector)[1] = (yyvsp[(2) - (2)].real);
	  (yyval.vector)[2] = 1;
	;}
    break;

  case 100:
#line 638 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::IMAGE;;}
    break;

  case 101:
#line 639 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::PHYSICAL;;}
    break;

  case 102:
#line 640 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::DETECTOR;;}
    break;

  case 103:
#line 641 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::AMPLIFIER;;}
    break;

  case 104:
#line 642 "frame/parser.Y"
    {(yyval.integer) = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 105:
#line 645 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS;;}
    break;

  case 106:
#line 646 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSA;;}
    break;

  case 107:
#line 647 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSB;;}
    break;

  case 108:
#line 648 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSC;;}
    break;

  case 109:
#line 649 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSD;;}
    break;

  case 110:
#line 650 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSE;;}
    break;

  case 111:
#line 651 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSF;;}
    break;

  case 112:
#line 652 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSG;;}
    break;

  case 113:
#line 653 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSH;;}
    break;

  case 114:
#line 654 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSI;;}
    break;

  case 115:
#line 655 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSJ;;}
    break;

  case 116:
#line 656 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSK;;}
    break;

  case 117:
#line 657 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSL;;}
    break;

  case 118:
#line 658 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSM;;}
    break;

  case 119:
#line 659 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSN;;}
    break;

  case 120:
#line 660 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSO;;}
    break;

  case 121:
#line 661 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSP;;}
    break;

  case 122:
#line 662 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSQ;;}
    break;

  case 123:
#line 663 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSR;;}
    break;

  case 124:
#line 664 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSS;;}
    break;

  case 125:
#line 665 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCST;;}
    break;

  case 126:
#line 666 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSU;;}
    break;

  case 127:
#line 667 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSV;;}
    break;

  case 128:
#line 668 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSW;;}
    break;

  case 129:
#line 669 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSX;;}
    break;

  case 130:
#line 670 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSY;;}
    break;

  case 131:
#line 671 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSZ;;}
    break;

  case 132:
#line 672 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS0;;}
    break;

  case 133:
#line 675 "frame/parser.Y"
    {(yyval.integer) = Coord::CANVAS;;}
    break;

  case 134:
#line 676 "frame/parser.Y"
    {(yyval.integer) = Coord::PANNER;;}
    break;

  case 135:
#line 679 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 136:
#line 680 "frame/parser.Y"
    {(yyval.integer) = FitsMask::ZERO;;}
    break;

  case 137:
#line 681 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 138:
#line 682 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NaN;;}
    break;

  case 139:
#line 683 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONNaN;;}
    break;

  case 140:
#line 684 "frame/parser.Y"
    {(yyval.integer) = FitsMask::RANGE;;}
    break;

  case 141:
#line 687 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 142:
#line 688 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 143:
#line 689 "frame/parser.Y"
    {(yyval.integer) = FitsMask::MULTIPLY;;}
    break;

  case 144:
#line 690 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SCREEN;;}
    break;

  case 145:
#line 691 "frame/parser.Y"
    {(yyval.integer) = FitsMask::OVERLAY;;}
    break;

  case 146:
#line 692 "frame/parser.Y"
    {(yyval.integer) = FitsMask::DARKEN;;}
    break;

  case 147:
#line 693 "frame/parser.Y"
    {(yyval.integer) = FitsMask::LIGHTEN;;}
    break;

  case 148:
#line 694 "frame/parser.Y"
    {(yyval.integer) = FitsMask::COLOR_DODGE;;}
    break;

  case 149:
#line 695 "frame/parser.Y"
    {(yyval.integer) = FitsMask::COLOR_BURN;;}
    break;

  case 150:
#line 696 "frame/parser.Y"
    {(yyval.integer) = FitsMask::HARD_LIGHT;;}
    break;

  case 151:
#line 697 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOFT_LIGHT;;}
    break;

  case 152:
#line 698 "frame/parser.Y"
    {(yyval.integer) = FitsMask::DIFFERENCE;;}
    break;

  case 153:
#line 699 "frame/parser.Y"
    {(yyval.integer) = FitsMask::EXCLUSION;;}
    break;

  case 154:
#line 700 "frame/parser.Y"
    {(yyval.integer) = FitsMask::HUE;;}
    break;

  case 155:
#line 701 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SATURATION;;}
    break;

  case 156:
#line 702 "frame/parser.Y"
    {(yyval.integer) = FitsMask::COLOR;;}
    break;

  case 157:
#line 703 "frame/parser.Y"
    {(yyval.integer) = FitsMask::LUMINOSITY;;}
    break;

  case 158:
#line 706 "frame/parser.Y"
    {(yyval.integer) = FrScale::LINEARSCALE;;}
    break;

  case 159:
#line 707 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOGSCALE;;}
    break;

  case 160:
#line 708 "frame/parser.Y"
    {(yyval.integer) = FrScale::POWSCALE;;}
    break;

  case 161:
#line 709 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQRTSCALE;;}
    break;

  case 162:
#line 710 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQUAREDSCALE;;}
    break;

  case 163:
#line 711 "frame/parser.Y"
    {(yyval.integer) = FrScale::ASINHSCALE;;}
    break;

  case 164:
#line 712 "frame/parser.Y"
    {(yyval.integer) = FrScale::SINHSCALE;;}
    break;

  case 165:
#line 713 "frame/parser.Y"
    {(yyval.integer) = FrScale::HISTEQUSCALE;;}
    break;

  case 166:
#line 716 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 167:
#line 717 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 168:
#line 718 "frame/parser.Y"
    {(yyval.integer)=FrScale::SAMPLE;;}
    break;

  case 169:
#line 719 "frame/parser.Y"
    {(yyval.integer)=FrScale::DATAMIN;;}
    break;

  case 170:
#line 720 "frame/parser.Y"
    {(yyval.integer)=FrScale::IRAFMIN;;}
    break;

  case 171:
#line 723 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 172:
#line 724 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 173:
#line 725 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 174:
#line 726 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 175:
#line 727 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 176:
#line 728 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 177:
#line 729 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::GALACTIC;;}
    break;

  case 178:
#line 730 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ECLIPTIC;;}
    break;

  case 179:
#line 733 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 180:
#line 734 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 181:
#line 735 "frame/parser.Y"
    {(yyval.integer)=Coord::SEXAGESIMAL;;}
    break;

  case 182:
#line 738 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 183:
#line 739 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 184:
#line 740 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCMIN;;}
    break;

  case 185:
#line 741 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCSEC;;}
    break;

  case 186:
#line 744 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 187:
#line 745 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 188:
#line 746 "frame/parser.Y"
    {(yyval.integer) = Base::KEY;;}
    break;

  case 189:
#line 749 "frame/parser.Y"
    {;}
    break;

  case 190:
#line 750 "frame/parser.Y"
    {;}
    break;

  case 191:
#line 751 "frame/parser.Y"
    {;}
    break;

  case 192:
#line 754 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 193:
#line 755 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 194:
#line 756 "frame/parser.Y"
    {(yyval.integer) = Base::MASK;;}
    break;

  case 195:
#line 759 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 196:
#line 760 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 197:
#line 761 "frame/parser.Y"
    {(yyval.integer) = Point::BOX;;}
    break;

  case 198:
#line 762 "frame/parser.Y"
    {(yyval.integer) = Point::DIAMOND;;}
    break;

  case 199:
#line 763 "frame/parser.Y"
    {(yyval.integer) = Point::CROSS;;}
    break;

  case 200:
#line 764 "frame/parser.Y"
    {(yyval.integer) = Point::EX;;}
    break;

  case 201:
#line 765 "frame/parser.Y"
    {(yyval.integer) = Point::ARROW;;}
    break;

  case 202:
#line 766 "frame/parser.Y"
    {(yyval.integer) = Point::BOXCIRCLE;;}
    break;

  case 203:
#line 769 "frame/parser.Y"
    {(yyval.integer) = POINTSIZE;;}
    break;

  case 204:
#line 770 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 205:
#line 773 "frame/parser.Y"
    {(yyval.integer) = Marker::PANDA;;}
    break;

  case 206:
#line 774 "frame/parser.Y"
    {(yyval.integer) = Marker::HISTOGRAM;;}
    break;

  case 207:
#line 775 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT2D;;}
    break;

  case 208:
#line 776 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT3D;;}
    break;

  case 209:
#line 777 "frame/parser.Y"
    {(yyval.integer) = Marker::RADIAL;;}
    break;

  case 210:
#line 778 "frame/parser.Y"
    {(yyval.integer) = Marker::STATS;;}
    break;

  case 211:
#line 781 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 212:
#line 782 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 213:
#line 783 "frame/parser.Y"
    {(yyval.integer) = Marker::SUM;;}
    break;

  case 214:
#line 784 "frame/parser.Y"
    {(yyval.integer) = Marker::MEDIAN;;}
    break;

  case 215:
#line 787 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 216:
#line 788 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 217:
#line 789 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 218:
#line 790 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 219:
#line 791 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 220:
#line 792 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 225:
#line 799 "frame/parser.Y"
    {fr->set3dRenderMethodCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 226:
#line 800 "frame/parser.Y"
    {fr->set3dRenderBackgroundCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 227:
#line 801 "frame/parser.Y"
    {fr->set3dScaleCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 228:
#line 802 "frame/parser.Y"
    {fr->set3dSyncCmd((yyvsp[(2) - (2)].integer));}
    break;

  case 229:
#line 804 "frame/parser.Y"
    {/* needed for compatibility with old version of backup */;}
    break;

  case 230:
#line 807 "frame/parser.Y"
    {fr->set3dBorderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 231:
#line 808 "frame/parser.Y"
    {fr->set3dBorderColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 232:
#line 811 "frame/parser.Y"
    {fr->set3dCompassCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 233:
#line 812 "frame/parser.Y"
    {fr->set3dCompassColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 234:
#line 815 "frame/parser.Y"
    {fr->set3dHighliteCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 235:
#line 816 "frame/parser.Y"
    {fr->set3dHighliteColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 236:
#line 819 "frame/parser.Y"
    {fr->set3dViewCmd((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));;}
    break;

  case 237:
#line 821 "frame/parser.Y"
    {fr->set3dViewPointCmd(Vector3d((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 239:
#line 825 "frame/parser.Y"
    {fr->binColsCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 240:
#line 826 "frame/parser.Y"
    {fr->binDepthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 243:
#line 829 "frame/parser.Y"
    {fr->binBufferSizeCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 245:
#line 831 "frame/parser.Y"
    {fr->binFilterCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 246:
#line 834 "frame/parser.Y"
    {fr->binAboutCmd();;}
    break;

  case 247:
#line 835 "frame/parser.Y"
    {fr->binAboutCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 248:
#line 838 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 249:
#line 839 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 250:
#line 841 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(1) - (4)].real)), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 251:
#line 843 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 252:
#line 844 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 253:
#line 845 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 254:
#line 847 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 255:
#line 849 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 256:
#line 852 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::AVERAGE);;}
    break;

  case 257:
#line 853 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::SUM);;}
    break;

  case 258:
#line 856 "frame/parser.Y"
    {fr->binToFitCmd();;}
    break;

  case 259:
#line 858 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (7)].real),(yyvsp[(2) - (7)].real)), (yyvsp[(5) - (7)].str), (yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].str));;}
    break;

  case 260:
#line 861 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (11)].real),(yyvsp[(2) - (11)].real)), (yyvsp[(3) - (11)].integer), Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)), (yyvsp[(8) - (11)].str), (yyvsp[(9) - (11)].str), (yyvsp[(10) - (11)].str), (yyvsp[(11) - (11)].str));;}
    break;

  case 261:
#line 863 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (8)].real),(yyvsp[(2) - (8)].real)), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (yyvsp[(6) - (8)].str), (yyvsp[(7) - (8)].str), (yyvsp[(8) - (8)].str));;}
    break;

  case 262:
#line 866 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (12)].real),(yyvsp[(2) - (12)].real)), (yyvsp[(3) - (12)].integer), Vector((yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real)), Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    (yyvsp[(9) - (12)].str), (yyvsp[(10) - (12)].str), (yyvsp[(11) - (12)].str), (yyvsp[(12) - (12)].str));;}
    break;

  case 263:
#line 870 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 264:
#line 871 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 266:
#line 875 "frame/parser.Y"
    {fr->blockToFitCmd();;}
    break;

  case 267:
#line 876 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 268:
#line 877 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 272:
#line 883 "frame/parser.Y"
    {fr->clipUserCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 273:
#line 884 "frame/parser.Y"
    {fr->clipUserCmd(NAN,NAN);;}
    break;

  case 275:
#line 887 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 276:
#line 892 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::GLOBAL);;}
    break;

  case 277:
#line 893 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::LOCAL);;}
    break;

  case 278:
#line 896 "frame/parser.Y"
    {fr->clipModeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 279:
#line 897 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::MINMAX);;}
    break;

  case 280:
#line 898 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZSCALE);;}
    break;

  case 281:
#line 899 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZMAX);;}
    break;

  case 282:
#line 900 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::USERCLIP);;}
    break;

  case 283:
#line 903 "frame/parser.Y"
    {fr->clipMinMaxCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer),(yyvsp[(1) - (2)].integer));;}
    break;

  case 284:
#line 904 "frame/parser.Y"
    {fr->clipMinMaxModeCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer));;}
    break;

  case 285:
#line 905 "frame/parser.Y"
    {fr->clipMinMaxSampleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 286:
#line 906 "frame/parser.Y"
    {fr->clipMinMaxRescanCmd();;}
    break;

  case 287:
#line 909 "frame/parser.Y"
    {fr->clipZScaleCmd((yyvsp[(1) - (3)].real),(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 288:
#line 911 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleContrastCmd((yyvsp[(2) - (2)].real));
        ;}
    break;

  case 289:
#line 916 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleSampleCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 290:
#line 921 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleLineCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 291:
#line 928 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].real), (yyvsp[(3) - (5)].real), (yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].integer));;}
    break;

  case 292:
#line 930 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 293:
#line 932 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 294:
#line 934 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 295:
#line 936 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (7)].integer),(yyvsp[(3) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(yyvsp[(7) - (7)].integer));;}
    break;

  case 299:
#line 943 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].real), (yyvsp[(3) - (5)].real), (yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].integer));;}
    break;

  case 300:
#line 945 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 301:
#line 947 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 302:
#line 949 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 303:
#line 951 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (7)].integer),(yyvsp[(3) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(yyvsp[(7) - (7)].integer));;}
    break;

  case 304:
#line 953 "frame/parser.Y"
    {fr->colorScaleCmd((FrScale::ColorScaleType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 305:
#line 954 "frame/parser.Y"
    {fr->colorScaleLogCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 311:
#line 965 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),(FrScale::ClipMode)(yyvsp[(9) - (13)].integer),100,(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 312:
#line 968 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),FrScale::AUTOCUT,(yyvsp[(9) - (13)].real),(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 313:
#line 971 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),(FrScale::ClipMode)(yyvsp[(9) - (12)].integer),100,FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 314:
#line 977 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),FrScale::AUTOCUT,(yyvsp[(9) - (12)].real),FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 315:
#line 982 "frame/parser.Y"
    {fr->contourCreatePolygonCmd();;}
    break;

  case 316:
#line 985 "frame/parser.Y"
    {fr->contourDeleteCmd();;}
    break;

  case 317:
#line 986 "frame/parser.Y"
    {fr->contourDeleteAuxCmd();;}
    break;

  case 318:
#line 989 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 319:
#line 990 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 320:
#line 992 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourLoadCmd((yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer),(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer));
	;}
    break;

  case 321:
#line 998 "frame/parser.Y"
    {(yyval.integer) = FrScale::MINMAX;;}
    break;

  case 322:
#line 999 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZSCALE;;}
    break;

  case 323:
#line 1000 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZMAX;;}
    break;

  case 324:
#line 1001 "frame/parser.Y"
    {(yyval.integer) = FrScale::USERCLIP;;}
    break;

  case 325:
#line 1004 "frame/parser.Y"
    {(yyval.integer) = FrScale::GLOBAL;;}
    break;

  case 326:
#line 1005 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOCAL;;}
    break;

  case 327:
#line 1008 "frame/parser.Y"
    {(yyval.integer) = FVContour::SMOOTH;;}
    break;

  case 328:
#line 1009 "frame/parser.Y"
    {(yyval.integer) = FVContour::BLOCK;;}
    break;

  case 329:
#line 1012 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 330:
#line 1013 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 331:
#line 1017 "frame/parser.Y"
    {fr->contourSaveCmd((yyvsp[(1) - (3)].str), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 332:
#line 1019 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (4)].str),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 333:
#line 1022 "frame/parser.Y"
    {fr->cropCmd();;}
    break;

  case 334:
#line 1024 "frame/parser.Y"
    {fr->cropCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 335:
#line 1027 "frame/parser.Y"
    {fr->cropCenterCmd(Vector((yyvsp[(2) - (8)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), Vector((yyvsp[(5) - (8)].real),(yyvsp[(6) - (8)].real)), (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 337:
#line 1029 "frame/parser.Y"
    {fr->cropBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 338:
#line 1030 "frame/parser.Y"
    {fr->cropMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 339:
#line 1031 "frame/parser.Y"
    {fr->cropEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 340:
#line 1034 "frame/parser.Y"
    {fr->crop3dCmd();;}
    break;

  case 341:
#line 1036 "frame/parser.Y"
    {fr->crop3dCmd((yyvsp[(1) - (4)].real), (yyvsp[(2) - (4)].real), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 342:
#line 1037 "frame/parser.Y"
    {fr->crop3dBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 343:
#line 1038 "frame/parser.Y"
    {fr->crop3dMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 344:
#line 1039 "frame/parser.Y"
    {fr->crop3dEndCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 345:
#line 1043 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), (Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 346:
#line 1045 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 347:
#line 1046 "frame/parser.Y"
    {fr->crosshairCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 348:
#line 1047 "frame/parser.Y"
    {fr->crosshairWarpCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 349:
#line 1050 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)), (Coord::InternalSystem)(yyvsp[(3) - (5)].integer));;}
    break;

  case 350:
#line 1052 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 351:
#line 1054 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer));;}
    break;

  case 352:
#line 1056 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 353:
#line 1059 "frame/parser.Y"
    {fr->axesOrderCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 354:
#line 1062 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 355:
#line 1063 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 356:
#line 1064 "frame/parser.Y"
    {(yyval.integer) = Base::SUM;;}
    break;

  case 357:
#line 1065 "frame/parser.Y"
    {(yyval.integer) = Base::MEDIAN;;}
    break;

  case 358:
#line 1068 "frame/parser.Y"
    {fr->fadeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 359:
#line 1069 "frame/parser.Y"
    {fr->fadeClearCmd();;}
    break;

  case 360:
#line 1072 "frame/parser.Y"
    {fr->fitsyHasExtCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 361:
#line 1075 "frame/parser.Y"
    {fr->getCmd();;}
    break;

  case 362:
#line 1076 "frame/parser.Y"
    {fr->getBgColorCmd();;}
    break;

  case 376:
#line 1090 "frame/parser.Y"
    {fr->getDATASECCmd();;}
    break;

  case 379:
#line 1093 "frame/parser.Y"
    {fr->getHighliteColorCmd();;}
    break;

  case 380:
#line 1094 "frame/parser.Y"
    {fr->getHistogramCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].integer));;}
    break;

  case 386:
#line 1100 "frame/parser.Y"
    {fr->getIRAFAlignCmd();;}
    break;

  case 387:
#line 1101 "frame/parser.Y"
    {fr->getMinMaxCmd();;}
    break;

  case 392:
#line 1106 "frame/parser.Y"
    {fr->getNANColorCmd();;}
    break;

  case 393:
#line 1107 "frame/parser.Y"
    {fr->getOrientCmd();;}
    break;

  case 395:
#line 1110 "frame/parser.Y"
    {fr->getPixelTableCmd(Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (Coord::InternalSystem)(yyvsp[(3) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(7) - (8)].integer), (yyvsp[(8) - (8)].str));;}
    break;

  case 397:
#line 1112 "frame/parser.Y"
    {fr->getRotateCmd();;}
    break;

  case 399:
#line 1114 "frame/parser.Y"
    {fr->getThreadsCmd();;}
    break;

  case 401:
#line 1116 "frame/parser.Y"
    {fr->getTypeCmd();;}
    break;

  case 402:
#line 1118 "frame/parser.Y"
    {fr->getValueCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 405:
#line 1121 "frame/parser.Y"
    {fr->getZoomCmd();;}
    break;

  case 406:
#line 1125 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 407:
#line 1127 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 408:
#line 1131 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 409:
#line 1133 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 410:
#line 1136 "frame/parser.Y"
    {fr->getBinDepthCmd();;}
    break;

  case 411:
#line 1137 "frame/parser.Y"
    {fr->getBinFactorCmd();;}
    break;

  case 412:
#line 1138 "frame/parser.Y"
    {fr->getBinFunctionCmd();;}
    break;

  case 413:
#line 1139 "frame/parser.Y"
    {fr->getBinBufferSizeCmd();;}
    break;

  case 414:
#line 1140 "frame/parser.Y"
    {fr->getBinCursorCmd();;}
    break;

  case 415:
#line 1141 "frame/parser.Y"
    {fr->getBinFilterCmd();;}
    break;

  case 417:
#line 1143 "frame/parser.Y"
    {fr->getBinListCmd();;}
    break;

  case 418:
#line 1146 "frame/parser.Y"
    {fr->getBinColsCmd();;}
    break;

  case 419:
#line 1147 "frame/parser.Y"
    {fr->getBinColsMinMaxCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 420:
#line 1148 "frame/parser.Y"
    {fr->getBinColsDimCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 421:
#line 1151 "frame/parser.Y"
    {fr->getBlockCmd();;}
    break;

  case 422:
#line 1154 "frame/parser.Y"
    {fr->getClipCmd();;}
    break;

  case 423:
#line 1156 "frame/parser.Y"
    {fr->getClipCmd((FrScale::ClipMode)(yyvsp[(1) - (2)].integer), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 424:
#line 1158 "frame/parser.Y"
    {fr->getClipCmd((yyvsp[(1) - (2)].real), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 425:
#line 1159 "frame/parser.Y"
    {fr->getClipScopeCmd();;}
    break;

  case 426:
#line 1160 "frame/parser.Y"
    {fr->getClipModeCmd();;}
    break;

  case 428:
#line 1162 "frame/parser.Y"
    {fr->getClipUserCmd();;}
    break;

  case 430:
#line 1165 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	;}
    break;

  case 431:
#line 1171 "frame/parser.Y"
    {fr->getClipMinMaxModeCmd();;}
    break;

  case 432:
#line 1172 "frame/parser.Y"
    {fr->getClipMinMaxSampleCmd();;}
    break;

  case 433:
#line 1175 "frame/parser.Y"
    {fr->getClipZScaleContrastCmd();;}
    break;

  case 434:
#line 1176 "frame/parser.Y"
    {fr->getClipZScaleSampleCmd();;}
    break;

  case 435:
#line 1177 "frame/parser.Y"
    {fr->getClipZScaleLineCmd();;}
    break;

  case 436:
#line 1180 "frame/parser.Y"
    {fr->getColorbarCmd();;}
    break;

  case 437:
#line 1181 "frame/parser.Y"
    {fr->getColorbarTagCmd();;}
    break;

  case 439:
#line 1187 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 440:
#line 1189 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 441:
#line 1191 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 442:
#line 1194 "frame/parser.Y"
    {fr->getColorScaleCmd();;}
    break;

  case 444:
#line 1196 "frame/parser.Y"
    {fr->getColorScaleLogCmd();;}
    break;

  case 445:
#line 1200 "frame/parser.Y"
    {fr->getColorScaleLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 446:
#line 1204 "frame/parser.Y"
    {fr->getContourCmd((Coord::CoordSystem)(yyvsp[(1) - (2)].integer),(Coord::SkyFrame)(yyvsp[(2) - (2)].integer));;}
    break;

  case 448:
#line 1206 "frame/parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 449:
#line 1207 "frame/parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 450:
#line 1208 "frame/parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 451:
#line 1209 "frame/parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 452:
#line 1210 "frame/parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 454:
#line 1212 "frame/parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 455:
#line 1213 "frame/parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 456:
#line 1216 "frame/parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 457:
#line 1217 "frame/parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 458:
#line 1218 "frame/parser.Y"
    {fr->getContourClipScopeCmd();;}
    break;

  case 459:
#line 1221 "frame/parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 460:
#line 1222 "frame/parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 461:
#line 1226 "frame/parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 462:
#line 1228 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 463:
#line 1236 "frame/parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 464:
#line 1238 "frame/parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 465:
#line 1240 "frame/parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 466:
#line 1243 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 467:
#line 1245 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 468:
#line 1246 "frame/parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 469:
#line 1249 "frame/parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 470:
#line 1252 "frame/parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 471:
#line 1254 "frame/parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 472:
#line 1258 "frame/parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 473:
#line 1260 "frame/parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 474:
#line 1263 "frame/parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 475:
#line 1267 "frame/parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (2)].str), (Base::FileNameType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 476:
#line 1268 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 477:
#line 1270 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)), (Coord::InternalSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (Base::FileNameType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 478:
#line 1273 "frame/parser.Y"
    {fr->iisGetCmd((yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 479:
#line 1274 "frame/parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 481:
#line 1278 "frame/parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 482:
#line 1279 "frame/parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 483:
#line 1280 "frame/parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 484:
#line 1283 "frame/parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 485:
#line 1285 "frame/parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 486:
#line 1286 "frame/parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 488:
#line 1288 "frame/parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 492:
#line 1292 "frame/parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 493:
#line 1293 "frame/parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 494:
#line 1294 "frame/parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 495:
#line 1296 "frame/parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::DistFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 497:
#line 1298 "frame/parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 498:
#line 1301 "frame/parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 499:
#line 1303 "frame/parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 500:
#line 1305 "frame/parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 501:
#line 1306 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 502:
#line 1307 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 503:
#line 1308 "frame/parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 504:
#line 1311 "frame/parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 505:
#line 1312 "frame/parser.Y"
    {fr->getFitsDepthCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 506:
#line 1316 "frame/parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 507:
#line 1318 "frame/parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 508:
#line 1321 "frame/parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 509:
#line 1324 "frame/parser.Y"
    {fr->getFitsSliceCmd(2);;}
    break;

  case 510:
#line 1325 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 511:
#line 1327 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 512:
#line 1329 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((yyvsp[(3) - (4)].integer), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 513:
#line 1331 "frame/parser.Y"
    {fr->getFitsSliceToImageCmd((yyvsp[(3) - (4)].real), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 514:
#line 1334 "frame/parser.Y"
    {fr->getGridCmd();;}
    break;

  case 515:
#line 1335 "frame/parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 516:
#line 1336 "frame/parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 517:
#line 1339 "frame/parser.Y"
    {fr->getLayerCountCmd();;}
    break;

  case 518:
#line 1340 "frame/parser.Y"
    {fr->getLayerNoCmd();;}
    break;

  case 519:
#line 1341 "frame/parser.Y"
    {fr->getLayerColorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 520:
#line 1342 "frame/parser.Y"
    {fr->getLayerBlendCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 521:
#line 1343 "frame/parser.Y"
    {fr->getLayerTransparencyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 522:
#line 1344 "frame/parser.Y"
    {fr->getLayerViewCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 523:
#line 1347 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 524:
#line 1348 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 525:
#line 1349 "frame/parser.Y"
    {fr->getMaskRangeCmd();;}
    break;

  case 526:
#line 1350 "frame/parser.Y"
    {fr->getMaskSystemCmd();;}
    break;

  case 527:
#line 1351 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 528:
#line 1352 "frame/parser.Y"
    {fr->getMaskCountCmd();;}
    break;

  case 529:
#line 1353 "frame/parser.Y"
    {fr->getMaskBlendCmd();;}
    break;

  case 530:
#line 1356 "frame/parser.Y"
    {(yyval.integer) = 0;;}
    break;

  case 531:
#line 1357 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 532:
#line 1360 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 533:
#line 1363 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 534:
#line 1364 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 535:
#line 1365 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 536:
#line 1368 "frame/parser.Y"
    {fr->getMultiColorSystemCmd();;}
    break;

  case 537:
#line 1371 "frame/parser.Y"
    {fr->getHLSChannelCmd();;}
    break;

  case 538:
#line 1372 "frame/parser.Y"
    {fr->getHLSSystemCmd();;}
    break;

  case 539:
#line 1373 "frame/parser.Y"
    {fr->getHLSViewCmd();;}
    break;

  case 540:
#line 1376 "frame/parser.Y"
    {fr->getHSVChannelCmd();;}
    break;

  case 541:
#line 1377 "frame/parser.Y"
    {fr->getHSVSystemCmd();;}
    break;

  case 542:
#line 1378 "frame/parser.Y"
    {fr->getHSVViewCmd();;}
    break;

  case 543:
#line 1381 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 544:
#line 1382 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 545:
#line 1383 "frame/parser.Y"
    {fr->getSmoothRadiusMinorCmd();;}
    break;

  case 546:
#line 1384 "frame/parser.Y"
    {fr->getSmoothSigmaCmd();;}
    break;

  case 547:
#line 1385 "frame/parser.Y"
    {fr->getSmoothSigmaMinorCmd();;}
    break;

  case 548:
#line 1386 "frame/parser.Y"
    {fr->getSmoothAngleCmd();;}
    break;

  case 553:
#line 1393 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 554:
#line 1394 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 555:
#line 1395 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 556:
#line 1398 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 557:
#line 1399 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 558:
#line 1402 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 559:
#line 1403 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 560:
#line 1406 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 561:
#line 1407 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 562:
#line 1410 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 563:
#line 1411 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 564:
#line 1414 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 566:
#line 1416 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 567:
#line 1419 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 568:
#line 1420 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 570:
#line 1424 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 571:
#line 1428 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 572:
#line 1431 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer),
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 573:
#line 1438 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 574:
#line 1439 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 575:
#line 1442 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 576:
#line 1443 "frame/parser.Y"
    {fr->hasBgColorCmd();;}
    break;

  case 579:
#line 1446 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 580:
#line 1447 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 581:
#line 1448 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 582:
#line 1449 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 584:
#line 1451 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 585:
#line 1452 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 586:
#line 1453 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 588:
#line 1455 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 589:
#line 1456 "frame/parser.Y"
    {fr->hasImageCmd();;}
    break;

  case 590:
#line 1457 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 591:
#line 1458 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 593:
#line 1462 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 594:
#line 1465 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 595:
#line 1466 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 596:
#line 1469 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 597:
#line 1470 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 598:
#line 1471 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 599:
#line 1472 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 600:
#line 1475 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 601:
#line 1476 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 602:
#line 1477 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 603:
#line 1478 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 604:
#line 1481 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 605:
#line 1482 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 606:
#line 1483 "frame/parser.Y"
    {fr->hasWCSEquCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 607:
#line 1484 "frame/parser.Y"
    {fr->hasWCSLinearCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 608:
#line 1485 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 609:
#line 1486 "frame/parser.Y"
    {fr->hasWCS3DCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 610:
#line 1489 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 611:
#line 1490 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 612:
#line 1491 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 615:
#line 1495 "frame/parser.Y"
    {fr->iisSetCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 616:
#line 1496 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 617:
#line 1499 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 618:
#line 1502 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 619:
#line 1503 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 620:
#line 1507 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 621:
#line 1509 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 622:
#line 1510 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 629:
#line 1522 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 630:
#line 1524 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 631:
#line 1526 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 632:
#line 1527 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 633:
#line 1529 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 634:
#line 1531 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 635:
#line 1533 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 636:
#line 1535 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 637:
#line 1537 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 641:
#line 1543 "frame/parser.Y"
    {fr->loadRGBArrayCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 642:
#line 1544 "frame/parser.Y"
    {fr->loadRGBArrayCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 643:
#line 1545 "frame/parser.Y"
    {fr->loadRGBArrayCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 644:
#line 1546 "frame/parser.Y"
    {fr->loadRGBArrayCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 645:
#line 1547 "frame/parser.Y"
    {fr->loadRGBArrayCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 646:
#line 1549 "frame/parser.Y"
    {fr->loadRGBArrayCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 647:
#line 1550 "frame/parser.Y"
    {fr->loadRGBArrayCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 648:
#line 1551 "frame/parser.Y"
    {fr->loadRGBArrayCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 649:
#line 1552 "frame/parser.Y"
    {fr->loadRGBArrayCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 650:
#line 1555 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 651:
#line 1559 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 652:
#line 1561 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 653:
#line 1563 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 654:
#line 1565 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 655:
#line 1567 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 656:
#line 1569 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 657:
#line 1571 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 658:
#line 1573 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str),
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 659:
#line 1576 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 660:
#line 1578 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 661:
#line 1580 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 671:
#line 1592 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 672:
#line 1593 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 673:
#line 1594 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 674:
#line 1595 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 675:
#line 1596 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 676:
#line 1597 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 677:
#line 1599 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 678:
#line 1601 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 679:
#line 1602 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 680:
#line 1603 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 681:
#line 1604 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 682:
#line 1607 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 683:
#line 1608 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 684:
#line 1609 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 685:
#line 1610 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 686:
#line 1611 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 687:
#line 1613 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 688:
#line 1614 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 689:
#line 1615 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 690:
#line 1616 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 696:
#line 1627 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 697:
#line 1630 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 698:
#line 1633 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 699:
#line 1636 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 700:
#line 1639 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 701:
#line 1642 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 702:
#line 1645 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 703:
#line 1648 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 704:
#line 1651 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 705:
#line 1656 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 706:
#line 1659 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 707:
#line 1662 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 708:
#line 1665 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 709:
#line 1668 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 710:
#line 1671 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 711:
#line 1674 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 712:
#line 1677 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 713:
#line 1680 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 714:
#line 1683 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 715:
#line 1686 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 716:
#line 1691 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 717:
#line 1694 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 718:
#line 1697 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 719:
#line 1700 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 720:
#line 1703 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 721:
#line 1706 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer),
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 722:
#line 1709 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 723:
#line 1712 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 724:
#line 1715 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 725:
#line 1720 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 726:
#line 1722 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 727:
#line 1724 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 728:
#line 1726 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 729:
#line 1728 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 730:
#line 1730 "frame/parser.Y"
    {
	  fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str),
					   (Base::LayerType)(yyvsp[(6) - (6)].integer));
        ;}
    break;

  case 731:
#line 1735 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 732:
#line 1737 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 733:
#line 1739 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 734:
#line 1743 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 735:
#line 1746 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 736:
#line 1749 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 737:
#line 1752 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 738:
#line 1755 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 739:
#line 1758 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 740:
#line 1761 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer),
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 741:
#line 1764 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer),
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 742:
#line 1767 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 743:
#line 1770 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 744:
#line 1773 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 745:
#line 1777 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 746:
#line 1778 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 747:
#line 1779 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 748:
#line 1780 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 749:
#line 1781 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 750:
#line 1782 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 751:
#line 1784 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 752:
#line 1786 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 753:
#line 1787 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 754:
#line 1788 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 755:
#line 1789 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 756:
#line 1792 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 757:
#line 1793 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 758:
#line 1794 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 759:
#line 1795 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 760:
#line 1796 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 761:
#line 1798 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 762:
#line 1799 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 763:
#line 1800 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 764:
#line 1801 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 765:
#line 1805 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 766:
#line 1807 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 767:
#line 1808 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 768:
#line 1810 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 769:
#line 1812 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 770:
#line 1814 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 771:
#line 1817 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 772:
#line 1818 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 773:
#line 1821 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 774:
#line 1822 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 775:
#line 1823 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 776:
#line 1826 "frame/parser.Y"
    {;}
    break;

  case 777:
#line 1829 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 778:
#line 1830 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 779:
#line 1831 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 780:
#line 1832 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 781:
#line 1833 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 782:
#line 1834 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 783:
#line 1835 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 784:
#line 1839 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 786:
#line 1847 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 787:
#line 1848 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 788:
#line 1850 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 789:
#line 1852 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 790:
#line 1853 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 791:
#line 1854 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 793:
#line 1855 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 796:
#line 1858 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 797:
#line 1859 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 798:
#line 1861 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 799:
#line 1863 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 800:
#line 1865 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 801:
#line 1868 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 802:
#line 1870 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 803:
#line 1871 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 804:
#line 1873 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 805:
#line 1876 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 806:
#line 1879 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 807:
#line 1883 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 808:
#line 1886 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 809:
#line 1889 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 810:
#line 1892 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 811:
#line 1896 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 812:
#line 1900 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 813:
#line 1905 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str),
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 814:
#line 1909 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 815:
#line 1911 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 816:
#line 1912 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 817:
#line 1914 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 818:
#line 1916 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 819:
#line 1918 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 820:
#line 1920 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 821:
#line 1921 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 822:
#line 1923 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 823:
#line 1925 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 824:
#line 1928 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 825:
#line 1932 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 826:
#line 1936 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 827:
#line 1938 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 828:
#line 1940 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 829:
#line 1942 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 830:
#line 1944 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 831:
#line 1946 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 832:
#line 1948 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 833:
#line 1950 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 834:
#line 1952 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 835:
#line 1954 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 836:
#line 1956 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 837:
#line 1958 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 838:
#line 1960 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 839:
#line 1962 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 840:
#line 1963 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 841:
#line 1965 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 842:
#line 1967 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 843:
#line 1968 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 844:
#line 1969 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 845:
#line 1971 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 846:
#line 1973 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 847:
#line 1974 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 848:
#line 1975 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 849:
#line 1976 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 850:
#line 1978 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 851:
#line 1980 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 852:
#line 1984 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 853:
#line 1987 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 854:
#line 1990 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 855:
#line 1994 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 856:
#line 1998 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 857:
#line 2003 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str),
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 858:
#line 2007 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 859:
#line 2008 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 860:
#line 2009 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 861:
#line 2011 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 862:
#line 2013 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 863:
#line 2017 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 864:
#line 2018 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 865:
#line 2019 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 866:
#line 2021 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 867:
#line 2024 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 868:
#line 2027 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 869:
#line 2030 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 870:
#line 2031 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 871:
#line 2035 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 872:
#line 2039 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 873:
#line 2041 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 874:
#line 2042 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 875:
#line 2044 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 876:
#line 2047 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 877:
#line 2050 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 878:
#line 2051 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 879:
#line 2053 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 880:
#line 2054 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 881:
#line 2055 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 882:
#line 2057 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 883:
#line 2058 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 884:
#line 2060 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 885:
#line 2063 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 886:
#line 2066 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 887:
#line 2068 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 888:
#line 2069 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 892:
#line 2074 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 893:
#line 2075 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 894:
#line 2077 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 895:
#line 2079 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 896:
#line 2081 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 897:
#line 2082 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 901:
#line 2088 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 902:
#line 2089 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 903:
#line 2090 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 904:
#line 2091 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 905:
#line 2092 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 906:
#line 2093 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 907:
#line 2094 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 908:
#line 2095 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 909:
#line 2096 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 910:
#line 2097 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 911:
#line 2099 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 912:
#line 2101 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 913:
#line 2102 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 914:
#line 2103 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 915:
#line 2104 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 916:
#line 2105 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 917:
#line 2107 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 918:
#line 2108 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 919:
#line 2109 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 920:
#line 2110 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 921:
#line 2111 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 922:
#line 2113 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 923:
#line 2114 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 924:
#line 2115 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 925:
#line 2116 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 926:
#line 2117 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 927:
#line 2118 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 928:
#line 2121 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 929:
#line 2122 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 930:
#line 2123 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 931:
#line 2124 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 932:
#line 2125 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 933:
#line 2126 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 934:
#line 2127 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 935:
#line 2128 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 936:
#line 2129 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 937:
#line 2130 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 938:
#line 2131 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 939:
#line 2132 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 940:
#line 2133 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 941:
#line 2134 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 942:
#line 2135 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 943:
#line 2136 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 944:
#line 2137 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 945:
#line 2138 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 946:
#line 2139 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 947:
#line 2140 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 948:
#line 2141 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 949:
#line 2144 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 950:
#line 2145 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 951:
#line 2146 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 952:
#line 2147 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 953:
#line 2148 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 954:
#line 2150 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 955:
#line 2160 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 956:
#line 2168 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 957:
#line 2177 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 958:
#line 2185 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 959:
#line 2192 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 960:
#line 2199 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 961:
#line 2207 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 962:
#line 2215 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 963:
#line 2220 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 964:
#line 2225 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 965:
#line 2230 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 966:
#line 2235 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 967:
#line 2240 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 968:
#line 2245 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 969:
#line 2250 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 970:
#line 2259 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer),
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 971:
#line 2269 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 972:
#line 2279 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 973:
#line 2288 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 974:
#line 2296 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 975:
#line 2306 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 976:
#line 2316 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 977:
#line 2326 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 978:
#line 2338 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 979:
#line 2347 "frame/parser.Y"
    {fr->createCompositeCmd(
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 981:
#line 2355 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 982:
#line 2357 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 983:
#line 2359 "frame/parser.Y"
    {
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 984:
#line 2364 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 985:
#line 2367 "frame/parser.Y"
    {fr->markerDeleteAllCmd(0);;}
    break;

  case 986:
#line 2368 "frame/parser.Y"
    {fr->markerDeleteAllCmd(1);;}
    break;

  case 987:
#line 2369 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerDeleteAllCmd(0);
        ;}
    break;

  case 988:
#line 2376 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 989:
#line 2378 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 990:
#line 2379 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 991:
#line 2382 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 992:
#line 2383 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 993:
#line 2384 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 994:
#line 2385 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 995:
#line 2386 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 996:
#line 2387 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 997:
#line 2388 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 999:
#line 2392 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 1000:
#line 2393 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 1001:
#line 2394 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 1002:
#line 2395 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1003:
#line 2396 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1004:
#line 2399 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(yyvsp[(6) - (8)].str),(Coord::CoordSystem)(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 1005:
#line 2401 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 1006:
#line 2403 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 1007:
#line 2405 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 1008:
#line 2407 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 1009:
#line 2409 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1010:
#line 2411 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 1011:
#line 2412 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1012:
#line 2413 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1013:
#line 2415 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1014:
#line 2417 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1015:
#line 2420 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1016:
#line 2422 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1017:
#line 2423 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1018:
#line 2424 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1019:
#line 2426 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1020:
#line 2428 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1021:
#line 2431 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer),
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1022:
#line 2434 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1023:
#line 2435 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1024:
#line 2436 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1025:
#line 2437 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1026:
#line 2439 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1027:
#line 2440 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1028:
#line 2441 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1029:
#line 2442 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1030:
#line 2443 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1031:
#line 2445 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1032:
#line 2447 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1033:
#line 2449 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1034:
#line 2451 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer),
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1035:
#line 2453 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1036:
#line 2454 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1037:
#line 2456 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1038:
#line 2458 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1039:
#line 2460 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1040:
#line 2461 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1041:
#line 2462 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1042:
#line 2464 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1043:
#line 2466 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1044:
#line 2469 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1045:
#line 2472 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1046:
#line 2473 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1047:
#line 2475 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1048:
#line 2478 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer),
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1049:
#line 2481 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1050:
#line 2482 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1051:
#line 2483 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1052:
#line 2484 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1053:
#line 2486 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1054:
#line 2488 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1055:
#line 2490 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1056:
#line 2491 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1057:
#line 2493 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1058:
#line 2494 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1059:
#line 2495 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1060:
#line 2496 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1061:
#line 2497 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1062:
#line 2499 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1063:
#line 2501 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1064:
#line 2503 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1065:
#line 2505 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1067:
#line 2507 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1068:
#line 2508 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1069:
#line 2510 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1070:
#line 2512 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1071:
#line 2513 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1072:
#line 2514 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1074:
#line 2516 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1076:
#line 2520 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1077:
#line 2521 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1078:
#line 2522 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1079:
#line 2523 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1080:
#line 2524 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1081:
#line 2525 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1082:
#line 2527 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1083:
#line 2528 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1084:
#line 2530 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1085:
#line 2533 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1086:
#line 2534 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1087:
#line 2535 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1088:
#line 2536 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1089:
#line 2539 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1090:
#line 2540 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1091:
#line 2543 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1092:
#line 2544 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1093:
#line 2547 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1094:
#line 2548 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1095:
#line 2551 "frame/parser.Y"
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
#line 2564 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1097:
#line 2565 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1098:
#line 2569 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1099:
#line 2570 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1100:
#line 2574 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1101:
#line 2575 "frame/parser.Y"
    {fr->markerLayerCmd(Base::FOOTPRINT);;}
    break;

  case 1102:
#line 2580 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), 0, propQMask, propQValue, taglist);;}
    break;

  case 1103:
#line 2584 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), 1, propQMask, propQValue, taglist);;}
    break;

  case 1104:
#line 2589 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str),0,"green",Coord::PHYSICAL,Coord::ICRS);;}
    break;

  case 1105:
#line 2591 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1106:
#line 2594 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer),0,"green",Coord::PHYSICAL,Coord::ICRS);;}
    break;

  case 1107:
#line 2596 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1108:
#line 2599 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (2)].str), "green");;}
    break;

  case 1109:
#line 2601 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));;}
    break;

  case 1110:
#line 2604 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1111:
#line 2605 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1112:
#line 2606 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1113:
#line 2607 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1114:
#line 2608 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1115:
#line 2609 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1116:
#line 2611 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1119:
#line 2618 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1120:
#line 2619 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1121:
#line 2620 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1122:
#line 2621 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1123:
#line 2622 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1124:
#line 2623 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1127:
#line 2628 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1128:
#line 2629 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1129:
#line 2630 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1130:
#line 2631 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1131:
#line 2632 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1132:
#line 2633 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1133:
#line 2634 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1134:
#line 2635 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1135:
#line 2636 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1136:
#line 2637 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1137:
#line 2638 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1138:
#line 2639 "frame/parser.Y"
    {(yyval.integer) = Marker::FILL;;}
    break;

  case 1141:
#line 2646 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1142:
#line 2647 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1144:
#line 2651 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(1) - (6)].str), (Base::MarkerFormat)(yyvsp[(2) - (6)].integer), (Coord::CoordSystem)(yyvsp[(3) - (6)].integer), (Coord::SkyFrame)(yyvsp[(4) - (6)].integer), (Coord::SkyFormat)(yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].integer), 0);;}
    break;

  case 1145:
#line 2653 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer), 1);;}
    break;

  case 1146:
#line 2654 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1147:
#line 2657 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1148:
#line 2658 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1149:
#line 2659 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1150:
#line 2660 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1151:
#line 2661 "frame/parser.Y"
    {fr->markerSelectFirstCmd();;}
    break;

  case 1152:
#line 2662 "frame/parser.Y"
    {fr->markerSelectLastCmd();;}
    break;

  case 1153:
#line 2665 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1154:
#line 2666 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1157:
#line 2674 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1158:
#line 2677 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1159:
#line 2678 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1163:
#line 2685 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1164:
#line 2688 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1165:
#line 2692 "frame/parser.Y"
    {fr->layerCreateCmd();;}
    break;

  case 1166:
#line 2693 "frame/parser.Y"
    {fr->layerCreateCmd();;}
    break;

  case 1167:
#line 2694 "frame/parser.Y"
    {fr->layerNoCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1168:
#line 2695 "frame/parser.Y"
    {fr->layerNoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1169:
#line 2696 "frame/parser.Y"
    {fr->layerColorCmd(0,(yyvsp[(2) - (2)].str));;}
    break;

  case 1170:
#line 2697 "frame/parser.Y"
    {fr->layerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1171:
#line 2698 "frame/parser.Y"
    {fr->layerBlendCmd(0,(FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1172:
#line 2699 "frame/parser.Y"
    {fr->layerBlendCmd((yyvsp[(1) - (3)].integer),(FitsMask::MaskBlend)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1173:
#line 2700 "frame/parser.Y"
    {fr->layerTransparencyCmd(0,(yyvsp[(2) - (2)].real));;}
    break;

  case 1174:
#line 2701 "frame/parser.Y"
    {fr->layerTransparencyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 1175:
#line 2702 "frame/parser.Y"
    {fr->layerViewCmd(0,(yyvsp[(2) - (2)].integer));;}
    break;

  case 1176:
#line 2703 "frame/parser.Y"
    {fr->layerViewCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1177:
#line 2705 "frame/parser.Y"
    {fr->layerShowCmd(0);;}
    break;

  case 1178:
#line 2706 "frame/parser.Y"
    {fr->layerShowCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1179:
#line 2707 "frame/parser.Y"
    {fr->layerHideCmd(0);;}
    break;

  case 1180:
#line 2708 "frame/parser.Y"
    {fr->layerHideCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1181:
#line 2709 "frame/parser.Y"
    {fr->layerDeleteCmd(0);;}
    break;

  case 1182:
#line 2710 "frame/parser.Y"
    {fr->layerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1183:
#line 2711 "frame/parser.Y"
    {fr->layerUpCmd(0);;}
    break;

  case 1184:
#line 2712 "frame/parser.Y"
    {fr->layerUpCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1185:
#line 2713 "frame/parser.Y"
    {fr->layerDownCmd(0);;}
    break;

  case 1186:
#line 2714 "frame/parser.Y"
    {fr->layerDownCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1187:
#line 2715 "frame/parser.Y"
    {fr->layerTopCmd(0);;}
    break;

  case 1188:
#line 2716 "frame/parser.Y"
    {fr->layerTopCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1189:
#line 2717 "frame/parser.Y"
    {fr->layerBottomCmd(0);;}
    break;

  case 1190:
#line 2718 "frame/parser.Y"
    {fr->layerBottomCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1191:
#line 2721 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1192:
#line 2722 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1193:
#line 2723 "frame/parser.Y"
    {fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1194:
#line 2724 "frame/parser.Y"
    {fr->maskRangeCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 1195:
#line 2725 "frame/parser.Y"
    {fr->maskSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1196:
#line 2726 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1197:
#line 2727 "frame/parser.Y"
    {fr->maskBlendCmd((FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1198:
#line 2728 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1199:
#line 2734 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1200:
#line 2735 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1201:
#line 2736 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1202:
#line 2737 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1203:
#line 2741 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1204:
#line 2742 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1205:
#line 2744 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1206:
#line 2749 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1208:
#line 2751 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1210:
#line 2753 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1211:
#line 2756 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1212:
#line 2758 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1213:
#line 2763 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1214:
#line 2766 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1215:
#line 2767 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1216:
#line 2768 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1217:
#line 2771 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1218:
#line 2773 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1219:
#line 2777 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1220:
#line 2778 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1221:
#line 2782 "frame/parser.Y"
    {fr->psColorSpaceCmd((PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1222:
#line 2783 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1223:
#line 2784 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1224:
#line 2785 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 1225:
#line 2791 "frame/parser.Y"
    {fr->precCmd((yyvsp[(1) - (9)].integer),(yyvsp[(2) - (9)].integer),(yyvsp[(3) - (9)].integer),(yyvsp[(4) - (9)].integer),(yyvsp[(5) - (9)].integer),(yyvsp[(6) - (9)].integer),(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 1226:
#line 2792 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->precCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 1227:
#line 2798 "frame/parser.Y"
    {(yyval.integer) = BW;;}
    break;

  case 1228:
#line 2799 "frame/parser.Y"
    {(yyval.integer) = GRAY;;}
    break;

  case 1229:
#line 2800 "frame/parser.Y"
    {(yyval.integer) = RGB;;}
    break;

  case 1230:
#line 2801 "frame/parser.Y"
    {(yyval.integer) = CMYK;;}
    break;

  case 1233:
#line 2809 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1234:
#line 2811 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1235:
#line 2812 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1236:
#line 2813 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1237:
#line 2817 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1238:
#line 2818 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1239:
#line 2819 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1240:
#line 2820 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1241:
#line 2823 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1242:
#line 2824 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1243:
#line 2825 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::FIP;;}
    break;

  case 1244:
#line 2828 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1245:
#line 2829 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1246:
#line 2830 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1247:
#line 2833 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1248:
#line 2834 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1249:
#line 2835 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1250:
#line 2839 "frame/parser.Y"
    {fr->setMultiColorSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1251:
#line 2842 "frame/parser.Y"
    {fr->setHLSChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1252:
#line 2843 "frame/parser.Y"
    {fr->setHLSChannelCmd("hue");;}
    break;

  case 1253:
#line 2844 "frame/parser.Y"
    {fr->setHLSChannelCmd("saturation");;}
    break;

  case 1254:
#line 2845 "frame/parser.Y"
    {fr->setHLSSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1255:
#line 2846 "frame/parser.Y"
    {fr->setHLSViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1256:
#line 2849 "frame/parser.Y"
    {fr->setHSVChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1257:
#line 2850 "frame/parser.Y"
    {fr->setHSVChannelCmd("hue");;}
    break;

  case 1258:
#line 2851 "frame/parser.Y"
    {fr->setHSVChannelCmd("saturation");;}
    break;

  case 1259:
#line 2852 "frame/parser.Y"
    {fr->setHSVChannelCmd("value");;}
    break;

  case 1260:
#line 2853 "frame/parser.Y"
    {fr->setHSVSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1261:
#line 2854 "frame/parser.Y"
    {fr->setHSVViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1262:
#line 2857 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1263:
#line 2858 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (2)].real))));;}
    break;

  case 1265:
#line 2860 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (2)].real))));;}
    break;

  case 1266:
#line 2861 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (3)].real))));;}
    break;

  case 1267:
#line 2864 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1268:
#line 2865 "frame/parser.Y"
    {fr->rotateMotionCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1269:
#line 2866 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1274:
#line 2873 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1275:
#line 2877 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1276:
#line 2879 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1277:
#line 2881 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1294:
#line 2902 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1295:
#line 2903 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1296:
#line 2904 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1297:
#line 2907 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1298:
#line 2908 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1299:
#line 2909 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1300:
#line 2912 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1301:
#line 2913 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1302:
#line 2914 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1303:
#line 2917 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1304:
#line 2918 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1305:
#line 2919 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1307:
#line 2923 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1308:
#line 2924 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1309:
#line 2925 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1310:
#line 2928 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1311:
#line 2929 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1312:
#line 2930 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1313:
#line 2934 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1314:
#line 2936 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1315:
#line 2938 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1316:
#line 2941 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1317:
#line 2942 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1318:
#line 2943 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1319:
#line 2946 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1320:
#line 2947 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1321:
#line 2948 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1322:
#line 2952 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1323:
#line 2954 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1324:
#line 2956 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1325:
#line 2959 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1326:
#line 2960 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1327:
#line 2961 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1328:
#line 2964 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1329:
#line 2965 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1330:
#line 2966 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1331:
#line 2970 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1332:
#line 2972 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1333:
#line 2974 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1334:
#line 2977 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1335:
#line 2978 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1336:
#line 2979 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1337:
#line 2982 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1338:
#line 2983 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1339:
#line 2984 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1340:
#line 2987 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1341:
#line 2988 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1342:
#line 2989 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1343:
#line 2993 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1344:
#line 2995 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1345:
#line 2997 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1346:
#line 3001 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1347:
#line 3005 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1348:
#line 3007 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1349:
#line 3011 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1350:
#line 3014 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1351:
#line 3015 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1352:
#line 3016 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1353:
#line 3017 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1354:
#line 3020 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1355:
#line 3022 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1356:
#line 3024 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1357:
#line 3027 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 1359:
#line 3031 "frame/parser.Y"
    {fr->sliceCmd(2,(yyvsp[(1) - (1)].integer));;}
    break;

  case 1360:
#line 3032 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1361:
#line 3033 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1362:
#line 3036 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1363:
#line 3037 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1364:
#line 3041 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1366:
#line 3043 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1369:
#line 3048 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1370:
#line 3049 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1371:
#line 3050 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1372:
#line 3053 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1373:
#line 3054 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1374:
#line 3055 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1375:
#line 3058 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1376:
#line 3060 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1377:
#line 3065 "frame/parser.Y"
    {fr->wcsAlign2Cmd((yyvsp[(2) - (4)].integer), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1378:
#line 3066 "frame/parser.Y"
    {fr->wcsAlignPointerClearCmd();;}
    break;

  case 1379:
#line 3069 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1380:
#line 3076 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1381:
#line 3078 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1382:
#line 3080 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1383:
#line 3085 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1385:
#line 3089 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1386:
#line 3090 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1387:
#line 3091 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1388:
#line 3093 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1389:
#line 3095 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1390:
#line 3100 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 11740 "frame/parser.C"
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


#line 3104 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

