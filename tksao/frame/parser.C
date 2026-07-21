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
     AMBIENT_ = 273,
     AMPLIFIER_ = 274,
     ANALYSIS_ = 275,
     ANGLE_ = 276,
     ANNULUS_ = 277,
     APPEND_ = 278,
     ARCMIN_ = 279,
     ARCSEC_ = 280,
     ARRAY_ = 281,
     ARROW_ = 282,
     AREA_ = 283,
     ASINH_ = 284,
     AST_ = 285,
     AUTO_ = 286,
     AUX_ = 287,
     AVERAGE_ = 288,
     AXES_ = 289,
     AZIMUTH_ = 290,
     B1950_ = 291,
     BACK_ = 292,
     BACKGROUND_ = 293,
     BASE_ = 294,
     BBOX_ = 295,
     BEGIN_ = 296,
     BG_ = 297,
     BIG_ = 298,
     BIGENDIAN_ = 299,
     BIN_ = 300,
     BITPIX_ = 301,
     BLEND_ = 302,
     BLOCK_ = 303,
     BORDER_ = 304,
     BOTTOM_ = 305,
     BOX_ = 306,
     BOXANNULUS_ = 307,
     BOXCAR_ = 308,
     BOXCIRCLE_ = 309,
     BPANDA_ = 310,
     BUFFER_ = 311,
     BW_ = 312,
     CALLBACK_ = 313,
     CANVAS_ = 314,
     CATALOG_ = 315,
     CELESTIAL_ = 316,
     CENTER_ = 317,
     CENTROID_ = 318,
     CHANNEL_ = 319,
     CIRCLE_ = 320,
     CIAO_ = 321,
     CLEAR_ = 322,
     CLIP_ = 323,
     COLOR_ = 324,
     COLORBURN_ = 325,
     COLORDODGE_ = 326,
     COLORBAR_ = 327,
     COLORMAP_ = 328,
     COLORSCALE_ = 329,
     COLORSPACE_ = 330,
     COLS_ = 331,
     COLUMN_ = 332,
     COMMAND_ = 333,
     COMPASS_ = 334,
     COMPOSITE_ = 335,
     COMPRESS_ = 336,
     CONTOUR_ = 337,
     CONTRAST_ = 338,
     COORDINATES_ = 339,
     COPY_ = 340,
     COUNT_ = 341,
     CPANDA_ = 342,
     CREATE_ = 343,
     CROP_ = 344,
     CROSS_ = 345,
     CROSSHAIR_ = 346,
     CUBE_ = 347,
     CURSOR_ = 348,
     CUT_ = 349,
     CMYK_ = 350,
     DARKEN_ = 351,
     DASH_ = 352,
     DASHLIST_ = 353,
     DATA_ = 354,
     DATAMIN_ = 355,
     DATASEC_ = 356,
     DEBUG_ = 357,
     DEGREES_ = 358,
     DEFAULT_ = 359,
     DELETE_ = 360,
     DEPTH_ = 361,
     DETECTOR_ = 362,
     DIAMOND_ = 363,
     DIFFERENCE_ = 364,
     DIM_ = 365,
     DOWN_ = 366,
     DS9_ = 367,
     EDIT_ = 368,
     ECLIPTIC_ = 369,
     ELEVATION_ = 370,
     ELLIPTIC_ = 371,
     ELLIPSE_ = 372,
     ELLIPSEANNULUS_ = 373,
     END_ = 374,
     ENVI_ = 375,
     EPANDA_ = 376,
     EPSILON_ = 377,
     EQUATORIAL_ = 378,
     ERASE_ = 379,
     EXCLUSION_ = 380,
     EXT_ = 381,
     FADE_ = 382,
     FACTOR_ = 383,
     FALSE_ = 384,
     FILE_ = 385,
     FILL_ = 386,
     FILTER_ = 387,
     FIRST_ = 388,
     FIP_ = 389,
     FIT_ = 390,
     FITS_ = 391,
     FITSY_ = 392,
     FIXED_ = 393,
     FK4_ = 394,
     FK5_ = 395,
     FONT_ = 396,
     FORMAT_ = 397,
     FOOTPRINT_ = 398,
     FROM_ = 399,
     FRONT_ = 400,
     FULL_ = 401,
     FUNCTION_ = 402,
     GALACTIC_ = 403,
     GAUSSIAN_ = 404,
     GET_ = 405,
     GLOBAL_ = 406,
     GRAPHICS_ = 407,
     GRAY_ = 408,
     GRID_ = 409,
     GZ_ = 410,
     HANDLE_ = 411,
     HARDLIGHT_ = 412,
     HAS_ = 413,
     HEAD_ = 414,
     HEADER_ = 415,
     HEIGHT_ = 416,
     HIDE_ = 417,
     HIGHLITE_ = 418,
     HISTEQU_ = 419,
     HISTOGRAM_ = 420,
     HORIZONTAL_ = 421,
     HUE_ = 422,
     HSV_ = 423,
     HLS_ = 424,
     ICRS_ = 425,
     ID_ = 426,
     IIS_ = 427,
     IMAGE_ = 428,
     INCLUDE_ = 429,
     INCR_ = 430,
     INFO_ = 431,
     ITERATION_ = 432,
     IRAF_ = 433,
     IRAFMIN_ = 434,
     J2000_ = 435,
     KEY_ = 436,
     KEYWORD_ = 437,
     LABEL_ = 438,
     LAYER_ = 439,
     LAYERNO_ = 440,
     LAST_ = 441,
     LENGTH_ = 442,
     LEVEL_ = 443,
     LIGHTEN_ = 444,
     LITTLE_ = 445,
     LITTLEENDIAN_ = 446,
     LINE_ = 447,
     LINEAR_ = 448,
     LIST_ = 449,
     LOAD_ = 450,
     LOCAL_ = 451,
     LOG_ = 452,
     LUMINOSITY_ = 453,
     MACOSX_ = 454,
     MAGNIFIER_ = 455,
     MATCH_ = 456,
     MAP_ = 457,
     MARK_ = 458,
     MARKER_ = 459,
     MASK_ = 460,
     MEDIAN_ = 461,
     MESSAGE_ = 462,
     METHOD_ = 463,
     MINMAX_ = 464,
     MINOR_ = 465,
     MIP_ = 466,
     MMAP_ = 467,
     MMAPINCR_ = 468,
     MOSAIC_ = 469,
     MODE_ = 470,
     MOTION_ = 471,
     MULTICOLOR_ = 472,
     MULTIPLY_ = 473,
     MOVE_ = 474,
     NAME_ = 475,
     NAN_ = 476,
     NATIVE_ = 477,
     NAXES_ = 478,
     NEW_ = 479,
     NEXT_ = 480,
     NO_ = 481,
     NONE_ = 482,
     NORMAL_ = 483,
     NONNAN_ = 484,
     NONZERO_ = 485,
     NOW_ = 486,
     NRRD_ = 487,
     NUMBER_ = 488,
     OBJECT_ = 489,
     OFF_ = 490,
     ON_ = 491,
     ONLY_ = 492,
     OPTION_ = 493,
     ORIENT_ = 494,
     OVERLAY_ = 495,
     PAN_ = 496,
     PANNER_ = 497,
     PARSER_ = 498,
     PASTE_ = 499,
     PERF_ = 500,
     PHOTO_ = 501,
     PHYSICAL_ = 502,
     PIXEL_ = 503,
     PLOT2D_ = 504,
     PLOT3D_ = 505,
     POINT_ = 506,
     POINTER_ = 507,
     POLYGON_ = 508,
     POSTSCRIPT_ = 509,
     POW_ = 510,
     PRECISION_ = 511,
     PRINT_ = 512,
     PRESERVE_ = 513,
     PROJECTION_ = 514,
     PROPERTY_ = 515,
     PUBLICATION_ = 516,
     PROS_ = 517,
     QUERY_ = 518,
     RADIAL_ = 519,
     RADIUS_ = 520,
     RANGE_ = 521,
     REGION_ = 522,
     REPLACE_ = 523,
     RESAMPLE_ = 524,
     RESCAN_ = 525,
     RESET_ = 526,
     RESOLUTION_ = 527,
     RGB_ = 528,
     ROOT_ = 529,
     ROTATE_ = 530,
     RULER_ = 531,
     SAMPLE_ = 532,
     SAOIMAGE_ = 533,
     SAOTNG_ = 534,
     SAVE_ = 535,
     SATURATION_ = 536,
     SCALE_ = 537,
     SCAN_ = 538,
     SCIENTIFIC_ = 539,
     SCOPE_ = 540,
     SCREEN_ = 541,
     SEGMENT_ = 542,
     SELECT_ = 543,
     SET_ = 544,
     SEXAGESIMAL_ = 545,
     SHAPE_ = 546,
     SHADE_ = 547,
     SHARED_ = 548,
     SHIFT_ = 549,
     SHMID_ = 550,
     SHOW_ = 551,
     SIGMA_ = 552,
     SINH_ = 553,
     SIZE_ = 554,
     SLICE_ = 555,
     SMMAP_ = 556,
     SMOOTH_ = 557,
     SOFTLIGHT_ = 558,
     SOCKET_ = 559,
     SOCKETGZ_ = 560,
     SOURCE_ = 561,
     SQRT_ = 562,
     SQUARED_ = 563,
     SSHARED_ = 564,
     STATS_ = 565,
     STATUS_ = 566,
     STRENGTH_ = 567,
     SUM_ = 568,
     SYNC_ = 569,
     SYSTEM_ = 570,
     TABLE_ = 571,
     TAG_ = 572,
     TEMPLATE_ = 573,
     TEXT_ = 574,
     THREADS_ = 575,
     THREED_ = 576,
     THRESHOLD_ = 577,
     THICK_ = 578,
     TOP_ = 579,
     TRANSPARENCY_ = 580,
     TO_ = 581,
     TOGGLE_ = 582,
     TOPHAT_ = 583,
     TRUE_ = 584,
     TYPE_ = 585,
     UNDO_ = 586,
     UNHIGHLITE_ = 587,
     UNLOAD_ = 588,
     UNSELECT_ = 589,
     UPDATE_ = 590,
     UP_ = 591,
     USER_ = 592,
     VALUE_ = 593,
     VAR_ = 594,
     VIEW_ = 595,
     VECTOR_ = 596,
     VERSION_ = 597,
     VERTEX_ = 598,
     VERTICAL_ = 599,
     WARP_ = 600,
     WCS_ = 601,
     WCSA_ = 602,
     WCSB_ = 603,
     WCSC_ = 604,
     WCSD_ = 605,
     WCSE_ = 606,
     WCSF_ = 607,
     WCSG_ = 608,
     WCSH_ = 609,
     WCSI_ = 610,
     WCSJ_ = 611,
     WCSK_ = 612,
     WCSL_ = 613,
     WCSM_ = 614,
     WCSN_ = 615,
     WCSO_ = 616,
     WCSP_ = 617,
     WCSQ_ = 618,
     WCSR_ = 619,
     WCSS_ = 620,
     WCST_ = 621,
     WCSU_ = 622,
     WCSV_ = 623,
     WCSW_ = 624,
     WCSX_ = 625,
     WCSY_ = 626,
     WCSZ_ = 627,
     WCS0_ = 628,
     WFPC2_ = 629,
     WIDTH_ = 630,
     WIN32_ = 631,
     XML_ = 632,
     XY_ = 633,
     YES_ = 634,
     ZERO_ = 635,
     ZMAX_ = 636,
     ZSCALE_ = 637,
     PIXMASK_ = 638,
     ZOOM_ = 639
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
#define AMBIENT_ 273
#define AMPLIFIER_ 274
#define ANALYSIS_ 275
#define ANGLE_ 276
#define ANNULUS_ 277
#define APPEND_ 278
#define ARCMIN_ 279
#define ARCSEC_ 280
#define ARRAY_ 281
#define ARROW_ 282
#define AREA_ 283
#define ASINH_ 284
#define AST_ 285
#define AUTO_ 286
#define AUX_ 287
#define AVERAGE_ 288
#define AXES_ 289
#define AZIMUTH_ 290
#define B1950_ 291
#define BACK_ 292
#define BACKGROUND_ 293
#define BASE_ 294
#define BBOX_ 295
#define BEGIN_ 296
#define BG_ 297
#define BIG_ 298
#define BIGENDIAN_ 299
#define BIN_ 300
#define BITPIX_ 301
#define BLEND_ 302
#define BLOCK_ 303
#define BORDER_ 304
#define BOTTOM_ 305
#define BOX_ 306
#define BOXANNULUS_ 307
#define BOXCAR_ 308
#define BOXCIRCLE_ 309
#define BPANDA_ 310
#define BUFFER_ 311
#define BW_ 312
#define CALLBACK_ 313
#define CANVAS_ 314
#define CATALOG_ 315
#define CELESTIAL_ 316
#define CENTER_ 317
#define CENTROID_ 318
#define CHANNEL_ 319
#define CIRCLE_ 320
#define CIAO_ 321
#define CLEAR_ 322
#define CLIP_ 323
#define COLOR_ 324
#define COLORBURN_ 325
#define COLORDODGE_ 326
#define COLORBAR_ 327
#define COLORMAP_ 328
#define COLORSCALE_ 329
#define COLORSPACE_ 330
#define COLS_ 331
#define COLUMN_ 332
#define COMMAND_ 333
#define COMPASS_ 334
#define COMPOSITE_ 335
#define COMPRESS_ 336
#define CONTOUR_ 337
#define CONTRAST_ 338
#define COORDINATES_ 339
#define COPY_ 340
#define COUNT_ 341
#define CPANDA_ 342
#define CREATE_ 343
#define CROP_ 344
#define CROSS_ 345
#define CROSSHAIR_ 346
#define CUBE_ 347
#define CURSOR_ 348
#define CUT_ 349
#define CMYK_ 350
#define DARKEN_ 351
#define DASH_ 352
#define DASHLIST_ 353
#define DATA_ 354
#define DATAMIN_ 355
#define DATASEC_ 356
#define DEBUG_ 357
#define DEGREES_ 358
#define DEFAULT_ 359
#define DELETE_ 360
#define DEPTH_ 361
#define DETECTOR_ 362
#define DIAMOND_ 363
#define DIFFERENCE_ 364
#define DIM_ 365
#define DOWN_ 366
#define DS9_ 367
#define EDIT_ 368
#define ECLIPTIC_ 369
#define ELEVATION_ 370
#define ELLIPTIC_ 371
#define ELLIPSE_ 372
#define ELLIPSEANNULUS_ 373
#define END_ 374
#define ENVI_ 375
#define EPANDA_ 376
#define EPSILON_ 377
#define EQUATORIAL_ 378
#define ERASE_ 379
#define EXCLUSION_ 380
#define EXT_ 381
#define FADE_ 382
#define FACTOR_ 383
#define FALSE_ 384
#define FILE_ 385
#define FILL_ 386
#define FILTER_ 387
#define FIRST_ 388
#define FIP_ 389
#define FIT_ 390
#define FITS_ 391
#define FITSY_ 392
#define FIXED_ 393
#define FK4_ 394
#define FK5_ 395
#define FONT_ 396
#define FORMAT_ 397
#define FOOTPRINT_ 398
#define FROM_ 399
#define FRONT_ 400
#define FULL_ 401
#define FUNCTION_ 402
#define GALACTIC_ 403
#define GAUSSIAN_ 404
#define GET_ 405
#define GLOBAL_ 406
#define GRAPHICS_ 407
#define GRAY_ 408
#define GRID_ 409
#define GZ_ 410
#define HANDLE_ 411
#define HARDLIGHT_ 412
#define HAS_ 413
#define HEAD_ 414
#define HEADER_ 415
#define HEIGHT_ 416
#define HIDE_ 417
#define HIGHLITE_ 418
#define HISTEQU_ 419
#define HISTOGRAM_ 420
#define HORIZONTAL_ 421
#define HUE_ 422
#define HSV_ 423
#define HLS_ 424
#define ICRS_ 425
#define ID_ 426
#define IIS_ 427
#define IMAGE_ 428
#define INCLUDE_ 429
#define INCR_ 430
#define INFO_ 431
#define ITERATION_ 432
#define IRAF_ 433
#define IRAFMIN_ 434
#define J2000_ 435
#define KEY_ 436
#define KEYWORD_ 437
#define LABEL_ 438
#define LAYER_ 439
#define LAYERNO_ 440
#define LAST_ 441
#define LENGTH_ 442
#define LEVEL_ 443
#define LIGHTEN_ 444
#define LITTLE_ 445
#define LITTLEENDIAN_ 446
#define LINE_ 447
#define LINEAR_ 448
#define LIST_ 449
#define LOAD_ 450
#define LOCAL_ 451
#define LOG_ 452
#define LUMINOSITY_ 453
#define MACOSX_ 454
#define MAGNIFIER_ 455
#define MATCH_ 456
#define MAP_ 457
#define MARK_ 458
#define MARKER_ 459
#define MASK_ 460
#define MEDIAN_ 461
#define MESSAGE_ 462
#define METHOD_ 463
#define MINMAX_ 464
#define MINOR_ 465
#define MIP_ 466
#define MMAP_ 467
#define MMAPINCR_ 468
#define MOSAIC_ 469
#define MODE_ 470
#define MOTION_ 471
#define MULTICOLOR_ 472
#define MULTIPLY_ 473
#define MOVE_ 474
#define NAME_ 475
#define NAN_ 476
#define NATIVE_ 477
#define NAXES_ 478
#define NEW_ 479
#define NEXT_ 480
#define NO_ 481
#define NONE_ 482
#define NORMAL_ 483
#define NONNAN_ 484
#define NONZERO_ 485
#define NOW_ 486
#define NRRD_ 487
#define NUMBER_ 488
#define OBJECT_ 489
#define OFF_ 490
#define ON_ 491
#define ONLY_ 492
#define OPTION_ 493
#define ORIENT_ 494
#define OVERLAY_ 495
#define PAN_ 496
#define PANNER_ 497
#define PARSER_ 498
#define PASTE_ 499
#define PERF_ 500
#define PHOTO_ 501
#define PHYSICAL_ 502
#define PIXEL_ 503
#define PLOT2D_ 504
#define PLOT3D_ 505
#define POINT_ 506
#define POINTER_ 507
#define POLYGON_ 508
#define POSTSCRIPT_ 509
#define POW_ 510
#define PRECISION_ 511
#define PRINT_ 512
#define PRESERVE_ 513
#define PROJECTION_ 514
#define PROPERTY_ 515
#define PUBLICATION_ 516
#define PROS_ 517
#define QUERY_ 518
#define RADIAL_ 519
#define RADIUS_ 520
#define RANGE_ 521
#define REGION_ 522
#define REPLACE_ 523
#define RESAMPLE_ 524
#define RESCAN_ 525
#define RESET_ 526
#define RESOLUTION_ 527
#define RGB_ 528
#define ROOT_ 529
#define ROTATE_ 530
#define RULER_ 531
#define SAMPLE_ 532
#define SAOIMAGE_ 533
#define SAOTNG_ 534
#define SAVE_ 535
#define SATURATION_ 536
#define SCALE_ 537
#define SCAN_ 538
#define SCIENTIFIC_ 539
#define SCOPE_ 540
#define SCREEN_ 541
#define SEGMENT_ 542
#define SELECT_ 543
#define SET_ 544
#define SEXAGESIMAL_ 545
#define SHAPE_ 546
#define SHADE_ 547
#define SHARED_ 548
#define SHIFT_ 549
#define SHMID_ 550
#define SHOW_ 551
#define SIGMA_ 552
#define SINH_ 553
#define SIZE_ 554
#define SLICE_ 555
#define SMMAP_ 556
#define SMOOTH_ 557
#define SOFTLIGHT_ 558
#define SOCKET_ 559
#define SOCKETGZ_ 560
#define SOURCE_ 561
#define SQRT_ 562
#define SQUARED_ 563
#define SSHARED_ 564
#define STATS_ 565
#define STATUS_ 566
#define STRENGTH_ 567
#define SUM_ 568
#define SYNC_ 569
#define SYSTEM_ 570
#define TABLE_ 571
#define TAG_ 572
#define TEMPLATE_ 573
#define TEXT_ 574
#define THREADS_ 575
#define THREED_ 576
#define THRESHOLD_ 577
#define THICK_ 578
#define TOP_ 579
#define TRANSPARENCY_ 580
#define TO_ 581
#define TOGGLE_ 582
#define TOPHAT_ 583
#define TRUE_ 584
#define TYPE_ 585
#define UNDO_ 586
#define UNHIGHLITE_ 587
#define UNLOAD_ 588
#define UNSELECT_ 589
#define UPDATE_ 590
#define UP_ 591
#define USER_ 592
#define VALUE_ 593
#define VAR_ 594
#define VIEW_ 595
#define VECTOR_ 596
#define VERSION_ 597
#define VERTEX_ 598
#define VERTICAL_ 599
#define WARP_ 600
#define WCS_ 601
#define WCSA_ 602
#define WCSB_ 603
#define WCSC_ 604
#define WCSD_ 605
#define WCSE_ 606
#define WCSF_ 607
#define WCSG_ 608
#define WCSH_ 609
#define WCSI_ 610
#define WCSJ_ 611
#define WCSK_ 612
#define WCSL_ 613
#define WCSM_ 614
#define WCSN_ 615
#define WCSO_ 616
#define WCSP_ 617
#define WCSQ_ 618
#define WCSR_ 619
#define WCSS_ 620
#define WCST_ 621
#define WCSU_ 622
#define WCSV_ 623
#define WCSW_ 624
#define WCSX_ 625
#define WCSY_ 626
#define WCSZ_ 627
#define WCS0_ 628
#define WFPC2_ 629
#define WIDTH_ 630
#define WIN32_ 631
#define XML_ 632
#define XY_ 633
#define YES_ 634
#define ZERO_ 635
#define ZMAX_ 636
#define ZSCALE_ 637
#define PIXMASK_ 638
#define ZOOM_ 639




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
#line 925 "frame/parser.C"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 938 "frame/parser.C"

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
#define YYFINAL  402
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5638

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  389
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  243
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1423
/* YYNRULES -- Number of states.  */
#define YYNSTATES  3098

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   639

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
       2,   388,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   386,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   387,   385,
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
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384
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
     530,   533,   535,   538,   541,   544,   546,   549,   551,   554,
     556,   559,   561,   564,   567,   574,   577,   582,   585,   588,
     591,   595,   598,   601,   603,   606,   608,   611,   616,   622,
     625,   629,   635,   642,   644,   646,   648,   656,   668,   677,
     690,   692,   695,   698,   700,   702,   705,   708,   711,   714,
     718,   722,   725,   728,   730,   732,   734,   736,   738,   740,
     742,   745,   748,   751,   753,   757,   760,   763,   766,   772,
     782,   792,   802,   810,   812,   815,   817,   823,   833,   843,
     853,   861,   863,   866,   869,   873,   876,   879,   882,   885,
     899,   913,   926,   939,   941,   942,   944,   946,   951,   958,
     960,   962,   964,   966,   968,   970,   972,   974,   976,   981,
     988,   992,   997,   998,  1005,  1014,  1017,  1021,  1025,  1029,
    1030,  1035,  1040,  1045,  1050,  1054,  1058,  1060,  1064,  1070,
    1075,  1080,  1084,  1087,  1088,  1090,  1092,  1094,  1096,  1098,
    1102,  1103,  1106,  1109,  1112,  1115,  1118,  1121,  1124,  1127,
    1130,  1133,  1136,  1139,  1142,  1145,  1147,  1150,  1153,  1156,
    1161,  1165,  1168,  1171,  1174,  1177,  1180,  1182,  1186,  1189,
    1192,  1195,  1198,  1200,  1203,  1212,  1215,  1217,  1220,  1222,
    1225,  1227,  1232,  1236,  1239,  1241,  1249,  1258,  1266,  1275,
    1277,  1279,  1281,  1284,  1286,  1288,  1291,  1293,  1294,  1297,
    1300,  1302,  1303,  1306,  1309,  1311,  1313,  1316,  1319,  1322,
    1324,  1326,  1328,  1330,  1332,  1334,  1335,  1337,  1340,  1342,
    1347,  1353,  1354,  1357,  1359,  1365,  1368,  1371,  1373,  1375,
    1377,  1379,  1382,  1384,  1387,  1389,  1391,  1392,  1394,  1396,
    1397,  1399,  1405,  1412,  1416,  1423,  1427,  1429,  1433,  1435,
    1437,  1439,  1443,  1450,  1458,  1464,  1467,  1469,  1475,  1480,
    1482,  1486,  1487,  1489,  1492,  1494,  1499,  1501,  1504,  1506,
    1509,  1513,  1516,  1518,  1521,  1523,  1528,  1531,  1533,  1535,
    1539,  1541,  1544,  1548,  1551,  1552,  1554,  1556,  1561,  1564,
    1565,  1567,  1571,  1576,  1581,  1582,  1584,  1586,  1588,  1590,
    1593,  1596,  1599,  1602,  1604,  1606,  1608,  1610,  1612,  1614,
    1616,  1617,  1619,  1621,  1623,  1625,  1627,  1629,  1631,  1633,
    1635,  1637,  1639,  1641,  1643,  1645,  1648,  1650,  1653,  1655,
    1658,  1661,  1664,  1667,  1669,  1671,  1674,  1676,  1677,  1679,
    1681,  1684,  1685,  1687,  1688,  1690,  1691,  1693,  1694,  1696,
    1697,  1699,  1700,  1703,  1706,  1707,  1709,  1712,  1714,  1721,
    1727,  1729,  1731,  1733,  1736,  1739,  1742,  1744,  1746,  1748,
    1750,  1753,  1755,  1757,  1759,  1762,  1764,  1766,  1768,  1771,
    1774,  1777,  1778,  1780,  1781,  1783,  1785,  1787,  1789,  1791,
    1793,  1795,  1797,  1800,  1803,  1806,  1808,  1811,  1815,  1817,
    1820,  1823,  1828,  1834,  1836,  1847,  1849,  1852,  1856,  1860,
    1863,  1866,  1869,  1872,  1875,  1878,  1881,  1886,  1891,  1896,
    1900,  1904,  1910,  1915,  1920,  1925,  1929,  1933,  1937,  1941,
    1945,  1949,  1952,  1955,  1960,  1964,  1968,  1972,  1976,  1981,
    1986,  1991,  1996,  2002,  2007,  2014,  2022,  2027,  2032,  2038,
    2041,  2045,  2049,  2053,  2057,  2061,  2065,  2069,  2072,  2076,
    2080,  2084,  2088,  2093,  2097,  2103,  2110,  2114,  2118,  2123,
    2127,  2131,  2135,  2139,  2143,  2149,  2153,  2157,  2162,  2166,
    2169,  2172,  2174,  2178,  2183,  2188,  2193,  2198,  2203,  2210,
    2215,  2220,  2226,  2231,  2236,  2241,  2246,  2252,  2257,  2264,
    2272,  2277,  2282,  2288,  2294,  2300,  2306,  2312,  2318,  2326,
    2332,  2338,  2345,  2350,  2355,  2360,  2365,  2370,  2377,  2382,
    2387,  2393,  2399,  2405,  2411,  2417,  2424,  2430,  2438,  2447,
    2453,  2459,  2466,  2470,  2474,  2478,  2482,  2487,  2491,  2497,
    2504,  2508,  2512,  2517,  2521,  2525,  2529,  2533,  2537,  2543,
    2547,  2551,  2556,  2561,  2566,  2570,  2576,  2581,  2586,  2589,
    2593,  2600,  2607,  2609,  2611,  2613,  2616,  2619,  2622,  2626,
    2630,  2633,  2646,  2649,  2652,  2654,  2658,  2663,  2666,  2667,
    2671,  2673,  2676,  2679,  2682,  2685,  2688,  2693,  2698,  2703,
    2707,  2712,  2718,  2727,  2734,  2744,  2751,  2759,  2770,  2782,
    2795,  2805,  2811,  2818,  2822,  2828,  2834,  2841,  2847,  2852,
    2857,  2862,  2872,  2883,  2895,  2905,  2912,  2919,  2926,  2933,
    2940,  2947,  2954,  2961,  2968,  2976,  2984,  2987,  2992,  2997,
    3002,  3007,  3013,  3018,  3023,  3029,  3035,  3039,  3044,  3049,
    3054,  3062,  3072,  3079,  3090,  3102,  3115,  3125,  3129,  3132,
    3136,  3142,  3150,  3155,  3159,  3163,  3170,  3178,  3186,  3194,
    3199,  3204,  3214,  3219,  3223,  3228,  3236,  3244,  3247,  3251,
    3255,  3259,  3264,  3267,  3270,  3275,  3286,  3290,  3295,  3297,
    3301,  3304,  3307,  3310,  3313,  3317,  3323,  3328,  3334,  3337,
    3340,  3343,  3346,  3350,  3353,  3356,  3359,  3363,  3366,  3370,
    3375,  3379,  3383,  3390,  3395,  3398,  3402,  3405,  3408,  3413,
    3417,  3421,  3424,  3428,  3430,  3433,  3435,  3438,  3441,  3444,
    3448,  3450,  3452,  3454,  3456,  3459,  3461,  3464,  3467,  3469,
    3472,  3475,  3477,  3480,  3482,  3484,  3486,  3488,  3490,  3492,
    3494,  3496,  3497,  3499,  3502,  3505,  3508,  3512,  3518,  3526,
    3534,  3541,  3548,  3555,  3562,  3568,  3575,  3582,  3589,  3596,
    3603,  3610,  3617,  3629,  3637,  3645,  3653,  3663,  3673,  3684,
    3697,  3710,  3714,  3717,  3718,  3720,  3724,  3729,  3734,  3739,
    3740,  3742,  3744,  3749,  3754,  3756,  3758,  3760,  3762,  3764,
    3766,  3768,  3770,  3773,  3775,  3777,  3779,  3783,  3787,  3796,
    3803,  3814,  3822,  3830,  3836,  3839,  3842,  3846,  3851,  3857,
    3863,  3869,  3873,  3878,  3884,  3890,  3896,  3902,  3905,  3909,
    3913,  3919,  3923,  3927,  3931,  3935,  3939,  3944,  3950,  3956,
    3962,  3968,  3972,  3977,  3983,  3989,  3992,  3995,  3999,  4005,
    4012,  4019,  4023,  4027,  4034,  4041,  4047,  4053,  4056,  4060,
    4064,  4070,  4077,  4081,  4084,  4087,  4091,  4094,  4098,  4101,
    4105,  4111,  4118,  4121,  4124,  4127,  4130,  4132,  4137,  4142,
    4144,  4147,  4150,  4153,  4156,  4159,  4162,  4165,  4169,  4172,
    4176,  4179,  4183,  4185,  4187,  4189,  4191,  4193,  4195,  4196,
    4199,  4200,  4203,  4204,  4206,  4207,  4208,  4210,  4212,  4214,
    4216,  4218,  4226,  4235,  4238,  4245,  4248,  4255,  4258,  4262,
    4265,  4267,  4269,  4273,  4277,  4279,  4284,  4287,  4289,  4293,
    4297,  4302,  4306,  4310,  4314,  4316,  4318,  4320,  4322,  4324,
    4326,  4328,  4330,  4332,  4334,  4336,  4338,  4340,  4342,  4344,
    4347,  4348,  4349,  4352,  4359,  4367,  4370,  4372,  4376,  4378,
    4382,  4384,  4386,  4388,  4391,  4394,  4396,  4400,  4401,  4402,
    4405,  4408,  4410,  4414,  4420,  4421,  4423,  4425,  4428,  4431,
    4435,  4438,  4442,  4445,  4449,  4452,  4456,  4458,  4461,  4463,
    4466,  4468,  4471,  4473,  4476,  4478,  4481,  4483,  4486,  4488,
    4491,  4493,  4496,  4499,  4503,  4506,  4509,  4512,  4515,  4517,
    4519,  4521,  4523,  4528,  4531,  4535,  4539,  4542,  4546,  4549,
    4552,  4555,  4559,  4563,  4567,  4570,  4574,  4576,  4580,  4584,
    4586,  4589,  4592,  4595,  4598,  4608,  4615,  4617,  4619,  4621,
    4623,  4626,  4629,  4633,  4637,  4639,  4642,  4646,  4650,  4652,
    4655,  4657,  4659,  4661,  4663,  4665,  4667,  4670,  4673,  4678,
    4681,  4684,  4687,  4690,  4693,  4698,  4701,  4704,  4707,  4710,
    4713,  4718,  4720,  4723,  4726,  4729,  4733,  4735,  4737,  4739,
    4742,  4745,  4748,  4751,  4754,  4757,  4760,  4763,  4766,  4770,
    4774,  4778,  4782,  4786,  4790,  4792,  4795,  4798,  4801,  4805,
    4808,  4812,  4816,  4820,  4824,  4828,  4832,  4835,  4838,  4841,
    4844,  4847,  4850,  4853,  4856,  4859,  4862,  4865,  4868,  4871,
    4874,  4878,  4882,  4886,  4889,  4892,  4895,  4899,  4903,  4907,
    4910,  4913,  4916,  4919,  4922,  4925,  4929,  4933,  4937,  4940,
    4943,  4946,  4949,  4952,  4955,  4959,  4963,  4967,  4970,  4973,
    4976,  4979,  4982,  4985,  4988,  4991,  4994,  4998,  5002,  5006,
    5011,  5018,  5021,  5023,  5025,  5027,  5029,  5031,  5032,  5038,
    5040,  5047,  5051,  5053,  5056,  5059,  5062,  5066,  5070,  5073,
    5076,  5079,  5082,  5085,  5088,  5092,  5095,  5098,  5102,  5104,
    5108,  5113,  5116,  5118,  5121,  5127,  5134,  5141,  5144,  5146,
    5149,  5152,  5158,  5165
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     390,     0,    -1,   102,   392,    -1,    45,   426,    -1,    42,
      69,     5,    -1,    42,    69,   393,    -1,    48,   431,    -1,
      62,    -1,    67,    -1,    68,   433,    -1,    72,   317,     5,
      -1,    73,   438,    -1,    74,   440,    -1,    82,   441,    -1,
      89,   450,    -1,    91,   452,    -1,    92,   453,    -1,   101,
     393,    -1,   127,   455,    -1,   137,   456,    -1,   150,   457,
      -1,   154,   508,    -1,   158,   511,    -1,   162,    -1,   163,
     393,    -1,   163,    69,     5,    -1,   168,   595,    -1,   169,
     594,    -1,   172,   517,    -1,   178,    15,     4,    -1,   195,
     520,    -1,   199,   538,    -1,   200,   539,    -1,   201,   540,
      -1,   204,   557,   541,    -1,   205,   578,    -1,   184,   577,
      -1,   217,   593,    -1,   221,    69,     5,    -1,   239,   579,
      -1,   241,   580,    -1,   242,   583,    -1,   263,    93,    -1,
     256,   585,    -1,   254,   584,    -1,   271,    -1,   267,   557,
     587,    -1,   273,   592,    -1,   275,   596,    -1,   280,   598,
      -1,   296,    -1,   302,   620,    -1,   320,     4,    -1,   321,
     419,    -1,   333,    -1,   335,   622,    -1,   342,    -1,   345,
     624,    -1,   346,   625,    -1,   376,   629,    -1,   384,   630,
      -1,     3,    -1,     4,    -1,   393,    -1,   214,   393,    -1,
     243,   393,    -1,   245,   393,    -1,   346,   393,    -1,    45,
     393,    -1,    48,   393,    -1,    81,   393,    -1,    89,   393,
      -1,   155,   393,    -1,   273,   393,    -1,     4,    -1,   379,
      -1,   385,    -1,   236,    -1,   329,    -1,   226,    -1,   386,
      -1,   235,    -1,   129,    -1,    -1,   274,    39,    -1,   146,
      39,    -1,   274,    -1,   146,    -1,    -1,   396,    -1,   391,
      -1,     6,    -1,     7,    -1,     8,    -1,     9,    -1,    10,
      -1,   397,   397,    -1,   398,   399,    -1,   399,   399,    -1,
     391,   391,    -1,   173,    -1,   247,    -1,   107,    -1,    19,
      -1,   402,    -1,   346,    -1,   347,    -1,   348,    -1,   349,
      -1,   350,    -1,   351,    -1,   352,    -1,   353,    -1,   354,
      -1,   355,    -1,   356,    -1,   357,    -1,   358,    -1,   359,
      -1,   360,    -1,   361,    -1,   362,    -1,   363,    -1,   364,
      -1,   365,    -1,   366,    -1,   367,    -1,   368,    -1,   369,
      -1,   370,    -1,   371,    -1,   372,    -1,   373,    -1,    59,
      -1,   242,    -1,    -1,   380,    -1,   230,    -1,   221,    -1,
     229,    -1,   266,    -1,    -1,   306,    -1,   218,    -1,   286,
      -1,   240,    -1,    96,    -1,   189,    -1,    71,    -1,    70,
      -1,   157,    -1,   303,    -1,   109,    -1,   125,    -1,   167,
      -1,   281,    -1,    69,    -1,   198,    -1,   193,    -1,   197,
      -1,   255,    -1,   307,    -1,   308,    -1,    29,    -1,   298,
      -1,   164,    -1,    31,    -1,   283,    -1,   277,    -1,   100,
      -1,   179,    -1,    -1,   139,    -1,    36,    -1,   140,    -1,
     180,    -1,   170,    -1,   148,    -1,   114,    -1,    -1,   103,
      -1,   290,    -1,    -1,   103,    -1,    24,    -1,    25,    -1,
      -1,   295,    -1,   181,    -1,    -1,    16,    -1,   175,    -1,
      -1,   173,    -1,   205,    -1,    -1,    65,    -1,    51,    -1,
     108,    -1,    90,    -1,   387,    -1,    27,    -1,    54,    -1,
      -1,     4,    -1,    87,    -1,   165,    -1,   249,    -1,   250,
      -1,   264,    -1,   310,    -1,    -1,    33,    -1,   313,    -1,
     206,    -1,    -1,   222,    -1,    43,    -1,    44,    -1,   190,
      -1,   191,    -1,   340,   425,    -1,    49,   422,    -1,    79,
     423,    -1,   163,   424,    -1,   208,   590,    -1,    38,   591,
      -1,   292,   420,    -1,   282,   391,    -1,   314,     4,    -1,
     322,   391,    -1,   393,    -1,    18,   391,    -1,   312,   391,
      -1,   228,   421,    -1,   393,    -1,   312,   391,    -1,   393,
      -1,    69,     5,    -1,   393,    -1,    69,     5,    -1,   393,
      -1,    69,     5,    -1,   391,   391,    -1,   251,   391,   391,
     391,   391,   391,    -1,    11,   427,    -1,    76,     5,     5,
       5,    -1,   106,     4,    -1,   128,   428,    -1,   147,   429,
      -1,    56,   299,     4,    -1,   326,   430,    -1,   132,     5,
      -1,    62,    -1,   391,   391,    -1,   391,    -1,   391,   391,
      -1,   391,    11,   391,   391,    -1,   391,   391,    11,   391,
     391,    -1,   326,   391,    -1,   326,   391,   391,    -1,   326,
     391,    11,   391,   391,    -1,   326,   391,   391,    11,   391,
     391,    -1,    33,    -1,   313,    -1,   135,    -1,   391,   391,
      11,    62,     5,     5,     5,    -1,   391,   391,     4,   391,
     391,    11,    62,     5,     5,     5,     5,    -1,   391,   391,
      11,   391,   391,     5,     5,     5,    -1,   391,   391,     4,
     391,   391,    11,   391,   391,     5,     5,     5,     5,    -1,
     391,    -1,   391,   391,    -1,   326,   432,    -1,   135,    -1,
     391,    -1,   391,   391,    -1,   285,   434,    -1,   215,   435,
      -1,   209,   436,    -1,   337,   391,   391,    -1,   337,   221,
     221,    -1,   382,   437,    -1,   258,   393,    -1,   151,    -1,
     196,    -1,   391,    -1,   209,    -1,   382,    -1,   381,    -1,
     337,    -1,     4,   407,    -1,   215,   407,    -1,   277,     4,
      -1,   270,    -1,   391,     4,     4,    -1,    83,   391,    -1,
     277,     4,    -1,   192,     4,    -1,     4,   391,   391,     4,
       4,    -1,   273,   391,   391,   391,   391,   391,   391,     4,
       4,    -1,   168,   391,   391,   391,   391,   391,   391,     4,
       4,    -1,   169,   391,   391,   391,   391,   391,   391,     4,
       4,    -1,   217,     4,     4,     5,     5,     5,     4,    -1,
      41,    -1,   216,   439,    -1,   119,    -1,     4,   391,   391,
       4,     4,    -1,   273,   391,   391,   391,   391,   391,   391,
       4,     4,    -1,   168,   391,   391,   391,   391,   391,   391,
       4,     4,    -1,   169,   391,   391,   391,   391,   391,   391,
       4,     4,    -1,   217,     4,     4,     5,     5,     5,     4,
      -1,   406,    -1,   197,   391,    -1,    88,   442,    -1,    98,
       4,     4,    -1,   105,   443,    -1,   195,   444,    -1,   244,
     448,    -1,   280,   449,    -1,     5,     4,     4,   447,     4,
       4,   406,   391,   445,   446,   391,   391,     5,    -1,     5,
       4,     4,   447,     4,     4,   406,   391,   391,   446,   391,
     391,     5,    -1,     5,     4,     4,   447,     4,     4,   406,
     391,   445,   391,   391,     5,    -1,     5,     4,     4,   447,
       4,     4,   406,   391,   391,   391,   391,     5,    -1,   253,
      -1,    -1,    32,    -1,     5,    -1,     5,     5,     4,   393,
      -1,     5,     4,   393,     5,   401,   408,    -1,   209,    -1,
     382,    -1,   381,    -1,   337,    -1,   151,    -1,   196,    -1,
     302,    -1,    48,    -1,     5,    -1,     5,     5,     4,   393,
      -1,     5,     5,     4,   393,     4,     4,    -1,     5,   401,
     408,    -1,    32,     5,   401,   408,    -1,    -1,   391,   391,
     391,   391,   401,   408,    -1,    62,   400,   401,   408,   391,
     391,   401,   410,    -1,   321,   451,    -1,    41,   391,   391,
      -1,   216,   391,   391,    -1,   119,   391,   391,    -1,    -1,
     391,   391,   401,   408,    -1,    41,   391,   391,     4,    -1,
     216,   391,   391,     4,    -1,   119,   391,   391,     4,    -1,
     403,   391,   391,    -1,   401,   408,   400,    -1,   393,    -1,
     345,   391,   391,    -1,    41,   216,   403,   391,   391,    -1,
     216,   403,   391,   391,    -1,    41,   216,   401,   400,    -1,
     216,   401,   400,    -1,    34,     4,    -1,    -1,    33,    -1,
     313,    -1,   206,    -1,   391,    -1,    67,    -1,   158,   126,
       5,    -1,    -1,    42,    69,    -1,    45,   460,    -1,    48,
     462,    -1,    68,   463,    -1,    73,   467,    -1,    72,   466,
      -1,    74,   469,    -1,    82,   471,    -1,    84,   474,    -1,
      89,   475,    -1,    91,   476,    -1,    93,   478,    -1,    92,
     477,    -1,    99,   479,    -1,   101,    -1,   136,   483,    -1,
     154,   489,    -1,   163,    69,    -1,   165,     5,     5,     4,
      -1,   166,    94,   458,    -1,   168,   497,    -1,   169,   496,
      -1,   172,   481,    -1,   176,   480,    -1,   178,    15,    -1,
     209,    -1,   204,   557,   551,    -1,   205,   491,    -1,   184,
     490,    -1,   217,   495,    -1,   221,    69,    -1,   239,    -1,
     241,   493,    -1,   248,   316,   403,   391,   391,     4,     4,
       5,    -1,   273,   494,    -1,   275,    -1,   302,   498,    -1,
     320,    -1,   321,   499,    -1,   330,    -1,   338,   403,   391,
     391,    -1,   344,    94,   459,    -1,   346,   506,    -1,   384,
      -1,     5,     5,   391,   391,   403,     4,   454,    -1,     5,
       5,   391,   391,   401,   408,     4,   454,    -1,     5,     5,
     391,   391,   403,     4,   454,    -1,     5,     5,   391,   391,
     401,   408,     4,   454,    -1,   106,    -1,   128,    -1,   147,
      -1,    56,   299,    -1,    93,    -1,   132,    -1,    76,   461,
      -1,   194,    -1,    -1,   209,     5,    -1,   110,     5,    -1,
     128,    -1,    -1,   445,   446,    -1,   391,   446,    -1,   285,
      -1,   215,    -1,   209,   464,    -1,   337,   188,    -1,   382,
     465,    -1,   258,    -1,   215,    -1,   277,    -1,    83,    -1,
     277,    -1,   192,    -1,    -1,   317,    -1,   188,   468,    -1,
       4,    -1,     4,   403,   391,   391,    -1,     4,   391,   391,
     406,   391,    -1,    -1,   188,   470,    -1,   197,    -1,     4,
     391,   391,   406,   391,    -1,   401,   408,    -1,    68,   472,
      -1,    69,    -1,    97,    -1,    98,    -1,   188,    -1,   233,
     188,    -1,   208,    -1,    74,   473,    -1,   302,    -1,   375,
      -1,    -1,   215,    -1,   285,    -1,    -1,   197,    -1,   391,
     391,   401,   408,   409,    -1,   403,   391,   391,   401,   408,
     409,    -1,   401,   408,   409,    -1,    62,   401,   408,   409,
     401,   410,    -1,   321,   401,   408,    -1,   403,    -1,   401,
     408,   409,    -1,   311,    -1,    34,    -1,   403,    -1,   401,
     408,   409,    -1,   401,   408,   400,   391,   391,     5,    -1,
       4,   401,   408,   400,   391,   391,     5,    -1,   403,   391,
     391,     4,     4,    -1,     5,   394,    -1,    68,    -1,   403,
     391,   391,     5,   394,    -1,     4,     4,     4,     4,    -1,
      93,    -1,   130,   220,   482,    -1,    -1,     4,    -1,   391,
     391,    -1,   223,    -1,    62,   401,   408,   409,    -1,    86,
      -1,   106,   486,    -1,    46,    -1,   126,   484,    -1,   130,
     220,   487,    -1,   160,   485,    -1,   161,    -1,   234,   220,
      -1,   299,    -1,   299,   401,   408,   410,    -1,   300,   488,
      -1,   375,    -1,     4,    -1,   403,   391,   391,    -1,     4,
      -1,   182,     5,    -1,     4,   182,     5,    -1,   346,     4,
      -1,    -1,     4,    -1,   394,    -1,   394,   403,   391,   391,
      -1,   394,     4,    -1,    -1,     4,    -1,   144,   173,   401,
      -1,   144,   173,     4,   401,    -1,   326,   173,   391,   401,
      -1,    -1,   238,    -1,   339,    -1,    86,    -1,   185,    -1,
      69,   492,    -1,    47,   492,    -1,   325,   492,    -1,   340,
     492,    -1,    69,    -1,   203,    -1,   266,    -1,   315,    -1,
     325,    -1,    86,    -1,    47,    -1,    -1,     4,    -1,   258,
      -1,    64,    -1,   315,    -1,   340,    -1,   315,    -1,    64,
      -1,   315,    -1,   340,    -1,    64,    -1,   315,    -1,   340,
      -1,   147,    -1,   265,    -1,   265,   210,    -1,   297,    -1,
     297,   210,    -1,    21,    -1,   340,   505,    -1,    49,   502,
      -1,    79,   503,    -1,   163,   504,    -1,   208,    -1,    38,
      -1,   292,   500,    -1,   282,    -1,    -1,    18,    -1,   312,
      -1,   228,   501,    -1,    -1,   312,    -1,    -1,    69,    -1,
      -1,    69,    -1,    -1,    69,    -1,    -1,   251,    -1,    -1,
      15,   507,    -1,   220,   402,    -1,    -1,   252,    -1,    88,
     509,    -1,   105,    -1,   401,   408,   409,   510,     5,     5,
      -1,   401,   408,   409,   510,     5,    -1,    20,    -1,   261,
      -1,    19,    -1,    42,    69,    -1,    45,   512,    -1,    82,
     513,    -1,    89,    -1,   100,    -1,   101,    -1,   107,    -1,
     136,   514,    -1,   154,    -1,   172,    -1,   179,    -1,   204,
     515,    -1,   247,    -1,   173,    -1,   302,    -1,   315,   401,
      -1,   346,   516,    -1,    77,     5,    -1,    -1,    32,    -1,
      -1,    45,    -1,    92,    -1,   214,    -1,   163,    -1,   288,
      -1,   244,    -1,   331,    -1,   401,    -1,    61,   401,    -1,
     123,   401,    -1,   193,   401,    -1,    17,    -1,   321,   401,
      -1,   224,     4,     4,    -1,   124,    -1,   207,     5,    -1,
      93,   519,    -1,   289,   130,   220,   518,    -1,   289,     4,
       4,     4,     4,    -1,   335,    -1,   346,   391,   391,   391,
     391,   391,   391,   391,   391,     4,    -1,     5,    -1,     5,
       4,    -1,     4,     4,    59,    -1,     4,     4,   401,    -1,
     215,   393,    -1,    26,   521,    -1,   120,   523,    -1,   136,
     524,    -1,   175,   537,    -1,   232,   535,    -1,   246,   536,
      -1,     5,    13,     5,   413,    -1,     5,    14,     5,   413,
      -1,     5,    64,     5,   413,    -1,     5,   212,   413,    -1,
       5,   213,   413,    -1,     5,   293,   411,     4,   413,    -1,
       5,   304,     4,   413,    -1,     5,   305,     4,   413,    -1,
       5,   339,     5,   413,    -1,   273,    92,   522,    -1,   169,
      92,   522,    -1,   168,    92,   522,    -1,     5,    13,     5,
      -1,     5,    14,     5,    -1,     5,    64,     5,    -1,     5,
     212,    -1,     5,   213,    -1,     5,   293,   411,     4,    -1,
       5,   304,     4,    -1,     5,   305,     4,    -1,     5,   339,
       5,    -1,     5,     5,   301,    -1,     5,    13,     5,   413,
      -1,     5,    14,     5,   413,    -1,     5,    64,     5,   413,
      -1,     5,   212,   412,   413,    -1,     5,     5,   301,   412,
     413,    -1,     5,   213,   412,   413,    -1,     5,   293,   411,
       4,   412,   413,    -1,     5,   309,   411,     4,     4,   412,
     413,    -1,     5,   304,     4,   413,    -1,     5,   305,     4,
     413,    -1,     5,   339,     5,   412,   413,    -1,   300,   525,
      -1,   126,    92,   526,    -1,   273,   173,   534,    -1,   273,
      92,   533,    -1,   169,   173,   534,    -1,   169,    92,   533,
      -1,   168,   173,   534,    -1,   168,    92,   533,    -1,   214,
     527,    -1,     5,    13,     5,    -1,     5,    14,     5,    -1,
       5,    64,     5,    -1,     5,   212,   412,    -1,     5,     5,
     301,   412,    -1,     5,   213,   412,    -1,     5,   293,   411,
       4,   412,    -1,     5,   309,   411,     4,     4,   412,    -1,
       5,   304,     4,    -1,     5,   305,     4,    -1,     5,   339,
       5,   412,    -1,     5,    13,     5,    -1,     5,    14,     5,
      -1,     5,    64,     5,    -1,     5,   212,   412,    -1,     5,
     213,   412,    -1,     5,   293,   411,     4,   412,    -1,     5,
     304,     4,    -1,     5,   305,     4,    -1,     5,   339,     5,
     412,    -1,   173,   178,   528,    -1,   178,   529,    -1,   173,
     530,    -1,   532,    -1,   173,   374,   531,    -1,     5,    13,
       5,   413,    -1,     5,    14,     5,   413,    -1,     5,    64,
       5,   413,    -1,     5,   212,   412,   413,    -1,     5,   213,
     412,   413,    -1,     5,   293,   411,     4,   412,   413,    -1,
       5,   304,     4,   413,    -1,     5,   305,     4,   413,    -1,
       5,   339,     5,   412,   413,    -1,     5,    13,     5,   413,
      -1,     5,    14,     5,   413,    -1,     5,    64,     5,   413,
      -1,     5,   212,   412,   413,    -1,     5,     5,   301,   412,
     413,    -1,     5,   213,   412,   413,    -1,     5,   293,   411,
       4,   412,   413,    -1,     5,   309,   411,     4,     4,   412,
     413,    -1,     5,   304,     4,   413,    -1,     5,   305,     4,
     413,    -1,     5,   339,     5,   412,   413,    -1,   402,     5,
      13,     5,   413,    -1,   402,     5,    14,     5,   413,    -1,
     402,     5,    64,     5,   413,    -1,   402,     5,   212,   412,
     413,    -1,   402,     5,   213,   412,   413,    -1,   402,     5,
     293,   411,     4,   412,   413,    -1,   402,     5,   304,     4,
     413,    -1,   402,     5,   305,     4,   413,    -1,   402,     5,
     339,     5,   412,   413,    -1,     5,    13,     5,   413,    -1,
       5,    14,     5,   413,    -1,     5,    64,     5,   413,    -1,
       5,   212,   412,   413,    -1,     5,   213,   412,   413,    -1,
       5,   293,   411,     4,   412,   413,    -1,     5,   304,     4,
     413,    -1,     5,   305,     4,   413,    -1,     5,   339,     5,
     412,   413,    -1,   402,     5,    13,     5,   413,    -1,   402,
       5,    14,     5,   413,    -1,   402,     5,    64,     5,   413,
      -1,   402,     5,   212,   412,   413,    -1,   402,     5,     5,
     301,   412,   413,    -1,   402,     5,   213,   412,   413,    -1,
     402,     5,   293,   411,     4,   412,   413,    -1,   402,     5,
     309,   411,     4,     4,   412,   413,    -1,   402,     5,   304,
       4,   413,    -1,   402,     5,   305,     4,   413,    -1,   402,
       5,   339,     5,   412,   413,    -1,     5,    13,     5,    -1,
       5,    14,     5,    -1,     5,    64,     5,    -1,     5,   212,
     412,    -1,     5,     5,   301,   412,    -1,     5,   213,   412,
      -1,     5,   293,   411,     4,   412,    -1,     5,   309,   411,
       4,     4,   412,    -1,     5,   304,     4,    -1,     5,   305,
       4,    -1,     5,   339,     5,   412,    -1,     5,    13,     5,
      -1,     5,    14,     5,    -1,     5,    64,     5,    -1,     5,
     212,   412,    -1,     5,   213,   412,    -1,     5,   293,   411,
       4,   412,    -1,     5,   304,     4,    -1,     5,   305,     4,
      -1,     5,   339,     5,   412,    -1,     5,    13,     5,   413,
      -1,     5,    64,     5,   413,    -1,     5,   212,   413,    -1,
       5,   293,   411,     4,   413,    -1,     5,   304,     4,   413,
      -1,     5,   339,     5,   413,    -1,     5,     5,    -1,   300,
       5,     5,    -1,    99,     4,     4,     4,     4,     4,    -1,
     209,     4,     4,     4,     4,     4,    -1,   119,    -1,   257,
      -1,   393,    -1,   152,   393,    -1,    93,   393,    -1,    69,
       5,    -1,     5,     4,     4,    -1,   335,   391,   391,    -1,
     384,   391,    -1,     5,     5,   402,   408,     5,     5,   402,
     408,   391,   402,   410,     5,    -1,    63,   544,    -1,    69,
       5,    -1,    85,    -1,    78,   550,     5,    -1,    78,   550,
     339,     5,    -1,    80,   105,    -1,    -1,    88,   542,   545,
      -1,    94,    -1,   105,   548,    -1,   113,   549,    -1,   122,
       4,    -1,   141,     5,    -1,   163,    16,    -1,   163,   237,
     391,   391,    -1,   163,   327,   391,   391,    -1,     4,    20,
     416,   393,    -1,     4,    21,   396,    -1,     4,    21,   396,
     403,    -1,     4,    21,   396,   401,   408,    -1,     4,    22,
     265,   391,   391,     4,   401,   410,    -1,     4,    22,   265,
       5,   401,   410,    -1,     4,    52,   265,   391,   391,   391,
       4,   401,   410,    -1,     4,    52,   265,     5,   401,   410,
      -1,     4,    51,   265,   391,   391,   401,   410,    -1,     4,
      55,   113,   396,   396,     4,   391,   391,   391,     4,    -1,
       4,    55,   113,   396,   396,     4,   391,   391,   391,     4,
     403,    -1,     4,    55,   113,   396,   396,     4,   391,   391,
     391,     4,   401,   408,    -1,     4,    55,   113,     5,     5,
     401,   408,   401,   410,    -1,     4,    58,   543,     5,     5,
      -1,     4,    65,   265,   391,   401,   410,    -1,     4,    69,
       5,    -1,     4,    79,    27,   393,   393,    -1,     4,    79,
     183,     5,     5,    -1,     4,    79,   265,   391,   401,   410,
      -1,     4,    79,   315,   401,   408,    -1,     4,    80,   151,
     393,    -1,     4,    80,    28,   393,    -1,     4,    80,   330,
       5,    -1,     4,    87,   113,   396,   396,     4,   391,   391,
       4,    -1,     4,    87,   113,   396,   396,     4,   391,   391,
       4,   403,    -1,     4,    87,   113,   396,   396,     4,   391,
     391,     4,   401,   408,    -1,     4,    87,   113,     5,     5,
     401,   408,   401,   410,    -1,     4,    88,    22,   265,   391,
     391,    -1,     4,    88,    52,   265,   391,   391,    -1,     4,
      88,    55,    21,   391,   391,    -1,     4,    88,    55,   265,
     391,   391,    -1,     4,    88,   118,   265,   391,   391,    -1,
       4,    88,   121,    21,   391,   391,    -1,     4,    88,   121,
     265,   391,   391,    -1,     4,    88,    87,    21,   391,   391,
      -1,     4,    88,    87,   265,   391,   391,    -1,     4,    88,
     253,   343,     4,   391,   391,    -1,     4,    88,   287,   343,
       4,   391,   391,    -1,     4,   105,    -1,     4,   105,    22,
       4,    -1,     4,   105,    52,     4,    -1,     4,   105,    55,
       4,    -1,     4,   105,   118,     4,    -1,     4,   105,    58,
     543,     5,    -1,     4,   105,   121,     4,    -1,     4,   105,
      87,     4,    -1,     4,   105,   253,   343,     4,    -1,     4,
     105,   287,   343,     4,    -1,     4,   105,   317,    -1,     4,
     105,   317,     5,    -1,     4,   105,   317,     4,    -1,     4,
     113,    41,     4,    -1,     4,   117,   265,   391,   391,   401,
     410,    -1,     4,   118,   265,   391,   391,   391,     4,   401,
     410,    -1,     4,   118,   265,     5,   401,   410,    -1,     4,
     121,   113,   396,   396,     4,   391,   391,   391,     4,    -1,
       4,   121,   113,   396,   396,     4,   391,   391,   391,     4,
     403,    -1,     4,   121,   113,   396,   396,     4,   391,   391,
     391,     4,   401,   408,    -1,     4,   121,   113,     5,     5,
     401,   408,   401,   410,    -1,     4,   141,     5,    -1,     4,
     163,    -1,     4,   163,   237,    -1,     4,   192,    27,   393,
     393,    -1,     4,   192,   251,   401,   408,   400,   400,    -1,
       4,   219,   391,   391,    -1,     4,   219,   145,    -1,     4,
     219,    37,    -1,     4,   219,   326,   401,   408,   400,    -1,
       4,   253,   251,   401,   408,   409,     5,    -1,     4,   253,
     271,   391,   391,   401,   410,    -1,     4,   287,   271,   391,
     391,   401,   410,    -1,     4,   251,   291,   414,    -1,     4,
     251,   299,     4,    -1,     4,   259,   401,   408,   400,   400,
     391,   401,   410,    -1,     4,   260,   563,   393,    -1,     4,
     275,    41,    -1,     4,   276,   142,     5,    -1,     4,   276,
     251,   401,   408,   400,   400,    -1,     4,   276,   315,   401,
     408,   401,   410,    -1,     4,   288,    -1,     4,   288,   237,
      -1,     4,   317,     5,    -1,     4,   319,     5,    -1,     4,
     319,   275,   393,    -1,     4,   332,    -1,     4,   334,    -1,
       4,   341,    27,   393,    -1,     4,   341,   251,   401,   408,
     400,   401,   410,   391,   396,    -1,     4,   375,     4,    -1,
       4,    98,     4,     4,    -1,   181,    -1,   181,   391,   391,
      -1,   194,   558,    -1,   195,   559,    -1,   219,   560,    -1,
     258,   393,    -1,   260,   563,   393,    -1,   260,   563,   393,
     391,   391,    -1,   275,    41,   391,   391,    -1,   275,   216,
     391,   391,     4,    -1,   275,   119,    -1,   280,   567,    -1,
     288,   568,    -1,   296,   569,    -1,     5,    69,     5,    -1,
       5,    85,    -1,     5,   105,    -1,     5,    94,    -1,     5,
     141,     5,    -1,     5,   163,    -1,     5,   163,   237,    -1,
       5,   219,   391,   391,    -1,     5,   219,   145,    -1,     5,
     219,    37,    -1,     5,   219,   326,   401,   408,   400,    -1,
       5,   260,   563,   393,    -1,     5,   288,    -1,     5,   288,
     237,    -1,     5,   332,    -1,     5,   334,    -1,   317,   113,
       5,     5,    -1,   317,   105,     5,    -1,   317,   105,    16,
      -1,   317,     5,    -1,   317,   335,     5,    -1,   244,    -1,
     244,   401,    -1,   331,    -1,   332,    16,    -1,   334,    16,
      -1,   375,     4,    -1,    98,     4,     4,    -1,   288,    -1,
     334,    -1,   163,    -1,   332,    -1,    41,   219,    -1,   219,
      -1,   119,   219,    -1,    41,   113,    -1,   113,    -1,   119,
     113,    -1,    41,   275,    -1,   275,    -1,   119,   275,    -1,
     105,    -1,   319,    -1,    69,    -1,   375,    -1,   260,    -1,
     141,    -1,   181,    -1,   335,    -1,    -1,     4,    -1,    31,
     393,    -1,   265,   391,    -1,   177,     4,    -1,   238,     4,
     391,    -1,    65,   391,   391,   391,   564,    -1,   117,   391,
     391,   391,   391,   395,   564,    -1,    51,   391,   391,   391,
     391,   395,   564,    -1,   253,   391,   391,   391,   391,   564,
      -1,   287,   391,   391,   391,   391,   564,    -1,   192,   391,
     391,   391,   391,   564,    -1,   341,   391,   391,   391,   391,
     564,    -1,   319,   391,   391,   395,   564,    -1,    65,   251,
     391,   391,   415,   564,    -1,    51,   251,   391,   391,   415,
     564,    -1,   108,   251,   391,   391,   415,   564,    -1,    90,
     251,   391,   391,   415,   564,    -1,   387,   251,   391,   391,
     415,   564,    -1,    27,   251,   391,   391,   415,   564,    -1,
      54,   251,   391,   391,   415,   564,    -1,   276,   391,   391,
     391,   391,   401,   408,   401,   410,     5,   564,    -1,    79,
     391,   391,   391,   401,   408,   564,    -1,   259,   391,   391,
     391,   391,   391,   564,    -1,    22,   391,   391,   391,   391,
       4,   564,    -1,   118,   391,   391,   391,   391,   391,     4,
     395,   564,    -1,    52,   391,   391,   391,   391,   391,     4,
     395,   564,    -1,    87,   391,   391,   396,   396,     4,   391,
     391,     4,   564,    -1,   121,   391,   391,   396,   396,     4,
     391,   391,   391,     4,   395,   564,    -1,    55,   391,   391,
     396,   396,     4,   391,   391,   391,     4,   395,   564,    -1,
      80,   546,   564,    -1,   318,   547,    -1,    -1,     4,    -1,
       5,   391,   391,    -1,   339,     5,   391,   391,    -1,   391,
     391,   339,     5,    -1,     5,   401,   408,   400,    -1,    -1,
     288,    -1,    16,    -1,    41,   391,   391,     4,    -1,   216,
     391,   391,     4,    -1,   119,    -1,   112,    -1,   377,    -1,
      66,    -1,   279,    -1,   278,    -1,   262,    -1,   378,    -1,
      63,   552,    -1,    69,    -1,   141,    -1,   122,    -1,   156,
     391,   391,    -1,   171,   391,   391,    -1,     4,    20,    87,
       5,     5,     5,   401,     4,    -1,     4,    20,   165,     5,
       5,     4,    -1,     4,    20,   249,     5,     5,     5,     5,
     401,   408,   417,    -1,     4,    20,   250,     5,     5,   401,
     417,    -1,     4,    20,   264,     5,     5,     5,   401,    -1,
       4,    20,   310,   401,   408,    -1,   171,    16,    -1,     4,
      21,    -1,     4,    21,   403,    -1,     4,    21,   401,   408,
      -1,     4,    22,   265,   401,   410,    -1,     4,    52,   265,
     401,   410,    -1,     4,    51,   265,   401,   410,    -1,     4,
      55,    21,    -1,     4,    55,    21,   403,    -1,     4,    55,
      21,   401,   408,    -1,     4,    55,   265,   401,   410,    -1,
       4,    62,   401,   408,   409,    -1,     4,    65,   265,   401,
     410,    -1,     4,    69,    -1,     4,    79,    27,    -1,     4,
      79,   183,    -1,     4,    79,   265,   401,   410,    -1,     4,
      79,   315,    -1,     4,    80,   151,    -1,     4,    80,    28,
      -1,     4,    80,   330,    -1,     4,    87,    21,    -1,     4,
      87,    21,   403,    -1,     4,    87,    21,   401,   408,    -1,
       4,    87,   265,   401,   410,    -1,     4,   117,   265,   401,
     410,    -1,     4,   118,   265,   401,   410,    -1,     4,   121,
      21,    -1,     4,   121,    21,   403,    -1,     4,   121,    21,
     401,   408,    -1,     4,   121,   265,   401,   410,    -1,     4,
     141,    -1,     4,   163,    -1,     4,   192,    27,    -1,     4,
     192,   187,   401,   410,    -1,     4,   192,   251,   401,   408,
     409,    -1,     4,   202,   187,   391,   401,   410,    -1,     4,
     251,   291,    -1,     4,   251,   299,    -1,     4,   253,   251,
     401,   408,   409,    -1,     4,   259,   251,   401,   408,   409,
      -1,     4,   259,   187,   401,   410,    -1,     4,   259,   323,
     401,   410,    -1,     4,   260,    -1,     4,   260,   563,    -1,
       4,   276,   142,    -1,     4,   276,   187,   401,   410,    -1,
       4,   276,   251,   401,   408,   409,    -1,     4,   276,   315,
      -1,     4,   288,    -1,     4,   317,    -1,     4,   317,     4,
      -1,     4,   319,    -1,     4,   319,   275,    -1,     4,   330,
      -1,     4,   341,    27,    -1,     4,   341,   187,   401,   410,
      -1,     4,   341,   251,   401,   408,   409,    -1,     4,   375,
      -1,     4,    98,    -1,   163,   553,    -1,   163,   233,    -1,
     233,    -1,   253,   287,   391,   391,    -1,   287,   287,   391,
     391,    -1,   258,    -1,   260,   563,    -1,   288,   554,    -1,
     288,   233,    -1,   296,   555,    -1,     5,    69,    -1,     5,
     141,    -1,     5,   171,    -1,     5,   260,   563,    -1,     5,
     317,    -1,     5,   317,   233,    -1,   317,    16,    -1,   317,
     104,   220,    -1,   375,    -1,    98,    -1,    31,    -1,   265,
      -1,   177,    -1,   238,    -1,    -1,   391,   391,    -1,    -1,
     391,   391,    -1,    -1,   319,    -1,    -1,    -1,   252,    -1,
     267,    -1,   337,    -1,    60,    -1,   143,    -1,   550,   401,
     408,   409,   393,   565,   572,    -1,   288,   550,   401,   408,
     409,   393,   565,   572,    -1,   550,     5,    -1,   550,     5,
       4,     5,   401,   408,    -1,   550,     4,    -1,   550,     4,
       4,     5,   401,   408,    -1,   136,     5,    -1,   136,     5,
       5,    -1,   391,   391,    -1,   145,    -1,    37,    -1,    41,
     391,   391,    -1,   216,   391,   391,    -1,   119,    -1,   326,
     401,   408,   400,    -1,   561,   562,    -1,   562,    -1,   563,
     388,   393,    -1,    69,   388,     5,    -1,    98,   388,     4,
       4,    -1,   375,   388,     4,    -1,   141,   388,     5,    -1,
     319,   388,     5,    -1,   575,    -1,   576,    -1,   227,    -1,
     288,    -1,   163,    -1,    97,    -1,   138,    -1,   113,    -1,
     219,    -1,   275,    -1,   105,    -1,   174,    -1,   306,    -1,
     131,    -1,   556,    -1,   556,   561,    -1,    -1,    -1,   566,
     570,    -1,     5,   550,   401,   408,   409,   393,    -1,   288,
       5,   550,   401,   408,   409,   393,    -1,   318,     5,    -1,
      16,    -1,   237,   391,   391,    -1,   327,    -1,   327,   391,
     391,    -1,   133,    -1,   186,    -1,   393,    -1,   319,   393,
      -1,   570,   571,    -1,   571,    -1,   563,   388,   393,    -1,
      -1,    -1,   573,   574,    -1,   574,   575,    -1,   575,    -1,
     317,   388,     5,    -1,    58,   388,   543,     5,     5,    -1,
      -1,    88,    -1,     4,    -1,   185,     4,    -1,    69,     5,
      -1,     4,    69,     5,    -1,    47,   405,    -1,     4,    47,
     405,    -1,   325,   391,    -1,     4,   325,   391,    -1,   340,
     393,    -1,     4,   340,   393,    -1,   296,    -1,     4,   296,
      -1,   162,    -1,     4,   162,    -1,   105,    -1,     4,   105,
      -1,   336,    -1,     4,   336,    -1,   111,    -1,     4,   111,
      -1,   324,    -1,     4,   324,    -1,    50,    -1,     4,    50,
      -1,    67,    -1,    69,     5,    -1,   203,   404,    -1,   266,
     391,   391,    -1,   315,   401,    -1,   325,   391,    -1,    47,
     405,    -1,   203,     4,    -1,   387,    -1,   385,    -1,   378,
      -1,   227,    -1,   391,   391,   391,   391,    -1,   391,   391,
      -1,   403,   391,   391,    -1,   401,   408,   400,    -1,   326,
     581,    -1,    40,   391,   391,    -1,   216,   582,    -1,   258,
     393,    -1,   391,   391,    -1,   403,   391,   391,    -1,   401,
     408,   400,    -1,    41,   391,   391,    -1,   391,   391,    -1,
     119,   391,   391,    -1,   393,    -1,   346,   402,   408,    -1,
       5,     4,     4,    -1,   335,    -1,    75,   586,    -1,   188,
       4,    -1,   272,     4,    -1,   282,   391,    -1,     4,     4,
       4,     4,     4,     4,     4,     4,     4,    -1,     4,     4,
       4,     4,     4,     4,    -1,    57,    -1,   153,    -1,   273,
      -1,    95,    -1,   163,   588,    -1,   288,   589,    -1,    41,
     391,   391,    -1,   216,   391,   391,    -1,   119,    -1,   294,
     119,    -1,    41,   391,   391,    -1,   216,   391,   391,    -1,
     119,    -1,   294,   119,    -1,   211,    -1,    12,    -1,   134,
      -1,   227,    -1,    35,    -1,   115,    -1,    64,     5,    -1,
     315,   401,    -1,   340,     4,     4,     4,    -1,   315,   401,
      -1,    64,     5,    -1,    64,   167,    -1,    64,   281,    -1,
     315,   401,    -1,   340,     4,     4,     4,    -1,    64,     5,
      -1,    64,   167,    -1,    64,   281,    -1,    64,   338,    -1,
     315,   401,    -1,   340,     4,     4,     4,    -1,   391,    -1,
     391,   103,    -1,   216,   597,    -1,   326,   391,    -1,   326,
     391,   103,    -1,    41,    -1,   391,    -1,   119,    -1,    26,
     600,    -1,   136,   601,    -1,   383,   599,    -1,   232,   618,
      -1,   120,   619,    -1,   246,     5,    -1,   130,     5,    -1,
      64,     5,    -1,   304,     4,    -1,   130,     5,   418,    -1,
      64,     5,   418,    -1,   304,     4,   418,    -1,   273,    92,
     608,    -1,   169,    92,   611,    -1,   168,    92,   614,    -1,
     602,    -1,   173,   602,    -1,   316,   603,    -1,   300,   604,
      -1,   126,    92,   605,    -1,   214,   606,    -1,   273,   173,
     609,    -1,   273,    92,   610,    -1,   169,   173,   612,    -1,
     169,    92,   613,    -1,   168,   173,   615,    -1,   168,    92,
     616,    -1,   269,   617,    -1,   130,     5,    -1,    64,     5,
      -1,   304,     4,    -1,   130,     5,    -1,    64,     5,    -1,
     304,     4,    -1,   130,     5,    -1,    64,     5,    -1,   304,
       4,    -1,   130,     5,    -1,    64,     5,    -1,   304,     4,
      -1,   173,   607,    -1,   130,     5,     4,    -1,    64,     5,
       4,    -1,   304,     4,     4,    -1,   130,     5,    -1,    64,
       5,    -1,   304,     4,    -1,   130,     5,   418,    -1,    64,
       5,   418,    -1,   304,     4,   418,    -1,   130,     5,    -1,
      64,     5,    -1,   304,     4,    -1,   130,     5,    -1,    64,
       5,    -1,   304,     4,    -1,   130,     5,   418,    -1,    64,
       5,   418,    -1,   304,     4,   418,    -1,   130,     5,    -1,
      64,     5,    -1,   304,     4,    -1,   130,     5,    -1,    64,
       5,    -1,   304,     4,    -1,   130,     5,   418,    -1,    64,
       5,   418,    -1,   304,     4,   418,    -1,   130,     5,    -1,
      64,     5,    -1,   304,     4,    -1,   130,     5,    -1,    64,
       5,    -1,   304,     4,    -1,   130,     5,    -1,    64,     5,
      -1,   304,     4,    -1,   130,     5,   418,    -1,    64,     5,
     418,    -1,   304,     4,   418,    -1,   130,     5,     5,   418,
      -1,   621,     4,     4,   391,   391,   396,    -1,   621,     4,
      -1,   105,    -1,    53,    -1,   328,    -1,   149,    -1,   116,
      -1,    -1,     4,   391,   391,   391,   391,    -1,   231,    -1,
     231,     4,   391,   391,   391,   391,    -1,   136,   300,   623,
      -1,     4,    -1,     4,     4,    -1,   391,   401,    -1,   391,
     391,    -1,   326,   391,   391,    -1,   402,   408,   409,    -1,
      15,   628,    -1,   271,     4,    -1,   268,   627,    -1,    23,
     626,    -1,     4,     4,    -1,     4,     5,    -1,   319,     4,
       5,    -1,     4,     4,    -1,     4,     5,    -1,   319,     4,
       5,    -1,     4,    -1,     4,   402,   408,    -1,   326,     4,
     402,   408,    -1,   252,    67,    -1,   257,    -1,   391,   391,
      -1,   391,   391,    11,   391,   391,    -1,   391,   391,    11,
     403,   391,   391,    -1,   391,   391,    11,   401,   408,   400,
      -1,   326,   631,    -1,   135,    -1,   135,   391,    -1,   391,
     391,    -1,   391,   391,    11,   391,   391,    -1,   391,   391,
      11,   403,   391,   391,    -1,   391,   391,    11,   401,   408,
     400,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   495,   495,   496,   497,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   512,
     513,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   541,   542,
     543,   544,   545,   546,   547,   548,   549,   550,   551,   552,
     553,   556,   557,   560,   561,   562,   563,   564,   565,   566,
     567,   568,   569,   570,   573,   575,   576,   577,   578,   580,
     581,   582,   583,   586,   587,   588,   589,   590,   593,   594,
     597,   598,   599,   602,   605,   608,   611,   623,   630,   637,
     645,   646,   647,   648,   649,   652,   653,   654,   655,   656,
     657,   658,   659,   660,   661,   662,   663,   664,   665,   666,
     667,   668,   669,   670,   671,   672,   673,   674,   675,   676,
     677,   678,   679,   682,   683,   686,   687,   688,   689,   690,
     691,   694,   695,   696,   697,   698,   699,   700,   701,   702,
     703,   704,   705,   706,   707,   708,   709,   710,   713,   714,
     715,   716,   717,   718,   719,   720,   723,   724,   725,   726,
     727,   730,   731,   732,   733,   734,   735,   736,   737,   740,
     741,   742,   745,   746,   747,   748,   751,   752,   753,   756,
     757,   758,   761,   762,   763,   766,   767,   768,   769,   770,
     771,   772,   773,   776,   777,   780,   781,   782,   783,   784,
     785,   788,   789,   790,   791,   794,   795,   796,   797,   798,
     799,   802,   803,   804,   805,   806,   807,   808,   809,   810,
     811,   815,   816,   817,   818,   821,   822,   825,   826,   829,
     830,   833,   834,   837,   838,   842,   843,   844,   845,   846,
     847,   848,   849,   852,   853,   856,   857,   858,   860,   862,
     863,   864,   866,   870,   871,   874,   875,   877,   880,   882,
     888,   889,   890,   893,   894,   895,   898,   899,   900,   901,
     902,   903,   904,   910,   911,   914,   915,   916,   917,   918,
     921,   922,   923,   924,   927,   928,   933,   938,   945,   947,
     949,   951,   953,   955,   956,   957,   960,   962,   964,   966,
     968,   971,   972,   975,   976,   977,   978,   979,   980,   983,
     986,   989,   995,  1001,  1004,  1005,  1008,  1009,  1010,  1017,
    1018,  1019,  1020,  1023,  1024,  1027,  1028,  1031,  1032,  1033,
    1037,  1039,  1043,  1044,  1047,  1049,  1050,  1051,  1052,  1055,
    1056,  1058,  1059,  1060,  1063,  1065,  1067,  1068,  1070,  1072,
    1074,  1076,  1080,  1083,  1084,  1085,  1086,  1089,  1090,  1093,
    1096,  1097,  1098,  1099,  1100,  1101,  1102,  1103,  1104,  1105,
    1106,  1107,  1108,  1109,  1110,  1111,  1112,  1113,  1114,  1115,
    1116,  1117,  1118,  1119,  1120,  1121,  1122,  1123,  1124,  1125,
    1126,  1127,  1128,  1129,  1130,  1132,  1133,  1134,  1135,  1136,
    1137,  1138,  1140,  1141,  1142,  1145,  1147,  1151,  1153,  1157,
    1158,  1159,  1160,  1161,  1162,  1163,  1164,  1167,  1168,  1169,
    1172,  1175,  1176,  1178,  1180,  1181,  1182,  1183,  1184,  1185,
    1192,  1193,  1196,  1197,  1198,  1201,  1202,  1205,  1208,  1209,
    1211,  1215,  1216,  1217,  1220,  1224,  1226,  1227,  1228,  1229,
    1230,  1231,  1232,  1233,  1234,  1235,  1238,  1239,  1240,  1243,
    1244,  1247,  1249,  1257,  1259,  1261,  1265,  1266,  1268,  1271,
    1274,  1275,  1279,  1281,  1284,  1289,  1290,  1291,  1295,  1296,
    1297,  1300,  1301,  1302,  1305,  1306,  1308,  1309,  1310,  1311,
    1312,  1313,  1314,  1315,  1316,  1317,  1319,  1320,  1323,  1324,
    1327,  1328,  1329,  1330,  1333,  1334,  1337,  1339,  1342,  1346,
    1347,  1348,  1350,  1352,  1356,  1357,  1358,  1361,  1362,  1363,
    1364,  1365,  1366,  1369,  1370,  1371,  1372,  1373,  1374,  1375,
    1378,  1379,  1382,  1385,  1386,  1387,  1390,  1393,  1394,  1395,
    1398,  1399,  1400,  1403,  1404,  1405,  1406,  1407,  1408,  1411,
    1412,  1413,  1414,  1415,  1416,  1417,  1418,  1421,  1422,  1423,
    1424,  1427,  1428,  1431,  1432,  1435,  1436,  1439,  1440,  1443,
    1444,  1447,  1448,  1449,  1452,  1453,  1456,  1457,  1460,  1463,
    1471,  1472,  1475,  1476,  1477,  1478,  1479,  1480,  1481,  1482,
    1483,  1484,  1485,  1486,  1487,  1488,  1489,  1490,  1491,  1492,
    1495,  1498,  1499,  1502,  1503,  1504,  1505,  1508,  1509,  1510,
    1511,  1514,  1515,  1516,  1517,  1518,  1519,  1522,  1523,  1524,
    1525,  1526,  1527,  1529,  1530,  1535,  1536,  1539,  1541,  1543,
    1546,  1547,  1548,  1549,  1550,  1551,  1554,  1556,  1558,  1560,
    1561,  1563,  1565,  1567,  1569,  1571,  1572,  1573,  1576,  1577,
    1578,  1579,  1580,  1581,  1583,  1584,  1585,  1588,  1591,  1593,
    1595,  1597,  1599,  1601,  1603,  1605,  1608,  1610,  1612,  1614,
    1615,  1616,  1617,  1618,  1619,  1620,  1621,  1622,  1625,  1626,
    1627,  1628,  1629,  1630,  1631,  1633,  1635,  1636,  1637,  1640,
    1641,  1642,  1643,  1644,  1645,  1647,  1648,  1649,  1652,  1653,
    1654,  1655,  1656,  1659,  1662,  1665,  1668,  1671,  1674,  1677,
    1680,  1683,  1688,  1691,  1694,  1697,  1700,  1703,  1706,  1709,
    1712,  1715,  1718,  1723,  1726,  1729,  1732,  1735,  1738,  1741,
    1744,  1747,  1752,  1754,  1756,  1758,  1760,  1762,  1767,  1769,
    1771,  1775,  1778,  1781,  1784,  1787,  1790,  1793,  1796,  1799,
    1802,  1805,  1810,  1811,  1812,  1813,  1814,  1815,  1816,  1818,
    1820,  1821,  1822,  1825,  1826,  1827,  1828,  1829,  1830,  1832,
    1833,  1834,  1837,  1839,  1841,  1842,  1844,  1846,  1850,  1851,
    1854,  1855,  1856,  1859,  1862,  1863,  1864,  1865,  1866,  1867,
    1868,  1871,  1879,  1880,  1881,  1882,  1884,  1886,  1887,  1887,
    1888,  1889,  1890,  1891,  1892,  1894,  1895,  1897,  1900,  1903,
    1904,  1905,  1908,  1911,  1914,  1918,  1921,  1924,  1927,  1931,
    1936,  1941,  1943,  1945,  1946,  1948,  1950,  1952,  1954,  1955,
    1956,  1958,  1960,  1962,  1966,  1971,  1973,  1975,  1977,  1979,
    1981,  1983,  1985,  1987,  1989,  1991,  1994,  1995,  1997,  1999,
    2000,  2002,  2004,  2005,  2006,  2008,  2010,  2011,  2012,  2014,
    2015,  2018,  2022,  2025,  2028,  2032,  2037,  2043,  2044,  2045,
    2047,  2048,  2052,  2054,  2055,  2056,  2059,  2062,  2065,  2068,
    2070,  2072,  2077,  2080,  2081,  2082,  2085,  2089,  2090,  2092,
    2093,  2094,  2096,  2097,  2099,  2100,  2105,  2106,  2108,  2109,
    2111,  2112,  2113,  2114,  2115,  2116,  2118,  2120,  2122,  2123,
    2124,  2126,  2128,  2129,  2130,  2131,  2132,  2133,  2134,  2135,
    2136,  2137,  2138,  2140,  2142,  2143,  2144,  2145,  2147,  2148,
    2149,  2150,  2151,  2153,  2154,  2155,  2156,  2157,  2158,  2159,
    2162,  2163,  2164,  2165,  2166,  2167,  2168,  2169,  2170,  2171,
    2172,  2173,  2174,  2175,  2176,  2177,  2178,  2179,  2180,  2181,
    2182,  2185,  2186,  2187,  2188,  2189,  2190,  2198,  2205,  2214,
    2223,  2230,  2237,  2245,  2253,  2260,  2265,  2270,  2275,  2280,
    2285,  2290,  2296,  2306,  2316,  2326,  2333,  2343,  2353,  2362,
    2374,  2387,  2393,  2396,  2397,  2406,  2408,  2410,  2415,  2419,
    2420,  2421,  2427,  2429,  2431,  2434,  2435,  2436,  2437,  2438,
    2439,  2440,  2443,  2444,  2445,  2446,  2447,  2448,  2450,  2452,
    2454,  2456,  2458,  2460,  2463,  2464,  2465,  2466,  2468,  2471,
    2473,  2475,  2476,  2477,  2479,  2482,  2485,  2487,  2488,  2489,
    2490,  2492,  2493,  2494,  2495,  2496,  2497,  2498,  2500,  2502,
    2504,  2507,  2508,  2509,  2511,  2514,  2515,  2516,  2517,  2519,
    2522,  2526,  2527,  2528,  2531,  2534,  2537,  2539,  2540,  2541,
    2542,  2544,  2547,  2548,  2550,  2551,  2552,  2553,  2554,  2556,
    2557,  2559,  2562,  2563,  2564,  2565,  2566,  2567,  2569,  2571,
    2572,  2573,  2574,  2576,  2578,  2579,  2580,  2581,  2582,  2583,
    2585,  2586,  2588,  2589,  2592,  2593,  2594,  2595,  2598,  2599,
    2602,  2603,  2606,  2607,  2610,  2623,  2624,  2628,  2629,  2633,
    2634,  2637,  2641,  2647,  2649,  2652,  2654,  2657,  2659,  2663,
    2664,  2665,  2666,  2667,  2668,  2669,  2673,  2674,  2677,  2678,
    2679,  2680,  2681,  2682,  2683,  2684,  2687,  2688,  2689,  2690,
    2691,  2692,  2693,  2694,  2695,  2696,  2697,  2698,  2701,  2702,
    2705,  2706,  2706,  2709,  2711,  2713,  2716,  2717,  2718,  2719,
    2720,  2721,  2724,  2725,  2728,  2729,  2732,  2736,  2737,  2737,
    2740,  2741,  2744,  2747,  2751,  2752,  2753,  2754,  2755,  2756,
    2757,  2758,  2759,  2760,  2761,  2762,  2764,  2765,  2766,  2767,
    2768,  2769,  2770,  2771,  2772,  2773,  2774,  2775,  2776,  2777,
    2780,  2781,  2782,  2783,  2784,  2785,  2786,  2787,  2793,  2794,
    2795,  2796,  2799,  2801,  2802,  2807,  2809,  2810,  2811,  2812,
    2815,  2816,  2821,  2825,  2826,  2827,  2830,  2831,  2836,  2837,
    2840,  2842,  2843,  2844,  2849,  2851,  2857,  2858,  2859,  2860,
    2863,  2864,  2867,  2869,  2871,  2872,  2875,  2877,  2878,  2879,
    2882,  2883,  2884,  2887,  2888,  2889,  2892,  2893,  2894,  2897,
    2901,  2902,  2903,  2904,  2905,  2908,  2909,  2910,  2911,  2912,
    2913,  2916,  2917,  2918,  2919,  2920,  2923,  2924,  2925,  2928,
    2929,  2930,  2931,  2932,  2933,  2936,  2937,  2938,  2941,  2943,
    2945,  2947,  2948,  2949,  2952,  2953,  2954,  2955,  2956,  2957,
    2958,  2959,  2960,  2961,  2962,  2963,  2964,  2967,  2968,  2969,
    2972,  2973,  2974,  2977,  2978,  2979,  2982,  2983,  2984,  2987,
    2988,  2989,  2990,  2993,  2994,  2995,  2998,  3000,  3002,  3006,
    3007,  3008,  3011,  3012,  3013,  3016,  3018,  3020,  3024,  3025,
    3026,  3029,  3030,  3031,  3034,  3036,  3038,  3042,  3043,  3044,
    3047,  3048,  3049,  3052,  3053,  3054,  3057,  3059,  3061,  3065,
    3069,  3071,  3076,  3079,  3080,  3081,  3082,  3085,  3086,  3089,
    3091,  3093,  3096,  3097,  3098,  3101,  3102,  3105,  3107,  3108,
    3109,  3110,  3113,  3114,  3115,  3118,  3119,  3120,  3123,  3124,
    3129,  3131,  3134,  3141,  3142,  3144,  3149,  3151,  3154,  3155,
    3156,  3157,  3159,  3164
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "REAL", "INT", "STRING", "ANGDEGREE",
  "ANGRADIAN", "SEXSTR", "HMSSTR", "DMSSTR", "ABOUT_", "AIP_", "ALLOC_",
  "ALLOCGZ_", "ALIGN_", "ALL_", "ALT_", "AMBIENT_", "AMPLIFIER_",
  "ANALYSIS_", "ANGLE_", "ANNULUS_", "APPEND_", "ARCMIN_", "ARCSEC_",
  "ARRAY_", "ARROW_", "AREA_", "ASINH_", "AST_", "AUTO_", "AUX_",
  "AVERAGE_", "AXES_", "AZIMUTH_", "B1950_", "BACK_", "BACKGROUND_",
  "BASE_", "BBOX_", "BEGIN_", "BG_", "BIG_", "BIGENDIAN_", "BIN_",
  "BITPIX_", "BLEND_", "BLOCK_", "BORDER_", "BOTTOM_", "BOX_",
  "BOXANNULUS_", "BOXCAR_", "BOXCIRCLE_", "BPANDA_", "BUFFER_", "BW_",
  "CALLBACK_", "CANVAS_", "CATALOG_", "CELESTIAL_", "CENTER_", "CENTROID_",
  "CHANNEL_", "CIRCLE_", "CIAO_", "CLEAR_", "CLIP_", "COLOR_",
  "COLORBURN_", "COLORDODGE_", "COLORBAR_", "COLORMAP_", "COLORSCALE_",
  "COLORSPACE_", "COLS_", "COLUMN_", "COMMAND_", "COMPASS_", "COMPOSITE_",
  "COMPRESS_", "CONTOUR_", "CONTRAST_", "COORDINATES_", "COPY_", "COUNT_",
  "CPANDA_", "CREATE_", "CROP_", "CROSS_", "CROSSHAIR_", "CUBE_",
  "CURSOR_", "CUT_", "CMYK_", "DARKEN_", "DASH_", "DASHLIST_", "DATA_",
  "DATAMIN_", "DATASEC_", "DEBUG_", "DEGREES_", "DEFAULT_", "DELETE_",
  "DEPTH_", "DETECTOR_", "DIAMOND_", "DIFFERENCE_", "DIM_", "DOWN_",
  "DS9_", "EDIT_", "ECLIPTIC_", "ELEVATION_", "ELLIPTIC_", "ELLIPSE_",
  "ELLIPSEANNULUS_", "END_", "ENVI_", "EPANDA_", "EPSILON_", "EQUATORIAL_",
  "ERASE_", "EXCLUSION_", "EXT_", "FADE_", "FACTOR_", "FALSE_", "FILE_",
  "FILL_", "FILTER_", "FIRST_", "FIP_", "FIT_", "FITS_", "FITSY_",
  "FIXED_", "FK4_", "FK5_", "FONT_", "FORMAT_", "FOOTPRINT_", "FROM_",
  "FRONT_", "FULL_", "FUNCTION_", "GALACTIC_", "GAUSSIAN_", "GET_",
  "GLOBAL_", "GRAPHICS_", "GRAY_", "GRID_", "GZ_", "HANDLE_", "HARDLIGHT_",
  "HAS_", "HEAD_", "HEADER_", "HEIGHT_", "HIDE_", "HIGHLITE_", "HISTEQU_",
  "HISTOGRAM_", "HORIZONTAL_", "HUE_", "HSV_", "HLS_", "ICRS_", "ID_",
  "IIS_", "IMAGE_", "INCLUDE_", "INCR_", "INFO_", "ITERATION_", "IRAF_",
  "IRAFMIN_", "J2000_", "KEY_", "KEYWORD_", "LABEL_", "LAYER_", "LAYERNO_",
  "LAST_", "LENGTH_", "LEVEL_", "LIGHTEN_", "LITTLE_", "LITTLEENDIAN_",
  "LINE_", "LINEAR_", "LIST_", "LOAD_", "LOCAL_", "LOG_", "LUMINOSITY_",
  "MACOSX_", "MAGNIFIER_", "MATCH_", "MAP_", "MARK_", "MARKER_", "MASK_",
  "MEDIAN_", "MESSAGE_", "METHOD_", "MINMAX_", "MINOR_", "MIP_", "MMAP_",
  "MMAPINCR_", "MOSAIC_", "MODE_", "MOTION_", "MULTICOLOR_", "MULTIPLY_",
  "MOVE_", "NAME_", "NAN_", "NATIVE_", "NAXES_", "NEW_", "NEXT_", "NO_",
  "NONE_", "NORMAL_", "NONNAN_", "NONZERO_", "NOW_", "NRRD_", "NUMBER_",
  "OBJECT_", "OFF_", "ON_", "ONLY_", "OPTION_", "ORIENT_", "OVERLAY_",
  "PAN_", "PANNER_", "PARSER_", "PASTE_", "PERF_", "PHOTO_", "PHYSICAL_",
  "PIXEL_", "PLOT2D_", "PLOT3D_", "POINT_", "POINTER_", "POLYGON_",
  "POSTSCRIPT_", "POW_", "PRECISION_", "PRINT_", "PRESERVE_",
  "PROJECTION_", "PROPERTY_", "PUBLICATION_", "PROS_", "QUERY_", "RADIAL_",
  "RADIUS_", "RANGE_", "REGION_", "REPLACE_", "RESAMPLE_", "RESCAN_",
  "RESET_", "RESOLUTION_", "RGB_", "ROOT_", "ROTATE_", "RULER_", "SAMPLE_",
  "SAOIMAGE_", "SAOTNG_", "SAVE_", "SATURATION_", "SCALE_", "SCAN_",
  "SCIENTIFIC_", "SCOPE_", "SCREEN_", "SEGMENT_", "SELECT_", "SET_",
  "SEXAGESIMAL_", "SHAPE_", "SHADE_", "SHARED_", "SHIFT_", "SHMID_",
  "SHOW_", "SIGMA_", "SINH_", "SIZE_", "SLICE_", "SMMAP_", "SMOOTH_",
  "SOFTLIGHT_", "SOCKET_", "SOCKETGZ_", "SOURCE_", "SQRT_", "SQUARED_",
  "SSHARED_", "STATS_", "STATUS_", "STRENGTH_", "SUM_", "SYNC_", "SYSTEM_",
  "TABLE_", "TAG_", "TEMPLATE_", "TEXT_", "THREADS_", "THREED_",
  "THRESHOLD_", "THICK_", "TOP_", "TRANSPARENCY_", "TO_", "TOGGLE_",
  "TOPHAT_", "TRUE_", "TYPE_", "UNDO_", "UNHIGHLITE_", "UNLOAD_",
  "UNSELECT_", "UPDATE_", "UP_", "USER_", "VALUE_", "VAR_", "VIEW_",
  "VECTOR_", "VERSION_", "VERTEX_", "VERTICAL_", "WARP_", "WCS_", "WCSA_",
  "WCSB_", "WCSC_", "WCSD_", "WCSE_", "WCSF_", "WCSG_", "WCSH_", "WCSI_",
  "WCSJ_", "WCSK_", "WCSL_", "WCSM_", "WCSN_", "WCSO_", "WCSP_", "WCSQ_",
  "WCSR_", "WCSS_", "WCST_", "WCSU_", "WCSV_", "WCSW_", "WCSX_", "WCSY_",
  "WCSZ_", "WCS0_", "WFPC2_", "WIDTH_", "WIN32_", "XML_", "XY_", "YES_",
  "ZERO_", "ZMAX_", "ZSCALE_", "PIXMASK_", "ZOOM_", "'Y'", "'N'", "'X'",
  "'='", "$accept", "command", "numeric", "debug", "yesno", "fileNameType",
  "optangle", "angle", "sexagesimal", "hms", "dms", "coord", "coordSystem",
  "wcsSystem", "internalSystem", "maskType", "maskBlend", "scaleType",
  "minmaxMode", "skyFrame", "skyFormat", "skyDist", "shmType", "incrLoad",
  "layerType", "pointShape", "pointSize", "analysisTask", "analysisMethod",
  "endian", "threed", "threedShade", "threedShadeNormal", "threedBorder",
  "threedCompass", "threedHighlite", "threedView", "bin", "binAbout",
  "binFactor", "binFunction", "binTo", "block", "blockTo", "clip",
  "clipScope", "clipMode", "clipMinMax", "clipZScale", "colormap",
  "colormapMotion", "colorscale", "contour", "contourCreate",
  "contourDelete", "contourLoad", "contourClipMode", "contourClipScope",
  "contourMethod", "contourPaste", "contourSave", "crop", "crop3d",
  "crosshair", "cube", "cutMethod", "fade", "fitsy", "get", "getHorzCut",
  "getVertCut", "getBin", "getBinCols", "getBlock", "getClip",
  "getClipMinMax", "getClipZScale", "getColorbar", "getColorMap",
  "getColorMapLevel", "getColorScale", "getColorScaleLevel", "getContour",
  "getContourClip", "getContourColorScale", "getCoord", "getCrop",
  "getCrosshair", "getCube", "getCursor", "getData", "getInfo", "getiis",
  "getIISFileName", "getFits", "getFitsExt", "getFitsHeader",
  "getFitsDepth", "getFitsFileName", "getFitsSlice", "getGrid", "getLayer",
  "getMask", "layerRef", "getPan", "getRGB", "getMultiColor", "getHLS",
  "getHSV", "getSmooth", "getThreed", "getThreedShade",
  "getThreedShadeNormal", "getThreedBorder", "getThreedCompass",
  "getThreedHighlite", "getThreedView", "getWCS", "getWCSAlign", "grid",
  "gridCreate", "gridType", "has", "hasBin", "hasContour", "hasFits",
  "hasMarker", "hasWCS", "iis", "iisSetFileName", "iiscursor", "load",
  "loadArr", "loadArrayRGBCube", "loadENVI", "loadFits", "loadFitsSlice",
  "loadFitsExtCube", "loadFitsMosaic", "loadFitsMosaicImageIRAF",
  "loadFitsMosaicIRAF", "loadFitsMosaicImageWCS",
  "loadFitsMosaicImageWFPC2", "loadFitsMosaicWCS", "loadFitsRGBCube",
  "loadFitsRGBImage", "loadNRRD", "loadPhoto", "loadIncr", "macosx",
  "magnifier", "match", "marker", "@1", "markerCallBack", "markerCentroid",
  "markerCreate", "compositeOperation", "markerCreateTemplate",
  "markerDelete", "markerEdit", "markerFormat", "markerGet",
  "markerGetCentroid", "markerGetHighlite", "markerGetSelect",
  "markerGetShow", "markerInitProp", "markerLayer", "markerList",
  "markerLoad", "markerMoveSelected", "markerProps", "markerProp",
  "markerProperty", "markerProperties", "markerQuery", "@2", "markerSave",
  "markerSelect", "markerShow", "queries", "query", "markerTags", "@3",
  "tags", "tag", "callback", "layer", "mask", "orient", "pan", "panTo",
  "panMotion", "panner", "postscript", "precision", "pscolorspace",
  "region", "regionHighlite", "regionSelect", "renderMethod",
  "renderBackground", "rgb", "multicolor", "hls", "hsv", "rotate",
  "rotateMotion", "save", "savePixelMask", "saveArray", "saveFits",
  "saveFitsImage", "saveFitsTable", "saveFitsSlice", "saveFitsExtCube",
  "saveFitsMosaic", "saveFitsMosaicImage", "saveArrayRGBCube",
  "saveFitsRGBImage", "saveFitsRGBCube", "saveArrayHLSCube",
  "saveFitsHLSImage", "saveFitsHLSCube", "saveArrayHSVCube",
  "saveFitsHSVImage", "saveFitsHSVCube", "saveFitsResample", "saveNRRD",
  "saveENVI", "smooth", "smoothFunction", "update", "updateFitsSlice",
  "warp", "wcs", "wcsAppend", "wcsReplace", "wcsAlign", "win32", "zoom",
  "zoomTo", 0
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
     625,   626,   627,   628,   629,   630,   631,   632,   633,   634,
     635,   636,   637,   638,   639,    89,    78,    88,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   389,   390,   390,   390,   390,   390,   390,   390,   390,
     390,   390,   390,   390,   390,   390,   390,   390,   390,   390,
     390,   390,   390,   390,   390,   390,   390,   390,   390,   390,
     390,   390,   390,   390,   390,   390,   390,   390,   390,   390,
     390,   390,   390,   390,   390,   390,   390,   390,   390,   390,
     390,   390,   390,   390,   390,   390,   390,   390,   390,   390,
     390,   391,   391,   392,   392,   392,   392,   392,   392,   392,
     392,   392,   392,   392,   393,   393,   393,   393,   393,   393,
     393,   393,   393,   394,   394,   394,   394,   394,   395,   395,
     396,   396,   396,   397,   398,   399,   400,   400,   400,   400,
     401,   401,   401,   401,   401,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   403,   403,   404,   404,   404,   404,   404,
     404,   405,   405,   405,   405,   405,   405,   405,   405,   405,
     405,   405,   405,   405,   405,   405,   405,   405,   406,   406,
     406,   406,   406,   406,   406,   406,   407,   407,   407,   407,
     407,   408,   408,   408,   408,   408,   408,   408,   408,   409,
     409,   409,   410,   410,   410,   410,   411,   411,   411,   412,
     412,   412,   413,   413,   413,   414,   414,   414,   414,   414,
     414,   414,   414,   415,   415,   416,   416,   416,   416,   416,
     416,   417,   417,   417,   417,   418,   418,   418,   418,   418,
     418,   419,   419,   419,   419,   419,   419,   419,   419,   419,
     419,   420,   420,   420,   420,   421,   421,   422,   422,   423,
     423,   424,   424,   425,   425,   426,   426,   426,   426,   426,
     426,   426,   426,   427,   427,   428,   428,   428,   428,   428,
     428,   428,   428,   429,   429,   430,   430,   430,   430,   430,
     431,   431,   431,   432,   432,   432,   433,   433,   433,   433,
     433,   433,   433,   434,   434,   435,   435,   435,   435,   435,
     436,   436,   436,   436,   437,   437,   437,   437,   438,   438,
     438,   438,   438,   438,   438,   438,   439,   439,   439,   439,
     439,   440,   440,   441,   441,   441,   441,   441,   441,   442,
     442,   442,   442,   442,   443,   443,   444,   444,   444,   445,
     445,   445,   445,   446,   446,   447,   447,   448,   448,   448,
     449,   449,   450,   450,   450,   450,   450,   450,   450,   451,
     451,   451,   451,   451,   452,   452,   452,   452,   452,   452,
     452,   452,   453,   454,   454,   454,   454,   455,   455,   456,
     457,   457,   457,   457,   457,   457,   457,   457,   457,   457,
     457,   457,   457,   457,   457,   457,   457,   457,   457,   457,
     457,   457,   457,   457,   457,   457,   457,   457,   457,   457,
     457,   457,   457,   457,   457,   457,   457,   457,   457,   457,
     457,   457,   457,   457,   457,   458,   458,   459,   459,   460,
     460,   460,   460,   460,   460,   460,   460,   461,   461,   461,
     462,   463,   463,   463,   463,   463,   463,   463,   463,   463,
     464,   464,   465,   465,   465,   466,   466,   467,   468,   468,
     468,   469,   469,   469,   470,   471,   471,   471,   471,   471,
     471,   471,   471,   471,   471,   471,   472,   472,   472,   473,
     473,   474,   474,   475,   475,   475,   476,   476,   476,   477,
     478,   478,   479,   479,   479,   480,   480,   480,   481,   481,
     481,   482,   482,   482,   483,   483,   483,   483,   483,   483,
     483,   483,   483,   483,   483,   483,   483,   483,   484,   484,
     485,   485,   485,   485,   486,   486,   487,   487,   487,   488,
     488,   488,   488,   488,   489,   489,   489,   490,   490,   490,
     490,   490,   490,   491,   491,   491,   491,   491,   491,   491,
     492,   492,   493,   494,   494,   494,   495,   496,   496,   496,
     497,   497,   497,   498,   498,   498,   498,   498,   498,   499,
     499,   499,   499,   499,   499,   499,   499,   500,   500,   500,
     500,   501,   501,   502,   502,   503,   503,   504,   504,   505,
     505,   506,   506,   506,   507,   507,   508,   508,   509,   509,
     510,   510,   511,   511,   511,   511,   511,   511,   511,   511,
     511,   511,   511,   511,   511,   511,   511,   511,   511,   511,
     512,   513,   513,   514,   514,   514,   514,   515,   515,   515,
     515,   516,   516,   516,   516,   516,   516,   517,   517,   517,
     517,   517,   517,   517,   517,   518,   518,   519,   519,   519,
     520,   520,   520,   520,   520,   520,   521,   521,   521,   521,
     521,   521,   521,   521,   521,   521,   521,   521,   522,   522,
     522,   522,   522,   522,   522,   522,   522,   523,   524,   524,
     524,   524,   524,   524,   524,   524,   524,   524,   524,   524,
     524,   524,   524,   524,   524,   524,   524,   524,   525,   525,
     525,   525,   525,   525,   525,   525,   525,   525,   525,   526,
     526,   526,   526,   526,   526,   526,   526,   526,   527,   527,
     527,   527,   527,   528,   528,   528,   528,   528,   528,   528,
     528,   528,   529,   529,   529,   529,   529,   529,   529,   529,
     529,   529,   529,   530,   530,   530,   530,   530,   530,   530,
     530,   530,   531,   531,   531,   531,   531,   531,   531,   531,
     531,   532,   532,   532,   532,   532,   532,   532,   532,   532,
     532,   532,   533,   533,   533,   533,   533,   533,   533,   533,
     533,   533,   533,   534,   534,   534,   534,   534,   534,   534,
     534,   534,   535,   535,   535,   535,   535,   535,   536,   536,
     537,   537,   537,   538,   539,   539,   539,   539,   539,   539,
     539,   540,   541,   541,   541,   541,   541,   541,   542,   541,
     541,   541,   541,   541,   541,   541,   541,   541,   541,   541,
     541,   541,   541,   541,   541,   541,   541,   541,   541,   541,
     541,   541,   541,   541,   541,   541,   541,   541,   541,   541,
     541,   541,   541,   541,   541,   541,   541,   541,   541,   541,
     541,   541,   541,   541,   541,   541,   541,   541,   541,   541,
     541,   541,   541,   541,   541,   541,   541,   541,   541,   541,
     541,   541,   541,   541,   541,   541,   541,   541,   541,   541,
     541,   541,   541,   541,   541,   541,   541,   541,   541,   541,
     541,   541,   541,   541,   541,   541,   541,   541,   541,   541,
     541,   541,   541,   541,   541,   541,   541,   541,   541,   541,
     541,   541,   541,   541,   541,   541,   541,   541,   541,   541,
     541,   541,   541,   541,   541,   541,   541,   541,   541,   541,
     541,   541,   541,   541,   541,   541,   541,   541,   541,   541,
     541,   541,   541,   541,   541,   541,   541,   541,   541,   541,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   544,   544,   544,   544,   544,   544,   545,   545,   545,
     545,   545,   545,   545,   545,   545,   545,   545,   545,   545,
     545,   545,   545,   545,   545,   545,   545,   545,   545,   545,
     545,   545,   545,   546,   546,   547,   547,   547,   547,   548,
     548,   548,   549,   549,   549,   550,   550,   550,   550,   550,
     550,   550,   551,   551,   551,   551,   551,   551,   551,   551,
     551,   551,   551,   551,   551,   551,   551,   551,   551,   551,
     551,   551,   551,   551,   551,   551,   551,   551,   551,   551,
     551,   551,   551,   551,   551,   551,   551,   551,   551,   551,
     551,   551,   551,   551,   551,   551,   551,   551,   551,   551,
     551,   551,   551,   551,   551,   551,   551,   551,   551,   551,
     551,   551,   551,   551,   551,   551,   551,   551,   551,   551,
     551,   551,   551,   551,   551,   551,   551,   551,   551,   551,
     551,   551,   551,   551,   551,   551,   551,   551,   551,   551,
     551,   551,   551,   551,   552,   552,   552,   552,   553,   553,
     554,   554,   555,   555,   556,   557,   557,   557,   557,   557,
     557,   558,   558,   559,   559,   559,   559,   559,   559,   560,
     560,   560,   560,   560,   560,   560,   561,   561,   562,   562,
     562,   562,   562,   562,   562,   562,   563,   563,   563,   563,
     563,   563,   563,   563,   563,   563,   563,   563,   564,   564,
     565,   566,   565,   567,   567,   567,   568,   568,   568,   568,
     568,   568,   569,   569,   570,   570,   571,   572,   573,   572,
     574,   574,   575,   576,   577,   577,   577,   577,   577,   577,
     577,   577,   577,   577,   577,   577,   577,   577,   577,   577,
     577,   577,   577,   577,   577,   577,   577,   577,   577,   577,
     578,   578,   578,   578,   578,   578,   578,   578,   579,   579,
     579,   579,   580,   580,   580,   580,   580,   580,   580,   580,
     581,   581,   581,   582,   582,   582,   583,   583,   583,   583,
     584,   584,   584,   584,   585,   585,   586,   586,   586,   586,
     587,   587,   588,   588,   588,   588,   589,   589,   589,   589,
     590,   590,   590,   591,   591,   591,   592,   592,   592,   593,
     594,   594,   594,   594,   594,   595,   595,   595,   595,   595,
     595,   596,   596,   596,   596,   596,   597,   597,   597,   598,
     598,   598,   598,   598,   598,   599,   599,   599,   600,   600,
     600,   600,   600,   600,   601,   601,   601,   601,   601,   601,
     601,   601,   601,   601,   601,   601,   601,   602,   602,   602,
     603,   603,   603,   604,   604,   604,   605,   605,   605,   606,
     606,   606,   606,   607,   607,   607,   608,   608,   608,   609,
     609,   609,   610,   610,   610,   611,   611,   611,   612,   612,
     612,   613,   613,   613,   614,   614,   614,   615,   615,   615,
     616,   616,   616,   617,   617,   617,   618,   618,   618,   619,
     620,   620,   620,   621,   621,   621,   621,   622,   622,   622,
     622,   622,   623,   623,   623,   624,   624,   625,   625,   625,
     625,   625,   626,   626,   626,   627,   627,   627,   628,   628,
     628,   628,   629,   630,   630,   630,   630,   630,   631,   631,
     631,   631,   631,   631
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
       2,     1,     2,     2,     2,     1,     2,     1,     2,     1,
       2,     1,     2,     2,     6,     2,     4,     2,     2,     2,
       3,     2,     2,     1,     2,     1,     2,     4,     5,     2,
       3,     5,     6,     1,     1,     1,     7,    11,     8,    12,
       1,     2,     2,     1,     1,     2,     2,     2,     2,     3,
       3,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     1,     3,     2,     2,     2,     5,     9,
       9,     9,     7,     1,     2,     1,     5,     9,     9,     9,
       7,     1,     2,     2,     3,     2,     2,     2,     2,    13,
      13,    12,    12,     1,     0,     1,     1,     4,     6,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     6,
       3,     4,     0,     6,     8,     2,     3,     3,     3,     0,
       4,     4,     4,     4,     3,     3,     1,     3,     5,     4,
       4,     3,     2,     0,     1,     1,     1,     1,     1,     3,
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     1,     2,     2,     2,     4,
       3,     2,     2,     2,     2,     2,     1,     3,     2,     2,
       2,     2,     1,     2,     8,     2,     1,     2,     1,     2,
       1,     4,     3,     2,     1,     7,     8,     7,     8,     1,
       1,     1,     2,     1,     1,     2,     1,     0,     2,     2,
       1,     0,     2,     2,     1,     1,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     0,     1,     2,     1,     4,
       5,     0,     2,     1,     5,     2,     2,     1,     1,     1,
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
       2,     2,     2,     1,     1,     2,     1,     0,     1,     1,
       2,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     2,     2,     0,     1,     2,     1,     6,     5,
       1,     1,     1,     2,     2,     2,     1,     1,     1,     1,
       2,     1,     1,     1,     2,     1,     1,     1,     2,     2,
       2,     0,     1,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     1,     2,     3,     1,     2,
       2,     4,     5,     1,    10,     1,     2,     3,     3,     2,
       2,     2,     2,     2,     2,     2,     4,     4,     4,     3,
       3,     5,     4,     4,     4,     3,     3,     3,     3,     3,
       3,     2,     2,     4,     3,     3,     3,     3,     4,     4,
       4,     4,     5,     4,     6,     7,     4,     4,     5,     2,
       3,     3,     3,     3,     3,     3,     3,     2,     3,     3,
       3,     3,     4,     3,     5,     6,     3,     3,     4,     3,
       3,     3,     3,     3,     5,     3,     3,     4,     3,     2,
       2,     1,     3,     4,     4,     4,     4,     4,     6,     4,
       4,     5,     4,     4,     4,     4,     5,     4,     6,     7,
       4,     4,     5,     5,     5,     5,     5,     5,     7,     5,
       5,     6,     4,     4,     4,     4,     4,     6,     4,     4,
       5,     5,     5,     5,     5,     6,     5,     7,     8,     5,
       5,     6,     3,     3,     3,     3,     4,     3,     5,     6,
       3,     3,     4,     3,     3,     3,     3,     3,     5,     3,
       3,     4,     4,     4,     3,     5,     4,     4,     2,     3,
       6,     6,     1,     1,     1,     2,     2,     2,     3,     3,
       2,    12,     2,     2,     1,     3,     4,     2,     0,     3,
       1,     2,     2,     2,     2,     2,     4,     4,     4,     3,
       4,     5,     8,     6,     9,     6,     7,    10,    11,    12,
       9,     5,     6,     3,     5,     5,     6,     5,     4,     4,
       4,     9,    10,    11,     9,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     7,     7,     2,     4,     4,     4,
       4,     5,     4,     4,     5,     5,     3,     4,     4,     4,
       7,     9,     6,    10,    11,    12,     9,     3,     2,     3,
       5,     7,     4,     3,     3,     6,     7,     7,     7,     4,
       4,     9,     4,     3,     4,     7,     7,     2,     3,     3,
       3,     4,     2,     2,     4,    10,     3,     4,     1,     3,
       2,     2,     2,     2,     3,     5,     4,     5,     2,     2,
       2,     2,     3,     2,     2,     2,     3,     2,     3,     4,
       3,     3,     6,     4,     2,     3,     2,     2,     4,     3,
       3,     2,     3,     1,     2,     1,     2,     2,     2,     3,
       1,     1,     1,     1,     2,     1,     2,     2,     1,     2,
       2,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     1,     2,     2,     2,     3,     5,     7,     7,
       6,     6,     6,     6,     5,     6,     6,     6,     6,     6,
       6,     6,    11,     7,     7,     7,     9,     9,    10,    12,
      12,     3,     2,     0,     1,     3,     4,     4,     4,     0,
       1,     1,     4,     4,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     1,     1,     3,     3,     8,     6,
      10,     7,     7,     5,     2,     2,     3,     4,     5,     5,
       5,     3,     4,     5,     5,     5,     5,     2,     3,     3,
       5,     3,     3,     3,     3,     3,     4,     5,     5,     5,
       5,     3,     4,     5,     5,     2,     2,     3,     5,     6,
       6,     3,     3,     6,     6,     5,     5,     2,     3,     3,
       5,     6,     3,     2,     2,     3,     2,     3,     2,     3,
       5,     6,     2,     2,     2,     2,     1,     4,     4,     1,
       2,     2,     2,     2,     2,     2,     2,     3,     2,     3,
       2,     3,     1,     1,     1,     1,     1,     1,     0,     2,
       0,     2,     0,     1,     0,     0,     1,     1,     1,     1,
       1,     7,     8,     2,     6,     2,     6,     2,     3,     2,
       1,     1,     3,     3,     1,     4,     2,     1,     3,     3,
       4,     3,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       0,     0,     2,     6,     7,     2,     1,     3,     1,     3,
       1,     1,     1,     2,     2,     1,     3,     0,     0,     2,
       2,     1,     3,     5,     0,     1,     1,     2,     2,     3,
       2,     3,     2,     3,     2,     3,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     2,     2,     3,     2,     2,     2,     2,     1,     1,
       1,     1,     4,     2,     3,     3,     2,     3,     2,     2,
       2,     3,     3,     3,     2,     3,     1,     3,     3,     1,
       2,     2,     2,     2,     9,     6,     1,     1,     1,     1,
       2,     2,     3,     3,     1,     2,     3,     3,     1,     2,
       1,     1,     1,     1,     1,     1,     2,     2,     4,     2,
       2,     2,     2,     2,     4,     2,     2,     2,     2,     2,
       4,     1,     2,     2,     2,     3,     1,     1,     1,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     3,     3,
       3,     3,     3,     3,     1,     2,     2,     2,     3,     2,
       3,     3,     3,     3,     3,     3,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       3,     3,     3,     2,     2,     2,     3,     3,     3,     2,
       2,     2,     2,     2,     2,     3,     3,     3,     2,     2,
       2,     2,     2,     2,     3,     3,     3,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     3,     3,     3,     4,
       6,     2,     1,     1,     1,     1,     1,     0,     5,     1,
       6,     3,     1,     2,     2,     2,     3,     3,     2,     2,
       2,     2,     2,     2,     3,     2,     2,     3,     1,     3,
       4,     2,     1,     2,     5,     6,     6,     2,     1,     2,
       2,     5,     6,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     7,     8,     0,     0,     0,     0,
       0,   342,     0,     0,     0,     0,     0,     0,   370,     0,
       0,    23,     0,     0,     0,     0,     0,  1194,     0,     0,
       0,     0,  1125,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1125,    45,     0,     0,     0,    50,     0,     0,
       0,    54,  1387,    56,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     3,    61,
      62,     0,   270,     6,     0,     0,     0,     0,     0,     0,
       9,     0,     0,   303,   305,     0,     0,     0,     0,     0,
      11,   163,   165,   158,   159,   160,   164,   161,   162,   311,
      12,     0,     0,   324,     0,     0,     0,    13,     0,     0,
       0,     0,   349,     0,    14,    74,   103,     0,   133,   102,
      82,   100,     0,    79,    81,    77,   134,   101,    78,     0,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,    75,    76,
      80,   356,   171,   104,     0,    15,     0,    16,    17,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     2,
      63,   368,   367,    18,     0,    19,     0,     0,     0,   431,
     445,     0,   451,     0,     0,     0,     0,     0,     0,     0,
     385,     0,   524,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1125,     0,   396,     0,     0,   402,     0,     0,
       0,   406,     0,   408,     0,   410,     0,     0,   581,   414,
      20,     0,   587,    21,   592,     0,     0,   611,   596,   597,
     598,   599,   613,   601,   602,   606,   603,     0,   605,   607,
       0,     0,    22,     0,    24,     0,     0,     0,    26,     0,
       0,     0,    27,     0,   628,     0,     0,     0,   633,     0,
      28,     0,  1196,   141,  1218,     0,  1195,  1210,  1214,  1208,
       0,  1206,  1216,     0,  1212,     0,    36,     0,     0,     0,
       0,     0,     0,    30,   793,    31,     0,     0,     0,     0,
       0,     0,   794,    32,     0,    33,  1129,  1130,  1126,  1127,
    1128,     0,   141,  1220,     0,   135,     0,     0,     0,    35,
       0,    37,     0,  1231,  1230,  1229,  1228,    39,     0,     0,
       0,     0,     0,   171,     0,    40,     0,  1249,     0,  1246,
      41,     0,     0,     0,     0,    44,     0,    43,    42,     0,
       0,     0,     0,    47,     0,     0,  1291,    48,     0,     0,
       0,     0,     0,     0,    49,  1383,  1382,  1386,  1385,  1384,
      51,     0,    52,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    53,     0,     0,  1389,    55,     0,     0,
      57,     0,     0,     0,     0,   171,    58,  1412,    59,     0,
       0,    60,     1,     4,     5,   253,     0,   245,     0,     0,
     247,     0,   255,   248,   252,   263,   264,   249,   265,     0,
     251,   273,   274,   272,   271,     0,     0,   293,     0,   278,
     286,   289,   288,   287,   285,   277,   282,   283,   284,   276,
       0,     0,     0,     0,     0,     0,   281,    10,     0,     0,
       0,     0,     0,     0,     0,     0,   304,     0,     0,   312,
       0,   323,   313,     0,   325,   315,   326,   316,   337,   317,
       0,     0,   318,     0,    93,    94,    95,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   345,     0,
       0,     0,     0,     0,   173,   178,   172,   174,   177,   176,
     175,     0,     0,   362,    68,    69,    70,    71,    72,    64,
      65,    66,    73,    67,     0,   371,     0,   427,   423,   419,
     420,   424,   421,   426,   372,   430,   373,   329,   435,   439,
     434,   332,   331,   330,     0,     0,   374,   446,   376,     0,
     375,     0,   453,   377,   466,   457,   469,   458,   459,   460,
     462,     0,   464,   465,   171,   378,     0,     0,   379,     0,
       0,   171,   380,   478,   171,   476,   381,   479,   383,   171,
     480,   382,     0,   171,     0,   384,   498,     0,   496,   514,
       0,     0,     0,   502,   494,     0,   504,   519,   507,   386,
     525,   526,   387,   388,     0,     0,   550,   551,   552,   391,
     547,   548,   549,   392,     0,   489,     0,   393,    83,   486,
       0,   394,   395,   540,   540,   527,   528,   540,   540,   399,
       0,   539,   533,   538,   534,   535,   536,   537,   398,   546,
     400,   401,   542,   403,     0,   543,   544,   545,   405,   558,
     553,   554,   556,   407,   564,   573,   575,   577,   563,   566,
     567,   579,   409,     0,     0,   584,     0,   413,   171,   586,
     593,     0,   594,   612,   595,   614,   615,   616,   600,   617,
     619,   618,   620,   604,   608,   625,     0,     0,     0,     0,
     621,   609,    25,  1285,  1286,  1287,  1288,  1289,     0,  1280,
    1281,  1282,  1283,     0,     0,     0,   630,   629,     0,     0,
       0,     0,    29,   141,  1219,     0,  1211,  1215,  1209,  1207,
    1217,     0,  1213,     0,   156,   149,   148,   146,   152,   153,
     150,   154,   147,   157,   143,   145,   155,   144,   151,   142,
    1200,  1198,  1197,  1202,  1204,     0,     0,     0,     0,   640,
       0,   641,     0,     0,     0,     0,     0,     0,     0,   642,
       0,   792,     0,   643,     0,   644,     0,     0,   645,     0,
     797,   796,   795,     0,   800,     0,     0,     0,   971,     0,
       0,     0,   804,   808,   810,     0,  1009,     0,     0,     0,
       0,   908,     0,     0,     0,   943,     0,     0,     0,     0,
       0,     0,     0,   945,     0,     0,     0,    34,  1226,  1221,
    1227,   138,   139,   137,   140,   136,  1222,     0,  1224,  1225,
    1279,    38,     0,     0,     0,     0,  1238,  1239,     0,   171,
       0,  1236,  1233,     0,     0,     0,   171,  1256,  1259,  1257,
    1258,  1250,  1251,  1252,  1253,     0,     0,     0,    46,  1276,
    1277,     0,  1296,  1298,  1297,  1293,  1294,  1292,     0,     0,
       0,     0,     0,     0,  1299,     0,  1303,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1300,
    1314,     0,     0,     0,  1302,  1304,     0,     0,     0,  1301,
    1381,  1274,  1275,  1273,   226,     0,   237,   222,     0,   239,
     223,     0,   241,   224,  1271,  1272,  1270,   225,   228,     0,
       0,     0,   231,   227,   229,   230,     0,     0,   221,     0,
       0,     0,     0,  1395,  1408,     0,     0,  1398,     0,     0,
    1401,     0,     0,  1400,  1399,   179,  1418,     0,  1417,  1413,
     254,   250,     0,   259,     0,   256,     0,   275,   166,   169,
     170,   168,   167,   290,   291,   292,   280,   279,   295,   297,
     296,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   314,     0,     0,     0,   171,     0,   346,
      99,    96,    97,    98,   171,   348,   347,     0,     0,     0,
       0,     0,     0,     0,   361,     0,   357,   355,   354,   369,
     422,     0,     0,   425,   440,   441,   436,   437,   442,   444,
     443,   438,   333,   334,   433,   432,   448,   447,     0,   452,
     467,   468,   456,   470,   463,   461,   455,     0,     0,   171,
     171,   179,   179,   179,   171,     0,     0,   171,   515,   497,
     508,     0,   499,    83,   510,     0,     0,   501,   503,   171,
     520,     0,     0,   506,     0,     0,   390,     0,   491,    87,
      86,   485,     0,   541,   530,   529,   531,   532,     0,     0,
       0,  1023,  1113,  1025,  1024,     0,  1118,     0,  1096,     0,
    1099,     0,     0,  1120,  1122,     0,  1112,   397,     0,   555,
     557,   574,   560,   576,   561,   578,   562,   568,   571,   569,
     565,   580,   559,     0,     0,   412,   585,   582,   583,   179,
     610,   622,   623,   624,   626,     0,     0,     0,   639,   627,
       0,     0,     0,  1201,  1199,  1203,  1205,     0,     0,     0,
     192,   192,   186,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   189,   189,   186,     0,     0,   186,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   687,
     711,     0,     0,     0,   679,     0,     0,     0,     0,   192,
     186,     0,     0,   788,     0,   798,   799,   171,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   856,     0,     0,     0,     0,     0,   878,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   897,     0,
       0,   902,   903,     0,     0,     0,   923,   925,   924,     0,
     927,     0,     0,   934,   936,   937,   972,     0,     0,     0,
       0,   802,   803,  1017,  1015,  1020,  1019,  1018,  1016,  1021,
       0,   807,     0,     0,  1011,  1010,   811,     0,  1014,     0,
     812,   813,   814,   815,     0,     0,     0,     0,     0,   910,
       0,     0,   911,  1141,     0,  1144,  1140,     0,     0,     0,
     912,   944,   913,  1159,  1164,  1161,  1167,  1160,  1158,  1165,
    1162,  1156,  1163,  1157,  1166,     0,     0,   918,     0,     0,
       0,     0,   919,  1176,  1180,  1181,     0,  1178,   920,     0,
    1182,   921,   941,     0,     0,     0,   946,   947,   948,  1223,
    1237,     0,     0,  1244,  1240,     0,     0,     0,  1235,  1234,
    1248,  1247,     0,     0,  1264,     0,     0,  1260,     0,  1268,
       0,     0,  1261,     0,  1295,   215,   215,     0,     0,     0,
     215,     0,  1328,     0,  1327,     0,     0,     0,     0,  1315,
       0,     0,     0,     0,  1319,     0,     0,     0,  1326,     0,
       0,     0,     0,     0,  1317,  1329,     0,     0,     0,  1316,
     215,   215,   215,  1306,  1305,  1307,     0,   238,   240,   242,
     232,     0,   235,   234,   233,     0,   243,     0,    62,     0,
    1391,     0,  1396,   171,  1411,     0,  1402,  1403,     0,  1405,
    1406,     0,   180,   181,  1397,  1419,  1420,     0,   246,     0,
     260,     0,     0,     0,     0,   294,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     340,   171,     0,     0,     0,     0,   171,     0,   360,     0,
     359,   429,   428,     0,     0,     0,   171,     0,   179,   475,
     473,   477,   481,     0,     0,     0,   179,     0,   516,   500,
       0,   511,   513,   182,     0,     0,   389,     0,     0,    62,
       0,   490,    85,    84,     0,     0,  1035,     0,     0,     0,
       0,     0,     0,  1047,     0,     0,     0,  1093,     0,     0,
       0,  1065,  1066,     0,     0,     0,     0,     0,  1077,     0,
    1083,  1084,  1086,  1088,     0,  1092,  1104,  1105,  1106,     0,
    1108,  1114,  1116,  1117,  1115,  1022,     0,  1095,     0,  1094,
    1034,     0,     0,  1100,     0,  1102,     0,  1101,  1123,  1103,
    1110,     0,     0,   572,   570,   411,     0,     0,  1290,  1284,
     637,   638,     0,   635,   631,     0,   192,   192,   192,   193,
     194,   649,   650,   188,   187,     0,   192,   192,   192,     0,
     657,   656,   655,   667,   189,   192,   192,   192,   190,   191,
     192,   192,     0,   192,   192,     0,   189,     0,   680,     0,
     686,     0,   685,   684,   683,     0,     0,     0,   710,     0,
     709,     0,   682,   681,     0,     0,     0,     0,   189,   189,
     186,     0,     0,   186,     0,     0,     0,   192,   192,   784,
       0,   192,   192,   789,     0,   205,   206,   207,   208,   209,
     210,     0,    91,    92,    90,   819,     0,     0,     0,     0,
       0,   965,   963,   958,     0,   968,   952,   969,   955,   967,
     961,   950,   964,   953,   951,   970,   966,     0,     0,   833,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   866,     0,     0,     0,
       0,   877,   879,     0,     0,   884,   883,     0,     0,   195,
       0,     0,     0,   171,     0,   893,     0,     0,     0,     0,
     898,   899,   900,     0,     0,     0,   906,   922,   926,   928,
     931,   930,     0,     0,     0,   935,   973,   975,     0,   974,
     805,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1003,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   809,   949,     0,     0,
       0,     0,   909,     0,   171,  1137,  1135,  1133,     0,     0,
     171,  1139,   914,     0,     0,     0,     0,  1175,     0,     0,
    1183,   939,   940,     0,   942,  1243,  1245,  1242,  1241,  1232,
       0,     0,     0,  1265,     0,     0,  1269,  1278,   217,   218,
     219,   220,   216,  1309,  1308,     0,     0,     0,  1313,     0,
       0,     0,  1312,     0,     0,     0,  1311,  1310,   215,     0,
       0,     0,  1318,     0,     0,     0,  1325,     0,     0,     0,
    1324,     0,     0,     0,  1323,     0,     0,     0,  1322,     0,
       0,     0,     0,     0,  1339,     0,  1374,  1373,  1375,     0,
       0,     0,  1321,     0,     0,     0,  1320,  1334,  1333,  1335,
    1331,  1330,  1332,  1377,  1376,  1378,     0,   236,     0,     0,
    1393,  1394,     0,  1409,   171,  1404,  1407,     0,     0,   171,
       0,     0,     0,   257,     0,     0,     0,     0,   298,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   336,   335,
       0,     0,   327,   338,   341,     0,   351,   353,   352,   350,
     171,   358,     0,     0,     0,   179,   171,     0,     0,     0,
       0,   495,   509,   518,     0,   512,   184,   185,   183,   505,
       0,   521,     0,     0,   488,   493,    83,     0,     0,     0,
       0,     0,     0,   171,  1036,     0,     0,     0,  1041,     0,
     171,     0,  1048,  1049,     0,  1051,  1053,  1052,  1054,  1055,
       0,     0,     0,  1061,     0,  1067,     0,     0,     0,  1071,
    1072,     0,     0,     0,     0,  1078,  1079,     0,     0,  1082,
    1085,  1087,  1089,     0,     0,  1107,  1109,  1026,  1119,  1027,
       0,     0,  1121,  1111,     0,     0,   590,   591,     0,   632,
     636,     0,   646,   647,   648,   192,   652,   653,   654,     0,
       0,     0,   661,   662,   186,     0,     0,     0,   192,   668,
     669,   670,   671,   673,   189,   676,   677,     0,   192,     0,
       0,     0,   189,   189,   186,     0,     0,     0,     0,     0,
       0,     0,   189,   189,   186,     0,     0,   186,     0,     0,
       0,     0,   189,   189,   186,     0,     0,     0,     0,   708,
       0,   712,     0,     0,     0,     0,     0,   189,   189,   186,
       0,     0,   186,     0,     0,     0,     0,     0,   189,   189,
     186,     0,     0,   186,     0,   189,   688,   689,   690,   691,
     693,     0,   696,   697,     0,   189,     0,     0,   782,   783,
     192,   786,   787,     0,   818,   171,   820,     0,     0,     0,
       0,     0,     0,     0,   957,   954,   960,   959,   956,   962,
       0,     0,     0,     0,     0,   171,   839,   838,   840,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   907,   857,   858,   859,     0,   863,   860,   862,
       0,     0,   868,   867,   869,     0,     0,     0,     0,     0,
       0,   171,   171,   882,   201,   197,   202,   196,   199,   198,
     200,   889,   890,   171,     0,     0,   892,   894,   171,   171,
       0,   901,   904,   171,   171,   929,   933,   976,   806,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1004,
    1124,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1002,     0,     0,     0,     0,
       0,   816,   817,   171,   179,  1138,     0,     0,  1142,  1143,
       0,     0,   916,     0,   171,     0,  1177,  1179,   938,     0,
    1262,  1263,  1266,  1267,   215,   215,   215,   215,   215,   215,
     215,   215,   215,  1379,  1337,  1336,  1338,  1371,  1370,  1372,
    1368,  1367,  1369,  1362,  1361,  1363,  1359,  1358,  1360,  1341,
    1340,  1344,  1343,  1345,  1342,  1353,  1352,  1354,  1350,  1349,
    1351,     0,     0,  1388,     0,  1410,     0,   171,     0,  1414,
       0,     0,   261,     0,   258,     0,     0,     0,     0,     0,
     306,     0,     0,     0,     0,     0,     0,     0,   171,     0,
       0,   343,   159,     0,   449,     0,   471,   179,   182,     0,
       0,   484,     0,   522,   523,     0,   487,     0,     0,     0,
       0,     0,   171,  1037,   182,   182,   182,   171,  1042,   182,
     179,   182,   182,   171,  1056,   182,   182,   182,   171,  1062,
     182,   182,   171,     0,   171,   182,   171,   182,   182,   171,
     182,   171,  1097,  1098,     0,     0,   589,     0,   651,   658,
     659,   660,     0,   664,   665,   666,   672,   192,   189,   678,
     699,   700,   701,   702,   703,     0,   705,   706,   189,   189,
     762,   763,   764,   765,   767,     0,   770,   771,     0,   189,
     773,   774,   775,   776,   777,     0,   779,   780,   189,     0,
       0,     0,   189,   189,   186,     0,     0,     0,     0,     0,
       0,   189,   189,   186,     0,     0,     0,     0,     0,     0,
     189,   189,   186,     0,     0,     0,   189,   192,   192,   192,
     192,   192,     0,   192,   192,     0,   189,   189,   192,   192,
     192,   192,   192,     0,   192,   192,     0,   189,   692,   189,
       0,   698,     0,     0,   785,     0,   821,   182,     0,     0,
     182,     0,     0,     0,   831,   182,   834,   835,   182,   837,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   861,   864,   865,     0,   182,     0,     0,
       0,   880,     0,     0,   179,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1168,  1001,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   171,     0,     0,    88,
       0,     0,  1012,  1013,   179,     0,     0,     0,  1145,   915,
     917,   179,   171,  1255,  1365,  1364,  1366,  1356,  1355,  1357,
    1347,  1346,  1348,  1380,     0,  1390,  1421,     0,     0,  1416,
    1415,   262,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   302,     0,     0,   328,   339,   182,   450,   454,   472,
     474,     0,   482,   517,   171,     0,     0,     0,     0,     0,
       0,  1033,  1038,  1040,  1039,  1043,  1044,  1045,  1046,  1050,
    1057,  1058,  1059,  1060,  1063,  1064,  1068,   179,   182,   179,
    1075,   179,  1076,  1080,   179,  1090,   179,     0,   171,     0,
     588,     0,   663,   674,   192,   189,   707,   766,   189,     0,
     772,   189,   781,   192,   192,   192,   192,   192,     0,   192,
     192,   189,   192,   192,   192,   192,   192,     0,   192,   192,
     189,   192,   192,   192,   192,   192,     0,   192,   192,   189,
     192,   722,   723,   724,   725,   727,   189,   730,   731,     0,
     192,   192,   751,   752,   753,   754,   756,   189,   759,   760,
       0,   192,   694,   189,   790,   791,   171,   823,     0,   182,
     825,     0,   171,     0,   832,   836,   171,     0,   845,   846,
     847,   848,   852,   853,   849,   850,   851,     0,     0,   182,
     872,     0,   171,     0,     0,   885,     0,   182,     0,     0,
     182,   182,     0,   932,     0,   203,   203,     0,     0,   203,
       0,   203,  1124,     0,     0,     0,     0,     0,     0,     0,
       0,  1169,  1147,     0,  1154,  1155,     0,   203,   203,     0,
       0,     0,     0,     0,     0,     0,     0,  1005,     0,     0,
       0,  1124,    89,     0,   203,     0,  1171,   171,   171,     0,
     179,     0,   244,  1423,  1422,     0,     0,   266,     0,     0,
       0,     0,     0,   310,     0,     0,     0,   344,   483,     0,
     363,     0,  1029,     0,   211,     0,  1069,  1070,  1073,  1074,
    1081,  1091,   404,     0,   363,     0,   675,   704,   768,   189,
     778,   713,   714,   715,   716,   717,   189,   719,   720,   192,
     742,   743,   744,   745,   746,   189,   748,   749,   192,   733,
     734,   735,   736,   737,   189,   739,   740,   192,   726,   192,
     189,   732,   755,   192,   189,   761,   695,     0,   182,   826,
       0,     0,     0,     0,     0,   854,   855,   870,     0,     0,
       0,   881,   886,   887,     0,   895,   896,   888,   182,     0,
     204,  1124,  1124,    88,     0,  1124,     0,  1124,   977,   171,
       0,     0,     0,     0,     0,     0,     0,  1146,     0,     0,
    1124,  1124,    88,     0,     0,  1124,  1124,     0,     0,  1124,
    1008,  1006,  1007,   984,  1124,  1124,  1171,  1187,     0,  1136,
    1134,  1173,     0,     0,     0,     0,   268,   300,   301,     0,
       0,     0,   299,     0,   363,   364,   366,   365,   415,     0,
       0,   212,   214,   213,  1031,  1032,   363,   417,     0,   769,
     192,   721,   192,   750,   192,   741,   728,   192,   757,   192,
       0,   822,   182,   182,     0,   182,     0,   182,   182,     0,
     182,     0,  1124,   990,   986,  1124,     0,   991,     0,   985,
    1124,     0,  1149,     0,  1152,  1192,  1153,  1151,  1148,     0,
     988,   987,  1124,     0,     0,   982,   980,  1124,   171,   981,
     983,   989,  1187,  1131,     0,     0,  1172,  1185,  1174,  1254,
       0,     0,   308,   309,   307,   329,   332,   330,     0,     0,
     416,  1028,   171,   418,   634,   718,   747,   738,   729,   758,
     182,   824,   830,     0,   844,   841,   871,   876,     0,   891,
       0,   995,   979,    88,     0,   993,     0,  1150,     0,   978,
      88,     0,   994,     0,  1132,  1189,  1191,     0,  1184,     0,
       0,     0,     0,     0,     0,   211,     0,   827,   171,   842,
     873,   905,  1124,     0,  1193,     0,  1124,     0,   182,  1190,
    1186,   267,     0,     0,     0,     0,     0,  1030,   801,   171,
     828,   843,   171,   874,   997,     0,  1124,   996,     0,     0,
     269,   322,     0,   321,     0,   829,   875,    88,   998,    88,
    1124,   320,   319,  1124,  1124,   992,  1000,   999
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    58,  1614,   179,   161,  1051,  2751,  2752,   478,   479,
     480,   481,   162,   163,   164,   806,   730,    99,   943,   501,
    1394,  1909,  1545,  1560,  1541,  2151,  2861,  1611,  2924,  1783,
     383,   903,  1373,   887,   890,   893,   908,    68,   407,   413,
     417,   420,    73,   423,    80,   439,   435,   429,   446,    90,
     456,   100,   107,   462,   465,   467,   535,  1004,  1880,   469,
     472,   114,   488,   165,   167,  2918,   183,   185,   230,  1046,
    1095,   524,   993,   526,   536,   996,  1001,   538,   540,  1007,
     543,  1009,   555,  1012,  1014,   558,   562,   566,   568,   571,
     575,   611,   607,  1461,   589,  1032,  1037,  1029,  1449,  1043,
     592,   619,   628,  1054,   633,   638,   630,   603,   599,   643,
     652,  1090,  1524,  1082,  1084,  1086,  1092,   657,  1097,   233,
     659,  1978,   252,   662,   664,   668,   673,   681,   270,  1534,
     696,   293,   739,  1550,   741,   749,  1154,  1568,  1149,  2039,
    1580,  1578,  2041,  1150,  1570,  1572,   755,   758,   753,   295,
     303,   305,   797,  1232,  1637,  1221,  1736,  2180,  2195,  1236,
    1240,  1230,  1077,  1505,  1509,  1517,  1519,  2502,   311,  1249,
    1252,  1260,  2731,  2732,  2733,  2503,  2897,  2898,  1282,  1288,
    1291,  2986,  2987,  2983,  2984,  3035,  2734,  2735,   286,   319,
     327,   335,   821,   816,   340,   345,   347,   831,   838,  1317,
    1322,   897,   884,   353,   321,   262,   258,   357,   845,   364,
     879,   854,   869,   870,  1359,  1354,  1802,  1344,  1824,  1796,
    1836,  1832,  1792,  1818,  1814,  1788,  1810,  1806,  1348,   874,
     856,   370,   371,   387,  1380,   390,   396,   920,   923,   917,
     398,   401,   928
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2187
static const yytype_int16 yypact[] =
{
    5007,    55,   176,    20, -2187, -2187,  1282,  -135,  1268,   570,
    1437,   155,  2960,   195,   401,     8,   153,    96,  5224,   120,
    2518, -2187,    21,   -20,    -6,   849,   226,   242,  1231,    39,
     206,   490,   574,   986,   -38,   390,   784,  3227,    13,  1042,
     512,   418,   574, -2187,   194,   186,   -16, -2187,   653,   551,
    1111, -2187,    83, -2187,   110,  3448,   378,   114,   671,   198,
    1209,   346,   705,   720,   177,   748,    30,   854, -2187, -2187,
   -2187,  1091,   298, -2187,   272,    29,   401,   392,   112,   223,
   -2187,   750,   298, -2187, -2187,   298,   298,   928,   770,   298,
   -2187, -2187, -2187, -2187,   298, -2187, -2187, -2187, -2187, -2187,
   -2187,   169,   844,   656,   798,   848,   869, -2187,   298,  1597,
     298,   298,  1266,   298, -2187, -2187, -2187,   673, -2187, -2187,
   -2187, -2187,  4545, -2187, -2187, -2187, -2187, -2187, -2187,   298,
   -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187,
   -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187,
   -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187,
   -2187, -2187,  1429, -2187,   298, -2187,   887, -2187, -2187,   401,
     401,   401,   401,   401,   401,   401,   401,   401,   401, -2187,
   -2187, -2187, -2187, -2187,   757, -2187,   828,  1827,   777,   220,
     599,   745,   -63,  4033,   638,  4598,  4503,   964,  4545,  3376,
   -2187,   543,  -154,   888,   963,   897,   260,   325,  1061,   936,
     993,   454,   574,   647, -2187,   716,   999, -2187,   781,   760,
     359, -2187,    22, -2187,   507, -2187,   -24,  1011,    35, -2187,
   -2187,  4675, -2187, -2187, -2187,  1046,  1034,  1098, -2187, -2187,
   -2187, -2187,   938, -2187, -2187, -2187, -2187,  1199, -2187, -2187,
    4675,  4086, -2187,  1135, -2187,    31,  4675,  1138, -2187,    75,
    4675,  1144, -2187,   591, -2187,  1148,  1152,   107, -2187,   298,
   -2187,  1166,  1423,  2687, -2187,  1181, -2187, -2187, -2187, -2187,
    1172, -2187, -2187,   298, -2187,   401, -2187,   499,  1187,  1035,
      85,  1192,    68, -2187, -2187, -2187,  1219,  1228,   401,   401,
     298,   298, -2187, -2187,  1239, -2187, -2187, -2187, -2187, -2187,
   -2187,  2557,  2687, -2187,  1248,    41,   298,  4675,   298, -2187,
    4675, -2187,  1272, -2187, -2187, -2187, -2187, -2187,   298,  1514,
     401,  1443,   298,  1429,   298, -2187,  1286, -2187,  2218, -2187,
   -2187,  1068,  1301,  1309,   298, -2187,  1321, -2187, -2187,   -82,
    1322,  4675,  1325, -2187,  1523,   298,  1230, -2187,   622,  1212,
    1789,   444,  1341,   560, -2187, -2187, -2187, -2187, -2187, -2187,
   -2187,  1346, -2187,    61,   236,   397,   422,   753,   298,   232,
    1360,   298,    67, -2187,   298,  1070,  1369, -2187,   298,   298,
   -2187,   168,    25,    26,  1385,  1429, -2187, -2187, -2187,  1143,
     298, -2187, -2187, -2187, -2187, -2187,   298, -2187,  1387,  1392,
   -2187,   298,  1234, -2187, -2187, -2187, -2187, -2187, -2187,   298,
   -2187, -2187,   298, -2187, -2187,   767,   767, -2187,  1398, -2187,
   -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187,
    1188,   298,   298,  1409,  1414,  1438, -2187, -2187,   298,   298,
     298,   298,   298,   298,  1454,   298, -2187,  1460,   298, -2187,
    1464, -2187, -2187,  1465, -2187, -2187,   809, -2187,  1473, -2187,
    4675,  1481, -2187,   298, -2187, -2187, -2187,   298,  1482,  1494,
    1494,  4675,   298,   298,   298,   298,   298,   298, -2187,   298,
    4545,  1597,   298,   298, -2187, -2187, -2187, -2187, -2187, -2187,
   -2187,  1597,   298, -2187, -2187, -2187, -2187, -2187, -2187, -2187,
   -2187, -2187, -2187, -2187,  1502, -2187,  1213,   341, -2187, -2187,
   -2187, -2187, -2187, -2187, -2187, -2187, -2187,  -113, -2187, -2187,
   -2187,  1328, -2187,     9,   465,   465, -2187, -2187, -2187,  1506,
   -2187,  1516, -2187, -2187,  -115, -2187,  1339, -2187, -2187, -2187,
   -2187,  1334, -2187, -2187,  1429, -2187,   298,   298, -2187,  4675,
    4675,  1429, -2187, -2187,  1429, -2187, -2187, -2187, -2187,  1429,
   -2187, -2187,  4675,  1429,   298, -2187, -2187,  4675, -2187,  1533,
     683,  1319,    11, -2187, -2187,  1337,  4675,    48, -2187, -2187,
   -2187, -2187, -2187, -2187,  1540,  1543, -2187, -2187, -2187, -2187,
   -2187, -2187, -2187, -2187,  1556, -2187,  1352, -2187,   -79, -2187,
     298, -2187, -2187,  1570,  1570, -2187, -2187,  1570,  1570, -2187,
     871, -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187,
   -2187, -2187, -2187, -2187,   -24, -2187, -2187, -2187, -2187, -2187,
   -2187,  1368,  1370, -2187, -2187,  1510,  1513,  1515, -2187, -2187,
      37,  1332, -2187,   298,  1584,  1338,  2218, -2187,  1429, -2187,
   -2187,  1599, -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187,
   -2187, -2187, -2187, -2187, -2187, -2187,  4675,  4675,  4675,  4675,
   -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187,  1598, -2187,
   -2187, -2187, -2187,  1606,  1607,   401, -2187, -2187,  1608,  1613,
    1405,   298, -2187,  2687, -2187,  1622, -2187, -2187, -2187, -2187,
   -2187,   298, -2187,   401, -2187, -2187, -2187, -2187, -2187, -2187,
   -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187,
   -2187, -2187, -2187, -2187, -2187,   523,  1537,  1538,  1544, -2187,
    1632, -2187,   350,  1546,   506,   847,  5225,   874,  1635, -2187,
    1637, -2187,  1639, -2187,   327, -2187,  1640,  1642, -2187,  1644,
   -2187, -2187, -2187,   298, -2187,  2218,  4440,  1812,   652,  1656,
     467,  1539, -2187, -2187, -2187,  1645,    15,    47,  1658,  1662,
     219,   298,   318,   492,   851,  4675,   401,  1737,   527,    72,
     146,   334,    42, -2187,  1652,  1661,  1668, -2187, -2187, -2187,
   -2187, -2187, -2187, -2187, -2187, -2187, -2187,   298, -2187, -2187,
   -2187, -2187,   298,   298,   298,   298, -2187, -2187,   298,  1429,
     298, -2187,   298,  1597,   298,  1670,  1429, -2187, -2187, -2187,
   -2187, -2187, -2187, -2187, -2187,  1676,   511,   606, -2187, -2187,
   -2187,  1678, -2187, -2187, -2187, -2187,  1580, -2187,  1684,  1686,
    1603,  1604,  1609,  1694, -2187,  1698, -2187,  1699,  1614,  1702,
     927,   934,   598,   645,   667,  1000,   721,  1695,   782, -2187,
   -2187,  1703,  1705,  1709, -2187, -2187,  1715,  1727,  1729, -2187,
    1730, -2187, -2187, -2187, -2187,  1739, -2187, -2187,  1747, -2187,
   -2187,  1748, -2187, -2187, -2187, -2187, -2187, -2187, -2187,   298,
     296,   298, -2187, -2187, -2187, -2187,   298,   298, -2187,   298,
    1211,   298,   298, -2187,  2218,  1687,  1754, -2187,  1281,  1756,
   -2187,  1377,  1757, -2187, -2187,   -62,   298,   298, -2187,  1753,
   -2187, -2187,  1760,  1317,   298,  1755,   142, -2187, -2187, -2187,
   -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187,
   -2187,  1758,  1763,   298,   298,   298,   298,   298,  1766,   298,
    1769,   298,  1771, -2187,   401,  1772,  1773,  1429,  4675, -2187,
   -2187, -2187, -2187, -2187,  1429, -2187, -2187,   298,   298,   298,
    4675,   298,  1597,   298, -2187,   298, -2187, -2187, -2187, -2187,
   -2187,  1775,  1776, -2187, -2187, -2187, -2187, -2187, -2187, -2187,
   -2187, -2187, -2187, -2187, -2187, -2187,   638, -2187,   298, -2187,
   -2187, -2187, -2187, -2187, -2187, -2187, -2187,  4675,   298,  1429,
    1429,   -62,   -62,   -62,  1429,  1597,   298,  1429, -2187, -2187,
   -2187,   298, -2187,   -79,  1596,  1777,  1779, -2187, -2187,  1429,
   -2187,  1647,  1649, -2187,  1783,  1813, -2187,  1817,  1357,  1784,
    1785, -2187,   298, -2187, -2187, -2187, -2187, -2187,  4461,   858,
     955, -2187, -2187, -2187, -2187,   298,   264,  1244, -2187,  1541,
   -2187,  1737,  1550,   516,  1507,   105, -2187, -2187,   298, -2187,
   -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187,  1518, -2187,
   -2187, -2187, -2187,   298,  1820, -2187, -2187, -2187, -2187,   -62,
   -2187, -2187, -2187, -2187, -2187,  1823,  1829,  4631, -2187, -2187,
    1831,  1826,   298, -2187, -2187, -2187, -2187,  1833,  1834,  1835,
     532,   532,   -83,  1837,  1840,  1842,  1843,  1843,  1843,  1551,
    1555,  1846,  1855,  1866,   565,   565,   -83,  1872,  1873,   -83,
    1875,  1879,  1880,  1881,  1880,  1881,  5264,  1882,  1883, -2187,
   -2187,  1880,  1881,   709, -2187,  1874,  1885,  1886,  1887,   532,
     -83,  1890,  1893, -2187,  1894, -2187, -2187,  1429,  1171,  1617,
    1643,  1651,  1659,  1791,   947,  1660,  1897,   345,    46,  1792,
    1002,  1905,  1576,  1871,  1663,  1664,  1800,  1909,  1689,    32,
      62,  -131,   870,  4675,  1737,  1889,   605,  1650,  1701,  1918,
     162, -2187, -2187,   434,  1927,  1930, -2187, -2187, -2187,  1931,
    1704,   128,  1737,  1706, -2187, -2187, -2187,   401,  1928,  1935,
     298, -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187,
       0, -2187,  1047,  1936, -2187, -2187, -2187,   298, -2187,   298,
   -2187, -2187, -2187, -2187,   298,   298,   298,   467,  4675, -2187,
    1937,  1424, -2187, -2187,   298, -2187, -2187,   298,  4675,   298,
   -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187,
   -2187, -2187, -2187, -2187, -2187,   401,   298, -2187,   298,   467,
    1943,  1947, -2187, -2187, -2187, -2187,   298,   298, -2187,   401,
   -2187, -2187, -2187,   122,  1949,  1955, -2187, -2187, -2187, -2187,
   -2187,   298,   298, -2187, -2187,  1597,   298,   298, -2187, -2187,
   -2187, -2187,  1957,   298, -2187,   298,  1844, -2187,   298, -2187,
     298,  1847, -2187,  1961, -2187,  1028,  1028,   799,   815,   818,
    1028,  1964, -2187,   829, -2187,   879,   957,  1027,  1044, -2187,
    1965,  1966,  1052,  1969, -2187,  1971,  1972,  1977, -2187,  1079,
    1080,  1978,  1980,  1982, -2187, -2187,  1983,  1984,  1986, -2187,
    1028,  1028,  1028, -2187, -2187, -2187,   298, -2187, -2187, -2187,
   -2187,   298, -2187, -2187, -2187,   298, -2187,   298,  1198,  4675,
   -2187,   298, -2187,  1429, -2187,  2218, -2187, -2187,  1987, -2187,
   -2187,  1988, -2187, -2187, -2187, -2187,  1985,  1443, -2187,   298,
    1989,   298,   298,   298,  1291, -2187,  1990,   298,   298,  1991,
     298,   298,  1992,   298,  1993,   298,    14,  1999,   401,   401,
   -2187,  1429,   298,  2001,  2002,  2004,  1429,  4675, -2187,   298,
   -2187, -2187, -2187,   298,   298,   298,  1429,  4675,   -62, -2187,
   -2187, -2187, -2187,  1597,   298,  2005,   -62,   298,   764, -2187,
    2008, -2187, -2187,   841,  4003,   298, -2187,   298,  2006,  2014,
     298, -2187, -2187, -2187,  2010,  1251,  4545,  1726,  1752,  1759,
      57,  4675,  1761, -2187,   426,   166,   178, -2187,  1762,  1767,
     179, -2187, -2187,   684,  1832,   215,  1765,   427,  1737,  1037,
   -2187,  2016,  1743, -2187,   712, -2187, -2187, -2187, -2187,  1737,
    1790, -2187, -2187, -2187, -2187, -2187,   298, -2187,   298, -2187,
   -2187,   298,   298, -2187,   298, -2187,   298, -2187, -2187, -2187,
   -2187,  1802,   298, -2187, -2187, -2187,   298,    17, -2187, -2187,
   -2187, -2187,  2024,  2031, -2187,   298,   532,   532,   532, -2187,
   -2187, -2187, -2187, -2187, -2187,  2032,   532,   532,   532,   580,
   -2187, -2187, -2187, -2187,   565,   532,   532,   532, -2187, -2187,
     532,   532,  2035,   532,   532,  2036,   565,   846, -2187,   923,
   -2187,   901, -2187, -2187, -2187,  2037,  2039,  2040, -2187,  1167,
   -2187,  1254, -2187, -2187,  1740,  2041,  2042,  2043,   565,   565,
     -83,  2045,  2046,   -83,  2047,  2049,  2052,   532,   532, -2187,
    2053,   532,   532, -2187,  2054, -2187, -2187, -2187, -2187, -2187,
   -2187,   401, -2187, -2187, -2187,  4545,  1260,   298,  1419,  1648,
     513, -2187, -2187, -2187,   525, -2187, -2187, -2187, -2187, -2187,
   -2187, -2187, -2187, -2187, -2187, -2187, -2187,  2055,   298, -2187,
     401,  2056,   298,  4675,   401,   401,  2058,  1653,  1786,  1799,
     200,   210,  1801,   212,  1722,  1724,  2065,  2069,  2070,  2071,
     947,  2072,  2073,  2074,  1741,  1744,  1434,  2075,   298,  1548,
    1736, -2187, -2187,   401,  4675, -2187, -2187,  4675,   298,    -5,
    2079,  4675,   298,  1429,   401, -2187,  2085,  4675,  4675,   298,
   -2187, -2187, -2187,   401,   401,  4675, -2187, -2187, -2187, -2187,
   -2187, -2187,  4675,   298,   401, -2187, -2187, -2187,   298, -2187,
   -2187,  2086,   298,  1841,   256,   298,  1845,   298,   544,   298,
    2091,   298,  1848,  1850,   298,   298,   298,   298,   298,   298,
     298,   298,    23,   298,   298,  1852, -2187, -2187,   298,   298,
     298,   298, -2187,  4675,  1429,  2092,  2094,  2100,   298,   298,
    1429, -2187,   298,   298,   298,  4675,   467, -2187,   298,   298,
   -2187, -2187, -2187,  2101, -2187, -2187, -2187, -2187, -2187, -2187,
    2103,   298,   298, -2187,   298,   298, -2187, -2187, -2187, -2187,
   -2187, -2187, -2187, -2187, -2187,  2113,  2114,  2116, -2187,  2117,
    2118,  2120, -2187,  2121,  2123,  2125, -2187, -2187,  1028,  2126,
    2128,  2131, -2187,  2132,  2133,  2135, -2187,  2136,  2137,  2139,
   -2187,  2140,  2142,  2144, -2187,  2145,  2148,  2150, -2187,  2151,
    2152,  2154,  2155,  2157, -2187,  2158, -2187, -2187, -2187,  2159,
    2160,  2172, -2187,  2185,  2187,  2173, -2187, -2187, -2187, -2187,
   -2187, -2187, -2187, -2187, -2187, -2187,   298, -2187,   298,   298,
   -2187, -2187,   298, -2187,  1429, -2187, -2187,  1443,   298,  1429,
     298,   298,   298, -2187,   298,   298,  2191,   298, -2187,   298,
     298,  2193,   298,   298,  2194,   298,  2195,   298, -2187, -2187,
    2197,  4675, -2187,  2198, -2187,   298, -2187, -2187, -2187, -2187,
    1429, -2187,  1032,   298,  1032,   -62,  1429,  4675,   298,   298,
    2199, -2187, -2187, -2187,   298, -2187, -2187, -2187, -2187, -2187,
    4675, -2187,  4675,   298, -2187, -2187,   -79,  2201,  2204,  2205,
    2206,  2207,  4675,  1429, -2187,  4675,  4675,  4675,  4545,  4675,
    1429,  4675, -2187, -2187,  4675, -2187, -2187, -2187, -2187,  4545,
    4675,  4675,  4675,  4545,  4675, -2187,  4675,  4675,   298, -2187,
   -2187,  4675,  4675,  4675,  4675, -2187, -2187,  4675,  4675, -2187,
   -2187, -2187, -2187,  4675,  4675, -2187, -2187, -2187, -2187, -2187,
     298,   298, -2187, -2187,  2200,   298, -2187, -2187,  2208, -2187,
   -2187,   298, -2187, -2187, -2187,   532, -2187, -2187, -2187,  2209,
    2210,  2211, -2187, -2187,   -83,  2213,  2214,  2215,   532, -2187,
   -2187, -2187, -2187, -2187,   565, -2187, -2187,  2219,   532,  2217,
    2220,  2221,   565,   565,   -83,  2223,  2224,  2225,  1824,  2226,
    2228,  2229,   565,   565,   -83,  2231,  2232,   -83,  2233,  2234,
    2235,  2237,   565,   565,   -83,  2239,  2240,  2241,   987, -2187,
    1283, -2187,  1480,  1839,  2242,  2243,  2244,   565,   565,   -83,
    2246,  2248,   -83,  2249,  1862,  2250,  2252,  2253,   565,   565,
     -83,  2256,  2258,   -83,  2259,   565, -2187, -2187, -2187, -2187,
   -2187,  2262, -2187, -2187,  2265,   565,  2267,  2268, -2187, -2187,
     532, -2187, -2187,  2269, -2187,  1429, -2187,  4675,   298,   298,
    4675,   298,  2272,  1617, -2187, -2187, -2187, -2187, -2187, -2187,
    2275,  4675,   401,  2277,  4675,  1429, -2187, -2187, -2187,  2280,
    1617,   298,   298,   298,   298,   298,   298,   298,   298,   298,
    2282,  2283, -2187, -2187, -2187, -2187,  2284, -2187, -2187, -2187,
    2287,  2289, -2187, -2187, -2187,   298,  4675,   298,  2292,  1617,
     401,  1429,  1429, -2187, -2187, -2187, -2187, -2187, -2187, -2187,
   -2187, -2187, -2187,  1429,   298,  1597, -2187, -2187,  1429,  1429,
     298, -2187, -2187,  1429,  1429, -2187, -2187, -2187, -2187,   298,
     298,   298,   298,   298,   298,   298,   298,   298,   298, -2187,
   -2187,   298,   298,   298,   298,   298,   298,   298,   298,   298,
     298,   298,  2051,  2295,   298, -2187,   298,   298,   298,  2290,
    2297, -2187, -2187,  1429,   -62, -2187,  2298,  2299, -2187, -2187,
    1597,   298, -2187,  2301,  1429,  4675, -2187, -2187, -2187,  2304,
   -2187, -2187, -2187, -2187,  1028,  1028,  1028,  1028,  1028,  1028,
    1028,  1028,  1028, -2187, -2187, -2187, -2187, -2187, -2187, -2187,
   -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187,
   -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187,
   -2187,  1617,   298, -2187,   298, -2187,   298,  1429,   298, -2187,
    1597,   298, -2187,   298, -2187,  2110,  2307,  2308,   298,   298,
   -2187,   298,   298,  2309,   298,  2305,   298,  2311,  1429,  2312,
    4675, -2187, -2187,   298, -2187,   298, -2187,   -62,   841,   298,
    2313, -2187,   298, -2187, -2187,  4545, -2187,  2314,  2315,  2316,
    2317,  2320,  1429, -2187,   841,   841,   841,  1429, -2187,   841,
     -62,   841,   841,  1429, -2187,   841,   841,   841,  1429, -2187,
     841,   841,  1429,  4675,  1429,   841,  1429,   841,   841,  1429,
     841,  1429, -2187, -2187,  2322,  4545,  2324,   298, -2187, -2187,
   -2187, -2187,  2323, -2187, -2187, -2187, -2187,   532,   565, -2187,
   -2187, -2187, -2187, -2187, -2187,  2326, -2187, -2187,   565,   565,
   -2187, -2187, -2187, -2187, -2187,  2327, -2187, -2187,  2328,   565,
   -2187, -2187, -2187, -2187, -2187,  2329, -2187, -2187,   565,  2331,
    2333,  2334,   565,   565,   -83,  2330,  2336,  2337,  2340,  2342,
    2343,   565,   565,   -83,  2345,  2346,  2347,  2348,  2349,  2352,
     565,   565,   -83,  2354,  2355,  2356,   565,   532,   532,   532,
     532,   532,  2358,   532,   532,  2359,   565,   565,   532,   532,
     532,   532,   532,  2360,   532,   532,  2361,   565, -2187,   565,
    2363, -2187,  2364,  2365, -2187,  2218, -2187,   841,  2366,  4675,
     841,   298,  4675,  2367, -2187,   841, -2187, -2187,   841, -2187,
    4675,  2368,   298,   298,   298,   298,   298,   298,   298,   298,
     298,   298,   298, -2187, -2187, -2187,  4675,   841,   298,  4675,
    2369, -2187,  1597,  1597,   -62,  4675,  1597,  1597,  4675,  4675,
    1597,  1597,   298,   298,   298,   298,   298,   298,  1617,   298,
     298,   298,  3871, -2187,  1617,   298,   298,   298,   298,  1617,
     298,   298,   298,   298,   298,   298,  1429,   298,  1797,  1617,
     298,   298, -2187, -2187,   -62,   401,  4675,  4675, -2187, -2187,
   -2187,   -62,  1429,  2370, -2187, -2187, -2187, -2187, -2187, -2187,
   -2187, -2187, -2187, -2187,   298, -2187, -2187,  1597,   298, -2187,
   -2187, -2187,  1355,  2371,  2372,  2374,  2375,   298,   298,  2376,
     298, -2187,  2378,  1032, -2187, -2187,   841, -2187, -2187, -2187,
   -2187,  2379, -2187, -2187,  1429,  2381,  2382,  2384,  2385,  4675,
    2386, -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187,
   -2187, -2187, -2187, -2187, -2187, -2187, -2187,   -62,   841,   -62,
   -2187,   -62, -2187, -2187,   -62, -2187,   -62,  2388,  1429,  2390,
   -2187,   298, -2187, -2187,   532,   565, -2187, -2187,   565,  2391,
   -2187,   565, -2187,   532,   532,   532,   532,   532,  2421,   532,
     532,   565,   532,   532,   532,   532,   532,  2422,   532,   532,
     565,   532,   532,   532,   532,   532,  2427,   532,   532,   565,
     532, -2187, -2187, -2187, -2187, -2187,   565, -2187, -2187,  2428,
     532,   532, -2187, -2187, -2187, -2187, -2187,   565, -2187, -2187,
    2429,   532, -2187,   565, -2187, -2187,  1429, -2187,  4675,   841,
   -2187,  2430,  1429,   298, -2187, -2187,  1429,   298, -2187, -2187,
   -2187, -2187, -2187, -2187, -2187, -2187, -2187,   298,   298,   841,
   -2187,  2431,  1429,   298,  1597, -2187,  2432,   841,   298,  1597,
     841,   841,  4675, -2187,   298,  2434,  2434,   298,   298,  2434,
    1617,  2434, -2187,  4675,  1742,  1810,  1849,  1857,  1865,  1900,
    1929,  3871, -2187,  1953, -2187, -2187,  1617,  2434,  2434,   298,
     298,  1617,   298,   298,   298,   298,   298, -2187,  1597,   298,
    2435, -2187, -2187,   298,  2434,   401,    19,  1429,  1429,   401,
     -62,  2437, -2187, -2187, -2187,  2438,   298, -2187,  2439,  2441,
    2442,  2443,  2445, -2187,  2446,  2447,   298, -2187, -2187,  2448,
     115,  4675, -2187,  2449,   251,  4675, -2187, -2187, -2187, -2187,
   -2187, -2187, -2187,  2451,   115,   298, -2187, -2187, -2187,   565,
   -2187, -2187, -2187, -2187, -2187, -2187,   565, -2187, -2187,   532,
   -2187, -2187, -2187, -2187, -2187,   565, -2187, -2187,   532, -2187,
   -2187, -2187, -2187, -2187,   565, -2187, -2187,   532, -2187,   532,
     565, -2187, -2187,   532,   565, -2187, -2187,   298,   841, -2187,
    4675,  4675,   298,  4675,   298, -2187, -2187, -2187,  4675,  4675,
     298, -2187, -2187, -2187,  4675, -2187, -2187, -2187,   841,  2452,
   -2187, -2187, -2187,  1617,   298, -2187,  2453, -2187, -2187,  1429,
     947,  2467,  2454,  2468,  2469,  2471,  2474, -2187,   401,  2477,
   -2187, -2187,  1617,   298,  2478, -2187, -2187,   298,  4675, -2187,
   -2187, -2187, -2187, -2187, -2187, -2187,    19,  1902,  1737, -2187,
   -2187, -2187,   401,  2481,  2490,  2494, -2187, -2187, -2187,  2482,
    2496,  2497, -2187,    36,   115, -2187, -2187, -2187, -2187,  2502,
    4675, -2187, -2187, -2187, -2187, -2187,   115, -2187,  2509, -2187,
     532, -2187,   532, -2187,   532, -2187, -2187,   532, -2187,   532,
    2218, -2187,   841,   841,   298,   841,  2512,   841,   841,   298,
     841,   298, -2187, -2187, -2187, -2187,  2515, -2187,   298, -2187,
   -2187,  2516, -2187,  2519, -2187, -2187, -2187, -2187, -2187,   298,
   -2187, -2187, -2187,  2520,   298, -2187, -2187, -2187,  1429, -2187,
   -2187, -2187,  1902, -2187,  1912,  1963,  1737, -2187, -2187, -2187,
    2517,  2521, -2187, -2187, -2187, -2187, -2187, -2187,   698,   698,
   -2187, -2187,  1429, -2187, -2187, -2187, -2187, -2187, -2187, -2187,
     841, -2187, -2187,  2523, -2187,  4545, -2187, -2187,  2524, -2187,
    1617, -2187, -2187,  1617,   298, -2187,  2525, -2187,   298, -2187,
    1617,   298, -2187,  4675, -2187,  1912, -2187,   401, -2187,  2526,
    2527,   298,   298,   298,   298,   251,  2528,  4545,  1429, -2187,
    4545, -2187, -2187,   298, -2187,  2530, -2187,   298,   841, -2187,
   -2187, -2187,  2533,  2534,   298,  2535,   298, -2187, -2187,  1429,
   -2187, -2187,  1429, -2187, -2187,  2531, -2187, -2187,  2538,  2541,
   -2187, -2187,  2542, -2187,  2543, -2187, -2187,  1617, -2187,  1617,
   -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2187, -2187,    -3, -2187,   662, -1030, -1492, -1155,  1671, -2187,
     970,  -453,  1751,   -53,   -21, -2187,  -308, -1883,  1934,   960,
    -928, -2186, -1017,  1468,  1356, -2187, -1146, -2187,  -670, -1147,
   -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187,
   -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187,
   -2187, -2187, -2187, -2187, -2187, -2187,  -530,  -528, -2187, -2187,
   -2187, -2187, -2187, -2187, -2187, -2130, -2187, -2187, -2187, -2187,
   -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187,
   -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187,
   -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187,
   -2187, -2187, -2187,   797, -2187, -2187, -2187, -2187, -2187, -2187,
   -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187,
   -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187,
   -2187, -2187, -2187,   371, -2187, -2187, -2187, -2187, -2187, -2187,
   -2187, -2187, -2187, -2187,  -532,   192, -2187, -2187, -2187, -2187,
   -2187, -2187, -2187, -2187, -1659, -2187, -2187, -2187, -2187, -2187,
   -2187,  -762, -2187, -2187, -2187, -2187, -2187, -2187,    81, -2187,
   -2187, -2187, -2187,  -342,  -781, -1406,  -460, -2187, -2187, -2187,
   -2187, -2187,  -547,  -540, -2187, -2187, -2154, -2187, -2187, -2187,
   -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187,
   -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187,
   -2187, -2187, -2187,  1591, -2187, -2187, -2187, -2187, -2187, -2187,
   -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187,
   -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187, -2187,
   -2187, -2187, -2187
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1393
static const yytype_int16 yytable[] =
{
      72,  2126,   395,  1448,   798,  1710,  1275,  1005,   113,  2293,
     358,  2295,   115,   182,  1615,  1034,   334,   115,   336, -1170,
    1248,  1251,  2144,    69,    70,   115,    69,    70,  2192,   918,
     921,  1234,    69,    70,   332,   118,   683,  1976,   984,    69,
      70,  1392,   356,   639,   255,   800,  2145,  1292,   987,  2146,
     655,   389,  1040,   169,   400,  1087,   170,   406,   259,  1673,
    2147,   412,  1878,   415,   419,    69,    70,  1049,   422,   424,
      69,    70,   434,   756,  1644,   441,   445,  1279,  1928,   448,
     689,   836,   449,   450,   590,  2148,   458,   384,  1237,   171,
     253,   459,   998,  1440,  1441,  1442,   881,   172,  1543,  1675,
    1010,   492,   994,  2149,   359,   473,   477,   482,   483,   487,
     489,   699,  2570,    69,    70,    69,    70,    69,    70,  1562,
     360,  1520,  1565,   349,    59,   541,   493,  1761,  2582,  2583,
    2584,    69,    70,  2586,   542,  2588,  2589,   120,  1762,  2591,
    2592,  2593,   120,  1600,  2595,  2596,  1403,  1293,  2915,  2600,
     120,  2602,  2603,  1404,  2605,  1294,    69,    70,    69,    70,
    1679,   502,  1283,   173,   995,  1700,  1238,  1692,  1680,   640,
    1011,  1527,   914,   557,   460,   565,   882,   570,   574,  1784,
      69,    70,    81,  1797,   750,   591,   534,    60,   610,    69,
      70,   556,  1041,  1035,  1936,  1050,   108,  1645,   684,  1939,
    1943,   999,   115,   403,   751,   653,   837,  1676,   231,  1521,
     115,   296,  1544,  1843,  1844,  1845,   361,   109,   126,   385,
     181,  2113,   174,    69,    70,   232,    69,    70,  1393,   166,
     362,  2115,    61,  2118,   123,  1243,   115,   700,   430,   123,
     115,   271,   690,   124,   125,  2995,   272,   123,   124,   125,
     899,   175,    62,   176,   184,   656,   124,   125,   350,    69,
      70,  2677,   801,  1239,  2680,  1088,   701,    69,    70,  2684,
     802,   803,  2685,  1701,   110,   297,   425,   320,  1977,  1284,
     733,   177,    63,  1674,  2921,   826,  1000,   641,   883,   273,
    1513,  2700,   274,   620,   752,   256,   294,   763,   764,   298,
     115,    69,    70,  1235,    64,   885,   442,   804,    65,   260,
     820,   275,   685,   807,   386,   809,  1879,  1937,   906,   642,
     257,  2916,  1929,    66,   596,   812,   815,   120,   818,   822,
     276,   824,  1285,   440,   261,   120, -1170,   128,   115,  1711,
    1157,   834,   128,   416,   919,   922,    71,   277,   337,  1089,
     128,   844,   846,   278,   178,  1130,   691,  1036,   299,   338,
    1280,   120,  2193,  1131,  1132,   120,   431,   363,   757,   686,
    1308,   111,  1640,  2996,  1042,   898,  1646,  1295,   905,   907,
    2777,   909,  2150,  1286,  1223,   912,   913,   158,  1677,   600,
    1281,  1158,   158,   159,   160,  1113,   927,   929,   159,   160,
     158,   115,   354,   930,   279,   115,   159,   160,   933,   935,
     432,   433,  2787,  1684,  1133,   443,   936,   532,  2997,   937,
     915,   805,   461,   635,   123,   120,   115,   280,  2917,   527,
    1224,  1704,   123,   124,   125,   528,   388,  1693,   947,   948,
     399,   124,   125,  1940,  1944,   952,   953,   954,   955,   956,
     957,   991,   959,  1932,  1702,   961,  1244,  2922,   123,   322,
     900,  1694,   123,   120,  2093,  2114,   888,   124,   125,   983,
     969,   124,   125,  1287,   970,  2116,   112,  2119,   529,   975,
     976,   977,   978,   979,   980,  1743,   981,   426,   477,   985,
     986,   891,  2110,  2839,   916,   304,  1938,  1507,   477,   988,
     444,   613,    67,   411,   735,   530,  1949,  2171,   871,   351,
    1897,   348,   355,  2847,  1950,  2139,   346,  1755,  1901,    69,
      70,  2853,   123,   614,  2856,  2857,   120,   128,  1641,  1428,
     120,   124,   125,  1223,   352,   128,  1117,  1118,   281,  1159,
     615,   300,   427,   437,   901,   644,  1245,    69,    70,   428,
     992,   120,  1313,  1017,  1018,   372,   645,   531,  1223,  1031,
     123,   128,  1134,  1135,  2923,   128,   282,   283,  1276,   124,
     125,  1026,  1444,  2071,   872,   597,  2074,   158,   284,  1224,
    1225,  1558,   285,   159,   160,   158,   646,  1119,   438,   576,
     301,   159,   160,  1989,  1990,   694,  1226,  1227,  1142,    91,
     598,   532,   533,  1098,  1224,   577,  1247,  1052,  1371,  1933,
    1642,   158,  1573,  1078,  1952,   158,  1002,   159,   160,  1582,
    1160,   159,   160,   123,   876,   128,  2094,   123,  1250,   578,
    1314,  1161,   124,   125,   306,   397,   124,   125,  2097,   616,
     601,    69,    70,  1136,  1991,   408,  1277,  1318,   123,   579,
    1093,  2233,  2941,  1289,  1137,  1138,  1216,   124,   125,  1139,
    1643,  1003,   857,   128,  2927,   602,  1162,   736,   737,   580,
     647,   402,  2951,   581,   636,   158,   168,   180,  1953,  1143,
    2776,   159,   160,  1217,   254,  1695,   848,  1030,   464,  1140,
     877,  1934,   302,  1148,   621,  1228,  1229,   118,  1112,   637,
     339,    69,    70,   582,   583,  1539,   365,  1955,  1115,  1340,
     409,  1945,  1167,   158,  1584,   648,   622,   307,  1965,   159,
     160,   404,  1585,  1586,   410,  1319,   128,  1315,   859,  1225,
     128,  1345,  2095,   623,    92,  1120,  1121,  1540,   436,  1962,
    1559,  1935,   118,  1278,  2098,  1226,  1227,  1686,   873,  1515,
    1954,   128,   849,   414,  1225,   447,  3011,  3012,   366,  3014,
    1166,  3016,  3017,    93,  3019,   894,   584,    94,  1903,   367,
    1226,  1227,   738,  1587,   457,  1341,   158,   585,  1246,   617,
     158,  1259,   159,   160,  3000,  1351,   159,   160,  2096,   649,
     850,   851,  1992,  1993,   618,  2176,  3003,  1346,   938,   650,
    2099,   158,   368,   466,  1299,  1316,   695,   159,   160,  1300,
    1301,  1302,  1303,   964,   965,  1304,  1122,  1306,  1342,  1307,
     477,  1309,  1320,   118,  3046,    95,   308,  1123,  1124,  1218,
    3036,   504,   505,   506,   507,   508,   509,   510,   511,   512,
     513,   309,   586,   587,  1228,  1229,  1356,   651,   463,  1002,
     624,  1352,  1767,   468,    69,    70,  1687,    69,    70,  2009,
    2010,  1383,  1125,  1785,   878,  1906,  1907,   939,    96,  1228,
    1229,  1946,  3079,  1994,   470,  1058,  1059,    97,    98,  1789,
     126,  3059,  1793,   514,  1995,  1996,  2306,   895,  1253,   490,
    1219,   503,  1254,  1799,  1003,   852,  1370,   515,  1374,  1963,
    1321,   471,   867,  1375,  1376,   525,  1377,  1379,  1381,  1382,
    2011,   310,  1357,   625,  2029,  2030,   537,  1220,   588,  1997,
    1688,  1588,  1589,  1395,  1396,   126,   853,  1496,  2018,  1786,
    1400,  1401,   451,   539,  1060,  1947,  2019,  2020,  2453,  1144,
    1061,   608,   263,  1803,  1908,  1790,   940,   734,  1794,  1343,
    1407,  1408,  1409,  1410,  1411,  2461,  1413,   593,  1415,  1800,
     761,   762,   626,  1964,   896,  2031,  1151,  2296,   594,  1062,
    1255,  1347,   627,   264,  1423,  1424,  1425,  2352,  1427,   477,
    1429,   369,  1430,   665,  2480,  1434,  1501,  2021,  1620,   418,
    1898,   595,   817,  1063,  2215,   118,  1256,  2365,   567,  1497,
    2389,  2390,  1590,  1433,   609,  1435,   126,  2375,   612,  1804,
    2378,   323,  1064,  1591,  1592,  1437,  1621,  2385,  1593,  1335,
    1145,  1807,   477,  1445,  1648,  1353,  1337,  1065,  1447,  1498,
     666,   629,  2422,   312,  1066,  2425,   886,   889,   892,   632,
     742,   902,  1067,  2433,   941,  1460,  2436,  1152,  1594,  1464,
     942,  2391,  1622,   313,  1649,   314,   265,  1650,  2012,  2013,
    1623,    91,  1506,  1508,  1511,   604,  1624,  1257,   631,  1712,
    1516,  1778,  1779,   266,  1713,  1522,   634,  2534,  2535,  2536,
    2537,  2538,  2539,  2540,  2541,  2542,  1358,  1808,  1625,  1651,
    1525,  1811,  1349,  1577,    69,    70,   452,   453,  1714,  1715,
    1336,  1716,  1717,  1787,  1068,   654,  2543,  1338,  1815,  1535,
    1626,   661,  1718,  2032,  2033,   660,  1821,   341,  1499,  1791,
    1652,  1681,  1795,  1653,  1069,   827,  1719,  1720,  1627,  1070,
     663,  1071,  1502,  1801,  1721,  2022,  2023,  1722,   267,  2014,
     682,  1682,   688,  1829,  1833,   454,    69,    70,   693,   373,
    2015,  2016,   667,   697,   605,  1723,   698,  1812,  1072,  1073,
     374,   743,   324,   828,  1724,  1725,  1628,  1074,  1726,   325,
     702,   326,  2043,  1350,  1816,  1500,   732,  1258,   126,  1956,
    2044,  2045,  1822,  1805,   268,  2017,   731,  1678,  1075,   315,
     375,   606,   740,  1503,  2034,   269,    92,   754, -1392,  2392,
    2393,   455,  1850,   744,   745,  2035,  2036,  1629,  1703,  1830,
    1834,  2961,    69,    70,    69,  1378,  2024,  1709,  1780,  1781,
    1504,   829,  1630,   759,  1957,    93,   421,  2025,  2026,  2292,
     342,  2046,  2027,   760,  1738,  1631,  1739,    69,    70,  1727,
    2037,  1740,  1741,  1742,   765,   934,  1076,    69,    70,   746,
    1782,  1748,   316,   799,  1749,  1654,  1751,   287,  1605,  2054,
    1510,  1809,  2028,    69,    70,  2087,  1632,  2055,  2056,    69,
      70,   405,    82,  1753,   376,  1754,  2525,   811,   926,  1633,
    2394,  1634,  1635,  1758,  1759,  1386,  1387,    95,  1958,  1655,
     825,  2395,  2396,   823,    69,    70,  2398,  2399,  1765,  1766,
    1728,   317,   477,  1768,  1769,   832,  1729,   484,   747,    83,
    1771,   318,  1772,   833,   343,  1774,  2868,  1775,  2057,   377,
      69,    70,  1636,  1730,   344,   835,  2397,   839,  1399,   841,
      96,  1813,  1854,   847,  1731,   748,  1606,  1574,  1917,    97,
      98,   830,   855,  2720,  1583,  2893,   875,  2400,  1817,  2736,
     880,   288,  1959,  1866,  2741,   925,  1823,  1108,    69,    70,
      69,  1459,   669,  1846,   904,  1732,  1733,   289,  1847,  2569,
     910,  2955,  1848,   911,  1849,  1116,  1860,  2628,  1852,  2047,
    2048,  1389,  1390,  1831,  1835,   485,  2637,    84,  1734,   924,
    2972,   931,  2587,   378,  1858,  2646,  1861,   932,  1863,  1864,
    1865,  1867,   945,   379,  1869,  1870,   290,  1872,  1873,   946,
    1875,  1055,  1877,   949,  1056,  1057,  1918,  2765,   950,  1885,
    1607,  1608,    69,    70,  2090,   380,  1891,  1904,  1746,  1747,
    1892,  1893,  1894,   381,  1735,  1609,    85,    86,  2132,  2133,
     477,  1899,   951,   670,  1902,  1924,    69,    70,  1262,   972,
     973,   382,  1912,  1290,  1913,  2953,  2954,  1915,   958,  2957,
    2049,  2959,   116,   291,   960,   494,  2058,  2059,   962,   963,
     703,  2050,  2051,   704,  2970,  2971,  2052,   292,   966,  2975,
    2976,  1610,   486,  2979,    87,    88,   968,   671,  2980,  2981,
     474,    74,   705,  2407,  2408,  2401,  2402,    75,  1551,  1552,
    1919,  1920,   118,  1967,   476,  1968,  2053,   989,  1969,  1970,
    1006,  1971,   990,  1972,  1016,  1921,   997,    69,    70,  1974,
    1008,  1021,  1015,  1975,  1022,   101,    69,    70,   706,  1023,
     672,  3052,  1981,  1025,   707,   102,  1013,  1028,  3056,  1033,
      76,    89,   103,   495,  2409,  1044,  3021,  2060,  1045,  3022,
     119,    69,    70,  2136,  3025,   813,  2706,  1038,  2061,  2062,
    1047,  1922,  1372,  2063,   842,  2866,  3029,    77,   496,   497,
    2862,  3032,  1048,  2865,  1053,  2867,  2403,   498,  1079,  1081,
    1080,  2879,  1083,  1091,  1085,   708,  2884,  2404,  2405,  1094,
    1096,  2880,  2881,  2064,  2086,  3093,  2755,  3094,  1657,   499,
      69,    70,  1105,  2759,  1100,   474,   475,   476,  2895,   500,
    1106,  1107,  1109,  2088,  2089,  2091,   121,  1110,  1099,    78,
      69,    70,  2406,  1612,  1613,  1111,  1417,  1114,  1658,  1126,
    1127,  1659,   104,   814,  1660,  2101,  1128,  1129,  1141,  2104,
    1153,  1155,   843,  1156,  1231,  1163,  3074,  1164,  1165,  1233,
    3077,    69,    70,  2092,  1612,  1613,    69,    70,  2109,  1612,
    1613,  1222,  1241,  1661,    79,  2135,  2137,  1242,  1296,  2786,
    3088,  2788,  1298,  2789,  1310,  2143,  2790,  1297,  2791,  2154,
    1312,   105,  1323,  1324,  3095,   126,  2160,  3096,  3097,  1325,
     127,  1326,  2410,  2411,  1662,  1327,  1328,  1663,  1330,  1355,
    2165,  1329,  2486,  1331,  1332,  2167,  1333,  1334,  1360,  2169,
    1361,  2172,  2173,  1362,  2175,  2177,  2178,   106,  2181,   709,
    1363,  2184,  2185,  2186,  2187,  2188,  2189,  2190,  2191,  2194,
    2196,  2197,  1364,  1365,  1366,  2199,  2200,  2201,  2202,    69,
      70,  2138,  1612,  1613,  1367,  2208,  2209,   710,   711,  2211,
    2212,  2213,  1368,  1369,  1384,  2216,  2217,  2528,  1385,   712,
    1388,  1391,  1405,   713,  1397,  1398,  1402,  1406,  2220,  2221,
    1412,  2222,  2223,  2412,  1414,  1416,  1418,  1419,  1450,  1305,
    1431,  1432,  1451,  1452,  2413,  2414,  1311,  1456,   333,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,  2549,  1457,  2415,
    1454,  1458,  1455,  1462,  1463,  1526,  1518,  1528,  1512,  1664,
    1523,  1533,  2902,  1529,  1263,  1532,  2268,  1514,  1536,  1537,
    1538,  1546,  1264,  2261,  1547,  2262,  2263,  1548,  1549,  2264,
    1265,  1555,  1553,   857,  2266,  2269,  1554,  2271,  2272,  2273,
    1556,  2274,  2275,  1665,  2277,  3051,  2278,  2279,  1266,  2281,
    2282,  1557,  2284,   491,  2286,  1267,  1563,  1564,  1595,  1706,
    1566,  1205,  2290,   516,  1567,  1569,  1571,  1579,  1581,  1596,
    2294,  1597,  1598,  1666,  1601,  2299,  2300,  1206,  1602,  1603,
    1268,  2302,  1639,   517,  1619,  1647,  1207,  2318,  1616,  1656,
    2305,  1269,  1667,  1670,  1671,   858,  1617,  1208,  2324,   859,
     518,  1689,  2329,  1691,  1618,  1638,  1672,  1420,  1668,  1669,
    1685,  1696,  1707,   519,  1422,  1697,  1698,  1752,  1690,  1708,
    1737,  1699,  1745,  1705,   554,  2333,   561,   564,  1756,   569,
     573,  1760,  1757,  1209,  1763,   520,  1270,   860,   861,   521,
    1764,  1770,   862,  1773,  1271,  1777,  1776,  2342,  2343,  1798,
    1819,  1820,  2345,  1825,   522,  1210,  1826,  1827,  2347,  1438,
    1439,  1828,   658,  1837,  1443,  1838,  1839,  1446,  1840,  1841,
    1842,  1925,  1855,  1856,  1868,  1871,  1857,  1874,  1876,  1453,
    1862,   674,   680,   863,  1881,  1886,  1887,   687,  1888,  1900,
    1914,   692,  1272,  1905,  -492,  1916,  1951,  1926,  1961,  1948,
    1960,   523,  1973,  1966,  1927,  1273,  1931,  1941,  1979,  2704,
    2705,  1211,  1942,  2708,  2709,  1980,  1985,  2712,  2713,  2004,
    2007,  2065,  2038,  1274,  2040,  2042,  2066,  2067,  2068,  2072,
    2073,  2111,  2075,  2076,    69,    70,  2077,  2080,   864,  2083,
    2100,  2103,   865,  2108,  2112,  2120,  2117,  2121,   808,  2122,
     116,   810,  1212,  2123,  2124,  2125,  2127,  2128,  2129,  2134,
    1882,  1883,   819,  2152,  2130,  2448,  2449,  2131,  2451,   866,
    2157,  2168,  2170,   867,  2763,  2179,  2174,  2205,  2206,  2182,
    1213,  2183,   840,  2198,  2207,   868,  2218,  2219,  2462,  2463,
    2464,  2465,  2466,  2467,  2468,  2469,  2470,  2985,  2224,  2225,
    2226,  2552,  2227,  2228,  2229,  2369,  2230,  1604,  2231,  2232,
    2870,  2234,  2476,  2235,  2478,  2236,  2750,  2237,  2238,  2239,
    2416,  2240,  2241,  2242,  1214,  2243,  1215,  2244,  2245,   971,
    2246,  2485,   477,  2247,  2248,  2249,  2250,  2489,   119,  2251,
    2252,  2253,  2254,  2427,  2255,  2256,  2492,  2493,  2494,  2495,
    2496,  2497,  2498,  2499,  2500,  2501,  2257,  2260,  2504,  2505,
    2506,  2507,  2508,  2509,  2510,  2511,  2512,  2513,  2514,  2515,
    2258,  2518,  2259,  2519,  2520,  2521,  2276,  2280,  2871,  2283,
    2285,  2287,  2289,  2301,  2344,  2985,  2307,   477,  2529,  2308,
    2309,  2310,  2311,  2346,  2349,  2350,  2351,  2353,  2354, -1188,
    2355,   967,  2360,  2358,   121,  2361,  2362,  2366,  2367,  2728,
    2368,  2370,   974,  2371,  2372,  2376,  2377,  2872,  2379,  2380,
    2381,   982,  2382,  2386,  2387,  2873,  2388,  2417,  2418,  2419,
    2423,  2851,  2424,  2874,  2426,  2428,  2855,  2429,  2430,  2544,
    2434,  2545,  2435,  2546,  2437,  2548,  2439,   477,  2550,  2440,
    2551,  2442,  2443,  2084,  2445,  2555,  2556,  2452,  2557,  2558,
    2454,  2560,  2457,  2562,  2575,  2460,  2471,  2472,  2875,  2473,
    2567,  2474,  2568,  2475,  2522,  2890,  2571,  2479,   127,  2573,
    2517,  2523,  2102,  2526,  2527,  2530,  2106,  2107,  2533,  2561,
    1019,  1020,  2553,  2554,  2559,  2563,  2565,  2876,  2572,  2576,
    2577,  2578,  2579,  1024,  2609,  2580,  2607,  2612,  1027,  2610,
    2615,  2618,  2619,  2621,  2629,  2140,  2623,  1039,  2624,  2625,
    2630,  2878,  2631,  1853,  2611,  2632,  2156,  2633,  2634,  2638,
    2639,  3037,  2640,  2641,  2642,  2161,  2162,  2643,  2647,  2648,
     944,  2649,  2656,  2659,  2667,  2670,  2166,  2673,  2674,  2675,
    2678,  2683,  2687,  2703,  2761,  3067,  2767,  2768,  2769,  2770,
    2773,  1884,  2775,  2999,  2778,  2780,  1889,  2781,  2782,  2877,
    2783,  2785,  2676,  2792,  2794,  2799,  1895,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,  2806,  2815,  1101,  1102,  1103,
    1104,  2824,  2830,  2834,  2840,  2848,  2982,  2852,  2860,  3038,
    2892,  2903,  3034,  2904,  2906,  2907,  2908,  2909,  2681,  2910,
    2911,  2912,  2914,  1339,  2920,  2926,  2952,  2958,  2963,  2688,
    2689,  2690,  2691,  2692,  2693,  2694,  2695,  2696,  2697,  2698,
    3042,  3044,  2962,  2964,  2965,  2701,  2966,  1542,  2967,   477,
     477,  2969,  2974,   477,   477,  2989,  2992,   477,   477,  2714,
    2715,  2716,  2717,  2718,  2719,  2990,  2721,  2722,  2723,  2991,
    2993,  2994,  2737,  2738,  2739,  2740,  3001,  2742,  2743,  2744,
    2745,  2746,  2747,  3004,  2749,  1599,  3015,  2753,  2754,  3023,
       0,  3026,  3039,  3027,  3030,     0,  3040,  3047,  3050,     0,
    3054,  3061,  3062,  3068,  3076,  3087,  1261,   234,  3080,  3081,
    3083,  2762,  3089,     0,   477,  2764,  3090,  3091,  3092,  2766,
       0,     0,     0,     0,  2771,  2772,     0,  2774,     0,     0,
     235,   766,   767,   236,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,     0,     0,     0,     0,     0,     0,     0,     0,
     237,     0,     0,  1561,     0,     0,     0,   238,  2795,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   239,   240,
     768,     0,     0,     0,     0,   241,   769,     0,     0,     0,
       0,     0,     0,     0,     0,   770,     0,   771,     0,     0,
       0,     0,   772,  2155,     0,   773,     0,     0,     0,     0,
       0,   774,     0,     0,   242,   775,     0,     0,     0,     0,
       0,     0,   776,     0,     0,     0,     0,     0,     0,     0,
     777,     0,   243,     0,     0,     0,     0,     0,     0,   778,
    2842,     0,     0,     0,  2844,     0,     0,     0,     0,     0,
     244,   245,     0,     0,  2845,  2846,     0,   246,   779,     0,
    2850,   477,     0,     0,  2204,  2854,   477,     0,     0,     0,
    2210,  2859,     0,     0,  2863,  2864,     0,     0,     0,  1421,
     780,     0,   247,     0,     0,     0,     0,     0,     0,     0,
       0,  1426,     0,     0,     0,     0,  2882,  2883,   781,  2885,
    2886,  2887,  2888,  2889,     0,   477,  2891,     0,     0,     0,
    2894,   782,   783,     0,     0,     0,   714,   715,   716,     0,
       0,     0,     0,  2905,  2456,   248,     0,     0,  1436,     0,
       0,     0,     0,  2913,     0,     0,   784,     0,     0,     0,
       0,     0,     0,   717,     0,     0,     0,     0,     0,     0,
       0,     0,  2928,     0,     0,     0,   718,     0,     0,     0,
       0,   785,  2481,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   719,     0,  2265,   786,     0,   787,     0,  2270,
     249,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   788,   250,  2940,     0,     0,   789,     0,  2944,
       0,  2946,     0,     0,   720,   790,     0,  2949,     0,     0,
    2291,     0,     0,   791,   721,     0,  2297,     0,  1531,     0,
       0,  2956,     0,     0,   251,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   792,     0,   722,     0,     0,     0,
    2973,     0,     0,  2313,  2977,   723,     0,  3010,   793,   794,
    2320,   795,  1982,  1983,  1984,     0,     0,     0,     0,     0,
       0,     0,  1986,  1987,  1988,   724,     0,     0,     0,     0,
    2998,  1999,  2000,  2001,     0,     0,  2002,  2003,     0,  2005,
    2006,     0,     0,     0,     0,     0,     0,   725,     0,     0,
       0,     0,   796,     0,     0,     0,     0,     0,     0,     0,
       0,  3013,     0,     0,  1683,     0,  3018,     0,  3020,     0,
       0,     0,     0,  2078,  2079,  3024,     0,  2081,  2082,     0,
       0,     0,     0,     0,   115,     0,  3028,     0,   726,     0,
       0,  3031,     0,   727,     0,     0,     0,     0,     0,   116,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     728,     0,     0,   729,  3049,  3041,  3043,     0,     0,  1744,
       0,   117,     0,     0,     0,     0,     0,     0,     0,  1750,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   118,
       0,  3053,  1998,     0,     0,  3055,  3070,     0,  3057,  3073,
       0,     0,     0,     0,  2008,     0,     0,     0,  3063,  3064,
    3065,  3066,     0,     0,     0,  2446,     0,     0,     0,     0,
    3075,     0,     0,     0,  3078,     0,  2069,  2070,     0,     0,
       0,  3082,     0,  3084,     0,  2459,     0,   119,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   120,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2482,  2483,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2484,     0,     0,     0,     0,  2487,  2488,
       0,     0,     0,  2490,  2491,     0,     0,     0,     0,     0,
    1851,     0,     0,   121,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1859,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2524,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2531,     0,   122,     0,  1890,     0,
       0,     0,     0,     0,     0,     0,   123,  2756,  1896,     0,
       0,     0,     0,     0,     0,   124,   125,     0,     0,     0,
       0,     0,   126,     0,     0,  1911,     0,   127,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1923,     0,     0,
       0,     0,  1930,     0,     0,     0,     0,  2547,     0,     0,
      69,    70,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   116,     0,  2564,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   328,     0,     0,
       0,     0,  2581,     0,     0,     0,     0,  2585,     0,     0,
       0,     0,     0,  2590,     0,     0,   118,     0,  2594,   128,
       0,     0,  2597,     0,  2599,     0,  2601,     0,     0,  2604,
       0,  2606,     0,     0,     0,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   119,     0,     0,     0,     0,   158,
       0,  2348,     0,     0,     0,   159,   160,     0,     0,     0,
       0,     0,     0,     0,  2356,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2359,     0,  2085,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     572,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2105,   116,     0,     0,     0,     0,
     121,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2896,     0,     0,
       0,  2901,     0,     0,     0,  2141,     0,     0,  2142,     0,
       0,     0,  2153,     0,     0,   118,  2444,     0,  2158,  2159,
       0,     0,     0,   329,     0,     0,  2163,     0,     0,     0,
       0,     0,     0,  2164,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   391,     0,     0,     0,     0,     0,   126,
       0,   392,  2357,     0,   127,     0,  2748,     0,     0,     0,
    2363,  2364,     0,   119,     0,   330,     0,     0,     0,     0,
    2373,  2374,  2760,     0,  2203,     0,     0,     0,     0,     0,
    2383,  2384,     0,     0,     0,     0,  2214,     0,     0,     0,
       0,     0,     0,     0,     0,  2420,  2421,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2431,  2432,     0,     0,
       0,     0,     0,  2438,  2779,     0,     0,     0,     0,     0,
    2968,     0,     0,  2441,     0,     0,     0,     0,     0,   121,
       0,     0,     0,   331,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2988,     0,     0,     0,  2793,     0,
       0,     0,     0,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,     0,     0,     0,     0,     0,     0,     0,  2267,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   126,     0,
       0,     0,     0,   127,     0,     0,     0,     0,     0,     0,
       0,     0,  2288,     0,     0,     0,  2837,     0,     0,     0,
       0,     0,  2841,     0,     0,     0,  2843,     0,  2298,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2303,  2849,  2304,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2312,     0,     0,  2314,  2315,  2316,  2317,
    2319,     0,  2321,     0,     0,  2322,     0,     0,     0,     0,
    2323,  2325,  2326,  2327,  2328,  2330,     0,  2331,  2332,  3060,
       0,     0,  2334,  2335,  2336,  2337,     0,     0,  2338,  2339,
       0,     0,     0,  2613,  2340,  2341,   393,  2899,  2900,   394,
       0,     0,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2651,  2652,  2653,  2654,  2655,     0,  2657,
    2658,     0,     0,     0,  2662,  2663,  2664,  2665,  2666,     0,
    2668,  2669,     0,     0,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,     0,     0,     0,     0,  2614,     0,     0,  2960,
       0,     0,     0,     0,     0,     0,  2616,  2617,  2447,     0,
       0,  2450,     0,     0,     0,     0,     0,  2620,     0,     0,
       0,     0,  2455,     0,     0,  2458,  2622,     0,     0,     0,
    2626,  2627,     0,     0,     0,     0,     0,     0,     0,  2635,
    2636,     0,     0,     0,     0,     0,     0,     0,  2644,  2645,
       0,     0,     0,     0,  2650,     0,     0,  2477,     0,     0,
       0,     0,     0,     0,  2660,  2661,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2671,     0,  2672,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2724,
       0,     0,     0,     0,     0,     0,     0,     0,  3033,     0,
    2725,     0,     0,  2516,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  3045,     0,     0,     0,  2532,     0,  1263,  2726,
    2796,     0,     0,     0,     0,     0,  1264,     0,     0,  2801,
    2802,  2803,  2804,  2805,  1265,  2807,  2808,     0,  2810,  2811,
    2812,  2813,  2814,     0,  2816,  2817,     0,  2819,  2820,  2821,
    2822,  2823,  1266,  2825,  2826,     0,  2828,  1910,  3071,  1267,
       0,     0,  2727,     0,     0,     0,  2831,  2832,     0,     0,
       0,     0,   116,     0,     0,     0,     0,  2835,     0,  3085,
       0,     0,  3086,     0,  1268,     0,     0,     0,     0,     0,
       0,  2566,     0,     0,     0,  1269,     0,     0,     0,     0,
       0,     0,   116,     0,     0,     0,  2574,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2797,  2598,     0,  2798,     0,     0,  2800,
    1270,     0,     0,     0,     0,     0,  2608,     0,  1271,  2809,
       0,   544,   545,   675,     0,   116,     0,   546,  2818,     0,
     119,     0,     0,     0,     0,     0,     0,  2827,     0,     0,
       0,     0,     0,     0,  2829,     0,     0,     0,     0,     0,
     547,   548,     0,     0,     0,  2833,     0,     0,     0,     0,
     119,  2836,     0,     0,     0,     0,  1272,   676,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1273,
       0,     0,     0,     0,     0,  2931,     0,     0,     0,     0,
       0,     0,     0,     0,  2933,     0,   121,  1274,     0,     0,
       0,     0,     0,  2935,     0,  2936,     0,     0,  2728,  2938,
    2729,     0,     0,   119,     0,     0,     0,     0,     0,     0,
    2679,     0,     0,  2682,     0,     0,   121,     0,     0,   677,
       0,  2686,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   549,     0,     0,     0,     0,     0,  2699,     0,     0,
    2702,     0,     0,     0,     0,     0,  2707,     0,     0,  2710,
    2711,   550,     0,     0,     0,     0,  2730,     0,     0,     0,
     127,     0,     0,     0,     0,     0,     0,     0,     0,   121,
       0,     0,     0,     0,     0,     0,   551,  2929,     0,     0,
       0,     0,     0,     0,  2930,     0,     0,  2757,  2758,   678,
     127,     0,     0,  2932,     0,     0,  3005,     0,  3006,     0,
    3007,     0,  2934,  3008,     0,  3009,     0,     0,  2937,     0,
       0,     0,  2939,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2784,     0,     0,   127,     0,   552,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,     0,     0,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   679,   553,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2838,
       0,     0,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
    1168,  1169,  1170,  2858,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2869,     0,     0,     0,     0,     0,
       0,  1465,  1466,  1467,     0,     0,     0,     0,     0,     0,
       0,  1171,  1172,     0,     0,  1173,     0,     0,  1174,     0,
       0,     0,     0,     0,     0,  1175,     0,     0,     0,  1176,
       0,     0,  1468,  1469,     0,     0,  1470,     0,     0,  1177,
    1178,     0,   116,  1471,     0,     0,  1472,  1179,  1180,     0,
    1473,     0,  2919,     0,     0,     0,  2925,     0,  1181,     0,
    1474,  1475,     0,     0,     0,  1182,     0,     0,  1476,     0,
       0,     0,     0,  1183,     0,     0,     0,  1184,  1185,  1477,
       0,  1186,   118,     0,   116,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1478,  1479,
       0,  1187,  1480,     0,     0,     0,     0,     0,     0,     0,
       0,  2942,  2943,     0,  2945,     0,     0,     0,     0,  2947,
    2948,     0,  1481,  1188,   118,  2950,     0,     0,     0,     0,
     119,     0,     0,     0,     0,     0,     0,   116,     0,     0,
       0,     0,     0,     0,  1482,     0,     0,     0,     0,     0,
       0,     0,  1189,     0,     0,     0,     0,     0,     0,  2978,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     116,     0,   119,  1483,     0,     0,     0,     0,     0,  1190,
     559,     0,     0,  1484,     0,     0,     0,     0,     0,     0,
       0,  3002,     0,     0,     0,     0,   121,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1530,  1191,     0,  1192,   116,     0,     0,     0,     0,  1193,
    1194,     0,     0,     0,     0,   119,     0,     0,     0,     0,
       0,     0,  1485,     0,  1486,  1195,  1196,     0,   121,     0,
    1487,  1488,     0,     0,     0,     0,     0,  1197,  1198,     0,
       0,     0,     0,     0,     0,     0,     0,  1489,   119,     0,
       0,     0,     0,     0,     0,   126,     0,     0,     0,  1490,
     127,     0,     0,     0,     0,     0,     0,  1199,     0,  1200,
       0,     0,     0,     0,     0,     0,  3048,     0,     0,     0,
       0,   121,  1201,     0,  1202,     0,     0,     0,  1491,     0,
    1492,  1203,   119,     0,  3058,     0,     0,   126,     0,     0,
       0,  1493,   127,     0,     0,     0,     0,     0,  3069,     0,
       0,  3072,  1494,     0,   121,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   563,  1204,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1495,     0,     0,     0,
       0,     0,     0,     0,     0,   127,     0,     0,   121,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,     0,   127,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   560,
       0,     0,   127,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,     0,     0,     0,     0,     0,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,     1,
       0,     0,     2,     0,     0,     3,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     4,
       0,     0,     0,     0,     5,     6,     0,     0,     0,     7,
       8,     9,     0,     0,     0,     0,     0,     0,     0,    10,
       0,     0,     0,     0,     0,     0,    11,     0,    12,    13,
       0,     0,     0,     0,     0,     0,     0,     0,    14,    15,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    16,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    17,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    18,     0,     0,
       0,    19,     0,     0,     0,    20,     0,     0,     0,    21,
      22,     0,     0,     0,     0,    23,    24,     0,     0,    25,
       0,     0,     0,     0,     0,    26,     0,     0,     0,     0,
       0,    27,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    28,     0,     0,     0,    29,    30,    31,     0,
       0,    32,    33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    34,     0,     0,     0,    35,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    36,     0,    37,    38,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    39,     0,    40,     0,     0,   186,     0,     0,   187,
      41,     0,   188,     0,    42,     0,     0,     0,    43,     0,
      44,     0,    45,     0,     0,     0,     0,    46,     0,     0,
       0,     0,   189,     0,     0,     0,   190,   191,   192,     0,
       0,     0,     0,    47,     0,     0,   193,     0,   194,    48,
       0,     0,     0,   195,     0,   196,   197,   198,     0,     0,
       0,     0,     0,   199,     0,   200,     0,    49,    50,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      51,     0,    52,     0,     0,     0,     0,     0,     0,    53,
       0,     0,    54,    55,     0,     0,     0,     0,     0,     0,
     201,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   202,     0,
       0,     0,     0,    56,     0,     0,     0,   203,     0,   204,
     205,    57,   206,   207,     0,     0,   208,     0,  1146,     0,
     209,     0,   210,  1147,     0,     0,     0,     0,   211,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   212,   213,
       0,     0,     0,   214,     0,     0,     0,     0,     0,     0,
       0,   215,  1575,     0,     0,   216,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   217,     0,   218,     0,     0,     0,     0,
       0,     0,   219,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   220,     0,   221,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   222,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   223,   224,     0,     0,     0,     0,
       0,     0,     0,     0,   225,     0,     0,     0,     0,     0,
       0,     0,   226,     0,     0,     0,     0,     0,   227,     0,
     228,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   229,     0,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,  1576
};

static const yytype_int16 yycheck[] =
{
       3,  1660,    55,  1033,   312,     5,   787,   535,    11,  1892,
      26,  1894,     4,    16,  1169,     4,    37,     4,     5,     0,
     782,   783,    27,     3,     4,     4,     3,     4,     5,     4,
       4,    16,     3,     4,    37,    59,     5,    20,   491,     3,
       4,   103,    45,    21,    64,     4,    51,     5,   501,    54,
      15,    54,     4,    45,    57,    18,    48,    60,    64,    27,
      65,    64,    48,    33,    67,     3,     4,   146,    71,    72,
       3,     4,    75,     5,    28,    78,    79,     5,    21,    82,
       5,   163,    85,    86,   238,    90,    89,     4,    41,    81,
      69,    94,    83,  1021,  1022,  1023,    35,    89,   181,    37,
     215,   122,   215,   108,   120,   108,   109,   110,   111,   112,
     113,     4,  2298,     3,     4,     3,     4,     3,     4,  1136,
     136,    16,  1139,    42,    69,   188,   129,     5,  2314,  2315,
    2316,     3,     4,  2319,   197,  2321,  2322,   129,    16,  2325,
    2326,  2327,   129,  1160,  2330,  2331,     4,   105,    33,  2335,
     129,  2337,  2338,    11,  2340,   113,     3,     4,     3,     4,
     291,   164,    16,   155,   277,    37,   119,     5,   299,   147,
     285,  1099,     4,   194,     5,   196,   115,   198,   199,  1326,
       3,     4,   317,  1330,    99,   339,   189,    11,   209,     3,
       4,   194,   144,   182,    28,   274,    41,   151,   167,    21,
      21,   192,     4,     5,   119,   226,   288,   145,    88,   104,
       4,     5,   295,  1360,  1361,  1362,   232,    62,   242,   136,
      67,    21,   214,     3,     4,   105,     3,     4,   290,    34,
     246,    21,    56,    21,   226,    16,     4,   130,   209,   226,
       4,    15,   167,   235,   236,   209,     4,   226,   235,   236,
      18,   243,    76,   245,   158,   220,   235,   236,    64,     3,
       4,  2447,   221,   216,  2450,   228,   269,     3,     4,  2455,
     229,   230,  2458,   145,   119,    69,     4,   315,   261,   133,
     283,   273,   106,   251,    33,   338,   277,   265,   227,    47,
    1071,  2477,    50,   212,   209,   315,   257,   300,   301,    93,
       4,     3,     4,   288,   128,    69,    83,   266,   132,   315,
     331,    69,   281,   316,   231,   318,   302,   151,   251,   297,
     340,   206,   265,   147,    64,   328,   329,   129,   331,   332,
      88,   334,   186,   221,   340,   129,   317,   329,     4,   339,
      13,   344,   329,   313,   319,   319,   326,   105,   335,   312,
     329,   354,   355,   111,   346,     5,   281,   346,   152,   346,
     288,   129,   339,    13,    14,   129,   337,   383,   300,   338,
     823,   216,    27,   337,   326,   378,   330,   335,   381,   382,
    2566,   384,   387,   237,    66,   388,   389,   379,   326,    64,
     318,    64,   379,   385,   386,   703,   399,   400,   385,   386,
     379,     4,   216,   406,   162,     4,   385,   386,   411,   412,
     381,   382,  2598,  1194,    64,   192,   419,   381,   382,   422,
     252,   380,   253,    64,   226,   129,     4,   185,   313,   209,
     112,  1212,   226,   235,   236,   215,   326,   275,   441,   442,
     326,   235,   236,   265,   265,   448,   449,   450,   451,   452,
     453,   110,   455,    27,   326,   458,   237,   206,   226,    69,
     228,    27,   226,   129,  1619,   265,    69,   235,   236,   490,
     473,   235,   236,   327,   477,   265,   321,   265,   258,   482,
     483,   484,   485,   486,   487,  1247,   489,   215,   491,   492,
     493,    69,  1647,  2679,   326,     5,   330,   233,   501,   502,
     277,    47,   326,   326,     5,   285,   291,   251,    64,   315,
    1438,    93,   326,  2699,   299,  1670,     4,  1279,  1446,     3,
       4,  2707,   226,    69,  2710,  2711,   129,   329,   183,   982,
     129,   235,   236,    66,   340,   329,    13,    14,   296,   212,
      86,   335,   270,   151,   312,    38,   327,     3,     4,   277,
     209,   129,    41,   556,   557,     4,    49,   337,    66,   580,
     226,   329,   212,   213,   313,   329,   324,   325,    41,   235,
     236,   574,  1025,  1590,   130,   315,  1593,   379,   336,   112,
     262,    16,   340,   385,   386,   379,    79,    64,   196,    46,
     384,   385,   386,    13,    14,     4,   278,   279,    92,    29,
     340,   381,   382,   656,   112,    62,   288,   610,   312,   183,
     265,   379,  1144,   634,   187,   379,   151,   385,   386,  1151,
     293,   385,   386,   226,    64,   329,   113,   226,   136,    86,
     119,   304,   235,   236,    60,   257,   235,   236,   113,   185,
     315,     3,     4,   293,    64,   299,   119,    41,   226,   106,
     653,  1798,  2838,   319,   304,   305,     4,   235,   236,   309,
     315,   196,    64,   329,  2794,   340,   339,   168,   169,   126,
     163,     0,  2858,   130,   315,   379,    14,    15,   251,   173,
    2563,   385,   386,    31,    22,   251,    64,     4,    32,   339,
     130,   265,    30,   746,    47,   377,   378,    59,   701,   340,
      38,     3,     4,   160,   161,   173,    53,  1488,   711,    64,
       5,    27,   765,   379,     5,   208,    69,   143,  1499,   385,
     386,    59,    13,    14,     4,   119,   329,   216,   130,   262,
     329,    64,   219,    86,   164,   212,   213,   205,    76,    27,
     175,   315,    59,   216,   219,   278,   279,   142,   304,   233,
     323,   329,   130,     5,   262,     5,  2942,  2943,   105,  2945,
     763,  2947,  2948,   193,  2950,    12,   223,   197,     4,   116,
     278,   279,   273,    64,     4,   130,   379,   234,   781,   325,
     379,   784,   385,   386,  2914,    64,   385,   386,   275,   282,
     168,   169,   212,   213,   340,   251,  2926,   130,    31,   292,
     275,   379,   149,     5,   807,   294,   215,   385,   386,   812,
     813,   814,   815,     4,     5,   818,   293,   820,   173,   822,
     823,   824,   216,    59,  3010,   255,   252,   304,   305,   177,
    2984,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   267,   299,   300,   377,   378,    64,   340,     4,   151,
     203,   130,  1305,     5,     3,     4,   251,     3,     4,    13,
      14,   914,   339,    64,   304,    24,    25,   100,   298,   377,
     378,   187,  3058,   293,     5,     4,     5,   307,   308,    64,
     242,  3035,    64,   126,   304,   305,  1916,   134,    37,   216,
     238,     4,    41,    64,   196,   273,   899,    69,   901,   187,
     294,    32,   304,   906,   907,   128,   909,   910,   911,   912,
      64,   337,   130,   266,    13,    14,   317,   265,   375,   339,
     315,   212,   213,   926,   927,   242,   304,    69,     5,   130,
     933,   934,     4,   188,    63,   251,    13,    14,  2093,    92,
      69,     5,    93,    64,   103,   130,   179,   285,   130,   304,
     953,   954,   955,   956,   957,  2110,   959,    69,   961,   130,
     298,   299,   315,   251,   211,    64,    92,  1895,     5,    98,
     119,   304,   325,   124,   977,   978,   979,  1994,   981,   982,
     983,   328,   985,    45,  2139,  1006,    31,    64,    41,   135,
    1443,    94,   330,   122,  1756,    59,   145,  2014,    34,   141,
      13,    14,   293,  1006,    68,  1008,   242,  2024,    15,   130,
    2027,   227,   141,   304,   305,  1018,    69,  2034,   309,    92,
     173,    64,  1025,  1026,    22,   304,    92,   156,  1031,   171,
      92,   315,  2049,    47,   163,  2052,   374,   375,   376,   258,
       5,   379,   171,  2060,   277,  1048,  2063,   173,   339,  1052,
     283,    64,   105,    67,    52,    69,   207,    55,   212,   213,
     113,    29,  1065,  1066,  1067,     4,   119,   216,    69,    22,
    1073,    43,    44,   224,    27,  1078,   316,  2224,  2225,  2226,
    2227,  2228,  2229,  2230,  2231,  2232,   304,   130,   141,    87,
    1093,    64,    92,  1146,     3,     4,   168,   169,    51,    52,
     173,    54,    55,   304,   233,    94,  2261,   173,    64,  1112,
     163,    77,    65,   212,   213,    69,    64,    75,   260,   304,
     118,   251,   304,   121,   253,    57,    79,    80,   181,   258,
      32,   260,   177,   304,    87,   212,   213,    90,   289,   293,
       5,   271,     4,    64,    64,   217,     3,     4,     4,    38,
     304,   305,   214,     5,    93,   108,     4,   130,   287,   288,
      49,   126,   378,    95,   117,   118,   219,   296,   121,   385,
       4,   387,     5,   173,   130,   317,     4,   326,   242,   142,
      13,    14,   130,   304,   335,   339,     5,  1190,   317,   203,
      79,   130,     5,   238,   293,   346,   164,     5,     0,   212,
     213,   273,     4,   168,   169,   304,   305,   260,  1211,   130,
     130,  2870,     3,     4,     3,     4,   293,  1220,   190,   191,
     265,   153,   275,     4,   187,   193,   135,   304,   305,   197,
     188,    64,   309,     5,  1237,   288,  1239,     3,     4,   192,
     339,  1244,  1245,  1246,     5,    11,   375,     3,     4,   214,
     222,  1254,   266,     5,  1257,   253,  1259,    26,    87,     5,
      16,   304,   339,     3,     4,     5,   319,    13,    14,     3,
       4,    62,     4,  1276,   163,  1278,  2204,     5,   135,   332,
     293,   334,   335,  1286,  1287,     4,     5,   255,   251,   287,
       4,   304,   305,   333,     3,     4,    13,    14,  1301,  1302,
     253,   315,  1305,  1306,  1307,     4,   259,    41,   273,    41,
    1313,   325,  1315,     4,   272,  1318,  2722,  1320,    64,   208,
       3,     4,   375,   276,   282,     4,   339,     5,    11,     4,
     298,   304,  1385,   103,   287,   300,   165,  1145,    87,   307,
     308,   273,   130,  2498,  1152,  2751,     5,    64,   304,  2504,
       4,   120,   315,    62,  2509,   395,   304,   695,     3,     4,
       3,     4,   163,  1366,     4,   318,   319,   136,  1371,  2297,
     300,  2863,  1375,     4,  1377,   713,  1397,  2394,  1381,   212,
     213,     4,     5,   304,   304,   119,  2403,   119,   341,     4,
    2882,     4,  2320,   282,  1397,  2412,  1399,     5,  1401,  1402,
    1403,  1404,     4,   292,  1407,  1408,   175,  1410,  1411,   221,
    1413,   614,  1415,     4,   617,   618,   165,    62,     4,  1422,
     249,   250,     3,     4,     5,   314,  1429,  1448,     4,     5,
    1433,  1434,  1435,   322,   387,   264,   168,   169,     4,     5,
    1443,  1444,     4,   244,  1447,  1466,     3,     4,   786,   479,
     480,   340,  1455,   791,  1457,  2861,  2862,  1460,     4,  2865,
     293,  2867,    19,   232,     4,    36,   212,   213,     4,     4,
      47,   304,   305,    50,  2880,  2881,   309,   246,     5,  2885,
    2886,   310,   216,  2889,   216,   217,     5,   288,  2894,  2895,
       8,   209,    69,    13,    14,   212,   213,   215,  1127,  1128,
     249,   250,    59,  1506,    10,  1508,   339,     5,  1511,  1512,
       4,  1514,   299,  1516,   554,   264,   188,     3,     4,  1522,
       4,   561,   188,  1526,   564,    88,     3,     4,   105,   569,
     331,  3023,  1535,   573,   111,    98,   197,     4,  3030,   220,
     258,   273,   105,   114,    64,     5,  2952,   293,     5,  2955,
     107,     3,     4,     5,  2960,    41,  2484,   220,   304,   305,
       4,   310,   900,   309,    41,  2720,  2972,   285,   139,   140,
    2716,  2977,   220,  2719,     4,  2721,   293,   148,   210,    69,
     210,  2736,    69,   251,    69,   162,  2741,   304,   305,     5,
     252,  2737,  2738,   339,  1615,  3087,  2524,  3089,    22,   170,
       3,     4,     4,  2531,     5,     8,     9,    10,  2754,   180,
       4,     4,     4,  1616,  1617,  1618,   173,     4,   658,   337,
       3,     4,   339,     6,     7,   220,   964,     5,    52,    92,
      92,    55,   195,   119,    58,  1638,    92,     5,    92,  1642,
       5,     4,   119,     4,   105,     5,  3052,     5,     4,     4,
    3056,     3,     4,     5,     6,     7,     3,     4,     5,     6,
       7,     5,     4,    87,   382,  1668,  1669,     5,    16,  2597,
    3076,  2599,     4,  2601,     4,  1678,  2604,    16,  2606,  1682,
       4,   244,     4,   103,  3090,   242,  1689,  3093,  3094,     5,
     247,     5,   212,   213,   118,    92,    92,   121,     4,     4,
    1703,    92,  2155,     5,     5,  1708,    92,     5,     5,  1712,
       5,  1714,  1715,     4,  1717,  1718,  1719,   280,  1721,   296,
       5,  1724,  1725,  1726,  1727,  1728,  1729,  1730,  1731,  1732,
    1733,  1734,     5,     4,     4,  1738,  1739,  1740,  1741,     3,
       4,     5,     6,     7,     5,  1748,  1749,   324,   325,  1752,
    1753,  1754,     5,     5,    67,  1758,  1759,  2210,     4,   336,
       4,     4,     4,   340,    11,     5,    11,     4,  1771,  1772,
       4,  1774,  1775,   293,     5,     4,     4,     4,   182,   819,
       5,     5,     5,     4,   304,   305,   826,     4,    37,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,  2270,     5,   339,
     173,     4,   173,    39,    39,     5,   319,     4,   287,   253,
     312,     5,  2760,     4,    97,     4,  1857,   287,     5,     5,
       5,     4,   105,  1846,     4,  1848,  1849,     5,     5,  1852,
     113,     5,   301,    64,  1857,  1858,   301,  1860,  1861,  1862,
       5,  1864,  1865,   287,  1867,  3020,  1869,  1870,   131,  1872,
    1873,     5,  1875,   122,  1877,   138,     4,     4,     4,  1217,
       5,    69,  1885,    56,     5,     5,     5,     5,     5,     4,
    1893,     5,     5,   317,     4,  1898,  1899,    85,     5,     5,
     163,  1904,     5,    76,   113,   113,    94,  1928,   265,     4,
    1913,   174,    41,   113,     5,   126,   265,   105,  1939,   130,
      93,   271,  1943,     5,   265,   265,   237,   967,   265,   265,
      41,     4,     4,   106,   974,     5,     5,  1275,   237,     4,
       4,   237,     5,   237,   193,  1948,   195,   196,     5,   198,
     199,  1289,     5,   141,     5,   128,   219,   168,   169,   132,
       5,     4,   173,   119,   227,     4,   119,  1970,  1971,     5,
       5,     5,  1975,     4,   147,   163,     5,     5,  1981,  1019,
    1020,     4,   231,     5,  1024,     5,     4,  1027,     5,     5,
       4,   265,     5,     5,     4,     4,    11,     5,     5,  1039,
      11,   250,   251,   214,     5,     4,     4,   256,     4,     4,
       4,   260,   275,     5,     0,     5,   251,   265,   275,   187,
       4,   194,   220,   233,   265,   288,   265,   265,     4,  2482,
    2483,   219,   265,  2486,  2487,     4,     4,  2490,  2491,     4,
       4,   301,     5,   306,     5,     5,     5,     5,     5,     4,
       4,   265,     5,     4,     3,     4,     4,     4,   269,     5,
       5,     5,   273,     5,   265,   343,   265,   343,   317,     4,
      19,   320,   260,     4,     4,     4,     4,     4,     4,     4,
    1418,  1419,   331,     4,   343,  2088,  2089,   343,  2091,   300,
       5,     5,   251,   304,  2547,     4,   251,     5,     4,   251,
     288,   251,   351,   251,     4,   316,     5,     4,  2111,  2112,
    2113,  2114,  2115,  2116,  2117,  2118,  2119,  2898,     5,     5,
       4,    11,     5,     5,     4,   301,     5,  1167,     5,     4,
     388,     5,  2135,     5,  2137,     4,   339,     5,     5,     4,
     301,     5,     5,     4,   332,     5,   334,     5,     4,   478,
       5,  2154,  2155,     5,     4,     4,     4,  2160,   107,     5,
       5,     4,     4,   301,     5,     5,  2169,  2170,  2171,  2172,
    2173,  2174,  2175,  2176,  2177,  2178,     4,     4,  2181,  2182,
    2183,  2184,  2185,  2186,  2187,  2188,  2189,  2190,  2191,  2192,
       5,  2194,     5,  2196,  2197,  2198,     5,     4,   388,     5,
       5,     4,     4,     4,     4,  2986,     5,  2210,  2211,     5,
       5,     5,     5,     5,     5,     5,     5,     4,     4,   317,
       5,   470,     5,     4,   173,     5,     5,     4,     4,   317,
       5,     5,   481,     5,     5,     4,     4,   388,     5,     5,
       5,   490,     5,     4,     4,   388,     5,     5,     5,     5,
       4,  2704,     4,   388,     5,     5,  2709,     5,     5,  2262,
       4,  2264,     4,  2266,     5,  2268,     4,  2270,  2271,     4,
    2273,     4,     4,  1611,     5,  2278,  2279,     5,  2281,  2282,
       5,  2284,     5,  2286,  2305,     5,     4,     4,   388,     5,
    2293,     4,  2295,     4,     4,  2748,  2299,     5,   247,  2302,
       5,     4,  1640,     5,     5,     4,  1644,  1645,     4,     4,
     559,   560,     5,     5,     5,     4,     4,   388,     5,     5,
       5,     5,     5,   572,  2345,     5,     4,     4,   577,     5,
       4,     4,     4,     4,     4,  1673,     5,   586,     5,     5,
       4,   388,     5,  1383,  2347,     5,  1684,     5,     5,     4,
       4,   388,     5,     5,     5,  1693,  1694,     5,     4,     4,
     426,     5,     4,     4,     4,     4,  1704,     4,     4,     4,
       4,     4,     4,     4,     4,  3045,     5,     5,     4,     4,
       4,  1421,     4,  2913,     5,     4,  1426,     5,     4,  2731,
       5,     5,  2445,     5,     4,     4,  1436,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,     4,     4,   676,   677,   678,
     679,     4,     4,     4,     4,     4,  2896,     5,     4,  2986,
       5,     4,  2982,     5,     5,     4,     4,     4,  2451,     4,
       4,     4,     4,   862,     5,     4,     4,     4,     4,  2462,
    2463,  2464,  2465,  2466,  2467,  2468,  2469,  2470,  2471,  2472,
    2998,  2999,     5,     5,     5,  2478,     5,  1121,     4,  2482,
    2483,     4,     4,  2486,  2487,     4,     4,  2490,  2491,  2492,
    2493,  2494,  2495,  2496,  2497,     5,  2499,  2500,  2501,     5,
       4,     4,  2505,  2506,  2507,  2508,     4,  2510,  2511,  2512,
    2513,  2514,  2515,     4,  2517,  1159,     4,  2520,  2521,     4,
      -1,     5,     5,     4,     4,    -1,     5,     4,     4,    -1,
       5,     5,     5,     5,     4,     4,   785,    19,     5,     5,
       5,  2544,     4,    -1,  2547,  2548,     5,     5,     5,  2552,
      -1,    -1,    -1,    -1,  2557,  2558,    -1,  2560,    -1,    -1,
      42,     4,     5,    45,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    -1,    -1,  1135,    -1,    -1,    -1,    89,  2611,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,   101,
      63,    -1,    -1,    -1,    -1,   107,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    78,    -1,    80,    -1,    -1,
      -1,    -1,    85,  1683,    -1,    88,    -1,    -1,    -1,    -1,
      -1,    94,    -1,    -1,   136,    98,    -1,    -1,    -1,    -1,
      -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113,    -1,   154,    -1,    -1,    -1,    -1,    -1,    -1,   122,
    2683,    -1,    -1,    -1,  2687,    -1,    -1,    -1,    -1,    -1,
     172,   173,    -1,    -1,  2697,  2698,    -1,   179,   141,    -1,
    2703,  2704,    -1,    -1,  1744,  2708,  2709,    -1,    -1,    -1,
    1750,  2714,    -1,    -1,  2717,  2718,    -1,    -1,    -1,   968,
     163,    -1,   204,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   980,    -1,    -1,    -1,    -1,  2739,  2740,   181,  2742,
    2743,  2744,  2745,  2746,    -1,  2748,  2749,    -1,    -1,    -1,
    2753,   194,   195,    -1,    -1,    -1,    69,    70,    71,    -1,
      -1,    -1,    -1,  2766,  2102,   247,    -1,    -1,  1017,    -1,
      -1,    -1,    -1,  2776,    -1,    -1,   219,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2795,    -1,    -1,    -1,   109,    -1,    -1,    -1,
      -1,   244,  2140,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   125,    -1,  1854,   258,    -1,   260,    -1,  1859,
     302,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   275,   315,  2837,    -1,    -1,   280,    -1,  2842,
      -1,  2844,    -1,    -1,   157,   288,    -1,  2850,    -1,    -1,
    1890,    -1,    -1,   296,   167,    -1,  1896,    -1,  1107,    -1,
      -1,  2864,    -1,    -1,   346,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   317,    -1,   189,    -1,    -1,    -1,
    2883,    -1,    -1,  1923,  2887,   198,    -1,  2940,   331,   332,
    1930,   334,  1536,  1537,  1538,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1546,  1547,  1548,   218,    -1,    -1,    -1,    -1,
    2913,  1555,  1556,  1557,    -1,    -1,  1560,  1561,    -1,  1563,
    1564,    -1,    -1,    -1,    -1,    -1,    -1,   240,    -1,    -1,
      -1,    -1,   375,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2944,    -1,    -1,  1193,    -1,  2949,    -1,  2951,    -1,
      -1,    -1,    -1,  1597,  1598,  2958,    -1,  1601,  1602,    -1,
      -1,    -1,    -1,    -1,     4,    -1,  2969,    -1,   281,    -1,
      -1,  2974,    -1,   286,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     303,    -1,    -1,   306,  3015,  2998,  2999,    -1,    -1,  1248,
      -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1258,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,
      -1,  3024,  1554,    -1,    -1,  3028,  3047,    -1,  3031,  3050,
      -1,    -1,    -1,    -1,  1566,    -1,    -1,    -1,  3041,  3042,
    3043,  3044,    -1,    -1,    -1,  2085,    -1,    -1,    -1,    -1,
    3053,    -1,    -1,    -1,  3057,    -1,  1588,  1589,    -1,    -1,
      -1,  3064,    -1,  3066,    -1,  2105,    -1,   107,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2141,  2142,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2153,    -1,    -1,    -1,    -1,  2158,  2159,
      -1,    -1,    -1,  2163,  2164,    -1,    -1,    -1,    -1,    -1,
    1379,    -1,    -1,   173,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1397,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2203,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2214,    -1,   216,    -1,  1427,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   226,  2525,  1437,    -1,
      -1,    -1,    -1,    -1,    -1,   235,   236,    -1,    -1,    -1,
      -1,    -1,   242,    -1,    -1,  1454,    -1,   247,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1466,    -1,    -1,
      -1,    -1,  1471,    -1,    -1,    -1,    -1,  2267,    -1,    -1,
       3,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,  2288,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      -1,    -1,  2312,    -1,    -1,    -1,    -1,  2317,    -1,    -1,
      -1,    -1,    -1,  2323,    -1,    -1,    59,    -1,  2328,   329,
      -1,    -1,  2332,    -1,  2334,    -1,  2336,    -1,    -1,  2339,
      -1,  2341,    -1,    -1,    -1,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   107,    -1,    -1,    -1,    -1,   379,
      -1,  1985,    -1,    -1,    -1,   385,   386,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1998,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2008,    -1,  1615,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1643,    19,    -1,    -1,    -1,    -1,
     173,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2755,    -1,    -1,
      -1,  2759,    -1,    -1,    -1,  1674,    -1,    -1,  1677,    -1,
      -1,    -1,  1681,    -1,    -1,    59,  2080,    -1,  1687,  1688,
      -1,    -1,    -1,   216,    -1,    -1,  1695,    -1,    -1,    -1,
      -1,    -1,    -1,  1702,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,   242,
      -1,    23,  2004,    -1,   247,    -1,  2516,    -1,    -1,    -1,
    2012,  2013,    -1,   107,    -1,   258,    -1,    -1,    -1,    -1,
    2022,  2023,  2532,    -1,  1743,    -1,    -1,    -1,    -1,    -1,
    2032,  2033,    -1,    -1,    -1,    -1,  1755,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2047,  2048,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2058,  2059,    -1,    -1,
      -1,    -1,    -1,  2065,  2574,    -1,    -1,    -1,    -1,    -1,
    2878,    -1,    -1,  2075,    -1,    -1,    -1,    -1,    -1,   173,
      -1,    -1,    -1,   326,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2902,    -1,    -1,    -1,  2608,    -1,
      -1,    -1,    -1,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1857,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   242,    -1,
      -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1881,    -1,    -1,    -1,  2676,    -1,    -1,    -1,
      -1,    -1,  2682,    -1,    -1,    -1,  2686,    -1,  1897,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1910,  2702,  1912,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1922,    -1,    -1,  1925,  1926,  1927,  1928,
    1929,    -1,  1931,    -1,    -1,  1934,    -1,    -1,    -1,    -1,
    1939,  1940,  1941,  1942,  1943,  1944,    -1,  1946,  1947,  3037,
      -1,    -1,  1951,  1952,  1953,  1954,    -1,    -1,  1957,  1958,
      -1,    -1,    -1,  2357,  1963,  1964,   268,  2757,  2758,   271,
      -1,    -1,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2417,  2418,  2419,  2420,  2421,    -1,  2423,
    2424,    -1,    -1,    -1,  2428,  2429,  2430,  2431,  2432,    -1,
    2434,  2435,    -1,    -1,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,    -1,    -1,    -1,    -1,  2358,    -1,    -1,  2869,
      -1,    -1,    -1,    -1,    -1,    -1,  2368,  2369,  2087,    -1,
      -1,  2090,    -1,    -1,    -1,    -1,    -1,  2379,    -1,    -1,
      -1,    -1,  2101,    -1,    -1,  2104,  2388,    -1,    -1,    -1,
    2392,  2393,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2401,
    2402,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2410,  2411,
      -1,    -1,    -1,    -1,  2416,    -1,    -1,  2136,    -1,    -1,
      -1,    -1,    -1,    -1,  2426,  2427,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2437,    -1,  2439,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2978,    -1,
      69,    -1,    -1,  2192,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  3002,    -1,    -1,    -1,  2215,    -1,    97,    98,
    2614,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,  2623,
    2624,  2625,  2626,  2627,   113,  2629,  2630,    -1,  2632,  2633,
    2634,  2635,  2636,    -1,  2638,  2639,    -1,  2641,  2642,  2643,
    2644,  2645,   131,  2647,  2648,    -1,  2650,     4,  3048,   138,
      -1,    -1,   141,    -1,    -1,    -1,  2660,  2661,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,  2671,    -1,  3069,
      -1,    -1,  3072,    -1,   163,    -1,    -1,    -1,    -1,    -1,
      -1,  2290,    -1,    -1,    -1,   174,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    -1,  2305,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2615,  2333,    -1,  2618,    -1,    -1,  2621,
     219,    -1,    -1,    -1,    -1,    -1,  2345,    -1,   227,  2631,
      -1,    68,    69,    17,    -1,    19,    -1,    74,  2640,    -1,
     107,    -1,    -1,    -1,    -1,    -1,    -1,  2649,    -1,    -1,
      -1,    -1,    -1,    -1,  2656,    -1,    -1,    -1,    -1,    -1,
      97,    98,    -1,    -1,    -1,  2667,    -1,    -1,    -1,    -1,
     107,  2673,    -1,    -1,    -1,    -1,   275,    61,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   288,
      -1,    -1,    -1,    -1,    -1,  2809,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2818,    -1,   173,   306,    -1,    -1,
      -1,    -1,    -1,  2827,    -1,  2829,    -1,    -1,   317,  2833,
     319,    -1,    -1,   107,    -1,    -1,    -1,    -1,    -1,    -1,
    2449,    -1,    -1,  2452,    -1,    -1,   173,    -1,    -1,   123,
      -1,  2460,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   188,    -1,    -1,    -1,    -1,    -1,  2476,    -1,    -1,
    2479,    -1,    -1,    -1,    -1,    -1,  2485,    -1,    -1,  2488,
    2489,   208,    -1,    -1,    -1,    -1,   375,    -1,    -1,    -1,
     247,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   173,
      -1,    -1,    -1,    -1,    -1,    -1,   233,  2799,    -1,    -1,
      -1,    -1,    -1,    -1,  2806,    -1,    -1,  2526,  2527,   193,
     247,    -1,    -1,  2815,    -1,    -1,  2930,    -1,  2932,    -1,
    2934,    -1,  2824,  2937,    -1,  2939,    -1,    -1,  2830,    -1,
      -1,    -1,  2834,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2579,    -1,    -1,   247,    -1,   302,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,    -1,    -1,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   321,   375,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2678,
      -1,    -1,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
      20,    21,    22,  2712,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2723,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    52,    -1,    -1,    55,    -1,    -1,    58,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    69,
      -1,    -1,    51,    52,    -1,    -1,    55,    -1,    -1,    79,
      80,    -1,    19,    62,    -1,    -1,    65,    87,    88,    -1,
      69,    -1,  2781,    -1,    -1,    -1,  2785,    -1,    98,    -1,
      79,    80,    -1,    -1,    -1,   105,    -1,    -1,    87,    -1,
      -1,    -1,    -1,   113,    -1,    -1,    -1,   117,   118,    98,
      -1,   121,    59,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,   118,
      -1,   141,   121,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2840,  2841,    -1,  2843,    -1,    -1,    -1,    -1,  2848,
    2849,    -1,   141,   163,    59,  2854,    -1,    -1,    -1,    -1,
     107,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,   163,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   192,    -1,    -1,    -1,    -1,    -1,    -1,  2888,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    -1,   107,   192,    -1,    -1,    -1,    -1,    -1,   219,
      62,    -1,    -1,   202,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2920,    -1,    -1,    -1,    -1,   173,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      59,   251,    -1,   253,    19,    -1,    -1,    -1,    -1,   259,
     260,    -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,    -1,
      -1,    -1,   251,    -1,   253,   275,   276,    -1,   173,    -1,
     259,   260,    -1,    -1,    -1,    -1,    -1,   287,   288,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   276,   107,    -1,
      -1,    -1,    -1,    -1,    -1,   242,    -1,    -1,    -1,   288,
     247,    -1,    -1,    -1,    -1,    -1,    -1,   317,    -1,   319,
      -1,    -1,    -1,    -1,    -1,    -1,  3015,    -1,    -1,    -1,
      -1,   173,   332,    -1,   334,    -1,    -1,    -1,   317,    -1,
     319,   341,   107,    -1,  3033,    -1,    -1,   242,    -1,    -1,
      -1,   330,   247,    -1,    -1,    -1,    -1,    -1,  3047,    -1,
      -1,  3050,   341,    -1,   173,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   311,   375,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   375,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   247,    -1,    -1,   173,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,    -1,   247,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   321,
      -1,    -1,   247,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,    -1,    -1,    -1,    -1,    -1,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,    42,
      -1,    -1,    45,    -1,    -1,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      -1,    -1,    -1,    -1,    67,    68,    -1,    -1,    -1,    72,
      73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    91,    92,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,   102,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   127,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   137,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   150,    -1,    -1,
      -1,   154,    -1,    -1,    -1,   158,    -1,    -1,    -1,   162,
     163,    -1,    -1,    -1,    -1,   168,   169,    -1,    -1,   172,
      -1,    -1,    -1,    -1,    -1,   178,    -1,    -1,    -1,    -1,
      -1,   184,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   195,    -1,    -1,    -1,   199,   200,   201,    -1,
      -1,   204,   205,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   217,    -1,    -1,    -1,   221,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   239,    -1,   241,   242,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   254,    -1,   256,    -1,    -1,    42,    -1,    -1,    45,
     263,    -1,    48,    -1,   267,    -1,    -1,    -1,   271,    -1,
     273,    -1,   275,    -1,    -1,    -1,    -1,   280,    -1,    -1,
      -1,    -1,    68,    -1,    -1,    -1,    72,    73,    74,    -1,
      -1,    -1,    -1,   296,    -1,    -1,    82,    -1,    84,   302,
      -1,    -1,    -1,    89,    -1,    91,    92,    93,    -1,    -1,
      -1,    -1,    -1,    99,    -1,   101,    -1,   320,   321,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     333,    -1,   335,    -1,    -1,    -1,    -1,    -1,    -1,   342,
      -1,    -1,   345,   346,    -1,    -1,    -1,    -1,    -1,    -1,
     136,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,
      -1,    -1,    -1,   376,    -1,    -1,    -1,   163,    -1,   165,
     166,   384,   168,   169,    -1,    -1,   172,    -1,   173,    -1,
     176,    -1,   178,   178,    -1,    -1,    -1,    -1,   184,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   204,   205,
      -1,    -1,    -1,   209,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   217,   178,    -1,    -1,   221,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   239,    -1,   241,    -1,    -1,    -1,    -1,
      -1,    -1,   248,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   273,    -1,   275,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   302,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   320,   321,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   330,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   338,    -1,    -1,    -1,    -1,    -1,   344,    -1,
     346,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   384,    -1,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    42,    45,    48,    62,    67,    68,    72,    73,    74,
      82,    89,    91,    92,   101,   102,   127,   137,   150,   154,
     158,   162,   163,   168,   169,   172,   178,   184,   195,   199,
     200,   201,   204,   205,   217,   221,   239,   241,   242,   254,
     256,   263,   267,   271,   273,   275,   280,   296,   302,   320,
     321,   333,   335,   342,   345,   346,   376,   384,   390,    69,
      11,    56,    76,   106,   128,   132,   147,   326,   426,     3,
       4,   326,   391,   431,   209,   215,   258,   285,   337,   382,
     433,   317,     4,    41,   119,   168,   169,   216,   217,   273,
     438,    29,   164,   193,   197,   255,   298,   307,   308,   406,
     440,    88,    98,   105,   195,   244,   280,   441,    41,    62,
     119,   216,   321,   391,   450,     4,    19,    41,    59,   107,
     129,   173,   216,   226,   235,   236,   242,   247,   329,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   379,   385,
     386,   393,   401,   402,   403,   452,    34,   453,   393,    45,
      48,    81,    89,   155,   214,   243,   245,   273,   346,   392,
     393,    67,   391,   455,   158,   456,    42,    45,    48,    68,
      72,    73,    74,    82,    84,    89,    91,    92,    93,    99,
     101,   136,   154,   163,   165,   166,   168,   169,   172,   176,
     178,   184,   204,   205,   209,   217,   221,   239,   241,   248,
     273,   275,   302,   320,   321,   330,   338,   344,   346,   384,
     457,    88,   105,   508,    19,    42,    45,    82,    89,   100,
     101,   107,   136,   154,   172,   173,   179,   204,   247,   302,
     315,   346,   511,    69,   393,    64,   315,   340,   595,    64,
     315,   340,   594,    93,   124,   207,   224,   289,   335,   346,
     517,    15,     4,    47,    50,    69,    88,   105,   111,   162,
     185,   296,   324,   325,   336,   340,   577,    26,   120,   136,
     175,   232,   246,   520,   257,   538,     5,    69,    93,   152,
     335,   384,   393,   539,     5,   540,    60,   143,   252,   267,
     337,   557,    47,    67,    69,   203,   266,   315,   325,   578,
     315,   593,    69,   227,   378,   385,   387,   579,    40,   216,
     258,   326,   391,   401,   403,   580,     5,   335,   346,   393,
     583,    75,   188,   272,   282,   584,     4,   585,    93,   557,
      64,   315,   340,   592,   216,   326,   391,   596,    26,   120,
     136,   232,   246,   383,   598,    53,   105,   116,   149,   328,
     620,   621,     4,    38,    49,    79,   163,   208,   282,   292,
     314,   322,   340,   419,     4,   136,   231,   622,   326,   391,
     624,    15,    23,   268,   271,   402,   625,   257,   629,   326,
     391,   630,     0,     5,   393,    62,   391,   427,   299,     5,
       4,   326,   391,   428,     5,    33,   313,   429,   135,   391,
     430,   135,   391,   432,   391,     4,   215,   270,   277,   436,
     209,   337,   381,   382,   391,   435,   393,   151,   196,   434,
     221,   391,    83,   192,   277,   391,   437,     5,   391,   391,
     391,     4,   168,   169,   217,   273,   439,     4,   391,   391,
       5,   253,   442,     4,    32,   443,     5,   444,     5,   448,
       5,    32,   449,   391,     8,     9,    10,   391,   397,   398,
     399,   400,   391,   391,    41,   119,   216,   391,   451,   391,
     216,   401,   403,   391,    36,   114,   139,   140,   148,   170,
     180,   408,   391,     4,   393,   393,   393,   393,   393,   393,
     393,   393,   393,   393,   126,    69,    56,    76,    93,   106,
     128,   132,   147,   194,   460,   128,   462,   209,   215,   258,
     285,   337,   381,   382,   391,   445,   463,   317,   466,   188,
     467,   188,   197,   469,    68,    69,    74,    97,    98,   188,
     208,   233,   302,   375,   401,   471,   391,   403,   474,    62,
     321,   401,   475,   311,   401,   403,   476,    34,   477,   401,
     403,   478,     4,   401,   403,   479,    46,    62,    86,   106,
     126,   130,   160,   161,   223,   234,   299,   300,   375,   483,
     238,   339,   489,    69,     5,    94,    64,   315,   340,   497,
      64,   315,   340,   496,     4,    93,   130,   481,     5,    68,
     403,   480,    15,    47,    69,    86,   185,   325,   340,   490,
     557,    47,    69,    86,   203,   266,   315,   325,   491,   315,
     495,    69,   258,   493,   316,    64,   315,   340,   494,    21,
     147,   265,   297,   498,    38,    49,    79,   163,   208,   282,
     292,   340,   499,   403,    94,    15,   220,   506,   401,   509,
      69,    77,   512,    32,   513,    45,    92,   214,   514,   163,
     244,   288,   331,   515,   401,    17,    61,   123,   193,   321,
     401,   516,     5,     5,   167,   281,   338,   401,     4,     5,
     167,   281,   401,     4,     4,   215,   519,     5,     4,     4,
     130,   391,     4,    47,    50,    69,   105,   111,   162,   296,
     324,   325,   336,   340,    69,    70,    71,    96,   109,   125,
     157,   167,   189,   198,   218,   240,   281,   286,   303,   306,
     405,     5,     4,   391,   393,     5,   168,   169,   273,   521,
       5,   523,     5,   126,   168,   169,   214,   273,   300,   524,
      99,   119,   209,   537,     5,   535,     5,   300,   536,     4,
       5,   393,   393,   391,   391,     5,     4,     5,    63,    69,
      78,    80,    85,    88,    94,    98,   105,   113,   122,   141,
     163,   181,   194,   195,   219,   244,   258,   260,   275,   280,
     288,   296,   317,   331,   332,   334,   375,   541,   405,     5,
       4,   221,   229,   230,   266,   380,   404,   391,   401,   391,
     401,     5,   391,    41,   119,   391,   582,   393,   391,   401,
     403,   581,   391,   408,   391,     4,   402,    57,    95,   153,
     273,   586,     4,     4,   391,     4,   163,   288,   587,     5,
     401,     4,    41,   119,   391,   597,   391,   103,    64,   130,
     168,   169,   273,   304,   600,   130,   619,    64,   126,   130,
     168,   169,   173,   214,   269,   273,   300,   304,   316,   601,
     602,    64,   130,   304,   618,     5,    64,   130,   304,   599,
       4,    35,   115,   227,   591,    69,   393,   422,    69,   393,
     423,    69,   393,   424,    12,   134,   211,   590,   391,    18,
     228,   312,   393,   420,     4,   391,   251,   391,   425,   391,
     300,     4,   391,   391,     4,   252,   326,   628,     4,   319,
     626,     4,   319,   627,     4,   408,   135,   391,   631,   391,
     391,     4,     5,   391,    11,   391,   391,   391,    31,   100,
     179,   277,   283,   407,   407,     4,   221,   391,   391,     4,
       4,     4,   391,   391,   391,   391,   391,   391,     4,   391,
       4,   391,     4,     4,     4,     5,     5,   401,     5,   391,
     391,   397,   399,   399,   401,   391,   391,   391,   391,   391,
     391,   391,   401,   403,   400,   391,   391,   400,   391,     5,
     299,   110,   209,   461,   215,   277,   464,   188,    83,   192,
     277,   465,   151,   196,   446,   446,     4,   468,     4,   470,
     215,   285,   472,   197,   473,   188,   408,   391,   391,   401,
     401,   408,   408,   408,   401,   408,   391,   401,     4,   486,
       4,   403,   484,   220,     4,   182,   346,   485,   220,   401,
       4,   144,   326,   488,     5,     5,   458,     4,   220,   146,
     274,   394,   391,     4,   492,   492,   492,   492,     4,     5,
      63,    69,    98,   122,   141,   156,   163,   171,   233,   253,
     258,   260,   287,   288,   296,   317,   375,   551,   403,   210,
     210,    69,   502,    69,   503,    69,   504,    18,   228,   312,
     500,   251,   505,   391,     5,   459,   252,   507,   402,   408,
       5,   401,   401,   401,   401,     4,     4,     4,   393,     4,
       4,   220,   391,   405,     5,   391,   393,    13,    14,    64,
     212,   213,   293,   304,   305,   339,    92,    92,    92,     5,
       5,    13,    14,    64,   212,   213,   293,   304,   305,   309,
     339,    92,    92,   173,    92,   173,   173,   178,   402,   527,
     532,    92,   173,     5,   525,     4,     4,    13,    64,   212,
     293,   304,   339,     5,     5,     4,   391,   402,    20,    21,
      22,    51,    52,    55,    58,    65,    69,    79,    80,    87,
      88,    98,   105,   113,   117,   118,   121,   141,   163,   192,
     219,   251,   253,   259,   260,   275,   276,   287,   288,   317,
     319,   332,   334,   341,   375,    69,    85,    94,   105,   141,
     163,   219,   260,   288,   332,   334,     4,    31,   177,   238,
     265,   544,     5,    66,   112,   262,   278,   279,   377,   378,
     550,   105,   542,     4,    16,   288,   548,    41,   119,   216,
     549,     4,     5,    16,   237,   327,   391,   288,   550,   558,
     136,   550,   559,    37,    41,   119,   145,   216,   326,   391,
     560,   401,   393,    97,   105,   113,   131,   138,   163,   174,
     219,   227,   275,   288,   306,   563,    41,   119,   216,     5,
     288,   318,   567,    16,   133,   186,   237,   327,   568,   319,
     393,   569,     5,   105,   113,   335,    16,    16,     4,   391,
     391,   391,   391,   391,   391,   408,   391,   391,   400,   391,
       4,   408,     4,    41,   119,   216,   294,   588,    41,   119,
     216,   294,   589,     4,   103,     5,     5,    92,    92,    92,
       4,     5,     5,    92,     5,    92,   173,    92,   173,   602,
      64,   130,   173,   304,   606,    64,   130,   304,   617,    92,
     173,    64,   130,   304,   604,     4,    64,   130,   304,   603,
       5,     5,     4,     5,     5,     4,     4,     5,     5,     5,
     391,   312,   393,   421,   391,   391,   391,   391,     4,   391,
     623,   391,   391,   402,    67,     4,     4,     5,     4,     4,
       5,     4,   103,   290,   409,   391,   391,    11,     5,    11,
     391,   391,    11,     4,    11,     4,     4,   391,   391,   391,
     391,   391,     4,   391,     5,   391,     4,   393,     4,     4,
     408,   401,   408,   391,   391,   391,   401,   391,   400,   391,
     391,     5,     5,   391,   403,   391,   401,   391,   408,   408,
     409,   409,   409,   408,   400,   391,   408,   391,   394,   487,
     182,     5,     4,   408,   173,   173,     4,     5,     4,     4,
     391,   482,    39,    39,   391,    20,    21,    22,    51,    52,
      55,    62,    65,    69,    79,    80,    87,    98,   117,   118,
     121,   141,   163,   192,   202,   251,   253,   259,   260,   276,
     288,   317,   319,   330,   341,   375,    69,   141,   171,   260,
     317,    31,   177,   238,   265,   552,   391,   233,   391,   553,
      16,   391,   287,   563,   287,   233,   391,   554,   319,   555,
      16,   104,   391,   312,   501,   391,     5,   409,     4,     4,
      59,   401,     4,     5,   518,   391,     5,     5,     5,   173,
     205,   413,   413,   181,   295,   411,     4,     4,     5,     5,
     522,   522,   522,   301,   301,     5,     5,     5,    16,   175,
     412,   412,   411,     4,     4,   411,     5,     5,   526,     5,
     533,     5,   534,   533,   534,   178,   374,   402,   530,     5,
     529,     5,   533,   534,     5,    13,    14,    64,   212,   213,
     293,   304,   305,   309,   339,     4,     4,     5,     5,   413,
     411,     4,     5,     5,   408,    87,   165,   249,   250,   264,
     310,   416,     6,     7,   391,   396,   265,   265,   265,   113,
      41,    69,   105,   113,   119,   141,   163,   181,   219,   260,
     275,   288,   319,   332,   334,   335,   375,   543,   265,     5,
      27,   183,   265,   315,    28,   151,   330,   113,    22,    52,
      55,    87,   118,   121,   253,   287,     4,    22,    52,    55,
      58,    87,   118,   121,   253,   287,   317,    41,   265,   265,
     113,     5,   237,    27,   251,    37,   145,   326,   391,   291,
     299,   251,   271,   401,   563,    41,   142,   251,   315,   271,
     237,     5,     5,   275,    27,   251,     4,     5,     5,   237,
      37,   145,   326,   391,   563,   237,   393,     4,     4,   391,
       5,   339,    22,    27,    51,    52,    54,    55,    65,    79,
      80,    87,    90,   108,   117,   118,   121,   192,   253,   259,
     276,   287,   318,   319,   341,   387,   545,     4,   391,   391,
     391,   391,   391,   550,   401,     5,     4,     5,   391,   391,
     401,   391,   393,   391,   391,   550,     5,     5,   391,   391,
     393,     5,    16,     5,     5,   391,   391,   400,   391,   391,
       4,   391,   391,   119,   391,   391,   119,     4,    43,    44,
     190,   191,   222,   418,   418,    64,   130,   304,   614,    64,
     130,   304,   611,    64,   130,   304,   608,   418,     5,    64,
     130,   304,   605,    64,   130,   304,   616,    64,   130,   304,
     615,    64,   130,   304,   613,    64,   130,   304,   612,     5,
       5,    64,   130,   304,   607,     4,     5,     5,     4,    64,
     130,   304,   610,    64,   130,   304,   609,     5,     5,     4,
       5,     5,     4,   418,   418,   418,   391,   391,   391,   391,
       4,   401,   391,   408,   402,     5,     5,    11,   391,   401,
     403,   391,    11,   391,   391,   391,    62,   391,     4,   391,
     391,     4,   391,   391,     5,   391,     5,   391,    48,   302,
     447,     5,   393,   393,   408,   391,     4,     4,     4,   408,
     401,   391,   391,   391,   391,   408,   401,   409,   400,   391,
       4,   409,   391,     4,   403,     5,    24,    25,   103,   410,
       4,   401,   391,   391,     4,   391,     5,    87,   165,   249,
     250,   264,   310,   401,   403,   265,   265,   265,    21,   265,
     401,   265,    27,   183,   265,   315,    28,   151,   330,    21,
     265,   265,   265,    21,   265,    27,   187,   251,   187,   291,
     299,   251,   187,   251,   323,   563,   142,   187,   251,   315,
       4,   275,    27,   187,   251,   563,   233,   391,   391,   391,
     391,   391,   391,   220,   391,   391,    20,   261,   510,     4,
       4,   391,   413,   413,   413,     4,   413,   413,   413,    13,
      14,    64,   212,   213,   293,   304,   305,   339,   412,   413,
     413,   413,   413,   413,     4,   413,   413,     4,   412,    13,
      14,    64,   212,   213,   293,   304,   305,   339,     5,    13,
      14,    64,   212,   213,   293,   304,   305,   309,   339,    13,
      14,    64,   212,   213,   293,   304,   305,   339,     5,   528,
       5,   531,     5,     5,    13,    14,    64,   212,   213,   293,
     304,   305,   309,   339,     5,    13,    14,    64,   212,   213,
     293,   304,   305,   309,   339,   301,     5,     5,     5,   412,
     412,   411,     4,     4,   411,     5,     4,     4,   413,   413,
       4,   413,   413,     5,   393,   401,   403,     5,   391,   391,
       5,   391,     5,   396,   113,   219,   275,   113,   219,   275,
       5,   391,   393,     5,   391,   401,   393,   393,     5,     5,
     396,   265,   265,    21,   265,    21,   265,   265,    21,   265,
     343,   343,     4,     4,     4,     4,   543,     4,     4,     4,
     343,   343,     4,     5,     4,   391,     5,   391,     5,   396,
     393,   401,   401,   391,    27,    51,    54,    65,    90,   108,
     387,   414,     4,   401,   391,   408,   393,     5,   401,   401,
     391,   393,   393,   401,   401,   391,   393,   391,     5,   391,
     251,   251,   391,   391,   251,   391,   251,   391,   391,     4,
     546,   391,   251,   251,   391,   391,   391,   391,   391,   391,
     391,   391,     5,   339,   391,   547,   391,   391,   251,   391,
     391,   391,   391,   401,   408,     5,     4,     4,   391,   391,
     408,   391,   391,   391,   401,   550,   391,   391,     5,     4,
     391,   391,   391,   391,     5,     5,     4,     5,     5,     4,
       5,     5,     4,   418,     5,     5,     4,     5,     5,     4,
       5,     5,     4,     5,     5,     4,     5,     5,     4,     4,
       4,     5,     5,     4,     4,     5,     5,     4,     5,     5,
       4,   391,   391,   391,   391,   408,   391,   401,   403,   391,
     408,   391,   391,   391,   391,   391,     5,   391,   391,   391,
       4,   391,   391,     5,   391,     5,   391,     4,   401,     4,
     391,   408,   197,   406,   391,   406,   409,   408,   401,   391,
     391,     4,   391,   401,   401,   391,   394,     5,     5,     5,
       5,     5,   401,   408,   401,   401,   401,   401,   403,   401,
     408,   401,   401,   401,   403,   401,   401,   401,   401,   403,
     401,   401,   401,   391,   401,   401,   401,   401,   401,   401,
     401,   401,   391,   391,     4,   391,     5,   391,   413,     5,
       5,     5,   411,     4,     4,     5,   413,   412,     4,   413,
       5,     5,     5,   412,   412,   411,     4,     4,     5,   301,
       5,     5,     5,   412,   412,   411,     4,     4,   411,     5,
       5,     5,     5,   412,   412,   411,     4,     4,     5,    13,
      14,    64,   212,   213,   293,   304,   305,   339,    13,    14,
      64,   212,   213,   293,   304,   305,   339,    13,    14,    64,
     212,   213,   293,   304,   305,   339,   301,     5,     5,     5,
     412,   412,   411,     4,     4,   411,     5,   301,     5,     5,
       5,   412,   412,   411,     4,     4,   411,     5,   412,     4,
       4,   412,     4,     4,   413,     5,   408,   401,   391,   391,
     401,   391,     5,   396,     5,   401,   393,     5,   401,   408,
       5,   396,   391,   391,   391,   391,   391,   391,   391,   391,
     391,     4,     4,     5,     4,     4,   391,   401,   391,     5,
     396,   393,   408,   408,   408,   391,   400,   408,   408,   391,
     408,   408,   391,   391,   391,   391,   391,   391,   391,   391,
     391,   391,   556,   564,   391,   391,   391,   391,   391,   391,
     391,   391,   391,   391,   391,   391,   401,     5,   391,   391,
     391,   391,     4,     4,   408,   409,     5,     5,   400,   391,
       4,   408,   401,     4,   418,   418,   418,   418,   418,   418,
     418,   418,   418,   396,   391,   391,   391,   408,   391,   400,
     391,   391,    11,     5,     5,   391,   391,   391,   391,     5,
     391,     4,   391,     4,   408,     4,   401,   391,   391,   409,
     410,   391,     5,   391,   401,   403,     5,     5,     5,     5,
       5,   408,   410,   410,   410,   408,   410,   409,   410,   410,
     408,   410,   410,   410,   408,   410,   410,   408,   401,   408,
     410,   408,   410,   410,   408,   410,   408,     4,   401,   403,
       5,   391,     4,   413,   412,     4,   412,   412,     4,     4,
     412,     4,   412,     5,     5,     5,   412,   412,   411,     4,
       4,     5,     5,     5,     5,   412,   412,   411,     4,     4,
       5,     5,     5,     5,   412,   412,   411,     4,     4,     5,
     412,   413,   413,   413,   413,   413,     4,   413,   413,     4,
     412,   412,   413,   413,   413,   413,   413,     4,   413,   413,
       4,   412,   412,     4,     4,     4,   402,   410,     4,   401,
     410,   391,   401,     4,   410,   410,   401,     4,   391,   391,
     391,   391,   391,   391,   391,   391,   391,   391,   391,   401,
     410,   391,   401,     4,   400,   400,   409,   401,   400,   400,
     401,   401,   400,   400,   391,   391,   391,   391,   391,   391,
     396,   391,   391,   391,    58,    69,    98,   141,   317,   319,
     375,   561,   562,   563,   575,   576,   396,   391,   391,   391,
     391,   396,   391,   391,   391,   391,   391,   391,   408,   391,
     339,   395,   396,   391,   391,   409,   393,   401,   401,   409,
     408,     4,   391,   400,   391,    62,   391,     5,     5,     4,
       4,   391,   391,     4,   391,     4,   406,   410,     5,   408,
       4,     5,     4,     5,   401,     5,   409,   410,   409,   409,
     409,   409,     5,   408,     4,   391,   413,   412,   412,     4,
     412,   413,   413,   413,   413,   413,     4,   413,   413,   412,
     413,   413,   413,   413,   413,     4,   413,   413,   412,   413,
     413,   413,   413,   413,     4,   413,   413,   412,   413,   412,
       4,   413,   413,   412,     4,   413,   412,   408,   401,   410,
       4,   408,   391,   408,   391,   391,   391,   410,     4,   408,
     391,   400,     5,   410,   391,   400,   410,   410,   401,   391,
       4,   415,   415,   391,   391,   415,   396,   415,   564,   401,
     388,   388,   388,   388,   388,   388,   388,   562,   388,   396,
     415,   415,   391,   391,   396,   391,   391,   391,   391,   391,
     400,   391,     5,   564,   391,   415,   393,   565,   566,   408,
     408,   393,   409,     4,     5,   391,     5,     4,     4,     4,
       4,     4,     4,   391,     4,    33,   206,   313,   454,   401,
       5,    33,   206,   313,   417,   401,     4,   454,   391,   412,
     412,   413,   412,   413,   412,   413,   413,   412,   413,   412,
     391,   410,   401,   401,   391,   401,   391,   401,   401,   391,
     401,   410,     4,   564,   564,   395,   391,   564,     4,   564,
     408,   543,     5,     4,     5,     5,     5,     4,   393,     4,
     564,   564,   395,   391,     4,   564,   564,   391,   401,   564,
     564,   564,   565,   572,   573,   563,   570,   571,   393,     4,
       5,     5,     4,     4,     4,   209,   337,   382,   391,   445,
     454,     4,   401,   454,     4,   413,   413,   413,   413,   413,
     402,   410,   410,   391,   410,     4,   410,   410,   391,   410,
     391,   564,   564,     4,   391,   564,     5,     4,   391,   564,
       4,   391,   564,   408,   572,   574,   575,   388,   571,     5,
       5,   391,   446,   391,   446,   408,   410,     4,   401,   403,
       4,   396,   395,   391,     5,   391,   395,   391,   401,   575,
     393,     5,     5,   391,   391,   391,   391,   417,     5,   401,
     403,   408,   401,   403,   564,   391,     4,   564,   391,   410,
       5,     5,   391,     5,   391,   408,   408,     4,   564,     4,
       5,     5,     5,   395,   395,   564,   564,   564
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
#line 497 "frame/parser.Y"
    {fr->bgColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 5:
#line 498 "frame/parser.Y"
    {fr->useBgColorCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 7:
#line 500 "frame/parser.Y"
    {fr->centerCmd();;}
    break;

  case 8:
#line 501 "frame/parser.Y"
    {fr->clearCmd();;}
    break;

  case 10:
#line 503 "frame/parser.Y"
    {fr->colorbarTagCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 17:
#line 510 "frame/parser.Y"
    {fr->DATASECCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 23:
#line 516 "frame/parser.Y"
    {fr->hideCmd();;}
    break;

  case 24:
#line 517 "frame/parser.Y"
    {fr->highliteCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 25:
#line 518 "frame/parser.Y"
    {fr->highliteColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 29:
#line 522 "frame/parser.Y"
    {fr->irafAlignCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 38:
#line 531 "frame/parser.Y"
    {fr->nanColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 42:
#line 535 "frame/parser.Y"
    {fr->queryCursorCmd();;}
    break;

  case 45:
#line 538 "frame/parser.Y"
    {fr->resetCmd();;}
    break;

  case 50:
#line 543 "frame/parser.Y"
    {fr->showCmd();;}
    break;

  case 52:
#line 545 "frame/parser.Y"
    {fr->threadsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 54:
#line 547 "frame/parser.Y"
    {fr->unloadFitsCmd();;}
    break;

  case 56:
#line 549 "frame/parser.Y"
    {fr->msg("Frame 1.0");;}
    break;

  case 61:
#line 556 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 62:
#line 557 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 63:
#line 560 "frame/parser.Y"
    {yydebug=(yyvsp[(1) - (1)].integer);;}
    break;

  case 64:
#line 561 "frame/parser.Y"
    {DebugMosaic=(yyvsp[(2) - (2)].integer);;}
    break;

  case 65:
#line 562 "frame/parser.Y"
    {yydebug=(yyvsp[(2) - (2)].integer);;}
    break;

  case 66:
#line 563 "frame/parser.Y"
    {DebugPerf=(yyvsp[(2) - (2)].integer);;}
    break;

  case 67:
#line 564 "frame/parser.Y"
    {DebugWCS=(yyvsp[(2) - (2)].integer);;}
    break;

  case 68:
#line 565 "frame/parser.Y"
    {DebugBin=(yyvsp[(2) - (2)].integer);;}
    break;

  case 69:
#line 566 "frame/parser.Y"
    {DebugBlock=(yyvsp[(2) - (2)].integer);;}
    break;

  case 70:
#line 567 "frame/parser.Y"
    {DebugCompress=(yyvsp[(2) - (2)].integer);;}
    break;

  case 71:
#line 568 "frame/parser.Y"
    {DebugCrop=(yyvsp[(2) - (2)].integer);;}
    break;

  case 72:
#line 569 "frame/parser.Y"
    {DebugGZ=(yyvsp[(2) - (2)].integer);;}
    break;

  case 73:
#line 570 "frame/parser.Y"
    {DebugRGB=(yyvsp[(2) - (2)].integer);;}
    break;

  case 74:
#line 573 "frame/parser.Y"
    {(yyval.integer)=((yyvsp[(1) - (1)].integer) ? 1 : 0);;}
    break;

  case 75:
#line 575 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 76:
#line 576 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 77:
#line 577 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 78:
#line 578 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 79:
#line 580 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 80:
#line 581 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 81:
#line 582 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 82:
#line 583 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 83:
#line 586 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 84:
#line 587 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 85:
#line 588 "frame/parser.Y"
    {(yyval.integer) = Base::FULLBASE;;}
    break;

  case 86:
#line 589 "frame/parser.Y"
    {(yyval.integer) = Base::ROOT;;}
    break;

  case 87:
#line 590 "frame/parser.Y"
    {(yyval.integer) = Base::FULL;;}
    break;

  case 88:
#line 593 "frame/parser.Y"
    {(yyval.real) = 0;;}
    break;

  case 89:
#line 594 "frame/parser.Y"
    {(yyval.real) = (yyvsp[(1) - (1)].real);;}
    break;

  case 90:
#line 597 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 91:
#line 598 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 92:
#line 599 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 93:
#line 602 "frame/parser.Y"
    {(yyval.real) = parseSEXStr((yyvsp[(1) - (1)].str));;}
    break;

  case 94:
#line 605 "frame/parser.Y"
    {(yyval.real) = parseHMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 95:
#line 608 "frame/parser.Y"
    {(yyval.real) = parseDMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 96:
#line 612 "frame/parser.Y"
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
#line 624 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 98:
#line 631 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 99:
#line 638 "frame/parser.Y"
    {
	  (yyval.vector)[0] = (yyvsp[(1) - (2)].real);
	  (yyval.vector)[1] = (yyvsp[(2) - (2)].real);
	  (yyval.vector)[2] = 1;
	;}
    break;

  case 100:
#line 645 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::IMAGE;;}
    break;

  case 101:
#line 646 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::PHYSICAL;;}
    break;

  case 102:
#line 647 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::DETECTOR;;}
    break;

  case 103:
#line 648 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::AMPLIFIER;;}
    break;

  case 104:
#line 649 "frame/parser.Y"
    {(yyval.integer) = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 105:
#line 652 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS;;}
    break;

  case 106:
#line 653 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSA;;}
    break;

  case 107:
#line 654 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSB;;}
    break;

  case 108:
#line 655 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSC;;}
    break;

  case 109:
#line 656 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSD;;}
    break;

  case 110:
#line 657 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSE;;}
    break;

  case 111:
#line 658 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSF;;}
    break;

  case 112:
#line 659 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSG;;}
    break;

  case 113:
#line 660 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSH;;}
    break;

  case 114:
#line 661 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSI;;}
    break;

  case 115:
#line 662 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSJ;;}
    break;

  case 116:
#line 663 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSK;;}
    break;

  case 117:
#line 664 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSL;;}
    break;

  case 118:
#line 665 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSM;;}
    break;

  case 119:
#line 666 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSN;;}
    break;

  case 120:
#line 667 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSO;;}
    break;

  case 121:
#line 668 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSP;;}
    break;

  case 122:
#line 669 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSQ;;}
    break;

  case 123:
#line 670 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSR;;}
    break;

  case 124:
#line 671 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSS;;}
    break;

  case 125:
#line 672 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCST;;}
    break;

  case 126:
#line 673 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSU;;}
    break;

  case 127:
#line 674 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSV;;}
    break;

  case 128:
#line 675 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSW;;}
    break;

  case 129:
#line 676 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSX;;}
    break;

  case 130:
#line 677 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSY;;}
    break;

  case 131:
#line 678 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSZ;;}
    break;

  case 132:
#line 679 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS0;;}
    break;

  case 133:
#line 682 "frame/parser.Y"
    {(yyval.integer) = Coord::CANVAS;;}
    break;

  case 134:
#line 683 "frame/parser.Y"
    {(yyval.integer) = Coord::PANNER;;}
    break;

  case 135:
#line 686 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 136:
#line 687 "frame/parser.Y"
    {(yyval.integer) = FitsMask::ZERO;;}
    break;

  case 137:
#line 688 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 138:
#line 689 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NaN;;}
    break;

  case 139:
#line 690 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONNaN;;}
    break;

  case 140:
#line 691 "frame/parser.Y"
    {(yyval.integer) = FitsMask::RANGE;;}
    break;

  case 141:
#line 694 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 142:
#line 695 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 143:
#line 696 "frame/parser.Y"
    {(yyval.integer) = FitsMask::MULTIPLY;;}
    break;

  case 144:
#line 697 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SCREEN;;}
    break;

  case 145:
#line 698 "frame/parser.Y"
    {(yyval.integer) = FitsMask::OVERLAY;;}
    break;

  case 146:
#line 699 "frame/parser.Y"
    {(yyval.integer) = FitsMask::DARKEN;;}
    break;

  case 147:
#line 700 "frame/parser.Y"
    {(yyval.integer) = FitsMask::LIGHTEN;;}
    break;

  case 148:
#line 701 "frame/parser.Y"
    {(yyval.integer) = FitsMask::COLOR_DODGE;;}
    break;

  case 149:
#line 702 "frame/parser.Y"
    {(yyval.integer) = FitsMask::COLOR_BURN;;}
    break;

  case 150:
#line 703 "frame/parser.Y"
    {(yyval.integer) = FitsMask::HARD_LIGHT;;}
    break;

  case 151:
#line 704 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOFT_LIGHT;;}
    break;

  case 152:
#line 705 "frame/parser.Y"
    {(yyval.integer) = FitsMask::DIFFERENCE;;}
    break;

  case 153:
#line 706 "frame/parser.Y"
    {(yyval.integer) = FitsMask::EXCLUSION;;}
    break;

  case 154:
#line 707 "frame/parser.Y"
    {(yyval.integer) = FitsMask::HUE;;}
    break;

  case 155:
#line 708 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SATURATION;;}
    break;

  case 156:
#line 709 "frame/parser.Y"
    {(yyval.integer) = FitsMask::COLOR;;}
    break;

  case 157:
#line 710 "frame/parser.Y"
    {(yyval.integer) = FitsMask::LUMINOSITY;;}
    break;

  case 158:
#line 713 "frame/parser.Y"
    {(yyval.integer) = FrScale::LINEARSCALE;;}
    break;

  case 159:
#line 714 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOGSCALE;;}
    break;

  case 160:
#line 715 "frame/parser.Y"
    {(yyval.integer) = FrScale::POWSCALE;;}
    break;

  case 161:
#line 716 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQRTSCALE;;}
    break;

  case 162:
#line 717 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQUAREDSCALE;;}
    break;

  case 163:
#line 718 "frame/parser.Y"
    {(yyval.integer) = FrScale::ASINHSCALE;;}
    break;

  case 164:
#line 719 "frame/parser.Y"
    {(yyval.integer) = FrScale::SINHSCALE;;}
    break;

  case 165:
#line 720 "frame/parser.Y"
    {(yyval.integer) = FrScale::HISTEQUSCALE;;}
    break;

  case 166:
#line 723 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 167:
#line 724 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 168:
#line 725 "frame/parser.Y"
    {(yyval.integer)=FrScale::SAMPLE;;}
    break;

  case 169:
#line 726 "frame/parser.Y"
    {(yyval.integer)=FrScale::DATAMIN;;}
    break;

  case 170:
#line 727 "frame/parser.Y"
    {(yyval.integer)=FrScale::IRAFMIN;;}
    break;

  case 171:
#line 730 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 172:
#line 731 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 173:
#line 732 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 174:
#line 733 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 175:
#line 734 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 176:
#line 735 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 177:
#line 736 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::GALACTIC;;}
    break;

  case 178:
#line 737 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ECLIPTIC;;}
    break;

  case 179:
#line 740 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 180:
#line 741 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 181:
#line 742 "frame/parser.Y"
    {(yyval.integer)=Coord::SEXAGESIMAL;;}
    break;

  case 182:
#line 745 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 183:
#line 746 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 184:
#line 747 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCMIN;;}
    break;

  case 185:
#line 748 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCSEC;;}
    break;

  case 186:
#line 751 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 187:
#line 752 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 188:
#line 753 "frame/parser.Y"
    {(yyval.integer) = Base::KEY;;}
    break;

  case 189:
#line 756 "frame/parser.Y"
    {;}
    break;

  case 190:
#line 757 "frame/parser.Y"
    {;}
    break;

  case 191:
#line 758 "frame/parser.Y"
    {;}
    break;

  case 192:
#line 761 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 193:
#line 762 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 194:
#line 763 "frame/parser.Y"
    {(yyval.integer) = Base::MASK;;}
    break;

  case 195:
#line 766 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 196:
#line 767 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 197:
#line 768 "frame/parser.Y"
    {(yyval.integer) = Point::BOX;;}
    break;

  case 198:
#line 769 "frame/parser.Y"
    {(yyval.integer) = Point::DIAMOND;;}
    break;

  case 199:
#line 770 "frame/parser.Y"
    {(yyval.integer) = Point::CROSS;;}
    break;

  case 200:
#line 771 "frame/parser.Y"
    {(yyval.integer) = Point::EX;;}
    break;

  case 201:
#line 772 "frame/parser.Y"
    {(yyval.integer) = Point::ARROW;;}
    break;

  case 202:
#line 773 "frame/parser.Y"
    {(yyval.integer) = Point::BOXCIRCLE;;}
    break;

  case 203:
#line 776 "frame/parser.Y"
    {(yyval.integer) = POINTSIZE;;}
    break;

  case 204:
#line 777 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 205:
#line 780 "frame/parser.Y"
    {(yyval.integer) = Marker::PANDA;;}
    break;

  case 206:
#line 781 "frame/parser.Y"
    {(yyval.integer) = Marker::HISTOGRAM;;}
    break;

  case 207:
#line 782 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT2D;;}
    break;

  case 208:
#line 783 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT3D;;}
    break;

  case 209:
#line 784 "frame/parser.Y"
    {(yyval.integer) = Marker::RADIAL;;}
    break;

  case 210:
#line 785 "frame/parser.Y"
    {(yyval.integer) = Marker::STATS;;}
    break;

  case 211:
#line 788 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 212:
#line 789 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 213:
#line 790 "frame/parser.Y"
    {(yyval.integer) = Marker::SUM;;}
    break;

  case 214:
#line 791 "frame/parser.Y"
    {(yyval.integer) = Marker::MEDIAN;;}
    break;

  case 215:
#line 794 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 216:
#line 795 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 217:
#line 796 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 218:
#line 797 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 219:
#line 798 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 220:
#line 799 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 225:
#line 806 "frame/parser.Y"
    {fr->set3dRenderMethodCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 226:
#line 807 "frame/parser.Y"
    {fr->set3dRenderBackgroundCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 228:
#line 809 "frame/parser.Y"
    {fr->set3dScaleCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 229:
#line 810 "frame/parser.Y"
    {fr->set3dSyncCmd((yyvsp[(2) - (2)].integer));}
    break;

  case 230:
#line 812 "frame/parser.Y"
    {/* needed for compatibility with old version of backup */;}
    break;

  case 231:
#line 815 "frame/parser.Y"
    {fr->set3dShadeCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 232:
#line 816 "frame/parser.Y"
    {fr->set3dShadeAmbientCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 233:
#line 817 "frame/parser.Y"
    {fr->set3dShadeStrengthCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 235:
#line 821 "frame/parser.Y"
    {fr->set3dShadeNormalCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 236:
#line 822 "frame/parser.Y"
    {fr->set3dShadeNormalStrengthCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 237:
#line 825 "frame/parser.Y"
    {fr->set3dBorderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 238:
#line 826 "frame/parser.Y"
    {fr->set3dBorderColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 239:
#line 829 "frame/parser.Y"
    {fr->set3dCompassCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 240:
#line 830 "frame/parser.Y"
    {fr->set3dCompassColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 241:
#line 833 "frame/parser.Y"
    {fr->set3dHighliteCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 242:
#line 834 "frame/parser.Y"
    {fr->set3dHighliteColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 243:
#line 837 "frame/parser.Y"
    {fr->set3dViewCmd((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));;}
    break;

  case 244:
#line 839 "frame/parser.Y"
    {fr->set3dViewPointCmd(Vector3d((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 246:
#line 843 "frame/parser.Y"
    {fr->binColsCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 247:
#line 844 "frame/parser.Y"
    {fr->binDepthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 250:
#line 847 "frame/parser.Y"
    {fr->binBufferSizeCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 252:
#line 849 "frame/parser.Y"
    {fr->binFilterCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 253:
#line 852 "frame/parser.Y"
    {fr->binAboutCmd();;}
    break;

  case 254:
#line 853 "frame/parser.Y"
    {fr->binAboutCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 255:
#line 856 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 256:
#line 857 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 257:
#line 859 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(1) - (4)].real)), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 258:
#line 861 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 259:
#line 862 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 260:
#line 863 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 261:
#line 865 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 262:
#line 867 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 263:
#line 870 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::AVERAGE);;}
    break;

  case 264:
#line 871 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::SUM);;}
    break;

  case 265:
#line 874 "frame/parser.Y"
    {fr->binToFitCmd();;}
    break;

  case 266:
#line 876 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (7)].real),(yyvsp[(2) - (7)].real)), (yyvsp[(5) - (7)].str), (yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].str));;}
    break;

  case 267:
#line 879 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (11)].real),(yyvsp[(2) - (11)].real)), (yyvsp[(3) - (11)].integer), Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)), (yyvsp[(8) - (11)].str), (yyvsp[(9) - (11)].str), (yyvsp[(10) - (11)].str), (yyvsp[(11) - (11)].str));;}
    break;

  case 268:
#line 881 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (8)].real),(yyvsp[(2) - (8)].real)), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (yyvsp[(6) - (8)].str), (yyvsp[(7) - (8)].str), (yyvsp[(8) - (8)].str));;}
    break;

  case 269:
#line 884 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (12)].real),(yyvsp[(2) - (12)].real)), (yyvsp[(3) - (12)].integer), Vector((yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real)), Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    (yyvsp[(9) - (12)].str), (yyvsp[(10) - (12)].str), (yyvsp[(11) - (12)].str), (yyvsp[(12) - (12)].str));;}
    break;

  case 270:
#line 888 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 271:
#line 889 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 273:
#line 893 "frame/parser.Y"
    {fr->blockToFitCmd();;}
    break;

  case 274:
#line 894 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 275:
#line 895 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 279:
#line 901 "frame/parser.Y"
    {fr->clipUserCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 280:
#line 902 "frame/parser.Y"
    {fr->clipUserCmd(NAN,NAN);;}
    break;

  case 282:
#line 905 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 283:
#line 910 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::GLOBAL);;}
    break;

  case 284:
#line 911 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::LOCAL);;}
    break;

  case 285:
#line 914 "frame/parser.Y"
    {fr->clipModeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 286:
#line 915 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::MINMAX);;}
    break;

  case 287:
#line 916 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZSCALE);;}
    break;

  case 288:
#line 917 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZMAX);;}
    break;

  case 289:
#line 918 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::USERCLIP);;}
    break;

  case 290:
#line 921 "frame/parser.Y"
    {fr->clipMinMaxCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer),(yyvsp[(1) - (2)].integer));;}
    break;

  case 291:
#line 922 "frame/parser.Y"
    {fr->clipMinMaxModeCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer));;}
    break;

  case 292:
#line 923 "frame/parser.Y"
    {fr->clipMinMaxSampleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 293:
#line 924 "frame/parser.Y"
    {fr->clipMinMaxRescanCmd();;}
    break;

  case 294:
#line 927 "frame/parser.Y"
    {fr->clipZScaleCmd((yyvsp[(1) - (3)].real),(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 295:
#line 929 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleContrastCmd((yyvsp[(2) - (2)].real));
        ;}
    break;

  case 296:
#line 934 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleSampleCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 297:
#line 939 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleLineCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 298:
#line 946 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].real), (yyvsp[(3) - (5)].real), (yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].integer));;}
    break;

  case 299:
#line 948 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 300:
#line 950 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 301:
#line 952 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 302:
#line 954 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (7)].integer),(yyvsp[(3) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(yyvsp[(7) - (7)].integer));;}
    break;

  case 306:
#line 961 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].real), (yyvsp[(3) - (5)].real), (yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].integer));;}
    break;

  case 307:
#line 963 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 308:
#line 965 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 309:
#line 967 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 310:
#line 969 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (7)].integer),(yyvsp[(3) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(yyvsp[(7) - (7)].integer));;}
    break;

  case 311:
#line 971 "frame/parser.Y"
    {fr->colorScaleCmd((FrScale::ColorScaleType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 312:
#line 972 "frame/parser.Y"
    {fr->colorScaleLogCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 314:
#line 976 "frame/parser.Y"
    {fr->contourDashListCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 319:
#line 984 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),(FrScale::ClipMode)(yyvsp[(9) - (13)].integer),100,(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 320:
#line 987 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),FrScale::AUTOCUT,(yyvsp[(9) - (13)].real),(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 321:
#line 990 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),(FrScale::ClipMode)(yyvsp[(9) - (12)].integer),100,FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 322:
#line 996 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),FrScale::AUTOCUT,(yyvsp[(9) - (12)].real),FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 323:
#line 1001 "frame/parser.Y"
    {fr->contourCreatePolygonCmd();;}
    break;

  case 324:
#line 1004 "frame/parser.Y"
    {fr->contourDeleteCmd();;}
    break;

  case 325:
#line 1005 "frame/parser.Y"
    {fr->contourDeleteAuxCmd();;}
    break;

  case 326:
#line 1008 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 327:
#line 1009 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 328:
#line 1011 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourLoadCmd((yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer),(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer));
	;}
    break;

  case 329:
#line 1017 "frame/parser.Y"
    {(yyval.integer) = FrScale::MINMAX;;}
    break;

  case 330:
#line 1018 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZSCALE;;}
    break;

  case 331:
#line 1019 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZMAX;;}
    break;

  case 332:
#line 1020 "frame/parser.Y"
    {(yyval.integer) = FrScale::USERCLIP;;}
    break;

  case 333:
#line 1023 "frame/parser.Y"
    {(yyval.integer) = FrScale::GLOBAL;;}
    break;

  case 334:
#line 1024 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOCAL;;}
    break;

  case 335:
#line 1027 "frame/parser.Y"
    {(yyval.integer) = FVContour::SMOOTH;;}
    break;

  case 336:
#line 1028 "frame/parser.Y"
    {(yyval.integer) = FVContour::BLOCK;;}
    break;

  case 337:
#line 1031 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 338:
#line 1032 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 339:
#line 1034 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 340:
#line 1038 "frame/parser.Y"
    {fr->contourSaveCmd((yyvsp[(1) - (3)].str), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 341:
#line 1040 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (4)].str),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 342:
#line 1043 "frame/parser.Y"
    {fr->cropCmd();;}
    break;

  case 343:
#line 1045 "frame/parser.Y"
    {fr->cropCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 344:
#line 1048 "frame/parser.Y"
    {fr->cropCenterCmd(Vector((yyvsp[(2) - (8)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), Vector((yyvsp[(5) - (8)].real),(yyvsp[(6) - (8)].real)), (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 346:
#line 1050 "frame/parser.Y"
    {fr->cropBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 347:
#line 1051 "frame/parser.Y"
    {fr->cropMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 348:
#line 1052 "frame/parser.Y"
    {fr->cropEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 349:
#line 1055 "frame/parser.Y"
    {fr->crop3dCmd();;}
    break;

  case 350:
#line 1057 "frame/parser.Y"
    {fr->crop3dCmd((yyvsp[(1) - (4)].real), (yyvsp[(2) - (4)].real), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 351:
#line 1058 "frame/parser.Y"
    {fr->crop3dBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 352:
#line 1059 "frame/parser.Y"
    {fr->crop3dMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 353:
#line 1060 "frame/parser.Y"
    {fr->crop3dEndCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 354:
#line 1064 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), (Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 355:
#line 1066 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 356:
#line 1067 "frame/parser.Y"
    {fr->crosshairCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 357:
#line 1068 "frame/parser.Y"
    {fr->crosshairWarpCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 358:
#line 1071 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)), (Coord::InternalSystem)(yyvsp[(3) - (5)].integer));;}
    break;

  case 359:
#line 1073 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 360:
#line 1075 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer));;}
    break;

  case 361:
#line 1077 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 362:
#line 1080 "frame/parser.Y"
    {fr->axesOrderCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 363:
#line 1083 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 364:
#line 1084 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 365:
#line 1085 "frame/parser.Y"
    {(yyval.integer) = Base::SUM;;}
    break;

  case 366:
#line 1086 "frame/parser.Y"
    {(yyval.integer) = Base::MEDIAN;;}
    break;

  case 367:
#line 1089 "frame/parser.Y"
    {fr->fadeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 368:
#line 1090 "frame/parser.Y"
    {fr->fadeClearCmd();;}
    break;

  case 369:
#line 1093 "frame/parser.Y"
    {fr->fitsyHasExtCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 370:
#line 1096 "frame/parser.Y"
    {fr->getCmd();;}
    break;

  case 371:
#line 1097 "frame/parser.Y"
    {fr->getBgColorCmd();;}
    break;

  case 385:
#line 1111 "frame/parser.Y"
    {fr->getDATASECCmd();;}
    break;

  case 388:
#line 1114 "frame/parser.Y"
    {fr->getHighliteColorCmd();;}
    break;

  case 389:
#line 1115 "frame/parser.Y"
    {fr->getHistogramCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].integer));;}
    break;

  case 395:
#line 1121 "frame/parser.Y"
    {fr->getIRAFAlignCmd();;}
    break;

  case 396:
#line 1122 "frame/parser.Y"
    {fr->getMinMaxCmd();;}
    break;

  case 401:
#line 1127 "frame/parser.Y"
    {fr->getNANColorCmd();;}
    break;

  case 402:
#line 1128 "frame/parser.Y"
    {fr->getOrientCmd();;}
    break;

  case 404:
#line 1131 "frame/parser.Y"
    {fr->getPixelTableCmd(Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (Coord::InternalSystem)(yyvsp[(3) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(7) - (8)].integer), (yyvsp[(8) - (8)].str));;}
    break;

  case 406:
#line 1133 "frame/parser.Y"
    {fr->getRotateCmd();;}
    break;

  case 408:
#line 1135 "frame/parser.Y"
    {fr->getThreadsCmd();;}
    break;

  case 410:
#line 1137 "frame/parser.Y"
    {fr->getTypeCmd();;}
    break;

  case 411:
#line 1139 "frame/parser.Y"
    {fr->getValueCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 414:
#line 1142 "frame/parser.Y"
    {fr->getZoomCmd();;}
    break;

  case 415:
#line 1146 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 416:
#line 1148 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 417:
#line 1152 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 418:
#line 1154 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 419:
#line 1157 "frame/parser.Y"
    {fr->getBinDepthCmd();;}
    break;

  case 420:
#line 1158 "frame/parser.Y"
    {fr->getBinFactorCmd();;}
    break;

  case 421:
#line 1159 "frame/parser.Y"
    {fr->getBinFunctionCmd();;}
    break;

  case 422:
#line 1160 "frame/parser.Y"
    {fr->getBinBufferSizeCmd();;}
    break;

  case 423:
#line 1161 "frame/parser.Y"
    {fr->getBinCursorCmd();;}
    break;

  case 424:
#line 1162 "frame/parser.Y"
    {fr->getBinFilterCmd();;}
    break;

  case 426:
#line 1164 "frame/parser.Y"
    {fr->getBinListCmd();;}
    break;

  case 427:
#line 1167 "frame/parser.Y"
    {fr->getBinColsCmd();;}
    break;

  case 428:
#line 1168 "frame/parser.Y"
    {fr->getBinColsMinMaxCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 429:
#line 1169 "frame/parser.Y"
    {fr->getBinColsDimCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 430:
#line 1172 "frame/parser.Y"
    {fr->getBlockCmd();;}
    break;

  case 431:
#line 1175 "frame/parser.Y"
    {fr->getClipCmd();;}
    break;

  case 432:
#line 1177 "frame/parser.Y"
    {fr->getClipCmd((FrScale::ClipMode)(yyvsp[(1) - (2)].integer), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 433:
#line 1179 "frame/parser.Y"
    {fr->getClipCmd((yyvsp[(1) - (2)].real), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 434:
#line 1180 "frame/parser.Y"
    {fr->getClipScopeCmd();;}
    break;

  case 435:
#line 1181 "frame/parser.Y"
    {fr->getClipModeCmd();;}
    break;

  case 437:
#line 1183 "frame/parser.Y"
    {fr->getClipUserCmd();;}
    break;

  case 439:
#line 1186 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	;}
    break;

  case 440:
#line 1192 "frame/parser.Y"
    {fr->getClipMinMaxModeCmd();;}
    break;

  case 441:
#line 1193 "frame/parser.Y"
    {fr->getClipMinMaxSampleCmd();;}
    break;

  case 442:
#line 1196 "frame/parser.Y"
    {fr->getClipZScaleContrastCmd();;}
    break;

  case 443:
#line 1197 "frame/parser.Y"
    {fr->getClipZScaleSampleCmd();;}
    break;

  case 444:
#line 1198 "frame/parser.Y"
    {fr->getClipZScaleLineCmd();;}
    break;

  case 445:
#line 1201 "frame/parser.Y"
    {fr->getColorbarCmd();;}
    break;

  case 446:
#line 1202 "frame/parser.Y"
    {fr->getColorbarTagCmd();;}
    break;

  case 448:
#line 1208 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 449:
#line 1210 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 450:
#line 1212 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 451:
#line 1215 "frame/parser.Y"
    {fr->getColorScaleCmd();;}
    break;

  case 453:
#line 1217 "frame/parser.Y"
    {fr->getColorScaleLogCmd();;}
    break;

  case 454:
#line 1221 "frame/parser.Y"
    {fr->getColorScaleLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 455:
#line 1225 "frame/parser.Y"
    {fr->getContourCmd((Coord::CoordSystem)(yyvsp[(1) - (2)].integer),(Coord::SkyFrame)(yyvsp[(2) - (2)].integer));;}
    break;

  case 457:
#line 1227 "frame/parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 458:
#line 1228 "frame/parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 459:
#line 1229 "frame/parser.Y"
    {fr->getContourDashListCmd();;}
    break;

  case 460:
#line 1230 "frame/parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 461:
#line 1231 "frame/parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 462:
#line 1232 "frame/parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 464:
#line 1234 "frame/parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 465:
#line 1235 "frame/parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 466:
#line 1238 "frame/parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 467:
#line 1239 "frame/parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 468:
#line 1240 "frame/parser.Y"
    {fr->getContourClipScopeCmd();;}
    break;

  case 469:
#line 1243 "frame/parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 470:
#line 1244 "frame/parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 471:
#line 1248 "frame/parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 472:
#line 1250 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 473:
#line 1258 "frame/parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 474:
#line 1260 "frame/parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 475:
#line 1262 "frame/parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 476:
#line 1265 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 477:
#line 1267 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 478:
#line 1268 "frame/parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 479:
#line 1271 "frame/parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 480:
#line 1274 "frame/parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 481:
#line 1276 "frame/parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 482:
#line 1280 "frame/parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 483:
#line 1282 "frame/parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 484:
#line 1285 "frame/parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 485:
#line 1289 "frame/parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (2)].str), (Base::FileNameType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 486:
#line 1290 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 487:
#line 1292 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)), (Coord::InternalSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (Base::FileNameType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 488:
#line 1295 "frame/parser.Y"
    {fr->iisGetCmd((yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 489:
#line 1296 "frame/parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 491:
#line 1300 "frame/parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 492:
#line 1301 "frame/parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 493:
#line 1302 "frame/parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 494:
#line 1305 "frame/parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 495:
#line 1307 "frame/parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 496:
#line 1308 "frame/parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 498:
#line 1310 "frame/parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 502:
#line 1314 "frame/parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 503:
#line 1315 "frame/parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 504:
#line 1316 "frame/parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 505:
#line 1318 "frame/parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::DistFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 507:
#line 1320 "frame/parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 508:
#line 1323 "frame/parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 509:
#line 1325 "frame/parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 510:
#line 1327 "frame/parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 511:
#line 1328 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 512:
#line 1329 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 513:
#line 1330 "frame/parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 514:
#line 1333 "frame/parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 515:
#line 1334 "frame/parser.Y"
    {fr->getFitsDepthCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 516:
#line 1338 "frame/parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 517:
#line 1340 "frame/parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 518:
#line 1343 "frame/parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 519:
#line 1346 "frame/parser.Y"
    {fr->getFitsSliceCmd(2);;}
    break;

  case 520:
#line 1347 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 521:
#line 1349 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 522:
#line 1351 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((yyvsp[(3) - (4)].integer), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 523:
#line 1353 "frame/parser.Y"
    {fr->getFitsSliceToImageCmd((yyvsp[(3) - (4)].real), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 524:
#line 1356 "frame/parser.Y"
    {fr->getGridCmd();;}
    break;

  case 525:
#line 1357 "frame/parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 526:
#line 1358 "frame/parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 527:
#line 1361 "frame/parser.Y"
    {fr->getLayerCountCmd();;}
    break;

  case 528:
#line 1362 "frame/parser.Y"
    {fr->getLayerNoCmd();;}
    break;

  case 529:
#line 1363 "frame/parser.Y"
    {fr->getLayerColorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 530:
#line 1364 "frame/parser.Y"
    {fr->getLayerBlendCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 531:
#line 1365 "frame/parser.Y"
    {fr->getLayerTransparencyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 532:
#line 1366 "frame/parser.Y"
    {fr->getLayerViewCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 533:
#line 1369 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 534:
#line 1370 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 535:
#line 1371 "frame/parser.Y"
    {fr->getMaskRangeCmd();;}
    break;

  case 536:
#line 1372 "frame/parser.Y"
    {fr->getMaskSystemCmd();;}
    break;

  case 537:
#line 1373 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 538:
#line 1374 "frame/parser.Y"
    {fr->getMaskCountCmd();;}
    break;

  case 539:
#line 1375 "frame/parser.Y"
    {fr->getMaskBlendCmd();;}
    break;

  case 540:
#line 1378 "frame/parser.Y"
    {(yyval.integer) = 0;;}
    break;

  case 541:
#line 1379 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 542:
#line 1382 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 543:
#line 1385 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 544:
#line 1386 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 545:
#line 1387 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 546:
#line 1390 "frame/parser.Y"
    {fr->getMultiColorSystemCmd();;}
    break;

  case 547:
#line 1393 "frame/parser.Y"
    {fr->getHLSChannelCmd();;}
    break;

  case 548:
#line 1394 "frame/parser.Y"
    {fr->getHLSSystemCmd();;}
    break;

  case 549:
#line 1395 "frame/parser.Y"
    {fr->getHLSViewCmd();;}
    break;

  case 550:
#line 1398 "frame/parser.Y"
    {fr->getHSVChannelCmd();;}
    break;

  case 551:
#line 1399 "frame/parser.Y"
    {fr->getHSVSystemCmd();;}
    break;

  case 552:
#line 1400 "frame/parser.Y"
    {fr->getHSVViewCmd();;}
    break;

  case 553:
#line 1403 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 554:
#line 1404 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 555:
#line 1405 "frame/parser.Y"
    {fr->getSmoothRadiusMinorCmd();;}
    break;

  case 556:
#line 1406 "frame/parser.Y"
    {fr->getSmoothSigmaCmd();;}
    break;

  case 557:
#line 1407 "frame/parser.Y"
    {fr->getSmoothSigmaMinorCmd();;}
    break;

  case 558:
#line 1408 "frame/parser.Y"
    {fr->getSmoothAngleCmd();;}
    break;

  case 563:
#line 1415 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 564:
#line 1416 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 566:
#line 1418 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 567:
#line 1421 "frame/parser.Y"
    {fr->get3dShadeCmd();;}
    break;

  case 568:
#line 1422 "frame/parser.Y"
    {fr->get3dShadeAmbientCmd();;}
    break;

  case 569:
#line 1423 "frame/parser.Y"
    {fr->get3dShadeStrengthCmd();;}
    break;

  case 571:
#line 1427 "frame/parser.Y"
    {fr->get3dShadeNormalCmd();;}
    break;

  case 572:
#line 1428 "frame/parser.Y"
    {fr->get3dShadeNormalStrengthCmd();;}
    break;

  case 573:
#line 1431 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 574:
#line 1432 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 575:
#line 1435 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 576:
#line 1436 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 577:
#line 1439 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 578:
#line 1440 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 579:
#line 1443 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 580:
#line 1444 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 581:
#line 1447 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 583:
#line 1449 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 584:
#line 1452 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 585:
#line 1453 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 587:
#line 1457 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 588:
#line 1461 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 589:
#line 1464 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer),
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 590:
#line 1471 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 591:
#line 1472 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 592:
#line 1475 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 593:
#line 1476 "frame/parser.Y"
    {fr->hasBgColorCmd();;}
    break;

  case 596:
#line 1479 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 597:
#line 1480 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 598:
#line 1481 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 599:
#line 1482 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 601:
#line 1484 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 602:
#line 1485 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 603:
#line 1486 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 605:
#line 1488 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 606:
#line 1489 "frame/parser.Y"
    {fr->hasImageCmd();;}
    break;

  case 607:
#line 1490 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 608:
#line 1491 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 610:
#line 1495 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 611:
#line 1498 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 612:
#line 1499 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 613:
#line 1502 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 614:
#line 1503 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 615:
#line 1504 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 616:
#line 1505 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 617:
#line 1508 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 618:
#line 1509 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 619:
#line 1510 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 620:
#line 1511 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 621:
#line 1514 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 622:
#line 1515 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 623:
#line 1516 "frame/parser.Y"
    {fr->hasWCSEquCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 624:
#line 1517 "frame/parser.Y"
    {fr->hasWCSLinearCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 625:
#line 1518 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 626:
#line 1519 "frame/parser.Y"
    {fr->hasWCS3DCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 627:
#line 1522 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 628:
#line 1523 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 629:
#line 1524 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 632:
#line 1528 "frame/parser.Y"
    {fr->iisSetCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 633:
#line 1529 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 634:
#line 1532 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 635:
#line 1535 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 636:
#line 1536 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 637:
#line 1540 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 638:
#line 1542 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 639:
#line 1543 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 646:
#line 1555 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 647:
#line 1557 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 648:
#line 1559 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 649:
#line 1560 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 650:
#line 1562 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 651:
#line 1564 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 652:
#line 1566 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 653:
#line 1568 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 654:
#line 1570 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 658:
#line 1576 "frame/parser.Y"
    {fr->loadRGBArrayCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 659:
#line 1577 "frame/parser.Y"
    {fr->loadRGBArrayCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 660:
#line 1578 "frame/parser.Y"
    {fr->loadRGBArrayCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 661:
#line 1579 "frame/parser.Y"
    {fr->loadRGBArrayCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 662:
#line 1580 "frame/parser.Y"
    {fr->loadRGBArrayCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 663:
#line 1582 "frame/parser.Y"
    {fr->loadRGBArrayCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 664:
#line 1583 "frame/parser.Y"
    {fr->loadRGBArrayCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 665:
#line 1584 "frame/parser.Y"
    {fr->loadRGBArrayCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 666:
#line 1585 "frame/parser.Y"
    {fr->loadRGBArrayCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 667:
#line 1588 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 668:
#line 1592 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 669:
#line 1594 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 670:
#line 1596 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 671:
#line 1598 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 672:
#line 1600 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 673:
#line 1602 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 674:
#line 1604 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 675:
#line 1606 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str),
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 676:
#line 1609 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 677:
#line 1611 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 678:
#line 1613 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 688:
#line 1625 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 689:
#line 1626 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 690:
#line 1627 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 691:
#line 1628 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 692:
#line 1629 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 693:
#line 1630 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 694:
#line 1632 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 695:
#line 1634 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 696:
#line 1635 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 697:
#line 1636 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 698:
#line 1637 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 699:
#line 1640 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 700:
#line 1641 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 701:
#line 1642 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 702:
#line 1643 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 703:
#line 1644 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 704:
#line 1646 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 705:
#line 1647 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 706:
#line 1648 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 707:
#line 1649 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 713:
#line 1660 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 714:
#line 1663 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 715:
#line 1666 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 716:
#line 1669 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 717:
#line 1672 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 718:
#line 1675 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 719:
#line 1678 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 720:
#line 1681 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 721:
#line 1684 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 722:
#line 1689 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 723:
#line 1692 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 724:
#line 1695 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 725:
#line 1698 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 726:
#line 1701 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 727:
#line 1704 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 728:
#line 1707 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 729:
#line 1710 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 730:
#line 1713 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 731:
#line 1716 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 732:
#line 1719 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 733:
#line 1724 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 734:
#line 1727 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 735:
#line 1730 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 736:
#line 1733 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 737:
#line 1736 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 738:
#line 1739 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer),
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 739:
#line 1742 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 740:
#line 1745 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 741:
#line 1748 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 742:
#line 1753 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 743:
#line 1755 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 744:
#line 1757 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 745:
#line 1759 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 746:
#line 1761 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 747:
#line 1763 "frame/parser.Y"
    {
	  fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str),
					   (Base::LayerType)(yyvsp[(6) - (6)].integer));
        ;}
    break;

  case 748:
#line 1768 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 749:
#line 1770 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 750:
#line 1772 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 751:
#line 1776 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 752:
#line 1779 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 753:
#line 1782 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 754:
#line 1785 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 755:
#line 1788 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 756:
#line 1791 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 757:
#line 1794 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer),
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 758:
#line 1797 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer),
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 759:
#line 1800 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 760:
#line 1803 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 761:
#line 1806 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 762:
#line 1810 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 763:
#line 1811 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 764:
#line 1812 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 765:
#line 1813 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 766:
#line 1814 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 767:
#line 1815 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 768:
#line 1817 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 769:
#line 1819 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 770:
#line 1820 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 771:
#line 1821 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 772:
#line 1822 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 773:
#line 1825 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 774:
#line 1826 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 775:
#line 1827 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 776:
#line 1828 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 777:
#line 1829 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 778:
#line 1831 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 779:
#line 1832 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 780:
#line 1833 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 781:
#line 1834 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 782:
#line 1838 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 783:
#line 1840 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 784:
#line 1841 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 785:
#line 1843 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 786:
#line 1845 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 787:
#line 1847 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 788:
#line 1850 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 789:
#line 1851 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 790:
#line 1854 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 791:
#line 1855 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 792:
#line 1856 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 793:
#line 1859 "frame/parser.Y"
    {;}
    break;

  case 794:
#line 1862 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 795:
#line 1863 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 796:
#line 1864 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 797:
#line 1865 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 798:
#line 1866 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 799:
#line 1867 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 800:
#line 1868 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 801:
#line 1872 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 803:
#line 1880 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 804:
#line 1881 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 805:
#line 1883 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 806:
#line 1885 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 807:
#line 1886 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 808:
#line 1887 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 810:
#line 1888 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 813:
#line 1891 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 814:
#line 1892 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 815:
#line 1894 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 816:
#line 1896 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 817:
#line 1898 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 818:
#line 1901 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 819:
#line 1903 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 820:
#line 1904 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 821:
#line 1906 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 822:
#line 1909 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 823:
#line 1912 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 824:
#line 1916 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 825:
#line 1919 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 826:
#line 1922 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 827:
#line 1925 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 828:
#line 1929 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 829:
#line 1933 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 830:
#line 1938 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str),
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 831:
#line 1942 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 832:
#line 1944 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 833:
#line 1945 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 834:
#line 1947 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 835:
#line 1949 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 836:
#line 1951 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 837:
#line 1953 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 838:
#line 1954 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 839:
#line 1955 "frame/parser.Y"
    {fr->markerCompositeAreaCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 840:
#line 1957 "frame/parser.Y"
    {fr->markerCompositeOperationCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 841:
#line 1959 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 842:
#line 1961 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 843:
#line 1964 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 844:
#line 1968 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 845:
#line 1972 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 846:
#line 1974 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 847:
#line 1976 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 848:
#line 1978 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 849:
#line 1980 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 850:
#line 1982 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 851:
#line 1984 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 852:
#line 1986 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 853:
#line 1988 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 854:
#line 1990 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 855:
#line 1992 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 856:
#line 1994 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 857:
#line 1996 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 858:
#line 1998 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 859:
#line 1999 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 860:
#line 2001 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 861:
#line 2003 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 862:
#line 2004 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 863:
#line 2005 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 864:
#line 2007 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 865:
#line 2009 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 866:
#line 2010 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 867:
#line 2011 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 868:
#line 2012 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 869:
#line 2014 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 870:
#line 2016 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 871:
#line 2020 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 872:
#line 2023 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 873:
#line 2026 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 874:
#line 2030 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 875:
#line 2034 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 876:
#line 2039 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str),
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 877:
#line 2043 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 878:
#line 2044 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 879:
#line 2045 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 880:
#line 2047 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 881:
#line 2049 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 882:
#line 2053 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 883:
#line 2054 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 884:
#line 2055 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 885:
#line 2057 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 886:
#line 2060 "frame/parser.Y"
    {fr->markerPolygonPointCmd((yyvsp[(1) - (7)].integer),(yyvsp[(7) - (7)].str),(Coord::CoordSystem)(yyvsp[(4) - (7)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),(Coord::SkyFormat)(yyvsp[(6) - (7)].integer));;}
    break;

  case 887:
#line 2063 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 888:
#line 2066 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 889:
#line 2069 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 890:
#line 2070 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 891:
#line 2074 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 892:
#line 2078 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 893:
#line 2080 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 894:
#line 2081 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 895:
#line 2083 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 896:
#line 2086 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 897:
#line 2089 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 898:
#line 2090 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 899:
#line 2092 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 900:
#line 2093 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 901:
#line 2094 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 902:
#line 2096 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 903:
#line 2097 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 904:
#line 2099 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 905:
#line 2102 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 906:
#line 2105 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 907:
#line 2106 "frame/parser.Y"
    {fr->markerDashListCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 908:
#line 2108 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 909:
#line 2109 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 913:
#line 2114 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 914:
#line 2115 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 915:
#line 2117 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 916:
#line 2119 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 917:
#line 2121 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 918:
#line 2122 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 922:
#line 2128 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 923:
#line 2129 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 924:
#line 2130 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 925:
#line 2131 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 926:
#line 2132 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 927:
#line 2133 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 928:
#line 2134 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 929:
#line 2135 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 930:
#line 2136 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 931:
#line 2137 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 932:
#line 2139 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 933:
#line 2141 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 934:
#line 2142 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 935:
#line 2143 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 936:
#line 2144 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 937:
#line 2145 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 938:
#line 2147 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 939:
#line 2148 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 940:
#line 2149 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 941:
#line 2150 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 942:
#line 2151 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 943:
#line 2153 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 944:
#line 2154 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 945:
#line 2155 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 946:
#line 2156 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 947:
#line 2157 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 948:
#line 2158 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 949:
#line 2159 "frame/parser.Y"
    {fr->markerDashListCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 950:
#line 2162 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 951:
#line 2163 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 952:
#line 2164 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 953:
#line 2165 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 954:
#line 2166 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 955:
#line 2167 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 956:
#line 2168 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 957:
#line 2169 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 958:
#line 2170 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 959:
#line 2171 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 960:
#line 2172 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 961:
#line 2173 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 962:
#line 2174 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 963:
#line 2175 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 964:
#line 2176 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 965:
#line 2177 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 966:
#line 2178 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 967:
#line 2179 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 968:
#line 2180 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 969:
#line 2181 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 970:
#line 2182 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 971:
#line 2185 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 972:
#line 2186 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 973:
#line 2187 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 974:
#line 2188 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 975:
#line 2189 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 976:
#line 2191 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 977:
#line 2201 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 978:
#line 2209 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 979:
#line 2218 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 980:
#line 2226 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 981:
#line 2233 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 982:
#line 2240 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 983:
#line 2248 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 984:
#line 2256 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 985:
#line 2261 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 986:
#line 2266 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 987:
#line 2271 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 988:
#line 2276 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 989:
#line 2281 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 990:
#line 2286 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 991:
#line 2291 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 992:
#line 2300 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer),
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 993:
#line 2310 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 994:
#line 2320 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 995:
#line 2329 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 996:
#line 2337 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 997:
#line 2347 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 998:
#line 2357 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 999:
#line 2367 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1000:
#line 2379 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1001:
#line 2388 "frame/parser.Y"
    {fr->createCompositeCmd(
	    (yyvsp[(2) - (3)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1003:
#line 2396 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 1004:
#line 2398 "frame/parser.Y"
    {
	  if ((yyvsp[(1) - (1)].integer) < 0 || (yyvsp[(1) - (1)].integer) > 1) {
	    fr->error("composite operation must be 0 (union) or 1 (intersection)");
	    YYERROR;
	  }
	  (yyval.integer)=(yyvsp[(1) - (1)].integer);
	;}
    break;

  case 1005:
#line 2407 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 1006:
#line 2409 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 1007:
#line 2411 "frame/parser.Y"
    {
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 1008:
#line 2416 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 1009:
#line 2419 "frame/parser.Y"
    {fr->markerDeleteAllCmd(0);;}
    break;

  case 1010:
#line 2420 "frame/parser.Y"
    {fr->markerDeleteAllCmd(1);;}
    break;

  case 1011:
#line 2421 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerDeleteAllCmd(0);
        ;}
    break;

  case 1012:
#line 2428 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1013:
#line 2430 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1014:
#line 2431 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 1015:
#line 2434 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 1016:
#line 2435 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 1017:
#line 2436 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 1018:
#line 2437 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 1019:
#line 2438 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 1020:
#line 2439 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 1021:
#line 2440 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 1023:
#line 2444 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 1024:
#line 2445 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 1025:
#line 2446 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 1026:
#line 2447 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1027:
#line 2448 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1028:
#line 2451 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(yyvsp[(6) - (8)].str),(Coord::CoordSystem)(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 1029:
#line 2453 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 1030:
#line 2455 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 1031:
#line 2457 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 1032:
#line 2459 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 1033:
#line 2461 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1034:
#line 2463 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 1035:
#line 2464 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1036:
#line 2465 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1037:
#line 2467 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1038:
#line 2469 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1039:
#line 2472 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1040:
#line 2474 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1041:
#line 2475 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1042:
#line 2476 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1043:
#line 2478 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1044:
#line 2480 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1045:
#line 2483 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer),
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1046:
#line 2486 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1047:
#line 2487 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1048:
#line 2488 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1049:
#line 2489 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1050:
#line 2491 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1051:
#line 2492 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1052:
#line 2493 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1053:
#line 2494 "frame/parser.Y"
    {fr->getMarkerCompositeAreaCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1054:
#line 2495 "frame/parser.Y"
    {fr->getMarkerCompositeOperationCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1055:
#line 2496 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1056:
#line 2497 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1057:
#line 2499 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1058:
#line 2501 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1059:
#line 2503 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1060:
#line 2505 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer),
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1061:
#line 2507 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1062:
#line 2508 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1063:
#line 2510 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1064:
#line 2512 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1065:
#line 2514 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1066:
#line 2515 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1067:
#line 2516 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1068:
#line 2518 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1069:
#line 2520 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1070:
#line 2523 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1071:
#line 2526 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1072:
#line 2527 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1073:
#line 2529 "frame/parser.Y"
    {fr->getMarkerPolygonPointCmd((yyvsp[(1) - (6)].integer),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),(Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1074:
#line 2532 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1075:
#line 2535 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer),
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1076:
#line 2538 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1077:
#line 2539 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1078:
#line 2540 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1079:
#line 2541 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1080:
#line 2543 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1081:
#line 2545 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1082:
#line 2547 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1083:
#line 2548 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1084:
#line 2550 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1085:
#line 2551 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1086:
#line 2552 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1087:
#line 2553 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1088:
#line 2554 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1089:
#line 2556 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1090:
#line 2558 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1091:
#line 2560 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1092:
#line 2562 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1093:
#line 2563 "frame/parser.Y"
    {fr->getMarkerDashListCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1095:
#line 2565 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1096:
#line 2566 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1097:
#line 2568 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1098:
#line 2570 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1099:
#line 2571 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1100:
#line 2572 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1102:
#line 2574 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1104:
#line 2578 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1105:
#line 2579 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1106:
#line 2580 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1107:
#line 2581 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1108:
#line 2582 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1109:
#line 2583 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1110:
#line 2585 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1111:
#line 2586 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1112:
#line 2588 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1113:
#line 2589 "frame/parser.Y"
    {fr->getMarkerDashListCmd();;}
    break;

  case 1114:
#line 2592 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1115:
#line 2593 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1116:
#line 2594 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1117:
#line 2595 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1118:
#line 2598 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1119:
#line 2599 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1120:
#line 2602 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1121:
#line 2603 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1122:
#line 2606 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1123:
#line 2607 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1124:
#line 2610 "frame/parser.Y"
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

  case 1125:
#line 2623 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1126:
#line 2624 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1127:
#line 2628 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1128:
#line 2629 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1129:
#line 2633 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1130:
#line 2634 "frame/parser.Y"
    {fr->markerLayerCmd(Base::FOOTPRINT);;}
    break;

  case 1131:
#line 2639 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), 0, propQMask, propQValue, taglist);;}
    break;

  case 1132:
#line 2643 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), 1, propQMask, propQValue, taglist);;}
    break;

  case 1133:
#line 2648 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str),0,"green",Coord::PHYSICAL,Coord::ICRS);;}
    break;

  case 1134:
#line 2650 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1135:
#line 2653 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer),0,"green",Coord::PHYSICAL,Coord::ICRS);;}
    break;

  case 1136:
#line 2655 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1137:
#line 2658 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (2)].str), "green");;}
    break;

  case 1138:
#line 2660 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));;}
    break;

  case 1139:
#line 2663 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1140:
#line 2664 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1141:
#line 2665 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1142:
#line 2666 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1143:
#line 2667 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1144:
#line 2668 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1145:
#line 2670 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1148:
#line 2677 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1149:
#line 2678 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1150:
#line 2679 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1151:
#line 2680 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1152:
#line 2681 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1153:
#line 2682 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1156:
#line 2687 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1157:
#line 2688 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1158:
#line 2689 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1159:
#line 2690 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1160:
#line 2691 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1161:
#line 2692 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1162:
#line 2693 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1163:
#line 2694 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1164:
#line 2695 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1165:
#line 2696 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1166:
#line 2697 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1167:
#line 2698 "frame/parser.Y"
    {(yyval.integer) = Marker::FILL;;}
    break;

  case 1170:
#line 2705 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1171:
#line 2706 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1173:
#line 2710 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(1) - (6)].str), (Base::MarkerFormat)(yyvsp[(2) - (6)].integer), (Coord::CoordSystem)(yyvsp[(3) - (6)].integer), (Coord::SkyFrame)(yyvsp[(4) - (6)].integer), (Coord::SkyFormat)(yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].integer), 0);;}
    break;

  case 1174:
#line 2712 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer), 1);;}
    break;

  case 1175:
#line 2713 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1176:
#line 2716 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1177:
#line 2717 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1178:
#line 2718 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1179:
#line 2719 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1180:
#line 2720 "frame/parser.Y"
    {fr->markerSelectFirstCmd();;}
    break;

  case 1181:
#line 2721 "frame/parser.Y"
    {fr->markerSelectLastCmd();;}
    break;

  case 1182:
#line 2724 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1183:
#line 2725 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1186:
#line 2733 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1187:
#line 2736 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1188:
#line 2737 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1192:
#line 2744 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1193:
#line 2747 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1194:
#line 2751 "frame/parser.Y"
    {fr->layerCreateCmd();;}
    break;

  case 1195:
#line 2752 "frame/parser.Y"
    {fr->layerCreateCmd();;}
    break;

  case 1196:
#line 2753 "frame/parser.Y"
    {fr->layerNoCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1197:
#line 2754 "frame/parser.Y"
    {fr->layerNoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1198:
#line 2755 "frame/parser.Y"
    {fr->layerColorCmd(0,(yyvsp[(2) - (2)].str));;}
    break;

  case 1199:
#line 2756 "frame/parser.Y"
    {fr->layerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1200:
#line 2757 "frame/parser.Y"
    {fr->layerBlendCmd(0,(FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1201:
#line 2758 "frame/parser.Y"
    {fr->layerBlendCmd((yyvsp[(1) - (3)].integer),(FitsMask::MaskBlend)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1202:
#line 2759 "frame/parser.Y"
    {fr->layerTransparencyCmd(0,(yyvsp[(2) - (2)].real));;}
    break;

  case 1203:
#line 2760 "frame/parser.Y"
    {fr->layerTransparencyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 1204:
#line 2761 "frame/parser.Y"
    {fr->layerViewCmd(0,(yyvsp[(2) - (2)].integer));;}
    break;

  case 1205:
#line 2762 "frame/parser.Y"
    {fr->layerViewCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1206:
#line 2764 "frame/parser.Y"
    {fr->layerShowCmd(0);;}
    break;

  case 1207:
#line 2765 "frame/parser.Y"
    {fr->layerShowCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1208:
#line 2766 "frame/parser.Y"
    {fr->layerHideCmd(0);;}
    break;

  case 1209:
#line 2767 "frame/parser.Y"
    {fr->layerHideCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1210:
#line 2768 "frame/parser.Y"
    {fr->layerDeleteCmd(0);;}
    break;

  case 1211:
#line 2769 "frame/parser.Y"
    {fr->layerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1212:
#line 2770 "frame/parser.Y"
    {fr->layerUpCmd(0);;}
    break;

  case 1213:
#line 2771 "frame/parser.Y"
    {fr->layerUpCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1214:
#line 2772 "frame/parser.Y"
    {fr->layerDownCmd(0);;}
    break;

  case 1215:
#line 2773 "frame/parser.Y"
    {fr->layerDownCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1216:
#line 2774 "frame/parser.Y"
    {fr->layerTopCmd(0);;}
    break;

  case 1217:
#line 2775 "frame/parser.Y"
    {fr->layerTopCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1218:
#line 2776 "frame/parser.Y"
    {fr->layerBottomCmd(0);;}
    break;

  case 1219:
#line 2777 "frame/parser.Y"
    {fr->layerBottomCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1220:
#line 2780 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1221:
#line 2781 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1222:
#line 2782 "frame/parser.Y"
    {fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1223:
#line 2783 "frame/parser.Y"
    {fr->maskRangeCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 1224:
#line 2784 "frame/parser.Y"
    {fr->maskSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1225:
#line 2785 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1226:
#line 2786 "frame/parser.Y"
    {fr->maskBlendCmd((FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1227:
#line 2787 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1228:
#line 2793 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1229:
#line 2794 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1230:
#line 2795 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1231:
#line 2796 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1232:
#line 2800 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1233:
#line 2801 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1234:
#line 2803 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1235:
#line 2808 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1237:
#line 2810 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1239:
#line 2812 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1240:
#line 2815 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1241:
#line 2817 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1242:
#line 2822 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1243:
#line 2825 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1244:
#line 2826 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1245:
#line 2827 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1246:
#line 2830 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1247:
#line 2832 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1248:
#line 2836 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1249:
#line 2837 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1250:
#line 2841 "frame/parser.Y"
    {fr->psColorSpaceCmd((PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1251:
#line 2842 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1252:
#line 2843 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1253:
#line 2844 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 1254:
#line 2850 "frame/parser.Y"
    {fr->precCmd((yyvsp[(1) - (9)].integer),(yyvsp[(2) - (9)].integer),(yyvsp[(3) - (9)].integer),(yyvsp[(4) - (9)].integer),(yyvsp[(5) - (9)].integer),(yyvsp[(6) - (9)].integer),(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 1255:
#line 2851 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->precCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 1256:
#line 2857 "frame/parser.Y"
    {(yyval.integer) = BW;;}
    break;

  case 1257:
#line 2858 "frame/parser.Y"
    {(yyval.integer) = GRAY;;}
    break;

  case 1258:
#line 2859 "frame/parser.Y"
    {(yyval.integer) = RGB;;}
    break;

  case 1259:
#line 2860 "frame/parser.Y"
    {(yyval.integer) = CMYK;;}
    break;

  case 1262:
#line 2868 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1263:
#line 2870 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1264:
#line 2871 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1265:
#line 2872 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1266:
#line 2876 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1267:
#line 2877 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1268:
#line 2878 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1269:
#line 2879 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1270:
#line 2882 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1271:
#line 2883 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1272:
#line 2884 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::FIP;;}
    break;

  case 1273:
#line 2887 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1274:
#line 2888 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1275:
#line 2889 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1276:
#line 2892 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1277:
#line 2893 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1278:
#line 2894 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1279:
#line 2898 "frame/parser.Y"
    {fr->setMultiColorSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1280:
#line 2901 "frame/parser.Y"
    {fr->setHLSChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1281:
#line 2902 "frame/parser.Y"
    {fr->setHLSChannelCmd("hue");;}
    break;

  case 1282:
#line 2903 "frame/parser.Y"
    {fr->setHLSChannelCmd("saturation");;}
    break;

  case 1283:
#line 2904 "frame/parser.Y"
    {fr->setHLSSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1284:
#line 2905 "frame/parser.Y"
    {fr->setHLSViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1285:
#line 2908 "frame/parser.Y"
    {fr->setHSVChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1286:
#line 2909 "frame/parser.Y"
    {fr->setHSVChannelCmd("hue");;}
    break;

  case 1287:
#line 2910 "frame/parser.Y"
    {fr->setHSVChannelCmd("saturation");;}
    break;

  case 1288:
#line 2911 "frame/parser.Y"
    {fr->setHSVChannelCmd("value");;}
    break;

  case 1289:
#line 2912 "frame/parser.Y"
    {fr->setHSVSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1290:
#line 2913 "frame/parser.Y"
    {fr->setHSVViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1291:
#line 2916 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1292:
#line 2917 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (2)].real))));;}
    break;

  case 1294:
#line 2919 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (2)].real))));;}
    break;

  case 1295:
#line 2920 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (3)].real))));;}
    break;

  case 1296:
#line 2923 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1297:
#line 2924 "frame/parser.Y"
    {fr->rotateMotionCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1298:
#line 2925 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1304:
#line 2933 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1305:
#line 2936 "frame/parser.Y"
    {fr->savePixelMaskFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1306:
#line 2937 "frame/parser.Y"
    {fr->savePixelMaskChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1307:
#line 2938 "frame/parser.Y"
    {fr->savePixelMaskSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1308:
#line 2942 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1309:
#line 2944 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1310:
#line 2946 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1327:
#line 2967 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1328:
#line 2968 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1329:
#line 2969 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1330:
#line 2972 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1331:
#line 2973 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1332:
#line 2974 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1333:
#line 2977 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1334:
#line 2978 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1335:
#line 2979 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1336:
#line 2982 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1337:
#line 2983 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1338:
#line 2984 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1340:
#line 2988 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1341:
#line 2989 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1342:
#line 2990 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1343:
#line 2993 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1344:
#line 2994 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1345:
#line 2995 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1346:
#line 2999 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1347:
#line 3001 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1348:
#line 3003 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1349:
#line 3006 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1350:
#line 3007 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1351:
#line 3008 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1352:
#line 3011 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1353:
#line 3012 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1354:
#line 3013 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1355:
#line 3017 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1356:
#line 3019 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1357:
#line 3021 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1358:
#line 3024 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1359:
#line 3025 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1360:
#line 3026 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1361:
#line 3029 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1362:
#line 3030 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1363:
#line 3031 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1364:
#line 3035 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1365:
#line 3037 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1366:
#line 3039 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1367:
#line 3042 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1368:
#line 3043 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1369:
#line 3044 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1370:
#line 3047 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1371:
#line 3048 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1372:
#line 3049 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1373:
#line 3052 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1374:
#line 3053 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1375:
#line 3054 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1376:
#line 3058 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1377:
#line 3060 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1378:
#line 3062 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1379:
#line 3066 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1380:
#line 3070 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1381:
#line 3072 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1382:
#line 3076 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1383:
#line 3079 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1384:
#line 3080 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1385:
#line 3081 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1386:
#line 3082 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1387:
#line 3085 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1388:
#line 3087 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1389:
#line 3089 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1390:
#line 3092 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 1392:
#line 3096 "frame/parser.Y"
    {fr->sliceCmd(2,(yyvsp[(1) - (1)].integer));;}
    break;

  case 1393:
#line 3097 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1394:
#line 3098 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1395:
#line 3101 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1396:
#line 3102 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1397:
#line 3106 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1399:
#line 3108 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1402:
#line 3113 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1403:
#line 3114 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1404:
#line 3115 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1405:
#line 3118 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1406:
#line 3119 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1407:
#line 3120 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1408:
#line 3123 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1409:
#line 3125 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1410:
#line 3130 "frame/parser.Y"
    {fr->wcsAlign2Cmd((yyvsp[(2) - (4)].integer), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1411:
#line 3131 "frame/parser.Y"
    {fr->wcsAlignPointerClearCmd();;}
    break;

  case 1412:
#line 3134 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1413:
#line 3141 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1414:
#line 3143 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1415:
#line 3145 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1416:
#line 3150 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1418:
#line 3154 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1419:
#line 3155 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1420:
#line 3156 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1421:
#line 3158 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1422:
#line 3160 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1423:
#line 3165 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 11892 "frame/parser.C"
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


#line 3169 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

