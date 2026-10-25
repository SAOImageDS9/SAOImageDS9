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
     BAR_ = 294,
     BASE_ = 295,
     BBOX_ = 296,
     BEGIN_ = 297,
     BG_ = 298,
     BIG_ = 299,
     BIGENDIAN_ = 300,
     BIN_ = 301,
     BITPIX_ = 302,
     BLEND_ = 303,
     BLOCK_ = 304,
     BORDER_ = 305,
     BOTTOM_ = 306,
     BOX_ = 307,
     BOXANNULUS_ = 308,
     BOXCAR_ = 309,
     BOXCIRCLE_ = 310,
     BPANDA_ = 311,
     BUFFER_ = 312,
     BW_ = 313,
     CALLBACK_ = 314,
     CANVAS_ = 315,
     CATALOG_ = 316,
     CELESTIAL_ = 317,
     CENTER_ = 318,
     CENTROID_ = 319,
     CHANNEL_ = 320,
     CHEVRON_ = 321,
     CIRCLE_ = 322,
     CIAO_ = 323,
     CLEAR_ = 324,
     CLIP_ = 325,
     COLOR_ = 326,
     COLORBURN_ = 327,
     COLORDODGE_ = 328,
     COLORBAR_ = 329,
     COLORMAP_ = 330,
     COLORSCALE_ = 331,
     COLORSPACE_ = 332,
     COLS_ = 333,
     COLUMN_ = 334,
     COMMAND_ = 335,
     COMPASS_ = 336,
     COMPOSITE_ = 337,
     COMPRESS_ = 338,
     CONTOUR_ = 339,
     CONTRAST_ = 340,
     COORDINATES_ = 341,
     COPY_ = 342,
     COUNT_ = 343,
     CPANDA_ = 344,
     CREATE_ = 345,
     CROP_ = 346,
     CROSS_ = 347,
     CROSSHAIR_ = 348,
     CUBE_ = 349,
     CURSOR_ = 350,
     CUT_ = 351,
     CMYK_ = 352,
     DARKEN_ = 353,
     DASH_ = 354,
     DASHLIST_ = 355,
     DATA_ = 356,
     DATAMIN_ = 357,
     DATASEC_ = 358,
     DEBUG_ = 359,
     DEGREES_ = 360,
     DEFAULT_ = 361,
     DELETE_ = 362,
     DEPTH_ = 363,
     DETECTOR_ = 364,
     DIAMOND_ = 365,
     DIFFERENCE_ = 366,
     DIM_ = 367,
     DOWN_ = 368,
     DS9_ = 369,
     EDIT_ = 370,
     ECLIPTIC_ = 371,
     ELEVATION_ = 372,
     ELLIPTIC_ = 373,
     ELLIPSE_ = 374,
     ELLIPSEANNULUS_ = 375,
     END_ = 376,
     ENVI_ = 377,
     EPANDA_ = 378,
     EPSILON_ = 379,
     EQUATORIAL_ = 380,
     ERASE_ = 381,
     EXCLUSION_ = 382,
     EXT_ = 383,
     FADE_ = 384,
     FACTOR_ = 385,
     FALSE_ = 386,
     FILE_ = 387,
     FILL_ = 388,
     FILTER_ = 389,
     FIRST_ = 390,
     FIP_ = 391,
     FIT_ = 392,
     FITS_ = 393,
     FITSY_ = 394,
     FIXED_ = 395,
     FK4_ = 396,
     FK5_ = 397,
     FONT_ = 398,
     FORMAT_ = 399,
     FOOTPRINT_ = 400,
     FROM_ = 401,
     FRONT_ = 402,
     FULL_ = 403,
     FUNCTION_ = 404,
     GALACTIC_ = 405,
     GAUSSIAN_ = 406,
     GET_ = 407,
     GLOBAL_ = 408,
     GRAPHICS_ = 409,
     GRAY_ = 410,
     GRID_ = 411,
     GZ_ = 412,
     HANDLE_ = 413,
     HARDLIGHT_ = 414,
     HAS_ = 415,
     HEAD_ = 416,
     HEADER_ = 417,
     HEIGHT_ = 418,
     HIDE_ = 419,
     HIGHLITE_ = 420,
     HISTEQU_ = 421,
     HISTOGRAM_ = 422,
     HORIZONTAL_ = 423,
     HUE_ = 424,
     HSV_ = 425,
     HLS_ = 426,
     ICRS_ = 427,
     ID_ = 428,
     IIS_ = 429,
     IMAGE_ = 430,
     INCLUDE_ = 431,
     INCR_ = 432,
     INFO_ = 433,
     ITERATION_ = 434,
     IRAF_ = 435,
     IRAFMIN_ = 436,
     J2000_ = 437,
     KEY_ = 438,
     KEYWORD_ = 439,
     LABEL_ = 440,
     LAYER_ = 441,
     LAYERNO_ = 442,
     LAST_ = 443,
     LENGTH_ = 444,
     LEVEL_ = 445,
     LIGHTEN_ = 446,
     LITTLE_ = 447,
     LITTLEENDIAN_ = 448,
     LINE_ = 449,
     LINEAR_ = 450,
     LIST_ = 451,
     LOAD_ = 452,
     LOCAL_ = 453,
     LOG_ = 454,
     LUMINOSITY_ = 455,
     MACOSX_ = 456,
     MAGNIFIER_ = 457,
     MATCH_ = 458,
     MAP_ = 459,
     MARK_ = 460,
     MARKER_ = 461,
     MASK_ = 462,
     MEDIAN_ = 463,
     MESSAGE_ = 464,
     METHOD_ = 465,
     MINMAX_ = 466,
     MINOR_ = 467,
     MIP_ = 468,
     MMAP_ = 469,
     MMAPINCR_ = 470,
     MOSAIC_ = 471,
     MODE_ = 472,
     MOTION_ = 473,
     MULTICOLOR_ = 474,
     MULTIPLY_ = 475,
     MOVE_ = 476,
     NAME_ = 477,
     NAN_ = 478,
     NATIVE_ = 479,
     NAXES_ = 480,
     NEW_ = 481,
     NEXT_ = 482,
     NO_ = 483,
     NONE_ = 484,
     NORMAL_ = 485,
     NONNAN_ = 486,
     NONZERO_ = 487,
     NOW_ = 488,
     NRRD_ = 489,
     NUMBER_ = 490,
     OBJECT_ = 491,
     OFF_ = 492,
     ON_ = 493,
     ONLY_ = 494,
     OPENARROW_ = 495,
     OPENBOX_ = 496,
     OPENCIRCLE_ = 497,
     OPENTRIANGLE_ = 498,
     OPTION_ = 499,
     ORIENT_ = 500,
     OVERLAY_ = 501,
     PAN_ = 502,
     PANNER_ = 503,
     PARSER_ = 504,
     PASTE_ = 505,
     PERF_ = 506,
     PHOTO_ = 507,
     PHYSICAL_ = 508,
     PIXEL_ = 509,
     PLOT2D_ = 510,
     PLOT3D_ = 511,
     POINT_ = 512,
     POINTER_ = 513,
     POLYGON_ = 514,
     POSTSCRIPT_ = 515,
     POW_ = 516,
     PRECISION_ = 517,
     PRINT_ = 518,
     PRESERVE_ = 519,
     PROJECTION_ = 520,
     PROPERTY_ = 521,
     PUBLICATION_ = 522,
     PROS_ = 523,
     QUERY_ = 524,
     RADIAL_ = 525,
     RADIUS_ = 526,
     RANGE_ = 527,
     REGION_ = 528,
     REPLACE_ = 529,
     RESAMPLE_ = 530,
     RESCAN_ = 531,
     RESET_ = 532,
     RESOLUTION_ = 533,
     REVEAL_ = 534,
     RGB_ = 535,
     ROOT_ = 536,
     ROTATE_ = 537,
     RULER_ = 538,
     SAMPLE_ = 539,
     SAOIMAGE_ = 540,
     SAOTNG_ = 541,
     SAVE_ = 542,
     SATURATION_ = 543,
     SCALE_ = 544,
     SCAN_ = 545,
     SCIENTIFIC_ = 546,
     SCOPE_ = 547,
     SCREEN_ = 548,
     SEGMENT_ = 549,
     SELECT_ = 550,
     SET_ = 551,
     SEXAGESIMAL_ = 552,
     SHAPE_ = 553,
     SHADE_ = 554,
     SHARED_ = 555,
     SHIFT_ = 556,
     SHMID_ = 557,
     SHOW_ = 558,
     SIGMA_ = 559,
     SINH_ = 560,
     SIZE_ = 561,
     SLICE_ = 562,
     SMMAP_ = 563,
     SMOOTH_ = 564,
     SOFTLIGHT_ = 565,
     SOCKET_ = 566,
     SOCKETGZ_ = 567,
     SOURCE_ = 568,
     SQRT_ = 569,
     SQUARED_ = 570,
     SSHARED_ = 571,
     STATS_ = 572,
     STATUS_ = 573,
     STRENGTH_ = 574,
     SUM_ = 575,
     SYNC_ = 576,
     SYSTEM_ = 577,
     TABLE_ = 578,
     TAG_ = 579,
     TEMPLATE_ = 580,
     TEXT_ = 581,
     THREADS_ = 582,
     THREED_ = 583,
     THRESHOLD_ = 584,
     THICK_ = 585,
     TOP_ = 586,
     TRANSPARENCY_ = 587,
     TRIANGLE_ = 588,
     TO_ = 589,
     TOGGLE_ = 590,
     TOPHAT_ = 591,
     TRUE_ = 592,
     TYPE_ = 593,
     UNDO_ = 594,
     UNHIGHLITE_ = 595,
     UNLOAD_ = 596,
     UNSELECT_ = 597,
     UPDATE_ = 598,
     UP_ = 599,
     USER_ = 600,
     VALUE_ = 601,
     VAR_ = 602,
     VIEW_ = 603,
     VECTOR_ = 604,
     VERSION_ = 605,
     VERTEX_ = 606,
     VERTICAL_ = 607,
     WARP_ = 608,
     WCS_ = 609,
     WCSA_ = 610,
     WCSB_ = 611,
     WCSC_ = 612,
     WCSD_ = 613,
     WCSE_ = 614,
     WCSF_ = 615,
     WCSG_ = 616,
     WCSH_ = 617,
     WCSI_ = 618,
     WCSJ_ = 619,
     WCSK_ = 620,
     WCSL_ = 621,
     WCSM_ = 622,
     WCSN_ = 623,
     WCSO_ = 624,
     WCSP_ = 625,
     WCSQ_ = 626,
     WCSR_ = 627,
     WCSS_ = 628,
     WCST_ = 629,
     WCSU_ = 630,
     WCSV_ = 631,
     WCSW_ = 632,
     WCSX_ = 633,
     WCSY_ = 634,
     WCSZ_ = 635,
     WCS0_ = 636,
     WFPC2_ = 637,
     WIDTH_ = 638,
     WIN32_ = 639,
     XML_ = 640,
     XY_ = 641,
     YES_ = 642,
     ZERO_ = 643,
     ZMAX_ = 644,
     ZSCALE_ = 645,
     PIXMASK_ = 646,
     ZOOM_ = 647,
     FIELDS_ = 648
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
#define BAR_ 294
#define BASE_ 295
#define BBOX_ 296
#define BEGIN_ 297
#define BG_ 298
#define BIG_ 299
#define BIGENDIAN_ 300
#define BIN_ 301
#define BITPIX_ 302
#define BLEND_ 303
#define BLOCK_ 304
#define BORDER_ 305
#define BOTTOM_ 306
#define BOX_ 307
#define BOXANNULUS_ 308
#define BOXCAR_ 309
#define BOXCIRCLE_ 310
#define BPANDA_ 311
#define BUFFER_ 312
#define BW_ 313
#define CALLBACK_ 314
#define CANVAS_ 315
#define CATALOG_ 316
#define CELESTIAL_ 317
#define CENTER_ 318
#define CENTROID_ 319
#define CHANNEL_ 320
#define CHEVRON_ 321
#define CIRCLE_ 322
#define CIAO_ 323
#define CLEAR_ 324
#define CLIP_ 325
#define COLOR_ 326
#define COLORBURN_ 327
#define COLORDODGE_ 328
#define COLORBAR_ 329
#define COLORMAP_ 330
#define COLORSCALE_ 331
#define COLORSPACE_ 332
#define COLS_ 333
#define COLUMN_ 334
#define COMMAND_ 335
#define COMPASS_ 336
#define COMPOSITE_ 337
#define COMPRESS_ 338
#define CONTOUR_ 339
#define CONTRAST_ 340
#define COORDINATES_ 341
#define COPY_ 342
#define COUNT_ 343
#define CPANDA_ 344
#define CREATE_ 345
#define CROP_ 346
#define CROSS_ 347
#define CROSSHAIR_ 348
#define CUBE_ 349
#define CURSOR_ 350
#define CUT_ 351
#define CMYK_ 352
#define DARKEN_ 353
#define DASH_ 354
#define DASHLIST_ 355
#define DATA_ 356
#define DATAMIN_ 357
#define DATASEC_ 358
#define DEBUG_ 359
#define DEGREES_ 360
#define DEFAULT_ 361
#define DELETE_ 362
#define DEPTH_ 363
#define DETECTOR_ 364
#define DIAMOND_ 365
#define DIFFERENCE_ 366
#define DIM_ 367
#define DOWN_ 368
#define DS9_ 369
#define EDIT_ 370
#define ECLIPTIC_ 371
#define ELEVATION_ 372
#define ELLIPTIC_ 373
#define ELLIPSE_ 374
#define ELLIPSEANNULUS_ 375
#define END_ 376
#define ENVI_ 377
#define EPANDA_ 378
#define EPSILON_ 379
#define EQUATORIAL_ 380
#define ERASE_ 381
#define EXCLUSION_ 382
#define EXT_ 383
#define FADE_ 384
#define FACTOR_ 385
#define FALSE_ 386
#define FILE_ 387
#define FILL_ 388
#define FILTER_ 389
#define FIRST_ 390
#define FIP_ 391
#define FIT_ 392
#define FITS_ 393
#define FITSY_ 394
#define FIXED_ 395
#define FK4_ 396
#define FK5_ 397
#define FONT_ 398
#define FORMAT_ 399
#define FOOTPRINT_ 400
#define FROM_ 401
#define FRONT_ 402
#define FULL_ 403
#define FUNCTION_ 404
#define GALACTIC_ 405
#define GAUSSIAN_ 406
#define GET_ 407
#define GLOBAL_ 408
#define GRAPHICS_ 409
#define GRAY_ 410
#define GRID_ 411
#define GZ_ 412
#define HANDLE_ 413
#define HARDLIGHT_ 414
#define HAS_ 415
#define HEAD_ 416
#define HEADER_ 417
#define HEIGHT_ 418
#define HIDE_ 419
#define HIGHLITE_ 420
#define HISTEQU_ 421
#define HISTOGRAM_ 422
#define HORIZONTAL_ 423
#define HUE_ 424
#define HSV_ 425
#define HLS_ 426
#define ICRS_ 427
#define ID_ 428
#define IIS_ 429
#define IMAGE_ 430
#define INCLUDE_ 431
#define INCR_ 432
#define INFO_ 433
#define ITERATION_ 434
#define IRAF_ 435
#define IRAFMIN_ 436
#define J2000_ 437
#define KEY_ 438
#define KEYWORD_ 439
#define LABEL_ 440
#define LAYER_ 441
#define LAYERNO_ 442
#define LAST_ 443
#define LENGTH_ 444
#define LEVEL_ 445
#define LIGHTEN_ 446
#define LITTLE_ 447
#define LITTLEENDIAN_ 448
#define LINE_ 449
#define LINEAR_ 450
#define LIST_ 451
#define LOAD_ 452
#define LOCAL_ 453
#define LOG_ 454
#define LUMINOSITY_ 455
#define MACOSX_ 456
#define MAGNIFIER_ 457
#define MATCH_ 458
#define MAP_ 459
#define MARK_ 460
#define MARKER_ 461
#define MASK_ 462
#define MEDIAN_ 463
#define MESSAGE_ 464
#define METHOD_ 465
#define MINMAX_ 466
#define MINOR_ 467
#define MIP_ 468
#define MMAP_ 469
#define MMAPINCR_ 470
#define MOSAIC_ 471
#define MODE_ 472
#define MOTION_ 473
#define MULTICOLOR_ 474
#define MULTIPLY_ 475
#define MOVE_ 476
#define NAME_ 477
#define NAN_ 478
#define NATIVE_ 479
#define NAXES_ 480
#define NEW_ 481
#define NEXT_ 482
#define NO_ 483
#define NONE_ 484
#define NORMAL_ 485
#define NONNAN_ 486
#define NONZERO_ 487
#define NOW_ 488
#define NRRD_ 489
#define NUMBER_ 490
#define OBJECT_ 491
#define OFF_ 492
#define ON_ 493
#define ONLY_ 494
#define OPENARROW_ 495
#define OPENBOX_ 496
#define OPENCIRCLE_ 497
#define OPENTRIANGLE_ 498
#define OPTION_ 499
#define ORIENT_ 500
#define OVERLAY_ 501
#define PAN_ 502
#define PANNER_ 503
#define PARSER_ 504
#define PASTE_ 505
#define PERF_ 506
#define PHOTO_ 507
#define PHYSICAL_ 508
#define PIXEL_ 509
#define PLOT2D_ 510
#define PLOT3D_ 511
#define POINT_ 512
#define POINTER_ 513
#define POLYGON_ 514
#define POSTSCRIPT_ 515
#define POW_ 516
#define PRECISION_ 517
#define PRINT_ 518
#define PRESERVE_ 519
#define PROJECTION_ 520
#define PROPERTY_ 521
#define PUBLICATION_ 522
#define PROS_ 523
#define QUERY_ 524
#define RADIAL_ 525
#define RADIUS_ 526
#define RANGE_ 527
#define REGION_ 528
#define REPLACE_ 529
#define RESAMPLE_ 530
#define RESCAN_ 531
#define RESET_ 532
#define RESOLUTION_ 533
#define REVEAL_ 534
#define RGB_ 535
#define ROOT_ 536
#define ROTATE_ 537
#define RULER_ 538
#define SAMPLE_ 539
#define SAOIMAGE_ 540
#define SAOTNG_ 541
#define SAVE_ 542
#define SATURATION_ 543
#define SCALE_ 544
#define SCAN_ 545
#define SCIENTIFIC_ 546
#define SCOPE_ 547
#define SCREEN_ 548
#define SEGMENT_ 549
#define SELECT_ 550
#define SET_ 551
#define SEXAGESIMAL_ 552
#define SHAPE_ 553
#define SHADE_ 554
#define SHARED_ 555
#define SHIFT_ 556
#define SHMID_ 557
#define SHOW_ 558
#define SIGMA_ 559
#define SINH_ 560
#define SIZE_ 561
#define SLICE_ 562
#define SMMAP_ 563
#define SMOOTH_ 564
#define SOFTLIGHT_ 565
#define SOCKET_ 566
#define SOCKETGZ_ 567
#define SOURCE_ 568
#define SQRT_ 569
#define SQUARED_ 570
#define SSHARED_ 571
#define STATS_ 572
#define STATUS_ 573
#define STRENGTH_ 574
#define SUM_ 575
#define SYNC_ 576
#define SYSTEM_ 577
#define TABLE_ 578
#define TAG_ 579
#define TEMPLATE_ 580
#define TEXT_ 581
#define THREADS_ 582
#define THREED_ 583
#define THRESHOLD_ 584
#define THICK_ 585
#define TOP_ 586
#define TRANSPARENCY_ 587
#define TRIANGLE_ 588
#define TO_ 589
#define TOGGLE_ 590
#define TOPHAT_ 591
#define TRUE_ 592
#define TYPE_ 593
#define UNDO_ 594
#define UNHIGHLITE_ 595
#define UNLOAD_ 596
#define UNSELECT_ 597
#define UPDATE_ 598
#define UP_ 599
#define USER_ 600
#define VALUE_ 601
#define VAR_ 602
#define VIEW_ 603
#define VECTOR_ 604
#define VERSION_ 605
#define VERTEX_ 606
#define VERTICAL_ 607
#define WARP_ 608
#define WCS_ 609
#define WCSA_ 610
#define WCSB_ 611
#define WCSC_ 612
#define WCSD_ 613
#define WCSE_ 614
#define WCSF_ 615
#define WCSG_ 616
#define WCSH_ 617
#define WCSI_ 618
#define WCSJ_ 619
#define WCSK_ 620
#define WCSL_ 621
#define WCSM_ 622
#define WCSN_ 623
#define WCSO_ 624
#define WCSP_ 625
#define WCSQ_ 626
#define WCSR_ 627
#define WCSS_ 628
#define WCST_ 629
#define WCSU_ 630
#define WCSV_ 631
#define WCSW_ 632
#define WCSX_ 633
#define WCSY_ 634
#define WCSZ_ 635
#define WCS0_ 636
#define WFPC2_ 637
#define WIDTH_ 638
#define WIN32_ 639
#define XML_ 640
#define XY_ 641
#define YES_ 642
#define ZERO_ 643
#define ZMAX_ 644
#define ZSCALE_ 645
#define PIXMASK_ 646
#define ZOOM_ 647
#define FIELDS_ 648




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
#line 943 "frame/parser.C"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 956 "frame/parser.C"

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
#define YYFINAL  407
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   6144

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  398
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  245
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1453
/* YYNRULES -- Number of states.  */
#define YYNSTATES  3150

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   648

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
       2,   397,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   395,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   396,   394,
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
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393
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
     151,   154,   156,   159,   162,   165,   167,   170,   172,   175,
     178,   181,   184,   186,   188,   190,   193,   196,   199,   202,
     205,   208,   211,   214,   217,   220,   222,   224,   226,   228,
     230,   232,   234,   236,   238,   239,   242,   245,   247,   249,
     250,   252,   254,   256,   258,   260,   262,   264,   267,   270,
     273,   276,   278,   280,   282,   284,   286,   288,   290,   292,
     294,   296,   298,   300,   302,   304,   306,   308,   310,   312,
     314,   316,   318,   320,   322,   324,   326,   328,   330,   332,
     334,   336,   338,   340,   342,   344,   346,   347,   349,   351,
     353,   355,   357,   358,   360,   362,   364,   366,   368,   370,
     372,   374,   376,   378,   380,   382,   384,   386,   388,   390,
     392,   394,   396,   398,   400,   402,   404,   406,   408,   410,
     412,   414,   416,   417,   419,   421,   423,   425,   427,   429,
     431,   432,   434,   436,   437,   439,   441,   443,   444,   446,
     448,   449,   451,   453,   454,   456,   458,   460,   462,   464,
     466,   468,   470,   472,   474,   476,   478,   480,   482,   483,
     485,   487,   489,   491,   493,   495,   497,   498,   500,   502,
     504,   506,   508,   510,   512,   513,   515,   517,   519,   520,
     522,   524,   526,   528,   530,   533,   536,   539,   542,   545,
     548,   551,   554,   557,   560,   562,   565,   568,   571,   573,
     576,   578,   581,   583,   586,   588,   591,   594,   601,   604,
     609,   612,   615,   618,   622,   625,   628,   630,   633,   635,
     638,   643,   649,   652,   656,   662,   669,   671,   673,   675,
     683,   695,   704,   717,   719,   722,   725,   729,   731,   733,
     736,   739,   742,   745,   749,   753,   756,   759,   761,   763,
     765,   767,   769,   771,   773,   776,   779,   782,   784,   788,
     791,   794,   797,   803,   813,   823,   833,   841,   843,   846,
     848,   854,   864,   874,   884,   892,   894,   897,   900,   904,
     907,   910,   913,   916,   930,   944,   957,   970,   972,   973,
     975,   977,   982,   989,   991,   993,   995,   997,   999,  1001,
    1003,  1005,  1007,  1012,  1019,  1023,  1028,  1029,  1036,  1045,
    1048,  1052,  1056,  1060,  1061,  1066,  1071,  1076,  1081,  1085,
    1089,  1091,  1095,  1101,  1106,  1111,  1115,  1118,  1119,  1121,
    1123,  1125,  1127,  1129,  1133,  1134,  1137,  1140,  1143,  1146,
    1149,  1152,  1155,  1158,  1161,  1164,  1167,  1170,  1173,  1176,
    1178,  1181,  1184,  1187,  1192,  1196,  1199,  1202,  1205,  1208,
    1211,  1213,  1217,  1220,  1223,  1226,  1229,  1231,  1234,  1243,
    1246,  1248,  1251,  1253,  1256,  1258,  1263,  1267,  1270,  1272,
    1280,  1289,  1297,  1306,  1308,  1310,  1312,  1315,  1317,  1319,
    1322,  1324,  1325,  1328,  1331,  1333,  1336,  1337,  1340,  1343,
    1345,  1347,  1350,  1353,  1356,  1358,  1360,  1362,  1364,  1366,
    1368,  1369,  1371,  1374,  1376,  1381,  1387,  1388,  1391,  1393,
    1399,  1402,  1405,  1407,  1409,  1411,  1413,  1416,  1418,  1421,
    1423,  1425,  1426,  1428,  1430,  1431,  1433,  1439,  1446,  1450,
    1457,  1461,  1463,  1467,  1469,  1471,  1473,  1477,  1484,  1492,
    1498,  1501,  1503,  1509,  1514,  1516,  1520,  1521,  1523,  1526,
    1528,  1533,  1535,  1538,  1540,  1543,  1547,  1550,  1552,  1555,
    1557,  1562,  1565,  1567,  1569,  1573,  1575,  1578,  1582,  1585,
    1586,  1588,  1590,  1595,  1598,  1599,  1601,  1605,  1610,  1615,
    1616,  1618,  1620,  1622,  1624,  1627,  1630,  1633,  1636,  1638,
    1640,  1642,  1644,  1646,  1648,  1650,  1651,  1653,  1655,  1657,
    1659,  1661,  1663,  1665,  1667,  1669,  1671,  1673,  1675,  1677,
    1679,  1682,  1684,  1687,  1689,  1692,  1695,  1698,  1701,  1703,
    1705,  1708,  1710,  1711,  1713,  1715,  1718,  1719,  1721,  1722,
    1724,  1725,  1727,  1728,  1730,  1731,  1733,  1734,  1737,  1740,
    1741,  1743,  1746,  1748,  1755,  1761,  1763,  1765,  1767,  1770,
    1773,  1776,  1778,  1780,  1782,  1784,  1787,  1789,  1791,  1793,
    1796,  1798,  1800,  1802,  1805,  1808,  1811,  1812,  1814,  1815,
    1817,  1819,  1821,  1823,  1825,  1827,  1829,  1831,  1834,  1837,
    1840,  1842,  1845,  1849,  1851,  1854,  1857,  1862,  1868,  1870,
    1881,  1883,  1886,  1890,  1894,  1897,  1900,  1903,  1906,  1909,
    1912,  1915,  1920,  1925,  1930,  1934,  1938,  1944,  1949,  1954,
    1959,  1963,  1967,  1971,  1975,  1979,  1983,  1986,  1989,  1994,
    1998,  2002,  2006,  2010,  2015,  2020,  2025,  2030,  2036,  2041,
    2048,  2056,  2061,  2066,  2072,  2075,  2079,  2083,  2087,  2091,
    2095,  2099,  2103,  2106,  2110,  2114,  2118,  2122,  2127,  2131,
    2137,  2144,  2148,  2152,  2157,  2161,  2165,  2169,  2173,  2177,
    2183,  2187,  2191,  2196,  2200,  2203,  2206,  2208,  2212,  2217,
    2222,  2227,  2232,  2237,  2244,  2249,  2254,  2260,  2265,  2270,
    2275,  2280,  2286,  2291,  2298,  2306,  2311,  2316,  2322,  2328,
    2334,  2340,  2346,  2352,  2360,  2366,  2372,  2379,  2384,  2389,
    2394,  2399,  2404,  2411,  2416,  2421,  2427,  2433,  2439,  2445,
    2451,  2458,  2464,  2472,  2481,  2487,  2493,  2500,  2504,  2508,
    2512,  2516,  2521,  2525,  2531,  2538,  2542,  2546,  2551,  2555,
    2559,  2563,  2567,  2571,  2577,  2581,  2585,  2590,  2595,  2600,
    2604,  2610,  2615,  2620,  2623,  2627,  2634,  2641,  2643,  2645,
    2647,  2650,  2653,  2656,  2660,  2664,  2667,  2680,  2683,  2686,
    2688,  2692,  2697,  2700,  2701,  2705,  2707,  2710,  2713,  2716,
    2719,  2722,  2727,  2732,  2737,  2742,  2746,  2750,  2755,  2761,
    2770,  2777,  2787,  2794,  2802,  2813,  2825,  2838,  2848,  2854,
    2861,  2865,  2871,  2877,  2883,  2890,  2896,  2901,  2906,  2911,
    2921,  2932,  2944,  2954,  2961,  2968,  2975,  2982,  2989,  2996,
    3003,  3010,  3017,  3025,  3033,  3036,  3041,  3046,  3051,  3056,
    3062,  3067,  3072,  3078,  3084,  3088,  3093,  3098,  3103,  3111,
    3121,  3128,  3139,  3151,  3164,  3174,  3178,  3181,  3185,  3191,
    3197,  3205,  3210,  3214,  3218,  3225,  3233,  3242,  3250,  3258,
    3263,  3268,  3278,  3283,  3287,  3292,  3300,  3308,  3311,  3315,
    3319,  3323,  3328,  3331,  3334,  3339,  3344,  3355,  3359,  3364,
    3366,  3370,  3373,  3376,  3379,  3382,  3386,  3392,  3397,  3403,
    3406,  3409,  3412,  3415,  3419,  3422,  3425,  3428,  3432,  3435,
    3439,  3444,  3448,  3452,  3459,  3464,  3467,  3471,  3474,  3477,
    3482,  3486,  3490,  3493,  3497,  3499,  3502,  3504,  3507,  3510,
    3513,  3517,  3519,  3521,  3523,  3525,  3528,  3530,  3533,  3536,
    3538,  3541,  3544,  3546,  3549,  3551,  3553,  3555,  3557,  3559,
    3561,  3563,  3565,  3566,  3568,  3571,  3574,  3577,  3581,  3587,
    3595,  3603,  3610,  3616,  3623,  3630,  3637,  3643,  3650,  3657,
    3664,  3671,  3678,  3685,  3692,  3704,  3712,  3720,  3728,  3738,
    3748,  3759,  3772,  3785,  3789,  3792,  3793,  3795,  3799,  3804,
    3809,  3814,  3815,  3817,  3819,  3824,  3829,  3831,  3833,  3835,
    3837,  3839,  3841,  3843,  3845,  3848,  3850,  3852,  3854,  3858,
    3862,  3871,  3878,  3889,  3897,  3905,  3911,  3918,  3925,  3929,
    3932,  3935,  3939,  3944,  3950,  3956,  3962,  3966,  3971,  3977,
    3983,  3989,  3995,  3998,  4002,  4006,  4010,  4016,  4020,  4024,
    4028,  4032,  4036,  4041,  4047,  4053,  4059,  4065,  4069,  4074,
    4080,  4086,  4089,  4092,  4096,  4100,  4106,  4113,  4120,  4124,
    4128,  4135,  4142,  4148,  4154,  4157,  4161,  4165,  4171,  4178,
    4182,  4185,  4188,  4192,  4195,  4199,  4202,  4206,  4210,  4216,
    4223,  4226,  4229,  4232,  4235,  4237,  4242,  4247,  4249,  4252,
    4255,  4258,  4261,  4264,  4267,  4270,  4274,  4277,  4281,  4284,
    4288,  4290,  4292,  4294,  4296,  4298,  4300,  4301,  4304,  4305,
    4308,  4309,  4311,  4312,  4313,  4315,  4317,  4319,  4321,  4323,
    4331,  4340,  4343,  4350,  4353,  4360,  4363,  4367,  4370,  4372,
    4374,  4378,  4382,  4384,  4389,  4392,  4394,  4398,  4402,  4407,
    4411,  4415,  4419,  4421,  4423,  4425,  4427,  4429,  4431,  4433,
    4435,  4437,  4439,  4441,  4443,  4445,  4447,  4449,  4452,  4453,
    4454,  4457,  4464,  4472,  4475,  4477,  4481,  4483,  4487,  4489,
    4491,  4493,  4496,  4499,  4501,  4505,  4506,  4507,  4510,  4513,
    4515,  4519,  4525,  4526,  4528,  4530,  4533,  4536,  4540,  4543,
    4547,  4550,  4554,  4557,  4561,  4563,  4566,  4568,  4571,  4573,
    4576,  4578,  4581,  4583,  4586,  4588,  4591,  4593,  4596,  4598,
    4601,  4604,  4608,  4611,  4614,  4617,  4620,  4622,  4624,  4626,
    4628,  4633,  4636,  4640,  4644,  4647,  4651,  4654,  4657,  4660,
    4664,  4668,  4672,  4675,  4679,  4681,  4685,  4689,  4691,  4694,
    4697,  4700,  4703,  4713,  4720,  4722,  4724,  4726,  4728,  4731,
    4734,  4738,  4742,  4744,  4747,  4751,  4755,  4757,  4760,  4762,
    4764,  4766,  4768,  4770,  4772,  4774,  4776,  4779,  4782,  4787,
    4790,  4793,  4796,  4799,  4802,  4807,  4810,  4813,  4816,  4819,
    4822,  4827,  4829,  4832,  4835,  4838,  4842,  4844,  4846,  4848,
    4851,  4854,  4857,  4860,  4863,  4866,  4869,  4872,  4875,  4879,
    4883,  4887,  4891,  4895,  4899,  4901,  4904,  4907,  4910,  4914,
    4917,  4921,  4925,  4929,  4933,  4937,  4941,  4944,  4947,  4950,
    4953,  4956,  4959,  4962,  4965,  4968,  4971,  4974,  4977,  4980,
    4983,  4987,  4991,  4995,  4998,  5001,  5004,  5008,  5012,  5016,
    5019,  5022,  5025,  5028,  5031,  5034,  5038,  5042,  5046,  5049,
    5052,  5055,  5058,  5061,  5064,  5068,  5072,  5076,  5079,  5082,
    5085,  5088,  5091,  5094,  5097,  5100,  5103,  5107,  5111,  5115,
    5120,  5127,  5130,  5132,  5134,  5136,  5138,  5140,  5141,  5147,
    5149,  5156,  5160,  5162,  5165,  5168,  5171,  5175,  5179,  5182,
    5185,  5188,  5191,  5194,  5197,  5201,  5204,  5207,  5211,  5213,
    5217,  5222,  5225,  5227,  5230,  5236,  5243,  5250,  5253,  5255,
    5258,  5261,  5267,  5274
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     399,     0,    -1,   104,   401,    -1,    46,   436,    -1,    43,
      71,     5,    -1,    43,    71,   402,    -1,    49,   441,    -1,
      63,    -1,    69,    -1,    70,   443,    -1,    74,   324,     5,
      -1,    75,   448,    -1,    76,   450,    -1,    84,   451,    -1,
      91,   460,    -1,    93,   462,    -1,    94,   463,    -1,   103,
     402,    -1,   129,   465,    -1,   139,   466,    -1,   152,   467,
      -1,   156,   518,    -1,   160,   521,    -1,   164,    -1,   165,
     402,    -1,   165,    71,     5,    -1,   170,   606,    -1,   171,
     605,    -1,   174,   527,    -1,   180,    15,     4,    -1,   197,
     530,    -1,   201,   548,    -1,   202,   549,    -1,   203,   550,
      -1,   206,   567,   551,    -1,   207,   588,    -1,   186,   587,
      -1,   219,   604,    -1,   223,    71,     5,    -1,   245,   589,
      -1,   247,   590,    -1,   248,   593,    -1,   269,    95,    -1,
     262,   595,    -1,   260,   594,    -1,   277,    -1,   273,   567,
     597,    -1,   279,   602,    -1,   280,   603,    -1,   282,   607,
      -1,   287,   609,    -1,   303,    -1,   309,   631,    -1,   327,
       4,    -1,   328,   429,    -1,   341,    -1,   343,   633,    -1,
     350,    -1,   353,   635,    -1,   354,   636,    -1,   384,   640,
      -1,   392,   641,    -1,     3,    -1,     4,    -1,   402,    -1,
     216,   402,    -1,   249,   402,    -1,   251,   402,    -1,   354,
     402,    -1,    46,   402,    -1,    49,   402,    -1,    83,   402,
      -1,    91,   402,    -1,   157,   402,    -1,   280,   402,    -1,
       4,    -1,   387,    -1,   394,    -1,   238,    -1,   337,    -1,
     228,    -1,   395,    -1,   237,    -1,   131,    -1,    -1,   281,
      40,    -1,   148,    40,    -1,   281,    -1,   148,    -1,    -1,
     405,    -1,   400,    -1,     6,    -1,     7,    -1,     8,    -1,
       9,    -1,    10,    -1,   406,   406,    -1,   407,   408,    -1,
     408,   408,    -1,   400,   400,    -1,   175,    -1,   253,    -1,
     109,    -1,    19,    -1,   411,    -1,   354,    -1,   355,    -1,
     356,    -1,   357,    -1,   358,    -1,   359,    -1,   360,    -1,
     361,    -1,   362,    -1,   363,    -1,   364,    -1,   365,    -1,
     366,    -1,   367,    -1,   368,    -1,   369,    -1,   370,    -1,
     371,    -1,   372,    -1,   373,    -1,   374,    -1,   375,    -1,
     376,    -1,   377,    -1,   378,    -1,   379,    -1,   380,    -1,
     381,    -1,    60,    -1,   248,    -1,    -1,   388,    -1,   232,
      -1,   223,    -1,   231,    -1,   272,    -1,    -1,   313,    -1,
     220,    -1,   293,    -1,   246,    -1,    98,    -1,   191,    -1,
      73,    -1,    72,    -1,   159,    -1,   310,    -1,   111,    -1,
     127,    -1,   169,    -1,   288,    -1,    71,    -1,   200,    -1,
     195,    -1,   199,    -1,   261,    -1,   314,    -1,   315,    -1,
      29,    -1,   305,    -1,   166,    -1,    31,    -1,   290,    -1,
     284,    -1,   102,    -1,   181,    -1,    -1,   141,    -1,    36,
      -1,   142,    -1,   182,    -1,   172,    -1,   150,    -1,   116,
      -1,    -1,   105,    -1,   297,    -1,    -1,   105,    -1,    24,
      -1,    25,    -1,    -1,   302,    -1,   183,    -1,    -1,    16,
      -1,   177,    -1,    -1,   175,    -1,   207,    -1,     4,    -1,
     229,    -1,    27,    -1,   240,    -1,    66,    -1,    67,    -1,
     242,    -1,    52,    -1,   241,    -1,   333,    -1,   243,    -1,
      39,    -1,    -1,    67,    -1,    52,    -1,   110,    -1,    92,
      -1,   396,    -1,    27,    -1,    55,    -1,    -1,     4,    -1,
      89,    -1,   167,    -1,   255,    -1,   256,    -1,   270,    -1,
     317,    -1,    -1,    33,    -1,   320,    -1,   208,    -1,    -1,
     224,    -1,    44,    -1,    45,    -1,   192,    -1,   193,    -1,
     348,   435,    -1,    50,   432,    -1,    81,   433,    -1,   165,
     434,    -1,   210,   600,    -1,    38,   601,    -1,   299,   430,
      -1,   289,   400,    -1,   321,     4,    -1,   329,   400,    -1,
     402,    -1,    18,   400,    -1,   319,   400,    -1,   230,   431,
      -1,   402,    -1,   319,   400,    -1,   402,    -1,    71,     5,
      -1,   402,    -1,    71,     5,    -1,   402,    -1,    71,     5,
      -1,   400,   400,    -1,   257,   400,   400,   400,   400,   400,
      -1,    11,   437,    -1,    78,     5,     5,     5,    -1,   108,
       4,    -1,   130,   438,    -1,   149,   439,    -1,    57,   306,
       4,    -1,   334,   440,    -1,   134,     5,    -1,    63,    -1,
     400,   400,    -1,   400,    -1,   400,   400,    -1,   400,    11,
     400,   400,    -1,   400,   400,    11,   400,   400,    -1,   334,
     400,    -1,   334,   400,   400,    -1,   334,   400,    11,   400,
     400,    -1,   334,   400,   400,    11,   400,   400,    -1,    33,
      -1,   320,    -1,   137,    -1,   400,   400,    11,    63,     5,
       5,     5,    -1,   400,   400,     4,   400,   400,    11,    63,
       5,     5,     5,     5,    -1,   400,   400,    11,   400,   400,
       5,     5,     5,    -1,   400,   400,     4,   400,   400,    11,
     400,   400,     5,     5,     5,     5,    -1,   400,    -1,   400,
     400,    -1,   334,   442,    -1,   223,   388,   402,    -1,   137,
      -1,   400,    -1,   400,   400,    -1,   292,   444,    -1,   217,
     445,    -1,   211,   446,    -1,   345,   400,   400,    -1,   345,
     223,   223,    -1,   390,   447,    -1,   264,   402,    -1,   153,
      -1,   198,    -1,   400,    -1,   211,    -1,   390,    -1,   389,
      -1,   345,    -1,     4,   416,    -1,   217,   416,    -1,   284,
       4,    -1,   276,    -1,   400,     4,     4,    -1,    85,   400,
      -1,   284,     4,    -1,   194,     4,    -1,     4,   400,   400,
       4,     4,    -1,   280,   400,   400,   400,   400,   400,   400,
       4,     4,    -1,   170,   400,   400,   400,   400,   400,   400,
       4,     4,    -1,   171,   400,   400,   400,   400,   400,   400,
       4,     4,    -1,   219,     4,     4,     5,     5,     5,     4,
      -1,    42,    -1,   218,   449,    -1,   121,    -1,     4,   400,
     400,     4,     4,    -1,   280,   400,   400,   400,   400,   400,
     400,     4,     4,    -1,   170,   400,   400,   400,   400,   400,
     400,     4,     4,    -1,   171,   400,   400,   400,   400,   400,
     400,     4,     4,    -1,   219,     4,     4,     5,     5,     5,
       4,    -1,   415,    -1,   199,   400,    -1,    90,   452,    -1,
     100,     4,     4,    -1,   107,   453,    -1,   197,   454,    -1,
     250,   458,    -1,   287,   459,    -1,     5,     4,     4,   457,
       4,     4,   415,   400,   455,   456,   400,   400,     5,    -1,
       5,     4,     4,   457,     4,     4,   415,   400,   400,   456,
     400,   400,     5,    -1,     5,     4,     4,   457,     4,     4,
     415,   400,   455,   400,   400,     5,    -1,     5,     4,     4,
     457,     4,     4,   415,   400,   400,   400,   400,     5,    -1,
     259,    -1,    -1,    32,    -1,     5,    -1,     5,     5,     4,
     402,    -1,     5,     4,   402,     5,   410,   417,    -1,   211,
      -1,   390,    -1,   389,    -1,   345,    -1,   153,    -1,   198,
      -1,   309,    -1,    49,    -1,     5,    -1,     5,     5,     4,
     402,    -1,     5,     5,     4,   402,     4,     4,    -1,     5,
     410,   417,    -1,    32,     5,   410,   417,    -1,    -1,   400,
     400,   400,   400,   410,   417,    -1,    63,   409,   410,   417,
     400,   400,   410,   419,    -1,   328,   461,    -1,    42,   400,
     400,    -1,   218,   400,   400,    -1,   121,   400,   400,    -1,
      -1,   400,   400,   410,   417,    -1,    42,   400,   400,     4,
      -1,   218,   400,   400,     4,    -1,   121,   400,   400,     4,
      -1,   412,   400,   400,    -1,   410,   417,   409,    -1,   402,
      -1,   353,   400,   400,    -1,    42,   218,   412,   400,   400,
      -1,   218,   412,   400,   400,    -1,    42,   218,   410,   409,
      -1,   218,   410,   409,    -1,    34,     4,    -1,    -1,    33,
      -1,   320,    -1,   208,    -1,   400,    -1,    69,    -1,   160,
     128,     5,    -1,    -1,    43,    71,    -1,    46,   470,    -1,
      49,   472,    -1,    70,   473,    -1,    75,   477,    -1,    74,
     476,    -1,    76,   479,    -1,    84,   481,    -1,    86,   484,
      -1,    91,   485,    -1,    93,   486,    -1,    95,   488,    -1,
      94,   487,    -1,   101,   489,    -1,   103,    -1,   138,   493,
      -1,   156,   499,    -1,   165,    71,    -1,   167,     5,     5,
       4,    -1,   168,    96,   468,    -1,   170,   507,    -1,   171,
     506,    -1,   174,   491,    -1,   178,   490,    -1,   180,    15,
      -1,   211,    -1,   206,   567,   561,    -1,   207,   501,    -1,
     186,   500,    -1,   219,   505,    -1,   223,    71,    -1,   245,
      -1,   247,   503,    -1,   254,   323,   412,   400,   400,     4,
       4,     5,    -1,   280,   504,    -1,   282,    -1,   309,   508,
      -1,   327,    -1,   328,   509,    -1,   338,    -1,   346,   412,
     400,   400,    -1,   352,    96,   469,    -1,   354,   516,    -1,
     392,    -1,     5,     5,   400,   400,   412,     4,   464,    -1,
       5,     5,   400,   400,   410,   417,     4,   464,    -1,     5,
       5,   400,   400,   412,     4,   464,    -1,     5,     5,   400,
     400,   410,   417,     4,   464,    -1,   108,    -1,   130,    -1,
     149,    -1,    57,   306,    -1,    95,    -1,   134,    -1,    78,
     471,    -1,   196,    -1,    -1,   211,     5,    -1,   112,     5,
      -1,   130,    -1,   223,   388,    -1,    -1,   455,   456,    -1,
     400,   456,    -1,   292,    -1,   217,    -1,   211,   474,    -1,
     345,   190,    -1,   390,   475,    -1,   264,    -1,   217,    -1,
     284,    -1,    85,    -1,   284,    -1,   194,    -1,    -1,   324,
      -1,   190,   478,    -1,     4,    -1,     4,   412,   400,   400,
      -1,     4,   400,   400,   415,   400,    -1,    -1,   190,   480,
      -1,   199,    -1,     4,   400,   400,   415,   400,    -1,   410,
     417,    -1,    70,   482,    -1,    71,    -1,    99,    -1,   100,
      -1,   190,    -1,   235,   190,    -1,   210,    -1,    76,   483,
      -1,   309,    -1,   383,    -1,    -1,   217,    -1,   292,    -1,
      -1,   199,    -1,   400,   400,   410,   417,   418,    -1,   412,
     400,   400,   410,   417,   418,    -1,   410,   417,   418,    -1,
      63,   410,   417,   418,   410,   419,    -1,   328,   410,   417,
      -1,   412,    -1,   410,   417,   418,    -1,   318,    -1,    34,
      -1,   412,    -1,   410,   417,   418,    -1,   410,   417,   409,
     400,   400,     5,    -1,     4,   410,   417,   409,   400,   400,
       5,    -1,   412,   400,   400,     4,     4,    -1,     5,   403,
      -1,    70,    -1,   412,   400,   400,     5,   403,    -1,     4,
       4,     4,     4,    -1,    95,    -1,   132,   222,   492,    -1,
      -1,     4,    -1,   400,   400,    -1,   225,    -1,    63,   410,
     417,   418,    -1,    88,    -1,   108,   496,    -1,    47,    -1,
     128,   494,    -1,   132,   222,   497,    -1,   162,   495,    -1,
     163,    -1,   236,   222,    -1,   306,    -1,   306,   410,   417,
     419,    -1,   307,   498,    -1,   383,    -1,     4,    -1,   412,
     400,   400,    -1,     4,    -1,   184,     5,    -1,     4,   184,
       5,    -1,   354,     4,    -1,    -1,     4,    -1,   403,    -1,
     403,   412,   400,   400,    -1,   403,     4,    -1,    -1,     4,
      -1,   146,   175,   410,    -1,   146,   175,     4,   410,    -1,
     334,   175,   400,   410,    -1,    -1,   244,    -1,   347,    -1,
      88,    -1,   187,    -1,    71,   502,    -1,    48,   502,    -1,
     332,   502,    -1,   348,   502,    -1,    71,    -1,   205,    -1,
     272,    -1,   322,    -1,   332,    -1,    88,    -1,    48,    -1,
      -1,     4,    -1,   264,    -1,    65,    -1,   322,    -1,   348,
      -1,   322,    -1,    65,    -1,   322,    -1,   348,    -1,    65,
      -1,   322,    -1,   348,    -1,   149,    -1,   271,    -1,   271,
     212,    -1,   304,    -1,   304,   212,    -1,    21,    -1,   348,
     515,    -1,    50,   512,    -1,    81,   513,    -1,   165,   514,
      -1,   210,    -1,    38,    -1,   299,   510,    -1,   289,    -1,
      -1,    18,    -1,   319,    -1,   230,   511,    -1,    -1,   319,
      -1,    -1,    71,    -1,    -1,    71,    -1,    -1,    71,    -1,
      -1,   257,    -1,    -1,    15,   517,    -1,   222,   411,    -1,
      -1,   258,    -1,    90,   519,    -1,   107,    -1,   410,   417,
     418,   520,     5,     5,    -1,   410,   417,   418,   520,     5,
      -1,    20,    -1,   267,    -1,    19,    -1,    43,    71,    -1,
      46,   522,    -1,    84,   523,    -1,    91,    -1,   102,    -1,
     103,    -1,   109,    -1,   138,   524,    -1,   156,    -1,   174,
      -1,   181,    -1,   206,   525,    -1,   253,    -1,   175,    -1,
     309,    -1,   322,   410,    -1,   354,   526,    -1,    79,     5,
      -1,    -1,    32,    -1,    -1,    46,    -1,    94,    -1,   216,
      -1,   165,    -1,   295,    -1,   250,    -1,   339,    -1,   410,
      -1,    62,   410,    -1,   125,   410,    -1,   195,   410,    -1,
      17,    -1,   328,   410,    -1,   226,     4,     4,    -1,   126,
      -1,   209,     5,    -1,    95,   529,    -1,   296,   132,   222,
     528,    -1,   296,     4,     4,     4,     4,    -1,   343,    -1,
     354,   400,   400,   400,   400,   400,   400,   400,   400,     4,
      -1,     5,    -1,     5,     4,    -1,     4,     4,    60,    -1,
       4,     4,   410,    -1,   217,   402,    -1,    26,   531,    -1,
     122,   533,    -1,   138,   534,    -1,   177,   547,    -1,   234,
     545,    -1,   252,   546,    -1,     5,    13,     5,   422,    -1,
       5,    14,     5,   422,    -1,     5,    65,     5,   422,    -1,
       5,   214,   422,    -1,     5,   215,   422,    -1,     5,   300,
     420,     4,   422,    -1,     5,   311,     4,   422,    -1,     5,
     312,     4,   422,    -1,     5,   347,     5,   422,    -1,   280,
      94,   532,    -1,   171,    94,   532,    -1,   170,    94,   532,
      -1,     5,    13,     5,    -1,     5,    14,     5,    -1,     5,
      65,     5,    -1,     5,   214,    -1,     5,   215,    -1,     5,
     300,   420,     4,    -1,     5,   311,     4,    -1,     5,   312,
       4,    -1,     5,   347,     5,    -1,     5,     5,   308,    -1,
       5,    13,     5,   422,    -1,     5,    14,     5,   422,    -1,
       5,    65,     5,   422,    -1,     5,   214,   421,   422,    -1,
       5,     5,   308,   421,   422,    -1,     5,   215,   421,   422,
      -1,     5,   300,   420,     4,   421,   422,    -1,     5,   316,
     420,     4,     4,   421,   422,    -1,     5,   311,     4,   422,
      -1,     5,   312,     4,   422,    -1,     5,   347,     5,   421,
     422,    -1,   307,   535,    -1,   128,    94,   536,    -1,   280,
     175,   544,    -1,   280,    94,   543,    -1,   171,   175,   544,
      -1,   171,    94,   543,    -1,   170,   175,   544,    -1,   170,
      94,   543,    -1,   216,   537,    -1,     5,    13,     5,    -1,
       5,    14,     5,    -1,     5,    65,     5,    -1,     5,   214,
     421,    -1,     5,     5,   308,   421,    -1,     5,   215,   421,
      -1,     5,   300,   420,     4,   421,    -1,     5,   316,   420,
       4,     4,   421,    -1,     5,   311,     4,    -1,     5,   312,
       4,    -1,     5,   347,     5,   421,    -1,     5,    13,     5,
      -1,     5,    14,     5,    -1,     5,    65,     5,    -1,     5,
     214,   421,    -1,     5,   215,   421,    -1,     5,   300,   420,
       4,   421,    -1,     5,   311,     4,    -1,     5,   312,     4,
      -1,     5,   347,     5,   421,    -1,   175,   180,   538,    -1,
     180,   539,    -1,   175,   540,    -1,   542,    -1,   175,   382,
     541,    -1,     5,    13,     5,   422,    -1,     5,    14,     5,
     422,    -1,     5,    65,     5,   422,    -1,     5,   214,   421,
     422,    -1,     5,   215,   421,   422,    -1,     5,   300,   420,
       4,   421,   422,    -1,     5,   311,     4,   422,    -1,     5,
     312,     4,   422,    -1,     5,   347,     5,   421,   422,    -1,
       5,    13,     5,   422,    -1,     5,    14,     5,   422,    -1,
       5,    65,     5,   422,    -1,     5,   214,   421,   422,    -1,
       5,     5,   308,   421,   422,    -1,     5,   215,   421,   422,
      -1,     5,   300,   420,     4,   421,   422,    -1,     5,   316,
     420,     4,     4,   421,   422,    -1,     5,   311,     4,   422,
      -1,     5,   312,     4,   422,    -1,     5,   347,     5,   421,
     422,    -1,   411,     5,    13,     5,   422,    -1,   411,     5,
      14,     5,   422,    -1,   411,     5,    65,     5,   422,    -1,
     411,     5,   214,   421,   422,    -1,   411,     5,   215,   421,
     422,    -1,   411,     5,   300,   420,     4,   421,   422,    -1,
     411,     5,   311,     4,   422,    -1,   411,     5,   312,     4,
     422,    -1,   411,     5,   347,     5,   421,   422,    -1,     5,
      13,     5,   422,    -1,     5,    14,     5,   422,    -1,     5,
      65,     5,   422,    -1,     5,   214,   421,   422,    -1,     5,
     215,   421,   422,    -1,     5,   300,   420,     4,   421,   422,
      -1,     5,   311,     4,   422,    -1,     5,   312,     4,   422,
      -1,     5,   347,     5,   421,   422,    -1,   411,     5,    13,
       5,   422,    -1,   411,     5,    14,     5,   422,    -1,   411,
       5,    65,     5,   422,    -1,   411,     5,   214,   421,   422,
      -1,   411,     5,     5,   308,   421,   422,    -1,   411,     5,
     215,   421,   422,    -1,   411,     5,   300,   420,     4,   421,
     422,    -1,   411,     5,   316,   420,     4,     4,   421,   422,
      -1,   411,     5,   311,     4,   422,    -1,   411,     5,   312,
       4,   422,    -1,   411,     5,   347,     5,   421,   422,    -1,
       5,    13,     5,    -1,     5,    14,     5,    -1,     5,    65,
       5,    -1,     5,   214,   421,    -1,     5,     5,   308,   421,
      -1,     5,   215,   421,    -1,     5,   300,   420,     4,   421,
      -1,     5,   316,   420,     4,     4,   421,    -1,     5,   311,
       4,    -1,     5,   312,     4,    -1,     5,   347,     5,   421,
      -1,     5,    13,     5,    -1,     5,    14,     5,    -1,     5,
      65,     5,    -1,     5,   214,   421,    -1,     5,   215,   421,
      -1,     5,   300,   420,     4,   421,    -1,     5,   311,     4,
      -1,     5,   312,     4,    -1,     5,   347,     5,   421,    -1,
       5,    13,     5,   422,    -1,     5,    65,     5,   422,    -1,
       5,   214,   422,    -1,     5,   300,   420,     4,   422,    -1,
       5,   311,     4,   422,    -1,     5,   347,     5,   422,    -1,
       5,     5,    -1,   307,     5,     5,    -1,   101,     4,     4,
       4,     4,     4,    -1,   211,     4,     4,     4,     4,     4,
      -1,   121,    -1,   263,    -1,   402,    -1,   154,   402,    -1,
      95,   402,    -1,    71,     5,    -1,     5,     4,     4,    -1,
     343,   400,   400,    -1,   392,   400,    -1,     5,     5,   411,
     417,     5,     5,   411,   417,   400,   411,   419,     5,    -1,
      64,   554,    -1,    71,     5,    -1,    87,    -1,    80,   560,
       5,    -1,    80,   560,   347,     5,    -1,    82,   107,    -1,
      -1,    90,   552,   555,    -1,    96,    -1,   107,   558,    -1,
     115,   559,    -1,   124,     4,    -1,   143,     5,    -1,   165,
      16,    -1,   165,   239,   400,   400,    -1,   165,   335,   400,
     400,    -1,     4,    20,   426,   402,    -1,    20,   317,    59,
       5,    -1,    20,   317,    59,    -1,     4,    21,   405,    -1,
       4,    21,   405,   412,    -1,     4,    21,   405,   410,   417,
      -1,     4,    22,   271,   400,   400,     4,   410,   419,    -1,
       4,    22,   271,     5,   410,   419,    -1,     4,    53,   271,
     400,   400,   400,     4,   410,   419,    -1,     4,    53,   271,
       5,   410,   419,    -1,     4,    52,   271,   400,   400,   410,
     419,    -1,     4,    56,   115,   405,   405,     4,   400,   400,
     400,     4,    -1,     4,    56,   115,   405,   405,     4,   400,
     400,   400,     4,   412,    -1,     4,    56,   115,   405,   405,
       4,   400,   400,   400,     4,   410,   417,    -1,     4,    56,
     115,     5,     5,   410,   417,   410,   419,    -1,     4,    59,
     553,     5,     5,    -1,     4,    67,   271,   400,   410,   419,
      -1,     4,    71,     5,    -1,     4,    81,    27,   402,   402,
      -1,     4,    81,   121,   423,   423,    -1,     4,    81,   185,
       5,     5,    -1,     4,    81,   271,   400,   410,   419,    -1,
       4,    81,   322,   410,   417,    -1,     4,    82,   153,   402,
      -1,     4,    82,    28,   402,    -1,     4,    82,   338,     5,
      -1,     4,    89,   115,   405,   405,     4,   400,   400,     4,
      -1,     4,    89,   115,   405,   405,     4,   400,   400,     4,
     412,    -1,     4,    89,   115,   405,   405,     4,   400,   400,
       4,   410,   417,    -1,     4,    89,   115,     5,     5,   410,
     417,   410,   419,    -1,     4,    90,    22,   271,   400,   400,
      -1,     4,    90,    53,   271,   400,   400,    -1,     4,    90,
      56,    21,   400,   400,    -1,     4,    90,    56,   271,   400,
     400,    -1,     4,    90,   120,   271,   400,   400,    -1,     4,
      90,   123,    21,   400,   400,    -1,     4,    90,   123,   271,
     400,   400,    -1,     4,    90,    89,    21,   400,   400,    -1,
       4,    90,    89,   271,   400,   400,    -1,     4,    90,   259,
     351,     4,   400,   400,    -1,     4,    90,   294,   351,     4,
     400,   400,    -1,     4,   107,    -1,     4,   107,    22,     4,
      -1,     4,   107,    53,     4,    -1,     4,   107,    56,     4,
      -1,     4,   107,   120,     4,    -1,     4,   107,    59,   553,
       5,    -1,     4,   107,   123,     4,    -1,     4,   107,    89,
       4,    -1,     4,   107,   259,   351,     4,    -1,     4,   107,
     294,   351,     4,    -1,     4,   107,   324,    -1,     4,   107,
     324,     5,    -1,     4,   107,   324,     4,    -1,     4,   115,
      42,     4,    -1,     4,   119,   271,   400,   400,   410,   419,
      -1,     4,   120,   271,   400,   400,   400,     4,   410,   419,
      -1,     4,   120,   271,     5,   410,   419,    -1,     4,   123,
     115,   405,   405,     4,   400,   400,   400,     4,    -1,     4,
     123,   115,   405,   405,     4,   400,   400,   400,     4,   412,
      -1,     4,   123,   115,   405,   405,     4,   400,   400,   400,
       4,   410,   417,    -1,     4,   123,   115,     5,     5,   410,
     417,   410,   419,    -1,     4,   143,     5,    -1,     4,   165,
      -1,     4,   165,   239,    -1,     4,   194,    27,   402,   402,
      -1,     4,   194,   121,   423,   423,    -1,     4,   194,   257,
     410,   417,   409,   409,    -1,     4,   221,   400,   400,    -1,
       4,   221,   147,    -1,     4,   221,    37,    -1,     4,   221,
     334,   410,   417,   409,    -1,     4,   259,   257,   410,   417,
     418,     5,    -1,     4,   259,   257,   410,   417,   418,   347,
       5,    -1,     4,   259,   277,   400,   400,   410,   419,    -1,
       4,   294,   277,   400,   400,   410,   419,    -1,     4,   257,
     298,   424,    -1,     4,   257,   306,     4,    -1,     4,   265,
     410,   417,   409,   409,   400,   410,   419,    -1,     4,   266,
     573,   402,    -1,     4,   282,    42,    -1,     4,   283,   144,
       5,    -1,     4,   283,   257,   410,   417,   409,   409,    -1,
       4,   283,   322,   410,   417,   410,   419,    -1,     4,   295,
      -1,     4,   295,   239,    -1,     4,   324,     5,    -1,     4,
     326,     5,    -1,     4,   326,   282,   402,    -1,     4,   340,
      -1,     4,   342,    -1,     4,   349,    27,   402,    -1,     4,
     349,   121,   423,    -1,     4,   349,   257,   410,   417,   409,
     410,   419,   400,   405,    -1,     4,   383,     4,    -1,     4,
     100,     4,     4,    -1,   183,    -1,   183,   400,   400,    -1,
     196,   568,    -1,   197,   569,    -1,   221,   570,    -1,   264,
     402,    -1,   266,   573,   402,    -1,   266,   573,   402,   400,
     400,    -1,   282,    42,   400,   400,    -1,   282,   218,   400,
     400,     4,    -1,   282,   121,    -1,   287,   577,    -1,   295,
     578,    -1,   303,   579,    -1,     5,    71,     5,    -1,     5,
      87,    -1,     5,   107,    -1,     5,    96,    -1,     5,   143,
       5,    -1,     5,   165,    -1,     5,   165,   239,    -1,     5,
     221,   400,   400,    -1,     5,   221,   147,    -1,     5,   221,
      37,    -1,     5,   221,   334,   410,   417,   409,    -1,     5,
     266,   573,   402,    -1,     5,   295,    -1,     5,   295,   239,
      -1,     5,   340,    -1,     5,   342,    -1,   324,   115,     5,
       5,    -1,   324,   107,     5,    -1,   324,   107,    16,    -1,
     324,     5,    -1,   324,   343,     5,    -1,   250,    -1,   250,
     410,    -1,   339,    -1,   340,    16,    -1,   342,    16,    -1,
     383,     4,    -1,   100,     4,     4,    -1,   295,    -1,   342,
      -1,   165,    -1,   340,    -1,    42,   221,    -1,   221,    -1,
     121,   221,    -1,    42,   115,    -1,   115,    -1,   121,   115,
      -1,    42,   282,    -1,   282,    -1,   121,   282,    -1,   107,
      -1,   326,    -1,    71,    -1,   383,    -1,   266,    -1,   143,
      -1,   183,    -1,   343,    -1,    -1,     4,    -1,    31,   402,
      -1,   271,   400,    -1,   179,     4,    -1,   244,     4,   400,
      -1,    67,   400,   400,   400,   574,    -1,   119,   400,   400,
     400,   400,   404,   574,    -1,    52,   400,   400,   400,   400,
     404,   574,    -1,   259,   400,   400,   400,   400,   574,    -1,
     259,    60,   347,     5,   574,    -1,   294,   400,   400,   400,
     400,   574,    -1,   194,   400,   400,   400,   400,   574,    -1,
     349,   400,   400,   400,   400,   574,    -1,   326,   400,   400,
     404,   574,    -1,    67,   257,   400,   400,   425,   574,    -1,
      52,   257,   400,   400,   425,   574,    -1,   110,   257,   400,
     400,   425,   574,    -1,    92,   257,   400,   400,   425,   574,
      -1,   396,   257,   400,   400,   425,   574,    -1,    27,   257,
     400,   400,   425,   574,    -1,    55,   257,   400,   400,   425,
     574,    -1,   283,   400,   400,   400,   400,   410,   417,   410,
     419,     5,   574,    -1,    81,   400,   400,   400,   410,   417,
     574,    -1,   265,   400,   400,   400,   400,   400,   574,    -1,
      22,   400,   400,   400,   400,     4,   574,    -1,   120,   400,
     400,   400,   400,   400,     4,   404,   574,    -1,    53,   400,
     400,   400,   400,   400,     4,   404,   574,    -1,    89,   400,
     400,   405,   405,     4,   400,   400,     4,   574,    -1,   123,
     400,   400,   405,   405,     4,   400,   400,   400,     4,   404,
     574,    -1,    56,   400,   400,   405,   405,     4,   400,   400,
     400,     4,   404,   574,    -1,    82,   556,   574,    -1,   325,
     557,    -1,    -1,     4,    -1,     5,   400,   400,    -1,   347,
       5,   400,   400,    -1,   400,   400,   347,     5,    -1,     5,
     410,   417,   409,    -1,    -1,   295,    -1,    16,    -1,    42,
     400,   400,     4,    -1,   218,   400,   400,     4,    -1,   121,
      -1,   114,    -1,   385,    -1,    68,    -1,   286,    -1,   285,
      -1,   268,    -1,   386,    -1,    64,   562,    -1,    71,    -1,
     143,    -1,   124,    -1,   158,   400,   400,    -1,   173,   400,
     400,    -1,     4,    20,    89,     5,     5,     5,   410,     4,
      -1,     4,    20,   167,     5,     5,     4,    -1,     4,    20,
     255,     5,     5,     5,     5,   410,   417,   427,    -1,     4,
      20,   256,     5,     5,   410,   427,    -1,     4,    20,   270,
       5,     5,     5,   410,    -1,     4,    20,   317,   410,   417,
      -1,     4,    20,   317,   101,   410,   417,    -1,    20,   317,
      16,   101,   410,   417,    -1,    20,   317,   393,    -1,   173,
      16,    -1,     4,    21,    -1,     4,    21,   412,    -1,     4,
      21,   410,   417,    -1,     4,    22,   271,   410,   419,    -1,
       4,    53,   271,   410,   419,    -1,     4,    52,   271,   410,
     419,    -1,     4,    56,    21,    -1,     4,    56,    21,   412,
      -1,     4,    56,    21,   410,   417,    -1,     4,    56,   271,
     410,   419,    -1,     4,    63,   410,   417,   418,    -1,     4,
      67,   271,   410,   419,    -1,     4,    71,    -1,     4,    81,
      27,    -1,     4,    81,   121,    -1,     4,    81,   185,    -1,
       4,    81,   271,   410,   419,    -1,     4,    81,   322,    -1,
       4,    82,   153,    -1,     4,    82,    28,    -1,     4,    82,
     338,    -1,     4,    89,    21,    -1,     4,    89,    21,   412,
      -1,     4,    89,    21,   410,   417,    -1,     4,    89,   271,
     410,   419,    -1,     4,   119,   271,   410,   419,    -1,     4,
     120,   271,   410,   419,    -1,     4,   123,    21,    -1,     4,
     123,    21,   412,    -1,     4,   123,    21,   410,   417,    -1,
       4,   123,   271,   410,   419,    -1,     4,   143,    -1,     4,
     165,    -1,     4,   194,    27,    -1,     4,   194,   121,    -1,
       4,   194,   189,   410,   419,    -1,     4,   194,   257,   410,
     417,   418,    -1,     4,   204,   189,   400,   410,   419,    -1,
       4,   257,   298,    -1,     4,   257,   306,    -1,     4,   259,
     257,   410,   417,   418,    -1,     4,   265,   257,   410,   417,
     418,    -1,     4,   265,   189,   410,   419,    -1,     4,   265,
     330,   410,   419,    -1,     4,   266,    -1,     4,   266,   573,
      -1,     4,   283,   144,    -1,     4,   283,   189,   410,   419,
      -1,     4,   283,   257,   410,   417,   418,    -1,     4,   283,
     322,    -1,     4,   295,    -1,     4,   324,    -1,     4,   324,
       4,    -1,     4,   326,    -1,     4,   326,   282,    -1,     4,
     338,    -1,     4,   349,    27,    -1,     4,   349,   121,    -1,
       4,   349,   189,   410,   419,    -1,     4,   349,   257,   410,
     417,   418,    -1,     4,   383,    -1,     4,   100,    -1,   165,
     563,    -1,   165,   235,    -1,   235,    -1,   259,   294,   400,
     400,    -1,   294,   294,   400,   400,    -1,   264,    -1,   266,
     573,    -1,   295,   564,    -1,   295,   235,    -1,   303,   565,
      -1,     5,    71,    -1,     5,   143,    -1,     5,   173,    -1,
       5,   266,   573,    -1,     5,   324,    -1,     5,   324,   235,
      -1,   324,    16,    -1,   324,   106,   222,    -1,   383,    -1,
     100,    -1,    31,    -1,   271,    -1,   179,    -1,   244,    -1,
      -1,   400,   400,    -1,    -1,   400,   400,    -1,    -1,   326,
      -1,    -1,    -1,   258,    -1,   273,    -1,   345,    -1,    61,
      -1,   145,    -1,   560,   410,   417,   418,   402,   575,   582,
      -1,   295,   560,   410,   417,   418,   402,   575,   582,    -1,
     560,     5,    -1,   560,     5,     4,     5,   410,   417,    -1,
     560,     4,    -1,   560,     4,     4,     5,   410,   417,    -1,
     138,     5,    -1,   138,     5,     5,    -1,   400,   400,    -1,
     147,    -1,    37,    -1,    42,   400,   400,    -1,   218,   400,
     400,    -1,   121,    -1,   334,   410,   417,   409,    -1,   571,
     572,    -1,   572,    -1,   573,   397,   402,    -1,    71,   397,
       5,    -1,   100,   397,     4,     4,    -1,   383,   397,     4,
      -1,   143,   397,     5,    -1,   326,   397,     5,    -1,   585,
      -1,   586,    -1,   229,    -1,   295,    -1,   165,    -1,    99,
      -1,   140,    -1,   115,    -1,   221,    -1,   282,    -1,   107,
      -1,   176,    -1,   313,    -1,   133,    -1,   566,    -1,   566,
     571,    -1,    -1,    -1,   576,   580,    -1,     5,   560,   410,
     417,   418,   402,    -1,   295,     5,   560,   410,   417,   418,
     402,    -1,   325,     5,    -1,    16,    -1,   239,   400,   400,
      -1,   335,    -1,   335,   400,   400,    -1,   135,    -1,   188,
      -1,   402,    -1,   326,   402,    -1,   580,   581,    -1,   581,
      -1,   573,   397,   402,    -1,    -1,    -1,   583,   584,    -1,
     584,   585,    -1,   585,    -1,   324,   397,     5,    -1,    59,
     397,   553,     5,     5,    -1,    -1,    90,    -1,     4,    -1,
     187,     4,    -1,    71,     5,    -1,     4,    71,     5,    -1,
      48,   414,    -1,     4,    48,   414,    -1,   332,   400,    -1,
       4,   332,   400,    -1,   348,   402,    -1,     4,   348,   402,
      -1,   303,    -1,     4,   303,    -1,   164,    -1,     4,   164,
      -1,   107,    -1,     4,   107,    -1,   344,    -1,     4,   344,
      -1,   113,    -1,     4,   113,    -1,   331,    -1,     4,   331,
      -1,    51,    -1,     4,    51,    -1,    69,    -1,    71,     5,
      -1,   205,   413,    -1,   272,   400,   400,    -1,   322,   410,
      -1,   332,   400,    -1,    48,   414,    -1,   205,     4,    -1,
     396,    -1,   394,    -1,   386,    -1,   229,    -1,   400,   400,
     400,   400,    -1,   400,   400,    -1,   412,   400,   400,    -1,
     410,   417,   409,    -1,   334,   591,    -1,    41,   400,   400,
      -1,   218,   592,    -1,   264,   402,    -1,   400,   400,    -1,
     412,   400,   400,    -1,   410,   417,   409,    -1,    42,   400,
     400,    -1,   400,   400,    -1,   121,   400,   400,    -1,   402,
      -1,   354,   411,   417,    -1,     5,     4,     4,    -1,   343,
      -1,    77,   596,    -1,   190,     4,    -1,   278,     4,    -1,
     289,   400,    -1,     4,     4,     4,     4,     4,     4,     4,
       4,     4,    -1,     4,     4,     4,     4,     4,     4,    -1,
      58,    -1,   155,    -1,   280,    -1,    97,    -1,   165,   598,
      -1,   295,   599,    -1,    42,   400,   400,    -1,   218,   400,
     400,    -1,   121,    -1,   301,   121,    -1,    42,   400,   400,
      -1,   218,   400,   400,    -1,   121,    -1,   301,   121,    -1,
     213,    -1,    12,    -1,   136,    -1,   229,    -1,    35,    -1,
     117,    -1,     4,    -1,    69,    -1,    65,     5,    -1,   322,
     410,    -1,   348,     4,     4,     4,    -1,   322,   410,    -1,
      65,     5,    -1,    65,   169,    -1,    65,   288,    -1,   322,
     410,    -1,   348,     4,     4,     4,    -1,    65,     5,    -1,
      65,   169,    -1,    65,   288,    -1,    65,   346,    -1,   322,
     410,    -1,   348,     4,     4,     4,    -1,   400,    -1,   400,
     105,    -1,   218,   608,    -1,   334,   400,    -1,   334,   400,
     105,    -1,    42,    -1,   400,    -1,   121,    -1,    26,   611,
      -1,   138,   612,    -1,   391,   610,    -1,   234,   629,    -1,
     122,   630,    -1,   252,     5,    -1,   132,     5,    -1,    65,
       5,    -1,   311,     4,    -1,   132,     5,   428,    -1,    65,
       5,   428,    -1,   311,     4,   428,    -1,   280,    94,   619,
      -1,   171,    94,   622,    -1,   170,    94,   625,    -1,   613,
      -1,   175,   613,    -1,   323,   614,    -1,   307,   615,    -1,
     128,    94,   616,    -1,   216,   617,    -1,   280,   175,   620,
      -1,   280,    94,   621,    -1,   171,   175,   623,    -1,   171,
      94,   624,    -1,   170,   175,   626,    -1,   170,    94,   627,
      -1,   275,   628,    -1,   132,     5,    -1,    65,     5,    -1,
     311,     4,    -1,   132,     5,    -1,    65,     5,    -1,   311,
       4,    -1,   132,     5,    -1,    65,     5,    -1,   311,     4,
      -1,   132,     5,    -1,    65,     5,    -1,   311,     4,    -1,
     175,   618,    -1,   132,     5,     4,    -1,    65,     5,     4,
      -1,   311,     4,     4,    -1,   132,     5,    -1,    65,     5,
      -1,   311,     4,    -1,   132,     5,   428,    -1,    65,     5,
     428,    -1,   311,     4,   428,    -1,   132,     5,    -1,    65,
       5,    -1,   311,     4,    -1,   132,     5,    -1,    65,     5,
      -1,   311,     4,    -1,   132,     5,   428,    -1,    65,     5,
     428,    -1,   311,     4,   428,    -1,   132,     5,    -1,    65,
       5,    -1,   311,     4,    -1,   132,     5,    -1,    65,     5,
      -1,   311,     4,    -1,   132,     5,   428,    -1,    65,     5,
     428,    -1,   311,     4,   428,    -1,   132,     5,    -1,    65,
       5,    -1,   311,     4,    -1,   132,     5,    -1,    65,     5,
      -1,   311,     4,    -1,   132,     5,    -1,    65,     5,    -1,
     311,     4,    -1,   132,     5,   428,    -1,    65,     5,   428,
      -1,   311,     4,   428,    -1,   132,     5,     5,   428,    -1,
     632,     4,     4,   400,   400,   405,    -1,   632,     4,    -1,
     107,    -1,    54,    -1,   336,    -1,   151,    -1,   118,    -1,
      -1,     4,   400,   400,   400,   400,    -1,   233,    -1,   233,
       4,   400,   400,   400,   400,    -1,   138,   307,   634,    -1,
       4,    -1,     4,     4,    -1,   400,   410,    -1,   400,   400,
      -1,   334,   400,   400,    -1,   411,   417,   418,    -1,    15,
     639,    -1,   277,     4,    -1,   274,   638,    -1,    23,   637,
      -1,     4,     4,    -1,     4,     5,    -1,   326,     4,     5,
      -1,     4,     4,    -1,     4,     5,    -1,   326,     4,     5,
      -1,     4,    -1,     4,   411,   417,    -1,   334,     4,   411,
     417,    -1,   258,    69,    -1,   263,    -1,   400,   400,    -1,
     400,   400,    11,   400,   400,    -1,   400,   400,    11,   412,
     400,   400,    -1,   400,   400,    11,   410,   417,   409,    -1,
     334,   642,    -1,   137,    -1,   137,   400,    -1,   400,   400,
      -1,   400,   400,    11,   400,   400,    -1,   400,   400,    11,
     412,   400,   400,    -1,   400,   400,    11,   410,   417,   409,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   505,   505,   506,   507,   508,   509,   510,   511,   512,
     513,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   541,   542,
     543,   544,   545,   546,   547,   548,   549,   550,   551,   552,
     553,   554,   555,   556,   557,   558,   559,   560,   561,   562,
     563,   564,   567,   568,   571,   572,   573,   574,   575,   576,
     577,   578,   579,   580,   581,   584,   586,   587,   588,   589,
     591,   592,   593,   594,   597,   598,   599,   600,   601,   604,
     605,   608,   609,   610,   613,   616,   619,   622,   634,   641,
     648,   656,   657,   658,   659,   660,   663,   664,   665,   666,
     667,   668,   669,   670,   671,   672,   673,   674,   675,   676,
     677,   678,   679,   680,   681,   682,   683,   684,   685,   686,
     687,   688,   689,   690,   693,   694,   697,   698,   699,   700,
     701,   702,   705,   706,   707,   708,   709,   710,   711,   712,
     713,   714,   715,   716,   717,   718,   719,   720,   721,   724,
     725,   726,   727,   728,   729,   730,   731,   734,   735,   736,
     737,   738,   741,   742,   743,   744,   745,   746,   747,   748,
     751,   752,   753,   756,   757,   758,   759,   762,   763,   764,
     767,   768,   769,   772,   773,   774,   778,   779,   780,   781,
     782,   783,   784,   785,   786,   787,   788,   789,   792,   793,
     794,   795,   796,   797,   798,   799,   802,   803,   806,   807,
     808,   809,   810,   811,   814,   815,   816,   817,   820,   821,
     822,   823,   824,   825,   828,   829,   830,   831,   832,   833,
     834,   835,   836,   837,   841,   842,   843,   844,   847,   848,
     851,   852,   855,   856,   859,   860,   863,   864,   868,   869,
     870,   871,   872,   873,   874,   875,   878,   879,   882,   883,
     884,   886,   888,   889,   890,   892,   896,   897,   900,   901,
     903,   906,   908,   914,   915,   916,   917,   920,   921,   922,
     925,   926,   927,   928,   929,   930,   931,   937,   938,   941,
     942,   943,   944,   945,   948,   949,   950,   951,   954,   955,
     960,   965,   972,   974,   976,   978,   980,   982,   983,   984,
     987,   989,   991,   993,   995,   998,   999,  1002,  1003,  1004,
    1005,  1006,  1007,  1010,  1013,  1016,  1022,  1028,  1031,  1032,
    1035,  1036,  1037,  1044,  1045,  1046,  1047,  1050,  1051,  1054,
    1055,  1058,  1059,  1060,  1064,  1066,  1070,  1071,  1074,  1076,
    1077,  1078,  1079,  1082,  1083,  1085,  1086,  1087,  1090,  1092,
    1094,  1095,  1097,  1099,  1101,  1103,  1107,  1110,  1111,  1112,
    1113,  1116,  1117,  1120,  1123,  1124,  1125,  1126,  1127,  1128,
    1129,  1130,  1131,  1132,  1133,  1134,  1135,  1136,  1137,  1138,
    1139,  1140,  1141,  1142,  1143,  1144,  1145,  1146,  1147,  1148,
    1149,  1150,  1151,  1152,  1153,  1154,  1155,  1156,  1157,  1159,
    1160,  1161,  1162,  1163,  1164,  1165,  1167,  1168,  1169,  1172,
    1174,  1178,  1180,  1184,  1185,  1186,  1187,  1188,  1189,  1190,
    1191,  1194,  1195,  1196,  1199,  1200,  1203,  1204,  1206,  1208,
    1209,  1210,  1211,  1212,  1213,  1220,  1221,  1224,  1225,  1226,
    1229,  1230,  1233,  1236,  1237,  1239,  1243,  1244,  1245,  1248,
    1252,  1254,  1255,  1256,  1257,  1258,  1259,  1260,  1261,  1262,
    1263,  1266,  1267,  1268,  1271,  1272,  1275,  1277,  1285,  1287,
    1289,  1293,  1294,  1296,  1299,  1302,  1303,  1307,  1309,  1312,
    1317,  1318,  1319,  1323,  1324,  1325,  1328,  1329,  1330,  1333,
    1334,  1336,  1337,  1338,  1339,  1340,  1341,  1342,  1343,  1344,
    1345,  1347,  1348,  1351,  1352,  1355,  1356,  1357,  1358,  1361,
    1362,  1365,  1367,  1370,  1374,  1375,  1376,  1378,  1380,  1384,
    1385,  1386,  1389,  1390,  1391,  1392,  1393,  1394,  1397,  1398,
    1399,  1400,  1401,  1402,  1403,  1406,  1407,  1410,  1413,  1414,
    1415,  1418,  1421,  1422,  1423,  1426,  1427,  1428,  1431,  1432,
    1433,  1434,  1435,  1436,  1439,  1440,  1441,  1442,  1443,  1444,
    1445,  1446,  1449,  1450,  1451,  1452,  1455,  1456,  1459,  1460,
    1463,  1464,  1467,  1468,  1471,  1472,  1475,  1476,  1477,  1480,
    1481,  1484,  1485,  1488,  1491,  1499,  1500,  1503,  1504,  1505,
    1506,  1507,  1508,  1509,  1510,  1511,  1512,  1513,  1514,  1515,
    1516,  1517,  1518,  1519,  1520,  1523,  1526,  1527,  1530,  1531,
    1532,  1533,  1536,  1537,  1538,  1539,  1542,  1543,  1544,  1545,
    1546,  1547,  1550,  1551,  1552,  1553,  1554,  1555,  1557,  1558,
    1563,  1564,  1567,  1569,  1571,  1574,  1575,  1576,  1577,  1578,
    1579,  1582,  1584,  1586,  1588,  1589,  1591,  1593,  1595,  1597,
    1599,  1600,  1601,  1604,  1605,  1606,  1607,  1608,  1609,  1611,
    1612,  1613,  1616,  1619,  1621,  1623,  1625,  1627,  1629,  1631,
    1633,  1636,  1638,  1640,  1642,  1643,  1644,  1645,  1646,  1647,
    1648,  1649,  1650,  1653,  1654,  1655,  1656,  1657,  1658,  1659,
    1661,  1663,  1664,  1665,  1668,  1669,  1670,  1671,  1672,  1673,
    1675,  1676,  1677,  1680,  1681,  1682,  1683,  1684,  1687,  1690,
    1693,  1696,  1699,  1702,  1705,  1708,  1711,  1716,  1719,  1722,
    1725,  1728,  1731,  1734,  1737,  1740,  1743,  1746,  1751,  1754,
    1757,  1760,  1763,  1766,  1769,  1772,  1775,  1780,  1782,  1784,
    1786,  1788,  1790,  1795,  1797,  1799,  1803,  1806,  1809,  1812,
    1815,  1818,  1821,  1824,  1827,  1830,  1833,  1838,  1839,  1840,
    1841,  1842,  1843,  1844,  1846,  1848,  1849,  1850,  1853,  1854,
    1855,  1856,  1857,  1858,  1860,  1861,  1862,  1865,  1867,  1869,
    1870,  1872,  1874,  1878,  1879,  1882,  1883,  1884,  1887,  1890,
    1891,  1892,  1893,  1894,  1895,  1896,  1899,  1907,  1908,  1909,
    1910,  1912,  1914,  1915,  1915,  1916,  1917,  1918,  1919,  1920,
    1922,  1923,  1925,  1928,  1930,  1932,  1935,  1936,  1937,  1940,
    1943,  1946,  1950,  1953,  1956,  1959,  1963,  1968,  1973,  1975,
    1977,  1978,  1980,  1982,  1984,  1986,  1988,  1989,  1990,  1992,
    1994,  1996,  2000,  2005,  2007,  2009,  2011,  2013,  2015,  2017,
    2019,  2021,  2023,  2025,  2028,  2029,  2031,  2033,  2034,  2036,
    2038,  2039,  2040,  2042,  2044,  2045,  2046,  2048,  2049,  2052,
    2056,  2059,  2062,  2066,  2071,  2077,  2078,  2079,  2081,  2082,
    2083,  2087,  2089,  2090,  2091,  2094,  2097,  2100,  2103,  2106,
    2108,  2110,  2115,  2118,  2119,  2120,  2123,  2127,  2128,  2130,
    2131,  2132,  2134,  2135,  2137,  2138,  2139,  2144,  2145,  2147,
    2148,  2150,  2151,  2152,  2153,  2154,  2155,  2157,  2159,  2161,
    2162,  2163,  2165,  2167,  2168,  2169,  2170,  2171,  2172,  2173,
    2174,  2175,  2176,  2177,  2179,  2181,  2182,  2183,  2184,  2186,
    2187,  2188,  2189,  2190,  2192,  2193,  2194,  2195,  2196,  2197,
    2198,  2201,  2202,  2203,  2204,  2205,  2206,  2207,  2208,  2209,
    2210,  2211,  2212,  2213,  2214,  2215,  2216,  2217,  2218,  2219,
    2220,  2221,  2224,  2225,  2226,  2227,  2228,  2229,  2237,  2244,
    2253,  2262,  2269,  2274,  2281,  2289,  2297,  2304,  2309,  2314,
    2319,  2324,  2329,  2334,  2340,  2350,  2360,  2370,  2377,  2387,
    2397,  2406,  2418,  2431,  2437,  2440,  2441,  2450,  2452,  2454,
    2459,  2463,  2464,  2465,  2471,  2473,  2475,  2478,  2479,  2480,
    2481,  2482,  2483,  2484,  2487,  2488,  2489,  2490,  2491,  2492,
    2494,  2496,  2498,  2500,  2502,  2504,  2506,  2508,  2510,  2513,
    2514,  2515,  2516,  2518,  2521,  2523,  2525,  2526,  2527,  2529,
    2532,  2535,  2537,  2538,  2539,  2540,  2541,  2543,  2544,  2545,
    2546,  2547,  2548,  2549,  2551,  2553,  2555,  2558,  2559,  2560,
    2562,  2565,  2566,  2567,  2568,  2569,  2571,  2574,  2578,  2579,
    2580,  2583,  2586,  2589,  2591,  2592,  2593,  2594,  2596,  2599,
    2600,  2602,  2603,  2604,  2605,  2606,  2608,  2609,  2610,  2612,
    2615,  2616,  2617,  2618,  2619,  2620,  2622,  2624,  2625,  2626,
    2627,  2629,  2631,  2632,  2633,  2634,  2635,  2636,  2638,  2639,
    2641,  2642,  2645,  2646,  2647,  2648,  2651,  2652,  2655,  2656,
    2659,  2660,  2663,  2676,  2677,  2681,  2682,  2686,  2687,  2690,
    2694,  2700,  2702,  2705,  2707,  2710,  2712,  2716,  2717,  2718,
    2719,  2720,  2721,  2722,  2726,  2727,  2730,  2731,  2732,  2733,
    2734,  2735,  2736,  2737,  2740,  2741,  2742,  2743,  2744,  2745,
    2746,  2747,  2748,  2749,  2750,  2751,  2754,  2755,  2758,  2759,
    2759,  2762,  2764,  2766,  2769,  2770,  2771,  2772,  2773,  2774,
    2777,  2778,  2781,  2782,  2785,  2789,  2790,  2790,  2793,  2794,
    2797,  2800,  2804,  2805,  2806,  2807,  2808,  2809,  2810,  2811,
    2812,  2813,  2814,  2815,  2817,  2818,  2819,  2820,  2821,  2822,
    2823,  2824,  2825,  2826,  2827,  2828,  2829,  2830,  2833,  2834,
    2835,  2836,  2837,  2838,  2839,  2840,  2846,  2847,  2848,  2849,
    2852,  2854,  2855,  2860,  2862,  2863,  2864,  2865,  2868,  2869,
    2874,  2878,  2879,  2880,  2883,  2884,  2889,  2890,  2893,  2895,
    2896,  2897,  2902,  2904,  2910,  2911,  2912,  2913,  2916,  2917,
    2920,  2922,  2924,  2925,  2928,  2930,  2931,  2932,  2935,  2936,
    2937,  2940,  2941,  2942,  2945,  2946,  2949,  2950,  2951,  2954,
    2958,  2959,  2960,  2961,  2962,  2965,  2966,  2967,  2968,  2969,
    2970,  2973,  2974,  2975,  2976,  2977,  2980,  2981,  2982,  2985,
    2986,  2987,  2988,  2989,  2990,  2993,  2994,  2995,  2998,  3000,
    3002,  3004,  3005,  3006,  3009,  3010,  3011,  3012,  3013,  3014,
    3015,  3016,  3017,  3018,  3019,  3020,  3021,  3024,  3025,  3026,
    3029,  3030,  3031,  3034,  3035,  3036,  3039,  3040,  3041,  3044,
    3045,  3046,  3047,  3050,  3051,  3052,  3055,  3057,  3059,  3063,
    3064,  3065,  3068,  3069,  3070,  3073,  3075,  3077,  3081,  3082,
    3083,  3086,  3087,  3088,  3091,  3093,  3095,  3099,  3100,  3101,
    3104,  3105,  3106,  3109,  3110,  3111,  3114,  3116,  3118,  3122,
    3126,  3128,  3133,  3136,  3137,  3138,  3139,  3142,  3143,  3146,
    3148,  3150,  3153,  3154,  3155,  3158,  3159,  3162,  3164,  3165,
    3166,  3167,  3170,  3171,  3172,  3175,  3176,  3177,  3180,  3181,
    3186,  3188,  3191,  3198,  3199,  3201,  3206,  3208,  3211,  3212,
    3213,  3214,  3216,  3221
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
  "BAR_", "BASE_", "BBOX_", "BEGIN_", "BG_", "BIG_", "BIGENDIAN_", "BIN_",
  "BITPIX_", "BLEND_", "BLOCK_", "BORDER_", "BOTTOM_", "BOX_",
  "BOXANNULUS_", "BOXCAR_", "BOXCIRCLE_", "BPANDA_", "BUFFER_", "BW_",
  "CALLBACK_", "CANVAS_", "CATALOG_", "CELESTIAL_", "CENTER_", "CENTROID_",
  "CHANNEL_", "CHEVRON_", "CIRCLE_", "CIAO_", "CLEAR_", "CLIP_", "COLOR_",
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
  "OBJECT_", "OFF_", "ON_", "ONLY_", "OPENARROW_", "OPENBOX_",
  "OPENCIRCLE_", "OPENTRIANGLE_", "OPTION_", "ORIENT_", "OVERLAY_", "PAN_",
  "PANNER_", "PARSER_", "PASTE_", "PERF_", "PHOTO_", "PHYSICAL_", "PIXEL_",
  "PLOT2D_", "PLOT3D_", "POINT_", "POINTER_", "POLYGON_", "POSTSCRIPT_",
  "POW_", "PRECISION_", "PRINT_", "PRESERVE_", "PROJECTION_", "PROPERTY_",
  "PUBLICATION_", "PROS_", "QUERY_", "RADIAL_", "RADIUS_", "RANGE_",
  "REGION_", "REPLACE_", "RESAMPLE_", "RESCAN_", "RESET_", "RESOLUTION_",
  "REVEAL_", "RGB_", "ROOT_", "ROTATE_", "RULER_", "SAMPLE_", "SAOIMAGE_",
  "SAOTNG_", "SAVE_", "SATURATION_", "SCALE_", "SCAN_", "SCIENTIFIC_",
  "SCOPE_", "SCREEN_", "SEGMENT_", "SELECT_", "SET_", "SEXAGESIMAL_",
  "SHAPE_", "SHADE_", "SHARED_", "SHIFT_", "SHMID_", "SHOW_", "SIGMA_",
  "SINH_", "SIZE_", "SLICE_", "SMMAP_", "SMOOTH_", "SOFTLIGHT_", "SOCKET_",
  "SOCKETGZ_", "SOURCE_", "SQRT_", "SQUARED_", "SSHARED_", "STATS_",
  "STATUS_", "STRENGTH_", "SUM_", "SYNC_", "SYSTEM_", "TABLE_", "TAG_",
  "TEMPLATE_", "TEXT_", "THREADS_", "THREED_", "THRESHOLD_", "THICK_",
  "TOP_", "TRANSPARENCY_", "TRIANGLE_", "TO_", "TOGGLE_", "TOPHAT_",
  "TRUE_", "TYPE_", "UNDO_", "UNHIGHLITE_", "UNLOAD_", "UNSELECT_",
  "UPDATE_", "UP_", "USER_", "VALUE_", "VAR_", "VIEW_", "VECTOR_",
  "VERSION_", "VERTEX_", "VERTICAL_", "WARP_", "WCS_", "WCSA_", "WCSB_",
  "WCSC_", "WCSD_", "WCSE_", "WCSF_", "WCSG_", "WCSH_", "WCSI_", "WCSJ_",
  "WCSK_", "WCSL_", "WCSM_", "WCSN_", "WCSO_", "WCSP_", "WCSQ_", "WCSR_",
  "WCSS_", "WCST_", "WCSU_", "WCSV_", "WCSW_", "WCSX_", "WCSY_", "WCSZ_",
  "WCS0_", "WFPC2_", "WIDTH_", "WIN32_", "XML_", "XY_", "YES_", "ZERO_",
  "ZMAX_", "ZSCALE_", "PIXMASK_", "ZOOM_", "FIELDS_", "'Y'", "'N'", "'X'",
  "'='", "$accept", "command", "numeric", "debug", "yesno", "fileNameType",
  "optangle", "angle", "sexagesimal", "hms", "dms", "coord", "coordSystem",
  "wcsSystem", "internalSystem", "maskType", "maskBlend", "scaleType",
  "minmaxMode", "skyFrame", "skyFormat", "skyDist", "shmType", "incrLoad",
  "layerType", "lineEnd", "pointShape", "pointSize", "analysisTask",
  "analysisMethod", "endian", "threed", "threedShade", "threedShadeNormal",
  "threedBorder", "threedCompass", "threedHighlite", "threedView", "bin",
  "binAbout", "binFactor", "binFunction", "binTo", "block", "blockTo",
  "clip", "clipScope", "clipMode", "clipMinMax", "clipZScale", "colormap",
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
  "renderBackground", "reveal", "rgb", "multicolor", "hls", "hsv",
  "rotate", "rotateMotion", "save", "savePixelMask", "saveArray",
  "saveFits", "saveFitsImage", "saveFitsTable", "saveFitsSlice",
  "saveFitsExtCube", "saveFitsMosaic", "saveFitsMosaicImage",
  "saveArrayRGBCube", "saveFitsRGBImage", "saveFitsRGBCube",
  "saveArrayHLSCube", "saveFitsHLSImage", "saveFitsHLSCube",
  "saveArrayHSVCube", "saveFitsHSVImage", "saveFitsHSVCube",
  "saveFitsResample", "saveNRRD", "saveENVI", "smooth", "smoothFunction",
  "update", "updateFitsSlice", "warp", "wcs", "wcsAppend", "wcsReplace",
  "wcsAlign", "win32", "zoom", "zoomTo", 0
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
     635,   636,   637,   638,   639,   640,   641,   642,   643,   644,
     645,   646,   647,   648,    89,    78,    88,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   398,   399,   399,   399,   399,   399,   399,   399,   399,
     399,   399,   399,   399,   399,   399,   399,   399,   399,   399,
     399,   399,   399,   399,   399,   399,   399,   399,   399,   399,
     399,   399,   399,   399,   399,   399,   399,   399,   399,   399,
     399,   399,   399,   399,   399,   399,   399,   399,   399,   399,
     399,   399,   399,   399,   399,   399,   399,   399,   399,   399,
     399,   399,   400,   400,   401,   401,   401,   401,   401,   401,
     401,   401,   401,   401,   401,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   403,   403,   403,   403,   403,   404,
     404,   405,   405,   405,   406,   407,   408,   409,   409,   409,
     409,   410,   410,   410,   410,   410,   411,   411,   411,   411,
     411,   411,   411,   411,   411,   411,   411,   411,   411,   411,
     411,   411,   411,   411,   411,   411,   411,   411,   411,   411,
     411,   411,   411,   411,   412,   412,   413,   413,   413,   413,
     413,   413,   414,   414,   414,   414,   414,   414,   414,   414,
     414,   414,   414,   414,   414,   414,   414,   414,   414,   415,
     415,   415,   415,   415,   415,   415,   415,   416,   416,   416,
     416,   416,   417,   417,   417,   417,   417,   417,   417,   417,
     418,   418,   418,   419,   419,   419,   419,   420,   420,   420,
     421,   421,   421,   422,   422,   422,   423,   423,   423,   423,
     423,   423,   423,   423,   423,   423,   423,   423,   424,   424,
     424,   424,   424,   424,   424,   424,   425,   425,   426,   426,
     426,   426,   426,   426,   427,   427,   427,   427,   428,   428,
     428,   428,   428,   428,   429,   429,   429,   429,   429,   429,
     429,   429,   429,   429,   430,   430,   430,   430,   431,   431,
     432,   432,   433,   433,   434,   434,   435,   435,   436,   436,
     436,   436,   436,   436,   436,   436,   437,   437,   438,   438,
     438,   438,   438,   438,   438,   438,   439,   439,   440,   440,
     440,   440,   440,   441,   441,   441,   441,   442,   442,   442,
     443,   443,   443,   443,   443,   443,   443,   444,   444,   445,
     445,   445,   445,   445,   446,   446,   446,   446,   447,   447,
     447,   447,   448,   448,   448,   448,   448,   448,   448,   448,
     449,   449,   449,   449,   449,   450,   450,   451,   451,   451,
     451,   451,   451,   452,   452,   452,   452,   452,   453,   453,
     454,   454,   454,   455,   455,   455,   455,   456,   456,   457,
     457,   458,   458,   458,   459,   459,   460,   460,   460,   460,
     460,   460,   460,   461,   461,   461,   461,   461,   462,   462,
     462,   462,   462,   462,   462,   462,   463,   464,   464,   464,
     464,   465,   465,   466,   467,   467,   467,   467,   467,   467,
     467,   467,   467,   467,   467,   467,   467,   467,   467,   467,
     467,   467,   467,   467,   467,   467,   467,   467,   467,   467,
     467,   467,   467,   467,   467,   467,   467,   467,   467,   467,
     467,   467,   467,   467,   467,   467,   467,   467,   467,   468,
     468,   469,   469,   470,   470,   470,   470,   470,   470,   470,
     470,   471,   471,   471,   472,   472,   473,   473,   473,   473,
     473,   473,   473,   473,   473,   474,   474,   475,   475,   475,
     476,   476,   477,   478,   478,   478,   479,   479,   479,   480,
     481,   481,   481,   481,   481,   481,   481,   481,   481,   481,
     481,   482,   482,   482,   483,   483,   484,   484,   485,   485,
     485,   486,   486,   486,   487,   488,   488,   489,   489,   489,
     490,   490,   490,   491,   491,   491,   492,   492,   492,   493,
     493,   493,   493,   493,   493,   493,   493,   493,   493,   493,
     493,   493,   493,   494,   494,   495,   495,   495,   495,   496,
     496,   497,   497,   497,   498,   498,   498,   498,   498,   499,
     499,   499,   500,   500,   500,   500,   500,   500,   501,   501,
     501,   501,   501,   501,   501,   502,   502,   503,   504,   504,
     504,   505,   506,   506,   506,   507,   507,   507,   508,   508,
     508,   508,   508,   508,   509,   509,   509,   509,   509,   509,
     509,   509,   510,   510,   510,   510,   511,   511,   512,   512,
     513,   513,   514,   514,   515,   515,   516,   516,   516,   517,
     517,   518,   518,   519,   519,   520,   520,   521,   521,   521,
     521,   521,   521,   521,   521,   521,   521,   521,   521,   521,
     521,   521,   521,   521,   521,   522,   523,   523,   524,   524,
     524,   524,   525,   525,   525,   525,   526,   526,   526,   526,
     526,   526,   527,   527,   527,   527,   527,   527,   527,   527,
     528,   528,   529,   529,   529,   530,   530,   530,   530,   530,
     530,   531,   531,   531,   531,   531,   531,   531,   531,   531,
     531,   531,   531,   532,   532,   532,   532,   532,   532,   532,
     532,   532,   533,   534,   534,   534,   534,   534,   534,   534,
     534,   534,   534,   534,   534,   534,   534,   534,   534,   534,
     534,   534,   534,   535,   535,   535,   535,   535,   535,   535,
     535,   535,   535,   535,   536,   536,   536,   536,   536,   536,
     536,   536,   536,   537,   537,   537,   537,   537,   538,   538,
     538,   538,   538,   538,   538,   538,   538,   539,   539,   539,
     539,   539,   539,   539,   539,   539,   539,   539,   540,   540,
     540,   540,   540,   540,   540,   540,   540,   541,   541,   541,
     541,   541,   541,   541,   541,   541,   542,   542,   542,   542,
     542,   542,   542,   542,   542,   542,   542,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   544,   544,
     544,   544,   544,   544,   544,   544,   544,   545,   545,   545,
     545,   545,   545,   546,   546,   547,   547,   547,   548,   549,
     549,   549,   549,   549,   549,   549,   550,   551,   551,   551,
     551,   551,   551,   552,   551,   551,   551,   551,   551,   551,
     551,   551,   551,   551,   551,   551,   551,   551,   551,   551,
     551,   551,   551,   551,   551,   551,   551,   551,   551,   551,
     551,   551,   551,   551,   551,   551,   551,   551,   551,   551,
     551,   551,   551,   551,   551,   551,   551,   551,   551,   551,
     551,   551,   551,   551,   551,   551,   551,   551,   551,   551,
     551,   551,   551,   551,   551,   551,   551,   551,   551,   551,
     551,   551,   551,   551,   551,   551,   551,   551,   551,   551,
     551,   551,   551,   551,   551,   551,   551,   551,   551,   551,
     551,   551,   551,   551,   551,   551,   551,   551,   551,   551,
     551,   551,   551,   551,   551,   551,   551,   551,   551,   551,
     551,   551,   551,   551,   551,   551,   551,   551,   551,   551,
     551,   551,   551,   551,   551,   551,   551,   551,   551,   551,
     551,   551,   551,   551,   551,   551,   551,   551,   551,   551,
     551,   551,   551,   551,   551,   551,   551,   551,   551,   551,
     551,   553,   553,   553,   553,   553,   553,   553,   553,   553,
     553,   553,   553,   553,   553,   553,   553,   553,   553,   553,
     553,   553,   554,   554,   554,   554,   554,   554,   555,   555,
     555,   555,   555,   555,   555,   555,   555,   555,   555,   555,
     555,   555,   555,   555,   555,   555,   555,   555,   555,   555,
     555,   555,   555,   555,   555,   556,   556,   557,   557,   557,
     557,   558,   558,   558,   559,   559,   559,   560,   560,   560,
     560,   560,   560,   560,   561,   561,   561,   561,   561,   561,
     561,   561,   561,   561,   561,   561,   561,   561,   561,   561,
     561,   561,   561,   561,   561,   561,   561,   561,   561,   561,
     561,   561,   561,   561,   561,   561,   561,   561,   561,   561,
     561,   561,   561,   561,   561,   561,   561,   561,   561,   561,
     561,   561,   561,   561,   561,   561,   561,   561,   561,   561,
     561,   561,   561,   561,   561,   561,   561,   561,   561,   561,
     561,   561,   561,   561,   561,   561,   561,   561,   561,   561,
     561,   561,   561,   561,   561,   561,   561,   561,   561,   561,
     561,   561,   561,   561,   561,   561,   561,   561,   561,   561,
     561,   561,   562,   562,   562,   562,   563,   563,   564,   564,
     565,   565,   566,   567,   567,   567,   567,   567,   567,   568,
     568,   569,   569,   569,   569,   569,   569,   570,   570,   570,
     570,   570,   570,   570,   571,   571,   572,   572,   572,   572,
     572,   572,   572,   572,   573,   573,   573,   573,   573,   573,
     573,   573,   573,   573,   573,   573,   574,   574,   575,   576,
     575,   577,   577,   577,   578,   578,   578,   578,   578,   578,
     579,   579,   580,   580,   581,   582,   583,   582,   584,   584,
     585,   586,   587,   587,   587,   587,   587,   587,   587,   587,
     587,   587,   587,   587,   587,   587,   587,   587,   587,   587,
     587,   587,   587,   587,   587,   587,   587,   587,   588,   588,
     588,   588,   588,   588,   588,   588,   589,   589,   589,   589,
     590,   590,   590,   590,   590,   590,   590,   590,   591,   591,
     591,   592,   592,   592,   593,   593,   593,   593,   594,   594,
     594,   594,   595,   595,   596,   596,   596,   596,   597,   597,
     598,   598,   598,   598,   599,   599,   599,   599,   600,   600,
     600,   601,   601,   601,   602,   602,   603,   603,   603,   604,
     605,   605,   605,   605,   605,   606,   606,   606,   606,   606,
     606,   607,   607,   607,   607,   607,   608,   608,   608,   609,
     609,   609,   609,   609,   609,   610,   610,   610,   611,   611,
     611,   611,   611,   611,   612,   612,   612,   612,   612,   612,
     612,   612,   612,   612,   612,   612,   612,   613,   613,   613,
     614,   614,   614,   615,   615,   615,   616,   616,   616,   617,
     617,   617,   617,   618,   618,   618,   619,   619,   619,   620,
     620,   620,   621,   621,   621,   622,   622,   622,   623,   623,
     623,   624,   624,   624,   625,   625,   625,   626,   626,   626,
     627,   627,   627,   628,   628,   628,   629,   629,   629,   630,
     631,   631,   631,   632,   632,   632,   632,   633,   633,   633,
     633,   633,   634,   634,   634,   635,   635,   636,   636,   636,
     636,   636,   637,   637,   637,   638,   638,   638,   639,   639,
     639,   639,   640,   641,   641,   641,   641,   641,   642,   642,
     642,   642,   642,   642
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     3,     3,     2,     1,     1,     2,
       3,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     1,     2,     3,     2,     2,     2,     3,
       2,     2,     2,     2,     3,     2,     2,     2,     3,     2,
       2,     2,     2,     2,     2,     1,     3,     2,     2,     2,
       2,     1,     2,     2,     2,     1,     2,     1,     2,     2,
       2,     2,     1,     1,     1,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     2,     2,     1,     1,     0,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     1,     1,
       1,     1,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     1,     1,     1,     1,     1,     1,     1,
       0,     1,     1,     0,     1,     1,     1,     0,     1,     1,
       0,     1,     1,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     1,     1,     0,     1,
       1,     1,     1,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     2,     2,     2,     1,     2,
       1,     2,     1,     2,     1,     2,     2,     6,     2,     4,
       2,     2,     2,     3,     2,     2,     1,     2,     1,     2,
       4,     5,     2,     3,     5,     6,     1,     1,     1,     7,
      11,     8,    12,     1,     2,     2,     3,     1,     1,     2,
       2,     2,     2,     3,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     1,     3,     2,
       2,     2,     5,     9,     9,     9,     7,     1,     2,     1,
       5,     9,     9,     9,     7,     1,     2,     2,     3,     2,
       2,     2,     2,    13,    13,    12,    12,     1,     0,     1,
       1,     4,     6,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     6,     3,     4,     0,     6,     8,     2,
       3,     3,     3,     0,     4,     4,     4,     4,     3,     3,
       1,     3,     5,     4,     4,     3,     2,     0,     1,     1,
       1,     1,     1,     3,     0,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     1,
       2,     2,     2,     4,     3,     2,     2,     2,     2,     2,
       1,     3,     2,     2,     2,     2,     1,     2,     8,     2,
       1,     2,     1,     2,     1,     4,     3,     2,     1,     7,
       8,     7,     8,     1,     1,     1,     2,     1,     1,     2,
       1,     0,     2,     2,     1,     2,     0,     2,     2,     1,
       1,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       0,     1,     2,     1,     4,     5,     0,     2,     1,     5,
       2,     2,     1,     1,     1,     1,     2,     1,     2,     1,
       1,     0,     1,     1,     0,     1,     5,     6,     3,     6,
       3,     1,     3,     1,     1,     1,     3,     6,     7,     5,
       2,     1,     5,     4,     1,     3,     0,     1,     2,     1,
       4,     1,     2,     1,     2,     3,     2,     1,     2,     1,
       4,     2,     1,     1,     3,     1,     2,     3,     2,     0,
       1,     1,     4,     2,     0,     1,     3,     4,     4,     0,
       1,     1,     1,     1,     2,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     2,     1,     2,     2,     2,     2,     1,     1,
       2,     1,     0,     1,     1,     2,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     2,     2,     0,
       1,     2,     1,     6,     5,     1,     1,     1,     2,     2,
       2,     1,     1,     1,     1,     2,     1,     1,     1,     2,
       1,     1,     1,     2,     2,     2,     0,     1,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     2,
       1,     2,     3,     1,     2,     2,     4,     5,     1,    10,
       1,     2,     3,     3,     2,     2,     2,     2,     2,     2,
       2,     4,     4,     4,     3,     3,     5,     4,     4,     4,
       3,     3,     3,     3,     3,     3,     2,     2,     4,     3,
       3,     3,     3,     4,     4,     4,     4,     5,     4,     6,
       7,     4,     4,     5,     2,     3,     3,     3,     3,     3,
       3,     3,     2,     3,     3,     3,     3,     4,     3,     5,
       6,     3,     3,     4,     3,     3,     3,     3,     3,     5,
       3,     3,     4,     3,     2,     2,     1,     3,     4,     4,
       4,     4,     4,     6,     4,     4,     5,     4,     4,     4,
       4,     5,     4,     6,     7,     4,     4,     5,     5,     5,
       5,     5,     5,     7,     5,     5,     6,     4,     4,     4,
       4,     4,     6,     4,     4,     5,     5,     5,     5,     5,
       6,     5,     7,     8,     5,     5,     6,     3,     3,     3,
       3,     4,     3,     5,     6,     3,     3,     4,     3,     3,
       3,     3,     3,     5,     3,     3,     4,     4,     4,     3,
       5,     4,     4,     2,     3,     6,     6,     1,     1,     1,
       2,     2,     2,     3,     3,     2,    12,     2,     2,     1,
       3,     4,     2,     0,     3,     1,     2,     2,     2,     2,
       2,     4,     4,     4,     4,     3,     3,     4,     5,     8,
       6,     9,     6,     7,    10,    11,    12,     9,     5,     6,
       3,     5,     5,     5,     6,     5,     4,     4,     4,     9,
      10,    11,     9,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     7,     7,     2,     4,     4,     4,     4,     5,
       4,     4,     5,     5,     3,     4,     4,     4,     7,     9,
       6,    10,    11,    12,     9,     3,     2,     3,     5,     5,
       7,     4,     3,     3,     6,     7,     8,     7,     7,     4,
       4,     9,     4,     3,     4,     7,     7,     2,     3,     3,
       3,     4,     2,     2,     4,     4,    10,     3,     4,     1,
       3,     2,     2,     2,     2,     3,     5,     4,     5,     2,
       2,     2,     2,     3,     2,     2,     2,     3,     2,     3,
       4,     3,     3,     6,     4,     2,     3,     2,     2,     4,
       3,     3,     2,     3,     1,     2,     1,     2,     2,     2,
       3,     1,     1,     1,     1,     2,     1,     2,     2,     1,
       2,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     1,     2,     2,     2,     3,     5,     7,
       7,     6,     5,     6,     6,     6,     5,     6,     6,     6,
       6,     6,     6,     6,    11,     7,     7,     7,     9,     9,
      10,    12,    12,     3,     2,     0,     1,     3,     4,     4,
       4,     0,     1,     1,     4,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     1,     1,     3,     3,
       8,     6,    10,     7,     7,     5,     6,     6,     3,     2,
       2,     3,     4,     5,     5,     5,     3,     4,     5,     5,
       5,     5,     2,     3,     3,     3,     5,     3,     3,     3,
       3,     3,     4,     5,     5,     5,     5,     3,     4,     5,
       5,     2,     2,     3,     3,     5,     6,     6,     3,     3,
       6,     6,     5,     5,     2,     3,     3,     5,     6,     3,
       2,     2,     3,     2,     3,     2,     3,     3,     5,     6,
       2,     2,     2,     2,     1,     4,     4,     1,     2,     2,
       2,     2,     2,     2,     2,     3,     2,     3,     2,     3,
       1,     1,     1,     1,     1,     1,     0,     2,     0,     2,
       0,     1,     0,     0,     1,     1,     1,     1,     1,     7,
       8,     2,     6,     2,     6,     2,     3,     2,     1,     1,
       3,     3,     1,     4,     2,     1,     3,     3,     4,     3,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     0,     0,
       2,     6,     7,     2,     1,     3,     1,     3,     1,     1,
       1,     2,     2,     1,     3,     0,     0,     2,     2,     1,
       3,     5,     0,     1,     1,     2,     2,     3,     2,     3,
       2,     3,     2,     3,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     2,
       2,     3,     2,     2,     2,     2,     1,     1,     1,     1,
       4,     2,     3,     3,     2,     3,     2,     2,     2,     3,
       3,     3,     2,     3,     1,     3,     3,     1,     2,     2,
       2,     2,     9,     6,     1,     1,     1,     1,     2,     2,
       3,     3,     1,     2,     3,     3,     1,     2,     1,     1,
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
       0,   356,     0,     0,     0,     0,     0,     0,   384,     0,
       0,    23,     0,     0,     0,     0,     0,  1222,     0,     0,
       0,     0,  1153,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1153,    45,     0,     0,     0,     0,    51,     0,
       0,     0,    55,  1417,    57,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     3,
      62,    63,     0,     0,   283,     6,     0,     0,     0,     0,
       0,     0,     9,     0,     0,   317,   319,     0,     0,     0,
       0,     0,    11,   164,   166,   159,   160,   161,   165,   162,
     163,   325,    12,     0,     0,   338,     0,     0,     0,    13,
       0,     0,     0,     0,   363,     0,    14,    75,   104,     0,
     134,   103,    83,   101,     0,    80,    82,    78,   135,   102,
      79,     0,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
      76,    77,    81,   370,   172,   105,     0,    15,     0,    16,
      17,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,    64,   382,   381,    18,     0,    19,     0,     0,
       0,   446,   460,     0,   466,     0,     0,     0,     0,     0,
       0,     0,   399,     0,   539,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1153,     0,   410,     0,     0,   416,
       0,     0,     0,   420,     0,   422,     0,   424,     0,     0,
     596,   428,    20,     0,   602,    21,   607,     0,     0,   626,
     611,   612,   613,   614,   628,   616,   617,   621,   618,     0,
     620,   622,     0,     0,    22,     0,    24,     0,     0,     0,
      26,     0,     0,     0,    27,     0,   643,     0,     0,     0,
     648,     0,    28,     0,  1224,   142,  1246,     0,  1223,  1238,
    1242,  1236,     0,  1234,  1244,     0,  1240,     0,    36,     0,
       0,     0,     0,     0,     0,    30,   808,    31,     0,     0,
       0,     0,     0,     0,   809,    32,     0,    33,  1157,  1158,
    1154,  1155,  1156,     0,   142,  1248,     0,   136,     0,     0,
       0,    35,     0,    37,     0,  1259,  1258,  1257,  1256,    39,
       0,     0,     0,     0,     0,   172,     0,    40,     0,  1277,
       0,  1274,    41,     0,     0,     0,     0,    44,     0,    43,
      42,     0,  1304,  1305,    47,     0,     0,     0,    48,     0,
       0,  1321,    49,     0,     0,     0,     0,     0,     0,    50,
    1413,  1412,  1416,  1415,  1414,    52,     0,    53,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    54,     0,
       0,  1419,    56,     0,     0,    58,     0,     0,     0,     0,
     172,    59,  1442,    60,     0,     0,    61,     1,     4,     5,
     266,     0,   258,     0,     0,   260,     0,   268,   261,   265,
     276,   277,   262,   278,     0,   264,     0,   287,   288,   285,
     284,     0,     0,   307,     0,   292,   300,   303,   302,   301,
     299,   291,   296,   297,   298,   290,     0,     0,     0,     0,
       0,     0,   295,    10,     0,     0,     0,     0,     0,     0,
       0,     0,   318,     0,     0,   326,     0,   337,   327,     0,
     339,   329,   340,   330,   351,   331,     0,     0,   332,     0,
      94,    95,    96,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   359,     0,     0,     0,     0,     0,
     174,   179,   173,   175,   178,   177,   176,     0,     0,   376,
      69,    70,    71,    72,    73,    65,    66,    67,    74,    68,
       0,   385,     0,   441,   437,   433,   434,   438,   435,   440,
     386,   444,     0,   387,   343,   450,   454,   449,   346,   345,
     344,     0,     0,   388,   461,   390,     0,   389,     0,   468,
     391,   481,   472,   484,   473,   474,   475,   477,     0,   479,
     480,   172,   392,     0,     0,   393,     0,     0,   172,   394,
     493,   172,   491,   395,   494,   397,   172,   495,   396,     0,
     172,     0,   398,   513,     0,   511,   529,     0,     0,     0,
     517,   509,     0,   519,   534,   522,   400,   540,   541,   401,
     402,     0,     0,   565,   566,   567,   405,   562,   563,   564,
     406,     0,   504,     0,   407,    84,   501,     0,   408,   409,
     555,   555,   542,   543,   555,   555,   413,     0,   554,   548,
     553,   549,   550,   551,   552,   412,   561,   414,   415,   557,
     417,     0,   558,   559,   560,   419,   573,   568,   569,   571,
     421,   579,   588,   590,   592,   578,   581,   582,   594,   423,
       0,     0,   599,     0,   427,   172,   601,   608,     0,   609,
     627,   610,   629,   630,   631,   615,   632,   634,   633,   635,
     619,   623,   640,     0,     0,     0,     0,   636,   624,    25,
    1315,  1316,  1317,  1318,  1319,     0,  1310,  1311,  1312,  1313,
       0,     0,     0,   645,   644,     0,     0,     0,     0,    29,
     142,  1247,     0,  1239,  1243,  1237,  1235,  1245,     0,  1241,
       0,   157,   150,   149,   147,   153,   154,   151,   155,   148,
     158,   144,   146,   156,   145,   152,   143,  1228,  1226,  1225,
    1230,  1232,     0,     0,     0,     0,   655,     0,   656,     0,
       0,     0,     0,     0,     0,     0,   657,     0,   807,     0,
     658,     0,   659,     0,     0,   660,     0,   812,   811,   810,
       0,   815,     0,     0,     0,     0,   992,     0,     0,     0,
     819,   823,   825,     0,  1031,     0,     0,     0,     0,   929,
       0,     0,     0,   964,     0,     0,     0,     0,     0,     0,
       0,   966,     0,     0,     0,    34,  1254,  1249,  1255,   139,
     140,   138,   141,   137,  1250,     0,  1252,  1253,  1309,    38,
       0,     0,     0,     0,  1266,  1267,     0,   172,     0,  1264,
    1261,     0,     0,     0,   172,  1284,  1287,  1285,  1286,  1278,
    1279,  1280,  1281,     0,     0,     0,    46,  1306,  1307,     0,
    1326,  1328,  1327,  1323,  1324,  1322,     0,     0,     0,     0,
       0,     0,  1329,     0,  1333,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1330,  1344,     0,
       0,     0,  1332,  1334,     0,     0,     0,  1331,  1411,  1302,
    1303,  1301,   239,     0,   250,   235,     0,   252,   236,     0,
     254,   237,  1299,  1300,  1298,   238,   241,     0,     0,     0,
     244,   240,   242,   243,     0,     0,   234,     0,     0,     0,
       0,  1425,  1438,     0,     0,  1428,     0,     0,  1431,     0,
       0,  1430,  1429,   180,  1448,     0,  1447,  1443,   267,   263,
       0,   272,     0,   269,     0,   286,   289,   167,   170,   171,
     169,   168,   304,   305,   306,   294,   293,   309,   311,   310,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   328,     0,     0,     0,   172,     0,   360,   100,
      97,    98,    99,   172,   362,   361,     0,     0,     0,     0,
       0,     0,     0,   375,     0,   371,   369,   368,   383,   436,
       0,     0,   439,   445,   455,   456,   451,   452,   457,   459,
     458,   453,   347,   348,   448,   447,   463,   462,     0,   467,
     482,   483,   471,   485,   478,   476,   470,     0,     0,   172,
     172,   180,   180,   180,   172,     0,     0,   172,   530,   512,
     523,     0,   514,    84,   525,     0,     0,   516,   518,   172,
     535,     0,     0,   521,     0,     0,   404,     0,   506,    88,
      87,   500,     0,   556,   545,   544,   546,   547,     0,     0,
       0,     0,  1045,  1141,  1047,  1046,     0,  1146,     0,  1124,
       0,  1127,     0,     0,  1148,  1150,     0,  1140,   411,     0,
     570,   572,   589,   575,   591,   576,   593,   577,   583,   586,
     584,   580,   595,   574,     0,     0,   426,   600,   597,   598,
     180,   625,   637,   638,   639,   641,     0,     0,     0,   654,
     642,     0,     0,     0,  1229,  1227,  1231,  1233,     0,     0,
       0,   193,   193,   187,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   190,   190,   187,     0,     0,
     187,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     702,   726,     0,     0,     0,   694,     0,     0,     0,     0,
     193,   187,     0,     0,   803,     0,   813,   814,   172,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   874,     0,     0,     0,     0,     0,   896,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   917,
       0,     0,   922,   923,     0,     0,     0,   944,   946,   945,
       0,   948,     0,     0,   955,   957,   958,     0,   993,     0,
       0,     0,     0,   817,   818,  1039,  1037,  1042,  1041,  1040,
    1038,  1043,     0,   822,     0,     0,  1033,  1032,   826,     0,
    1036,     0,   827,   828,   829,   830,     0,     0,     0,     0,
       0,   931,     0,     0,   932,  1169,     0,  1172,  1168,     0,
       0,     0,   933,   965,   934,  1187,  1192,  1189,  1195,  1188,
    1186,  1193,  1190,  1184,  1191,  1185,  1194,     0,     0,   939,
       0,     0,     0,     0,   940,  1204,  1208,  1209,     0,  1206,
     941,     0,  1210,   942,   962,     0,     0,     0,   967,   968,
     969,  1251,  1265,     0,     0,  1272,  1268,     0,     0,     0,
    1263,  1262,  1276,  1275,     0,     0,  1292,     0,     0,  1288,
       0,  1296,     0,     0,  1289,     0,  1325,   228,   228,     0,
       0,     0,   228,     0,  1358,     0,  1357,     0,     0,     0,
       0,  1345,     0,     0,     0,     0,  1349,     0,     0,     0,
    1356,     0,     0,     0,     0,     0,  1347,  1359,     0,     0,
       0,  1346,   228,   228,   228,  1336,  1335,  1337,     0,   251,
     253,   255,   245,     0,   248,   247,   246,     0,   256,     0,
      63,     0,  1421,     0,  1426,   172,  1441,     0,  1432,  1433,
       0,  1435,  1436,     0,   181,   182,  1427,  1449,  1450,     0,
     259,     0,   273,     0,     0,     0,     0,   308,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   354,   172,     0,     0,     0,     0,   172,     0,
     374,     0,   373,   443,   442,     0,     0,     0,   172,     0,
     180,   490,   488,   492,   496,     0,     0,     0,   180,     0,
     531,   515,     0,   526,   528,   183,     0,     0,   403,     0,
       0,    63,     0,   505,    86,    85,     0,     0,  1060,     0,
       0,     0,     0,     0,     0,  1072,     0,     0,     0,  1121,
       0,     0,     0,  1091,  1092,     0,     0,     0,     0,     0,
    1104,     0,  1110,  1111,  1113,  1115,     0,  1120,  1132,  1133,
    1134,     0,  1136,     0,  1142,  1144,  1145,  1143,  1044,     0,
    1123,     0,  1122,  1059,     0,     0,  1128,     0,  1130,     0,
    1129,  1151,  1131,  1138,     0,     0,   587,   585,   425,     0,
       0,  1320,  1314,   652,   653,     0,   650,   646,     0,   193,
     193,   193,   194,   195,   664,   665,   189,   188,     0,   193,
     193,   193,     0,   672,   671,   670,   682,   190,   193,   193,
     193,   191,   192,   193,   193,     0,   193,   193,     0,   190,
       0,   695,     0,   701,     0,   700,   699,   698,     0,     0,
       0,   725,     0,   724,     0,   697,   696,     0,     0,     0,
       0,   190,   190,   187,     0,     0,   187,     0,     0,     0,
     193,   193,   799,     0,   193,   193,   804,     0,   218,   219,
     220,   221,   222,   223,     0,    92,    93,    91,   836,     0,
       0,     0,     0,     0,   986,   984,   979,     0,   989,   973,
     990,   976,   988,   982,   971,   985,   974,   972,   991,   987,
       0,     0,   850,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     884,     0,     0,     0,     0,   895,   897,     0,     0,     0,
     903,   902,     0,     0,   208,     0,     0,     0,   172,     0,
     913,     0,     0,     0,     0,   918,   919,   920,     0,     0,
       0,     0,   927,   943,   947,   949,   952,   951,     0,     0,
       0,   956,   835,   994,   996,     0,   995,   820,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1025,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   824,   970,     0,     0,     0,     0,   930,
       0,   172,  1165,  1163,  1161,     0,     0,   172,  1167,   935,
       0,     0,     0,     0,  1203,     0,     0,  1211,   960,   961,
       0,   963,  1271,  1273,  1270,  1269,  1260,     0,     0,     0,
    1293,     0,     0,  1297,  1308,   230,   231,   232,   233,   229,
    1339,  1338,     0,     0,     0,  1343,     0,     0,     0,  1342,
       0,     0,     0,  1341,  1340,   228,     0,     0,     0,  1348,
       0,     0,     0,  1355,     0,     0,     0,  1354,     0,     0,
       0,  1353,     0,     0,     0,  1352,     0,     0,     0,     0,
       0,  1369,     0,  1404,  1403,  1405,     0,     0,     0,  1351,
       0,     0,     0,  1350,  1364,  1363,  1365,  1361,  1360,  1362,
    1407,  1406,  1408,     0,   249,     0,     0,  1423,  1424,     0,
    1439,   172,  1434,  1437,     0,     0,   172,     0,     0,     0,
     270,     0,     0,     0,     0,   312,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   350,   349,     0,     0,   341,
     352,   355,     0,   365,   367,   366,   364,   172,   372,     0,
       0,     0,   180,   172,     0,     0,     0,     0,   510,   524,
     533,     0,   527,   185,   186,   184,   520,     0,   536,     0,
       0,   503,   508,    84,     0,     0,     0,     0,     0,     0,
     172,  1061,     0,     0,     0,  1066,     0,   172,     0,  1073,
    1074,  1075,     0,  1077,  1079,  1078,  1080,  1081,     0,     0,
       0,  1087,     0,  1093,  1094,     0,     0,     0,  1098,  1099,
       0,     0,     0,     0,  1105,  1106,     0,     0,  1109,  1112,
    1114,  1116,  1117,     0,     0,  1135,  1137,     0,  1058,  1048,
    1147,  1049,     0,     0,  1149,  1139,     0,     0,   605,   606,
       0,   647,   651,     0,   661,   662,   663,   193,   667,   668,
     669,     0,     0,     0,   676,   677,   187,     0,     0,     0,
     193,   683,   684,   685,   686,   688,   190,   691,   692,     0,
     193,     0,     0,     0,   190,   190,   187,     0,     0,     0,
       0,     0,     0,     0,   190,   190,   187,     0,     0,   187,
       0,     0,     0,     0,   190,   190,   187,     0,     0,     0,
       0,   723,     0,   727,     0,     0,     0,     0,     0,   190,
     190,   187,     0,     0,   187,     0,     0,     0,     0,     0,
     190,   190,   187,     0,     0,   187,     0,   190,   703,   704,
     705,   706,   708,     0,   711,   712,     0,   190,     0,     0,
     797,   798,   193,   801,   802,     0,   833,   172,   837,     0,
       0,     0,     0,     0,     0,     0,   978,   975,   981,   980,
     977,   983,     0,     0,     0,   196,   198,   207,   203,   200,
     201,   197,   199,   204,   202,   206,   205,     0,     0,     0,
     172,   857,   856,   858,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   928,   875,   876,
     877,     0,   881,   878,   880,     0,     0,   886,   885,   887,
       0,     0,     0,     0,     0,     0,     0,   172,   172,   901,
     214,   210,   215,   209,   212,   211,   213,   909,   910,   172,
       0,     0,   912,   914,   172,   172,     0,   921,   924,   925,
     172,   172,   950,   954,   834,   997,   821,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1026,  1152,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1024,     0,     0,     0,     0,     0,
     831,   832,   172,   180,  1166,     0,     0,  1170,  1171,     0,
       0,   937,     0,   172,     0,  1205,  1207,   959,     0,  1290,
    1291,  1294,  1295,   228,   228,   228,   228,   228,   228,   228,
     228,   228,  1409,  1367,  1366,  1368,  1401,  1400,  1402,  1398,
    1397,  1399,  1392,  1391,  1393,  1389,  1388,  1390,  1371,  1370,
    1374,  1373,  1375,  1372,  1383,  1382,  1384,  1380,  1379,  1381,
       0,     0,  1418,     0,  1440,     0,   172,     0,  1444,     0,
       0,   274,     0,   271,     0,     0,     0,     0,     0,   320,
       0,     0,     0,     0,     0,     0,     0,   172,     0,     0,
     357,   160,     0,   464,     0,   486,   180,   183,     0,     0,
     499,     0,   537,   538,     0,   502,     0,     0,     0,     0,
       0,     0,   172,  1062,   183,   183,   183,   172,  1067,   183,
     180,   183,   183,   172,  1082,   183,   183,   183,   172,  1088,
     183,   183,   172,     0,   172,   183,   172,   183,   183,   172,
     183,   172,     0,  1125,  1126,     0,     0,   604,     0,   666,
     673,   674,   675,     0,   679,   680,   681,   687,   193,   190,
     693,   714,   715,   716,   717,   718,     0,   720,   721,   190,
     190,   777,   778,   779,   780,   782,     0,   785,   786,     0,
     190,   788,   789,   790,   791,   792,     0,   794,   795,   190,
       0,     0,     0,   190,   190,   187,     0,     0,     0,     0,
       0,     0,   190,   190,   187,     0,     0,     0,     0,     0,
       0,   190,   190,   187,     0,     0,     0,   190,   193,   193,
     193,   193,   193,     0,   193,   193,     0,   190,   190,   193,
     193,   193,   193,   193,     0,   193,   193,     0,   190,   707,
     190,     0,   713,     0,     0,   800,     0,   838,   183,     0,
       0,   183,     0,     0,     0,   848,   183,   851,   852,   853,
     183,   855,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   879,   882,   883,     0,   183,
       0,     0,     0,   898,   899,     0,     0,   180,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1196,  1023,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     172,     0,     0,    89,     0,     0,  1034,  1035,   180,     0,
       0,     0,  1173,   936,   938,   180,   172,  1283,  1395,  1394,
    1396,  1386,  1385,  1387,  1377,  1376,  1378,  1410,     0,  1420,
    1451,     0,     0,  1446,  1445,   275,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   316,     0,     0,   342,   353,
     183,   465,   469,   487,   489,     0,   497,   532,   172,     0,
       0,     0,     0,     0,     0,   172,  1055,  1063,  1065,  1064,
    1068,  1069,  1070,  1071,  1076,  1083,  1084,  1085,  1086,  1089,
    1090,  1095,   180,   183,   180,  1102,   180,  1103,  1107,   180,
    1118,   180,   172,     0,   172,     0,   603,     0,   678,   689,
     193,   190,   722,   781,   190,     0,   787,   190,   796,   193,
     193,   193,   193,   193,     0,   193,   193,   190,   193,   193,
     193,   193,   193,     0,   193,   193,   190,   193,   193,   193,
     193,   193,     0,   193,   193,   190,   193,   737,   738,   739,
     740,   742,   190,   745,   746,     0,   193,   193,   766,   767,
     768,   769,   771,   190,   774,   775,     0,   193,   709,   190,
     805,   806,   172,   840,     0,   183,   842,     0,   172,     0,
     849,   854,   172,     0,   863,   864,   865,   866,   870,   871,
     867,   868,   869,     0,     0,   183,   890,     0,   172,     0,
       0,   904,     0,   183,     0,     0,   183,   183,     0,   953,
       0,   216,   216,     0,     0,   216,     0,   216,  1152,     0,
       0,     0,     0,     0,     0,     0,     0,  1197,  1175,     0,
    1182,  1183,     0,   216,   216,     0,     0,     0,     0,  1152,
       0,     0,     0,     0,  1027,     0,     0,     0,  1152,    90,
       0,   216,     0,  1199,   172,   172,     0,   180,     0,   257,
    1453,  1452,     0,     0,   279,     0,     0,     0,     0,     0,
     324,     0,     0,     0,   358,   498,     0,   377,     0,  1051,
       0,   224,     0,  1056,  1096,  1097,  1100,  1101,  1108,  1119,
    1057,   418,     0,   377,     0,   690,   719,   783,   190,   793,
     728,   729,   730,   731,   732,   190,   734,   735,   193,   757,
     758,   759,   760,   761,   190,   763,   764,   193,   748,   749,
     750,   751,   752,   190,   754,   755,   193,   741,   193,   190,
     747,   770,   193,   190,   776,   710,     0,   183,   843,     0,
       0,     0,     0,     0,   872,   873,   888,     0,     0,     0,
     900,   905,     0,   907,     0,   915,   916,   908,   183,     0,
     217,  1152,  1152,    89,     0,  1152,     0,  1152,   998,   172,
       0,     0,     0,     0,     0,     0,     0,  1174,     0,     0,
    1152,  1152,    89,     0,     0,  1152,  1002,  1152,     0,     0,
    1152,  1030,  1028,  1029,  1006,  1152,  1152,  1199,  1215,     0,
    1164,  1162,  1201,     0,     0,     0,     0,   281,   314,   315,
       0,     0,     0,   313,     0,   377,   378,   380,   379,   429,
       0,     0,   225,   227,   226,  1053,  1054,   377,   431,     0,
     784,   193,   736,   193,   765,   193,   756,   743,   193,   772,
     193,     0,   839,   183,   183,     0,   183,     0,   183,   183,
       0,   906,   183,     0,  1152,  1012,  1008,  1152,     0,  1013,
       0,  1007,  1152,     0,  1177,     0,  1180,  1220,  1181,  1179,
    1176,     0,  1010,  1009,  1152,     0,     0,  1004,  1001,  1152,
     172,  1003,  1005,  1011,  1215,  1159,     0,     0,  1200,  1213,
    1202,  1282,     0,     0,   322,   323,   321,   343,   346,   344,
       0,     0,   430,  1050,   172,   432,   649,   733,   762,   753,
     744,   773,   183,   841,   847,     0,   862,   859,   889,   894,
       0,   911,     0,  1017,  1000,    89,     0,  1015,     0,  1178,
       0,   999,    89,     0,  1016,     0,  1160,  1217,  1219,     0,
    1212,     0,     0,     0,     0,     0,     0,   224,     0,   844,
     172,   860,   891,   926,  1152,     0,  1221,     0,  1152,     0,
     183,  1218,  1214,   280,     0,     0,     0,     0,     0,  1052,
     816,   172,   845,   861,   172,   892,  1019,     0,  1152,  1018,
       0,     0,   282,   336,     0,   335,     0,   846,   893,    89,
    1020,    89,  1152,   334,   333,  1152,  1152,  1014,  1022,  1021
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    59,  1627,   181,   163,  1061,  2798,  2799,   484,   485,
     486,   487,   164,   165,   166,   814,   737,   101,   952,   507,
    1406,  1926,  1558,  1573,  1554,  2137,  2187,  2911,  1624,  2975,
    1800,   388,   911,  1385,   895,   898,   901,   916,    69,   412,
     418,   422,   425,    75,   429,    82,   445,   441,   435,   452,
      92,   462,   102,   109,   468,   471,   473,   542,  1014,  1897,
     475,   478,   116,   494,   167,   169,  2969,   185,   187,   232,
    1056,  1106,   530,  1002,   533,   543,  1006,  1011,   545,   547,
    1017,   550,  1019,   562,  1022,  1024,   565,   569,   573,   575,
     578,   582,   618,   614,  1473,   596,  1042,  1047,  1039,  1461,
    1053,   599,   626,   635,  1064,   640,   645,   637,   610,   606,
     650,   659,  1101,  1537,  1093,  1095,  1097,  1103,   664,  1108,
     235,   666,  2000,   254,   669,   671,   675,   680,   688,   272,
    1547,   703,   295,   746,  1563,   748,   756,  1165,  1581,  1160,
    2061,  1593,  1591,  2063,  1161,  1583,  1585,   762,   765,   760,
     297,   305,   307,   805,  1244,  1650,  1233,  1753,  2218,  2234,
    1248,  1252,  1242,  1088,  1518,  1522,  1530,  1532,  2545,   313,
    1261,  1264,  1272,  2777,  2778,  2779,  2546,  2948,  2949,  1294,
    1300,  1303,  3038,  3039,  3035,  3036,  3087,  2780,  2781,   288,
     321,   329,   337,   829,   824,   342,   347,   349,   839,   846,
    1329,  1334,   905,   892,   354,   358,   323,   264,   260,   362,
     853,   369,   887,   862,   877,   878,  1371,  1366,  1819,  1356,
    1841,  1813,  1853,  1849,  1809,  1835,  1831,  1805,  1827,  1823,
    1360,   882,   864,   375,   376,   392,  1392,   395,   401,   928,
     931,   925,   403,   406,   936
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2744
static const yytype_int16 yypact[] =
{
    5507,    62,    95,    47, -2744, -2744,  1297,  -179,  1222,  1084,
    1427,   239,  2979,   127,   411,    55,  1191,    25,  5752,   700,
    1930, -2744,    83,    -4,   150,   639,   217,   879,  1346,  -104,
     160,   249,   446,   554,   -42,   225,  1064,  3731,    24,  1096,
     304,   462,   446, -2744,   136,   208,   131,    73, -2744,   191,
     576,  1315, -2744,   118, -2744,    60,  1436,   342,    65,   712,
     195,   995,   346,   726,   733,    93,   787,   123,   128, -2744,
   -2744, -2744,   278,  1094,  1359, -2744,   497,    27,   411,    18,
     643,   566, -2744,   806,  1359, -2744, -2744,  1359,  1359,   674,
     758,  1359, -2744, -2744, -2744, -2744,  1359, -2744, -2744, -2744,
   -2744, -2744, -2744,    42,   812,   847,   893,   904,   138, -2744,
    1359,  1568,  1359,  1359,  1186,  1359, -2744, -2744, -2744,   711,
   -2744, -2744, -2744, -2744,  4893, -2744, -2744, -2744, -2744, -2744,
   -2744,  1359, -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744,
   -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744,
   -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744,
   -2744, -2744, -2744, -2744,  1493, -2744,  1359, -2744,   938, -2744,
   -2744,   411,   411,   411,   411,   411,   411,   411,   411,   411,
     411, -2744, -2744, -2744, -2744, -2744,   853, -2744,   925,  1762,
     -36,   320,   684,   890,    -7,  4246,   676,  4948,  4865,  1035,
    4893,  3051, -2744,   963,  -139,  1028,  1099,  1046,   223,   240,
     115,   783,  1109,   546,   446,  1034, -2744,   822,  1106, -2744,
     932,   882,   499, -2744,   532, -2744,   498, -2744,    16,  1116,
      52, -2744, -2744,  5168, -2744, -2744, -2744,  1159,  1172,  1235,
   -2744, -2744, -2744, -2744,    68, -2744, -2744, -2744, -2744,   -76,
   -2744, -2744,  5168,  4315, -2744,  1270, -2744,     9,  5168,  1274,
   -2744,   153,  5168,  1277, -2744,    69, -2744,  1286,  1290,   609,
   -2744,  1359, -2744,  1293,  1167,  2702, -2744,  1320, -2744, -2744,
   -2744, -2744,  1317, -2744, -2744,  1359, -2744,   411, -2744,   521,
    1333,   917,   929,  1336,    43, -2744, -2744, -2744,  1340,  1343,
     411,   411,  1359,  1359, -2744, -2744,  1371, -2744, -2744, -2744,
   -2744, -2744, -2744,  3544,  2702, -2744,  1373,     5,  1359,  5168,
    1359, -2744,  5168, -2744,  1378, -2744, -2744, -2744, -2744, -2744,
    1359,  1240,   411,   791,  1359,  1493,  1359, -2744,  1347, -2744,
    5068, -2744, -2744,  1019,  1387,  1393,  1359, -2744,  1401, -2744,
   -2744,   -44, -2744, -2744, -2744,  1402,  5168,  1405, -2744,  1540,
    1359,  1313, -2744,  1070,  1289,  2067,    -8,  1425,   511, -2744,
   -2744, -2744, -2744, -2744, -2744, -2744,  1428, -2744,   912,   198,
     274,   335,   103,  1359,   209,  1441,  1359,   256, -2744,  1359,
    1154,  1459, -2744,  1359,  1359, -2744,    36,    28,    37,  1463,
    1493, -2744, -2744, -2744,  1197,  1359, -2744, -2744, -2744, -2744,
   -2744,  1359, -2744,  1467,  1469, -2744,  1359,  1181, -2744, -2744,
   -2744, -2744, -2744, -2744,  1359, -2744,   411, -2744,  1359, -2744,
   -2744,   591,   591, -2744,  1472, -2744, -2744, -2744, -2744, -2744,
   -2744, -2744, -2744, -2744, -2744, -2744,  1260,  1359,  1359,  1477,
    1497,  1499, -2744, -2744,  1359,  1359,  1359,  1359,  1359,  1359,
    1503,  1359, -2744,  1516,  1359, -2744,  1524, -2744, -2744,  1529,
   -2744, -2744,  1365, -2744,  1530, -2744,  5168,  1537, -2744,  1359,
   -2744, -2744, -2744,  1359,  1571,  1542,  1542,  5168,  1359,  1359,
    1359,  1359,  1359,  1359, -2744,  1359,  4893,  1568,  1359,  1359,
   -2744, -2744, -2744, -2744, -2744, -2744, -2744,  1568,  1359, -2744,
   -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744,
    1554, -2744,  1287,    30, -2744, -2744, -2744, -2744, -2744, -2744,
   -2744, -2744,  1204, -2744,   410, -2744, -2744, -2744,  1407, -2744,
    1051,   757,   757, -2744, -2744, -2744,  1595, -2744,  1596, -2744,
   -2744,  -101, -2744,  1403, -2744, -2744, -2744, -2744,  1413, -2744,
   -2744,  1493, -2744,  1359,  1359, -2744,  5168,  5168,  1493, -2744,
   -2744,  1493, -2744, -2744, -2744, -2744,  1493, -2744, -2744,  5168,
    1493,  1359, -2744, -2744,  5168, -2744,  1604,   693,  1389,    17,
   -2744, -2744,  1391,  5168,    94, -2744, -2744, -2744, -2744, -2744,
   -2744,  1611,  1613, -2744, -2744, -2744, -2744, -2744, -2744, -2744,
   -2744,  1615, -2744,  1398, -2744,   -46, -2744,  1359, -2744, -2744,
    1618,  1618, -2744, -2744,  1618,  1618, -2744,   596, -2744, -2744,
   -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744,
   -2744,    16, -2744, -2744, -2744, -2744, -2744, -2744,  1418,  1420,
   -2744, -2744,  1562,  1566,  1567, -2744, -2744,    57,  1382, -2744,
    1359,  1635,  1388,  5068, -2744,  1493, -2744, -2744,  1642, -2744,
   -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744,
   -2744, -2744, -2744,  5168,  5168,  5168,  5168, -2744, -2744, -2744,
   -2744, -2744, -2744, -2744, -2744,  1645, -2744, -2744, -2744, -2744,
    1646,  1647,   411, -2744, -2744,  1648,  1652,  1438,  1359, -2744,
    2702, -2744,  1661, -2744, -2744, -2744, -2744, -2744,  1359, -2744,
     411, -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744,
   -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744,
   -2744, -2744,   324,  1573,  1582,  1584, -2744,  1681, -2744,   468,
    1594,    45,    78,  3084,    82,  1686, -2744,  1689, -2744,  1698,
   -2744,    53, -2744,  1699,  1700, -2744,  1703, -2744, -2744, -2744,
    1359, -2744,  5068,  4683,  1751,  1386,   949,  1704,   273,  1601,
   -2744, -2744, -2744,  1707,   101,   509,  1708,  1710,    40,  1359,
    1069,   472,  1205,  5168,   411,  2594,   590,   184,    33,   369,
      22, -2744,  1701,  1702,  1715, -2744, -2744, -2744, -2744, -2744,
   -2744, -2744, -2744, -2744, -2744,  1359, -2744, -2744, -2744, -2744,
    1359,  1359,  1359,  1359, -2744, -2744,  1359,  1493,  1359, -2744,
    1359,  1568,  1359,  1716,  1493, -2744, -2744, -2744, -2744, -2744,
   -2744, -2744, -2744,  1717,   595,   622, -2744, -2744, -2744,  1719,
   -2744, -2744, -2744, -2744,  1619, -2744,  1722,  1725,  1640,  1643,
    1655,  1732, -2744,  1745, -2744,  1746,  1663,  1753,   487,   525,
     661,    21,   701,   762,   789,  1756,   804, -2744, -2744,  1760,
    1764,  1757, -2744, -2744,  1765,  1766,  1772, -2744,  1773, -2744,
   -2744, -2744, -2744,  1774, -2744, -2744,  1775, -2744, -2744,  1776,
   -2744, -2744, -2744, -2744, -2744, -2744, -2744,  1359,   246,  1359,
   -2744, -2744, -2744, -2744,  1359,  1359, -2744,  1359,  1399,  1359,
    1359, -2744,  5068,  1709,  1778, -2744,  1444,  1779, -2744,  1489,
    1780, -2744, -2744,   -51,  1359,  1359, -2744,  1807, -2744, -2744,
    1782,  1329,  1359,  1810,   666, -2744, -2744, -2744, -2744, -2744,
   -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744,
    1819,  1821,  1359,  1359,  1359,  1359,  1359,  1822,  1359,  1823,
    1359,  1825, -2744,   411,  1826,  1828,  1493,  5168, -2744, -2744,
   -2744, -2744, -2744,  1493, -2744, -2744,  1359,  1359,  1359,  5168,
    1359,  1568,  1359, -2744,  1359, -2744, -2744, -2744, -2744, -2744,
    1829,  1830, -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744,
   -2744, -2744, -2744, -2744, -2744, -2744,   676, -2744,  1359, -2744,
   -2744, -2744, -2744, -2744, -2744, -2744, -2744,  5168,  1359,  1493,
    1493,   -51,   -51,   -51,  1493,  1568,  1359,  1493, -2744, -2744,
   -2744,  1359, -2744,   -46,  1649,  1831,  1833, -2744, -2744,  1493,
   -2744,  1664,  1666, -2744,  1844,  1845, -2744,  1847,  1534,  1787,
    1812, -2744,  1359, -2744, -2744, -2744, -2744, -2744,  4779,   604,
    1532,  1086, -2744, -2744, -2744, -2744,  1359,   652,   974, -2744,
    1560, -2744,  2594,  1561,   683,  1533,   120, -2744, -2744,  1359,
   -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744,  1545,
   -2744, -2744, -2744, -2744,  1359,  1851, -2744, -2744, -2744, -2744,
     -51, -2744, -2744, -2744, -2744, -2744,  1857,  1861,  5022, -2744,
   -2744,  1863,  1864,  1359, -2744, -2744, -2744, -2744,  1868,  1872,
    1875,   467,   467,   -53,  1878,  1881,  1883,  1885,  1885,  1885,
    1585,  1589,  1893,  1895,  1896,   422,   422,   -53,  1899,  1900,
     -53,  1901,  1903,  1904,  1905,  1904,  1905,  5753,  1909,  1910,
   -2744, -2744,  1904,  1905,   737, -2744,  1913,  1915,  1916,  1917,
     467,   -53,  1919,  1920, -2744,  1921, -2744, -2744,  1493,  1145,
    1422,  1597,  1634,  1657,  1805,   631,  1658,  1926,    63,    -2,
    1817,   565,  1933,  1636,  1892,  1668,  1670,  1827,  1939,  1706,
     662,    35,   650,   687,  5168,  2594,  1906,   805,  1669,  1711,
    1942,   152, -2744, -2744,   919,  1934,  1946, -2744, -2744, -2744,
    1947,  1714,    76,  2594,  1718, -2744, -2744,  1902, -2744,   411,
    1950,  1951,  1359, -2744, -2744, -2744, -2744, -2744, -2744, -2744,
   -2744, -2744,     1, -2744,   782,  1955, -2744, -2744, -2744,  1359,
   -2744,  1359, -2744, -2744, -2744, -2744,  1359,  1359,  1359,   273,
    5168, -2744,  1957,  1544, -2744, -2744,  1359, -2744, -2744,  1359,
    5168,  1359, -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744,
   -2744, -2744, -2744, -2744, -2744, -2744, -2744,   411,  1359, -2744,
    1359,   273,  1958,  1960, -2744, -2744, -2744, -2744,  1359,  1359,
   -2744,   411, -2744, -2744, -2744,   685,  1962,  1964, -2744, -2744,
   -2744, -2744, -2744,  1359,  1359, -2744, -2744,  1568,  1359,  1359,
   -2744, -2744, -2744, -2744,  1966,  1359, -2744,  1359,  1850, -2744,
    1359, -2744,  1359,  1853, -2744,  1971, -2744,  1066,  1066,   868,
     869,   903,  1066,  1972, -2744,   946, -2744,   962,   977,   987,
     991, -2744,  1973,  1974,  1002,  1976, -2744,  1977,  1978,  1980,
   -2744,  1007,  1049,  1981,  1982,  1984, -2744, -2744,  1986,  1987,
    1989, -2744,  1066,  1066,  1066, -2744, -2744, -2744,  1359, -2744,
   -2744, -2744, -2744,  1359, -2744, -2744, -2744,  1359, -2744,  1359,
    1221,  5168, -2744,  1359, -2744,  1493, -2744,  5068, -2744, -2744,
    1990, -2744, -2744,  1991, -2744, -2744, -2744, -2744,  1970,   791,
   -2744,  1359,  1988,  1359,  1359,  1359,  1316, -2744,  1994,  1359,
    1359,  1997,  1359,  1359,  2000,  1359,  2003,  1359,     4,  2006,
     411,   411, -2744,  1493,  1359,  2008,  2009,  2011,  1493,  5168,
   -2744,  1359, -2744, -2744, -2744,  1359,  1359,  1359,  1493,  5168,
     -51, -2744, -2744, -2744, -2744,  1568,  1359,  2012,   -51,  1359,
     695, -2744,  2013, -2744, -2744,   125,  3881,  1359, -2744,  1359,
    2015,  1985,  1359, -2744, -2744, -2744,  2017,  1298,  4893,  1749,
    1752,  1754,    39,  5168,  1755, -2744,   413,    14,   177, -2744,
    1758,  1759,   188, -2744, -2744,   582,  1835,   730,  1770,   -97,
    2594,  1303, -2744,  2024,  1768, -2744,   611, -2744, -2744, -2744,
   -2744,  2594,  1799,     2, -2744, -2744, -2744, -2744, -2744,  1359,
   -2744,  1359, -2744, -2744,  1359,  1359, -2744,  1359, -2744,  1359,
   -2744, -2744, -2744, -2744,  1813,  1359, -2744, -2744, -2744,  1359,
      -1, -2744, -2744, -2744, -2744,  2032,  2033, -2744,  1359,   467,
     467,   467, -2744, -2744, -2744, -2744, -2744, -2744,  2043,   467,
     467,   467,   530, -2744, -2744, -2744, -2744,   422,   467,   467,
     467, -2744, -2744,   467,   467,  2047,   467,   467,  2050,   422,
     561, -2744,   875, -2744,  1047, -2744, -2744, -2744,  2051,  2052,
    2053, -2744,   989, -2744,   992, -2744, -2744,  1747,  2054,  2055,
    2058,   422,   422,   -53,  2061,  2062,   -53,  2064,  2066,  2068,
     467,   467, -2744,  2069,   467,   467, -2744,  2070, -2744, -2744,
   -2744, -2744, -2744, -2744,   411, -2744, -2744, -2744,  4893,  1232,
    1359,  1432,  1667,   500, -2744, -2744, -2744,   788, -2744, -2744,
   -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744,
    2071,  1359, -2744,   411,  1602,  2072,  1359,  5168,   411,   411,
    2073,  1678,  1803,  1808,   196,   237,  1811,   528,  1729,  1730,
    2081,  2083,  2084,  2085,   631,  2086,  2088,  2090,  1744,  1750,
    1551,  2092,  1359,  1485,  1693, -2744, -2744,   411,  1602,  5168,
   -2744, -2744,  5168,  1359,   114,  2093,  5168,  1359,  1493,   411,
   -2744,  2095,  5168,  5168,  1359, -2744, -2744, -2744,   411,   411,
    1602,  5168, -2744, -2744, -2744, -2744, -2744, -2744,  5168,  1359,
     411, -2744,  2097, -2744, -2744,  1359, -2744, -2744,  2098,  1359,
    1841,   272,  1359,  1852,  1359,   625,  1359,  2108,  1359,  1856,
    1858,  1359,  1359,  1359,  1359,   144,  1359,  1359,  1359,    32,
    1359,  1359,  1859, -2744, -2744,  1359,  1359,  1359,  1359, -2744,
    5168,  1493,  2109,  2113,  2114,  1359,  1359,  1493, -2744,  1359,
    1359,  1359,  5168,   273, -2744,  1359,  1359, -2744, -2744, -2744,
    2115, -2744, -2744, -2744, -2744, -2744, -2744,  2117,  1359,  1359,
   -2744,  1359,  1359, -2744, -2744, -2744, -2744, -2744, -2744, -2744,
   -2744, -2744,  2118,  2119,  2121, -2744,  2122,  2124,  2126, -2744,
    2128,  2129,  2131, -2744, -2744,  1066,  2132,  2133,  2135, -2744,
    2136,  2147,  2149, -2744,  2150,  2152,  2154, -2744,  2155,  2156,
    2158, -2744,  2159,  2161,  2164, -2744,  2166,  2167,  2168,  2169,
    2171, -2744,  2172, -2744, -2744, -2744,  2173,  2174,  2176, -2744,
    2177,  2179,  2181, -2744, -2744, -2744, -2744, -2744, -2744, -2744,
   -2744, -2744, -2744,  1359, -2744,  1359,  1359, -2744, -2744,  1359,
   -2744,  1493, -2744, -2744,   791,  1359,  1493,  1359,  1359,  1359,
   -2744,  1359,  1359,  2185,  1359, -2744,  1359,  1359,  2182,  1359,
    1359,  2186,  1359,  2187,  1359, -2744, -2744,  2190,  5168, -2744,
    2192, -2744,  1359, -2744, -2744, -2744, -2744,  1493, -2744,  1280,
    1359,  1280,   -51,  1493,  5168,  1359,  1359,  2193, -2744, -2744,
   -2744,  1359, -2744, -2744, -2744, -2744, -2744,  5168, -2744,  5168,
    1359, -2744, -2744,   -46,  2195,  2196,  2197,  2198,  2209,  5105,
    1493, -2744,  5168,  5168,  5168,  4893,  5168,  1493,  5168, -2744,
   -2744, -2744,  5168, -2744, -2744, -2744, -2744,  4893,  5168,  5168,
    5168,  4893,  5168, -2744, -2744,  5168,  5168,  1359, -2744, -2744,
    5168,  5168,  5168,  5168, -2744, -2744,  5168,  5168, -2744, -2744,
   -2744, -2744, -2744,  5168,  5168, -2744, -2744,  2018, -2744, -2744,
   -2744, -2744,  1359,  1359, -2744, -2744,  2194,  1359, -2744, -2744,
    2210, -2744, -2744,  1359, -2744, -2744, -2744,   467, -2744, -2744,
   -2744,  2218,  2224,  2226, -2744, -2744,   -53,  2231,  2232,  2235,
     467, -2744, -2744, -2744, -2744, -2744,   422, -2744, -2744,  2237,
     467,  2238,  2239,  2243,   422,   422,   -53,  2245,  2246,  2248,
    1814,  2249,  2251,  2252,   422,   422,   -53,  2247,  2254,   -53,
    2255,  2256,  2257,  2258,   422,   422,   -53,  2260,  2262,  2263,
    1219, -2744,  1258, -2744,  1263,  1818,  2266,  2267,  2268,   422,
     422,   -53,  2270,  2271,   -53,  2272,  1832,  2273,  2274,  2275,
     422,   422,   -53,  2277,  2278,   -53,  2281,   422, -2744, -2744,
   -2744, -2744, -2744,  2283, -2744, -2744,  2284,   422,  2285,  2286,
   -2744, -2744,   467, -2744, -2744,  2287, -2744,  1493, -2744,  5168,
    1359,  1359,  5168,  1359,  2288,  1422, -2744, -2744, -2744, -2744,
   -2744, -2744,  2289,  5168,   411, -2744, -2744, -2744, -2744, -2744,
   -2744, -2744, -2744, -2744, -2744, -2744, -2744,  1602,  2290,  5168,
    1493, -2744, -2744, -2744,  2292,  1422,  1359,  1359,  1359,  1359,
    1359,  1359,  1359,  1359,  1359,  2295,  2297, -2744, -2744, -2744,
   -2744,  2298, -2744, -2744, -2744,  2304,  2307, -2744, -2744, -2744,
    1359,  5168,  1359,  2308,  1422,   411,  1602,  1493,  1493, -2744,
   -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744,  1493,
    1359,  1568, -2744, -2744,  1493,  1493,  1359, -2744, -2744, -2744,
    1493,  1493, -2744, -2744, -2744, -2744, -2744,  1359,  1359,  1359,
    1359,  1359,  1359,  1359,  1359,  1359,  1359, -2744, -2744,  1359,
    1359,  1359,  1359,  1359,  1359,  1359,  1816,  1359,  1359,  1359,
    1359,  2080,  2311,  1359, -2744,  1359,  1359,  1359,  2315,  2317,
   -2744, -2744,  1493,   -51, -2744,  2319,  2320, -2744, -2744,  1568,
    1359, -2744,  2322,  1493,  5168, -2744, -2744, -2744,  2323, -2744,
   -2744, -2744, -2744,  1066,  1066,  1066,  1066,  1066,  1066,  1066,
    1066,  1066, -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744,
   -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744,
   -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744,
    1422,  1359, -2744,  1359, -2744,  1359,  1493,  1359, -2744,  1568,
    1359, -2744,  1359, -2744,  2143,  2325,  2327,  1359,  1359, -2744,
    1359,  1359,  2331,  1359,  2324,  1359,  2333,  1493,  2335,  5168,
   -2744, -2744,  1359, -2744,  1359, -2744,   -51,   125,  1359,  2336,
   -2744,  1359, -2744, -2744,  4893, -2744,  2338,  2339,  2340,  2341,
    2343,  5168,  1493, -2744,   125,   125,   125,  1493, -2744,   125,
     -51,   125,   125,  1493, -2744,   125,   125,   125,  1493, -2744,
     125,   125,  1493,  5168,  1493,   125,  1493,   125,   125,  1493,
     125,  1493,  5168, -2744, -2744,  2345,  4893,  2346,  1359, -2744,
   -2744, -2744, -2744,  2348, -2744, -2744, -2744, -2744,   467,   422,
   -2744, -2744, -2744, -2744, -2744, -2744,  2349, -2744, -2744,   422,
     422, -2744, -2744, -2744, -2744, -2744,  2350, -2744, -2744,  2351,
     422, -2744, -2744, -2744, -2744, -2744,  2352, -2744, -2744,   422,
    2353,  2354,  2355,   422,   422,   -53,  2357,  2358,  2359,  2361,
    2362,  2363,   422,   422,   -53,  2365,  2366,  2367,  2368,  2372,
    2374,   422,   422,   -53,  2376,  2377,  2378,   422,   467,   467,
     467,   467,   467,  2380,   467,   467,  2382,   422,   422,   467,
     467,   467,   467,   467,  2383,   467,   467,  2385,   422, -2744,
     422,  2387, -2744,  2388,  2395, -2744,  5068, -2744,   125,  2399,
    5168,   125,  1359,  5168,  2400, -2744,   125, -2744, -2744, -2744,
     125, -2744,  5168,  2406,  1359,  1359,  1359,  1359,  1359,  1359,
    1359,  1359,  1359,  1359,  1359, -2744, -2744, -2744,  5168,   125,
    1359,  5168,  2409, -2744, -2744,  1568,  1568,   -51,  5168,  1568,
    1568,  5168,  5168,  1568,  1568,  1359,  1359,  1359,  1359,  1359,
    1359,  1422,  1359,  1359,  1359,  3892, -2744,  1422,  1359,  1359,
    1359,  1359,  1422,  1359,  2410,  1359,  1359,  1359,  1359,  1359,
    1493,  1359,  1834,  1422,  1359,  1359, -2744, -2744,   -51,   411,
    5168,  5168, -2744, -2744, -2744,   -51,  1493,  2412, -2744, -2744,
   -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744,  1359, -2744,
   -2744,  1568,  1359, -2744, -2744, -2744,  1364,  2413,  2414,  2416,
    2417,  1359,  1359,  2418,  1359, -2744,  2419,  1280, -2744, -2744,
     125, -2744, -2744, -2744, -2744,  2420, -2744, -2744,  1493,  2423,
    2424,  2426,  2427,  5168,  2428,  1493, -2744, -2744, -2744, -2744,
   -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744,
   -2744, -2744,   -51,   125,   -51, -2744,   -51, -2744, -2744,   -51,
   -2744,   -51,  1493,  2457,  1493,  2459, -2744,  1359, -2744, -2744,
     467,   422, -2744, -2744,   422,  2460, -2744,   422, -2744,   467,
     467,   467,   467,   467,  2461,   467,   467,   422,   467,   467,
     467,   467,   467,  2462,   467,   467,   422,   467,   467,   467,
     467,   467,  2463,   467,   467,   422,   467, -2744, -2744, -2744,
   -2744, -2744,   422, -2744, -2744,  2465,   467,   467, -2744, -2744,
   -2744, -2744, -2744,   422, -2744, -2744,  2466,   467, -2744,   422,
   -2744, -2744,  1493, -2744,  5168,   125, -2744,  2467,  1493,  1359,
   -2744, -2744,  1493,  1359, -2744, -2744, -2744, -2744, -2744, -2744,
   -2744, -2744, -2744,  1359,  1359,   125, -2744,  2468,  1493,  1359,
    1568, -2744,    15,   125,  1359,  1568,   125,   125,  5168, -2744,
    1359,  2469,  2469,  1359,  1359,  2469,  1422,  2469, -2744,  5168,
    1862,  1870,  1879,  1894,  1943,  1953,  2020,  3892, -2744,  2027,
   -2744, -2744,  1422,  2469,  2469,  1359,  1359,  1422,  1359, -2744,
    1359,  1359,  1359,  1359, -2744,  1568,  1359,  2470, -2744, -2744,
    1359,  2469,   411,    23,  1493,  1493,   411,   -51,  2472, -2744,
   -2744, -2744,  2473,  1359, -2744,  2474,  2476,  2477,  2478,  2479,
   -2744,  2480,  2481,  1359, -2744, -2744,  2482,    87,  5168, -2744,
    2483,   111,  5168, -2744, -2744, -2744, -2744, -2744, -2744, -2744,
   -2744, -2744,  2486,    87,  1359, -2744, -2744, -2744,   422, -2744,
   -2744, -2744, -2744, -2744, -2744,   422, -2744, -2744,   467, -2744,
   -2744, -2744, -2744, -2744,   422, -2744, -2744,   467, -2744, -2744,
   -2744, -2744, -2744,   422, -2744, -2744,   467, -2744,   467,   422,
   -2744, -2744,   467,   422, -2744, -2744,  1359,   125, -2744,  5168,
    5168,  1359,  5168,  1359, -2744, -2744, -2744,  5168,  5168,  1359,
   -2744, -2744,  2491, -2744,  5168, -2744, -2744, -2744,   125,  2493,
   -2744, -2744, -2744,  1422,  1359, -2744,  2494, -2744, -2744,  1493,
     631,  2495,  2510,  2511,  2513,  2515,  2517, -2744,   411,  2520,
   -2744, -2744,  1422,  1359,  2521, -2744, -2744, -2744,  1359,  5168,
   -2744, -2744, -2744, -2744, -2744, -2744, -2744,    23,  1848,  2594,
   -2744, -2744, -2744,   411,  2524,  2533,  2537, -2744, -2744, -2744,
    2525,  2539,  2540, -2744,    79,    87, -2744, -2744, -2744, -2744,
    2545,  5168, -2744, -2744, -2744, -2744, -2744,    87, -2744,  2547,
   -2744,   467, -2744,   467, -2744,   467, -2744, -2744,   467, -2744,
     467,  5068, -2744,   125,   125,  1359,   125,  2553,   125,   125,
    1359, -2744,   125,  1359, -2744, -2744, -2744, -2744,  2555, -2744,
    1359, -2744, -2744,  2558, -2744,  2556, -2744, -2744, -2744, -2744,
   -2744,  1359, -2744, -2744, -2744,  2560,  1359, -2744, -2744, -2744,
    1493, -2744, -2744, -2744,  1848, -2744,  2039,  2031,  2594, -2744,
   -2744, -2744,  2561,  2562, -2744, -2744, -2744, -2744, -2744, -2744,
     881,   881, -2744, -2744,  1493, -2744, -2744, -2744, -2744, -2744,
   -2744, -2744,   125, -2744, -2744,  2564, -2744,  4893, -2744, -2744,
    2565, -2744,  1422, -2744, -2744,  1422,  1359, -2744,  2566, -2744,
    1359, -2744,  1422,  1359, -2744,  5168, -2744,  2039, -2744,   411,
   -2744,  2567,  2568,  1359,  1359,  1359,  1359,   111,  2569,  4893,
    1493, -2744,  4893, -2744, -2744,  1359, -2744,  2571, -2744,  1359,
     125, -2744, -2744, -2744,  2572,  2573,  1359,  2574,  1359, -2744,
   -2744,  1493, -2744, -2744,  1493, -2744, -2744,  2576, -2744, -2744,
    2577,  2578, -2744, -2744,  2579, -2744,  2581, -2744, -2744,  1422,
   -2744,  1422, -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2744, -2744,    -3, -2744,   344, -1038, -1518, -1170,  1675, -2744,
    1101,  -485,  1809,   -55,   -21, -2744,  -307, -1894,  1880,  2091,
    -987,   489,  -953,  1123,   -64, -1677, -2744, -1200, -2744,  -920,
   -1247, -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744,
   -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744,
   -2744, -2744, -2744, -2744, -2744, -2744, -2744,  -607,  -538, -2744,
   -2744, -2744, -2744, -2744, -2744, -2744, -2743, -2744, -2744, -2744,
   -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744,
   -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744,
   -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744,
   -2744, -2744, -2744, -2744,   592, -2744, -2744, -2744, -2744, -2744,
   -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744,
   -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744,
   -2744, -2744, -2744, -2744,   452, -2744, -2744, -2744, -2744, -2744,
   -2744, -2744, -2744, -2744, -2744,  -377,   -71, -2744, -2744, -2744,
   -2744, -2744, -2744, -2744, -2744, -1671, -2744, -2744, -2744, -2744,
   -2744, -2744,  -766, -2744, -2744, -2744, -2744, -2744, -2744,   535,
   -2744, -2744, -2744, -2744,  -406,  -793,   105,  -565, -2744, -2744,
   -2744, -2744, -2744,  -624,  -560, -2744, -2744, -2129, -2744, -2744,
   -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744,
   -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744,
   -2744, -2744, -2744, -2744, -2744,  1607, -2744, -2744, -2744, -2744,
   -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744,
   -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744, -2744,
   -2744, -2744, -2744, -2744, -2744
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1423
static const yytype_int16 yytable[] =
{
      74,   400,  1287,  2161,  1015,  1460,  1727,   806,   115,   808,
    1628,  2176,   993,   184,   690,  2332,   336,  2334,  1987,  1998,
    2901,  1044,   996, -1198,  1260,  1263,  1658,  1304,   117,   338,
      70,    71,   926,  2199,   334,    70,    71,  2231,    70,    71,
     922,   929,  1954,   361,  1452,  1453,  1454,   466,   763,  1295,
      70,    71,   394,  1895,  1404,   405,  1255,   879,   411,   117,
    1945,   257,   417,    70,    71,   424,  1168,   662,    70,    71,
     428,   430,  1690,   701,   440,  1098,   120,   447,   451,    70,
      71,   454,    70,    71,   455,   456,  1352,   117,   464,   676,
    1653,  1801,  1971,   465,   531,  1814,    70,    71,  1050,   363,
    2978,   171,  1059,   498,   172,   597,    61,   479,   483,   488,
     489,   493,   495,  1716,   672,   902,  1020,  1246,  1169,   611,
    2966,   844,   389,  1540,   880,  1860,  1861,  1862,   499,  1305,
    1556,    70,    71,    60,    70,    71,  1533,  1306,   173,  1153,
     352,  2180,  1000,   476,  2972,    83,   174,    70,    71,  1923,
    1924,  1659,    62,  1353,   255,   122,   420,  1707,   696,   296,
    1972,   168,   673,   508,   117,   298,  2181,  1955,  1296,  2182,
     477,   443,  1155,    63,   677,   564,  1162,   572,   691,   577,
     581,  2183,  1691,   548,  1654,   186,   122,   532,   541,  1291,
     617,  1021,   549,   563,  1575,   364,  1354,  1578,  1957,   117,
     408,  1045,   117,    64,  2226,   353,  2184,   660,   598,  1961,
     612,   365,   175,   117,   122,   261,   444,  2148,  1613,   678,
    1154,  1297,  3052,  1717,  2185,    65,  1534,   907,   809,    66,
    1925,   299,   273,  1973,  3055,  1060,   810,   811,   436,   903,
    1051,  1001,    70,    71,    67,   370,  1405,   613,  1655,  1557,
     117,   845,   125,  1156,   306,   300,   390,  1163,  2150,    70,
      71,   126,   127,   679,   128,   423,  1999,  1170,   708,   893,
      72,   176,  1298,   355,   663,    70,    71,   812,   117,  1256,
     322,   110,   740,   125,   674,   834,   702,  1099,   603,  1526,
    3047,   122,   126,   127,   923,  2967,   324,   692,   371,   770,
     771,   467,   111,   881,   177,   607,   178,   366,   348,   372,
    1946,   125,   828,  1896,   301,   815,   904,   817,   258,  2973,
     126,   127,   697,    70,    71,   367,   122,   820,   823,   122,
     826,   830,  1355,   832,  1656,   179,  1660,  1128,  1129,   117,
     122,  1235,   373,   842,   259,   896,  1320, -1198,  1728,   359,
     764,   391,  1956,  1171,   927,   693,   852,   854,   170,   182,
     112,   130,  2902,   930,  1172,  1307,   256,   339,  1299,  1692,
     924,  1046,   437,   117,   304,  1257,  1100,   122,   340,  2232,
     906,    73,   341,   913,   915,  1657,   917,  1236,   125,  1130,
     920,   921,   130,   813,   393,  1988,  1247,   126,   127,   404,
    1173,   935,   937,  1124,   409,   122,   899,  2968,   938,   180,
    1718,   160,  1699,   941,   943,   117,   438,   439,   161,   162,
     130,   944,   442,   125,  3048,   946,   125,   416,  1052,    68,
    1720,  2974,   126,   127,  1708,   126,   127,   125,  1571,   908,
    1949,   698,   160,   421,   956,   957,   126,   127,  1958,   161,
     162,   961,   962,   963,   964,   965,   966,   113,   968,  1962,
    2498,   970,  2115,  1914,   368,   360,   122,  2149,   539,  3049,
     160,  1918,   262,  1141,   125,   992,   978,   161,   162,  1292,
     979,  1142,  1143,   126,   127,   984,   985,   986,   987,   988,
     989,  2145,   990,  1760,   483,   994,   995,   130,   263,  2524,
     122,   431,   125,   302,   483,   997,  1440,   308,  2151,  1293,
    2186,   126,   127,   914,  2174,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,  1772,   742,   374,   909,  2209,
     356,   534,   130,  1144,  1950,   130,   651,   535,  1131,  1132,
    1235,  1237,   122,  2011,  2012,   604,   130,   160,   652,  2153,
    1456,  1249,   303,   646,   161,   162,   357,   350,  1238,  1239,
    1027,  1028,   608,   125,   642,  1383,  1041,   114,  2272,    70,
      71,   605,   126,   127,  2031,  2032,   884,   351,  1036,   653,
     377,  1347,   160,   130,   536,   160,  1236,  1662,   609,   161,
     162,   309,   161,   162,   620,  2013,   160,   125,  1951,  1572,
    1068,  1069,   314,   161,   162,   402,   126,   127,  1109,  1963,
    1262,   130,   537,   706,  1062,  2116,  1070,   621,  1663,  1349,
    1089,  1664,   947,   315,  1133,   316,  2033,  1004,    70,    71,
    1250,   741,  1288,   160,   622,  1134,  1135,  1325,  1981,   125,
     161,   162,  1552,   885,   768,   769,    70,    71,   126,   127,
    2093,   448,   413,  2096,  1665,    70,    71,  1104,  1240,  1241,
    1071,   160,  1348,   654,  1330,   538,   426,  1072,   161,   162,
    1415,  1136,   130,  1633,  1553,  1508,   825,  1416,   457,    70,
      71,   647,  1145,  1146,  1952,  1666,    70,    71,  1667,  1687,
    1778,   743,   744,   948,  1005,  1301,  1073,  1040,  1159,  1920,
    1350,  1779,  1634,  1964,   310,  1123,   130,  1974,   655,   539,
     540,  1289,   407,  2823,   432,  1126,  1326,  1178,  1985,   311,
    1074,  2117,   160,   894,   897,   900,   865,  1251,   910,   161,
     162,   414,  1982,   623,   265,  1953,   120,   415,  1635,  1075,
    1237,   707,  1597,  1331,  2014,  2015,  1636,  1509,   130,   627,
    1598,  1599,  1637,   120,  1076,   120,   160,  1238,  1239,   317,
     449,  1077,   463,   161,   162,   266,  1357,  1177,  1147,  1078,
     945,  1965,   949,   433,  1638,  2034,  2035,  1510,  1586,  1148,
    1149,   434,  2118,  1688,  1150,  1595,  1258,   656,   615,  1271,
     233,   312,   419,   867,    70,    71,  1639,   657,   160,  2154,
    1983,   745,  1600,   648,  1729,   161,   162,   234,  1290,  1730,
     118,   453,  1311,  1327,  1640,  1151,   469,  1312,  1313,  1314,
    1315,   643,   886,  1316,  1668,  1318,   318,  1319,   483,  1321,
    2016,  1079,  1784,  1358,  1731,  1732,   649,  1733,  1734,  1966,
    1332,  2017,  2018,   120,   458,   459,   658,   644,   267,  1735,
     450,   120,  1641,   616,  1363,  1080,  1361,  1240,  1241,  1669,
    1081,  2036,  1082,  1736,  1737,   268,   446,  1395,  1984,  1368,
    1511,  1738,  2037,  2038,  1739,   950,   319,  2019,   624,   470,
    2040,   951,  2214,   274,    70,    71,   320,  1520,  2041,  2042,
    1083,  1084,  1740,   460,   625,  2345,  1328,  1642,   472,  1085,
     121,  1741,  1742,  2119,  1382,  1743,  1386,  3088,  2039,   474,
    1012,  1387,  1388,  1643,  1389,  1391,  1393,  1394,  1528,  1689,
    1086,  1364,   749,  1333,   128,  2335,  1644,   275,  1512,   496,
     276,  1407,  1408,  1802,  1806,   269,  1369,  1362,  1412,  1413,
    2043,   128,   509,   128,  1696,  2494,  1709,   889,  1694,  1701,
     277,  1601,  1602,  1228,   461,  1013,  1695,  1645,  3111,  1419,
    1420,  1421,  1422,  1423,  1697,  1425,   123,  1427,  1810,   278,
    1915,  1646,   875,  1647,  1648,  2503,  1744,    70,    71,  1087,
    1229,   520,   270,  1435,  1436,  1437,   279,  1439,   483,  1441,
    1523,  1442,   280,   271,  2065,  1446,   521,  2076,    70,    71,
    1803,  1807,  2066,  2067,  2522,  2077,  2078,  2254,   544,  2120,
     583,  1816,  1359,  1445,  1649,  1447,  2578,  2579,  2580,  2581,
    2582,  2583,  2584,  2585,  2586,  1449,   584,  1820,  1968,   890,
     757,   128,   483,  1457,  1012,  1811,  1969,  1603,  1459,   128,
    1710,  1745,  1824,   281,   129,   750,  1119,  1746,  1604,  1605,
     758,   585,  1828,  1606,  2068,  1472,  1832,  2079,   410,  1476,
    2051,  2052,  1702,  2393,  1127,  1747,   282,  1838,  1555,   574,
    2121,   586,  1846,  1519,  1521,  1524,  1748,   835,  1817,  1013,
     546,  1529,   628,  2406,  1607,  1587,  1535,   751,   752,  2044,
    2045,   587,  1596,  2416,  1821,   588,  2419,    70,    71,   600,
    1365,  1538,  1590,  2426,   601,   629,  1612,  1749,  1750,  1825,
    1795,  1796,  2053,    93,  1850,  1370,   836,  1514,  2463,  1829,
    1548,  2466,   630,  1833,   619,   589,   590,  1703,  1230,  2474,
    2587,  1751,  2477,   753,  1839,   856,  1008,  1235,  1274,  1847,
     759,   891,   602,  1302,   636,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   343,   837,  2046,  1711,   638,  1752,  1804,
    1808,  1851,   283,  1236,    70,    71,  2047,  2048,   591,    70,
      71,  2049,   942,  1231,    70,    71,   639,   754,  1693,   592,
      70,    71,   857,  2069,  2070,   641,  2080,  2081,    70,    71,
     284,   285,   661,  1065,  1812,   710,  1066,  1067,   711,  1719,
    1232, -1422,  2050,   286,   755,  1867,    84,   287,   490,  1726,
     667,   427,  2430,  2431,  1618,    70,    71,  2109,   712,   631,
     858,   859,  1265,    70,    71,  1009,  1755,  1266,  1756,  3013,
      94,   668,  1384,  1757,  1758,  1759,  2569,  1818,  1797,  1798,
     183,  2054,  2055,  1765,    85,  1515,  1766,   670,  1768,   593,
     594,  2439,  2440,  1822,   713,   689,  2448,  2449,   695,    95,
     714,   700,   821,    96,  2432,  1770,   344,  1771,  1826,  2071,
    1799,   704,  2082,   325,   705,  1775,  1776,   709,  1830,   838,
    2072,  2073,  1834,  2083,  2084,  2074,   632,   491,  2085,    93,
    1782,  1783,  1619,  1840,   483,  1785,  1786,  1429,  1848,    70,
      71,   739,  1788,  2441,  1789,   738,  1267,  1791,  2450,  1792,
    1516,   715,    70,    71,   934,  1010,  2075,  1237,   747,  2086,
    1411,   761,  1871,    86,   766,    97,   595,  2056,   767,  2613,
     860,   833,  1268,   378,  1238,  1239,   633,  1517,  2057,  2058,
    1852,   822,    70,    71,  1259,   379,   634,    70,    71,   973,
     974,  2766,   289,  2632,   345,  1863,   772,  2782,   807,  1883,
    1864,   861,  2787,   819,  1865,   346,  1866,  1934,  1877,    98,
    1869,   840,    87,    88,  2059,  3007,   380,   841,    99,   100,
    1620,  1621,    70,  1390,   492,   843,  1875,   847,  1878,   849,
    1880,  1881,  1882,  1884,  3024,  1622,  1886,  1887,   855,  1889,
    1890,   863,  1892,  1269,  1894,    70,    71,  2812,  1625,  1626,
     883,  1902,   888,  2433,  2434,    70,    71,  2112,  1908,  1921,
      89,    90,  1909,  1910,  1911,   912,    94,  1975,  1398,  1399,
     326,   396,   483,  1916,  1240,  1241,  1919,  1941,   327,   397,
     328,   918,  1623,   919,  1929,  1935,  1930,   932,   290,  1932,
     716,   939,  2442,  2443,   940,    95,   954,  2451,  2452,  2331,
     381,   958,  2674,   955,   291,  2004,  2005,  2006,    70,    71,
    2171,  2683,  1976,  1401,  1402,  2008,  2009,  2010,   717,   718,
    2692,   959,    91,   960,  2021,  2022,  2023,   967,    76,  2024,
    2025,   719,  2027,  2028,    77,   720,  1989,   103,  1990,  2435,
     969,  1991,  1992,   292,  1993,   382,  1994,   104,   971,   500,
    2436,  2437,  1996,   972,   105,   975,  1997,    70,  1471,  1270,
    2752,    97,   977,    70,    71,  2003,  2100,  2101,  1763,  1764,
    2103,  2104,   482,  1936,  1937,  2167,  2168,  3104,  2444,   998,
    1977,    78,  2912,  2453,  3108,  2915,  2438,  2917,  1938,  2445,
    2446,    70,    71,  1723,  2454,  2455,   480,   481,   482,   480,
     293,  2802,   850,  2930,  2931,    98,   981,   982,  2806,    79,
    1564,  1565,  1003,   999,    99,   100,  2916,  1007,   294,  1016,
    1018,  2946,  1023,  1025,   383,  2447,  2125,  2108,  1038,   501,
    2456,  1043,  2929,  1048,   384,  1939,  1054,  2934,  1055,  1057,
    1058,  3145,  1063,  3146,   106,  1978,  2110,  2111,  2113,  2126,
    1090,  1769,  1091,  1092,   502,   503,   385,  1094,  1096,  1102,
    1105,  2127,    80,   504,   386,  1777,  1107,  1111,  2123,  1116,
    1117,  1118,  1120,  2139,  2128,  2834,  1121,  2836,  1671,  2837,
    1122,   851,  2838,   387,  2839,   505,  1125,  1137,  2129,  2130,
      70,    71,  2114,  1625,  1626,   506,  1138,   107,  1139,  2170,
    2172,    70,    71,  2144,  1625,  1626,  1140,    81,  1152,  1672,
    2179,  1164,  1673,  1166,  2190,  1674,    70,    71,  2173,  1625,
    1626,  2196,  1167,  1227,  1174,  1175,  2529,  1176,  1243,  1234,
     398,  1245,  1253,   399,   108,  1254,  2202,  1308,  1309,  1310,
    1322,  1324,  2205,  1335,  1336,  1675,  2207,  1337,  2210,  2211,
    1338,  2213,  2215,  2216,  1339,  2219,  1342,  1340,  2222,  2223,
    2224,  2225,  2227,  2228,  2229,  2230,  2233,  2235,  2236,  1341,
    1343,  1344,  2238,  2239,  2240,  2241,  1676,  1345,  1346,  1677,
    1367,  1374,  2247,  2248,  2572,  1372,  2250,  2251,  2252,  1373,
    1375,  1376,  2255,  2256,  1899,  1900,  1377,  1378,  1396,  1379,
    1380,  1381,  1397,  1400,  1403,  2259,  2260,  1410,  2261,  2262,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,  1409,   522,
    2953,  1414,  1216,  1417,  2593,  1418,  1424,  1474,  1426,  1428,
    1430,  2131,  1431,  1462,  1443,  1444,  1463,  1464,  1217,  1466,
     523,  1467,  2132,  2133,  2134,  2135,   335,  1218,  1468,  1513,
    1469,  1470,  1475,  2307,  1525,  1527,  1539,   524,  1219,  1531,
    2300,  1541,  2301,  2302,  1536,  1542,  2303,  1545,  1629,  1546,
     525,  2305,  2308,  1549,  2310,  2311,  2312,  1550,  2313,  2314,
    1551,  2316,  1559,  2317,  2318,  1560,  2320,  2321,  1561,  2323,
    1562,  2325,   526,  1566,  1220,  1678,   527,  1567,  1568,  2329,
    1569,  1570,  3103,  1576,  1577,  1630,  1579,  2333,  1580,  1582,
    1584,   528,  2338,  2339,  1592,  1594,  1221,  1608,  2341,  1609,
    1632,  1610,  1611,  1614,  2358,  1615,  1616,  2344,  1631,  1651,
    1679,  1652,  1661,   497,  1681,  2136,  2364,  1670,  1712,  1682,
    2369,  1683,  1684,  2389,  1685,  1686,  1704,  1706,  1700,   236,
    1705,  1713,  1714,  1715,  1724,  1725,  2397,  1721,   529,  1754,
    1680,  1722,  1762,  1773,  2373,  1774,  2400,  1780,  2106,  1781,
    1787,  1790,  1222,   237,  1793,  1794,   238,  1815,  1836,  1837,
    1842,  1874,  1843,  1844,  1845,  -507,  1854,  1855,  1856,  2383,
    2384,  1857,  1858,  1859,  2386,  1872,  1873,  2124,  1885,  1879,
    2388,  1888,  2141,  2142,   561,  1891,   568,   571,  1893,   576,
     580,  1898,  1903,  1904,   239,  1905,  1917,  1223,  1922,  1931,
    1942,   240,  1933,  1943,  1967,  1944,  1948,  1970,  1979,  1959,
    1960,  2175,   241,   242,  1986,  1995,  2001,  2002,  2485,   243,
    2750,  2751,   665,  2192,  2754,  2755,  1224,  2007,  2758,  2759,
    1980,  2026,  2197,  2198,  2029,  2087,  2060,  2062,  2064,  2088,
    2089,   681,   687,  2090,  2203,  2094,  2095,   694,   244,  2097,
    2098,   699,  2099,  2102,  2146,  2105,  2122,  2138,  2143,  2147,
    2155,  2156,  2152,    70,    71,  2157,   245,  2158,  2159,  2160,
    2162,  1225,  2163,  1226,  2164,  2165,  2169,  2188,  2208,   118,
    2193,  2166,  2204,  2206,   246,   247,  2810,  2489,  2490,  2212,
    2492,   248,  2217,  2220,  2244,  2221,  2237,  2245,  2246,  2382,
    2257,  2258,  2410,  2263,  2264,  2265,  2457,  2266,   816,  2267,
    2268,   818,   865,  2269,  2270,  2271,   249,  2273,  2274,  2275,
    2468,  2276,   827,  2504,  2505,  2506,  2507,  2508,  2509,  2510,
    2511,  2512,  2277,  2278,  2596,  2279,  3037,  2280,  2281,   980,
    2282,  2283,  2284,  2554,  2285,   848,  2286,  2518,  2287,  2520,
    2288,  2289, -1216,  2290,  2291,  2292,  2293,  3119,  2294,  2295,
    2296,  2797,  2297,   250,  2298,  2299,  2319,  2528,   483,   121,
    2315,  2322,  2324,  2532,  2326,   866,  2328,  2340,  2385,   867,
    2346,  2347,  2348,  2349,  2535,  2536,  2537,  2538,  2539,  2540,
    2541,  2542,  2543,  2544,  2350,  2387,  2547,  2548,  2549,  2550,
    2551,  2552,  2553,  2390,  2555,  2556,  2557,  2558,  2559,  2391,
    2562,  2392,  2563,  2564,  2565,  2394,  2395,   868,   869,   251,
    2396,  2399,   870,  2401,  2402,  3037,   483,  2573,  2403,  2407,
    2408,  2417,   252,  2409,  2411,   123,  2412,  2413,  2418,  2920,
    2420,  2421,  2422,  2423,  2427,  2900,  2428,  2921,  2429,  1574,
    2905,  2458,  2459,  2460,  2464,  2465,  2922,  2467,  2469,  2470,
    2471,  2475,  2476,   871,   253,   976,  2478,  2480,  2481,  2483,
    2484,  2923,  2486,  2493,  2495,  2499,   983,  2502,  2588,  2513,
    2589,  2514,  2590,  2515,  2592,   991,   483,  2594,  2516,  2595,
    2941,  2517,   953,  2521,  2599,  2600,  2561,  2601,  2602,  2566,
    2604,  2567,  2606,  2619,  2570,  2571,  2574,  2577,  2605,  2611,
    2597,  2612,  2598,   129,  2659,  2615,  2603,  2607,  2617,  2609,
    2924,  2616,   872,  2620,  2621,  2622,  2623,   873,  2624,  2653,
    2925,  2656,  2658,  2661,  2664,  2665,  2667,  3051,  2669,  2670,
    2671,  2675,  2676,  2774,  2677,  2655,  2678,  2679,  2680,  2684,
    2685,  2927,  2686,  2687,   874,  1029,  1030,  2688,   875,  2689,
    2693,  2694,  3034,  2695,  2702,  2657,  2705,  2713,  1034,  2716,
     876,  2719,  2720,  1037,  2697,  2698,  2699,  2700,  2701,  2721,
    2703,  2704,  1049,  2724,  2729,  2708,  2709,  2710,  2711,  2712,
    2733,  2714,  2715,  2749,  3090,  2789,  2808,  2926,  2814,  2815,
    2816,  2817,  2820,  2822,  2928,  2825,   831,  2827,  3089,  2828,
    2829,  2722,  2830,  2832,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,  2841,  2843,  2848,  2855,  2864,  2873,  2497,  2879,
    2883,  2889,  2897,  2910,  3086,  2943,  2954,  1351,  2955,  2957,
    2958,  2959,  2960,  2961,  2962,  2963,  2965,     0,  2971,  2727,
    2977,   933,  1112,  1113,  1114,  1115,  3001,  3004,  3010,     0,
    3014,  2734,  2735,  2736,  2737,  2738,  2739,  2740,  2741,  2742,
    2743,  2744,  3094,  3096,  3015,     0,  3016,  2747,  3017,  2523,
    3018,  3019,   483,   483,  3021,  3026,   483,   483,  3041,  3044,
     483,   483,  2760,  2761,  2762,  2763,  2764,  2765,  3042,  2767,
    2768,  2769,  3043,  3045,  3046,  2783,  2784,  2785,  2786,  3053,
    2788,  3056,  2790,  2791,  2792,  2793,  2794,  3067,  2796,  3075,
    3079,  2800,  2801,  3078,  3082,     0,  3091,  3092,  3099,  3102,
       0,  3106,  3113,  3114,  3120,  3128,     0,  3132,  3133,  3135,
    3139,  3141,     0,  3142,  3143,  2809,  3144,     0,   483,  2811,
       0,     0,     0,  2813,     0,     0,  2845,     0,  2818,  2819,
       0,  2821,  1273,     0,     0,  2850,  2851,  2852,  2853,  2854,
       0,  2856,  2857,     0,  2859,  2860,  2861,  2862,  2863,     0,
    2865,  2866,     0,  2868,  2869,  2870,  2871,  2872,     0,  2874,
    2875,     0,  2877,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2880,  2881,     0,     0,     0,     0,     0,     0,
       0,     0,  1026,  2884,  2844,     0,     0,     0,     0,  1031,
       0,     0,  1032,     0,     0,     0,     0,  1033,     0,     0,
       0,  1035,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2020,     0,     0,  1275,     0,     0,     0,     0,     0,     0,
       0,  1276,  2030,     0,     0,     0,     0,     0,     0,  1277,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2091,  2092,  2891,  1278,     0,     0,
    2893,     0,     0,     0,  1279,     0,     0,     0,     0,     0,
    2894,  2895,     0,     0,     0,     0,  2899,   483,     0,     0,
       0,  2904,   483,     0,     0,     0,  1110,  2909,     0,  1280,
    2913,  2914,     0,     0,     0,     0,     0,     0,     0,     0,
    1281,     0,     0,   721,   722,   723,     0,     0,     0,     0,
       0,     0,  2932,  2933,     0,  2935,  1433,  2937,  2938,  2939,
    2940,     0,   483,  2942,  2982,     0,     0,  2945,  1438,     0,
     724,     0,     0,  2984,     0,     0,     0,     0,     0,     0,
    2956,     0,  2986,   725,  2987,  1282,     0,     0,  2989,     0,
    2964,     0,     0,  1283,     0,     0,  2614,     0,     0,   726,
       0,     0,     0,     0,     0,     0,  1448,     0,     0,     0,
       0,  2979,     0,  2627,  2628,  2629,     0,     0,  2631,     0,
    2633,  2634,     0,     0,  2636,  2637,  2638,     0,     0,  2640,
    2641,   727,     0,     0,  2645,     0,  2647,  2648,     0,  2650,
       0,   728,     0,  2918,     0,     0,  1284,     0,     0,     0,
       0,     0,     0,  2991,     0,     0,     0,     0,  2995,  1285,
    2997,     0,     0,   729,  2936,     0,  3000,     0,     0,     0,
       0,     0,   730,  2944,     0,     0,     0,  1286,     0,     0,
       0,  3008,     0,  2803,     0,     0,     0,  3057,  1317,  3058,
       0,  3059,   731,     0,  3060,  1323,  3061,  1544,     0,     0,
    3025,     0,     0,     0,     0,  3029,  3062,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   732,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  3050,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2723,     0,     0,
    2726,     0,     0,   117,     0,  2730,     0,     0,     0,  2731,
     733,     0,  3065,     0,     0,   734,     0,  3070,   118,     0,
    3072,     0,     0,     0,     0,     0,     0,  3076,  2746,     0,
       0,     0,   735,  1698,     0,   736,  3005,  3006,  3080,     0,
    3009,   119,  3011,  3083,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  3022,  3023,     0,     0,   120,
    3027,     0,  3028,     0,     0,  3031,  3101,  3093,  3095,     0,
    3032,  3033,     0,     0,     0,   579,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1432,     0,  1761,
     118,     0,     0,  3105,  1434,     0,     0,  3107,  3122,  1767,
    3109,  3125,     0,     0,     0,     0,     0,     0,   121,     0,
    3115,  3116,  3117,  3118,     0,     0,     0,     0,     0,  2824,
       0,     0,  3127,     0,     0,     0,  3130,     0,     0,  3073,
     122,   120,  3074,  3134,     0,  3136,     0,  3077,     0,     0,
    1450,  1451,     0,     0,     0,  1455,     0,     0,  1458,  3081,
       0,     0,  2835,     0,  3084,     0,     0,     0,     0,     0,
    1465,     0,     0,     0,     0,     0,  2947,     0,     0,  2398,
    2952,     0,     0,     0,   123,     0,     0,  2404,  2405,     0,
     121,     0,     0,     0,     0,     0,     0,  2414,  2415,     0,
       0,     0,     0,     0,     0,     0,     0,  2424,  2425,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2461,  2462,     0,     0,     0,   124,     0,     0,
    1868,     0,     0,  2472,  2473,     0,     0,   125,     0,  3126,
    2479,     0,     0,  3129,  2888,     0,   126,   127,  1876,     0,
    2482,     0,     0,     0,     0,     0,   123,   128,     0,     0,
       0,     0,   129,  3140,  2896,     0,     0,     0,     0,     0,
       0,     0,  2903,     0,     0,  2906,  2907,  3147,  1907,     0,
    3148,  3149,     0,     0,     0,     0,     0,     0,  1913,  1157,
       0,     0,     0,     0,  1158,     0,     0,     0,     0,  1617,
       0,     0,  3020,     0,     0,  1928,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1940,     0,     0,
       0,     0,  1947,     0,     0,     0,     0,  3040,     0,   128,
       0,     0,     0,     0,   129,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   130,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,     0,     0,     0,     0,     0,   160,     0,     0,     0,
       0,     0,     0,   161,   162,     0,  2992,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  3003,     0,     0,
       0,     0,     0,     0,     0,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,  3112,     0,     0,     0,  2107,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,  2140,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  3063,  3064,     0,  3066,  1870,  3068,  3069,     0,
       0,  3071,     0,     0,     0,     0,     0,     0,  2177,     0,
       0,  2178,     0,     0,     0,  2189,     0,     0,     0,     0,
       0,  2194,  2195,     0,     0,     0,     0,     0,     0,     0,
    2200,     0,  2660,     0,  1901,     0,     0,  2201,     0,  1906,
       0,     0,  2662,  2663,     0,     0,     0,     0,     0,  1912,
       0,     0,     0,  2666,     0,     0,     0,     0,   773,   774,
       0,  3098,  2668,     0,     0,     0,  2672,  2673,     0,     0,
       0,     0,     0,     0,   775,  2681,  2682,     0,     0,  2242,
       0,     0,     0,     0,  2690,  2691,     0,     0,     0,     0,
    2696,  2253,     0,     0,     0,     0,     0,     0,     0,     0,
    2706,  2707,     0,     0,     0,     0,     0,     0,     0,  3131,
       0,  2717,     0,  2718,     0,     0,     0,     0,   776,     0,
       0,     0,     0,     0,     0,   777,     0,     0,     0,     0,
       0,     0,     0,     0,   778,     0,   779,     0,     0,     0,
       0,   780,     0,     0,   781,     0,     0,     0,     0,     0,
     782,     0,     0,     0,   783,     0,     0,     0,     0,     0,
       0,   784,     0,     0,     0,     0,     0,     0,     0,   785,
       0,     0,     0,     0,     0,     0,     0,     0,   786,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2306,     0,     0,     0,   787,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2327,     0,   788,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2337,     0,     0,     0,   789,     0,     0,
       0,     0,     0,     0,    70,    71,  2342,     0,  2343,     0,
     790,   791,     0,     0,     0,     0,     0,     0,  2352,     0,
     118,  2354,  2355,  2356,  2357,  2359,     0,  2361,     0,     0,
       0,  2362,     0,     0,     0,   792,  2363,  2365,  2366,  2367,
    2368,  2370,   330,     0,  2371,  2372,     0,     0,     0,  2374,
    2375,  2376,  2377,     0,  2846,  2378,  2379,  2847,     0,  2191,
    2849,   120,  2380,  2381,   793,     0,     0,     0,     0,     0,
    2858,     0,     0,     0,     0,     0,     0,     0,   794,  2867,
     795,     0,     0,     0,     0,     0,     0,     0,  2876,     0,
       0,     0,     0,     0,     0,  2878,   796,     0,     0,     0,
       0,   797,     0,     0,     0,     0,  2882,     0,     0,   798,
     121,     0,  2885,     0,     0,     0,     0,   799,     0,     0,
       0,     0,  2243,     0,     0,     0,     0,     0,  2249,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   800,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   801,   802,  1927,   803,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     118,     0,     0,     0,     0,     0,   123,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2488,     0,
       0,  2491,     0,     0,     0,     0,     0,   804,     0,     0,
       0,     0,  2496,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2500,   331,
       0,  2770,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2304,  2771,     0,     0,     0,  2309,     0,     0,
       0,  2980,     0,     0,     0,     0,     0,     0,  2981,   128,
    2519,     0,     0,     0,   129,     0,     0,  2983,     0,     0,
     121,  1275,  2772,     0,     0,   332,  2985,     0,  2330,  1276,
       0,     0,  2988,     0,  2336,     0,  2990,  1277,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1278,     0,     0,     0,     0,
       0,  2353,  1279,     0,     0,  2773,     0,     0,  2360,     0,
    2560,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   123,  1280,     0,     0,
       0,     0,     0,  2576,     0,   333,     0,     0,  1281,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,  1282,     0,     0,     0,     0,     0,     0,
       0,  1283,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   129,     0,     0,     0,  2610,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2618,     0,     0,     0,     0,     0,     0,
    2625,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1284,     0,     0,     0,     0,     0,
       0,     0,  2643,     0,     0,     0,     0,  1285,     0,     0,
       0,  2652,     0,     0,     0,  2654,     0,     0,  2487,     0,
       0,     0,     0,     0,     0,  1286,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2774,     0,  2775,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2501,     0,     0,     0,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,     0,     0,   118,     0,     0,  2525,  2526,
       0,     0,     0,     0,     0,  2776,     0,     0,     0,     0,
    2527,     0,     0,     0,     0,  2530,  2531,     0,     0,     0,
       0,  2533,  2534,     0,     0,     0,     0,     0,     0,  2725,
       0,     0,  2728,     0,     0,     0,     0,     0,     0,     0,
       0,  2732,     0,     0,     0,     0,   551,   552,     0,     0,
       0,     0,   553,     0,     0,     0,     0,  2745,     0,     0,
    2748,     0,   682,  2568,   118,     0,     0,  2753,     0,     0,
    2756,  2757,     0,     0,  2575,   554,   555,     0,     0,     0,
       0,     0,     0,     0,     0,   121,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   683,     0,  2804,
    2805,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2591,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2608,     0,
       0,   123,     0,     0,   121,     0,     0,     0,     0,     0,
       0,     0,  2831,     0,     0,     0,   556,     0,     0,     0,
     684,     0,     0,  2626,     0,     0,     0,     0,  2630,     0,
       0,     0,     0,     0,  2635,     0,   557,     0,     0,  2639,
       0,     0,     0,  2642,     0,  2644,     0,  2646,     0,     0,
    2649,     0,  2651,     0,     0,     0,     0,     0,     0,     0,
       0,   558,     0,     0,     0,     0,     0,     0,     0,     0,
     123,     0,     0,     0,     0,     0,     0,     0,     0,   129,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     685,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2887,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   559,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2908,   129,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2919,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,     0,   560,
       0,     0,     0,     0,     0,     0,     0,  2970,     0,     0,
       0,  2976,     0,   686,     0,     0,     0,     0,     0,     0,
       0,  2795,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2807,     0,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,     0,  2993,  2994,
       0,  2996,     0,  1179,  1180,  1181,  2998,  2999,     0,  2826,
       0,     0,     0,  3002,     0,     0,  2833,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1182,  1183,     0,     0,  1184,
       0,     0,  1185,  2840,     0,  2842,     0,     0,  3030,     0,
    1186,     0,     0,     0,  1187,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1188,  1189,     0,     0,     0,     0,
       0,     0,  1190,  1191,     0,     0,     0,     0,     0,     0,
    3054,     0,     0,  1192,     0,     0,     0,     0,     0,     0,
    1193,     0,     0,     0,     0,     0,     0,     0,  1194,  1477,
    1478,  1479,  1195,  1196,     0,     0,  1197,     0,     0,     0,
       0,     0,     0,  2886,     0,     0,     0,     0,     0,  2890,
       0,     0,     0,  2892,     0,     0,  1198,     0,     0,     0,
       0,  1480,  1481,     0,     0,  1482,     0,     0,     0,  2898,
       0,     0,  1483,     0,     0,     0,  1484,     0,  1199,     0,
    1485,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1486,  1487,     0,     0,     0,     0,     0,     0,  1488,     0,
       0,     0,     0,     0,     0,     0,  3100,  1200,     0,  1489,
       0,     0,     0,     0,   118,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  3110,  2950,  2951,     0,  1490,  1491,
       0,     0,  1492,     0,  1201,     0,     0,     0,  3121,     0,
       0,  3124,   118,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1493,     0,     0,   120,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1202,     0,  1203,     0,  1494,     0,     0,     0,  1204,  1205,
       0,     0,     0,   120,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1206,  1207,   118,     0,     0,
       0,     0,     0,  1495,   121,     0,     0,  1208,  1209,     0,
       0,     0,     0,  1496,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   121,     0,     0,     0,     0,  1210,     0,  1211,
    3012,   566,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1212,     0,  1213,     0,     0,     0,     0,
       0,     0,  1214,     0,     0,     0,  1497,     0,  1498,     0,
     123,   118,     0,     0,  1499,  1500,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   121,     0,     0,
       0,     0,  1501,     0,     0,     0,  1215,     0,   123,     0,
       0,     0,     0,     0,  1502,     0,     0,     0,     0,     0,
       0,     0,  1543,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1503,     0,  1504,     0,     0,     0,     0,
       0,     0,     0,   128,     0,     0,     0,  1505,   129,     0,
       0,  3085,     0,   123,   118,     0,     0,     0,  1506,     0,
       0,   121,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   128,     0,     0,     0,  3097,   129,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1507,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   570,     0,     0,     0,   118,     0,     0,
       0,  3123,     0,     0,     0,     0,     0,   123,     0,     0,
       0,   129,     0,     0,     0,     0,  2351,     0,     0,     0,
       0,     0,  3137,     0,   121,  3138,     0,     0,     0,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   129,   567,   121,     0,     0,
     123,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   123,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   129,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   129,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
       1,     0,     0,     2,     0,     0,     3,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       4,     0,     0,     0,     0,     0,     5,     6,     0,     0,
       0,     7,     8,     9,     0,     0,     0,     0,     0,     0,
       0,    10,     0,     0,     0,     0,     0,     0,    11,     0,
      12,    13,     0,     0,     0,     0,     0,     0,     0,     0,
      14,    15,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    16,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    17,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    18,
       0,     0,     0,    19,     0,     0,     0,    20,     0,     0,
       0,    21,    22,     0,     0,     0,     0,    23,    24,     0,
       0,    25,     0,     0,     0,     0,     0,    26,     0,     0,
       0,     0,     0,    27,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    28,     0,     0,     0,    29,    30,
      31,     0,     0,    32,    33,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    34,     0,     0,     0,
      35,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    36,     0,    37,    38,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    39,     0,    40,
       0,     0,     0,     0,     0,     0,    41,     0,     0,     0,
      42,     0,     0,     0,    43,     0,    44,    45,     0,    46,
       0,     0,     0,     0,    47,   188,     0,     0,   189,     0,
       0,   190,     0,     0,     0,     0,     0,     0,     0,     0,
      48,     0,     0,     0,     0,     0,    49,     0,     0,     0,
       0,     0,   191,     0,     0,     0,   192,   193,   194,     0,
       0,     0,     0,     0,    50,    51,   195,     0,   196,     0,
       0,     0,     0,   197,     0,   198,   199,   200,    52,     0,
      53,     0,     0,   201,     0,   202,     0,    54,     0,     0,
      55,    56,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     203,    57,     0,     0,     0,     0,     0,     0,     0,    58,
       0,     0,     0,     0,     0,     0,     0,     0,   204,     0,
       0,     0,     0,     0,     0,     0,     0,   205,     0,   206,
     207,     0,   208,   209,     0,     0,   210,     0,     0,     0,
     211,     0,   212,  1588,     0,     0,     0,     0,   213,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   214,   215,
       0,     0,     0,   216,     0,     0,     0,     0,     0,     0,
       0,   217,     0,     0,     0,   218,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   219,     0,   220,
       0,     0,     0,     0,     0,     0,   221,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   222,     0,   223,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   224,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   225,
     226,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     227,     0,     0,     0,     0,     0,     0,     0,   228,     0,
       0,     0,     0,     0,   229,     0,   230,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,  1589,     0,     0,     0,     0,
       0,     0,     0,     0,   231
};

static const yytype_int16 yycheck[] =
{
       3,    56,   795,  1674,   542,  1043,     5,   314,    11,     4,
    1180,  1688,   497,    16,     5,  1909,    37,  1911,    16,    20,
       5,     4,   507,     0,   790,   791,    28,     5,     4,     5,
       3,     4,     4,  1710,    37,     3,     4,     5,     3,     4,
       4,     4,    28,    46,  1031,  1032,  1033,     5,     5,    16,
       3,     4,    55,    49,   105,    58,    16,    65,    61,     4,
      21,    65,    65,     3,     4,    68,    13,    15,     3,     4,
      73,    74,    37,     4,    77,    18,    60,    80,    81,     3,
       4,    84,     3,     4,    87,    88,    65,     4,    91,   165,
      27,  1338,   189,    96,   130,  1342,     3,     4,     4,    26,
    2843,    46,   148,   124,    49,   244,    11,   110,   111,   112,
     113,   114,   115,    37,    46,    12,   217,    16,    65,     4,
      33,   165,     4,  1110,   132,  1372,  1373,  1374,   131,   107,
     183,     3,     4,    71,     3,     4,    16,   115,    83,    94,
       4,    27,   112,     5,    33,   324,    91,     3,     4,    24,
      25,   153,    57,   132,    71,   131,    33,     5,     5,   263,
     257,    34,    94,   166,     4,     5,    52,   153,   135,    55,
      32,   153,    94,    78,   250,   196,    94,   198,   169,   200,
     201,    67,   147,   190,   121,   160,   131,   223,   191,     5,
     211,   292,   199,   196,  1147,   122,   175,  1150,    21,     4,
       5,   184,     4,   108,    60,    69,    92,   228,   347,    21,
      95,   138,   157,     4,   131,    65,   198,    21,  1171,   295,
     175,   188,  2965,   147,   110,   130,   106,    18,   223,   134,
     105,    71,    15,   330,  2977,   281,   231,   232,   211,   136,
     146,   211,     3,     4,   149,    54,   297,   132,   185,   302,
       4,   295,   228,   175,     5,    95,   138,   175,    21,     3,
       4,   237,   238,   339,   248,   137,   267,   214,   271,    71,
     223,   216,   239,    65,   222,     3,     4,   272,     4,   239,
     322,    42,   285,   228,   216,   340,   217,   230,    65,  1082,
     211,   131,   237,   238,   258,   208,    71,   288,   107,   302,
     303,   259,    63,   311,   249,    65,   251,   234,     4,   118,
     271,   228,   333,   309,   154,   318,   213,   320,   322,   208,
     237,   238,   169,     3,     4,   252,   131,   330,   331,   131,
     333,   334,   311,   336,   271,   280,   338,    13,    14,     4,
     131,    68,   151,   346,   348,    71,   831,   324,   347,   218,
     307,   233,   338,   300,   326,   346,   359,   360,    14,    15,
     121,   337,   347,   326,   311,   343,    22,   343,   335,   334,
     334,   354,   345,     4,    30,   335,   319,   131,   354,   347,
     383,   334,    38,   386,   387,   322,   389,   114,   228,    65,
     393,   394,   337,   388,   334,   393,   295,   237,   238,   334,
     347,   404,   405,   710,    60,   131,    71,   320,   411,   354,
     334,   387,  1205,   416,   417,     4,   389,   390,   394,   395,
     337,   424,    78,   228,   345,   428,   228,   334,   334,   334,
    1223,   320,   237,   238,   282,   237,   238,   228,    16,   230,
      27,   288,   387,   320,   447,   448,   237,   238,   271,   394,
     395,   454,   455,   456,   457,   458,   459,   218,   461,   271,
    2137,   464,  1632,  1450,   391,   334,   131,   271,   389,   390,
     387,  1458,   322,     5,   228,   496,   479,   394,   395,   295,
     483,    13,    14,   237,   238,   488,   489,   490,   491,   492,
     493,  1661,   495,  1259,   497,   498,   499,   337,   348,  2176,
     131,     4,   228,   343,   507,   508,   991,    61,   271,   325,
     396,   237,   238,   257,  1684,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,  1291,     5,   336,   319,   257,
     322,   211,   337,    65,   121,   337,    38,   217,   214,   215,
      68,   268,   131,    13,    14,   322,   337,   387,    50,    21,
    1035,    42,   392,    21,   394,   395,   348,    95,   285,   286,
     563,   564,   322,   228,    65,   319,   587,   328,  1815,     3,
       4,   348,   237,   238,    13,    14,    65,    42,   581,    81,
       4,    94,   387,   337,   264,   387,   114,    22,   348,   394,
     395,   145,   394,   395,    48,    65,   387,   228,   185,   177,
       4,     5,    48,   394,   395,   263,   237,   238,   663,    27,
     138,   337,   292,     4,   617,   115,    20,    71,    53,    94,
     641,    56,    31,    69,   300,    71,    65,   217,     3,     4,
     121,   287,    42,   387,    88,   311,   312,    42,    27,   228,
     394,   395,   175,   132,   300,   301,     3,     4,   237,   238,
    1603,    85,   306,  1606,    89,     3,     4,   660,   385,   386,
      64,   387,   175,   165,    42,   345,   388,    71,   394,   395,
       4,   347,   337,    42,   207,    71,   332,    11,     4,     3,
       4,   149,   214,   215,   271,   120,     3,     4,   123,    27,
       5,   170,   171,   102,   284,   326,   100,     4,   753,     4,
     175,    16,    71,   121,   258,   708,   337,  1500,   210,   389,
     390,   121,     0,  2607,   217,   718,   121,   772,  1511,   273,
     124,   221,   387,   379,   380,   381,    65,   218,   384,   394,
     395,     5,   121,   187,    95,   322,    60,     4,   107,   143,
     268,   132,     5,   121,   214,   215,   115,   143,   337,   214,
      13,    14,   121,    60,   158,    60,   387,   285,   286,   205,
     194,   165,     4,   394,   395,   126,    65,   770,   300,   173,
     426,   189,   181,   276,   143,   214,   215,   173,  1155,   311,
     312,   284,   282,   121,   316,  1162,   789,   289,     5,   792,
      90,   345,     5,   132,     3,     4,   165,   299,   387,   271,
     189,   280,    65,   271,    22,   394,   395,   107,   218,    27,
      19,     5,   815,   218,   183,   347,     4,   820,   821,   822,
     823,   322,   311,   826,   259,   828,   272,   830,   831,   832,
     300,   235,  1317,   132,    52,    53,   304,    55,    56,   257,
     218,   311,   312,    60,   170,   171,   348,   348,   209,    67,
     284,    60,   221,    70,    65,   259,    94,   385,   386,   294,
     264,   300,   266,    81,    82,   226,   223,   922,   257,    65,
     266,    89,   311,   312,    92,   284,   322,   347,   332,    32,
       5,   290,   257,     4,     3,     4,   332,   235,    13,    14,
     294,   295,   110,   219,   348,  1933,   301,   266,     5,   303,
     109,   119,   120,   115,   907,   123,   909,  3036,   347,     5,
     153,   914,   915,   282,   917,   918,   919,   920,   235,   257,
     324,   132,     5,   301,   248,  1912,   295,    48,   324,   218,
      51,   934,   935,    65,    65,   296,   132,   175,   941,   942,
      65,   248,     4,   248,   257,  2115,    27,    35,   298,   144,
      71,   214,   215,     4,   280,   198,   306,   326,  3087,   962,
     963,   964,   965,   966,   277,   968,   175,   970,    65,    90,
    1455,   340,   311,   342,   343,  2145,   194,     3,     4,   383,
      31,   128,   343,   986,   987,   988,   107,   990,   991,   992,
      16,   994,   113,   354,     5,  1016,    71,     5,     3,     4,
     132,   132,    13,    14,  2174,    13,    14,  1773,   324,   221,
      47,    65,   311,  1016,   383,  1018,  2263,  2264,  2265,  2266,
    2267,  2268,  2269,  2270,  2271,  1028,    63,    65,   298,   117,
     101,   248,  1035,  1036,   153,   132,   306,   300,  1041,   248,
     121,   259,    65,   164,   253,   128,   702,   265,   311,   312,
     121,    88,    65,   316,    65,  1058,    65,    65,    63,  1062,
      13,    14,   257,  2016,   720,   283,   187,    65,  1132,    34,
     282,   108,    65,  1076,  1077,  1078,   294,    58,   132,   198,
     190,  1084,    48,  2036,   347,  1156,  1089,   170,   171,   214,
     215,   128,  1163,  2046,   132,   132,  2049,     3,     4,    71,
     311,  1104,  1157,  2056,     5,    71,  1170,   325,   326,   132,
      44,    45,    65,    29,    65,   311,    97,    31,  2071,   132,
    1123,  2074,    88,   132,    15,   162,   163,   322,   179,  2082,
    2300,   349,  2085,   216,   132,    65,    85,    68,   794,   132,
     211,   229,    96,   799,   322,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,    77,   155,   300,   257,    71,   396,   311,
     311,   132,   303,   114,     3,     4,   311,   312,   225,     3,
       4,   316,    11,   244,     3,     4,   264,   280,  1201,   236,
       3,     4,   132,   214,   215,   323,   214,   215,     3,     4,
     331,   332,    96,   621,   311,    48,   624,   625,    51,  1222,
     271,     0,   347,   344,   307,     4,     4,   348,    42,  1232,
      71,   137,    13,    14,    89,     3,     4,     5,    71,   205,
     170,   171,    37,     3,     4,   194,  1249,    42,  1251,  2920,
     166,    79,   908,  1256,  1257,  1258,  2243,   311,   192,   193,
      69,   214,   215,  1266,    42,   179,  1269,    32,  1271,   306,
     307,    13,    14,   311,   107,     5,    13,    14,     4,   195,
     113,     4,    42,   199,    65,  1288,   190,  1290,   311,   300,
     224,     5,   300,   229,     4,  1298,  1299,     4,   311,   280,
     311,   312,   311,   311,   312,   316,   272,   121,   316,    29,
    1313,  1314,   167,   311,  1317,  1318,  1319,   973,   311,     3,
       4,     4,  1325,    65,  1327,     5,   121,  1330,    65,  1332,
     244,   164,     3,     4,   137,   284,   347,   268,     5,   347,
      11,     5,  1397,   121,     4,   261,   383,   300,     5,  2336,
     280,     4,   147,    38,   285,   286,   322,   271,   311,   312,
     311,   121,     3,     4,   295,    50,   332,     3,     4,     4,
       5,  2541,    26,  2360,   278,  1378,     5,  2547,     5,    63,
    1383,   311,  2552,     5,  1387,   289,  1389,    89,  1409,   305,
    1393,     4,   170,   171,   347,  2913,    81,     4,   314,   315,
     255,   256,     3,     4,   218,     4,  1409,     5,  1411,     4,
    1413,  1414,  1415,  1416,  2932,   270,  1419,  1420,   105,  1422,
    1423,   132,  1425,   218,  1427,     3,     4,    63,     6,     7,
       5,  1434,     4,   214,   215,     3,     4,     5,  1441,  1460,
     218,   219,  1445,  1446,  1447,     4,   166,   144,     4,     5,
     386,    15,  1455,  1456,   385,   386,  1459,  1478,   394,    23,
     396,   307,   317,     4,  1467,   167,  1469,     4,   122,  1472,
     303,     4,   214,   215,     5,   195,     4,   214,   215,   199,
     165,     4,  2435,   223,   138,  1549,  1550,  1551,     3,     4,
       5,  2444,   189,     4,     5,  1559,  1560,  1561,   331,   332,
    2453,     4,   280,     4,  1568,  1569,  1570,     4,   211,  1573,
    1574,   344,  1576,  1577,   217,   348,  1519,    90,  1521,   300,
       4,  1524,  1525,   177,  1527,   210,  1529,   100,     4,    36,
     311,   312,  1535,     4,   107,     5,  1539,     3,     4,   334,
    2527,   261,     5,     3,     4,  1548,  1610,  1611,     4,     5,
    1614,  1615,    10,   255,   256,     4,     5,  3075,   300,     5,
     257,   264,  2762,   300,  3082,  2765,   347,  2767,   270,   311,
     312,     3,     4,  1229,   311,   312,     8,     9,    10,     8,
     234,  2568,    42,  2783,  2784,   305,   485,   486,  2575,   292,
    1138,  1139,   388,   306,   314,   315,  2766,   190,   252,     4,
       4,  2801,   199,   190,   289,   347,     4,  1628,     4,   116,
     347,   222,  2782,   222,   299,   317,     5,  2787,     5,     4,
     222,  3139,     4,  3141,   197,   322,  1629,  1630,  1631,    27,
     212,  1287,   212,    71,   141,   142,   321,    71,    71,   257,
       5,    39,   345,   150,   329,  1301,   258,     5,  1651,     4,
       4,     4,     4,  1656,    52,  2642,     4,  2644,    22,  2646,
     222,   121,  2649,   348,  2651,   172,     5,    94,    66,    67,
       3,     4,     5,     6,     7,   182,    94,   250,    94,  1682,
    1683,     3,     4,     5,     6,     7,     5,   390,    94,    53,
    1693,     5,    56,     4,  1697,    59,     3,     4,     5,     6,
       7,  1704,     4,   317,     5,     5,  2191,     4,   107,     5,
     274,     4,     4,   277,   287,     5,  1719,    16,    16,     4,
       4,     4,  1725,     4,   105,    89,  1729,     5,  1731,  1732,
       5,  1734,  1735,  1736,    94,  1738,     4,    94,  1741,  1742,
    1743,  1744,  1745,  1746,  1747,  1748,  1749,  1750,  1751,    94,
       5,     5,  1755,  1756,  1757,  1758,   120,    94,     5,   123,
       4,     4,  1765,  1766,  2249,     5,  1769,  1770,  1771,     5,
       5,     5,  1775,  1776,  1430,  1431,     4,     4,    69,     5,
       5,     5,     4,     4,     4,  1788,  1789,     5,  1791,  1792,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,    11,    57,
    2807,    11,    71,     4,  2309,     4,     4,    40,     5,     4,
       4,   229,     4,   184,     5,     5,     5,     4,    87,   175,
      78,   175,   240,   241,   242,   243,    37,    96,     4,   317,
       5,     4,    40,  1874,   294,   294,     5,    95,   107,   326,
    1863,     4,  1865,  1866,   319,     4,  1869,     4,   271,     5,
     108,  1874,  1875,     5,  1877,  1878,  1879,     5,  1881,  1882,
       5,  1884,     4,  1886,  1887,     4,  1889,  1890,     5,  1892,
       5,  1894,   130,   308,   143,   259,   134,   308,     5,  1902,
       5,     5,  3072,     4,     4,   271,     5,  1910,     5,     5,
       5,   149,  1915,  1916,     5,     5,   165,     4,  1921,     4,
     115,     5,     5,     4,  1945,     5,     5,  1930,   271,   271,
     294,     5,   115,   124,    42,   333,  1957,     4,     4,   271,
    1961,   271,   115,  2007,     5,   239,   277,     5,    42,    19,
     239,     5,     5,   239,     4,     4,  2020,   239,   196,     4,
     324,    59,     5,     5,  1967,     5,  2030,     5,  1624,     5,
       4,   121,   221,    43,   121,     4,    46,     5,     5,     5,
       4,    11,     5,     5,     4,     0,     5,     5,     4,  1992,
    1993,     5,     5,     4,  1997,     5,     5,  1653,     4,    11,
    2003,     4,  1658,  1659,   195,     5,   197,   198,     5,   200,
     201,     5,     4,     4,    84,     4,     4,   266,     5,     4,
     271,    91,     5,   271,   189,   271,   271,   257,     4,   271,
     271,  1687,   102,   103,   235,   222,     4,     4,  2102,   109,
    2525,  2526,   233,  1699,  2529,  2530,   295,     4,  2533,  2534,
     282,     4,  1708,  1709,     4,   308,     5,     5,     5,     5,
       5,   252,   253,     5,  1720,     4,     4,   258,   138,     5,
       4,   262,     4,     4,   271,     5,     5,     5,     5,   271,
     351,   351,   271,     3,     4,     4,   156,     4,     4,     4,
       4,   340,     4,   342,     4,   351,     4,     4,   257,    19,
       5,   351,     5,     5,   174,   175,  2591,  2110,  2111,   257,
    2113,   181,     4,   257,     5,   257,   257,     4,     4,   101,
       5,     4,   308,     5,     5,     4,   308,     5,   319,     5,
       4,   322,    65,     5,     5,     4,   206,     5,     5,     4,
     308,     5,   333,  2146,  2147,  2148,  2149,  2150,  2151,  2152,
    2153,  2154,     5,     4,    11,     5,  2949,     5,     4,   484,
       5,     5,     4,   347,     5,   356,     5,  2170,     4,  2172,
       4,     4,   324,     5,     5,     4,     4,  3097,     5,     5,
       4,   347,     5,   253,     5,     4,     4,  2190,  2191,   109,
       5,     5,     5,  2196,     4,   128,     4,     4,     4,   132,
       5,     5,     5,     5,  2207,  2208,  2209,  2210,  2211,  2212,
    2213,  2214,  2215,  2216,     5,     5,  2219,  2220,  2221,  2222,
    2223,  2224,  2225,     5,  2227,  2228,  2229,  2230,  2231,     5,
    2233,     5,  2235,  2236,  2237,     4,     4,   170,   171,   309,
       5,     4,   175,     5,     5,  3038,  2249,  2250,     5,     4,
       4,     4,   322,     5,     5,   175,     5,     5,     4,   397,
       5,     5,     5,     5,     4,  2750,     4,   397,     5,  1146,
    2755,     5,     5,     5,     4,     4,   397,     5,     5,     5,
       5,     4,     4,   216,   354,   476,     5,     4,     4,     4,
       4,   397,     5,     5,     5,     5,   487,     5,  2301,     4,
    2303,     4,  2305,     5,  2307,   496,  2309,  2310,     4,  2312,
    2795,     4,   432,     5,  2317,  2318,     5,  2320,  2321,     4,
    2323,     4,  2325,  2344,     5,     5,     4,     4,     4,  2332,
       5,  2334,     5,   253,  2398,  2338,     5,     4,  2341,     4,
     397,     5,   275,     5,     5,     5,     5,   280,     5,     4,
     397,     5,     4,     4,     4,     4,     4,  2964,     5,     5,
       5,     4,     4,   324,     5,  2386,     5,     5,     5,     4,
       4,  2777,     5,     5,   307,   566,   567,     5,   311,     5,
       4,     4,  2947,     5,     4,  2388,     4,     4,   579,     4,
     323,     4,     4,   584,  2458,  2459,  2460,  2461,  2462,     4,
    2464,  2465,   593,     4,     4,  2469,  2470,  2471,  2472,  2473,
       4,  2475,  2476,     4,  3038,     5,     4,   397,     5,     5,
       4,     4,     4,     4,   397,     5,   335,     4,   397,     5,
       4,  2486,     5,     5,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,   379,
     380,   381,     5,     4,     4,     4,     4,     4,  2124,     4,
       4,     4,     4,     4,  3034,     5,     4,   870,     5,     5,
       4,     4,     4,     4,     4,     4,     4,    -1,     5,  2492,
       4,   400,   683,   684,   685,   686,     5,     4,     4,    -1,
       5,  2504,  2505,  2506,  2507,  2508,  2509,  2510,  2511,  2512,
    2513,  2514,  3050,  3051,     4,    -1,     5,  2520,     5,  2175,
       5,     4,  2525,  2526,     4,     4,  2529,  2530,     4,     4,
    2533,  2534,  2535,  2536,  2537,  2538,  2539,  2540,     5,  2542,
    2543,  2544,     5,     4,     4,  2548,  2549,  2550,  2551,     4,
    2553,     4,  2555,  2556,  2557,  2558,  2559,     4,  2561,     4,
       4,  2564,  2565,     5,     4,    -1,     5,     5,     4,     4,
      -1,     5,     5,     5,     5,     4,    -1,     5,     5,     5,
       4,     4,    -1,     5,     5,  2588,     5,    -1,  2591,  2592,
      -1,    -1,    -1,  2596,    -1,    -1,  2660,    -1,  2601,  2602,
      -1,  2604,   793,    -1,    -1,  2669,  2670,  2671,  2672,  2673,
      -1,  2675,  2676,    -1,  2678,  2679,  2680,  2681,  2682,    -1,
    2684,  2685,    -1,  2687,  2688,  2689,  2690,  2691,    -1,  2693,
    2694,    -1,  2696,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2706,  2707,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   561,  2717,  2657,    -1,    -1,    -1,    -1,   568,
      -1,    -1,   571,    -1,    -1,    -1,    -1,   576,    -1,    -1,
      -1,   580,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1567,    -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   107,  1579,    -1,    -1,    -1,    -1,    -1,    -1,   115,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1601,  1602,  2729,   133,    -1,    -1,
    2733,    -1,    -1,    -1,   140,    -1,    -1,    -1,    -1,    -1,
    2743,  2744,    -1,    -1,    -1,    -1,  2749,  2750,    -1,    -1,
      -1,  2754,  2755,    -1,    -1,    -1,   665,  2760,    -1,   165,
    2763,  2764,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     176,    -1,    -1,    71,    72,    73,    -1,    -1,    -1,    -1,
      -1,    -1,  2785,  2786,    -1,  2788,   977,  2790,  2791,  2792,
    2793,    -1,  2795,  2796,  2858,    -1,    -1,  2800,   989,    -1,
      98,    -1,    -1,  2867,    -1,    -1,    -1,    -1,    -1,    -1,
    2813,    -1,  2876,   111,  2878,   221,    -1,    -1,  2882,    -1,
    2823,    -1,    -1,   229,    -1,    -1,  2337,    -1,    -1,   127,
      -1,    -1,    -1,    -1,    -1,    -1,  1027,    -1,    -1,    -1,
      -1,  2844,    -1,  2354,  2355,  2356,    -1,    -1,  2359,    -1,
    2361,  2362,    -1,    -1,  2365,  2366,  2367,    -1,    -1,  2370,
    2371,   159,    -1,    -1,  2375,    -1,  2377,  2378,    -1,  2380,
      -1,   169,    -1,  2768,    -1,    -1,   282,    -1,    -1,    -1,
      -1,    -1,    -1,  2886,    -1,    -1,    -1,    -1,  2891,   295,
    2893,    -1,    -1,   191,  2789,    -1,  2899,    -1,    -1,    -1,
      -1,    -1,   200,  2798,    -1,    -1,    -1,   313,    -1,    -1,
      -1,  2914,    -1,  2569,    -1,    -1,    -1,  2981,   827,  2983,
      -1,  2985,   220,    -1,  2988,   834,  2990,  1118,    -1,    -1,
    2933,    -1,    -1,    -1,    -1,  2938,  2991,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   246,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2964,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2488,    -1,    -1,
    2491,    -1,    -1,     4,    -1,  2496,    -1,    -1,    -1,  2500,
     288,    -1,  2995,    -1,    -1,   293,    -1,  3000,    19,    -1,
    3003,    -1,    -1,    -1,    -1,    -1,    -1,  3010,  2519,    -1,
      -1,    -1,   310,  1204,    -1,   313,  2911,  2912,  3021,    -1,
    2915,    42,  2917,  3026,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2930,  2931,    -1,    -1,    60,
    2935,    -1,  2937,    -1,    -1,  2940,  3067,  3050,  3051,    -1,
    2945,  2946,    -1,    -1,    -1,     4,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   976,    -1,  1260,
      19,    -1,    -1,  3076,   983,    -1,    -1,  3080,  3099,  1270,
    3083,  3102,    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,
    3093,  3094,  3095,  3096,    -1,    -1,    -1,    -1,    -1,  2610,
      -1,    -1,  3105,    -1,    -1,    -1,  3109,    -1,    -1,  3004,
     131,    60,  3007,  3116,    -1,  3118,    -1,  3012,    -1,    -1,
    1029,  1030,    -1,    -1,    -1,  1034,    -1,    -1,  1037,  3024,
      -1,    -1,  2643,    -1,  3029,    -1,    -1,    -1,    -1,    -1,
    1049,    -1,    -1,    -1,    -1,    -1,  2802,    -1,    -1,  2026,
    2806,    -1,    -1,    -1,   175,    -1,    -1,  2034,  2035,    -1,
     109,    -1,    -1,    -1,    -1,    -1,    -1,  2044,  2045,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2054,  2055,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2069,  2070,    -1,    -1,    -1,   218,    -1,    -1,
    1391,    -1,    -1,  2080,  2081,    -1,    -1,   228,    -1,  3104,
    2087,    -1,    -1,  3108,  2725,    -1,   237,   238,  1409,    -1,
    2097,    -1,    -1,    -1,    -1,    -1,   175,   248,    -1,    -1,
      -1,    -1,   253,  3128,  2745,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2753,    -1,    -1,  2756,  2757,  3142,  1439,    -1,
    3145,  3146,    -1,    -1,    -1,    -1,    -1,    -1,  1449,   175,
      -1,    -1,    -1,    -1,   180,    -1,    -1,    -1,    -1,  1178,
      -1,    -1,  2928,    -1,    -1,  1466,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1478,    -1,    -1,
      -1,    -1,  1483,    -1,    -1,    -1,    -1,  2953,    -1,   248,
      -1,    -1,    -1,    -1,   253,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   337,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,    -1,    -1,    -1,    -1,    -1,   387,    -1,    -1,    -1,
      -1,    -1,    -1,   394,   395,    -1,  2887,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2908,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,  3089,    -1,    -1,    -1,  1628,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,  1657,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2993,  2994,    -1,  2996,  1395,  2998,  2999,    -1,
      -1,  3002,    -1,    -1,    -1,    -1,    -1,    -1,  1689,    -1,
      -1,  1692,    -1,    -1,    -1,  1696,    -1,    -1,    -1,    -1,
      -1,  1702,  1703,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1711,    -1,  2399,    -1,  1433,    -1,    -1,  1718,    -1,  1438,
      -1,    -1,  2409,  2410,    -1,    -1,    -1,    -1,    -1,  1448,
      -1,    -1,    -1,  2420,    -1,    -1,    -1,    -1,     4,     5,
      -1,  3062,  2429,    -1,    -1,    -1,  2433,  2434,    -1,    -1,
      -1,    -1,    -1,    -1,    20,  2442,  2443,    -1,    -1,  1760,
      -1,    -1,    -1,    -1,  2451,  2452,    -1,    -1,    -1,    -1,
    2457,  1772,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2467,  2468,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  3110,
      -1,  2478,    -1,  2480,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    -1,    82,    -1,    -1,    -1,
      -1,    87,    -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,
      96,    -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,
      -1,   107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1874,    -1,    -1,    -1,   143,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1898,    -1,   165,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1914,    -1,    -1,    -1,   183,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,  1927,    -1,  1929,    -1,
     196,   197,    -1,    -1,    -1,    -1,    -1,    -1,  1939,    -1,
      19,  1942,  1943,  1944,  1945,  1946,    -1,  1948,    -1,    -1,
      -1,  1952,    -1,    -1,    -1,   221,  1957,  1958,  1959,  1960,
    1961,  1962,    41,    -1,  1965,  1966,    -1,    -1,    -1,  1970,
    1971,  1972,  1973,    -1,  2661,  1976,  1977,  2664,    -1,  1698,
    2667,    60,  1983,  1984,   250,    -1,    -1,    -1,    -1,    -1,
    2677,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   264,  2686,
     266,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2695,    -1,
      -1,    -1,    -1,    -1,    -1,  2702,   282,    -1,    -1,    -1,
      -1,   287,    -1,    -1,    -1,    -1,  2713,    -1,    -1,   295,
     109,    -1,  2719,    -1,    -1,    -1,    -1,   303,    -1,    -1,
      -1,    -1,  1761,    -1,    -1,    -1,    -1,    -1,  1767,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   324,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   339,   340,     4,   342,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,   175,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2109,    -1,
      -1,  2112,    -1,    -1,    -1,    -1,    -1,   383,    -1,    -1,
      -1,    -1,  2123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2139,   218,
      -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1871,    71,    -1,    -1,    -1,  1876,    -1,    -1,
      -1,  2848,    -1,    -1,    -1,    -1,    -1,    -1,  2855,   248,
    2171,    -1,    -1,    -1,   253,    -1,    -1,  2864,    -1,    -1,
     109,    99,   100,    -1,    -1,   264,  2873,    -1,  1907,   107,
      -1,    -1,  2879,    -1,  1913,    -1,  2883,   115,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   133,    -1,    -1,    -1,    -1,
      -1,  1940,   140,    -1,    -1,   143,    -1,    -1,  1947,    -1,
    2231,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   175,   165,    -1,    -1,
      -1,    -1,    -1,  2254,    -1,   334,    -1,    -1,   176,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,   221,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   229,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   253,    -1,    -1,    -1,  2329,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2344,    -1,    -1,    -1,    -1,    -1,    -1,
    2351,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   282,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2373,    -1,    -1,    -1,    -1,   295,    -1,    -1,
      -1,  2382,    -1,    -1,    -1,  2386,    -1,    -1,  2107,    -1,
      -1,    -1,    -1,    -1,    -1,   313,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   324,    -1,   326,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2140,    -1,    -1,    -1,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,    -1,    -1,    19,    -1,    -1,  2177,  2178,
      -1,    -1,    -1,    -1,    -1,   383,    -1,    -1,    -1,    -1,
    2189,    -1,    -1,    -1,    -1,  2194,  2195,    -1,    -1,    -1,
      -1,  2200,  2201,    -1,    -1,    -1,    -1,    -1,    -1,  2490,
      -1,    -1,  2493,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2502,    -1,    -1,    -1,    -1,    70,    71,    -1,    -1,
      -1,    -1,    76,    -1,    -1,    -1,    -1,  2518,    -1,    -1,
    2521,    -1,    17,  2242,    19,    -1,    -1,  2528,    -1,    -1,
    2531,  2532,    -1,    -1,  2253,    99,   100,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   109,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,  2570,
    2571,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2306,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2327,    -1,
      -1,   175,    -1,    -1,   109,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2623,    -1,    -1,    -1,   190,    -1,    -1,    -1,
     125,    -1,    -1,  2352,    -1,    -1,    -1,    -1,  2357,    -1,
      -1,    -1,    -1,    -1,  2363,    -1,   210,    -1,    -1,  2368,
      -1,    -1,    -1,  2372,    -1,  2374,    -1,  2376,    -1,    -1,
    2379,    -1,  2381,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   235,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   253,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     195,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2724,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   309,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2758,   253,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2769,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,    -1,   383,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2828,    -1,    -1,
      -1,  2832,    -1,   328,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2560,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2576,    -1,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,    -1,  2889,  2890,
      -1,  2892,    -1,    20,    21,    22,  2897,  2898,    -1,  2618,
      -1,    -1,    -1,  2904,    -1,    -1,  2625,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    53,    -1,    -1,    56,
      -1,    -1,    59,  2652,    -1,  2654,    -1,    -1,  2939,    -1,
      67,    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    -1,
      -1,    -1,    89,    90,    -1,    -1,    -1,    -1,    -1,    -1,
    2971,    -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,
     107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,    20,
      21,    22,   119,   120,    -1,    -1,   123,    -1,    -1,    -1,
      -1,    -1,    -1,  2722,    -1,    -1,    -1,    -1,    -1,  2728,
      -1,    -1,    -1,  2732,    -1,    -1,   143,    -1,    -1,    -1,
      -1,    52,    53,    -1,    -1,    56,    -1,    -1,    -1,  2748,
      -1,    -1,    63,    -1,    -1,    -1,    67,    -1,   165,    -1,
      71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    82,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  3067,   194,    -1,   100,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  3085,  2804,  2805,    -1,   119,   120,
      -1,    -1,   123,    -1,   221,    -1,    -1,    -1,  3099,    -1,
      -1,  3102,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   143,    -1,    -1,    60,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     257,    -1,   259,    -1,   165,    -1,    -1,    -1,   265,   266,
      -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   282,   283,    19,    -1,    -1,
      -1,    -1,    -1,   194,   109,    -1,    -1,   294,   295,    -1,
      -1,    -1,    -1,   204,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   109,    -1,    -1,    -1,    -1,   324,    -1,   326,
    2919,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   340,    -1,   342,    -1,    -1,    -1,    -1,
      -1,    -1,   349,    -1,    -1,    -1,   257,    -1,   259,    -1,
     175,    19,    -1,    -1,   265,   266,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,    -1,
      -1,    -1,   283,    -1,    -1,    -1,   383,    -1,   175,    -1,
      -1,    -1,    -1,    -1,   295,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   324,    -1,   326,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   248,    -1,    -1,    -1,   338,   253,    -1,
      -1,  3030,    -1,   175,    19,    -1,    -1,    -1,   349,    -1,
      -1,   109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   248,    -1,    -1,    -1,  3054,   253,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   383,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   318,    -1,    -1,    -1,    19,    -1,    -1,
      -1,  3100,    -1,    -1,    -1,    -1,    -1,   175,    -1,    -1,
      -1,   253,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,
      -1,    -1,  3121,    -1,   109,  3124,    -1,    -1,    -1,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   253,   328,   109,    -1,    -1,
     175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   380,   381,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   175,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   253,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   381,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   253,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   380,   381,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   380,   381,
      43,    -1,    -1,    46,    -1,    -1,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    -1,    -1,    69,    70,    -1,    -1,
      -1,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    -1,    -1,    -1,    -1,    -1,    -1,    91,    -1,
      93,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     103,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   129,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   139,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   152,
      -1,    -1,    -1,   156,    -1,    -1,    -1,   160,    -1,    -1,
      -1,   164,   165,    -1,    -1,    -1,    -1,   170,   171,    -1,
      -1,   174,    -1,    -1,    -1,    -1,    -1,   180,    -1,    -1,
      -1,    -1,    -1,   186,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   197,    -1,    -1,    -1,   201,   202,
     203,    -1,    -1,   206,   207,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   219,    -1,    -1,    -1,
     223,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   245,    -1,   247,   248,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   260,    -1,   262,
      -1,    -1,    -1,    -1,    -1,    -1,   269,    -1,    -1,    -1,
     273,    -1,    -1,    -1,   277,    -1,   279,   280,    -1,   282,
      -1,    -1,    -1,    -1,   287,    43,    -1,    -1,    46,    -1,
      -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     303,    -1,    -1,    -1,    -1,    -1,   309,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    -1,    -1,    74,    75,    76,    -1,
      -1,    -1,    -1,    -1,   327,   328,    84,    -1,    86,    -1,
      -1,    -1,    -1,    91,    -1,    93,    94,    95,   341,    -1,
     343,    -1,    -1,   101,    -1,   103,    -1,   350,    -1,    -1,
     353,   354,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     138,   384,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   392,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   156,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   165,    -1,   167,
     168,    -1,   170,   171,    -1,    -1,   174,    -1,    -1,    -1,
     178,    -1,   180,   180,    -1,    -1,    -1,    -1,   186,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   206,   207,
      -1,    -1,    -1,   211,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   219,    -1,    -1,    -1,   223,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   245,    -1,   247,
      -1,    -1,    -1,    -1,    -1,    -1,   254,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   280,    -1,   282,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   309,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   327,
     328,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     338,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   346,    -1,
      -1,    -1,    -1,    -1,   352,    -1,   354,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   382,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   392
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    43,    46,    49,    63,    69,    70,    74,    75,    76,
      84,    91,    93,    94,   103,   104,   129,   139,   152,   156,
     160,   164,   165,   170,   171,   174,   180,   186,   197,   201,
     202,   203,   206,   207,   219,   223,   245,   247,   248,   260,
     262,   269,   273,   277,   279,   280,   282,   287,   303,   309,
     327,   328,   341,   343,   350,   353,   354,   384,   392,   399,
      71,    11,    57,    78,   108,   130,   134,   149,   334,   436,
       3,     4,   223,   334,   400,   441,   211,   217,   264,   292,
     345,   390,   443,   324,     4,    42,   121,   170,   171,   218,
     219,   280,   448,    29,   166,   195,   199,   261,   305,   314,
     315,   415,   450,    90,   100,   107,   197,   250,   287,   451,
      42,    63,   121,   218,   328,   400,   460,     4,    19,    42,
      60,   109,   131,   175,   218,   228,   237,   238,   248,   253,
     337,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   380,   381,
     387,   394,   395,   402,   410,   411,   412,   462,    34,   463,
     402,    46,    49,    83,    91,   157,   216,   249,   251,   280,
     354,   401,   402,    69,   400,   465,   160,   466,    43,    46,
      49,    70,    74,    75,    76,    84,    86,    91,    93,    94,
      95,   101,   103,   138,   156,   165,   167,   168,   170,   171,
     174,   178,   180,   186,   206,   207,   211,   219,   223,   245,
     247,   254,   280,   282,   309,   327,   328,   338,   346,   352,
     354,   392,   467,    90,   107,   518,    19,    43,    46,    84,
      91,   102,   103,   109,   138,   156,   174,   175,   181,   206,
     253,   309,   322,   354,   521,    71,   402,    65,   322,   348,
     606,    65,   322,   348,   605,    95,   126,   209,   226,   296,
     343,   354,   527,    15,     4,    48,    51,    71,    90,   107,
     113,   164,   187,   303,   331,   332,   344,   348,   587,    26,
     122,   138,   177,   234,   252,   530,   263,   548,     5,    71,
      95,   154,   343,   392,   402,   549,     5,   550,    61,   145,
     258,   273,   345,   567,    48,    69,    71,   205,   272,   322,
     332,   588,   322,   604,    71,   229,   386,   394,   396,   589,
      41,   218,   264,   334,   400,   410,   412,   590,     5,   343,
     354,   402,   593,    77,   190,   278,   289,   594,     4,   595,
      95,   567,     4,    69,   602,    65,   322,   348,   603,   218,
     334,   400,   607,    26,   122,   138,   234,   252,   391,   609,
      54,   107,   118,   151,   336,   631,   632,     4,    38,    50,
      81,   165,   210,   289,   299,   321,   329,   348,   429,     4,
     138,   233,   633,   334,   400,   635,    15,    23,   274,   277,
     411,   636,   263,   640,   334,   400,   641,     0,     5,   402,
      63,   400,   437,   306,     5,     4,   334,   400,   438,     5,
      33,   320,   439,   137,   400,   440,   388,   137,   400,   442,
     400,     4,   217,   276,   284,   446,   211,   345,   389,   390,
     400,   445,   402,   153,   198,   444,   223,   400,    85,   194,
     284,   400,   447,     5,   400,   400,   400,     4,   170,   171,
     219,   280,   449,     4,   400,   400,     5,   259,   452,     4,
      32,   453,     5,   454,     5,   458,     5,    32,   459,   400,
       8,     9,    10,   400,   406,   407,   408,   409,   400,   400,
      42,   121,   218,   400,   461,   400,   218,   410,   412,   400,
      36,   116,   141,   142,   150,   172,   182,   417,   400,     4,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     128,    71,    57,    78,    95,   108,   130,   134,   149,   196,
     470,   130,   223,   472,   211,   217,   264,   292,   345,   389,
     390,   400,   455,   473,   324,   476,   190,   477,   190,   199,
     479,    70,    71,    76,    99,   100,   190,   210,   235,   309,
     383,   410,   481,   400,   412,   484,    63,   328,   410,   485,
     318,   410,   412,   486,    34,   487,   410,   412,   488,     4,
     410,   412,   489,    47,    63,    88,   108,   128,   132,   162,
     163,   225,   236,   306,   307,   383,   493,   244,   347,   499,
      71,     5,    96,    65,   322,   348,   507,    65,   322,   348,
     506,     4,    95,   132,   491,     5,    70,   412,   490,    15,
      48,    71,    88,   187,   332,   348,   500,   567,    48,    71,
      88,   205,   272,   322,   332,   501,   322,   505,    71,   264,
     503,   323,    65,   322,   348,   504,    21,   149,   271,   304,
     508,    38,    50,    81,   165,   210,   289,   299,   348,   509,
     412,    96,    15,   222,   516,   410,   519,    71,    79,   522,
      32,   523,    46,    94,   216,   524,   165,   250,   295,   339,
     525,   410,    17,    62,   125,   195,   328,   410,   526,     5,
       5,   169,   288,   346,   410,     4,     5,   169,   288,   410,
       4,     4,   217,   529,     5,     4,     4,   132,   400,     4,
      48,    51,    71,   107,   113,   164,   303,   331,   332,   344,
     348,    71,    72,    73,    98,   111,   127,   159,   169,   191,
     200,   220,   246,   288,   293,   310,   313,   414,     5,     4,
     400,   402,     5,   170,   171,   280,   531,     5,   533,     5,
     128,   170,   171,   216,   280,   307,   534,   101,   121,   211,
     547,     5,   545,     5,   307,   546,     4,     5,   402,   402,
     400,   400,     5,     4,     5,    20,    64,    71,    80,    82,
      87,    90,    96,   100,   107,   115,   124,   143,   165,   183,
     196,   197,   221,   250,   264,   266,   282,   287,   295,   303,
     324,   339,   340,   342,   383,   551,   414,     5,     4,   223,
     231,   232,   272,   388,   413,   400,   410,   400,   410,     5,
     400,    42,   121,   400,   592,   402,   400,   410,   412,   591,
     400,   417,   400,     4,   411,    58,    97,   155,   280,   596,
       4,     4,   400,     4,   165,   295,   597,     5,   410,     4,
      42,   121,   400,   608,   400,   105,    65,   132,   170,   171,
     280,   311,   611,   132,   630,    65,   128,   132,   170,   171,
     175,   216,   275,   280,   307,   311,   323,   612,   613,    65,
     132,   311,   629,     5,    65,   132,   311,   610,     4,    35,
     117,   229,   601,    71,   402,   432,    71,   402,   433,    71,
     402,   434,    12,   136,   213,   600,   400,    18,   230,   319,
     402,   430,     4,   400,   257,   400,   435,   400,   307,     4,
     400,   400,     4,   258,   334,   639,     4,   326,   637,     4,
     326,   638,     4,   417,   137,   400,   642,   400,   400,     4,
       5,   400,    11,   400,   400,   402,   400,    31,   102,   181,
     284,   290,   416,   416,     4,   223,   400,   400,     4,     4,
       4,   400,   400,   400,   400,   400,   400,     4,   400,     4,
     400,     4,     4,     4,     5,     5,   410,     5,   400,   400,
     406,   408,   408,   410,   400,   400,   400,   400,   400,   400,
     400,   410,   412,   409,   400,   400,   409,   400,     5,   306,
     112,   211,   471,   388,   217,   284,   474,   190,    85,   194,
     284,   475,   153,   198,   456,   456,     4,   478,     4,   480,
     217,   292,   482,   199,   483,   190,   417,   400,   400,   410,
     410,   417,   417,   417,   410,   417,   400,   410,     4,   496,
       4,   412,   494,   222,     4,   184,   354,   495,   222,   410,
       4,   146,   334,   498,     5,     5,   468,     4,   222,   148,
     281,   403,   400,     4,   502,   502,   502,   502,     4,     5,
      20,    64,    71,   100,   124,   143,   158,   165,   173,   235,
     259,   264,   266,   294,   295,   303,   324,   383,   561,   412,
     212,   212,    71,   512,    71,   513,    71,   514,    18,   230,
     319,   510,   257,   515,   400,     5,   469,   258,   517,   411,
     417,     5,   410,   410,   410,   410,     4,     4,     4,   402,
       4,     4,   222,   400,   414,     5,   400,   402,    13,    14,
      65,   214,   215,   300,   311,   312,   347,    94,    94,    94,
       5,     5,    13,    14,    65,   214,   215,   300,   311,   312,
     316,   347,    94,    94,   175,    94,   175,   175,   180,   411,
     537,   542,    94,   175,     5,   535,     4,     4,    13,    65,
     214,   300,   311,   347,     5,     5,     4,   400,   411,    20,
      21,    22,    52,    53,    56,    59,    67,    71,    81,    82,
      89,    90,   100,   107,   115,   119,   120,   123,   143,   165,
     194,   221,   257,   259,   265,   266,   282,   283,   294,   295,
     324,   326,   340,   342,   349,   383,    71,    87,    96,   107,
     143,   165,   221,   266,   295,   340,   342,   317,     4,    31,
     179,   244,   271,   554,     5,    68,   114,   268,   285,   286,
     385,   386,   560,   107,   552,     4,    16,   295,   558,    42,
     121,   218,   559,     4,     5,    16,   239,   335,   400,   295,
     560,   568,   138,   560,   569,    37,    42,   121,   147,   218,
     334,   400,   570,   410,   402,    99,   107,   115,   133,   140,
     165,   176,   221,   229,   282,   295,   313,   573,    42,   121,
     218,     5,   295,   325,   577,    16,   135,   188,   239,   335,
     578,   326,   402,   579,     5,   107,   115,   343,    16,    16,
       4,   400,   400,   400,   400,   400,   400,   417,   400,   400,
     409,   400,     4,   417,     4,    42,   121,   218,   301,   598,
      42,   121,   218,   301,   599,     4,   105,     5,     5,    94,
      94,    94,     4,     5,     5,    94,     5,    94,   175,    94,
     175,   613,    65,   132,   175,   311,   617,    65,   132,   311,
     628,    94,   175,    65,   132,   311,   615,     4,    65,   132,
     311,   614,     5,     5,     4,     5,     5,     4,     4,     5,
       5,     5,   400,   319,   402,   431,   400,   400,   400,   400,
       4,   400,   634,   400,   400,   411,    69,     4,     4,     5,
       4,     4,     5,     4,   105,   297,   418,   400,   400,    11,
       5,    11,   400,   400,    11,     4,    11,     4,     4,   400,
     400,   400,   400,   400,     4,   400,     5,   400,     4,   402,
       4,     4,   417,   410,   417,   400,   400,   400,   410,   400,
     409,   400,   400,     5,     5,   400,   412,   400,   410,   400,
     417,   417,   418,   418,   418,   417,   409,   400,   417,   400,
     403,   497,   184,     5,     4,   417,   175,   175,     4,     5,
       4,     4,   400,   492,    40,    40,   400,    20,    21,    22,
      52,    53,    56,    63,    67,    71,    81,    82,    89,   100,
     119,   120,   123,   143,   165,   194,   204,   257,   259,   265,
     266,   283,   295,   324,   326,   338,   349,   383,    71,   143,
     173,   266,   324,   317,    31,   179,   244,   271,   562,   400,
     235,   400,   563,    16,   400,   294,   573,   294,   235,   400,
     564,   326,   565,    16,   106,   400,   319,   511,   400,     5,
     418,     4,     4,    60,   410,     4,     5,   528,   400,     5,
       5,     5,   175,   207,   422,   422,   183,   302,   420,     4,
       4,     5,     5,   532,   532,   532,   308,   308,     5,     5,
       5,    16,   177,   421,   421,   420,     4,     4,   420,     5,
       5,   536,     5,   543,     5,   544,   543,   544,   180,   382,
     411,   540,     5,   539,     5,   543,   544,     5,    13,    14,
      65,   214,   215,   300,   311,   312,   316,   347,     4,     4,
       5,     5,   422,   420,     4,     5,     5,   417,    89,   167,
     255,   256,   270,   317,   426,     6,     7,   400,   405,   271,
     271,   271,   115,    42,    71,   107,   115,   121,   143,   165,
     183,   221,   266,   282,   295,   326,   340,   342,   343,   383,
     553,   271,     5,    27,   121,   185,   271,   322,    28,   153,
     338,   115,    22,    53,    56,    89,   120,   123,   259,   294,
       4,    22,    53,    56,    59,    89,   120,   123,   259,   294,
     324,    42,   271,   271,   115,     5,   239,    27,   121,   257,
      37,   147,   334,   400,   298,   306,   257,   277,   410,   573,
      42,   144,   257,   322,   277,   239,     5,     5,   282,    27,
     121,   257,     4,     5,     5,   239,    37,   147,   334,   400,
     573,   239,    59,   402,     4,     4,   400,     5,   347,    22,
      27,    52,    53,    55,    56,    67,    81,    82,    89,    92,
     110,   119,   120,   123,   194,   259,   265,   283,   294,   325,
     326,   349,   396,   555,     4,   400,   400,   400,   400,   400,
     560,   410,     5,     4,     5,   400,   400,   410,   400,   402,
     400,   400,   560,     5,     5,   400,   400,   402,     5,    16,
       5,     5,   400,   400,   409,   400,   400,     4,   400,   400,
     121,   400,   400,   121,     4,    44,    45,   192,   193,   224,
     428,   428,    65,   132,   311,   625,    65,   132,   311,   622,
      65,   132,   311,   619,   428,     5,    65,   132,   311,   616,
      65,   132,   311,   627,    65,   132,   311,   626,    65,   132,
     311,   624,    65,   132,   311,   623,     5,     5,    65,   132,
     311,   618,     4,     5,     5,     4,    65,   132,   311,   621,
      65,   132,   311,   620,     5,     5,     4,     5,     5,     4,
     428,   428,   428,   400,   400,   400,   400,     4,   410,   400,
     417,   411,     5,     5,    11,   400,   410,   412,   400,    11,
     400,   400,   400,    63,   400,     4,   400,   400,     4,   400,
     400,     5,   400,     5,   400,    49,   309,   457,     5,   402,
     402,   417,   400,     4,     4,     4,   417,   410,   400,   400,
     400,   400,   417,   410,   418,   409,   400,     4,   418,   400,
       4,   412,     5,    24,    25,   105,   419,     4,   410,   400,
     400,     4,   400,     5,    89,   167,   255,   256,   270,   317,
     410,   412,   271,   271,   271,    21,   271,   410,   271,    27,
     121,   185,   271,   322,    28,   153,   338,    21,   271,   271,
     271,    21,   271,    27,   121,   189,   257,   189,   298,   306,
     257,   189,   257,   330,   573,   144,   189,   257,   322,     4,
     282,    27,   121,   189,   257,   573,   235,    16,   393,   400,
     400,   400,   400,   400,   400,   222,   400,   400,    20,   267,
     520,     4,     4,   400,   422,   422,   422,     4,   422,   422,
     422,    13,    14,    65,   214,   215,   300,   311,   312,   347,
     421,   422,   422,   422,   422,   422,     4,   422,   422,     4,
     421,    13,    14,    65,   214,   215,   300,   311,   312,   347,
       5,    13,    14,    65,   214,   215,   300,   311,   312,   316,
     347,    13,    14,    65,   214,   215,   300,   311,   312,   347,
       5,   538,     5,   541,     5,     5,    13,    14,    65,   214,
     215,   300,   311,   312,   316,   347,     5,    13,    14,    65,
     214,   215,   300,   311,   312,   316,   347,   308,     5,     5,
       5,   421,   421,   420,     4,     4,   420,     5,     4,     4,
     422,   422,     4,   422,   422,     5,   402,   410,   412,     5,
     400,   400,     5,   400,     5,   405,   115,   221,   282,   115,
     221,   282,     5,   400,   402,     4,    27,    39,    52,    66,
      67,   229,   240,   241,   242,   243,   333,   423,     5,   400,
     410,   402,   402,     5,     5,   405,   271,   271,    21,   271,
      21,   271,   271,    21,   271,   351,   351,     4,     4,     4,
       4,   553,     4,     4,     4,   351,   351,     4,     5,     4,
     400,     5,   400,     5,   405,   402,   423,   410,   410,   400,
      27,    52,    55,    67,    92,   110,   396,   424,     4,   410,
     400,   417,   402,     5,   410,   410,   400,   402,   402,   423,
     410,   410,   400,   402,     5,   400,     5,   400,   257,   257,
     400,   400,   257,   400,   257,   400,   400,     4,   556,   400,
     257,   257,   400,   400,   400,   400,    60,   400,   400,   400,
     400,     5,   347,   400,   557,   400,   400,   257,   400,   400,
     400,   400,   410,   417,     5,     4,     4,   400,   400,   417,
     400,   400,   400,   410,   560,   400,   400,     5,     4,   400,
     400,   400,   400,     5,     5,     4,     5,     5,     4,     5,
       5,     4,   428,     5,     5,     4,     5,     5,     4,     5,
       5,     4,     5,     5,     4,     5,     5,     4,     4,     4,
       5,     5,     4,     4,     5,     5,     4,     5,     5,     4,
     400,   400,   400,   400,   417,   400,   410,   412,   400,   417,
     400,   400,   400,   400,   400,     5,   400,   400,   400,     4,
     400,   400,     5,   400,     5,   400,     4,   410,     4,   400,
     417,   199,   415,   400,   415,   418,   417,   410,   400,   400,
       4,   400,   410,   410,   400,   403,     5,     5,     5,     5,
       5,   101,   410,   417,   410,   410,   410,   410,   412,   410,
     417,   410,   410,   410,   412,   410,   410,   410,   410,   412,
     410,   410,   410,   400,   410,   410,   410,   410,   410,   410,
     410,   410,   101,   400,   400,     4,   400,     5,   400,   422,
       5,     5,     5,   420,     4,     4,     5,   422,   421,     4,
     422,     5,     5,     5,   421,   421,   420,     4,     4,     5,
     308,     5,     5,     5,   421,   421,   420,     4,     4,   420,
       5,     5,     5,     5,   421,   421,   420,     4,     4,     5,
      13,    14,    65,   214,   215,   300,   311,   312,   347,    13,
      14,    65,   214,   215,   300,   311,   312,   347,    13,    14,
      65,   214,   215,   300,   311,   312,   347,   308,     5,     5,
       5,   421,   421,   420,     4,     4,   420,     5,   308,     5,
       5,     5,   421,   421,   420,     4,     4,   420,     5,   421,
       4,     4,   421,     4,     4,   422,     5,   417,   410,   400,
     400,   410,   400,     5,   405,     5,   410,   402,   423,     5,
     410,   417,     5,   405,   400,   400,   400,   400,   400,   400,
     400,   400,   400,     4,     4,     5,     4,     4,   400,   410,
     400,     5,   405,   402,   423,   417,   417,   417,   400,   409,
     417,   417,   400,   417,   417,   400,   400,   400,   400,   400,
     400,   400,   400,   400,   400,   566,   574,   400,   400,   400,
     400,   400,   400,   400,   347,   400,   400,   400,   400,   400,
     410,     5,   400,   400,   400,   400,     4,     4,   417,   418,
       5,     5,   409,   400,     4,   417,   410,     4,   428,   428,
     428,   428,   428,   428,   428,   428,   428,   405,   400,   400,
     400,   417,   400,   409,   400,   400,    11,     5,     5,   400,
     400,   400,   400,     5,   400,     4,   400,     4,   417,     4,
     410,   400,   400,   418,   419,   400,     5,   400,   410,   412,
       5,     5,     5,     5,     5,   410,   417,   419,   419,   419,
     417,   419,   418,   419,   419,   417,   419,   419,   419,   417,
     419,   419,   417,   410,   417,   419,   417,   419,   419,   417,
     419,   417,   410,     4,   410,   412,     5,   400,     4,   422,
     421,     4,   421,   421,     4,     4,   421,     4,   421,     5,
       5,     5,   421,   421,   420,     4,     4,     5,     5,     5,
       5,   421,   421,   420,     4,     4,     5,     5,     5,     5,
     421,   421,   420,     4,     4,     5,   421,   422,   422,   422,
     422,   422,     4,   422,   422,     4,   421,   421,   422,   422,
     422,   422,   422,     4,   422,   422,     4,   421,   421,     4,
       4,     4,   411,   419,     4,   410,   419,   400,   410,     4,
     419,   419,   410,     4,   400,   400,   400,   400,   400,   400,
     400,   400,   400,   400,   400,   410,   419,   400,   410,     4,
     409,   409,   418,   410,   409,   409,   410,   410,   409,   409,
     400,   400,   400,   400,   400,   400,   405,   400,   400,   400,
      59,    71,   100,   143,   324,   326,   383,   571,   572,   573,
     585,   586,   405,   400,   400,   400,   400,   405,   400,     5,
     400,   400,   400,   400,   400,   417,   400,   347,   404,   405,
     400,   400,   418,   402,   410,   410,   418,   417,     4,   400,
     409,   400,    63,   400,     5,     5,     4,     4,   400,   400,
       4,   400,     4,   415,   419,     5,   417,     4,     5,     4,
       5,   410,     5,   417,   418,   419,   418,   418,   418,   418,
     417,     5,   417,     4,   400,   422,   421,   421,     4,   421,
     422,   422,   422,   422,   422,     4,   422,   422,   421,   422,
     422,   422,   422,   422,     4,   422,   422,   421,   422,   422,
     422,   422,   422,     4,   422,   422,   421,   422,   421,     4,
     422,   422,   421,     4,   422,   421,   417,   410,   419,     4,
     417,   400,   417,   400,   400,   400,   419,     4,   417,   400,
     409,     5,   347,   419,   400,   409,   419,   419,   410,   400,
       4,   425,   425,   400,   400,   425,   405,   425,   574,   410,
     397,   397,   397,   397,   397,   397,   397,   572,   397,   405,
     425,   425,   400,   400,   405,   400,   574,   400,   400,   400,
     400,   409,   400,     5,   574,   400,   425,   402,   575,   576,
     417,   417,   402,   418,     4,     5,   400,     5,     4,     4,
       4,     4,     4,     4,   400,     4,    33,   208,   320,   464,
     410,     5,    33,   208,   320,   427,   410,     4,   464,   400,
     421,   421,   422,   421,   422,   421,   422,   422,   421,   422,
     421,   400,   419,   410,   410,   400,   410,   400,   410,   410,
     400,     5,   410,   419,     4,   574,   574,   404,   400,   574,
       4,   574,   417,   553,     5,     4,     5,     5,     5,     4,
     402,     4,   574,   574,   404,   400,     4,   574,   574,   400,
     410,   574,   574,   574,   575,   582,   583,   573,   580,   581,
     402,     4,     5,     5,     4,     4,     4,   211,   345,   390,
     400,   455,   464,     4,   410,   464,     4,   422,   422,   422,
     422,   422,   411,   419,   419,   400,   419,     4,   419,   419,
     400,   419,   400,   574,   574,     4,   400,   574,     5,     4,
     400,   574,     4,   400,   574,   417,   582,   584,   585,   397,
     581,     5,     5,   400,   456,   400,   456,   417,   419,     4,
     410,   412,     4,   405,   404,   400,     5,   400,   404,   400,
     410,   585,   402,     5,     5,   400,   400,   400,   400,   427,
       5,   410,   412,   417,   410,   412,   574,   400,     4,   574,
     400,   419,     5,     5,   400,     5,   400,   417,   417,     4,
     574,     4,     5,     5,     5,   404,   404,   574,   574,   574
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
#line 507 "frame/parser.Y"
    {fr->bgColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 5:
#line 508 "frame/parser.Y"
    {fr->useBgColorCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 7:
#line 510 "frame/parser.Y"
    {fr->centerCmd();;}
    break;

  case 8:
#line 511 "frame/parser.Y"
    {fr->clearCmd();;}
    break;

  case 10:
#line 513 "frame/parser.Y"
    {fr->colorbarTagCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 17:
#line 520 "frame/parser.Y"
    {fr->DATASECCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 23:
#line 526 "frame/parser.Y"
    {fr->hideCmd();;}
    break;

  case 24:
#line 527 "frame/parser.Y"
    {fr->highliteCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 25:
#line 528 "frame/parser.Y"
    {fr->highliteColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 29:
#line 532 "frame/parser.Y"
    {fr->irafAlignCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 38:
#line 541 "frame/parser.Y"
    {fr->nanColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 42:
#line 545 "frame/parser.Y"
    {fr->queryCursorCmd();;}
    break;

  case 45:
#line 548 "frame/parser.Y"
    {fr->resetCmd();;}
    break;

  case 51:
#line 554 "frame/parser.Y"
    {fr->showCmd();;}
    break;

  case 53:
#line 556 "frame/parser.Y"
    {fr->threadsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 55:
#line 558 "frame/parser.Y"
    {fr->unloadFitsCmd();;}
    break;

  case 57:
#line 560 "frame/parser.Y"
    {fr->msg("Frame 1.0");;}
    break;

  case 62:
#line 567 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 63:
#line 568 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 64:
#line 571 "frame/parser.Y"
    {yydebug=(yyvsp[(1) - (1)].integer);;}
    break;

  case 65:
#line 572 "frame/parser.Y"
    {DebugMosaic=(yyvsp[(2) - (2)].integer);;}
    break;

  case 66:
#line 573 "frame/parser.Y"
    {yydebug=(yyvsp[(2) - (2)].integer);;}
    break;

  case 67:
#line 574 "frame/parser.Y"
    {DebugPerf=(yyvsp[(2) - (2)].integer);;}
    break;

  case 68:
#line 575 "frame/parser.Y"
    {DebugWCS=(yyvsp[(2) - (2)].integer);;}
    break;

  case 69:
#line 576 "frame/parser.Y"
    {DebugBin=(yyvsp[(2) - (2)].integer);;}
    break;

  case 70:
#line 577 "frame/parser.Y"
    {DebugBlock=(yyvsp[(2) - (2)].integer);;}
    break;

  case 71:
#line 578 "frame/parser.Y"
    {DebugCompress=(yyvsp[(2) - (2)].integer);;}
    break;

  case 72:
#line 579 "frame/parser.Y"
    {DebugCrop=(yyvsp[(2) - (2)].integer);;}
    break;

  case 73:
#line 580 "frame/parser.Y"
    {DebugGZ=(yyvsp[(2) - (2)].integer);;}
    break;

  case 74:
#line 581 "frame/parser.Y"
    {DebugRGB=(yyvsp[(2) - (2)].integer);;}
    break;

  case 75:
#line 584 "frame/parser.Y"
    {(yyval.integer)=((yyvsp[(1) - (1)].integer) ? 1 : 0);;}
    break;

  case 76:
#line 586 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 77:
#line 587 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 78:
#line 588 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 79:
#line 589 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 80:
#line 591 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 81:
#line 592 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 82:
#line 593 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 83:
#line 594 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 84:
#line 597 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 85:
#line 598 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 86:
#line 599 "frame/parser.Y"
    {(yyval.integer) = Base::FULLBASE;;}
    break;

  case 87:
#line 600 "frame/parser.Y"
    {(yyval.integer) = Base::ROOT;;}
    break;

  case 88:
#line 601 "frame/parser.Y"
    {(yyval.integer) = Base::FULL;;}
    break;

  case 89:
#line 604 "frame/parser.Y"
    {(yyval.real) = 0;;}
    break;

  case 90:
#line 605 "frame/parser.Y"
    {(yyval.real) = (yyvsp[(1) - (1)].real);;}
    break;

  case 91:
#line 608 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 92:
#line 609 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 93:
#line 610 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 94:
#line 613 "frame/parser.Y"
    {(yyval.real) = parseSEXStr((yyvsp[(1) - (1)].str));;}
    break;

  case 95:
#line 616 "frame/parser.Y"
    {(yyval.real) = parseHMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 96:
#line 619 "frame/parser.Y"
    {(yyval.real) = parseDMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 97:
#line 623 "frame/parser.Y"
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

  case 98:
#line 635 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 99:
#line 642 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 100:
#line 649 "frame/parser.Y"
    {
	  (yyval.vector)[0] = (yyvsp[(1) - (2)].real);
	  (yyval.vector)[1] = (yyvsp[(2) - (2)].real);
	  (yyval.vector)[2] = 1;
	;}
    break;

  case 101:
#line 656 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::IMAGE;;}
    break;

  case 102:
#line 657 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::PHYSICAL;;}
    break;

  case 103:
#line 658 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::DETECTOR;;}
    break;

  case 104:
#line 659 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::AMPLIFIER;;}
    break;

  case 105:
#line 660 "frame/parser.Y"
    {(yyval.integer) = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 106:
#line 663 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS;;}
    break;

  case 107:
#line 664 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSA;;}
    break;

  case 108:
#line 665 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSB;;}
    break;

  case 109:
#line 666 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSC;;}
    break;

  case 110:
#line 667 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSD;;}
    break;

  case 111:
#line 668 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSE;;}
    break;

  case 112:
#line 669 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSF;;}
    break;

  case 113:
#line 670 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSG;;}
    break;

  case 114:
#line 671 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSH;;}
    break;

  case 115:
#line 672 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSI;;}
    break;

  case 116:
#line 673 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSJ;;}
    break;

  case 117:
#line 674 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSK;;}
    break;

  case 118:
#line 675 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSL;;}
    break;

  case 119:
#line 676 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSM;;}
    break;

  case 120:
#line 677 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSN;;}
    break;

  case 121:
#line 678 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSO;;}
    break;

  case 122:
#line 679 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSP;;}
    break;

  case 123:
#line 680 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSQ;;}
    break;

  case 124:
#line 681 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSR;;}
    break;

  case 125:
#line 682 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSS;;}
    break;

  case 126:
#line 683 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCST;;}
    break;

  case 127:
#line 684 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSU;;}
    break;

  case 128:
#line 685 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSV;;}
    break;

  case 129:
#line 686 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSW;;}
    break;

  case 130:
#line 687 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSX;;}
    break;

  case 131:
#line 688 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSY;;}
    break;

  case 132:
#line 689 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSZ;;}
    break;

  case 133:
#line 690 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS0;;}
    break;

  case 134:
#line 693 "frame/parser.Y"
    {(yyval.integer) = Coord::CANVAS;;}
    break;

  case 135:
#line 694 "frame/parser.Y"
    {(yyval.integer) = Coord::PANNER;;}
    break;

  case 136:
#line 697 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 137:
#line 698 "frame/parser.Y"
    {(yyval.integer) = FitsMask::ZERO;;}
    break;

  case 138:
#line 699 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 139:
#line 700 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NaN;;}
    break;

  case 140:
#line 701 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONNaN;;}
    break;

  case 141:
#line 702 "frame/parser.Y"
    {(yyval.integer) = FitsMask::RANGE;;}
    break;

  case 142:
#line 705 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 143:
#line 706 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 144:
#line 707 "frame/parser.Y"
    {(yyval.integer) = FitsMask::MULTIPLY;;}
    break;

  case 145:
#line 708 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SCREEN;;}
    break;

  case 146:
#line 709 "frame/parser.Y"
    {(yyval.integer) = FitsMask::OVERLAY;;}
    break;

  case 147:
#line 710 "frame/parser.Y"
    {(yyval.integer) = FitsMask::DARKEN;;}
    break;

  case 148:
#line 711 "frame/parser.Y"
    {(yyval.integer) = FitsMask::LIGHTEN;;}
    break;

  case 149:
#line 712 "frame/parser.Y"
    {(yyval.integer) = FitsMask::COLOR_DODGE;;}
    break;

  case 150:
#line 713 "frame/parser.Y"
    {(yyval.integer) = FitsMask::COLOR_BURN;;}
    break;

  case 151:
#line 714 "frame/parser.Y"
    {(yyval.integer) = FitsMask::HARD_LIGHT;;}
    break;

  case 152:
#line 715 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOFT_LIGHT;;}
    break;

  case 153:
#line 716 "frame/parser.Y"
    {(yyval.integer) = FitsMask::DIFFERENCE;;}
    break;

  case 154:
#line 717 "frame/parser.Y"
    {(yyval.integer) = FitsMask::EXCLUSION;;}
    break;

  case 155:
#line 718 "frame/parser.Y"
    {(yyval.integer) = FitsMask::HUE;;}
    break;

  case 156:
#line 719 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SATURATION;;}
    break;

  case 157:
#line 720 "frame/parser.Y"
    {(yyval.integer) = FitsMask::COLOR;;}
    break;

  case 158:
#line 721 "frame/parser.Y"
    {(yyval.integer) = FitsMask::LUMINOSITY;;}
    break;

  case 159:
#line 724 "frame/parser.Y"
    {(yyval.integer) = FrScale::LINEARSCALE;;}
    break;

  case 160:
#line 725 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOGSCALE;;}
    break;

  case 161:
#line 726 "frame/parser.Y"
    {(yyval.integer) = FrScale::POWSCALE;;}
    break;

  case 162:
#line 727 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQRTSCALE;;}
    break;

  case 163:
#line 728 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQUAREDSCALE;;}
    break;

  case 164:
#line 729 "frame/parser.Y"
    {(yyval.integer) = FrScale::ASINHSCALE;;}
    break;

  case 165:
#line 730 "frame/parser.Y"
    {(yyval.integer) = FrScale::SINHSCALE;;}
    break;

  case 166:
#line 731 "frame/parser.Y"
    {(yyval.integer) = FrScale::HISTEQUSCALE;;}
    break;

  case 167:
#line 734 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 168:
#line 735 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 169:
#line 736 "frame/parser.Y"
    {(yyval.integer)=FrScale::SAMPLE;;}
    break;

  case 170:
#line 737 "frame/parser.Y"
    {(yyval.integer)=FrScale::DATAMIN;;}
    break;

  case 171:
#line 738 "frame/parser.Y"
    {(yyval.integer)=FrScale::IRAFMIN;;}
    break;

  case 172:
#line 741 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 173:
#line 742 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 174:
#line 743 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 175:
#line 744 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 176:
#line 745 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 177:
#line 746 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 178:
#line 747 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::GALACTIC;;}
    break;

  case 179:
#line 748 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ECLIPTIC;;}
    break;

  case 180:
#line 751 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 181:
#line 752 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 182:
#line 753 "frame/parser.Y"
    {(yyval.integer)=Coord::SEXAGESIMAL;;}
    break;

  case 183:
#line 756 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 184:
#line 757 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 185:
#line 758 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCMIN;;}
    break;

  case 186:
#line 759 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCSEC;;}
    break;

  case 187:
#line 762 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 188:
#line 763 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 189:
#line 764 "frame/parser.Y"
    {(yyval.integer) = Base::KEY;;}
    break;

  case 190:
#line 767 "frame/parser.Y"
    {;}
    break;

  case 191:
#line 768 "frame/parser.Y"
    {;}
    break;

  case 192:
#line 769 "frame/parser.Y"
    {;}
    break;

  case 193:
#line 772 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 194:
#line 773 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 195:
#line 774 "frame/parser.Y"
    {(yyval.integer) = Base::MASK;;}
    break;

  case 196:
#line 778 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer) ? Marker::ARROW : Marker::NOEND;;}
    break;

  case 197:
#line 779 "frame/parser.Y"
    {(yyval.integer) = Marker::NOEND;;}
    break;

  case 198:
#line 780 "frame/parser.Y"
    {(yyval.integer) = Marker::ARROW;;}
    break;

  case 199:
#line 781 "frame/parser.Y"
    {(yyval.integer) = Marker::OPENARROW;;}
    break;

  case 200:
#line 782 "frame/parser.Y"
    {(yyval.integer) = Marker::CHEVRON;;}
    break;

  case 201:
#line 783 "frame/parser.Y"
    {(yyval.integer) = Marker::CIRCLE;;}
    break;

  case 202:
#line 784 "frame/parser.Y"
    {(yyval.integer) = Marker::OPENCIRCLE;;}
    break;

  case 203:
#line 785 "frame/parser.Y"
    {(yyval.integer) = Marker::BOX;;}
    break;

  case 204:
#line 786 "frame/parser.Y"
    {(yyval.integer) = Marker::OPENBOX;;}
    break;

  case 205:
#line 787 "frame/parser.Y"
    {(yyval.integer) = Marker::TRIANGLE;;}
    break;

  case 206:
#line 788 "frame/parser.Y"
    {(yyval.integer) = Marker::OPENTRIANGLE;;}
    break;

  case 207:
#line 789 "frame/parser.Y"
    {(yyval.integer) = Marker::BAR;;}
    break;

  case 208:
#line 792 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 209:
#line 793 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 210:
#line 794 "frame/parser.Y"
    {(yyval.integer) = Point::BOX;;}
    break;

  case 211:
#line 795 "frame/parser.Y"
    {(yyval.integer) = Point::DIAMOND;;}
    break;

  case 212:
#line 796 "frame/parser.Y"
    {(yyval.integer) = Point::CROSS;;}
    break;

  case 213:
#line 797 "frame/parser.Y"
    {(yyval.integer) = Point::EX;;}
    break;

  case 214:
#line 798 "frame/parser.Y"
    {(yyval.integer) = Point::ARROW;;}
    break;

  case 215:
#line 799 "frame/parser.Y"
    {(yyval.integer) = Point::BOXCIRCLE;;}
    break;

  case 216:
#line 802 "frame/parser.Y"
    {(yyval.integer) = POINTSIZE;;}
    break;

  case 217:
#line 803 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 218:
#line 806 "frame/parser.Y"
    {(yyval.integer) = Marker::PANDA;;}
    break;

  case 219:
#line 807 "frame/parser.Y"
    {(yyval.integer) = Marker::HISTOGRAM;;}
    break;

  case 220:
#line 808 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT2D;;}
    break;

  case 221:
#line 809 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT3D;;}
    break;

  case 222:
#line 810 "frame/parser.Y"
    {(yyval.integer) = Marker::RADIAL;;}
    break;

  case 223:
#line 811 "frame/parser.Y"
    {(yyval.integer) = Marker::STATS;;}
    break;

  case 224:
#line 814 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 225:
#line 815 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 226:
#line 816 "frame/parser.Y"
    {(yyval.integer) = Marker::SUM;;}
    break;

  case 227:
#line 817 "frame/parser.Y"
    {(yyval.integer) = Marker::MEDIAN;;}
    break;

  case 228:
#line 820 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 229:
#line 821 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 230:
#line 822 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 231:
#line 823 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 232:
#line 824 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 233:
#line 825 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 238:
#line 832 "frame/parser.Y"
    {fr->set3dRenderMethodCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 239:
#line 833 "frame/parser.Y"
    {fr->set3dRenderBackgroundCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 241:
#line 835 "frame/parser.Y"
    {fr->set3dScaleCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 242:
#line 836 "frame/parser.Y"
    {fr->set3dSyncCmd((yyvsp[(2) - (2)].integer));}
    break;

  case 243:
#line 838 "frame/parser.Y"
    {/* needed for compatibility with old version of backup */;}
    break;

  case 244:
#line 841 "frame/parser.Y"
    {fr->set3dShadeCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 245:
#line 842 "frame/parser.Y"
    {fr->set3dShadeAmbientCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 246:
#line 843 "frame/parser.Y"
    {fr->set3dShadeStrengthCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 248:
#line 847 "frame/parser.Y"
    {fr->set3dShadeNormalCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 249:
#line 848 "frame/parser.Y"
    {fr->set3dShadeNormalStrengthCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 250:
#line 851 "frame/parser.Y"
    {fr->set3dBorderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 251:
#line 852 "frame/parser.Y"
    {fr->set3dBorderColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 252:
#line 855 "frame/parser.Y"
    {fr->set3dCompassCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 253:
#line 856 "frame/parser.Y"
    {fr->set3dCompassColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 254:
#line 859 "frame/parser.Y"
    {fr->set3dHighliteCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 255:
#line 860 "frame/parser.Y"
    {fr->set3dHighliteColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 256:
#line 863 "frame/parser.Y"
    {fr->set3dViewCmd((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));;}
    break;

  case 257:
#line 865 "frame/parser.Y"
    {fr->set3dViewPointCmd(Vector3d((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 259:
#line 869 "frame/parser.Y"
    {fr->binColsCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 260:
#line 870 "frame/parser.Y"
    {fr->binDepthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 263:
#line 873 "frame/parser.Y"
    {fr->binBufferSizeCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 265:
#line 875 "frame/parser.Y"
    {fr->binFilterCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 266:
#line 878 "frame/parser.Y"
    {fr->binAboutCmd();;}
    break;

  case 267:
#line 879 "frame/parser.Y"
    {fr->binAboutCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 268:
#line 882 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 269:
#line 883 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 270:
#line 885 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(1) - (4)].real)), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 271:
#line 887 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 272:
#line 888 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 273:
#line 889 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 274:
#line 891 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 275:
#line 893 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 276:
#line 896 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::AVERAGE);;}
    break;

  case 277:
#line 897 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::SUM);;}
    break;

  case 278:
#line 900 "frame/parser.Y"
    {fr->binToFitCmd();;}
    break;

  case 279:
#line 902 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (7)].real),(yyvsp[(2) - (7)].real)), (yyvsp[(5) - (7)].str), (yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].str));;}
    break;

  case 280:
#line 905 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (11)].real),(yyvsp[(2) - (11)].real)), (yyvsp[(3) - (11)].integer), Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)), (yyvsp[(8) - (11)].str), (yyvsp[(9) - (11)].str), (yyvsp[(10) - (11)].str), (yyvsp[(11) - (11)].str));;}
    break;

  case 281:
#line 907 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (8)].real),(yyvsp[(2) - (8)].real)), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (yyvsp[(6) - (8)].str), (yyvsp[(7) - (8)].str), (yyvsp[(8) - (8)].str));;}
    break;

  case 282:
#line 910 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (12)].real),(yyvsp[(2) - (12)].real)), (yyvsp[(3) - (12)].integer), Vector((yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real)), Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    (yyvsp[(9) - (12)].str), (yyvsp[(10) - (12)].str), (yyvsp[(11) - (12)].str), (yyvsp[(12) - (12)].str));;}
    break;

  case 283:
#line 914 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 284:
#line 915 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 286:
#line 917 "frame/parser.Y"
    {fr->blockNanZeroCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 287:
#line 920 "frame/parser.Y"
    {fr->blockToFitCmd();;}
    break;

  case 288:
#line 921 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 289:
#line 922 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 293:
#line 928 "frame/parser.Y"
    {fr->clipUserCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 294:
#line 929 "frame/parser.Y"
    {fr->clipUserCmd(NAN,NAN);;}
    break;

  case 296:
#line 932 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 297:
#line 937 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::GLOBAL);;}
    break;

  case 298:
#line 938 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::LOCAL);;}
    break;

  case 299:
#line 941 "frame/parser.Y"
    {fr->clipModeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 300:
#line 942 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::MINMAX);;}
    break;

  case 301:
#line 943 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZSCALE);;}
    break;

  case 302:
#line 944 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZMAX);;}
    break;

  case 303:
#line 945 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::USERCLIP);;}
    break;

  case 304:
#line 948 "frame/parser.Y"
    {fr->clipMinMaxCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer),(yyvsp[(1) - (2)].integer));;}
    break;

  case 305:
#line 949 "frame/parser.Y"
    {fr->clipMinMaxModeCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer));;}
    break;

  case 306:
#line 950 "frame/parser.Y"
    {fr->clipMinMaxSampleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 307:
#line 951 "frame/parser.Y"
    {fr->clipMinMaxRescanCmd();;}
    break;

  case 308:
#line 954 "frame/parser.Y"
    {fr->clipZScaleCmd((yyvsp[(1) - (3)].real),(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 309:
#line 956 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleContrastCmd((yyvsp[(2) - (2)].real));
        ;}
    break;

  case 310:
#line 961 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleSampleCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 311:
#line 966 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleLineCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 312:
#line 973 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].real), (yyvsp[(3) - (5)].real), (yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].integer));;}
    break;

  case 313:
#line 975 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 314:
#line 977 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 315:
#line 979 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 316:
#line 981 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (7)].integer),(yyvsp[(3) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(yyvsp[(7) - (7)].integer));;}
    break;

  case 320:
#line 988 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].real), (yyvsp[(3) - (5)].real), (yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].integer));;}
    break;

  case 321:
#line 990 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 322:
#line 992 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 323:
#line 994 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 324:
#line 996 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (7)].integer),(yyvsp[(3) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(yyvsp[(7) - (7)].integer));;}
    break;

  case 325:
#line 998 "frame/parser.Y"
    {fr->colorScaleCmd((FrScale::ColorScaleType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 326:
#line 999 "frame/parser.Y"
    {fr->colorScaleLogCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 328:
#line 1003 "frame/parser.Y"
    {fr->contourDashListCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 333:
#line 1011 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),(FrScale::ClipMode)(yyvsp[(9) - (13)].integer),100,(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 334:
#line 1014 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),FrScale::AUTOCUT,(yyvsp[(9) - (13)].real),(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 335:
#line 1017 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),(FrScale::ClipMode)(yyvsp[(9) - (12)].integer),100,FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 336:
#line 1023 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),FrScale::AUTOCUT,(yyvsp[(9) - (12)].real),FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 337:
#line 1028 "frame/parser.Y"
    {fr->contourCreatePolygonCmd();;}
    break;

  case 338:
#line 1031 "frame/parser.Y"
    {fr->contourDeleteCmd();;}
    break;

  case 339:
#line 1032 "frame/parser.Y"
    {fr->contourDeleteAuxCmd();;}
    break;

  case 340:
#line 1035 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 341:
#line 1036 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 342:
#line 1038 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourLoadCmd((yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer),(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer));
	;}
    break;

  case 343:
#line 1044 "frame/parser.Y"
    {(yyval.integer) = FrScale::MINMAX;;}
    break;

  case 344:
#line 1045 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZSCALE;;}
    break;

  case 345:
#line 1046 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZMAX;;}
    break;

  case 346:
#line 1047 "frame/parser.Y"
    {(yyval.integer) = FrScale::USERCLIP;;}
    break;

  case 347:
#line 1050 "frame/parser.Y"
    {(yyval.integer) = FrScale::GLOBAL;;}
    break;

  case 348:
#line 1051 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOCAL;;}
    break;

  case 349:
#line 1054 "frame/parser.Y"
    {(yyval.integer) = FVContour::SMOOTH;;}
    break;

  case 350:
#line 1055 "frame/parser.Y"
    {(yyval.integer) = FVContour::BLOCK;;}
    break;

  case 351:
#line 1058 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 352:
#line 1059 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 353:
#line 1061 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 354:
#line 1065 "frame/parser.Y"
    {fr->contourSaveCmd((yyvsp[(1) - (3)].str), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 355:
#line 1067 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (4)].str),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 356:
#line 1070 "frame/parser.Y"
    {fr->cropCmd();;}
    break;

  case 357:
#line 1072 "frame/parser.Y"
    {fr->cropCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 358:
#line 1075 "frame/parser.Y"
    {fr->cropCenterCmd(Vector((yyvsp[(2) - (8)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), Vector((yyvsp[(5) - (8)].real),(yyvsp[(6) - (8)].real)), (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 360:
#line 1077 "frame/parser.Y"
    {fr->cropBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 361:
#line 1078 "frame/parser.Y"
    {fr->cropMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 362:
#line 1079 "frame/parser.Y"
    {fr->cropEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 363:
#line 1082 "frame/parser.Y"
    {fr->crop3dCmd();;}
    break;

  case 364:
#line 1084 "frame/parser.Y"
    {fr->crop3dCmd((yyvsp[(1) - (4)].real), (yyvsp[(2) - (4)].real), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 365:
#line 1085 "frame/parser.Y"
    {fr->crop3dBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 366:
#line 1086 "frame/parser.Y"
    {fr->crop3dMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 367:
#line 1087 "frame/parser.Y"
    {fr->crop3dEndCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 368:
#line 1091 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), (Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 369:
#line 1093 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 370:
#line 1094 "frame/parser.Y"
    {fr->crosshairCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 371:
#line 1095 "frame/parser.Y"
    {fr->crosshairWarpCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 372:
#line 1098 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)), (Coord::InternalSystem)(yyvsp[(3) - (5)].integer));;}
    break;

  case 373:
#line 1100 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 374:
#line 1102 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer));;}
    break;

  case 375:
#line 1104 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 376:
#line 1107 "frame/parser.Y"
    {fr->axesOrderCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 377:
#line 1110 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 378:
#line 1111 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 379:
#line 1112 "frame/parser.Y"
    {(yyval.integer) = Base::SUM;;}
    break;

  case 380:
#line 1113 "frame/parser.Y"
    {(yyval.integer) = Base::MEDIAN;;}
    break;

  case 381:
#line 1116 "frame/parser.Y"
    {fr->fadeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 382:
#line 1117 "frame/parser.Y"
    {fr->fadeClearCmd();;}
    break;

  case 383:
#line 1120 "frame/parser.Y"
    {fr->fitsyHasExtCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 384:
#line 1123 "frame/parser.Y"
    {fr->getCmd();;}
    break;

  case 385:
#line 1124 "frame/parser.Y"
    {fr->getBgColorCmd();;}
    break;

  case 399:
#line 1138 "frame/parser.Y"
    {fr->getDATASECCmd();;}
    break;

  case 402:
#line 1141 "frame/parser.Y"
    {fr->getHighliteColorCmd();;}
    break;

  case 403:
#line 1142 "frame/parser.Y"
    {fr->getHistogramCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].integer));;}
    break;

  case 409:
#line 1148 "frame/parser.Y"
    {fr->getIRAFAlignCmd();;}
    break;

  case 410:
#line 1149 "frame/parser.Y"
    {fr->getMinMaxCmd();;}
    break;

  case 415:
#line 1154 "frame/parser.Y"
    {fr->getNANColorCmd();;}
    break;

  case 416:
#line 1155 "frame/parser.Y"
    {fr->getOrientCmd();;}
    break;

  case 418:
#line 1158 "frame/parser.Y"
    {fr->getPixelTableCmd(Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (Coord::InternalSystem)(yyvsp[(3) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(7) - (8)].integer), (yyvsp[(8) - (8)].str));;}
    break;

  case 420:
#line 1160 "frame/parser.Y"
    {fr->getRotateCmd();;}
    break;

  case 422:
#line 1162 "frame/parser.Y"
    {fr->getThreadsCmd();;}
    break;

  case 424:
#line 1164 "frame/parser.Y"
    {fr->getTypeCmd();;}
    break;

  case 425:
#line 1166 "frame/parser.Y"
    {fr->getValueCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 428:
#line 1169 "frame/parser.Y"
    {fr->getZoomCmd();;}
    break;

  case 429:
#line 1173 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 430:
#line 1175 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 431:
#line 1179 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 432:
#line 1181 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 433:
#line 1184 "frame/parser.Y"
    {fr->getBinDepthCmd();;}
    break;

  case 434:
#line 1185 "frame/parser.Y"
    {fr->getBinFactorCmd();;}
    break;

  case 435:
#line 1186 "frame/parser.Y"
    {fr->getBinFunctionCmd();;}
    break;

  case 436:
#line 1187 "frame/parser.Y"
    {fr->getBinBufferSizeCmd();;}
    break;

  case 437:
#line 1188 "frame/parser.Y"
    {fr->getBinCursorCmd();;}
    break;

  case 438:
#line 1189 "frame/parser.Y"
    {fr->getBinFilterCmd();;}
    break;

  case 440:
#line 1191 "frame/parser.Y"
    {fr->getBinListCmd();;}
    break;

  case 441:
#line 1194 "frame/parser.Y"
    {fr->getBinColsCmd();;}
    break;

  case 442:
#line 1195 "frame/parser.Y"
    {fr->getBinColsMinMaxCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 443:
#line 1196 "frame/parser.Y"
    {fr->getBinColsDimCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 444:
#line 1199 "frame/parser.Y"
    {fr->getBlockCmd();;}
    break;

  case 445:
#line 1200 "frame/parser.Y"
    {fr->getBlockNanZeroCmd();;}
    break;

  case 446:
#line 1203 "frame/parser.Y"
    {fr->getClipCmd();;}
    break;

  case 447:
#line 1205 "frame/parser.Y"
    {fr->getClipCmd((FrScale::ClipMode)(yyvsp[(1) - (2)].integer), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 448:
#line 1207 "frame/parser.Y"
    {fr->getClipCmd((yyvsp[(1) - (2)].real), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 449:
#line 1208 "frame/parser.Y"
    {fr->getClipScopeCmd();;}
    break;

  case 450:
#line 1209 "frame/parser.Y"
    {fr->getClipModeCmd();;}
    break;

  case 452:
#line 1211 "frame/parser.Y"
    {fr->getClipUserCmd();;}
    break;

  case 454:
#line 1214 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	;}
    break;

  case 455:
#line 1220 "frame/parser.Y"
    {fr->getClipMinMaxModeCmd();;}
    break;

  case 456:
#line 1221 "frame/parser.Y"
    {fr->getClipMinMaxSampleCmd();;}
    break;

  case 457:
#line 1224 "frame/parser.Y"
    {fr->getClipZScaleContrastCmd();;}
    break;

  case 458:
#line 1225 "frame/parser.Y"
    {fr->getClipZScaleSampleCmd();;}
    break;

  case 459:
#line 1226 "frame/parser.Y"
    {fr->getClipZScaleLineCmd();;}
    break;

  case 460:
#line 1229 "frame/parser.Y"
    {fr->getColorbarCmd();;}
    break;

  case 461:
#line 1230 "frame/parser.Y"
    {fr->getColorbarTagCmd();;}
    break;

  case 463:
#line 1236 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 464:
#line 1238 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 465:
#line 1240 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 466:
#line 1243 "frame/parser.Y"
    {fr->getColorScaleCmd();;}
    break;

  case 468:
#line 1245 "frame/parser.Y"
    {fr->getColorScaleLogCmd();;}
    break;

  case 469:
#line 1249 "frame/parser.Y"
    {fr->getColorScaleLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 470:
#line 1253 "frame/parser.Y"
    {fr->getContourCmd((Coord::CoordSystem)(yyvsp[(1) - (2)].integer),(Coord::SkyFrame)(yyvsp[(2) - (2)].integer));;}
    break;

  case 472:
#line 1255 "frame/parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 473:
#line 1256 "frame/parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 474:
#line 1257 "frame/parser.Y"
    {fr->getContourDashListCmd();;}
    break;

  case 475:
#line 1258 "frame/parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 476:
#line 1259 "frame/parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 477:
#line 1260 "frame/parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 479:
#line 1262 "frame/parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 480:
#line 1263 "frame/parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 481:
#line 1266 "frame/parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 482:
#line 1267 "frame/parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 483:
#line 1268 "frame/parser.Y"
    {fr->getContourClipScopeCmd();;}
    break;

  case 484:
#line 1271 "frame/parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 485:
#line 1272 "frame/parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 486:
#line 1276 "frame/parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 487:
#line 1278 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 488:
#line 1286 "frame/parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 489:
#line 1288 "frame/parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 490:
#line 1290 "frame/parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 491:
#line 1293 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 492:
#line 1295 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 493:
#line 1296 "frame/parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 494:
#line 1299 "frame/parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 495:
#line 1302 "frame/parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 496:
#line 1304 "frame/parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 497:
#line 1308 "frame/parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 498:
#line 1310 "frame/parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 499:
#line 1313 "frame/parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 500:
#line 1317 "frame/parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (2)].str), (Base::FileNameType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 501:
#line 1318 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 502:
#line 1320 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)), (Coord::InternalSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (Base::FileNameType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 503:
#line 1323 "frame/parser.Y"
    {fr->iisGetCmd((yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 504:
#line 1324 "frame/parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 506:
#line 1328 "frame/parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 507:
#line 1329 "frame/parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 508:
#line 1330 "frame/parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 509:
#line 1333 "frame/parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 510:
#line 1335 "frame/parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 511:
#line 1336 "frame/parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 513:
#line 1338 "frame/parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 517:
#line 1342 "frame/parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 518:
#line 1343 "frame/parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 519:
#line 1344 "frame/parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 520:
#line 1346 "frame/parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::DistFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 522:
#line 1348 "frame/parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 523:
#line 1351 "frame/parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 524:
#line 1353 "frame/parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 525:
#line 1355 "frame/parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 526:
#line 1356 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 527:
#line 1357 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 528:
#line 1358 "frame/parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 529:
#line 1361 "frame/parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 530:
#line 1362 "frame/parser.Y"
    {fr->getFitsDepthCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 531:
#line 1366 "frame/parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 532:
#line 1368 "frame/parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 533:
#line 1371 "frame/parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 534:
#line 1374 "frame/parser.Y"
    {fr->getFitsSliceCmd(2);;}
    break;

  case 535:
#line 1375 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 536:
#line 1377 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 537:
#line 1379 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((yyvsp[(3) - (4)].integer), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 538:
#line 1381 "frame/parser.Y"
    {fr->getFitsSliceToImageCmd((yyvsp[(3) - (4)].real), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 539:
#line 1384 "frame/parser.Y"
    {fr->getGridCmd();;}
    break;

  case 540:
#line 1385 "frame/parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 541:
#line 1386 "frame/parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 542:
#line 1389 "frame/parser.Y"
    {fr->getLayerCountCmd();;}
    break;

  case 543:
#line 1390 "frame/parser.Y"
    {fr->getLayerNoCmd();;}
    break;

  case 544:
#line 1391 "frame/parser.Y"
    {fr->getLayerColorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 545:
#line 1392 "frame/parser.Y"
    {fr->getLayerBlendCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 546:
#line 1393 "frame/parser.Y"
    {fr->getLayerTransparencyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 547:
#line 1394 "frame/parser.Y"
    {fr->getLayerViewCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 548:
#line 1397 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 549:
#line 1398 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 550:
#line 1399 "frame/parser.Y"
    {fr->getMaskRangeCmd();;}
    break;

  case 551:
#line 1400 "frame/parser.Y"
    {fr->getMaskSystemCmd();;}
    break;

  case 552:
#line 1401 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 553:
#line 1402 "frame/parser.Y"
    {fr->getMaskCountCmd();;}
    break;

  case 554:
#line 1403 "frame/parser.Y"
    {fr->getMaskBlendCmd();;}
    break;

  case 555:
#line 1406 "frame/parser.Y"
    {(yyval.integer) = 0;;}
    break;

  case 556:
#line 1407 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 557:
#line 1410 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 558:
#line 1413 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 559:
#line 1414 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 560:
#line 1415 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 561:
#line 1418 "frame/parser.Y"
    {fr->getMultiColorSystemCmd();;}
    break;

  case 562:
#line 1421 "frame/parser.Y"
    {fr->getHLSChannelCmd();;}
    break;

  case 563:
#line 1422 "frame/parser.Y"
    {fr->getHLSSystemCmd();;}
    break;

  case 564:
#line 1423 "frame/parser.Y"
    {fr->getHLSViewCmd();;}
    break;

  case 565:
#line 1426 "frame/parser.Y"
    {fr->getHSVChannelCmd();;}
    break;

  case 566:
#line 1427 "frame/parser.Y"
    {fr->getHSVSystemCmd();;}
    break;

  case 567:
#line 1428 "frame/parser.Y"
    {fr->getHSVViewCmd();;}
    break;

  case 568:
#line 1431 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 569:
#line 1432 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 570:
#line 1433 "frame/parser.Y"
    {fr->getSmoothRadiusMinorCmd();;}
    break;

  case 571:
#line 1434 "frame/parser.Y"
    {fr->getSmoothSigmaCmd();;}
    break;

  case 572:
#line 1435 "frame/parser.Y"
    {fr->getSmoothSigmaMinorCmd();;}
    break;

  case 573:
#line 1436 "frame/parser.Y"
    {fr->getSmoothAngleCmd();;}
    break;

  case 578:
#line 1443 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 579:
#line 1444 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 581:
#line 1446 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 582:
#line 1449 "frame/parser.Y"
    {fr->get3dShadeCmd();;}
    break;

  case 583:
#line 1450 "frame/parser.Y"
    {fr->get3dShadeAmbientCmd();;}
    break;

  case 584:
#line 1451 "frame/parser.Y"
    {fr->get3dShadeStrengthCmd();;}
    break;

  case 586:
#line 1455 "frame/parser.Y"
    {fr->get3dShadeNormalCmd();;}
    break;

  case 587:
#line 1456 "frame/parser.Y"
    {fr->get3dShadeNormalStrengthCmd();;}
    break;

  case 588:
#line 1459 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 589:
#line 1460 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 590:
#line 1463 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 591:
#line 1464 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 592:
#line 1467 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 593:
#line 1468 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 594:
#line 1471 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 595:
#line 1472 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 596:
#line 1475 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 598:
#line 1477 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 599:
#line 1480 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 600:
#line 1481 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 602:
#line 1485 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 603:
#line 1489 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 604:
#line 1492 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer),
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 605:
#line 1499 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 606:
#line 1500 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 607:
#line 1503 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 608:
#line 1504 "frame/parser.Y"
    {fr->hasBgColorCmd();;}
    break;

  case 611:
#line 1507 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 612:
#line 1508 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 613:
#line 1509 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 614:
#line 1510 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 616:
#line 1512 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 617:
#line 1513 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 618:
#line 1514 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 620:
#line 1516 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 621:
#line 1517 "frame/parser.Y"
    {fr->hasImageCmd();;}
    break;

  case 622:
#line 1518 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 623:
#line 1519 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 625:
#line 1523 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 626:
#line 1526 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 627:
#line 1527 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 628:
#line 1530 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 629:
#line 1531 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 630:
#line 1532 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 631:
#line 1533 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 632:
#line 1536 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 633:
#line 1537 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 634:
#line 1538 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 635:
#line 1539 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 636:
#line 1542 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 637:
#line 1543 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 638:
#line 1544 "frame/parser.Y"
    {fr->hasWCSEquCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 639:
#line 1545 "frame/parser.Y"
    {fr->hasWCSLinearCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 640:
#line 1546 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 641:
#line 1547 "frame/parser.Y"
    {fr->hasWCS3DCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 642:
#line 1550 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 643:
#line 1551 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 644:
#line 1552 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 647:
#line 1556 "frame/parser.Y"
    {fr->iisSetCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 648:
#line 1557 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 649:
#line 1560 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 650:
#line 1563 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 651:
#line 1564 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 652:
#line 1568 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 653:
#line 1570 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 654:
#line 1571 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 661:
#line 1583 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 662:
#line 1585 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 663:
#line 1587 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 664:
#line 1588 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 665:
#line 1590 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 666:
#line 1592 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 667:
#line 1594 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 668:
#line 1596 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 669:
#line 1598 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 673:
#line 1604 "frame/parser.Y"
    {fr->loadRGBArrayCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 674:
#line 1605 "frame/parser.Y"
    {fr->loadRGBArrayCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 675:
#line 1606 "frame/parser.Y"
    {fr->loadRGBArrayCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 676:
#line 1607 "frame/parser.Y"
    {fr->loadRGBArrayCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 677:
#line 1608 "frame/parser.Y"
    {fr->loadRGBArrayCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 678:
#line 1610 "frame/parser.Y"
    {fr->loadRGBArrayCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 679:
#line 1611 "frame/parser.Y"
    {fr->loadRGBArrayCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 680:
#line 1612 "frame/parser.Y"
    {fr->loadRGBArrayCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 681:
#line 1613 "frame/parser.Y"
    {fr->loadRGBArrayCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 682:
#line 1616 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 683:
#line 1620 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 684:
#line 1622 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 685:
#line 1624 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 686:
#line 1626 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 687:
#line 1628 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 688:
#line 1630 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 689:
#line 1632 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 690:
#line 1634 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str),
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 691:
#line 1637 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 692:
#line 1639 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 693:
#line 1641 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 703:
#line 1653 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 704:
#line 1654 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 705:
#line 1655 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 706:
#line 1656 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 707:
#line 1657 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 708:
#line 1658 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 709:
#line 1660 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 710:
#line 1662 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 711:
#line 1663 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 712:
#line 1664 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 713:
#line 1665 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 714:
#line 1668 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 715:
#line 1669 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 716:
#line 1670 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 717:
#line 1671 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 718:
#line 1672 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 719:
#line 1674 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 720:
#line 1675 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 721:
#line 1676 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 722:
#line 1677 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 728:
#line 1688 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 729:
#line 1691 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 730:
#line 1694 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 731:
#line 1697 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 732:
#line 1700 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 733:
#line 1703 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 734:
#line 1706 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 735:
#line 1709 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 736:
#line 1712 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 737:
#line 1717 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 738:
#line 1720 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 739:
#line 1723 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 740:
#line 1726 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 741:
#line 1729 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 742:
#line 1732 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 743:
#line 1735 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 744:
#line 1738 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 745:
#line 1741 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 746:
#line 1744 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 747:
#line 1747 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 748:
#line 1752 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 749:
#line 1755 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 750:
#line 1758 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 751:
#line 1761 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 752:
#line 1764 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 753:
#line 1767 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer),
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 754:
#line 1770 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 755:
#line 1773 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 756:
#line 1776 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 757:
#line 1781 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 758:
#line 1783 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 759:
#line 1785 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 760:
#line 1787 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 761:
#line 1789 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 762:
#line 1791 "frame/parser.Y"
    {
	  fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str),
					   (Base::LayerType)(yyvsp[(6) - (6)].integer));
        ;}
    break;

  case 763:
#line 1796 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 764:
#line 1798 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 765:
#line 1800 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 766:
#line 1804 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 767:
#line 1807 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 768:
#line 1810 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 769:
#line 1813 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 770:
#line 1816 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 771:
#line 1819 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 772:
#line 1822 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer),
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 773:
#line 1825 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer),
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 774:
#line 1828 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 775:
#line 1831 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 776:
#line 1834 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 777:
#line 1838 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 778:
#line 1839 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 779:
#line 1840 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 780:
#line 1841 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 781:
#line 1842 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 782:
#line 1843 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 783:
#line 1845 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 784:
#line 1847 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 785:
#line 1848 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 786:
#line 1849 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 787:
#line 1850 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 788:
#line 1853 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 789:
#line 1854 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 790:
#line 1855 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 791:
#line 1856 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 792:
#line 1857 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 793:
#line 1859 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 794:
#line 1860 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 795:
#line 1861 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 796:
#line 1862 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 797:
#line 1866 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 798:
#line 1868 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 799:
#line 1869 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 800:
#line 1871 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 801:
#line 1873 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 802:
#line 1875 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 803:
#line 1878 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 804:
#line 1879 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 805:
#line 1882 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 806:
#line 1883 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 807:
#line 1884 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 808:
#line 1887 "frame/parser.Y"
    {;}
    break;

  case 809:
#line 1890 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 810:
#line 1891 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 811:
#line 1892 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 812:
#line 1893 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 813:
#line 1894 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 814:
#line 1895 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 815:
#line 1896 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 816:
#line 1900 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 818:
#line 1908 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 819:
#line 1909 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 820:
#line 1911 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 821:
#line 1913 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 822:
#line 1914 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 823:
#line 1915 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 825:
#line 1916 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 828:
#line 1919 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 829:
#line 1920 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 830:
#line 1922 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 831:
#line 1924 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 832:
#line 1926 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 833:
#line 1929 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 834:
#line 1931 "frame/parser.Y"
    {fr->regionStatsCallbackCmd((yyvsp[(4) - (4)].str));;}
    break;

  case 835:
#line 1933 "frame/parser.Y"
    {fr->regionStatsCallbackCmd(NULL);;}
    break;

  case 836:
#line 1935 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 837:
#line 1936 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 838:
#line 1938 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 839:
#line 1941 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 840:
#line 1944 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 841:
#line 1948 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 842:
#line 1951 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 843:
#line 1954 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 844:
#line 1957 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 845:
#line 1961 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 846:
#line 1965 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 847:
#line 1970 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str),
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 848:
#line 1974 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 849:
#line 1976 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 850:
#line 1977 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 851:
#line 1979 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 852:
#line 1981 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 853:
#line 1983 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 854:
#line 1985 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 855:
#line 1987 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 856:
#line 1988 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 857:
#line 1989 "frame/parser.Y"
    {fr->markerCompositeAreaCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 858:
#line 1991 "frame/parser.Y"
    {fr->markerCompositeOperationCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 859:
#line 1993 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 860:
#line 1995 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 861:
#line 1998 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 862:
#line 2002 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 863:
#line 2006 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 864:
#line 2008 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 865:
#line 2010 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 866:
#line 2012 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 867:
#line 2014 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 868:
#line 2016 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 869:
#line 2018 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 870:
#line 2020 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 871:
#line 2022 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 872:
#line 2024 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 873:
#line 2026 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 874:
#line 2028 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 875:
#line 2030 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 876:
#line 2032 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 877:
#line 2033 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 878:
#line 2035 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 879:
#line 2037 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 880:
#line 2038 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 881:
#line 2039 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 882:
#line 2041 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 883:
#line 2043 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 884:
#line 2044 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 885:
#line 2045 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 886:
#line 2046 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 887:
#line 2048 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 888:
#line 2050 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 889:
#line 2054 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 890:
#line 2057 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 891:
#line 2060 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 892:
#line 2064 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 893:
#line 2068 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 894:
#line 2073 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str),
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 895:
#line 2077 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 896:
#line 2078 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 897:
#line 2079 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 898:
#line 2081 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 899:
#line 2082 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 900:
#line 2084 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 901:
#line 2088 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 902:
#line 2089 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 903:
#line 2090 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 904:
#line 2092 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 905:
#line 2095 "frame/parser.Y"
    {fr->markerPolygonPointCmd((yyvsp[(1) - (7)].integer),(yyvsp[(7) - (7)].str),(Coord::CoordSystem)(yyvsp[(4) - (7)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),(Coord::SkyFormat)(yyvsp[(6) - (7)].integer));;}
    break;

  case 906:
#line 2098 "frame/parser.Y"
    {fr->markerPolygonPointVarCmd((yyvsp[(1) - (8)].integer),(yyvsp[(8) - (8)].str),(Coord::CoordSystem)(yyvsp[(4) - (8)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (8)].integer),(Coord::SkyFormat)(yyvsp[(6) - (8)].integer));;}
    break;

  case 907:
#line 2101 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 908:
#line 2104 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 909:
#line 2107 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 910:
#line 2108 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 911:
#line 2112 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 912:
#line 2116 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 913:
#line 2118 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 914:
#line 2119 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 915:
#line 2121 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 916:
#line 2124 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 917:
#line 2127 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 918:
#line 2128 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 919:
#line 2130 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 920:
#line 2131 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 921:
#line 2132 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 922:
#line 2134 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 923:
#line 2135 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 924:
#line 2137 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 925:
#line 2138 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 926:
#line 2141 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 927:
#line 2144 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 928:
#line 2145 "frame/parser.Y"
    {fr->markerDashListCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 929:
#line 2147 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 930:
#line 2148 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 934:
#line 2153 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 935:
#line 2154 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 936:
#line 2156 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 937:
#line 2158 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 938:
#line 2160 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 939:
#line 2161 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 943:
#line 2167 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 944:
#line 2168 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 945:
#line 2169 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 946:
#line 2170 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 947:
#line 2171 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 948:
#line 2172 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 949:
#line 2173 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 950:
#line 2174 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 951:
#line 2175 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 952:
#line 2176 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 953:
#line 2178 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 954:
#line 2180 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 955:
#line 2181 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 956:
#line 2182 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 957:
#line 2183 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 958:
#line 2184 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 959:
#line 2186 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 960:
#line 2187 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 961:
#line 2188 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 962:
#line 2189 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 963:
#line 2190 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 964:
#line 2192 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 965:
#line 2193 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 966:
#line 2194 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 967:
#line 2195 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 968:
#line 2196 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 969:
#line 2197 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 970:
#line 2198 "frame/parser.Y"
    {fr->markerDashListCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 971:
#line 2201 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 972:
#line 2202 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 973:
#line 2203 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 974:
#line 2204 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 975:
#line 2205 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 976:
#line 2206 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 977:
#line 2207 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 978:
#line 2208 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 979:
#line 2209 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 980:
#line 2210 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 981:
#line 2211 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 982:
#line 2212 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 983:
#line 2213 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 984:
#line 2214 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 985:
#line 2215 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 986:
#line 2216 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 987:
#line 2217 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 988:
#line 2218 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 989:
#line 2219 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 990:
#line 2220 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 991:
#line 2221 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 992:
#line 2224 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 993:
#line 2225 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 994:
#line 2226 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 995:
#line 2227 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 996:
#line 2228 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 997:
#line 2230 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 998:
#line 2240 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 999:
#line 2248 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1000:
#line 2257 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1001:
#line 2265 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1002:
#line 2271 "frame/parser.Y"
    {fr->createPolygonCanvasVarCmd((yyvsp[(4) - (5)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1003:
#line 2277 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1004:
#line 2284 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1005:
#line 2292 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1006:
#line 2300 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1007:
#line 2305 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1008:
#line 2310 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1009:
#line 2315 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1010:
#line 2320 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1011:
#line 2325 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1012:
#line 2330 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1013:
#line 2335 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1014:
#line 2344 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer),
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1015:
#line 2354 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1016:
#line 2364 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1017:
#line 2373 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1018:
#line 2381 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1019:
#line 2391 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1020:
#line 2401 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1021:
#line 2411 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1022:
#line 2423 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1023:
#line 2432 "frame/parser.Y"
    {fr->createCompositeCmd(
	    (yyvsp[(2) - (3)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1025:
#line 2440 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 1026:
#line 2442 "frame/parser.Y"
    {
	  if ((yyvsp[(1) - (1)].integer) < 0 || (yyvsp[(1) - (1)].integer) > 1) {
	    fr->error("composite operation must be 0 (union) or 1 (intersection)");
	    YYERROR;
	  }
	  (yyval.integer)=(yyvsp[(1) - (1)].integer);
	;}
    break;

  case 1027:
#line 2451 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 1028:
#line 2453 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 1029:
#line 2455 "frame/parser.Y"
    {
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 1030:
#line 2460 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 1031:
#line 2463 "frame/parser.Y"
    {fr->markerDeleteAllCmd(0);;}
    break;

  case 1032:
#line 2464 "frame/parser.Y"
    {fr->markerDeleteAllCmd(1);;}
    break;

  case 1033:
#line 2465 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerDeleteAllCmd(0);
        ;}
    break;

  case 1034:
#line 2472 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1035:
#line 2474 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1036:
#line 2475 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 1037:
#line 2478 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 1038:
#line 2479 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 1039:
#line 2480 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 1040:
#line 2481 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 1041:
#line 2482 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 1042:
#line 2483 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 1043:
#line 2484 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 1045:
#line 2488 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 1046:
#line 2489 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 1047:
#line 2490 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 1048:
#line 2491 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1049:
#line 2492 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1050:
#line 2495 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(yyvsp[(6) - (8)].str),(Coord::CoordSystem)(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 1051:
#line 2497 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 1052:
#line 2499 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 1053:
#line 2501 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 1054:
#line 2503 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 1055:
#line 2505 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1056:
#line 2507 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsDataCmd((yyvsp[(1) - (6)].integer),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1057:
#line 2509 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsDataAllCmd((Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1058:
#line 2511 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsFieldsCmd();;}
    break;

  case 1059:
#line 2513 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 1060:
#line 2514 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1061:
#line 2515 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1062:
#line 2517 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1063:
#line 2519 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1064:
#line 2522 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1065:
#line 2524 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1066:
#line 2525 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1067:
#line 2526 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1068:
#line 2528 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1069:
#line 2530 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1070:
#line 2533 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer),
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1071:
#line 2536 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1072:
#line 2537 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1073:
#line 2538 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1074:
#line 2539 "frame/parser.Y"
    {fr->getMarkerCompassEndCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1075:
#line 2540 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1076:
#line 2542 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1077:
#line 2543 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1078:
#line 2544 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1079:
#line 2545 "frame/parser.Y"
    {fr->getMarkerCompositeAreaCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1080:
#line 2546 "frame/parser.Y"
    {fr->getMarkerCompositeOperationCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1081:
#line 2547 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1082:
#line 2548 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1083:
#line 2550 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1084:
#line 2552 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1085:
#line 2554 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1086:
#line 2556 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer),
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1087:
#line 2558 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1088:
#line 2559 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1089:
#line 2561 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1090:
#line 2563 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1091:
#line 2565 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1092:
#line 2566 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1093:
#line 2567 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1094:
#line 2568 "frame/parser.Y"
    {fr->getMarkerLineEndCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1095:
#line 2570 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1096:
#line 2572 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1097:
#line 2575 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1098:
#line 2578 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1099:
#line 2579 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1100:
#line 2581 "frame/parser.Y"
    {fr->getMarkerPolygonPointCmd((yyvsp[(1) - (6)].integer),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),(Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1101:
#line 2584 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1102:
#line 2587 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer),
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1103:
#line 2590 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1104:
#line 2591 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1105:
#line 2592 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1106:
#line 2593 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1107:
#line 2595 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1108:
#line 2597 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1109:
#line 2599 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1110:
#line 2600 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1111:
#line 2602 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1112:
#line 2603 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1113:
#line 2604 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1114:
#line 2605 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1115:
#line 2606 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1116:
#line 2608 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1117:
#line 2609 "frame/parser.Y"
    {fr->getMarkerVectorEndCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1118:
#line 2611 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1119:
#line 2613 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1120:
#line 2615 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1121:
#line 2616 "frame/parser.Y"
    {fr->getMarkerDashListCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1123:
#line 2618 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1124:
#line 2619 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1125:
#line 2621 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1126:
#line 2623 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1127:
#line 2624 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1128:
#line 2625 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1130:
#line 2627 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1132:
#line 2631 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1133:
#line 2632 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1134:
#line 2633 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1135:
#line 2634 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1136:
#line 2635 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1137:
#line 2636 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1138:
#line 2638 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1139:
#line 2639 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1140:
#line 2641 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1141:
#line 2642 "frame/parser.Y"
    {fr->getMarkerDashListCmd();;}
    break;

  case 1142:
#line 2645 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1143:
#line 2646 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1144:
#line 2647 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1145:
#line 2648 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1146:
#line 2651 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1147:
#line 2652 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1148:
#line 2655 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1149:
#line 2656 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1150:
#line 2659 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1151:
#line 2660 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1152:
#line 2663 "frame/parser.Y"
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

  case 1153:
#line 2676 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1154:
#line 2677 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1155:
#line 2681 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1156:
#line 2682 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1157:
#line 2686 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1158:
#line 2687 "frame/parser.Y"
    {fr->markerLayerCmd(Base::FOOTPRINT);;}
    break;

  case 1159:
#line 2692 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), 0, propQMask, propQValue, taglist);;}
    break;

  case 1160:
#line 2696 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), 1, propQMask, propQValue, taglist);;}
    break;

  case 1161:
#line 2701 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str),0,"green",Coord::PHYSICAL,Coord::ICRS);;}
    break;

  case 1162:
#line 2703 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1163:
#line 2706 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer),0,"green",Coord::PHYSICAL,Coord::ICRS);;}
    break;

  case 1164:
#line 2708 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1165:
#line 2711 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (2)].str), "green");;}
    break;

  case 1166:
#line 2713 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));;}
    break;

  case 1167:
#line 2716 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1168:
#line 2717 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1169:
#line 2718 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1170:
#line 2719 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1171:
#line 2720 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1172:
#line 2721 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1173:
#line 2723 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1176:
#line 2730 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1177:
#line 2731 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1178:
#line 2732 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1179:
#line 2733 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1180:
#line 2734 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1181:
#line 2735 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1184:
#line 2740 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1185:
#line 2741 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1186:
#line 2742 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1187:
#line 2743 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1188:
#line 2744 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1189:
#line 2745 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1190:
#line 2746 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1191:
#line 2747 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1192:
#line 2748 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1193:
#line 2749 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1194:
#line 2750 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1195:
#line 2751 "frame/parser.Y"
    {(yyval.integer) = Marker::FILL;;}
    break;

  case 1198:
#line 2758 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1199:
#line 2759 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1201:
#line 2763 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(1) - (6)].str), (Base::MarkerFormat)(yyvsp[(2) - (6)].integer), (Coord::CoordSystem)(yyvsp[(3) - (6)].integer), (Coord::SkyFrame)(yyvsp[(4) - (6)].integer), (Coord::SkyFormat)(yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].integer), 0);;}
    break;

  case 1202:
#line 2765 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer), 1);;}
    break;

  case 1203:
#line 2766 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1204:
#line 2769 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1205:
#line 2770 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1206:
#line 2771 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1207:
#line 2772 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1208:
#line 2773 "frame/parser.Y"
    {fr->markerSelectFirstCmd();;}
    break;

  case 1209:
#line 2774 "frame/parser.Y"
    {fr->markerSelectLastCmd();;}
    break;

  case 1210:
#line 2777 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1211:
#line 2778 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1214:
#line 2786 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1215:
#line 2789 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1216:
#line 2790 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1220:
#line 2797 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1221:
#line 2800 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1222:
#line 2804 "frame/parser.Y"
    {fr->layerCreateCmd();;}
    break;

  case 1223:
#line 2805 "frame/parser.Y"
    {fr->layerCreateCmd();;}
    break;

  case 1224:
#line 2806 "frame/parser.Y"
    {fr->layerNoCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1225:
#line 2807 "frame/parser.Y"
    {fr->layerNoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1226:
#line 2808 "frame/parser.Y"
    {fr->layerColorCmd(0,(yyvsp[(2) - (2)].str));;}
    break;

  case 1227:
#line 2809 "frame/parser.Y"
    {fr->layerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1228:
#line 2810 "frame/parser.Y"
    {fr->layerBlendCmd(0,(FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1229:
#line 2811 "frame/parser.Y"
    {fr->layerBlendCmd((yyvsp[(1) - (3)].integer),(FitsMask::MaskBlend)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1230:
#line 2812 "frame/parser.Y"
    {fr->layerTransparencyCmd(0,(yyvsp[(2) - (2)].real));;}
    break;

  case 1231:
#line 2813 "frame/parser.Y"
    {fr->layerTransparencyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 1232:
#line 2814 "frame/parser.Y"
    {fr->layerViewCmd(0,(yyvsp[(2) - (2)].integer));;}
    break;

  case 1233:
#line 2815 "frame/parser.Y"
    {fr->layerViewCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1234:
#line 2817 "frame/parser.Y"
    {fr->layerShowCmd(0);;}
    break;

  case 1235:
#line 2818 "frame/parser.Y"
    {fr->layerShowCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1236:
#line 2819 "frame/parser.Y"
    {fr->layerHideCmd(0);;}
    break;

  case 1237:
#line 2820 "frame/parser.Y"
    {fr->layerHideCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1238:
#line 2821 "frame/parser.Y"
    {fr->layerDeleteCmd(0);;}
    break;

  case 1239:
#line 2822 "frame/parser.Y"
    {fr->layerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1240:
#line 2823 "frame/parser.Y"
    {fr->layerUpCmd(0);;}
    break;

  case 1241:
#line 2824 "frame/parser.Y"
    {fr->layerUpCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1242:
#line 2825 "frame/parser.Y"
    {fr->layerDownCmd(0);;}
    break;

  case 1243:
#line 2826 "frame/parser.Y"
    {fr->layerDownCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1244:
#line 2827 "frame/parser.Y"
    {fr->layerTopCmd(0);;}
    break;

  case 1245:
#line 2828 "frame/parser.Y"
    {fr->layerTopCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1246:
#line 2829 "frame/parser.Y"
    {fr->layerBottomCmd(0);;}
    break;

  case 1247:
#line 2830 "frame/parser.Y"
    {fr->layerBottomCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1248:
#line 2833 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1249:
#line 2834 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1250:
#line 2835 "frame/parser.Y"
    {fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1251:
#line 2836 "frame/parser.Y"
    {fr->maskRangeCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 1252:
#line 2837 "frame/parser.Y"
    {fr->maskSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1253:
#line 2838 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1254:
#line 2839 "frame/parser.Y"
    {fr->maskBlendCmd((FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1255:
#line 2840 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1256:
#line 2846 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1257:
#line 2847 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1258:
#line 2848 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1259:
#line 2849 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1260:
#line 2853 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1261:
#line 2854 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1262:
#line 2856 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1263:
#line 2861 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1265:
#line 2863 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1267:
#line 2865 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1268:
#line 2868 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1269:
#line 2870 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1270:
#line 2875 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1271:
#line 2878 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1272:
#line 2879 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1273:
#line 2880 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1274:
#line 2883 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1275:
#line 2885 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1276:
#line 2889 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1277:
#line 2890 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1278:
#line 2894 "frame/parser.Y"
    {fr->psColorSpaceCmd((PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1279:
#line 2895 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1280:
#line 2896 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1281:
#line 2897 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 1282:
#line 2903 "frame/parser.Y"
    {fr->precCmd((yyvsp[(1) - (9)].integer),(yyvsp[(2) - (9)].integer),(yyvsp[(3) - (9)].integer),(yyvsp[(4) - (9)].integer),(yyvsp[(5) - (9)].integer),(yyvsp[(6) - (9)].integer),(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 1283:
#line 2904 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->precCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 1284:
#line 2910 "frame/parser.Y"
    {(yyval.integer) = BW;;}
    break;

  case 1285:
#line 2911 "frame/parser.Y"
    {(yyval.integer) = GRAY;;}
    break;

  case 1286:
#line 2912 "frame/parser.Y"
    {(yyval.integer) = RGB;;}
    break;

  case 1287:
#line 2913 "frame/parser.Y"
    {(yyval.integer) = CMYK;;}
    break;

  case 1290:
#line 2921 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1291:
#line 2923 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1292:
#line 2924 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1293:
#line 2925 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1294:
#line 2929 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1295:
#line 2930 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1296:
#line 2931 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1297:
#line 2932 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1298:
#line 2935 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1299:
#line 2936 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1300:
#line 2937 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::FIP;;}
    break;

  case 1301:
#line 2940 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1302:
#line 2941 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1303:
#line 2942 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1304:
#line 2945 "frame/parser.Y"
    {fr->revealCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1305:
#line 2946 "frame/parser.Y"
    {fr->revealClearCmd();;}
    break;

  case 1306:
#line 2949 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1307:
#line 2950 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1308:
#line 2951 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1309:
#line 2955 "frame/parser.Y"
    {fr->setMultiColorSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1310:
#line 2958 "frame/parser.Y"
    {fr->setHLSChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1311:
#line 2959 "frame/parser.Y"
    {fr->setHLSChannelCmd("hue");;}
    break;

  case 1312:
#line 2960 "frame/parser.Y"
    {fr->setHLSChannelCmd("saturation");;}
    break;

  case 1313:
#line 2961 "frame/parser.Y"
    {fr->setHLSSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1314:
#line 2962 "frame/parser.Y"
    {fr->setHLSViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1315:
#line 2965 "frame/parser.Y"
    {fr->setHSVChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1316:
#line 2966 "frame/parser.Y"
    {fr->setHSVChannelCmd("hue");;}
    break;

  case 1317:
#line 2967 "frame/parser.Y"
    {fr->setHSVChannelCmd("saturation");;}
    break;

  case 1318:
#line 2968 "frame/parser.Y"
    {fr->setHSVChannelCmd("value");;}
    break;

  case 1319:
#line 2969 "frame/parser.Y"
    {fr->setHSVSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1320:
#line 2970 "frame/parser.Y"
    {fr->setHSVViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1321:
#line 2973 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1322:
#line 2974 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (2)].real))));;}
    break;

  case 1324:
#line 2976 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (2)].real))));;}
    break;

  case 1325:
#line 2977 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (3)].real))));;}
    break;

  case 1326:
#line 2980 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1327:
#line 2981 "frame/parser.Y"
    {fr->rotateMotionCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1328:
#line 2982 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1334:
#line 2990 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1335:
#line 2993 "frame/parser.Y"
    {fr->savePixelMaskFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1336:
#line 2994 "frame/parser.Y"
    {fr->savePixelMaskChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1337:
#line 2995 "frame/parser.Y"
    {fr->savePixelMaskSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1338:
#line 2999 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1339:
#line 3001 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1340:
#line 3003 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1357:
#line 3024 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1358:
#line 3025 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1359:
#line 3026 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1360:
#line 3029 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1361:
#line 3030 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1362:
#line 3031 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1363:
#line 3034 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1364:
#line 3035 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1365:
#line 3036 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1366:
#line 3039 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1367:
#line 3040 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1368:
#line 3041 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1370:
#line 3045 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1371:
#line 3046 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1372:
#line 3047 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1373:
#line 3050 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1374:
#line 3051 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1375:
#line 3052 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1376:
#line 3056 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1377:
#line 3058 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1378:
#line 3060 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1379:
#line 3063 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1380:
#line 3064 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1381:
#line 3065 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1382:
#line 3068 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1383:
#line 3069 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1384:
#line 3070 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1385:
#line 3074 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1386:
#line 3076 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1387:
#line 3078 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1388:
#line 3081 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1389:
#line 3082 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1390:
#line 3083 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1391:
#line 3086 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1392:
#line 3087 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1393:
#line 3088 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1394:
#line 3092 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1395:
#line 3094 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1396:
#line 3096 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1397:
#line 3099 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1398:
#line 3100 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1399:
#line 3101 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1400:
#line 3104 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1401:
#line 3105 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1402:
#line 3106 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1403:
#line 3109 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1404:
#line 3110 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1405:
#line 3111 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1406:
#line 3115 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1407:
#line 3117 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1408:
#line 3119 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1409:
#line 3123 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1410:
#line 3127 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1411:
#line 3129 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1412:
#line 3133 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1413:
#line 3136 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1414:
#line 3137 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1415:
#line 3138 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1416:
#line 3139 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1417:
#line 3142 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1418:
#line 3144 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1419:
#line 3146 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1420:
#line 3149 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 1422:
#line 3153 "frame/parser.Y"
    {fr->sliceCmd(2,(yyvsp[(1) - (1)].integer));;}
    break;

  case 1423:
#line 3154 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1424:
#line 3155 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1425:
#line 3158 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1426:
#line 3159 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1427:
#line 3163 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1429:
#line 3165 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1432:
#line 3170 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1433:
#line 3171 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1434:
#line 3172 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1435:
#line 3175 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1436:
#line 3176 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1437:
#line 3177 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1438:
#line 3180 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1439:
#line 3182 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1440:
#line 3187 "frame/parser.Y"
    {fr->wcsAlign2Cmd((yyvsp[(2) - (4)].integer), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1441:
#line 3188 "frame/parser.Y"
    {fr->wcsAlignPointerClearCmd();;}
    break;

  case 1442:
#line 3191 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1443:
#line 3198 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1444:
#line 3200 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1445:
#line 3202 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1446:
#line 3207 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1448:
#line 3211 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1449:
#line 3212 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1450:
#line 3213 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1451:
#line 3215 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1452:
#line 3217 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1453:
#line 3222 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 12201 "frame/parser.C"
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


#line 3226 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

