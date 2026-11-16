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
#define YYLAST   5977

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  401
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  248
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1485
/* YYNRULES -- Number of states.  */
#define YYNSTATES  3226

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
    1480,  1483,  1486,  1488,  1490,  1492,  1494,  1497,  1499,  1502,
    1504,  1506,  1509,  1511,  1515,  1517,  1518,  1520,  1522,  1523,
    1525,  1531,  1538,  1542,  1549,  1553,  1555,  1559,  1561,  1563,
    1565,  1569,  1576,  1584,  1590,  1593,  1595,  1601,  1606,  1608,
    1612,  1613,  1615,  1618,  1620,  1625,  1627,  1630,  1632,  1635,
    1639,  1642,  1644,  1647,  1649,  1654,  1657,  1659,  1661,  1665,
    1667,  1670,  1674,  1677,  1678,  1680,  1682,  1687,  1690,  1691,
    1693,  1697,  1702,  1707,  1708,  1710,  1712,  1714,  1716,  1719,
    1722,  1725,  1728,  1730,  1732,  1734,  1736,  1738,  1740,  1742,
    1743,  1745,  1747,  1749,  1751,  1753,  1755,  1757,  1759,  1761,
    1763,  1765,  1767,  1769,  1771,  1774,  1776,  1779,  1781,  1784,
    1787,  1790,  1793,  1795,  1797,  1800,  1802,  1803,  1805,  1807,
    1810,  1811,  1813,  1814,  1816,  1817,  1819,  1820,  1822,  1823,
    1825,  1826,  1829,  1832,  1833,  1835,  1838,  1840,  1847,  1853,
    1855,  1857,  1859,  1862,  1865,  1868,  1870,  1872,  1874,  1876,
    1879,  1881,  1883,  1885,  1888,  1890,  1892,  1894,  1897,  1900,
    1903,  1904,  1906,  1907,  1909,  1911,  1913,  1915,  1917,  1919,
    1921,  1923,  1926,  1929,  1932,  1934,  1937,  1941,  1943,  1946,
    1949,  1954,  1960,  1962,  1973,  1975,  1978,  1982,  1986,  1989,
    1992,  1995,  1998,  2001,  2004,  2007,  2010,  2015,  2020,  2025,
    2029,  2033,  2039,  2044,  2049,  2054,  2058,  2062,  2066,  2070,
    2074,  2078,  2081,  2084,  2089,  2093,  2097,  2101,  2105,  2110,
    2115,  2120,  2125,  2131,  2136,  2143,  2151,  2156,  2161,  2167,
    2170,  2174,  2178,  2182,  2186,  2190,  2194,  2198,  2201,  2205,
    2209,  2213,  2217,  2222,  2226,  2232,  2239,  2243,  2247,  2252,
    2256,  2260,  2264,  2268,  2272,  2278,  2282,  2286,  2291,  2295,
    2298,  2301,  2303,  2307,  2312,  2317,  2322,  2327,  2332,  2339,
    2344,  2349,  2355,  2360,  2365,  2370,  2375,  2381,  2386,  2393,
    2401,  2406,  2411,  2417,  2423,  2429,  2435,  2441,  2447,  2455,
    2461,  2467,  2474,  2479,  2484,  2489,  2494,  2499,  2506,  2511,
    2516,  2522,  2528,  2534,  2540,  2546,  2553,  2559,  2567,  2576,
    2582,  2588,  2595,  2599,  2603,  2607,  2611,  2616,  2620,  2626,
    2633,  2637,  2641,  2646,  2650,  2654,  2658,  2662,  2666,  2672,
    2676,  2680,  2685,  2690,  2695,  2699,  2705,  2710,  2715,  2718,
    2722,  2729,  2736,  2738,  2740,  2742,  2745,  2748,  2751,  2755,
    2759,  2762,  2775,  2778,  2781,  2783,  2787,  2792,  2795,  2796,
    2800,  2802,  2805,  2808,  2811,  2814,  2817,  2822,  2827,  2832,
    2837,  2841,  2845,  2850,  2856,  2865,  2872,  2882,  2889,  2897,
    2908,  2920,  2933,  2943,  2949,  2956,  2960,  2966,  2972,  2978,
    2985,  2991,  2996,  3001,  3006,  3016,  3027,  3039,  3049,  3056,
    3063,  3070,  3077,  3084,  3091,  3098,  3105,  3112,  3120,  3128,
    3131,  3136,  3141,  3146,  3151,  3157,  3162,  3167,  3173,  3179,
    3183,  3188,  3193,  3198,  3206,  3216,  3223,  3234,  3246,  3259,
    3269,  3273,  3276,  3280,  3286,  3292,  3300,  3305,  3309,  3313,
    3320,  3328,  3337,  3345,  3353,  3358,  3363,  3368,  3378,  3383,
    3387,  3392,  3400,  3408,  3411,  3415,  3419,  3423,  3428,  3431,
    3434,  3439,  3444,  3455,  3459,  3464,  3466,  3470,  3473,  3476,
    3479,  3482,  3486,  3492,  3497,  3503,  3506,  3509,  3512,  3515,
    3519,  3522,  3525,  3528,  3532,  3535,  3539,  3544,  3548,  3552,
    3559,  3564,  3567,  3571,  3574,  3577,  3582,  3586,  3590,  3593,
    3597,  3599,  3602,  3604,  3607,  3610,  3613,  3617,  3619,  3621,
    3623,  3625,  3628,  3630,  3633,  3636,  3638,  3641,  3644,  3646,
    3649,  3651,  3653,  3655,  3657,  3659,  3661,  3663,  3665,  3666,
    3668,  3671,  3674,  3677,  3681,  3687,  3695,  3703,  3710,  3716,
    3722,  3729,  3736,  3743,  3749,  3756,  3763,  3770,  3777,  3784,
    3791,  3798,  3805,  3813,  3825,  3833,  3841,  3849,  3859,  3869,
    3880,  3893,  3906,  3910,  3913,  3914,  3916,  3920,  3925,  3930,
    3935,  3936,  3938,  3940,  3945,  3950,  3952,  3954,  3956,  3958,
    3960,  3962,  3964,  3966,  3969,  3971,  3973,  3975,  3979,  3983,
    3992,  3999,  4010,  4018,  4026,  4032,  4039,  4046,  4050,  4053,
    4056,  4060,  4065,  4071,  4077,  4083,  4087,  4092,  4098,  4104,
    4110,  4116,  4119,  4123,  4127,  4131,  4137,  4141,  4145,  4149,
    4153,  4157,  4162,  4168,  4174,  4180,  4186,  4190,  4195,  4201,
    4207,  4210,  4213,  4217,  4221,  4227,  4234,  4241,  4245,  4249,
    4253,  4260,  4267,  4273,  4279,  4282,  4286,  4290,  4296,  4303,
    4307,  4310,  4313,  4317,  4320,  4324,  4327,  4331,  4335,  4341,
    4348,  4351,  4354,  4357,  4360,  4362,  4367,  4372,  4374,  4377,
    4380,  4383,  4386,  4389,  4392,  4395,  4399,  4402,  4406,  4409,
    4413,  4415,  4417,  4419,  4421,  4423,  4425,  4426,  4429,  4430,
    4433,  4434,  4436,  4437,  4438,  4440,  4442,  4444,  4446,  4448,
    4456,  4465,  4468,  4475,  4478,  4485,  4488,  4492,  4495,  4497,
    4499,  4503,  4507,  4509,  4514,  4517,  4519,  4523,  4527,  4532,
    4536,  4540,  4544,  4546,  4548,  4550,  4552,  4554,  4556,  4558,
    4560,  4562,  4564,  4566,  4568,  4570,  4572,  4574,  4577,  4578,
    4579,  4582,  4589,  4597,  4600,  4602,  4606,  4608,  4612,  4614,
    4616,  4618,  4621,  4624,  4626,  4630,  4631,  4632,  4635,  4638,
    4640,  4644,  4650,  4651,  4653,  4655,  4658,  4661,  4665,  4668,
    4672,  4675,  4679,  4682,  4686,  4688,  4691,  4693,  4696,  4698,
    4701,  4703,  4706,  4708,  4711,  4713,  4716,  4718,  4721,  4723,
    4726,  4729,  4733,  4736,  4739,  4742,  4745,  4747,  4749,  4751,
    4753,  4758,  4761,  4765,  4769,  4772,  4776,  4779,  4782,  4785,
    4789,  4793,  4797,  4800,  4804,  4806,  4810,  4814,  4816,  4819,
    4822,  4825,  4828,  4838,  4845,  4847,  4849,  4851,  4853,  4856,
    4859,  4863,  4867,  4869,  4872,  4876,  4880,  4882,  4885,  4887,
    4889,  4891,  4893,  4895,  4897,  4899,  4901,  4904,  4907,  4912,
    4915,  4918,  4921,  4924,  4927,  4932,  4935,  4938,  4941,  4944,
    4947,  4952,  4954,  4957,  4960,  4963,  4967,  4969,  4971,  4973,
    4976,  4979,  4982,  4985,  4988,  4991,  4994,  4997,  5000,  5004,
    5008,  5012,  5016,  5020,  5024,  5026,  5029,  5032,  5035,  5039,
    5042,  5046,  5050,  5054,  5058,  5062,  5066,  5069,  5072,  5075,
    5078,  5081,  5084,  5087,  5090,  5093,  5096,  5099,  5102,  5105,
    5108,  5112,  5116,  5120,  5123,  5126,  5129,  5133,  5137,  5141,
    5144,  5147,  5150,  5153,  5156,  5159,  5163,  5167,  5171,  5174,
    5177,  5180,  5183,  5186,  5189,  5193,  5197,  5201,  5204,  5207,
    5210,  5213,  5216,  5219,  5222,  5225,  5228,  5232,  5236,  5240,
    5245,  5252,  5255,  5257,  5259,  5261,  5263,  5265,  5266,  5272,
    5274,  5281,  5285,  5288,  5293,  5295,  5298,  5301,  5304,  5308,
    5312,  5315,  5318,  5321,  5324,  5327,  5330,  5334,  5337,  5340,
    5344,  5346,  5350,  5355,  5358,  5360,  5363,  5369,  5376,  5383,
    5386,  5388,  5391,  5394,  5400,  5407
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
     413,   420,    -1,    70,   488,    -1,    71,    -1,    99,    -1,
     100,    -1,   192,    -1,   237,   192,    -1,   212,    -1,    76,
     489,    -1,   311,    -1,   322,    -1,   322,     4,    -1,    32,
      -1,    32,   322,     4,    -1,   386,    -1,    -1,   219,    -1,
     294,    -1,    -1,   201,    -1,   403,   403,   413,   420,   421,
      -1,   415,   403,   403,   413,   420,   421,    -1,   413,   420,
     421,    -1,    63,   413,   420,   421,   413,   422,    -1,   331,
     413,   420,    -1,   415,    -1,   413,   420,   421,    -1,   320,
      -1,    34,    -1,   415,    -1,   413,   420,   421,    -1,   413,
     420,   412,   403,   403,     5,    -1,     4,   413,   420,   412,
     403,   403,     5,    -1,   415,   403,   403,     4,     4,    -1,
       5,   406,    -1,    70,    -1,   415,   403,   403,     5,   406,
      -1,     4,     4,     4,     4,    -1,    95,    -1,   132,   224,
     498,    -1,    -1,     4,    -1,   403,   403,    -1,   227,    -1,
      63,   413,   420,   421,    -1,    88,    -1,   108,   502,    -1,
      47,    -1,   128,   500,    -1,   132,   224,   503,    -1,   164,
     501,    -1,   165,    -1,   238,   224,    -1,   308,    -1,   308,
     413,   420,   422,    -1,   309,   504,    -1,   386,    -1,     4,
      -1,   415,   403,   403,    -1,     4,    -1,   186,     5,    -1,
       4,   186,     5,    -1,   357,     4,    -1,    -1,     4,    -1,
     406,    -1,   406,   415,   403,   403,    -1,   406,     4,    -1,
      -1,     4,    -1,   146,   177,   413,    -1,   146,   177,     4,
     413,    -1,   337,   177,   403,   413,    -1,    -1,   246,    -1,
     350,    -1,    88,    -1,   189,    -1,    71,   508,    -1,    48,
     508,    -1,   335,   508,    -1,   351,   508,    -1,    71,    -1,
     207,    -1,   274,    -1,   325,    -1,   335,    -1,    88,    -1,
      48,    -1,    -1,     4,    -1,   266,    -1,    65,    -1,   325,
      -1,   351,    -1,   325,    -1,    65,    -1,   325,    -1,   351,
      -1,    65,    -1,   325,    -1,   351,    -1,   149,    -1,   273,
      -1,   273,   214,    -1,   306,    -1,   306,   214,    -1,    21,
      -1,   351,   521,    -1,    50,   518,    -1,    81,   519,    -1,
     167,   520,    -1,   212,    -1,    38,    -1,   301,   516,    -1,
     291,    -1,    -1,    18,    -1,   321,    -1,   232,   517,    -1,
      -1,   321,    -1,    -1,    71,    -1,    -1,    71,    -1,    -1,
      71,    -1,    -1,   259,    -1,    -1,    15,   523,    -1,   224,
     414,    -1,    -1,   260,    -1,    90,   525,    -1,   107,    -1,
     413,   420,   421,   526,     5,     5,    -1,   413,   420,   421,
     526,     5,    -1,    20,    -1,   269,    -1,    19,    -1,    43,
      71,    -1,    46,   528,    -1,    84,   529,    -1,    91,    -1,
     102,    -1,   103,    -1,   109,    -1,   138,   530,    -1,   158,
      -1,   176,    -1,   183,    -1,   208,   531,    -1,   255,    -1,
     177,    -1,   311,    -1,   325,   413,    -1,   357,   532,    -1,
      79,     5,    -1,    -1,    32,    -1,    -1,    46,    -1,    94,
      -1,   218,    -1,   167,    -1,   297,    -1,   252,    -1,   342,
      -1,   413,    -1,    62,   413,    -1,   125,   413,    -1,   197,
     413,    -1,    17,    -1,   331,   413,    -1,   228,     4,     4,
      -1,   126,    -1,   211,     5,    -1,    95,   535,    -1,   298,
     132,   224,   534,    -1,   298,     4,     4,     4,     4,    -1,
     346,    -1,   357,   403,   403,   403,   403,   403,   403,   403,
     403,     4,    -1,     5,    -1,     5,     4,    -1,     4,     4,
      60,    -1,     4,     4,   413,    -1,   219,   405,    -1,    26,
     537,    -1,   122,   539,    -1,   138,   540,    -1,   179,   553,
      -1,   236,   551,    -1,   254,   552,    -1,     5,     5,    -1,
       5,    13,     5,   425,    -1,     5,    14,     5,   425,    -1,
       5,    65,     5,   425,    -1,     5,   216,   425,    -1,     5,
     217,   425,    -1,     5,   302,   423,     4,   425,    -1,     5,
     313,     4,   425,    -1,     5,   314,     4,   425,    -1,     5,
     350,     5,   425,    -1,   282,    94,   538,    -1,   173,    94,
     538,    -1,   172,    94,   538,    -1,     5,    13,     5,    -1,
       5,    14,     5,    -1,     5,    65,     5,    -1,     5,   216,
      -1,     5,   217,    -1,     5,   302,   423,     4,    -1,     5,
     313,     4,    -1,     5,   314,     4,    -1,     5,   350,     5,
      -1,     5,     5,   310,    -1,     5,    13,     5,   425,    -1,
       5,    14,     5,   425,    -1,     5,    65,     5,   425,    -1,
       5,   216,   424,   425,    -1,     5,     5,   310,   424,   425,
      -1,     5,   217,   424,   425,    -1,     5,   302,   423,     4,
     424,   425,    -1,     5,   318,   423,     4,     4,   424,   425,
      -1,     5,   313,     4,   425,    -1,     5,   314,     4,   425,
      -1,     5,   350,     5,   424,   425,    -1,   309,   541,    -1,
     128,    94,   542,    -1,   282,   177,   550,    -1,   282,    94,
     549,    -1,   173,   177,   550,    -1,   173,    94,   549,    -1,
     172,   177,   550,    -1,   172,    94,   549,    -1,   218,   543,
      -1,     5,    13,     5,    -1,     5,    14,     5,    -1,     5,
      65,     5,    -1,     5,   216,   424,    -1,     5,     5,   310,
     424,    -1,     5,   217,   424,    -1,     5,   302,   423,     4,
     424,    -1,     5,   318,   423,     4,     4,   424,    -1,     5,
     313,     4,    -1,     5,   314,     4,    -1,     5,   350,     5,
     424,    -1,     5,    13,     5,    -1,     5,    14,     5,    -1,
       5,    65,     5,    -1,     5,   216,   424,    -1,     5,   217,
     424,    -1,     5,   302,   423,     4,   424,    -1,     5,   313,
       4,    -1,     5,   314,     4,    -1,     5,   350,     5,   424,
      -1,   177,   182,   544,    -1,   182,   545,    -1,   177,   546,
      -1,   548,    -1,   177,   385,   547,    -1,     5,    13,     5,
     425,    -1,     5,    14,     5,   425,    -1,     5,    65,     5,
     425,    -1,     5,   216,   424,   425,    -1,     5,   217,   424,
     425,    -1,     5,   302,   423,     4,   424,   425,    -1,     5,
     313,     4,   425,    -1,     5,   314,     4,   425,    -1,     5,
     350,     5,   424,   425,    -1,     5,    13,     5,   425,    -1,
       5,    14,     5,   425,    -1,     5,    65,     5,   425,    -1,
       5,   216,   424,   425,    -1,     5,     5,   310,   424,   425,
      -1,     5,   217,   424,   425,    -1,     5,   302,   423,     4,
     424,   425,    -1,     5,   318,   423,     4,     4,   424,   425,
      -1,     5,   313,     4,   425,    -1,     5,   314,     4,   425,
      -1,     5,   350,     5,   424,   425,    -1,   414,     5,    13,
       5,   425,    -1,   414,     5,    14,     5,   425,    -1,   414,
       5,    65,     5,   425,    -1,   414,     5,   216,   424,   425,
      -1,   414,     5,   217,   424,   425,    -1,   414,     5,   302,
     423,     4,   424,   425,    -1,   414,     5,   313,     4,   425,
      -1,   414,     5,   314,     4,   425,    -1,   414,     5,   350,
       5,   424,   425,    -1,     5,    13,     5,   425,    -1,     5,
      14,     5,   425,    -1,     5,    65,     5,   425,    -1,     5,
     216,   424,   425,    -1,     5,   217,   424,   425,    -1,     5,
     302,   423,     4,   424,   425,    -1,     5,   313,     4,   425,
      -1,     5,   314,     4,   425,    -1,     5,   350,     5,   424,
     425,    -1,   414,     5,    13,     5,   425,    -1,   414,     5,
      14,     5,   425,    -1,   414,     5,    65,     5,   425,    -1,
     414,     5,   216,   424,   425,    -1,   414,     5,     5,   310,
     424,   425,    -1,   414,     5,   217,   424,   425,    -1,   414,
       5,   302,   423,     4,   424,   425,    -1,   414,     5,   318,
     423,     4,     4,   424,   425,    -1,   414,     5,   313,     4,
     425,    -1,   414,     5,   314,     4,   425,    -1,   414,     5,
     350,     5,   424,   425,    -1,     5,    13,     5,    -1,     5,
      14,     5,    -1,     5,    65,     5,    -1,     5,   216,   424,
      -1,     5,     5,   310,   424,    -1,     5,   217,   424,    -1,
       5,   302,   423,     4,   424,    -1,     5,   318,   423,     4,
       4,   424,    -1,     5,   313,     4,    -1,     5,   314,     4,
      -1,     5,   350,     5,   424,    -1,     5,    13,     5,    -1,
       5,    14,     5,    -1,     5,    65,     5,    -1,     5,   216,
     424,    -1,     5,   217,   424,    -1,     5,   302,   423,     4,
     424,    -1,     5,   313,     4,    -1,     5,   314,     4,    -1,
       5,   350,     5,   424,    -1,     5,    13,     5,   425,    -1,
       5,    65,     5,   425,    -1,     5,   216,   425,    -1,     5,
     302,   423,     4,   425,    -1,     5,   313,     4,   425,    -1,
       5,   350,     5,   425,    -1,     5,     5,    -1,   309,     5,
       5,    -1,   101,     4,     4,     4,     4,     4,    -1,   213,
       4,     4,     4,     4,     4,    -1,   121,    -1,   265,    -1,
     405,    -1,   156,   405,    -1,    95,   405,    -1,    71,     5,
      -1,     5,     4,     4,    -1,   346,   403,   403,    -1,   395,
     403,    -1,     5,     5,   414,   420,     5,     5,   414,   420,
     403,   414,   422,     5,    -1,    64,   560,    -1,    71,     5,
      -1,    87,    -1,    80,   566,     5,    -1,    80,   566,   350,
       5,    -1,    82,   107,    -1,    -1,    90,   558,   561,    -1,
      96,    -1,   107,   564,    -1,   115,   565,    -1,   124,     4,
      -1,   143,     5,    -1,   167,    16,    -1,   167,   241,   403,
     403,    -1,   167,   338,   403,   403,    -1,     4,    20,   429,
     405,    -1,    20,   319,    59,     5,    -1,    20,   319,    59,
      -1,     4,    21,   408,    -1,     4,    21,   408,   415,    -1,
       4,    21,   408,   413,   420,    -1,     4,    22,   273,   403,
     403,     4,   413,   422,    -1,     4,    22,   273,     5,   413,
     422,    -1,     4,    53,   273,   403,   403,   403,     4,   413,
     422,    -1,     4,    53,   273,     5,   413,   422,    -1,     4,
      52,   273,   403,   403,   413,   422,    -1,     4,    56,   115,
     408,   408,     4,   403,   403,   403,     4,    -1,     4,    56,
     115,   408,   408,     4,   403,   403,   403,     4,   415,    -1,
       4,    56,   115,   408,   408,     4,   403,   403,   403,     4,
     413,   420,    -1,     4,    56,   115,     5,     5,   413,   420,
     413,   422,    -1,     4,    59,   559,     5,     5,    -1,     4,
      67,   273,   403,   413,   422,    -1,     4,    71,     5,    -1,
       4,    81,    27,   405,   405,    -1,     4,    81,   121,   426,
     426,    -1,     4,    81,   187,     5,     5,    -1,     4,    81,
     273,   403,   413,   422,    -1,     4,    81,   325,   413,   420,
      -1,     4,    82,   154,   405,    -1,     4,    82,    28,   405,
      -1,     4,    82,   341,     5,    -1,     4,    89,   115,   408,
     408,     4,   403,   403,     4,    -1,     4,    89,   115,   408,
     408,     4,   403,   403,     4,   415,    -1,     4,    89,   115,
     408,   408,     4,   403,   403,     4,   413,   420,    -1,     4,
      89,   115,     5,     5,   413,   420,   413,   422,    -1,     4,
      90,    22,   273,   403,   403,    -1,     4,    90,    53,   273,
     403,   403,    -1,     4,    90,    56,    21,   403,   403,    -1,
       4,    90,    56,   273,   403,   403,    -1,     4,    90,   120,
     273,   403,   403,    -1,     4,    90,   123,    21,   403,   403,
      -1,     4,    90,   123,   273,   403,   403,    -1,     4,    90,
      89,    21,   403,   403,    -1,     4,    90,    89,   273,   403,
     403,    -1,     4,    90,   261,   354,     4,   403,   403,    -1,
       4,    90,   296,   354,     4,   403,   403,    -1,     4,   107,
      -1,     4,   107,    22,     4,    -1,     4,   107,    53,     4,
      -1,     4,   107,    56,     4,    -1,     4,   107,   120,     4,
      -1,     4,   107,    59,   559,     5,    -1,     4,   107,   123,
       4,    -1,     4,   107,    89,     4,    -1,     4,   107,   261,
     354,     4,    -1,     4,   107,   296,   354,     4,    -1,     4,
     107,   327,    -1,     4,   107,   327,     5,    -1,     4,   107,
     327,     4,    -1,     4,   115,    42,     4,    -1,     4,   119,
     273,   403,   403,   413,   422,    -1,     4,   120,   273,   403,
     403,   403,     4,   413,   422,    -1,     4,   120,   273,     5,
     413,   422,    -1,     4,   123,   115,   408,   408,     4,   403,
     403,   403,     4,    -1,     4,   123,   115,   408,   408,     4,
     403,   403,   403,     4,   415,    -1,     4,   123,   115,   408,
     408,     4,   403,   403,   403,     4,   413,   420,    -1,     4,
     123,   115,     5,     5,   413,   420,   413,   422,    -1,     4,
     143,     5,    -1,     4,   167,    -1,     4,   167,   241,    -1,
       4,   196,    27,   405,   405,    -1,     4,   196,   121,   426,
     426,    -1,     4,   196,   259,   413,   420,   412,   412,    -1,
       4,   223,   403,   403,    -1,     4,   223,   147,    -1,     4,
     223,    37,    -1,     4,   223,   337,   413,   420,   412,    -1,
       4,   261,   259,   413,   420,   421,     5,    -1,     4,   261,
     259,   413,   420,   421,   350,     5,    -1,     4,   261,   279,
     403,   403,   413,   422,    -1,     4,   296,   279,   403,   403,
     413,   422,    -1,     4,   259,   300,   427,    -1,     4,   259,
     308,     4,    -1,     4,   259,   155,     5,    -1,     4,   267,
     413,   420,   412,   412,   403,   413,   422,    -1,     4,   268,
     579,   405,    -1,     4,   284,    42,    -1,     4,   285,   144,
       5,    -1,     4,   285,   259,   413,   420,   412,   412,    -1,
       4,   285,   325,   413,   420,   413,   422,    -1,     4,   297,
      -1,     4,   297,   241,    -1,     4,   327,     5,    -1,     4,
     329,     5,    -1,     4,   329,   284,   405,    -1,     4,   343,
      -1,     4,   345,    -1,     4,   352,    27,   405,    -1,     4,
     352,   121,   426,    -1,     4,   352,   259,   413,   420,   412,
     413,   422,   403,   408,    -1,     4,   386,     4,    -1,     4,
     100,     4,     4,    -1,   185,    -1,   185,   403,   403,    -1,
     198,   574,    -1,   199,   575,    -1,   223,   576,    -1,   266,
     405,    -1,   268,   579,   405,    -1,   268,   579,   405,   403,
     403,    -1,   284,    42,   403,   403,    -1,   284,   220,   403,
     403,     4,    -1,   284,   121,    -1,   289,   583,    -1,   297,
     584,    -1,   305,   585,    -1,     5,    71,     5,    -1,     5,
      87,    -1,     5,   107,    -1,     5,    96,    -1,     5,   143,
       5,    -1,     5,   167,    -1,     5,   167,   241,    -1,     5,
     223,   403,   403,    -1,     5,   223,   147,    -1,     5,   223,
      37,    -1,     5,   223,   337,   413,   420,   412,    -1,     5,
     268,   579,   405,    -1,     5,   297,    -1,     5,   297,   241,
      -1,     5,   343,    -1,     5,   345,    -1,   327,   115,     5,
       5,    -1,   327,   107,     5,    -1,   327,   107,    16,    -1,
     327,     5,    -1,   327,   346,     5,    -1,   252,    -1,   252,
     413,    -1,   342,    -1,   343,    16,    -1,   345,    16,    -1,
     386,     4,    -1,   100,     4,     4,    -1,   297,    -1,   345,
      -1,   167,    -1,   343,    -1,    42,   223,    -1,   223,    -1,
     121,   223,    -1,    42,   115,    -1,   115,    -1,   121,   115,
      -1,    42,   284,    -1,   284,    -1,   121,   284,    -1,   107,
      -1,   329,    -1,    71,    -1,   386,    -1,   268,    -1,   143,
      -1,   185,    -1,   346,    -1,    -1,     4,    -1,    31,   405,
      -1,   273,   403,    -1,   181,     4,    -1,   246,     4,   403,
      -1,    67,   403,   403,   403,   580,    -1,   119,   403,   403,
     403,   403,   407,   580,    -1,    52,   403,   403,   403,   403,
     407,   580,    -1,   261,   403,   403,   403,   403,   580,    -1,
     261,    60,   350,     5,   580,    -1,   296,    60,   350,     5,
     580,    -1,   296,   403,   403,   403,   403,   580,    -1,   196,
     403,   403,   403,   403,   580,    -1,   352,   403,   403,   403,
     403,   580,    -1,   329,   403,   403,   407,   580,    -1,    67,
     259,   403,   403,   428,   580,    -1,    52,   259,   403,   403,
     428,   580,    -1,   110,   259,   403,   403,   428,   580,    -1,
      92,   259,   403,   403,   428,   580,    -1,   399,   259,   403,
     403,   428,   580,    -1,    27,   259,   403,   403,   428,   580,
      -1,    55,   259,   403,   403,   428,   580,    -1,   155,   259,
     403,   403,     5,   580,    -1,   155,   259,   403,   403,     4,
       5,   580,    -1,   285,   403,   403,   403,   403,   413,   420,
     413,   422,     5,   580,    -1,    81,   403,   403,   403,   413,
     420,   580,    -1,   267,   403,   403,   403,   403,   403,   580,
      -1,    22,   403,   403,   403,   403,     4,   580,    -1,   120,
     403,   403,   403,   403,   403,     4,   407,   580,    -1,    53,
     403,   403,   403,   403,   403,     4,   407,   580,    -1,    89,
     403,   403,   408,   408,     4,   403,   403,     4,   580,    -1,
     123,   403,   403,   408,   408,     4,   403,   403,   403,     4,
     407,   580,    -1,    56,   403,   403,   408,   408,     4,   403,
     403,   403,     4,   407,   580,    -1,    82,   562,   580,    -1,
     328,   563,    -1,    -1,     4,    -1,     5,   403,   403,    -1,
     350,     5,   403,   403,    -1,   403,   403,   350,     5,    -1,
       5,   413,   420,   412,    -1,    -1,   297,    -1,    16,    -1,
      42,   403,   403,     4,    -1,   220,   403,   403,     4,    -1,
     121,    -1,   114,    -1,   388,    -1,    68,    -1,   288,    -1,
     287,    -1,   270,    -1,   389,    -1,    64,   568,    -1,    71,
      -1,   143,    -1,   124,    -1,   160,   403,   403,    -1,   175,
     403,   403,    -1,     4,    20,    89,     5,     5,     5,   413,
       4,    -1,     4,    20,   169,     5,     5,     4,    -1,     4,
      20,   257,     5,     5,     5,     5,   413,   420,   430,    -1,
       4,    20,   258,     5,     5,   413,   430,    -1,     4,    20,
     272,     5,     5,     5,   413,    -1,     4,    20,   319,   413,
     420,    -1,     4,    20,   319,   101,   413,   420,    -1,    20,
     319,    16,   101,   413,   420,    -1,    20,   319,   396,    -1,
     175,    16,    -1,     4,    21,    -1,     4,    21,   415,    -1,
       4,    21,   413,   420,    -1,     4,    22,   273,   413,   422,
      -1,     4,    53,   273,   413,   422,    -1,     4,    52,   273,
     413,   422,    -1,     4,    56,    21,    -1,     4,    56,    21,
     415,    -1,     4,    56,    21,   413,   420,    -1,     4,    56,
     273,   413,   422,    -1,     4,    63,   413,   420,   421,    -1,
       4,    67,   273,   413,   422,    -1,     4,    71,    -1,     4,
      81,    27,    -1,     4,    81,   121,    -1,     4,    81,   187,
      -1,     4,    81,   273,   413,   422,    -1,     4,    81,   325,
      -1,     4,    82,   154,    -1,     4,    82,    28,    -1,     4,
      82,   341,    -1,     4,    89,    21,    -1,     4,    89,    21,
     415,    -1,     4,    89,    21,   413,   420,    -1,     4,    89,
     273,   413,   422,    -1,     4,   119,   273,   413,   422,    -1,
       4,   120,   273,   413,   422,    -1,     4,   123,    21,    -1,
       4,   123,    21,   415,    -1,     4,   123,    21,   413,   420,
      -1,     4,   123,   273,   413,   422,    -1,     4,   143,    -1,
       4,   167,    -1,     4,   196,    27,    -1,     4,   196,   121,
      -1,     4,   196,   191,   413,   422,    -1,     4,   196,   259,
     413,   420,   421,    -1,     4,   206,   191,   403,   413,   422,
      -1,     4,   259,   300,    -1,     4,   259,   308,    -1,     4,
     259,   155,    -1,     4,   261,   259,   413,   420,   421,    -1,
       4,   267,   259,   413,   420,   421,    -1,     4,   267,   191,
     413,   422,    -1,     4,   267,   333,   413,   422,    -1,     4,
     268,    -1,     4,   268,   579,    -1,     4,   285,   144,    -1,
       4,   285,   191,   413,   422,    -1,     4,   285,   259,   413,
     420,   421,    -1,     4,   285,   325,    -1,     4,   297,    -1,
       4,   327,    -1,     4,   327,     4,    -1,     4,   329,    -1,
       4,   329,   284,    -1,     4,   341,    -1,     4,   352,    27,
      -1,     4,   352,   121,    -1,     4,   352,   191,   413,   422,
      -1,     4,   352,   259,   413,   420,   421,    -1,     4,   386,
      -1,     4,   100,    -1,   167,   569,    -1,   167,   237,    -1,
     237,    -1,   261,   296,   403,   403,    -1,   296,   296,   403,
     403,    -1,   266,    -1,   268,   579,    -1,   297,   570,    -1,
     297,   237,    -1,   305,   571,    -1,     5,    71,    -1,     5,
     143,    -1,     5,   175,    -1,     5,   268,   579,    -1,     5,
     327,    -1,     5,   327,   237,    -1,   327,    16,    -1,   327,
     106,   224,    -1,   386,    -1,   100,    -1,    31,    -1,   273,
      -1,   181,    -1,   246,    -1,    -1,   403,   403,    -1,    -1,
     403,   403,    -1,    -1,   329,    -1,    -1,    -1,   260,    -1,
     275,    -1,   348,    -1,    61,    -1,   145,    -1,   566,   413,
     420,   421,   405,   581,   588,    -1,   297,   566,   413,   420,
     421,   405,   581,   588,    -1,   566,     5,    -1,   566,     5,
       4,     5,   413,   420,    -1,   566,     4,    -1,   566,     4,
       4,     5,   413,   420,    -1,   138,     5,    -1,   138,     5,
       5,    -1,   403,   403,    -1,   147,    -1,    37,    -1,    42,
     403,   403,    -1,   220,   403,   403,    -1,   121,    -1,   337,
     413,   420,   412,    -1,   577,   578,    -1,   578,    -1,   579,
     400,   405,    -1,    71,   400,     5,    -1,   100,   400,     4,
       4,    -1,   386,   400,     4,    -1,   143,   400,     5,    -1,
     329,   400,     5,    -1,   591,    -1,   592,    -1,   231,    -1,
     297,    -1,   167,    -1,    99,    -1,   140,    -1,   115,    -1,
     223,    -1,   284,    -1,   107,    -1,   178,    -1,   315,    -1,
     133,    -1,   572,    -1,   572,   577,    -1,    -1,    -1,   582,
     586,    -1,     5,   566,   413,   420,   421,   405,    -1,   297,
       5,   566,   413,   420,   421,   405,    -1,   328,     5,    -1,
      16,    -1,   241,   403,   403,    -1,   338,    -1,   338,   403,
     403,    -1,   135,    -1,   190,    -1,   405,    -1,   329,   405,
      -1,   586,   587,    -1,   587,    -1,   579,   400,   405,    -1,
      -1,    -1,   589,   590,    -1,   590,   591,    -1,   591,    -1,
     327,   400,     5,    -1,    59,   400,   559,     5,     5,    -1,
      -1,    90,    -1,     4,    -1,   189,     4,    -1,    71,     5,
      -1,     4,    71,     5,    -1,    48,   417,    -1,     4,    48,
     417,    -1,   335,   403,    -1,     4,   335,   403,    -1,   351,
     405,    -1,     4,   351,   405,    -1,   305,    -1,     4,   305,
      -1,   166,    -1,     4,   166,    -1,   107,    -1,     4,   107,
      -1,   347,    -1,     4,   347,    -1,   113,    -1,     4,   113,
      -1,   334,    -1,     4,   334,    -1,    51,    -1,     4,    51,
      -1,    69,    -1,    71,     5,    -1,   207,   416,    -1,   274,
     403,   403,    -1,   325,   413,    -1,   335,   403,    -1,    48,
     417,    -1,   207,     4,    -1,   399,    -1,   397,    -1,   389,
      -1,   231,    -1,   403,   403,   403,   403,    -1,   403,   403,
      -1,   415,   403,   403,    -1,   413,   420,   412,    -1,   337,
     597,    -1,    41,   403,   403,    -1,   220,   598,    -1,   266,
     405,    -1,   403,   403,    -1,   415,   403,   403,    -1,   413,
     420,   412,    -1,    42,   403,   403,    -1,   403,   403,    -1,
     121,   403,   403,    -1,   405,    -1,   357,   414,   420,    -1,
       5,     4,     4,    -1,   346,    -1,    77,   602,    -1,   192,
       4,    -1,   280,     4,    -1,   291,   403,    -1,     4,     4,
       4,     4,     4,     4,     4,     4,     4,    -1,     4,     4,
       4,     4,     4,     4,    -1,    58,    -1,   157,    -1,   282,
      -1,    97,    -1,   167,   604,    -1,   297,   605,    -1,    42,
     403,   403,    -1,   220,   403,   403,    -1,   121,    -1,   303,
     121,    -1,    42,   403,   403,    -1,   220,   403,   403,    -1,
     121,    -1,   303,   121,    -1,   215,    -1,    12,    -1,   136,
      -1,   231,    -1,    35,    -1,   117,    -1,     4,    -1,    69,
      -1,    65,     5,    -1,   325,   413,    -1,   351,     4,     4,
       4,    -1,   325,   413,    -1,    65,     5,    -1,    65,   171,
      -1,    65,   290,    -1,   325,   413,    -1,   351,     4,     4,
       4,    -1,    65,     5,    -1,    65,   171,    -1,    65,   290,
      -1,    65,   349,    -1,   325,   413,    -1,   351,     4,     4,
       4,    -1,   403,    -1,   403,   105,    -1,   220,   614,    -1,
     337,   403,    -1,   337,   403,   105,    -1,    42,    -1,   403,
      -1,   121,    -1,    26,   617,    -1,   138,   618,    -1,   394,
     616,    -1,   236,   635,    -1,   122,   636,    -1,   254,     5,
      -1,   132,     5,    -1,    65,     5,    -1,   313,     4,    -1,
     132,     5,   431,    -1,    65,     5,   431,    -1,   313,     4,
     431,    -1,   282,    94,   625,    -1,   173,    94,   628,    -1,
     172,    94,   631,    -1,   619,    -1,   177,   619,    -1,   326,
     620,    -1,   309,   621,    -1,   128,    94,   622,    -1,   218,
     623,    -1,   282,   177,   626,    -1,   282,    94,   627,    -1,
     173,   177,   629,    -1,   173,    94,   630,    -1,   172,   177,
     632,    -1,   172,    94,   633,    -1,   277,   634,    -1,   132,
       5,    -1,    65,     5,    -1,   313,     4,    -1,   132,     5,
      -1,    65,     5,    -1,   313,     4,    -1,   132,     5,    -1,
      65,     5,    -1,   313,     4,    -1,   132,     5,    -1,    65,
       5,    -1,   313,     4,    -1,   177,   624,    -1,   132,     5,
       4,    -1,    65,     5,     4,    -1,   313,     4,     4,    -1,
     132,     5,    -1,    65,     5,    -1,   313,     4,    -1,   132,
       5,   431,    -1,    65,     5,   431,    -1,   313,     4,   431,
      -1,   132,     5,    -1,    65,     5,    -1,   313,     4,    -1,
     132,     5,    -1,    65,     5,    -1,   313,     4,    -1,   132,
       5,   431,    -1,    65,     5,   431,    -1,   313,     4,   431,
      -1,   132,     5,    -1,    65,     5,    -1,   313,     4,    -1,
     132,     5,    -1,    65,     5,    -1,   313,     4,    -1,   132,
       5,   431,    -1,    65,     5,   431,    -1,   313,     4,   431,
      -1,   132,     5,    -1,    65,     5,    -1,   313,     4,    -1,
     132,     5,    -1,    65,     5,    -1,   313,     4,    -1,   132,
       5,    -1,    65,     5,    -1,   313,     4,    -1,   132,     5,
     431,    -1,    65,     5,   431,    -1,   313,     4,   431,    -1,
     132,     5,     5,   431,    -1,   638,     4,     4,   403,   403,
     408,    -1,   638,     4,    -1,   107,    -1,    54,    -1,   339,
      -1,   151,    -1,   118,    -1,    -1,     4,   403,   403,   403,
     403,    -1,   235,    -1,   235,     4,   403,   403,   403,   403,
      -1,   138,   309,   640,    -1,   138,    63,    -1,   138,    63,
     403,   403,    -1,     4,    -1,     4,     4,    -1,   403,   413,
      -1,   403,   403,    -1,   337,   403,   403,    -1,   414,   420,
     421,    -1,    15,   645,    -1,   279,     4,    -1,   276,   644,
      -1,    23,   643,    -1,     4,     4,    -1,     4,     5,    -1,
     329,     4,     5,    -1,     4,     4,    -1,     4,     5,    -1,
     329,     4,     5,    -1,     4,    -1,     4,   414,   420,    -1,
     337,     4,   414,   420,    -1,   260,    69,    -1,   265,    -1,
     403,   403,    -1,   403,   403,    11,   403,   403,    -1,   403,
     403,    11,   415,   403,   403,    -1,   403,   403,    11,   413,
     420,   412,    -1,   337,   648,    -1,   137,    -1,   137,   403,
      -1,   403,   403,    -1,   403,   403,    11,   403,   403,    -1,
     403,   403,    11,   415,   403,   403,    -1,   403,   403,    11,
     413,   420,   412,    -1
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
    1297,  1298,  1299,  1300,  1301,  1304,  1305,  1306,  1309,  1310,
    1313,  1315,  1323,  1325,  1327,  1331,  1332,  1334,  1337,  1340,
    1341,  1345,  1347,  1350,  1355,  1356,  1357,  1361,  1362,  1363,
    1366,  1367,  1368,  1371,  1372,  1374,  1375,  1376,  1377,  1378,
    1379,  1380,  1381,  1382,  1383,  1385,  1386,  1389,  1390,  1393,
    1394,  1395,  1396,  1399,  1400,  1403,  1405,  1408,  1412,  1413,
    1414,  1416,  1418,  1422,  1423,  1424,  1427,  1428,  1429,  1430,
    1431,  1432,  1435,  1436,  1437,  1438,  1439,  1440,  1441,  1444,
    1445,  1448,  1451,  1452,  1453,  1456,  1459,  1460,  1461,  1464,
    1465,  1466,  1469,  1470,  1471,  1472,  1473,  1474,  1477,  1478,
    1479,  1480,  1481,  1482,  1483,  1484,  1487,  1488,  1489,  1490,
    1493,  1494,  1497,  1498,  1501,  1502,  1505,  1506,  1509,  1510,
    1513,  1514,  1515,  1518,  1519,  1522,  1523,  1526,  1529,  1537,
    1538,  1541,  1542,  1543,  1544,  1545,  1546,  1547,  1548,  1549,
    1550,  1551,  1552,  1553,  1554,  1555,  1556,  1557,  1558,  1561,
    1564,  1565,  1568,  1569,  1570,  1571,  1574,  1575,  1576,  1577,
    1580,  1581,  1582,  1583,  1584,  1585,  1588,  1589,  1590,  1591,
    1592,  1593,  1595,  1596,  1601,  1602,  1605,  1607,  1609,  1612,
    1613,  1614,  1615,  1616,  1617,  1620,  1629,  1631,  1633,  1635,
    1636,  1638,  1640,  1642,  1644,  1646,  1647,  1648,  1651,  1652,
    1653,  1654,  1655,  1656,  1658,  1659,  1660,  1663,  1666,  1668,
    1670,  1672,  1674,  1676,  1678,  1680,  1683,  1685,  1687,  1689,
    1690,  1691,  1692,  1693,  1694,  1695,  1696,  1697,  1700,  1701,
    1702,  1703,  1704,  1705,  1706,  1708,  1710,  1711,  1712,  1715,
    1716,  1717,  1718,  1719,  1720,  1722,  1723,  1724,  1727,  1728,
    1729,  1730,  1731,  1734,  1737,  1740,  1743,  1746,  1749,  1752,
    1755,  1758,  1763,  1766,  1769,  1772,  1775,  1778,  1781,  1784,
    1787,  1790,  1793,  1798,  1801,  1804,  1807,  1810,  1813,  1816,
    1819,  1822,  1827,  1829,  1831,  1833,  1835,  1837,  1842,  1844,
    1846,  1850,  1853,  1856,  1859,  1862,  1865,  1868,  1871,  1874,
    1877,  1880,  1885,  1886,  1887,  1888,  1889,  1890,  1891,  1893,
    1895,  1896,  1897,  1900,  1901,  1902,  1903,  1904,  1905,  1907,
    1908,  1909,  1912,  1914,  1916,  1917,  1919,  1921,  1925,  1926,
    1929,  1930,  1931,  1934,  1937,  1938,  1939,  1940,  1941,  1942,
    1943,  1946,  1954,  1955,  1956,  1957,  1959,  1961,  1962,  1962,
    1963,  1964,  1965,  1966,  1967,  1969,  1970,  1972,  1975,  1977,
    1979,  1982,  1983,  1984,  1987,  1990,  1993,  1997,  2000,  2003,
    2006,  2010,  2015,  2020,  2022,  2024,  2025,  2027,  2029,  2031,
    2033,  2035,  2036,  2037,  2039,  2041,  2043,  2047,  2052,  2054,
    2056,  2058,  2060,  2062,  2064,  2066,  2068,  2070,  2072,  2075,
    2076,  2078,  2080,  2081,  2083,  2085,  2086,  2087,  2089,  2091,
    2092,  2093,  2095,  2096,  2099,  2103,  2106,  2109,  2113,  2118,
    2124,  2125,  2126,  2128,  2129,  2130,  2134,  2136,  2137,  2138,
    2141,  2144,  2147,  2150,  2153,  2155,  2156,  2158,  2163,  2166,
    2167,  2168,  2171,  2175,  2176,  2178,  2179,  2180,  2182,  2183,
    2185,  2186,  2187,  2192,  2193,  2195,  2196,  2198,  2199,  2200,
    2201,  2202,  2203,  2205,  2207,  2209,  2210,  2211,  2213,  2215,
    2216,  2217,  2218,  2219,  2220,  2221,  2222,  2223,  2224,  2225,
    2227,  2229,  2230,  2231,  2232,  2234,  2235,  2236,  2237,  2238,
    2240,  2241,  2242,  2243,  2244,  2245,  2246,  2249,  2250,  2251,
    2252,  2253,  2254,  2255,  2256,  2257,  2258,  2259,  2260,  2261,
    2262,  2263,  2264,  2265,  2266,  2267,  2268,  2269,  2272,  2273,
    2274,  2275,  2276,  2277,  2285,  2292,  2301,  2310,  2317,  2322,
    2327,  2334,  2342,  2350,  2357,  2362,  2367,  2372,  2377,  2382,
    2387,  2392,  2397,  2403,  2413,  2423,  2433,  2440,  2450,  2460,
    2469,  2481,  2494,  2500,  2503,  2504,  2513,  2515,  2517,  2522,
    2526,  2527,  2528,  2534,  2536,  2538,  2541,  2542,  2543,  2544,
    2545,  2546,  2547,  2550,  2551,  2552,  2553,  2554,  2555,  2557,
    2559,  2561,  2563,  2565,  2567,  2569,  2571,  2573,  2576,  2577,
    2578,  2579,  2581,  2584,  2586,  2588,  2589,  2590,  2592,  2595,
    2598,  2600,  2601,  2602,  2603,  2604,  2606,  2607,  2608,  2609,
    2610,  2611,  2612,  2614,  2616,  2618,  2621,  2622,  2623,  2625,
    2628,  2629,  2630,  2631,  2632,  2634,  2637,  2641,  2642,  2643,
    2644,  2647,  2650,  2653,  2655,  2656,  2657,  2658,  2660,  2663,
    2664,  2666,  2667,  2668,  2669,  2670,  2672,  2673,  2674,  2676,
    2679,  2680,  2681,  2682,  2683,  2684,  2686,  2688,  2689,  2690,
    2691,  2693,  2695,  2696,  2697,  2698,  2699,  2700,  2702,  2703,
    2705,  2706,  2709,  2710,  2711,  2712,  2715,  2716,  2719,  2720,
    2723,  2724,  2727,  2740,  2741,  2745,  2746,  2750,  2751,  2754,
    2758,  2764,  2766,  2769,  2771,  2774,  2776,  2780,  2781,  2782,
    2783,  2784,  2785,  2786,  2790,  2791,  2794,  2795,  2796,  2797,
    2798,  2799,  2800,  2801,  2804,  2805,  2806,  2807,  2808,  2809,
    2810,  2811,  2812,  2813,  2814,  2815,  2818,  2819,  2822,  2823,
    2823,  2826,  2828,  2830,  2833,  2834,  2835,  2836,  2837,  2838,
    2841,  2842,  2845,  2846,  2849,  2853,  2854,  2854,  2857,  2858,
    2861,  2864,  2868,  2869,  2870,  2871,  2872,  2873,  2874,  2875,
    2876,  2877,  2878,  2879,  2881,  2882,  2883,  2884,  2885,  2886,
    2887,  2888,  2889,  2890,  2891,  2892,  2893,  2894,  2897,  2898,
    2899,  2900,  2901,  2902,  2903,  2904,  2910,  2911,  2912,  2913,
    2916,  2918,  2919,  2924,  2926,  2927,  2928,  2929,  2932,  2933,
    2938,  2942,  2943,  2944,  2947,  2948,  2953,  2954,  2957,  2959,
    2960,  2961,  2966,  2968,  2974,  2975,  2976,  2977,  2980,  2981,
    2984,  2986,  2988,  2989,  2992,  2994,  2995,  2996,  2999,  3000,
    3001,  3004,  3005,  3006,  3009,  3010,  3013,  3014,  3015,  3018,
    3022,  3023,  3024,  3025,  3026,  3029,  3030,  3031,  3032,  3033,
    3034,  3037,  3038,  3039,  3040,  3041,  3044,  3045,  3046,  3049,
    3050,  3051,  3052,  3053,  3054,  3057,  3058,  3059,  3062,  3064,
    3066,  3068,  3069,  3070,  3073,  3074,  3075,  3076,  3077,  3078,
    3079,  3080,  3081,  3082,  3083,  3084,  3085,  3088,  3089,  3090,
    3093,  3094,  3095,  3098,  3099,  3100,  3103,  3104,  3105,  3108,
    3109,  3110,  3111,  3114,  3115,  3116,  3119,  3121,  3123,  3127,
    3128,  3129,  3132,  3133,  3134,  3137,  3139,  3141,  3145,  3146,
    3147,  3150,  3151,  3152,  3155,  3157,  3159,  3163,  3164,  3165,
    3168,  3169,  3170,  3173,  3174,  3175,  3178,  3180,  3182,  3186,
    3190,  3192,  3197,  3200,  3201,  3202,  3203,  3206,  3207,  3210,
    3212,  3214,  3215,  3216,  3220,  3221,  3222,  3225,  3226,  3229,
    3231,  3232,  3233,  3234,  3237,  3238,  3239,  3242,  3243,  3244,
    3247,  3248,  3253,  3255,  3258,  3265,  3266,  3268,  3273,  3275,
    3278,  3279,  3280,  3281,  3283,  3288
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
     487,   487,   487,   487,   487,   488,   488,   488,   489,   489,
     490,   490,   491,   491,   491,   492,   492,   492,   493,   494,
     494,   495,   495,   495,   496,   496,   496,   497,   497,   497,
     498,   498,   498,   499,   499,   499,   499,   499,   499,   499,
     499,   499,   499,   499,   499,   499,   499,   500,   500,   501,
     501,   501,   501,   502,   502,   503,   503,   503,   504,   504,
     504,   504,   504,   505,   505,   505,   506,   506,   506,   506,
     506,   506,   507,   507,   507,   507,   507,   507,   507,   508,
     508,   509,   510,   510,   510,   511,   512,   512,   512,   513,
     513,   513,   514,   514,   514,   514,   514,   514,   515,   515,
     515,   515,   515,   515,   515,   515,   516,   516,   516,   516,
     517,   517,   518,   518,   519,   519,   520,   520,   521,   521,
     522,   522,   522,   523,   523,   524,   524,   525,   525,   526,
     526,   527,   527,   527,   527,   527,   527,   527,   527,   527,
     527,   527,   527,   527,   527,   527,   527,   527,   527,   528,
     529,   529,   530,   530,   530,   530,   531,   531,   531,   531,
     532,   532,   532,   532,   532,   532,   533,   533,   533,   533,
     533,   533,   533,   533,   534,   534,   535,   535,   535,   536,
     536,   536,   536,   536,   536,   536,   537,   537,   537,   537,
     537,   537,   537,   537,   537,   537,   537,   537,   538,   538,
     538,   538,   538,   538,   538,   538,   538,   539,   540,   540,
     540,   540,   540,   540,   540,   540,   540,   540,   540,   540,
     540,   540,   540,   540,   540,   540,   540,   540,   541,   541,
     541,   541,   541,   541,   541,   541,   541,   541,   541,   542,
     542,   542,   542,   542,   542,   542,   542,   542,   543,   543,
     543,   543,   543,   544,   544,   544,   544,   544,   544,   544,
     544,   544,   545,   545,   545,   545,   545,   545,   545,   545,
     545,   545,   545,   546,   546,   546,   546,   546,   546,   546,
     546,   546,   547,   547,   547,   547,   547,   547,   547,   547,
     547,   548,   548,   548,   548,   548,   548,   548,   548,   548,
     548,   548,   549,   549,   549,   549,   549,   549,   549,   549,
     549,   549,   549,   550,   550,   550,   550,   550,   550,   550,
     550,   550,   551,   551,   551,   551,   551,   551,   552,   552,
     553,   553,   553,   554,   555,   555,   555,   555,   555,   555,
     555,   556,   557,   557,   557,   557,   557,   557,   558,   557,
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
     557,   557,   557,   557,   557,   557,   557,   559,   559,   559,
     559,   559,   559,   559,   559,   559,   559,   559,   559,   559,
     559,   559,   559,   559,   559,   559,   559,   559,   560,   560,
     560,   560,   560,   560,   561,   561,   561,   561,   561,   561,
     561,   561,   561,   561,   561,   561,   561,   561,   561,   561,
     561,   561,   561,   561,   561,   561,   561,   561,   561,   561,
     561,   561,   561,   561,   562,   562,   563,   563,   563,   563,
     564,   564,   564,   565,   565,   565,   566,   566,   566,   566,
     566,   566,   566,   567,   567,   567,   567,   567,   567,   567,
     567,   567,   567,   567,   567,   567,   567,   567,   567,   567,
     567,   567,   567,   567,   567,   567,   567,   567,   567,   567,
     567,   567,   567,   567,   567,   567,   567,   567,   567,   567,
     567,   567,   567,   567,   567,   567,   567,   567,   567,   567,
     567,   567,   567,   567,   567,   567,   567,   567,   567,   567,
     567,   567,   567,   567,   567,   567,   567,   567,   567,   567,
     567,   567,   567,   567,   567,   567,   567,   567,   567,   567,
     567,   567,   567,   567,   567,   567,   567,   567,   567,   567,
     567,   567,   567,   567,   567,   567,   567,   567,   567,   567,
     567,   567,   568,   568,   568,   568,   569,   569,   570,   570,
     571,   571,   572,   573,   573,   573,   573,   573,   573,   574,
     574,   575,   575,   575,   575,   575,   575,   576,   576,   576,
     576,   576,   576,   576,   577,   577,   578,   578,   578,   578,
     578,   578,   578,   578,   579,   579,   579,   579,   579,   579,
     579,   579,   579,   579,   579,   579,   580,   580,   581,   582,
     581,   583,   583,   583,   584,   584,   584,   584,   584,   584,
     585,   585,   586,   586,   587,   588,   589,   588,   590,   590,
     591,   592,   593,   593,   593,   593,   593,   593,   593,   593,
     593,   593,   593,   593,   593,   593,   593,   593,   593,   593,
     593,   593,   593,   593,   593,   593,   593,   593,   594,   594,
     594,   594,   594,   594,   594,   594,   595,   595,   595,   595,
     596,   596,   596,   596,   596,   596,   596,   596,   597,   597,
     597,   598,   598,   598,   599,   599,   599,   599,   600,   600,
     600,   600,   601,   601,   602,   602,   602,   602,   603,   603,
     604,   604,   604,   604,   605,   605,   605,   605,   606,   606,
     606,   607,   607,   607,   608,   608,   609,   609,   609,   610,
     611,   611,   611,   611,   611,   612,   612,   612,   612,   612,
     612,   613,   613,   613,   613,   613,   614,   614,   614,   615,
     615,   615,   615,   615,   615,   616,   616,   616,   617,   617,
     617,   617,   617,   617,   618,   618,   618,   618,   618,   618,
     618,   618,   618,   618,   618,   618,   618,   619,   619,   619,
     620,   620,   620,   621,   621,   621,   622,   622,   622,   623,
     623,   623,   623,   624,   624,   624,   625,   625,   625,   626,
     626,   626,   627,   627,   627,   628,   628,   628,   629,   629,
     629,   630,   630,   630,   631,   631,   631,   632,   632,   632,
     633,   633,   633,   634,   634,   634,   635,   635,   635,   636,
     637,   637,   637,   638,   638,   638,   638,   639,   639,   639,
     639,   639,   639,   639,   640,   640,   640,   641,   641,   642,
     642,   642,   642,   642,   643,   643,   643,   644,   644,   644,
     645,   645,   645,   645,   646,   647,   647,   647,   647,   647,
     648,   648,   648,   648,   648,   648
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
       2,     2,     1,     1,     1,     1,     2,     1,     2,     1,
       1,     2,     1,     3,     1,     0,     1,     1,     0,     1,
       5,     6,     3,     6,     3,     1,     3,     1,     1,     1,
       3,     6,     7,     5,     2,     1,     5,     4,     1,     3,
       0,     1,     2,     1,     4,     1,     2,     1,     2,     3,
       2,     1,     2,     1,     4,     2,     1,     1,     3,     1,
       2,     3,     2,     0,     1,     1,     4,     2,     0,     1,
       3,     4,     4,     0,     1,     1,     1,     1,     2,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     2,     1,     2,     2,
       2,     2,     1,     1,     2,     1,     0,     1,     1,     2,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     2,     2,     0,     1,     2,     1,     6,     5,     1,
       1,     1,     2,     2,     2,     1,     1,     1,     1,     2,
       1,     1,     1,     2,     1,     1,     1,     2,     2,     2,
       0,     1,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     1,     2,     3,     1,     2,     2,
       4,     5,     1,    10,     1,     2,     3,     3,     2,     2,
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
       1,     2,     2,     2,     2,     2,     4,     4,     4,     4,
       3,     3,     4,     5,     8,     6,     9,     6,     7,    10,
      11,    12,     9,     5,     6,     3,     5,     5,     5,     6,
       5,     4,     4,     4,     9,    10,    11,     9,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     7,     7,     2,
       4,     4,     4,     4,     5,     4,     4,     5,     5,     3,
       4,     4,     4,     7,     9,     6,    10,    11,    12,     9,
       3,     2,     3,     5,     5,     7,     4,     3,     3,     6,
       7,     8,     7,     7,     4,     4,     4,     9,     4,     3,
       4,     7,     7,     2,     3,     3,     3,     4,     2,     2,
       4,     4,    10,     3,     4,     1,     3,     2,     2,     2,
       2,     3,     5,     4,     5,     2,     2,     2,     2,     3,
       2,     2,     2,     3,     2,     3,     4,     3,     3,     6,
       4,     2,     3,     2,     2,     4,     3,     3,     2,     3,
       1,     2,     1,     2,     2,     2,     3,     1,     1,     1,
       1,     2,     1,     2,     2,     1,     2,     2,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     1,
       2,     2,     2,     3,     5,     7,     7,     6,     5,     5,
       6,     6,     6,     5,     6,     6,     6,     6,     6,     6,
       6,     6,     7,    11,     7,     7,     7,     9,     9,    10,
      12,    12,     3,     2,     0,     1,     3,     4,     4,     4,
       0,     1,     1,     4,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     1,     1,     3,     3,     8,
       6,    10,     7,     7,     5,     6,     6,     3,     2,     2,
       3,     4,     5,     5,     5,     3,     4,     5,     5,     5,
       5,     2,     3,     3,     3,     5,     3,     3,     3,     3,
       3,     4,     5,     5,     5,     5,     3,     4,     5,     5,
       2,     2,     3,     3,     5,     6,     6,     3,     3,     3,
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
       6,     3,     2,     4,     1,     2,     2,     2,     3,     3,
       2,     2,     2,     2,     2,     2,     3,     2,     2,     3,
       1,     3,     4,     2,     1,     2,     5,     6,     6,     2,
       1,     2,     2,     5,     6,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     7,     8,     0,     0,     0,     0,
       0,   374,     0,     0,     0,     0,     0,     0,   403,     0,
       0,    23,     0,     0,     0,     0,     0,  1252,     0,     0,
       0,     0,  1183,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1183,    45,     0,     0,     0,     0,    51,     0,
       0,     0,    55,  1447,    57,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,   418,     0,   563,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1183,     0,
     429,     0,     0,   435,     0,     0,     0,   439,     0,   441,
       0,   443,     0,     0,   620,   447,    20,     0,   626,    21,
     631,     0,     0,   650,   635,   636,   637,   638,   652,   640,
     641,   645,   642,     0,   644,   646,     0,     0,    22,     0,
      24,     0,     0,     0,    26,     0,     0,     0,    27,     0,
     667,     0,     0,     0,   672,     0,    28,     0,  1254,   142,
    1276,     0,  1253,  1268,  1272,  1266,     0,  1264,  1274,     0,
    1270,     0,    36,     0,     0,     0,     0,     0,     0,     0,
      30,   833,    31,     0,     0,     0,     0,     0,     0,   834,
      32,     0,    33,  1187,  1188,  1184,  1185,  1186,     0,   142,
    1278,     0,   136,     0,     0,     0,    35,     0,    37,     0,
    1289,  1288,  1287,  1286,    39,     0,     0,     0,     0,     0,
     173,     0,    40,     0,  1307,     0,  1304,    41,     0,     0,
       0,     0,    44,     0,    43,    42,     0,  1334,  1335,    47,
       0,     0,     0,    48,     0,     0,  1351,    49,     0,     0,
       0,     0,     0,     0,    50,  1443,  1442,  1446,  1445,  1444,
      52,     0,    53,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    54,     0,     0,  1449,    56,     0,     0,
      58,     0,     0,     0,     0,   173,    59,  1474,    60,     0,
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
       0,   408,   488,     0,   487,   410,   502,   505,   492,   508,
     493,   494,   495,   497,     0,   499,   500,   504,   173,   411,
       0,     0,   412,     0,     0,   173,   413,   517,   173,   515,
     414,   518,   416,   173,   519,   415,     0,   173,     0,   417,
     537,     0,   535,   553,     0,     0,     0,   541,   533,     0,
     543,   558,   546,   419,   564,   565,   420,   421,     0,     0,
     589,   590,   591,   424,   586,   587,   588,   425,     0,   528,
       0,   426,    84,   525,     0,   427,   428,   579,   579,   566,
     567,   579,   579,   432,     0,   578,   572,   577,   573,   574,
     575,   576,   431,   585,   433,   434,   581,   436,     0,   582,
     583,   584,   438,   597,   592,   593,   595,   440,   603,   612,
     614,   616,   602,   605,   606,   618,   442,     0,     0,   623,
       0,   446,   173,   625,   632,     0,   633,   651,   634,   653,
     654,   655,   639,   656,   658,   657,   659,   643,   647,   664,
       0,     0,     0,     0,   660,   648,    25,  1345,  1346,  1347,
    1348,  1349,     0,  1340,  1341,  1342,  1343,     0,     0,     0,
     669,   668,     0,     0,     0,     0,    29,   142,  1277,     0,
    1269,  1273,  1267,  1265,  1275,     0,  1271,     0,   157,   150,
     149,   147,   153,   154,   151,   155,   148,   158,   144,   146,
     156,   145,   152,   143,  1258,  1256,  1255,  1260,  1262,   685,
       0,     0,     0,     0,   679,     0,   680,     0,     0,     0,
       0,     0,     0,     0,   681,     0,   832,     0,   682,     0,
     683,     0,     0,   684,     0,   837,   836,   835,     0,   840,
       0,     0,     0,     0,  1018,     0,     0,     0,   844,   848,
     850,     0,  1060,     0,     0,     0,     0,   955,     0,     0,
       0,   990,     0,     0,     0,     0,     0,     0,     0,   992,
       0,     0,     0,    34,  1284,  1279,  1285,   139,   140,   138,
     141,   137,  1280,     0,  1282,  1283,  1339,    38,     0,     0,
       0,     0,  1296,  1297,     0,   173,     0,  1294,  1291,     0,
       0,     0,   173,  1314,  1317,  1315,  1316,  1308,  1309,  1310,
    1311,     0,     0,     0,    46,  1336,  1337,     0,  1356,  1358,
    1357,  1353,  1354,  1352,     0,     0,     0,     0,     0,     0,
    1359,     0,  1363,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1360,  1374,     0,     0,     0,
    1362,  1364,     0,     0,     0,  1361,  1441,  1332,  1333,  1331,
     241,     0,   252,   237,     0,   254,   238,     0,   256,   239,
    1329,  1330,  1328,   240,   243,     0,     0,     0,   246,   242,
     244,   245,     0,     0,   236,     0,  1452,     0,     0,     0,
    1457,  1470,     0,     0,  1460,     0,     0,  1463,     0,     0,
    1462,  1461,   181,  1480,     0,  1479,  1475,   269,   265,     0,
     274,     0,   271,     0,   288,   291,   168,   171,   172,   170,
     169,   306,   307,   308,   296,   295,   311,   313,   312,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   341,     0,     0,   333,   352,     0,     0,     0,
     173,     0,     0,     0,   371,   378,   100,    97,    98,    99,
     173,   380,   379,     0,     0,     0,     0,     0,     0,     0,
     393,     0,   389,   387,   386,   401,   455,     0,     0,   458,
     464,   474,   475,   470,   471,   476,   478,   477,   472,   360,
     361,   467,   466,   482,   481,     0,   486,     0,   506,   507,
     491,   509,   498,   496,   501,   490,     0,     0,   173,   173,
     181,   181,   181,   173,     0,     0,   173,   554,   536,   547,
       0,   538,    84,   549,     0,     0,   540,   542,   173,   559,
       0,     0,   545,     0,     0,   423,     0,   530,    88,    87,
     524,     0,   580,   569,   568,   570,   571,     0,     0,     0,
       0,  1074,  1171,  1076,  1075,     0,  1176,     0,  1154,     0,
    1157,     0,     0,  1178,  1180,     0,  1170,   430,     0,   594,
     596,   613,   599,   615,   600,   617,   601,   607,   610,   608,
     604,   619,   598,     0,     0,   445,   624,   621,   622,   181,
     649,   661,   662,   663,   665,     0,     0,     0,   678,   666,
       0,     0,     0,  1259,  1257,  1261,  1263,     0,     0,     0,
     194,   194,   188,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   191,   191,   188,     0,     0,   188,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   727,
     751,     0,     0,     0,   719,     0,     0,     0,     0,   194,
     188,     0,     0,   828,     0,   838,   839,   173,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   899,     0,     0,     0,     0,     0,   921,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   943,     0,
       0,   948,   949,     0,     0,     0,   970,   972,   971,     0,
     974,     0,     0,   981,   983,   984,     0,  1019,     0,     0,
       0,     0,   842,   843,  1068,  1066,  1071,  1070,  1069,  1067,
    1072,     0,   847,     0,     0,  1062,  1061,   851,     0,  1065,
       0,   852,   853,   854,   855,     0,     0,     0,     0,     0,
     957,     0,     0,   958,  1199,     0,  1202,  1198,     0,     0,
       0,   959,   991,   960,  1217,  1222,  1219,  1225,  1218,  1216,
    1223,  1220,  1214,  1221,  1215,  1224,     0,     0,   965,     0,
       0,     0,     0,   966,  1234,  1238,  1239,     0,  1236,   967,
       0,  1240,   968,   988,     0,     0,     0,   993,   994,   995,
    1281,  1295,     0,     0,  1302,  1298,     0,     0,     0,  1293,
    1292,  1306,  1305,     0,     0,  1322,     0,     0,  1318,     0,
    1326,     0,     0,  1319,     0,  1355,   230,   230,     0,     0,
       0,   230,     0,  1388,     0,  1387,     0,     0,     0,     0,
    1375,     0,     0,     0,     0,  1379,     0,     0,     0,  1386,
       0,     0,     0,     0,     0,  1377,  1389,     0,     0,     0,
    1376,   230,   230,   230,  1366,  1365,  1367,     0,   253,   255,
     257,   247,     0,   250,   249,   248,     0,   258,     0,     0,
      63,     0,  1451,     0,  1458,   173,  1473,     0,  1464,  1465,
       0,  1467,  1468,     0,   182,   183,  1459,  1481,  1482,     0,
     261,     0,   275,     0,     0,     0,     0,   310,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   331,   330,
       0,   340,   342,     0,     0,     0,     0,     0,     0,   367,
       0,   173,     0,     0,     0,     0,     0,   173,     0,   392,
       0,   391,   462,   461,     0,     0,     0,   503,   173,     0,
     181,   514,   512,   516,   520,     0,     0,     0,   181,     0,
     555,   539,     0,   550,   552,   184,     0,     0,   422,     0,
       0,    63,     0,   529,    86,    85,     0,     0,  1089,     0,
       0,     0,     0,     0,     0,  1101,     0,     0,     0,  1151,
       0,     0,     0,  1120,  1121,     0,     0,     0,     0,     0,
    1134,     0,  1140,  1141,  1143,  1145,     0,  1150,  1162,  1163,
    1164,     0,  1166,     0,  1172,  1174,  1175,  1173,  1073,     0,
    1153,     0,  1152,  1088,     0,     0,  1158,     0,  1160,     0,
    1159,  1181,  1161,  1168,     0,     0,   611,   609,   444,     0,
       0,  1350,  1344,   676,   677,     0,   674,   670,     0,   194,
     194,   194,   195,   196,   689,   690,   190,   189,     0,   194,
     194,   194,     0,   697,   696,   695,   707,   191,   194,   194,
     194,   192,   193,   194,   194,     0,   194,   194,     0,   191,
       0,   720,     0,   726,     0,   725,   724,   723,     0,     0,
       0,   750,     0,   749,     0,   722,   721,     0,     0,     0,
       0,   191,   191,   188,     0,     0,   188,     0,     0,     0,
     194,   194,   824,     0,   194,   194,   829,     0,   220,   221,
     222,   223,   224,   225,     0,    92,    93,    91,   861,     0,
       0,     0,     0,     0,  1012,  1010,  1005,     0,  1015,   999,
    1016,  1002,  1014,  1008,   997,  1011,  1000,   998,  1017,  1013,
       0,     0,   875,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     909,     0,     0,     0,     0,   920,   922,     0,     0,     0,
     928,   927,     0,     0,     0,   209,     0,     0,     0,   173,
       0,   939,     0,     0,     0,     0,   944,   945,   946,     0,
       0,     0,     0,   953,   969,   973,   975,   978,   977,     0,
       0,     0,   982,   860,  1020,  1022,     0,  1021,   845,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1054,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   849,   996,     0,     0,     0,
       0,   956,     0,   173,  1195,  1193,  1191,     0,     0,   173,
    1197,   961,     0,     0,     0,     0,  1233,     0,     0,  1241,
     986,   987,     0,   989,  1301,  1303,  1300,  1299,  1290,     0,
       0,     0,  1323,     0,     0,  1327,  1338,   232,   233,   234,
     235,   231,  1369,  1368,     0,     0,     0,  1373,     0,     0,
       0,  1372,     0,     0,     0,  1371,  1370,   230,     0,     0,
       0,  1378,     0,     0,     0,  1385,     0,     0,     0,  1384,
       0,     0,     0,  1383,     0,     0,     0,  1382,     0,     0,
       0,     0,     0,  1399,     0,  1434,  1433,  1435,     0,     0,
       0,  1381,     0,     0,     0,  1380,  1394,  1393,  1395,  1391,
    1390,  1392,  1437,  1436,  1438,     0,   251,     0,     0,  1453,
    1455,  1456,     0,  1471,   173,  1466,  1469,     0,     0,   173,
       0,     0,     0,   272,     0,     0,     0,     0,   314,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   363,   362,     0,     0,   354,   365,   173,   368,   372,
       0,   383,   385,   384,   382,   173,   390,     0,     0,     0,
     181,   173,     0,     0,     0,     0,   534,   548,   557,     0,
     551,   186,   187,   185,   544,     0,   560,     0,     0,   527,
     532,    84,     0,     0,     0,     0,     0,     0,   173,  1090,
       0,     0,     0,  1095,     0,   173,     0,  1102,  1103,  1104,
       0,  1106,  1108,  1107,  1109,  1110,     0,     0,     0,  1116,
       0,  1122,  1123,     0,     0,     0,  1129,  1127,  1128,     0,
       0,     0,     0,  1135,  1136,     0,     0,  1139,  1142,  1144,
    1146,  1147,     0,     0,  1165,  1167,     0,  1087,  1077,  1177,
    1078,     0,     0,  1179,  1169,     0,     0,   629,   630,     0,
     671,   675,     0,   686,   687,   688,   194,   692,   693,   694,
       0,     0,     0,   701,   702,   188,     0,     0,     0,   194,
     708,   709,   710,   711,   713,   191,   716,   717,     0,   194,
       0,     0,     0,   191,   191,   188,     0,     0,     0,     0,
       0,     0,     0,   191,   191,   188,     0,     0,   188,     0,
       0,     0,     0,   191,   191,   188,     0,     0,     0,     0,
     748,     0,   752,     0,     0,     0,     0,     0,   191,   191,
     188,     0,     0,   188,     0,     0,     0,     0,     0,   191,
     191,   188,     0,     0,   188,     0,   191,   728,   729,   730,
     731,   733,     0,   736,   737,     0,   191,     0,     0,   822,
     823,   194,   826,   827,     0,   858,   173,   862,     0,     0,
       0,     0,     0,     0,     0,  1004,  1001,  1007,  1006,  1003,
    1009,     0,     0,     0,   197,   199,   208,   204,   201,   202,
     198,   200,   205,   203,   207,   206,     0,     0,     0,   173,
     882,   881,   883,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   954,   900,   901,   902,
       0,   906,   903,   905,     0,     0,   911,   910,   912,     0,
       0,     0,     0,     0,     0,     0,   173,   173,   926,   936,
     215,   211,   216,   210,   213,   212,   217,   214,   934,   935,
     173,     0,     0,   938,   940,   173,   173,     0,   947,   950,
     951,   173,   173,   976,   980,   859,  1023,   846,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1055,  1182,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1053,     0,     0,
       0,     0,     0,   856,   857,   173,   181,  1196,     0,     0,
    1200,  1201,     0,     0,   963,     0,   173,     0,  1235,  1237,
     985,     0,  1320,  1321,  1324,  1325,   230,   230,   230,   230,
     230,   230,   230,   230,   230,  1439,  1397,  1396,  1398,  1431,
    1430,  1432,  1428,  1427,  1429,  1422,  1421,  1423,  1419,  1418,
    1420,  1401,  1400,  1404,  1403,  1405,  1402,  1413,  1412,  1414,
    1410,  1409,  1411,     0,     0,  1448,     0,  1472,     0,   173,
       0,  1476,     0,     0,   276,     0,   273,     0,     0,     0,
       0,     0,   322,     0,     0,     0,     0,     0,     0,   329,
       0,     0,     0,   173,     0,   369,     0,     0,   375,   167,
     160,     0,   483,     0,   510,   181,   184,     0,     0,   523,
       0,   561,   562,     0,   526,     0,     0,     0,     0,     0,
       0,   173,  1091,   184,   184,   184,   173,  1096,   184,   181,
     184,   184,   173,  1111,   184,   184,   184,   173,  1117,   184,
     184,   173,     0,   173,   184,   173,   184,   184,   173,   184,
     173,     0,  1155,  1156,     0,     0,   628,     0,   691,   698,
     699,   700,     0,   704,   705,   706,   712,   194,   191,   718,
     739,   740,   741,   742,   743,     0,   745,   746,   191,   191,
     802,   803,   804,   805,   807,     0,   810,   811,     0,   191,
     813,   814,   815,   816,   817,     0,   819,   820,   191,     0,
       0,     0,   191,   191,   188,     0,     0,     0,     0,     0,
       0,   191,   191,   188,     0,     0,     0,     0,     0,     0,
     191,   191,   188,     0,     0,     0,   191,   194,   194,   194,
     194,   194,     0,   194,   194,     0,   191,   191,   194,   194,
     194,   194,   194,     0,   194,   194,     0,   191,   732,   191,
       0,   738,     0,     0,   825,     0,   863,   184,     0,     0,
     184,     0,     0,     0,   873,   184,   876,   877,   878,   184,
     880,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   904,   907,   908,     0,   184,     0,
       0,     0,   923,   924,     0,     0,   181,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1226,  1052,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   173,     0,     0,    89,     0,     0,  1063,  1064,   181,
       0,     0,     0,  1203,   962,   964,   181,   173,  1313,  1425,
    1424,  1426,  1416,  1415,  1417,  1407,  1406,  1408,  1440,     0,
    1450,  1483,     0,     0,  1478,  1477,   277,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   318,     0,     0,     0,
       0,   355,   366,   373,   184,   484,   489,   511,   513,     0,
     521,   556,   173,     0,     0,     0,     0,     0,     0,   173,
    1084,  1092,  1094,  1093,  1097,  1098,  1099,  1100,  1105,  1112,
    1113,  1114,  1115,  1118,  1119,  1124,   181,   184,   181,  1132,
     181,  1133,  1137,   181,  1148,   181,   173,     0,   173,     0,
     627,     0,   703,   714,   194,   191,   747,   806,   191,     0,
     812,   191,   821,   194,   194,   194,   194,   194,     0,   194,
     194,   191,   194,   194,   194,   194,   194,     0,   194,   194,
     191,   194,   194,   194,   194,   194,     0,   194,   194,   191,
     194,   762,   763,   764,   765,   767,   191,   770,   771,     0,
     194,   194,   791,   792,   793,   794,   796,   191,   799,   800,
       0,   194,   734,   191,   830,   831,   173,   865,     0,   184,
     867,     0,   173,     0,   874,   879,   173,     0,   888,   889,
     890,   891,   895,   896,   892,   893,   894,     0,     0,   184,
     915,     0,   173,     0,     0,   929,     0,   184,     0,     0,
     184,   184,     0,   979,     0,   218,   218,     0,     0,   218,
       0,   218,  1182,     0,     0,     0,     0,     0,     0,     0,
       0,  1227,  1205,     0,  1212,  1213,     0,   218,   218,     0,
       0,     0,     0,     0,  1182,     0,     0,     0,  1182,     0,
    1056,     0,     0,     0,  1182,    90,     0,   218,     0,  1229,
     173,   173,     0,   181,     0,   259,  1485,  1484,     0,     0,
     281,     0,     0,     0,     0,     0,   326,     0,     0,     0,
       0,     0,   376,   522,     0,   395,     0,  1080,     0,   226,
       0,  1085,  1125,  1126,  1130,  1131,  1138,  1149,  1086,   437,
       0,   395,     0,   715,   744,   808,   191,   818,   753,   754,
     755,   756,   757,   191,   759,   760,   194,   782,   783,   784,
     785,   786,   191,   788,   789,   194,   773,   774,   775,   776,
     777,   191,   779,   780,   194,   766,   194,   191,   772,   795,
     194,   191,   801,   735,     0,   184,   868,     0,     0,     0,
       0,     0,   897,   898,   913,     0,     0,     0,   925,   930,
       0,   932,     0,   941,   942,   933,   184,     0,   219,  1182,
    1182,    89,     0,  1182,     0,  1182,  1024,   173,     0,     0,
       0,     0,     0,     0,     0,  1204,     0,     0,  1182,  1182,
      89,     0,     0,     0,  1182,  1182,  1028,  1182,     0,     0,
    1029,  1182,  1059,  1057,  1058,  1033,  1182,  1182,  1229,  1245,
       0,  1194,  1192,  1231,     0,     0,     0,     0,   283,   316,
     317,     0,     0,     0,   315,   343,   344,     0,   395,   396,
     398,   397,   448,     0,     0,   227,   229,   228,  1082,  1083,
     395,   450,     0,   809,   194,   761,   194,   790,   194,   781,
     768,   194,   797,   194,     0,   864,   184,   184,     0,   184,
       0,   184,   184,     0,   931,   184,     0,  1182,  1039,  1035,
    1182,     0,  1040,     0,  1034,  1182,     0,  1207,     0,  1210,
    1250,  1211,  1209,  1206,     0,  1037,  1036,  1182,     0,     0,
    1182,  1041,  1031,  1027,  1182,   173,  1030,  1032,  1038,  1245,
    1189,     0,     0,  1230,  1243,  1232,  1312,     0,     0,   324,
     325,   323,   356,   359,   357,     0,     0,   449,  1079,   173,
     451,   673,   758,   787,   778,   769,   798,   184,   866,   872,
       0,   887,   884,   914,   919,     0,   937,     0,  1046,  1026,
      89,     0,  1044,     0,  1208,     0,  1025,    89,     0,  1042,
    1045,     0,  1190,  1247,  1249,     0,  1242,     0,     0,     0,
       0,     0,     0,   226,     0,   869,   173,   885,   916,   952,
    1182,     0,  1251,     0,  1182,     0,   184,  1248,  1244,   282,
       0,     0,     0,     0,     0,  1081,   841,   173,   870,   886,
     173,   917,  1048,     0,  1182,  1047,     0,     0,   284,   348,
       0,   347,     0,   871,   918,    89,  1049,    89,  1182,   346,
     345,  1182,  1182,  1043,  1051,  1050
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    59,  1667,   184,   166,  1090,  2864,  2865,   497,   498,
     499,   500,   167,   168,   169,   832,   754,   102,   971,   520,
    1436,  1974,  1598,  1613,  1594,  2186,  2238,  2979,  1664,  3048,
    1842,   393,   929,  1414,   913,   916,   919,   934,    69,   417,
     423,   427,   430,    75,   434,    82,   450,   446,   440,   457,
      92,   467,   103,  1460,   112,   475,   478,   481,   483,   556,
    1041,  1943,   485,   488,   491,   119,   507,   170,   172,  3042,
     188,   191,   236,  1085,  1135,   544,  1029,   547,   557,  1033,
    1038,   559,   561,  1044,   565,  1046,   579,  1050,  1052,   582,
     586,   590,   592,   595,   599,   635,   631,  1513,   613,  1071,
    1076,  1068,  1501,  1082,   616,   643,   652,  1093,   657,   662,
     654,   627,   623,   667,   676,  1130,  1577,  1122,  1124,  1126,
    1132,   681,  1137,   239,   683,  2049,   258,   686,   688,   692,
     697,   705,   276,  1587,   720,   300,   764,  1603,   766,   774,
    1194,  1621,  1189,  2110,  1633,  1631,  2112,  1190,  1623,  1625,
     780,   783,   778,   302,   310,   312,   823,  1273,  1690,  1262,
    1795,  2269,  2287,  1277,  1281,  1271,  1117,  1558,  1562,  1570,
    1572,  2604,   318,  1290,  1293,  1301,  2841,  2842,  2843,  2605,
    3019,  3020,  1323,  1329,  1332,  3113,  3114,  3110,  3111,  3163,
    2844,  2845,   292,   326,   334,   342,   847,   842,   347,   352,
     354,   857,   864,  1358,  1363,   923,   910,   359,   363,   328,
     268,   264,   367,   871,   374,   905,   880,   895,   896,  1400,
    1395,  1861,  1385,  1883,  1855,  1895,  1891,  1851,  1877,  1873,
    1847,  1869,  1865,  1389,   900,   882,   380,   381,   397,  1422,
     400,   406,   947,   950,   944,   408,   411,   955
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2825
static const yytype_int16 yypact[] =
{
    5358,    94,   640,    45, -2825, -2825,  1488,  -154,  1387,   944,
    1060,   534,  1281,   174,   306,    18,   178,   385,  5582,   770,
    3619, -2825,    72,    -9,    -8,   823,   217,  1198,  1169,   -65,
      88,   237,   449,   190,   -16,   273,   601,  2907,    13,   -14,
     342,   496,   449, -2825,   580,   216,   131,    71, -2825,   582,
     618,  1075, -2825,  1028, -2825,    50,  4018,   464,    65,   745,
     133,   143,   459,   775,   804,   118,   845,     8,   870, -2825,
   -2825, -2825,   487,  1217,   604, -2825,   612,    95,   306,   552,
     124,   759, -2825,   850,   604, -2825, -2825,   604,   604,   774,
     876,   604, -2825, -2825,   604, -2825, -2825,   604, -2825, -2825,
   -2825, -2825, -2825, -2825,   959,   219,   911,   857,   918,   938,
     159,   727, -2825,   604,  1570,   604,   604,  1181,   604, -2825,
   -2825, -2825,   734, -2825, -2825, -2825, -2825,  4649, -2825, -2825,
   -2825, -2825, -2825, -2825,   604, -2825, -2825, -2825, -2825, -2825,
   -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825,
   -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825,
   -2825, -2825, -2825, -2825, -2825, -2825, -2825,  1314, -2825,   604,
   -2825,   965, -2825, -2825,   306,   306,   306,   306,   306,   306,
     306,   306,   306,   306, -2825, -2825, -2825, -2825, -2825,   869,
     994, -2825,   952,  1761,    -4,   351,   710,   851,  1053,  4471,
     583,  4708,  3732,  1012,  4649,  3083, -2825,   585,  -164,   978,
    1050,   970,   234,   303,  1220,  1078,  1065,   521,   449,   468,
   -2825,   786,  1024, -2825,   848,   797,   386, -2825,   377, -2825,
    1097, -2825,     6,  1066,    60, -2825, -2825,  5016, -2825, -2825,
   -2825,  1108,  1057,  1190, -2825, -2825, -2825, -2825,   915, -2825,
   -2825, -2825, -2825,   792, -2825, -2825,  5016,  4228, -2825,  1182,
   -2825,    31,  5016,  1225, -2825,   250,  5016,  1231, -2825,   181,
   -2825,  1238,  1246,    79, -2825,   604, -2825,  1251,  1140,  3766,
   -2825,  1265, -2825, -2825, -2825, -2825,  1270, -2825, -2825,   604,
   -2825,   306, -2825,  1285,    68,  1288,   509,    83,  1291,    25,
   -2825, -2825, -2825,  1300,  1303,   306,   306,   604,   604, -2825,
   -2825,  1315, -2825, -2825, -2825, -2825, -2825, -2825,  3865,  3766,
   -2825,  1322,    55,   604,  5016,   604, -2825,  5016, -2825,  1328,
   -2825, -2825, -2825, -2825, -2825,   604,  1318,   306,  2402,   604,
    1314,   604, -2825,  1355, -2825,  4837, -2825, -2825,   544,  1357,
    1361,   604, -2825,  1371, -2825, -2825,     9, -2825, -2825, -2825,
    1376,  5016,  1385, -2825,  1391,   604,  1295, -2825,   954,  1278,
    2510,   556,  1397,   587, -2825, -2825, -2825, -2825, -2825, -2825,
   -2825,  1410, -2825,   553,   154,   208,   294,   479,   604,    43,
    1424,   604,    35, -2825,   604,   -35,  1440, -2825,   604,   604,
   -2825,   144,    23,    38,  1447,  1314, -2825, -2825, -2825,  1380,
     604, -2825, -2825, -2825, -2825, -2825,   604, -2825,  1459,  1463,
   -2825,   604,  1456, -2825, -2825, -2825, -2825, -2825, -2825,   604,
   -2825,   306, -2825,   604, -2825, -2825,   593,   593, -2825,  1476,
   -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825,
   -2825,  1272,   604,   604,  1491,  1496,  1503, -2825, -2825,   604,
     604,   604,   604,   604,   604,  1515,   604, -2825,  1518,   604,
     604, -2825,  1523,  1525,  1538, -2825,  1544, -2825, -2825,  1553,
    1561, -2825,  1313, -2825,  1520, -2825,  5016,  1364, -2825,   621,
   -2825, -2825,   604, -2825, -2825, -2825,   604,  1559,  1565,  1565,
    5016,   604,   604,   604,   604,   604,   604, -2825,   604,  4649,
    1570,   604,   604, -2825, -2825, -2825, -2825, -2825, -2825, -2825,
    1570,   604, -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825,
   -2825, -2825, -2825,  1564, -2825, -2825,  1263,    -6, -2825, -2825,
   -2825, -2825, -2825, -2825, -2825, -2825,  1196, -2825,   -58, -2825,
   -2825, -2825,  1399, -2825,   442,   602,   602, -2825, -2825, -2825,
    1602, -2825, -2825,  1605, -2825, -2825,  1289,   -59, -2825,  1409,
   -2825, -2825, -2825, -2825,  1430, -2825,  1622, -2825,  1314, -2825,
     604,   604, -2825,  5016,  5016,  1314, -2825, -2825,  1314, -2825,
   -2825, -2825, -2825,  1314, -2825, -2825,  5016,  1314,   604, -2825,
   -2825,  5016, -2825,  1630,   570,  1412,    12, -2825, -2825,  1446,
    5016,    29, -2825, -2825, -2825, -2825, -2825, -2825,  1667,  1669,
   -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825,  1631, -2825,
    1451, -2825,   470, -2825,   604, -2825, -2825,  1672,  1672, -2825,
   -2825,  1672,  1672, -2825,   615, -2825, -2825, -2825, -2825, -2825,
   -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825,     6, -2825,
   -2825, -2825, -2825, -2825, -2825,  1466,  1469, -2825, -2825,  1606,
    1615,  1616, -2825, -2825,     5,  1432, -2825,   604,  1684,  1435,
    4837, -2825,  1314, -2825, -2825,  1691, -2825, -2825, -2825, -2825,
   -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825,
    5016,  5016,  5016,  5016, -2825, -2825, -2825, -2825, -2825, -2825,
   -2825, -2825,  1694, -2825, -2825, -2825, -2825,  1696,  1698,   306,
   -2825, -2825,  1700,  1701,  1482,   604, -2825,  3766, -2825,  1703,
   -2825, -2825, -2825, -2825, -2825,   604, -2825,   306, -2825, -2825,
   -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825,
   -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825,
     549,  1617,  1618,  1620, -2825,  1704, -2825,   746,  1621,    46,
      73,  4964,   160,  1711, -2825,  1713, -2825,  1714, -2825,    77,
   -2825,  1718,  1721, -2825,  1723, -2825, -2825, -2825,   604, -2825,
    4837,  4838,  1805,  1413,   488,  1734,   600,  1634, -2825, -2825,
   -2825,  1724,    44,   551,  1744,  1746,    19,   604,   513,   528,
      99,  5016,   306,  2112,   684,   148,   360,   192,    10, -2825,
    1733,  1736,  1752, -2825, -2825, -2825, -2825, -2825, -2825, -2825,
   -2825, -2825, -2825,   604, -2825, -2825, -2825, -2825,   604,   604,
     604,   604, -2825, -2825,   604,  1314,   604, -2825,   604,  1570,
     604,  1758,  1314, -2825, -2825, -2825, -2825, -2825, -2825, -2825,
   -2825,  1760,   203,   526, -2825, -2825, -2825,  1762, -2825, -2825,
   -2825, -2825,  1660, -2825,  1763,  1766,  1699,  1705,  1706,  1774,
   -2825,  1796, -2825,  1797,  1709,  1802,   546,   559,   647,   501,
     690,   663,   752,  1807,   777, -2825, -2825,  1811,  1812,  1816,
   -2825, -2825,  1817,  1819,  1821, -2825,  1822, -2825, -2825, -2825,
   -2825,  1828, -2825, -2825,  1832, -2825, -2825,  1833, -2825, -2825,
   -2825, -2825, -2825, -2825, -2825,   604,   214,   604, -2825, -2825,
   -2825, -2825,   604,   604, -2825,   604,   604,  1382,   604,   604,
   -2825,  4837,  1773,  1843, -2825,  1461,  1845, -2825,  1467,  1848,
   -2825, -2825,   448,   604,   604, -2825,  1810, -2825, -2825,  1850,
    1458,   604,  1847,   961, -2825, -2825, -2825, -2825, -2825, -2825,
   -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825,  1855,
    1856,   604,   604,   604,   604,   604,  1857,   604,  1858,   604,
     990,  1859,  1862,   185,  1864, -2825, -2825,   306,  1866,  1868,
    1314,  1869,  5016,  1871, -2825, -2825, -2825, -2825, -2825, -2825,
    1314, -2825, -2825,   604,   604,   604,  5016,   604,  1570,   604,
   -2825,   604, -2825, -2825, -2825, -2825, -2825,  1873,  1874, -2825,
   -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825,
   -2825, -2825, -2825,   583, -2825,   604, -2825,  1878, -2825, -2825,
   -2825, -2825, -2825, -2825, -2825, -2825,  5016,   604,  1314,  1314,
     448,   448,   448,  1314,  1570,   604,  1314, -2825, -2825, -2825,
     604, -2825,   470,  1676,  1881,  1879, -2825, -2825,  1314, -2825,
    1712,  1716, -2825,  1886,  1889, -2825,  1892,  1481,  1860,  1863,
   -2825,   604, -2825, -2825, -2825, -2825, -2825,   885,   904,  1578,
      41, -2825, -2825, -2825, -2825,   604,   168,   147, -2825,  1603,
   -2825,  2112,  1610,   576,  1569,   123, -2825, -2825,   604, -2825,
   -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825,  1586, -2825,
   -2825, -2825, -2825,   604,  1903, -2825, -2825, -2825, -2825,   448,
   -2825, -2825, -2825, -2825, -2825,  1907,  1909,  4869, -2825, -2825,
    1916,  1918,   604, -2825, -2825, -2825, -2825,  1920,  1923,  1926,
     467,   467,  -105,  1932,  1933,  1935,  1941,  1941,  1941,  1628,
    1641,  1947,  1948,  1949,    70,    70,  -105,  1952,  1953,  -105,
    1957,  1958,  1959,  1963,  1959,  1963,  5583,  1964,  1966, -2825,
   -2825,  1959,  1963,   926, -2825,  1970,  1972,  1973,  1974,   467,
    -105,  1979,  1983, -2825,  1984, -2825, -2825,  1314,  1258,  1428,
    1717,  1719,  1720,  1884,  2760,  1728,  1989,   288,    51,  1888,
    1257,  2000,   649,  1965,  1732,  1735,  1894,  2005,  1772,   660,
      92,  1055,   324,  5016,  2112,  1977,   839,  1741,  1781,  2009,
     102, -2825, -2825,   881,  2011,  2018, -2825, -2825, -2825,  2019,
    1784,   115,  2112,  1785, -2825, -2825,  1968, -2825,   306,  2025,
    2026,   604, -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825,
   -2825,    24, -2825,   772,  2027, -2825, -2825, -2825,   604, -2825,
     604, -2825, -2825, -2825, -2825,   604,   604,   604,   600,  5016,
   -2825,  2028,  1509, -2825, -2825,   604, -2825, -2825,   604,  5016,
     604, -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825,
   -2825, -2825, -2825, -2825, -2825, -2825,   306,   604, -2825,   604,
     600,  2029,  2030, -2825, -2825, -2825, -2825,   604,   604, -2825,
     306, -2825, -2825, -2825,   790,  2032,  2035, -2825, -2825, -2825,
   -2825, -2825,   604,   604, -2825, -2825,  1570,   604,   604, -2825,
   -2825, -2825, -2825,  2037,   604, -2825,   604,  1921, -2825,   604,
   -2825,   604,  1924, -2825,  2040, -2825,  1329,  1329,   794,   838,
     860,  1329,  2042, -2825,   955, -2825,   973,   976,   985,   988,
   -2825,  2043,  2045,  1029,  2047, -2825,  2049,  2050,  2053, -2825,
    1093,  1098,  2054,  2055,  2057, -2825, -2825,  2058,  2060,  2062,
   -2825,  1329,  1329,  1329, -2825, -2825, -2825,   604, -2825, -2825,
   -2825, -2825,   604, -2825, -2825, -2825,   604, -2825,   604,   604,
    1155,  5016, -2825,   604, -2825,  1314, -2825,  4837, -2825, -2825,
    2064, -2825, -2825,  2065, -2825, -2825, -2825, -2825,  2051,  2402,
   -2825,   604,  2063,   604,   604,   604,  1269, -2825,  2067,   604,
     604,  2071,   604,   604,  2072,   604,  2074,   604, -2825, -2825,
     990, -2825, -2825,  2075,  2076,     2,  2077,   306,   306, -2825,
    5016,  1314,  2079,   604,  2080,  2081,  2082,  1314,  5016, -2825,
     604, -2825, -2825, -2825,   604,   604,   604, -2825,  1314,  5016,
     448, -2825, -2825, -2825, -2825,  1570,   604,  2083,   448,   604,
     625, -2825,  2084, -2825, -2825,  1152,  3152,   604, -2825,   604,
    2086,  2088,   604, -2825, -2825, -2825,  2087,  1534,  4649,  1803,
    1818,  1820,   141,  5016,  1825, -2825,   452,    76,   166, -2825,
    1835,  1836,   255, -2825, -2825,   737,  1867,  1062,  1846,  -102,
    2112,  1112, -2825,  2090,  1826, -2825,   937, -2825, -2825, -2825,
   -2825,  2112,  1875,     3, -2825, -2825, -2825, -2825, -2825,   604,
   -2825,   604, -2825, -2825,   604,   604, -2825,   604, -2825,   604,
   -2825, -2825, -2825, -2825,  1887,   604, -2825, -2825, -2825,   604,
     112, -2825, -2825, -2825, -2825,  2137,  2138, -2825,   604,   467,
     467,   467, -2825, -2825, -2825, -2825, -2825, -2825,  2139,   467,
     467,   467,  1408, -2825, -2825, -2825, -2825,    70,   467,   467,
     467, -2825, -2825,   467,   467,  2140,   467,   467,  2141,    70,
    1411, -2825,  1017, -2825,  1521, -2825, -2825, -2825,  2142,  2144,
    2146, -2825,  1176, -2825,  1668, -2825, -2825,  1842,  2148,  2149,
    2150,    70,    70,  -105,  2154,  2156,  -105,  2157,  2160,  2161,
     467,   467, -2825,  2162,   467,   467, -2825,  2163, -2825, -2825,
   -2825, -2825, -2825, -2825,   306, -2825, -2825, -2825,  4649,  1414,
     604,  1547,  1598,   484, -2825, -2825, -2825,   914, -2825, -2825,
   -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825,
    2164,   604, -2825,   306,   782,  2165,   604,  5016,   306,   306,
    2166,  1612,  1899,  1900,   270,   276,  1901,   282,  1813,  1823,
    2172,  2174,  2175,  2178,  2760,  2179,  2180,  2181,  1834,  1837,
    1585,  2182,   604,  1579,  1626, -2825, -2825,   306,   782,  5016,
   -2825, -2825,  5016,   604,  2184,    78,  2183,  5016,   604,  1314,
     306, -2825,  2185,  5016,  5016,   604, -2825, -2825, -2825,   306,
     306,   782,  5016, -2825, -2825, -2825, -2825, -2825, -2825,  5016,
     604,   306, -2825,  2196, -2825, -2825,   604, -2825, -2825,  2197,
     604,  1902,   176,   604,  1944,   604,   212,   604,  2200,   604,
    1954,  1955,   604,   604,   604,  1962,   604,   191,   604,   604,
     893,    21,   604,   604,  1969, -2825, -2825,   604,   604,   604,
     604, -2825,  5016,  1314,  2201,  2203,  2204,   604,   604,  1314,
   -2825,   604,   604,   604,  5016,   600, -2825,   604,   604, -2825,
   -2825, -2825,  2212, -2825, -2825, -2825, -2825, -2825, -2825,  2219,
     604,   604, -2825,   604,   604, -2825, -2825, -2825, -2825, -2825,
   -2825, -2825, -2825, -2825,  2220,  2224,  2226, -2825,  2228,  2229,
    2231, -2825,  2232,  2236,  2238, -2825, -2825,  1329,  2241,  2242,
    2244, -2825,  2245,  2246,  2249, -2825,  2260,  2261,  2250, -2825,
    2270,  2277,  2284, -2825,  2286,  2287,  2285, -2825,  2289,  2290,
    2291,  2292,  2294, -2825,  2297, -2825, -2825, -2825,  2299,  2300,
    2298, -2825,  2302,  2303,  2307, -2825, -2825, -2825, -2825, -2825,
   -2825, -2825, -2825, -2825, -2825,   604, -2825,   604,   604, -2825,
   -2825, -2825,   604, -2825,  1314, -2825, -2825,  2402,   604,  1314,
     604,   604,   604, -2825,   604,   604,  2308,   604, -2825,   604,
     604,  2310,   604,   604,  2312,   604,  2313,   604,   990,  2311,
    2315, -2825, -2825,  2316,  5016, -2825,  2317,  1314, -2825,  2318,
     604, -2825, -2825, -2825, -2825,  1314, -2825,  1790,   604,  1790,
     448,  1314,  5016,   604,   604,  2322, -2825, -2825, -2825,   604,
   -2825, -2825, -2825, -2825, -2825,  5016, -2825,  5016,   604, -2825,
   -2825,   470,  2323,  2324,  2326,  2327,  2328,  4936,  1314, -2825,
    5016,  5016,  5016,  4649,  5016,  1314,  5016, -2825, -2825, -2825,
    5016, -2825, -2825, -2825, -2825,  4649,  5016,  5016,  5016,  4649,
    5016, -2825, -2825,  5016,  5016,   604, -2825, -2825, -2825,  5016,
    5016,  5016,  5016, -2825, -2825,  5016,  5016, -2825, -2825, -2825,
   -2825, -2825,  5016,  5016, -2825, -2825,  2135, -2825, -2825, -2825,
   -2825,   604,   604, -2825, -2825,  2330,   604, -2825, -2825,  2332,
   -2825, -2825,   604, -2825, -2825, -2825,   467, -2825, -2825, -2825,
    2333,  2334,  2335, -2825, -2825,  -105,  2338,  2340,  2341,   467,
   -2825, -2825, -2825, -2825, -2825,    70, -2825, -2825,  2343,   467,
    2344,  2347,  2349,    70,    70,  -105,  2352,  2354,  2356,  1985,
    2358,  2359,  2360,    70,    70,  -105,  2362,  2365,  -105,  2369,
    2371,  2372,  2373,    70,    70,  -105,  2375,  2376,  2377,  1527,
   -2825,  1530, -2825,  1671,  2002,  2378,  2379,  2380,    70,    70,
    -105,  2382,  2383,  -105,  2384,  2017,  2386,  2387,  2388,    70,
      70,  -105,  2391,  2394,  -105,  2395,    70, -2825, -2825, -2825,
   -2825, -2825,  2397, -2825, -2825,  2398,    70,  2399,  2400, -2825,
   -2825,   467, -2825, -2825,  2403, -2825,  1314, -2825,  5016,   604,
     604,  5016,   604,  2405,  1428, -2825, -2825, -2825, -2825, -2825,
   -2825,  2406,  5016,   306, -2825, -2825, -2825, -2825, -2825, -2825,
   -2825, -2825, -2825, -2825, -2825, -2825,   782,  2407,  5016,  1314,
   -2825, -2825, -2825,  2408,  1428,   604,   604,   604,   604,   604,
     604,   604,   604,   604,  2410,  2411, -2825, -2825, -2825, -2825,
    2412, -2825, -2825, -2825,  2414,  2415, -2825, -2825, -2825,   604,
    5016,   604,  2417,  1428,   306,   782,  1314,  1314, -2825, -2825,
   -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825,
    1314,   604,  1570, -2825, -2825,  1314,  1314,   604, -2825, -2825,
   -2825,  1314,  1314, -2825, -2825, -2825, -2825, -2825,   604,   604,
     604,   604,   604,   604,   604,   604,   604,   604, -2825, -2825,
     604,   604,   604,   604,   604,   604,   604,   604,  1995,   604,
     604,   604,  1998,   604,  1756,  2418,   604, -2825,   604,   604,
     604,  2416,  2420, -2825, -2825,  1314,   448, -2825,  2421,  2423,
   -2825, -2825,  1570,   604, -2825,  2425,  1314,  5016, -2825, -2825,
   -2825,  2426, -2825, -2825, -2825, -2825,  1329,  1329,  1329,  1329,
    1329,  1329,  1329,  1329,  1329, -2825, -2825, -2825, -2825, -2825,
   -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825,
   -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825,
   -2825, -2825, -2825,  1428,   604, -2825,   604, -2825,   604,  1314,
     604, -2825,  1570,   604, -2825,   604, -2825,  2370,  2428,  2429,
     604,   604, -2825,   604,   604,  2431,   604,  2434,   604, -2825,
    2435,  2441,  2442,  1314,  2443, -2825,  2444,  5016, -2825, -2825,
   -2825,   604, -2825,   604, -2825,   448,  1152,   604,  2447, -2825,
     604, -2825, -2825,  4649, -2825,  2448,  2449,  2450,  2453,  2455,
    5016,  1314, -2825,  1152,  1152,  1152,  1314, -2825,  1152,   448,
    1152,  1152,  1314, -2825,  1152,  1152,  1152,  1314, -2825,  1152,
    1152,  1314,  5016,  1314,  1152,  1314,  1152,  1152,  1314,  1152,
    1314,  5016, -2825, -2825,  2445,  4649,  2456,   604, -2825, -2825,
   -2825, -2825,  2460, -2825, -2825, -2825, -2825,   467,    70, -2825,
   -2825, -2825, -2825, -2825, -2825,  2461, -2825, -2825,    70,    70,
   -2825, -2825, -2825, -2825, -2825,  2463, -2825, -2825,  2466,    70,
   -2825, -2825, -2825, -2825, -2825,  2467, -2825, -2825,    70,  2468,
    2469,  2470,    70,    70,  -105,  2472,  2473,  2475,  2476,  2477,
    2478,    70,    70,  -105,  2474,  2481,  2482,  2483,  2484,  2486,
      70,    70,  -105,  2488,  2489,  2490,    70,   467,   467,   467,
     467,   467,  2493,   467,   467,  2494,    70,    70,   467,   467,
     467,   467,   467,  2495,   467,   467,  2496,    70, -2825,    70,
    2497, -2825,  2498,  2499, -2825,  4837, -2825,  1152,  2500,  5016,
    1152,   604,  5016,  2501, -2825,  1152, -2825, -2825, -2825,  1152,
   -2825,  5016,  2502,   604,   604,   604,   604,   604,   604,   604,
     604,   604,   604,   604, -2825, -2825, -2825,  5016,  1152,   604,
    5016,  2503, -2825, -2825,  1570,  1570,   448,  5016,  1570,  1570,
    5016,  5016,  1570,  1570,   604,   604,   604,   604,   604,   604,
    1428,   604,   604,   604,  3533, -2825,  1428,   604,   604,   604,
     604,  1428,   604,   604,  2504,   604,   604,   604,  2505,   604,
     604,  1314,   604,  2066,  1428,   604,   604, -2825, -2825,   448,
     306,  5016,  5016, -2825, -2825, -2825,   448,  1314,  2508, -2825,
   -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825,   604,
   -2825, -2825,  1570,   604, -2825, -2825, -2825,  1333,  2509,  2511,
    2513,  2516,   604,   604,  2517,   604, -2825,  2518,  2519,  2520,
    1790, -2825, -2825, -2825,  1152, -2825, -2825, -2825, -2825,  2521,
   -2825, -2825,  1314,  2523,  2525,  2524,  2526,  5016,  2528,  1314,
   -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825,
   -2825, -2825, -2825, -2825, -2825, -2825,   448,  1152,   448, -2825,
     448, -2825, -2825,   448, -2825,   448,  1314,  2529,  1314,  2531,
   -2825,   604, -2825, -2825,   467,    70, -2825, -2825,    70,  2532,
   -2825,    70, -2825,   467,   467,   467,   467,   467,  2534,   467,
     467,    70,   467,   467,   467,   467,   467,  2535,   467,   467,
      70,   467,   467,   467,   467,   467,  2536,   467,   467,    70,
     467, -2825, -2825, -2825, -2825, -2825,    70, -2825, -2825,  2537,
     467,   467, -2825, -2825, -2825, -2825, -2825,    70, -2825, -2825,
    2538,   467, -2825,    70, -2825, -2825,  1314, -2825,  5016,  1152,
   -2825,  2539,  1314,   604, -2825, -2825,  1314,   604, -2825, -2825,
   -2825, -2825, -2825, -2825, -2825, -2825, -2825,   604,   604,  1152,
   -2825,  2540,  1314,   604,  1570, -2825,    27,  1152,   604,  1570,
    1152,  1152,  5016, -2825,   604,  2541,  2541,   604,   604,  2541,
    1428,  2541, -2825,  5016,  1999,  2007,  2094,  2113,  2115,  2125,
    2147,  3533, -2825,  2153, -2825, -2825,  1428,  2541,  2541,   604,
     604,  1428,  1589,   604, -2825,   604,   604,   604, -2825,   604,
   -2825,  1570,   604,  2545, -2825, -2825,   604,  2541,   306,    20,
    1314,  1314,   306,   448,  2542, -2825, -2825, -2825,  2549,   604,
   -2825,  2550,  2553,  2554,  2555,  2569, -2825,  2570,  2573,  2574,
    2576,   604, -2825, -2825,  2579,     7,  5016, -2825,  2582,    17,
    5016, -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825,
    2580,     7,   604, -2825, -2825, -2825,    70, -2825, -2825, -2825,
   -2825, -2825, -2825,    70, -2825, -2825,   467, -2825, -2825, -2825,
   -2825, -2825,    70, -2825, -2825,   467, -2825, -2825, -2825, -2825,
   -2825,    70, -2825, -2825,   467, -2825,   467,    70, -2825, -2825,
     467,    70, -2825, -2825,   604,  1152, -2825,  5016,  5016,   604,
    5016,   604, -2825, -2825, -2825,  5016,  5016,   604, -2825, -2825,
    2583, -2825,  5016, -2825, -2825, -2825,  1152,  2593, -2825, -2825,
   -2825,  1428,   604, -2825,  2597, -2825, -2825,  1314,  2760,  2598,
    2604,  2606,  2610,  2613,  2616, -2825,   306,  2617, -2825, -2825,
    1428,   604,  2620,  2621, -2825, -2825, -2825, -2825,   604,  5016,
   -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825,    20,  2098,
    2112, -2825, -2825, -2825,   306,  2624,  2625,  2626, -2825, -2825,
   -2825,  2629,  2630,  2631, -2825, -2825, -2825,   165,     7, -2825,
   -2825, -2825, -2825,  2635,  5016, -2825, -2825, -2825, -2825, -2825,
       7, -2825,  2636, -2825,   467, -2825,   467, -2825,   467, -2825,
   -2825,   467, -2825,   467,  4837, -2825,  1152,  1152,   604,  1152,
    2637,  1152,  1152,   604, -2825,  1152,   604, -2825, -2825, -2825,
   -2825,  2639, -2825,   604, -2825, -2825,  2640, -2825,  2643, -2825,
   -2825, -2825, -2825, -2825,   604, -2825, -2825, -2825,  2644,   604,
   -2825, -2825, -2825, -2825, -2825,  1314, -2825, -2825, -2825,  2098,
   -2825,  2159,  2202,  2112, -2825, -2825, -2825,  2646,  2648, -2825,
   -2825, -2825, -2825, -2825, -2825,  1032,  1032, -2825, -2825,  1314,
   -2825, -2825, -2825, -2825, -2825, -2825, -2825,  1152, -2825, -2825,
    2654, -2825,  4649, -2825, -2825,  2657, -2825,  1428, -2825, -2825,
    1428,   604, -2825,  2658, -2825,   604, -2825,  1428,   604, -2825,
   -2825,  5016, -2825,  2159, -2825,   306, -2825,  2659,  2660,   604,
     604,   604,   604,    17,  2661,  4649,  1314, -2825,  4649, -2825,
   -2825,   604, -2825,  2663, -2825,   604,  1152, -2825, -2825, -2825,
    2664,  2666,   604,  2667,   604, -2825, -2825,  1314, -2825, -2825,
    1314, -2825, -2825,  2671, -2825, -2825,  2672,  2673, -2825, -2825,
    2674, -2825,  2675, -2825, -2825,  1428, -2825,  1428, -2825, -2825,
   -2825, -2825, -2825, -2825, -2825, -2825
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2825, -2825,    -3, -2825,   482, -1067, -1603, -1101,  2128, -2825,
    1040,  -489,  1740,   -55,    63, -2825,  -307, -1950,  2192,  1627,
   -1016, -1221,  -966,   877,  1707, -1714, -2825,  -831, -2825,  -529,
   -1247, -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825,
   -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825,
   -2825, -2825, -2825, -1454, -2825, -2825, -2825, -2825, -2825,  -369,
    -554, -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2824,
   -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825,
   -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825,
   -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825,
   -2825, -2825, -2825, -2825, -2825, -2825, -2825,   624, -2825, -2825,
   -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825,
   -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825,
   -2825, -2825, -2825, -2825, -2825, -2825, -2825,   430, -2825, -2825,
   -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825,  -106,   -76,
   -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825, -1710, -2825,
   -2825, -2825, -2825, -2825, -2825,  -798, -2825, -2825, -2825, -2825,
   -2825, -2825,    74, -2825, -2825, -2825, -2825,  -160,  -810,  -548,
    -341, -2825, -2825, -2825, -2825, -2825,  -429,  -421, -2825, -2825,
   -2371, -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825,
   -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825,
   -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825,  1801, -2825,
   -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825,
   -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825,
   -2825, -2825, -2825, -2825, -2825, -2825, -2825, -2825
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1455
static const yytype_int16 yytable[] =
{
      74,   405,  1042,  1316,  2210,  1500,  1938,  2391,   118,  2393,
    1289,  1292,   824,   187,  2225,  1333,  1073,   120,   343,  2036,
   -1228,  1020,   120,  1127,    70,    71,  2284,   945,   936,  1768,
     781,  1023,  2969,  1079,   339,  1284,   707,  2250,    70,    71,
    3039,   425,   948,   366,  1492,  1493,  1494,   120,    70,    71,
    3045,  1941,   399,    70,    71,   410,   261,   265,   416,   826,
    1275,   925,   422,   348,   174,   429,   123,   175,    70,    71,
     433,   435,  1554,   760,   445,   679,   120,   452,   456,  1698,
    1596,   459,   614,   723,   460,   461,  1611,  3051,   469,  2020,
    1197,   470,   120,   303,   471,    70,    71,   368,    70,    71,
     341,   176,    70,    71,  2002,  2230,  1027,  1748,  1668,   177,
     492,   496,   501,   502,   506,   508,   356,  1334,    70,    71,
    1843,    70,    71,  1580,  1856,  1335,   545,    70,    71,  1730,
    2231,   512,  2047,  2232,    70,    71,  1294,   120,   413,  1573,
    1182,  1295,  1198,   259,   125,  2233,    70,    71,   941,   125,
      70,    71,  1757,  1320,  1902,  1903,  1904,  2021,   120,   304,
    1048,  1031,  1993,  1563,   486,    60,   521,  1184,    70,    71,
    2234,    70,    71,    83,   125,  1080,   862,   178,   349,    70,
      71,    70,    71,   305,   775,   718,   615,  2005,  2235,  1463,
     511,   487,   555,   369,    70,    71,   120,   580,  1074,  1597,
     301,  1464,   708,   125,   776,  1699,   415,  1028,   171,   370,
    1615,   724,   120,  1618,  3127,    70,    71,  3040,   120,   125,
    1296,   546,  1555,  1183,   476,   911,  3130,  3046,  1032,  1574,
    2003,  2022,   277,  2236,  1653,  1049,   179,  1128,   319,  1731,
     761,   762,   311,   128,   306,  1354,  1297,   186,   128,  1612,
    1185,  2278,   129,   130,  1191,   713,   131,   129,   130,   320,
    1285,   321,  1758,   581,   125,   589,   350,   594,   598,   180,
      72,   181,   725,   128,   937,   926,  2009,   351,   634,   914,
     827,   360,   129,   130,   680,   125,   757,  1556,   828,   829,
     852,  2197,   644,  1199,   932,   677,   777,  2199,   120,   620,
     182,  1566,   128,  2202,   788,   789,   863,   371,   441,   327,
     120,   129,   130,  1942,  1557,  1693,   262,   266,   128,  1298,
     833,   709,   835,   125,  1355,   372,  1129,   129,   130,   830,
    3041,   426,   838,   841,   782,   844,   848,  1192,   850,   125,
    3047,  1276,   263,   267,   329,   125,   353, -1228,   860,   451,
     763,   364,   946,   133,    70,    71,  1336,  1286,   133,   344,
    1349,   870,   872,   128,   927,   917,  1081,   949,   624,  1075,
     345,  2285,   129,   130,  1769,   183,  1324,  2970,  3122,  1200,
     710,  2048,    73,   133,   128,   924,  1749,   398,   931,   933,
    1201,   935,  1700,   129,   130,   939,   940,   322,   663,  2037,
     719,   846,   409,   163,   942,  1560,   954,   956,   163,  1694,
     164,   165,   133,   957,  1994,   164,   165,  2004,   960,   962,
    1153,   714,   128,  1356,  1740,   125,   963,  1202,   133,  1732,
     965,   129,   130,   163,   307,  2260,  1299,   125,   128,  2006,
     164,   165,  1761,   442,   128,  1321,   831,   129,   130,   975,
     976,   659,  1759,   129,   130,   421,   980,   981,   982,   983,
     984,   985,   163,   987,   323,   373,   989,   990,   365,   164,
     165,  2265,  2557,   133,  1962,  1695,  1322,  2237,   163,  1997,
     477,   943,  1966,   308,  2379,   164,   165,   443,   444,  1005,
    1802,   920,  1257,  1006,   133,  1325,   173,   185,  1011,  1012,
    1013,  1014,  1015,  1016,   260,  1017,  1357,   496,  1021,  1022,
     313,  2583,   309,  3123,   767,   324,   645,   496,  1024,  1258,
     346,  1330,  1814,   163,   128,   325,   664,  1035,  2010,  1479,
     164,   165,   133,   129,   130,  1412,   128,    70,    71,   646,
     715,   361,   414,  2198,   163,   129,   130,   189,   133,  2200,
    1326,   164,   165,  1434,   133,  2203,   647,   553,  3124,   621,
     447,  1696,  1157,  1158,   548,   190,  1381,   362,  1359,   637,
     549,  2164,  1019,  1998,  1069,  1496,   113,  1056,  1057,    70,
      71,  1264,   163,  1737,   357,   622,    70,    71,   907,   164,
     165,   355,   638,  1278,   314,  1065,  1264,   114,   163,  2165,
    2194,  1327,   853,  1738,   163,   164,   165,    70,    71,   639,
    2325,   164,   165,  1697,  1159,   921,   436,   550,  1088,  1097,
    1098,   897,   382,  2223,   966,  1138,  1003,  1265,   625,  1968,
     123,  1091,   600,  1382,   133,  1099,   375,   768,  1036,  1999,
    1376,   854,  1265,   123,  1592,   551,   133,  1360,   601,   358,
     665,    61,   902,  1378,   626,   115,   523,   524,   525,   526,
     527,   528,   529,   530,   531,   532,  1291,  1070,  1264,  1259,
     908,  1711,  1279,   602,  1133,   648,  1593,  2142,  1383,  1100,
    2145,   769,   770,   666,   163,   123,  1101,  1727,   898,   376,
    1004,   164,   165,   603,   922,   967,   163,    62,  1328,   552,
     377,   855,  1712,   164,   165,  1713,   448,  2166,  1714,   315,
     640,   660,   883,   604,  1265,  1102,  1188,   605,    63,   903,
    2891,  1118,  1152,  1377,   316,  2000,  1317,   771,  1037,   407,
    2023,   489,  1155,   378,  1260,  1207,  1379,   661,  1715,  1103,
    3164,  2034,   649,   553,   554,   412,  1361,  1435,    64,   606,
     607,  1170,   449,  1089,   116,  1386,  1039,  1390,  1104,  1171,
    1172,  1261,    70,    71,  2011,  1160,  1161,   418,  2167,  1716,
      65,  1280,  1717,   758,    66,  1105,   968,  2001,   462,   885,
     419,  1728,  1106,  1266,   909,  1206,  2174,   786,   787,    67,
    1107,   772,  3187,   650,  1770,  1820,   490,   317,  1266,  1771,
    1267,  1268,  1040,   651,  1287,  1318,  1821,  1300,   420,  2175,
    1288,  1173,   608,  1568,  1384,  1267,  1268,  1392,   773,   843,
     131,  2176,  1387,   609,  1772,  1773,   856,  1774,  1775,  1362,
    1340,   437,   330,   131,  2177,  1341,  1342,  1343,  1344,  1776,
    1391,  1345,  1397,  1347,   453,  1348,   496,  1350,  2178,  2179,
     424,  1162,  1108,  1777,  1778,   458,   641,  1826,  2012,  1844,
     237,  1779,  1163,  1164,  1780,   117,   912,   915,   918,   899,
    1266,   928,   642,    70,    71,   131,  1109,   238,   431,   969,
     468,  1110,  1781,  1111,  1393,   970,  1425,  1267,  1268,   480,
     438,  1782,  1783,   610,   611,  1784,    70,    71,   439,  1165,
     904,  1269,  1270,  1848,  1319,  1517,  1518,  1519,  1750,  1398,
    1718,  1112,  1113,   964,  2404,   479,  1269,  1270,   269,  1729,
    1114,   379,  1411,   482,  1415,  1852,  1845,  1785,  2013,  1416,
    1417,  1637,  1418,  1419,  1421,  1423,  1424,  1520,  1521,  1638,
    1639,  1522,  1115,   484,  2394,  1719,   463,   464,  1523,   270,
    1437,  1438,  1524,  2282,   509,   454,  1525,  1442,  1443,   693,
     893,   689,  1174,  1175,  2030,  1445,  1526,  1527,  1786,   522,
    1849,   612,  1446,    93,  1528,  1548,  1720,    68,  1449,  1450,
    1451,  1452,  1453,  1742,  1455,  1529,  1457,  1459,  1269,  1270,
     331,  1640,  1853,    70,    71,   465,  2014,   533,   332,   534,
     333,  1116,  1751,  1388,  1530,  1531,  1963,   428,  1532,   690,
    1474,  1475,  1476,  2180,  1478,   496,  1480,  2307,  1481,   874,
    1858,  1458,  2089,   535,  2181,  2182,  2183,  2184,  1533,  2168,
    2090,  2091,   394,  1787,   271,    70,    71,   558,  1862,  1788,
    1484,  1866,  1486,   560,   694,   455,   591,  1549,  1176,   617,
    1870,   272,  1534,  1874,  1489,   618,   466,  1789,  2031,  1177,
    1178,   496,  1497,  2553,  1179,  1394,   619,  1499,  1790,  2639,
    2640,  2641,  2642,  2643,  2644,  2645,  2646,  2647,  1626,  1550,
     636,  1535,  2092,   632,  1512,  1635,   875,  1859,  1516,   695,
    1399,  1536,   104,  2562,  1880,   655,  1180,    94,  1743,  2452,
    1791,  1792,  1559,  1561,  1564,  1863,  1485,  1846,  1867,  1627,
    1569,   653,    95,   383,   656,  1575,  1636,  1871,  2185,  2465,
    1875,   273,  2581,   658,  1793,   384,   876,   877,  2032,  2475,
    1578,  1630,  2478,   691,   696,   668,   685,  2169,   123,  2485,
    1752,    96,  1641,  1642,  1537,    97,  1538,   669,   633,  1588,
     105,  1850,  1539,  1540,  2522, -1454,   385,  2525,  1888,  1910,
     106,  1881,   678,  1892,  1744,  2533,   395,   107,  2536,   274,
    1541,  1794,  1551,  1854,   293,  2678,  1971,  1972,   670,   684,
     275,  2114,  1542,   472,    70,    71,  1039,   706,   727,  2115,
    2116,   728,  2691,  2692,  2693,   294,  2033,  2695,  2170,  2697,
    2698,  1148,   278,  2700,  2701,  2702,   562,    98,  2704,  2705,
    1734,   729,  1543,  2709,  1544,  2711,  2712,  2016,  2714,  1156,
      70,    71,   687,   503,   628,  1889,  1545,  1733,  1643,   712,
    1893,  1552,  1040,  2093,  2094,   717,   878,  1546,   473,  1644,
    1645,  2117,   386,   721,  1646,   563,   279,   730,  1760,   280,
     722,    99,  2648,   731,   564,   726,  2024,  1973,  1767,   108,
     100,   101,  1094,   396,   671,  1095,  1096,   879,  1860,   281,
     755,  1547,    70,    71,   756,  1797,  1647,  1798,  3086,  1702,
    2630,   474,  1799,  1800,  1801,   120,  1864,   387,   282,  1868,
     759,   295,  1807,   765,  1303,  1808,   779,  1810,  1872,  1331,
     121,  1876,   504,  2025,   784,   283,   732,   296,   785,   672,
    1703,   284,   109,  1704,  1812,   629,  1813,   997,   998,  2095,
     790,    70,    71,   122,  1817,  1818,  2787,   825,   131,  2790,
    2096,  2097,  1926,   837,  2794,  2098,    70,    71,  2795,  1824,
    1825,   123,  1882,   496,  1827,  1828,  1705,  1658,   297,   110,
     513,  1830,   630,  1831,   432,  1735,  1833,  2810,  1834,   851,
     839,   858,  2017,  1736,   285,   859,   388,  2099,  1001,  1002,
    2018,  2026,  1914,  1837,  1838,   861,   389,  1706,  3080,  2677,
    1707,   865,   111,    70,    71,    70,  1420,   286,   673,   867,
     124,    84,  2118,  2119,    70,    71,  2878,  3097,   674,   390,
     873,   505,   901,  2696,  1905,   298,  1890,   391,  1413,  1906,
     881,  1894,   125,  1907,   906,  1908,  1909,    70,    71,  2158,
    1912,  2060,  2061,   299,  2080,  2081,   392,  1659,   930,    85,
     514,    70,    71,   868,  1665,  1666,  1918,  2027,  1921,   840,
    1923,  1924,  1925,  1927,   938,   733,  1929,  1930,   675,  1932,
    1933,   951,  1935,  2892,  1937,   515,   516,  1459,   126,    70,
      71,    70,    71,   958,   517,  1428,  1429,   961,   959,  1441,
    1950,  1431,  1432,  2062,   734,   735,  2082,  1956,  2120,  1466,
     973,  1957,  1958,  1959,    70,  1511,  2903,   736,   518,  2121,
    2122,   737,   496,  1964,  2123,   977,  1967,   974,   519,  2830,
     978,   127,  1920,   287,  1977,  2846,  1978,   979,    86,  1980,
    2851,   128,   869,  1805,  1806,  1660,  1661,   953,  1708,   986,
     129,   130,   988,  1839,  1840,   999,  2124,   991,  2738,   992,
    1662,   131,   288,   289,  2100,  2101,   132,  2747,  1008,  1009,
    2489,  2490,   993,  2498,  2499,   290,  2756,  3180,   994,   291,
      70,    71,  2161,  1709,  3184,  1841,  2038,   995,  2039,    87,
      88,  2040,  2041,  1969,  2042,   996,  2043,   493,  2956,  1025,
    2816,  1026,  2045,    70,    71,   495,  2046,  1663,   493,   494,
     495,  1989,    70,    71,  2220,  2052,  2102,  1030,  2964,  2216,
    2217,  1034,  2491,  3003,  3004,  2500,  2971,  1604,  1605,  2974,
    2975,    70,    71,  2163,  1665,  1666,  1043,    89,    90,  1045,
    1051,  1047,  3221,  2868,  3222,    70,    71,  2193,  1665,  1666,
    2872,   133,  1053,  1982,  2063,  2064,  1054,  2083,  2084,    70,
      71,  2222,  1665,  1666,  1067,  1086,  1072,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,  2159,  2160,  2162,    91,
    1077,   163,  1083,  2125,  1084,  1087,  1092,  1121,   164,   165,
    1119,  2126,  2127,  1120,  2507,  2508,  1123,  1125,  2172,  1134,
    2902,  1131,  2904,  2188,  2905,  1136,  1140,  2906,  1145,  2907,
    1146,    76,  1147,  1983,  1149,  1150,  1151,    77,  1154,  1169,
    2065,  1166,  1167,  2085,  1168,  1181,  1193,  1195,  1196,  2219,
    2221,  2066,  2067,  1203,  2086,  2087,  1204,  1205,  1274,  2984,
    2228,  2157,  1256,  2128,  3065,  2241,  2509,  2103,  2104,  1263,
    1764,  1272,  2247,  2492,  2493,  2997,  2501,  2502,  1282,  1337,
    3002,  1283,  1338,  2588,    78,  3076,  1339,  2253,  2068,    70,
      71,  2088,  1351,  2256,  1353,  1365,  1364,  2258,  1366,  2261,
    2262,  1367,  2264,  2266,  2267,   121,  2270,   340,  1371,  2273,
    2274,  2275,    79,  2277,  2279,  2280,  2281,  2283,  2286,  2288,
    2289,  1984,  1985,  1368,  2291,  2292,  2293,  2294,  1811,  1369,
    1370,  1372,  1373,  1374,  2300,  2301,  1986,  1375,  2303,  2304,
    2305,  1396,  1819,  2633,  2308,  2309,  1401,  1402,   536,    93,
    1403,  1439,  1404,  2105,  1405,  1406,  1407,  2312,  2313,  2494,
    2314,  2315,  2503,  1408,  2106,  2107,    80,  1409,  1410,   537,
    2495,  2496,  1426,  2504,  2505,  3138,  3139,  1427,  3141,  1430,
    3143,  3144,  1433,  1987,  3146,  1440,   538,  3024,  1444,  1447,
    1448,  1454,  1502,  1456,  1461,   124,  1462,   510,  1465,   539,
    1467,  2108,  1468,  2654,  1470,  1472,  1245,  2497,  1482,  1483,
    2506,    81,  1487,  1504,  2129,  2130,  1503,  2510,  2511,  1506,
    1508,   540,  1246,  1507,  1509,   541,  1510,  1553,  1571,  1565,
    1514,  1247,  2353,  1515,  2354,  2355,  1567,  1576,  1579,  2356,
     542,  1581,  1248,  1582,  2358,  2361,  3174,  2363,  2364,  2365,
    1585,  2366,  2367,  1586,  2369,  1589,  2370,  2371,  1590,  2373,
    2374,  1591,  2376,   126,  2378,  1459,  1599,  1600,  1606,   578,
    1601,   585,   588,  2389,   593,   597,  1602,  2387,  1249,  1945,
    1946,  1607,  1608,  1609,  1610,  2392,  1616,  1617,    95,   543,
    2397,  2398,  1619,  1620,  1622,  3207,  2400,   849,  1624,  1632,
    2131,  1634,  1250,  2512,  1648,  2403,  1649,   682,  1650,  1651,
    2360,  2132,  2133,  1654,  2513,  2514,  2134,    96,  1655,  1656,
    1669,  2390,  1670,  1671,  1692,  2980,   698,   704,  2983,  1672,
    2985,  1691,   711,  1701,  1710,  1722,   716,  1721,  1723,  1724,
    1725,   132,  2432,  1726,  1747,  1753,  2998,  2999,  2135,  1741,
    1745,  2515,  1746,  1754,  1755,  1756,  1762,  1763,  1251,  1765,
    1766,  1796,   952,  1804,  1815,  1816,  3017,  1822,  2442,  2443,
    1823,  1829,  1832,  2445,  1836,  1835,  3179,  1857,  1878,  2447,
    1879,  1884,  1614,    98,  1885,  1886,  2417,  1887,  2015,  1896,
    1897,  1898,  1917,  1899,   834,  1900,  1901,   836,  2423,  1915,
    1916,  1928,  2428,  1252,  1922,  1931,  1990,  1934,   845,  1936,
    1939,  1940,  1944,  1949,  1951,  1952,  1953,  1965,  -531,  1970,
    1979,  1991,  1981,  1992,  2028,  2814,  2815,    99,  1996,  2818,
    2819,   866,  1253,  2822,  2823,  2019,   100,   101,  2007,  2008,
    2029,  2044,  2035,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,  2050,  2051,  2056,  2075,  2078,  2155,  2109,  1254,  2111,
    1255,  2113,  2136,  2137,  2138,  2139,  2548,  2549,  2143,  2551,
    2144,  2259,  2146,  2876,  2147,  2148,  2151,  2204,  2154,  2171,
    2187,  2192,  2195,  2196,  2201,  2173,  2206,  2205,  2207,  2208,
    2190,  2191,  2209,  2211,  2212,  2213,  2218,  2239,  2214,  2229,
    2244,  2215,  2563,  2564,  2565,  2566,  2567,  2568,  2569,  2570,
    2571,  2255,  2257,  2263,  2268,  1055,  2297,  2298,  2299,  2224,
    3112,  1304,  1060,  2271,  2272,  1061,  2577,  2310,  2579,  1305,
    1062,  2276,  2243,  2311,  1064,  2316,  1000,  1306,  2290,  2317,
    2318,  2248,  2249,  2319,  2320,  2321,  2441,  2322,  2587,   496,
    1010,  2323,  2324,  2254,  2591,  1307,  2326,  2327,  2328,  1018,
    2329,  2330,  1308,  2331,  2334,  2594,  2595,  2596,  2597,  2598,
    2599,  2600,  2601,  2602,  2603,  2332,  2333,  2606,  2607,  2608,
    2609,  2610,  2611,  2612,  2613,  2335,  2615,  2616,  2617,  1309,
    2619,  2620,  2336,  2623,  2986,  2624,  2625,  2626,  2337,  2340,
    1310,  2338,  2339,  2341,  2342,  2469,  2343,  2344,  2345,   496,
    2634,  2346,  2349,  3112,  2347,  2348,  3006,  2350,  2351,  1139,
    3010,  2352,  2516,  2368,  2372,  2380,  3015,  2375,  2377,  2381,
    2382,  2384,  2386,  1058,  1059,  2968,  2399,  2527,  2405,  2406,
    2973,  2407,  2408,  2409,  2444,  1311,  1063,  2446,  2449,  2450,
    2451,  1066,  2453,  1312,  2454,  2614,  2455,  2458,  2618,  2460,
    1078,  2649,  2461,  2650,  2462,  2651,  2466,  2653,  2467,   496,
    2655,  2468,  2656,  2470,  2471,  2472,  2476,  2660,  2661,  2477,
    2662,  2663,  3012,  2665,  2479,  2667,  2480,  2481,  2482,  2486,
    2487,  2657,  2488,  2517,  2518,  2519,  2523,  2524,  2675,  2526,
    2676,  2528,  2529,  2530,  2679,  2534,  1313,  2681,  2535,  2988,
    2537,  2539,  2540,  2542,  2543,    70,    71,  2989,  2545,  1314,
    2552,  2554,  2558,  2561,  2572,  2573,  2863,  2574,  2575,  2576,
    2627,   121,  2580,  2622,  2628, -1246,  2631,  1315,  2632,  2635,
    2638,  3078,  3079,  2658,  2659,  3082,  2664,  3084,  2666,  2668,
    1141,  1142,  1143,  1144,  2721,  2669,  2670,  2672,  2673,  2717,
    3095,  3096,  2680,  2684,  2685,  2686,  3101,  3102,  2687,  3103,
    2688,  2720,   123,  3106,  2722,  2725,  2683,  2728,  3107,  3108,
    2729,  2731,  1346,  2733,  2734,  2735,  2739,  2740,  2748,  1352,
    2741,  2742,  2743,  2744,  2069,  2749,  2838,  2750,  2751,  2752,
    2786,  2753,  2757,  2758,  2990,  2759,  2079,  2766,  2769,  2777,
    2780,  2783,  2784,  2785,  2788,  2793,  2797,  2813,  2719,  2854,
    2858,   124,  2874,  2991,  2880,  2992,  2881,  2882,  2140,  2141,
    2883,  2886,  2888,  2889,  2890,  2993,  2893,  2895,  2897,  3148,
    2896,  2898,  3149,  2900,  2909,  2911,  2916,  3152,  2923,  2932,
    2941,  2947,  2951,  2957,  2965,  2978,  3025,  2994,  2791,  3156,
    3014,  1302,  3159,  2996,  3026,  3028,  3160,  3029,  3030,  3031,
    2798,  2799,  2800,  2801,  2802,  2803,  2804,  2805,  2806,  2807,
    2808,  3170,  3172,  3032,  3033,   883,  2811,  3034,  3035,   126,
    3036,   496,   496,  3038,  3050,   496,   496,  3044,  3074,   496,
     496,  2824,  2825,  2826,  2827,  2828,  2829,  3077,  2831,  2832,
    2833,  3083,  3165,  3087,  2847,  2848,  2849,  2850,  3088,  2852,
    2853,  3089,  2855,  2856,  2857,  3090,  2859,  2860,  3091,  2862,
    3092,  3094,  2866,  2867,  3099,  1007,  3100,  1469,  3116,   972,
    3117,  3118,  3202,  3119,  3120,  3121,  3205,  1473,   884,  3128,
    3131,  3142,   885,  3150,  3195,  3153,  2875,  3154,  3157,   496,
    2877,  3167,   131,  3168,  2879,  2556,  3216,   132,  3175,  2884,
    2885,  3178,  2887,  3182,  3189,  3190,  3196,  3204,  3126,  3208,
    3223,  3209,  3211,  3224,  3225,  3215,  3217,  3109,  3218,  3219,
    3220,  2995,   886,   887,  3166,  1490,  1491,   888,  3162,  1380,
    1495,     0,     0,  1498,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1505,  2582,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2912,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   889,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1471,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1477,     0,     0,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   890,     0,     0,
    2959,     0,   891,     0,  2961,     0,  1488,     0,     0,     0,
       0,     0,  1673,     0,  2962,  2963,     0,     0,     0,     0,
    2967,   496,     0,     0,     0,  2972,   496,     0,     0,   892,
       0,  2977,     0,   893,  2981,  2982,     0,     0,     0,     0,
       0,  1674,     0,     0,  1657,     0,   894,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  3000,  3001,     0,     0,
    3005,     0,  3007,  3008,  3009,     0,  3011,     0,   496,  3013,
       0,     0,     0,  3016,     0,     0,     0,  1675,  1595,     0,
       0,     0,     0,     0,     0,  1676,  3027,     0,     0,     0,
       0,  1677,     0,     0,     0,     0,     0,  1584,  3037,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1678,     0,     0,  1652,     0,     0,  3052,
      70,    71,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   121,  1679,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1680,     0,     0,   335,     0,
       0,  3064,  2457,     0,     0,     0,  3068,     0,  3070,     0,
    2463,  2464,     0,     0,  3073,     0,     0,   123,     0,     0,
    2473,  2474,     0,  1739,     0,     0,     0,     0,     0,  3081,
    2483,  2484,     0,  1681,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2520,  2521,     0,  3098,     0,
       0,     0,     0,     0,     0,  3104,  2531,  2532,     0,  3137,
       0,     0,     0,  2538,     0,     0,   124,     0,     0,     0,
       0,     0,     0,  2541,     0,     0,     0,     0,  1682,  1803,
       0,     0,     0,     0,  3125,     0,     0,     0,     0,  1809,
       0,     0,     0,     0,  1683,     0,     0,     0,     0,     0,
       0,     0,  1913,     0,     0,     0,     0,  1684,     0,     0,
       0,     0,     0,     0,     0,  3140,     0,     0,     0,     0,
    3145,     0,     0,  3147,     0,     0,     0,     0,     0,     0,
    3151,     0,     0,     0,   126,     0,     0,   596,     0,  1685,
       0,  3155,     0,     0,     0,     0,  3158,     0,  1948,     0,
       0,     0,   121,  1686,  1954,  1687,  1688,     0,     0,     0,
       0,     0,  2869,     0,     0,  1960,     0,     0,     0,     0,
       0,     0,  3169,  3171,     0,     0,     0,   336,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   123,     0,     0,  1689,     0,  3181,     0,
       0,     0,  3183,     0,     0,  3185,  1975,   131,     0,     0,
       0,  1911,   132,     0,     0,     0,  3191,  3192,  3193,  3194,
       0,   121,     0,   337,     0,     0,     0,     0,  3203,  1919,
       0,     0,  3206,     0,     0,     0,     0,     0,     0,  3210,
       0,  3212,   124,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  3177,     0,     0,     0,     0,
    1947,     0,     0,     0,     0,     0,     0,     0,  1955,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1961,
       0,     0,     0,     0,     0,     0,     0,     0,  3198,     0,
       0,  3201,     0,     0,   338,     0,  1976,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1988,     0,
     126,   124,     0,  1995,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,     0,     0,     0,     0,  2053,  2054,  2055,     0,
       0,     0,     0,     0,     0,     0,  2057,  2058,  2059,     0,
       0,     0,     0,     0,     0,  2070,  2071,  2072,     0,     0,
    2073,  2074,     0,  2076,  2077,     0,     0,     0,     0,   126,
       0,     0,     0,   131,     0,  2724,     0,     0,   132,     0,
       0,     0,     0,     0,     0,  2726,  2727,     0,     0,     0,
    3018,     0,     0,     0,  3023,     0,  2730,  2149,  2150,     0,
       0,  2152,  2153,     0,     0,  2732,  2242,     0,     0,  2736,
    2737,     0,     0,     0,     0,     0,     0,     0,  2745,  2746,
       0,     0,     0,     0,     0,     0,     0,  2754,  2755,     0,
       0,     0,     0,  2760,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2770,  2771,     0,     0,   132,  2156,     0,
       0,     0,     0,     0,  2781,     0,  2782,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2296,     0,     0,     0,     0,     0,  2302,  2189,     0,     0,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,     0,  2226,
       0,     0,  2227,     0,     0,     0,     0,  2240,  3093,     0,
       0,     0,     0,  2245,  2246,     0,     0,     0,     0,     0,
       0,     0,  2251,     0,     0,     0,     0,     0,     0,  2252,
       0,     0,     0,     0,     0,     0,  3115,     0,     0,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,     0,     0,     0,
       0,  2357,  2295,     0,     0,     0,  2362,     0,     0,     0,
       0,     0,     0,     0,  2306,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2385,     0,     0,     0,     0,     0,
       0,     0,  2388,     0,     0,     0,     0,     0,  2395,     0,
       0,     0,  2834,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2914,     0,  2835,  2915,     0,     0,  2917,     0,
       0,     0,     0,     0,     0,  2412,     0,     0,  2926,     0,
       0,     0,  2419,     0,     0,     0,     0,  2935,     0,     0,
       0,     0,  1304,  2836,     0,     0,  2944,     0,   240,     0,
    1305,     0,     0,  2946,     0,     0,     0,  3188,  1306,     0,
       0,     0,     0,     0,  2950,     0,     0,  2359,     0,     0,
    2953,     0,   241,     0,     0,   242,  1307,     0,     0,     0,
       0,     0,     0,  1308,     0,     0,  2837,     0,     0,     0,
       0,     0,     0,     0,  2383,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1309,     0,  2396,   243,     0,     0,     0,     0,     0,     0,
     244,  1310,     0,     0,     0,  2401,     0,  2402,     0,     0,
       0,   245,   246,     0,     0,     0,     0,  2411,   247,     0,
    2413,  2414,  2415,  2416,  2418,     0,  2420,     0,     0,     0,
    2421,     0,     0,     0,     0,  2422,  2424,  2425,  2426,  2427,
    2429,   121,     0,  2430,  2431,     0,  1311,   248,     0,  2433,
    2434,  2435,  2436,  2448,  1312,  2437,  2438,     0,     0,     0,
       0,     0,  2439,  2440,     0,     0,  2456,   249,     0,     0,
       0,     0,     0,  2546,     0,     0,  2459,     0,     0,     0,
       0,     0,   123,  3053,     0,   250,   251,     0,     0,     0,
    3054,     0,   252,     0,     0,     0,     0,     0,     0,  3056,
       0,     0,     0,     0,     0,     0,  2560,  1313,  3058,     0,
       0,     0,     0,     0,  3061,     0,     0,   253,  3063,     0,
    1314,     0,     0,     0,     0,     0,     0,   738,   739,   740,
       0,   124,     0,     0,     0,     0,     0,     0,  1315,     0,
       0,     0,     0,  2584,  2585,     0,     0,     0,  2544,     0,
    2838,     0,  2839,     0,   741,     0,     0,  2586,     0,   791,
     792,     0,  2589,  2590,   254,     0,     0,   742,  2592,  2593,
       0,     0,     0,     0,     0,   793,     0,     0,     0,     0,
       0,     0,     0,   743,     0,     0,     0,     0,  2547,     0,
       0,  2550,     0,     0,     0,     0,     0,     0,     0,   126,
       0,     0,  2555,     0,     0,     0,     0,     0,     0,  2840,
       0,     0,  2629,     0,     0,     0,     0,   744,  2559,   794,
     255,     0,     0,  2636,     0,     0,   795,   745,     0,     0,
       0,     0,     0,     0,   256,   796,     0,   797,     0,     0,
       0,     0,   798,     0,     0,   799,     0,     0,     0,   746,
    2578,   800,     0,     0,     0,   801,     0,     0,   747,     0,
       0,     0,   802,     0,     0,     0,   257,     0,     0,     0,
     803,     0,   131,     0,     0,     0,  2652,   132,   748,   804,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   805,     0,
    2671,     0,     0,     0,   749,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2621,     0,     0,     0,     0,     0,
       0,     0,   806,   401,     0,     0,     0,     0,  2690,     0,
       0,   402,     0,  2694,     0,     0,     0,  2637,     0,  2699,
     807,     0,   587,     0,  2703,     0,   750,     0,  2706,     0,
    2708,   751,  2710,   808,   809,  2713,     0,  2715,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   752,     0,
       0,   753,     0,     0,     0,     0,     0,     0,   810,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   811,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2674,     0,     0,
       0,   812,     0,   813,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2682,     0,     0,     0,     0,     0,   814,
    2689,     0,     0,     0,   815,     0,     0,     0,     0,     0,
       0,     0,   816,     0,  2723,     0,     0,     0,     0,     0,
     817,     0,  2707,     0,     0,     0,     0,     0,     0,     0,
       0,  2716,     0,     0,     0,  2718,     0,     0,     0,     0,
       0,     0,   818,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   819,   820,     0,
     821,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2761,  2762,  2763,  2764,  2765,     0,
    2767,  2768,     0,     0,     0,  2772,  2773,  2774,  2775,  2776,
       0,  2778,  2779,     0,     0,   699,     0,   121,  2861,     0,
       0,   822,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2873,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2789,
     700,     0,  2792,     0,   403,     0,     0,   404,     0,     0,
       0,  2796,     0,     0,     0,     0,     0,     0,     0,  2894,
       0,     0,     0,     0,     0,     0,  2901,  2809,     0,     0,
    2812,     0,     0,     0,     0,     0,     0,  2817,     0,     0,
    2820,  2821,     0,     0,     0,     0,     0,   124,     0,     0,
       0,     0,     0,  2908,     0,  2910,     0,     0,     0,     0,
       0,     0,     0,   701,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2870,  2871,     0,     0,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,     0,     0,   126,     0,     0,     0,     0,
       0,     0,     0,  2954,     0,     0,     0,     0,     0,  2958,
       0,     0,     0,  2960,     0,   702,     0,  2899,     0,     0,
       0,  2913,     0,     0,     0,     0,     0,     0,     0,  2966,
    2918,  2919,  2920,  2921,  2922,     0,  2924,  2925,     0,  2927,
    2928,  2929,  2930,  2931,     0,  2933,  2934,     0,  2936,  2937,
    2938,  2939,  2940,     0,  2942,  2943,     0,  2945,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2948,  2949,     0,
       0,     0,     0,   132,     0,     0,     0,     0,  2952,     0,
     121,     0,     0,     0,     0,     0,     0,  3021,  3022,     0,
       0,     0,     0,   566,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2955,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   567,   568,     0,     0,     0,     0,   569,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   703,
       0,     0,  2976,     0,     0,     0,     0,     0,     0,     0,
     570,   571,     0,  2987,     0,     0,     0,     0,     0,     0,
     124,     0,     0,     0,     0,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,     0,  3085,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  3055,     0,     0,  3043,     0,     0,     0,
    3049,     0,  3057,     0,     0,     0,     0,     0,   126,     0,
       0,  3059,     0,  3060,     0,     0,     0,  3062,     0,     0,
       0,     0,     0,   572,     0,     0,     0,     0,   121,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   573,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  3066,  3067,     0,
    3069,     0,     0,     0,     0,  3071,  3072,     0,   574,   123,
       0,     0,  3075,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   132,   121,     0,     0,
       0,     0,  3161,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  3105,
       0,     0,     0,     0,     0,     0,  3173,     0,   124,     0,
       0,  3132,     0,  3133,     0,  3134,     0,     0,  3135,     0,
    3136,   583,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   575,     0,  3129,     0,     0,     0,     0,     0,
       0,     0,     0,   576,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  3199,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   124,     0,     0,
       0,     0,     0,     0,  3213,     0,   126,  3214,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,     0,   577,  1208,  1209,
    1210,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  3176,     0,     0,   126,     0,     0,   121,     0,
    1211,  1212,     0,     0,  1213,     0,     0,  1214,     0,   131,
       0,  3186,     0,     0,   132,  1215,     0,     0,     0,  1216,
       0,     0,     0,     0,     0,  3197,     0,     0,  3200,  1217,
    1218,     0,     0,     0,     0,     0,     0,  1219,  1220,  1583,
       0,     0,     0,     0,     0,     0,     0,     0,  1221,     0,
       0,     0,     0,     0,     0,  1222,     0,     0,     0,     0,
       0,     0,     0,  1223,     0,   121,     0,  1224,  1225,     0,
       0,  1226,     0,   132,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   124,     0,
       0,  1227,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1228,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,  1229,   121,     0,  2410,     0,   584,
       0,     0,     0,     0,     0,   124,   126,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1230,     0,     0,     0,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,     0,     0,     0,     0,  1231,     0,  1232,
       0,     0,     0,     0,     0,  1233,  1234,     0,     0,     0,
       0,     0,     0,   126,     0,     0,     0,     0,     0,     0,
       0,     0,  1235,  1236,   132,   124,     0,     0,     0,     0,
       0,     0,     0,     0,  1237,  1238,     0,     0,     0,     0,
       0,  1186,     0,     0,     0,     0,  1187,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1239,     0,  1240,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1241,     0,  1242,     0,     0,     0,     0,     0,     0,
    1243,   132,     0,   126,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,     0,     0,  1244,     0,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   132,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,     1,     0,     0,     2,     0,     0,     3,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     4,     0,     0,     0,     0,     0,     5,     6,     0,
       0,     0,     7,     8,     9,     0,     0,     0,     0,     0,
       0,     0,    10,     0,     0,     0,     0,     0,     0,    11,
       0,    12,    13,     0,     0,     0,     0,     0,     0,     0,
       0,    14,    15,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    16,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    17,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      18,     0,     0,     0,     0,     0,    19,     0,     0,     0,
      20,     0,     0,     0,    21,    22,     0,     0,     0,     0,
      23,    24,     0,     0,    25,     0,     0,     0,     0,     0,
      26,     0,     0,     0,     0,     0,    27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    28,     0,     0,
       0,    29,    30,    31,     0,     0,    32,    33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    34,
       0,     0,     0,    35,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    36,     0,    37,    38,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      39,     0,    40,     0,     0,   192,     0,     0,   193,    41,
       0,   194,     0,    42,     0,     0,     0,    43,     0,    44,
      45,     0,    46,     0,     0,     0,     0,    47,     0,     0,
       0,     0,   195,     0,     0,     0,   196,   197,   198,     0,
       0,     0,     0,    48,     0,     0,   199,     0,   200,    49,
       0,     0,     0,   201,     0,   202,   203,   204,     0,     0,
       0,     0,     0,   205,     0,   206,     0,     0,    50,    51,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    52,     0,    53,     0,     0,     0,     0,     0,
       0,    54,     0,     0,    55,    56,     0,     0,     0,     0,
     207,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     208,     0,     0,     0,     0,    57,     0,     0,     0,   209,
       0,   210,   211,    58,   212,   213,     0,     0,   214,     0,
       0,     0,   215,     0,   216,  1628,     0,     0,     0,     0,
     217,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     218,   219,     0,     0,     0,   220,     0,     0,     0,     0,
       0,     0,     0,   221,     0,     0,     0,   222,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   223,
       0,   224,     0,     0,     0,     0,     0,     0,   225,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   226,     0,   227,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   228,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   229,   230,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   231,     0,     0,     0,     0,     0,     0,
       0,   232,     0,     0,     0,     0,     0,   233,     0,   234,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,  1629,     0,
       0,     0,     0,     0,     0,     0,     0,   235
};

static const yytype_int16 yycheck[] =
{
       3,    56,   556,   813,  1714,  1072,  1460,  1957,    11,  1959,
     808,   809,   319,    16,  1728,     5,     4,     4,     5,    16,
       0,   510,     4,    18,     3,     4,     5,     4,    63,     5,
       5,   520,     5,     4,    37,    16,     5,  1751,     3,     4,
      33,    33,     4,    46,  1060,  1061,  1062,     4,     3,     4,
      33,    49,    55,     3,     4,    58,    65,    65,    61,     4,
      16,    18,    65,    77,    46,    68,    60,    49,     3,     4,
      73,    74,    31,     5,    77,    15,     4,    80,    81,    28,
     185,    84,   246,     4,    87,    88,    16,  2911,    91,   191,
      13,    94,     4,     5,    97,     3,     4,    26,     3,     4,
      37,    83,     3,     4,    28,    27,   112,     5,  1209,    91,
     113,   114,   115,   116,   117,   118,    42,   107,     3,     4,
    1367,     3,     4,  1139,  1371,   115,   130,     3,     4,    37,
      52,   134,    20,    55,     3,     4,    37,     4,     5,    16,
      94,    42,    65,    71,   131,    67,     3,     4,     4,   131,
       3,     4,    37,     5,  1401,  1402,  1403,   259,     4,    71,
     219,   219,    21,    16,     5,    71,   169,    94,     3,     4,
      92,     3,     4,   327,   131,   146,   167,   159,   192,     3,
       4,     3,     4,    95,   101,     4,   350,    21,   110,     4,
     127,    32,   195,   122,     3,     4,     4,   200,   186,   304,
     265,    16,   171,   131,   121,   154,    63,   213,    34,   138,
    1176,   132,     4,  1179,  3038,     3,     4,   210,     4,   131,
     121,   225,   181,   177,     5,    71,  3050,   210,   286,   106,
     154,   333,    15,   155,  1200,   294,   218,   232,    48,   147,
     172,   173,     5,   230,   156,    42,   147,    69,   230,   179,
     177,    60,   239,   240,    94,     5,   250,   239,   240,    69,
     241,    71,   147,   200,   131,   202,   280,   204,   205,   251,
     225,   253,   275,   230,   309,   232,    21,   291,   215,    71,
     225,    65,   239,   240,   224,   131,   289,   246,   233,   234,
     345,    21,   218,   216,   259,   232,   213,    21,     4,    65,
     282,  1111,   230,    21,   307,   308,   297,   236,   213,   325,
       4,   239,   240,   311,   273,    27,   325,   325,   230,   220,
     323,   290,   325,   131,   121,   254,   321,   239,   240,   274,
     323,   323,   335,   336,   309,   338,   339,   177,   341,   131,
     323,   297,   351,   351,    71,   131,     4,   327,   351,   225,
     282,   220,   329,   340,     3,     4,   346,   338,   340,   346,
     849,   364,   365,   230,   321,    71,   337,   329,    65,   357,
     357,   350,   239,   240,   350,   357,    16,   350,   213,   302,
     349,   269,   337,   340,   230,   388,   284,   337,   391,   392,
     313,   394,   341,   239,   240,   398,   399,   207,    21,   396,
     219,   338,   337,   390,   260,   237,   409,   410,   390,   121,
     397,   398,   340,   416,   273,   397,   398,   341,   421,   422,
     727,   171,   230,   220,  1234,   131,   429,   350,   340,   337,
     433,   239,   240,   390,   346,   259,   337,   131,   230,   273,
     397,   398,  1252,   348,   230,   297,   391,   239,   240,   452,
     453,    65,   337,   239,   240,   337,   459,   460,   461,   462,
     463,   464,   390,   466,   274,   394,   469,   470,   337,   397,
     398,   259,  2186,   340,  1490,   187,   328,   399,   390,    27,
     261,   337,  1498,   395,  1938,   397,   398,   392,   393,   492,
    1288,    12,     4,   496,   340,   135,    14,    15,   501,   502,
     503,   504,   505,   506,    22,   508,   303,   510,   511,   512,
      61,  2225,    30,   348,     5,   325,    48,   520,   521,    31,
      38,   329,  1320,   390,   230,   335,   149,    85,   273,  1018,
     397,   398,   340,   239,   240,   321,   230,     3,     4,    71,
     290,   325,    60,   273,   390,   239,   240,   162,   340,   273,
     190,   397,   398,   105,   340,   273,    88,   392,   393,   325,
      78,   273,    13,    14,   213,   180,    65,   351,    42,    48,
     219,  1672,   509,   121,     4,  1064,    42,   580,   581,     3,
       4,    68,   390,   259,     4,   351,     3,     4,    35,   397,
     398,    95,    71,    42,   145,   598,    68,    63,   390,   115,
    1701,   241,    58,   279,   390,   397,   398,     3,     4,    88,
    1857,   397,   398,   325,    65,   136,     4,   266,   148,     4,
       5,    65,     4,  1724,    31,   680,     5,   114,   325,     4,
      60,   634,    47,   132,   340,    20,    54,   128,   196,   187,
      94,    97,   114,    60,   177,   294,   340,   121,    63,    69,
     273,    11,    65,    94,   351,   121,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   138,   604,    68,   181,
     117,    22,   121,    88,   677,   207,   209,  1643,   177,    64,
    1646,   172,   173,   306,   390,    60,    71,    27,   132,   107,
      69,   397,   398,   108,   215,   102,   390,    57,   338,   348,
     118,   157,    53,   397,   398,    56,   154,   223,    59,   260,
     189,   325,    65,   128,   114,   100,   771,   132,    78,   132,
    2670,   658,   725,   177,   275,   273,    42,   218,   286,   265,
    1540,     4,   735,   151,   246,   790,   177,   351,    89,   124,
    3111,  1551,   274,   392,   393,     0,   220,   299,   108,   164,
     165,     5,   200,   283,   220,    65,   154,    94,   143,    13,
      14,   273,     3,     4,    27,   216,   217,   308,   284,   120,
     130,   220,   123,   291,   134,   160,   183,   325,     4,   132,
       5,   121,   167,   270,   231,   788,     4,   305,   306,   149,
     175,   282,  3163,   325,    22,     5,    69,   348,   270,    27,
     287,   288,   200,   335,   807,   121,    16,   810,     4,    27,
     297,    65,   227,   237,   313,   287,   288,    65,   309,   337,
     250,    39,   132,   238,    52,    53,   282,    55,    56,   303,
     833,   219,   231,   250,    52,   838,   839,   840,   841,    67,
     177,   844,    65,   846,    85,   848,   849,   850,    66,    67,
       5,   302,   237,    81,    82,     5,   335,  1346,   121,    65,
      90,    89,   313,   314,    92,   331,   384,   385,   386,   313,
     270,   389,   351,     3,     4,   250,   261,   107,   391,   286,
       4,   266,   110,   268,   132,   292,   941,   287,   288,    32,
     278,   119,   120,   308,   309,   123,     3,     4,   286,   350,
     313,   388,   389,    65,   220,    20,    21,    22,    27,   132,
     261,   296,   297,   431,  1981,     4,   388,   389,    95,   259,
     305,   339,   925,     5,   927,    65,   132,   155,   191,   932,
     933,     5,   935,   936,   937,   938,   939,    52,    53,    13,
      14,    56,   327,     5,  1960,   296,   172,   173,    63,   126,
     953,   954,    67,    60,   220,   196,    71,   960,   961,   167,
     313,    46,   216,   217,    27,     4,    81,    82,   196,     4,
     132,   386,    11,    29,    89,    71,   327,   337,   981,   982,
     983,   984,   985,   144,   987,   100,   989,   990,   388,   389,
     389,    65,   132,     3,     4,   221,   259,   128,   397,     5,
     399,   386,   121,   313,   119,   120,  1495,   137,   123,    94,
    1013,  1014,  1015,   231,  1017,  1018,  1019,  1815,  1021,    65,
      65,    31,     5,    71,   242,   243,   244,   245,   143,   115,
      13,    14,     4,   261,   211,     3,     4,   327,    65,   267,
    1043,    65,  1045,   192,   252,   286,    34,   143,   302,    71,
      65,   228,   167,    65,  1057,     5,   282,   285,   121,   313,
     314,  1064,  1065,  2164,   318,   313,    96,  1070,   296,  2316,
    2317,  2318,  2319,  2320,  2321,  2322,  2323,  2324,  1184,   175,
      15,   196,    65,     5,  1087,  1191,   132,   132,  1091,   297,
     313,   206,    32,  2194,    65,    71,   350,   153,   259,  2065,
     328,   329,  1105,  1106,  1107,   132,  1043,   313,   132,  1185,
    1113,   325,   168,    38,   266,  1118,  1192,   132,   336,  2085,
     132,   298,  2223,   326,   352,    50,   172,   173,   191,  2095,
    1133,  1186,  2098,   218,   342,    38,    79,   223,    60,  2105,
     259,   197,   216,   217,   259,   201,   261,    50,    70,  1152,
      90,   313,   267,   268,  2120,     0,    81,  2123,    65,     4,
     100,   132,    96,    65,   325,  2131,   138,   107,  2134,   346,
     285,   399,   268,   313,     5,  2396,    24,    25,    81,    71,
     357,     5,   297,   224,     3,     4,   154,     5,    48,    13,
      14,    51,  2413,  2414,  2415,    26,   259,  2418,   284,  2420,
    2421,   719,     4,  2424,  2425,  2426,   153,   263,  2429,  2430,
     155,    71,   327,  2434,   329,  2436,  2437,   155,  2439,   737,
       3,     4,    32,    42,     4,   132,   341,  1230,   302,     4,
     132,   327,   200,   216,   217,     4,   282,   352,   279,   313,
     314,    65,   167,     5,   318,   192,    48,   107,  1251,    51,
       4,   307,  2353,   113,   201,     4,   144,   105,  1261,   199,
     316,   317,   638,   235,   167,   641,   642,   313,   313,    71,
       5,   386,     3,     4,     4,  1278,   350,  1280,  2988,    22,
    2296,   322,  1285,  1286,  1287,     4,   313,   212,    90,   313,
       5,   122,  1295,     5,   812,  1298,     5,  1300,   313,   817,
      19,   313,   121,   191,     4,   107,   166,   138,     5,   212,
      53,   113,   252,    56,  1317,    95,  1319,     4,     5,   302,
       5,     3,     4,    42,  1327,  1328,  2547,     5,   250,  2550,
     313,   314,    63,     5,  2555,   318,     3,     4,  2559,  1342,
    1343,    60,   313,  1346,  1347,  1348,    89,    89,   179,   289,
      36,  1354,   132,  1356,   137,   300,  1359,  2578,  1361,     4,
      42,     4,   300,   308,   166,     4,   291,   350,     4,     5,
     308,   259,  1427,    44,    45,     4,   301,   120,  2981,  2395,
     123,     5,   322,     3,     4,     3,     4,   189,   291,     4,
     109,     4,   216,   217,     3,     4,    63,  3000,   301,   324,
     105,   220,     5,  2419,  1407,   236,   313,   332,   926,  1412,
     132,   313,   131,  1416,     4,  1418,  1419,     3,     4,     5,
    1423,    13,    14,   254,    13,    14,   351,   169,     4,    42,
     116,     3,     4,    42,     6,     7,  1439,   325,  1441,   121,
    1443,  1444,  1445,  1446,     4,   305,  1449,  1450,   351,  1452,
    1453,     4,  1455,  2674,  1457,   141,   142,  1460,   177,     3,
       4,     3,     4,     4,   150,     4,     5,    11,     5,    11,
    1473,     4,     5,    65,   334,   335,    65,  1480,   302,   997,
       4,  1484,  1485,  1486,     3,     4,  2707,   347,   174,   313,
     314,   351,  1495,  1496,   318,     4,  1499,   225,   184,  2600,
       4,   220,  1439,   305,  1507,  2606,  1509,     4,   121,  1512,
    2611,   230,   121,     4,     5,   257,   258,   137,   261,     4,
     239,   240,     4,   194,   195,     5,   350,     4,  2494,     4,
     272,   250,   334,   335,    13,    14,   255,  2503,   498,   499,
      13,    14,     4,    13,    14,   347,  2512,  3150,     4,   351,
       3,     4,     5,   296,  3157,   226,  1559,     4,  1561,   172,
     173,  1564,  1565,  1500,  1567,     4,  1569,     8,  2789,     5,
    2586,   308,  1575,     3,     4,    10,  1579,   319,     8,     9,
      10,  1518,     3,     4,     5,  1588,    65,   391,  2809,     4,
       5,   192,    65,     4,     5,    65,  2817,  1167,  1168,  2820,
    2821,     3,     4,     5,     6,     7,     4,   220,   221,     4,
     201,   322,  3215,  2629,  3217,     3,     4,     5,     6,     7,
    2636,   340,   192,    89,   216,   217,     4,   216,   217,     3,
       4,     5,     6,     7,     4,     4,   224,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,   382,   383,   384,  1669,  1670,  1671,   282,
     224,   390,     5,     5,     5,   224,     4,    71,   397,   398,
     214,    13,    14,   214,    13,    14,    71,    71,  1691,     5,
    2706,   259,  2708,  1696,  2710,   260,     5,  2713,     4,  2715,
       4,   213,     4,   169,     4,     4,   224,   219,     5,     5,
     302,    94,    94,   302,    94,    94,     5,     4,     4,  1722,
    1723,   313,   314,     5,   313,   314,     5,     4,     4,  2830,
    1733,  1668,   319,    65,  2955,  1738,    65,   216,   217,     5,
    1258,   107,  1745,   216,   217,  2846,   216,   217,     4,    16,
    2851,     5,    16,  2242,   266,  2976,     4,  1760,   350,     3,
       4,   350,     4,  1766,     4,   105,     4,  1770,     5,  1772,
    1773,     5,  1775,  1776,  1777,    19,  1779,    37,     4,  1782,
    1783,  1784,   294,  1786,  1787,  1788,  1789,  1790,  1791,  1792,
    1793,   257,   258,    94,  1797,  1798,  1799,  1800,  1316,    94,
      94,     5,     5,    94,  1807,  1808,   272,     5,  1811,  1812,
    1813,     4,  1330,  2302,  1817,  1818,     5,     5,    57,    29,
       4,    11,     5,   302,     5,     4,     4,  1830,  1831,   302,
    1833,  1834,   302,     5,   313,   314,   348,     5,     5,    78,
     313,   314,    69,   313,   314,  3066,  3067,     4,  3069,     4,
    3071,  3072,     4,   319,  3075,     5,    95,  2873,    11,     4,
       4,     4,   186,     5,     5,   109,     4,   127,     4,   108,
       4,   350,     4,  2362,     5,     4,    71,   350,     5,     5,
     350,   393,     4,     4,   216,   217,     5,   216,   217,   177,
       4,   130,    87,   177,     5,   134,     4,   319,   329,   296,
      40,    96,  1905,    40,  1907,  1908,   296,   321,     5,  1912,
     149,     4,   107,     4,  1917,  1918,  3137,  1920,  1921,  1922,
       4,  1924,  1925,     5,  1927,     5,  1929,  1930,     5,  1932,
    1933,     5,  1935,   177,  1937,  1938,     4,     4,   310,   199,
       5,   201,   202,   153,   204,   205,     5,  1950,   143,  1467,
    1468,   310,     5,     5,     5,  1958,     4,     4,   168,   198,
    1963,  1964,     5,     5,     5,  3186,  1969,   340,     5,     5,
     302,     5,   167,   302,     4,  1978,     4,   237,     5,     5,
    1917,   313,   314,     4,   313,   314,   318,   197,     5,     5,
     273,   201,   273,   273,     5,  2826,   256,   257,  2829,   115,
    2831,   273,   262,   115,     4,   273,   266,    42,   273,   115,
       5,   255,  2015,   241,     5,     4,  2847,  2848,   350,    42,
     279,   350,   241,     5,     5,   241,   241,    59,   223,     4,
       4,     4,   405,     5,     5,     5,  2867,     5,  2041,  2042,
       5,     4,   121,  2046,     4,   121,  3147,     5,     5,  2052,
       5,     4,  1175,   263,     5,     5,  1993,     4,   191,     5,
       5,     4,    11,     5,   324,     5,     4,   327,  2005,     5,
       5,     4,  2009,   268,    11,     4,   273,     5,   338,     5,
       5,     5,     5,     4,     4,     4,     4,     4,     0,     5,
       4,   273,     5,   273,     4,  2584,  2585,   307,   273,  2588,
    2589,   361,   297,  2592,  2593,   259,   316,   317,   273,   273,
     284,   224,   237,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
     384,     4,     4,     4,     4,     4,  1664,     5,   343,     5,
     345,     5,   310,     5,     5,     5,  2159,  2160,     4,  2162,
       4,   259,     5,  2652,     4,     4,     4,   354,     5,     5,
       5,     5,   273,   273,   273,  1693,     4,   354,     4,     4,
    1698,  1699,     4,     4,     4,     4,     4,     4,   354,     5,
       5,   354,  2195,  2196,  2197,  2198,  2199,  2200,  2201,  2202,
    2203,     5,     5,   259,     4,   578,     5,     4,     4,  1727,
    3020,    99,   585,   259,   259,   588,  2219,     5,  2221,   107,
     593,   259,  1740,     4,   597,     5,   486,   115,   259,     5,
       4,  1749,  1750,     5,     5,     4,   101,     5,  2241,  2242,
     500,     5,     4,  1761,  2247,   133,     5,     5,     4,   509,
       5,     5,   140,     4,     4,  2258,  2259,  2260,  2261,  2262,
    2263,  2264,  2265,  2266,  2267,     5,     5,  2270,  2271,  2272,
    2273,  2274,  2275,  2276,  2277,     5,  2279,  2280,  2281,   167,
    2283,  2284,     5,  2286,  2832,  2288,  2289,  2290,     4,     4,
     178,     5,     5,     4,     4,   310,     5,     5,     4,  2302,
    2303,     4,     4,  3113,     5,     5,  2854,     5,     5,   682,
    2858,     4,   310,     5,     4,     4,  2864,     5,     5,     4,
       4,     4,     4,   583,   584,  2814,     4,   310,     5,     5,
    2819,     5,     5,     5,     4,   223,   596,     5,     5,     5,
       5,   601,     4,   231,     4,   350,     5,     4,   350,     5,
     610,  2354,     5,  2356,     5,  2358,     4,  2360,     4,  2362,
    2363,     5,  2365,     5,     5,     5,     4,  2370,  2371,     4,
    2373,  2374,  2861,  2376,     5,  2378,     5,     5,     5,     4,
       4,    11,     5,     5,     5,     5,     4,     4,  2391,     5,
    2393,     5,     5,     5,  2397,     4,   284,  2400,     4,   400,
       5,     4,     4,     4,     4,     3,     4,   400,     5,   297,
       5,     5,     5,     5,     4,     4,   350,     5,     4,     4,
       4,    19,     5,     5,     4,   327,     5,   315,     5,     4,
       4,  2979,  2980,     5,     5,  2983,     5,  2985,     4,     4,
     700,   701,   702,   703,  2447,     4,     4,     4,     4,     4,
    2998,  2999,     5,     5,     5,     5,  3004,  3005,     5,  3007,
       5,     5,    60,  3011,     4,     4,  2403,     4,  3016,  3017,
       4,     4,   845,     5,     5,     5,     4,     4,     4,   852,
       5,     5,     5,     5,  1607,     4,   327,     5,     5,     5,
    2545,     5,     4,     4,   400,     5,  1619,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,  2445,     5,
       5,   109,     4,   400,     5,   400,     5,     4,  1641,  1642,
       4,     4,     4,     4,     4,   400,     5,     4,     4,  3077,
       5,     5,  3080,     5,     5,     4,     4,  3085,     4,     4,
       4,     4,     4,     4,     4,     4,     4,   400,  2551,  3097,
       5,   811,  3100,   400,     5,     5,  3104,     4,     4,     4,
    2563,  2564,  2565,  2566,  2567,  2568,  2569,  2570,  2571,  2572,
    2573,  3125,  3126,     4,     4,    65,  2579,     4,     4,   177,
       4,  2584,  2585,     4,     4,  2588,  2589,     5,     5,  2592,
    2593,  2594,  2595,  2596,  2597,  2598,  2599,     4,  2601,  2602,
    2603,     4,   400,     5,  2607,  2608,  2609,  2610,     4,  2612,
    2613,     5,  2615,  2616,  2617,     5,  2619,  2620,     5,  2622,
       4,     4,  2625,  2626,     4,   497,     5,  1000,     4,   437,
       5,     5,  3180,     4,     4,     4,  3184,  1010,   128,     4,
       4,     4,   132,     4,  3173,     5,  2649,     4,     4,  2652,
    2653,     5,   250,     5,  2657,  2173,  3204,   255,     4,  2662,
    2663,     4,  2665,     5,     5,     5,     5,     4,  3037,     5,
    3218,     5,     5,  3221,  3222,     4,     4,  3018,     5,     5,
       5,  2841,   172,   173,  3113,  1058,  1059,   177,  3109,   888,
    1063,    -1,    -1,  1066,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1078,  2224,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2721,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   218,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1002,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1016,    -1,    -1,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   381,   382,   383,   384,   277,    -1,    -1,
    2793,    -1,   282,    -1,  2797,    -1,  1056,    -1,    -1,    -1,
      -1,    -1,    42,    -1,  2807,  2808,    -1,    -1,    -1,    -1,
    2813,  2814,    -1,    -1,    -1,  2818,  2819,    -1,    -1,   309,
      -1,  2824,    -1,   313,  2827,  2828,    -1,    -1,    -1,    -1,
      -1,    71,    -1,    -1,  1207,    -1,   326,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2849,  2850,    -1,    -1,
    2853,    -1,  2855,  2856,  2857,    -1,  2859,    -1,  2861,  2862,
      -1,    -1,    -1,  2866,    -1,    -1,    -1,   107,  1161,    -1,
      -1,    -1,    -1,    -1,    -1,   115,  2879,    -1,    -1,    -1,
      -1,   121,    -1,    -1,    -1,    -1,    -1,  1147,  2891,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   143,    -1,    -1,  1199,    -1,    -1,  2912,
       3,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    19,   167,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   185,    -1,    -1,    41,    -1,
      -1,  2954,  2075,    -1,    -1,    -1,  2959,    -1,  2961,    -1,
    2083,  2084,    -1,    -1,  2967,    -1,    -1,    60,    -1,    -1,
    2093,  2094,    -1,  1233,    -1,    -1,    -1,    -1,    -1,  2982,
    2103,  2104,    -1,   223,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2118,  2119,    -1,  3001,    -1,
      -1,    -1,    -1,    -1,    -1,  3008,  2129,  2130,    -1,  3064,
      -1,    -1,    -1,  2136,    -1,    -1,   109,    -1,    -1,    -1,
      -1,    -1,    -1,  2146,    -1,    -1,    -1,    -1,   268,  1289,
      -1,    -1,    -1,    -1,  3037,    -1,    -1,    -1,    -1,  1299,
      -1,    -1,    -1,    -1,   284,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1425,    -1,    -1,    -1,    -1,   297,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  3068,    -1,    -1,    -1,    -1,
    3073,    -1,    -1,  3076,    -1,    -1,    -1,    -1,    -1,    -1,
    3083,    -1,    -1,    -1,   177,    -1,    -1,     4,    -1,   329,
      -1,  3094,    -1,    -1,    -1,    -1,  3099,    -1,  1471,    -1,
      -1,    -1,    19,   343,  1477,   345,   346,    -1,    -1,    -1,
      -1,    -1,  2630,    -1,    -1,  1488,    -1,    -1,    -1,    -1,
      -1,    -1,  3125,  3126,    -1,    -1,    -1,   220,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    60,    -1,    -1,   386,    -1,  3151,    -1,
      -1,    -1,  3155,    -1,    -1,  3158,     4,   250,    -1,    -1,
      -1,  1421,   255,    -1,    -1,    -1,  3169,  3170,  3171,  3172,
      -1,    19,    -1,   266,    -1,    -1,    -1,    -1,  3181,  1439,
      -1,    -1,  3185,    -1,    -1,    -1,    -1,    -1,    -1,  3192,
      -1,  3194,   109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  3142,    -1,    -1,    -1,    -1,
    1470,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1478,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1489,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  3175,    -1,
      -1,  3178,    -1,    -1,   337,    -1,  1506,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1518,    -1,
     177,   109,    -1,  1523,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,   384,    -1,    -1,    -1,    -1,  1589,  1590,  1591,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1599,  1600,  1601,    -1,
      -1,    -1,    -1,    -1,    -1,  1608,  1609,  1610,    -1,    -1,
    1613,  1614,    -1,  1616,  1617,    -1,    -1,    -1,    -1,   177,
      -1,    -1,    -1,   250,    -1,  2458,    -1,    -1,   255,    -1,
      -1,    -1,    -1,    -1,    -1,  2468,  2469,    -1,    -1,    -1,
    2868,    -1,    -1,    -1,  2872,    -1,  2479,  1650,  1651,    -1,
      -1,  1654,  1655,    -1,    -1,  2488,  1739,    -1,    -1,  2492,
    2493,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2501,  2502,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2510,  2511,    -1,
      -1,    -1,    -1,  2516,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2526,  2527,    -1,    -1,   255,  1668,    -1,
      -1,    -1,    -1,    -1,  2537,    -1,  2539,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1803,    -1,    -1,    -1,    -1,    -1,  1809,  1697,    -1,    -1,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   382,   383,   384,    -1,  1729,
      -1,    -1,  1732,    -1,    -1,    -1,    -1,  1737,  2996,    -1,
      -1,    -1,    -1,  1743,  1744,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1752,    -1,    -1,    -1,    -1,    -1,    -1,  1759,
      -1,    -1,    -1,    -1,    -1,    -1,  3024,    -1,    -1,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   381,   382,   383,   384,    -1,    -1,    -1,
      -1,  1914,  1802,    -1,    -1,    -1,  1919,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1814,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1947,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1955,    -1,    -1,    -1,    -1,    -1,  1961,    -1,
      -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2725,    -1,    71,  2728,    -1,    -1,  2731,    -1,
      -1,    -1,    -1,    -1,    -1,  1988,    -1,    -1,  2741,    -1,
      -1,    -1,  1995,    -1,    -1,    -1,    -1,  2750,    -1,    -1,
      -1,    -1,    99,   100,    -1,    -1,  2759,    -1,    19,    -1,
     107,    -1,    -1,  2766,    -1,    -1,    -1,  3165,   115,    -1,
      -1,    -1,    -1,    -1,  2777,    -1,    -1,  1917,    -1,    -1,
    2783,    -1,    43,    -1,    -1,    46,   133,    -1,    -1,    -1,
      -1,    -1,    -1,   140,    -1,    -1,   143,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1944,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     167,    -1,  1962,    84,    -1,    -1,    -1,    -1,    -1,    -1,
      91,   178,    -1,    -1,    -1,  1975,    -1,  1977,    -1,    -1,
      -1,   102,   103,    -1,    -1,    -1,    -1,  1987,   109,    -1,
    1990,  1991,  1992,  1993,  1994,    -1,  1996,    -1,    -1,    -1,
    2000,    -1,    -1,    -1,    -1,  2005,  2006,  2007,  2008,  2009,
    2010,    19,    -1,  2013,  2014,    -1,   223,   138,    -1,  2019,
    2020,  2021,  2022,  2056,   231,  2025,  2026,    -1,    -1,    -1,
      -1,    -1,  2032,  2033,    -1,    -1,  2069,   158,    -1,    -1,
      -1,    -1,    -1,  2156,    -1,    -1,  2079,    -1,    -1,    -1,
      -1,    -1,    60,  2916,    -1,   176,   177,    -1,    -1,    -1,
    2923,    -1,   183,    -1,    -1,    -1,    -1,    -1,    -1,  2932,
      -1,    -1,    -1,    -1,    -1,    -1,  2189,   284,  2941,    -1,
      -1,    -1,    -1,    -1,  2947,    -1,    -1,   208,  2951,    -1,
     297,    -1,    -1,    -1,    -1,    -1,    -1,    71,    72,    73,
      -1,   109,    -1,    -1,    -1,    -1,    -1,    -1,   315,    -1,
      -1,    -1,    -1,  2226,  2227,    -1,    -1,    -1,  2151,    -1,
     327,    -1,   329,    -1,    98,    -1,    -1,  2240,    -1,     4,
       5,    -1,  2245,  2246,   255,    -1,    -1,   111,  2251,  2252,
      -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   127,    -1,    -1,    -1,    -1,  2158,    -1,
      -1,  2161,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   177,
      -1,    -1,  2172,    -1,    -1,    -1,    -1,    -1,    -1,   386,
      -1,    -1,  2295,    -1,    -1,    -1,    -1,   161,  2188,    64,
     311,    -1,    -1,  2306,    -1,    -1,    71,   171,    -1,    -1,
      -1,    -1,    -1,    -1,   325,    80,    -1,    82,    -1,    -1,
      -1,    -1,    87,    -1,    -1,    90,    -1,    -1,    -1,   193,
    2220,    96,    -1,    -1,    -1,   100,    -1,    -1,   202,    -1,
      -1,    -1,   107,    -1,    -1,    -1,   357,    -1,    -1,    -1,
     115,    -1,   250,    -1,    -1,    -1,  2359,   255,   222,   124,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,    -1,
    2383,    -1,    -1,    -1,   248,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2284,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   167,    15,    -1,    -1,    -1,    -1,  2411,    -1,
      -1,    23,    -1,  2416,    -1,    -1,    -1,  2307,    -1,  2422,
     185,    -1,   320,    -1,  2427,    -1,   290,    -1,  2431,    -1,
    2433,   295,  2435,   198,   199,  2438,    -1,  2440,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   312,    -1,
      -1,   315,    -1,    -1,    -1,    -1,    -1,    -1,   223,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   381,   382,   383,   384,   252,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2387,    -1,    -1,
      -1,   266,    -1,   268,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2403,    -1,    -1,    -1,    -1,    -1,   284,
    2410,    -1,    -1,    -1,   289,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   297,    -1,  2457,    -1,    -1,    -1,    -1,    -1,
     305,    -1,  2432,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2441,    -1,    -1,    -1,  2445,    -1,    -1,    -1,    -1,
      -1,    -1,   327,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   342,   343,    -1,
     345,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2517,  2518,  2519,  2520,  2521,    -1,
    2523,  2524,    -1,    -1,    -1,  2528,  2529,  2530,  2531,  2532,
      -1,  2534,  2535,    -1,    -1,    17,    -1,    19,  2621,    -1,
      -1,   386,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2637,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2549,
      62,    -1,  2552,    -1,   276,    -1,    -1,   279,    -1,    -1,
      -1,  2561,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2682,
      -1,    -1,    -1,    -1,    -1,    -1,  2689,  2577,    -1,    -1,
    2580,    -1,    -1,    -1,    -1,    -1,    -1,  2587,    -1,    -1,
    2590,  2591,    -1,    -1,    -1,    -1,    -1,   109,    -1,    -1,
      -1,    -1,    -1,  2716,    -1,  2718,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2631,  2632,    -1,    -1,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   380,   381,
     382,   383,   384,    -1,    -1,   177,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2786,    -1,    -1,    -1,    -1,    -1,  2792,
      -1,    -1,    -1,  2796,    -1,   197,    -1,  2687,    -1,    -1,
      -1,  2724,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2812,
    2733,  2734,  2735,  2736,  2737,    -1,  2739,  2740,    -1,  2742,
    2743,  2744,  2745,  2746,    -1,  2748,  2749,    -1,  2751,  2752,
    2753,  2754,  2755,    -1,  2757,  2758,    -1,  2760,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2770,  2771,    -1,
      -1,    -1,    -1,   255,    -1,    -1,    -1,    -1,  2781,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,  2870,  2871,    -1,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2788,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    71,    -1,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   331,
      -1,    -1,  2822,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      99,   100,    -1,  2833,    -1,    -1,    -1,    -1,    -1,    -1,
     109,    -1,    -1,    -1,    -1,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   380,   381,
     382,   383,   384,    -1,  2987,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2926,    -1,    -1,  2896,    -1,    -1,    -1,
    2900,    -1,  2935,    -1,    -1,    -1,    -1,    -1,   177,    -1,
      -1,  2944,    -1,  2946,    -1,    -1,    -1,  2950,    -1,    -1,
      -1,    -1,    -1,   192,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   212,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2957,  2958,    -1,
    2960,    -1,    -1,    -1,    -1,  2965,  2966,    -1,   237,    60,
      -1,    -1,  2972,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   255,    19,    -1,    -1,
      -1,    -1,  3105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  3009,
      -1,    -1,    -1,    -1,    -1,    -1,  3129,    -1,   109,    -1,
      -1,  3054,    -1,  3056,    -1,  3058,    -1,    -1,  3061,    -1,
    3063,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   311,    -1,  3044,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   322,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  3176,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,    -1,
      -1,    -1,    -1,    -1,  3197,    -1,   177,  3200,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,   382,   383,   384,    -1,   386,    20,    21,
      22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  3142,    -1,    -1,   177,    -1,    -1,    19,    -1,
      52,    53,    -1,    -1,    56,    -1,    -1,    59,    -1,   250,
      -1,  3161,    -1,    -1,   255,    67,    -1,    -1,    -1,    71,
      -1,    -1,    -1,    -1,    -1,  3175,    -1,    -1,  3178,    81,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    89,    90,    60,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,
      -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   115,    -1,    19,    -1,   119,   120,    -1,
      -1,   123,    -1,   255,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,
      -1,   143,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   167,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   383,   384,   196,    19,    -1,   101,    -1,   331,
      -1,    -1,    -1,    -1,    -1,   109,   177,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   223,    -1,    -1,    -1,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   380,   381,
     382,   383,   384,    -1,    -1,    -1,    -1,   259,    -1,   261,
      -1,    -1,    -1,    -1,    -1,   267,   268,    -1,    -1,    -1,
      -1,    -1,    -1,   177,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   284,   285,   255,   109,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   296,   297,    -1,    -1,    -1,    -1,
      -1,   177,    -1,    -1,    -1,    -1,   182,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   327,    -1,   329,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   343,    -1,   345,    -1,    -1,    -1,    -1,    -1,    -1,
     352,   255,    -1,   177,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,   384,    -1,    -1,   386,    -1,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   383,   384,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   255,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
     384,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
     384,    43,    -1,    -1,    46,    -1,    -1,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    -1,    -1,    -1,    69,    70,    -1,
      -1,    -1,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    -1,    -1,    -1,    -1,    -1,    -1,    91,
      -1,    93,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   103,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     152,    -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,    -1,
     162,    -1,    -1,    -1,   166,   167,    -1,    -1,    -1,    -1,
     172,   173,    -1,    -1,   176,    -1,    -1,    -1,    -1,    -1,
     182,    -1,    -1,    -1,    -1,    -1,   188,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   199,    -1,    -1,
      -1,   203,   204,   205,    -1,    -1,   208,   209,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   221,
      -1,    -1,    -1,   225,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   247,    -1,   249,   250,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     262,    -1,   264,    -1,    -1,    43,    -1,    -1,    46,   271,
      -1,    49,    -1,   275,    -1,    -1,    -1,   279,    -1,   281,
     282,    -1,   284,    -1,    -1,    -1,    -1,   289,    -1,    -1,
      -1,    -1,    70,    -1,    -1,    -1,    74,    75,    76,    -1,
      -1,    -1,    -1,   305,    -1,    -1,    84,    -1,    86,   311,
      -1,    -1,    -1,    91,    -1,    93,    94,    95,    -1,    -1,
      -1,    -1,    -1,   101,    -1,   103,    -1,    -1,   330,   331,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   344,    -1,   346,    -1,    -1,    -1,    -1,    -1,
      -1,   353,    -1,    -1,   356,   357,    -1,    -1,    -1,    -1,
     138,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     158,    -1,    -1,    -1,    -1,   387,    -1,    -1,    -1,   167,
      -1,   169,   170,   395,   172,   173,    -1,    -1,   176,    -1,
      -1,    -1,   180,    -1,   182,   182,    -1,    -1,    -1,    -1,
     188,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     208,   209,    -1,    -1,    -1,   213,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   221,    -1,    -1,    -1,   225,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,
      -1,   249,    -1,    -1,    -1,    -1,    -1,    -1,   256,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   282,    -1,   284,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   311,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   330,   331,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   341,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   349,    -1,    -1,    -1,    -1,    -1,   355,    -1,   357,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   382,   383,   384,   385,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   395
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
     200,   461,   461,     4,   484,     4,   486,   322,   219,   294,
     488,   201,   489,   192,     4,   420,   403,   403,   413,   413,
     420,   420,   420,   413,   420,   403,   413,     4,   502,     4,
     415,   500,   224,     4,   186,   357,   501,   224,   413,     4,
     146,   337,   504,     5,     5,   474,     4,   224,   148,   283,
     406,   403,     4,   508,   508,   508,   508,     4,     5,    20,
      64,    71,   100,   124,   143,   160,   167,   175,   237,   261,
     266,   268,   296,   297,   305,   327,   386,   567,   415,   214,
     214,    71,   518,    71,   519,    71,   520,    18,   232,   321,
     516,   259,   521,   403,     5,   475,   260,   523,   414,   420,
       5,   413,   413,   413,   413,     4,     4,     4,   405,     4,
       4,   224,   403,   417,     5,   403,   405,    13,    14,    65,
     216,   217,   302,   313,   314,   350,    94,    94,    94,     5,
       5,    13,    14,    65,   216,   217,   302,   313,   314,   318,
     350,    94,    94,   177,    94,   177,   177,   182,   414,   543,
     548,    94,   177,     5,   541,     4,     4,    13,    65,   216,
     302,   313,   350,     5,     5,     4,   403,   414,    20,    21,
      22,    52,    53,    56,    59,    67,    71,    81,    82,    89,
      90,   100,   107,   115,   119,   120,   123,   143,   167,   196,
     223,   259,   261,   267,   268,   284,   285,   296,   297,   327,
     329,   343,   345,   352,   386,    71,    87,    96,   107,   143,
     167,   223,   268,   297,   343,   345,   319,     4,    31,   181,
     246,   273,   560,     5,    68,   114,   270,   287,   288,   388,
     389,   566,   107,   558,     4,    16,   297,   564,    42,   121,
     220,   565,     4,     5,    16,   241,   338,   403,   297,   566,
     574,   138,   566,   575,    37,    42,   121,   147,   220,   337,
     403,   576,   413,   405,    99,   107,   115,   133,   140,   167,
     178,   223,   231,   284,   297,   315,   579,    42,   121,   220,
       5,   297,   328,   583,    16,   135,   190,   241,   338,   584,
     329,   405,   585,     5,   107,   115,   346,    16,    16,     4,
     403,   403,   403,   403,   403,   403,   420,   403,   403,   412,
     403,     4,   420,     4,    42,   121,   220,   303,   604,    42,
     121,   220,   303,   605,     4,   105,     5,     5,    94,    94,
      94,     4,     5,     5,    94,     5,    94,   177,    94,   177,
     619,    65,   132,   177,   313,   623,    65,   132,   313,   634,
      94,   177,    65,   132,   313,   621,     4,    65,   132,   313,
     620,     5,     5,     4,     5,     5,     4,     4,     5,     5,
       5,   403,   321,   405,   434,   403,   403,   403,   403,   403,
       4,   403,   640,   403,   403,   414,    69,     4,     4,     5,
       4,     4,     5,     4,   105,   299,   421,   403,   403,    11,
       5,    11,   403,   403,    11,     4,    11,     4,     4,   403,
     403,   403,   403,   403,     4,   403,     5,   403,    31,   403,
     454,     5,     4,     4,    16,     4,   405,     4,     4,   420,
       5,   413,     4,   420,   403,   403,   403,   413,   403,   412,
     403,   403,     5,     5,   403,   415,   403,     4,   413,   403,
     420,   420,   421,   421,   421,   420,   412,   403,   420,   403,
     406,   503,   186,     5,     4,   420,   177,   177,     4,     5,
       4,     4,   403,   498,    40,    40,   403,    20,    21,    22,
      52,    53,    56,    63,    67,    71,    81,    82,    89,   100,
     119,   120,   123,   143,   167,   196,   206,   259,   261,   267,
     268,   285,   297,   327,   329,   341,   352,   386,    71,   143,
     175,   268,   327,   319,    31,   181,   246,   273,   568,   403,
     237,   403,   569,    16,   403,   296,   579,   296,   237,   403,
     570,   329,   571,    16,   106,   403,   321,   517,   403,     5,
     421,     4,     4,    60,   413,     4,     5,   534,   403,     5,
       5,     5,   177,   209,   425,   425,   185,   304,   423,     4,
       4,     5,     5,   538,   538,   538,   310,   310,     5,     5,
       5,    16,   179,   424,   424,   423,     4,     4,   423,     5,
       5,   542,     5,   549,     5,   550,   549,   550,   182,   385,
     414,   546,     5,   545,     5,   549,   550,     5,    13,    14,
      65,   216,   217,   302,   313,   314,   318,   350,     4,     4,
       5,     5,   425,   423,     4,     5,     5,   420,    89,   169,
     257,   258,   272,   319,   429,     6,     7,   403,   408,   273,
     273,   273,   115,    42,    71,   107,   115,   121,   143,   167,
     185,   223,   268,   284,   297,   329,   343,   345,   346,   386,
     559,   273,     5,    27,   121,   187,   273,   325,    28,   154,
     341,   115,    22,    53,    56,    89,   120,   123,   261,   296,
       4,    22,    53,    56,    59,    89,   120,   123,   261,   296,
     327,    42,   273,   273,   115,     5,   241,    27,   121,   259,
      37,   147,   337,   403,   155,   300,   308,   259,   279,   413,
     579,    42,   144,   259,   325,   279,   241,     5,     5,   284,
      27,   121,   259,     4,     5,     5,   241,    37,   147,   337,
     403,   579,   241,    59,   405,     4,     4,   403,     5,   350,
      22,    27,    52,    53,    55,    56,    67,    81,    82,    89,
      92,   110,   119,   120,   123,   155,   196,   261,   267,   285,
     296,   328,   329,   352,   399,   561,     4,   403,   403,   403,
     403,   403,   566,   413,     5,     4,     5,   403,   403,   413,
     403,   405,   403,   403,   566,     5,     5,   403,   403,   405,
       5,    16,     5,     5,   403,   403,   412,   403,   403,     4,
     403,   403,   121,   403,   403,   121,     4,    44,    45,   194,
     195,   226,   431,   431,    65,   132,   313,   631,    65,   132,
     313,   628,    65,   132,   313,   625,   431,     5,    65,   132,
     313,   622,    65,   132,   313,   633,    65,   132,   313,   632,
      65,   132,   313,   630,    65,   132,   313,   629,     5,     5,
      65,   132,   313,   624,     4,     5,     5,     4,    65,   132,
     313,   627,    65,   132,   313,   626,     5,     5,     4,     5,
       5,     4,   431,   431,   431,   403,   403,   403,   403,   403,
       4,   413,   403,   420,   414,     5,     5,    11,   403,   413,
     415,   403,    11,   403,   403,   403,    63,   403,     4,   403,
     403,     4,   403,   403,     5,   403,     5,   403,   454,     5,
       5,    49,   311,   462,     5,   405,   405,   413,   420,     4,
     403,     4,     4,     4,   420,   413,   403,   403,   403,   403,
     420,   413,   421,   412,   403,     4,   421,   403,     4,   415,
       5,    24,    25,   105,   422,     4,   413,   403,   403,     4,
     403,     5,    89,   169,   257,   258,   272,   319,   413,   415,
     273,   273,   273,    21,   273,   413,   273,    27,   121,   187,
     273,   325,    28,   154,   341,    21,   273,   273,   273,    21,
     273,    27,   121,   191,   259,   191,   155,   300,   308,   259,
     191,   259,   333,   579,   144,   191,   259,   325,     4,   284,
      27,   121,   191,   259,   579,   237,    16,   396,   403,   403,
     403,   403,   403,   403,   224,   403,   403,    20,   269,   526,
       4,     4,   403,   425,   425,   425,     4,   425,   425,   425,
      13,    14,    65,   216,   217,   302,   313,   314,   350,   424,
     425,   425,   425,   425,   425,     4,   425,   425,     4,   424,
      13,    14,    65,   216,   217,   302,   313,   314,   350,     5,
      13,    14,    65,   216,   217,   302,   313,   314,   318,   350,
      13,    14,    65,   216,   217,   302,   313,   314,   350,     5,
     544,     5,   547,     5,     5,    13,    14,    65,   216,   217,
     302,   313,   314,   318,   350,     5,    13,    14,    65,   216,
     217,   302,   313,   314,   318,   350,   310,     5,     5,     5,
     424,   424,   423,     4,     4,   423,     5,     4,     4,   425,
     425,     4,   425,   425,     5,   405,   413,   415,     5,   403,
     403,     5,   403,     5,   408,   115,   223,   284,   115,   223,
     284,     5,   403,   405,     4,    27,    39,    52,    66,    67,
     231,   242,   243,   244,   245,   336,   426,     5,   403,   413,
     405,   405,     5,     5,   408,   273,   273,    21,   273,    21,
     273,   273,    21,   273,   354,   354,     4,     4,     4,     4,
     559,     4,     4,     4,   354,   354,     4,     5,     4,   403,
       5,   403,     5,   408,   405,   426,   413,   413,   403,     5,
      27,    52,    55,    67,    92,   110,   155,   399,   427,     4,
     413,   403,   420,   405,     5,   413,   413,   403,   405,   405,
     426,   413,   413,   403,   405,     5,   403,     5,   403,   259,
     259,   403,   403,   259,   403,   259,   403,   403,     4,   562,
     403,   259,   259,   403,   403,   403,   259,   403,    60,   403,
     403,   403,    60,   403,     5,   350,   403,   563,   403,   403,
     259,   403,   403,   403,   403,   413,   420,     5,     4,     4,
     403,   403,   420,   403,   403,   403,   413,   566,   403,   403,
       5,     4,   403,   403,   403,   403,     5,     5,     4,     5,
       5,     4,     5,     5,     4,   431,     5,     5,     4,     5,
       5,     4,     5,     5,     4,     5,     5,     4,     5,     5,
       4,     4,     4,     5,     5,     4,     4,     5,     5,     4,
       5,     5,     4,   403,   403,   403,   403,   420,   403,   413,
     415,   403,   420,   403,   403,   403,   403,   403,     5,   403,
     403,   403,     4,   403,   403,     5,   403,     5,   403,   454,
       4,     4,     4,   413,     4,   420,     4,   403,   420,   153,
     201,   418,   403,   418,   421,   420,   413,   403,   403,     4,
     403,   413,   413,   403,   406,     5,     5,     5,     5,     5,
     101,   413,   420,   413,   413,   413,   413,   415,   413,   420,
     413,   413,   413,   415,   413,   413,   413,   413,   415,   413,
     413,   413,   403,   413,   413,   413,   413,   413,   413,   413,
     413,   101,   403,   403,     4,   403,     5,   403,   425,     5,
       5,     5,   423,     4,     4,     5,   425,   424,     4,   425,
       5,     5,     5,   424,   424,   423,     4,     4,     5,   310,
       5,     5,     5,   424,   424,   423,     4,     4,   423,     5,
       5,     5,     5,   424,   424,   423,     4,     4,     5,    13,
      14,    65,   216,   217,   302,   313,   314,   350,    13,    14,
      65,   216,   217,   302,   313,   314,   350,    13,    14,    65,
     216,   217,   302,   313,   314,   350,   310,     5,     5,     5,
     424,   424,   423,     4,     4,   423,     5,   310,     5,     5,
       5,   424,   424,   423,     4,     4,   423,     5,   424,     4,
       4,   424,     4,     4,   425,     5,   420,   413,   403,   403,
     413,   403,     5,   408,     5,   413,   405,   426,     5,   413,
     420,     5,   408,   403,   403,   403,   403,   403,   403,   403,
     403,   403,     4,     4,     5,     4,     4,   403,   413,   403,
       5,   408,   405,   426,   420,   420,   420,   403,   412,   420,
     420,   403,   420,   420,   403,   403,   403,   403,   403,   403,
     403,   403,   403,   403,   572,   580,   403,   403,   403,   403,
     403,   403,   403,   403,   350,   403,   403,   403,   350,   403,
     403,   413,     5,   403,   403,   403,   403,     4,     4,   420,
     421,     5,     5,   412,   403,     4,   420,   413,     4,   431,
     431,   431,   431,   431,   431,   431,   431,   431,   408,   403,
     403,   403,   420,   403,   412,   403,   403,    11,     5,     5,
     403,   403,   403,   403,     5,   403,     4,   403,     4,     4,
       4,   420,     4,     4,   413,   403,   403,   421,   422,   403,
       5,   403,   413,   415,     5,     5,     5,     5,     5,   413,
     420,   422,   422,   422,   420,   422,   421,   422,   422,   420,
     422,   422,   422,   420,   422,   422,   420,   413,   420,   422,
     420,   422,   422,   420,   422,   420,   413,     4,   413,   415,
       5,   403,     4,   425,   424,     4,   424,   424,     4,     4,
     424,     4,   424,     5,     5,     5,   424,   424,   423,     4,
       4,     5,     5,     5,     5,   424,   424,   423,     4,     4,
       5,     5,     5,     5,   424,   424,   423,     4,     4,     5,
     424,   425,   425,   425,   425,   425,     4,   425,   425,     4,
     424,   424,   425,   425,   425,   425,   425,     4,   425,   425,
       4,   424,   424,     4,     4,     4,   414,   422,     4,   413,
     422,   403,   413,     4,   422,   422,   413,     4,   403,   403,
     403,   403,   403,   403,   403,   403,   403,   403,   403,   413,
     422,   403,   413,     4,   412,   412,   421,   413,   412,   412,
     413,   413,   412,   412,   403,   403,   403,   403,   403,   403,
     408,   403,   403,   403,    59,    71,   100,   143,   327,   329,
     386,   577,   578,   579,   591,   592,   408,   403,   403,   403,
     403,   408,   403,   403,     5,   403,   403,   403,     5,   403,
     403,   420,   403,   350,   407,   408,   403,   403,   421,   405,
     413,   413,   421,   420,     4,   403,   412,   403,    63,   403,
       5,     5,     4,     4,   403,   403,     4,   403,     4,     4,
       4,   418,   422,     5,   420,     4,     5,     4,     5,   413,
       5,   420,   421,   422,   421,   421,   421,   421,   420,     5,
     420,     4,   403,   425,   424,   424,     4,   424,   425,   425,
     425,   425,   425,     4,   425,   425,   424,   425,   425,   425,
     425,   425,     4,   425,   425,   424,   425,   425,   425,   425,
     425,     4,   425,   425,   424,   425,   424,     4,   425,   425,
     424,     4,   425,   424,   420,   413,   422,     4,   420,   403,
     420,   403,   403,   403,   422,     4,   420,   403,   412,     5,
     350,   422,   403,   412,   422,   422,   413,   403,     4,   428,
     428,   403,   403,   428,   408,   428,   580,   413,   400,   400,
     400,   400,   400,   400,   400,   578,   400,   408,   428,   428,
     403,   403,   408,     4,     5,   403,   580,   403,   403,   403,
     580,   403,   412,   403,     5,   580,   403,   428,   405,   581,
     582,   420,   420,   405,   421,     4,     5,   403,     5,     4,
       4,     4,     4,     4,     4,     4,     4,   403,     4,    33,
     210,   323,   470,   413,     5,    33,   210,   323,   430,   413,
       4,   470,   403,   424,   424,   425,   424,   425,   424,   425,
     425,   424,   425,   424,   403,   422,   413,   413,   403,   413,
     403,   413,   413,   403,     5,   413,   422,     4,   580,   580,
     407,   403,   580,     4,   580,   420,   559,     5,     4,     5,
       5,     5,     4,   405,     4,   580,   580,   407,   403,     4,
       5,   580,   580,   580,   403,   413,   580,   580,   580,   581,
     588,   589,   579,   586,   587,   405,     4,     5,     5,     4,
       4,     4,   213,   348,   393,   403,   460,   470,     4,   413,
     470,     4,   425,   425,   425,   425,   425,   414,   422,   422,
     403,   422,     4,   422,   422,   403,   422,   403,   580,   580,
       4,   403,   580,     5,     4,   403,   580,     4,   403,   580,
     580,   420,   588,   590,   591,   400,   587,     5,     5,   403,
     461,   403,   461,   420,   422,     4,   413,   415,     4,   408,
     407,   403,     5,   403,   407,   403,   413,   591,   405,     5,
       5,   403,   403,   403,   403,   430,     5,   413,   415,   420,
     413,   415,   580,   403,     4,   580,   403,   422,     5,     5,
     403,     5,   403,   420,   420,     4,   580,     4,     5,     5,
       5,   407,   407,   580,   580,   580
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

  case 492:
#line 1289 "frame/parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 493:
#line 1290 "frame/parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 494:
#line 1291 "frame/parser.Y"
    {fr->getContourDashListCmd();;}
    break;

  case 495:
#line 1292 "frame/parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 496:
#line 1293 "frame/parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 497:
#line 1294 "frame/parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 499:
#line 1296 "frame/parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 500:
#line 1297 "frame/parser.Y"
    {fr->getContourStyleCmd();;}
    break;

  case 501:
#line 1298 "frame/parser.Y"
    {fr->getContourStyleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 502:
#line 1299 "frame/parser.Y"
    {fr->getContourAuxCmd();;}
    break;

  case 503:
#line 1300 "frame/parser.Y"
    {fr->getContourAuxStyleCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 504:
#line 1301 "frame/parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 505:
#line 1304 "frame/parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 506:
#line 1305 "frame/parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 507:
#line 1306 "frame/parser.Y"
    {fr->getContourClipScopeCmd();;}
    break;

  case 508:
#line 1309 "frame/parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 509:
#line 1310 "frame/parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 510:
#line 1314 "frame/parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 511:
#line 1316 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 512:
#line 1324 "frame/parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 513:
#line 1326 "frame/parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 514:
#line 1328 "frame/parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 515:
#line 1331 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 516:
#line 1333 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 517:
#line 1334 "frame/parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 518:
#line 1337 "frame/parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 519:
#line 1340 "frame/parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 520:
#line 1342 "frame/parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 521:
#line 1346 "frame/parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 522:
#line 1348 "frame/parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 523:
#line 1351 "frame/parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 524:
#line 1355 "frame/parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (2)].str), (Base::FileNameType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 525:
#line 1356 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 526:
#line 1358 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)), (Coord::InternalSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (Base::FileNameType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 527:
#line 1361 "frame/parser.Y"
    {fr->iisGetCmd((yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 528:
#line 1362 "frame/parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 530:
#line 1366 "frame/parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 531:
#line 1367 "frame/parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 532:
#line 1368 "frame/parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 533:
#line 1371 "frame/parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 534:
#line 1373 "frame/parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 535:
#line 1374 "frame/parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 537:
#line 1376 "frame/parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 541:
#line 1380 "frame/parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 542:
#line 1381 "frame/parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 543:
#line 1382 "frame/parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 544:
#line 1384 "frame/parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::DistFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 546:
#line 1386 "frame/parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 547:
#line 1389 "frame/parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 548:
#line 1391 "frame/parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 549:
#line 1393 "frame/parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 550:
#line 1394 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 551:
#line 1395 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 552:
#line 1396 "frame/parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 553:
#line 1399 "frame/parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 554:
#line 1400 "frame/parser.Y"
    {fr->getFitsDepthCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 555:
#line 1404 "frame/parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 556:
#line 1406 "frame/parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 557:
#line 1409 "frame/parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 558:
#line 1412 "frame/parser.Y"
    {fr->getFitsSliceCmd(2);;}
    break;

  case 559:
#line 1413 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 560:
#line 1415 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 561:
#line 1417 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((yyvsp[(3) - (4)].integer), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 562:
#line 1419 "frame/parser.Y"
    {fr->getFitsSliceToImageCmd((yyvsp[(3) - (4)].real), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 563:
#line 1422 "frame/parser.Y"
    {fr->getGridCmd();;}
    break;

  case 564:
#line 1423 "frame/parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 565:
#line 1424 "frame/parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 566:
#line 1427 "frame/parser.Y"
    {fr->getLayerCountCmd();;}
    break;

  case 567:
#line 1428 "frame/parser.Y"
    {fr->getLayerNoCmd();;}
    break;

  case 568:
#line 1429 "frame/parser.Y"
    {fr->getLayerColorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 569:
#line 1430 "frame/parser.Y"
    {fr->getLayerBlendCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 570:
#line 1431 "frame/parser.Y"
    {fr->getLayerTransparencyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 571:
#line 1432 "frame/parser.Y"
    {fr->getLayerViewCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 572:
#line 1435 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 573:
#line 1436 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 574:
#line 1437 "frame/parser.Y"
    {fr->getMaskRangeCmd();;}
    break;

  case 575:
#line 1438 "frame/parser.Y"
    {fr->getMaskSystemCmd();;}
    break;

  case 576:
#line 1439 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 577:
#line 1440 "frame/parser.Y"
    {fr->getMaskCountCmd();;}
    break;

  case 578:
#line 1441 "frame/parser.Y"
    {fr->getMaskBlendCmd();;}
    break;

  case 579:
#line 1444 "frame/parser.Y"
    {(yyval.integer) = 0;;}
    break;

  case 580:
#line 1445 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 581:
#line 1448 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 582:
#line 1451 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 583:
#line 1452 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 584:
#line 1453 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 585:
#line 1456 "frame/parser.Y"
    {fr->getMultiColorSystemCmd();;}
    break;

  case 586:
#line 1459 "frame/parser.Y"
    {fr->getHLSChannelCmd();;}
    break;

  case 587:
#line 1460 "frame/parser.Y"
    {fr->getHLSSystemCmd();;}
    break;

  case 588:
#line 1461 "frame/parser.Y"
    {fr->getHLSViewCmd();;}
    break;

  case 589:
#line 1464 "frame/parser.Y"
    {fr->getHSVChannelCmd();;}
    break;

  case 590:
#line 1465 "frame/parser.Y"
    {fr->getHSVSystemCmd();;}
    break;

  case 591:
#line 1466 "frame/parser.Y"
    {fr->getHSVViewCmd();;}
    break;

  case 592:
#line 1469 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 593:
#line 1470 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 594:
#line 1471 "frame/parser.Y"
    {fr->getSmoothRadiusMinorCmd();;}
    break;

  case 595:
#line 1472 "frame/parser.Y"
    {fr->getSmoothSigmaCmd();;}
    break;

  case 596:
#line 1473 "frame/parser.Y"
    {fr->getSmoothSigmaMinorCmd();;}
    break;

  case 597:
#line 1474 "frame/parser.Y"
    {fr->getSmoothAngleCmd();;}
    break;

  case 602:
#line 1481 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 603:
#line 1482 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 605:
#line 1484 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 606:
#line 1487 "frame/parser.Y"
    {fr->get3dShadeCmd();;}
    break;

  case 607:
#line 1488 "frame/parser.Y"
    {fr->get3dShadeAmbientCmd();;}
    break;

  case 608:
#line 1489 "frame/parser.Y"
    {fr->get3dShadeStrengthCmd();;}
    break;

  case 610:
#line 1493 "frame/parser.Y"
    {fr->get3dShadeNormalCmd();;}
    break;

  case 611:
#line 1494 "frame/parser.Y"
    {fr->get3dShadeNormalStrengthCmd();;}
    break;

  case 612:
#line 1497 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 613:
#line 1498 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 614:
#line 1501 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 615:
#line 1502 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 616:
#line 1505 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 617:
#line 1506 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 618:
#line 1509 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 619:
#line 1510 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 620:
#line 1513 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 622:
#line 1515 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 623:
#line 1518 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 624:
#line 1519 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 626:
#line 1523 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 627:
#line 1527 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 628:
#line 1530 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer),
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 629:
#line 1537 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 630:
#line 1538 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 631:
#line 1541 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 632:
#line 1542 "frame/parser.Y"
    {fr->hasBgColorCmd();;}
    break;

  case 635:
#line 1545 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 636:
#line 1546 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 637:
#line 1547 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 638:
#line 1548 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 640:
#line 1550 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 641:
#line 1551 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 642:
#line 1552 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 644:
#line 1554 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 645:
#line 1555 "frame/parser.Y"
    {fr->hasImageCmd();;}
    break;

  case 646:
#line 1556 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 647:
#line 1557 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 649:
#line 1561 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 650:
#line 1564 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 651:
#line 1565 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 652:
#line 1568 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 653:
#line 1569 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 654:
#line 1570 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 655:
#line 1571 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 656:
#line 1574 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 657:
#line 1575 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 658:
#line 1576 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 659:
#line 1577 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 660:
#line 1580 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 661:
#line 1581 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 662:
#line 1582 "frame/parser.Y"
    {fr->hasWCSEquCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 663:
#line 1583 "frame/parser.Y"
    {fr->hasWCSLinearCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 664:
#line 1584 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 665:
#line 1585 "frame/parser.Y"
    {fr->hasWCS3DCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 666:
#line 1588 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 667:
#line 1589 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 668:
#line 1590 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 671:
#line 1594 "frame/parser.Y"
    {fr->iisSetCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 672:
#line 1595 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 673:
#line 1598 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 674:
#line 1601 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 675:
#line 1602 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 676:
#line 1606 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 677:
#line 1608 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 678:
#line 1609 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 685:
#line 1621 "frame/parser.Y"
    {
	  if (!strcmp((yyvsp[(1) - (2)].str),"hips"))
	    fr->loadHiPSCmd((yyvsp[(2) - (2)].str));
	  else
	    YYERROR;
	;}
    break;

  case 686:
#line 1630 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 687:
#line 1632 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 688:
#line 1634 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 689:
#line 1635 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 690:
#line 1637 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 691:
#line 1639 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 692:
#line 1641 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 693:
#line 1643 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 694:
#line 1645 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 698:
#line 1651 "frame/parser.Y"
    {fr->loadRGBArrayCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 699:
#line 1652 "frame/parser.Y"
    {fr->loadRGBArrayCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 700:
#line 1653 "frame/parser.Y"
    {fr->loadRGBArrayCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 701:
#line 1654 "frame/parser.Y"
    {fr->loadRGBArrayCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 702:
#line 1655 "frame/parser.Y"
    {fr->loadRGBArrayCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 703:
#line 1657 "frame/parser.Y"
    {fr->loadRGBArrayCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 704:
#line 1658 "frame/parser.Y"
    {fr->loadRGBArrayCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 705:
#line 1659 "frame/parser.Y"
    {fr->loadRGBArrayCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 706:
#line 1660 "frame/parser.Y"
    {fr->loadRGBArrayCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 707:
#line 1663 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 708:
#line 1667 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 709:
#line 1669 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 710:
#line 1671 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 711:
#line 1673 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 712:
#line 1675 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 713:
#line 1677 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 714:
#line 1679 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 715:
#line 1681 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str),
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 716:
#line 1684 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 717:
#line 1686 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 718:
#line 1688 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 728:
#line 1700 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 729:
#line 1701 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 730:
#line 1702 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 731:
#line 1703 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 732:
#line 1704 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 733:
#line 1705 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 734:
#line 1707 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 735:
#line 1709 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 736:
#line 1710 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 737:
#line 1711 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 738:
#line 1712 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 739:
#line 1715 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 740:
#line 1716 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 741:
#line 1717 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 742:
#line 1718 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 743:
#line 1719 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 744:
#line 1721 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 745:
#line 1722 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 746:
#line 1723 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 747:
#line 1724 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 753:
#line 1735 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 754:
#line 1738 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 755:
#line 1741 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 756:
#line 1744 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 757:
#line 1747 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 758:
#line 1750 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 759:
#line 1753 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 760:
#line 1756 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 761:
#line 1759 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 762:
#line 1764 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 763:
#line 1767 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 764:
#line 1770 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 765:
#line 1773 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 766:
#line 1776 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 767:
#line 1779 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 768:
#line 1782 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 769:
#line 1785 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 770:
#line 1788 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 771:
#line 1791 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 772:
#line 1794 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 773:
#line 1799 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 774:
#line 1802 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 775:
#line 1805 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 776:
#line 1808 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 777:
#line 1811 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 778:
#line 1814 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer),
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 779:
#line 1817 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 780:
#line 1820 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 781:
#line 1823 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 782:
#line 1828 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 783:
#line 1830 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 784:
#line 1832 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 785:
#line 1834 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 786:
#line 1836 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 787:
#line 1838 "frame/parser.Y"
    {
	  fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str),
					   (Base::LayerType)(yyvsp[(6) - (6)].integer));
        ;}
    break;

  case 788:
#line 1843 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 789:
#line 1845 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 790:
#line 1847 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 791:
#line 1851 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 792:
#line 1854 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 793:
#line 1857 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 794:
#line 1860 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 795:
#line 1863 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 796:
#line 1866 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 797:
#line 1869 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer),
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 798:
#line 1872 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer),
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 799:
#line 1875 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 800:
#line 1878 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 801:
#line 1881 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 802:
#line 1885 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 803:
#line 1886 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 804:
#line 1887 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 805:
#line 1888 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 806:
#line 1889 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 807:
#line 1890 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 808:
#line 1892 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 809:
#line 1894 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 810:
#line 1895 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 811:
#line 1896 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 812:
#line 1897 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 813:
#line 1900 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 814:
#line 1901 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 815:
#line 1902 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 816:
#line 1903 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 817:
#line 1904 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 818:
#line 1906 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 819:
#line 1907 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 820:
#line 1908 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 821:
#line 1909 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 822:
#line 1913 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 823:
#line 1915 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 824:
#line 1916 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 825:
#line 1918 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 826:
#line 1920 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 827:
#line 1922 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 828:
#line 1925 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 829:
#line 1926 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 830:
#line 1929 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 831:
#line 1930 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 832:
#line 1931 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 833:
#line 1934 "frame/parser.Y"
    {;}
    break;

  case 834:
#line 1937 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 835:
#line 1938 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 836:
#line 1939 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 837:
#line 1940 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 838:
#line 1941 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 839:
#line 1942 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 840:
#line 1943 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 841:
#line 1947 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 843:
#line 1955 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 844:
#line 1956 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 845:
#line 1958 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 846:
#line 1960 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 847:
#line 1961 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 848:
#line 1962 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 850:
#line 1963 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 853:
#line 1966 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 854:
#line 1967 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 855:
#line 1969 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 856:
#line 1971 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 857:
#line 1973 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 858:
#line 1976 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 859:
#line 1978 "frame/parser.Y"
    {fr->regionStatsCallbackCmd((yyvsp[(4) - (4)].str));;}
    break;

  case 860:
#line 1980 "frame/parser.Y"
    {fr->regionStatsCallbackCmd(NULL);;}
    break;

  case 861:
#line 1982 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 862:
#line 1983 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 863:
#line 1985 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 864:
#line 1988 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 865:
#line 1991 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 866:
#line 1995 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 867:
#line 1998 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 868:
#line 2001 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 869:
#line 2004 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 870:
#line 2008 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 871:
#line 2012 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 872:
#line 2017 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str),
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 873:
#line 2021 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 874:
#line 2023 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 875:
#line 2024 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 876:
#line 2026 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 877:
#line 2028 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 878:
#line 2030 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 879:
#line 2032 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 880:
#line 2034 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 881:
#line 2035 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 882:
#line 2036 "frame/parser.Y"
    {fr->markerCompositeAreaCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 883:
#line 2038 "frame/parser.Y"
    {fr->markerCompositeOperationCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 884:
#line 2040 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 885:
#line 2042 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 886:
#line 2045 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 887:
#line 2049 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 888:
#line 2053 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 889:
#line 2055 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 890:
#line 2057 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 891:
#line 2059 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 892:
#line 2061 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 893:
#line 2063 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 894:
#line 2065 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 895:
#line 2067 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 896:
#line 2069 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 897:
#line 2071 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 898:
#line 2073 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 899:
#line 2075 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 900:
#line 2077 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 901:
#line 2079 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 902:
#line 2080 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 903:
#line 2082 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 904:
#line 2084 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 905:
#line 2085 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 906:
#line 2086 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 907:
#line 2088 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 908:
#line 2090 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 909:
#line 2091 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 910:
#line 2092 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 911:
#line 2093 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 912:
#line 2095 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 913:
#line 2097 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 914:
#line 2101 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 915:
#line 2104 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 916:
#line 2107 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 917:
#line 2111 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 918:
#line 2115 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 919:
#line 2120 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str),
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 920:
#line 2124 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 921:
#line 2125 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 922:
#line 2126 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 923:
#line 2128 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 924:
#line 2129 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 925:
#line 2131 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 926:
#line 2135 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 927:
#line 2136 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 928:
#line 2137 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 929:
#line 2139 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 930:
#line 2142 "frame/parser.Y"
    {fr->markerPolygonPointCmd((yyvsp[(1) - (7)].integer),(yyvsp[(7) - (7)].str),(Coord::CoordSystem)(yyvsp[(4) - (7)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),(Coord::SkyFormat)(yyvsp[(6) - (7)].integer));;}
    break;

  case 931:
#line 2145 "frame/parser.Y"
    {fr->markerPolygonPointVarCmd((yyvsp[(1) - (8)].integer),(yyvsp[(8) - (8)].str),(Coord::CoordSystem)(yyvsp[(4) - (8)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (8)].integer),(Coord::SkyFormat)(yyvsp[(6) - (8)].integer));;}
    break;

  case 932:
#line 2148 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 933:
#line 2151 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 934:
#line 2154 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 935:
#line 2155 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 936:
#line 2156 "frame/parser.Y"
    {fr->markerPointGlyphCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 937:
#line 2160 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 938:
#line 2164 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 939:
#line 2166 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 940:
#line 2167 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 941:
#line 2169 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 942:
#line 2172 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 943:
#line 2175 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 944:
#line 2176 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 945:
#line 2178 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 946:
#line 2179 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 947:
#line 2180 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 948:
#line 2182 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 949:
#line 2183 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 950:
#line 2185 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 951:
#line 2186 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 952:
#line 2189 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 953:
#line 2192 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 954:
#line 2193 "frame/parser.Y"
    {fr->markerDashListCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 955:
#line 2195 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 956:
#line 2196 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 960:
#line 2201 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 961:
#line 2202 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 962:
#line 2204 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 963:
#line 2206 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 964:
#line 2208 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 965:
#line 2209 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 969:
#line 2215 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 970:
#line 2216 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 971:
#line 2217 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 972:
#line 2218 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 973:
#line 2219 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 974:
#line 2220 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 975:
#line 2221 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 976:
#line 2222 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 977:
#line 2223 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 978:
#line 2224 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 979:
#line 2226 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 980:
#line 2228 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 981:
#line 2229 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 982:
#line 2230 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 983:
#line 2231 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 984:
#line 2232 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 985:
#line 2234 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 986:
#line 2235 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 987:
#line 2236 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 988:
#line 2237 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 989:
#line 2238 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 990:
#line 2240 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 991:
#line 2241 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 992:
#line 2242 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 993:
#line 2243 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 994:
#line 2244 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 995:
#line 2245 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 996:
#line 2246 "frame/parser.Y"
    {fr->markerDashListCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 997:
#line 2249 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 998:
#line 2250 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 999:
#line 2251 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 1000:
#line 2252 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 1001:
#line 2253 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 1002:
#line 2254 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 1003:
#line 2255 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 1004:
#line 2256 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 1005:
#line 2257 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 1006:
#line 2258 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 1007:
#line 2259 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 1008:
#line 2260 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 1009:
#line 2261 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 1010:
#line 2262 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 1011:
#line 2263 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 1012:
#line 2264 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 1013:
#line 2265 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 1014:
#line 2266 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 1015:
#line 2267 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 1016:
#line 2268 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 1017:
#line 2269 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 1018:
#line 2272 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 1019:
#line 2273 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1020:
#line 2274 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1021:
#line 2275 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1022:
#line 2276 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1023:
#line 2278 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 1024:
#line 2288 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1025:
#line 2296 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1026:
#line 2305 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1027:
#line 2313 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1028:
#line 2319 "frame/parser.Y"
    {fr->createPolygonCanvasVarCmd((yyvsp[(4) - (5)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1029:
#line 2324 "frame/parser.Y"
    {fr->createSegmentCanvasVarCmd((yyvsp[(4) - (5)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1030:
#line 2330 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1031:
#line 2337 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1032:
#line 2345 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1033:
#line 2353 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1034:
#line 2358 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1035:
#line 2363 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1036:
#line 2368 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1037:
#line 2373 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1038:
#line 2378 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1039:
#line 2383 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1040:
#line 2388 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1041:
#line 2393 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::GLYPH, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist,(yyvsp[(5) - (6)].str));;}
    break;

  case 1042:
#line 2398 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),Coord::CANVAS),
	    Point::GLYPH, (yyvsp[(5) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist,(yyvsp[(6) - (7)].str));;}
    break;

  case 1043:
#line 2407 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer),
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1044:
#line 2417 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1045:
#line 2427 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1046:
#line 2436 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1047:
#line 2444 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1048:
#line 2454 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1049:
#line 2464 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1050:
#line 2474 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1051:
#line 2486 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1052:
#line 2495 "frame/parser.Y"
    {fr->createCompositeCmd(
	    (yyvsp[(2) - (3)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1054:
#line 2503 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 1055:
#line 2505 "frame/parser.Y"
    {
	  if ((yyvsp[(1) - (1)].integer) < 0 || (yyvsp[(1) - (1)].integer) > 1) {
	    fr->error("composite operation must be 0 (union) or 1 (intersection)");
	    YYERROR;
	  }
	  (yyval.integer)=(yyvsp[(1) - (1)].integer);
	;}
    break;

  case 1056:
#line 2514 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 1057:
#line 2516 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 1058:
#line 2518 "frame/parser.Y"
    {
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 1059:
#line 2523 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 1060:
#line 2526 "frame/parser.Y"
    {fr->markerDeleteAllCmd(0);;}
    break;

  case 1061:
#line 2527 "frame/parser.Y"
    {fr->markerDeleteAllCmd(1);;}
    break;

  case 1062:
#line 2528 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerDeleteAllCmd(0);
        ;}
    break;

  case 1063:
#line 2535 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1064:
#line 2537 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1065:
#line 2538 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 1066:
#line 2541 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 1067:
#line 2542 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 1068:
#line 2543 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 1069:
#line 2544 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 1070:
#line 2545 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 1071:
#line 2546 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 1072:
#line 2547 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 1074:
#line 2551 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 1075:
#line 2552 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 1076:
#line 2553 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 1077:
#line 2554 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1078:
#line 2555 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1079:
#line 2558 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(yyvsp[(6) - (8)].str),(Coord::CoordSystem)(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 1080:
#line 2560 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 1081:
#line 2562 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 1082:
#line 2564 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 1083:
#line 2566 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 1084:
#line 2568 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1085:
#line 2570 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsDataCmd((yyvsp[(1) - (6)].integer),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1086:
#line 2572 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsDataAllCmd((Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1087:
#line 2574 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsFieldsCmd();;}
    break;

  case 1088:
#line 2576 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 1089:
#line 2577 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1090:
#line 2578 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1091:
#line 2580 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1092:
#line 2582 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1093:
#line 2585 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1094:
#line 2587 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1095:
#line 2588 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1096:
#line 2589 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1097:
#line 2591 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1098:
#line 2593 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1099:
#line 2596 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer),
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1100:
#line 2599 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1101:
#line 2600 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1102:
#line 2601 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1103:
#line 2602 "frame/parser.Y"
    {fr->getMarkerCompassEndCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1104:
#line 2603 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1105:
#line 2605 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1106:
#line 2606 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1107:
#line 2607 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1108:
#line 2608 "frame/parser.Y"
    {fr->getMarkerCompositeAreaCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1109:
#line 2609 "frame/parser.Y"
    {fr->getMarkerCompositeOperationCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1110:
#line 2610 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1111:
#line 2611 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1112:
#line 2613 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1113:
#line 2615 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1114:
#line 2617 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1115:
#line 2619 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer),
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1116:
#line 2621 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1117:
#line 2622 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1118:
#line 2624 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1119:
#line 2626 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1120:
#line 2628 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1121:
#line 2629 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1122:
#line 2630 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1123:
#line 2631 "frame/parser.Y"
    {fr->getMarkerLineEndCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1124:
#line 2633 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1125:
#line 2635 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1126:
#line 2638 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1127:
#line 2641 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1128:
#line 2642 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1129:
#line 2643 "frame/parser.Y"
    {fr->getMarkerPointGlyphCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1130:
#line 2645 "frame/parser.Y"
    {fr->getMarkerPolygonPointCmd((yyvsp[(1) - (6)].integer),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),(Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1131:
#line 2648 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1132:
#line 2651 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer),
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1133:
#line 2654 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1134:
#line 2655 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1135:
#line 2656 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1136:
#line 2657 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1137:
#line 2659 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1138:
#line 2661 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1139:
#line 2663 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1140:
#line 2664 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1141:
#line 2666 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1142:
#line 2667 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1143:
#line 2668 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1144:
#line 2669 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1145:
#line 2670 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1146:
#line 2672 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1147:
#line 2673 "frame/parser.Y"
    {fr->getMarkerVectorEndCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1148:
#line 2675 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1149:
#line 2677 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1150:
#line 2679 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1151:
#line 2680 "frame/parser.Y"
    {fr->getMarkerDashListCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1153:
#line 2682 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1154:
#line 2683 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1155:
#line 2685 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1156:
#line 2687 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1157:
#line 2688 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1158:
#line 2689 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1160:
#line 2691 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1162:
#line 2695 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1163:
#line 2696 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1164:
#line 2697 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1165:
#line 2698 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1166:
#line 2699 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1167:
#line 2700 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1168:
#line 2702 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1169:
#line 2703 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1170:
#line 2705 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1171:
#line 2706 "frame/parser.Y"
    {fr->getMarkerDashListCmd();;}
    break;

  case 1172:
#line 2709 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1173:
#line 2710 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1174:
#line 2711 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1175:
#line 2712 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1176:
#line 2715 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1177:
#line 2716 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1178:
#line 2719 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1179:
#line 2720 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1180:
#line 2723 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1181:
#line 2724 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1182:
#line 2727 "frame/parser.Y"
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

  case 1183:
#line 2740 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1184:
#line 2741 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1185:
#line 2745 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1186:
#line 2746 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1187:
#line 2750 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1188:
#line 2751 "frame/parser.Y"
    {fr->markerLayerCmd(Base::FOOTPRINT);;}
    break;

  case 1189:
#line 2756 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), 0, propQMask, propQValue, taglist);;}
    break;

  case 1190:
#line 2760 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), 1, propQMask, propQValue, taglist);;}
    break;

  case 1191:
#line 2765 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str),0,"green",Coord::PHYSICAL,Coord::ICRS);;}
    break;

  case 1192:
#line 2767 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1193:
#line 2770 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer),0,"green",Coord::PHYSICAL,Coord::ICRS);;}
    break;

  case 1194:
#line 2772 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1195:
#line 2775 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (2)].str), "green");;}
    break;

  case 1196:
#line 2777 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));;}
    break;

  case 1197:
#line 2780 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1198:
#line 2781 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1199:
#line 2782 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1200:
#line 2783 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1201:
#line 2784 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1202:
#line 2785 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1203:
#line 2787 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1206:
#line 2794 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1207:
#line 2795 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1208:
#line 2796 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1209:
#line 2797 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1210:
#line 2798 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1211:
#line 2799 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1214:
#line 2804 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1215:
#line 2805 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1216:
#line 2806 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1217:
#line 2807 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1218:
#line 2808 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1219:
#line 2809 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1220:
#line 2810 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1221:
#line 2811 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1222:
#line 2812 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1223:
#line 2813 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1224:
#line 2814 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1225:
#line 2815 "frame/parser.Y"
    {(yyval.integer) = Marker::FILL;;}
    break;

  case 1228:
#line 2822 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1229:
#line 2823 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1231:
#line 2827 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(1) - (6)].str), (Base::MarkerFormat)(yyvsp[(2) - (6)].integer), (Coord::CoordSystem)(yyvsp[(3) - (6)].integer), (Coord::SkyFrame)(yyvsp[(4) - (6)].integer), (Coord::SkyFormat)(yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].integer), 0);;}
    break;

  case 1232:
#line 2829 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer), 1);;}
    break;

  case 1233:
#line 2830 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1234:
#line 2833 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1235:
#line 2834 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1236:
#line 2835 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1237:
#line 2836 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1238:
#line 2837 "frame/parser.Y"
    {fr->markerSelectFirstCmd();;}
    break;

  case 1239:
#line 2838 "frame/parser.Y"
    {fr->markerSelectLastCmd();;}
    break;

  case 1240:
#line 2841 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1241:
#line 2842 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1244:
#line 2850 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1245:
#line 2853 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1246:
#line 2854 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1250:
#line 2861 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1251:
#line 2864 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1252:
#line 2868 "frame/parser.Y"
    {fr->layerCreateCmd();;}
    break;

  case 1253:
#line 2869 "frame/parser.Y"
    {fr->layerCreateCmd();;}
    break;

  case 1254:
#line 2870 "frame/parser.Y"
    {fr->layerNoCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1255:
#line 2871 "frame/parser.Y"
    {fr->layerNoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1256:
#line 2872 "frame/parser.Y"
    {fr->layerColorCmd(0,(yyvsp[(2) - (2)].str));;}
    break;

  case 1257:
#line 2873 "frame/parser.Y"
    {fr->layerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1258:
#line 2874 "frame/parser.Y"
    {fr->layerBlendCmd(0,(FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1259:
#line 2875 "frame/parser.Y"
    {fr->layerBlendCmd((yyvsp[(1) - (3)].integer),(FitsMask::MaskBlend)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1260:
#line 2876 "frame/parser.Y"
    {fr->layerTransparencyCmd(0,(yyvsp[(2) - (2)].real));;}
    break;

  case 1261:
#line 2877 "frame/parser.Y"
    {fr->layerTransparencyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 1262:
#line 2878 "frame/parser.Y"
    {fr->layerViewCmd(0,(yyvsp[(2) - (2)].integer));;}
    break;

  case 1263:
#line 2879 "frame/parser.Y"
    {fr->layerViewCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1264:
#line 2881 "frame/parser.Y"
    {fr->layerShowCmd(0);;}
    break;

  case 1265:
#line 2882 "frame/parser.Y"
    {fr->layerShowCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1266:
#line 2883 "frame/parser.Y"
    {fr->layerHideCmd(0);;}
    break;

  case 1267:
#line 2884 "frame/parser.Y"
    {fr->layerHideCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1268:
#line 2885 "frame/parser.Y"
    {fr->layerDeleteCmd(0);;}
    break;

  case 1269:
#line 2886 "frame/parser.Y"
    {fr->layerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1270:
#line 2887 "frame/parser.Y"
    {fr->layerUpCmd(0);;}
    break;

  case 1271:
#line 2888 "frame/parser.Y"
    {fr->layerUpCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1272:
#line 2889 "frame/parser.Y"
    {fr->layerDownCmd(0);;}
    break;

  case 1273:
#line 2890 "frame/parser.Y"
    {fr->layerDownCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1274:
#line 2891 "frame/parser.Y"
    {fr->layerTopCmd(0);;}
    break;

  case 1275:
#line 2892 "frame/parser.Y"
    {fr->layerTopCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1276:
#line 2893 "frame/parser.Y"
    {fr->layerBottomCmd(0);;}
    break;

  case 1277:
#line 2894 "frame/parser.Y"
    {fr->layerBottomCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1278:
#line 2897 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1279:
#line 2898 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1280:
#line 2899 "frame/parser.Y"
    {fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1281:
#line 2900 "frame/parser.Y"
    {fr->maskRangeCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 1282:
#line 2901 "frame/parser.Y"
    {fr->maskSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1283:
#line 2902 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1284:
#line 2903 "frame/parser.Y"
    {fr->maskBlendCmd((FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1285:
#line 2904 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1286:
#line 2910 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1287:
#line 2911 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1288:
#line 2912 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1289:
#line 2913 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1290:
#line 2917 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1291:
#line 2918 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1292:
#line 2920 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1293:
#line 2925 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1295:
#line 2927 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1297:
#line 2929 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1298:
#line 2932 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1299:
#line 2934 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1300:
#line 2939 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1301:
#line 2942 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1302:
#line 2943 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1303:
#line 2944 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1304:
#line 2947 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1305:
#line 2949 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1306:
#line 2953 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1307:
#line 2954 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1308:
#line 2958 "frame/parser.Y"
    {fr->psColorSpaceCmd((PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1309:
#line 2959 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1310:
#line 2960 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1311:
#line 2961 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 1312:
#line 2967 "frame/parser.Y"
    {fr->precCmd((yyvsp[(1) - (9)].integer),(yyvsp[(2) - (9)].integer),(yyvsp[(3) - (9)].integer),(yyvsp[(4) - (9)].integer),(yyvsp[(5) - (9)].integer),(yyvsp[(6) - (9)].integer),(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 1313:
#line 2968 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->precCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 1314:
#line 2974 "frame/parser.Y"
    {(yyval.integer) = BW;;}
    break;

  case 1315:
#line 2975 "frame/parser.Y"
    {(yyval.integer) = GRAY;;}
    break;

  case 1316:
#line 2976 "frame/parser.Y"
    {(yyval.integer) = RGB;;}
    break;

  case 1317:
#line 2977 "frame/parser.Y"
    {(yyval.integer) = CMYK;;}
    break;

  case 1320:
#line 2985 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1321:
#line 2987 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1322:
#line 2988 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1323:
#line 2989 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1324:
#line 2993 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1325:
#line 2994 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1326:
#line 2995 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1327:
#line 2996 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1328:
#line 2999 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1329:
#line 3000 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1330:
#line 3001 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::FIP;;}
    break;

  case 1331:
#line 3004 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1332:
#line 3005 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1333:
#line 3006 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1334:
#line 3009 "frame/parser.Y"
    {fr->revealCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1335:
#line 3010 "frame/parser.Y"
    {fr->revealClearCmd();;}
    break;

  case 1336:
#line 3013 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1337:
#line 3014 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1338:
#line 3015 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1339:
#line 3019 "frame/parser.Y"
    {fr->setMultiColorSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1340:
#line 3022 "frame/parser.Y"
    {fr->setHLSChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1341:
#line 3023 "frame/parser.Y"
    {fr->setHLSChannelCmd("hue");;}
    break;

  case 1342:
#line 3024 "frame/parser.Y"
    {fr->setHLSChannelCmd("saturation");;}
    break;

  case 1343:
#line 3025 "frame/parser.Y"
    {fr->setHLSSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1344:
#line 3026 "frame/parser.Y"
    {fr->setHLSViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1345:
#line 3029 "frame/parser.Y"
    {fr->setHSVChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1346:
#line 3030 "frame/parser.Y"
    {fr->setHSVChannelCmd("hue");;}
    break;

  case 1347:
#line 3031 "frame/parser.Y"
    {fr->setHSVChannelCmd("saturation");;}
    break;

  case 1348:
#line 3032 "frame/parser.Y"
    {fr->setHSVChannelCmd("value");;}
    break;

  case 1349:
#line 3033 "frame/parser.Y"
    {fr->setHSVSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1350:
#line 3034 "frame/parser.Y"
    {fr->setHSVViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1351:
#line 3037 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1352:
#line 3038 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (2)].real))));;}
    break;

  case 1354:
#line 3040 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (2)].real))));;}
    break;

  case 1355:
#line 3041 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (3)].real))));;}
    break;

  case 1356:
#line 3044 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1357:
#line 3045 "frame/parser.Y"
    {fr->rotateMotionCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1358:
#line 3046 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1364:
#line 3054 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1365:
#line 3057 "frame/parser.Y"
    {fr->savePixelMaskFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1366:
#line 3058 "frame/parser.Y"
    {fr->savePixelMaskChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1367:
#line 3059 "frame/parser.Y"
    {fr->savePixelMaskSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1368:
#line 3063 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1369:
#line 3065 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1370:
#line 3067 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1387:
#line 3088 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1388:
#line 3089 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1389:
#line 3090 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1390:
#line 3093 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1391:
#line 3094 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1392:
#line 3095 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1393:
#line 3098 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1394:
#line 3099 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1395:
#line 3100 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1396:
#line 3103 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1397:
#line 3104 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1398:
#line 3105 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1400:
#line 3109 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1401:
#line 3110 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1402:
#line 3111 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1403:
#line 3114 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1404:
#line 3115 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1405:
#line 3116 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1406:
#line 3120 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1407:
#line 3122 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1408:
#line 3124 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1409:
#line 3127 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1410:
#line 3128 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1411:
#line 3129 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1412:
#line 3132 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1413:
#line 3133 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1414:
#line 3134 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1415:
#line 3138 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1416:
#line 3140 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1417:
#line 3142 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1418:
#line 3145 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1419:
#line 3146 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1420:
#line 3147 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1421:
#line 3150 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1422:
#line 3151 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1423:
#line 3152 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1424:
#line 3156 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1425:
#line 3158 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1426:
#line 3160 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1427:
#line 3163 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1428:
#line 3164 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1429:
#line 3165 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1430:
#line 3168 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1431:
#line 3169 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1432:
#line 3170 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1433:
#line 3173 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1434:
#line 3174 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1435:
#line 3175 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1436:
#line 3179 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1437:
#line 3181 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1438:
#line 3183 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1439:
#line 3187 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1440:
#line 3191 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1441:
#line 3193 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1442:
#line 3197 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1443:
#line 3200 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1444:
#line 3201 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1445:
#line 3202 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1446:
#line 3203 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1447:
#line 3206 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1448:
#line 3208 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1449:
#line 3210 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1450:
#line 3213 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 1452:
#line 3215 "frame/parser.Y"
    {fr->updateFitsCenterCmd();;}
    break;

  case 1453:
#line 3217 "frame/parser.Y"
    {fr->updateFitsCenterCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1454:
#line 3220 "frame/parser.Y"
    {fr->sliceCmd(2,(yyvsp[(1) - (1)].integer));;}
    break;

  case 1455:
#line 3221 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1456:
#line 3222 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1457:
#line 3225 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1458:
#line 3226 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1459:
#line 3230 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1461:
#line 3232 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1464:
#line 3237 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1465:
#line 3238 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1466:
#line 3239 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1467:
#line 3242 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1468:
#line 3243 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1469:
#line 3244 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1470:
#line 3247 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1471:
#line 3249 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1472:
#line 3254 "frame/parser.Y"
    {fr->wcsAlign2Cmd((yyvsp[(2) - (4)].integer), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1473:
#line 3255 "frame/parser.Y"
    {fr->wcsAlignPointerClearCmd();;}
    break;

  case 1474:
#line 3258 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1475:
#line 3265 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1476:
#line 3267 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1477:
#line 3269 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1478:
#line 3274 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1480:
#line 3278 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1481:
#line 3279 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1482:
#line 3280 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1483:
#line 3282 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1484:
#line 3284 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1485:
#line 3289 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 12388 "frame/parser.C"
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


#line 3293 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

