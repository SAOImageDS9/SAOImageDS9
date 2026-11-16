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
     GHS_ = 408,
     GLOBAL_ = 409,
     GLYPH_ = 410,
     GRAPHICS_ = 411,
     GRAY_ = 412,
     GRID_ = 413,
     GZ_ = 414,
     HANDLE_ = 415,
     HARDLIGHT_ = 416,
     HAS_ = 417,
     HEAD_ = 418,
     HEADER_ = 419,
     HEIGHT_ = 420,
     HIDE_ = 421,
     HIGHLITE_ = 422,
     HISTEQU_ = 423,
     HISTOGRAM_ = 424,
     HORIZONTAL_ = 425,
     HUE_ = 426,
     HSV_ = 427,
     HLS_ = 428,
     ICRS_ = 429,
     ID_ = 430,
     IIS_ = 431,
     IMAGE_ = 432,
     INCLUDE_ = 433,
     INCR_ = 434,
     INFO_ = 435,
     ITERATION_ = 436,
     IRAF_ = 437,
     IRAFMIN_ = 438,
     J2000_ = 439,
     KEY_ = 440,
     KEYWORD_ = 441,
     LABEL_ = 442,
     LAYER_ = 443,
     LAYERNO_ = 444,
     LAST_ = 445,
     LENGTH_ = 446,
     LEVEL_ = 447,
     LIGHTEN_ = 448,
     LITTLE_ = 449,
     LITTLEENDIAN_ = 450,
     LINE_ = 451,
     LINEAR_ = 452,
     LIST_ = 453,
     LOAD_ = 454,
     LOCAL_ = 455,
     LOG_ = 456,
     LUMINOSITY_ = 457,
     MACOSX_ = 458,
     MAGNIFIER_ = 459,
     MATCH_ = 460,
     MAP_ = 461,
     MARK_ = 462,
     MARKER_ = 463,
     MASK_ = 464,
     MEDIAN_ = 465,
     MESSAGE_ = 466,
     METHOD_ = 467,
     MINMAX_ = 468,
     MINOR_ = 469,
     MIP_ = 470,
     MMAP_ = 471,
     MMAPINCR_ = 472,
     MOSAIC_ = 473,
     MODE_ = 474,
     MOTION_ = 475,
     MULTICOLOR_ = 476,
     MULTIPLY_ = 477,
     MOVE_ = 478,
     NAME_ = 479,
     NAN_ = 480,
     NATIVE_ = 481,
     NAXES_ = 482,
     NEW_ = 483,
     NEXT_ = 484,
     NO_ = 485,
     NONE_ = 486,
     NORMAL_ = 487,
     NONNAN_ = 488,
     NONZERO_ = 489,
     NOW_ = 490,
     NRRD_ = 491,
     NUMBER_ = 492,
     OBJECT_ = 493,
     OFF_ = 494,
     ON_ = 495,
     ONLY_ = 496,
     OPENARROW_ = 497,
     OPENBOX_ = 498,
     OPENCIRCLE_ = 499,
     OPENTRIANGLE_ = 500,
     OPTION_ = 501,
     ORIENT_ = 502,
     OVERLAY_ = 503,
     PAN_ = 504,
     PANNER_ = 505,
     PARSER_ = 506,
     PASTE_ = 507,
     PERF_ = 508,
     PHOTO_ = 509,
     PHYSICAL_ = 510,
     PIXEL_ = 511,
     PLOT2D_ = 512,
     PLOT3D_ = 513,
     POINT_ = 514,
     POINTER_ = 515,
     POLYGON_ = 516,
     POSTSCRIPT_ = 517,
     POW_ = 518,
     PRECISION_ = 519,
     PRINT_ = 520,
     PRESERVE_ = 521,
     PROJECTION_ = 522,
     PROPERTY_ = 523,
     PUBLICATION_ = 524,
     PROS_ = 525,
     QUERY_ = 526,
     RADIAL_ = 527,
     RADIUS_ = 528,
     RANGE_ = 529,
     REGION_ = 530,
     REPLACE_ = 531,
     RESAMPLE_ = 532,
     RESCAN_ = 533,
     RESET_ = 534,
     RESOLUTION_ = 535,
     REVEAL_ = 536,
     RGB_ = 537,
     ROOT_ = 538,
     ROTATE_ = 539,
     RULER_ = 540,
     SAMPLE_ = 541,
     SAOIMAGE_ = 542,
     SAOTNG_ = 543,
     SAVE_ = 544,
     SATURATION_ = 545,
     SCALE_ = 546,
     SCAN_ = 547,
     SCIENTIFIC_ = 548,
     SCOPE_ = 549,
     SCREEN_ = 550,
     SEGMENT_ = 551,
     SELECT_ = 552,
     SET_ = 553,
     SEXAGESIMAL_ = 554,
     SHAPE_ = 555,
     SHADE_ = 556,
     SHARED_ = 557,
     SHIFT_ = 558,
     SHMID_ = 559,
     SHOW_ = 560,
     SIGMA_ = 561,
     SINH_ = 562,
     SIZE_ = 563,
     SLICE_ = 564,
     SMMAP_ = 565,
     SMOOTH_ = 566,
     SOFTLIGHT_ = 567,
     SOCKET_ = 568,
     SOCKETGZ_ = 569,
     SOURCE_ = 570,
     SQRT_ = 571,
     SQUARED_ = 572,
     SSHARED_ = 573,
     STATS_ = 574,
     STATUS_ = 575,
     STRENGTH_ = 576,
     STYLE_ = 577,
     SUM_ = 578,
     SYNC_ = 579,
     SYSTEM_ = 580,
     TABLE_ = 581,
     TAG_ = 582,
     TEMPLATE_ = 583,
     TEXT_ = 584,
     THREADS_ = 585,
     THREED_ = 586,
     THRESHOLD_ = 587,
     THICK_ = 588,
     TOP_ = 589,
     TRANSPARENCY_ = 590,
     TRIANGLE_ = 591,
     TO_ = 592,
     TOGGLE_ = 593,
     TOPHAT_ = 594,
     TRUE_ = 595,
     TYPE_ = 596,
     UNDO_ = 597,
     UNHIGHLITE_ = 598,
     UNLOAD_ = 599,
     UNSELECT_ = 600,
     UPDATE_ = 601,
     UP_ = 602,
     USER_ = 603,
     VALUE_ = 604,
     VAR_ = 605,
     VIEW_ = 606,
     VECTOR_ = 607,
     VERSION_ = 608,
     VERTEX_ = 609,
     VERTICAL_ = 610,
     WARP_ = 611,
     WCS_ = 612,
     WCSA_ = 613,
     WCSB_ = 614,
     WCSC_ = 615,
     WCSD_ = 616,
     WCSE_ = 617,
     WCSF_ = 618,
     WCSG_ = 619,
     WCSH_ = 620,
     WCSI_ = 621,
     WCSJ_ = 622,
     WCSK_ = 623,
     WCSL_ = 624,
     WCSM_ = 625,
     WCSN_ = 626,
     WCSO_ = 627,
     WCSP_ = 628,
     WCSQ_ = 629,
     WCSR_ = 630,
     WCSS_ = 631,
     WCST_ = 632,
     WCSU_ = 633,
     WCSV_ = 634,
     WCSW_ = 635,
     WCSX_ = 636,
     WCSY_ = 637,
     WCSZ_ = 638,
     WCS0_ = 639,
     WFPC2_ = 640,
     WIDTH_ = 641,
     WIN32_ = 642,
     XML_ = 643,
     XY_ = 644,
     YES_ = 645,
     ZERO_ = 646,
     ZMAX_ = 647,
     ZSCALE_ = 648,
     PIXMASK_ = 649,
     ZOOM_ = 650,
     FIELDS_ = 651
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
#define GHS_ 408
#define GLOBAL_ 409
#define GLYPH_ 410
#define GRAPHICS_ 411
#define GRAY_ 412
#define GRID_ 413
#define GZ_ 414
#define HANDLE_ 415
#define HARDLIGHT_ 416
#define HAS_ 417
#define HEAD_ 418
#define HEADER_ 419
#define HEIGHT_ 420
#define HIDE_ 421
#define HIGHLITE_ 422
#define HISTEQU_ 423
#define HISTOGRAM_ 424
#define HORIZONTAL_ 425
#define HUE_ 426
#define HSV_ 427
#define HLS_ 428
#define ICRS_ 429
#define ID_ 430
#define IIS_ 431
#define IMAGE_ 432
#define INCLUDE_ 433
#define INCR_ 434
#define INFO_ 435
#define ITERATION_ 436
#define IRAF_ 437
#define IRAFMIN_ 438
#define J2000_ 439
#define KEY_ 440
#define KEYWORD_ 441
#define LABEL_ 442
#define LAYER_ 443
#define LAYERNO_ 444
#define LAST_ 445
#define LENGTH_ 446
#define LEVEL_ 447
#define LIGHTEN_ 448
#define LITTLE_ 449
#define LITTLEENDIAN_ 450
#define LINE_ 451
#define LINEAR_ 452
#define LIST_ 453
#define LOAD_ 454
#define LOCAL_ 455
#define LOG_ 456
#define LUMINOSITY_ 457
#define MACOSX_ 458
#define MAGNIFIER_ 459
#define MATCH_ 460
#define MAP_ 461
#define MARK_ 462
#define MARKER_ 463
#define MASK_ 464
#define MEDIAN_ 465
#define MESSAGE_ 466
#define METHOD_ 467
#define MINMAX_ 468
#define MINOR_ 469
#define MIP_ 470
#define MMAP_ 471
#define MMAPINCR_ 472
#define MOSAIC_ 473
#define MODE_ 474
#define MOTION_ 475
#define MULTICOLOR_ 476
#define MULTIPLY_ 477
#define MOVE_ 478
#define NAME_ 479
#define NAN_ 480
#define NATIVE_ 481
#define NAXES_ 482
#define NEW_ 483
#define NEXT_ 484
#define NO_ 485
#define NONE_ 486
#define NORMAL_ 487
#define NONNAN_ 488
#define NONZERO_ 489
#define NOW_ 490
#define NRRD_ 491
#define NUMBER_ 492
#define OBJECT_ 493
#define OFF_ 494
#define ON_ 495
#define ONLY_ 496
#define OPENARROW_ 497
#define OPENBOX_ 498
#define OPENCIRCLE_ 499
#define OPENTRIANGLE_ 500
#define OPTION_ 501
#define ORIENT_ 502
#define OVERLAY_ 503
#define PAN_ 504
#define PANNER_ 505
#define PARSER_ 506
#define PASTE_ 507
#define PERF_ 508
#define PHOTO_ 509
#define PHYSICAL_ 510
#define PIXEL_ 511
#define PLOT2D_ 512
#define PLOT3D_ 513
#define POINT_ 514
#define POINTER_ 515
#define POLYGON_ 516
#define POSTSCRIPT_ 517
#define POW_ 518
#define PRECISION_ 519
#define PRINT_ 520
#define PRESERVE_ 521
#define PROJECTION_ 522
#define PROPERTY_ 523
#define PUBLICATION_ 524
#define PROS_ 525
#define QUERY_ 526
#define RADIAL_ 527
#define RADIUS_ 528
#define RANGE_ 529
#define REGION_ 530
#define REPLACE_ 531
#define RESAMPLE_ 532
#define RESCAN_ 533
#define RESET_ 534
#define RESOLUTION_ 535
#define REVEAL_ 536
#define RGB_ 537
#define ROOT_ 538
#define ROTATE_ 539
#define RULER_ 540
#define SAMPLE_ 541
#define SAOIMAGE_ 542
#define SAOTNG_ 543
#define SAVE_ 544
#define SATURATION_ 545
#define SCALE_ 546
#define SCAN_ 547
#define SCIENTIFIC_ 548
#define SCOPE_ 549
#define SCREEN_ 550
#define SEGMENT_ 551
#define SELECT_ 552
#define SET_ 553
#define SEXAGESIMAL_ 554
#define SHAPE_ 555
#define SHADE_ 556
#define SHARED_ 557
#define SHIFT_ 558
#define SHMID_ 559
#define SHOW_ 560
#define SIGMA_ 561
#define SINH_ 562
#define SIZE_ 563
#define SLICE_ 564
#define SMMAP_ 565
#define SMOOTH_ 566
#define SOFTLIGHT_ 567
#define SOCKET_ 568
#define SOCKETGZ_ 569
#define SOURCE_ 570
#define SQRT_ 571
#define SQUARED_ 572
#define SSHARED_ 573
#define STATS_ 574
#define STATUS_ 575
#define STRENGTH_ 576
#define STYLE_ 577
#define SUM_ 578
#define SYNC_ 579
#define SYSTEM_ 580
#define TABLE_ 581
#define TAG_ 582
#define TEMPLATE_ 583
#define TEXT_ 584
#define THREADS_ 585
#define THREED_ 586
#define THRESHOLD_ 587
#define THICK_ 588
#define TOP_ 589
#define TRANSPARENCY_ 590
#define TRIANGLE_ 591
#define TO_ 592
#define TOGGLE_ 593
#define TOPHAT_ 594
#define TRUE_ 595
#define TYPE_ 596
#define UNDO_ 597
#define UNHIGHLITE_ 598
#define UNLOAD_ 599
#define UNSELECT_ 600
#define UPDATE_ 601
#define UP_ 602
#define USER_ 603
#define VALUE_ 604
#define VAR_ 605
#define VIEW_ 606
#define VECTOR_ 607
#define VERSION_ 608
#define VERTEX_ 609
#define VERTICAL_ 610
#define WARP_ 611
#define WCS_ 612
#define WCSA_ 613
#define WCSB_ 614
#define WCSC_ 615
#define WCSD_ 616
#define WCSE_ 617
#define WCSF_ 618
#define WCSG_ 619
#define WCSH_ 620
#define WCSI_ 621
#define WCSJ_ 622
#define WCSK_ 623
#define WCSL_ 624
#define WCSM_ 625
#define WCSN_ 626
#define WCSO_ 627
#define WCSP_ 628
#define WCSQ_ 629
#define WCSR_ 630
#define WCSS_ 631
#define WCST_ 632
#define WCSU_ 633
#define WCSV_ 634
#define WCSW_ 635
#define WCSX_ 636
#define WCSY_ 637
#define WCSZ_ 638
#define WCS0_ 639
#define WFPC2_ 640
#define WIDTH_ 641
#define WIN32_ 642
#define XML_ 643
#define XY_ 644
#define YES_ 645
#define ZERO_ 646
#define ZMAX_ 647
#define ZSCALE_ 648
#define PIXMASK_ 649
#define ZOOM_ 650
#define FIELDS_ 651




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
#line 949 "frame/parser.C"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 962 "frame/parser.C"

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
#define YYFINAL  412
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   6300

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  401
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  248
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1486
/* YYNRULES -- Number of states.  */
#define YYNSTATES  3227

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   651

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
       2,   400,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   398,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   399,   397,
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
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396
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
     412,   414,   416,   418,   419,   421,   423,   425,   427,   429,
     431,   433,   434,   436,   438,   439,   441,   443,   445,   446,
     448,   450,   451,   453,   455,   456,   458,   460,   462,   464,
     466,   468,   470,   472,   474,   476,   478,   480,   482,   484,
     485,   487,   489,   491,   493,   495,   497,   499,   501,   502,
     504,   506,   508,   510,   512,   514,   516,   517,   519,   521,
     523,   524,   526,   528,   530,   532,   534,   537,   540,   543,
     546,   549,   552,   555,   558,   561,   564,   566,   569,   572,
     575,   577,   580,   582,   585,   587,   590,   592,   595,   598,
     605,   608,   613,   616,   619,   622,   626,   629,   632,   634,
     637,   639,   642,   647,   653,   656,   660,   666,   673,   675,
     677,   679,   687,   699,   708,   721,   723,   726,   729,   733,
     735,   737,   740,   743,   746,   749,   753,   757,   760,   763,
     765,   767,   769,   771,   773,   775,   777,   780,   783,   786,
     788,   792,   795,   798,   801,   807,   817,   827,   837,   845,
     847,   850,   852,   858,   868,   878,   888,   896,   898,   901,
     908,   910,   912,   915,   919,   922,   925,   928,   931,   934,
     937,   941,   944,   948,   957,   966,   980,   994,  1007,  1020,
    1022,  1023,  1025,  1028,  1030,  1035,  1042,  1044,  1046,  1048,
    1050,  1052,  1054,  1056,  1058,  1060,  1065,  1072,  1076,  1081,
    1087,  1089,  1092,  1097,  1104,  1105,  1112,  1121,  1124,  1128,
    1132,  1136,  1137,  1142,  1147,  1152,  1157,  1161,  1165,  1167,
    1171,  1177,  1182,  1187,  1191,  1194,  1195,  1197,  1199,  1201,
    1203,  1205,  1209,  1212,  1213,  1216,  1219,  1222,  1225,  1228,
    1231,  1234,  1237,  1240,  1243,  1246,  1249,  1252,  1255,  1257,
    1260,  1263,  1266,  1271,  1275,  1278,  1281,  1284,  1287,  1290,
    1292,  1296,  1299,  1302,  1305,  1308,  1310,  1313,  1322,  1325,
    1327,  1330,  1332,  1335,  1337,  1342,  1346,  1349,  1351,  1359,
    1368,  1376,  1385,  1387,  1389,  1391,  1394,  1396,  1398,  1401,
    1403,  1404,  1407,  1410,  1412,  1415,  1416,  1419,  1422,  1424,
    1426,  1429,  1432,  1435,  1437,  1439,  1441,  1443,  1445,  1447,
    1448,  1450,  1453,  1455,  1460,  1466,  1467,  1470,  1472,  1474,
    1480,  1483,  1486,  1489,  1491,  1493,  1495,  1497,  1500,  1502,
    1505,  1507,  1509,  1512,  1514,  1518,  1520,  1521,  1523,  1525,
    1526,  1528,  1534,  1541,  1545,  1552,  1556,  1558,  1562,  1564,
    1566,  1568,  1572,  1579,  1587,  1593,  1596,  1598,  1604,  1609,
    1611,  1615,  1616,  1618,  1621,  1623,  1628,  1630,  1633,  1635,
    1638,  1642,  1645,  1647,  1650,  1652,  1657,  1660,  1662,  1664,
    1668,  1670,  1673,  1677,  1680,  1681,  1683,  1685,  1690,  1693,
    1694,  1696,  1700,  1705,  1710,  1711,  1713,  1715,  1717,  1719,
    1722,  1725,  1728,  1731,  1733,  1735,  1737,  1739,  1741,  1743,
    1745,  1746,  1748,  1750,  1752,  1754,  1756,  1758,  1760,  1762,
    1764,  1766,  1768,  1770,  1772,  1774,  1777,  1779,  1782,  1784,
    1787,  1790,  1793,  1796,  1798,  1800,  1803,  1805,  1806,  1808,
    1810,  1813,  1814,  1816,  1817,  1819,  1820,  1822,  1823,  1825,
    1826,  1828,  1829,  1832,  1835,  1836,  1838,  1841,  1843,  1850,
    1856,  1858,  1860,  1862,  1865,  1868,  1871,  1873,  1875,  1877,
    1879,  1882,  1884,  1886,  1888,  1891,  1893,  1895,  1897,  1900,
    1903,  1906,  1907,  1909,  1910,  1912,  1914,  1916,  1918,  1920,
    1922,  1924,  1926,  1929,  1932,  1935,  1937,  1940,  1944,  1946,
    1949,  1952,  1957,  1963,  1965,  1976,  1978,  1981,  1985,  1989,
    1992,  1995,  1998,  2001,  2004,  2007,  2010,  2013,  2018,  2023,
    2028,  2032,  2036,  2042,  2047,  2052,  2057,  2061,  2065,  2069,
    2073,  2077,  2081,  2084,  2087,  2092,  2096,  2100,  2104,  2108,
    2113,  2118,  2123,  2128,  2134,  2139,  2146,  2154,  2159,  2164,
    2170,  2173,  2177,  2181,  2185,  2189,  2193,  2197,  2201,  2204,
    2208,  2212,  2216,  2220,  2225,  2229,  2235,  2242,  2246,  2250,
    2255,  2259,  2263,  2267,  2271,  2275,  2281,  2285,  2289,  2294,
    2298,  2301,  2304,  2306,  2310,  2315,  2320,  2325,  2330,  2335,
    2342,  2347,  2352,  2358,  2363,  2368,  2373,  2378,  2384,  2389,
    2396,  2404,  2409,  2414,  2420,  2426,  2432,  2438,  2444,  2450,
    2458,  2464,  2470,  2477,  2482,  2487,  2492,  2497,  2502,  2509,
    2514,  2519,  2525,  2531,  2537,  2543,  2549,  2556,  2562,  2570,
    2579,  2585,  2591,  2598,  2602,  2606,  2610,  2614,  2619,  2623,
    2629,  2636,  2640,  2644,  2649,  2653,  2657,  2661,  2665,  2669,
    2675,  2679,  2683,  2688,  2693,  2698,  2702,  2708,  2713,  2718,
    2721,  2725,  2732,  2739,  2741,  2743,  2745,  2748,  2751,  2754,
    2758,  2762,  2765,  2778,  2781,  2784,  2786,  2790,  2795,  2798,
    2799,  2803,  2805,  2808,  2811,  2814,  2817,  2820,  2825,  2830,
    2835,  2840,  2844,  2848,  2853,  2859,  2868,  2875,  2885,  2892,
    2900,  2911,  2923,  2936,  2946,  2952,  2959,  2963,  2969,  2975,
    2981,  2988,  2994,  2999,  3004,  3009,  3019,  3030,  3042,  3052,
    3059,  3066,  3073,  3080,  3087,  3094,  3101,  3108,  3115,  3123,
    3131,  3134,  3139,  3144,  3149,  3154,  3160,  3165,  3170,  3176,
    3182,  3186,  3191,  3196,  3201,  3209,  3219,  3226,  3237,  3249,
    3262,  3272,  3276,  3279,  3283,  3289,  3295,  3303,  3308,  3312,
    3316,  3323,  3331,  3340,  3348,  3356,  3361,  3366,  3371,  3381,
    3386,  3390,  3395,  3403,  3411,  3414,  3418,  3422,  3426,  3431,
    3434,  3437,  3442,  3447,  3458,  3462,  3467,  3469,  3473,  3476,
    3479,  3482,  3485,  3489,  3495,  3500,  3506,  3509,  3512,  3515,
    3518,  3522,  3525,  3528,  3531,  3535,  3538,  3542,  3547,  3551,
    3555,  3562,  3567,  3570,  3574,  3577,  3580,  3585,  3589,  3593,
    3596,  3600,  3602,  3605,  3607,  3610,  3613,  3616,  3620,  3622,
    3624,  3626,  3628,  3631,  3633,  3636,  3639,  3641,  3644,  3647,
    3649,  3652,  3654,  3656,  3658,  3660,  3662,  3664,  3666,  3668,
    3669,  3671,  3674,  3677,  3680,  3684,  3690,  3698,  3706,  3713,
    3719,  3725,  3732,  3739,  3746,  3752,  3759,  3766,  3773,  3780,
    3787,  3794,  3801,  3808,  3816,  3828,  3836,  3844,  3852,  3862,
    3872,  3883,  3896,  3909,  3913,  3916,  3917,  3919,  3923,  3928,
    3933,  3938,  3939,  3941,  3943,  3948,  3953,  3955,  3957,  3959,
    3961,  3963,  3965,  3967,  3969,  3972,  3974,  3976,  3978,  3982,
    3986,  3995,  4002,  4013,  4021,  4029,  4035,  4042,  4049,  4053,
    4056,  4059,  4063,  4068,  4074,  4080,  4086,  4090,  4095,  4101,
    4107,  4113,  4119,  4122,  4126,  4130,  4134,  4140,  4144,  4148,
    4152,  4156,  4160,  4165,  4171,  4177,  4183,  4189,  4193,  4198,
    4204,  4210,  4213,  4216,  4220,  4224,  4230,  4237,  4244,  4248,
    4252,  4256,  4263,  4270,  4276,  4282,  4285,  4289,  4293,  4299,
    4306,  4310,  4313,  4316,  4320,  4323,  4327,  4330,  4334,  4338,
    4344,  4351,  4354,  4357,  4360,  4363,  4365,  4370,  4375,  4377,
    4380,  4383,  4386,  4389,  4392,  4395,  4398,  4402,  4405,  4409,
    4412,  4416,  4418,  4420,  4422,  4424,  4426,  4428,  4429,  4432,
    4433,  4436,  4437,  4439,  4440,  4441,  4443,  4445,  4447,  4449,
    4451,  4459,  4468,  4471,  4478,  4481,  4488,  4491,  4495,  4498,
    4500,  4502,  4506,  4510,  4512,  4517,  4520,  4522,  4526,  4530,
    4535,  4539,  4543,  4547,  4549,  4551,  4553,  4555,  4557,  4559,
    4561,  4563,  4565,  4567,  4569,  4571,  4573,  4575,  4577,  4580,
    4581,  4582,  4585,  4592,  4600,  4603,  4605,  4609,  4611,  4615,
    4617,  4619,  4621,  4624,  4627,  4629,  4633,  4634,  4635,  4638,
    4641,  4643,  4647,  4653,  4654,  4656,  4658,  4661,  4664,  4668,
    4671,  4675,  4678,  4682,  4685,  4689,  4691,  4694,  4696,  4699,
    4701,  4704,  4706,  4709,  4711,  4714,  4716,  4719,  4721,  4724,
    4726,  4729,  4732,  4736,  4739,  4742,  4745,  4748,  4750,  4752,
    4754,  4756,  4761,  4764,  4768,  4772,  4775,  4779,  4782,  4785,
    4788,  4792,  4796,  4800,  4803,  4807,  4809,  4813,  4817,  4819,
    4822,  4825,  4828,  4831,  4841,  4848,  4850,  4852,  4854,  4856,
    4859,  4862,  4866,  4870,  4872,  4875,  4879,  4883,  4885,  4888,
    4890,  4892,  4894,  4896,  4898,  4900,  4902,  4904,  4907,  4910,
    4915,  4918,  4921,  4924,  4927,  4930,  4935,  4938,  4941,  4944,
    4947,  4950,  4955,  4957,  4960,  4963,  4966,  4970,  4972,  4974,
    4976,  4979,  4982,  4985,  4988,  4991,  4994,  4997,  5000,  5003,
    5007,  5011,  5015,  5019,  5023,  5027,  5029,  5032,  5035,  5038,
    5042,  5045,  5049,  5053,  5057,  5061,  5065,  5069,  5072,  5075,
    5078,  5081,  5084,  5087,  5090,  5093,  5096,  5099,  5102,  5105,
    5108,  5111,  5115,  5119,  5123,  5126,  5129,  5132,  5136,  5140,
    5144,  5147,  5150,  5153,  5156,  5159,  5162,  5166,  5170,  5174,
    5177,  5180,  5183,  5186,  5189,  5192,  5196,  5200,  5204,  5207,
    5210,  5213,  5216,  5219,  5222,  5225,  5228,  5231,  5235,  5239,
    5243,  5248,  5255,  5258,  5260,  5262,  5264,  5266,  5268,  5269,
    5275,  5277,  5284,  5288,  5291,  5296,  5298,  5301,  5304,  5307,
    5311,  5315,  5318,  5321,  5324,  5327,  5330,  5333,  5337,  5340,
    5343,  5347,  5349,  5353,  5358,  5361,  5363,  5366,  5372,  5379,
    5386,  5389,  5391,  5394,  5397,  5403,  5410
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     402,     0,    -1,   104,   404,    -1,    46,   439,    -1,    43,
      71,     5,    -1,    43,    71,   405,    -1,    49,   444,    -1,
      63,    -1,    69,    -1,    70,   446,    -1,    74,   327,     5,
      -1,    75,   451,    -1,    76,   453,    -1,    84,   455,    -1,
      91,   466,    -1,    93,   468,    -1,    94,   469,    -1,   103,
     405,    -1,   129,   471,    -1,   139,   472,    -1,   152,   473,
      -1,   158,   524,    -1,   162,   527,    -1,   166,    -1,   167,
     405,    -1,   167,    71,     5,    -1,   172,   612,    -1,   173,
     611,    -1,   176,   533,    -1,   182,    15,     4,    -1,   199,
     536,    -1,   203,   554,    -1,   204,   555,    -1,   205,   556,
      -1,   208,   573,   557,    -1,   209,   594,    -1,   188,   593,
      -1,   221,   610,    -1,   225,    71,     5,    -1,   247,   595,
      -1,   249,   596,    -1,   250,   599,    -1,   271,    95,    -1,
     264,   601,    -1,   262,   600,    -1,   279,    -1,   275,   573,
     603,    -1,   281,   608,    -1,   282,   609,    -1,   284,   613,
      -1,   289,   615,    -1,   305,    -1,   311,   637,    -1,   330,
       4,    -1,   331,   432,    -1,   344,    -1,   346,   639,    -1,
     353,    -1,   356,   641,    -1,   357,   642,    -1,   387,   646,
      -1,   395,   647,    -1,     3,    -1,     4,    -1,   405,    -1,
     218,   405,    -1,   251,   405,    -1,   253,   405,    -1,   357,
     405,    -1,    46,   405,    -1,    49,   405,    -1,    83,   405,
      -1,    91,   405,    -1,   159,   405,    -1,   282,   405,    -1,
       4,    -1,   390,    -1,   397,    -1,   240,    -1,   340,    -1,
     230,    -1,   398,    -1,   239,    -1,   131,    -1,    -1,   283,
      40,    -1,   148,    40,    -1,   283,    -1,   148,    -1,    -1,
     408,    -1,   403,    -1,     6,    -1,     7,    -1,     8,    -1,
       9,    -1,    10,    -1,   409,   409,    -1,   410,   411,    -1,
     411,   411,    -1,   403,   403,    -1,   177,    -1,   255,    -1,
     109,    -1,    19,    -1,   414,    -1,   357,    -1,   358,    -1,
     359,    -1,   360,    -1,   361,    -1,   362,    -1,   363,    -1,
     364,    -1,   365,    -1,   366,    -1,   367,    -1,   368,    -1,
     369,    -1,   370,    -1,   371,    -1,   372,    -1,   373,    -1,
     374,    -1,   375,    -1,   376,    -1,   377,    -1,   378,    -1,
     379,    -1,   380,    -1,   381,    -1,   382,    -1,   383,    -1,
     384,    -1,    60,    -1,   250,    -1,    -1,   391,    -1,   234,
      -1,   225,    -1,   233,    -1,   274,    -1,    -1,   315,    -1,
     222,    -1,   295,    -1,   248,    -1,    98,    -1,   193,    -1,
      73,    -1,    72,    -1,   161,    -1,   312,    -1,   111,    -1,
     127,    -1,   171,    -1,   290,    -1,    71,    -1,   202,    -1,
     197,    -1,   201,    -1,   263,    -1,   316,    -1,   317,    -1,
      29,    -1,   307,    -1,   168,    -1,   153,    -1,    31,    -1,
     292,    -1,   286,    -1,   102,    -1,   183,    -1,    -1,   141,
      -1,    36,    -1,   142,    -1,   184,    -1,   174,    -1,   150,
      -1,   116,    -1,    -1,   105,    -1,   299,    -1,    -1,   105,
      -1,    24,    -1,    25,    -1,    -1,   304,    -1,   185,    -1,
      -1,    16,    -1,   179,    -1,    -1,   177,    -1,   209,    -1,
       4,    -1,   231,    -1,    27,    -1,   242,    -1,    66,    -1,
      67,    -1,   244,    -1,    52,    -1,   243,    -1,   336,    -1,
     245,    -1,    39,    -1,    -1,    67,    -1,    52,    -1,   110,
      -1,    92,    -1,   399,    -1,    27,    -1,    55,    -1,   155,
      -1,    -1,     4,    -1,    89,    -1,   169,    -1,   257,    -1,
     258,    -1,   272,    -1,   319,    -1,    -1,    33,    -1,   323,
      -1,   210,    -1,    -1,   226,    -1,    44,    -1,    45,    -1,
     194,    -1,   195,    -1,   351,   438,    -1,    50,   435,    -1,
      81,   436,    -1,   167,   437,    -1,   212,   606,    -1,    38,
     607,    -1,   301,   433,    -1,   291,   403,    -1,   324,     4,
      -1,   332,   403,    -1,   405,    -1,    18,   403,    -1,   321,
     403,    -1,   232,   434,    -1,   405,    -1,   321,   403,    -1,
     405,    -1,    71,     5,    -1,   405,    -1,    71,     5,    -1,
     405,    -1,    71,     5,    -1,   403,   403,    -1,   259,   403,
     403,   403,   403,   403,    -1,    11,   440,    -1,    78,     5,
       5,     5,    -1,   108,     4,    -1,   130,   441,    -1,   149,
     442,    -1,    57,   308,     4,    -1,   337,   443,    -1,   134,
       5,    -1,    63,    -1,   403,   403,    -1,   403,    -1,   403,
     403,    -1,   403,    11,   403,   403,    -1,   403,   403,    11,
     403,   403,    -1,   337,   403,    -1,   337,   403,   403,    -1,
     337,   403,    11,   403,   403,    -1,   337,   403,   403,    11,
     403,   403,    -1,    33,    -1,   323,    -1,   137,    -1,   403,
     403,    11,    63,     5,     5,     5,    -1,   403,   403,     4,
     403,   403,    11,    63,     5,     5,     5,     5,    -1,   403,
     403,    11,   403,   403,     5,     5,     5,    -1,   403,   403,
       4,   403,   403,    11,   403,   403,     5,     5,     5,     5,
      -1,   403,    -1,   403,   403,    -1,   337,   445,    -1,   225,
     391,   405,    -1,   137,    -1,   403,    -1,   403,   403,    -1,
     294,   447,    -1,   219,   448,    -1,   213,   449,    -1,   348,
     403,   403,    -1,   348,   225,   225,    -1,   393,   450,    -1,
     266,   405,    -1,   154,    -1,   200,    -1,   403,    -1,   213,
      -1,   393,    -1,   392,    -1,   348,    -1,     4,   419,    -1,
     219,   419,    -1,   286,     4,    -1,   278,    -1,   403,     4,
       4,    -1,    85,   403,    -1,   286,     4,    -1,   196,     4,
      -1,     4,   403,   403,     4,     4,    -1,   282,   403,   403,
     403,   403,   403,   403,     4,     4,    -1,   172,   403,   403,
     403,   403,   403,   403,     4,     4,    -1,   173,   403,   403,
     403,   403,   403,   403,     4,     4,    -1,   221,     4,     4,
       5,     5,     5,     4,    -1,    42,    -1,   220,   452,    -1,
     121,    -1,     4,   403,   403,     4,     4,    -1,   282,   403,
     403,   403,   403,   403,   403,     4,     4,    -1,   172,   403,
     403,   403,   403,   403,   403,     4,     4,    -1,   173,   403,
     403,   403,   403,   403,   403,     4,     4,    -1,   221,     4,
       4,     5,     5,     5,     4,    -1,   418,    -1,   201,   403,
      -1,   153,   403,   403,   454,   454,   454,    -1,   403,    -1,
      31,    -1,    90,   457,    -1,   100,     4,     4,    -1,   107,
     458,    -1,   199,   459,    -1,   252,   463,    -1,   289,   464,
      -1,   322,   465,    -1,    32,   456,    -1,   224,     4,     5,
      -1,   279,     4,    -1,   279,     4,     4,    -1,   322,     4,
       4,     5,     4,     4,     4,     4,    -1,   322,     4,    16,
       5,     4,     4,     4,     4,    -1,     5,     4,     4,   462,
       4,     4,   418,   403,   460,   461,   403,   403,     5,    -1,
       5,     4,     4,   462,     4,     4,   418,   403,   403,   461,
     403,   403,     5,    -1,     5,     4,     4,   462,     4,     4,
     418,   403,   460,   403,   403,     5,    -1,     5,     4,     4,
     462,     4,     4,   418,   403,   403,   403,   403,     5,    -1,
     261,    -1,    -1,    32,    -1,    32,     4,    -1,     5,    -1,
       5,     5,     4,   405,    -1,     5,     4,   405,     5,   413,
     420,    -1,   213,    -1,   393,    -1,   392,    -1,   348,    -1,
     154,    -1,   200,    -1,   311,    -1,    49,    -1,     5,    -1,
       5,     5,     4,   405,    -1,     5,     5,     4,   405,     4,
       4,    -1,     5,   413,   420,    -1,    32,     5,   413,   420,
      -1,    32,     4,     5,   413,   420,    -1,    69,    -1,     4,
      69,    -1,     4,     5,     4,     4,    -1,     4,     5,     4,
       4,     4,     4,    -1,    -1,   403,   403,   403,   403,   413,
     420,    -1,    63,   412,   413,   420,   403,   403,   413,   422,
      -1,   331,   467,    -1,    42,   403,   403,    -1,   220,   403,
     403,    -1,   121,   403,   403,    -1,    -1,   403,   403,   413,
     420,    -1,    42,   403,   403,     4,    -1,   220,   403,   403,
       4,    -1,   121,   403,   403,     4,    -1,   415,   403,   403,
      -1,   413,   420,   412,    -1,   405,    -1,   356,   403,   403,
      -1,    42,   220,   415,   403,   403,    -1,   220,   415,   403,
     403,    -1,    42,   220,   413,   412,    -1,   220,   413,   412,
      -1,    34,     4,    -1,    -1,    33,    -1,   323,    -1,   210,
      -1,   403,    -1,    69,    -1,   162,   128,     5,    -1,   180,
       5,    -1,    -1,    43,    71,    -1,    46,   476,    -1,    49,
     478,    -1,    70,   479,    -1,    75,   483,    -1,    74,   482,
      -1,    76,   485,    -1,    84,   487,    -1,    86,   490,    -1,
      91,   491,    -1,    93,   492,    -1,    95,   494,    -1,    94,
     493,    -1,   101,   495,    -1,   103,    -1,   138,   499,    -1,
     158,   505,    -1,   167,    71,    -1,   169,     5,     5,     4,
      -1,   170,    96,   474,    -1,   172,   513,    -1,   173,   512,
      -1,   176,   497,    -1,   180,   496,    -1,   182,    15,    -1,
     213,    -1,   208,   573,   567,    -1,   209,   507,    -1,   188,
     506,    -1,   221,   511,    -1,   225,    71,    -1,   247,    -1,
     249,   509,    -1,   256,   326,   415,   403,   403,     4,     4,
       5,    -1,   282,   510,    -1,   284,    -1,   311,   514,    -1,
     330,    -1,   331,   515,    -1,   341,    -1,   349,   415,   403,
     403,    -1,   355,    96,   475,    -1,   357,   522,    -1,   395,
      -1,     5,     5,   403,   403,   415,     4,   470,    -1,     5,
       5,   403,   403,   413,   420,     4,   470,    -1,     5,     5,
     403,   403,   415,     4,   470,    -1,     5,     5,   403,   403,
     413,   420,     4,   470,    -1,   108,    -1,   130,    -1,   149,
      -1,    57,   308,    -1,    95,    -1,   134,    -1,    78,   477,
      -1,   198,    -1,    -1,   213,     5,    -1,   112,     5,    -1,
     130,    -1,   225,   391,    -1,    -1,   460,   461,    -1,   403,
     461,    -1,   294,    -1,   219,    -1,   213,   480,    -1,   348,
     192,    -1,   393,   481,    -1,   266,    -1,   219,    -1,   286,
      -1,    85,    -1,   286,    -1,   196,    -1,    -1,   327,    -1,
     192,   484,    -1,     4,    -1,     4,   415,   403,   403,    -1,
       4,   403,   403,   418,   403,    -1,    -1,   192,   486,    -1,
     201,    -1,   153,    -1,     4,   403,   403,   418,   403,    -1,
     413,   420,    -1,    32,    88,    -1,    70,   488,    -1,    71,
      -1,    99,    -1,   100,    -1,   192,    -1,   237,   192,    -1,
     212,    -1,    76,   489,    -1,   311,    -1,   322,    -1,   322,
       4,    -1,    32,    -1,    32,   322,     4,    -1,   386,    -1,
      -1,   219,    -1,   294,    -1,    -1,   201,    -1,   403,   403,
     413,   420,   421,    -1,   415,   403,   403,   413,   420,   421,
      -1,   413,   420,   421,    -1,    63,   413,   420,   421,   413,
     422,    -1,   331,   413,   420,    -1,   415,    -1,   413,   420,
     421,    -1,   320,    -1,    34,    -1,   415,    -1,   413,   420,
     421,    -1,   413,   420,   412,   403,   403,     5,    -1,     4,
     413,   420,   412,   403,   403,     5,    -1,   415,   403,   403,
       4,     4,    -1,     5,   406,    -1,    70,    -1,   415,   403,
     403,     5,   406,    -1,     4,     4,     4,     4,    -1,    95,
      -1,   132,   224,   498,    -1,    -1,     4,    -1,   403,   403,
      -1,   227,    -1,    63,   413,   420,   421,    -1,    88,    -1,
     108,   502,    -1,    47,    -1,   128,   500,    -1,   132,   224,
     503,    -1,   164,   501,    -1,   165,    -1,   238,   224,    -1,
     308,    -1,   308,   413,   420,   422,    -1,   309,   504,    -1,
     386,    -1,     4,    -1,   415,   403,   403,    -1,     4,    -1,
     186,     5,    -1,     4,   186,     5,    -1,   357,     4,    -1,
      -1,     4,    -1,   406,    -1,   406,   415,   403,   403,    -1,
     406,     4,    -1,    -1,     4,    -1,   146,   177,   413,    -1,
     146,   177,     4,   413,    -1,   337,   177,   403,   413,    -1,
      -1,   246,    -1,   350,    -1,    88,    -1,   189,    -1,    71,
     508,    -1,    48,   508,    -1,   335,   508,    -1,   351,   508,
      -1,    71,    -1,   207,    -1,   274,    -1,   325,    -1,   335,
      -1,    88,    -1,    48,    -1,    -1,     4,    -1,   266,    -1,
      65,    -1,   325,    -1,   351,    -1,   325,    -1,    65,    -1,
     325,    -1,   351,    -1,    65,    -1,   325,    -1,   351,    -1,
     149,    -1,   273,    -1,   273,   214,    -1,   306,    -1,   306,
     214,    -1,    21,    -1,   351,   521,    -1,    50,   518,    -1,
      81,   519,    -1,   167,   520,    -1,   212,    -1,    38,    -1,
     301,   516,    -1,   291,    -1,    -1,    18,    -1,   321,    -1,
     232,   517,    -1,    -1,   321,    -1,    -1,    71,    -1,    -1,
      71,    -1,    -1,    71,    -1,    -1,   259,    -1,    -1,    15,
     523,    -1,   224,   414,    -1,    -1,   260,    -1,    90,   525,
      -1,   107,    -1,   413,   420,   421,   526,     5,     5,    -1,
     413,   420,   421,   526,     5,    -1,    20,    -1,   269,    -1,
      19,    -1,    43,    71,    -1,    46,   528,    -1,    84,   529,
      -1,    91,    -1,   102,    -1,   103,    -1,   109,    -1,   138,
     530,    -1,   158,    -1,   176,    -1,   183,    -1,   208,   531,
      -1,   255,    -1,   177,    -1,   311,    -1,   325,   413,    -1,
     357,   532,    -1,    79,     5,    -1,    -1,    32,    -1,    -1,
      46,    -1,    94,    -1,   218,    -1,   167,    -1,   297,    -1,
     252,    -1,   342,    -1,   413,    -1,    62,   413,    -1,   125,
     413,    -1,   197,   413,    -1,    17,    -1,   331,   413,    -1,
     228,     4,     4,    -1,   126,    -1,   211,     5,    -1,    95,
     535,    -1,   298,   132,   224,   534,    -1,   298,     4,     4,
       4,     4,    -1,   346,    -1,   357,   403,   403,   403,   403,
     403,   403,   403,   403,     4,    -1,     5,    -1,     5,     4,
      -1,     4,     4,    60,    -1,     4,     4,   413,    -1,   219,
     405,    -1,    26,   537,    -1,   122,   539,    -1,   138,   540,
      -1,   179,   553,    -1,   236,   551,    -1,   254,   552,    -1,
       5,     5,    -1,     5,    13,     5,   425,    -1,     5,    14,
       5,   425,    -1,     5,    65,     5,   425,    -1,     5,   216,
     425,    -1,     5,   217,   425,    -1,     5,   302,   423,     4,
     425,    -1,     5,   313,     4,   425,    -1,     5,   314,     4,
     425,    -1,     5,   350,     5,   425,    -1,   282,    94,   538,
      -1,   173,    94,   538,    -1,   172,    94,   538,    -1,     5,
      13,     5,    -1,     5,    14,     5,    -1,     5,    65,     5,
      -1,     5,   216,    -1,     5,   217,    -1,     5,   302,   423,
       4,    -1,     5,   313,     4,    -1,     5,   314,     4,    -1,
       5,   350,     5,    -1,     5,     5,   310,    -1,     5,    13,
       5,   425,    -1,     5,    14,     5,   425,    -1,     5,    65,
       5,   425,    -1,     5,   216,   424,   425,    -1,     5,     5,
     310,   424,   425,    -1,     5,   217,   424,   425,    -1,     5,
     302,   423,     4,   424,   425,    -1,     5,   318,   423,     4,
       4,   424,   425,    -1,     5,   313,     4,   425,    -1,     5,
     314,     4,   425,    -1,     5,   350,     5,   424,   425,    -1,
     309,   541,    -1,   128,    94,   542,    -1,   282,   177,   550,
      -1,   282,    94,   549,    -1,   173,   177,   550,    -1,   173,
      94,   549,    -1,   172,   177,   550,    -1,   172,    94,   549,
      -1,   218,   543,    -1,     5,    13,     5,    -1,     5,    14,
       5,    -1,     5,    65,     5,    -1,     5,   216,   424,    -1,
       5,     5,   310,   424,    -1,     5,   217,   424,    -1,     5,
     302,   423,     4,   424,    -1,     5,   318,   423,     4,     4,
     424,    -1,     5,   313,     4,    -1,     5,   314,     4,    -1,
       5,   350,     5,   424,    -1,     5,    13,     5,    -1,     5,
      14,     5,    -1,     5,    65,     5,    -1,     5,   216,   424,
      -1,     5,   217,   424,    -1,     5,   302,   423,     4,   424,
      -1,     5,   313,     4,    -1,     5,   314,     4,    -1,     5,
     350,     5,   424,    -1,   177,   182,   544,    -1,   182,   545,
      -1,   177,   546,    -1,   548,    -1,   177,   385,   547,    -1,
       5,    13,     5,   425,    -1,     5,    14,     5,   425,    -1,
       5,    65,     5,   425,    -1,     5,   216,   424,   425,    -1,
       5,   217,   424,   425,    -1,     5,   302,   423,     4,   424,
     425,    -1,     5,   313,     4,   425,    -1,     5,   314,     4,
     425,    -1,     5,   350,     5,   424,   425,    -1,     5,    13,
       5,   425,    -1,     5,    14,     5,   425,    -1,     5,    65,
       5,   425,    -1,     5,   216,   424,   425,    -1,     5,     5,
     310,   424,   425,    -1,     5,   217,   424,   425,    -1,     5,
     302,   423,     4,   424,   425,    -1,     5,   318,   423,     4,
       4,   424,   425,    -1,     5,   313,     4,   425,    -1,     5,
     314,     4,   425,    -1,     5,   350,     5,   424,   425,    -1,
     414,     5,    13,     5,   425,    -1,   414,     5,    14,     5,
     425,    -1,   414,     5,    65,     5,   425,    -1,   414,     5,
     216,   424,   425,    -1,   414,     5,   217,   424,   425,    -1,
     414,     5,   302,   423,     4,   424,   425,    -1,   414,     5,
     313,     4,   425,    -1,   414,     5,   314,     4,   425,    -1,
     414,     5,   350,     5,   424,   425,    -1,     5,    13,     5,
     425,    -1,     5,    14,     5,   425,    -1,     5,    65,     5,
     425,    -1,     5,   216,   424,   425,    -1,     5,   217,   424,
     425,    -1,     5,   302,   423,     4,   424,   425,    -1,     5,
     313,     4,   425,    -1,     5,   314,     4,   425,    -1,     5,
     350,     5,   424,   425,    -1,   414,     5,    13,     5,   425,
      -1,   414,     5,    14,     5,   425,    -1,   414,     5,    65,
       5,   425,    -1,   414,     5,   216,   424,   425,    -1,   414,
       5,     5,   310,   424,   425,    -1,   414,     5,   217,   424,
     425,    -1,   414,     5,   302,   423,     4,   424,   425,    -1,
     414,     5,   318,   423,     4,     4,   424,   425,    -1,   414,
       5,   313,     4,   425,    -1,   414,     5,   314,     4,   425,
      -1,   414,     5,   350,     5,   424,   425,    -1,     5,    13,
       5,    -1,     5,    14,     5,    -1,     5,    65,     5,    -1,
       5,   216,   424,    -1,     5,     5,   310,   424,    -1,     5,
     217,   424,    -1,     5,   302,   423,     4,   424,    -1,     5,
     318,   423,     4,     4,   424,    -1,     5,   313,     4,    -1,
       5,   314,     4,    -1,     5,   350,     5,   424,    -1,     5,
      13,     5,    -1,     5,    14,     5,    -1,     5,    65,     5,
      -1,     5,   216,   424,    -1,     5,   217,   424,    -1,     5,
     302,   423,     4,   424,    -1,     5,   313,     4,    -1,     5,
     314,     4,    -1,     5,   350,     5,   424,    -1,     5,    13,
       5,   425,    -1,     5,    65,     5,   425,    -1,     5,   216,
     425,    -1,     5,   302,   423,     4,   425,    -1,     5,   313,
       4,   425,    -1,     5,   350,     5,   425,    -1,     5,     5,
      -1,   309,     5,     5,    -1,   101,     4,     4,     4,     4,
       4,    -1,   213,     4,     4,     4,     4,     4,    -1,   121,
      -1,   265,    -1,   405,    -1,   156,   405,    -1,    95,   405,
      -1,    71,     5,    -1,     5,     4,     4,    -1,   346,   403,
     403,    -1,   395,   403,    -1,     5,     5,   414,   420,     5,
       5,   414,   420,   403,   414,   422,     5,    -1,    64,   560,
      -1,    71,     5,    -1,    87,    -1,    80,   566,     5,    -1,
      80,   566,   350,     5,    -1,    82,   107,    -1,    -1,    90,
     558,   561,    -1,    96,    -1,   107,   564,    -1,   115,   565,
      -1,   124,     4,    -1,   143,     5,    -1,   167,    16,    -1,
     167,   241,   403,   403,    -1,   167,   338,   403,   403,    -1,
       4,    20,   429,   405,    -1,    20,   319,    59,     5,    -1,
      20,   319,    59,    -1,     4,    21,   408,    -1,     4,    21,
     408,   415,    -1,     4,    21,   408,   413,   420,    -1,     4,
      22,   273,   403,   403,     4,   413,   422,    -1,     4,    22,
     273,     5,   413,   422,    -1,     4,    53,   273,   403,   403,
     403,     4,   413,   422,    -1,     4,    53,   273,     5,   413,
     422,    -1,     4,    52,   273,   403,   403,   413,   422,    -1,
       4,    56,   115,   408,   408,     4,   403,   403,   403,     4,
      -1,     4,    56,   115,   408,   408,     4,   403,   403,   403,
       4,   415,    -1,     4,    56,   115,   408,   408,     4,   403,
     403,   403,     4,   413,   420,    -1,     4,    56,   115,     5,
       5,   413,   420,   413,   422,    -1,     4,    59,   559,     5,
       5,    -1,     4,    67,   273,   403,   413,   422,    -1,     4,
      71,     5,    -1,     4,    81,    27,   405,   405,    -1,     4,
      81,   121,   426,   426,    -1,     4,    81,   187,     5,     5,
      -1,     4,    81,   273,   403,   413,   422,    -1,     4,    81,
     325,   413,   420,    -1,     4,    82,   154,   405,    -1,     4,
      82,    28,   405,    -1,     4,    82,   341,     5,    -1,     4,
      89,   115,   408,   408,     4,   403,   403,     4,    -1,     4,
      89,   115,   408,   408,     4,   403,   403,     4,   415,    -1,
       4,    89,   115,   408,   408,     4,   403,   403,     4,   413,
     420,    -1,     4,    89,   115,     5,     5,   413,   420,   413,
     422,    -1,     4,    90,    22,   273,   403,   403,    -1,     4,
      90,    53,   273,   403,   403,    -1,     4,    90,    56,    21,
     403,   403,    -1,     4,    90,    56,   273,   403,   403,    -1,
       4,    90,   120,   273,   403,   403,    -1,     4,    90,   123,
      21,   403,   403,    -1,     4,    90,   123,   273,   403,   403,
      -1,     4,    90,    89,    21,   403,   403,    -1,     4,    90,
      89,   273,   403,   403,    -1,     4,    90,   261,   354,     4,
     403,   403,    -1,     4,    90,   296,   354,     4,   403,   403,
      -1,     4,   107,    -1,     4,   107,    22,     4,    -1,     4,
     107,    53,     4,    -1,     4,   107,    56,     4,    -1,     4,
     107,   120,     4,    -1,     4,   107,    59,   559,     5,    -1,
       4,   107,   123,     4,    -1,     4,   107,    89,     4,    -1,
       4,   107,   261,   354,     4,    -1,     4,   107,   296,   354,
       4,    -1,     4,   107,   327,    -1,     4,   107,   327,     5,
      -1,     4,   107,   327,     4,    -1,     4,   115,    42,     4,
      -1,     4,   119,   273,   403,   403,   413,   422,    -1,     4,
     120,   273,   403,   403,   403,     4,   413,   422,    -1,     4,
     120,   273,     5,   413,   422,    -1,     4,   123,   115,   408,
     408,     4,   403,   403,   403,     4,    -1,     4,   123,   115,
     408,   408,     4,   403,   403,   403,     4,   415,    -1,     4,
     123,   115,   408,   408,     4,   403,   403,   403,     4,   413,
     420,    -1,     4,   123,   115,     5,     5,   413,   420,   413,
     422,    -1,     4,   143,     5,    -1,     4,   167,    -1,     4,
     167,   241,    -1,     4,   196,    27,   405,   405,    -1,     4,
     196,   121,   426,   426,    -1,     4,   196,   259,   413,   420,
     412,   412,    -1,     4,   223,   403,   403,    -1,     4,   223,
     147,    -1,     4,   223,    37,    -1,     4,   223,   337,   413,
     420,   412,    -1,     4,   261,   259,   413,   420,   421,     5,
      -1,     4,   261,   259,   413,   420,   421,   350,     5,    -1,
       4,   261,   279,   403,   403,   413,   422,    -1,     4,   296,
     279,   403,   403,   413,   422,    -1,     4,   259,   300,   427,
      -1,     4,   259,   308,     4,    -1,     4,   259,   155,     5,
      -1,     4,   267,   413,   420,   412,   412,   403,   413,   422,
      -1,     4,   268,   579,   405,    -1,     4,   284,    42,    -1,
       4,   285,   144,     5,    -1,     4,   285,   259,   413,   420,
     412,   412,    -1,     4,   285,   325,   413,   420,   413,   422,
      -1,     4,   297,    -1,     4,   297,   241,    -1,     4,   327,
       5,    -1,     4,   329,     5,    -1,     4,   329,   284,   405,
      -1,     4,   343,    -1,     4,   345,    -1,     4,   352,    27,
     405,    -1,     4,   352,   121,   426,    -1,     4,   352,   259,
     413,   420,   412,   413,   422,   403,   408,    -1,     4,   386,
       4,    -1,     4,   100,     4,     4,    -1,   185,    -1,   185,
     403,   403,    -1,   198,   574,    -1,   199,   575,    -1,   223,
     576,    -1,   266,   405,    -1,   268,   579,   405,    -1,   268,
     579,   405,   403,   403,    -1,   284,    42,   403,   403,    -1,
     284,   220,   403,   403,     4,    -1,   284,   121,    -1,   289,
     583,    -1,   297,   584,    -1,   305,   585,    -1,     5,    71,
       5,    -1,     5,    87,    -1,     5,   107,    -1,     5,    96,
      -1,     5,   143,     5,    -1,     5,   167,    -1,     5,   167,
     241,    -1,     5,   223,   403,   403,    -1,     5,   223,   147,
      -1,     5,   223,    37,    -1,     5,   223,   337,   413,   420,
     412,    -1,     5,   268,   579,   405,    -1,     5,   297,    -1,
       5,   297,   241,    -1,     5,   343,    -1,     5,   345,    -1,
     327,   115,     5,     5,    -1,   327,   107,     5,    -1,   327,
     107,    16,    -1,   327,     5,    -1,   327,   346,     5,    -1,
     252,    -1,   252,   413,    -1,   342,    -1,   343,    16,    -1,
     345,    16,    -1,   386,     4,    -1,   100,     4,     4,    -1,
     297,    -1,   345,    -1,   167,    -1,   343,    -1,    42,   223,
      -1,   223,    -1,   121,   223,    -1,    42,   115,    -1,   115,
      -1,   121,   115,    -1,    42,   284,    -1,   284,    -1,   121,
     284,    -1,   107,    -1,   329,    -1,    71,    -1,   386,    -1,
     268,    -1,   143,    -1,   185,    -1,   346,    -1,    -1,     4,
      -1,    31,   405,    -1,   273,   403,    -1,   181,     4,    -1,
     246,     4,   403,    -1,    67,   403,   403,   403,   580,    -1,
     119,   403,   403,   403,   403,   407,   580,    -1,    52,   403,
     403,   403,   403,   407,   580,    -1,   261,   403,   403,   403,
     403,   580,    -1,   261,    60,   350,     5,   580,    -1,   296,
      60,   350,     5,   580,    -1,   296,   403,   403,   403,   403,
     580,    -1,   196,   403,   403,   403,   403,   580,    -1,   352,
     403,   403,   403,   403,   580,    -1,   329,   403,   403,   407,
     580,    -1,    67,   259,   403,   403,   428,   580,    -1,    52,
     259,   403,   403,   428,   580,    -1,   110,   259,   403,   403,
     428,   580,    -1,    92,   259,   403,   403,   428,   580,    -1,
     399,   259,   403,   403,   428,   580,    -1,    27,   259,   403,
     403,   428,   580,    -1,    55,   259,   403,   403,   428,   580,
      -1,   155,   259,   403,   403,     5,   580,    -1,   155,   259,
     403,   403,     4,     5,   580,    -1,   285,   403,   403,   403,
     403,   413,   420,   413,   422,     5,   580,    -1,    81,   403,
     403,   403,   413,   420,   580,    -1,   267,   403,   403,   403,
     403,   403,   580,    -1,    22,   403,   403,   403,   403,     4,
     580,    -1,   120,   403,   403,   403,   403,   403,     4,   407,
     580,    -1,    53,   403,   403,   403,   403,   403,     4,   407,
     580,    -1,    89,   403,   403,   408,   408,     4,   403,   403,
       4,   580,    -1,   123,   403,   403,   408,   408,     4,   403,
     403,   403,     4,   407,   580,    -1,    56,   403,   403,   408,
     408,     4,   403,   403,   403,     4,   407,   580,    -1,    82,
     562,   580,    -1,   328,   563,    -1,    -1,     4,    -1,     5,
     403,   403,    -1,   350,     5,   403,   403,    -1,   403,   403,
     350,     5,    -1,     5,   413,   420,   412,    -1,    -1,   297,
      -1,    16,    -1,    42,   403,   403,     4,    -1,   220,   403,
     403,     4,    -1,   121,    -1,   114,    -1,   388,    -1,    68,
      -1,   288,    -1,   287,    -1,   270,    -1,   389,    -1,    64,
     568,    -1,    71,    -1,   143,    -1,   124,    -1,   160,   403,
     403,    -1,   175,   403,   403,    -1,     4,    20,    89,     5,
       5,     5,   413,     4,    -1,     4,    20,   169,     5,     5,
       4,    -1,     4,    20,   257,     5,     5,     5,     5,   413,
     420,   430,    -1,     4,    20,   258,     5,     5,   413,   430,
      -1,     4,    20,   272,     5,     5,     5,   413,    -1,     4,
      20,   319,   413,   420,    -1,     4,    20,   319,   101,   413,
     420,    -1,    20,   319,    16,   101,   413,   420,    -1,    20,
     319,   396,    -1,   175,    16,    -1,     4,    21,    -1,     4,
      21,   415,    -1,     4,    21,   413,   420,    -1,     4,    22,
     273,   413,   422,    -1,     4,    53,   273,   413,   422,    -1,
       4,    52,   273,   413,   422,    -1,     4,    56,    21,    -1,
       4,    56,    21,   415,    -1,     4,    56,    21,   413,   420,
      -1,     4,    56,   273,   413,   422,    -1,     4,    63,   413,
     420,   421,    -1,     4,    67,   273,   413,   422,    -1,     4,
      71,    -1,     4,    81,    27,    -1,     4,    81,   121,    -1,
       4,    81,   187,    -1,     4,    81,   273,   413,   422,    -1,
       4,    81,   325,    -1,     4,    82,   154,    -1,     4,    82,
      28,    -1,     4,    82,   341,    -1,     4,    89,    21,    -1,
       4,    89,    21,   415,    -1,     4,    89,    21,   413,   420,
      -1,     4,    89,   273,   413,   422,    -1,     4,   119,   273,
     413,   422,    -1,     4,   120,   273,   413,   422,    -1,     4,
     123,    21,    -1,     4,   123,    21,   415,    -1,     4,   123,
      21,   413,   420,    -1,     4,   123,   273,   413,   422,    -1,
       4,   143,    -1,     4,   167,    -1,     4,   196,    27,    -1,
       4,   196,   121,    -1,     4,   196,   191,   413,   422,    -1,
       4,   196,   259,   413,   420,   421,    -1,     4,   206,   191,
     403,   413,   422,    -1,     4,   259,   300,    -1,     4,   259,
     308,    -1,     4,   259,   155,    -1,     4,   261,   259,   413,
     420,   421,    -1,     4,   267,   259,   413,   420,   421,    -1,
       4,   267,   191,   413,   422,    -1,     4,   267,   333,   413,
     422,    -1,     4,   268,    -1,     4,   268,   579,    -1,     4,
     285,   144,    -1,     4,   285,   191,   413,   422,    -1,     4,
     285,   259,   413,   420,   421,    -1,     4,   285,   325,    -1,
       4,   297,    -1,     4,   327,    -1,     4,   327,     4,    -1,
       4,   329,    -1,     4,   329,   284,    -1,     4,   341,    -1,
       4,   352,    27,    -1,     4,   352,   121,    -1,     4,   352,
     191,   413,   422,    -1,     4,   352,   259,   413,   420,   421,
      -1,     4,   386,    -1,     4,   100,    -1,   167,   569,    -1,
     167,   237,    -1,   237,    -1,   261,   296,   403,   403,    -1,
     296,   296,   403,   403,    -1,   266,    -1,   268,   579,    -1,
     297,   570,    -1,   297,   237,    -1,   305,   571,    -1,     5,
      71,    -1,     5,   143,    -1,     5,   175,    -1,     5,   268,
     579,    -1,     5,   327,    -1,     5,   327,   237,    -1,   327,
      16,    -1,   327,   106,   224,    -1,   386,    -1,   100,    -1,
      31,    -1,   273,    -1,   181,    -1,   246,    -1,    -1,   403,
     403,    -1,    -1,   403,   403,    -1,    -1,   329,    -1,    -1,
      -1,   260,    -1,   275,    -1,   348,    -1,    61,    -1,   145,
      -1,   566,   413,   420,   421,   405,   581,   588,    -1,   297,
     566,   413,   420,   421,   405,   581,   588,    -1,   566,     5,
      -1,   566,     5,     4,     5,   413,   420,    -1,   566,     4,
      -1,   566,     4,     4,     5,   413,   420,    -1,   138,     5,
      -1,   138,     5,     5,    -1,   403,   403,    -1,   147,    -1,
      37,    -1,    42,   403,   403,    -1,   220,   403,   403,    -1,
     121,    -1,   337,   413,   420,   412,    -1,   577,   578,    -1,
     578,    -1,   579,   400,   405,    -1,    71,   400,     5,    -1,
     100,   400,     4,     4,    -1,   386,   400,     4,    -1,   143,
     400,     5,    -1,   329,   400,     5,    -1,   591,    -1,   592,
      -1,   231,    -1,   297,    -1,   167,    -1,    99,    -1,   140,
      -1,   115,    -1,   223,    -1,   284,    -1,   107,    -1,   178,
      -1,   315,    -1,   133,    -1,   572,    -1,   572,   577,    -1,
      -1,    -1,   582,   586,    -1,     5,   566,   413,   420,   421,
     405,    -1,   297,     5,   566,   413,   420,   421,   405,    -1,
     328,     5,    -1,    16,    -1,   241,   403,   403,    -1,   338,
      -1,   338,   403,   403,    -1,   135,    -1,   190,    -1,   405,
      -1,   329,   405,    -1,   586,   587,    -1,   587,    -1,   579,
     400,   405,    -1,    -1,    -1,   589,   590,    -1,   590,   591,
      -1,   591,    -1,   327,   400,     5,    -1,    59,   400,   559,
       5,     5,    -1,    -1,    90,    -1,     4,    -1,   189,     4,
      -1,    71,     5,    -1,     4,    71,     5,    -1,    48,   417,
      -1,     4,    48,   417,    -1,   335,   403,    -1,     4,   335,
     403,    -1,   351,   405,    -1,     4,   351,   405,    -1,   305,
      -1,     4,   305,    -1,   166,    -1,     4,   166,    -1,   107,
      -1,     4,   107,    -1,   347,    -1,     4,   347,    -1,   113,
      -1,     4,   113,    -1,   334,    -1,     4,   334,    -1,    51,
      -1,     4,    51,    -1,    69,    -1,    71,     5,    -1,   207,
     416,    -1,   274,   403,   403,    -1,   325,   413,    -1,   335,
     403,    -1,    48,   417,    -1,   207,     4,    -1,   399,    -1,
     397,    -1,   389,    -1,   231,    -1,   403,   403,   403,   403,
      -1,   403,   403,    -1,   415,   403,   403,    -1,   413,   420,
     412,    -1,   337,   597,    -1,    41,   403,   403,    -1,   220,
     598,    -1,   266,   405,    -1,   403,   403,    -1,   415,   403,
     403,    -1,   413,   420,   412,    -1,    42,   403,   403,    -1,
     403,   403,    -1,   121,   403,   403,    -1,   405,    -1,   357,
     414,   420,    -1,     5,     4,     4,    -1,   346,    -1,    77,
     602,    -1,   192,     4,    -1,   280,     4,    -1,   291,   403,
      -1,     4,     4,     4,     4,     4,     4,     4,     4,     4,
      -1,     4,     4,     4,     4,     4,     4,    -1,    58,    -1,
     157,    -1,   282,    -1,    97,    -1,   167,   604,    -1,   297,
     605,    -1,    42,   403,   403,    -1,   220,   403,   403,    -1,
     121,    -1,   303,   121,    -1,    42,   403,   403,    -1,   220,
     403,   403,    -1,   121,    -1,   303,   121,    -1,   215,    -1,
      12,    -1,   136,    -1,   231,    -1,    35,    -1,   117,    -1,
       4,    -1,    69,    -1,    65,     5,    -1,   325,   413,    -1,
     351,     4,     4,     4,    -1,   325,   413,    -1,    65,     5,
      -1,    65,   171,    -1,    65,   290,    -1,   325,   413,    -1,
     351,     4,     4,     4,    -1,    65,     5,    -1,    65,   171,
      -1,    65,   290,    -1,    65,   349,    -1,   325,   413,    -1,
     351,     4,     4,     4,    -1,   403,    -1,   403,   105,    -1,
     220,   614,    -1,   337,   403,    -1,   337,   403,   105,    -1,
      42,    -1,   403,    -1,   121,    -1,    26,   617,    -1,   138,
     618,    -1,   394,   616,    -1,   236,   635,    -1,   122,   636,
      -1,   254,     5,    -1,   132,     5,    -1,    65,     5,    -1,
     313,     4,    -1,   132,     5,   431,    -1,    65,     5,   431,
      -1,   313,     4,   431,    -1,   282,    94,   625,    -1,   173,
      94,   628,    -1,   172,    94,   631,    -1,   619,    -1,   177,
     619,    -1,   326,   620,    -1,   309,   621,    -1,   128,    94,
     622,    -1,   218,   623,    -1,   282,   177,   626,    -1,   282,
      94,   627,    -1,   173,   177,   629,    -1,   173,    94,   630,
      -1,   172,   177,   632,    -1,   172,    94,   633,    -1,   277,
     634,    -1,   132,     5,    -1,    65,     5,    -1,   313,     4,
      -1,   132,     5,    -1,    65,     5,    -1,   313,     4,    -1,
     132,     5,    -1,    65,     5,    -1,   313,     4,    -1,   132,
       5,    -1,    65,     5,    -1,   313,     4,    -1,   177,   624,
      -1,   132,     5,     4,    -1,    65,     5,     4,    -1,   313,
       4,     4,    -1,   132,     5,    -1,    65,     5,    -1,   313,
       4,    -1,   132,     5,   431,    -1,    65,     5,   431,    -1,
     313,     4,   431,    -1,   132,     5,    -1,    65,     5,    -1,
     313,     4,    -1,   132,     5,    -1,    65,     5,    -1,   313,
       4,    -1,   132,     5,   431,    -1,    65,     5,   431,    -1,
     313,     4,   431,    -1,   132,     5,    -1,    65,     5,    -1,
     313,     4,    -1,   132,     5,    -1,    65,     5,    -1,   313,
       4,    -1,   132,     5,   431,    -1,    65,     5,   431,    -1,
     313,     4,   431,    -1,   132,     5,    -1,    65,     5,    -1,
     313,     4,    -1,   132,     5,    -1,    65,     5,    -1,   313,
       4,    -1,   132,     5,    -1,    65,     5,    -1,   313,     4,
      -1,   132,     5,   431,    -1,    65,     5,   431,    -1,   313,
       4,   431,    -1,   132,     5,     5,   431,    -1,   638,     4,
       4,   403,   403,   408,    -1,   638,     4,    -1,   107,    -1,
      54,    -1,   339,    -1,   151,    -1,   118,    -1,    -1,     4,
     403,   403,   403,   403,    -1,   235,    -1,   235,     4,   403,
     403,   403,   403,    -1,   138,   309,   640,    -1,   138,    63,
      -1,   138,    63,   403,   403,    -1,     4,    -1,     4,     4,
      -1,   403,   413,    -1,   403,   403,    -1,   337,   403,   403,
      -1,   414,   420,   421,    -1,    15,   645,    -1,   279,     4,
      -1,   276,   644,    -1,    23,   643,    -1,     4,     4,    -1,
       4,     5,    -1,   329,     4,     5,    -1,     4,     4,    -1,
       4,     5,    -1,   329,     4,     5,    -1,     4,    -1,     4,
     414,   420,    -1,   337,     4,   414,   420,    -1,   260,    69,
      -1,   265,    -1,   403,   403,    -1,   403,   403,    11,   403,
     403,    -1,   403,   403,    11,   415,   403,   403,    -1,   403,
     403,    11,   413,   420,   412,    -1,   337,   648,    -1,   137,
      -1,   137,   403,    -1,   403,   403,    -1,   403,   403,    11,
     403,   403,    -1,   403,   403,    11,   415,   403,   403,    -1,
     403,   403,    11,   413,   420,   412,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   509,   509,   510,   511,   512,   513,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   528,   529,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   545,   546,
     547,   548,   549,   550,   551,   552,   553,   554,   555,   556,
     557,   558,   559,   560,   561,   562,   563,   564,   565,   566,
     567,   568,   571,   572,   575,   576,   577,   578,   579,   580,
     581,   582,   583,   584,   585,   588,   590,   591,   592,   593,
     595,   596,   597,   598,   601,   602,   603,   604,   605,   608,
     609,   612,   613,   614,   617,   620,   623,   626,   638,   645,
     652,   660,   661,   662,   663,   664,   667,   668,   669,   670,
     671,   672,   673,   674,   675,   676,   677,   678,   679,   680,
     681,   682,   683,   684,   685,   686,   687,   688,   689,   690,
     691,   692,   693,   694,   697,   698,   701,   702,   703,   704,
     705,   706,   709,   710,   711,   712,   713,   714,   715,   716,
     717,   718,   719,   720,   721,   722,   723,   724,   725,   728,
     729,   730,   731,   732,   733,   734,   735,   736,   739,   740,
     741,   742,   743,   746,   747,   748,   749,   750,   751,   752,
     753,   756,   757,   758,   761,   762,   763,   764,   767,   768,
     769,   772,   773,   774,   777,   778,   779,   783,   784,   785,
     786,   787,   788,   789,   790,   791,   792,   793,   794,   797,
     798,   799,   800,   801,   802,   803,   804,   805,   808,   809,
     812,   813,   814,   815,   816,   817,   820,   821,   822,   823,
     826,   827,   828,   829,   830,   831,   834,   835,   836,   837,
     838,   839,   840,   841,   842,   843,   847,   848,   849,   850,
     853,   854,   857,   858,   861,   862,   865,   866,   869,   870,
     874,   875,   876,   877,   878,   879,   880,   881,   884,   885,
     888,   889,   890,   892,   894,   895,   896,   898,   902,   903,
     906,   907,   909,   912,   914,   920,   921,   922,   923,   926,
     927,   928,   931,   932,   933,   934,   935,   936,   937,   943,
     944,   947,   948,   949,   950,   951,   954,   955,   956,   957,
     960,   961,   966,   971,   978,   980,   982,   984,   986,   988,
     989,   990,   993,   995,   997,   999,  1001,  1004,  1005,  1006,
    1010,  1011,  1014,  1015,  1016,  1017,  1018,  1019,  1020,  1021,
    1024,  1025,  1026,  1027,  1029,  1033,  1036,  1039,  1045,  1051,
    1054,  1055,  1056,  1059,  1060,  1061,  1068,  1069,  1070,  1071,
    1074,  1075,  1078,  1079,  1082,  1083,  1084,  1088,  1090,  1092,
    1096,  1097,  1098,  1099,  1102,  1103,  1106,  1108,  1109,  1110,
    1111,  1114,  1115,  1117,  1118,  1119,  1122,  1124,  1126,  1127,
    1129,  1131,  1133,  1135,  1139,  1142,  1143,  1144,  1145,  1148,
    1149,  1152,  1153,  1156,  1157,  1158,  1159,  1160,  1161,  1162,
    1163,  1164,  1165,  1166,  1167,  1168,  1169,  1170,  1171,  1172,
    1173,  1174,  1175,  1176,  1177,  1178,  1179,  1180,  1181,  1182,
    1183,  1184,  1185,  1186,  1187,  1188,  1189,  1190,  1192,  1193,
    1194,  1195,  1196,  1197,  1198,  1200,  1201,  1202,  1205,  1207,
    1211,  1213,  1217,  1218,  1219,  1220,  1221,  1222,  1223,  1224,
    1227,  1228,  1229,  1232,  1233,  1236,  1237,  1239,  1241,  1242,
    1243,  1244,  1245,  1246,  1253,  1254,  1257,  1258,  1259,  1262,
    1263,  1266,  1269,  1270,  1272,  1276,  1277,  1278,  1279,  1282,
    1286,  1288,  1289,  1290,  1291,  1292,  1293,  1294,  1295,  1296,
    1297,  1298,  1299,  1300,  1301,  1302,  1305,  1306,  1307,  1310,
    1311,  1314,  1316,  1324,  1326,  1328,  1332,  1333,  1335,  1338,
    1341,  1342,  1346,  1348,  1351,  1356,  1357,  1358,  1362,  1363,
    1364,  1367,  1368,  1369,  1372,  1373,  1375,  1376,  1377,  1378,
    1379,  1380,  1381,  1382,  1383,  1384,  1386,  1387,  1390,  1391,
    1394,  1395,  1396,  1397,  1400,  1401,  1404,  1406,  1409,  1413,
    1414,  1415,  1417,  1419,  1423,  1424,  1425,  1428,  1429,  1430,
    1431,  1432,  1433,  1436,  1437,  1438,  1439,  1440,  1441,  1442,
    1445,  1446,  1449,  1452,  1453,  1454,  1457,  1460,  1461,  1462,
    1465,  1466,  1467,  1470,  1471,  1472,  1473,  1474,  1475,  1478,
    1479,  1480,  1481,  1482,  1483,  1484,  1485,  1488,  1489,  1490,
    1491,  1494,  1495,  1498,  1499,  1502,  1503,  1506,  1507,  1510,
    1511,  1514,  1515,  1516,  1519,  1520,  1523,  1524,  1527,  1530,
    1538,  1539,  1542,  1543,  1544,  1545,  1546,  1547,  1548,  1549,
    1550,  1551,  1552,  1553,  1554,  1555,  1556,  1557,  1558,  1559,
    1562,  1565,  1566,  1569,  1570,  1571,  1572,  1575,  1576,  1577,
    1578,  1581,  1582,  1583,  1584,  1585,  1586,  1589,  1590,  1591,
    1592,  1593,  1594,  1596,  1597,  1602,  1603,  1606,  1608,  1610,
    1613,  1614,  1615,  1616,  1617,  1618,  1621,  1630,  1632,  1634,
    1636,  1637,  1639,  1641,  1643,  1645,  1647,  1648,  1649,  1652,
    1653,  1654,  1655,  1656,  1657,  1659,  1660,  1661,  1664,  1667,
    1669,  1671,  1673,  1675,  1677,  1679,  1681,  1684,  1686,  1688,
    1690,  1691,  1692,  1693,  1694,  1695,  1696,  1697,  1698,  1701,
    1702,  1703,  1704,  1705,  1706,  1707,  1709,  1711,  1712,  1713,
    1716,  1717,  1718,  1719,  1720,  1721,  1723,  1724,  1725,  1728,
    1729,  1730,  1731,  1732,  1735,  1738,  1741,  1744,  1747,  1750,
    1753,  1756,  1759,  1764,  1767,  1770,  1773,  1776,  1779,  1782,
    1785,  1788,  1791,  1794,  1799,  1802,  1805,  1808,  1811,  1814,
    1817,  1820,  1823,  1828,  1830,  1832,  1834,  1836,  1838,  1843,
    1845,  1847,  1851,  1854,  1857,  1860,  1863,  1866,  1869,  1872,
    1875,  1878,  1881,  1886,  1887,  1888,  1889,  1890,  1891,  1892,
    1894,  1896,  1897,  1898,  1901,  1902,  1903,  1904,  1905,  1906,
    1908,  1909,  1910,  1913,  1915,  1917,  1918,  1920,  1922,  1926,
    1927,  1930,  1931,  1932,  1935,  1938,  1939,  1940,  1941,  1942,
    1943,  1944,  1947,  1955,  1956,  1957,  1958,  1960,  1962,  1963,
    1963,  1964,  1965,  1966,  1967,  1968,  1970,  1971,  1973,  1976,
    1978,  1980,  1983,  1984,  1985,  1988,  1991,  1994,  1998,  2001,
    2004,  2007,  2011,  2016,  2021,  2023,  2025,  2026,  2028,  2030,
    2032,  2034,  2036,  2037,  2038,  2040,  2042,  2044,  2048,  2053,
    2055,  2057,  2059,  2061,  2063,  2065,  2067,  2069,  2071,  2073,
    2076,  2077,  2079,  2081,  2082,  2084,  2086,  2087,  2088,  2090,
    2092,  2093,  2094,  2096,  2097,  2100,  2104,  2107,  2110,  2114,
    2119,  2125,  2126,  2127,  2129,  2130,  2131,  2135,  2137,  2138,
    2139,  2142,  2145,  2148,  2151,  2154,  2156,  2157,  2159,  2164,
    2167,  2168,  2169,  2172,  2176,  2177,  2179,  2180,  2181,  2183,
    2184,  2186,  2187,  2188,  2193,  2194,  2196,  2197,  2199,  2200,
    2201,  2202,  2203,  2204,  2206,  2208,  2210,  2211,  2212,  2214,
    2216,  2217,  2218,  2219,  2220,  2221,  2222,  2223,  2224,  2225,
    2226,  2228,  2230,  2231,  2232,  2233,  2235,  2236,  2237,  2238,
    2239,  2241,  2242,  2243,  2244,  2245,  2246,  2247,  2250,  2251,
    2252,  2253,  2254,  2255,  2256,  2257,  2258,  2259,  2260,  2261,
    2262,  2263,  2264,  2265,  2266,  2267,  2268,  2269,  2270,  2273,
    2274,  2275,  2276,  2277,  2278,  2286,  2293,  2302,  2311,  2318,
    2323,  2328,  2335,  2343,  2351,  2358,  2363,  2368,  2373,  2378,
    2383,  2388,  2393,  2398,  2404,  2414,  2424,  2434,  2441,  2451,
    2461,  2470,  2482,  2495,  2501,  2504,  2505,  2514,  2516,  2518,
    2523,  2527,  2528,  2529,  2535,  2537,  2539,  2542,  2543,  2544,
    2545,  2546,  2547,  2548,  2551,  2552,  2553,  2554,  2555,  2556,
    2558,  2560,  2562,  2564,  2566,  2568,  2570,  2572,  2574,  2577,
    2578,  2579,  2580,  2582,  2585,  2587,  2589,  2590,  2591,  2593,
    2596,  2599,  2601,  2602,  2603,  2604,  2605,  2607,  2608,  2609,
    2610,  2611,  2612,  2613,  2615,  2617,  2619,  2622,  2623,  2624,
    2626,  2629,  2630,  2631,  2632,  2633,  2635,  2638,  2642,  2643,
    2644,  2645,  2648,  2651,  2654,  2656,  2657,  2658,  2659,  2661,
    2664,  2665,  2667,  2668,  2669,  2670,  2671,  2673,  2674,  2675,
    2677,  2680,  2681,  2682,  2683,  2684,  2685,  2687,  2689,  2690,
    2691,  2692,  2694,  2696,  2697,  2698,  2699,  2700,  2701,  2703,
    2704,  2706,  2707,  2710,  2711,  2712,  2713,  2716,  2717,  2720,
    2721,  2724,  2725,  2728,  2741,  2742,  2746,  2747,  2751,  2752,
    2755,  2759,  2765,  2767,  2770,  2772,  2775,  2777,  2781,  2782,
    2783,  2784,  2785,  2786,  2787,  2791,  2792,  2795,  2796,  2797,
    2798,  2799,  2800,  2801,  2802,  2805,  2806,  2807,  2808,  2809,
    2810,  2811,  2812,  2813,  2814,  2815,  2816,  2819,  2820,  2823,
    2824,  2824,  2827,  2829,  2831,  2834,  2835,  2836,  2837,  2838,
    2839,  2842,  2843,  2846,  2847,  2850,  2854,  2855,  2855,  2858,
    2859,  2862,  2865,  2869,  2870,  2871,  2872,  2873,  2874,  2875,
    2876,  2877,  2878,  2879,  2880,  2882,  2883,  2884,  2885,  2886,
    2887,  2888,  2889,  2890,  2891,  2892,  2893,  2894,  2895,  2898,
    2899,  2900,  2901,  2902,  2903,  2904,  2905,  2911,  2912,  2913,
    2914,  2917,  2919,  2920,  2925,  2927,  2928,  2929,  2930,  2933,
    2934,  2939,  2943,  2944,  2945,  2948,  2949,  2954,  2955,  2958,
    2960,  2961,  2962,  2967,  2969,  2975,  2976,  2977,  2978,  2981,
    2982,  2985,  2987,  2989,  2990,  2993,  2995,  2996,  2997,  3000,
    3001,  3002,  3005,  3006,  3007,  3010,  3011,  3014,  3015,  3016,
    3019,  3023,  3024,  3025,  3026,  3027,  3030,  3031,  3032,  3033,
    3034,  3035,  3038,  3039,  3040,  3041,  3042,  3045,  3046,  3047,
    3050,  3051,  3052,  3053,  3054,  3055,  3058,  3059,  3060,  3063,
    3065,  3067,  3069,  3070,  3071,  3074,  3075,  3076,  3077,  3078,
    3079,  3080,  3081,  3082,  3083,  3084,  3085,  3086,  3089,  3090,
    3091,  3094,  3095,  3096,  3099,  3100,  3101,  3104,  3105,  3106,
    3109,  3110,  3111,  3112,  3115,  3116,  3117,  3120,  3122,  3124,
    3128,  3129,  3130,  3133,  3134,  3135,  3138,  3140,  3142,  3146,
    3147,  3148,  3151,  3152,  3153,  3156,  3158,  3160,  3164,  3165,
    3166,  3169,  3170,  3171,  3174,  3175,  3176,  3179,  3181,  3183,
    3187,  3191,  3193,  3198,  3201,  3202,  3203,  3204,  3207,  3208,
    3211,  3213,  3215,  3216,  3217,  3221,  3222,  3223,  3226,  3227,
    3230,  3232,  3233,  3234,  3235,  3238,  3239,  3240,  3243,  3244,
    3245,  3248,  3249,  3254,  3256,  3259,  3266,  3267,  3269,  3274,
    3276,  3279,  3280,  3281,  3282,  3284,  3289
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
  "FRONT_", "FULL_", "FUNCTION_", "GALACTIC_", "GAUSSIAN_", "GET_", "GHS_",
  "GLOBAL_", "GLYPH_", "GRAPHICS_", "GRAY_", "GRID_", "GZ_", "HANDLE_",
  "HARDLIGHT_", "HAS_", "HEAD_", "HEADER_", "HEIGHT_", "HIDE_",
  "HIGHLITE_", "HISTEQU_", "HISTOGRAM_", "HORIZONTAL_", "HUE_", "HSV_",
  "HLS_", "ICRS_", "ID_", "IIS_", "IMAGE_", "INCLUDE_", "INCR_", "INFO_",
  "ITERATION_", "IRAF_", "IRAFMIN_", "J2000_", "KEY_", "KEYWORD_",
  "LABEL_", "LAYER_", "LAYERNO_", "LAST_", "LENGTH_", "LEVEL_", "LIGHTEN_",
  "LITTLE_", "LITTLEENDIAN_", "LINE_", "LINEAR_", "LIST_", "LOAD_",
  "LOCAL_", "LOG_", "LUMINOSITY_", "MACOSX_", "MAGNIFIER_", "MATCH_",
  "MAP_", "MARK_", "MARKER_", "MASK_", "MEDIAN_", "MESSAGE_", "METHOD_",
  "MINMAX_", "MINOR_", "MIP_", "MMAP_", "MMAPINCR_", "MOSAIC_", "MODE_",
  "MOTION_", "MULTICOLOR_", "MULTIPLY_", "MOVE_", "NAME_", "NAN_",
  "NATIVE_", "NAXES_", "NEW_", "NEXT_", "NO_", "NONE_", "NORMAL_",
  "NONNAN_", "NONZERO_", "NOW_", "NRRD_", "NUMBER_", "OBJECT_", "OFF_",
  "ON_", "ONLY_", "OPENARROW_", "OPENBOX_", "OPENCIRCLE_", "OPENTRIANGLE_",
  "OPTION_", "ORIENT_", "OVERLAY_", "PAN_", "PANNER_", "PARSER_", "PASTE_",
  "PERF_", "PHOTO_", "PHYSICAL_", "PIXEL_", "PLOT2D_", "PLOT3D_", "POINT_",
  "POINTER_", "POLYGON_", "POSTSCRIPT_", "POW_", "PRECISION_", "PRINT_",
  "PRESERVE_", "PROJECTION_", "PROPERTY_", "PUBLICATION_", "PROS_",
  "QUERY_", "RADIAL_", "RADIUS_", "RANGE_", "REGION_", "REPLACE_",
  "RESAMPLE_", "RESCAN_", "RESET_", "RESOLUTION_", "REVEAL_", "RGB_",
  "ROOT_", "ROTATE_", "RULER_", "SAMPLE_", "SAOIMAGE_", "SAOTNG_", "SAVE_",
  "SATURATION_", "SCALE_", "SCAN_", "SCIENTIFIC_", "SCOPE_", "SCREEN_",
  "SEGMENT_", "SELECT_", "SET_", "SEXAGESIMAL_", "SHAPE_", "SHADE_",
  "SHARED_", "SHIFT_", "SHMID_", "SHOW_", "SIGMA_", "SINH_", "SIZE_",
  "SLICE_", "SMMAP_", "SMOOTH_", "SOFTLIGHT_", "SOCKET_", "SOCKETGZ_",
  "SOURCE_", "SQRT_", "SQUARED_", "SSHARED_", "STATS_", "STATUS_",
  "STRENGTH_", "STYLE_", "SUM_", "SYNC_", "SYSTEM_", "TABLE_", "TAG_",
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
  "colormapMotion", "colorscale", "ghsValue", "contour", "contourAux",
  "contourCreate", "contourDelete", "contourLoad", "contourClipMode",
  "contourClipScope", "contourMethod", "contourPaste", "contourSave",
  "contourStyle", "crop", "crop3d", "crosshair", "cube", "cutMethod",
  "fade", "fitsy", "get", "getHorzCut", "getVertCut", "getBin",
  "getBinCols", "getBlock", "getClip", "getClipMinMax", "getClipZScale",
  "getColorbar", "getColorMap", "getColorMapLevel", "getColorScale",
  "getColorScaleLevel", "getContour", "getContourClip",
  "getContourColorScale", "getCoord", "getCrop", "getCrosshair", "getCube",
  "getCursor", "getData", "getInfo", "getiis", "getIISFileName", "getFits",
  "getFitsExt", "getFitsHeader", "getFitsDepth", "getFitsFileName",
  "getFitsSlice", "getGrid", "getLayer", "getMask", "layerRef", "getPan",
  "getRGB", "getMultiColor", "getHLS", "getHSV", "getSmooth", "getThreed",
  "getThreedShade", "getThreedShadeNormal", "getThreedBorder",
  "getThreedCompass", "getThreedHighlite", "getThreedView", "getWCS",
  "getWCSAlign", "grid", "gridCreate", "gridType", "has", "hasBin",
  "hasContour", "hasFits", "hasMarker", "hasWCS", "iis", "iisSetFileName",
  "iiscursor", "load", "loadArr", "loadArrayRGBCube", "loadENVI",
  "loadFits", "loadFitsSlice", "loadFitsExtCube", "loadFitsMosaic",
  "loadFitsMosaicImageIRAF", "loadFitsMosaicIRAF",
  "loadFitsMosaicImageWCS", "loadFitsMosaicImageWFPC2",
  "loadFitsMosaicWCS", "loadFitsRGBCube", "loadFitsRGBImage", "loadNRRD",
  "loadPhoto", "loadIncr", "macosx", "magnifier", "match", "marker", "@1",
  "markerCallBack", "markerCentroid", "markerCreate", "compositeOperation",
  "markerCreateTemplate", "markerDelete", "markerEdit", "markerFormat",
  "markerGet", "markerGetCentroid", "markerGetHighlite", "markerGetSelect",
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
     645,   646,   647,   648,   649,   650,   651,    89,    78,    88,
      61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   401,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   403,   403,   404,   404,   404,   404,   404,   404,
     404,   404,   404,   404,   404,   405,   405,   405,   405,   405,
     405,   405,   405,   405,   406,   406,   406,   406,   406,   407,
     407,   408,   408,   408,   409,   410,   411,   412,   412,   412,
     412,   413,   413,   413,   413,   413,   414,   414,   414,   414,
     414,   414,   414,   414,   414,   414,   414,   414,   414,   414,
     414,   414,   414,   414,   414,   414,   414,   414,   414,   414,
     414,   414,   414,   414,   415,   415,   416,   416,   416,   416,
     416,   416,   417,   417,   417,   417,   417,   417,   417,   417,
     417,   417,   417,   417,   417,   417,   417,   417,   417,   418,
     418,   418,   418,   418,   418,   418,   418,   418,   419,   419,
     419,   419,   419,   420,   420,   420,   420,   420,   420,   420,
     420,   421,   421,   421,   422,   422,   422,   422,   423,   423,
     423,   424,   424,   424,   425,   425,   425,   426,   426,   426,
     426,   426,   426,   426,   426,   426,   426,   426,   426,   427,
     427,   427,   427,   427,   427,   427,   427,   427,   428,   428,
     429,   429,   429,   429,   429,   429,   430,   430,   430,   430,
     431,   431,   431,   431,   431,   431,   432,   432,   432,   432,
     432,   432,   432,   432,   432,   432,   433,   433,   433,   433,
     434,   434,   435,   435,   436,   436,   437,   437,   438,   438,
     439,   439,   439,   439,   439,   439,   439,   439,   440,   440,
     441,   441,   441,   441,   441,   441,   441,   441,   442,   442,
     443,   443,   443,   443,   443,   444,   444,   444,   444,   445,
     445,   445,   446,   446,   446,   446,   446,   446,   446,   447,
     447,   448,   448,   448,   448,   448,   449,   449,   449,   449,
     450,   450,   450,   450,   451,   451,   451,   451,   451,   451,
     451,   451,   452,   452,   452,   452,   452,   453,   453,   453,
     454,   454,   455,   455,   455,   455,   455,   455,   455,   455,
     456,   456,   456,   456,   456,   457,   457,   457,   457,   457,
     458,   458,   458,   459,   459,   459,   460,   460,   460,   460,
     461,   461,   462,   462,   463,   463,   463,   464,   464,   464,
     465,   465,   465,   465,   466,   466,   466,   466,   466,   466,
     466,   467,   467,   467,   467,   467,   468,   468,   468,   468,
     468,   468,   468,   468,   469,   470,   470,   470,   470,   471,
     471,   472,   472,   473,   473,   473,   473,   473,   473,   473,
     473,   473,   473,   473,   473,   473,   473,   473,   473,   473,
     473,   473,   473,   473,   473,   473,   473,   473,   473,   473,
     473,   473,   473,   473,   473,   473,   473,   473,   473,   473,
     473,   473,   473,   473,   473,   473,   473,   473,   474,   474,
     475,   475,   476,   476,   476,   476,   476,   476,   476,   476,
     477,   477,   477,   478,   478,   479,   479,   479,   479,   479,
     479,   479,   479,   479,   480,   480,   481,   481,   481,   482,
     482,   483,   484,   484,   484,   485,   485,   485,   485,   486,
     487,   487,   487,   487,   487,   487,   487,   487,   487,   487,
     487,   487,   487,   487,   487,   487,   488,   488,   488,   489,
     489,   490,   490,   491,   491,   491,   492,   492,   492,   493,
     494,   494,   495,   495,   495,   496,   496,   496,   497,   497,
     497,   498,   498,   498,   499,   499,   499,   499,   499,   499,
     499,   499,   499,   499,   499,   499,   499,   499,   500,   500,
     501,   501,   501,   501,   502,   502,   503,   503,   503,   504,
     504,   504,   504,   504,   505,   505,   505,   506,   506,   506,
     506,   506,   506,   507,   507,   507,   507,   507,   507,   507,
     508,   508,   509,   510,   510,   510,   511,   512,   512,   512,
     513,   513,   513,   514,   514,   514,   514,   514,   514,   515,
     515,   515,   515,   515,   515,   515,   515,   516,   516,   516,
     516,   517,   517,   518,   518,   519,   519,   520,   520,   521,
     521,   522,   522,   522,   523,   523,   524,   524,   525,   525,
     526,   526,   527,   527,   527,   527,   527,   527,   527,   527,
     527,   527,   527,   527,   527,   527,   527,   527,   527,   527,
     528,   529,   529,   530,   530,   530,   530,   531,   531,   531,
     531,   532,   532,   532,   532,   532,   532,   533,   533,   533,
     533,   533,   533,   533,   533,   534,   534,   535,   535,   535,
     536,   536,   536,   536,   536,   536,   536,   537,   537,   537,
     537,   537,   537,   537,   537,   537,   537,   537,   537,   538,
     538,   538,   538,   538,   538,   538,   538,   538,   539,   540,
     540,   540,   540,   540,   540,   540,   540,   540,   540,   540,
     540,   540,   540,   540,   540,   540,   540,   540,   540,   541,
     541,   541,   541,   541,   541,   541,   541,   541,   541,   541,
     542,   542,   542,   542,   542,   542,   542,   542,   542,   543,
     543,   543,   543,   543,   544,   544,   544,   544,   544,   544,
     544,   544,   544,   545,   545,   545,   545,   545,   545,   545,
     545,   545,   545,   545,   546,   546,   546,   546,   546,   546,
     546,   546,   546,   547,   547,   547,   547,   547,   547,   547,
     547,   547,   548,   548,   548,   548,   548,   548,   548,   548,
     548,   548,   548,   549,   549,   549,   549,   549,   549,   549,
     549,   549,   549,   549,   550,   550,   550,   550,   550,   550,
     550,   550,   550,   551,   551,   551,   551,   551,   551,   552,
     552,   553,   553,   553,   554,   555,   555,   555,   555,   555,
     555,   555,   556,   557,   557,   557,   557,   557,   557,   558,
     557,   557,   557,   557,   557,   557,   557,   557,   557,   557,
     557,   557,   557,   557,   557,   557,   557,   557,   557,   557,
     557,   557,   557,   557,   557,   557,   557,   557,   557,   557,
     557,   557,   557,   557,   557,   557,   557,   557,   557,   557,
     557,   557,   557,   557,   557,   557,   557,   557,   557,   557,
     557,   557,   557,   557,   557,   557,   557,   557,   557,   557,
     557,   557,   557,   557,   557,   557,   557,   557,   557,   557,
     557,   557,   557,   557,   557,   557,   557,   557,   557,   557,
     557,   557,   557,   557,   557,   557,   557,   557,   557,   557,
     557,   557,   557,   557,   557,   557,   557,   557,   557,   557,
     557,   557,   557,   557,   557,   557,   557,   557,   557,   557,
     557,   557,   557,   557,   557,   557,   557,   557,   557,   557,
     557,   557,   557,   557,   557,   557,   557,   557,   557,   557,
     557,   557,   557,   557,   557,   557,   557,   557,   557,   557,
     557,   557,   557,   557,   557,   557,   557,   557,   559,   559,
     559,   559,   559,   559,   559,   559,   559,   559,   559,   559,
     559,   559,   559,   559,   559,   559,   559,   559,   559,   560,
     560,   560,   560,   560,   560,   561,   561,   561,   561,   561,
     561,   561,   561,   561,   561,   561,   561,   561,   561,   561,
     561,   561,   561,   561,   561,   561,   561,   561,   561,   561,
     561,   561,   561,   561,   561,   562,   562,   563,   563,   563,
     563,   564,   564,   564,   565,   565,   565,   566,   566,   566,
     566,   566,   566,   566,   567,   567,   567,   567,   567,   567,
     567,   567,   567,   567,   567,   567,   567,   567,   567,   567,
     567,   567,   567,   567,   567,   567,   567,   567,   567,   567,
     567,   567,   567,   567,   567,   567,   567,   567,   567,   567,
     567,   567,   567,   567,   567,   567,   567,   567,   567,   567,
     567,   567,   567,   567,   567,   567,   567,   567,   567,   567,
     567,   567,   567,   567,   567,   567,   567,   567,   567,   567,
     567,   567,   567,   567,   567,   567,   567,   567,   567,   567,
     567,   567,   567,   567,   567,   567,   567,   567,   567,   567,
     567,   567,   567,   567,   567,   567,   567,   567,   567,   567,
     567,   567,   567,   568,   568,   568,   568,   569,   569,   570,
     570,   571,   571,   572,   573,   573,   573,   573,   573,   573,
     574,   574,   575,   575,   575,   575,   575,   575,   576,   576,
     576,   576,   576,   576,   576,   577,   577,   578,   578,   578,
     578,   578,   578,   578,   578,   579,   579,   579,   579,   579,
     579,   579,   579,   579,   579,   579,   579,   580,   580,   581,
     582,   581,   583,   583,   583,   584,   584,   584,   584,   584,
     584,   585,   585,   586,   586,   587,   588,   589,   588,   590,
     590,   591,   592,   593,   593,   593,   593,   593,   593,   593,
     593,   593,   593,   593,   593,   593,   593,   593,   593,   593,
     593,   593,   593,   593,   593,   593,   593,   593,   593,   594,
     594,   594,   594,   594,   594,   594,   594,   595,   595,   595,
     595,   596,   596,   596,   596,   596,   596,   596,   596,   597,
     597,   597,   598,   598,   598,   599,   599,   599,   599,   600,
     600,   600,   600,   601,   601,   602,   602,   602,   602,   603,
     603,   604,   604,   604,   604,   605,   605,   605,   605,   606,
     606,   606,   607,   607,   607,   608,   608,   609,   609,   609,
     610,   611,   611,   611,   611,   611,   612,   612,   612,   612,
     612,   612,   613,   613,   613,   613,   613,   614,   614,   614,
     615,   615,   615,   615,   615,   615,   616,   616,   616,   617,
     617,   617,   617,   617,   617,   618,   618,   618,   618,   618,
     618,   618,   618,   618,   618,   618,   618,   618,   619,   619,
     619,   620,   620,   620,   621,   621,   621,   622,   622,   622,
     623,   623,   623,   623,   624,   624,   624,   625,   625,   625,
     626,   626,   626,   627,   627,   627,   628,   628,   628,   629,
     629,   629,   630,   630,   630,   631,   631,   631,   632,   632,
     632,   633,   633,   633,   634,   634,   634,   635,   635,   635,
     636,   637,   637,   637,   638,   638,   638,   638,   639,   639,
     639,   639,   639,   639,   639,   640,   640,   640,   641,   641,
     642,   642,   642,   642,   642,   643,   643,   643,   644,   644,
     644,   645,   645,   645,   645,   646,   647,   647,   647,   647,
     647,   648,   648,   648,   648,   648,   648
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
       1,     1,     1,     0,     1,     1,     1,     1,     1,     1,
       1,     0,     1,     1,     0,     1,     1,     1,     0,     1,
       1,     0,     1,     1,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     1,     1,
       0,     1,     1,     1,     1,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     2,     2,
       1,     2,     1,     2,     1,     2,     1,     2,     2,     6,
       2,     4,     2,     2,     2,     3,     2,     2,     1,     2,
       1,     2,     4,     5,     2,     3,     5,     6,     1,     1,
       1,     7,    11,     8,    12,     1,     2,     2,     3,     1,
       1,     2,     2,     2,     2,     3,     3,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     1,
       3,     2,     2,     2,     5,     9,     9,     9,     7,     1,
       2,     1,     5,     9,     9,     9,     7,     1,     2,     6,
       1,     1,     2,     3,     2,     2,     2,     2,     2,     2,
       3,     2,     3,     8,     8,    13,    13,    12,    12,     1,
       0,     1,     2,     1,     4,     6,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     6,     3,     4,     5,
       1,     2,     4,     6,     0,     6,     8,     2,     3,     3,
       3,     0,     4,     4,     4,     4,     3,     3,     1,     3,
       5,     4,     4,     3,     2,     0,     1,     1,     1,     1,
       1,     3,     2,     0,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     1,     2,
       2,     2,     4,     3,     2,     2,     2,     2,     2,     1,
       3,     2,     2,     2,     2,     1,     2,     8,     2,     1,
       2,     1,     2,     1,     4,     3,     2,     1,     7,     8,
       7,     8,     1,     1,     1,     2,     1,     1,     2,     1,
       0,     2,     2,     1,     2,     0,     2,     2,     1,     1,
       2,     2,     2,     1,     1,     1,     1,     1,     1,     0,
       1,     2,     1,     4,     5,     0,     2,     1,     1,     5,
       2,     2,     2,     1,     1,     1,     1,     2,     1,     2,
       1,     1,     2,     1,     3,     1,     0,     1,     1,     0,
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
       2,     2,     2,     2,     2,     2,     2,     4,     4,     4,
       3,     3,     5,     4,     4,     4,     3,     3,     3,     3,
       3,     3,     2,     2,     4,     3,     3,     3,     3,     4,
       4,     4,     4,     5,     4,     6,     7,     4,     4,     5,
       2,     3,     3,     3,     3,     3,     3,     3,     2,     3,
       3,     3,     3,     4,     3,     5,     6,     3,     3,     4,
       3,     3,     3,     3,     3,     5,     3,     3,     4,     3,
       2,     2,     1,     3,     4,     4,     4,     4,     4,     6,
       4,     4,     5,     4,     4,     4,     4,     5,     4,     6,
       7,     4,     4,     5,     5,     5,     5,     5,     5,     7,
       5,     5,     6,     4,     4,     4,     4,     4,     6,     4,
       4,     5,     5,     5,     5,     5,     6,     5,     7,     8,
       5,     5,     6,     3,     3,     3,     3,     4,     3,     5,
       6,     3,     3,     4,     3,     3,     3,     3,     3,     5,
       3,     3,     4,     4,     4,     3,     5,     4,     4,     2,
       3,     6,     6,     1,     1,     1,     2,     2,     2,     3,
       3,     2,    12,     2,     2,     1,     3,     4,     2,     0,
       3,     1,     2,     2,     2,     2,     2,     4,     4,     4,
       4,     3,     3,     4,     5,     8,     6,     9,     6,     7,
      10,    11,    12,     9,     5,     6,     3,     5,     5,     5,
       6,     5,     4,     4,     4,     9,    10,    11,     9,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     7,     7,
       2,     4,     4,     4,     4,     5,     4,     4,     5,     5,
       3,     4,     4,     4,     7,     9,     6,    10,    11,    12,
       9,     3,     2,     3,     5,     5,     7,     4,     3,     3,
       6,     7,     8,     7,     7,     4,     4,     4,     9,     4,
       3,     4,     7,     7,     2,     3,     3,     3,     4,     2,
       2,     4,     4,    10,     3,     4,     1,     3,     2,     2,
       2,     2,     3,     5,     4,     5,     2,     2,     2,     2,
       3,     2,     2,     2,     3,     2,     3,     4,     3,     3,
       6,     4,     2,     3,     2,     2,     4,     3,     3,     2,
       3,     1,     2,     1,     2,     2,     2,     3,     1,     1,
       1,     1,     2,     1,     2,     2,     1,     2,     2,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       1,     2,     2,     2,     3,     5,     7,     7,     6,     5,
       5,     6,     6,     6,     5,     6,     6,     6,     6,     6,
       6,     6,     6,     7,    11,     7,     7,     7,     9,     9,
      10,    12,    12,     3,     2,     0,     1,     3,     4,     4,
       4,     0,     1,     1,     4,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     1,     1,     3,     3,
       8,     6,    10,     7,     7,     5,     6,     6,     3,     2,
       2,     3,     4,     5,     5,     5,     3,     4,     5,     5,
       5,     5,     2,     3,     3,     3,     5,     3,     3,     3,
       3,     3,     4,     5,     5,     5,     5,     3,     4,     5,
       5,     2,     2,     3,     3,     5,     6,     6,     3,     3,
       3,     6,     6,     5,     5,     2,     3,     3,     5,     6,
       3,     2,     2,     3,     2,     3,     2,     3,     3,     5,
       6,     2,     2,     2,     2,     1,     4,     4,     1,     2,
       2,     2,     2,     2,     2,     2,     3,     2,     3,     2,
       3,     1,     1,     1,     1,     1,     1,     0,     2,     0,
       2,     0,     1,     0,     0,     1,     1,     1,     1,     1,
       7,     8,     2,     6,     2,     6,     2,     3,     2,     1,
       1,     3,     3,     1,     4,     2,     1,     3,     3,     4,
       3,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     0,
       0,     2,     6,     7,     2,     1,     3,     1,     3,     1,
       1,     1,     2,     2,     1,     3,     0,     0,     2,     2,
       1,     3,     5,     0,     1,     1,     2,     2,     3,     2,
       3,     2,     3,     2,     3,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     2,     1,     2,     1,
       2,     2,     3,     2,     2,     2,     2,     1,     1,     1,
       1,     4,     2,     3,     3,     2,     3,     2,     2,     2,
       3,     3,     3,     2,     3,     1,     3,     3,     1,     2,
       2,     2,     2,     9,     6,     1,     1,     1,     1,     2,
       2,     3,     3,     1,     2,     3,     3,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     4,
       2,     2,     2,     2,     2,     4,     2,     2,     2,     2,
       2,     4,     1,     2,     2,     2,     3,     1,     1,     1,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     3,
       3,     3,     3,     3,     3,     1,     2,     2,     2,     3,
       2,     3,     3,     3,     3,     3,     3,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     3,     3,     3,     2,     2,     2,     3,     3,     3,
       2,     2,     2,     2,     2,     2,     3,     3,     3,     2,
       2,     2,     2,     2,     2,     3,     3,     3,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     3,     3,     3,
       4,     6,     2,     1,     1,     1,     1,     1,     0,     5,
       1,     6,     3,     2,     4,     1,     2,     2,     2,     3,
       3,     2,     2,     2,     2,     2,     2,     3,     2,     2,
       3,     1,     3,     4,     2,     1,     2,     5,     6,     6,
       2,     1,     2,     2,     5,     6,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     7,     8,     0,     0,     0,     0,
       0,   374,     0,     0,     0,     0,     0,     0,   403,     0,
       0,    23,     0,     0,     0,     0,     0,  1253,     0,     0,
       0,     0,  1184,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1184,    45,     0,     0,     0,     0,    51,     0,
       0,     0,    55,  1448,    57,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     3,
      62,    63,     0,     0,   285,     6,     0,     0,     0,     0,
       0,     0,     9,     0,     0,   319,   321,     0,     0,     0,
       0,     0,    11,   164,   167,   166,   159,   160,   161,   165,
     162,   163,   327,    12,     0,     0,     0,   350,     0,     0,
       0,     0,    13,     0,     0,     0,     0,   381,     0,    14,
      75,   104,     0,   134,   103,    83,   101,     0,    80,    82,
      78,   135,   102,    79,     0,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,    76,    77,    81,   388,   173,   105,     0,
      15,     0,    16,    17,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     2,    64,   400,   399,    18,     0,
       0,    19,     0,     0,     0,   465,   479,     0,   485,     0,
       0,     0,     0,     0,     0,     0,   418,     0,   564,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1184,     0,
     429,     0,     0,   435,     0,     0,     0,   439,     0,   441,
       0,   443,     0,     0,   621,   447,    20,     0,   627,    21,
     632,     0,     0,   651,   636,   637,   638,   639,   653,   641,
     642,   646,   643,     0,   645,   647,     0,     0,    22,     0,
      24,     0,     0,     0,    26,     0,     0,     0,    27,     0,
     668,     0,     0,     0,   673,     0,    28,     0,  1255,   142,
    1277,     0,  1254,  1269,  1273,  1267,     0,  1265,  1275,     0,
    1271,     0,    36,     0,     0,     0,     0,     0,     0,     0,
      30,   834,    31,     0,     0,     0,     0,     0,     0,   835,
      32,     0,    33,  1188,  1189,  1185,  1186,  1187,     0,   142,
    1279,     0,   136,     0,     0,     0,    35,     0,    37,     0,
    1290,  1289,  1288,  1287,    39,     0,     0,     0,     0,     0,
     173,     0,    40,     0,  1308,     0,  1305,    41,     0,     0,
       0,     0,    44,     0,    43,    42,     0,  1335,  1336,    47,
       0,     0,     0,    48,     0,     0,  1352,    49,     0,     0,
       0,     0,     0,     0,    50,  1444,  1443,  1447,  1446,  1445,
      52,     0,    53,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    54,     0,     0,  1450,    56,     0,     0,
      58,     0,     0,     0,     0,   173,    59,  1475,    60,     0,
       0,    61,     1,     4,     5,   268,     0,   260,     0,     0,
     262,     0,   270,   263,   267,   278,   279,   264,   280,     0,
     266,     0,   289,   290,   287,   286,     0,     0,   309,     0,
     294,   302,   305,   304,   303,   301,   293,   298,   299,   300,
     292,     0,     0,     0,     0,     0,     0,   297,    10,     0,
       0,     0,     0,     0,     0,     0,     0,   320,     0,     0,
       0,   328,     0,     0,     0,   339,     0,   349,   332,     0,
     351,   334,   353,   335,   364,   336,     0,     0,   337,     0,
     370,   338,     0,    94,    95,    96,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   377,     0,     0,
       0,     0,     0,   175,   180,   174,   176,   179,   178,   177,
       0,     0,   394,    69,    70,    71,    72,    73,    65,    66,
      67,    74,    68,     0,   402,   404,     0,   460,   456,   452,
     453,   457,   454,   459,   405,   463,     0,   406,   356,   469,
     473,   468,   359,   358,   357,     0,     0,   407,   480,   409,
       0,   408,   488,     0,   487,   410,   503,   506,   493,   509,
     494,   495,   496,   498,     0,   500,   501,   505,   173,   411,
       0,     0,   412,     0,     0,   173,   413,   518,   173,   516,
     414,   519,   416,   173,   520,   415,     0,   173,     0,   417,
     538,     0,   536,   554,     0,     0,     0,   542,   534,     0,
     544,   559,   547,   419,   565,   566,   420,   421,     0,     0,
     590,   591,   592,   424,   587,   588,   589,   425,     0,   529,
       0,   426,    84,   526,     0,   427,   428,   580,   580,   567,
     568,   580,   580,   432,     0,   579,   573,   578,   574,   575,
     576,   577,   431,   586,   433,   434,   582,   436,     0,   583,
     584,   585,   438,   598,   593,   594,   596,   440,   604,   613,
     615,   617,   603,   606,   607,   619,   442,     0,     0,   624,
       0,   446,   173,   626,   633,     0,   634,   652,   635,   654,
     655,   656,   640,   657,   659,   658,   660,   644,   648,   665,
       0,     0,     0,     0,   661,   649,    25,  1346,  1347,  1348,
    1349,  1350,     0,  1341,  1342,  1343,  1344,     0,     0,     0,
     670,   669,     0,     0,     0,     0,    29,   142,  1278,     0,
    1270,  1274,  1268,  1266,  1276,     0,  1272,     0,   157,   150,
     149,   147,   153,   154,   151,   155,   148,   158,   144,   146,
     156,   145,   152,   143,  1259,  1257,  1256,  1261,  1263,   686,
       0,     0,     0,     0,   680,     0,   681,     0,     0,     0,
       0,     0,     0,     0,   682,     0,   833,     0,   683,     0,
     684,     0,     0,   685,     0,   838,   837,   836,     0,   841,
       0,     0,     0,     0,  1019,     0,     0,     0,   845,   849,
     851,     0,  1061,     0,     0,     0,     0,   956,     0,     0,
       0,   991,     0,     0,     0,     0,     0,     0,     0,   993,
       0,     0,     0,    34,  1285,  1280,  1286,   139,   140,   138,
     141,   137,  1281,     0,  1283,  1284,  1340,    38,     0,     0,
       0,     0,  1297,  1298,     0,   173,     0,  1295,  1292,     0,
       0,     0,   173,  1315,  1318,  1316,  1317,  1309,  1310,  1311,
    1312,     0,     0,     0,    46,  1337,  1338,     0,  1357,  1359,
    1358,  1354,  1355,  1353,     0,     0,     0,     0,     0,     0,
    1360,     0,  1364,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1361,  1375,     0,     0,     0,
    1363,  1365,     0,     0,     0,  1362,  1442,  1333,  1334,  1332,
     241,     0,   252,   237,     0,   254,   238,     0,   256,   239,
    1330,  1331,  1329,   240,   243,     0,     0,     0,   246,   242,
     244,   245,     0,     0,   236,     0,  1453,     0,     0,     0,
    1458,  1471,     0,     0,  1461,     0,     0,  1464,     0,     0,
    1463,  1462,   181,  1481,     0,  1480,  1476,   269,   265,     0,
     274,     0,   271,     0,   288,   291,   168,   171,   172,   170,
     169,   306,   307,   308,   296,   295,   311,   313,   312,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   341,     0,     0,   333,   352,     0,     0,     0,
     173,     0,     0,     0,   371,   378,   100,    97,    98,    99,
     173,   380,   379,     0,     0,     0,     0,     0,     0,     0,
     393,     0,   389,   387,   386,   401,   455,     0,     0,   458,
     464,   474,   475,   470,   471,   476,   478,   477,   472,   360,
     361,   467,   466,   482,   481,     0,   486,   491,     0,   507,
     508,   492,   510,   499,   497,   502,   490,     0,     0,   173,
     173,   181,   181,   181,   173,     0,     0,   173,   555,   537,
     548,     0,   539,    84,   550,     0,     0,   541,   543,   173,
     560,     0,     0,   546,     0,     0,   423,     0,   531,    88,
      87,   525,     0,   581,   570,   569,   571,   572,     0,     0,
       0,     0,  1075,  1172,  1077,  1076,     0,  1177,     0,  1155,
       0,  1158,     0,     0,  1179,  1181,     0,  1171,   430,     0,
     595,   597,   614,   600,   616,   601,   618,   602,   608,   611,
     609,   605,   620,   599,     0,     0,   445,   625,   622,   623,
     181,   650,   662,   663,   664,   666,     0,     0,     0,   679,
     667,     0,     0,     0,  1260,  1258,  1262,  1264,     0,     0,
       0,   194,   194,   188,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   191,   191,   188,     0,     0,
     188,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     728,   752,     0,     0,     0,   720,     0,     0,     0,     0,
     194,   188,     0,     0,   829,     0,   839,   840,   173,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   900,     0,     0,     0,     0,     0,   922,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   944,
       0,     0,   949,   950,     0,     0,     0,   971,   973,   972,
       0,   975,     0,     0,   982,   984,   985,     0,  1020,     0,
       0,     0,     0,   843,   844,  1069,  1067,  1072,  1071,  1070,
    1068,  1073,     0,   848,     0,     0,  1063,  1062,   852,     0,
    1066,     0,   853,   854,   855,   856,     0,     0,     0,     0,
       0,   958,     0,     0,   959,  1200,     0,  1203,  1199,     0,
       0,     0,   960,   992,   961,  1218,  1223,  1220,  1226,  1219,
    1217,  1224,  1221,  1215,  1222,  1216,  1225,     0,     0,   966,
       0,     0,     0,     0,   967,  1235,  1239,  1240,     0,  1237,
     968,     0,  1241,   969,   989,     0,     0,     0,   994,   995,
     996,  1282,  1296,     0,     0,  1303,  1299,     0,     0,     0,
    1294,  1293,  1307,  1306,     0,     0,  1323,     0,     0,  1319,
       0,  1327,     0,     0,  1320,     0,  1356,   230,   230,     0,
       0,     0,   230,     0,  1389,     0,  1388,     0,     0,     0,
       0,  1376,     0,     0,     0,     0,  1380,     0,     0,     0,
    1387,     0,     0,     0,     0,     0,  1378,  1390,     0,     0,
       0,  1377,   230,   230,   230,  1367,  1366,  1368,     0,   253,
     255,   257,   247,     0,   250,   249,   248,     0,   258,     0,
       0,    63,     0,  1452,     0,  1459,   173,  1474,     0,  1465,
    1466,     0,  1468,  1469,     0,   182,   183,  1460,  1482,  1483,
       0,   261,     0,   275,     0,     0,     0,     0,   310,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   331,
     330,     0,   340,   342,     0,     0,     0,     0,     0,     0,
     367,     0,   173,     0,     0,     0,     0,     0,   173,     0,
     392,     0,   391,   462,   461,     0,     0,     0,   504,   173,
       0,   181,   515,   513,   517,   521,     0,     0,     0,   181,
       0,   556,   540,     0,   551,   553,   184,     0,     0,   422,
       0,     0,    63,     0,   530,    86,    85,     0,     0,  1090,
       0,     0,     0,     0,     0,     0,  1102,     0,     0,     0,
    1152,     0,     0,     0,  1121,  1122,     0,     0,     0,     0,
       0,  1135,     0,  1141,  1142,  1144,  1146,     0,  1151,  1163,
    1164,  1165,     0,  1167,     0,  1173,  1175,  1176,  1174,  1074,
       0,  1154,     0,  1153,  1089,     0,     0,  1159,     0,  1161,
       0,  1160,  1182,  1162,  1169,     0,     0,   612,   610,   444,
       0,     0,  1351,  1345,   677,   678,     0,   675,   671,     0,
     194,   194,   194,   195,   196,   690,   691,   190,   189,     0,
     194,   194,   194,     0,   698,   697,   696,   708,   191,   194,
     194,   194,   192,   193,   194,   194,     0,   194,   194,     0,
     191,     0,   721,     0,   727,     0,   726,   725,   724,     0,
       0,     0,   751,     0,   750,     0,   723,   722,     0,     0,
       0,     0,   191,   191,   188,     0,     0,   188,     0,     0,
       0,   194,   194,   825,     0,   194,   194,   830,     0,   220,
     221,   222,   223,   224,   225,     0,    92,    93,    91,   862,
       0,     0,     0,     0,     0,  1013,  1011,  1006,     0,  1016,
    1000,  1017,  1003,  1015,  1009,   998,  1012,  1001,   999,  1018,
    1014,     0,     0,   876,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   910,     0,     0,     0,     0,   921,   923,     0,     0,
       0,   929,   928,     0,     0,     0,   209,     0,     0,     0,
     173,     0,   940,     0,     0,     0,     0,   945,   946,   947,
       0,     0,     0,     0,   954,   970,   974,   976,   979,   978,
       0,     0,     0,   983,   861,  1021,  1023,     0,  1022,   846,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1055,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   850,   997,     0,     0,
       0,     0,   957,     0,   173,  1196,  1194,  1192,     0,     0,
     173,  1198,   962,     0,     0,     0,     0,  1234,     0,     0,
    1242,   987,   988,     0,   990,  1302,  1304,  1301,  1300,  1291,
       0,     0,     0,  1324,     0,     0,  1328,  1339,   232,   233,
     234,   235,   231,  1370,  1369,     0,     0,     0,  1374,     0,
       0,     0,  1373,     0,     0,     0,  1372,  1371,   230,     0,
       0,     0,  1379,     0,     0,     0,  1386,     0,     0,     0,
    1385,     0,     0,     0,  1384,     0,     0,     0,  1383,     0,
       0,     0,     0,     0,  1400,     0,  1435,  1434,  1436,     0,
       0,     0,  1382,     0,     0,     0,  1381,  1395,  1394,  1396,
    1392,  1391,  1393,  1438,  1437,  1439,     0,   251,     0,     0,
    1454,  1456,  1457,     0,  1472,   173,  1467,  1470,     0,     0,
     173,     0,     0,     0,   272,     0,     0,     0,     0,   314,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   363,   362,     0,     0,   354,   365,   173,   368,
     372,     0,   383,   385,   384,   382,   173,   390,     0,     0,
       0,   181,   173,     0,     0,     0,     0,   535,   549,   558,
       0,   552,   186,   187,   185,   545,     0,   561,     0,     0,
     528,   533,    84,     0,     0,     0,     0,     0,     0,   173,
    1091,     0,     0,     0,  1096,     0,   173,     0,  1103,  1104,
    1105,     0,  1107,  1109,  1108,  1110,  1111,     0,     0,     0,
    1117,     0,  1123,  1124,     0,     0,     0,  1130,  1128,  1129,
       0,     0,     0,     0,  1136,  1137,     0,     0,  1140,  1143,
    1145,  1147,  1148,     0,     0,  1166,  1168,     0,  1088,  1078,
    1178,  1079,     0,     0,  1180,  1170,     0,     0,   630,   631,
       0,   672,   676,     0,   687,   688,   689,   194,   693,   694,
     695,     0,     0,     0,   702,   703,   188,     0,     0,     0,
     194,   709,   710,   711,   712,   714,   191,   717,   718,     0,
     194,     0,     0,     0,   191,   191,   188,     0,     0,     0,
       0,     0,     0,     0,   191,   191,   188,     0,     0,   188,
       0,     0,     0,     0,   191,   191,   188,     0,     0,     0,
       0,   749,     0,   753,     0,     0,     0,     0,     0,   191,
     191,   188,     0,     0,   188,     0,     0,     0,     0,     0,
     191,   191,   188,     0,     0,   188,     0,   191,   729,   730,
     731,   732,   734,     0,   737,   738,     0,   191,     0,     0,
     823,   824,   194,   827,   828,     0,   859,   173,   863,     0,
       0,     0,     0,     0,     0,     0,  1005,  1002,  1008,  1007,
    1004,  1010,     0,     0,     0,   197,   199,   208,   204,   201,
     202,   198,   200,   205,   203,   207,   206,     0,     0,     0,
     173,   883,   882,   884,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   955,   901,   902,
     903,     0,   907,   904,   906,     0,     0,   912,   911,   913,
       0,     0,     0,     0,     0,     0,     0,   173,   173,   927,
     937,   215,   211,   216,   210,   213,   212,   217,   214,   935,
     936,   173,     0,     0,   939,   941,   173,   173,     0,   948,
     951,   952,   173,   173,   977,   981,   860,  1024,   847,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1056,
    1183,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1054,     0,
       0,     0,     0,     0,   857,   858,   173,   181,  1197,     0,
       0,  1201,  1202,     0,     0,   964,     0,   173,     0,  1236,
    1238,   986,     0,  1321,  1322,  1325,  1326,   230,   230,   230,
     230,   230,   230,   230,   230,   230,  1440,  1398,  1397,  1399,
    1432,  1431,  1433,  1429,  1428,  1430,  1423,  1422,  1424,  1420,
    1419,  1421,  1402,  1401,  1405,  1404,  1406,  1403,  1414,  1413,
    1415,  1411,  1410,  1412,     0,     0,  1449,     0,  1473,     0,
     173,     0,  1477,     0,     0,   276,     0,   273,     0,     0,
       0,     0,     0,   322,     0,     0,     0,     0,     0,     0,
     329,     0,     0,     0,   173,     0,   369,     0,     0,   375,
     167,   160,     0,   483,     0,   511,   181,   184,     0,     0,
     524,     0,   562,   563,     0,   527,     0,     0,     0,     0,
       0,     0,   173,  1092,   184,   184,   184,   173,  1097,   184,
     181,   184,   184,   173,  1112,   184,   184,   184,   173,  1118,
     184,   184,   173,     0,   173,   184,   173,   184,   184,   173,
     184,   173,     0,  1156,  1157,     0,     0,   629,     0,   692,
     699,   700,   701,     0,   705,   706,   707,   713,   194,   191,
     719,   740,   741,   742,   743,   744,     0,   746,   747,   191,
     191,   803,   804,   805,   806,   808,     0,   811,   812,     0,
     191,   814,   815,   816,   817,   818,     0,   820,   821,   191,
       0,     0,     0,   191,   191,   188,     0,     0,     0,     0,
       0,     0,   191,   191,   188,     0,     0,     0,     0,     0,
       0,   191,   191,   188,     0,     0,     0,   191,   194,   194,
     194,   194,   194,     0,   194,   194,     0,   191,   191,   194,
     194,   194,   194,   194,     0,   194,   194,     0,   191,   733,
     191,     0,   739,     0,     0,   826,     0,   864,   184,     0,
       0,   184,     0,     0,     0,   874,   184,   877,   878,   879,
     184,   881,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   905,   908,   909,     0,   184,
       0,     0,     0,   924,   925,     0,     0,   181,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1227,  1053,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   173,     0,     0,    89,     0,     0,  1064,  1065,
     181,     0,     0,     0,  1204,   963,   965,   181,   173,  1314,
    1426,  1425,  1427,  1417,  1416,  1418,  1408,  1407,  1409,  1441,
       0,  1451,  1484,     0,     0,  1479,  1478,   277,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   318,     0,     0,
       0,     0,   355,   366,   373,   184,   484,   489,   512,   514,
       0,   522,   557,   173,     0,     0,     0,     0,     0,     0,
     173,  1085,  1093,  1095,  1094,  1098,  1099,  1100,  1101,  1106,
    1113,  1114,  1115,  1116,  1119,  1120,  1125,   181,   184,   181,
    1133,   181,  1134,  1138,   181,  1149,   181,   173,     0,   173,
       0,   628,     0,   704,   715,   194,   191,   748,   807,   191,
       0,   813,   191,   822,   194,   194,   194,   194,   194,     0,
     194,   194,   191,   194,   194,   194,   194,   194,     0,   194,
     194,   191,   194,   194,   194,   194,   194,     0,   194,   194,
     191,   194,   763,   764,   765,   766,   768,   191,   771,   772,
       0,   194,   194,   792,   793,   794,   795,   797,   191,   800,
     801,     0,   194,   735,   191,   831,   832,   173,   866,     0,
     184,   868,     0,   173,     0,   875,   880,   173,     0,   889,
     890,   891,   892,   896,   897,   893,   894,   895,     0,     0,
     184,   916,     0,   173,     0,     0,   930,     0,   184,     0,
       0,   184,   184,     0,   980,     0,   218,   218,     0,     0,
     218,     0,   218,  1183,     0,     0,     0,     0,     0,     0,
       0,     0,  1228,  1206,     0,  1213,  1214,     0,   218,   218,
       0,     0,     0,     0,     0,  1183,     0,     0,     0,  1183,
       0,  1057,     0,     0,     0,  1183,    90,     0,   218,     0,
    1230,   173,   173,     0,   181,     0,   259,  1486,  1485,     0,
       0,   281,     0,     0,     0,     0,     0,   326,     0,     0,
       0,     0,     0,   376,   523,     0,   395,     0,  1081,     0,
     226,     0,  1086,  1126,  1127,  1131,  1132,  1139,  1150,  1087,
     437,     0,   395,     0,   716,   745,   809,   191,   819,   754,
     755,   756,   757,   758,   191,   760,   761,   194,   783,   784,
     785,   786,   787,   191,   789,   790,   194,   774,   775,   776,
     777,   778,   191,   780,   781,   194,   767,   194,   191,   773,
     796,   194,   191,   802,   736,     0,   184,   869,     0,     0,
       0,     0,     0,   898,   899,   914,     0,     0,     0,   926,
     931,     0,   933,     0,   942,   943,   934,   184,     0,   219,
    1183,  1183,    89,     0,  1183,     0,  1183,  1025,   173,     0,
       0,     0,     0,     0,     0,     0,  1205,     0,     0,  1183,
    1183,    89,     0,     0,     0,  1183,  1183,  1029,  1183,     0,
       0,  1030,  1183,  1060,  1058,  1059,  1034,  1183,  1183,  1230,
    1246,     0,  1195,  1193,  1232,     0,     0,     0,     0,   283,
     316,   317,     0,     0,     0,   315,   343,   344,     0,   395,
     396,   398,   397,   448,     0,     0,   227,   229,   228,  1083,
    1084,   395,   450,     0,   810,   194,   762,   194,   791,   194,
     782,   769,   194,   798,   194,     0,   865,   184,   184,     0,
     184,     0,   184,   184,     0,   932,   184,     0,  1183,  1040,
    1036,  1183,     0,  1041,     0,  1035,  1183,     0,  1208,     0,
    1211,  1251,  1212,  1210,  1207,     0,  1038,  1037,  1183,     0,
       0,  1183,  1042,  1032,  1028,  1183,   173,  1031,  1033,  1039,
    1246,  1190,     0,     0,  1231,  1244,  1233,  1313,     0,     0,
     324,   325,   323,   356,   359,   357,     0,     0,   449,  1080,
     173,   451,   674,   759,   788,   779,   770,   799,   184,   867,
     873,     0,   888,   885,   915,   920,     0,   938,     0,  1047,
    1027,    89,     0,  1045,     0,  1209,     0,  1026,    89,     0,
    1043,  1046,     0,  1191,  1248,  1250,     0,  1243,     0,     0,
       0,     0,     0,     0,   226,     0,   870,   173,   886,   917,
     953,  1183,     0,  1252,     0,  1183,     0,   184,  1249,  1245,
     282,     0,     0,     0,     0,     0,  1082,   842,   173,   871,
     887,   173,   918,  1049,     0,  1183,  1048,     0,     0,   284,
     348,     0,   347,     0,   872,   919,    89,  1050,    89,  1183,
     346,   345,  1183,  1183,  1044,  1052,  1051
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    59,  1668,   184,   166,  1091,  2865,  2866,   497,   498,
     499,   500,   167,   168,   169,   832,   754,   102,   971,   520,
    1437,  1975,  1599,  1614,  1595,  2187,  2239,  2980,  1665,  3049,
    1843,   393,   929,  1415,   913,   916,   919,   934,    69,   417,
     423,   427,   430,    75,   434,    82,   450,   446,   440,   457,
      92,   467,   103,  1461,   112,   475,   478,   481,   483,   556,
    1041,  1944,   485,   488,   491,   119,   507,   170,   172,  3043,
     188,   191,   236,  1086,  1136,   544,  1029,   547,   557,  1033,
    1038,   559,   561,  1044,   565,  1046,   579,  1051,  1053,   582,
     586,   590,   592,   595,   599,   635,   631,  1514,   613,  1072,
    1077,  1069,  1502,  1083,   616,   643,   652,  1094,   657,   662,
     654,   627,   623,   667,   676,  1131,  1578,  1123,  1125,  1127,
    1133,   681,  1138,   239,   683,  2050,   258,   686,   688,   692,
     697,   705,   276,  1588,   720,   300,   764,  1604,   766,   774,
    1195,  1622,  1190,  2111,  1634,  1632,  2113,  1191,  1624,  1626,
     780,   783,   778,   302,   310,   312,   823,  1274,  1691,  1263,
    1796,  2270,  2288,  1278,  1282,  1272,  1118,  1559,  1563,  1571,
    1573,  2605,   318,  1291,  1294,  1302,  2842,  2843,  2844,  2606,
    3020,  3021,  1324,  1330,  1333,  3114,  3115,  3111,  3112,  3164,
    2845,  2846,   292,   326,   334,   342,   847,   842,   347,   352,
     354,   857,   864,  1359,  1364,   923,   910,   359,   363,   328,
     268,   264,   367,   871,   374,   905,   880,   895,   896,  1401,
    1396,  1862,  1386,  1884,  1856,  1896,  1892,  1852,  1878,  1874,
    1848,  1870,  1866,  1390,   900,   882,   380,   381,   397,  1423,
     400,   406,   947,   950,   944,   408,   411,   955
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2765
static const yytype_int16 yypact[] =
{
    5681,    69,   561,    83, -2765, -2765,  1243,  -142,  1314,  1229,
    1062,   529,  2402,   165,   225,    43,  1469,   586,  5905,    73,
    2784, -2765,   184,   -14,   -12,   673,   219,   719,   921,     4,
     133,   290,   635,   245,   230,   337,   878,  3298,    19,  1209,
     604,   533,   635, -2765,   944,   170,    57,     3, -2765,   579,
     639,  1269, -2765,   771, -2765,   114,  3556,   403,   125,   736,
      14,  1132,   438,   747,   759,   143,   813,     5,   642, -2765,
   -2765, -2765,   448,  1033,   210, -2765,   575,    53,   225,    -2,
     674,   774, -2765,   837,   210, -2765, -2765,   210,   210,   354,
     896,   210, -2765, -2765,   210, -2765, -2765,   210, -2765, -2765,
   -2765, -2765, -2765, -2765,   532,    49,   901,   911,   947,   994,
     163,   987, -2765,   210,  1580,   210,   210,  1328,   210, -2765,
   -2765, -2765,   841, -2765, -2765, -2765, -2765,  4965, -2765, -2765,
   -2765, -2765, -2765, -2765,   210, -2765, -2765, -2765, -2765, -2765,
   -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765,
   -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765,
   -2765, -2765, -2765, -2765, -2765, -2765, -2765,  1489, -2765,   210,
   -2765,  1000, -2765, -2765,   225,   225,   225,   225,   225,   225,
     225,   225,   225,   225, -2765, -2765, -2765, -2765, -2765,   939,
    1090, -2765,  1058,  1557,   458,   259,   816,   989,   948,  4435,
     802,  5022,  4933,  1122,  4965,  3769, -2765,    61,  -107,  1125,
    1194,  1106,   357,   377,   115,   116,  1203,   134,   635,  1050,
   -2765,   930,  1165, -2765,   955,   945,   476, -2765,    74, -2765,
    1101, -2765,    30,  1164,    94, -2765, -2765,  5339, -2765, -2765,
   -2765,  1241,  1195,  1248, -2765, -2765, -2765, -2765,    50, -2765,
   -2765, -2765, -2765,   622, -2765, -2765,  5339,  4526, -2765,  1317,
   -2765,    44,  5339,  1323, -2765,   443,  5339,  1325, -2765,   555,
   -2765,  1330,  1329,    89, -2765,   210, -2765,  1335,  1221,  2387,
   -2765,  1342, -2765, -2765, -2765, -2765,  1349, -2765, -2765,   210,
   -2765,   225, -2765,  1344,   128,  1361,   611,  1200,  1366,    37,
   -2765, -2765, -2765,  1370,  1378,   225,   225,   210,   210, -2765,
   -2765,  1386, -2765, -2765, -2765, -2765, -2765, -2765,  2936,  2387,
   -2765,  1394,     7,   210,  5339,   210, -2765,  5339, -2765,  1399,
   -2765, -2765, -2765, -2765, -2765,   210,   734,   225,  3005,   210,
    1489,   210, -2765,  1402, -2765,  5123, -2765, -2765,   646,  1405,
    1411,   210, -2765,  1414, -2765, -2765,   -45, -2765, -2765, -2765,
    1415,  5339,  1419, -2765,  1500,   210,  1320, -2765,   860,  1300,
    1859,   416,  1422,   583, -2765, -2765, -2765, -2765, -2765, -2765,
   -2765,  1441, -2765,   589,   199,   214,   360,   689,   210,   147,
    1453,   210,   288, -2765,   210,   249,  1460, -2765,   210,   210,
   -2765,    16,    22,    23,  1463,  1489, -2765, -2765, -2765,  1078,
     210, -2765, -2765, -2765, -2765, -2765,   210, -2765,  1481,  1494,
   -2765,   210,  1377, -2765, -2765, -2765, -2765, -2765, -2765,   210,
   -2765,   225, -2765,   210, -2765, -2765,   455,   455, -2765,  1497,
   -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765,
   -2765,  1283,   210,   210,  1519,  1537,  1543, -2765, -2765,   210,
     210,   210,   210,   210,   210,  1554,   210, -2765,  1560,   210,
     210, -2765,  1562,  1583,  1588, -2765,  1598, -2765, -2765,  1608,
    1619, -2765,  1044, -2765,  1510, -2765,  5339,  1149, -2765,   722,
   -2765, -2765,   210, -2765, -2765, -2765,   210,  1553,  1615,  1615,
    5339,   210,   210,   210,   210,   210,   210, -2765,   210,  4965,
    1580,   210,   210, -2765, -2765, -2765, -2765, -2765, -2765, -2765,
    1580,   210, -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765,
   -2765, -2765, -2765,  1622, -2765, -2765,  1324,    -7, -2765, -2765,
   -2765, -2765, -2765, -2765, -2765, -2765,  1237, -2765,   645, -2765,
   -2765, -2765,  1454, -2765,   -41,    24,    24, -2765, -2765, -2765,
    1645, -2765, -2765,  1646, -2765, -2765,     9,   498, -2765,  1450,
   -2765, -2765, -2765, -2765,  1461, -2765,  1657, -2765,  1489, -2765,
     210,   210, -2765,  5339,  5339,  1489, -2765, -2765,  1489, -2765,
   -2765, -2765, -2765,  1489, -2765, -2765,  5339,  1489,   210, -2765,
   -2765,  5339, -2765,  1660,   100,  1438,    21, -2765, -2765,  1442,
    5339,    62, -2765, -2765, -2765, -2765, -2765, -2765,  1665,  1671,
   -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765,  1673, -2765,
    1462, -2765,   -18, -2765,   210, -2765, -2765,  1680,  1680, -2765,
   -2765,  1680,  1680, -2765,  1163, -2765, -2765, -2765, -2765, -2765,
   -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765,    30, -2765,
   -2765, -2765, -2765, -2765, -2765,  1471,  1474, -2765, -2765,  1621,
    1625,  1627, -2765, -2765,   149,  1431, -2765,   210,  1694,  1440,
    5123, -2765,  1489, -2765, -2765,  1696, -2765, -2765, -2765, -2765,
   -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765,
    5339,  5339,  5339,  5339, -2765, -2765, -2765, -2765, -2765, -2765,
   -2765, -2765,  1698, -2765, -2765, -2765, -2765,  1699,  1700,   225,
   -2765, -2765,  1701,  1703,  1484,   210, -2765,  2387, -2765,  1705,
   -2765, -2765, -2765, -2765, -2765,   210, -2765,   225, -2765, -2765,
   -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765,
   -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765,
     640,  1617,  1618,  1623, -2765,  1708, -2765,   675,  1624,   467,
     701,  4052,   783,  1710, -2765,  1712, -2765,  1715, -2765,    55,
   -2765,  1717,  1718, -2765,  1720, -2765, -2765, -2765,   210, -2765,
    5123,  4860,  1511,  1406,   509,  1721,   484,  1620, -2765, -2765,
   -2765,  1724,    47,   588,  1725,  1727,   196,   210,   424,    39,
     473,  5339,   225,  2244,   643,    27,   376,   244,    28, -2765,
    1714,  1719,  1729, -2765, -2765, -2765, -2765, -2765, -2765, -2765,
   -2765, -2765, -2765,   210, -2765, -2765, -2765, -2765,   210,   210,
     210,   210, -2765, -2765,   210,  1489,   210, -2765,   210,  1580,
     210,  1733,  1489, -2765, -2765, -2765, -2765, -2765, -2765, -2765,
   -2765,  1734,   514,   549, -2765, -2765, -2765,  1738, -2765, -2765,
   -2765, -2765,  1640, -2765,  1739,  1741,  1656,  1659,  1662,  1747,
   -2765,  1752, -2765,  1754,  1666,  1756,   868,   906,   627,   567,
     633,   964,   661,  1748,   716, -2765, -2765,  1757,  1758,  1761,
   -2765, -2765,  1762,  1764,  1772, -2765,  1774, -2765, -2765, -2765,
   -2765,  1778, -2765, -2765,  1787, -2765, -2765,  1789, -2765, -2765,
   -2765, -2765, -2765, -2765, -2765,   210,   363,   210, -2765, -2765,
   -2765, -2765,   210,   210, -2765,   210,   210,   965,   210,   210,
   -2765,  5123,  1697,  1796, -2765,  1261,  1797, -2765,  1338,  1798,
   -2765, -2765,   -32,   210,   210, -2765,  1792, -2765, -2765,  1799,
    1516,   210,  1807,  1040, -2765, -2765, -2765, -2765, -2765, -2765,
   -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765,  1803,
    1818,   210,   210,   210,   210,   210,  1819,   210,  1815,   210,
    1115,  1820,  1823,   171,  1826, -2765, -2765,   225,  1829,  1830,
    1489,  1831,  5339,  1833, -2765, -2765, -2765, -2765, -2765, -2765,
    1489, -2765, -2765,   210,   210,   210,  5339,   210,  1580,   210,
   -2765,   210, -2765, -2765, -2765, -2765, -2765,  1834,  1835, -2765,
   -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765,
   -2765, -2765, -2765,   802, -2765,   210, -2765, -2765,  1838, -2765,
   -2765, -2765, -2765, -2765, -2765, -2765, -2765,  5339,   210,  1489,
    1489,   -32,   -32,   -32,  1489,  1580,   210,  1489, -2765, -2765,
   -2765,   210, -2765,   -18,  1649,  1839,  1841, -2765, -2765,  1489,
   -2765,  1661,  1669, -2765,  1843,  1844, -2765,  1846,  1492,  1808,
    1811, -2765,   210, -2765, -2765, -2765, -2765, -2765,  4934,   576,
    1533,   925, -2765, -2765, -2765, -2765,   210,   197,  1472, -2765,
    1559, -2765,  2244,  1561,   234,  1514,   154, -2765, -2765,   210,
   -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765,  1538,
   -2765, -2765, -2765, -2765,   210,  1853, -2765, -2765, -2765, -2765,
     -32, -2765, -2765, -2765, -2765, -2765,  1856,  1857,  5063, -2765,
   -2765,  1858,  1860,   210, -2765, -2765, -2765, -2765,  1861,  1862,
    1863,   -13,   -13,   -84,  1865,  1866,  1867,  1868,  1868,  1868,
    1565,  1566,  1873,  1874,  1875,    51,    51,   -84,  1877,  1878,
     -84,  1882,  1885,  1888,  1889,  1888,  1889,  5169,  1890,  1891,
   -2765, -2765,  1888,  1889,   874, -2765,  1894,  1895,  1896,  1897,
     -13,   -84,  1900,  1902, -2765,  1903, -2765, -2765,  1489,  1121,
    1668,  1590,  1591,  1636,  1785,  1770,  1638,  1907,   489,     0,
    1802,  1102,  1910,  1150,  1879,  1653,  1667,  1817,  1924,  1630,
     592,    95,   -91,   327,  5339,  2244,  1892,   461,  1663,  1704,
    1933,   137, -2765, -2765,   981,  1935,  1936, -2765, -2765, -2765,
    1939,  1706,    99,  2244,  1711, -2765, -2765,  1887, -2765,   225,
    1945,  1949,   210, -2765, -2765, -2765, -2765, -2765, -2765, -2765,
   -2765, -2765,    34, -2765,  4185,  1953, -2765, -2765, -2765,   210,
   -2765,   210, -2765, -2765, -2765, -2765,   210,   210,   210,   484,
    5339, -2765,  1954,  1524, -2765, -2765,   210, -2765, -2765,   210,
    5339,   210, -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765,
   -2765, -2765, -2765, -2765, -2765, -2765, -2765,   225,   210, -2765,
     210,   484,  1955,  1958, -2765, -2765, -2765, -2765,   210,   210,
   -2765,   225, -2765, -2765, -2765,   624,  1959,  1960, -2765, -2765,
   -2765, -2765, -2765,   210,   210, -2765, -2765,  1580,   210,   210,
   -2765, -2765, -2765, -2765,  1962,   210, -2765,   210,  1837, -2765,
     210, -2765,   210,  1847, -2765,  1965, -2765,  1345,  1345,   733,
     775,   784,  1345,  1966, -2765,   817, -2765,   894,   937,   976,
    1042, -2765,  1967,  1969,  1045,  1971, -2765,  1972,  1973,  1975,
   -2765,  1048,  1052,  1976,  1977,  1979, -2765, -2765,  1981,  1983,
    1986, -2765,  1345,  1345,  1345, -2765, -2765, -2765,   210, -2765,
   -2765, -2765, -2765,   210, -2765, -2765, -2765,   210, -2765,   210,
     210,   923,  5339, -2765,   210, -2765,  1489, -2765,  5123, -2765,
   -2765,  1987, -2765, -2765,  1989, -2765, -2765, -2765, -2765,  1984,
    3005, -2765,   210,  1985,   210,   210,   210,  1157, -2765,  1993,
     210,   210,  1995,   210,   210,  1996,   210,  1997,   210, -2765,
   -2765,  1115, -2765, -2765,  1999,  2000,    -8,  2001,   225,   225,
   -2765,  5339,  1489,  2003,   210,  2004,  2005,  2007,  1489,  5339,
   -2765,   210, -2765, -2765, -2765,   210,   210,   210, -2765,  1489,
    5339,   -32, -2765, -2765, -2765, -2765,  1580,   210,  2008,   -32,
     210,   846, -2765,  2009, -2765, -2765,   602,  3797,   210, -2765,
     210,  2012,  1970,   210, -2765, -2765, -2765,  2014,  1259,  4965,
    1707,  1749,  1750,    25,  5339,  1751, -2765,   558,     2,    48,
   -2765,  1753,  1755,   263, -2765, -2765,  1023,  1809,   820,  1766,
    -143,  2244,  1061, -2765,  2023,  1745, -2765,  1038, -2765, -2765,
   -2765, -2765,  2244,  1793,     6, -2765, -2765, -2765, -2765, -2765,
     210, -2765,   210, -2765, -2765,   210,   210, -2765,   210, -2765,
     210, -2765, -2765, -2765, -2765,  1810,   210, -2765, -2765, -2765,
     210,    60, -2765, -2765, -2765, -2765,  2029,  2031, -2765,   210,
     -13,   -13,   -13, -2765, -2765, -2765, -2765, -2765, -2765,  2037,
     -13,   -13,   -13,   653, -2765, -2765, -2765, -2765,    51,   -13,
     -13,   -13, -2765, -2765,   -13,   -13,  2038,   -13,   -13,  2039,
      51,   659, -2765,   876, -2765,   898, -2765, -2765, -2765,  2042,
    2043,  2044, -2765,  1120, -2765,  1295, -2765, -2765,  1742,  2046,
    2052,  2053,    51,    51,   -84,  2055,  2056,   -84,  2057,  2060,
    2064,   -13,   -13, -2765,  2065,   -13,   -13, -2765,  2066, -2765,
   -2765, -2765, -2765, -2765, -2765,   225, -2765, -2765, -2765,  4965,
    1571,   210,  1612,  1547,   861, -2765, -2765, -2765,  1093, -2765,
   -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765,
   -2765,  2069,   210, -2765,   225,  1060,  2070,   210,  5339,   225,
     225,  2071,  1652,  1788,  1806,   276,   382,  1812,   414,  1716,
    1730,  2079,  2082,  2083,  2084,  1770,  2085,  2086,  2089,  1740,
    1760,  1528,  2091,   210,  1639,  1676, -2765, -2765,   225,  1060,
    5339, -2765, -2765,  5339,   210,  2097,   164,  2099,  5339,   210,
    1489,   225, -2765,  2101,  5339,  5339,   210, -2765, -2765, -2765,
     225,   225,  1060,  5339, -2765, -2765, -2765, -2765, -2765, -2765,
    5339,   210,   225, -2765,  2102, -2765, -2765,   210, -2765, -2765,
    2104,   210,  1851,   303,   210,  1852,   210,   564,   210,  2108,
     210,  1864,  1869,   210,   210,   210,  1870,   210,   934,   210,
     210,  1119,    32,   210,   210,  1871, -2765, -2765,   210,   210,
     210,   210, -2765,  5339,  1489,  2112,  2114,  2115,   210,   210,
    1489, -2765,   210,   210,   210,  5339,   484, -2765,   210,   210,
   -2765, -2765, -2765,  2116, -2765, -2765, -2765, -2765, -2765, -2765,
    2118,   210,   210, -2765,   210,   210, -2765, -2765, -2765, -2765,
   -2765, -2765, -2765, -2765, -2765,  2119,  2120,  2122, -2765,  2126,
    2127,  2123, -2765,  2128,  2129,  2131, -2765, -2765,  1345,  2132,
    2133,  2135, -2765,  2137,  2139,  2141, -2765,  2143,  2144,  2142,
   -2765,  2145,  2146,  2148, -2765,  2150,  2154,  2149, -2765,  2157,
    2158,  2160,  2161,  2159, -2765,  2163, -2765, -2765, -2765,  2164,
    2165,  2167, -2765,  2168,  2169,  2171, -2765, -2765, -2765, -2765,
   -2765, -2765, -2765, -2765, -2765, -2765,   210, -2765,   210,   210,
   -2765, -2765, -2765,   210, -2765,  1489, -2765, -2765,  3005,   210,
    1489,   210,   210,   210, -2765,   210,   210,  2173,   210, -2765,
     210,   210,  2175,   210,   210,  2178,   210,  2179,   210,  1115,
    2176,  2182, -2765, -2765,  2183,  5339, -2765,  2184,  1489, -2765,
    2185,   210, -2765, -2765, -2765, -2765,  1489, -2765,  1432,   210,
    1432,   -32,  1489,  5339,   210,   210,  2186, -2765, -2765, -2765,
     210, -2765, -2765, -2765, -2765, -2765,  5339, -2765,  5339,   210,
   -2765, -2765,   -18,  2187,  2197,  2198,  2199,  2200,  5095,  1489,
   -2765,  5339,  5339,  5339,  4965,  5339,  1489,  5339, -2765, -2765,
   -2765,  5339, -2765, -2765, -2765, -2765,  4965,  5339,  5339,  5339,
    4965,  5339, -2765, -2765,  5339,  5339,   210, -2765, -2765, -2765,
    5339,  5339,  5339,  5339, -2765, -2765,  5339,  5339, -2765, -2765,
   -2765, -2765, -2765,  5339,  5339, -2765, -2765,  2019, -2765, -2765,
   -2765, -2765,   210,   210, -2765, -2765,  2202,   210, -2765, -2765,
    2203, -2765, -2765,   210, -2765, -2765, -2765,   -13, -2765, -2765,
   -2765,  2204,  2207,  2208, -2765, -2765,   -84,  2210,  2211,  2213,
     -13, -2765, -2765, -2765, -2765, -2765,    51, -2765, -2765,  2212,
     -13,  2215,  2216,  2217,    51,    51,   -84,  2220,  2221,  2222,
    1881,  2223,  2224,  2225,    51,    51,   -84,  2227,  2230,   -84,
    2232,  2233,  2236,  2237,    51,    51,   -84,  2231,  2243,  2245,
     931, -2765,  1152, -2765,  1297,  1916,  2247,  2248,  2249,    51,
      51,   -84,  2262,  2263,   -84,  2271,  1938,  2275,  2278,  2280,
      51,    51,   -84,  2285,  2286,   -84,  2287,    51, -2765, -2765,
   -2765, -2765, -2765,  2289, -2765, -2765,  2290,    51,  2291,  2292,
   -2765, -2765,   -13, -2765, -2765,  2293, -2765,  1489, -2765,  5339,
     210,   210,  5339,   210,  2294,  1668, -2765, -2765, -2765, -2765,
   -2765, -2765,  2298,  5339,   225, -2765, -2765, -2765, -2765, -2765,
   -2765, -2765, -2765, -2765, -2765, -2765, -2765,  1060,  2300,  5339,
    1489, -2765, -2765, -2765,  2301,  1668,   210,   210,   210,   210,
     210,   210,   210,   210,   210,  2303,  2304, -2765, -2765, -2765,
   -2765,  2305, -2765, -2765, -2765,  2307,  2308, -2765, -2765, -2765,
     210,  5339,   210,  2309,  1668,   225,  1060,  1489,  1489, -2765,
   -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765,
   -2765,  1489,   210,  1580, -2765, -2765,  1489,  1489,   210, -2765,
   -2765, -2765,  1489,  1489, -2765, -2765, -2765, -2765, -2765,   210,
     210,   210,   210,   210,   210,   210,   210,   210,   210, -2765,
   -2765,   210,   210,   210,   210,   210,   210,   210,   210,  1899,
     210,   210,   210,  1941,   210,  3326,  2310,   210, -2765,   210,
     210,   210,  2313,  2314, -2765, -2765,  1489,   -32, -2765,  2315,
    2316, -2765, -2765,  1580,   210, -2765,  2318,  1489,  5339, -2765,
   -2765, -2765,  2319, -2765, -2765, -2765, -2765,  1345,  1345,  1345,
    1345,  1345,  1345,  1345,  1345,  1345, -2765, -2765, -2765, -2765,
   -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765,
   -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765,
   -2765, -2765, -2765, -2765,  1668,   210, -2765,   210, -2765,   210,
    1489,   210, -2765,  1580,   210, -2765,   210, -2765,  2196,  2322,
    2323,   210,   210, -2765,   210,   210,  2324,   210,  2320,   210,
   -2765,  2326,  2328,  2329,  1489,  2330, -2765,  2331,  5339, -2765,
   -2765, -2765,   210, -2765,   210, -2765,   -32,   602,   210,  2332,
   -2765,   210, -2765, -2765,  4965, -2765,  2333,  2334,  2336,  2337,
    2339,  5339,  1489, -2765,   602,   602,   602,  1489, -2765,   602,
     -32,   602,   602,  1489, -2765,   602,   602,   602,  1489, -2765,
     602,   602,  1489,  5339,  1489,   602,  1489,   602,   602,  1489,
     602,  1489,  5339, -2765, -2765,  2341,  4965,  2342,   210, -2765,
   -2765, -2765, -2765,  2344, -2765, -2765, -2765, -2765,   -13,    51,
   -2765, -2765, -2765, -2765, -2765, -2765,  2345, -2765, -2765,    51,
      51, -2765, -2765, -2765, -2765, -2765,  2346, -2765, -2765,  2349,
      51, -2765, -2765, -2765, -2765, -2765,  2351, -2765, -2765,    51,
    2352,  2357,  2359,    51,    51,   -84,  2361,  2362,  2365,  2370,
    2373,  2374,    51,    51,   -84,  2363,  2376,  2377,  2380,  2381,
    2382,    51,    51,   -84,  2384,  2386,  2388,    51,   -13,   -13,
     -13,   -13,   -13,  2390,   -13,   -13,  2392,    51,    51,   -13,
     -13,   -13,   -13,   -13,  2393,   -13,   -13,  2397,    51, -2765,
      51,  2398, -2765,  2399,  2400, -2765,  5123, -2765,   602,  2401,
    5339,   602,   210,  5339,  2403, -2765,   602, -2765, -2765, -2765,
     602, -2765,  5339,  2404,   210,   210,   210,   210,   210,   210,
     210,   210,   210,   210,   210, -2765, -2765, -2765,  5339,   602,
     210,  5339,  2405, -2765, -2765,  1580,  1580,   -32,  5339,  1580,
    1580,  5339,  5339,  1580,  1580,   210,   210,   210,   210,   210,
     210,  1668,   210,   210,   210,  2879, -2765,  1668,   210,   210,
     210,   210,  1668,   210,   210,  2408,   210,   210,   210,  2409,
     210,   210,  1489,   210,  1947,  1668,   210,   210, -2765, -2765,
     -32,   225,  5339,  5339, -2765, -2765, -2765,   -32,  1489,  2406,
   -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765,
     210, -2765, -2765,  1580,   210, -2765, -2765, -2765,  1160,  2410,
    2411,  2414,  2415,   210,   210,  2419,   210, -2765,  2420,  2423,
    2424,  1432, -2765, -2765, -2765,   602, -2765, -2765, -2765, -2765,
    2427, -2765, -2765,  1489,  2425,  2428,  2430,  2431,  5339,  2432,
    1489, -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765,
   -2765, -2765, -2765, -2765, -2765, -2765, -2765,   -32,   602,   -32,
   -2765,   -32, -2765, -2765,   -32, -2765,   -32,  1489,  2433,  1489,
    2435, -2765,   210, -2765, -2765,   -13,    51, -2765, -2765,    51,
    2436, -2765,    51, -2765,   -13,   -13,   -13,   -13,   -13,  2438,
     -13,   -13,    51,   -13,   -13,   -13,   -13,   -13,  2439,   -13,
     -13,    51,   -13,   -13,   -13,   -13,   -13,  2442,   -13,   -13,
      51,   -13, -2765, -2765, -2765, -2765, -2765,    51, -2765, -2765,
    2443,   -13,   -13, -2765, -2765, -2765, -2765, -2765,    51, -2765,
   -2765,  2444,   -13, -2765,    51, -2765, -2765,  1489, -2765,  5339,
     602, -2765,  2445,  1489,   210, -2765, -2765,  1489,   210, -2765,
   -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765,   210,   210,
     602, -2765,  2447,  1489,   210,  1580, -2765,    40,   602,   210,
    1580,   602,   602,  5339, -2765,   210,  2448,  2448,   210,   210,
    2448,  1668,  2448, -2765,  5339,  1909,  1913,  1919,  1946,  1992,
    2035,  2061,  2879, -2765,  2068, -2765, -2765,  1668,  2448,  2448,
     210,   210,  1668,  1539,   210, -2765,   210,   210,   210, -2765,
     210, -2765,  1580,   210,  2451, -2765, -2765,   210,  2448,   225,
      15,  1489,  1489,   225,   -32,  2449, -2765, -2765, -2765,  2452,
     210, -2765,  2460,  2462,  2465,  2466,  2467, -2765,  2470,  2472,
    2473,  2475,   210, -2765, -2765,  2476,    17,  5339, -2765,  2477,
      26,  5339, -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765,
   -2765,  2479,    17,   210, -2765, -2765, -2765,    51, -2765, -2765,
   -2765, -2765, -2765, -2765,    51, -2765, -2765,   -13, -2765, -2765,
   -2765, -2765, -2765,    51, -2765, -2765,   -13, -2765, -2765, -2765,
   -2765, -2765,    51, -2765, -2765,   -13, -2765,   -13,    51, -2765,
   -2765,   -13,    51, -2765, -2765,   210,   602, -2765,  5339,  5339,
     210,  5339,   210, -2765, -2765, -2765,  5339,  5339,   210, -2765,
   -2765,  2481, -2765,  5339, -2765, -2765, -2765,   602,  2480, -2765,
   -2765, -2765,  1668,   210, -2765,  2483, -2765, -2765,  1489,  1770,
    2485,  2488,  2489,  2490,  2491,  2493, -2765,   225,  2496, -2765,
   -2765,  1668,   210,  2498,  2499, -2765, -2765, -2765, -2765,   210,
    5339, -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765,    15,
    2054,  2244, -2765, -2765, -2765,   225,  2501,  2502,  2503, -2765,
   -2765, -2765,  2505,  2508,  2509, -2765, -2765, -2765,   158,    17,
   -2765, -2765, -2765, -2765,  2511,  5339, -2765, -2765, -2765, -2765,
   -2765,    17, -2765,  2516, -2765,   -13, -2765,   -13, -2765,   -13,
   -2765, -2765,   -13, -2765,   -13,  5123, -2765,   602,   602,   210,
     602,  2517,   602,   602,   210, -2765,   602,   210, -2765, -2765,
   -2765, -2765,  2518, -2765,   210, -2765, -2765,  2519, -2765,  2521,
   -2765, -2765, -2765, -2765, -2765,   210, -2765, -2765, -2765,  2522,
     210, -2765, -2765, -2765, -2765, -2765,  1489, -2765, -2765, -2765,
    2054, -2765,  2166,  2081,  2244, -2765, -2765, -2765,  2524,  2525,
   -2765, -2765, -2765, -2765, -2765, -2765,    79,    79, -2765, -2765,
    1489, -2765, -2765, -2765, -2765, -2765, -2765, -2765,   602, -2765,
   -2765,  2523, -2765,  4965, -2765, -2765,  2527, -2765,  1668, -2765,
   -2765,  1668,   210, -2765,  2529, -2765,   210, -2765,  1668,   210,
   -2765, -2765,  5339, -2765,  2166, -2765,   225, -2765,  2530,  2531,
     210,   210,   210,   210,    26,  2532,  4965,  1489, -2765,  4965,
   -2765, -2765,   210, -2765,  2528, -2765,   210,   602, -2765, -2765,
   -2765,  2533,  2534,   210,  2535,   210, -2765, -2765,  1489, -2765,
   -2765,  1489, -2765, -2765,  2538, -2765, -2765,  2539,  2540, -2765,
   -2765,  2541, -2765,  2542, -2765, -2765,  1668, -2765,  1668, -2765,
   -2765, -2765, -2765, -2765, -2765, -2765, -2765
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2765, -2765,    -3, -2765,   482, -1067, -1954, -1138,  2026, -2765,
    1081,  -489,  1816,   -55,   -21, -2765,  -312, -1946,  2107,  1658,
    -890, -1184, -1101,   -39,  1814, -1712, -2765, -1208, -2765,  -838,
   -1245, -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765,
   -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765,
   -2765, -2765, -2765, -1457, -2765, -2765, -2765, -2765, -2765,  -532,
    -554, -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2764,
   -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765,
   -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765,
   -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765,
   -2765, -2765, -2765, -2765, -2765, -2765, -2765,   880, -2765, -2765,
   -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765,
   -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765,
   -2765, -2765, -2765, -2765, -2765, -2765, -2765,   426, -2765, -2765,
   -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765,     1,   102,
   -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765, -1710, -2765,
   -2765, -2765, -2765, -2765, -2765,  -799, -2765, -2765, -2765, -2765,
   -2765, -2765,    33, -2765, -2765, -2765, -2765,  -292,  -810, -2184,
    -468, -2765, -2765, -2765, -2765, -2765,  -562,  -557, -2765, -2765,
   -2543, -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765,
   -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765,
   -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765,  1672, -2765,
   -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765,
   -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765,
   -2765, -2765, -2765, -2765, -2765, -2765, -2765, -2765
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1456
static const yytype_int16 yytable[] =
{
      74,   405,  1042,  1317,  1939,  2211,  1501,   824,   118,  1290,
    1293,   826,  2392,   187,  2394, -1229,   341,  2226,   120,   413,
     941,  1020,  2037,   120,   343,  1074,   945,   948,  1699,   368,
    2003,  1023,  1321,  1334,   339,    70,    71,  2285,   425,  1769,
    2251,  1942,   781,   366,  1035,  2970,  1994,   120,  2021,   707,
    3040,   261,   399,   265,   476,   410,    70,    71,   416,  3046,
      70,    71,   422,  1276,  1735,   429,  1080,  1612,  1198,  2006,
     433,   435,  1669,  1435,   445,   356,  1616,   452,   456,  1619,
    2048,   459,    70,    71,   460,   461,    70,    71,   469,   174,
     123,   470,   175,   723,   471,   663,   689,  1047,    70,    71,
    1654,  1597,    70,    71,  1070,  1027,   511,  1265,   600,   679,
     492,   496,   501,   502,   506,   508,  2022,    70,    71,   628,
    1199,   632,   862,  1844,   601,   369,   176,  1857,    70,    71,
    1089,   512,  1731,   760,   177,  1335,  1758,   120,   303,   614,
      60,   370,  1749,  1336,   690,   125,    70,    71,  3052,   602,
     125,   120,   448,  1266,  1700,  1036,  2004,  1903,  1904,  1905,
     123,    70,    71,   237,  1593,   925,   521,  1128,   486,   603,
    1574,  1493,  1494,  1495,   125,  1464,   123,  1292,  1039,   581,
     238,   589,   637,   594,   598,    83,   633,  1465,   120,   604,
    2023,  2231,   555,   605,   634,   487,  1594,   580,   449,   171,
      70,    71,   178,   120,   304,   638,  1028,  1075,  1081,  1736,
     629,   677,  1285,    70,    71,   708,  2232,  1737,   120,  2233,
    1598,   724,   639,   664,  1040,   606,   607,  3041,   305,   120,
    1613,  2234,   827,  1039,   277,   360,  3047,    70,    71,   371,
     828,   829,  1732,   615,   128,  1037,  1759,   630,   120,   128,
    1581,   644,   863,   129,   130,   259,  2235,   372,   129,   130,
    1575,   179,    70,    71,   125,  1090,   441,  1436,   691,   301,
     911,  1200,   725,   128,  2236,  3128,   942,   364,   125,  1040,
     131,   830,   129,   130,  2010,   914,   757,  3131,   608,   306,
     852,    70,    71,   319,   180,   311,   181,  2198,  1995,   609,
     761,   762,  1567,  1943,   788,   789,    70,    71,    72,  1267,
     477,   262,   936,   266,   320,   125,   321,   846,   680,  2237,
     833,  2007,   835,   640,  1322,   182,  1268,  1269,   426,  2049,
     125,  1048,   838,   841,   709,   844,   848,   263,   850,   267,
    3042,  1701, -1229,  2005,  1277,   125,   782,   665,   860,  3048,
     131,   946,   949,   943,   133,  1323,   125,  1201,   462,   133,
    1350,   870,   872,   128,   120,   344,   131,   120,  1202,   610,
     611,  3123,   129,   130,  1337,   125,   345,   128,  1076,   926,
     666,  1129,  2286,   133,  1770,   924,   129,   130,   931,   933,
    2971,   935,  1325,   710,   365,   939,   940,   373,   831,  1082,
     183,   442,  2038,  2200,   163,  1203,   954,   956,   329,   163,
     763,   164,   165,   957,   128,  1154,   164,   165,   960,   962,
      73,  1750,   620,   129,   130,  1741,   963,  1270,  1271,   128,
     965,   917,  1733,   163,  1561,  2203,  1760,  1286,   129,   130,
     164,   165,   624,  1762,   128,   443,   444,   612,   713,   975,
     976,   398,   322,   129,   130,   128,   980,   981,   982,   983,
     984,   985,   409,   987,   129,   130,   989,   990,   927,   641,
    1130,  1569,   548,   133,   128,  2558,    70,    71,   549,   307,
     421,   897,  2380,   129,   130,   642,   966,   133,  1019,  1005,
    1803,   125,  1265,  1006,   125,   361,   173,   185,  1011,  1012,
    1013,  1014,  1015,  1016,   260,  1017,  3124,   496,  1021,  1022,
    1295,  1326,   309,  1258,  2584,  1296,  1694,   496,  1024,   323,
     346,   362,  1815,   163,   133,   550,   463,   464,   308,  1480,
     164,   165,    70,    71,  1287,  2165,  2011,   163,  1266,   133,
    1259,   659,   414,  2143,   164,   165,  2146,   932,   898,  2199,
     553,  3125,  1265,   551,   133,   327,  1355,   967,   937,   718,
     447,  1183,  2261,  2238,  2195,   133,  1327,    70,    71,  3165,
     324,   113,    61,  1331,   163,   465,  1497,  1057,  1058,   436,
     325,   164,   165,  1071,   133,  1998,  1738,  2224,   545,   163,
     128,  1360,   114,   128,  1297,  1066,   164,   165,  1266,   129,
     130,  1963,   129,   130,   163,  1743,  1739,   552,   353,  1967,
    1695,   164,   165,  2326,   714,   163,   767,  1328,    62,  1728,
    1298,  3188,   164,   165,   907,  1139,  1972,  1973,   355,  1821,
    1279,  1092,  1382,   375,   163,  1356,   466,  1119,   968,    63,
    1822,   164,   165,   382,  1184,    70,    71,  1549,   902,  2987,
     115,   553,   554,  1158,  1159,  2201,   523,   524,   525,   526,
     527,   528,   529,   530,   531,   532,  2061,  2062,   407,    64,
    1361,  3007,  2081,  2082,  1134,  3011,  1696,    70,    71,  1999,
    1171,  3016,   621,   546,  1413,  1318,   376,  2204,  1172,  1173,
    1260,    65,   883,  1299,  1267,    66,   313,   377,  1387,  1383,
     133,   920,   625,   133,   853,  1160,   908,  1974,   622,  1280,
      67,  1268,  1269,  1729,  1329,   903,  1189,  1049,  2063,  1550,
    1744,  1289,  1153,   278,  2083,  2892,  1393,  1003,   626,   899,
     378,  2024,  1156,   715,  1357,  1208,   412,    70,    71,   768,
    1174,   969,  2035,   854,  1384,  2000,   418,   970,   189,   116,
     163,  1551,   419,   163,  1267,  1261,   472,   164,   165,   885,
     164,   165,  1697,   420,  1319,  1388,   190,   279,   269,  1362,
     280,  1268,  1269,   758,   719,   394,   839,    70,    71,   428,
     314,  1398,  1262,   769,   770,  1207,  1745,   786,   787,   693,
     281,  1004,  1050,  1394,   437,  1185,  3079,  3080,  1845,   270,
    3083,   660,  3085,   855,  1288,    70,    71,  1301,  1281,   282,
    1300,   473,  1270,  1271,  1698,  3096,  3097,  1358,   424,   843,
     909,  3102,  3103,  2266,  3104,   921,   283,   661,  3107,   771,
    1341,  2001,   284,  3108,  3109,  1342,  1343,  1344,  1345,   431,
    1849,  1346,   458,  1348,  1552,  1349,   496,  1351,  1399,  1853,
    1969,  1730,  1363,   438,   474,   840,  1161,  1162,  1827,   453,
     117,   439,   123,  1320,  1031,  1846,   912,   915,   918,  2064,
    2065,   928,  1270,  1271,   694,  2084,  2085,  1192,  1186,  1638,
    1385,  2090,  1859,  2002,   271,   285,  1426,  1639,  1640,  2091,
    2092,  1175,  1176,   772,  3149,   315,   904,  3150,    68,   451,
     468,   272,  3153,  1553,   922,   479,   123,  1850,   286,   395,
     316,  2101,  2102,   964,  3157,  2405,  1854,  3160,   379,   695,
     773,  3161,  1412, -1455,  1416,   874,   293,  1911,   856,  1417,
    1418,  1032,  1419,  1420,  1422,  1424,  1425,    70,    71,  1641,
     893,  2093,  1163,   480,  2490,  2491,  1389,   294,   357,  1860,
    1438,  1439,   482,  1164,  1165,  2066,  1555,  1443,  1444,  1863,
    1193,  2086,  1377,  2103,   696,  2453,  2067,  2068,    70,  1421,
     454,   273,  2087,  2088,  1395,  2017,  2166,  1177,  1450,  1451,
    1452,  1453,  1454,   317,  1456,  2466,  1458,  1460,  1178,  1179,
    1166,   489,   875,  1180,  2279,  2476,  2492,  3203,  2479,   484,
    1379,  3206,  1867,  2069,   522,  2486,   396,  1964,  1751,  2089,
    1475,  1476,  1477,   358,  1479,   496,  1481,  2308,  1482,   274,
    2523,  3217,  1486,  2526,   287,  1181,  1864,  2554,  3081,  1400,
     275,  2534,   876,   877,  2537,  3224,    70,    71,  3225,  3226,
    1485,  1871,  1487,   295,  1446,  1378,  1847,  3098,   997,   998,
    2012,  1447,   131,   288,   289,  1490,   490,  2563,  1391,   296,
     455,   509,   496,  1498,  2175,  2031,   290,   533,  1500,  1868,
     291,  2395,  2640,  2641,  2642,  2643,  2644,  2645,  2646,  2647,
    2648,    70,    71,  1380,  2167,  1513,  2582,  2176,  1851,  1517,
    1642,  1643,  2094,  2095,   104,   534,   131,  1855,   645,  2177,
     297,   562,  1752,  1560,  1562,  1565,  1556,  1875,  1872,   330,
    1881,  1570,  2178,  1889,  2104,  2105,  1576,  1893,    70,    71,
    2018,   646,    70,    71,  1703,  2115,  2179,  2180,  2019,   535,
    1861,  1579,  1631,  2116,  2117,    70,    71,  1615,   647,   668,
     563,  1392,   878,   558,  2013,  2168,  1459,  2493,  2494,   564,
    1589,   669,   105,  1001,  1002,  1704,   591,   298,  1705,  2032,
      70,    71,   106,    70,    71,  2499,  2500,  1098,  1099,   107,
     432,  1557,  1712,   879,  1876,   299,  1644,  1882,  2096,  2283,
    1890,   560,   670,  1100,  1894,  2118,  1627,  1645,  1646,  2097,
    2098,  1706,  1647,  1636,  2099,   415,   617,  3181,  1558,   618,
    2106,  1149,   619,  1713,  3185,  2025,  1714,  1865,  2169,  1715,
    1659,  2107,  2108,  2679,  2014,   953,  2649,  2501,   636,  1157,
    1927,   656,  1707,  2879,  1648,  1708,  2100,  1101,  1734,  2033,
    2692,  2693,  2694,  2495,  1102,  2696,   655,  2698,  2699,  1716,
    1753,  2701,  2702,  2703,  2496,  2497,  2705,  2706,  2109,  1761,
    1869,  2710,  2026,  2712,  2713,   653,  2715,   648,    93,  1768,
     678,   108,  3222,  1103,  3223,  1429,  1430,   331,   671,   727,
    1717,   658,   728,  1718,   685,   332,  1798,   333,  1799,  3087,
     687,  2498,  2015,  1800,  1801,  1802,   348,  1104,  1628,  1873,
    1660,  2181,   729,  1808,  1304,  1637,  1809,  2034,  1811,  1332,
    2126,   775,  2182,  2183,  2184,  2185,  1105,   383,  2127,  2128,
    2508,  2509,   684,   672,   109,  1813,  2170,  1814,    84,   384,
    2027,   776,   706,  1106,   649,  1818,  1819,   712,   730,   717,
    1107,    70,    71,   722,   731,   721,  2119,  2120,  1108,   726,
    1825,  1826,  1432,  1433,   496,  1828,  1829,   755,  1983,   759,
     385,   110,  1831,   756,  1832,  1877,    85,  1834,  1883,  1835,
    2129,  1891,  2510,  1709,  2788,  1895,   765,  2791,  2502,  2503,
     503,   779,  2795,  1915,   784,   650,  2796,  2171,  1661,  1662,
      70,    71,    94,   785,   111,   651,  2028,   732,   961,  1838,
    1839,   790,   673,  1663,  2739,  2811,  2186,    95,  1710,   825,
    1109,   349,   674,  2748,   837,  1906,   851,  2631,  1414,   858,
    1907,  1719,  2757,   777,  1908,   859,  1909,  1910,   861,  1921,
     865,  1913,  2121,   867,  1110,   873,    96,   901,  1984,  1111,
      97,  1112,   881,  2122,  2123,    86,   386,  1919,  2124,  1922,
    1664,  1924,  1925,  1926,  1928,   906,  1720,  1930,  1931,   504,
    1933,  1934,   675,  1936,  2504,  1938,    76,   930,  1460,  1113,
    1114,    93,    77,  2831,   938,  2505,  2506,   951,  1115,  2847,
    2125,  1951,    70,    71,  2852,    70,    71,  1721,  1957,  1467,
    1970,   387,  1958,  1959,  1960,   958,    87,    88,  1564,   350,
    1116,  2893,    98,   496,  1965,    70,  1512,  1968,  1990,   959,
     351,   973,  2507,    70,    71,  1978,  2678,  1979,   974,    78,
    1981,  2130,  2131,  2511,  2512,   999,  1985,  1986,  1095,    70,
      71,  1096,  1097,   977,  2904,   513,   733,  1442,  1806,  1807,
    2697,  1987,  2217,  2218,    89,    90,    99,    79,   186,  1840,
    1841,   978,   868,  3004,  3005,   100,   101,   979,   505,  1117,
      70,    71,  2164,  1666,  1667,   734,   735,  2039,   986,  2040,
     388,   493,  2041,  2042,   988,  2043,   991,  2044,   736,  2070,
     389,  1842,   737,  2046,    70,    71,  2159,  2047,  1988,  1008,
    1009,  2080,  1246,    70,    71,  2390,  2053,   992,   493,   494,
     495,    80,   993,   390,  1605,  1606,    91,  2132,  1247,  2513,
      95,   391,   994,  2141,  2142,   514,  2957,  1248,  2133,  2134,
    2514,  2515,   995,  2135,   536,    70,    71,  2162,  1249,  2981,
     392,   869,  2984,   996,  2986,   495,  2965,  1025,  1030,    96,
     515,   516,  1026,  2391,  2972,   537,    81,  2975,  2976,   517,
    2999,  3000,    70,    71,  2221,  2136,  1034,  2516,  2158,  1043,
    1045,  1052,   538,  1054,  1250,    70,    71,  2194,  1666,  1667,
    3018,  1055,  1073,   518,  1068,   539,  1078,  2160,  2161,  2163,
    1084,    70,    71,   519,  1666,  1667,  1085,  1087,  1251,    70,
      71,  2223,  1666,  1667,  1093,  1120,  1088,   540,  1121,  2173,
    1132,   541,  1122,  2985,  2189,    98,  1124,  2817,  1126,  1135,
    1137,  1141,  1146,  1147,  1148,  1150,   542,  1151,  1152,  2998,
    1155,  1167,  1168,  1170,  3003,  1194,  1196,  1169,  1182,  1197,
    2220,  2222,  1204,  1205,  1206,  1257,  1264,  1273,  1275,  1283,
    1338,  2229,  1284,  1340,  1252,  1339,  2242,  1352,  1354,    99,
    2869,  1765,  1365,  2248,  1367,  1366,  1368,  2873,   100,   101,
    1369,  1372,  1397,  1370,  2589,   543,  1371,  1373,  2254,  1374,
    1375,  1376,  1402,  1403,  2257,  1404,  1427,  1405,  2259,  1406,
    2262,  2263,  3066,  2265,  2267,  2268,  1407,  2271,  1408,  1253,
    2274,  2275,  2276,  1409,  2278,  2280,  2281,  2282,  2284,  2287,
    2289,  2290,  1410,  3077,  1411,  2292,  2293,  2294,  2295,  1812,
    1428,  1431,  1434,  1440,  1441,  2301,  2302,  1448,  1254,  2304,
    2305,  2306,  1674,  1820,  2634,  2309,  2310,  2903,  1445,  2905,
    1457,  2906,  1449,  1455,  2907,  1462,  2908,  1463,  2313,  2314,
    1466,  2315,  2316,  1468,  1469,  1503,  1471,  1473,  1507,  1483,
    1484,  1675,  1488,  1572,  1504,  1505,  1508,  1509,  1515,  1510,
    1511,  1516,  1554,   340,  1255,  1566,  1256,  1568,  1580,  1577,
    1582,  1583,  1586,  1670,  1671,  1587,  1590,  1591,  1592,  1600,
    1601,  1727,  1602,  1603,  2655,  1607,  1608,  1676,  1609,  1610,
    1611,  1617,  1618,  3139,  3140,  1677,  3142,  1620,  3144,  3145,
    1621,  1678,  3147,  1623,  1625,  1633,  1635,  2361,  1649,  1650,
    1673,  1651,  1652,  2354,  1655,  2355,  2356,  1656,  1657,  1672,
    2357,  1692,  1693,  1679,  1711,  2359,  2362,  1702,  2364,  2365,
    2366,  1722,  2367,  2368,   883,  2370,  1723,  2371,  2372,  1726,
    2374,  2375,  1725,  2377,  1742,  2379,  1460,  1680,  1748,  1754,
    1724,  1755,  1746,   510,  1756,  1747,  1764,  1757,  2388,  1766,
    1946,  1947,  1763,  1767,  3175,  1681,  2393,  1797,  1833,  1805,
    1816,  2398,  2399,  1817,  1823,  1824,  1830,  2401,  1836,  1837,
    -532,  1858,  1879,  2418,  1880,  1885,  2404,  1886,  1887,  1888,
    1991,  1897,  1898,  1899,  3025,  2424,  1900,   884,  1901,  2429,
    1902,   885,  1916,  1682,  1917,  1918,  1923,  1929,   849,  1932,
    2016,  1935,  1937,  3208,  1940,  1941,  1945,  1950,  1952,  1953,
    3180,  1954,  1966,  2433,  1971,   578,  1980,   585,   588,  1982,
     593,   597,  1992,  1993,  1997,  2020,  2008,  2029,  2009,  2030,
    2036,   886,   887,  2051,  2045,  2052,   888,  2458,  1683,  2443,
    2444,  2057,  2076,  2079,  2446,  2464,  2465,  2110,  2112,  2114,
    2448,  2138,  2137,   682,  1684,  2474,  2475,  2139,  2140,  2144,
    2145,  2196,  2147,   952,  2148,  2484,  2485,  1685,  2149,  2152,
    2205,  2155,   698,   704,  2172,  2188,  2193,   889,   711,  2197,
    2521,  2522,   716,  2207,  2206,  2202,  2208,  2209,  2210,  2212,
    2213,  2532,  2533,  2214,  2215,  2219,  2815,  2816,  2539,  1686,
    2819,  2820,  2230,  2240,  2823,  2824,  2245,  2256,  2542,  2258,
    2260,  2264,  2269,  1687,  2216,  1688,  1689,  2298,  2299,  2300,
    2442,  2311,  2312,  2272,  2317,  2318,  2319,  2322,  2273,  2277,
    2291,  2320,  2321,  2323,  2324,  2325,   890,  2327,  2328,  2329,
     834,   891,  2330,   836,  2331,  2332,  2335,  2156,  2333,  2334,
    2336,  2337,  2338,  2341,   845,  2339,  1690,  2549,  2550,  2340,
    2552,  2342,  2343,  2346,  2877,  2344,  2345,  2347,   892,  2348,
    2349,  2350,   893,  2351,  2352,  2353,  2174,   866,  2369,  2373,
    2381,  2191,  2192,  2376,  2378,   894,  2382,  2383,  2385,  2387,
    2400,  2470,  2406,  2564,  2565,  2566,  2567,  2568,  2569,  2570,
    2571,  2572,  2407,  2408,  2409,  2410,  2445,  2658,  2447,  2450,
    2225,  3113,  2451,  2452,  2454,  2455,  2459,  2578,  2456,  2580,
    2461,  2462,  2463,  2244,  2467,  2468,  2517,  2469,  2471,  2472,
    2473,  2477,  2249,  2250,  2478,  2487,  1056,  2480,  2481,  2588,
     496,  2482,  2483,  1061,  2255,  2592,  1062,  2488,  2528,  2615,
    2489,  1063,  2518,  2519,  2520,  1065,  2595,  2596,  2597,  2598,
    2599,  2600,  2601,  2602,  2603,  2604,  2524,  2525,  2607,  2608,
    2609,  2610,  2611,  2612,  2613,  2614,  2527,  2616,  2617,  2618,
    2529,  2620,  2621,  2530,  2624,  2531,  2625,  2626,  2627,  2535,
    2536,  2619,  2538,  2540,  2541,  2543,  2544,  2864,  2546,  2553,
     496,  2635,  1000,  2555,  3113,  2559,  2562,  2573,  2574,  2989,
    2575,  2576,  2577,  2990,  2581,  2623,  1010,  2628,  2629,  2991,
    2632,  2633,  2636,  2639,  2667,  1018,  2969,  2659,  2660,  2665,
    2669,  2974,  2670,  2671,  2673,  2674,  3196,  2681,  2685,  2686,
    1140,  2687,  2688,  1305,  2689,  2718,  2992,  2721,  2723,  2726,
    2729,  1306,  2650,  2730,  2651,  2732,  2652,  2734,  2654,  1307,
     496,  2656,  2735,  2657,  2736,  2740,  2741,  2749,  2661,  2662,
    2742,  2663,  2664,  3013,  2666,  2743,  2668,  1308,  2744,  2745,
    2750, -1247,  2751,  2684,  1309,  2752,  2753,  2754,  2758,  2676,
    2759,  2677,  2993,  2760,  2767,  2680,  2770,  2778,  2682,  1059,
    1060,  2781,  2784,  2785,  2786,  2789,   120,  2794,  2798,  2814,
    2875,  1310,  1064,  2855,  2859,  2881,  2882,  1067,  2883,  2884,
    2725,   121,  1311,  2887,  2889,  2720,  1079,  2890,  2891,  2896,
    2727,  2728,  2894,  2897,  2898,  2994,  2899,  2901,  2910,  2912,
    2917,  2731,  2924,  2933,   122,  2722,  2942,  2948,  2952,  2958,
    2733,  2966,  2979,  3026,  2737,  2738,  3015,  3027,   738,   739,
     740,  2995,   123,  2746,  2747,  3029,  3030,  1312,  2997,  3031,
    3032,  3033,  2755,  2756,  3034,  1313,  3035,  3036,  2761,  3037,
    3039,  3166,  3045,  3051,  3078,   741,  3075,  3084,  2771,  2772,
    3088,  2787,  3089,  2839,  3090,  3091,  3092,  3093,   742,  2782,
    3095,  2783,  3100,  1347,  3101,  3117,  3127,  3118,  3119,  3120,
    1353,   124,  3121,  3122,   743,  3129,  1142,  1143,  1144,  1145,
    3132,  3143,  3151,  1007,  3154,  3155,  3158,  3176,  1314,  3168,
    3169,  3179,  3205,   125,  3183,  3190,  3191,  3197,  3209,  3210,
    3212,  1315,  3216,  3218,   972,  3219,  3220,  3221,   744,  2792,
    2996,  3110,  3167,  3163,     0,     0,     0,     0,   745,  1316,
    1381,  2799,  2800,  2801,  2802,  2803,  2804,  2805,  2806,  2807,
    2808,  2809,  3171,  3173,     0,     0,     0,  2812,     0,   126,
     746,     0,   496,   496,     0,     0,   496,   496,     0,   747,
     496,   496,  2825,  2826,  2827,  2828,  2829,  2830,     0,  2832,
    2833,  2834,     0,     0,     0,  2848,  2849,  2850,  2851,   748,
    2853,  2854,     0,  2856,  2857,  2858,     0,  2860,  2861,     0,
    2863,     0,   127,  2867,  2868,     0,     0,  1303,     0,     0,
       0,     0,   128,     0,     0,   749,     0,     0,     0,     0,
       0,   129,   130,     0,     0,     0,     0,  2876,     0,     0,
     496,  2878,   131,     0,     0,  2880,  2557,   132,  1470,     0,
    2885,  2886,     0,  2888,     0,     0,     0,     0,  1474,     0,
       0,     0,     0,     0,     0,     0,     0,   750,     0,     0,
       0,     0,   751,     0,     0,     0,     0,  2915,     0,     0,
    2916,     0,     0,  2918,     0,     0,     0,     0,     0,   752,
       0,     0,   753,  2927,     0,     0,     0,  2583,     0,     0,
       0,     0,  2936,     0,     0,     0,     0,  1491,  1492,  2913,
       0,  2945,  1496,     0,     0,  1499,     0,     0,  2947,     0,
       0,     0,     0,     0,     0,     0,     0,  1506,     0,  2951,
       0,     0,   133,     0,     0,  2954,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,     0,     0,     0,
       0,  2960,   163,     0,     0,  2962,     0,     0,     0,   164,
     165,     0,     0,   240,     0,  2963,  2964,     0,     0,     0,
       0,  2968,   496,     0,     0,     0,  2973,   496,  1472,     0,
       0,     0,  2978,     0,     0,  2982,  2983,   241,     0,     0,
     242,     0,  1478,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  3001,  3002,     0,
       0,  3006,     0,  3008,  3009,  3010,     0,  3012,     0,   496,
    3014,     0,     0,     0,  3017,     0,  1658,     0,   243,     0,
       0,     0,     0,  1489,     0,   244,     0,  3028,  3054,     0,
       0,     0,     0,     0,     0,  3055,   245,   246,     0,  3038,
       0,     0,     0,   247,  3057,     0,     0,     0,     0,     0,
       0,     0,     0,  3059,     0,     0,     0,     0,     0,  3062,
    3053,     0,     0,  3064,     0,     0,     0,     0,     0,     0,
       0,     0,   248,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2835,     0,
     791,   792,   249,     0,     0,     0,     0,     0,     0,     0,
    2836,     0,  3065,     0,     0,     0,   793,  3069,     0,  3071,
     250,   251,     0,     0,  1585,  3074,     0,   252,     0,     0,
       0,     0,     0,     0,     0,     0,  1596,     0,  1305,  2837,
    3082,     0,     0,     0,     0,     0,  1306,     0,     0,     0,
       0,     0,   253,     0,  1307,     0,     0,     0,     0,  3099,
     794,     0,     0,     0,     0,     0,  3105,   795,    70,    71,
    3138,     0,  1308,     0,  1653,     0,   796,     0,   797,  1309,
       0,     0,  2838,   798,   121,     0,   799,     0,     0,     0,
       0,     0,   800,     0,     0,  3126,   801,     0,     0,   254,
       0,     0,     0,   802,     0,     0,  1310,     0,     0,     0,
    1740,   803,     0,     0,     0,     0,     0,  1311,     0,     0,
     804,     0,     0,     0,     0,   123,  3141,     0,     0,     0,
       0,  3146,     0,     0,  3148,     0,     0,     0,     0,   805,
       0,  3152,     0,     0,  1914,     0,     0,     0,     0,     0,
       0,     0,  3156,     0,     0,   255,     0,  3159,     0,     0,
       0,     0,  1312,   806,     0,     0,  1804,     0,     0,   256,
    1313,     0,     0,  2870,   124,     0,  1810,     0,     0,     0,
       0,   807,  3178,  3170,  3172,     0,     0,     0,     0,     0,
    1949,     0,     0,     0,   808,   809,  1955,     0,     0,     0,
       0,   257,     0,     0,     0,     0,     0,  1961,     0,  3182,
       0,     0,     0,  3184,     0,  3199,  3186,     0,  3202,   810,
       0,     0,     0,  1314,     0,     0,     0,  3192,  3193,  3194,
    3195,     0,     0,     0,     0,     0,  1315,     0,     0,  3204,
       0,     0,   126,  3207,     0,     0,     0,     0,   811,     0,
    3211,     0,  3213,     0,  1316,     0,     0,     0,     0,     0,
       0,     0,   812,     0,   813,     0,  2839,     0,  2840,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     814,     0,     0,     0,     0,   815,     0,     0,     0,     0,
       0,     0,     0,   816,     0,     0,     0,     0,  1912,     0,
       0,   817,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   131,  1920,     0,     0,     0,
     132,     0,     0,   818,     0,  2841,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   819,   820,
       0,   821,     0,     0,     0,     0,     0,  1948,     0,     0,
       0,     0,     0,     0,     0,  1956,     0,     0,     0,     0,
       0,    70,    71,     0,     0,     0,  1962,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   121,     0,     0,
       0,     0,   822,  1977,     0,     0,     0,     0,     0,    70,
      71,     0,     0,     0,     0,  1989,     0,     0,     0,   335,
    1996,     0,     0,     0,     0,   121,     0,     0,     0,     0,
       0,  3019,     0,     0,     0,  3024,     0,     0,   123,     0,
       0,     0,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
       0,     0,     0,     0,     0,     0,     0,     0,  2243,     0,
       0,     0,     0,     0,  2054,  2055,  2056,   124,     0,     0,
       0,     0,     0,     0,  2058,  2059,  2060,     0,     0,     0,
       0,     0,     0,  2071,  2072,  2073,     0,     0,  2074,  2075,
       0,  2077,  2078,     0,     0,   124,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2297,     0,     0,  2150,  2151,     0,  2303,  2153,
    2154,     0,     0,     0,     0,   126,     0,     0,     0,  3094,
       0,     0,     0,     0,     0,  2157,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   126,     0,     0,     0,  3116,     0,     0,
       0,     0,     0,     0,  2190,     0,     0,     0,   336,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2227,     0,   131,  2228,
       0,     0,     0,   132,  2241,     0,     0,     0,     0,     0,
    2246,  2247,     0,     0,   337,     0,     0,     0,     0,  2252,
       0,   401,     0,  2358,     0,     0,  2253,     0,  2363,   402,
       0,   132,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2386,     0,     0,     0,
       0,     0,     0,     0,  2389,     0,     0,     0,     0,  2296,
    2396,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2307,     0,     0,     0,   338,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2413,  3189,     0,
       0,     0,     0,     0,  2420,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2360,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2384,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   596,     0,     0,     0,     0,     0,  2397,
       0,     0,     0,     0,     0,     0,     0,     0,   121,     0,
       0,     0,  2402,     0,  2403,     0,     0,     0,     0,     0,
       0,  1976,     0,     0,  2412,     0,     0,  2414,  2415,  2416,
    2417,  2419,     0,  2421,     0,  2547,   121,  2422,     0,     0,
       0,     0,  2423,  2425,  2426,  2427,  2428,  2430,     0,   123,
    2431,  2432,   403,     0,     0,   404,  2434,  2435,  2436,  2437,
       0,     0,  2438,  2439,     0,     0,     0,     0,  2561,  2440,
    2441,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2449,     0,     0,     0,     0,     0,     0,   124,     0,
       0,     0,     0,     0,  2457,  2585,  2586,     0,     0,     0,
       0,     0,     0,     0,  2460,     0,     0,     0,     0,  2587,
       0,     0,     0,     0,  2590,  2591,   124,     0,     0,     0,
    2593,  2594,     0,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,     0,     0,     0,     0,     0,   126,     0,     0,     0,
       0,     0,     0,     0,  2630,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2637,  2545,     0,     0,     0,
       0,     0,     0,     0,   126,  2548,     0,     0,  2551,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2556,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2560,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2653,   131,
       0,     0,     0,     0,   132,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2579,     0,     0,
       0,     0,  2672,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   132,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2691,     0,     0,     0,     0,  2695,     0,     0,     0,     0,
       0,  2700,     0,     0,     0,     0,  2704,     0,     0,     0,
    2707,     0,  2709,     0,  2711,     0,     0,  2714,     0,  2716,
       0,  2622,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2638,     0,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2675,     0,     0,  1771,     0,     0,
       0,     0,  1772,     0,     0,     0,     0,     0,     0,     0,
    2683,     0,     0,     0,     0,     0,     0,  2690,     0,  1187,
       0,     0,     0,     0,  1188,     0,     0,  1773,  1774,     0,
    1775,  1776,     0,     0,     0,     0,     0,     0,     0,  2708,
       0,     0,  1777,     0,     0,     0,     0,     0,  2717,     0,
       0,     0,  2719,     0,     0,     0,  1778,  1779,     0,     0,
       0,     0,  2724,     0,  1780,     0,     0,  1781,     0,     0,
    2862,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1782,  2874,     0,     0,     0,
       0,     0,     0,     0,  1783,  1784,     0,     0,  1785,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2762,  2763,  2764,  2765,  2766,     0,  2768,  2769,
    1786,  2895,     0,  2773,  2774,  2775,  2776,  2777,  2902,  2779,
    2780,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2790,     0,     0,  2793,
       0,     0,     0,     0,     0,  2909,     0,  2911,  2797,     0,
       0,  1787,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2810,     0,     0,  2813,     0,     0,
       0,     0,     0,     0,  2818,     0,     0,  2821,  2822,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,     0,     0,     0,
       0,     0,     0,     0,     0,  2955,  1788,     0,  2871,  2872,
       0,  2959,  1789,     0,   121,  2961,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   566,     0,     0,
    1790,  2967,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1791,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2900,   567,   568,     0,     0,     0,
       0,   569,     0,  1792,  1793,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  3022,
    3023,     0,     0,     0,   570,   571,     0,  1794,     0,  2914,
       0,     0,     0,   699,   124,   121,     0,     0,  2919,  2920,
    2921,  2922,  2923,     0,  2925,  2926,     0,  2928,  2929,  2930,
    2931,  2932,     0,  2934,  2935,     0,  2937,  2938,  2939,  2940,
    2941,     0,  2943,  2944,     0,  2946,     0,     0,     0,     0,
       0,     0,     0,     0,  1795,  2949,  2950,     0,   700,     0,
       0,     0,     0,     0,     0,     0,  2953,     0,     0,     0,
       0,     0,     0,     0,     0,  2956,     0,     0,     0,     0,
       0,     0,   126,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   572,     0,     0,
       0,     0,     0,     0,     0,   124,     0,     0,     0,  2977,
       0,     0,     0,     0,     0,     0,  3086,   573,     0,     0,
    2988,   701,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   574,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     132,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   126,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  3044,     0,     0,     0,  3050,     0,     0,
       0,     0,     0,   702,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  3056,     0,     0,     0,     0,   575,     0,     0,     0,
    3058,     0,     0,     0,     0,     0,     0,   576,     0,  3060,
       0,  3061,     0,     0,  3162,  3063,     0,     0,     0,     0,
       0,     0,     0,     0,  3067,  3068,     0,  3070,     0,     0,
       0,   132,  3072,  3073,     0,     0,     0,     0,  3174,  3076,
       0,     0,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
       0,   577,     0,     0,     0,     0,  3106,     0,     0,     0,
       0,     0,     0,     0,     0,  3200,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  3214,   703,     0,  3215,
       0,  3130,     0,     0,     0,     0,     0,     0,     0,  3133,
       0,  3134,     0,  3135,     0,     0,  3136,     0,  3137,     0,
    1209,  1210,  1211,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,     0,  1212,  1213,     0,     0,  1214,     0,     0,  1215,
       0,     0,     0,     0,     0,     0,     0,  1216,     0,     0,
       0,  1217,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1218,  1219,     0,     0,     0,     0,     0,     0,  1220,
    1221,     0,   121,     0,  1518,  1519,  1520,     0,     0,  3177,
    1222,     0,     0,     0,     0,     0,     0,  1223,     0,     0,
       0,     0,     0,     0,     0,  1224,     0,     0,  3187,  1225,
    1226,     0,     0,  1227,   121,     0,  1521,  1522,     0,     0,
    1523,     0,  3198,   123,     0,  3201,     0,  1524,     0,     0,
       0,  1525,     0,  1228,     0,  1526,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1527,  1528,     0,     0,     0,
       0,     0,     0,  1529,     0,   123,     0,  1229,     0,     0,
       0,     0,     0,     0,  1530,     0,     0,     0,     0,     0,
       0,   121,   124,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1531,  1532,     0,  1230,  1533,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   124,     0,     0,  1534,     0,     0,
       0,     0,   121,  1231,     0,   583,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1535,     0,     0,     0,     0,     0,     0,     0,     0,
     126,     0,     0,     0,   121,     0,     0,     0,     0,  1232,
       0,  1233,     0,  1584,     0,     0,     0,  1234,  1235,     0,
    1536,   124,     0,     0,     0,     0,     0,     0,     0,     0,
    1537,     0,   126,     0,  1236,  1237,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1238,  1239,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   124,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   131,     0,     0,     0,  1240,   132,  1241,
       0,     0,     0,  1538,     0,  1539,  2411,     0,     0,   126,
       0,  1540,  1541,  1242,   124,  1243,     0,     0,     0,     0,
       0,     0,  1244,     0,     0,   131,     0,     0,     0,  1542,
     132,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1543,     0,     0,     0,     0,     0,     0,     0,     0,
     126,     0,     0,     0,     0,     0,  1245,     0,     0,     0,
       0,     0,     0,   587,     0,     0,     0,     0,     0,     0,
       0,  1544,     0,  1545,     0,     0,     0,     0,     0,     0,
       0,     0,   126,     0,     0,  1546,     0,   132,     0,     0,
       0,     0,     0,     0,     0,     0,  1547,     0,     0,     0,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   132,     0,
    1548,     0,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     132,  1629,     0,   584,     0,     0,     0,     0,   121,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   124,     0,
       0,     0,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,     0,     0,
       0,     0,     0,     0,     0,     0,   126,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,  1630,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   132,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,     1,     0,     0,     2,     0,     0,
       3,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     4,     0,     0,     0,     0,     0,
       5,     6,     0,     0,     0,     7,     8,     9,     0,     0,
       0,     0,     0,     0,     0,    10,     0,     0,     0,     0,
       0,     0,    11,     0,    12,    13,     0,     0,     0,     0,
       0,     0,     0,     0,    14,    15,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      16,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      17,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    18,     0,     0,     0,     0,     0,    19,
       0,     0,     0,    20,     0,     0,     0,    21,    22,     0,
       0,     0,     0,    23,    24,     0,     0,    25,     0,     0,
       0,     0,     0,    26,     0,     0,     0,     0,     0,    27,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      28,     0,     0,     0,    29,    30,    31,     0,     0,    32,
      33,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    34,     0,     0,     0,    35,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    36,     0,
      37,    38,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    39,     0,    40,     0,     0,   192,     0,
       0,   193,    41,     0,   194,     0,    42,     0,     0,     0,
      43,     0,    44,    45,     0,    46,     0,     0,     0,     0,
      47,     0,     0,     0,     0,   195,     0,     0,     0,   196,
     197,   198,     0,     0,     0,     0,    48,     0,     0,   199,
       0,   200,    49,     0,     0,     0,   201,     0,   202,   203,
     204,     0,     0,     0,     0,     0,   205,     0,   206,     0,
       0,    50,    51,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    52,     0,    53,     0,     0,
       0,     0,     0,     0,    54,     0,     0,    55,    56,     0,
       0,     0,     0,   207,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   208,     0,     0,     0,     0,    57,     0,
       0,     0,   209,     0,   210,   211,    58,   212,   213,     0,
       0,   214,     0,     0,     0,   215,     0,   216,     0,     0,
       0,     0,     0,   217,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   218,   219,     0,     0,     0,   220,     0,
       0,     0,     0,     0,     0,     0,   221,     0,     0,     0,
     222,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   223,     0,   224,     0,     0,     0,     0,     0,
       0,   225,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   226,     0,   227,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   228,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   229,   230,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   231,     0,     0,     0,
       0,     0,     0,     0,   232,     0,     0,     0,     0,     0,
     233,     0,   234,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     235
};

static const yytype_int16 yycheck[] =
{
       3,    56,   556,   813,  1461,  1715,  1073,   319,    11,   808,
     809,     4,  1958,    16,  1960,     0,    37,  1729,     4,     5,
       4,   510,    16,     4,     5,     4,     4,     4,    28,    26,
      28,   520,     5,     5,    37,     3,     4,     5,    33,     5,
    1752,    49,     5,    46,    85,     5,    21,     4,   191,     5,
      33,    65,    55,    65,     5,    58,     3,     4,    61,    33,
       3,     4,    65,    16,   155,    68,     4,    16,    13,    21,
      73,    74,  1210,   105,    77,    42,  1177,    80,    81,  1180,
      20,    84,     3,     4,    87,    88,     3,     4,    91,    46,
      60,    94,    49,     4,    97,    21,    46,    88,     3,     4,
    1201,   185,     3,     4,     4,   112,   127,    68,    47,    15,
     113,   114,   115,   116,   117,   118,   259,     3,     4,     4,
      65,     5,   167,  1368,    63,   122,    83,  1372,     3,     4,
     148,   134,    37,     5,    91,   107,    37,     4,     5,   246,
      71,   138,     5,   115,    94,   131,     3,     4,  2912,    88,
     131,     4,   154,   114,   154,   196,   154,  1402,  1403,  1404,
      60,     3,     4,    90,   177,    18,   169,    18,     5,   108,
      16,  1061,  1062,  1063,   131,     4,    60,   138,   154,   200,
     107,   202,    48,   204,   205,   327,    70,    16,     4,   128,
     333,    27,   195,   132,   215,    32,   209,   200,   200,    34,
       3,     4,   159,     4,    71,    71,   213,   186,   146,   300,
      95,   232,    16,     3,     4,   171,    52,   308,     4,    55,
     304,   132,    88,   149,   200,   164,   165,   210,    95,     4,
     179,    67,   225,   154,    15,    65,   210,     3,     4,   236,
     233,   234,   147,   350,   230,   286,   147,   132,     4,   230,
    1140,   218,   297,   239,   240,    71,    92,   254,   239,   240,
     106,   218,     3,     4,   131,   283,   213,   299,   218,   265,
      71,   216,   275,   230,   110,  3039,   260,   220,   131,   200,
     250,   274,   239,   240,    21,    71,   289,  3051,   227,   156,
     345,     3,     4,    48,   251,     5,   253,    21,   273,   238,
     172,   173,  1112,   311,   307,   308,     3,     4,   225,   270,
     261,   325,    63,   325,    69,   131,    71,   338,   224,   155,
     323,   273,   325,   189,   297,   282,   287,   288,   323,   269,
     131,   322,   335,   336,   290,   338,   339,   351,   341,   351,
     323,   341,   327,   341,   297,   131,   309,   273,   351,   323,
     250,   329,   329,   337,   340,   328,   131,   302,     4,   340,
     849,   364,   365,   230,     4,   346,   250,     4,   313,   308,
     309,   213,   239,   240,   346,   131,   357,   230,   357,   232,
     306,   232,   350,   340,   350,   388,   239,   240,   391,   392,
     350,   394,    16,   349,   337,   398,   399,   394,   391,   337,
     357,   348,   396,    21,   390,   350,   409,   410,    71,   390,
     282,   397,   398,   416,   230,   727,   397,   398,   421,   422,
     337,   284,    65,   239,   240,  1235,   429,   388,   389,   230,
     433,    71,   337,   390,   237,    21,   337,   241,   239,   240,
     397,   398,    65,  1253,   230,   392,   393,   386,     5,   452,
     453,   337,   207,   239,   240,   230,   459,   460,   461,   462,
     463,   464,   337,   466,   239,   240,   469,   470,   321,   335,
     321,   237,   213,   340,   230,  2187,     3,     4,   219,   346,
     337,    65,  1939,   239,   240,   351,    31,   340,   509,   492,
    1289,   131,    68,   496,   131,   325,    14,    15,   501,   502,
     503,   504,   505,   506,    22,   508,   348,   510,   511,   512,
      37,   135,    30,     4,  2226,    42,    27,   520,   521,   274,
      38,   351,  1321,   390,   340,   266,   172,   173,   395,  1018,
     397,   398,     3,     4,   338,  1673,   273,   390,   114,   340,
      31,    65,    60,  1644,   397,   398,  1647,   259,   132,   273,
     392,   393,    68,   294,   340,   325,    42,   102,   309,     4,
      78,    94,   259,   399,  1702,   340,   190,     3,     4,  3112,
     325,    42,    11,   329,   390,   221,  1065,   580,   581,     4,
     335,   397,   398,   604,   340,    27,   259,  1725,   130,   390,
     230,    42,    63,   230,   121,   598,   397,   398,   114,   239,
     240,  1491,   239,   240,   390,   144,   279,   348,     4,  1499,
     121,   397,   398,  1858,   171,   390,     5,   241,    57,    27,
     147,  3164,   397,   398,    35,   680,    24,    25,    95,     5,
      42,   634,    65,    54,   390,   121,   282,   658,   183,    78,
      16,   397,   398,     4,   177,     3,     4,    71,    65,  2833,
     121,   392,   393,    13,    14,   273,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,    13,    14,   265,   108,
     121,  2855,    13,    14,   677,  2859,   187,     3,     4,   121,
       5,  2865,   325,   225,   321,    42,   107,   273,    13,    14,
     181,   130,    65,   220,   270,   134,    61,   118,    65,   132,
     340,    12,   325,   340,    58,    65,   117,   105,   351,   121,
     149,   287,   288,   121,   338,   132,   771,   219,    65,   143,
     259,   297,   725,     4,    65,  2671,    65,     5,   351,   313,
     151,  1541,   735,   290,   220,   790,     0,     3,     4,   128,
      65,   286,  1552,    97,   177,   187,   308,   292,   162,   220,
     390,   175,     5,   390,   270,   246,   224,   397,   398,   132,
     397,   398,   273,     4,   121,   132,   180,    48,    95,   220,
      51,   287,   288,   291,   219,     4,    42,     3,     4,   137,
     145,    65,   273,   172,   173,   788,   325,   305,   306,   167,
      71,    69,   294,   132,   219,    94,  2980,  2981,    65,   126,
    2984,   325,  2986,   157,   807,     3,     4,   810,   220,    90,
     337,   279,   388,   389,   325,  2999,  3000,   303,     5,   337,
     231,  3005,  3006,   259,  3008,   136,   107,   351,  3012,   218,
     833,   273,   113,  3017,  3018,   838,   839,   840,   841,   391,
      65,   844,     5,   846,   268,   848,   849,   850,   132,    65,
       4,   259,   303,   278,   322,   121,   216,   217,  1347,    85,
     331,   286,    60,   220,   219,   132,   384,   385,   386,   216,
     217,   389,   388,   389,   252,   216,   217,    94,   177,     5,
     313,     5,    65,   325,   211,   166,   941,    13,    14,    13,
      14,   216,   217,   282,  3078,   260,   313,  3081,   337,   225,
       4,   228,  3086,   327,   215,     4,    60,   132,   189,   138,
     275,    13,    14,   431,  3098,  1982,   132,  3101,   339,   297,
     309,  3105,   925,     0,   927,    65,     5,     4,   282,   932,
     933,   286,   935,   936,   937,   938,   939,     3,     4,    65,
     313,    65,   302,    32,    13,    14,   313,    26,     4,   132,
     953,   954,     5,   313,   314,   302,    31,   960,   961,    65,
     177,   302,    94,    65,   342,  2066,   313,   314,     3,     4,
     196,   298,   313,   314,   313,   155,   115,   302,   981,   982,
     983,   984,   985,   348,   987,  2086,   989,   990,   313,   314,
     350,     4,   132,   318,    60,  2096,    65,  3181,  2099,     5,
      94,  3185,    65,   350,     4,  2106,   235,  1496,    27,   350,
    1013,  1014,  1015,    69,  1017,  1018,  1019,  1816,  1021,   346,
    2121,  3205,  1043,  2124,   305,   350,   132,  2165,  2982,   313,
     357,  2132,   172,   173,  2135,  3219,     3,     4,  3222,  3223,
    1043,    65,  1045,   122,     4,   177,   313,  3001,     4,     5,
      27,    11,   250,   334,   335,  1058,    69,  2195,    94,   138,
     286,   220,  1065,  1066,     4,    27,   347,   128,  1071,   132,
     351,  1961,  2317,  2318,  2319,  2320,  2321,  2322,  2323,  2324,
    2325,     3,     4,   177,   223,  1088,  2224,    27,   313,  1092,
     216,   217,   216,   217,    32,     5,   250,   313,    48,    39,
     179,   153,   121,  1106,  1107,  1108,   181,    65,   132,   231,
      65,  1114,    52,    65,   216,   217,  1119,    65,     3,     4,
     300,    71,     3,     4,    22,     5,    66,    67,   308,    71,
     313,  1134,  1187,    13,    14,     3,     4,  1176,    88,    38,
     192,   177,   282,   327,   121,   284,    31,   216,   217,   201,
    1153,    50,    90,     4,     5,    53,    34,   236,    56,   121,
       3,     4,   100,     3,     4,    13,    14,     4,     5,   107,
     137,   246,    22,   313,   132,   254,   302,   132,   302,    60,
     132,   192,    81,    20,   132,    65,  1185,   313,   314,   313,
     314,    89,   318,  1192,   318,    63,    71,  3151,   273,     5,
     302,   719,    96,    53,  3158,   144,    56,   313,   115,    59,
      89,   313,   314,  2397,   191,   137,  2354,    65,    15,   737,
      63,   266,   120,    63,   350,   123,   350,    64,  1231,   191,
    2414,  2415,  2416,   302,    71,  2419,    71,  2421,  2422,    89,
     259,  2425,  2426,  2427,   313,   314,  2430,  2431,   350,  1252,
     313,  2435,   191,  2437,  2438,   325,  2440,   207,    29,  1262,
      96,   199,  3216,   100,  3218,     4,     5,   389,   167,    48,
     120,   326,    51,   123,    79,   397,  1279,   399,  1281,  2989,
      32,   350,   259,  1286,  1287,  1288,    77,   124,  1186,   313,
     169,   231,    71,  1296,   812,  1193,  1299,   259,  1301,   817,
       5,   101,   242,   243,   244,   245,   143,    38,    13,    14,
      13,    14,    71,   212,   252,  1318,   223,  1320,     4,    50,
     259,   121,     5,   160,   274,  1328,  1329,     4,   107,     4,
     167,     3,     4,     4,   113,     5,   216,   217,   175,     4,
    1343,  1344,     4,     5,  1347,  1348,  1349,     5,    89,     5,
      81,   289,  1355,     4,  1357,   313,    42,  1360,   313,  1362,
      65,   313,    65,   261,  2548,   313,     5,  2551,   216,   217,
      42,     5,  2556,  1428,     4,   325,  2560,   284,   257,   258,
       3,     4,   153,     5,   322,   335,   325,   166,    11,    44,
      45,     5,   291,   272,  2495,  2579,   336,   168,   296,     5,
     237,   192,   301,  2504,     5,  1408,     4,  2297,   926,     4,
    1413,   261,  2513,   213,  1417,     4,  1419,  1420,     4,  1440,
       5,  1424,   302,     4,   261,   105,   197,     5,   169,   266,
     201,   268,   132,   313,   314,   121,   167,  1440,   318,  1442,
     319,  1444,  1445,  1446,  1447,     4,   296,  1450,  1451,   121,
    1453,  1454,   351,  1456,   302,  1458,   213,     4,  1461,   296,
     297,    29,   219,  2601,     4,   313,   314,     4,   305,  2607,
     350,  1474,     3,     4,  2612,     3,     4,   327,  1481,   997,
    1501,   212,  1485,  1486,  1487,     4,   172,   173,    16,   280,
     327,  2675,   263,  1496,  1497,     3,     4,  1500,  1519,     5,
     291,     4,   350,     3,     4,  1508,  2396,  1510,   225,   266,
    1513,   216,   217,   216,   217,     5,   257,   258,   638,     3,
       4,   641,   642,     4,  2708,    36,   305,    11,     4,     5,
    2420,   272,     4,     5,   220,   221,   307,   294,    69,   194,
     195,     4,    42,     4,     5,   316,   317,     4,   220,   386,
       3,     4,     5,     6,     7,   334,   335,  1560,     4,  1562,
     291,     8,  1565,  1566,     4,  1568,     4,  1570,   347,  1608,
     301,   226,   351,  1576,     3,     4,     5,  1580,   319,   498,
     499,  1620,    71,     3,     4,   153,  1589,     4,     8,     9,
      10,   348,     4,   324,  1168,  1169,   282,   302,    87,   302,
     168,   332,     4,  1642,  1643,   116,  2790,    96,   313,   314,
     313,   314,     4,   318,    57,     3,     4,     5,   107,  2827,
     351,   121,  2830,     4,  2832,    10,  2810,     5,   391,   197,
     141,   142,   308,   201,  2818,    78,   393,  2821,  2822,   150,
    2848,  2849,     3,     4,     5,   350,   192,   350,  1669,     4,
       4,   201,    95,   192,   143,     3,     4,     5,     6,     7,
    2868,     4,   224,   174,     4,   108,   224,  1670,  1671,  1672,
       5,     3,     4,   184,     6,     7,     5,     4,   167,     3,
       4,     5,     6,     7,     4,   214,   224,   130,   214,  1692,
     259,   134,    71,  2831,  1697,   263,    71,  2587,    71,     5,
     260,     5,     4,     4,     4,     4,   149,     4,   224,  2847,
       5,    94,    94,     5,  2852,     5,     4,    94,    94,     4,
    1723,  1724,     5,     5,     4,   319,     5,   107,     4,     4,
      16,  1734,     5,     4,   223,    16,  1739,     4,     4,   307,
    2630,  1259,     4,  1746,     5,   105,     5,  2637,   316,   317,
      94,     4,     4,    94,  2243,   198,    94,     5,  1761,     5,
      94,     5,     5,     5,  1767,     4,    69,     5,  1771,     5,
    1773,  1774,  2956,  1776,  1777,  1778,     4,  1780,     4,   268,
    1783,  1784,  1785,     5,  1787,  1788,  1789,  1790,  1791,  1792,
    1793,  1794,     5,  2977,     5,  1798,  1799,  1800,  1801,  1317,
       4,     4,     4,    11,     5,  1808,  1809,     4,   297,  1812,
    1813,  1814,    42,  1331,  2303,  1818,  1819,  2707,    11,  2709,
       5,  2711,     4,     4,  2714,     5,  2716,     4,  1831,  1832,
       4,  1834,  1835,     4,     4,   186,     5,     4,   177,     5,
       5,    71,     4,   329,     5,     4,   177,     4,    40,     5,
       4,    40,   319,    37,   343,   296,   345,   296,     5,   321,
       4,     4,     4,   273,   273,     5,     5,     5,     5,     4,
       4,   241,     5,     5,  2363,   310,   310,   107,     5,     5,
       5,     4,     4,  3067,  3068,   115,  3070,     5,  3072,  3073,
       5,   121,  3076,     5,     5,     5,     5,  1918,     4,     4,
     115,     5,     5,  1906,     4,  1908,  1909,     5,     5,   273,
    1913,   273,     5,   143,     4,  1918,  1919,   115,  1921,  1922,
    1923,    42,  1925,  1926,    65,  1928,   273,  1930,  1931,     5,
    1933,  1934,   115,  1936,    42,  1938,  1939,   167,     5,     4,
     273,     5,   279,   127,     5,   241,    59,   241,  1951,     4,
    1468,  1469,   241,     4,  3138,   185,  1959,     4,   121,     5,
       5,  1964,  1965,     5,     5,     5,     4,  1970,   121,     4,
       0,     5,     5,  1994,     5,     4,  1979,     5,     5,     4,
     273,     5,     5,     4,  2874,  2006,     5,   128,     5,  2010,
       4,   132,     5,   223,     5,    11,    11,     4,   340,     4,
     191,     5,     5,  3187,     5,     5,     5,     4,     4,     4,
    3148,     4,     4,  2016,     5,   199,     4,   201,   202,     5,
     204,   205,   273,   273,   273,   259,   273,     4,   273,   284,
     237,   172,   173,     4,   224,     4,   177,  2076,   268,  2042,
    2043,     4,     4,     4,  2047,  2084,  2085,     5,     5,     5,
    2053,     5,   310,   237,   284,  2094,  2095,     5,     5,     4,
       4,   273,     5,   405,     4,  2104,  2105,   297,     4,     4,
     354,     5,   256,   257,     5,     5,     5,   218,   262,   273,
    2119,  2120,   266,     4,   354,   273,     4,     4,     4,     4,
       4,  2130,  2131,     4,   354,     4,  2585,  2586,  2137,   329,
    2589,  2590,     5,     4,  2593,  2594,     5,     5,  2147,     5,
     259,   259,     4,   343,   354,   345,   346,     5,     4,     4,
     101,     5,     4,   259,     5,     5,     4,     4,   259,   259,
     259,     5,     5,     5,     5,     4,   277,     5,     5,     4,
     324,   282,     5,   327,     5,     4,     4,  1665,     5,     5,
       5,     5,     4,     4,   338,     5,   386,  2160,  2161,     5,
    2163,     4,     4,     4,  2653,     5,     5,     4,   309,     5,
       5,     4,   313,     5,     5,     4,  1694,   361,     5,     4,
       4,  1699,  1700,     5,     5,   326,     4,     4,     4,     4,
       4,   310,     5,  2196,  2197,  2198,  2199,  2200,  2201,  2202,
    2203,  2204,     5,     5,     5,     5,     4,    11,     5,     5,
    1728,  3021,     5,     5,     4,     4,     4,  2220,     5,  2222,
       5,     5,     5,  1741,     4,     4,   310,     5,     5,     5,
       5,     4,  1750,  1751,     4,     4,   578,     5,     5,  2242,
    2243,     5,     5,   585,  1762,  2248,   588,     4,   310,   350,
       5,   593,     5,     5,     5,   597,  2259,  2260,  2261,  2262,
    2263,  2264,  2265,  2266,  2267,  2268,     4,     4,  2271,  2272,
    2273,  2274,  2275,  2276,  2277,  2278,     5,  2280,  2281,  2282,
       5,  2284,  2285,     5,  2287,     5,  2289,  2290,  2291,     4,
       4,   350,     5,     4,     4,     4,     4,   350,     5,     5,
    2303,  2304,   486,     5,  3114,     5,     5,     4,     4,   400,
       5,     4,     4,   400,     5,     5,   500,     4,     4,   400,
       5,     5,     4,     4,     4,   509,  2815,     5,     5,     5,
       4,  2820,     4,     4,     4,     4,  3174,     5,     5,     5,
     682,     5,     5,    99,     5,     4,   400,     5,     4,     4,
       4,   107,  2355,     4,  2357,     4,  2359,     5,  2361,   115,
    2363,  2364,     5,  2366,     5,     4,     4,     4,  2371,  2372,
       5,  2374,  2375,  2862,  2377,     5,  2379,   133,     5,     5,
       4,   327,     5,  2404,   140,     5,     5,     5,     4,  2392,
       4,  2394,   400,     5,     4,  2398,     4,     4,  2401,   583,
     584,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,   167,   596,     5,     5,     5,     5,   601,     4,     4,
    2459,    19,   178,     4,     4,  2446,   610,     4,     4,     4,
    2469,  2470,     5,     5,     4,   400,     5,     5,     5,     4,
       4,  2480,     4,     4,    42,  2448,     4,     4,     4,     4,
    2489,     4,     4,     4,  2493,  2494,     5,     5,    71,    72,
      73,   400,    60,  2502,  2503,     5,     4,   223,   400,     4,
       4,     4,  2511,  2512,     4,   231,     4,     4,  2517,     4,
       4,   400,     5,     4,     4,    98,     5,     4,  2527,  2528,
       5,  2546,     4,   327,     5,     5,     5,     4,   111,  2538,
       4,  2540,     4,   845,     5,     4,  3038,     5,     5,     4,
     852,   109,     4,     4,   127,     4,   700,   701,   702,   703,
       4,     4,     4,   497,     5,     4,     4,     4,   284,     5,
       5,     4,     4,   131,     5,     5,     5,     5,     5,     5,
       5,   297,     4,     4,   437,     5,     5,     5,   161,  2552,
    2842,  3019,  3114,  3110,    -1,    -1,    -1,    -1,   171,   315,
     888,  2564,  2565,  2566,  2567,  2568,  2569,  2570,  2571,  2572,
    2573,  2574,  3126,  3127,    -1,    -1,    -1,  2580,    -1,   177,
     193,    -1,  2585,  2586,    -1,    -1,  2589,  2590,    -1,   202,
    2593,  2594,  2595,  2596,  2597,  2598,  2599,  2600,    -1,  2602,
    2603,  2604,    -1,    -1,    -1,  2608,  2609,  2610,  2611,   222,
    2613,  2614,    -1,  2616,  2617,  2618,    -1,  2620,  2621,    -1,
    2623,    -1,   220,  2626,  2627,    -1,    -1,   811,    -1,    -1,
      -1,    -1,   230,    -1,    -1,   248,    -1,    -1,    -1,    -1,
      -1,   239,   240,    -1,    -1,    -1,    -1,  2650,    -1,    -1,
    2653,  2654,   250,    -1,    -1,  2658,  2174,   255,  1000,    -1,
    2663,  2664,    -1,  2666,    -1,    -1,    -1,    -1,  1010,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   290,    -1,    -1,
      -1,    -1,   295,    -1,    -1,    -1,    -1,  2726,    -1,    -1,
    2729,    -1,    -1,  2732,    -1,    -1,    -1,    -1,    -1,   312,
      -1,    -1,   315,  2742,    -1,    -1,    -1,  2225,    -1,    -1,
      -1,    -1,  2751,    -1,    -1,    -1,    -1,  1059,  1060,  2722,
      -1,  2760,  1064,    -1,    -1,  1067,    -1,    -1,  2767,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1079,    -1,  2778,
      -1,    -1,   340,    -1,    -1,  2784,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   381,   382,   383,   384,    -1,    -1,    -1,
      -1,  2794,   390,    -1,    -1,  2798,    -1,    -1,    -1,   397,
     398,    -1,    -1,    19,    -1,  2808,  2809,    -1,    -1,    -1,
      -1,  2814,  2815,    -1,    -1,    -1,  2819,  2820,  1002,    -1,
      -1,    -1,  2825,    -1,    -1,  2828,  2829,    43,    -1,    -1,
      46,    -1,  1016,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2850,  2851,    -1,
      -1,  2854,    -1,  2856,  2857,  2858,    -1,  2860,    -1,  2862,
    2863,    -1,    -1,    -1,  2867,    -1,  1208,    -1,    84,    -1,
      -1,    -1,    -1,  1057,    -1,    91,    -1,  2880,  2917,    -1,
      -1,    -1,    -1,    -1,    -1,  2924,   102,   103,    -1,  2892,
      -1,    -1,    -1,   109,  2933,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2942,    -1,    -1,    -1,    -1,    -1,  2948,
    2913,    -1,    -1,  2952,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   138,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    -1,
       4,     5,   158,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    -1,  2955,    -1,    -1,    -1,    20,  2960,    -1,  2962,
     176,   177,    -1,    -1,  1148,  2968,    -1,   183,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1162,    -1,    99,   100,
    2983,    -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,
      -1,    -1,   208,    -1,   115,    -1,    -1,    -1,    -1,  3002,
      64,    -1,    -1,    -1,    -1,    -1,  3009,    71,     3,     4,
    3065,    -1,   133,    -1,  1200,    -1,    80,    -1,    82,   140,
      -1,    -1,   143,    87,    19,    -1,    90,    -1,    -1,    -1,
      -1,    -1,    96,    -1,    -1,  3038,   100,    -1,    -1,   255,
      -1,    -1,    -1,   107,    -1,    -1,   167,    -1,    -1,    -1,
    1234,   115,    -1,    -1,    -1,    -1,    -1,   178,    -1,    -1,
     124,    -1,    -1,    -1,    -1,    60,  3069,    -1,    -1,    -1,
      -1,  3074,    -1,    -1,  3077,    -1,    -1,    -1,    -1,   143,
      -1,  3084,    -1,    -1,  1426,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  3095,    -1,    -1,   311,    -1,  3100,    -1,    -1,
      -1,    -1,   223,   167,    -1,    -1,  1290,    -1,    -1,   325,
     231,    -1,    -1,  2631,   109,    -1,  1300,    -1,    -1,    -1,
      -1,   185,  3143,  3126,  3127,    -1,    -1,    -1,    -1,    -1,
    1472,    -1,    -1,    -1,   198,   199,  1478,    -1,    -1,    -1,
      -1,   357,    -1,    -1,    -1,    -1,    -1,  1489,    -1,  3152,
      -1,    -1,    -1,  3156,    -1,  3176,  3159,    -1,  3179,   223,
      -1,    -1,    -1,   284,    -1,    -1,    -1,  3170,  3171,  3172,
    3173,    -1,    -1,    -1,    -1,    -1,   297,    -1,    -1,  3182,
      -1,    -1,   177,  3186,    -1,    -1,    -1,    -1,   252,    -1,
    3193,    -1,  3195,    -1,   315,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   266,    -1,   268,    -1,   327,    -1,   329,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     284,    -1,    -1,    -1,    -1,   289,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   297,    -1,    -1,    -1,    -1,  1422,    -1,
      -1,   305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   250,  1440,    -1,    -1,    -1,
     255,    -1,    -1,   327,    -1,   386,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   342,   343,
      -1,   345,    -1,    -1,    -1,    -1,    -1,  1471,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1479,    -1,    -1,    -1,    -1,
      -1,     3,     4,    -1,    -1,    -1,  1490,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,   386,  1507,    -1,    -1,    -1,    -1,    -1,     3,
       4,    -1,    -1,    -1,    -1,  1519,    -1,    -1,    -1,    41,
    1524,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,  2869,    -1,    -1,    -1,  2873,    -1,    -1,    60,    -1,
      -1,    -1,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1740,    -1,
      -1,    -1,    -1,    -1,  1590,  1591,  1592,   109,    -1,    -1,
      -1,    -1,    -1,    -1,  1600,  1601,  1602,    -1,    -1,    -1,
      -1,    -1,    -1,  1609,  1610,  1611,    -1,    -1,  1614,  1615,
      -1,  1617,  1618,    -1,    -1,   109,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1804,    -1,    -1,  1651,  1652,    -1,  1810,  1655,
    1656,    -1,    -1,    -1,    -1,   177,    -1,    -1,    -1,  2997,
      -1,    -1,    -1,    -1,    -1,  1669,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   177,    -1,    -1,    -1,  3025,    -1,    -1,
      -1,    -1,    -1,    -1,  1698,    -1,    -1,    -1,   220,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1730,    -1,   250,  1733,
      -1,    -1,    -1,   255,  1738,    -1,    -1,    -1,    -1,    -1,
    1744,  1745,    -1,    -1,   266,    -1,    -1,    -1,    -1,  1753,
      -1,    15,    -1,  1915,    -1,    -1,  1760,    -1,  1920,    23,
      -1,   255,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1948,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1956,    -1,    -1,    -1,    -1,  1803,
    1962,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1815,    -1,    -1,    -1,   337,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1989,  3166,    -1,
      -1,    -1,    -1,    -1,  1996,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   380,   381,
     382,   383,   384,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
     384,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1918,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1945,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     4,    -1,    -1,    -1,    -1,    -1,  1963,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    -1,  1976,    -1,  1978,    -1,    -1,    -1,    -1,    -1,
      -1,     4,    -1,    -1,  1988,    -1,    -1,  1991,  1992,  1993,
    1994,  1995,    -1,  1997,    -1,  2157,    19,  2001,    -1,    -1,
      -1,    -1,  2006,  2007,  2008,  2009,  2010,  2011,    -1,    60,
    2014,  2015,   276,    -1,    -1,   279,  2020,  2021,  2022,  2023,
      -1,    -1,  2026,  2027,    -1,    -1,    -1,    -1,  2190,  2033,
    2034,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2057,    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,
      -1,    -1,    -1,    -1,  2070,  2227,  2228,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2080,    -1,    -1,    -1,    -1,  2241,
      -1,    -1,    -1,    -1,  2246,  2247,   109,    -1,    -1,    -1,
    2252,  2253,    -1,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
     384,    -1,    -1,    -1,    -1,    -1,   177,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2296,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2307,  2152,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   177,  2159,    -1,    -1,  2162,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2173,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2189,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2360,   250,
      -1,    -1,    -1,    -1,   255,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2221,    -1,    -1,
      -1,    -1,  2384,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   255,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2412,    -1,    -1,    -1,    -1,  2417,    -1,    -1,    -1,    -1,
      -1,  2423,    -1,    -1,    -1,    -1,  2428,    -1,    -1,    -1,
    2432,    -1,  2434,    -1,  2436,    -1,    -1,  2439,    -1,  2441,
      -1,  2285,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2308,    -1,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   383,   384,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,   384,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2388,    -1,    -1,    22,    -1,    -1,
      -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2404,    -1,    -1,    -1,    -1,    -1,    -1,  2411,    -1,   177,
      -1,    -1,    -1,    -1,   182,    -1,    -1,    52,    53,    -1,
      55,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2433,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,  2442,    -1,
      -1,    -1,  2446,    -1,    -1,    -1,    81,    82,    -1,    -1,
      -1,    -1,  2458,    -1,    89,    -1,    -1,    92,    -1,    -1,
    2622,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   110,  2638,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   119,   120,    -1,    -1,   123,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2518,  2519,  2520,  2521,  2522,    -1,  2524,  2525,
     155,  2683,    -1,  2529,  2530,  2531,  2532,  2533,  2690,  2535,
    2536,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2550,    -1,    -1,  2553,
      -1,    -1,    -1,    -1,    -1,  2717,    -1,  2719,  2562,    -1,
      -1,   196,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2578,    -1,    -1,  2581,    -1,    -1,
      -1,    -1,    -1,    -1,  2588,    -1,    -1,  2591,  2592,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   381,   382,   383,   384,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2787,   261,    -1,  2632,  2633,
      -1,  2793,   267,    -1,    19,  2797,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,
     285,  2813,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   296,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2688,    70,    71,    -1,    -1,    -1,
      -1,    76,    -1,   328,   329,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2871,
    2872,    -1,    -1,    -1,    99,   100,    -1,   352,    -1,  2725,
      -1,    -1,    -1,    17,   109,    19,    -1,    -1,  2734,  2735,
    2736,  2737,  2738,    -1,  2740,  2741,    -1,  2743,  2744,  2745,
    2746,  2747,    -1,  2749,  2750,    -1,  2752,  2753,  2754,  2755,
    2756,    -1,  2758,  2759,    -1,  2761,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   399,  2771,  2772,    -1,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2782,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2789,    -1,    -1,    -1,    -1,
      -1,    -1,   177,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   192,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   109,    -1,    -1,    -1,  2823,
      -1,    -1,    -1,    -1,    -1,    -1,  2988,   212,    -1,    -1,
    2834,   125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   237,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     255,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   177,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2897,    -1,    -1,    -1,  2901,    -1,    -1,
      -1,    -1,    -1,   197,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2927,    -1,    -1,    -1,    -1,   311,    -1,    -1,    -1,
    2936,    -1,    -1,    -1,    -1,    -1,    -1,   322,    -1,  2945,
      -1,  2947,    -1,    -1,  3106,  2951,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2958,  2959,    -1,  2961,    -1,    -1,
      -1,   255,  2966,  2967,    -1,    -1,    -1,    -1,  3130,  2973,
      -1,    -1,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
      -1,   386,    -1,    -1,    -1,    -1,  3010,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  3177,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  3198,   331,    -1,  3201,
      -1,  3045,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  3055,
      -1,  3057,    -1,  3059,    -1,    -1,  3062,    -1,  3064,    -1,
      20,    21,    22,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
     384,    -1,    52,    53,    -1,    -1,    56,    -1,    -1,    59,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,
      -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    82,    -1,    -1,    -1,    -1,    -1,    -1,    89,
      90,    -1,    19,    -1,    20,    21,    22,    -1,    -1,  3143,
     100,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   115,    -1,    -1,  3162,   119,
     120,    -1,    -1,   123,    19,    -1,    52,    53,    -1,    -1,
      56,    -1,  3176,    60,    -1,  3179,    -1,    63,    -1,    -1,
      -1,    67,    -1,   143,    -1,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,
      -1,    -1,    -1,    89,    -1,    60,    -1,   167,    -1,    -1,
      -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,
      -1,    19,   109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   119,   120,    -1,   196,   123,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   109,    -1,    -1,   143,    -1,    -1,
      -1,    -1,    19,   223,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   167,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     177,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,   259,
      -1,   261,    -1,    60,    -1,    -1,    -1,   267,   268,    -1,
     196,   109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     206,    -1,   177,    -1,   284,   285,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   296,   297,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   250,    -1,    -1,    -1,   327,   255,   329,
      -1,    -1,    -1,   259,    -1,   261,   101,    -1,    -1,   177,
      -1,   267,   268,   343,   109,   345,    -1,    -1,    -1,    -1,
      -1,    -1,   352,    -1,    -1,   250,    -1,    -1,    -1,   285,
     255,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   297,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     177,    -1,    -1,    -1,    -1,    -1,   386,    -1,    -1,    -1,
      -1,    -1,    -1,   320,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   327,    -1,   329,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   177,    -1,    -1,   341,    -1,   255,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   352,    -1,    -1,    -1,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   382,   383,   384,   255,    -1,
     386,    -1,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     255,   182,    -1,   331,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   381,   382,   383,   384,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   382,   383,   384,   109,    -1,
      -1,    -1,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   382,   383,   384,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   177,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   383,   384,   385,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   255,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   383,   384,    43,    -1,    -1,    46,    -1,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      69,    70,    -1,    -1,    -1,    74,    75,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,    -1,    -1,
      -1,    -1,    91,    -1,    93,    94,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   103,   104,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     129,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     139,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   152,    -1,    -1,    -1,    -1,    -1,   158,
      -1,    -1,    -1,   162,    -1,    -1,    -1,   166,   167,    -1,
      -1,    -1,    -1,   172,   173,    -1,    -1,   176,    -1,    -1,
      -1,    -1,    -1,   182,    -1,    -1,    -1,    -1,    -1,   188,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     199,    -1,    -1,    -1,   203,   204,   205,    -1,    -1,   208,
     209,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   221,    -1,    -1,    -1,   225,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,    -1,
     249,   250,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   262,    -1,   264,    -1,    -1,    43,    -1,
      -1,    46,   271,    -1,    49,    -1,   275,    -1,    -1,    -1,
     279,    -1,   281,   282,    -1,   284,    -1,    -1,    -1,    -1,
     289,    -1,    -1,    -1,    -1,    70,    -1,    -1,    -1,    74,
      75,    76,    -1,    -1,    -1,    -1,   305,    -1,    -1,    84,
      -1,    86,   311,    -1,    -1,    -1,    91,    -1,    93,    94,
      95,    -1,    -1,    -1,    -1,    -1,   101,    -1,   103,    -1,
      -1,   330,   331,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   344,    -1,   346,    -1,    -1,
      -1,    -1,    -1,    -1,   353,    -1,    -1,   356,   357,    -1,
      -1,    -1,    -1,   138,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   158,    -1,    -1,    -1,    -1,   387,    -1,
      -1,    -1,   167,    -1,   169,   170,   395,   172,   173,    -1,
      -1,   176,    -1,    -1,    -1,   180,    -1,   182,    -1,    -1,
      -1,    -1,    -1,   188,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   208,   209,    -1,    -1,    -1,   213,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   221,    -1,    -1,    -1,
     225,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   247,    -1,   249,    -1,    -1,    -1,    -1,    -1,
      -1,   256,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   282,    -1,   284,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   311,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   330,   331,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   341,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   349,    -1,    -1,    -1,    -1,    -1,
     355,    -1,   357,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     395
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    43,    46,    49,    63,    69,    70,    74,    75,    76,
      84,    91,    93,    94,   103,   104,   129,   139,   152,   158,
     162,   166,   167,   172,   173,   176,   182,   188,   199,   203,
     204,   205,   208,   209,   221,   225,   247,   249,   250,   262,
     264,   271,   275,   279,   281,   282,   284,   289,   305,   311,
     330,   331,   344,   346,   353,   356,   357,   387,   395,   402,
      71,    11,    57,    78,   108,   130,   134,   149,   337,   439,
       3,     4,   225,   337,   403,   444,   213,   219,   266,   294,
     348,   393,   446,   327,     4,    42,   121,   172,   173,   220,
     221,   282,   451,    29,   153,   168,   197,   201,   263,   307,
     316,   317,   418,   453,    32,    90,   100,   107,   199,   252,
     289,   322,   455,    42,    63,   121,   220,   331,   403,   466,
       4,    19,    42,    60,   109,   131,   177,   220,   230,   239,
     240,   250,   255,   340,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   380,   381,
     382,   383,   384,   390,   397,   398,   405,   413,   414,   415,
     468,    34,   469,   405,    46,    49,    83,    91,   159,   218,
     251,   253,   282,   357,   404,   405,    69,   403,   471,   162,
     180,   472,    43,    46,    49,    70,    74,    75,    76,    84,
      86,    91,    93,    94,    95,   101,   103,   138,   158,   167,
     169,   170,   172,   173,   176,   180,   182,   188,   208,   209,
     213,   221,   225,   247,   249,   256,   282,   284,   311,   330,
     331,   341,   349,   355,   357,   395,   473,    90,   107,   524,
      19,    43,    46,    84,    91,   102,   103,   109,   138,   158,
     176,   177,   183,   208,   255,   311,   325,   357,   527,    71,
     405,    65,   325,   351,   612,    65,   325,   351,   611,    95,
     126,   211,   228,   298,   346,   357,   533,    15,     4,    48,
      51,    71,    90,   107,   113,   166,   189,   305,   334,   335,
     347,   351,   593,     5,    26,   122,   138,   179,   236,   254,
     536,   265,   554,     5,    71,    95,   156,   346,   395,   405,
     555,     5,   556,    61,   145,   260,   275,   348,   573,    48,
      69,    71,   207,   274,   325,   335,   594,   325,   610,    71,
     231,   389,   397,   399,   595,    41,   220,   266,   337,   403,
     413,   415,   596,     5,   346,   357,   405,   599,    77,   192,
     280,   291,   600,     4,   601,    95,   573,     4,    69,   608,
      65,   325,   351,   609,   220,   337,   403,   613,    26,   122,
     138,   236,   254,   394,   615,    54,   107,   118,   151,   339,
     637,   638,     4,    38,    50,    81,   167,   212,   291,   301,
     324,   332,   351,   432,     4,   138,   235,   639,   337,   403,
     641,    15,    23,   276,   279,   414,   642,   265,   646,   337,
     403,   647,     0,     5,   405,    63,   403,   440,   308,     5,
       4,   337,   403,   441,     5,    33,   323,   442,   137,   403,
     443,   391,   137,   403,   445,   403,     4,   219,   278,   286,
     449,   213,   348,   392,   393,   403,   448,   405,   154,   200,
     447,   225,   403,    85,   196,   286,   403,   450,     5,   403,
     403,   403,     4,   172,   173,   221,   282,   452,     4,   403,
     403,   403,   224,   279,   322,   456,     5,   261,   457,     4,
      32,   458,     5,   459,     5,   463,     5,    32,   464,     4,
      69,   465,   403,     8,     9,    10,   403,   409,   410,   411,
     412,   403,   403,    42,   121,   220,   403,   467,   403,   220,
     413,   415,   403,    36,   116,   141,   142,   150,   174,   184,
     420,   403,     4,   405,   405,   405,   405,   405,   405,   405,
     405,   405,   405,   128,     5,    71,    57,    78,    95,   108,
     130,   134,   149,   198,   476,   130,   225,   478,   213,   219,
     266,   294,   348,   392,   393,   403,   460,   479,   327,   482,
     192,   483,   153,   192,   201,   485,    32,    70,    71,    76,
      99,   100,   192,   212,   237,   311,   322,   386,   413,   487,
     403,   415,   490,    63,   331,   413,   491,   320,   413,   415,
     492,    34,   493,   413,   415,   494,     4,   413,   415,   495,
      47,    63,    88,   108,   128,   132,   164,   165,   227,   238,
     308,   309,   386,   499,   246,   350,   505,    71,     5,    96,
      65,   325,   351,   513,    65,   325,   351,   512,     4,    95,
     132,   497,     5,    70,   415,   496,    15,    48,    71,    88,
     189,   335,   351,   506,   573,    48,    71,    88,   207,   274,
     325,   335,   507,   325,   511,    71,   266,   509,   326,    65,
     325,   351,   510,    21,   149,   273,   306,   514,    38,    50,
      81,   167,   212,   291,   301,   351,   515,   415,    96,    15,
     224,   522,   413,   525,    71,    79,   528,    32,   529,    46,
      94,   218,   530,   167,   252,   297,   342,   531,   413,    17,
      62,   125,   197,   331,   413,   532,     5,     5,   171,   290,
     349,   413,     4,     5,   171,   290,   413,     4,     4,   219,
     535,     5,     4,     4,   132,   403,     4,    48,    51,    71,
     107,   113,   166,   305,   334,   335,   347,   351,    71,    72,
      73,    98,   111,   127,   161,   171,   193,   202,   222,   248,
     290,   295,   312,   315,   417,     5,     4,   403,   405,     5,
       5,   172,   173,   282,   537,     5,   539,     5,   128,   172,
     173,   218,   282,   309,   540,   101,   121,   213,   553,     5,
     551,     5,   309,   552,     4,     5,   405,   405,   403,   403,
       5,     4,     5,    20,    64,    71,    80,    82,    87,    90,
      96,   100,   107,   115,   124,   143,   167,   185,   198,   199,
     223,   252,   266,   268,   284,   289,   297,   305,   327,   342,
     343,   345,   386,   557,   417,     5,     4,   225,   233,   234,
     274,   391,   416,   403,   413,   403,   413,     5,   403,    42,
     121,   403,   598,   405,   403,   413,   415,   597,   403,   420,
     403,     4,   414,    58,    97,   157,   282,   602,     4,     4,
     403,     4,   167,   297,   603,     5,   413,     4,    42,   121,
     403,   614,   403,   105,    65,   132,   172,   173,   282,   313,
     617,   132,   636,    65,   128,   132,   172,   173,   177,   218,
     277,   282,   309,   313,   326,   618,   619,    65,   132,   313,
     635,     5,    65,   132,   313,   616,     4,    35,   117,   231,
     607,    71,   405,   435,    71,   405,   436,    71,   405,   437,
      12,   136,   215,   606,   403,    18,   232,   321,   405,   433,
       4,   403,   259,   403,   438,   403,    63,   309,     4,   403,
     403,     4,   260,   337,   645,     4,   329,   643,     4,   329,
     644,     4,   420,   137,   403,   648,   403,   403,     4,     5,
     403,    11,   403,   403,   405,   403,    31,   102,   183,   286,
     292,   419,   419,     4,   225,   403,   403,     4,     4,     4,
     403,   403,   403,   403,   403,   403,     4,   403,     4,   403,
     403,     4,     4,     4,     4,     4,     4,     4,     5,     5,
     413,     4,     5,     5,    69,   403,   403,   409,   411,   411,
     413,   403,   403,   403,   403,   403,   403,   403,   413,   415,
     412,   403,   403,   412,   403,     5,   308,   112,   213,   477,
     391,   219,   286,   480,   192,    85,   196,   286,   481,   154,
     200,   461,   461,     4,   484,     4,   486,    88,   322,   219,
     294,   488,   201,   489,   192,     4,   420,   403,   403,   413,
     413,   420,   420,   420,   413,   420,   403,   413,     4,   502,
       4,   415,   500,   224,     4,   186,   357,   501,   224,   413,
       4,   146,   337,   504,     5,     5,   474,     4,   224,   148,
     283,   406,   403,     4,   508,   508,   508,   508,     4,     5,
      20,    64,    71,   100,   124,   143,   160,   167,   175,   237,
     261,   266,   268,   296,   297,   305,   327,   386,   567,   415,
     214,   214,    71,   518,    71,   519,    71,   520,    18,   232,
     321,   516,   259,   521,   403,     5,   475,   260,   523,   414,
     420,     5,   413,   413,   413,   413,     4,     4,     4,   405,
       4,     4,   224,   403,   417,     5,   403,   405,    13,    14,
      65,   216,   217,   302,   313,   314,   350,    94,    94,    94,
       5,     5,    13,    14,    65,   216,   217,   302,   313,   314,
     318,   350,    94,    94,   177,    94,   177,   177,   182,   414,
     543,   548,    94,   177,     5,   541,     4,     4,    13,    65,
     216,   302,   313,   350,     5,     5,     4,   403,   414,    20,
      21,    22,    52,    53,    56,    59,    67,    71,    81,    82,
      89,    90,   100,   107,   115,   119,   120,   123,   143,   167,
     196,   223,   259,   261,   267,   268,   284,   285,   296,   297,
     327,   329,   343,   345,   352,   386,    71,    87,    96,   107,
     143,   167,   223,   268,   297,   343,   345,   319,     4,    31,
     181,   246,   273,   560,     5,    68,   114,   270,   287,   288,
     388,   389,   566,   107,   558,     4,    16,   297,   564,    42,
     121,   220,   565,     4,     5,    16,   241,   338,   403,   297,
     566,   574,   138,   566,   575,    37,    42,   121,   147,   220,
     337,   403,   576,   413,   405,    99,   107,   115,   133,   140,
     167,   178,   223,   231,   284,   297,   315,   579,    42,   121,
     220,     5,   297,   328,   583,    16,   135,   190,   241,   338,
     584,   329,   405,   585,     5,   107,   115,   346,    16,    16,
       4,   403,   403,   403,   403,   403,   403,   420,   403,   403,
     412,   403,     4,   420,     4,    42,   121,   220,   303,   604,
      42,   121,   220,   303,   605,     4,   105,     5,     5,    94,
      94,    94,     4,     5,     5,    94,     5,    94,   177,    94,
     177,   619,    65,   132,   177,   313,   623,    65,   132,   313,
     634,    94,   177,    65,   132,   313,   621,     4,    65,   132,
     313,   620,     5,     5,     4,     5,     5,     4,     4,     5,
       5,     5,   403,   321,   405,   434,   403,   403,   403,   403,
     403,     4,   403,   640,   403,   403,   414,    69,     4,     4,
       5,     4,     4,     5,     4,   105,   299,   421,   403,   403,
      11,     5,    11,   403,   403,    11,     4,    11,     4,     4,
     403,   403,   403,   403,   403,     4,   403,     5,   403,    31,
     403,   454,     5,     4,     4,    16,     4,   405,     4,     4,
     420,     5,   413,     4,   420,   403,   403,   403,   413,   403,
     412,   403,   403,     5,     5,   403,   415,   403,     4,   413,
     403,   420,   420,   421,   421,   421,   420,   412,   403,   420,
     403,   406,   503,   186,     5,     4,   420,   177,   177,     4,
       5,     4,     4,   403,   498,    40,    40,   403,    20,    21,
      22,    52,    53,    56,    63,    67,    71,    81,    82,    89,
     100,   119,   120,   123,   143,   167,   196,   206,   259,   261,
     267,   268,   285,   297,   327,   329,   341,   352,   386,    71,
     143,   175,   268,   327,   319,    31,   181,   246,   273,   568,
     403,   237,   403,   569,    16,   403,   296,   579,   296,   237,
     403,   570,   329,   571,    16,   106,   403,   321,   517,   403,
       5,   421,     4,     4,    60,   413,     4,     5,   534,   403,
       5,     5,     5,   177,   209,   425,   425,   185,   304,   423,
       4,     4,     5,     5,   538,   538,   538,   310,   310,     5,
       5,     5,    16,   179,   424,   424,   423,     4,     4,   423,
       5,     5,   542,     5,   549,     5,   550,   549,   550,   182,
     385,   414,   546,     5,   545,     5,   549,   550,     5,    13,
      14,    65,   216,   217,   302,   313,   314,   318,   350,     4,
       4,     5,     5,   425,   423,     4,     5,     5,   420,    89,
     169,   257,   258,   272,   319,   429,     6,     7,   403,   408,
     273,   273,   273,   115,    42,    71,   107,   115,   121,   143,
     167,   185,   223,   268,   284,   297,   329,   343,   345,   346,
     386,   559,   273,     5,    27,   121,   187,   273,   325,    28,
     154,   341,   115,    22,    53,    56,    89,   120,   123,   261,
     296,     4,    22,    53,    56,    59,    89,   120,   123,   261,
     296,   327,    42,   273,   273,   115,     5,   241,    27,   121,
     259,    37,   147,   337,   403,   155,   300,   308,   259,   279,
     413,   579,    42,   144,   259,   325,   279,   241,     5,     5,
     284,    27,   121,   259,     4,     5,     5,   241,    37,   147,
     337,   403,   579,   241,    59,   405,     4,     4,   403,     5,
     350,    22,    27,    52,    53,    55,    56,    67,    81,    82,
      89,    92,   110,   119,   120,   123,   155,   196,   261,   267,
     285,   296,   328,   329,   352,   399,   561,     4,   403,   403,
     403,   403,   403,   566,   413,     5,     4,     5,   403,   403,
     413,   403,   405,   403,   403,   566,     5,     5,   403,   403,
     405,     5,    16,     5,     5,   403,   403,   412,   403,   403,
       4,   403,   403,   121,   403,   403,   121,     4,    44,    45,
     194,   195,   226,   431,   431,    65,   132,   313,   631,    65,
     132,   313,   628,    65,   132,   313,   625,   431,     5,    65,
     132,   313,   622,    65,   132,   313,   633,    65,   132,   313,
     632,    65,   132,   313,   630,    65,   132,   313,   629,     5,
       5,    65,   132,   313,   624,     4,     5,     5,     4,    65,
     132,   313,   627,    65,   132,   313,   626,     5,     5,     4,
       5,     5,     4,   431,   431,   431,   403,   403,   403,   403,
     403,     4,   413,   403,   420,   414,     5,     5,    11,   403,
     413,   415,   403,    11,   403,   403,   403,    63,   403,     4,
     403,   403,     4,   403,   403,     5,   403,     5,   403,   454,
       5,     5,    49,   311,   462,     5,   405,   405,   413,   420,
       4,   403,     4,     4,     4,   420,   413,   403,   403,   403,
     403,   420,   413,   421,   412,   403,     4,   421,   403,     4,
     415,     5,    24,    25,   105,   422,     4,   413,   403,   403,
       4,   403,     5,    89,   169,   257,   258,   272,   319,   413,
     415,   273,   273,   273,    21,   273,   413,   273,    27,   121,
     187,   273,   325,    28,   154,   341,    21,   273,   273,   273,
      21,   273,    27,   121,   191,   259,   191,   155,   300,   308,
     259,   191,   259,   333,   579,   144,   191,   259,   325,     4,
     284,    27,   121,   191,   259,   579,   237,    16,   396,   403,
     403,   403,   403,   403,   403,   224,   403,   403,    20,   269,
     526,     4,     4,   403,   425,   425,   425,     4,   425,   425,
     425,    13,    14,    65,   216,   217,   302,   313,   314,   350,
     424,   425,   425,   425,   425,   425,     4,   425,   425,     4,
     424,    13,    14,    65,   216,   217,   302,   313,   314,   350,
       5,    13,    14,    65,   216,   217,   302,   313,   314,   318,
     350,    13,    14,    65,   216,   217,   302,   313,   314,   350,
       5,   544,     5,   547,     5,     5,    13,    14,    65,   216,
     217,   302,   313,   314,   318,   350,     5,    13,    14,    65,
     216,   217,   302,   313,   314,   318,   350,   310,     5,     5,
       5,   424,   424,   423,     4,     4,   423,     5,     4,     4,
     425,   425,     4,   425,   425,     5,   405,   413,   415,     5,
     403,   403,     5,   403,     5,   408,   115,   223,   284,   115,
     223,   284,     5,   403,   405,     4,    27,    39,    52,    66,
      67,   231,   242,   243,   244,   245,   336,   426,     5,   403,
     413,   405,   405,     5,     5,   408,   273,   273,    21,   273,
      21,   273,   273,    21,   273,   354,   354,     4,     4,     4,
       4,   559,     4,     4,     4,   354,   354,     4,     5,     4,
     403,     5,   403,     5,   408,   405,   426,   413,   413,   403,
       5,    27,    52,    55,    67,    92,   110,   155,   399,   427,
       4,   413,   403,   420,   405,     5,   413,   413,   403,   405,
     405,   426,   413,   413,   403,   405,     5,   403,     5,   403,
     259,   259,   403,   403,   259,   403,   259,   403,   403,     4,
     562,   403,   259,   259,   403,   403,   403,   259,   403,    60,
     403,   403,   403,    60,   403,     5,   350,   403,   563,   403,
     403,   259,   403,   403,   403,   403,   413,   420,     5,     4,
       4,   403,   403,   420,   403,   403,   403,   413,   566,   403,
     403,     5,     4,   403,   403,   403,   403,     5,     5,     4,
       5,     5,     4,     5,     5,     4,   431,     5,     5,     4,
       5,     5,     4,     5,     5,     4,     5,     5,     4,     5,
       5,     4,     4,     4,     5,     5,     4,     4,     5,     5,
       4,     5,     5,     4,   403,   403,   403,   403,   420,   403,
     413,   415,   403,   420,   403,   403,   403,   403,   403,     5,
     403,   403,   403,     4,   403,   403,     5,   403,     5,   403,
     454,     4,     4,     4,   413,     4,   420,     4,   403,   420,
     153,   201,   418,   403,   418,   421,   420,   413,   403,   403,
       4,   403,   413,   413,   403,   406,     5,     5,     5,     5,
       5,   101,   413,   420,   413,   413,   413,   413,   415,   413,
     420,   413,   413,   413,   415,   413,   413,   413,   413,   415,
     413,   413,   413,   403,   413,   413,   413,   413,   413,   413,
     413,   413,   101,   403,   403,     4,   403,     5,   403,   425,
       5,     5,     5,   423,     4,     4,     5,   425,   424,     4,
     425,     5,     5,     5,   424,   424,   423,     4,     4,     5,
     310,     5,     5,     5,   424,   424,   423,     4,     4,   423,
       5,     5,     5,     5,   424,   424,   423,     4,     4,     5,
      13,    14,    65,   216,   217,   302,   313,   314,   350,    13,
      14,    65,   216,   217,   302,   313,   314,   350,    13,    14,
      65,   216,   217,   302,   313,   314,   350,   310,     5,     5,
       5,   424,   424,   423,     4,     4,   423,     5,   310,     5,
       5,     5,   424,   424,   423,     4,     4,   423,     5,   424,
       4,     4,   424,     4,     4,   425,     5,   420,   413,   403,
     403,   413,   403,     5,   408,     5,   413,   405,   426,     5,
     413,   420,     5,   408,   403,   403,   403,   403,   403,   403,
     403,   403,   403,     4,     4,     5,     4,     4,   403,   413,
     403,     5,   408,   405,   426,   420,   420,   420,   403,   412,
     420,   420,   403,   420,   420,   403,   403,   403,   403,   403,
     403,   403,   403,   403,   403,   572,   580,   403,   403,   403,
     403,   403,   403,   403,   403,   350,   403,   403,   403,   350,
     403,   403,   413,     5,   403,   403,   403,   403,     4,     4,
     420,   421,     5,     5,   412,   403,     4,   420,   413,     4,
     431,   431,   431,   431,   431,   431,   431,   431,   431,   408,
     403,   403,   403,   420,   403,   412,   403,   403,    11,     5,
       5,   403,   403,   403,   403,     5,   403,     4,   403,     4,
       4,     4,   420,     4,     4,   413,   403,   403,   421,   422,
     403,     5,   403,   413,   415,     5,     5,     5,     5,     5,
     413,   420,   422,   422,   422,   420,   422,   421,   422,   422,
     420,   422,   422,   422,   420,   422,   422,   420,   413,   420,
     422,   420,   422,   422,   420,   422,   420,   413,     4,   413,
     415,     5,   403,     4,   425,   424,     4,   424,   424,     4,
       4,   424,     4,   424,     5,     5,     5,   424,   424,   423,
       4,     4,     5,     5,     5,     5,   424,   424,   423,     4,
       4,     5,     5,     5,     5,   424,   424,   423,     4,     4,
       5,   424,   425,   425,   425,   425,   425,     4,   425,   425,
       4,   424,   424,   425,   425,   425,   425,   425,     4,   425,
     425,     4,   424,   424,     4,     4,     4,   414,   422,     4,
     413,   422,   403,   413,     4,   422,   422,   413,     4,   403,
     403,   403,   403,   403,   403,   403,   403,   403,   403,   403,
     413,   422,   403,   413,     4,   412,   412,   421,   413,   412,
     412,   413,   413,   412,   412,   403,   403,   403,   403,   403,
     403,   408,   403,   403,   403,    59,    71,   100,   143,   327,
     329,   386,   577,   578,   579,   591,   592,   408,   403,   403,
     403,   403,   408,   403,   403,     5,   403,   403,   403,     5,
     403,   403,   420,   403,   350,   407,   408,   403,   403,   421,
     405,   413,   413,   421,   420,     4,   403,   412,   403,    63,
     403,     5,     5,     4,     4,   403,   403,     4,   403,     4,
       4,     4,   418,   422,     5,   420,     4,     5,     4,     5,
     413,     5,   420,   421,   422,   421,   421,   421,   421,   420,
       5,   420,     4,   403,   425,   424,   424,     4,   424,   425,
     425,   425,   425,   425,     4,   425,   425,   424,   425,   425,
     425,   425,   425,     4,   425,   425,   424,   425,   425,   425,
     425,   425,     4,   425,   425,   424,   425,   424,     4,   425,
     425,   424,     4,   425,   424,   420,   413,   422,     4,   420,
     403,   420,   403,   403,   403,   422,     4,   420,   403,   412,
       5,   350,   422,   403,   412,   422,   422,   413,   403,     4,
     428,   428,   403,   403,   428,   408,   428,   580,   413,   400,
     400,   400,   400,   400,   400,   400,   578,   400,   408,   428,
     428,   403,   403,   408,     4,     5,   403,   580,   403,   403,
     403,   580,   403,   412,   403,     5,   580,   403,   428,   405,
     581,   582,   420,   420,   405,   421,     4,     5,   403,     5,
       4,     4,     4,     4,     4,     4,     4,     4,   403,     4,
      33,   210,   323,   470,   413,     5,    33,   210,   323,   430,
     413,     4,   470,   403,   424,   424,   425,   424,   425,   424,
     425,   425,   424,   425,   424,   403,   422,   413,   413,   403,
     413,   403,   413,   413,   403,     5,   413,   422,     4,   580,
     580,   407,   403,   580,     4,   580,   420,   559,     5,     4,
       5,     5,     5,     4,   405,     4,   580,   580,   407,   403,
       4,     5,   580,   580,   580,   403,   413,   580,   580,   580,
     581,   588,   589,   579,   586,   587,   405,     4,     5,     5,
       4,     4,     4,   213,   348,   393,   403,   460,   470,     4,
     413,   470,     4,   425,   425,   425,   425,   425,   414,   422,
     422,   403,   422,     4,   422,   422,   403,   422,   403,   580,
     580,     4,   403,   580,     5,     4,   403,   580,     4,   403,
     580,   580,   420,   588,   590,   591,   400,   587,     5,     5,
     403,   461,   403,   461,   420,   422,     4,   413,   415,     4,
     408,   407,   403,     5,   403,   407,   403,   413,   591,   405,
       5,     5,   403,   403,   403,   403,   430,     5,   413,   415,
     420,   413,   415,   580,   403,     4,   580,   403,   422,     5,
       5,   403,     5,   403,   420,   420,     4,   580,     4,     5,
       5,     5,   407,   407,   580,   580,   580
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
#line 511 "frame/parser.Y"
    {fr->bgColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 5:
#line 512 "frame/parser.Y"
    {fr->useBgColorCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 7:
#line 514 "frame/parser.Y"
    {fr->centerCmd();;}
    break;

  case 8:
#line 515 "frame/parser.Y"
    {fr->clearCmd();;}
    break;

  case 10:
#line 517 "frame/parser.Y"
    {fr->colorbarTagCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 17:
#line 524 "frame/parser.Y"
    {fr->DATASECCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 23:
#line 530 "frame/parser.Y"
    {fr->hideCmd();;}
    break;

  case 24:
#line 531 "frame/parser.Y"
    {fr->highliteCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 25:
#line 532 "frame/parser.Y"
    {fr->highliteColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 29:
#line 536 "frame/parser.Y"
    {fr->irafAlignCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 38:
#line 545 "frame/parser.Y"
    {fr->nanColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 42:
#line 549 "frame/parser.Y"
    {fr->queryCursorCmd();;}
    break;

  case 45:
#line 552 "frame/parser.Y"
    {fr->resetCmd();;}
    break;

  case 51:
#line 558 "frame/parser.Y"
    {fr->showCmd();;}
    break;

  case 53:
#line 560 "frame/parser.Y"
    {fr->threadsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 55:
#line 562 "frame/parser.Y"
    {fr->unloadFitsCmd();;}
    break;

  case 57:
#line 564 "frame/parser.Y"
    {fr->msg("Frame 1.0");;}
    break;

  case 62:
#line 571 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 63:
#line 572 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 64:
#line 575 "frame/parser.Y"
    {yydebug=(yyvsp[(1) - (1)].integer);;}
    break;

  case 65:
#line 576 "frame/parser.Y"
    {DebugMosaic=(yyvsp[(2) - (2)].integer);;}
    break;

  case 66:
#line 577 "frame/parser.Y"
    {yydebug=(yyvsp[(2) - (2)].integer);;}
    break;

  case 67:
#line 578 "frame/parser.Y"
    {DebugPerf=(yyvsp[(2) - (2)].integer);;}
    break;

  case 68:
#line 579 "frame/parser.Y"
    {DebugWCS=(yyvsp[(2) - (2)].integer);;}
    break;

  case 69:
#line 580 "frame/parser.Y"
    {DebugBin=(yyvsp[(2) - (2)].integer);;}
    break;

  case 70:
#line 581 "frame/parser.Y"
    {DebugBlock=(yyvsp[(2) - (2)].integer);;}
    break;

  case 71:
#line 582 "frame/parser.Y"
    {DebugCompress=(yyvsp[(2) - (2)].integer);;}
    break;

  case 72:
#line 583 "frame/parser.Y"
    {DebugCrop=(yyvsp[(2) - (2)].integer);;}
    break;

  case 73:
#line 584 "frame/parser.Y"
    {DebugGZ=(yyvsp[(2) - (2)].integer);;}
    break;

  case 74:
#line 585 "frame/parser.Y"
    {DebugRGB=(yyvsp[(2) - (2)].integer);;}
    break;

  case 75:
#line 588 "frame/parser.Y"
    {(yyval.integer)=((yyvsp[(1) - (1)].integer) ? 1 : 0);;}
    break;

  case 76:
#line 590 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 77:
#line 591 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 78:
#line 592 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 79:
#line 593 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 80:
#line 595 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 81:
#line 596 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 82:
#line 597 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 83:
#line 598 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 84:
#line 601 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 85:
#line 602 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 86:
#line 603 "frame/parser.Y"
    {(yyval.integer) = Base::FULLBASE;;}
    break;

  case 87:
#line 604 "frame/parser.Y"
    {(yyval.integer) = Base::ROOT;;}
    break;

  case 88:
#line 605 "frame/parser.Y"
    {(yyval.integer) = Base::FULL;;}
    break;

  case 89:
#line 608 "frame/parser.Y"
    {(yyval.real) = 0;;}
    break;

  case 90:
#line 609 "frame/parser.Y"
    {(yyval.real) = (yyvsp[(1) - (1)].real);;}
    break;

  case 91:
#line 612 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 92:
#line 613 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 93:
#line 614 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 94:
#line 617 "frame/parser.Y"
    {(yyval.real) = parseSEXStr((yyvsp[(1) - (1)].str));;}
    break;

  case 95:
#line 620 "frame/parser.Y"
    {(yyval.real) = parseHMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 96:
#line 623 "frame/parser.Y"
    {(yyval.real) = parseDMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 97:
#line 627 "frame/parser.Y"
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
#line 639 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 99:
#line 646 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 100:
#line 653 "frame/parser.Y"
    {
	  (yyval.vector)[0] = (yyvsp[(1) - (2)].real);
	  (yyval.vector)[1] = (yyvsp[(2) - (2)].real);
	  (yyval.vector)[2] = 1;
	;}
    break;

  case 101:
#line 660 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::IMAGE;;}
    break;

  case 102:
#line 661 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::PHYSICAL;;}
    break;

  case 103:
#line 662 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::DETECTOR;;}
    break;

  case 104:
#line 663 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::AMPLIFIER;;}
    break;

  case 105:
#line 664 "frame/parser.Y"
    {(yyval.integer) = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 106:
#line 667 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS;;}
    break;

  case 107:
#line 668 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSA;;}
    break;

  case 108:
#line 669 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSB;;}
    break;

  case 109:
#line 670 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSC;;}
    break;

  case 110:
#line 671 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSD;;}
    break;

  case 111:
#line 672 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSE;;}
    break;

  case 112:
#line 673 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSF;;}
    break;

  case 113:
#line 674 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSG;;}
    break;

  case 114:
#line 675 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSH;;}
    break;

  case 115:
#line 676 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSI;;}
    break;

  case 116:
#line 677 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSJ;;}
    break;

  case 117:
#line 678 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSK;;}
    break;

  case 118:
#line 679 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSL;;}
    break;

  case 119:
#line 680 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSM;;}
    break;

  case 120:
#line 681 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSN;;}
    break;

  case 121:
#line 682 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSO;;}
    break;

  case 122:
#line 683 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSP;;}
    break;

  case 123:
#line 684 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSQ;;}
    break;

  case 124:
#line 685 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSR;;}
    break;

  case 125:
#line 686 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSS;;}
    break;

  case 126:
#line 687 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCST;;}
    break;

  case 127:
#line 688 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSU;;}
    break;

  case 128:
#line 689 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSV;;}
    break;

  case 129:
#line 690 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSW;;}
    break;

  case 130:
#line 691 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSX;;}
    break;

  case 131:
#line 692 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSY;;}
    break;

  case 132:
#line 693 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSZ;;}
    break;

  case 133:
#line 694 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS0;;}
    break;

  case 134:
#line 697 "frame/parser.Y"
    {(yyval.integer) = Coord::CANVAS;;}
    break;

  case 135:
#line 698 "frame/parser.Y"
    {(yyval.integer) = Coord::PANNER;;}
    break;

  case 136:
#line 701 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 137:
#line 702 "frame/parser.Y"
    {(yyval.integer) = FitsMask::ZERO;;}
    break;

  case 138:
#line 703 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 139:
#line 704 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NaN;;}
    break;

  case 140:
#line 705 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONNaN;;}
    break;

  case 141:
#line 706 "frame/parser.Y"
    {(yyval.integer) = FitsMask::RANGE;;}
    break;

  case 142:
#line 709 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 143:
#line 710 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 144:
#line 711 "frame/parser.Y"
    {(yyval.integer) = FitsMask::MULTIPLY;;}
    break;

  case 145:
#line 712 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SCREEN;;}
    break;

  case 146:
#line 713 "frame/parser.Y"
    {(yyval.integer) = FitsMask::OVERLAY;;}
    break;

  case 147:
#line 714 "frame/parser.Y"
    {(yyval.integer) = FitsMask::DARKEN;;}
    break;

  case 148:
#line 715 "frame/parser.Y"
    {(yyval.integer) = FitsMask::LIGHTEN;;}
    break;

  case 149:
#line 716 "frame/parser.Y"
    {(yyval.integer) = FitsMask::COLOR_DODGE;;}
    break;

  case 150:
#line 717 "frame/parser.Y"
    {(yyval.integer) = FitsMask::COLOR_BURN;;}
    break;

  case 151:
#line 718 "frame/parser.Y"
    {(yyval.integer) = FitsMask::HARD_LIGHT;;}
    break;

  case 152:
#line 719 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOFT_LIGHT;;}
    break;

  case 153:
#line 720 "frame/parser.Y"
    {(yyval.integer) = FitsMask::DIFFERENCE;;}
    break;

  case 154:
#line 721 "frame/parser.Y"
    {(yyval.integer) = FitsMask::EXCLUSION;;}
    break;

  case 155:
#line 722 "frame/parser.Y"
    {(yyval.integer) = FitsMask::HUE;;}
    break;

  case 156:
#line 723 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SATURATION;;}
    break;

  case 157:
#line 724 "frame/parser.Y"
    {(yyval.integer) = FitsMask::COLOR;;}
    break;

  case 158:
#line 725 "frame/parser.Y"
    {(yyval.integer) = FitsMask::LUMINOSITY;;}
    break;

  case 159:
#line 728 "frame/parser.Y"
    {(yyval.integer) = FrScale::LINEARSCALE;;}
    break;

  case 160:
#line 729 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOGSCALE;;}
    break;

  case 161:
#line 730 "frame/parser.Y"
    {(yyval.integer) = FrScale::POWSCALE;;}
    break;

  case 162:
#line 731 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQRTSCALE;;}
    break;

  case 163:
#line 732 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQUAREDSCALE;;}
    break;

  case 164:
#line 733 "frame/parser.Y"
    {(yyval.integer) = FrScale::ASINHSCALE;;}
    break;

  case 165:
#line 734 "frame/parser.Y"
    {(yyval.integer) = FrScale::SINHSCALE;;}
    break;

  case 166:
#line 735 "frame/parser.Y"
    {(yyval.integer) = FrScale::HISTEQUSCALE;;}
    break;

  case 167:
#line 736 "frame/parser.Y"
    {(yyval.integer) = FrScale::GHSSCALE;;}
    break;

  case 168:
#line 739 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 169:
#line 740 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 170:
#line 741 "frame/parser.Y"
    {(yyval.integer)=FrScale::SAMPLE;;}
    break;

  case 171:
#line 742 "frame/parser.Y"
    {(yyval.integer)=FrScale::DATAMIN;;}
    break;

  case 172:
#line 743 "frame/parser.Y"
    {(yyval.integer)=FrScale::IRAFMIN;;}
    break;

  case 173:
#line 746 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 174:
#line 747 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 175:
#line 748 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 176:
#line 749 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 177:
#line 750 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 178:
#line 751 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 179:
#line 752 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::GALACTIC;;}
    break;

  case 180:
#line 753 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ECLIPTIC;;}
    break;

  case 181:
#line 756 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 182:
#line 757 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 183:
#line 758 "frame/parser.Y"
    {(yyval.integer)=Coord::SEXAGESIMAL;;}
    break;

  case 184:
#line 761 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 185:
#line 762 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 186:
#line 763 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCMIN;;}
    break;

  case 187:
#line 764 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCSEC;;}
    break;

  case 188:
#line 767 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 189:
#line 768 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 190:
#line 769 "frame/parser.Y"
    {(yyval.integer) = Base::KEY;;}
    break;

  case 191:
#line 772 "frame/parser.Y"
    {;}
    break;

  case 192:
#line 773 "frame/parser.Y"
    {;}
    break;

  case 193:
#line 774 "frame/parser.Y"
    {;}
    break;

  case 194:
#line 777 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 195:
#line 778 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 196:
#line 779 "frame/parser.Y"
    {(yyval.integer) = Base::MASK;;}
    break;

  case 197:
#line 783 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer) ? Marker::ARROW : Marker::NOEND;;}
    break;

  case 198:
#line 784 "frame/parser.Y"
    {(yyval.integer) = Marker::NOEND;;}
    break;

  case 199:
#line 785 "frame/parser.Y"
    {(yyval.integer) = Marker::ARROW;;}
    break;

  case 200:
#line 786 "frame/parser.Y"
    {(yyval.integer) = Marker::OPENARROW;;}
    break;

  case 201:
#line 787 "frame/parser.Y"
    {(yyval.integer) = Marker::CHEVRON;;}
    break;

  case 202:
#line 788 "frame/parser.Y"
    {(yyval.integer) = Marker::CIRCLE;;}
    break;

  case 203:
#line 789 "frame/parser.Y"
    {(yyval.integer) = Marker::OPENCIRCLE;;}
    break;

  case 204:
#line 790 "frame/parser.Y"
    {(yyval.integer) = Marker::BOX;;}
    break;

  case 205:
#line 791 "frame/parser.Y"
    {(yyval.integer) = Marker::OPENBOX;;}
    break;

  case 206:
#line 792 "frame/parser.Y"
    {(yyval.integer) = Marker::TRIANGLE;;}
    break;

  case 207:
#line 793 "frame/parser.Y"
    {(yyval.integer) = Marker::OPENTRIANGLE;;}
    break;

  case 208:
#line 794 "frame/parser.Y"
    {(yyval.integer) = Marker::BAR;;}
    break;

  case 209:
#line 797 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 210:
#line 798 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 211:
#line 799 "frame/parser.Y"
    {(yyval.integer) = Point::BOX;;}
    break;

  case 212:
#line 800 "frame/parser.Y"
    {(yyval.integer) = Point::DIAMOND;;}
    break;

  case 213:
#line 801 "frame/parser.Y"
    {(yyval.integer) = Point::CROSS;;}
    break;

  case 214:
#line 802 "frame/parser.Y"
    {(yyval.integer) = Point::EX;;}
    break;

  case 215:
#line 803 "frame/parser.Y"
    {(yyval.integer) = Point::ARROW;;}
    break;

  case 216:
#line 804 "frame/parser.Y"
    {(yyval.integer) = Point::BOXCIRCLE;;}
    break;

  case 217:
#line 805 "frame/parser.Y"
    {(yyval.integer) = Point::GLYPH;;}
    break;

  case 218:
#line 808 "frame/parser.Y"
    {(yyval.integer) = POINTSIZE;;}
    break;

  case 219:
#line 809 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 220:
#line 812 "frame/parser.Y"
    {(yyval.integer) = Marker::PANDA;;}
    break;

  case 221:
#line 813 "frame/parser.Y"
    {(yyval.integer) = Marker::HISTOGRAM;;}
    break;

  case 222:
#line 814 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT2D;;}
    break;

  case 223:
#line 815 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT3D;;}
    break;

  case 224:
#line 816 "frame/parser.Y"
    {(yyval.integer) = Marker::RADIAL;;}
    break;

  case 225:
#line 817 "frame/parser.Y"
    {(yyval.integer) = Marker::STATS;;}
    break;

  case 226:
#line 820 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 227:
#line 821 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 228:
#line 822 "frame/parser.Y"
    {(yyval.integer) = Marker::SUM;;}
    break;

  case 229:
#line 823 "frame/parser.Y"
    {(yyval.integer) = Marker::MEDIAN;;}
    break;

  case 230:
#line 826 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 231:
#line 827 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 232:
#line 828 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 233:
#line 829 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 234:
#line 830 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 235:
#line 831 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 240:
#line 838 "frame/parser.Y"
    {fr->set3dRenderMethodCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 241:
#line 839 "frame/parser.Y"
    {fr->set3dRenderBackgroundCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 243:
#line 841 "frame/parser.Y"
    {fr->set3dScaleCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 244:
#line 842 "frame/parser.Y"
    {fr->set3dSyncCmd((yyvsp[(2) - (2)].integer));}
    break;

  case 245:
#line 844 "frame/parser.Y"
    {/* needed for compatibility with old version of backup */;}
    break;

  case 246:
#line 847 "frame/parser.Y"
    {fr->set3dShadeCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 247:
#line 848 "frame/parser.Y"
    {fr->set3dShadeAmbientCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 248:
#line 849 "frame/parser.Y"
    {fr->set3dShadeStrengthCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 250:
#line 853 "frame/parser.Y"
    {fr->set3dShadeNormalCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 251:
#line 854 "frame/parser.Y"
    {fr->set3dShadeNormalStrengthCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 252:
#line 857 "frame/parser.Y"
    {fr->set3dBorderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 253:
#line 858 "frame/parser.Y"
    {fr->set3dBorderColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 254:
#line 861 "frame/parser.Y"
    {fr->set3dCompassCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 255:
#line 862 "frame/parser.Y"
    {fr->set3dCompassColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 256:
#line 865 "frame/parser.Y"
    {fr->set3dHighliteCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 257:
#line 866 "frame/parser.Y"
    {fr->set3dHighliteColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 258:
#line 869 "frame/parser.Y"
    {fr->set3dViewCmd((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));;}
    break;

  case 259:
#line 871 "frame/parser.Y"
    {fr->set3dViewPointCmd(Vector3d((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 261:
#line 875 "frame/parser.Y"
    {fr->binColsCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 262:
#line 876 "frame/parser.Y"
    {fr->binDepthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 265:
#line 879 "frame/parser.Y"
    {fr->binBufferSizeCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 267:
#line 881 "frame/parser.Y"
    {fr->binFilterCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 268:
#line 884 "frame/parser.Y"
    {fr->binAboutCmd();;}
    break;

  case 269:
#line 885 "frame/parser.Y"
    {fr->binAboutCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 270:
#line 888 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 271:
#line 889 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 272:
#line 891 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(1) - (4)].real)), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 273:
#line 893 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 274:
#line 894 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 275:
#line 895 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 276:
#line 897 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 277:
#line 899 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 278:
#line 902 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::AVERAGE);;}
    break;

  case 279:
#line 903 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::SUM);;}
    break;

  case 280:
#line 906 "frame/parser.Y"
    {fr->binToFitCmd();;}
    break;

  case 281:
#line 908 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (7)].real),(yyvsp[(2) - (7)].real)), (yyvsp[(5) - (7)].str), (yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].str));;}
    break;

  case 282:
#line 911 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (11)].real),(yyvsp[(2) - (11)].real)), (yyvsp[(3) - (11)].integer), Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)), (yyvsp[(8) - (11)].str), (yyvsp[(9) - (11)].str), (yyvsp[(10) - (11)].str), (yyvsp[(11) - (11)].str));;}
    break;

  case 283:
#line 913 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (8)].real),(yyvsp[(2) - (8)].real)), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (yyvsp[(6) - (8)].str), (yyvsp[(7) - (8)].str), (yyvsp[(8) - (8)].str));;}
    break;

  case 284:
#line 916 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (12)].real),(yyvsp[(2) - (12)].real)), (yyvsp[(3) - (12)].integer), Vector((yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real)), Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    (yyvsp[(9) - (12)].str), (yyvsp[(10) - (12)].str), (yyvsp[(11) - (12)].str), (yyvsp[(12) - (12)].str));;}
    break;

  case 285:
#line 920 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 286:
#line 921 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 288:
#line 923 "frame/parser.Y"
    {fr->blockNanZeroCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 289:
#line 926 "frame/parser.Y"
    {fr->blockToFitCmd();;}
    break;

  case 290:
#line 927 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 291:
#line 928 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 295:
#line 934 "frame/parser.Y"
    {fr->clipUserCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 296:
#line 935 "frame/parser.Y"
    {fr->clipUserCmd(NAN,NAN);;}
    break;

  case 298:
#line 938 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 299:
#line 943 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::GLOBAL);;}
    break;

  case 300:
#line 944 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::LOCAL);;}
    break;

  case 301:
#line 947 "frame/parser.Y"
    {fr->clipModeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 302:
#line 948 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::MINMAX);;}
    break;

  case 303:
#line 949 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZSCALE);;}
    break;

  case 304:
#line 950 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZMAX);;}
    break;

  case 305:
#line 951 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::USERCLIP);;}
    break;

  case 306:
#line 954 "frame/parser.Y"
    {fr->clipMinMaxCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer),(yyvsp[(1) - (2)].integer));;}
    break;

  case 307:
#line 955 "frame/parser.Y"
    {fr->clipMinMaxModeCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer));;}
    break;

  case 308:
#line 956 "frame/parser.Y"
    {fr->clipMinMaxSampleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 309:
#line 957 "frame/parser.Y"
    {fr->clipMinMaxRescanCmd();;}
    break;

  case 310:
#line 960 "frame/parser.Y"
    {fr->clipZScaleCmd((yyvsp[(1) - (3)].real),(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 311:
#line 962 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleContrastCmd((yyvsp[(2) - (2)].real));
        ;}
    break;

  case 312:
#line 967 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleSampleCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 313:
#line 972 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleLineCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 314:
#line 979 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].real), (yyvsp[(3) - (5)].real), (yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].integer));;}
    break;

  case 315:
#line 981 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 316:
#line 983 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 317:
#line 985 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 318:
#line 987 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (7)].integer),(yyvsp[(3) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(yyvsp[(7) - (7)].integer));;}
    break;

  case 322:
#line 994 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].real), (yyvsp[(3) - (5)].real), (yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].integer));;}
    break;

  case 323:
#line 996 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 324:
#line 998 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 325:
#line 1000 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 326:
#line 1002 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (7)].integer),(yyvsp[(3) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(yyvsp[(7) - (7)].integer));;}
    break;

  case 327:
#line 1004 "frame/parser.Y"
    {fr->colorScaleCmd((FrScale::ColorScaleType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 328:
#line 1005 "frame/parser.Y"
    {fr->colorScaleLogCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 329:
#line 1007 "frame/parser.Y"
    {fr->colorScaleGhsCmd((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 330:
#line 1010 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 331:
#line 1011 "frame/parser.Y"
    {(yyval.real)=NAN;;}
    break;

  case 333:
#line 1015 "frame/parser.Y"
    {fr->contourDashListCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 340:
#line 1024 "frame/parser.Y"
    {fr->contourAuxNameCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 341:
#line 1025 "frame/parser.Y"
    {fr->contourAuxResetCmd((yyvsp[(2) - (2)].integer),-1);;}
    break;

  case 342:
#line 1026 "frame/parser.Y"
    {fr->contourAuxResetCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 343:
#line 1028 "frame/parser.Y"
    {fr->contourAuxStyleCmd((yyvsp[(2) - (8)].integer),(yyvsp[(3) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].integer),(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 344:
#line 1030 "frame/parser.Y"
    {fr->contourAuxStyleCmd((yyvsp[(2) - (8)].integer),-1,(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].integer),(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 345:
#line 1034 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),(FrScale::ClipMode)(yyvsp[(9) - (13)].integer),100,(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 346:
#line 1037 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),FrScale::AUTOCUT,(yyvsp[(9) - (13)].real),(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 347:
#line 1040 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),(FrScale::ClipMode)(yyvsp[(9) - (12)].integer),100,FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 348:
#line 1046 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),FrScale::AUTOCUT,(yyvsp[(9) - (12)].real),FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 349:
#line 1051 "frame/parser.Y"
    {fr->contourCreatePolygonCmd();;}
    break;

  case 350:
#line 1054 "frame/parser.Y"
    {fr->contourDeleteCmd();;}
    break;

  case 351:
#line 1055 "frame/parser.Y"
    {fr->contourDeleteAuxCmd();;}
    break;

  case 352:
#line 1056 "frame/parser.Y"
    {fr->contourDeleteAuxCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 353:
#line 1059 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 354:
#line 1060 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 355:
#line 1062 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourLoadCmd((yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer),(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer));
	;}
    break;

  case 356:
#line 1068 "frame/parser.Y"
    {(yyval.integer) = FrScale::MINMAX;;}
    break;

  case 357:
#line 1069 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZSCALE;;}
    break;

  case 358:
#line 1070 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZMAX;;}
    break;

  case 359:
#line 1071 "frame/parser.Y"
    {(yyval.integer) = FrScale::USERCLIP;;}
    break;

  case 360:
#line 1074 "frame/parser.Y"
    {(yyval.integer) = FrScale::GLOBAL;;}
    break;

  case 361:
#line 1075 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOCAL;;}
    break;

  case 362:
#line 1078 "frame/parser.Y"
    {(yyval.integer) = FVContour::SMOOTH;;}
    break;

  case 363:
#line 1079 "frame/parser.Y"
    {(yyval.integer) = FVContour::BLOCK;;}
    break;

  case 364:
#line 1082 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 365:
#line 1083 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 366:
#line 1085 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 367:
#line 1089 "frame/parser.Y"
    {fr->contourSaveCmd((yyvsp[(1) - (3)].str), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 368:
#line 1091 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (4)].str),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 369:
#line 1093 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].str),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 370:
#line 1096 "frame/parser.Y"
    {fr->contourStyleClearCmd();;}
    break;

  case 371:
#line 1097 "frame/parser.Y"
    {fr->contourStyleClearCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 372:
#line 1098 "frame/parser.Y"
    {fr->contourStyleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer),0,0);;}
    break;

  case 373:
#line 1099 "frame/parser.Y"
    {fr->contourStyleCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 374:
#line 1102 "frame/parser.Y"
    {fr->cropCmd();;}
    break;

  case 375:
#line 1104 "frame/parser.Y"
    {fr->cropCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 376:
#line 1107 "frame/parser.Y"
    {fr->cropCenterCmd(Vector((yyvsp[(2) - (8)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), Vector((yyvsp[(5) - (8)].real),(yyvsp[(6) - (8)].real)), (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 378:
#line 1109 "frame/parser.Y"
    {fr->cropBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 379:
#line 1110 "frame/parser.Y"
    {fr->cropMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 380:
#line 1111 "frame/parser.Y"
    {fr->cropEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 381:
#line 1114 "frame/parser.Y"
    {fr->crop3dCmd();;}
    break;

  case 382:
#line 1116 "frame/parser.Y"
    {fr->crop3dCmd((yyvsp[(1) - (4)].real), (yyvsp[(2) - (4)].real), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 383:
#line 1117 "frame/parser.Y"
    {fr->crop3dBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 384:
#line 1118 "frame/parser.Y"
    {fr->crop3dMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 385:
#line 1119 "frame/parser.Y"
    {fr->crop3dEndCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 386:
#line 1123 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), (Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 387:
#line 1125 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 388:
#line 1126 "frame/parser.Y"
    {fr->crosshairCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 389:
#line 1127 "frame/parser.Y"
    {fr->crosshairWarpCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 390:
#line 1130 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)), (Coord::InternalSystem)(yyvsp[(3) - (5)].integer));;}
    break;

  case 391:
#line 1132 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 392:
#line 1134 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer));;}
    break;

  case 393:
#line 1136 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 394:
#line 1139 "frame/parser.Y"
    {fr->axesOrderCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 395:
#line 1142 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 396:
#line 1143 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 397:
#line 1144 "frame/parser.Y"
    {(yyval.integer) = Base::SUM;;}
    break;

  case 398:
#line 1145 "frame/parser.Y"
    {(yyval.integer) = Base::MEDIAN;;}
    break;

  case 399:
#line 1148 "frame/parser.Y"
    {fr->fadeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 400:
#line 1149 "frame/parser.Y"
    {fr->fadeClearCmd();;}
    break;

  case 401:
#line 1152 "frame/parser.Y"
    {fr->fitsyHasExtCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 402:
#line 1153 "frame/parser.Y"
    {fr->fitsyInfoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 403:
#line 1156 "frame/parser.Y"
    {fr->getCmd();;}
    break;

  case 404:
#line 1157 "frame/parser.Y"
    {fr->getBgColorCmd();;}
    break;

  case 418:
#line 1171 "frame/parser.Y"
    {fr->getDATASECCmd();;}
    break;

  case 421:
#line 1174 "frame/parser.Y"
    {fr->getHighliteColorCmd();;}
    break;

  case 422:
#line 1175 "frame/parser.Y"
    {fr->getHistogramCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].integer));;}
    break;

  case 428:
#line 1181 "frame/parser.Y"
    {fr->getIRAFAlignCmd();;}
    break;

  case 429:
#line 1182 "frame/parser.Y"
    {fr->getMinMaxCmd();;}
    break;

  case 434:
#line 1187 "frame/parser.Y"
    {fr->getNANColorCmd();;}
    break;

  case 435:
#line 1188 "frame/parser.Y"
    {fr->getOrientCmd();;}
    break;

  case 437:
#line 1191 "frame/parser.Y"
    {fr->getPixelTableCmd(Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (Coord::InternalSystem)(yyvsp[(3) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(7) - (8)].integer), (yyvsp[(8) - (8)].str));;}
    break;

  case 439:
#line 1193 "frame/parser.Y"
    {fr->getRotateCmd();;}
    break;

  case 441:
#line 1195 "frame/parser.Y"
    {fr->getThreadsCmd();;}
    break;

  case 443:
#line 1197 "frame/parser.Y"
    {fr->getTypeCmd();;}
    break;

  case 444:
#line 1199 "frame/parser.Y"
    {fr->getValueCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 447:
#line 1202 "frame/parser.Y"
    {fr->getZoomCmd();;}
    break;

  case 448:
#line 1206 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 449:
#line 1208 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 450:
#line 1212 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 451:
#line 1214 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 452:
#line 1217 "frame/parser.Y"
    {fr->getBinDepthCmd();;}
    break;

  case 453:
#line 1218 "frame/parser.Y"
    {fr->getBinFactorCmd();;}
    break;

  case 454:
#line 1219 "frame/parser.Y"
    {fr->getBinFunctionCmd();;}
    break;

  case 455:
#line 1220 "frame/parser.Y"
    {fr->getBinBufferSizeCmd();;}
    break;

  case 456:
#line 1221 "frame/parser.Y"
    {fr->getBinCursorCmd();;}
    break;

  case 457:
#line 1222 "frame/parser.Y"
    {fr->getBinFilterCmd();;}
    break;

  case 459:
#line 1224 "frame/parser.Y"
    {fr->getBinListCmd();;}
    break;

  case 460:
#line 1227 "frame/parser.Y"
    {fr->getBinColsCmd();;}
    break;

  case 461:
#line 1228 "frame/parser.Y"
    {fr->getBinColsMinMaxCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 462:
#line 1229 "frame/parser.Y"
    {fr->getBinColsDimCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 463:
#line 1232 "frame/parser.Y"
    {fr->getBlockCmd();;}
    break;

  case 464:
#line 1233 "frame/parser.Y"
    {fr->getBlockNanZeroCmd();;}
    break;

  case 465:
#line 1236 "frame/parser.Y"
    {fr->getClipCmd();;}
    break;

  case 466:
#line 1238 "frame/parser.Y"
    {fr->getClipCmd((FrScale::ClipMode)(yyvsp[(1) - (2)].integer), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 467:
#line 1240 "frame/parser.Y"
    {fr->getClipCmd((yyvsp[(1) - (2)].real), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 468:
#line 1241 "frame/parser.Y"
    {fr->getClipScopeCmd();;}
    break;

  case 469:
#line 1242 "frame/parser.Y"
    {fr->getClipModeCmd();;}
    break;

  case 471:
#line 1244 "frame/parser.Y"
    {fr->getClipUserCmd();;}
    break;

  case 473:
#line 1247 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	;}
    break;

  case 474:
#line 1253 "frame/parser.Y"
    {fr->getClipMinMaxModeCmd();;}
    break;

  case 475:
#line 1254 "frame/parser.Y"
    {fr->getClipMinMaxSampleCmd();;}
    break;

  case 476:
#line 1257 "frame/parser.Y"
    {fr->getClipZScaleContrastCmd();;}
    break;

  case 477:
#line 1258 "frame/parser.Y"
    {fr->getClipZScaleSampleCmd();;}
    break;

  case 478:
#line 1259 "frame/parser.Y"
    {fr->getClipZScaleLineCmd();;}
    break;

  case 479:
#line 1262 "frame/parser.Y"
    {fr->getColorbarCmd();;}
    break;

  case 480:
#line 1263 "frame/parser.Y"
    {fr->getColorbarTagCmd();;}
    break;

  case 482:
#line 1269 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 483:
#line 1271 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 484:
#line 1273 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 485:
#line 1276 "frame/parser.Y"
    {fr->getColorScaleCmd();;}
    break;

  case 487:
#line 1278 "frame/parser.Y"
    {fr->getColorScaleLogCmd();;}
    break;

  case 488:
#line 1279 "frame/parser.Y"
    {fr->getColorScaleGhsCmd();;}
    break;

  case 489:
#line 1283 "frame/parser.Y"
    {fr->getColorScaleLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 490:
#line 1287 "frame/parser.Y"
    {fr->getContourCmd((Coord::CoordSystem)(yyvsp[(1) - (2)].integer),(Coord::SkyFrame)(yyvsp[(2) - (2)].integer));;}
    break;

  case 491:
#line 1288 "frame/parser.Y"
    {fr->getContourAuxCountCmd();;}
    break;

  case 493:
#line 1290 "frame/parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 494:
#line 1291 "frame/parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 495:
#line 1292 "frame/parser.Y"
    {fr->getContourDashListCmd();;}
    break;

  case 496:
#line 1293 "frame/parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 497:
#line 1294 "frame/parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 498:
#line 1295 "frame/parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 500:
#line 1297 "frame/parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 501:
#line 1298 "frame/parser.Y"
    {fr->getContourStyleCmd();;}
    break;

  case 502:
#line 1299 "frame/parser.Y"
    {fr->getContourStyleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 503:
#line 1300 "frame/parser.Y"
    {fr->getContourAuxCmd();;}
    break;

  case 504:
#line 1301 "frame/parser.Y"
    {fr->getContourAuxStyleCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 505:
#line 1302 "frame/parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 506:
#line 1305 "frame/parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 507:
#line 1306 "frame/parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 508:
#line 1307 "frame/parser.Y"
    {fr->getContourClipScopeCmd();;}
    break;

  case 509:
#line 1310 "frame/parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 510:
#line 1311 "frame/parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 511:
#line 1315 "frame/parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 512:
#line 1317 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 513:
#line 1325 "frame/parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 514:
#line 1327 "frame/parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 515:
#line 1329 "frame/parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 516:
#line 1332 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 517:
#line 1334 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 518:
#line 1335 "frame/parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 519:
#line 1338 "frame/parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 520:
#line 1341 "frame/parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 521:
#line 1343 "frame/parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 522:
#line 1347 "frame/parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 523:
#line 1349 "frame/parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 524:
#line 1352 "frame/parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 525:
#line 1356 "frame/parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (2)].str), (Base::FileNameType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 526:
#line 1357 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 527:
#line 1359 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)), (Coord::InternalSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (Base::FileNameType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 528:
#line 1362 "frame/parser.Y"
    {fr->iisGetCmd((yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 529:
#line 1363 "frame/parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 531:
#line 1367 "frame/parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 532:
#line 1368 "frame/parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 533:
#line 1369 "frame/parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 534:
#line 1372 "frame/parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 535:
#line 1374 "frame/parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 536:
#line 1375 "frame/parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 538:
#line 1377 "frame/parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 542:
#line 1381 "frame/parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 543:
#line 1382 "frame/parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 544:
#line 1383 "frame/parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 545:
#line 1385 "frame/parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::DistFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 547:
#line 1387 "frame/parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 548:
#line 1390 "frame/parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 549:
#line 1392 "frame/parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 550:
#line 1394 "frame/parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 551:
#line 1395 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 552:
#line 1396 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 553:
#line 1397 "frame/parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 554:
#line 1400 "frame/parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 555:
#line 1401 "frame/parser.Y"
    {fr->getFitsDepthCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 556:
#line 1405 "frame/parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 557:
#line 1407 "frame/parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 558:
#line 1410 "frame/parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 559:
#line 1413 "frame/parser.Y"
    {fr->getFitsSliceCmd(2);;}
    break;

  case 560:
#line 1414 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 561:
#line 1416 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 562:
#line 1418 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((yyvsp[(3) - (4)].integer), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 563:
#line 1420 "frame/parser.Y"
    {fr->getFitsSliceToImageCmd((yyvsp[(3) - (4)].real), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 564:
#line 1423 "frame/parser.Y"
    {fr->getGridCmd();;}
    break;

  case 565:
#line 1424 "frame/parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 566:
#line 1425 "frame/parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 567:
#line 1428 "frame/parser.Y"
    {fr->getLayerCountCmd();;}
    break;

  case 568:
#line 1429 "frame/parser.Y"
    {fr->getLayerNoCmd();;}
    break;

  case 569:
#line 1430 "frame/parser.Y"
    {fr->getLayerColorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 570:
#line 1431 "frame/parser.Y"
    {fr->getLayerBlendCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 571:
#line 1432 "frame/parser.Y"
    {fr->getLayerTransparencyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 572:
#line 1433 "frame/parser.Y"
    {fr->getLayerViewCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 573:
#line 1436 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 574:
#line 1437 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 575:
#line 1438 "frame/parser.Y"
    {fr->getMaskRangeCmd();;}
    break;

  case 576:
#line 1439 "frame/parser.Y"
    {fr->getMaskSystemCmd();;}
    break;

  case 577:
#line 1440 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 578:
#line 1441 "frame/parser.Y"
    {fr->getMaskCountCmd();;}
    break;

  case 579:
#line 1442 "frame/parser.Y"
    {fr->getMaskBlendCmd();;}
    break;

  case 580:
#line 1445 "frame/parser.Y"
    {(yyval.integer) = 0;;}
    break;

  case 581:
#line 1446 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 582:
#line 1449 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 583:
#line 1452 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 584:
#line 1453 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 585:
#line 1454 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 586:
#line 1457 "frame/parser.Y"
    {fr->getMultiColorSystemCmd();;}
    break;

  case 587:
#line 1460 "frame/parser.Y"
    {fr->getHLSChannelCmd();;}
    break;

  case 588:
#line 1461 "frame/parser.Y"
    {fr->getHLSSystemCmd();;}
    break;

  case 589:
#line 1462 "frame/parser.Y"
    {fr->getHLSViewCmd();;}
    break;

  case 590:
#line 1465 "frame/parser.Y"
    {fr->getHSVChannelCmd();;}
    break;

  case 591:
#line 1466 "frame/parser.Y"
    {fr->getHSVSystemCmd();;}
    break;

  case 592:
#line 1467 "frame/parser.Y"
    {fr->getHSVViewCmd();;}
    break;

  case 593:
#line 1470 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 594:
#line 1471 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 595:
#line 1472 "frame/parser.Y"
    {fr->getSmoothRadiusMinorCmd();;}
    break;

  case 596:
#line 1473 "frame/parser.Y"
    {fr->getSmoothSigmaCmd();;}
    break;

  case 597:
#line 1474 "frame/parser.Y"
    {fr->getSmoothSigmaMinorCmd();;}
    break;

  case 598:
#line 1475 "frame/parser.Y"
    {fr->getSmoothAngleCmd();;}
    break;

  case 603:
#line 1482 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 604:
#line 1483 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 606:
#line 1485 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 607:
#line 1488 "frame/parser.Y"
    {fr->get3dShadeCmd();;}
    break;

  case 608:
#line 1489 "frame/parser.Y"
    {fr->get3dShadeAmbientCmd();;}
    break;

  case 609:
#line 1490 "frame/parser.Y"
    {fr->get3dShadeStrengthCmd();;}
    break;

  case 611:
#line 1494 "frame/parser.Y"
    {fr->get3dShadeNormalCmd();;}
    break;

  case 612:
#line 1495 "frame/parser.Y"
    {fr->get3dShadeNormalStrengthCmd();;}
    break;

  case 613:
#line 1498 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 614:
#line 1499 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 615:
#line 1502 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 616:
#line 1503 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 617:
#line 1506 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 618:
#line 1507 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 619:
#line 1510 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 620:
#line 1511 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 621:
#line 1514 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 623:
#line 1516 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 624:
#line 1519 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 625:
#line 1520 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 627:
#line 1524 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 628:
#line 1528 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 629:
#line 1531 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer),
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 630:
#line 1538 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 631:
#line 1539 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 632:
#line 1542 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 633:
#line 1543 "frame/parser.Y"
    {fr->hasBgColorCmd();;}
    break;

  case 636:
#line 1546 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 637:
#line 1547 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 638:
#line 1548 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 639:
#line 1549 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 641:
#line 1551 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 642:
#line 1552 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 643:
#line 1553 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 645:
#line 1555 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 646:
#line 1556 "frame/parser.Y"
    {fr->hasImageCmd();;}
    break;

  case 647:
#line 1557 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 648:
#line 1558 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 650:
#line 1562 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 651:
#line 1565 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 652:
#line 1566 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 653:
#line 1569 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 654:
#line 1570 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 655:
#line 1571 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 656:
#line 1572 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 657:
#line 1575 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 658:
#line 1576 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 659:
#line 1577 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 660:
#line 1578 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 661:
#line 1581 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 662:
#line 1582 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 663:
#line 1583 "frame/parser.Y"
    {fr->hasWCSEquCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 664:
#line 1584 "frame/parser.Y"
    {fr->hasWCSLinearCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 665:
#line 1585 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 666:
#line 1586 "frame/parser.Y"
    {fr->hasWCS3DCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 667:
#line 1589 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 668:
#line 1590 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 669:
#line 1591 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 672:
#line 1595 "frame/parser.Y"
    {fr->iisSetCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 673:
#line 1596 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 674:
#line 1599 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 675:
#line 1602 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 676:
#line 1603 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 677:
#line 1607 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 678:
#line 1609 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 679:
#line 1610 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 686:
#line 1622 "frame/parser.Y"
    {
	  if (!strcmp((yyvsp[(1) - (2)].str),"hips"))
	    fr->loadHiPSCmd((yyvsp[(2) - (2)].str));
	  else
	    YYERROR;
	;}
    break;

  case 687:
#line 1631 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 688:
#line 1633 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 689:
#line 1635 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 690:
#line 1636 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 691:
#line 1638 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 692:
#line 1640 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 693:
#line 1642 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 694:
#line 1644 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 695:
#line 1646 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 699:
#line 1652 "frame/parser.Y"
    {fr->loadRGBArrayCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 700:
#line 1653 "frame/parser.Y"
    {fr->loadRGBArrayCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 701:
#line 1654 "frame/parser.Y"
    {fr->loadRGBArrayCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 702:
#line 1655 "frame/parser.Y"
    {fr->loadRGBArrayCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 703:
#line 1656 "frame/parser.Y"
    {fr->loadRGBArrayCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 704:
#line 1658 "frame/parser.Y"
    {fr->loadRGBArrayCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 705:
#line 1659 "frame/parser.Y"
    {fr->loadRGBArrayCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 706:
#line 1660 "frame/parser.Y"
    {fr->loadRGBArrayCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 707:
#line 1661 "frame/parser.Y"
    {fr->loadRGBArrayCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 708:
#line 1664 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 709:
#line 1668 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 710:
#line 1670 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 711:
#line 1672 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 712:
#line 1674 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 713:
#line 1676 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 714:
#line 1678 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 715:
#line 1680 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 716:
#line 1682 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str),
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 717:
#line 1685 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 718:
#line 1687 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 719:
#line 1689 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 729:
#line 1701 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 730:
#line 1702 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 731:
#line 1703 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 732:
#line 1704 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 733:
#line 1705 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 734:
#line 1706 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 735:
#line 1708 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 736:
#line 1710 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 737:
#line 1711 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 738:
#line 1712 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 739:
#line 1713 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 740:
#line 1716 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 741:
#line 1717 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 742:
#line 1718 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 743:
#line 1719 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 744:
#line 1720 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 745:
#line 1722 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 746:
#line 1723 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 747:
#line 1724 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 748:
#line 1725 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 754:
#line 1736 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 755:
#line 1739 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 756:
#line 1742 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 757:
#line 1745 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 758:
#line 1748 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 759:
#line 1751 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 760:
#line 1754 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 761:
#line 1757 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 762:
#line 1760 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 763:
#line 1765 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 764:
#line 1768 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 765:
#line 1771 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 766:
#line 1774 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 767:
#line 1777 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 768:
#line 1780 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 769:
#line 1783 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 770:
#line 1786 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 771:
#line 1789 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 772:
#line 1792 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 773:
#line 1795 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 774:
#line 1800 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 775:
#line 1803 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 776:
#line 1806 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 777:
#line 1809 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 778:
#line 1812 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 779:
#line 1815 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer),
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 780:
#line 1818 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 781:
#line 1821 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 782:
#line 1824 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 783:
#line 1829 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 784:
#line 1831 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 785:
#line 1833 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 786:
#line 1835 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 787:
#line 1837 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 788:
#line 1839 "frame/parser.Y"
    {
	  fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str),
					   (Base::LayerType)(yyvsp[(6) - (6)].integer));
        ;}
    break;

  case 789:
#line 1844 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 790:
#line 1846 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 791:
#line 1848 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 792:
#line 1852 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 793:
#line 1855 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 794:
#line 1858 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 795:
#line 1861 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 796:
#line 1864 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 797:
#line 1867 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 798:
#line 1870 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer),
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 799:
#line 1873 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer),
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 800:
#line 1876 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 801:
#line 1879 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 802:
#line 1882 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 803:
#line 1886 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 804:
#line 1887 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 805:
#line 1888 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 806:
#line 1889 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 807:
#line 1890 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 808:
#line 1891 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 809:
#line 1893 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 810:
#line 1895 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 811:
#line 1896 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 812:
#line 1897 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 813:
#line 1898 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 814:
#line 1901 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 815:
#line 1902 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 816:
#line 1903 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 817:
#line 1904 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 818:
#line 1905 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 819:
#line 1907 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 820:
#line 1908 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 821:
#line 1909 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 822:
#line 1910 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 823:
#line 1914 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 824:
#line 1916 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 825:
#line 1917 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 826:
#line 1919 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 827:
#line 1921 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 828:
#line 1923 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 829:
#line 1926 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 830:
#line 1927 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 831:
#line 1930 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 832:
#line 1931 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 833:
#line 1932 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 834:
#line 1935 "frame/parser.Y"
    {;}
    break;

  case 835:
#line 1938 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 836:
#line 1939 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 837:
#line 1940 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 838:
#line 1941 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 839:
#line 1942 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 840:
#line 1943 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 841:
#line 1944 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 842:
#line 1948 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 844:
#line 1956 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 845:
#line 1957 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 846:
#line 1959 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 847:
#line 1961 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 848:
#line 1962 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 849:
#line 1963 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 851:
#line 1964 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 854:
#line 1967 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 855:
#line 1968 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 856:
#line 1970 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 857:
#line 1972 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 858:
#line 1974 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 859:
#line 1977 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 860:
#line 1979 "frame/parser.Y"
    {fr->regionStatsCallbackCmd((yyvsp[(4) - (4)].str));;}
    break;

  case 861:
#line 1981 "frame/parser.Y"
    {fr->regionStatsCallbackCmd(NULL);;}
    break;

  case 862:
#line 1983 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 863:
#line 1984 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 864:
#line 1986 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 865:
#line 1989 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 866:
#line 1992 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 867:
#line 1996 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 868:
#line 1999 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 869:
#line 2002 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 870:
#line 2005 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 871:
#line 2009 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 872:
#line 2013 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 873:
#line 2018 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str),
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 874:
#line 2022 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 875:
#line 2024 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 876:
#line 2025 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 877:
#line 2027 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 878:
#line 2029 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 879:
#line 2031 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 880:
#line 2033 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 881:
#line 2035 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 882:
#line 2036 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 883:
#line 2037 "frame/parser.Y"
    {fr->markerCompositeAreaCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 884:
#line 2039 "frame/parser.Y"
    {fr->markerCompositeOperationCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 885:
#line 2041 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 886:
#line 2043 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 887:
#line 2046 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 888:
#line 2050 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 889:
#line 2054 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 890:
#line 2056 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 891:
#line 2058 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 892:
#line 2060 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 893:
#line 2062 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 894:
#line 2064 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 895:
#line 2066 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 896:
#line 2068 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 897:
#line 2070 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 898:
#line 2072 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 899:
#line 2074 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 900:
#line 2076 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 901:
#line 2078 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 902:
#line 2080 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 903:
#line 2081 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 904:
#line 2083 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 905:
#line 2085 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 906:
#line 2086 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 907:
#line 2087 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 908:
#line 2089 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 909:
#line 2091 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 910:
#line 2092 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 911:
#line 2093 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 912:
#line 2094 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 913:
#line 2096 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 914:
#line 2098 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 915:
#line 2102 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 916:
#line 2105 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 917:
#line 2108 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 918:
#line 2112 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 919:
#line 2116 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 920:
#line 2121 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str),
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 921:
#line 2125 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 922:
#line 2126 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 923:
#line 2127 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 924:
#line 2129 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 925:
#line 2130 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 926:
#line 2132 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 927:
#line 2136 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 928:
#line 2137 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 929:
#line 2138 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 930:
#line 2140 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 931:
#line 2143 "frame/parser.Y"
    {fr->markerPolygonPointCmd((yyvsp[(1) - (7)].integer),(yyvsp[(7) - (7)].str),(Coord::CoordSystem)(yyvsp[(4) - (7)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),(Coord::SkyFormat)(yyvsp[(6) - (7)].integer));;}
    break;

  case 932:
#line 2146 "frame/parser.Y"
    {fr->markerPolygonPointVarCmd((yyvsp[(1) - (8)].integer),(yyvsp[(8) - (8)].str),(Coord::CoordSystem)(yyvsp[(4) - (8)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (8)].integer),(Coord::SkyFormat)(yyvsp[(6) - (8)].integer));;}
    break;

  case 933:
#line 2149 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 934:
#line 2152 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 935:
#line 2155 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 936:
#line 2156 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 937:
#line 2157 "frame/parser.Y"
    {fr->markerPointGlyphCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 938:
#line 2161 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 939:
#line 2165 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 940:
#line 2167 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 941:
#line 2168 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 942:
#line 2170 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 943:
#line 2173 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 944:
#line 2176 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 945:
#line 2177 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 946:
#line 2179 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 947:
#line 2180 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 948:
#line 2181 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 949:
#line 2183 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 950:
#line 2184 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 951:
#line 2186 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 952:
#line 2187 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 953:
#line 2190 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 954:
#line 2193 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 955:
#line 2194 "frame/parser.Y"
    {fr->markerDashListCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 956:
#line 2196 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 957:
#line 2197 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 961:
#line 2202 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 962:
#line 2203 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 963:
#line 2205 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 964:
#line 2207 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 965:
#line 2209 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 966:
#line 2210 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 970:
#line 2216 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 971:
#line 2217 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 972:
#line 2218 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 973:
#line 2219 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 974:
#line 2220 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 975:
#line 2221 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 976:
#line 2222 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 977:
#line 2223 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 978:
#line 2224 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 979:
#line 2225 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 980:
#line 2227 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 981:
#line 2229 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 982:
#line 2230 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 983:
#line 2231 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 984:
#line 2232 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 985:
#line 2233 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 986:
#line 2235 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 987:
#line 2236 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 988:
#line 2237 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 989:
#line 2238 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 990:
#line 2239 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 991:
#line 2241 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 992:
#line 2242 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 993:
#line 2243 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 994:
#line 2244 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 995:
#line 2245 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 996:
#line 2246 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 997:
#line 2247 "frame/parser.Y"
    {fr->markerDashListCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 998:
#line 2250 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 999:
#line 2251 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 1000:
#line 2252 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 1001:
#line 2253 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 1002:
#line 2254 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 1003:
#line 2255 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 1004:
#line 2256 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 1005:
#line 2257 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 1006:
#line 2258 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 1007:
#line 2259 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 1008:
#line 2260 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 1009:
#line 2261 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 1010:
#line 2262 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 1011:
#line 2263 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 1012:
#line 2264 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 1013:
#line 2265 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 1014:
#line 2266 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 1015:
#line 2267 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 1016:
#line 2268 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 1017:
#line 2269 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 1018:
#line 2270 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 1019:
#line 2273 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 1020:
#line 2274 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1021:
#line 2275 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1022:
#line 2276 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1023:
#line 2277 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1024:
#line 2279 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 1025:
#line 2289 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1026:
#line 2297 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1027:
#line 2306 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1028:
#line 2314 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1029:
#line 2320 "frame/parser.Y"
    {fr->createPolygonCanvasVarCmd((yyvsp[(4) - (5)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1030:
#line 2325 "frame/parser.Y"
    {fr->createSegmentCanvasVarCmd((yyvsp[(4) - (5)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1031:
#line 2331 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1032:
#line 2338 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1033:
#line 2346 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1034:
#line 2354 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1035:
#line 2359 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1036:
#line 2364 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1037:
#line 2369 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1038:
#line 2374 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1039:
#line 2379 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1040:
#line 2384 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1041:
#line 2389 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1042:
#line 2394 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::GLYPH, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist,(yyvsp[(5) - (6)].str));;}
    break;

  case 1043:
#line 2399 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),Coord::CANVAS),
	    Point::GLYPH, (yyvsp[(5) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist,(yyvsp[(6) - (7)].str));;}
    break;

  case 1044:
#line 2408 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer),
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1045:
#line 2418 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1046:
#line 2428 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1047:
#line 2437 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1048:
#line 2445 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1049:
#line 2455 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1050:
#line 2465 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1051:
#line 2475 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1052:
#line 2487 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1053:
#line 2496 "frame/parser.Y"
    {fr->createCompositeCmd(
	    (yyvsp[(2) - (3)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1055:
#line 2504 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 1056:
#line 2506 "frame/parser.Y"
    {
	  if ((yyvsp[(1) - (1)].integer) < 0 || (yyvsp[(1) - (1)].integer) > 1) {
	    fr->error("composite operation must be 0 (union) or 1 (intersection)");
	    YYERROR;
	  }
	  (yyval.integer)=(yyvsp[(1) - (1)].integer);
	;}
    break;

  case 1057:
#line 2515 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 1058:
#line 2517 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 1059:
#line 2519 "frame/parser.Y"
    {
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 1060:
#line 2524 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 1061:
#line 2527 "frame/parser.Y"
    {fr->markerDeleteAllCmd(0);;}
    break;

  case 1062:
#line 2528 "frame/parser.Y"
    {fr->markerDeleteAllCmd(1);;}
    break;

  case 1063:
#line 2529 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerDeleteAllCmd(0);
        ;}
    break;

  case 1064:
#line 2536 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1065:
#line 2538 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1066:
#line 2539 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 1067:
#line 2542 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 1068:
#line 2543 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 1069:
#line 2544 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 1070:
#line 2545 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 1071:
#line 2546 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 1072:
#line 2547 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 1073:
#line 2548 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 1075:
#line 2552 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 1076:
#line 2553 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 1077:
#line 2554 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 1078:
#line 2555 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1079:
#line 2556 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1080:
#line 2559 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(yyvsp[(6) - (8)].str),(Coord::CoordSystem)(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 1081:
#line 2561 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 1082:
#line 2563 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 1083:
#line 2565 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 1084:
#line 2567 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 1085:
#line 2569 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1086:
#line 2571 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsDataCmd((yyvsp[(1) - (6)].integer),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1087:
#line 2573 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsDataAllCmd((Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1088:
#line 2575 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsFieldsCmd();;}
    break;

  case 1089:
#line 2577 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 1090:
#line 2578 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1091:
#line 2579 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1092:
#line 2581 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1093:
#line 2583 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1094:
#line 2586 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1095:
#line 2588 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1096:
#line 2589 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1097:
#line 2590 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1098:
#line 2592 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1099:
#line 2594 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1100:
#line 2597 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer),
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1101:
#line 2600 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1102:
#line 2601 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1103:
#line 2602 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1104:
#line 2603 "frame/parser.Y"
    {fr->getMarkerCompassEndCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1105:
#line 2604 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1106:
#line 2606 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1107:
#line 2607 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1108:
#line 2608 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1109:
#line 2609 "frame/parser.Y"
    {fr->getMarkerCompositeAreaCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1110:
#line 2610 "frame/parser.Y"
    {fr->getMarkerCompositeOperationCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1111:
#line 2611 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1112:
#line 2612 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1113:
#line 2614 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1114:
#line 2616 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1115:
#line 2618 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1116:
#line 2620 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer),
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1117:
#line 2622 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1118:
#line 2623 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1119:
#line 2625 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1120:
#line 2627 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1121:
#line 2629 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1122:
#line 2630 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1123:
#line 2631 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1124:
#line 2632 "frame/parser.Y"
    {fr->getMarkerLineEndCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1125:
#line 2634 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1126:
#line 2636 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1127:
#line 2639 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1128:
#line 2642 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1129:
#line 2643 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1130:
#line 2644 "frame/parser.Y"
    {fr->getMarkerPointGlyphCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1131:
#line 2646 "frame/parser.Y"
    {fr->getMarkerPolygonPointCmd((yyvsp[(1) - (6)].integer),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),(Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1132:
#line 2649 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1133:
#line 2652 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer),
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1134:
#line 2655 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1135:
#line 2656 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1136:
#line 2657 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1137:
#line 2658 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1138:
#line 2660 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1139:
#line 2662 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1140:
#line 2664 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1141:
#line 2665 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1142:
#line 2667 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1143:
#line 2668 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1144:
#line 2669 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1145:
#line 2670 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1146:
#line 2671 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1147:
#line 2673 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1148:
#line 2674 "frame/parser.Y"
    {fr->getMarkerVectorEndCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1149:
#line 2676 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1150:
#line 2678 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1151:
#line 2680 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1152:
#line 2681 "frame/parser.Y"
    {fr->getMarkerDashListCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1154:
#line 2683 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1155:
#line 2684 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1156:
#line 2686 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1157:
#line 2688 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1158:
#line 2689 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1159:
#line 2690 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1161:
#line 2692 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1163:
#line 2696 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1164:
#line 2697 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1165:
#line 2698 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1166:
#line 2699 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1167:
#line 2700 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1168:
#line 2701 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1169:
#line 2703 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1170:
#line 2704 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1171:
#line 2706 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1172:
#line 2707 "frame/parser.Y"
    {fr->getMarkerDashListCmd();;}
    break;

  case 1173:
#line 2710 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1174:
#line 2711 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1175:
#line 2712 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1176:
#line 2713 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1177:
#line 2716 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1178:
#line 2717 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1179:
#line 2720 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1180:
#line 2721 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1181:
#line 2724 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1182:
#line 2725 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1183:
#line 2728 "frame/parser.Y"
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

  case 1184:
#line 2741 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1185:
#line 2742 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1186:
#line 2746 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1187:
#line 2747 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1188:
#line 2751 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1189:
#line 2752 "frame/parser.Y"
    {fr->markerLayerCmd(Base::FOOTPRINT);;}
    break;

  case 1190:
#line 2757 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), 0, propQMask, propQValue, taglist);;}
    break;

  case 1191:
#line 2761 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), 1, propQMask, propQValue, taglist);;}
    break;

  case 1192:
#line 2766 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str),0,"green",Coord::PHYSICAL,Coord::ICRS);;}
    break;

  case 1193:
#line 2768 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1194:
#line 2771 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer),0,"green",Coord::PHYSICAL,Coord::ICRS);;}
    break;

  case 1195:
#line 2773 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1196:
#line 2776 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (2)].str), "green");;}
    break;

  case 1197:
#line 2778 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));;}
    break;

  case 1198:
#line 2781 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1199:
#line 2782 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1200:
#line 2783 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1201:
#line 2784 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1202:
#line 2785 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1203:
#line 2786 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1204:
#line 2788 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1207:
#line 2795 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1208:
#line 2796 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1209:
#line 2797 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1210:
#line 2798 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1211:
#line 2799 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1212:
#line 2800 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1215:
#line 2805 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1216:
#line 2806 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1217:
#line 2807 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1218:
#line 2808 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1219:
#line 2809 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1220:
#line 2810 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1221:
#line 2811 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1222:
#line 2812 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1223:
#line 2813 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1224:
#line 2814 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1225:
#line 2815 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1226:
#line 2816 "frame/parser.Y"
    {(yyval.integer) = Marker::FILL;;}
    break;

  case 1229:
#line 2823 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1230:
#line 2824 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1232:
#line 2828 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(1) - (6)].str), (Base::MarkerFormat)(yyvsp[(2) - (6)].integer), (Coord::CoordSystem)(yyvsp[(3) - (6)].integer), (Coord::SkyFrame)(yyvsp[(4) - (6)].integer), (Coord::SkyFormat)(yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].integer), 0);;}
    break;

  case 1233:
#line 2830 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer), 1);;}
    break;

  case 1234:
#line 2831 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1235:
#line 2834 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1236:
#line 2835 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1237:
#line 2836 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1238:
#line 2837 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1239:
#line 2838 "frame/parser.Y"
    {fr->markerSelectFirstCmd();;}
    break;

  case 1240:
#line 2839 "frame/parser.Y"
    {fr->markerSelectLastCmd();;}
    break;

  case 1241:
#line 2842 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1242:
#line 2843 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1245:
#line 2851 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1246:
#line 2854 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1247:
#line 2855 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1251:
#line 2862 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1252:
#line 2865 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1253:
#line 2869 "frame/parser.Y"
    {fr->layerCreateCmd();;}
    break;

  case 1254:
#line 2870 "frame/parser.Y"
    {fr->layerCreateCmd();;}
    break;

  case 1255:
#line 2871 "frame/parser.Y"
    {fr->layerNoCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1256:
#line 2872 "frame/parser.Y"
    {fr->layerNoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1257:
#line 2873 "frame/parser.Y"
    {fr->layerColorCmd(0,(yyvsp[(2) - (2)].str));;}
    break;

  case 1258:
#line 2874 "frame/parser.Y"
    {fr->layerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1259:
#line 2875 "frame/parser.Y"
    {fr->layerBlendCmd(0,(FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1260:
#line 2876 "frame/parser.Y"
    {fr->layerBlendCmd((yyvsp[(1) - (3)].integer),(FitsMask::MaskBlend)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1261:
#line 2877 "frame/parser.Y"
    {fr->layerTransparencyCmd(0,(yyvsp[(2) - (2)].real));;}
    break;

  case 1262:
#line 2878 "frame/parser.Y"
    {fr->layerTransparencyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 1263:
#line 2879 "frame/parser.Y"
    {fr->layerViewCmd(0,(yyvsp[(2) - (2)].integer));;}
    break;

  case 1264:
#line 2880 "frame/parser.Y"
    {fr->layerViewCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1265:
#line 2882 "frame/parser.Y"
    {fr->layerShowCmd(0);;}
    break;

  case 1266:
#line 2883 "frame/parser.Y"
    {fr->layerShowCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1267:
#line 2884 "frame/parser.Y"
    {fr->layerHideCmd(0);;}
    break;

  case 1268:
#line 2885 "frame/parser.Y"
    {fr->layerHideCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1269:
#line 2886 "frame/parser.Y"
    {fr->layerDeleteCmd(0);;}
    break;

  case 1270:
#line 2887 "frame/parser.Y"
    {fr->layerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1271:
#line 2888 "frame/parser.Y"
    {fr->layerUpCmd(0);;}
    break;

  case 1272:
#line 2889 "frame/parser.Y"
    {fr->layerUpCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1273:
#line 2890 "frame/parser.Y"
    {fr->layerDownCmd(0);;}
    break;

  case 1274:
#line 2891 "frame/parser.Y"
    {fr->layerDownCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1275:
#line 2892 "frame/parser.Y"
    {fr->layerTopCmd(0);;}
    break;

  case 1276:
#line 2893 "frame/parser.Y"
    {fr->layerTopCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1277:
#line 2894 "frame/parser.Y"
    {fr->layerBottomCmd(0);;}
    break;

  case 1278:
#line 2895 "frame/parser.Y"
    {fr->layerBottomCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1279:
#line 2898 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1280:
#line 2899 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1281:
#line 2900 "frame/parser.Y"
    {fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1282:
#line 2901 "frame/parser.Y"
    {fr->maskRangeCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 1283:
#line 2902 "frame/parser.Y"
    {fr->maskSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1284:
#line 2903 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1285:
#line 2904 "frame/parser.Y"
    {fr->maskBlendCmd((FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1286:
#line 2905 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1287:
#line 2911 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1288:
#line 2912 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1289:
#line 2913 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1290:
#line 2914 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1291:
#line 2918 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1292:
#line 2919 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1293:
#line 2921 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1294:
#line 2926 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1296:
#line 2928 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1298:
#line 2930 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1299:
#line 2933 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1300:
#line 2935 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1301:
#line 2940 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1302:
#line 2943 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1303:
#line 2944 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1304:
#line 2945 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1305:
#line 2948 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1306:
#line 2950 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1307:
#line 2954 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1308:
#line 2955 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1309:
#line 2959 "frame/parser.Y"
    {fr->psColorSpaceCmd((PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1310:
#line 2960 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1311:
#line 2961 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1312:
#line 2962 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 1313:
#line 2968 "frame/parser.Y"
    {fr->precCmd((yyvsp[(1) - (9)].integer),(yyvsp[(2) - (9)].integer),(yyvsp[(3) - (9)].integer),(yyvsp[(4) - (9)].integer),(yyvsp[(5) - (9)].integer),(yyvsp[(6) - (9)].integer),(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 1314:
#line 2969 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->precCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 1315:
#line 2975 "frame/parser.Y"
    {(yyval.integer) = BW;;}
    break;

  case 1316:
#line 2976 "frame/parser.Y"
    {(yyval.integer) = GRAY;;}
    break;

  case 1317:
#line 2977 "frame/parser.Y"
    {(yyval.integer) = RGB;;}
    break;

  case 1318:
#line 2978 "frame/parser.Y"
    {(yyval.integer) = CMYK;;}
    break;

  case 1321:
#line 2986 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1322:
#line 2988 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1323:
#line 2989 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1324:
#line 2990 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1325:
#line 2994 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1326:
#line 2995 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1327:
#line 2996 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1328:
#line 2997 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1329:
#line 3000 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1330:
#line 3001 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1331:
#line 3002 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::FIP;;}
    break;

  case 1332:
#line 3005 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1333:
#line 3006 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1334:
#line 3007 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1335:
#line 3010 "frame/parser.Y"
    {fr->revealCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1336:
#line 3011 "frame/parser.Y"
    {fr->revealClearCmd();;}
    break;

  case 1337:
#line 3014 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1338:
#line 3015 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1339:
#line 3016 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1340:
#line 3020 "frame/parser.Y"
    {fr->setMultiColorSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1341:
#line 3023 "frame/parser.Y"
    {fr->setHLSChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1342:
#line 3024 "frame/parser.Y"
    {fr->setHLSChannelCmd("hue");;}
    break;

  case 1343:
#line 3025 "frame/parser.Y"
    {fr->setHLSChannelCmd("saturation");;}
    break;

  case 1344:
#line 3026 "frame/parser.Y"
    {fr->setHLSSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1345:
#line 3027 "frame/parser.Y"
    {fr->setHLSViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1346:
#line 3030 "frame/parser.Y"
    {fr->setHSVChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1347:
#line 3031 "frame/parser.Y"
    {fr->setHSVChannelCmd("hue");;}
    break;

  case 1348:
#line 3032 "frame/parser.Y"
    {fr->setHSVChannelCmd("saturation");;}
    break;

  case 1349:
#line 3033 "frame/parser.Y"
    {fr->setHSVChannelCmd("value");;}
    break;

  case 1350:
#line 3034 "frame/parser.Y"
    {fr->setHSVSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1351:
#line 3035 "frame/parser.Y"
    {fr->setHSVViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1352:
#line 3038 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1353:
#line 3039 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (2)].real))));;}
    break;

  case 1355:
#line 3041 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (2)].real))));;}
    break;

  case 1356:
#line 3042 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (3)].real))));;}
    break;

  case 1357:
#line 3045 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1358:
#line 3046 "frame/parser.Y"
    {fr->rotateMotionCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1359:
#line 3047 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1365:
#line 3055 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1366:
#line 3058 "frame/parser.Y"
    {fr->savePixelMaskFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1367:
#line 3059 "frame/parser.Y"
    {fr->savePixelMaskChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1368:
#line 3060 "frame/parser.Y"
    {fr->savePixelMaskSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1369:
#line 3064 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1370:
#line 3066 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1371:
#line 3068 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1388:
#line 3089 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1389:
#line 3090 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1390:
#line 3091 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1391:
#line 3094 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1392:
#line 3095 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1393:
#line 3096 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1394:
#line 3099 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1395:
#line 3100 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1396:
#line 3101 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1397:
#line 3104 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1398:
#line 3105 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1399:
#line 3106 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1401:
#line 3110 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1402:
#line 3111 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1403:
#line 3112 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1404:
#line 3115 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1405:
#line 3116 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1406:
#line 3117 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1407:
#line 3121 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1408:
#line 3123 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1409:
#line 3125 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1410:
#line 3128 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1411:
#line 3129 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1412:
#line 3130 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1413:
#line 3133 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1414:
#line 3134 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1415:
#line 3135 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1416:
#line 3139 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1417:
#line 3141 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1418:
#line 3143 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1419:
#line 3146 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1420:
#line 3147 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1421:
#line 3148 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1422:
#line 3151 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1423:
#line 3152 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1424:
#line 3153 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1425:
#line 3157 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1426:
#line 3159 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1427:
#line 3161 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1428:
#line 3164 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1429:
#line 3165 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1430:
#line 3166 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1431:
#line 3169 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1432:
#line 3170 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1433:
#line 3171 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1434:
#line 3174 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1435:
#line 3175 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1436:
#line 3176 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1437:
#line 3180 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1438:
#line 3182 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1439:
#line 3184 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1440:
#line 3188 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1441:
#line 3192 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1442:
#line 3194 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1443:
#line 3198 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1444:
#line 3201 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1445:
#line 3202 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1446:
#line 3203 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1447:
#line 3204 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1448:
#line 3207 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1449:
#line 3209 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1450:
#line 3211 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1451:
#line 3214 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 1453:
#line 3216 "frame/parser.Y"
    {fr->updateFitsCenterCmd();;}
    break;

  case 1454:
#line 3218 "frame/parser.Y"
    {fr->updateFitsCenterCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1455:
#line 3221 "frame/parser.Y"
    {fr->sliceCmd(2,(yyvsp[(1) - (1)].integer));;}
    break;

  case 1456:
#line 3222 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1457:
#line 3223 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1458:
#line 3226 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1459:
#line 3227 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1460:
#line 3231 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1462:
#line 3233 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1465:
#line 3238 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1466:
#line 3239 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1467:
#line 3240 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1468:
#line 3243 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1469:
#line 3244 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1470:
#line 3245 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1471:
#line 3248 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1472:
#line 3250 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1473:
#line 3255 "frame/parser.Y"
    {fr->wcsAlign2Cmd((yyvsp[(2) - (4)].integer), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1474:
#line 3256 "frame/parser.Y"
    {fr->wcsAlignPointerClearCmd();;}
    break;

  case 1475:
#line 3259 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1476:
#line 3266 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1477:
#line 3268 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1478:
#line 3270 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1479:
#line 3275 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1481:
#line 3279 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1482:
#line 3280 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1483:
#line 3281 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1484:
#line 3283 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1485:
#line 3285 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1486:
#line 3290 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 12459 "frame/parser.C"
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


#line 3294 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

