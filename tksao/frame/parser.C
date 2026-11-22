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
     TIFF_ = 586,
     THREED_ = 587,
     THRESHOLD_ = 588,
     THICK_ = 589,
     TOP_ = 590,
     TRANSPARENCY_ = 591,
     TRIANGLE_ = 592,
     TO_ = 593,
     TOGGLE_ = 594,
     TOPHAT_ = 595,
     TRUE_ = 596,
     TYPE_ = 597,
     UNDO_ = 598,
     UNHIGHLITE_ = 599,
     UNLOAD_ = 600,
     UNSELECT_ = 601,
     UPDATE_ = 602,
     UP_ = 603,
     USER_ = 604,
     VALUE_ = 605,
     VAR_ = 606,
     VIEW_ = 607,
     VECTOR_ = 608,
     VERSION_ = 609,
     VERTEX_ = 610,
     VERTICAL_ = 611,
     WARP_ = 612,
     WCS_ = 613,
     WCSA_ = 614,
     WCSB_ = 615,
     WCSC_ = 616,
     WCSD_ = 617,
     WCSE_ = 618,
     WCSF_ = 619,
     WCSG_ = 620,
     WCSH_ = 621,
     WCSI_ = 622,
     WCSJ_ = 623,
     WCSK_ = 624,
     WCSL_ = 625,
     WCSM_ = 626,
     WCSN_ = 627,
     WCSO_ = 628,
     WCSP_ = 629,
     WCSQ_ = 630,
     WCSR_ = 631,
     WCSS_ = 632,
     WCST_ = 633,
     WCSU_ = 634,
     WCSV_ = 635,
     WCSW_ = 636,
     WCSX_ = 637,
     WCSY_ = 638,
     WCSZ_ = 639,
     WCS0_ = 640,
     WFPC2_ = 641,
     WIDTH_ = 642,
     WIN32_ = 643,
     XML_ = 644,
     XY_ = 645,
     YES_ = 646,
     ZERO_ = 647,
     ZMAX_ = 648,
     ZSCALE_ = 649,
     PIXMASK_ = 650,
     ZOOM_ = 651,
     FIELDS_ = 652
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
#define TIFF_ 586
#define THREED_ 587
#define THRESHOLD_ 588
#define THICK_ 589
#define TOP_ 590
#define TRANSPARENCY_ 591
#define TRIANGLE_ 592
#define TO_ 593
#define TOGGLE_ 594
#define TOPHAT_ 595
#define TRUE_ 596
#define TYPE_ 597
#define UNDO_ 598
#define UNHIGHLITE_ 599
#define UNLOAD_ 600
#define UNSELECT_ 601
#define UPDATE_ 602
#define UP_ 603
#define USER_ 604
#define VALUE_ 605
#define VAR_ 606
#define VIEW_ 607
#define VECTOR_ 608
#define VERSION_ 609
#define VERTEX_ 610
#define VERTICAL_ 611
#define WARP_ 612
#define WCS_ 613
#define WCSA_ 614
#define WCSB_ 615
#define WCSC_ 616
#define WCSD_ 617
#define WCSE_ 618
#define WCSF_ 619
#define WCSG_ 620
#define WCSH_ 621
#define WCSI_ 622
#define WCSJ_ 623
#define WCSK_ 624
#define WCSL_ 625
#define WCSM_ 626
#define WCSN_ 627
#define WCSO_ 628
#define WCSP_ 629
#define WCSQ_ 630
#define WCSR_ 631
#define WCSS_ 632
#define WCST_ 633
#define WCSU_ 634
#define WCSV_ 635
#define WCSW_ 636
#define WCSX_ 637
#define WCSY_ 638
#define WCSZ_ 639
#define WCS0_ 640
#define WFPC2_ 641
#define WIDTH_ 642
#define WIN32_ 643
#define XML_ 644
#define XY_ 645
#define YES_ 646
#define ZERO_ 647
#define ZMAX_ 648
#define ZSCALE_ 649
#define PIXMASK_ 650
#define ZOOM_ 651
#define FIELDS_ 652




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
#line 951 "frame/parser.C"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 964 "frame/parser.C"

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
#define YYFINAL  413
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   6131

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  402
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  249
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1489
/* YYNRULES -- Number of states.  */
#define YYNSTATES  3232

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   652

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
       2,   401,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   399,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   400,   398,
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
     395,   396,   397
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
    1992,  1995,  1998,  2001,  2004,  2007,  2010,  2013,  2017,  2020,
    2025,  2030,  2035,  2039,  2043,  2049,  2054,  2059,  2064,  2068,
    2072,  2076,  2080,  2084,  2088,  2091,  2094,  2099,  2103,  2107,
    2111,  2115,  2120,  2125,  2130,  2135,  2141,  2146,  2153,  2161,
    2166,  2171,  2177,  2180,  2184,  2188,  2192,  2196,  2200,  2204,
    2208,  2211,  2215,  2219,  2223,  2227,  2232,  2236,  2242,  2249,
    2253,  2257,  2262,  2266,  2270,  2274,  2278,  2282,  2288,  2292,
    2296,  2301,  2305,  2308,  2311,  2313,  2317,  2322,  2327,  2332,
    2337,  2342,  2349,  2354,  2359,  2365,  2370,  2375,  2380,  2385,
    2391,  2396,  2403,  2411,  2416,  2421,  2427,  2433,  2439,  2445,
    2451,  2457,  2465,  2471,  2477,  2484,  2489,  2494,  2499,  2504,
    2509,  2516,  2521,  2526,  2532,  2538,  2544,  2550,  2556,  2563,
    2569,  2577,  2586,  2592,  2598,  2605,  2609,  2613,  2617,  2621,
    2626,  2630,  2636,  2643,  2647,  2651,  2656,  2660,  2664,  2668,
    2672,  2676,  2682,  2686,  2690,  2695,  2700,  2705,  2709,  2715,
    2720,  2725,  2728,  2732,  2735,  2742,  2749,  2751,  2753,  2755,
    2758,  2761,  2764,  2768,  2772,  2775,  2788,  2791,  2794,  2796,
    2800,  2805,  2808,  2809,  2813,  2815,  2818,  2821,  2824,  2827,
    2830,  2835,  2840,  2845,  2850,  2854,  2858,  2863,  2869,  2878,
    2885,  2895,  2902,  2910,  2921,  2933,  2946,  2956,  2962,  2969,
    2973,  2979,  2985,  2991,  2998,  3004,  3009,  3014,  3019,  3029,
    3040,  3052,  3062,  3069,  3076,  3083,  3090,  3097,  3104,  3111,
    3118,  3125,  3133,  3141,  3144,  3149,  3154,  3159,  3164,  3170,
    3175,  3180,  3186,  3192,  3196,  3201,  3206,  3211,  3219,  3229,
    3236,  3247,  3259,  3272,  3282,  3286,  3289,  3293,  3299,  3305,
    3313,  3318,  3322,  3326,  3333,  3341,  3350,  3358,  3366,  3371,
    3376,  3381,  3391,  3396,  3400,  3405,  3413,  3421,  3424,  3428,
    3432,  3436,  3441,  3444,  3447,  3452,  3457,  3468,  3472,  3477,
    3479,  3483,  3486,  3489,  3492,  3495,  3499,  3505,  3510,  3516,
    3519,  3522,  3525,  3528,  3532,  3535,  3538,  3541,  3545,  3548,
    3552,  3557,  3561,  3565,  3572,  3577,  3580,  3584,  3587,  3590,
    3595,  3599,  3603,  3606,  3610,  3612,  3615,  3617,  3620,  3623,
    3626,  3630,  3632,  3634,  3636,  3638,  3641,  3643,  3646,  3649,
    3651,  3654,  3657,  3659,  3662,  3664,  3666,  3668,  3670,  3672,
    3674,  3676,  3678,  3679,  3681,  3684,  3687,  3690,  3694,  3700,
    3708,  3716,  3723,  3729,  3735,  3742,  3749,  3756,  3762,  3769,
    3776,  3783,  3790,  3797,  3804,  3811,  3818,  3826,  3838,  3846,
    3854,  3862,  3872,  3882,  3893,  3906,  3919,  3923,  3926,  3927,
    3929,  3933,  3938,  3943,  3948,  3949,  3951,  3953,  3958,  3963,
    3965,  3967,  3969,  3971,  3973,  3975,  3977,  3979,  3982,  3984,
    3986,  3988,  3992,  3996,  4005,  4012,  4023,  4031,  4039,  4045,
    4052,  4059,  4063,  4066,  4069,  4073,  4078,  4084,  4090,  4096,
    4100,  4105,  4111,  4117,  4123,  4129,  4132,  4136,  4140,  4144,
    4150,  4154,  4158,  4162,  4166,  4170,  4175,  4181,  4187,  4193,
    4199,  4203,  4208,  4214,  4220,  4223,  4226,  4230,  4234,  4240,
    4247,  4254,  4258,  4262,  4266,  4273,  4280,  4286,  4292,  4295,
    4299,  4303,  4309,  4316,  4320,  4323,  4326,  4330,  4333,  4337,
    4340,  4344,  4348,  4354,  4361,  4364,  4367,  4370,  4373,  4375,
    4380,  4385,  4387,  4390,  4393,  4396,  4399,  4402,  4405,  4408,
    4412,  4415,  4419,  4422,  4426,  4428,  4430,  4432,  4434,  4436,
    4438,  4439,  4442,  4443,  4446,  4447,  4449,  4450,  4451,  4453,
    4455,  4457,  4459,  4461,  4469,  4478,  4481,  4488,  4491,  4498,
    4501,  4505,  4508,  4510,  4512,  4516,  4520,  4522,  4527,  4530,
    4532,  4536,  4540,  4545,  4549,  4553,  4557,  4559,  4561,  4563,
    4565,  4567,  4569,  4571,  4573,  4575,  4577,  4579,  4581,  4583,
    4585,  4587,  4590,  4591,  4592,  4595,  4602,  4610,  4613,  4615,
    4619,  4621,  4625,  4627,  4629,  4631,  4634,  4637,  4639,  4643,
    4644,  4645,  4648,  4651,  4653,  4657,  4663,  4664,  4666,  4668,
    4671,  4674,  4678,  4681,  4685,  4688,  4692,  4695,  4699,  4701,
    4704,  4706,  4709,  4711,  4714,  4716,  4719,  4721,  4724,  4726,
    4729,  4731,  4734,  4736,  4739,  4742,  4746,  4749,  4752,  4755,
    4758,  4760,  4762,  4764,  4766,  4771,  4774,  4778,  4782,  4785,
    4789,  4792,  4795,  4798,  4802,  4806,  4810,  4813,  4817,  4819,
    4823,  4827,  4829,  4832,  4835,  4838,  4841,  4851,  4858,  4860,
    4862,  4864,  4866,  4869,  4872,  4876,  4880,  4882,  4885,  4889,
    4893,  4895,  4898,  4900,  4902,  4904,  4906,  4908,  4910,  4912,
    4914,  4917,  4920,  4925,  4928,  4931,  4934,  4937,  4940,  4945,
    4948,  4951,  4954,  4957,  4960,  4965,  4967,  4970,  4973,  4976,
    4980,  4982,  4984,  4986,  4989,  4992,  4995,  4998,  5001,  5004,
    5007,  5010,  5013,  5017,  5021,  5025,  5029,  5033,  5037,  5039,
    5042,  5045,  5048,  5052,  5055,  5059,  5063,  5067,  5071,  5075,
    5079,  5082,  5085,  5088,  5091,  5094,  5097,  5100,  5103,  5106,
    5109,  5112,  5115,  5118,  5121,  5125,  5129,  5133,  5136,  5139,
    5142,  5146,  5150,  5154,  5157,  5160,  5163,  5166,  5169,  5172,
    5176,  5180,  5184,  5187,  5190,  5193,  5196,  5199,  5202,  5206,
    5210,  5214,  5217,  5220,  5223,  5226,  5229,  5232,  5235,  5238,
    5241,  5245,  5249,  5253,  5258,  5265,  5268,  5270,  5272,  5274,
    5276,  5278,  5279,  5285,  5287,  5294,  5298,  5301,  5306,  5308,
    5311,  5314,  5317,  5321,  5325,  5328,  5331,  5334,  5337,  5340,
    5343,  5347,  5350,  5353,  5357,  5359,  5363,  5368,  5371,  5373,
    5376,  5382,  5389,  5396,  5399,  5401,  5404,  5407,  5413,  5420
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     403,     0,    -1,   104,   405,    -1,    46,   440,    -1,    43,
      71,     5,    -1,    43,    71,   406,    -1,    49,   445,    -1,
      63,    -1,    69,    -1,    70,   447,    -1,    74,   327,     5,
      -1,    75,   452,    -1,    76,   454,    -1,    84,   456,    -1,
      91,   467,    -1,    93,   469,    -1,    94,   470,    -1,   103,
     406,    -1,   129,   472,    -1,   139,   473,    -1,   152,   474,
      -1,   158,   525,    -1,   162,   528,    -1,   166,    -1,   167,
     406,    -1,   167,    71,     5,    -1,   172,   614,    -1,   173,
     613,    -1,   176,   534,    -1,   182,    15,     4,    -1,   199,
     537,    -1,   203,   556,    -1,   204,   557,    -1,   205,   558,
      -1,   208,   575,   559,    -1,   209,   596,    -1,   188,   595,
      -1,   221,   612,    -1,   225,    71,     5,    -1,   247,   597,
      -1,   249,   598,    -1,   250,   601,    -1,   271,    95,    -1,
     264,   603,    -1,   262,   602,    -1,   279,    -1,   275,   575,
     605,    -1,   281,   610,    -1,   282,   611,    -1,   284,   615,
      -1,   289,   617,    -1,   305,    -1,   311,   639,    -1,   330,
       4,    -1,   332,   433,    -1,   345,    -1,   347,   641,    -1,
     354,    -1,   357,   643,    -1,   358,   644,    -1,   388,   648,
      -1,   396,   649,    -1,     3,    -1,     4,    -1,   406,    -1,
     218,   406,    -1,   251,   406,    -1,   253,   406,    -1,   358,
     406,    -1,    46,   406,    -1,    49,   406,    -1,    83,   406,
      -1,    91,   406,    -1,   159,   406,    -1,   282,   406,    -1,
       4,    -1,   391,    -1,   398,    -1,   240,    -1,   341,    -1,
     230,    -1,   399,    -1,   239,    -1,   131,    -1,    -1,   283,
      40,    -1,   148,    40,    -1,   283,    -1,   148,    -1,    -1,
     409,    -1,   404,    -1,     6,    -1,     7,    -1,     8,    -1,
       9,    -1,    10,    -1,   410,   410,    -1,   411,   412,    -1,
     412,   412,    -1,   404,   404,    -1,   177,    -1,   255,    -1,
     109,    -1,    19,    -1,   415,    -1,   358,    -1,   359,    -1,
     360,    -1,   361,    -1,   362,    -1,   363,    -1,   364,    -1,
     365,    -1,   366,    -1,   367,    -1,   368,    -1,   369,    -1,
     370,    -1,   371,    -1,   372,    -1,   373,    -1,   374,    -1,
     375,    -1,   376,    -1,   377,    -1,   378,    -1,   379,    -1,
     380,    -1,   381,    -1,   382,    -1,   383,    -1,   384,    -1,
     385,    -1,    60,    -1,   250,    -1,    -1,   392,    -1,   234,
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
      67,    -1,   244,    -1,    52,    -1,   243,    -1,   337,    -1,
     245,    -1,    39,    -1,    -1,    67,    -1,    52,    -1,   110,
      -1,    92,    -1,   400,    -1,    27,    -1,    55,    -1,   155,
      -1,    -1,     4,    -1,    89,    -1,   169,    -1,   257,    -1,
     258,    -1,   272,    -1,   319,    -1,    -1,    33,    -1,   323,
      -1,   210,    -1,    -1,   226,    -1,    44,    -1,    45,    -1,
     194,    -1,   195,    -1,   352,   439,    -1,    50,   436,    -1,
      81,   437,    -1,   167,   438,    -1,   212,   608,    -1,    38,
     609,    -1,   301,   434,    -1,   291,   404,    -1,   324,     4,
      -1,   333,   404,    -1,   406,    -1,    18,   404,    -1,   321,
     404,    -1,   232,   435,    -1,   406,    -1,   321,   404,    -1,
     406,    -1,    71,     5,    -1,   406,    -1,    71,     5,    -1,
     406,    -1,    71,     5,    -1,   404,   404,    -1,   259,   404,
     404,   404,   404,   404,    -1,    11,   441,    -1,    78,     5,
       5,     5,    -1,   108,     4,    -1,   130,   442,    -1,   149,
     443,    -1,    57,   308,     4,    -1,   338,   444,    -1,   134,
       5,    -1,    63,    -1,   404,   404,    -1,   404,    -1,   404,
     404,    -1,   404,    11,   404,   404,    -1,   404,   404,    11,
     404,   404,    -1,   338,   404,    -1,   338,   404,   404,    -1,
     338,   404,    11,   404,   404,    -1,   338,   404,   404,    11,
     404,   404,    -1,    33,    -1,   323,    -1,   137,    -1,   404,
     404,    11,    63,     5,     5,     5,    -1,   404,   404,     4,
     404,   404,    11,    63,     5,     5,     5,     5,    -1,   404,
     404,    11,   404,   404,     5,     5,     5,    -1,   404,   404,
       4,   404,   404,    11,   404,   404,     5,     5,     5,     5,
      -1,   404,    -1,   404,   404,    -1,   338,   446,    -1,   225,
     392,   406,    -1,   137,    -1,   404,    -1,   404,   404,    -1,
     294,   448,    -1,   219,   449,    -1,   213,   450,    -1,   349,
     404,   404,    -1,   349,   225,   225,    -1,   394,   451,    -1,
     266,   406,    -1,   154,    -1,   200,    -1,   404,    -1,   213,
      -1,   394,    -1,   393,    -1,   349,    -1,     4,   420,    -1,
     219,   420,    -1,   286,     4,    -1,   278,    -1,   404,     4,
       4,    -1,    85,   404,    -1,   286,     4,    -1,   196,     4,
      -1,     4,   404,   404,     4,     4,    -1,   282,   404,   404,
     404,   404,   404,   404,     4,     4,    -1,   172,   404,   404,
     404,   404,   404,   404,     4,     4,    -1,   173,   404,   404,
     404,   404,   404,   404,     4,     4,    -1,   221,     4,     4,
       5,     5,     5,     4,    -1,    42,    -1,   220,   453,    -1,
     121,    -1,     4,   404,   404,     4,     4,    -1,   282,   404,
     404,   404,   404,   404,   404,     4,     4,    -1,   172,   404,
     404,   404,   404,   404,   404,     4,     4,    -1,   173,   404,
     404,   404,   404,   404,   404,     4,     4,    -1,   221,     4,
       4,     5,     5,     5,     4,    -1,   419,    -1,   201,   404,
      -1,   153,   404,   404,   455,   455,   455,    -1,   404,    -1,
      31,    -1,    90,   458,    -1,   100,     4,     4,    -1,   107,
     459,    -1,   199,   460,    -1,   252,   464,    -1,   289,   465,
      -1,   322,   466,    -1,    32,   457,    -1,   224,     4,     5,
      -1,   279,     4,    -1,   279,     4,     4,    -1,   322,     4,
       4,     5,     4,     4,     4,     4,    -1,   322,     4,    16,
       5,     4,     4,     4,     4,    -1,     5,     4,     4,   463,
       4,     4,   419,   404,   461,   462,   404,   404,     5,    -1,
       5,     4,     4,   463,     4,     4,   419,   404,   404,   462,
     404,   404,     5,    -1,     5,     4,     4,   463,     4,     4,
     419,   404,   461,   404,   404,     5,    -1,     5,     4,     4,
     463,     4,     4,   419,   404,   404,   404,   404,     5,    -1,
     261,    -1,    -1,    32,    -1,    32,     4,    -1,     5,    -1,
       5,     5,     4,   406,    -1,     5,     4,   406,     5,   414,
     421,    -1,   213,    -1,   394,    -1,   393,    -1,   349,    -1,
     154,    -1,   200,    -1,   311,    -1,    49,    -1,     5,    -1,
       5,     5,     4,   406,    -1,     5,     5,     4,   406,     4,
       4,    -1,     5,   414,   421,    -1,    32,     5,   414,   421,
      -1,    32,     4,     5,   414,   421,    -1,    69,    -1,     4,
      69,    -1,     4,     5,     4,     4,    -1,     4,     5,     4,
       4,     4,     4,    -1,    -1,   404,   404,   404,   404,   414,
     421,    -1,    63,   413,   414,   421,   404,   404,   414,   423,
      -1,   332,   468,    -1,    42,   404,   404,    -1,   220,   404,
     404,    -1,   121,   404,   404,    -1,    -1,   404,   404,   414,
     421,    -1,    42,   404,   404,     4,    -1,   220,   404,   404,
       4,    -1,   121,   404,   404,     4,    -1,   416,   404,   404,
      -1,   414,   421,   413,    -1,   406,    -1,   357,   404,   404,
      -1,    42,   220,   416,   404,   404,    -1,   220,   416,   404,
     404,    -1,    42,   220,   414,   413,    -1,   220,   414,   413,
      -1,    34,     4,    -1,    -1,    33,    -1,   323,    -1,   210,
      -1,   404,    -1,    69,    -1,   162,   128,     5,    -1,   180,
       5,    -1,    -1,    43,    71,    -1,    46,   477,    -1,    49,
     479,    -1,    70,   480,    -1,    75,   484,    -1,    74,   483,
      -1,    76,   486,    -1,    84,   488,    -1,    86,   491,    -1,
      91,   492,    -1,    93,   493,    -1,    95,   495,    -1,    94,
     494,    -1,   101,   496,    -1,   103,    -1,   138,   500,    -1,
     158,   506,    -1,   167,    71,    -1,   169,     5,     5,     4,
      -1,   170,    96,   475,    -1,   172,   514,    -1,   173,   513,
      -1,   176,   498,    -1,   180,   497,    -1,   182,    15,    -1,
     213,    -1,   208,   575,   569,    -1,   209,   508,    -1,   188,
     507,    -1,   221,   512,    -1,   225,    71,    -1,   247,    -1,
     249,   510,    -1,   256,   326,   416,   404,   404,     4,     4,
       5,    -1,   282,   511,    -1,   284,    -1,   311,   515,    -1,
     330,    -1,   332,   516,    -1,   342,    -1,   350,   416,   404,
     404,    -1,   356,    96,   476,    -1,   358,   523,    -1,   396,
      -1,     5,     5,   404,   404,   416,     4,   471,    -1,     5,
       5,   404,   404,   414,   421,     4,   471,    -1,     5,     5,
     404,   404,   416,     4,   471,    -1,     5,     5,   404,   404,
     414,   421,     4,   471,    -1,   108,    -1,   130,    -1,   149,
      -1,    57,   308,    -1,    95,    -1,   134,    -1,    78,   478,
      -1,   198,    -1,    -1,   213,     5,    -1,   112,     5,    -1,
     130,    -1,   225,   392,    -1,    -1,   461,   462,    -1,   404,
     462,    -1,   294,    -1,   219,    -1,   213,   481,    -1,   349,
     192,    -1,   394,   482,    -1,   266,    -1,   219,    -1,   286,
      -1,    85,    -1,   286,    -1,   196,    -1,    -1,   327,    -1,
     192,   485,    -1,     4,    -1,     4,   416,   404,   404,    -1,
       4,   404,   404,   419,   404,    -1,    -1,   192,   487,    -1,
     201,    -1,   153,    -1,     4,   404,   404,   419,   404,    -1,
     414,   421,    -1,    32,    88,    -1,    70,   489,    -1,    71,
      -1,    99,    -1,   100,    -1,   192,    -1,   237,   192,    -1,
     212,    -1,    76,   490,    -1,   311,    -1,   322,    -1,   322,
       4,    -1,    32,    -1,    32,   322,     4,    -1,   387,    -1,
      -1,   219,    -1,   294,    -1,    -1,   201,    -1,   404,   404,
     414,   421,   422,    -1,   416,   404,   404,   414,   421,   422,
      -1,   414,   421,   422,    -1,    63,   414,   421,   422,   414,
     423,    -1,   332,   414,   421,    -1,   416,    -1,   414,   421,
     422,    -1,   320,    -1,    34,    -1,   416,    -1,   414,   421,
     422,    -1,   414,   421,   413,   404,   404,     5,    -1,     4,
     414,   421,   413,   404,   404,     5,    -1,   416,   404,   404,
       4,     4,    -1,     5,   407,    -1,    70,    -1,   416,   404,
     404,     5,   407,    -1,     4,     4,     4,     4,    -1,    95,
      -1,   132,   224,   499,    -1,    -1,     4,    -1,   404,   404,
      -1,   227,    -1,    63,   414,   421,   422,    -1,    88,    -1,
     108,   503,    -1,    47,    -1,   128,   501,    -1,   132,   224,
     504,    -1,   164,   502,    -1,   165,    -1,   238,   224,    -1,
     308,    -1,   308,   414,   421,   423,    -1,   309,   505,    -1,
     387,    -1,     4,    -1,   416,   404,   404,    -1,     4,    -1,
     186,     5,    -1,     4,   186,     5,    -1,   358,     4,    -1,
      -1,     4,    -1,   407,    -1,   407,   416,   404,   404,    -1,
     407,     4,    -1,    -1,     4,    -1,   146,   177,   414,    -1,
     146,   177,     4,   414,    -1,   338,   177,   404,   414,    -1,
      -1,   246,    -1,   351,    -1,    88,    -1,   189,    -1,    71,
     509,    -1,    48,   509,    -1,   336,   509,    -1,   352,   509,
      -1,    71,    -1,   207,    -1,   274,    -1,   325,    -1,   336,
      -1,    88,    -1,    48,    -1,    -1,     4,    -1,   266,    -1,
      65,    -1,   325,    -1,   352,    -1,   325,    -1,    65,    -1,
     325,    -1,   352,    -1,    65,    -1,   325,    -1,   352,    -1,
     149,    -1,   273,    -1,   273,   214,    -1,   306,    -1,   306,
     214,    -1,    21,    -1,   352,   522,    -1,    50,   519,    -1,
      81,   520,    -1,   167,   521,    -1,   212,    -1,    38,    -1,
     301,   517,    -1,   291,    -1,    -1,    18,    -1,   321,    -1,
     232,   518,    -1,    -1,   321,    -1,    -1,    71,    -1,    -1,
      71,    -1,    -1,    71,    -1,    -1,   259,    -1,    -1,    15,
     524,    -1,   224,   415,    -1,    -1,   260,    -1,    90,   526,
      -1,   107,    -1,   414,   421,   422,   527,     5,     5,    -1,
     414,   421,   422,   527,     5,    -1,    20,    -1,   269,    -1,
      19,    -1,    43,    71,    -1,    46,   529,    -1,    84,   530,
      -1,    91,    -1,   102,    -1,   103,    -1,   109,    -1,   138,
     531,    -1,   158,    -1,   176,    -1,   183,    -1,   208,   532,
      -1,   255,    -1,   177,    -1,   311,    -1,   325,   414,    -1,
     358,   533,    -1,    79,     5,    -1,    -1,    32,    -1,    -1,
      46,    -1,    94,    -1,   218,    -1,   167,    -1,   297,    -1,
     252,    -1,   343,    -1,   414,    -1,    62,   414,    -1,   125,
     414,    -1,   197,   414,    -1,    17,    -1,   332,   414,    -1,
     228,     4,     4,    -1,   126,    -1,   211,     5,    -1,    95,
     536,    -1,   298,   132,   224,   535,    -1,   298,     4,     4,
       4,     4,    -1,   347,    -1,   358,   404,   404,   404,   404,
     404,   404,   404,   404,     4,    -1,     5,    -1,     5,     4,
      -1,     4,     4,    60,    -1,     4,     4,   414,    -1,   219,
     406,    -1,    26,   538,    -1,   122,   540,    -1,   138,   541,
      -1,   179,   555,    -1,   236,   552,    -1,   254,   553,    -1,
       5,     5,    -1,     5,     5,     4,    -1,   331,   554,    -1,
       5,    13,     5,   426,    -1,     5,    14,     5,   426,    -1,
       5,    65,     5,   426,    -1,     5,   216,   426,    -1,     5,
     217,   426,    -1,     5,   302,   424,     4,   426,    -1,     5,
     313,     4,   426,    -1,     5,   314,     4,   426,    -1,     5,
     351,     5,   426,    -1,   282,    94,   539,    -1,   173,    94,
     539,    -1,   172,    94,   539,    -1,     5,    13,     5,    -1,
       5,    14,     5,    -1,     5,    65,     5,    -1,     5,   216,
      -1,     5,   217,    -1,     5,   302,   424,     4,    -1,     5,
     313,     4,    -1,     5,   314,     4,    -1,     5,   351,     5,
      -1,     5,     5,   310,    -1,     5,    13,     5,   426,    -1,
       5,    14,     5,   426,    -1,     5,    65,     5,   426,    -1,
       5,   216,   425,   426,    -1,     5,     5,   310,   425,   426,
      -1,     5,   217,   425,   426,    -1,     5,   302,   424,     4,
     425,   426,    -1,     5,   318,   424,     4,     4,   425,   426,
      -1,     5,   313,     4,   426,    -1,     5,   314,     4,   426,
      -1,     5,   351,     5,   425,   426,    -1,   309,   542,    -1,
     128,    94,   543,    -1,   282,   177,   551,    -1,   282,    94,
     550,    -1,   173,   177,   551,    -1,   173,    94,   550,    -1,
     172,   177,   551,    -1,   172,    94,   550,    -1,   218,   544,
      -1,     5,    13,     5,    -1,     5,    14,     5,    -1,     5,
      65,     5,    -1,     5,   216,   425,    -1,     5,     5,   310,
     425,    -1,     5,   217,   425,    -1,     5,   302,   424,     4,
     425,    -1,     5,   318,   424,     4,     4,   425,    -1,     5,
     313,     4,    -1,     5,   314,     4,    -1,     5,   351,     5,
     425,    -1,     5,    13,     5,    -1,     5,    14,     5,    -1,
       5,    65,     5,    -1,     5,   216,   425,    -1,     5,   217,
     425,    -1,     5,   302,   424,     4,   425,    -1,     5,   313,
       4,    -1,     5,   314,     4,    -1,     5,   351,     5,   425,
      -1,   177,   182,   545,    -1,   182,   546,    -1,   177,   547,
      -1,   549,    -1,   177,   386,   548,    -1,     5,    13,     5,
     426,    -1,     5,    14,     5,   426,    -1,     5,    65,     5,
     426,    -1,     5,   216,   425,   426,    -1,     5,   217,   425,
     426,    -1,     5,   302,   424,     4,   425,   426,    -1,     5,
     313,     4,   426,    -1,     5,   314,     4,   426,    -1,     5,
     351,     5,   425,   426,    -1,     5,    13,     5,   426,    -1,
       5,    14,     5,   426,    -1,     5,    65,     5,   426,    -1,
       5,   216,   425,   426,    -1,     5,     5,   310,   425,   426,
      -1,     5,   217,   425,   426,    -1,     5,   302,   424,     4,
     425,   426,    -1,     5,   318,   424,     4,     4,   425,   426,
      -1,     5,   313,     4,   426,    -1,     5,   314,     4,   426,
      -1,     5,   351,     5,   425,   426,    -1,   415,     5,    13,
       5,   426,    -1,   415,     5,    14,     5,   426,    -1,   415,
       5,    65,     5,   426,    -1,   415,     5,   216,   425,   426,
      -1,   415,     5,   217,   425,   426,    -1,   415,     5,   302,
     424,     4,   425,   426,    -1,   415,     5,   313,     4,   426,
      -1,   415,     5,   314,     4,   426,    -1,   415,     5,   351,
       5,   425,   426,    -1,     5,    13,     5,   426,    -1,     5,
      14,     5,   426,    -1,     5,    65,     5,   426,    -1,     5,
     216,   425,   426,    -1,     5,   217,   425,   426,    -1,     5,
     302,   424,     4,   425,   426,    -1,     5,   313,     4,   426,
      -1,     5,   314,     4,   426,    -1,     5,   351,     5,   425,
     426,    -1,   415,     5,    13,     5,   426,    -1,   415,     5,
      14,     5,   426,    -1,   415,     5,    65,     5,   426,    -1,
     415,     5,   216,   425,   426,    -1,   415,     5,     5,   310,
     425,   426,    -1,   415,     5,   217,   425,   426,    -1,   415,
       5,   302,   424,     4,   425,   426,    -1,   415,     5,   318,
     424,     4,     4,   425,   426,    -1,   415,     5,   313,     4,
     426,    -1,   415,     5,   314,     4,   426,    -1,   415,     5,
     351,     5,   425,   426,    -1,     5,    13,     5,    -1,     5,
      14,     5,    -1,     5,    65,     5,    -1,     5,   216,   425,
      -1,     5,     5,   310,   425,    -1,     5,   217,   425,    -1,
       5,   302,   424,     4,   425,    -1,     5,   318,   424,     4,
       4,   425,    -1,     5,   313,     4,    -1,     5,   314,     4,
      -1,     5,   351,     5,   425,    -1,     5,    13,     5,    -1,
       5,    14,     5,    -1,     5,    65,     5,    -1,     5,   216,
     425,    -1,     5,   217,   425,    -1,     5,   302,   424,     4,
     425,    -1,     5,   313,     4,    -1,     5,   314,     4,    -1,
       5,   351,     5,   425,    -1,     5,    13,     5,   426,    -1,
       5,    65,     5,   426,    -1,     5,   216,   426,    -1,     5,
     302,   424,     4,   426,    -1,     5,   313,     4,   426,    -1,
       5,   351,     5,   426,    -1,     5,     5,    -1,   309,     5,
       5,    -1,     5,   426,    -1,   101,     4,     4,     4,     4,
       4,    -1,   213,     4,     4,     4,     4,     4,    -1,   121,
      -1,   265,    -1,   406,    -1,   156,   406,    -1,    95,   406,
      -1,    71,     5,    -1,     5,     4,     4,    -1,   347,   404,
     404,    -1,   396,   404,    -1,     5,     5,   415,   421,     5,
       5,   415,   421,   404,   415,   423,     5,    -1,    64,   562,
      -1,    71,     5,    -1,    87,    -1,    80,   568,     5,    -1,
      80,   568,   351,     5,    -1,    82,   107,    -1,    -1,    90,
     560,   563,    -1,    96,    -1,   107,   566,    -1,   115,   567,
      -1,   124,     4,    -1,   143,     5,    -1,   167,    16,    -1,
     167,   241,   404,   404,    -1,   167,   339,   404,   404,    -1,
       4,    20,   430,   406,    -1,    20,   319,    59,     5,    -1,
      20,   319,    59,    -1,     4,    21,   409,    -1,     4,    21,
     409,   416,    -1,     4,    21,   409,   414,   421,    -1,     4,
      22,   273,   404,   404,     4,   414,   423,    -1,     4,    22,
     273,     5,   414,   423,    -1,     4,    53,   273,   404,   404,
     404,     4,   414,   423,    -1,     4,    53,   273,     5,   414,
     423,    -1,     4,    52,   273,   404,   404,   414,   423,    -1,
       4,    56,   115,   409,   409,     4,   404,   404,   404,     4,
      -1,     4,    56,   115,   409,   409,     4,   404,   404,   404,
       4,   416,    -1,     4,    56,   115,   409,   409,     4,   404,
     404,   404,     4,   414,   421,    -1,     4,    56,   115,     5,
       5,   414,   421,   414,   423,    -1,     4,    59,   561,     5,
       5,    -1,     4,    67,   273,   404,   414,   423,    -1,     4,
      71,     5,    -1,     4,    81,    27,   406,   406,    -1,     4,
      81,   121,   427,   427,    -1,     4,    81,   187,     5,     5,
      -1,     4,    81,   273,   404,   414,   423,    -1,     4,    81,
     325,   414,   421,    -1,     4,    82,   154,   406,    -1,     4,
      82,    28,   406,    -1,     4,    82,   342,     5,    -1,     4,
      89,   115,   409,   409,     4,   404,   404,     4,    -1,     4,
      89,   115,   409,   409,     4,   404,   404,     4,   416,    -1,
       4,    89,   115,   409,   409,     4,   404,   404,     4,   414,
     421,    -1,     4,    89,   115,     5,     5,   414,   421,   414,
     423,    -1,     4,    90,    22,   273,   404,   404,    -1,     4,
      90,    53,   273,   404,   404,    -1,     4,    90,    56,    21,
     404,   404,    -1,     4,    90,    56,   273,   404,   404,    -1,
       4,    90,   120,   273,   404,   404,    -1,     4,    90,   123,
      21,   404,   404,    -1,     4,    90,   123,   273,   404,   404,
      -1,     4,    90,    89,    21,   404,   404,    -1,     4,    90,
      89,   273,   404,   404,    -1,     4,    90,   261,   355,     4,
     404,   404,    -1,     4,    90,   296,   355,     4,   404,   404,
      -1,     4,   107,    -1,     4,   107,    22,     4,    -1,     4,
     107,    53,     4,    -1,     4,   107,    56,     4,    -1,     4,
     107,   120,     4,    -1,     4,   107,    59,   561,     5,    -1,
       4,   107,   123,     4,    -1,     4,   107,    89,     4,    -1,
       4,   107,   261,   355,     4,    -1,     4,   107,   296,   355,
       4,    -1,     4,   107,   327,    -1,     4,   107,   327,     5,
      -1,     4,   107,   327,     4,    -1,     4,   115,    42,     4,
      -1,     4,   119,   273,   404,   404,   414,   423,    -1,     4,
     120,   273,   404,   404,   404,     4,   414,   423,    -1,     4,
     120,   273,     5,   414,   423,    -1,     4,   123,   115,   409,
     409,     4,   404,   404,   404,     4,    -1,     4,   123,   115,
     409,   409,     4,   404,   404,   404,     4,   416,    -1,     4,
     123,   115,   409,   409,     4,   404,   404,   404,     4,   414,
     421,    -1,     4,   123,   115,     5,     5,   414,   421,   414,
     423,    -1,     4,   143,     5,    -1,     4,   167,    -1,     4,
     167,   241,    -1,     4,   196,    27,   406,   406,    -1,     4,
     196,   121,   427,   427,    -1,     4,   196,   259,   414,   421,
     413,   413,    -1,     4,   223,   404,   404,    -1,     4,   223,
     147,    -1,     4,   223,    37,    -1,     4,   223,   338,   414,
     421,   413,    -1,     4,   261,   259,   414,   421,   422,     5,
      -1,     4,   261,   259,   414,   421,   422,   351,     5,    -1,
       4,   261,   279,   404,   404,   414,   423,    -1,     4,   296,
     279,   404,   404,   414,   423,    -1,     4,   259,   300,   428,
      -1,     4,   259,   308,     4,    -1,     4,   259,   155,     5,
      -1,     4,   267,   414,   421,   413,   413,   404,   414,   423,
      -1,     4,   268,   581,   406,    -1,     4,   284,    42,    -1,
       4,   285,   144,     5,    -1,     4,   285,   259,   414,   421,
     413,   413,    -1,     4,   285,   325,   414,   421,   414,   423,
      -1,     4,   297,    -1,     4,   297,   241,    -1,     4,   327,
       5,    -1,     4,   329,     5,    -1,     4,   329,   284,   406,
      -1,     4,   344,    -1,     4,   346,    -1,     4,   353,    27,
     406,    -1,     4,   353,   121,   427,    -1,     4,   353,   259,
     414,   421,   413,   414,   423,   404,   409,    -1,     4,   387,
       4,    -1,     4,   100,     4,     4,    -1,   185,    -1,   185,
     404,   404,    -1,   198,   576,    -1,   199,   577,    -1,   223,
     578,    -1,   266,   406,    -1,   268,   581,   406,    -1,   268,
     581,   406,   404,   404,    -1,   284,    42,   404,   404,    -1,
     284,   220,   404,   404,     4,    -1,   284,   121,    -1,   289,
     585,    -1,   297,   586,    -1,   305,   587,    -1,     5,    71,
       5,    -1,     5,    87,    -1,     5,   107,    -1,     5,    96,
      -1,     5,   143,     5,    -1,     5,   167,    -1,     5,   167,
     241,    -1,     5,   223,   404,   404,    -1,     5,   223,   147,
      -1,     5,   223,    37,    -1,     5,   223,   338,   414,   421,
     413,    -1,     5,   268,   581,   406,    -1,     5,   297,    -1,
       5,   297,   241,    -1,     5,   344,    -1,     5,   346,    -1,
     327,   115,     5,     5,    -1,   327,   107,     5,    -1,   327,
     107,    16,    -1,   327,     5,    -1,   327,   347,     5,    -1,
     252,    -1,   252,   414,    -1,   343,    -1,   344,    16,    -1,
     346,    16,    -1,   387,     4,    -1,   100,     4,     4,    -1,
     297,    -1,   346,    -1,   167,    -1,   344,    -1,    42,   223,
      -1,   223,    -1,   121,   223,    -1,    42,   115,    -1,   115,
      -1,   121,   115,    -1,    42,   284,    -1,   284,    -1,   121,
     284,    -1,   107,    -1,   329,    -1,    71,    -1,   387,    -1,
     268,    -1,   143,    -1,   185,    -1,   347,    -1,    -1,     4,
      -1,    31,   406,    -1,   273,   404,    -1,   181,     4,    -1,
     246,     4,   404,    -1,    67,   404,   404,   404,   582,    -1,
     119,   404,   404,   404,   404,   408,   582,    -1,    52,   404,
     404,   404,   404,   408,   582,    -1,   261,   404,   404,   404,
     404,   582,    -1,   261,    60,   351,     5,   582,    -1,   296,
      60,   351,     5,   582,    -1,   296,   404,   404,   404,   404,
     582,    -1,   196,   404,   404,   404,   404,   582,    -1,   353,
     404,   404,   404,   404,   582,    -1,   329,   404,   404,   408,
     582,    -1,    67,   259,   404,   404,   429,   582,    -1,    52,
     259,   404,   404,   429,   582,    -1,   110,   259,   404,   404,
     429,   582,    -1,    92,   259,   404,   404,   429,   582,    -1,
     400,   259,   404,   404,   429,   582,    -1,    27,   259,   404,
     404,   429,   582,    -1,    55,   259,   404,   404,   429,   582,
      -1,   155,   259,   404,   404,     5,   582,    -1,   155,   259,
     404,   404,     4,     5,   582,    -1,   285,   404,   404,   404,
     404,   414,   421,   414,   423,     5,   582,    -1,    81,   404,
     404,   404,   414,   421,   582,    -1,   267,   404,   404,   404,
     404,   404,   582,    -1,    22,   404,   404,   404,   404,     4,
     582,    -1,   120,   404,   404,   404,   404,   404,     4,   408,
     582,    -1,    53,   404,   404,   404,   404,   404,     4,   408,
     582,    -1,    89,   404,   404,   409,   409,     4,   404,   404,
       4,   582,    -1,   123,   404,   404,   409,   409,     4,   404,
     404,   404,     4,   408,   582,    -1,    56,   404,   404,   409,
     409,     4,   404,   404,   404,     4,   408,   582,    -1,    82,
     564,   582,    -1,   328,   565,    -1,    -1,     4,    -1,     5,
     404,   404,    -1,   351,     5,   404,   404,    -1,   404,   404,
     351,     5,    -1,     5,   414,   421,   413,    -1,    -1,   297,
      -1,    16,    -1,    42,   404,   404,     4,    -1,   220,   404,
     404,     4,    -1,   121,    -1,   114,    -1,   389,    -1,    68,
      -1,   288,    -1,   287,    -1,   270,    -1,   390,    -1,    64,
     570,    -1,    71,    -1,   143,    -1,   124,    -1,   160,   404,
     404,    -1,   175,   404,   404,    -1,     4,    20,    89,     5,
       5,     5,   414,     4,    -1,     4,    20,   169,     5,     5,
       4,    -1,     4,    20,   257,     5,     5,     5,     5,   414,
     421,   431,    -1,     4,    20,   258,     5,     5,   414,   431,
      -1,     4,    20,   272,     5,     5,     5,   414,    -1,     4,
      20,   319,   414,   421,    -1,     4,    20,   319,   101,   414,
     421,    -1,    20,   319,    16,   101,   414,   421,    -1,    20,
     319,   397,    -1,   175,    16,    -1,     4,    21,    -1,     4,
      21,   416,    -1,     4,    21,   414,   421,    -1,     4,    22,
     273,   414,   423,    -1,     4,    53,   273,   414,   423,    -1,
       4,    52,   273,   414,   423,    -1,     4,    56,    21,    -1,
       4,    56,    21,   416,    -1,     4,    56,    21,   414,   421,
      -1,     4,    56,   273,   414,   423,    -1,     4,    63,   414,
     421,   422,    -1,     4,    67,   273,   414,   423,    -1,     4,
      71,    -1,     4,    81,    27,    -1,     4,    81,   121,    -1,
       4,    81,   187,    -1,     4,    81,   273,   414,   423,    -1,
       4,    81,   325,    -1,     4,    82,   154,    -1,     4,    82,
      28,    -1,     4,    82,   342,    -1,     4,    89,    21,    -1,
       4,    89,    21,   416,    -1,     4,    89,    21,   414,   421,
      -1,     4,    89,   273,   414,   423,    -1,     4,   119,   273,
     414,   423,    -1,     4,   120,   273,   414,   423,    -1,     4,
     123,    21,    -1,     4,   123,    21,   416,    -1,     4,   123,
      21,   414,   421,    -1,     4,   123,   273,   414,   423,    -1,
       4,   143,    -1,     4,   167,    -1,     4,   196,    27,    -1,
       4,   196,   121,    -1,     4,   196,   191,   414,   423,    -1,
       4,   196,   259,   414,   421,   422,    -1,     4,   206,   191,
     404,   414,   423,    -1,     4,   259,   300,    -1,     4,   259,
     308,    -1,     4,   259,   155,    -1,     4,   261,   259,   414,
     421,   422,    -1,     4,   267,   259,   414,   421,   422,    -1,
       4,   267,   191,   414,   423,    -1,     4,   267,   334,   414,
     423,    -1,     4,   268,    -1,     4,   268,   581,    -1,     4,
     285,   144,    -1,     4,   285,   191,   414,   423,    -1,     4,
     285,   259,   414,   421,   422,    -1,     4,   285,   325,    -1,
       4,   297,    -1,     4,   327,    -1,     4,   327,     4,    -1,
       4,   329,    -1,     4,   329,   284,    -1,     4,   342,    -1,
       4,   353,    27,    -1,     4,   353,   121,    -1,     4,   353,
     191,   414,   423,    -1,     4,   353,   259,   414,   421,   422,
      -1,     4,   387,    -1,     4,   100,    -1,   167,   571,    -1,
     167,   237,    -1,   237,    -1,   261,   296,   404,   404,    -1,
     296,   296,   404,   404,    -1,   266,    -1,   268,   581,    -1,
     297,   572,    -1,   297,   237,    -1,   305,   573,    -1,     5,
      71,    -1,     5,   143,    -1,     5,   175,    -1,     5,   268,
     581,    -1,     5,   327,    -1,     5,   327,   237,    -1,   327,
      16,    -1,   327,   106,   224,    -1,   387,    -1,   100,    -1,
      31,    -1,   273,    -1,   181,    -1,   246,    -1,    -1,   404,
     404,    -1,    -1,   404,   404,    -1,    -1,   329,    -1,    -1,
      -1,   260,    -1,   275,    -1,   349,    -1,    61,    -1,   145,
      -1,   568,   414,   421,   422,   406,   583,   590,    -1,   297,
     568,   414,   421,   422,   406,   583,   590,    -1,   568,     5,
      -1,   568,     5,     4,     5,   414,   421,    -1,   568,     4,
      -1,   568,     4,     4,     5,   414,   421,    -1,   138,     5,
      -1,   138,     5,     5,    -1,   404,   404,    -1,   147,    -1,
      37,    -1,    42,   404,   404,    -1,   220,   404,   404,    -1,
     121,    -1,   338,   414,   421,   413,    -1,   579,   580,    -1,
     580,    -1,   581,   401,   406,    -1,    71,   401,     5,    -1,
     100,   401,     4,     4,    -1,   387,   401,     4,    -1,   143,
     401,     5,    -1,   329,   401,     5,    -1,   593,    -1,   594,
      -1,   231,    -1,   297,    -1,   167,    -1,    99,    -1,   140,
      -1,   115,    -1,   223,    -1,   284,    -1,   107,    -1,   178,
      -1,   315,    -1,   133,    -1,   574,    -1,   574,   579,    -1,
      -1,    -1,   584,   588,    -1,     5,   568,   414,   421,   422,
     406,    -1,   297,     5,   568,   414,   421,   422,   406,    -1,
     328,     5,    -1,    16,    -1,   241,   404,   404,    -1,   339,
      -1,   339,   404,   404,    -1,   135,    -1,   190,    -1,   406,
      -1,   329,   406,    -1,   588,   589,    -1,   589,    -1,   581,
     401,   406,    -1,    -1,    -1,   591,   592,    -1,   592,   593,
      -1,   593,    -1,   327,   401,     5,    -1,    59,   401,   561,
       5,     5,    -1,    -1,    90,    -1,     4,    -1,   189,     4,
      -1,    71,     5,    -1,     4,    71,     5,    -1,    48,   418,
      -1,     4,    48,   418,    -1,   336,   404,    -1,     4,   336,
     404,    -1,   352,   406,    -1,     4,   352,   406,    -1,   305,
      -1,     4,   305,    -1,   166,    -1,     4,   166,    -1,   107,
      -1,     4,   107,    -1,   348,    -1,     4,   348,    -1,   113,
      -1,     4,   113,    -1,   335,    -1,     4,   335,    -1,    51,
      -1,     4,    51,    -1,    69,    -1,    71,     5,    -1,   207,
     417,    -1,   274,   404,   404,    -1,   325,   414,    -1,   336,
     404,    -1,    48,   418,    -1,   207,     4,    -1,   400,    -1,
     398,    -1,   390,    -1,   231,    -1,   404,   404,   404,   404,
      -1,   404,   404,    -1,   416,   404,   404,    -1,   414,   421,
     413,    -1,   338,   599,    -1,    41,   404,   404,    -1,   220,
     600,    -1,   266,   406,    -1,   404,   404,    -1,   416,   404,
     404,    -1,   414,   421,   413,    -1,    42,   404,   404,    -1,
     404,   404,    -1,   121,   404,   404,    -1,   406,    -1,   358,
     415,   421,    -1,     5,     4,     4,    -1,   347,    -1,    77,
     604,    -1,   192,     4,    -1,   280,     4,    -1,   291,   404,
      -1,     4,     4,     4,     4,     4,     4,     4,     4,     4,
      -1,     4,     4,     4,     4,     4,     4,    -1,    58,    -1,
     157,    -1,   282,    -1,    97,    -1,   167,   606,    -1,   297,
     607,    -1,    42,   404,   404,    -1,   220,   404,   404,    -1,
     121,    -1,   303,   121,    -1,    42,   404,   404,    -1,   220,
     404,   404,    -1,   121,    -1,   303,   121,    -1,   215,    -1,
      12,    -1,   136,    -1,   231,    -1,    35,    -1,   117,    -1,
       4,    -1,    69,    -1,    65,     5,    -1,   325,   414,    -1,
     352,     4,     4,     4,    -1,   325,   414,    -1,    65,     5,
      -1,    65,   171,    -1,    65,   290,    -1,   325,   414,    -1,
     352,     4,     4,     4,    -1,    65,     5,    -1,    65,   171,
      -1,    65,   290,    -1,    65,   350,    -1,   325,   414,    -1,
     352,     4,     4,     4,    -1,   404,    -1,   404,   105,    -1,
     220,   616,    -1,   338,   404,    -1,   338,   404,   105,    -1,
      42,    -1,   404,    -1,   121,    -1,    26,   619,    -1,   138,
     620,    -1,   395,   618,    -1,   236,   637,    -1,   122,   638,
      -1,   254,     5,    -1,   132,     5,    -1,    65,     5,    -1,
     313,     4,    -1,   132,     5,   432,    -1,    65,     5,   432,
      -1,   313,     4,   432,    -1,   282,    94,   627,    -1,   173,
      94,   630,    -1,   172,    94,   633,    -1,   621,    -1,   177,
     621,    -1,   326,   622,    -1,   309,   623,    -1,   128,    94,
     624,    -1,   218,   625,    -1,   282,   177,   628,    -1,   282,
      94,   629,    -1,   173,   177,   631,    -1,   173,    94,   632,
      -1,   172,   177,   634,    -1,   172,    94,   635,    -1,   277,
     636,    -1,   132,     5,    -1,    65,     5,    -1,   313,     4,
      -1,   132,     5,    -1,    65,     5,    -1,   313,     4,    -1,
     132,     5,    -1,    65,     5,    -1,   313,     4,    -1,   132,
       5,    -1,    65,     5,    -1,   313,     4,    -1,   177,   626,
      -1,   132,     5,     4,    -1,    65,     5,     4,    -1,   313,
       4,     4,    -1,   132,     5,    -1,    65,     5,    -1,   313,
       4,    -1,   132,     5,   432,    -1,    65,     5,   432,    -1,
     313,     4,   432,    -1,   132,     5,    -1,    65,     5,    -1,
     313,     4,    -1,   132,     5,    -1,    65,     5,    -1,   313,
       4,    -1,   132,     5,   432,    -1,    65,     5,   432,    -1,
     313,     4,   432,    -1,   132,     5,    -1,    65,     5,    -1,
     313,     4,    -1,   132,     5,    -1,    65,     5,    -1,   313,
       4,    -1,   132,     5,   432,    -1,    65,     5,   432,    -1,
     313,     4,   432,    -1,   132,     5,    -1,    65,     5,    -1,
     313,     4,    -1,   132,     5,    -1,    65,     5,    -1,   313,
       4,    -1,   132,     5,    -1,    65,     5,    -1,   313,     4,
      -1,   132,     5,   432,    -1,    65,     5,   432,    -1,   313,
       4,   432,    -1,   132,     5,     5,   432,    -1,   640,     4,
       4,   404,   404,   409,    -1,   640,     4,    -1,   107,    -1,
      54,    -1,   340,    -1,   151,    -1,   118,    -1,    -1,     4,
     404,   404,   404,   404,    -1,   235,    -1,   235,     4,   404,
     404,   404,   404,    -1,   138,   309,   642,    -1,   138,    63,
      -1,   138,    63,   404,   404,    -1,     4,    -1,     4,     4,
      -1,   404,   414,    -1,   404,   404,    -1,   338,   404,   404,
      -1,   415,   421,   422,    -1,    15,   647,    -1,   279,     4,
      -1,   276,   646,    -1,    23,   645,    -1,     4,     4,    -1,
       4,     5,    -1,   329,     4,     5,    -1,     4,     4,    -1,
       4,     5,    -1,   329,     4,     5,    -1,     4,    -1,     4,
     415,   421,    -1,   338,     4,   415,   421,    -1,   260,    69,
      -1,   265,    -1,   404,   404,    -1,   404,   404,    11,   404,
     404,    -1,   404,   404,    11,   416,   404,   404,    -1,   404,
     404,    11,   414,   421,   413,    -1,   338,   650,    -1,   137,
      -1,   137,   404,    -1,   404,   404,    -1,   404,   404,    11,
     404,   404,    -1,   404,   404,    11,   416,   404,   404,    -1,
     404,   404,    11,   414,   421,   413,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   510,   510,   511,   512,   513,   514,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,   531,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   541,   542,   543,   544,   545,   546,   547,
     548,   549,   550,   551,   552,   553,   554,   555,   556,   557,
     558,   559,   560,   561,   562,   563,   564,   565,   566,   567,
     568,   569,   572,   573,   576,   577,   578,   579,   580,   581,
     582,   583,   584,   585,   586,   589,   591,   592,   593,   594,
     596,   597,   598,   599,   602,   603,   604,   605,   606,   609,
     610,   613,   614,   615,   618,   621,   624,   627,   639,   646,
     653,   661,   662,   663,   664,   665,   668,   669,   670,   671,
     672,   673,   674,   675,   676,   677,   678,   679,   680,   681,
     682,   683,   684,   685,   686,   687,   688,   689,   690,   691,
     692,   693,   694,   695,   698,   699,   702,   703,   704,   705,
     706,   707,   710,   711,   712,   713,   714,   715,   716,   717,
     718,   719,   720,   721,   722,   723,   724,   725,   726,   729,
     730,   731,   732,   733,   734,   735,   736,   737,   740,   741,
     742,   743,   744,   747,   748,   749,   750,   751,   752,   753,
     754,   757,   758,   759,   762,   763,   764,   765,   768,   769,
     770,   773,   774,   775,   778,   779,   780,   784,   785,   786,
     787,   788,   789,   790,   791,   792,   793,   794,   795,   798,
     799,   800,   801,   802,   803,   804,   805,   806,   809,   810,
     813,   814,   815,   816,   817,   818,   821,   822,   823,   824,
     827,   828,   829,   830,   831,   832,   835,   836,   837,   838,
     839,   840,   841,   842,   843,   844,   848,   849,   850,   851,
     854,   855,   858,   859,   862,   863,   866,   867,   870,   871,
     875,   876,   877,   878,   879,   880,   881,   882,   885,   886,
     889,   890,   891,   893,   895,   896,   897,   899,   903,   904,
     907,   908,   910,   913,   915,   921,   922,   923,   924,   927,
     928,   929,   932,   933,   934,   935,   936,   937,   938,   944,
     945,   948,   949,   950,   951,   952,   955,   956,   957,   958,
     961,   962,   967,   972,   979,   981,   983,   985,   987,   989,
     990,   991,   994,   996,   998,  1000,  1002,  1005,  1006,  1007,
    1011,  1012,  1015,  1016,  1017,  1018,  1019,  1020,  1021,  1022,
    1025,  1026,  1027,  1028,  1030,  1034,  1037,  1040,  1046,  1052,
    1055,  1056,  1057,  1060,  1061,  1062,  1069,  1070,  1071,  1072,
    1075,  1076,  1079,  1080,  1083,  1084,  1085,  1089,  1091,  1093,
    1097,  1098,  1099,  1100,  1103,  1104,  1107,  1109,  1110,  1111,
    1112,  1115,  1116,  1118,  1119,  1120,  1123,  1125,  1127,  1128,
    1130,  1132,  1134,  1136,  1140,  1143,  1144,  1145,  1146,  1149,
    1150,  1153,  1154,  1157,  1158,  1159,  1160,  1161,  1162,  1163,
    1164,  1165,  1166,  1167,  1168,  1169,  1170,  1171,  1172,  1173,
    1174,  1175,  1176,  1177,  1178,  1179,  1180,  1181,  1182,  1183,
    1184,  1185,  1186,  1187,  1188,  1189,  1190,  1191,  1193,  1194,
    1195,  1196,  1197,  1198,  1199,  1201,  1202,  1203,  1206,  1208,
    1212,  1214,  1218,  1219,  1220,  1221,  1222,  1223,  1224,  1225,
    1228,  1229,  1230,  1233,  1234,  1237,  1238,  1240,  1242,  1243,
    1244,  1245,  1246,  1247,  1254,  1255,  1258,  1259,  1260,  1263,
    1264,  1267,  1270,  1271,  1273,  1277,  1278,  1279,  1280,  1283,
    1287,  1289,  1290,  1291,  1292,  1293,  1294,  1295,  1296,  1297,
    1298,  1299,  1300,  1301,  1302,  1303,  1306,  1307,  1308,  1311,
    1312,  1315,  1317,  1325,  1327,  1329,  1333,  1334,  1336,  1339,
    1342,  1343,  1347,  1349,  1352,  1357,  1358,  1359,  1363,  1364,
    1365,  1368,  1369,  1370,  1373,  1374,  1376,  1377,  1378,  1379,
    1380,  1381,  1382,  1383,  1384,  1385,  1387,  1388,  1391,  1392,
    1395,  1396,  1397,  1398,  1401,  1402,  1405,  1407,  1410,  1414,
    1415,  1416,  1418,  1420,  1424,  1425,  1426,  1429,  1430,  1431,
    1432,  1433,  1434,  1437,  1438,  1439,  1440,  1441,  1442,  1443,
    1446,  1447,  1450,  1453,  1454,  1455,  1458,  1461,  1462,  1463,
    1466,  1467,  1468,  1471,  1472,  1473,  1474,  1475,  1476,  1479,
    1480,  1481,  1482,  1483,  1484,  1485,  1486,  1489,  1490,  1491,
    1492,  1495,  1496,  1499,  1500,  1503,  1504,  1507,  1508,  1511,
    1512,  1515,  1516,  1517,  1520,  1521,  1524,  1525,  1528,  1531,
    1539,  1540,  1543,  1544,  1545,  1546,  1547,  1548,  1549,  1550,
    1551,  1552,  1553,  1554,  1555,  1556,  1557,  1558,  1559,  1560,
    1563,  1566,  1567,  1570,  1571,  1572,  1573,  1576,  1577,  1578,
    1579,  1582,  1583,  1584,  1585,  1586,  1587,  1590,  1591,  1592,
    1593,  1594,  1595,  1597,  1598,  1603,  1604,  1607,  1609,  1611,
    1614,  1615,  1616,  1617,  1618,  1619,  1622,  1634,  1643,  1646,
    1648,  1650,  1652,  1653,  1655,  1657,  1659,  1661,  1663,  1664,
    1665,  1668,  1669,  1670,  1671,  1672,  1673,  1675,  1676,  1677,
    1680,  1683,  1685,  1687,  1689,  1691,  1693,  1695,  1697,  1700,
    1702,  1704,  1706,  1707,  1708,  1709,  1710,  1711,  1712,  1713,
    1714,  1717,  1718,  1719,  1720,  1721,  1722,  1723,  1725,  1727,
    1728,  1729,  1732,  1733,  1734,  1735,  1736,  1737,  1739,  1740,
    1741,  1744,  1745,  1746,  1747,  1748,  1751,  1754,  1757,  1760,
    1763,  1766,  1769,  1772,  1775,  1780,  1783,  1786,  1789,  1792,
    1795,  1798,  1801,  1804,  1807,  1810,  1815,  1818,  1821,  1824,
    1827,  1830,  1833,  1836,  1839,  1844,  1846,  1848,  1850,  1852,
    1854,  1859,  1861,  1863,  1867,  1870,  1873,  1876,  1879,  1882,
    1885,  1888,  1891,  1894,  1897,  1902,  1903,  1904,  1905,  1906,
    1907,  1908,  1910,  1912,  1913,  1914,  1917,  1918,  1919,  1920,
    1921,  1922,  1924,  1925,  1926,  1929,  1931,  1933,  1934,  1936,
    1938,  1942,  1943,  1946,  1949,  1950,  1951,  1954,  1957,  1958,
    1959,  1960,  1961,  1962,  1963,  1966,  1974,  1975,  1976,  1977,
    1979,  1981,  1982,  1982,  1983,  1984,  1985,  1986,  1987,  1989,
    1990,  1992,  1995,  1997,  1999,  2002,  2003,  2004,  2007,  2010,
    2013,  2017,  2020,  2023,  2026,  2030,  2035,  2040,  2042,  2044,
    2045,  2047,  2049,  2051,  2053,  2055,  2056,  2057,  2059,  2061,
    2063,  2067,  2072,  2074,  2076,  2078,  2080,  2082,  2084,  2086,
    2088,  2090,  2092,  2095,  2096,  2098,  2100,  2101,  2103,  2105,
    2106,  2107,  2109,  2111,  2112,  2113,  2115,  2116,  2119,  2123,
    2126,  2129,  2133,  2138,  2144,  2145,  2146,  2148,  2149,  2150,
    2154,  2156,  2157,  2158,  2161,  2164,  2167,  2170,  2173,  2175,
    2176,  2178,  2183,  2186,  2187,  2188,  2191,  2195,  2196,  2198,
    2199,  2200,  2202,  2203,  2205,  2206,  2207,  2212,  2213,  2215,
    2216,  2218,  2219,  2220,  2221,  2222,  2223,  2225,  2227,  2229,
    2230,  2231,  2233,  2235,  2236,  2237,  2238,  2239,  2240,  2241,
    2242,  2243,  2244,  2245,  2247,  2249,  2250,  2251,  2252,  2254,
    2255,  2256,  2257,  2258,  2260,  2261,  2262,  2263,  2264,  2265,
    2266,  2269,  2270,  2271,  2272,  2273,  2274,  2275,  2276,  2277,
    2278,  2279,  2280,  2281,  2282,  2283,  2284,  2285,  2286,  2287,
    2288,  2289,  2292,  2293,  2294,  2295,  2296,  2297,  2305,  2312,
    2321,  2330,  2337,  2342,  2347,  2354,  2362,  2370,  2377,  2382,
    2387,  2392,  2397,  2402,  2407,  2412,  2417,  2423,  2433,  2443,
    2453,  2460,  2470,  2480,  2489,  2501,  2514,  2520,  2523,  2524,
    2533,  2535,  2537,  2542,  2546,  2547,  2548,  2554,  2556,  2558,
    2561,  2562,  2563,  2564,  2565,  2566,  2567,  2570,  2571,  2572,
    2573,  2574,  2575,  2577,  2579,  2581,  2583,  2585,  2587,  2589,
    2591,  2593,  2596,  2597,  2598,  2599,  2601,  2604,  2606,  2608,
    2609,  2610,  2612,  2615,  2618,  2620,  2621,  2622,  2623,  2624,
    2626,  2627,  2628,  2629,  2630,  2631,  2632,  2634,  2636,  2638,
    2641,  2642,  2643,  2645,  2648,  2649,  2650,  2651,  2652,  2654,
    2657,  2661,  2662,  2663,  2664,  2667,  2670,  2673,  2675,  2676,
    2677,  2678,  2680,  2683,  2684,  2686,  2687,  2688,  2689,  2690,
    2692,  2693,  2694,  2696,  2699,  2700,  2701,  2702,  2703,  2704,
    2706,  2708,  2709,  2710,  2711,  2713,  2715,  2716,  2717,  2718,
    2719,  2720,  2722,  2723,  2725,  2726,  2729,  2730,  2731,  2732,
    2735,  2736,  2739,  2740,  2743,  2744,  2747,  2760,  2761,  2765,
    2766,  2770,  2771,  2774,  2778,  2784,  2786,  2789,  2791,  2794,
    2796,  2800,  2801,  2802,  2803,  2804,  2805,  2806,  2810,  2811,
    2814,  2815,  2816,  2817,  2818,  2819,  2820,  2821,  2824,  2825,
    2826,  2827,  2828,  2829,  2830,  2831,  2832,  2833,  2834,  2835,
    2838,  2839,  2842,  2843,  2843,  2846,  2848,  2850,  2853,  2854,
    2855,  2856,  2857,  2858,  2861,  2862,  2865,  2866,  2869,  2873,
    2874,  2874,  2877,  2878,  2881,  2884,  2888,  2889,  2890,  2891,
    2892,  2893,  2894,  2895,  2896,  2897,  2898,  2899,  2901,  2902,
    2903,  2904,  2905,  2906,  2907,  2908,  2909,  2910,  2911,  2912,
    2913,  2914,  2917,  2918,  2919,  2920,  2921,  2922,  2923,  2924,
    2930,  2931,  2932,  2933,  2936,  2938,  2939,  2944,  2946,  2947,
    2948,  2949,  2952,  2953,  2958,  2962,  2963,  2964,  2967,  2968,
    2973,  2974,  2977,  2979,  2980,  2981,  2986,  2988,  2994,  2995,
    2996,  2997,  3000,  3001,  3004,  3006,  3008,  3009,  3012,  3014,
    3015,  3016,  3019,  3020,  3021,  3024,  3025,  3026,  3029,  3030,
    3033,  3034,  3035,  3038,  3042,  3043,  3044,  3045,  3046,  3049,
    3050,  3051,  3052,  3053,  3054,  3057,  3058,  3059,  3060,  3061,
    3064,  3065,  3066,  3069,  3070,  3071,  3072,  3073,  3074,  3077,
    3078,  3079,  3082,  3084,  3086,  3088,  3089,  3090,  3093,  3094,
    3095,  3096,  3097,  3098,  3099,  3100,  3101,  3102,  3103,  3104,
    3105,  3108,  3109,  3110,  3113,  3114,  3115,  3118,  3119,  3120,
    3123,  3124,  3125,  3128,  3129,  3130,  3131,  3134,  3135,  3136,
    3139,  3141,  3143,  3147,  3148,  3149,  3152,  3153,  3154,  3157,
    3159,  3161,  3165,  3166,  3167,  3170,  3171,  3172,  3175,  3177,
    3179,  3183,  3184,  3185,  3188,  3189,  3190,  3193,  3194,  3195,
    3198,  3200,  3202,  3206,  3210,  3212,  3217,  3220,  3221,  3222,
    3223,  3226,  3227,  3230,  3232,  3234,  3235,  3236,  3240,  3241,
    3242,  3245,  3246,  3249,  3251,  3252,  3253,  3254,  3257,  3258,
    3259,  3262,  3263,  3264,  3267,  3268,  3273,  3275,  3278,  3285,
    3286,  3288,  3293,  3295,  3298,  3299,  3300,  3301,  3303,  3308
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
  "TEMPLATE_", "TEXT_", "THREADS_", "TIFF_", "THREED_", "THRESHOLD_",
  "THICK_", "TOP_", "TRANSPARENCY_", "TRIANGLE_", "TO_", "TOGGLE_",
  "TOPHAT_", "TRUE_", "TYPE_", "UNDO_", "UNHIGHLITE_", "UNLOAD_",
  "UNSELECT_", "UPDATE_", "UP_", "USER_", "VALUE_", "VAR_", "VIEW_",
  "VECTOR_", "VERSION_", "VERTEX_", "VERTICAL_", "WARP_", "WCS_", "WCSA_",
  "WCSB_", "WCSC_", "WCSD_", "WCSE_", "WCSF_", "WCSG_", "WCSH_", "WCSI_",
  "WCSJ_", "WCSK_", "WCSL_", "WCSM_", "WCSN_", "WCSO_", "WCSP_", "WCSQ_",
  "WCSR_", "WCSS_", "WCST_", "WCSU_", "WCSV_", "WCSW_", "WCSX_", "WCSY_",
  "WCSZ_", "WCS0_", "WFPC2_", "WIDTH_", "WIN32_", "XML_", "XY_", "YES_",
  "ZERO_", "ZMAX_", "ZSCALE_", "PIXMASK_", "ZOOM_", "FIELDS_", "'Y'",
  "'N'", "'X'", "'='", "$accept", "command", "numeric", "debug", "yesno",
  "fileNameType", "optangle", "angle", "sexagesimal", "hms", "dms",
  "coord", "coordSystem", "wcsSystem", "internalSystem", "maskType",
  "maskBlend", "scaleType", "minmaxMode", "skyFrame", "skyFormat",
  "skyDist", "shmType", "incrLoad", "layerType", "lineEnd", "pointShape",
  "pointSize", "analysisTask", "analysisMethod", "endian", "threed",
  "threedShade", "threedShadeNormal", "threedBorder", "threedCompass",
  "threedHighlite", "threedView", "bin", "binAbout", "binFactor",
  "binFunction", "binTo", "block", "blockTo", "clip", "clipScope",
  "clipMode", "clipMinMax", "clipZScale", "colormap", "colormapMotion",
  "colorscale", "ghsValue", "contour", "contourAux", "contourCreate",
  "contourDelete", "contourLoad", "contourClipMode", "contourClipScope",
  "contourMethod", "contourPaste", "contourSave", "contourStyle", "crop",
  "crop3d", "crosshair", "cube", "cutMethod", "fade", "fitsy", "get",
  "getHorzCut", "getVertCut", "getBin", "getBinCols", "getBlock",
  "getClip", "getClipMinMax", "getClipZScale", "getColorbar",
  "getColorMap", "getColorMapLevel", "getColorScale", "getColorScaleLevel",
  "getContour", "getContourClip", "getContourColorScale", "getCoord",
  "getCrop", "getCrosshair", "getCube", "getCursor", "getData", "getInfo",
  "getiis", "getIISFileName", "getFits", "getFitsExt", "getFitsHeader",
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
  "loadFitsRGBImage", "loadNRRD", "loadPhoto", "loadTiff", "loadIncr",
  "macosx", "magnifier", "match", "marker", "@1", "markerCallBack",
  "markerCentroid", "markerCreate", "compositeOperation",
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
     645,   646,   647,   648,   649,   650,   651,   652,    89,    78,
      88,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   402,   403,   403,   403,   403,   403,   403,   403,   403,
     403,   403,   403,   403,   403,   403,   403,   403,   403,   403,
     403,   403,   403,   403,   403,   403,   403,   403,   403,   403,
     403,   403,   403,   403,   403,   403,   403,   403,   403,   403,
     403,   403,   403,   403,   403,   403,   403,   403,   403,   403,
     403,   403,   403,   403,   403,   403,   403,   403,   403,   403,
     403,   403,   404,   404,   405,   405,   405,   405,   405,   405,
     405,   405,   405,   405,   405,   406,   406,   406,   406,   406,
     406,   406,   406,   406,   407,   407,   407,   407,   407,   408,
     408,   409,   409,   409,   410,   411,   412,   413,   413,   413,
     413,   414,   414,   414,   414,   414,   415,   415,   415,   415,
     415,   415,   415,   415,   415,   415,   415,   415,   415,   415,
     415,   415,   415,   415,   415,   415,   415,   415,   415,   415,
     415,   415,   415,   415,   416,   416,   417,   417,   417,   417,
     417,   417,   418,   418,   418,   418,   418,   418,   418,   418,
     418,   418,   418,   418,   418,   418,   418,   418,   418,   419,
     419,   419,   419,   419,   419,   419,   419,   419,   420,   420,
     420,   420,   420,   421,   421,   421,   421,   421,   421,   421,
     421,   422,   422,   422,   423,   423,   423,   423,   424,   424,
     424,   425,   425,   425,   426,   426,   426,   427,   427,   427,
     427,   427,   427,   427,   427,   427,   427,   427,   427,   428,
     428,   428,   428,   428,   428,   428,   428,   428,   429,   429,
     430,   430,   430,   430,   430,   430,   431,   431,   431,   431,
     432,   432,   432,   432,   432,   432,   433,   433,   433,   433,
     433,   433,   433,   433,   433,   433,   434,   434,   434,   434,
     435,   435,   436,   436,   437,   437,   438,   438,   439,   439,
     440,   440,   440,   440,   440,   440,   440,   440,   441,   441,
     442,   442,   442,   442,   442,   442,   442,   442,   443,   443,
     444,   444,   444,   444,   444,   445,   445,   445,   445,   446,
     446,   446,   447,   447,   447,   447,   447,   447,   447,   448,
     448,   449,   449,   449,   449,   449,   450,   450,   450,   450,
     451,   451,   451,   451,   452,   452,   452,   452,   452,   452,
     452,   452,   453,   453,   453,   453,   453,   454,   454,   454,
     455,   455,   456,   456,   456,   456,   456,   456,   456,   456,
     457,   457,   457,   457,   457,   458,   458,   458,   458,   458,
     459,   459,   459,   460,   460,   460,   461,   461,   461,   461,
     462,   462,   463,   463,   464,   464,   464,   465,   465,   465,
     466,   466,   466,   466,   467,   467,   467,   467,   467,   467,
     467,   468,   468,   468,   468,   468,   469,   469,   469,   469,
     469,   469,   469,   469,   470,   471,   471,   471,   471,   472,
     472,   473,   473,   474,   474,   474,   474,   474,   474,   474,
     474,   474,   474,   474,   474,   474,   474,   474,   474,   474,
     474,   474,   474,   474,   474,   474,   474,   474,   474,   474,
     474,   474,   474,   474,   474,   474,   474,   474,   474,   474,
     474,   474,   474,   474,   474,   474,   474,   474,   475,   475,
     476,   476,   477,   477,   477,   477,   477,   477,   477,   477,
     478,   478,   478,   479,   479,   480,   480,   480,   480,   480,
     480,   480,   480,   480,   481,   481,   482,   482,   482,   483,
     483,   484,   485,   485,   485,   486,   486,   486,   486,   487,
     488,   488,   488,   488,   488,   488,   488,   488,   488,   488,
     488,   488,   488,   488,   488,   488,   489,   489,   489,   490,
     490,   491,   491,   492,   492,   492,   493,   493,   493,   494,
     495,   495,   496,   496,   496,   497,   497,   497,   498,   498,
     498,   499,   499,   499,   500,   500,   500,   500,   500,   500,
     500,   500,   500,   500,   500,   500,   500,   500,   501,   501,
     502,   502,   502,   502,   503,   503,   504,   504,   504,   505,
     505,   505,   505,   505,   506,   506,   506,   507,   507,   507,
     507,   507,   507,   508,   508,   508,   508,   508,   508,   508,
     509,   509,   510,   511,   511,   511,   512,   513,   513,   513,
     514,   514,   514,   515,   515,   515,   515,   515,   515,   516,
     516,   516,   516,   516,   516,   516,   516,   517,   517,   517,
     517,   518,   518,   519,   519,   520,   520,   521,   521,   522,
     522,   523,   523,   523,   524,   524,   525,   525,   526,   526,
     527,   527,   528,   528,   528,   528,   528,   528,   528,   528,
     528,   528,   528,   528,   528,   528,   528,   528,   528,   528,
     529,   530,   530,   531,   531,   531,   531,   532,   532,   532,
     532,   533,   533,   533,   533,   533,   533,   534,   534,   534,
     534,   534,   534,   534,   534,   535,   535,   536,   536,   536,
     537,   537,   537,   537,   537,   537,   537,   537,   537,   538,
     538,   538,   538,   538,   538,   538,   538,   538,   538,   538,
     538,   539,   539,   539,   539,   539,   539,   539,   539,   539,
     540,   541,   541,   541,   541,   541,   541,   541,   541,   541,
     541,   541,   541,   541,   541,   541,   541,   541,   541,   541,
     541,   542,   542,   542,   542,   542,   542,   542,   542,   542,
     542,   542,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   544,   544,   544,   544,   544,   545,   545,   545,   545,
     545,   545,   545,   545,   545,   546,   546,   546,   546,   546,
     546,   546,   546,   546,   546,   546,   547,   547,   547,   547,
     547,   547,   547,   547,   547,   548,   548,   548,   548,   548,
     548,   548,   548,   548,   549,   549,   549,   549,   549,   549,
     549,   549,   549,   549,   549,   550,   550,   550,   550,   550,
     550,   550,   550,   550,   550,   550,   551,   551,   551,   551,
     551,   551,   551,   551,   551,   552,   552,   552,   552,   552,
     552,   553,   553,   554,   555,   555,   555,   556,   557,   557,
     557,   557,   557,   557,   557,   558,   559,   559,   559,   559,
     559,   559,   560,   559,   559,   559,   559,   559,   559,   559,
     559,   559,   559,   559,   559,   559,   559,   559,   559,   559,
     559,   559,   559,   559,   559,   559,   559,   559,   559,   559,
     559,   559,   559,   559,   559,   559,   559,   559,   559,   559,
     559,   559,   559,   559,   559,   559,   559,   559,   559,   559,
     559,   559,   559,   559,   559,   559,   559,   559,   559,   559,
     559,   559,   559,   559,   559,   559,   559,   559,   559,   559,
     559,   559,   559,   559,   559,   559,   559,   559,   559,   559,
     559,   559,   559,   559,   559,   559,   559,   559,   559,   559,
     559,   559,   559,   559,   559,   559,   559,   559,   559,   559,
     559,   559,   559,   559,   559,   559,   559,   559,   559,   559,
     559,   559,   559,   559,   559,   559,   559,   559,   559,   559,
     559,   559,   559,   559,   559,   559,   559,   559,   559,   559,
     559,   559,   559,   559,   559,   559,   559,   559,   559,   559,
     559,   559,   559,   559,   559,   559,   559,   559,   559,   559,
     559,   561,   561,   561,   561,   561,   561,   561,   561,   561,
     561,   561,   561,   561,   561,   561,   561,   561,   561,   561,
     561,   561,   562,   562,   562,   562,   562,   562,   563,   563,
     563,   563,   563,   563,   563,   563,   563,   563,   563,   563,
     563,   563,   563,   563,   563,   563,   563,   563,   563,   563,
     563,   563,   563,   563,   563,   563,   563,   563,   564,   564,
     565,   565,   565,   565,   566,   566,   566,   567,   567,   567,
     568,   568,   568,   568,   568,   568,   568,   569,   569,   569,
     569,   569,   569,   569,   569,   569,   569,   569,   569,   569,
     569,   569,   569,   569,   569,   569,   569,   569,   569,   569,
     569,   569,   569,   569,   569,   569,   569,   569,   569,   569,
     569,   569,   569,   569,   569,   569,   569,   569,   569,   569,
     569,   569,   569,   569,   569,   569,   569,   569,   569,   569,
     569,   569,   569,   569,   569,   569,   569,   569,   569,   569,
     569,   569,   569,   569,   569,   569,   569,   569,   569,   569,
     569,   569,   569,   569,   569,   569,   569,   569,   569,   569,
     569,   569,   569,   569,   569,   569,   569,   569,   569,   569,
     569,   569,   569,   569,   569,   569,   570,   570,   570,   570,
     571,   571,   572,   572,   573,   573,   574,   575,   575,   575,
     575,   575,   575,   576,   576,   577,   577,   577,   577,   577,
     577,   578,   578,   578,   578,   578,   578,   578,   579,   579,
     580,   580,   580,   580,   580,   580,   580,   580,   581,   581,
     581,   581,   581,   581,   581,   581,   581,   581,   581,   581,
     582,   582,   583,   584,   583,   585,   585,   585,   586,   586,
     586,   586,   586,   586,   587,   587,   588,   588,   589,   590,
     591,   590,   592,   592,   593,   594,   595,   595,   595,   595,
     595,   595,   595,   595,   595,   595,   595,   595,   595,   595,
     595,   595,   595,   595,   595,   595,   595,   595,   595,   595,
     595,   595,   596,   596,   596,   596,   596,   596,   596,   596,
     597,   597,   597,   597,   598,   598,   598,   598,   598,   598,
     598,   598,   599,   599,   599,   600,   600,   600,   601,   601,
     601,   601,   602,   602,   602,   602,   603,   603,   604,   604,
     604,   604,   605,   605,   606,   606,   606,   606,   607,   607,
     607,   607,   608,   608,   608,   609,   609,   609,   610,   610,
     611,   611,   611,   612,   613,   613,   613,   613,   613,   614,
     614,   614,   614,   614,   614,   615,   615,   615,   615,   615,
     616,   616,   616,   617,   617,   617,   617,   617,   617,   618,
     618,   618,   619,   619,   619,   619,   619,   619,   620,   620,
     620,   620,   620,   620,   620,   620,   620,   620,   620,   620,
     620,   621,   621,   621,   622,   622,   622,   623,   623,   623,
     624,   624,   624,   625,   625,   625,   625,   626,   626,   626,
     627,   627,   627,   628,   628,   628,   629,   629,   629,   630,
     630,   630,   631,   631,   631,   632,   632,   632,   633,   633,
     633,   634,   634,   634,   635,   635,   635,   636,   636,   636,
     637,   637,   637,   638,   639,   639,   639,   640,   640,   640,
     640,   641,   641,   641,   641,   641,   641,   641,   642,   642,
     642,   643,   643,   644,   644,   644,   644,   644,   645,   645,
     645,   646,   646,   646,   647,   647,   647,   647,   648,   649,
     649,   649,   649,   649,   650,   650,   650,   650,   650,   650
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
       2,     2,     2,     2,     2,     2,     2,     3,     2,     4,
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
       4,     2,     3,     2,     6,     6,     1,     1,     1,     2,
       2,     2,     3,     3,     2,    12,     2,     2,     1,     3,
       4,     2,     0,     3,     1,     2,     2,     2,     2,     2,
       4,     4,     4,     4,     3,     3,     4,     5,     8,     6,
       9,     6,     7,    10,    11,    12,     9,     5,     6,     3,
       5,     5,     5,     6,     5,     4,     4,     4,     9,    10,
      11,     9,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     7,     7,     2,     4,     4,     4,     4,     5,     4,
       4,     5,     5,     3,     4,     4,     4,     7,     9,     6,
      10,    11,    12,     9,     3,     2,     3,     5,     5,     7,
       4,     3,     3,     6,     7,     8,     7,     7,     4,     4,
       4,     9,     4,     3,     4,     7,     7,     2,     3,     3,
       3,     4,     2,     2,     4,     4,    10,     3,     4,     1,
       3,     2,     2,     2,     2,     3,     5,     4,     5,     2,
       2,     2,     2,     3,     2,     2,     2,     3,     2,     3,
       4,     3,     3,     6,     4,     2,     3,     2,     2,     4,
       3,     3,     2,     3,     1,     2,     1,     2,     2,     2,
       3,     1,     1,     1,     1,     2,     1,     2,     2,     1,
       2,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     1,     2,     2,     2,     3,     5,     7,
       7,     6,     5,     5,     6,     6,     6,     5,     6,     6,
       6,     6,     6,     6,     6,     6,     7,    11,     7,     7,
       7,     9,     9,    10,    12,    12,     3,     2,     0,     1,
       3,     4,     4,     4,     0,     1,     1,     4,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     1,
       1,     3,     3,     8,     6,    10,     7,     7,     5,     6,
       6,     3,     2,     2,     3,     4,     5,     5,     5,     3,
       4,     5,     5,     5,     5,     2,     3,     3,     3,     5,
       3,     3,     3,     3,     3,     4,     5,     5,     5,     5,
       3,     4,     5,     5,     2,     2,     3,     3,     5,     6,
       6,     3,     3,     3,     6,     6,     5,     5,     2,     3,
       3,     5,     6,     3,     2,     2,     3,     2,     3,     2,
       3,     3,     5,     6,     2,     2,     2,     2,     1,     4,
       4,     1,     2,     2,     2,     2,     2,     2,     2,     3,
       2,     3,     2,     3,     1,     1,     1,     1,     1,     1,
       0,     2,     0,     2,     0,     1,     0,     0,     1,     1,
       1,     1,     1,     7,     8,     2,     6,     2,     6,     2,
       3,     2,     1,     1,     3,     3,     1,     4,     2,     1,
       3,     3,     4,     3,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     0,     0,     2,     6,     7,     2,     1,     3,
       1,     3,     1,     1,     1,     2,     2,     1,     3,     0,
       0,     2,     2,     1,     3,     5,     0,     1,     1,     2,
       2,     3,     2,     3,     2,     3,     2,     3,     1,     2,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     2,     2,     3,     2,     2,     2,     2,
       1,     1,     1,     1,     4,     2,     3,     3,     2,     3,
       2,     2,     2,     3,     3,     3,     2,     3,     1,     3,
       3,     1,     2,     2,     2,     2,     9,     6,     1,     1,
       1,     1,     2,     2,     3,     3,     1,     2,     3,     3,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     4,     2,     2,     2,     2,     2,     4,     2,
       2,     2,     2,     2,     4,     1,     2,     2,     2,     3,
       1,     1,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     3,     3,     3,     3,     3,     3,     1,     2,
       2,     2,     3,     2,     3,     3,     3,     3,     3,     3,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     3,     3,     3,     2,     2,     2,
       3,     3,     3,     2,     2,     2,     2,     2,     2,     3,
       3,     3,     2,     2,     2,     2,     2,     2,     3,     3,
       3,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       3,     3,     3,     4,     6,     2,     1,     1,     1,     1,
       1,     0,     5,     1,     6,     3,     2,     4,     1,     2,
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
       0,   374,     0,     0,     0,     0,     0,     0,   403,     0,
       0,    23,     0,     0,     0,     0,     0,  1256,     0,     0,
       0,     0,  1187,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1187,    45,     0,     0,     0,     0,    51,     0,
       0,     0,    55,  1451,    57,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0,  1187,     0,
     429,     0,     0,   435,     0,     0,     0,   439,     0,   441,
       0,   443,     0,     0,   621,   447,    20,     0,   627,    21,
     632,     0,     0,   651,   636,   637,   638,   639,   653,   641,
     642,   646,   643,     0,   645,   647,     0,     0,    22,     0,
      24,     0,     0,     0,    26,     0,     0,     0,    27,     0,
     668,     0,     0,     0,   673,     0,    28,     0,  1258,   142,
    1280,     0,  1257,  1272,  1276,  1270,     0,  1268,  1278,     0,
    1274,     0,    36,     0,     0,     0,     0,     0,     0,     0,
       0,    30,   837,    31,     0,     0,     0,     0,     0,     0,
     838,    32,     0,    33,  1191,  1192,  1188,  1189,  1190,     0,
     142,  1282,     0,   136,     0,     0,     0,    35,     0,    37,
       0,  1293,  1292,  1291,  1290,    39,     0,     0,     0,     0,
       0,   173,     0,    40,     0,  1311,     0,  1308,    41,     0,
       0,     0,     0,    44,     0,    43,    42,     0,  1338,  1339,
      47,     0,     0,     0,    48,     0,     0,  1355,    49,     0,
       0,     0,     0,     0,     0,    50,  1447,  1446,  1450,  1449,
    1448,    52,     0,    53,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    54,     0,     0,  1453,    56,     0,
       0,    58,     0,     0,     0,     0,   173,    59,  1478,    60,
       0,     0,    61,     1,     4,     5,   268,     0,   260,     0,
       0,   262,     0,   270,   263,   267,   278,   279,   264,   280,
       0,   266,     0,   289,   290,   287,   286,     0,     0,   309,
       0,   294,   302,   305,   304,   303,   301,   293,   298,   299,
     300,   292,     0,     0,     0,     0,     0,     0,   297,    10,
       0,     0,     0,     0,     0,     0,     0,     0,   320,     0,
       0,     0,   328,     0,     0,     0,   339,     0,   349,   332,
       0,   351,   334,   353,   335,   364,   336,     0,     0,   337,
       0,   370,   338,     0,    94,    95,    96,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   377,     0,
       0,     0,     0,     0,   175,   180,   174,   176,   179,   178,
     177,     0,     0,   394,    69,    70,    71,    72,    73,    65,
      66,    67,    74,    68,     0,   402,   404,     0,   460,   456,
     452,   453,   457,   454,   459,   405,   463,     0,   406,   356,
     469,   473,   468,   359,   358,   357,     0,     0,   407,   480,
     409,     0,   408,   488,     0,   487,   410,   503,   506,   493,
     509,   494,   495,   496,   498,     0,   500,   501,   505,   173,
     411,     0,     0,   412,     0,     0,   173,   413,   518,   173,
     516,   414,   519,   416,   173,   520,   415,     0,   173,     0,
     417,   538,     0,   536,   554,     0,     0,     0,   542,   534,
       0,   544,   559,   547,   419,   565,   566,   420,   421,     0,
       0,   590,   591,   592,   424,   587,   588,   589,   425,     0,
     529,     0,   426,    84,   526,     0,   427,   428,   580,   580,
     567,   568,   580,   580,   432,     0,   579,   573,   578,   574,
     575,   576,   577,   431,   586,   433,   434,   582,   436,     0,
     583,   584,   585,   438,   598,   593,   594,   596,   440,   604,
     613,   615,   617,   603,   606,   607,   619,   442,     0,     0,
     624,     0,   446,   173,   626,   633,     0,   634,   652,   635,
     654,   655,   656,   640,   657,   659,   658,   660,   644,   648,
     665,     0,     0,     0,     0,   661,   649,    25,  1349,  1350,
    1351,  1352,  1353,     0,  1344,  1345,  1346,  1347,     0,     0,
       0,   670,   669,     0,     0,     0,     0,    29,   142,  1281,
       0,  1273,  1277,  1271,  1269,  1279,     0,  1275,     0,   157,
     150,   149,   147,   153,   154,   151,   155,   148,   158,   144,
     146,   156,   145,   152,   143,  1262,  1260,  1259,  1264,  1266,
     686,     0,     0,     0,     0,   680,     0,   681,     0,     0,
       0,     0,     0,     0,     0,   682,     0,   836,     0,   683,
       0,   684,     0,     0,   685,   194,   688,     0,   841,   840,
     839,     0,   844,     0,     0,     0,     0,  1022,     0,     0,
       0,   848,   852,   854,     0,  1064,     0,     0,     0,     0,
     959,     0,     0,     0,   994,     0,     0,     0,     0,     0,
       0,     0,   996,     0,     0,     0,    34,  1288,  1283,  1289,
     139,   140,   138,   141,   137,  1284,     0,  1286,  1287,  1343,
      38,     0,     0,     0,     0,  1300,  1301,     0,   173,     0,
    1298,  1295,     0,     0,     0,   173,  1318,  1321,  1319,  1320,
    1312,  1313,  1314,  1315,     0,     0,     0,    46,  1340,  1341,
       0,  1360,  1362,  1361,  1357,  1358,  1356,     0,     0,     0,
       0,     0,     0,  1363,     0,  1367,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1364,  1378,
       0,     0,     0,  1366,  1368,     0,     0,     0,  1365,  1445,
    1336,  1337,  1335,   241,     0,   252,   237,     0,   254,   238,
       0,   256,   239,  1333,  1334,  1332,   240,   243,     0,     0,
       0,   246,   242,   244,   245,     0,     0,   236,     0,  1456,
       0,     0,     0,  1461,  1474,     0,     0,  1464,     0,     0,
    1467,     0,     0,  1466,  1465,   181,  1484,     0,  1483,  1479,
     269,   265,     0,   274,     0,   271,     0,   288,   291,   168,
     171,   172,   170,   169,   306,   307,   308,   296,   295,   311,
     313,   312,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   341,     0,     0,   333,   352,
       0,     0,     0,   173,     0,     0,     0,   371,   378,   100,
      97,    98,    99,   173,   380,   379,     0,     0,     0,     0,
       0,     0,     0,   393,     0,   389,   387,   386,   401,   455,
       0,     0,   458,   464,   474,   475,   470,   471,   476,   478,
     477,   472,   360,   361,   467,   466,   482,   481,     0,   486,
     491,     0,   507,   508,   492,   510,   499,   497,   502,   490,
       0,     0,   173,   173,   181,   181,   181,   173,     0,     0,
     173,   555,   537,   548,     0,   539,    84,   550,     0,     0,
     541,   543,   173,   560,     0,     0,   546,     0,     0,   423,
       0,   531,    88,    87,   525,     0,   581,   570,   569,   571,
     572,     0,     0,     0,     0,  1078,  1175,  1080,  1079,     0,
    1180,     0,  1158,     0,  1161,     0,     0,  1182,  1184,     0,
    1174,   430,     0,   595,   597,   614,   600,   616,   601,   618,
     602,   608,   611,   609,   605,   620,   599,     0,     0,   445,
     625,   622,   623,   181,   650,   662,   663,   664,   666,     0,
       0,     0,   679,   667,     0,     0,     0,  1263,  1261,  1265,
    1267,   687,     0,     0,     0,   194,   194,   188,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   191,
     191,   188,     0,     0,   188,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   730,   754,     0,     0,     0,   722,
       0,     0,     0,     0,   194,   188,     0,     0,   831,     0,
     195,   196,   833,   842,   843,   173,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     903,     0,     0,     0,     0,     0,   925,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   947,     0,     0,   952,
     953,     0,     0,     0,   974,   976,   975,     0,   978,     0,
       0,   985,   987,   988,     0,  1023,     0,     0,     0,     0,
     846,   847,  1072,  1070,  1075,  1074,  1073,  1071,  1076,     0,
     851,     0,     0,  1066,  1065,   855,     0,  1069,     0,   856,
     857,   858,   859,     0,     0,     0,     0,     0,   961,     0,
       0,   962,  1203,     0,  1206,  1202,     0,     0,     0,   963,
     995,   964,  1221,  1226,  1223,  1229,  1222,  1220,  1227,  1224,
    1218,  1225,  1219,  1228,     0,     0,   969,     0,     0,     0,
       0,   970,  1238,  1242,  1243,     0,  1240,   971,     0,  1244,
     972,   992,     0,     0,     0,   997,   998,   999,  1285,  1299,
       0,     0,  1306,  1302,     0,     0,     0,  1297,  1296,  1310,
    1309,     0,     0,  1326,     0,     0,  1322,     0,  1330,     0,
       0,  1323,     0,  1359,   230,   230,     0,     0,     0,   230,
       0,  1392,     0,  1391,     0,     0,     0,     0,  1379,     0,
       0,     0,     0,  1383,     0,     0,     0,  1390,     0,     0,
       0,     0,     0,  1381,  1393,     0,     0,     0,  1380,   230,
     230,   230,  1370,  1369,  1371,     0,   253,   255,   257,   247,
       0,   250,   249,   248,     0,   258,     0,     0,    63,     0,
    1455,     0,  1462,   173,  1477,     0,  1468,  1469,     0,  1471,
    1472,     0,   182,   183,  1463,  1485,  1486,     0,   261,     0,
     275,     0,     0,     0,     0,   310,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   331,   330,     0,   340,
     342,     0,     0,     0,     0,     0,     0,   367,     0,   173,
       0,     0,     0,     0,     0,   173,     0,   392,     0,   391,
     462,   461,     0,     0,     0,   504,   173,     0,   181,   515,
     513,   517,   521,     0,     0,     0,   181,     0,   556,   540,
       0,   551,   553,   184,     0,     0,   422,     0,     0,    63,
       0,   530,    86,    85,     0,     0,  1093,     0,     0,     0,
       0,     0,     0,  1105,     0,     0,     0,  1155,     0,     0,
       0,  1124,  1125,     0,     0,     0,     0,     0,  1138,     0,
    1144,  1145,  1147,  1149,     0,  1154,  1166,  1167,  1168,     0,
    1170,     0,  1176,  1178,  1179,  1177,  1077,     0,  1157,     0,
    1156,  1092,     0,     0,  1162,     0,  1164,     0,  1163,  1185,
    1165,  1172,     0,     0,   612,   610,   444,     0,     0,  1354,
    1348,   677,   678,     0,   675,   671,     0,   194,   194,   194,
     692,   693,   190,   189,     0,   194,   194,   194,     0,   700,
     699,   698,   710,   191,   194,   194,   194,   192,   193,   194,
     194,     0,   194,   194,     0,   191,     0,   723,     0,   729,
       0,   728,   727,   726,     0,     0,     0,   753,     0,   752,
       0,   725,   724,     0,     0,     0,     0,   191,   191,   188,
       0,     0,   188,     0,     0,     0,   194,   194,   827,     0,
     194,   194,   832,     0,   220,   221,   222,   223,   224,   225,
       0,    92,    93,    91,   865,     0,     0,     0,     0,     0,
    1016,  1014,  1009,     0,  1019,  1003,  1020,  1006,  1018,  1012,
    1001,  1015,  1004,  1002,  1021,  1017,     0,     0,   879,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   913,     0,     0,     0,
       0,   924,   926,     0,     0,     0,   932,   931,     0,     0,
       0,   209,     0,     0,     0,   173,     0,   943,     0,     0,
       0,     0,   948,   949,   950,     0,     0,     0,     0,   957,
     973,   977,   979,   982,   981,     0,     0,     0,   986,   864,
    1024,  1026,     0,  1025,   849,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1058,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   853,  1000,     0,     0,     0,     0,   960,     0,   173,
    1199,  1197,  1195,     0,     0,   173,  1201,   965,     0,     0,
       0,     0,  1237,     0,     0,  1245,   990,   991,     0,   993,
    1305,  1307,  1304,  1303,  1294,     0,     0,     0,  1327,     0,
       0,  1331,  1342,   232,   233,   234,   235,   231,  1373,  1372,
       0,     0,     0,  1377,     0,     0,     0,  1376,     0,     0,
       0,  1375,  1374,   230,     0,     0,     0,  1382,     0,     0,
       0,  1389,     0,     0,     0,  1388,     0,     0,     0,  1387,
       0,     0,     0,  1386,     0,     0,     0,     0,     0,  1403,
       0,  1438,  1437,  1439,     0,     0,     0,  1385,     0,     0,
       0,  1384,  1398,  1397,  1399,  1395,  1394,  1396,  1441,  1440,
    1442,     0,   251,     0,     0,  1457,  1459,  1460,     0,  1475,
     173,  1470,  1473,     0,     0,   173,     0,     0,     0,   272,
       0,     0,     0,     0,   314,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   363,   362,     0,
       0,   354,   365,   173,   368,   372,     0,   383,   385,   384,
     382,   173,   390,     0,     0,     0,   181,   173,     0,     0,
       0,     0,   535,   549,   558,     0,   552,   186,   187,   185,
     545,     0,   561,     0,     0,   528,   533,    84,     0,     0,
       0,     0,     0,     0,   173,  1094,     0,     0,     0,  1099,
       0,   173,     0,  1106,  1107,  1108,     0,  1110,  1112,  1111,
    1113,  1114,     0,     0,     0,  1120,     0,  1126,  1127,     0,
       0,     0,  1133,  1131,  1132,     0,     0,     0,     0,  1139,
    1140,     0,     0,  1143,  1146,  1148,  1150,  1151,     0,     0,
    1169,  1171,     0,  1091,  1081,  1181,  1082,     0,     0,  1183,
    1173,     0,     0,   630,   631,     0,   672,   676,     0,   689,
     690,   691,   194,   695,   696,   697,     0,     0,     0,   704,
     705,   188,     0,     0,     0,   194,   711,   712,   713,   714,
     716,   191,   719,   720,     0,   194,     0,     0,     0,   191,
     191,   188,     0,     0,     0,     0,     0,     0,     0,   191,
     191,   188,     0,     0,   188,     0,     0,     0,     0,   191,
     191,   188,     0,     0,     0,     0,   751,     0,   755,     0,
       0,     0,     0,     0,   191,   191,   188,     0,     0,   188,
       0,     0,     0,     0,     0,   191,   191,   188,     0,     0,
     188,     0,   191,   731,   732,   733,   734,   736,     0,   739,
     740,     0,   191,     0,     0,   825,   826,   194,   829,   830,
       0,   862,   173,   866,     0,     0,     0,     0,     0,     0,
       0,  1008,  1005,  1011,  1010,  1007,  1013,     0,     0,     0,
     197,   199,   208,   204,   201,   202,   198,   200,   205,   203,
     207,   206,     0,     0,     0,   173,   886,   885,   887,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   958,   904,   905,   906,     0,   910,   907,   909,
       0,     0,   915,   914,   916,     0,     0,     0,     0,     0,
       0,     0,   173,   173,   930,   940,   215,   211,   216,   210,
     213,   212,   217,   214,   938,   939,   173,     0,     0,   942,
     944,   173,   173,     0,   951,   954,   955,   173,   173,   980,
     984,   863,  1027,   850,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1059,  1186,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1057,     0,     0,     0,     0,     0,   860,
     861,   173,   181,  1200,     0,     0,  1204,  1205,     0,     0,
     967,     0,   173,     0,  1239,  1241,   989,     0,  1324,  1325,
    1328,  1329,   230,   230,   230,   230,   230,   230,   230,   230,
     230,  1443,  1401,  1400,  1402,  1435,  1434,  1436,  1432,  1431,
    1433,  1426,  1425,  1427,  1423,  1422,  1424,  1405,  1404,  1408,
    1407,  1409,  1406,  1417,  1416,  1418,  1414,  1413,  1415,     0,
       0,  1452,     0,  1476,     0,   173,     0,  1480,     0,     0,
     276,     0,   273,     0,     0,     0,     0,     0,   322,     0,
       0,     0,     0,     0,     0,   329,     0,     0,     0,   173,
       0,   369,     0,     0,   375,   167,   160,     0,   483,     0,
     511,   181,   184,     0,     0,   524,     0,   562,   563,     0,
     527,     0,     0,     0,     0,     0,     0,   173,  1095,   184,
     184,   184,   173,  1100,   184,   181,   184,   184,   173,  1115,
     184,   184,   184,   173,  1121,   184,   184,   173,     0,   173,
     184,   173,   184,   184,   173,   184,   173,     0,  1159,  1160,
       0,     0,   629,     0,   694,   701,   702,   703,     0,   707,
     708,   709,   715,   194,   191,   721,   742,   743,   744,   745,
     746,     0,   748,   749,   191,   191,   805,   806,   807,   808,
     810,     0,   813,   814,     0,   191,   816,   817,   818,   819,
     820,     0,   822,   823,   191,     0,     0,     0,   191,   191,
     188,     0,     0,     0,     0,     0,     0,   191,   191,   188,
       0,     0,     0,     0,     0,     0,   191,   191,   188,     0,
       0,     0,   191,   194,   194,   194,   194,   194,     0,   194,
     194,     0,   191,   191,   194,   194,   194,   194,   194,     0,
     194,   194,     0,   191,   735,   191,     0,   741,     0,     0,
     828,     0,   867,   184,     0,     0,   184,     0,     0,     0,
     877,   184,   880,   881,   882,   184,   884,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     908,   911,   912,     0,   184,     0,     0,     0,   927,   928,
       0,     0,   181,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1230,  1056,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   173,     0,     0,
      89,     0,     0,  1067,  1068,   181,     0,     0,     0,  1207,
     966,   968,   181,   173,  1317,  1429,  1428,  1430,  1420,  1419,
    1421,  1411,  1410,  1412,  1444,     0,  1454,  1487,     0,     0,
    1482,  1481,   277,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   318,     0,     0,     0,     0,   355,   366,   373,
     184,   484,   489,   512,   514,     0,   522,   557,   173,     0,
       0,     0,     0,     0,     0,   173,  1088,  1096,  1098,  1097,
    1101,  1102,  1103,  1104,  1109,  1116,  1117,  1118,  1119,  1122,
    1123,  1128,   181,   184,   181,  1136,   181,  1137,  1141,   181,
    1152,   181,   173,     0,   173,     0,   628,     0,   706,   717,
     194,   191,   750,   809,   191,     0,   815,   191,   824,   194,
     194,   194,   194,   194,     0,   194,   194,   191,   194,   194,
     194,   194,   194,     0,   194,   194,   191,   194,   194,   194,
     194,   194,     0,   194,   194,   191,   194,   765,   766,   767,
     768,   770,   191,   773,   774,     0,   194,   194,   794,   795,
     796,   797,   799,   191,   802,   803,     0,   194,   737,   191,
     834,   835,   173,   869,     0,   184,   871,     0,   173,     0,
     878,   883,   173,     0,   892,   893,   894,   895,   899,   900,
     896,   897,   898,     0,     0,   184,   919,     0,   173,     0,
       0,   933,     0,   184,     0,     0,   184,   184,     0,   983,
       0,   218,   218,     0,     0,   218,     0,   218,  1186,     0,
       0,     0,     0,     0,     0,     0,     0,  1231,  1209,     0,
    1216,  1217,     0,   218,   218,     0,     0,     0,     0,     0,
    1186,     0,     0,     0,  1186,     0,  1060,     0,     0,     0,
    1186,    90,     0,   218,     0,  1233,   173,   173,     0,   181,
       0,   259,  1489,  1488,     0,     0,   281,     0,     0,     0,
       0,     0,   326,     0,     0,     0,     0,     0,   376,   523,
       0,   395,     0,  1084,     0,   226,     0,  1089,  1129,  1130,
    1134,  1135,  1142,  1153,  1090,   437,     0,   395,     0,   718,
     747,   811,   191,   821,   756,   757,   758,   759,   760,   191,
     762,   763,   194,   785,   786,   787,   788,   789,   191,   791,
     792,   194,   776,   777,   778,   779,   780,   191,   782,   783,
     194,   769,   194,   191,   775,   798,   194,   191,   804,   738,
       0,   184,   872,     0,     0,     0,     0,     0,   901,   902,
     917,     0,     0,     0,   929,   934,     0,   936,     0,   945,
     946,   937,   184,     0,   219,  1186,  1186,    89,     0,  1186,
       0,  1186,  1028,   173,     0,     0,     0,     0,     0,     0,
       0,  1208,     0,     0,  1186,  1186,    89,     0,     0,     0,
    1186,  1186,  1032,  1186,     0,     0,  1033,  1186,  1063,  1061,
    1062,  1037,  1186,  1186,  1233,  1249,     0,  1198,  1196,  1235,
       0,     0,     0,     0,   283,   316,   317,     0,     0,     0,
     315,   343,   344,     0,   395,   396,   398,   397,   448,     0,
       0,   227,   229,   228,  1086,  1087,   395,   450,     0,   812,
     194,   764,   194,   793,   194,   784,   771,   194,   800,   194,
       0,   868,   184,   184,     0,   184,     0,   184,   184,     0,
     935,   184,     0,  1186,  1043,  1039,  1186,     0,  1044,     0,
    1038,  1186,     0,  1211,     0,  1214,  1254,  1215,  1213,  1210,
       0,  1041,  1040,  1186,     0,     0,  1186,  1045,  1035,  1031,
    1186,   173,  1034,  1036,  1042,  1249,  1193,     0,     0,  1234,
    1247,  1236,  1316,     0,     0,   324,   325,   323,   356,   359,
     357,     0,     0,   449,  1083,   173,   451,   674,   761,   790,
     781,   772,   801,   184,   870,   876,     0,   891,   888,   918,
     923,     0,   941,     0,  1050,  1030,    89,     0,  1048,     0,
    1212,     0,  1029,    89,     0,  1046,  1049,     0,  1194,  1251,
    1253,     0,  1246,     0,     0,     0,     0,     0,     0,   226,
       0,   873,   173,   889,   920,   956,  1186,     0,  1255,     0,
    1186,     0,   184,  1252,  1248,   282,     0,     0,     0,     0,
       0,  1085,   845,   173,   874,   890,   173,   921,  1052,     0,
    1186,  1051,     0,     0,   284,   348,     0,   347,     0,   875,
     922,    89,  1053,    89,  1186,   346,   345,  1186,  1186,  1047,
    1055,  1054
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    59,  1673,   184,   166,  1094,  2870,  2871,   498,   499,
     500,   501,   167,   168,   169,   835,   755,   102,   974,   521,
    1444,  1980,  1604,  1619,  1212,  2192,  2244,  2985,  1670,  3054,
    1848,   394,   932,  1422,   916,   919,   922,   937,    69,   418,
     424,   428,   431,    75,   435,    82,   451,   447,   441,   458,
      92,   468,   103,  1468,   112,   476,   479,   482,   484,   557,
    1044,  1949,   486,   489,   492,   119,   508,   170,   172,  3048,
     188,   191,   236,  1089,  1139,   545,  1032,   548,   558,  1036,
    1041,   560,   562,  1047,   566,  1049,   580,  1054,  1056,   583,
     587,   591,   593,   596,   600,   636,   632,  1521,   614,  1075,
    1080,  1072,  1509,  1086,   617,   644,   653,  1097,   658,   663,
     655,   628,   624,   668,   677,  1134,  1585,  1126,  1128,  1130,
    1136,   682,  1141,   239,   684,  2055,   258,   687,   689,   693,
     698,   706,   276,  1595,   721,   301,   765,  1609,   767,   775,
    1199,  1627,  1194,  2116,  1639,  1637,  2118,  1195,  1629,  1631,
     781,   784,   786,   779,   303,   311,   313,   826,  1281,  1696,
    1270,  1801,  2275,  2293,  1285,  1289,  1279,  1121,  1566,  1570,
    1578,  1580,  2610,   319,  1298,  1301,  1309,  2847,  2848,  2849,
    2611,  3025,  3026,  1331,  1337,  1340,  3119,  3120,  3116,  3117,
    3169,  2850,  2851,   292,   327,   335,   343,   850,   845,   348,
     353,   355,   860,   867,  1366,  1371,   926,   913,   360,   364,
     329,   268,   264,   368,   874,   375,   908,   883,   898,   899,
    1408,  1403,  1867,  1393,  1889,  1861,  1901,  1897,  1857,  1883,
    1879,  1853,  1875,  1871,  1397,   903,   885,   381,   382,   398,
    1430,   401,   407,   950,   953,   947,   409,   412,   958
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2975
static const yytype_int16 yypact[] =
{
    5501,   120,   217,    45, -2975, -2975,  1366,  -162,  1517,  1217,
     824,   577,   839,   159,   433,    18,  1100,   377,  5735,   710,
    2324, -2975,   204,   190,   234,  1556,   229,   607,  1132,   -49,
     125,   242,   416,  1265,   -76,   216,  1077,  3174,    37,  1102,
     288,   387,   416, -2975,   174,   252,   118,    47, -2975,   629,
     306,   705, -2975,   699, -2975,    50,  3292,   255,    94,   597,
     200,   727,   307,   636,   556,   115,   647,    59,  1370, -2975,
   -2975, -2975,   176,  1436,   912, -2975,   448,    76,   433,   874,
     129,   633, -2975,   664,   912, -2975, -2975,   912,   912,   507,
     635,   912, -2975, -2975,   912, -2975, -2975,   912, -2975, -2975,
   -2975, -2975, -2975, -2975,   363,    61,   646,   791,   829,   860,
     717,   601, -2975,   912,  1602,   912,   912,  1298,   912, -2975,
   -2975, -2975,   666, -2975, -2975, -2975, -2975,  4931, -2975, -2975,
   -2975, -2975, -2975, -2975,   912, -2975, -2975, -2975, -2975, -2975,
   -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975,
   -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975,
   -2975, -2975, -2975, -2975, -2975, -2975, -2975,  1581, -2975,   912,
   -2975,   891, -2975, -2975,   433,   433,   433,   433,   433,   433,
     433,   433,   433,   433, -2975, -2975, -2975, -2975, -2975,   777,
     947, -2975,   900,  1839,   -27,   260,   661,   805,  1197,  4068,
     585,  4985,  4234,   966,  4931,  3336, -2975,   -12,   -66,   937,
    1007,   926,   283,   334,   130,   233,  1024,   658,   416,   985,
   -2975,   716,   973, -2975,   786,   744,   364, -2975,   337, -2975,
    1104, -2975,    15,   981,    89, -2975, -2975,  5158, -2975, -2975,
   -2975,  1013,  1026,  1054, -2975, -2975, -2975, -2975,   554, -2975,
   -2975, -2975, -2975,   440, -2975, -2975,  5158,  4164, -2975,  1142,
   -2975,    52,  5158,  1105, -2975,    39,  5158,  1146, -2975,    65,
   -2975,  1158,  1163,   146, -2975,   912, -2975,  1173,  1340,  2752,
   -2975,  1179, -2975, -2975, -2975, -2975,  1191, -2975, -2975,   912,
   -2975,   433, -2975,  1223,   136,  1227,   493,    55,  1234,    34,
    1238, -2975, -2975, -2975,  1241,  1247,   433,   433,   912,   912,
   -2975, -2975,  1253, -2975, -2975, -2975, -2975, -2975, -2975,  2809,
    2752, -2975,  1264,    20,   912,  5158,   912, -2975,  5158, -2975,
    1272, -2975, -2975, -2975, -2975, -2975,   912,  1222,   433,  1507,
     912,  1581,   912, -2975,  1289, -2975,  3364, -2975, -2975,    29,
    1291,  1311,   912, -2975,  1321, -2975, -2975,   -67, -2975, -2975,
   -2975,  1323,  5158,  1327, -2975,  1478,   912,  1233, -2975,   999,
    1210,  1419,   498,  1339,   517, -2975, -2975, -2975, -2975, -2975,
   -2975, -2975,  1342, -2975,   110,   310,   353,   417,    51,   912,
     171,  1350,   912,   121, -2975,   912,    95,  1352, -2975,   912,
     912, -2975,    68,    24,    32,  1354,  1581, -2975, -2975, -2975,
    1494,   912, -2975, -2975, -2975, -2975, -2975,   912, -2975,  1363,
    1374, -2975,   912,  1157, -2975, -2975, -2975, -2975, -2975, -2975,
     912, -2975,   433, -2975,   912, -2975, -2975,   740,   740, -2975,
    1371, -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975,
   -2975, -2975,  1159,   912,   912,  1386,  1388,  1393, -2975, -2975,
     912,   912,   912,   912,   912,   912,  1395,   912, -2975,  1398,
     912,   912, -2975,  1409,  1412,  1416, -2975,  1418, -2975, -2975,
    1429,  1431, -2975,  1117, -2975,  1433, -2975,  5158,  1270, -2975,
     152, -2975, -2975,   912, -2975, -2975, -2975,   912,  1435,  1442,
    1442,  5158,   912,   912,   912,   912,   912,   912, -2975,   912,
    4931,  1602,   912,   912, -2975, -2975, -2975, -2975, -2975, -2975,
   -2975,  1602,   912, -2975, -2975, -2975, -2975, -2975, -2975, -2975,
   -2975, -2975, -2975, -2975,  1440, -2975, -2975,  1133,    -4, -2975,
   -2975, -2975, -2975, -2975, -2975, -2975, -2975,  1067, -2975,   -79,
   -2975, -2975, -2975,  1269, -2975,   795,   941,   941, -2975, -2975,
   -2975,  1460, -2975, -2975,  1462, -2975, -2975,   -32,   -60, -2975,
    1267, -2975, -2975, -2975, -2975,  1279, -2975,  1484, -2975,  1581,
   -2975,   912,   912, -2975,  5158,  5158,  1581, -2975, -2975,  1581,
   -2975, -2975, -2975, -2975,  1581, -2975, -2975,  5158,  1581,   912,
   -2975, -2975,  5158, -2975,  1491,    82,  1284,    16, -2975, -2975,
    1301,  5158,    85, -2975, -2975, -2975, -2975, -2975, -2975,  1508,
    1522, -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975,  1538,
   -2975,  1326, -2975,   -43, -2975,   912, -2975, -2975,  1554,  1554,
   -2975, -2975,  1554,  1554, -2975,   624, -2975, -2975, -2975, -2975,
   -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975,    15,
   -2975, -2975, -2975, -2975, -2975, -2975,  1351,  1362, -2975, -2975,
    1510,  1523,  1531, -2975, -2975,    84,  1319, -2975,   912,  1583,
    1349,  3364, -2975,  1581, -2975, -2975,  1620, -2975, -2975, -2975,
   -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975,
   -2975,  5158,  5158,  5158,  5158, -2975, -2975, -2975, -2975, -2975,
   -2975, -2975, -2975,  1624, -2975, -2975, -2975, -2975,  1629,  1640,
     433, -2975, -2975,  1642,  1644,  1425,   912, -2975,  2752, -2975,
    1653, -2975, -2975, -2975, -2975, -2975,   912, -2975,   433, -2975,
   -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975,
   -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975,
    1658,   562,  1569,  1571,  1584, -2975,  1672, -2975,   553,  1586,
      60,    73,  5092,   105,  1678, -2975,  1687, -2975,  1691, -2975,
      17, -2975,  1693,  1695, -2975,   645, -2975,  1701, -2975, -2975,
   -2975,   912, -2975,  3364,  4605,  1751,  1390,   856,  1707,  1019,
    1607, -2975, -2975, -2975,  1713,   166,   589,  1714,  1719,    74,
     912,   613,  1113,  1043,  5158,   433,  1830,   915,    63,    83,
     215,    40, -2975,  1711,  1728,  1742, -2975, -2975, -2975, -2975,
   -2975, -2975, -2975, -2975, -2975, -2975,   912, -2975, -2975, -2975,
   -2975,   912,   912,   912,   912, -2975, -2975,   912,  1581,   912,
   -2975,   912,  1602,   912,  1752,  1581, -2975, -2975, -2975, -2975,
   -2975, -2975, -2975, -2975,  1754,   501,   581, -2975, -2975, -2975,
    1755, -2975, -2975, -2975, -2975,  1656, -2975,  1759,  1761,  1676,
    1677,  1680,  1768, -2975,  1772, -2975,  1776,  1689,  1783,   500,
     580,   634,   555,   694,   618,   798,  1793,   812, -2975, -2975,
    1799,  1800,  1794, -2975, -2975,  1801,  1802,  1804, -2975,  1805,
   -2975, -2975, -2975, -2975,  1807, -2975, -2975,  1808, -2975, -2975,
    1812, -2975, -2975, -2975, -2975, -2975, -2975, -2975,   912,   394,
     912, -2975, -2975, -2975, -2975,   912,   912, -2975,   912,   912,
    1489,   912,   912, -2975,  3364,  1749,  1819, -2975,  1402,  1820,
   -2975,  1511,  1821, -2975, -2975,    41,   912,   912, -2975,  1815,
   -2975, -2975,  1822,  1244,   912,  1817,   542, -2975, -2975, -2975,
   -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975,
   -2975, -2975,  1825,  1828,   912,   912,   912,   912,   912,  1831,
     912,  1834,   912,   170,  1835,  1837,   778,  1838, -2975, -2975,
     433,  1841,  1842,  1581,  1843,  5158,  1845, -2975, -2975, -2975,
   -2975, -2975, -2975,  1581, -2975, -2975,   912,   912,   912,  5158,
     912,  1602,   912, -2975,   912, -2975, -2975, -2975, -2975, -2975,
    1846,  1847, -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975,
   -2975, -2975, -2975, -2975, -2975, -2975,   585, -2975,   912, -2975,
   -2975,  1849, -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975,
    5158,   912,  1581,  1581,    41,    41,    41,  1581,  1602,   912,
    1581, -2975, -2975, -2975,   912, -2975,   -43,  1657,  1850,  1852,
   -2975, -2975,  1581, -2975,  1673,  1683, -2975,  1853,  1854, -2975,
    1857,  1532,  1823,  1855, -2975,   912, -2975, -2975, -2975, -2975,
   -2975,  4900,  1012,  1543,   676, -2975, -2975, -2975, -2975,   912,
     256,  1541, -2975,  1597, -2975,  1830,  1601,   568,  1570,   111,
   -2975, -2975,   912, -2975, -2975, -2975, -2975, -2975, -2975, -2975,
   -2975, -2975,  1577, -2975, -2975, -2975, -2975,   912,  1895, -2975,
   -2975, -2975, -2975,    41, -2975, -2975, -2975, -2975, -2975,  1897,
    1901,  5026, -2975, -2975,  1902,  1904,   912, -2975, -2975, -2975,
   -2975, -2975,  1907,  1908,  1911,   645,   645,   -25,  1903,  1915,
    1917,  1921,  1921,  1921,  1621,  1632,  1934,  1938,  1939,   128,
     128,   -25,  1942,  1944,   -25,  1945,  1950,  1951,  1952,  1951,
    1952,  5736,  1953,  1954, -2975, -2975,  1951,  1952,   560, -2975,
    1948,  1956,  1957,  1960,   645,   -25,  1964,  1966, -2975,  1970,
   -2975, -2975, -2975, -2975, -2975,  1581,  1305,  1736,  1703,  1704,
    1706,  1865,  1202,  1709,  1978,   495,    10,  1869,  1307,  1981,
    1420,  1949,  1716,  1720,  1871,  1982,  1708,   919,   133,   545,
     460,  5158,  1830,  1958,   637,  1717,  1757,  1987,    42, -2975,
   -2975,   929,  1991,  1994, -2975, -2975, -2975,  1996,  1762,   209,
    1830,  1763, -2975, -2975,  1943, -2975,   433,  2001,  2002,   912,
   -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975,    21,
   -2975,  3956,  2003, -2975, -2975, -2975,   912, -2975,   912, -2975,
   -2975, -2975, -2975,   912,   912,   912,  1019,  5158, -2975,  2004,
    1593, -2975, -2975,   912, -2975, -2975,   912,  5158,   912, -2975,
   -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975,
   -2975, -2975, -2975, -2975,   433,   912, -2975,   912,  1019,  2005,
    2006, -2975, -2975, -2975, -2975,   912,   912, -2975,   433, -2975,
   -2975, -2975,   596,  2007,  2008, -2975, -2975, -2975, -2975, -2975,
     912,   912, -2975, -2975,  1602,   912,   912, -2975, -2975, -2975,
   -2975,  2010,   912, -2975,   912,  1894, -2975,   912, -2975,   912,
    1896, -2975,  2012, -2975,  1073,  1073,   826,   863,   921,  1073,
    2015, -2975,   936, -2975,   959,   969,   983,  1017, -2975,  2016,
    2017,  1059,  2019, -2975,  2022,  2025,  2020, -2975,  1118,  1121,
    2028,  2029,  2031, -2975, -2975,  2033,  2034,  2032, -2975,  1073,
    1073,  1073, -2975, -2975, -2975,   912, -2975, -2975, -2975, -2975,
     912, -2975, -2975, -2975,   912, -2975,   912,   912,   898,  5158,
   -2975,   912, -2975,  1581, -2975,  3364, -2975, -2975,  2035, -2975,
   -2975,  2036, -2975, -2975, -2975, -2975,  2039,  1507, -2975,   912,
    2040,   912,   912,   912,  1170, -2975,  2038,   912,   912,  2042,
     912,   912,  2047,   912,  2051,   912, -2975, -2975,   170, -2975,
   -2975,  2052,  2053,     1,  2057,   433,   433, -2975,  5158,  1581,
    2043,   912,  2061,  2062,  2063,  1581,  5158, -2975,   912, -2975,
   -2975, -2975,   912,   912,   912, -2975,  1581,  5158,    41, -2975,
   -2975, -2975, -2975,  1602,   912,  2064,    41,   912,   228, -2975,
    2065, -2975, -2975,   147,  3092,   912, -2975,   912,  2069,  2074,
     912, -2975, -2975, -2975,  2070,  1449,  4931,  1770,  1796,  1803,
      25,  5158,  1806, -2975,   563,   107,    72, -2975,  1813,  1814,
     201, -2975, -2975,   776,  1886,   957,  1826,   326,  1830,  1144,
   -2975,  2076,  1810, -2975,  1045, -2975, -2975, -2975, -2975,  1830,
    1859,     3, -2975, -2975, -2975, -2975, -2975,   912, -2975,   912,
   -2975, -2975,   912,   912, -2975,   912, -2975,   912, -2975, -2975,
   -2975, -2975,  1866,   912, -2975, -2975, -2975,   912,    75, -2975,
   -2975, -2975, -2975,  2094,  2095, -2975,   912,   645,   645,   645,
   -2975, -2975, -2975, -2975,  2096,   645,   645,   645,   747, -2975,
   -2975, -2975, -2975,   128,   645,   645,   645, -2975, -2975,   645,
     645,  2098,   645,   645,  2099,   128,   838, -2975,   691, -2975,
     880, -2975, -2975, -2975,  2073,  2100,  2103, -2975,   749, -2975,
     814, -2975, -2975,  1809,  2104,  2107,  2108,   128,   128,   -25,
    2111,  2112,   -25,  2115,  2117,  2119,   645,   645, -2975,  2121,
     645,   645, -2975,  2123, -2975, -2975, -2975, -2975, -2975, -2975,
     433, -2975, -2975, -2975,  4931,  1682,   912,  1699,  1636,   575,
   -2975, -2975, -2975,   598, -2975, -2975, -2975, -2975, -2975, -2975,
   -2975, -2975, -2975, -2975, -2975, -2975,  2124,   912, -2975,   433,
    1310,  2125,   912,  5158,   433,   433,  2126,  1664,  1860,  1862,
     208,   214,  1863,   218,  1771,  1777,  2133,  2134,  2135,  2136,
    1202,  2137,  2138,  2139,  1789,  1791,  1609,  2143,   912,  1730,
    1747, -2975, -2975,   433,  1310,  5158, -2975, -2975,  5158,   912,
    2144,    96,  2146,  5158,   912,  1581,   433, -2975,  2148,  5158,
    5158,   912, -2975, -2975, -2975,   433,   433,  1310,  5158, -2975,
   -2975, -2975, -2975, -2975, -2975,  5158,   912,   433, -2975,  2149,
   -2975, -2975,   912, -2975, -2975,  2151,   912,  1889,   135,   912,
    1892,   912,   238,   912,  2153,   912,  1899,  1900,   912,   912,
     912,  1905,   912,   866,   912,   912,  1258,    28,   912,   912,
    1909, -2975, -2975,   912,   912,   912,   912, -2975,  5158,  1581,
    2155,  2157,  2163,   912,   912,  1581, -2975,   912,   912,   912,
    5158,  1019, -2975,   912,   912, -2975, -2975, -2975,  2164, -2975,
   -2975, -2975, -2975, -2975, -2975,  2166,   912,   912, -2975,   912,
     912, -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975,
    2167,  2168,  2170, -2975,  2171,  2172,  2174, -2975,  2175,  2176,
    2178, -2975, -2975,  1073,  2179,  2180,  2184, -2975,  2187,  2188,
    2192, -2975,  2202,  2203,  2193, -2975,  2204,  2205,  2207, -2975,
    2208,  2209,  2211, -2975,  2212,  2213,  2214,  2215,  2217, -2975,
    2219, -2975, -2975, -2975,  2220,  2221,  2223, -2975,  2224,  2225,
    2228, -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975,
   -2975,   912, -2975,   912,   912, -2975, -2975, -2975,   912, -2975,
    1581, -2975, -2975,  1507,   912,  1581,   912,   912,   912, -2975,
     912,   912,  2229,   912, -2975,   912,   912,  2231,   912,   912,
    2232,   912,  2233,   912,   170,  2235,  2236, -2975, -2975,  2237,
    5158, -2975,  2238,  1581, -2975,  2239,   912, -2975, -2975, -2975,
   -2975,  1581, -2975,  1403,   912,  1403,    41,  1581,  5158,   912,
     912,  2242, -2975, -2975, -2975,   912, -2975, -2975, -2975, -2975,
   -2975,  5158, -2975,  5158,   912, -2975, -2975,   -43,  2243,  2244,
    2246,  2247,  2248,  5064,  1581, -2975,  5158,  5158,  5158,  4931,
    5158,  1581,  5158, -2975, -2975, -2975,  5158, -2975, -2975, -2975,
   -2975,  4931,  5158,  5158,  5158,  4931,  5158, -2975, -2975,  5158,
    5158,   912, -2975, -2975, -2975,  5158,  5158,  5158,  5158, -2975,
   -2975,  5158,  5158, -2975, -2975, -2975, -2975, -2975,  5158,  5158,
   -2975, -2975,  2078, -2975, -2975, -2975, -2975,   912,   912, -2975,
   -2975,  2251,   912, -2975, -2975,  2252, -2975, -2975,   912, -2975,
   -2975, -2975,   645, -2975, -2975, -2975,  2253,  2254,  2255, -2975,
   -2975,   -25,  2267,  2268,  2276,   645, -2975, -2975, -2975, -2975,
   -2975,   128, -2975, -2975,  2281,   645,  2285,  2289,  2290,   128,
     128,   -25,  2292,  2293,  2294,  1861,  2295,  2296,  2297,   128,
     128,   -25,  2299,  2300,   -25,  2302,  2303,  2304,  2305,   128,
     128,   -25,  2307,  2308,  2310,   927, -2975,  1306, -2975,  1313,
    1873,  2311,  2312,  2313,   128,   128,   -25,  2309,  2315,   -25,
    2316,  1918,  2317,  2318,  2320,   128,   128,   -25,  2322,  2323,
     -25,  2327,   128, -2975, -2975, -2975, -2975, -2975,  2329, -2975,
   -2975,  2330,   128,  2331,  2332, -2975, -2975,   645, -2975, -2975,
    2333, -2975,  1581, -2975,  5158,   912,   912,  5158,   912,  2334,
    1736, -2975, -2975, -2975, -2975, -2975, -2975,  2335,  5158,   433,
   -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975,
   -2975, -2975,  1310,  2336,  5158,  1581, -2975, -2975, -2975,  2337,
    1736,   912,   912,   912,   912,   912,   912,   912,   912,   912,
    2340,  2342, -2975, -2975, -2975, -2975,  2343, -2975, -2975, -2975,
    2345,  2346, -2975, -2975, -2975,   912,  5158,   912,  2347,  1736,
     433,  1310,  1581,  1581, -2975, -2975, -2975, -2975, -2975, -2975,
   -2975, -2975, -2975, -2975, -2975, -2975,  1581,   912,  1602, -2975,
   -2975,  1581,  1581,   912, -2975, -2975, -2975,  1581,  1581, -2975,
   -2975, -2975, -2975, -2975,   912,   912,   912,   912,   912,   912,
     912,   912,   912,   912, -2975, -2975,   912,   912,   912,   912,
     912,   912,   912,   912,  1753,   912,   912,   912,  1824,   912,
    2326,  2349,   912, -2975,   912,   912,   912,  2351,  2352, -2975,
   -2975,  1581,    41, -2975,  2353,  2355, -2975, -2975,  1602,   912,
   -2975,  2358,  1581,  5158, -2975, -2975, -2975,  2360, -2975, -2975,
   -2975, -2975,  1073,  1073,  1073,  1073,  1073,  1073,  1073,  1073,
    1073, -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975,
   -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975,
   -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975,  1736,
     912, -2975,   912, -2975,   912,  1581,   912, -2975,  1602,   912,
   -2975,   912, -2975,  2201,  2364,  2366,   912,   912, -2975,   912,
     912,  2367,   912,  2371,   912, -2975,  2374,  2376,  2378,  1581,
    2379, -2975,  2380,  5158, -2975, -2975, -2975,   912, -2975,   912,
   -2975,    41,   147,   912,  2381, -2975,   912, -2975, -2975,  4931,
   -2975,  2382,  2384,  2385,  2386,  2387,  5158,  1581, -2975,   147,
     147,   147,  1581, -2975,   147,    41,   147,   147,  1581, -2975,
     147,   147,   147,  1581, -2975,   147,   147,  1581,  5158,  1581,
     147,  1581,   147,   147,  1581,   147,  1581,  5158, -2975, -2975,
    2389,  4931,  2390,   912, -2975, -2975, -2975, -2975,  2393, -2975,
   -2975, -2975, -2975,   645,   128, -2975, -2975, -2975, -2975, -2975,
   -2975,  2394, -2975, -2975,   128,   128, -2975, -2975, -2975, -2975,
   -2975,  2395, -2975, -2975,  2397,   128, -2975, -2975, -2975, -2975,
   -2975,  2398, -2975, -2975,   128,  2399,  2400,  2401,   128,   128,
     -25,  2403,  2405,  2408,  2409,  2412,  2413,   128,   128,   -25,
    2406,  2415,  2417,  2418,  2420,  2423,   128,   128,   -25,  2416,
    2427,  2429,   128,   645,   645,   645,   645,   645,  2428,   645,
     645,  2432,   128,   128,   645,   645,   645,   645,   645,  2433,
     645,   645,  2435,   128, -2975,   128,  2436, -2975,  2437,  2438,
   -2975,  3364, -2975,   147,  2439,  5158,   147,   912,  5158,  2440,
   -2975,   147, -2975, -2975, -2975,   147, -2975,  5158,  2441,   912,
     912,   912,   912,   912,   912,   912,   912,   912,   912,   912,
   -2975, -2975, -2975,  5158,   147,   912,  5158,  2443, -2975, -2975,
    1602,  1602,    41,  5158,  1602,  1602,  5158,  5158,  1602,  1602,
     912,   912,   912,   912,   912,   912,  1736,   912,   912,   912,
    3885, -2975,  1736,   912,   912,   912,   912,  1736,   912,   912,
    2444,   912,   912,   912,  2446,   912,   912,  1581,   912,  1867,
    1736,   912,   912, -2975, -2975,    41,   433,  5158,  5158, -2975,
   -2975, -2975,    41,  1581,  2448, -2975, -2975, -2975, -2975, -2975,
   -2975, -2975, -2975, -2975, -2975,   912, -2975, -2975,  1602,   912,
   -2975, -2975, -2975,  1294,  2449,  2450,  2454,  2455,   912,   912,
    2456,   912, -2975,  2457,  2460,  2461,  1403, -2975, -2975, -2975,
     147, -2975, -2975, -2975, -2975,  2463, -2975, -2975,  1581,  2462,
    2464,  2466,  2467,  5158,  2468,  1581, -2975, -2975, -2975, -2975,
   -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975,
   -2975, -2975,    41,   147,    41, -2975,    41, -2975, -2975,    41,
   -2975,    41,  1581,  2469,  1581,  2471, -2975,   912, -2975, -2975,
     645,   128, -2975, -2975,   128,  2473, -2975,   128, -2975,   645,
     645,   645,   645,   645,  2474,   645,   645,   128,   645,   645,
     645,   645,   645,  2475,   645,   645,   128,   645,   645,   645,
     645,   645,  2479,   645,   645,   128,   645, -2975, -2975, -2975,
   -2975, -2975,   128, -2975, -2975,  2480,   645,   645, -2975, -2975,
   -2975, -2975, -2975,   128, -2975, -2975,  2481,   645, -2975,   128,
   -2975, -2975,  1581, -2975,  5158,   147, -2975,  2482,  1581,   912,
   -2975, -2975,  1581,   912, -2975, -2975, -2975, -2975, -2975, -2975,
   -2975, -2975, -2975,   912,   912,   147, -2975,  2483,  1581,   912,
    1602, -2975,    22,   147,   912,  1602,   147,   147,  5158, -2975,
     912,  2484,  2484,   912,   912,  2484,  1736,  2484, -2975,  5158,
    1832,  1919,  1930,  1946,  1984,  2090,  2091,  3885, -2975,  2092,
   -2975, -2975,  1736,  2484,  2484,   912,   912,  1736,  1618,   912,
   -2975,   912,   912,   912, -2975,   912, -2975,  1602,   912,  2489,
   -2975, -2975,   912,  2484,   433,    23,  1581,  1581,   433,    41,
    2491, -2975, -2975, -2975,  2492,   912, -2975,  2497,  2501,  2502,
    2504,  2505, -2975,  2506,  2507,  2508,  2509,   912, -2975, -2975,
    2512,     4,  5158, -2975,  2513,   157,  5158, -2975, -2975, -2975,
   -2975, -2975, -2975, -2975, -2975, -2975,  2515,     4,   912, -2975,
   -2975, -2975,   128, -2975, -2975, -2975, -2975, -2975, -2975,   128,
   -2975, -2975,   645, -2975, -2975, -2975, -2975, -2975,   128, -2975,
   -2975,   645, -2975, -2975, -2975, -2975, -2975,   128, -2975, -2975,
     645, -2975,   645,   128, -2975, -2975,   645,   128, -2975, -2975,
     912,   147, -2975,  5158,  5158,   912,  5158,   912, -2975, -2975,
   -2975,  5158,  5158,   912, -2975, -2975,  2516, -2975,  5158, -2975,
   -2975, -2975,   147,  2518, -2975, -2975, -2975,  1736,   912, -2975,
    2519, -2975, -2975,  1581,  1202,  2530,  2520,  2532,  2533,  2534,
    2536, -2975,   433,  2538, -2975, -2975,  1736,   912,  2539,  2541,
   -2975, -2975, -2975, -2975,   912,  5158, -2975, -2975, -2975, -2975,
   -2975, -2975, -2975, -2975,    23,  1920,  1830, -2975, -2975, -2975,
     433,  2540,  2542,  2543, -2975, -2975, -2975,  2545,  2546,  2547,
   -2975, -2975, -2975,   158,     4, -2975, -2975, -2975, -2975,  2548,
    5158, -2975, -2975, -2975, -2975, -2975,     4, -2975,  2549, -2975,
     645, -2975,   645, -2975,   645, -2975, -2975,   645, -2975,   645,
    3364, -2975,   147,   147,   912,   147,  2551,   147,   147,   912,
   -2975,   147,   912, -2975, -2975, -2975, -2975,  2552, -2975,   912,
   -2975, -2975,  2553, -2975,  2555, -2975, -2975, -2975, -2975, -2975,
     912, -2975, -2975, -2975,  2556,   912, -2975, -2975, -2975, -2975,
   -2975,  1581, -2975, -2975, -2975,  1920, -2975,  1929,  2116,  1830,
   -2975, -2975, -2975,  2557,  2558, -2975, -2975, -2975, -2975, -2975,
   -2975,  1283,  1283, -2975, -2975,  1581, -2975, -2975, -2975, -2975,
   -2975, -2975, -2975,   147, -2975, -2975,  2560, -2975,  4931, -2975,
   -2975,  2561, -2975,  1736, -2975, -2975,  1736,   912, -2975,  2575,
   -2975,   912, -2975,  1736,   912, -2975, -2975,  5158, -2975,  1929,
   -2975,   433, -2975,  2578,  2579,   912,   912,   912,   912,   157,
    2581,  4931,  1581, -2975,  4931, -2975, -2975,   912, -2975,  2585,
   -2975,   912,   147, -2975, -2975, -2975,  2588,  2589,   912,  2598,
     912, -2975, -2975,  1581, -2975, -2975,  1581, -2975, -2975,  2586,
   -2975, -2975,  2603,  2604, -2975, -2975,  2609, -2975,  2612, -2975,
   -2975,  1736, -2975,  1736, -2975, -2975, -2975, -2975, -2975, -2975,
   -2975, -2975
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2975, -2975,    -3, -2975,   355, -1069, -1727, -1202,  1738, -2975,
    1061,  -404,  1827,   -55,   -21, -2975,  -302, -1951,  1913,  1947,
   -1060,   818,  -981,   -18,  2314, -1717, -2975, -1124, -2975,  -881,
   -1350, -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975,
   -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975,
   -2975, -2975, -2975, -1459, -2975, -2975, -2975, -2975, -2975,  -595,
    -554, -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975, -1918,
   -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975,
   -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975,
   -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975,
   -2975, -2975, -2975, -2975, -2975, -2975, -2975,   944, -2975, -2975,
   -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975,
   -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975,
   -2975, -2975, -2975, -2975, -2975, -2975, -2975,   463, -2975, -2975,
   -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975,  -383,  -372,
   -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975, -1718,
   -2975, -2975, -2975, -2975, -2975, -2975,  -801, -2975, -2975, -2975,
   -2975, -2975, -2975,    86, -2975, -2975, -2975, -2975,  -394,  -795,
      99,  -553, -2975, -2975, -2975, -2975, -2975,  -599,  -558, -2975,
   -2975, -2974, -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975,
   -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975,
   -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975,  1670,
   -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975,
   -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975,
   -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975, -2975
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1459
static const yytype_int16 yytable[] =
{
      74,   406,  2216,  1045,  1500,  1501,  1502,  1508,   118,  1944,
    1297,  1300,  2397,   187,  2399,  1674,   342,  2231,   827,  2042,
    1077,  1324,   120, -1232,   829,  1849,  1774,  2975,   948,  1862,
    1202,    70,    71,  2290,   340,   601,   951,  3045,  1704,   782,
    2256,   120,   344,   367,   714,  1341,  1999,  1754,    70,    71,
    1947,   602,   400,    70,    71,   411,  1050,   708,   417,  1908,
    1909,  1910,   423,   923,   174,   430,   477,   175,  1328,   719,
     434,   436,   944,   369,   446,   123,   603,   453,   457,    70,
      71,   460,  1203,  1588,   461,   462,  1073,   856,   470,  1083,
    1292,   471,   426,  2011,   472,  2053,   604,    70,    71,  1332,
     865,   176,  1131,   546,   680,  1092,   512,  1023,  1030,   177,
     493,   497,   502,   503,   507,   509,   605,  1026,    70,    71,
     606,    70,    71,  2236,    70,    71,   857,  1581,   357,   120,
     304,   513,    70,    71,   629,  2008,    70,    71,    70,    71,
    1034,   761,   123,  3170,  1617,   910,  1442,  1342,  2237,   125,
     724,  2238,   607,   608,  1187,  1343,   776,  1006,   939,  1052,
    1602,    70,    71,  2239,  1705,    83,   522,  1189,   125,   370,
    1736,  1977,  1978,    70,    71,   120,   777,   178,   358,   582,
     615,   590,  1283,   595,   599,   371,   858,   924,  2240,   928,
    3051,    60,   556,   171,   635,  3193,   305,   581,   547,  1196,
    1621,  1466,  1078,  1624,   120,   414,  2241,  1035,   120,  1031,
     715,   678,    70,    71,  3046,   609,   302,  1582,  1333,   120,
     306,  1007,  2015,   709,  1659,   630,   610,   911,    61,  2203,
     866,  1084,  1974,  1204,  1053,  2205,   179,  1188,   633,  2208,
    1093,    70,    71,   359,   277,   830,  1763,   312,   128,   328,
    1190,  2242,  1979,   831,   832,   261,   125,   129,   130,    70,
      71,  2009,   631,    70,    71,   131,   925,   128,   778,   180,
      72,   181,   726,  1334,    62,   259,   129,   130,   725,  1603,
    1737,   307,  1197,   372,   720,   616,   758,   330,   123,   442,
    1051,   855,   354,   123,   833,    63,   611,   612,  2000,   265,
     182,   373,   125,   634,   645,   791,   792,  1618,   762,   763,
     383,   859,  1948,   681,   120,  1293,  1132,   361,   849,  1205,
    1574,   836,   478,   838,  1335,    64,  1755,  3047,   945,   716,
    1206,   125,   131,   841,   844,   125,   847,   851,   365,   853,
    1443,   912,   710,   783,  2054,  2012,   125,    65,   621,   863,
   -1232,    66,  1706,   949,   452,   128,  1764,   120,   664,   133,
    1329,   952,   873,   875,   129,   130,    67,  3052,  1207,   173,
     185,  3128,  1775,  2976,  1079,   613,   183,   260,   133,  2291,
     935,   914,   427,    73,   345,   310,   927,  1344,   399,   934,
     936,  1330,   938,   347,  2266,   346,   942,   943,   120,   625,
    2043,   128,   711,   929,   940,  1133,   946,   957,   959,   163,
     129,   130,   834,  1294,   960,   415,   164,   165,   764,   963,
     965,   120,  1336,  1085,   917,   443,  1157,   966,   163,   660,
     128,   968,   410,   448,   128,   164,   165,   120,  1968,   129,
     130,   125,   374,   129,   130,   128,  1972,  1746,  1357,  2010,
     978,   979,   437,   422,   129,   130,   366,   983,   984,   985,
     986,   987,   988,  1284,   990,  1767,   133,   992,   993,   444,
     445,  1738,   308,   549,  2016,  2563,  2170,   314,   131,   550,
    3053,  2204,   356,   131,   125,  2385,   665,  2206,   920,  1022,
    1008,  2209,   930,  1568,  1009,  1808,  2243,  2271,   768,  1014,
    1015,  1016,  1017,  1018,  1019,  2200,  1020,  3129,   497,  1024,
    1025,   463,   133,  2331,  2589,   262,   163,  2026,   497,  1027,
     408,   309,  1699,   164,   165,   125,   551,  1820,  2229,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   189,
     128,   133,   263,  1362,  1338,   133,  1453,  1765,   125,   129,
     130,   554,  3130,  1454,   552,    68,   133,   190,  1175,   266,
     421,   315,   163,   900,   125,  1643,  1176,  1177,   432,   164,
     165,    70,    71,  1644,  1645,  1162,  1163,   362,  1060,  1061,
      70,    71,   905,   128,  1074,  2027,   267,   473,    70,    71,
    2003,   163,   129,   130,  1384,   163,  1069,   413,   164,   165,
     690,  1826,   164,   165,   363,   490,   163,   694,   622,   553,
     666,   278,  1827,   164,   165,   419,  1700,  1487,  1178,   113,
    1389,   769,  1363,  1367,   128,  1646,  1142,  1164,  1101,  1102,
     901,  1286,  1095,   129,   130,   623,    70,    71,  1122,   469,
     114,   420,   474,   667,  1103,   123,   759,   128,   691,   906,
     480,   133,   425,   554,   555,   279,   129,   130,   280,   626,
    2028,   789,   790,   128,  1504,   770,   771,   438,  2148,   459,
     491,  2151,   129,   130,  1386,  1137,   316,  1385,   281,   464,
     465,  1272,  1701,   376,  2004,   475,   627,  1390,  1104,   661,
    2171,   317,   695,   846,   133,  1105,  2095,   282,   115,   886,
    1740,   163,  1368,   395,  2096,  2097,   638,  1562,   164,   165,
    1287,   772,  1398,  2174,   283,  1420,   662,  1193,   454,  1743,
     284,  1364,   487,  1156,  1106,  2897,   439,  1273,   466,   639,
      70,    71,  1391,  1159,   440,   133,   377,   696,  1215,  1744,
     915,   918,   921,   384,   163,   931,   640,   378,  1107,   488,
    2005,   164,   165,  2029,  2120,   385,  2098,  1387,   133,  1394,
    2066,  2067,  2121,  2122,  2040,   318,   888,  1108,  1702,  1179,
    1180,   969,   692,   285,   133,   773,  1647,  1648,  1165,  1166,
     379,  1748,  1471,   697,  1109,   163,   386,   967,  1214,   467,
     416,  1110,   164,   165,  1472,  1399,   286,   116,  2172,  1111,
     237,  1369,   774,  2017,  1365,  1576,  1632,  1295,   163,  1288,
    1308,   902,  2068,  1641,  2123,   164,   165,   238,  1633,  2131,
    1703,  2175,  1210,   481,   163,  1642,  1395,  2132,  2133,   455,
     907,   164,   165,  1348,   483,   131,  2006,   396,  1349,  1350,
    1351,  1352,   970,   120,  1353,  1741,  1355,   641,  1356,   497,
    1358,  2086,  2087,  1742,  1211,  1181,   104,  1563,   121,  2173,
    1265,  1112,  1649,  1400,  1167,   485,  1182,  1183,  1392,    70,
      71,  1184,   387,  1650,  1651,  1168,  1169,  1405,  1652,  2134,
    1038,   122,  2176,  1274,  1370,  1113,   510,  1266,  2007,  1433,
    1114,  1850,  1115,  2106,  2107,   523,  1749,  2018, -1458,   123,
    1275,  1276,  1916,  2088,  1185,   534,  2400,  2099,  2100,   117,
    1296,  1653,   287,  1170,   105,    70,    71,   388,  2410,   456,
    1116,  1117,  1564,   971,   106,  1419,  2284,  1423,  1854,  1118,
    1401,   107,  1424,  1425,   397,  1426,  1427,  1429,  1431,  1432,
    2495,  2496,   288,   289,  1406,  2108,  1733,   896,   124,  1565,
    1832,  1119,   535,  1445,  1446,   290,  1756,  1325,  1851,   291,
    1450,  1451,  1750,  2069,  2070,  2124,  2125,  2019,  2559,   380,
     125,   536,  2645,  2646,  2647,  2648,  2649,  2650,  2651,  2652,
    2653,  1457,  1458,  1459,  1460,  1461,  1858,  1463,   559,  1465,
    1467,  1039,  2497,  2101,   642,  1855,   389,   561,  2568,  3057,
     592,  1864,  1277,  1278,  2102,  2103,   390,  1396,   618,  2104,
     643,  1120,   619,  1482,  1483,  1484,   126,  1486,   497,  1488,
    2313,  1489,   620,   108,  1868,  1493,   972,  2587,   449,   391,
    2135,  2136,   973,   646,  1872,  2020,  1326,  1267,   392,   637,
    1734,   654,  2105,  1492,   656,  1494,    70,    71,  1876,  2071,
    1757,  2126,   657,  1859,  2089,  2090,   647,   393,  1497,   127,
    2072,  2073,  2127,  2128,   877,   497,  1505,  2129,  1865,   128,
     659,  1507,  2036,   648,   450,  1152,   109,   679,   129,   130,
    1302,  1040,  1880,  1556,   685,  1303,   688,  1272,  1520,   131,
    2458,  1869,  1524,  1160,   132,  1042,  2109,  2110,  2074,  1969,
    2130,  1873,  1268,    70,    71,   686,  1567,  1569,  1572,   713,
    2471,  1402,  2022,   110,  1577,  1877,  2137,  1843,  1844,  1583,
    2481,  1000,  1001,  2484,  1886,  1407,  3133,  2138,  2139,  1269,
    2491,   878,  2140,  1273,  1586,  1327,  1636,   293,  3136,  1852,
    2091,  1043,   669,  2498,  2499,  2528,   111,   707,  2531,  1881,
     718,  2092,  2093,  1596,   670,  1557,  2539,  2654,   294,  2542,
      70,    71,  1620,   722,  1304,  2141,  2037,   723,   964,   186,
    1311,   879,   880,    70,    71,  1339,  1856,   727,  1735,   349,
     133,  1272,  2111,  1894,   756,   671,  1898,  1558,  1758,  2094,
    1305,  1887,   649,  2112,  2113,   757,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,    70,    71,  1273,   760,  2500,
     163,  2114,   766,  1932,  1860,  1739,  2038,   164,   165,   780,
    2501,  2502,  2636,   785,  1679,   787,    93,    70,    71,  1866,
    1895,  1299,   788,  1899,   295,  1449,  1766,  2023,   793,   650,
    3086,    70,    71,  1306,   842,  2024,  1773,  1845,  1846,   828,
     296,   672,  1870,  1680,  1004,  1005,  3092,   840,  2503,  3103,
    1559,   881,  1874,  1803,  1421,  1804,    70,    71,  2030,  1274,
    1805,  1806,  1807,   854,   350,   861,  1878,    70,    71,  1847,
    1813,    70,    71,  1814,  2039,  1816,  1275,  1276,   331,  1681,
     651,   297,   882,   320,  2180,   862,   673,  1682,  2288,  2504,
    2505,   652,  1818,  1683,  1819,   864,  2513,  2514,   868,  1708,
    1882,   870,  1823,  1824,   321,  2031,   322,  2181,   876,  1560,
     504,  2683,   884,   843,   904,  1684,   909,  1830,  1831,  2182,
     563,   497,  1833,  1834,   933,  1474,   941,  2884,   954,  1836,
    1709,  1837,  2183,  1710,  1839,  2702,  1840,   961,   298,  1685,
      94,  2506,  1888,    70,    71,   976,  2184,  2185,  2515,   962,
    1920,  1307,   351,  1274,   977,    95,   299,  1686,   728,   564,
     980,   729,   981,   352,  1664,   674,  1711,   982,   565,   989,
    1275,  1276,   991,  2032,  2836,   675,  1436,  1437,  1277,  1278,
    2852,   730,  1911,   994,    96,  2857,   995,  1912,    97,   505,
     996,  1913,   997,  1914,  1915,  1687,  1926,  1712,  1918,  3186,
    1713,  1896,    93,   998,  1900,   999,  3190,  1042,  1002,    70,
      71,  1029,  1717,   494,  1924,  1028,  1927,   731,  1929,  1930,
    1931,  1933,   496,   732,  1935,  1936,   676,  1938,  1939,  1033,
    1941,  1037,  1943,   300,  1046,  1467,  1048,   332,  1055,  2033,
    1688,  1057,   323,  1718,  1665,   333,  1719,   334,  1956,  1720,
      98,    70,    71,  1043,   886,  1962,  1689,  1975,  1058,  1963,
    1964,  1965,    70,  1428,  3227,  1071,  3228,    70,    71,  1690,
     497,  1970,  1277,  1278,  1973,  1995,   733,   429,  1076,  1721,
      70,    71,  1983,  1087,  1984,  1439,  1440,  1986,   506,  2744,
     871,    84,  2507,  2508,    99,  1081,   121,  1088,  2753,  2516,
    2517,  1691,  2822,   100,   101,    70,  1519,  2762,  1988,   324,
    1722,  2186,  1090,  1723,    70,    71,  1692,   887,  1693,  1694,
    1091,   888,  2187,  2188,  2189,  2190,  2395,  1571,  1096,    85,
    1011,  1012,  1666,  1667,  2044,  1123,  2045,   123,  1714,  2046,
    2047,    95,  2048,   433,  2049,  2874,  1124,  1668,  1135,    76,
    2051,  1125,  2878,  1098,  2052,    77,  1099,  1100,  1138,  1695,
     325,   889,   890,  2058,  1127,  2075,   891,  1811,  1812,   872,
      96,   326,  1129,  1715,  2396,    70,    71,  2085,  2509,  1140,
     494,   495,   496,  2222,  2223,  2518,   124,   514,  1989,  2510,
    2511,  1770,  3009,  3010,  1669,  1144,  2519,  2520,  1149,  2146,
    2147,   956,    78,  1150,  2990,  1610,  1611,   892,    86,    70,
      71,  2169,  1671,  1672,  1151,   734,  1153,  2191,  1154,  1155,
    3003,   269,  2908,  2163,  2910,  3008,  2911,  2512,  1158,  2912,
      79,  2913,  1161,  1171,  2521,  1172,    98,    70,    71,  2199,
    1671,  1672,  2165,  2166,  2168,   735,   736,  1174,  1173,  1817,
    1186,  1724,   270,  1198,   126,    70,    71,  2164,   737,    87,
      88,  1200,   738,  1825,  2178,  1201,   893,   515,  1208,  2194,
    1209,   894,    70,    71,  2167,  1213,  1990,  1991,  2986,  1264,
      99,  2989,  1271,  2991,  1280,    80,  1725,  1282,  1290,   100,
     101,  1992,   516,   517,  1291,  2225,  2227,  1345,   895,  3004,
    3005,   518,   896,    70,    71,  2226,  2234,    89,    90,    70,
      71,  2247,  1671,  1672,  1346,   897,  1347,  1726,  2253,  3023,
      70,    71,  2228,  1671,  1672,   519,  1359,   131,  1361,  1372,
      81,  1373,   132,  2259,  1374,   520,  1375,   271,  1993,  2262,
    1376,  1377,  1379,  2264,  1378,  2267,  2268,  1380,  2270,  2272,
    2273,  1381,  2276,  1382,   272,  2279,  2280,  2281,  1383,  2283,
    2285,  2286,  2287,  2289,  2292,  2294,  2295,  1404,  1411,    91,
    2297,  2298,  2299,  2300,  1409,  1410,  1412,  1413,  1414,  1415,
    2306,  2307,  1416,  1417,  2309,  2310,  2311,  1418,  1434,  3030,
    2314,  2315,  1253,  1435,  1438,  1441,  1447,  1448,  1452,  1455,
    1951,  1952,  1456,  2318,  2319,  1462,  2320,  2321,  1254,  1464,
    1469,  1470,  1473,  1510,  2594,  1475,  1476,  1255,  1478,  1480,
    1514,  1490,  1491,  1495,   273,  1511,  1512,  1516,  1256,  1517,
    1515,  1518,  1561,  1522,   341,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,  1573,  1257,  1523,   537,  1575,  1584,  1579,
    1587,  1589,  2366,   274,  2639,  1590,  1593,  1605,  2359,  1594,
    2360,  2361,  1597,  1598,   275,  2362,  1599,   538,  1258,  1606,
    2364,  2367,  1607,  2369,  2370,  2371,  1608,  2372,  2373,  1312,
    2375,  1612,  2376,  2377,   539,  2379,  2380,  1313,  2382,  1614,
    2384,  1467,  1613,  1615,  1616,  1314,  1622,   540,  1623,  1732,
    1625,  3185,  1654,  2393,   511,  1626,  1628,  1630,  1638,  1640,
    1655,  2398,  1656,  1315,  2660,  1657,  2403,  2404,  1660,   541,
    1316,  1661,  2406,   542,  1259,  1662,  1675,  1676,  2423,  1677,
    1678,  2409,  1697,  1698,  1707,  1716,  1730,  1731,   543,  1728,
    2429,  1727,  1753,  1729,  2434,  1759,  1751,  1317,  1752,  1760,
    1747,  1761,  1769,  1762,  1768,  1771,  1772,  1802,  1318,  1810,
    1821,  1822,  1828,  1829,  1835,  1838,  1842,  1841,  2438,  1260,
    1863,  1884,  1885,  1890,  1893,  2161,   579,  1891,   586,   589,
    1892,   594,   598,  1902,  1903,  1904,  1907,   544,  1905,  1906,
    1921,  1922,  1934,  1996,  2448,  2449,  1937,  1955,  1261,  2451,
    1923,  1928,  1940,  1319,  2179,  2453,  1942,  1945,  1946,  2196,
    2197,  1320,  1950,  2463,   683,  1957,  1958,  1959,  1971,  1997,
    1976,  2469,  2470,  1985,  -532,  1987,  1998,  2021,  2115,  2002,
    2034,  2479,  2480,   699,   705,  2025,  2013,  2014,  2230,   712,
    2050,  2489,  2490,   717,  2035,  1262,  2041,  1263,  2056,  2057,
    2062,  2249,  2081,  2084,  2620,  2117,  2526,  2527,  2119,  2143,
    2254,  2255,  2144,  2145,  1321,  2149,  2150,  2537,  2538,  2142,
    2152,  2153,  2260,  2154,  2544,  2157,  2210,  1322,  2160,  2177,
    2193,  2198,  2211,  2201,  2547,  2202,  2207,  2212,  2213,  2214,
    2215,  2217,  2218,  2219,  2220,  1323,  2221,  2224,  2265,  2235,
    2245,  2269,   837,  2250,  2261,   839,  2263,  2274,  2277,  2278,
    2303,  2304,  2554,  2555,  2282,  2557,   848,  2305,  2296,  2316,
    2317,  2475,  2322,  2323,  2324,  2624,  2325,  2326,  2327,  2447,
    2328,  2329,  2330,  2522,  2332,  2333,  2820,  2821,  2334,   869,
    2824,  2825,  2335,  2336,  2828,  2829,  2337,  2340,  2569,  2570,
    2571,  2572,  2573,  2574,  2575,  2576,  2577,  2338,  2339,  2341,
    2342,  2343,  2663,  2344,  2345,  2346,  2347,  2348,  2869,  2349,
    2350,  2351,  2583,  2352,  2585,  2353,  2354,  2355,  2533,  2356,
    2357,  3118,  2358,  2994,  2374,  2378,  1010,  2381,  2383,  2386,
    2387,  2388,  2390,  2392,  2593,   497,  2405, -1250,  2411,  2412,
    2597,  2413,  2414,  2415,  2882,  2450,  2844,  2452,  2455,  2456,
    2457,  2600,  2601,  2602,  2603,  2604,  2605,  2606,  2607,  2608,
    2609,  2459,  2460,  2612,  2613,  2614,  2615,  2616,  2617,  2618,
    2619,  2461,  2621,  2622,  2623,  2464,  2625,  2626,   852,  2629,
    2466,  2630,  2631,  2632,  2467,  2468,  2472,  2473,  3201,  2474,
    2476,  2477,  2478,  2482,  2483,   497,  2640,  2485,  2486,  2487,
    2488,  2492,  2493,  2529,  1003,  2494,  2523,  2524,  2525,  2530,
    2995,  2532,  2534,  2535,  3118,  2536,  2540,  2541,  1013,    70,
      71,  2996,  2543,  2545,  2546,  2548,  2549,  1021,  2551,  2558,
    2560,  2564,  2567,   240,  2578,   121,  2579,  2997,  2580,  2581,
    2582,   975,  2586,   955,  2628,  2633,  2634,  2655,  2637,  2656,
    2638,  2657,  2641,  2659,  2644,   497,  2661,   241,  2662,  2664,
     242,  2665,  2670,  2666,  2667,  2672,  2668,  2669,  2674,  2671,
    2675,  2673,  2676,  2678,  2679,  2998,  2686,  2690,  2689,  2691,
    2692,  2693,  2694,  2723,  2681,  2726,  2682,  2728,  2731,  2734,
    2685,  2735,  2737,  2687,  2739,  2740,  2741,  2745,   243,  2746,
    2754,  1062,  1063,  2747,  2748,   244,  2974,  2749,  2750,  2755,
    2763,  2979,  2756,  2757,  1067,  2758,   245,   246,  2759,  1070,
    2725,  2764,  2772,   247,  2765,   124,  2775,  2783,  1082,  2786,
    2789,  2790,  2791,  2794,  2799,  2803,  2730,  2819,  3132,  2860,
    2727,  2864,  2880,  3001,  2886,  2887,  2732,  2733,  2888,  2889,
    2892,  2894,   248,  3018,  2895,  2896,  2901,  2736,  2899,  2902,
    2903,  3115,  2904,  2906,  2915,  2917,  2738,  2922,  2929,  2938,
    2742,  2743,   249,  2947,  2953,  2957,  2963,  2971,  2984,  2751,
    2752,  2999,  3000,  3002,  3020,  3031,  2792,  3032,  2760,  2761,
     250,   251,  3034,   126,  2766,  3035,  3036,   252,  3037,  3038,
    3039,  3040,  3041,  3042,  2776,  2777,  3044,  3171,  3050,  3056,
    3172,  3080,  3083,  3089,  3094,  2787,  1059,  2788,  1145,  1146,
    1147,  1148,   253,  1064,  2562,  3093,  1065,  3095,  3096,  3097,
    3098,  1066,  3100,  3105,  3122,  1068,  3106,  3123,  3124,  3125,
    3126,  3127,  3134,  3137,  2797,  3148,  3156,  3168,  3159,  3160,
    3163,  1388,  3173,  3174,  3181,  3184,  2804,  2805,  2806,  2807,
    2808,  2809,  2810,  2811,  2812,  2813,  2814,  3176,  3178,   254,
    3188,   132,  2817,  3195,  3196,  2588,  3202,   497,   497,  3210,
    3221,   497,   497,  3214,  3215,   497,   497,  2830,  2831,  2832,
    2833,  2834,  2835,  3217,  2837,  2838,  2839,  3223,     0,  3224,
    2853,  2854,  2855,  2856,  3225,  2858,  2859,  3226,  2861,  2862,
    2863,     0,  2865,  2866,     0,  2868,     0,     0,  2872,  2873,
    1143,     0,     0,     0,     0,   255,     0,     0,     0,     0,
       0,  1310,     0,     0,     0,     0,     0,     0,     0,   256,
       0,     0,  2881,     0,     0,   497,  2883,     0,     0,     0,
    2885,     0,     0,     0,     0,  2890,  2891,     0,  2893,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   257,     0,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,     0,  2920,     0,     0,  2921,     0,     0,  2923,
       0,     0,     0,     0,  2918,     0,     0,     0,     0,  2932,
       0,     0,     0,     0,     0,     0,     0,     0,  2941,     0,
       0,     0,     0,     0,     0,     0,     0,  2950,     0,     0,
       0,     0,     0,     0,  2952,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2956,     0,     0,     0,     0,
       0,  2959,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1354,  2965,     0,     0,     0,
    2967,     0,  1360,     0,     0,     0,     0,     0,     0,     0,
    2968,  2969,     0,   794,   795,     0,  2973,   497,     0,     0,
       0,  2978,   497,   739,   740,   741,     0,  2983,     0,   796,
    2987,  2988,  1479,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1485,     0,     0,     0,
     742,     0,  3006,  3007,     0,     0,  3011,     0,  3013,  3014,
    3015,     0,  3017,   743,   497,  3019,     0,     0,     0,  3022,
       0,     0,     0,   797,     0,     0,     0,     0,     0,   744,
     798,     0,  3033,     0,     0,     0,     0,  1496,     0,   799,
       0,   800,     0,     0,  3043,     0,   801,     0,     0,   802,
       0,     0,     0,     0,  3059,   803,     0,     0,     0,   804,
       0,  3060,     0,   745,     0,  3058,   805,     0,     0,     0,
    3062,     0,     0,   746,   806,     0,     0,     0,     0,  3064,
       0,     0,     0,   807,     0,  3067,     0,  2992,     0,  3069,
       0,     0,     0,     0,     0,   747,     0,     0,     0,     0,
    1477,     0,   808,     0,   748,     0,     0,  3070,     0,  3012,
    1481,     0,  3074,  3016,  3076,     0,     0,     0,     0,  3021,
    3079,     0,     0,     0,   749,     0,   809,     0,  1592,     0,
       0,     0,     0,     0,     0,  3087,     0,     0,     0,     0,
       0,  2875,     0,     0,   810,     0,     0,     0,     0,     0,
     750,     0,     0,     0,  3104,     0,     0,   811,   812,  1498,
    1499,  3110,     0,     0,  1503,  3143,     0,  1506,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1513,
       0,     0,   813,     0,     0,     0,     0,     0,     0,     0,
    3131,     0,   751,     0,     0,     0,     0,   752,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   814,     0,     0,   753,     0,     0,   754,  1745,     0,
       0,  3146,     0,     0,     0,   815,  3151,   816,     0,  3153,
       0,     0,     0,     0,  3084,  3085,  3157,     0,  3088,     0,
    3090,     0,     0,   817,     0,     0,  1981,  3161,   818,     0,
       0,     0,  3164,  3101,  3102,     0,   819,     0,     0,  3107,
    3108,   121,  3109,     0,   820,     0,  3112,     0,     0,     0,
       0,  3113,  3114,     0,  1809,     0,     0,  3183,  3175,  3177,
       0,     0,     0,     0,  1815,     0,   821,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   822,   823,  3187,   824,     0,     0,  3189,     0,
    3204,  3191,  1663,  3207,     0,     0,     0,     0,     0,     0,
       0,     0,  3197,  3198,  3199,  3200,     0,    70,    71,     0,
       0,     0,  3154,     0,  3209,  3155,     0,     0,  3212,     0,
    3158,     0,     0,   121,     0,  3216,   825,  3218,     0,     0,
       0,   124,  3162,     0,     0,  3165,     0,     0,     0,  3166,
       0,     0,     0,     0,     0,   336,     0,     0,     0,     0,
    2684,     0,     0,     0,     0,     0,     0,     0,     0,  3024,
       0,     0,     0,  3029,   123,     0,     0,  2697,  2698,  2699,
       0,     0,  2701,     0,  2703,  2704,     0,     0,  2706,  2707,
    2708,     0,     0,  2710,  2711,     0,  1917,     0,  2715,     0,
    2717,  2718,     0,  2720,     0,     0,     0,     0,     0,   126,
       0,     0,     0,     0,  1925,     0,     0,     0,     0,     0,
       0,     0,     0,   124,     0,  3208,     0,     0,     0,  3211,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1953,     0,   402,     0,  3222,
       0,     0,     0,  1961,     0,   403,     0,     0,     0,     0,
       0,     0,     0,  3229,  1967,     0,  3230,  3231,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     597,  1982,     0,     0,     0,     0,     0,   132,     0,     0,
       0,   126,     0,  1994,     0,   121,     0,  3099,  2001,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2793,     0,     0,  2796,     0,     0,     0,     0,  2800,
    1919,     0,     0,  2801,     0,  3121,     0,     0,     0,     0,
       0,     0,     0,     0,   337,     0,   123,     0,     0,     0,
       0,     0,  2816,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   131,     0,  1954,     0,     0,   132,
       0,     0,  1960,     0,     0,     0,     0,     0,     0,     0,
     338,     0,     0,  1966,     0,   124,     0,     0,     0,     0,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,     0,  1600,
    1601,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2898,     0,
       0,  2162,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   339,   126,     0,     0,     0,     0,  1658,     0,
       0,     0,     0,     0,     0,     0,  3194,     0,     0,     0,
    2195,  2909,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
       0,     0,  2232,     0,     0,  2233,     0,     0,   404,     0,
    2246,   405,     0,     0,     0,     0,  2251,  2252,     0,     0,
       0,     0,     0,     0,     0,  2257,   131,     0,     0,     0,
       0,   132,  2258,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2962,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2970,     0,  2301,     0,     0,     0,     0,
       0,  2977,     0,     0,  2980,  2981,     0,  2312,     0,     0,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2248,     0,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
    2365,     0,     0,     0,     0,     0,  2302,     0,     0,     0,
       0,     0,  2308,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2389,     0,  3071,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2402,     0,     0,     0,     0,
    3082,     0,     0,     0,     0,     0,     0,     0,  2407,     0,
    2408,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2417,     0,     0,  2419,  2420,  2421,  2422,  2424,     0,  2426,
       0,     0,     0,  2427,     0,     0,     0,     0,  2428,  2430,
    2431,  2432,  2433,  2435,     0,     0,  2436,  2437,     0,     0,
       0,     0,  2439,  2440,  2441,  2442,     0,     0,  2443,  2444,
       0,     0,     0,     0,     0,  2445,  2446,  2363,     0,     0,
       0,     0,  2368,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    3144,  3145,     0,  3147,     0,  3149,  3150,     0,     0,  3152,
    2391,     0,     0,     0,     0,     0,     0,     0,  2394,     0,
       0,  2059,  2060,  2061,  2401,     0,     0,     0,     0,  2063,
    2064,  2065,     0,     0,     0,     0,     0,     0,  2076,  2077,
    2078,     0,     0,  2079,  2080,     0,  2082,  2083,     0,     0,
       0,  2418,     0,     0,  2840,     0,     0,     0,  2425,     0,
       0,     0,     0,     0,     0,     0,  2841,     0,     0,     0,
       0,  3180,     0,     0,     0,     0,     0,     0,     0,     0,
    2155,  2156,     0,     0,  2158,  2159,     0,     0,  1776,     0,
       0,     0,     0,  1777,  1312,  2842,     0,     0,     0,     0,
       0,  2553,  1313,     0,  2556,     0,     0,     0,     0,     0,
    1314,     0,     0,     0,     0,  2561,     0,     0,  1778,  1779,
    3213,  1780,  1781,     0,     0,     0,     0,     0,  1315,     0,
       0,  2565,     0,  1782,     0,  1316,     0,     0,  2843,     0,
       0,     0,     0,     0,     0,     0,     0,  1783,  1784,     0,
       0,     0,     0,     0,     0,  1785,     0,     0,  1786,     0,
       0,     0,  1317,  2584,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1318,     0,     0,  1787,     0,     0,     0,
       0,     0,     0,     0,     0,  1788,  1789,     0,     0,  1790,
       0,     0,     0,     0,     0,     0,     0,   121,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     567,     0,     0,     0,     0,     0,     0,     0,  1319,  2552,
       0,  1791,     0,     0,     0,     0,  1320,  2627,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   568,   569,
    2643,     0,  2566,     0,   570,     0,     0,     0,     0,     0,
       0,     0,  1792,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   571,   572,  1321,
       0,     0,     0,     0,     0,     0,     0,   124,     0,  2590,
    2591,   700,  1322,   121,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2592,     0,     0,     0,     0,  2595,  2596,
    1323,     0,     0,     0,  2598,  2599,     0,     0,     0,     0,
       0,     0,  2844,     0,  2845,     0,     0,  1793,     0,     0,
    2680,     0,     0,  1794,     0,     0,   701,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2688,     0,     0,     0,
       0,  1795,     0,  2695,     0,   126,     0,     0,  2635,     0,
       0,     0,  1796,   121,     0,     0,     0,     0,     0,  2642,
     573,     0,     0,     0,     0,  2713,     0,     0,     0,     0,
       0,     0,  2846,   124,  2722,     0,     0,     0,  2724,     0,
     574,     0,     0,     0,  1797,  1798,     0,     0,     0,   702,
       0,     0,     0,     0,   123,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   575,     0,     0,     0,  1799,
       0,     0,  2658,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   132,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2677,     0,     0,     0,
       0,   126,     0,   124,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1800,     0,     0,     0,
       0,   703,     0,     0,  2696,     0,     0,     0,     0,  2700,
       0,     0,     0,     0,     0,  2705,  2454,     0,     0,   576,
    2709,     0,  2795,     0,  2712,  2798,  2714,     0,  2716,  2462,
     577,  2719,     0,  2721,  2802,     0,     0,     0,     0,  2465,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2815,   126,     0,  2818,     0,     0,     0,     0,     0,   132,
    2823,     0,     0,  2826,  2827,     0,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,     0,   578,     0,     0,     0,     0,
       0,     0,     0,     0,  2876,  2877,     0,     0,     0,     0,
       0,  2550,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   131,     0,     0,     0,     0,   132,
       0,     0,     0,     0,     0,     0,   704,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2905,     0,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
       0,     0,     0,     0,   588,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2867,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2879,     0,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
       0,  2961,     0,     0,     0,  1216,  1217,  1218,     0,     0,
       0,     0,     0,     0,     0,  2900,     0,     0,     0,     0,
       0,     0,  2907,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2982,     0,  1219,  1220,     0,
       0,  1221,     0,     0,  1222,     0,  2993,     0,     0,  2914,
       0,  2916,  1223,     0,     0,     0,  1224,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1225,  1226,     0,     0,
       0,     0,     0,     0,  1227,  1228,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1229,     0,     0,     0,     0,
       0,     0,  1230,     0,     0,     0,     0,     0,     0,     0,
    1231,     0,     0,     0,  1232,  1233,     0,     0,  1234,  3049,
       0,     0,     0,  3055,     0,     0,     0,     0,     0,  2960,
       0,     0,     0,     0,     0,  2964,     0,     0,  1235,  2966,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2972,     0,     0,     0,     0,
       0,     0,  1236,     0,     0,     0,     0,  2729,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    3072,  3073,     0,  3075,     0,     0,     0,     0,  3077,  3078,
       0,  1237,     0,     0,     0,  3081,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  3027,  3028,     0,     0,     0,  1238,     0,
       0,     0,     0,     0,     0,     0,     0,  2767,  2768,  2769,
    2770,  2771,  3111,  2773,  2774,     0,     0,     0,  2778,  2779,
    2780,  2781,  2782,     0,  2784,  2785,     0,     0,     0,     0,
       0,     0,     0,     0,  1239,     0,  1240,     0,     0,     0,
       0,     0,  1241,  1242,     0,     0,     0,  3135,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1243,
    1244,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1245,  1246,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1525,  1526,  1527,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1247,     0,  1248,     0,     0,     0,     0,     0,
    3091,     0,     0,     0,     0,     0,     0,     0,     0,  1249,
     121,  1250,  1528,  1529,     0,     0,  1530,     0,  1251,     0,
       0,     0,     0,  1531,     0,     0,     0,  1532,     0,     0,
       0,  1533,     0,     0,     0,  3182,     0,     0,     0,     0,
       0,  1534,  1535,     0,     0,     0,     0,     0,     0,  1536,
       0,   123,  1252,     0,  3192,     0,     0,     0,     0,     0,
    1537,     0,     0,     0,   121,     0,     0,     0,  3203,     0,
       0,  3206,     0,     0,     0,     0,     0,     0,     0,  1538,
    1539,     0,     0,  1540,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     124,     0,     0,  1541,  2919,   121,     0,     0,   584,     0,
       0,     0,     0,  2924,  2925,  2926,  2927,  2928,  3167,  2930,
    2931,     0,  2933,  2934,  2935,  2936,  2937,  1542,  2939,  2940,
       0,  2942,  2943,  2944,  2945,  2946,     0,  2948,  2949,     0,
    2951,     0,  3179,   121,     0,     0,  1591,     0,     0,     0,
    2954,  2955,     0,     0,   124,     0,  1543,     0,     0,     0,
       0,  2958,     0,     0,     0,     0,  1544,     0,   126,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  3205,
       0,     0,     0,     0,     0,   124,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    3219,     0,     0,  3220,     0,     0,     0,     0,     0,  1545,
       0,  1546,   126,     0,     0,  2416,     0,  1547,  1548,     0,
       0,     0,     0,   124,     0,     0,     0,   121,     0,     0,
       0,   131,     0,     0,     0,  1549,   132,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1550,     0,     0,
       0,     0,     0,   126,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1551,     0,  1552,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     132,   126,  1553,     0,     0,     0,  3061,     0,     0,     0,
       0,     0,     0,  1554,     0,  3063,     0,     0,     0,     0,
       0,     0,     0,     0,  3065,     0,  3066,   124,     0,  1191,
    3068,     0,     0,     0,  1192,     0,     0,     0,     0,     0,
       0,   132,     0,     0,     0,     0,     0,  1555,     0,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   585,     0,   132,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   126,     0,     0,     0,     0,
       0,     0,     0,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,     0,     0,     0,  3138,     0,  3139,     0,  3140,     0,
       0,  3141,     0,  3142,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,     0,   132,     0,     0,     0,     0,     0,     0,
       0,     0,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,     0,     0,
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
       0,     0,     0,    39,     0,    40,     0,     0,     0,     0,
       0,     0,    41,     0,     0,     0,    42,     0,   192,     0,
      43,   193,    44,    45,   194,    46,     0,     0,     0,     0,
      47,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   195,    48,     0,     0,   196,
     197,   198,    49,     0,     0,     0,     0,     0,     0,   199,
       0,   200,     0,     0,     0,     0,   201,     0,   202,   203,
     204,    50,     0,    51,     0,     0,   205,     0,   206,     0,
       0,     0,     0,     0,     0,     0,    52,     0,    53,     0,
       0,     0,     0,     0,     0,    54,     0,     0,    55,    56,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   207,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    57,
       0,     0,     0,   208,     0,     0,     0,    58,     0,     0,
       0,     0,   209,     0,   210,   211,     0,   212,   213,     0,
       0,   214,     0,     0,     0,   215,     0,   216,  1634,     0,
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
       0,     0,     0,     0,     0,   229,     0,   230,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   231,     0,     0,
       0,     0,     0,     0,     0,   232,     0,     0,     0,     0,
       0,   233,     0,   234,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,  1635,     0,     0,     0,     0,     0,     0,     0,
       0,   235
};

static const yytype_int16 yycheck[] =
{
       3,    56,  1720,   557,  1064,  1065,  1066,  1076,    11,  1468,
     811,   812,  1963,    16,  1965,  1217,    37,  1734,   320,    16,
       4,   816,     4,     0,     4,  1375,     5,     5,     4,  1379,
      13,     3,     4,     5,    37,    47,     4,    33,    28,     5,
    1757,     4,     5,    46,     5,     5,    21,     5,     3,     4,
      49,    63,    55,     3,     4,    58,    88,     5,    61,  1409,
    1410,  1411,    65,    12,    46,    68,     5,    49,     5,     4,
      73,    74,     4,    26,    77,    60,    88,    80,    81,     3,
       4,    84,    65,  1143,    87,    88,     4,    58,    91,     4,
      16,    94,    33,    21,    97,    20,   108,     3,     4,    16,
     167,    83,    18,   130,    15,   148,   127,   511,   112,    91,
     113,   114,   115,   116,   117,   118,   128,   521,     3,     4,
     132,     3,     4,    27,     3,     4,    97,    16,    42,     4,
       5,   134,     3,     4,     4,    28,     3,     4,     3,     4,
     219,     5,    60,  3117,    16,    35,   105,   107,    52,   131,
       4,    55,   164,   165,    94,   115,   101,     5,    63,   219,
     185,     3,     4,    67,   154,   327,   169,    94,   131,   122,
      37,    24,    25,     3,     4,     4,   121,   159,     4,   200,
     246,   202,    16,   204,   205,   138,   157,   136,    92,    18,
      33,    71,   195,    34,   215,  3169,    71,   200,   225,    94,
    1181,    31,   186,  1184,     4,     5,   110,   286,     4,   213,
     171,   232,     3,     4,   210,   227,   265,   106,   135,     4,
      95,    69,    21,   171,  1205,    95,   238,   117,    11,    21,
     297,   146,     4,   216,   294,    21,   218,   177,     5,    21,
     283,     3,     4,    69,    15,   225,    37,     5,   230,   325,
     177,   155,   105,   233,   234,    65,   131,   239,   240,     3,
       4,   154,   132,     3,     4,   250,   215,   230,   213,   251,
     225,   253,   275,   190,    57,    71,   239,   240,   132,   304,
     147,   156,   177,   236,   219,   351,   289,    71,    60,   213,
     322,   346,     4,    60,   274,    78,   308,   309,   273,    65,
     282,   254,   131,    70,   218,   308,   309,   179,   172,   173,
       4,   282,   311,   224,     4,   241,   232,    65,   339,   302,
    1115,   324,   261,   326,   241,   108,   284,   323,   260,   290,
     313,   131,   250,   336,   337,   131,   339,   340,   220,   342,
     299,   231,   290,   309,   269,   273,   131,   130,    65,   352,
     327,   134,   342,   329,   225,   230,   147,     4,    21,   341,
     297,   329,   365,   366,   239,   240,   149,   210,   351,    14,
      15,   213,   351,   351,   358,   387,   358,    22,   341,   351,
     259,    71,   323,   338,   347,    30,   389,   347,   338,   392,
     393,   328,   395,    38,   259,   358,   399,   400,     4,    65,
     397,   230,   350,   232,   309,   321,   338,   410,   411,   391,
     239,   240,   392,   339,   417,    60,   398,   399,   282,   422,
     423,     4,   339,   338,    71,   349,   728,   430,   391,    65,
     230,   434,   338,    78,   230,   398,   399,     4,  1498,   239,
     240,   131,   395,   239,   240,   230,  1506,  1242,   852,   342,
     453,   454,     4,   338,   239,   240,   338,   460,   461,   462,
     463,   464,   465,   297,   467,  1260,   341,   470,   471,   393,
     394,   338,   347,   213,   273,  2192,  1678,    61,   250,   219,
     323,   273,    95,   250,   131,  1944,   149,   273,    71,   510,
     493,   273,   321,   237,   497,  1296,   400,   259,     5,   502,
     503,   504,   505,   506,   507,  1707,   509,   349,   511,   512,
     513,     4,   341,  1863,  2231,   325,   391,   191,   521,   522,
     265,   396,    27,   398,   399,   131,   266,  1328,  1730,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   162,
     230,   341,   352,    42,   329,   341,     4,   338,   131,   239,
     240,   393,   394,    11,   294,   338,   341,   180,     5,   325,
       4,   145,   391,    65,   131,     5,    13,    14,   392,   398,
     399,     3,     4,    13,    14,    13,    14,   325,   581,   582,
       3,     4,    65,   230,   605,   259,   352,   224,     3,     4,
      27,   391,   239,   240,    94,   391,   599,     0,   398,   399,
      46,     5,   398,   399,   352,     4,   391,   167,   325,   349,
     273,     4,    16,   398,   399,   308,   121,  1021,    65,    42,
      65,   128,   121,    42,   230,    65,   681,    65,     4,     5,
     132,    42,   635,   239,   240,   352,     3,     4,   659,     4,
      63,     5,   279,   306,    20,    60,   291,   230,    94,   132,
       4,   341,     5,   393,   394,    48,   239,   240,    51,   325,
     334,   306,   307,   230,  1068,   172,   173,   219,  1649,     5,
      69,  1652,   239,   240,    94,   678,   260,   177,    71,   172,
     173,    68,   187,    54,   121,   322,   352,   132,    64,   325,
     115,   275,   252,   338,   341,    71,     5,    90,   121,    65,
     155,   391,   121,     4,    13,    14,    48,    31,   398,   399,
     121,   218,    94,   115,   107,   321,   352,   772,    85,   259,
     113,   220,     5,   726,   100,  2676,   278,   114,   221,    71,
       3,     4,   177,   736,   286,   341,   107,   297,   793,   279,
     385,   386,   387,    38,   391,   390,    88,   118,   124,    32,
     187,   398,   399,  1548,     5,    50,    65,   177,   341,    65,
      13,    14,    13,    14,  1559,   349,   132,   143,   273,   216,
     217,    31,   218,   166,   341,   282,   216,   217,   216,   217,
     151,   144,     4,   343,   160,   391,    81,   432,   791,   282,
      63,   167,   398,   399,    16,   177,   189,   220,   223,   175,
      90,   220,   309,    27,   303,   237,  1189,   810,   391,   220,
     813,   313,    65,  1196,    65,   398,   399,   107,  1190,     5,
     325,   223,   177,    32,   391,  1197,   132,    13,    14,   196,
     313,   398,   399,   836,     5,   250,   273,   138,   841,   842,
     843,   844,   102,     4,   847,   300,   849,   189,   851,   852,
     853,    13,    14,   308,   209,   302,    32,   181,    19,   284,
       4,   237,   302,    65,   302,     5,   313,   314,   313,     3,
       4,   318,   167,   313,   314,   313,   314,    65,   318,    65,
      85,    42,   284,   270,   303,   261,   220,    31,   325,   944,
     266,    65,   268,    13,    14,     4,   259,   121,     0,    60,
     287,   288,     4,    65,   351,   128,  1966,   216,   217,   332,
     297,   351,   305,   351,    90,     3,     4,   212,  1987,   286,
     296,   297,   246,   183,   100,   928,    60,   930,    65,   305,
     132,   107,   935,   936,   235,   938,   939,   940,   941,   942,
      13,    14,   335,   336,   132,    65,    27,   313,   109,   273,
    1354,   327,     5,   956,   957,   348,    27,    42,   132,   352,
     963,   964,   325,   216,   217,   216,   217,   191,  2170,   340,
     131,    71,  2322,  2323,  2324,  2325,  2326,  2327,  2328,  2329,
    2330,   984,   985,   986,   987,   988,    65,   990,   327,   992,
     993,   196,    65,   302,   336,   132,   291,   192,  2200,  2917,
      34,    65,   389,   390,   313,   314,   301,   313,    71,   318,
     352,   387,     5,  1016,  1017,  1018,   177,  1020,  1021,  1022,
    1821,  1024,    96,   199,    65,  1046,   286,  2229,   154,   324,
     216,   217,   292,    48,    65,   259,   121,   181,   333,    15,
     121,   325,   351,  1046,    71,  1048,     3,     4,    65,   302,
     121,   302,   266,   132,   216,   217,    71,   352,  1061,   220,
     313,   314,   313,   314,    65,  1068,  1069,   318,   132,   230,
     326,  1074,    27,    88,   200,   720,   252,    96,   239,   240,
      37,   286,    65,    71,    71,    42,    32,    68,  1091,   250,
    2071,   132,  1095,   738,   255,   154,   216,   217,   351,  1503,
     351,   132,   246,     3,     4,    79,  1109,  1110,  1111,     4,
    2091,   313,   155,   289,  1117,   132,   302,    44,    45,  1122,
    2101,     4,     5,  2104,    65,   313,  3044,   313,   314,   273,
    2111,   132,   318,   114,  1137,   220,  1191,     5,  3056,   313,
     302,   200,    38,   216,   217,  2126,   322,     5,  2129,   132,
       4,   313,   314,  1156,    50,   143,  2137,  2359,    26,  2140,
       3,     4,  1180,     5,   121,   351,   121,     4,    11,    69,
     815,   172,   173,     3,     4,   820,   313,     4,   259,    77,
     341,    68,   302,    65,     5,    81,    65,   175,   259,   351,
     147,   132,   207,   313,   314,     4,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   383,   384,   385,     3,     4,   114,     5,   302,
     391,   351,     5,    63,   313,  1238,   191,   398,   399,     5,
     313,   314,  2302,     5,    42,     4,    29,     3,     4,   313,
     132,   138,     5,   132,   122,    11,  1259,   300,     5,   274,
    2987,     3,     4,   220,    42,   308,  1269,   194,   195,     5,
     138,   167,   313,    71,     4,     5,  2994,     5,   351,  3006,
     268,   282,   313,  1286,   929,  1288,     3,     4,   144,   270,
    1293,  1294,  1295,     4,   192,     4,   313,     3,     4,   226,
    1303,     3,     4,  1306,   259,  1308,   287,   288,   231,   107,
     325,   179,   313,    48,     4,     4,   212,   115,    60,    13,
      14,   336,  1325,   121,  1327,     4,    13,    14,     5,    22,
     313,     4,  1335,  1336,    69,   191,    71,    27,   105,   327,
      42,  2401,   132,   121,     5,   143,     4,  1350,  1351,    39,
     153,  1354,  1355,  1356,     4,  1000,     4,    63,     4,  1362,
      53,  1364,    52,    56,  1367,  2425,  1369,     4,   236,   167,
     153,    65,   313,     3,     4,     4,    66,    67,    65,     5,
    1435,   338,   280,   270,   225,   168,   254,   185,    48,   192,
       4,    51,     4,   291,    89,   291,    89,     4,   201,     4,
     287,   288,     4,   259,  2606,   301,     4,     5,   389,   390,
    2612,    71,  1415,     4,   197,  2617,     4,  1420,   201,   121,
       4,  1424,     4,  1426,  1427,   223,  1447,   120,  1431,  3156,
     123,   313,    29,     4,   313,     4,  3163,   154,     5,     3,
       4,   308,    22,     8,  1447,     5,  1449,   107,  1451,  1452,
    1453,  1454,    10,   113,  1457,  1458,   352,  1460,  1461,   392,
    1463,   192,  1465,   331,     4,  1468,     4,   390,   201,   325,
     268,   192,   207,    53,   169,   398,    56,   400,  1481,    59,
     263,     3,     4,   200,    65,  1488,   284,  1508,     4,  1492,
    1493,  1494,     3,     4,  3221,     4,  3223,     3,     4,   297,
    1503,  1504,   389,   390,  1507,  1526,   166,   137,   224,    89,
       3,     4,  1515,     5,  1517,     4,     5,  1520,   220,  2500,
      42,     4,   216,   217,   307,   224,    19,     5,  2509,   216,
     217,   329,  2592,   316,   317,     3,     4,  2518,    89,   274,
     120,   231,     4,   123,     3,     4,   344,   128,   346,   347,
     224,   132,   242,   243,   244,   245,   153,    16,     4,    42,
     499,   500,   257,   258,  1567,   214,  1569,    60,   261,  1572,
    1573,   168,  1575,   137,  1577,  2635,   214,   272,   259,   213,
    1583,    71,  2642,   639,  1587,   219,   642,   643,     5,   387,
     325,   172,   173,  1596,    71,  1613,   177,     4,     5,   121,
     197,   336,    71,   296,   201,     3,     4,  1625,   302,   260,
       8,     9,    10,     4,     5,   302,   109,    36,   169,   313,
     314,  1266,     4,     5,   319,     5,   313,   314,     4,  1647,
    1648,   137,   266,     4,  2836,  1172,  1173,   218,   121,     3,
       4,     5,     6,     7,     4,   305,     4,   337,     4,   224,
    2852,    95,  2712,  1674,  2714,  2857,  2716,   351,     5,  2719,
     294,  2721,     4,    94,   351,    94,   263,     3,     4,     5,
       6,     7,  1675,  1676,  1677,   335,   336,     5,    94,  1324,
      94,   261,   126,     5,   177,     3,     4,     5,   348,   172,
     173,     4,   352,  1338,  1697,     4,   277,   116,     5,  1702,
       5,   282,     3,     4,     5,     4,   257,   258,  2832,   319,
     307,  2835,     5,  2837,   107,   349,   296,     4,     4,   316,
     317,   272,   141,   142,     5,  1728,  1729,    16,   309,  2853,
    2854,   150,   313,     3,     4,     5,  1739,   220,   221,     3,
       4,  1744,     6,     7,    16,   326,     4,   327,  1751,  2873,
       3,     4,     5,     6,     7,   174,     4,   250,     4,     4,
     394,   105,   255,  1766,     5,   184,     5,   211,   319,  1772,
      94,    94,     4,  1776,    94,  1778,  1779,     5,  1781,  1782,
    1783,     5,  1785,    94,   228,  1788,  1789,  1790,     5,  1792,
    1793,  1794,  1795,  1796,  1797,  1798,  1799,     4,     4,   282,
    1803,  1804,  1805,  1806,     5,     5,     5,     5,     4,     4,
    1813,  1814,     5,     5,  1817,  1818,  1819,     5,    69,  2879,
    1823,  1824,    71,     4,     4,     4,    11,     5,    11,     4,
    1475,  1476,     4,  1836,  1837,     4,  1839,  1840,    87,     5,
       5,     4,     4,   186,  2248,     4,     4,    96,     5,     4,
     177,     5,     5,     4,   298,     5,     4,     4,   107,     5,
     177,     4,   319,    40,    37,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,   384,   385,   296,   143,    40,    57,   296,   321,   329,
       5,     4,  1923,   347,  2308,     4,     4,     4,  1911,     5,
    1913,  1914,     5,     5,   358,  1918,     5,    78,   167,     4,
    1923,  1924,     5,  1926,  1927,  1928,     5,  1930,  1931,    99,
    1933,   310,  1935,  1936,    95,  1938,  1939,   107,  1941,     5,
    1943,  1944,   310,     5,     5,   115,     4,   108,     4,   241,
       5,  3153,     4,  1956,   127,     5,     5,     5,     5,     5,
       4,  1964,     5,   133,  2368,     5,  1969,  1970,     4,   130,
     140,     5,  1975,   134,   223,     5,   273,   273,  1999,   273,
     115,  1984,   273,     5,   115,     4,   115,     5,   149,   273,
    2011,    42,     5,   273,  2015,     4,   279,   167,   241,     5,
      42,     5,    59,   241,   241,     4,     4,     4,   178,     5,
       5,     5,     5,     5,     4,   121,     4,   121,  2021,   268,
       5,     5,     5,     4,     4,  1670,   199,     5,   201,   202,
       5,   204,   205,     5,     5,     4,     4,   198,     5,     5,
       5,     5,     4,   273,  2047,  2048,     4,     4,   297,  2052,
      11,    11,     5,   223,  1699,  2058,     5,     5,     5,  1704,
    1705,   231,     5,  2081,   237,     4,     4,     4,     4,   273,
       5,  2089,  2090,     4,     0,     5,   273,   191,     5,   273,
       4,  2099,  2100,   256,   257,   259,   273,   273,  1733,   262,
     224,  2109,  2110,   266,   284,   344,   237,   346,     4,     4,
       4,  1746,     4,     4,   351,     5,  2124,  2125,     5,     5,
    1755,  1756,     5,     5,   284,     4,     4,  2135,  2136,   310,
       5,     4,  1767,     4,  2142,     4,   355,   297,     5,     5,
       5,     5,   355,   273,  2152,   273,   273,     4,     4,     4,
       4,     4,     4,     4,   355,   315,   355,     4,   259,     5,
       4,   259,   325,     5,     5,   328,     5,     4,   259,   259,
       5,     4,  2165,  2166,   259,  2168,   339,     4,   259,     5,
       4,   310,     5,     5,     4,   351,     5,     5,     4,   101,
       5,     5,     4,   310,     5,     5,  2590,  2591,     4,   362,
    2594,  2595,     5,     5,  2598,  2599,     4,     4,  2201,  2202,
    2203,  2204,  2205,  2206,  2207,  2208,  2209,     5,     5,     5,
       5,     4,    11,     5,     5,     4,     4,     4,   351,     5,
       5,     4,  2225,     4,  2227,     5,     5,     4,   310,     5,
       5,  3026,     4,   401,     5,     4,   498,     5,     5,     4,
       4,     4,     4,     4,  2247,  2248,     4,   327,     5,     5,
    2253,     5,     5,     5,  2658,     4,   327,     5,     5,     5,
       5,  2264,  2265,  2266,  2267,  2268,  2269,  2270,  2271,  2272,
    2273,     4,     4,  2276,  2277,  2278,  2279,  2280,  2281,  2282,
    2283,     5,  2285,  2286,  2287,     4,  2289,  2290,   341,  2292,
       5,  2294,  2295,  2296,     5,     5,     4,     4,  3179,     5,
       5,     5,     5,     4,     4,  2308,  2309,     5,     5,     5,
       5,     4,     4,     4,   487,     5,     5,     5,     5,     4,
     401,     5,     5,     5,  3119,     5,     4,     4,   501,     3,
       4,   401,     5,     4,     4,     4,     4,   510,     5,     5,
       5,     5,     5,    19,     4,    19,     4,   401,     5,     4,
       4,   438,     5,   406,     5,     4,     4,  2360,     5,  2362,
       5,  2364,     4,  2366,     4,  2368,  2369,    43,  2371,     5,
      46,     5,     5,  2376,  2377,     4,  2379,  2380,     4,  2382,
       4,  2384,     4,     4,     4,   401,     5,     5,  2409,     5,
       5,     5,     5,     4,  2397,     5,  2399,     4,     4,     4,
    2403,     4,     4,  2406,     5,     5,     5,     4,    84,     4,
       4,   584,   585,     5,     5,    91,  2820,     5,     5,     4,
       4,  2825,     5,     5,   597,     5,   102,   103,     5,   602,
    2451,     4,     4,   109,     5,   109,     4,     4,   611,     4,
       4,     4,     4,     4,     4,     4,  2464,     4,  3043,     5,
    2453,     5,     4,  2847,     5,     5,  2474,  2475,     4,     4,
       4,     4,   138,  2867,     4,     4,     4,  2485,     5,     5,
       4,  3024,     5,     5,     5,     4,  2494,     4,     4,     4,
    2498,  2499,   158,     4,     4,     4,     4,     4,     4,  2507,
    2508,   401,   401,   401,     5,     4,  2551,     5,  2516,  2517,
     176,   177,     5,   177,  2522,     4,     4,   183,     4,     4,
       4,     4,     4,     4,  2532,  2533,     4,   401,     5,     4,
    3119,     5,     4,     4,     4,  2543,   579,  2545,   701,   702,
     703,   704,   208,   586,  2179,     5,   589,     5,     5,     5,
       4,   594,     4,     4,     4,   598,     5,     5,     5,     4,
       4,     4,     4,     4,  2557,     4,     4,  3115,     5,     4,
       4,   891,     5,     5,     4,     4,  2569,  2570,  2571,  2572,
    2573,  2574,  2575,  2576,  2577,  2578,  2579,  3131,  3132,   255,
       5,   255,  2585,     5,     5,  2230,     5,  2590,  2591,     4,
       4,  2594,  2595,     5,     5,  2598,  2599,  2600,  2601,  2602,
    2603,  2604,  2605,     5,  2607,  2608,  2609,     4,    -1,     5,
    2613,  2614,  2615,  2616,     5,  2618,  2619,     5,  2621,  2622,
    2623,    -1,  2625,  2626,    -1,  2628,    -1,    -1,  2631,  2632,
     683,    -1,    -1,    -1,    -1,   311,    -1,    -1,    -1,    -1,
      -1,   814,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   325,
      -1,    -1,  2655,    -1,    -1,  2658,  2659,    -1,    -1,    -1,
    2663,    -1,    -1,    -1,    -1,  2668,  2669,    -1,  2671,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   358,    -1,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
     384,   385,    -1,  2731,    -1,    -1,  2734,    -1,    -1,  2737,
      -1,    -1,    -1,    -1,  2727,    -1,    -1,    -1,    -1,  2747,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2756,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2765,    -1,    -1,
      -1,    -1,    -1,    -1,  2772,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2783,    -1,    -1,    -1,    -1,
      -1,  2789,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   848,  2799,    -1,    -1,    -1,
    2803,    -1,   855,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2813,  2814,    -1,     4,     5,    -1,  2819,  2820,    -1,    -1,
      -1,  2824,  2825,    71,    72,    73,    -1,  2830,    -1,    20,
    2833,  2834,  1005,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1019,    -1,    -1,    -1,
      98,    -1,  2855,  2856,    -1,    -1,  2859,    -1,  2861,  2862,
    2863,    -1,  2865,   111,  2867,  2868,    -1,    -1,    -1,  2872,
      -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,   127,
      71,    -1,  2885,    -1,    -1,    -1,    -1,  1060,    -1,    80,
      -1,    82,    -1,    -1,  2897,    -1,    87,    -1,    -1,    90,
      -1,    -1,    -1,    -1,  2922,    96,    -1,    -1,    -1,   100,
      -1,  2929,    -1,   161,    -1,  2918,   107,    -1,    -1,    -1,
    2938,    -1,    -1,   171,   115,    -1,    -1,    -1,    -1,  2947,
      -1,    -1,    -1,   124,    -1,  2953,    -1,  2838,    -1,  2957,
      -1,    -1,    -1,    -1,    -1,   193,    -1,    -1,    -1,    -1,
    1003,    -1,   143,    -1,   202,    -1,    -1,  2960,    -1,  2860,
    1013,    -1,  2965,  2864,  2967,    -1,    -1,    -1,    -1,  2870,
    2973,    -1,    -1,    -1,   222,    -1,   167,    -1,  1151,    -1,
      -1,    -1,    -1,    -1,    -1,  2988,    -1,    -1,    -1,    -1,
      -1,  2636,    -1,    -1,   185,    -1,    -1,    -1,    -1,    -1,
     248,    -1,    -1,    -1,  3007,    -1,    -1,   198,   199,  1062,
    1063,  3014,    -1,    -1,  1067,  3070,    -1,  1070,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1082,
      -1,    -1,   223,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    3043,    -1,   290,    -1,    -1,    -1,    -1,   295,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   252,    -1,    -1,   312,    -1,    -1,   315,  1241,    -1,
      -1,  3074,    -1,    -1,    -1,   266,  3079,   268,    -1,  3082,
      -1,    -1,    -1,    -1,  2985,  2986,  3089,    -1,  2989,    -1,
    2991,    -1,    -1,   284,    -1,    -1,     4,  3100,   289,    -1,
      -1,    -1,  3105,  3004,  3005,    -1,   297,    -1,    -1,  3010,
    3011,    19,  3013,    -1,   305,    -1,  3017,    -1,    -1,    -1,
      -1,  3022,  3023,    -1,  1297,    -1,    -1,  3148,  3131,  3132,
      -1,    -1,    -1,    -1,  1307,    -1,   327,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   343,   344,  3157,   346,    -1,    -1,  3161,    -1,
    3181,  3164,  1215,  3184,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  3175,  3176,  3177,  3178,    -1,     3,     4,    -1,
      -1,    -1,  3083,    -1,  3187,  3086,    -1,    -1,  3191,    -1,
    3091,    -1,    -1,    19,    -1,  3198,   387,  3200,    -1,    -1,
      -1,   109,  3103,    -1,    -1,  3106,    -1,    -1,    -1,  3110,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,
    2402,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2874,
      -1,    -1,    -1,  2878,    60,    -1,    -1,  2419,  2420,  2421,
      -1,    -1,  2424,    -1,  2426,  2427,    -1,    -1,  2430,  2431,
    2432,    -1,    -1,  2435,  2436,    -1,  1429,    -1,  2440,    -1,
    2442,  2443,    -1,  2445,    -1,    -1,    -1,    -1,    -1,   177,
      -1,    -1,    -1,    -1,  1447,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   109,    -1,  3186,    -1,    -1,    -1,  3190,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1478,    -1,    15,    -1,  3210,
      -1,    -1,    -1,  1486,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  3224,  1497,    -1,  3227,  3228,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       4,  1514,    -1,    -1,    -1,    -1,    -1,   255,    -1,    -1,
      -1,   177,    -1,  1526,    -1,    19,    -1,  3002,  1531,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2553,    -1,    -1,  2556,    -1,    -1,    -1,    -1,  2561,
    1433,    -1,    -1,  2565,    -1,  3030,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   220,    -1,    60,    -1,    -1,    -1,
      -1,    -1,  2584,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   250,    -1,  1479,    -1,    -1,   255,
      -1,    -1,  1485,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     266,    -1,    -1,  1496,    -1,   109,    -1,    -1,    -1,    -1,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   381,   382,   383,   384,   385,    -1,  1165,
    1166,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2680,    -1,
      -1,  1674,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   338,   177,    -1,    -1,    -1,    -1,  1204,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  3171,    -1,    -1,    -1,
    1703,  2713,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
      -1,    -1,  1735,    -1,    -1,  1738,    -1,    -1,   276,    -1,
    1743,   279,    -1,    -1,    -1,    -1,  1749,  1750,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1758,   250,    -1,    -1,    -1,
      -1,   255,  1765,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2795,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2815,    -1,  1808,    -1,    -1,    -1,    -1,
      -1,  2823,    -1,    -1,  2826,  2827,    -1,  1820,    -1,    -1,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   381,   382,   383,   384,   385,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1745,    -1,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
     384,   385,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
    1923,    -1,    -1,    -1,    -1,    -1,  1809,    -1,    -1,    -1,
      -1,    -1,  1815,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1950,    -1,  2961,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1968,    -1,    -1,    -1,    -1,
    2982,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1981,    -1,
    1983,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1993,    -1,    -1,  1996,  1997,  1998,  1999,  2000,    -1,  2002,
      -1,    -1,    -1,  2006,    -1,    -1,    -1,    -1,  2011,  2012,
    2013,  2014,  2015,  2016,    -1,    -1,  2019,  2020,    -1,    -1,
      -1,    -1,  2025,  2026,  2027,  2028,    -1,    -1,  2031,  2032,
      -1,    -1,    -1,    -1,    -1,  2038,  2039,  1920,    -1,    -1,
      -1,    -1,  1925,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    3072,  3073,    -1,  3075,    -1,  3077,  3078,    -1,    -1,  3081,
    1953,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1961,    -1,
      -1,  1597,  1598,  1599,  1967,    -1,    -1,    -1,    -1,  1605,
    1606,  1607,    -1,    -1,    -1,    -1,    -1,    -1,  1614,  1615,
    1616,    -1,    -1,  1619,  1620,    -1,  1622,  1623,    -1,    -1,
      -1,  1994,    -1,    -1,    59,    -1,    -1,    -1,  2001,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,
      -1,  3143,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1656,  1657,    -1,    -1,  1660,  1661,    -1,    -1,    22,    -1,
      -1,    -1,    -1,    27,    99,   100,    -1,    -1,    -1,    -1,
      -1,  2164,   107,    -1,  2167,    -1,    -1,    -1,    -1,    -1,
     115,    -1,    -1,    -1,    -1,  2178,    -1,    -1,    52,    53,
    3192,    55,    56,    -1,    -1,    -1,    -1,    -1,   133,    -1,
      -1,  2194,    -1,    67,    -1,   140,    -1,    -1,   143,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    -1,
      -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    92,    -1,
      -1,    -1,   167,  2226,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   178,    -1,    -1,   110,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   119,   120,    -1,    -1,   123,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   223,  2162,
      -1,   155,    -1,    -1,    -1,    -1,   231,  2290,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,
    2313,    -1,  2195,    -1,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   196,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,   100,   284,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,  2232,
    2233,    17,   297,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2246,    -1,    -1,    -1,    -1,  2251,  2252,
     315,    -1,    -1,    -1,  2257,  2258,    -1,    -1,    -1,    -1,
      -1,    -1,   327,    -1,   329,    -1,    -1,   261,    -1,    -1,
    2393,    -1,    -1,   267,    -1,    -1,    62,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2409,    -1,    -1,    -1,
      -1,   285,    -1,  2416,    -1,   177,    -1,    -1,  2301,    -1,
      -1,    -1,   296,    19,    -1,    -1,    -1,    -1,    -1,  2312,
     192,    -1,    -1,    -1,    -1,  2438,    -1,    -1,    -1,    -1,
      -1,    -1,   387,   109,  2447,    -1,    -1,    -1,  2451,    -1,
     212,    -1,    -1,    -1,   328,   329,    -1,    -1,    -1,   125,
      -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   237,    -1,    -1,    -1,   353,
      -1,    -1,  2365,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   255,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2389,    -1,    -1,    -1,
      -1,   177,    -1,   109,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   400,    -1,    -1,    -1,
      -1,   197,    -1,    -1,  2417,    -1,    -1,    -1,    -1,  2422,
      -1,    -1,    -1,    -1,    -1,  2428,  2062,    -1,    -1,   311,
    2433,    -1,  2555,    -1,  2437,  2558,  2439,    -1,  2441,  2075,
     322,  2444,    -1,  2446,  2567,    -1,    -1,    -1,    -1,  2085,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2583,   177,    -1,  2586,    -1,    -1,    -1,    -1,    -1,   255,
    2593,    -1,    -1,  2596,  2597,    -1,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   380,   381,
     382,   383,   384,   385,    -1,   387,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2637,  2638,    -1,    -1,    -1,    -1,
      -1,  2157,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   250,    -1,    -1,    -1,    -1,   255,
      -1,    -1,    -1,    -1,    -1,    -1,   332,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2693,    -1,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
      -1,    -1,    -1,    -1,   320,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2627,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2643,    -1,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
      -1,  2794,    -1,    -1,    -1,    20,    21,    22,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2688,    -1,    -1,    -1,    -1,
      -1,    -1,  2695,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2828,    -1,    52,    53,    -1,
      -1,    56,    -1,    -1,    59,    -1,  2839,    -1,    -1,  2722,
      -1,  2724,    67,    -1,    -1,    -1,    71,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    89,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,
      -1,    -1,   107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     115,    -1,    -1,    -1,   119,   120,    -1,    -1,   123,  2902,
      -1,    -1,    -1,  2906,    -1,    -1,    -1,    -1,    -1,  2792,
      -1,    -1,    -1,    -1,    -1,  2798,    -1,    -1,   143,  2802,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2818,    -1,    -1,    -1,    -1,
      -1,    -1,   167,    -1,    -1,    -1,    -1,  2463,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2963,  2964,    -1,  2966,    -1,    -1,    -1,    -1,  2971,  2972,
      -1,   196,    -1,    -1,    -1,  2978,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2876,  2877,    -1,    -1,    -1,   223,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2523,  2524,  2525,
    2526,  2527,  3015,  2529,  2530,    -1,    -1,    -1,  2534,  2535,
    2536,  2537,  2538,    -1,  2540,  2541,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   259,    -1,   261,    -1,    -1,    -1,
      -1,    -1,   267,   268,    -1,    -1,    -1,  3050,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   284,
     285,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   296,   297,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   327,    -1,   329,    -1,    -1,    -1,    -1,    -1,
    2993,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   344,
      19,   346,    52,    53,    -1,    -1,    56,    -1,   353,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    67,    -1,    -1,
      -1,    71,    -1,    -1,    -1,  3148,    -1,    -1,    -1,    -1,
      -1,    81,    82,    -1,    -1,    -1,    -1,    -1,    -1,    89,
      -1,    60,   387,    -1,  3167,    -1,    -1,    -1,    -1,    -1,
     100,    -1,    -1,    -1,    19,    -1,    -1,    -1,  3181,    -1,
      -1,  3184,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,
     120,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     109,    -1,    -1,   143,  2730,    19,    -1,    -1,    63,    -1,
      -1,    -1,    -1,  2739,  2740,  2741,  2742,  2743,  3111,  2745,
    2746,    -1,  2748,  2749,  2750,  2751,  2752,   167,  2754,  2755,
      -1,  2757,  2758,  2759,  2760,  2761,    -1,  2763,  2764,    -1,
    2766,    -1,  3135,    19,    -1,    -1,    60,    -1,    -1,    -1,
    2776,  2777,    -1,    -1,   109,    -1,   196,    -1,    -1,    -1,
      -1,  2787,    -1,    -1,    -1,    -1,   206,    -1,   177,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  3182,
      -1,    -1,    -1,    -1,    -1,   109,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    3203,    -1,    -1,  3206,    -1,    -1,    -1,    -1,    -1,   259,
      -1,   261,   177,    -1,    -1,   101,    -1,   267,   268,    -1,
      -1,    -1,    -1,   109,    -1,    -1,    -1,    19,    -1,    -1,
      -1,   250,    -1,    -1,    -1,   285,   255,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   297,    -1,    -1,
      -1,    -1,    -1,   177,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   327,    -1,   329,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     255,   177,   342,    -1,    -1,    -1,  2932,    -1,    -1,    -1,
      -1,    -1,    -1,   353,    -1,  2941,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2950,    -1,  2952,   109,    -1,   177,
    2956,    -1,    -1,    -1,   182,    -1,    -1,    -1,    -1,    -1,
      -1,   255,    -1,    -1,    -1,    -1,    -1,   387,    -1,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,   382,   383,   384,   385,   332,    -1,   255,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   177,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,    -1,    -1,    -1,  3060,    -1,  3062,    -1,  3064,    -1,
      -1,  3067,    -1,  3069,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
     384,   385,    -1,   255,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   381,   382,   383,   384,   385,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   380,   381,
     382,   383,   384,   385,    43,    -1,    -1,    46,    -1,    -1,
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
      -1,    -1,    -1,   262,    -1,   264,    -1,    -1,    -1,    -1,
      -1,    -1,   271,    -1,    -1,    -1,   275,    -1,    43,    -1,
     279,    46,   281,   282,    49,   284,    -1,    -1,    -1,    -1,
     289,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,   305,    -1,    -1,    74,
      75,    76,   311,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      -1,    86,    -1,    -1,    -1,    -1,    91,    -1,    93,    94,
      95,   330,    -1,   332,    -1,    -1,   101,    -1,   103,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   345,    -1,   347,    -1,
      -1,    -1,    -1,    -1,    -1,   354,    -1,    -1,   357,   358,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   138,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   388,
      -1,    -1,    -1,   158,    -1,    -1,    -1,   396,    -1,    -1,
      -1,    -1,   167,    -1,   169,   170,    -1,   172,   173,    -1,
      -1,   176,    -1,    -1,    -1,   180,    -1,   182,   182,    -1,
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
      -1,    -1,    -1,    -1,    -1,   330,    -1,   332,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   342,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   350,    -1,    -1,    -1,    -1,
      -1,   356,    -1,   358,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
     384,   385,   386,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   396
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
     330,   332,   345,   347,   354,   357,   358,   388,   396,   403,
      71,    11,    57,    78,   108,   130,   134,   149,   338,   440,
       3,     4,   225,   338,   404,   445,   213,   219,   266,   294,
     349,   394,   447,   327,     4,    42,   121,   172,   173,   220,
     221,   282,   452,    29,   153,   168,   197,   201,   263,   307,
     316,   317,   419,   454,    32,    90,   100,   107,   199,   252,
     289,   322,   456,    42,    63,   121,   220,   332,   404,   467,
       4,    19,    42,    60,   109,   131,   177,   220,   230,   239,
     240,   250,   255,   341,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,   384,   385,   391,   398,   399,   406,   414,   415,   416,
     469,    34,   470,   406,    46,    49,    83,    91,   159,   218,
     251,   253,   282,   358,   405,   406,    69,   404,   472,   162,
     180,   473,    43,    46,    49,    70,    74,    75,    76,    84,
      86,    91,    93,    94,    95,   101,   103,   138,   158,   167,
     169,   170,   172,   173,   176,   180,   182,   188,   208,   209,
     213,   221,   225,   247,   249,   256,   282,   284,   311,   330,
     332,   342,   350,   356,   358,   396,   474,    90,   107,   525,
      19,    43,    46,    84,    91,   102,   103,   109,   138,   158,
     176,   177,   183,   208,   255,   311,   325,   358,   528,    71,
     406,    65,   325,   352,   614,    65,   325,   352,   613,    95,
     126,   211,   228,   298,   347,   358,   534,    15,     4,    48,
      51,    71,    90,   107,   113,   166,   189,   305,   335,   336,
     348,   352,   595,     5,    26,   122,   138,   179,   236,   254,
     331,   537,   265,   556,     5,    71,    95,   156,   347,   396,
     406,   557,     5,   558,    61,   145,   260,   275,   349,   575,
      48,    69,    71,   207,   274,   325,   336,   596,   325,   612,
      71,   231,   390,   398,   400,   597,    41,   220,   266,   338,
     404,   414,   416,   598,     5,   347,   358,   406,   601,    77,
     192,   280,   291,   602,     4,   603,    95,   575,     4,    69,
     610,    65,   325,   352,   611,   220,   338,   404,   615,    26,
     122,   138,   236,   254,   395,   617,    54,   107,   118,   151,
     340,   639,   640,     4,    38,    50,    81,   167,   212,   291,
     301,   324,   333,   352,   433,     4,   138,   235,   641,   338,
     404,   643,    15,    23,   276,   279,   415,   644,   265,   648,
     338,   404,   649,     0,     5,   406,    63,   404,   441,   308,
       5,     4,   338,   404,   442,     5,    33,   323,   443,   137,
     404,   444,   392,   137,   404,   446,   404,     4,   219,   278,
     286,   450,   213,   349,   393,   394,   404,   449,   406,   154,
     200,   448,   225,   404,    85,   196,   286,   404,   451,     5,
     404,   404,   404,     4,   172,   173,   221,   282,   453,     4,
     404,   404,   404,   224,   279,   322,   457,     5,   261,   458,
       4,    32,   459,     5,   460,     5,   464,     5,    32,   465,
       4,    69,   466,   404,     8,     9,    10,   404,   410,   411,
     412,   413,   404,   404,    42,   121,   220,   404,   468,   404,
     220,   414,   416,   404,    36,   116,   141,   142,   150,   174,
     184,   421,   404,     4,   406,   406,   406,   406,   406,   406,
     406,   406,   406,   406,   128,     5,    71,    57,    78,    95,
     108,   130,   134,   149,   198,   477,   130,   225,   479,   213,
     219,   266,   294,   349,   393,   394,   404,   461,   480,   327,
     483,   192,   484,   153,   192,   201,   486,    32,    70,    71,
      76,    99,   100,   192,   212,   237,   311,   322,   387,   414,
     488,   404,   416,   491,    63,   332,   414,   492,   320,   414,
     416,   493,    34,   494,   414,   416,   495,     4,   414,   416,
     496,    47,    63,    88,   108,   128,   132,   164,   165,   227,
     238,   308,   309,   387,   500,   246,   351,   506,    71,     5,
      96,    65,   325,   352,   514,    65,   325,   352,   513,     4,
      95,   132,   498,     5,    70,   416,   497,    15,    48,    71,
      88,   189,   336,   352,   507,   575,    48,    71,    88,   207,
     274,   325,   336,   508,   325,   512,    71,   266,   510,   326,
      65,   325,   352,   511,    21,   149,   273,   306,   515,    38,
      50,    81,   167,   212,   291,   301,   352,   516,   416,    96,
      15,   224,   523,   414,   526,    71,    79,   529,    32,   530,
      46,    94,   218,   531,   167,   252,   297,   343,   532,   414,
      17,    62,   125,   197,   332,   414,   533,     5,     5,   171,
     290,   350,   414,     4,     5,   171,   290,   414,     4,     4,
     219,   536,     5,     4,     4,   132,   404,     4,    48,    51,
      71,   107,   113,   166,   305,   335,   336,   348,   352,    71,
      72,    73,    98,   111,   127,   161,   171,   193,   202,   222,
     248,   290,   295,   312,   315,   418,     5,     4,   404,   406,
       5,     5,   172,   173,   282,   538,     5,   540,     5,   128,
     172,   173,   218,   282,   309,   541,   101,   121,   213,   555,
       5,   552,     5,   309,   553,     5,   554,     4,     5,   406,
     406,   404,   404,     5,     4,     5,    20,    64,    71,    80,
      82,    87,    90,    96,   100,   107,   115,   124,   143,   167,
     185,   198,   199,   223,   252,   266,   268,   284,   289,   297,
     305,   327,   343,   344,   346,   387,   559,   418,     5,     4,
     225,   233,   234,   274,   392,   417,   404,   414,   404,   414,
       5,   404,    42,   121,   404,   600,   406,   404,   414,   416,
     599,   404,   421,   404,     4,   415,    58,    97,   157,   282,
     604,     4,     4,   404,     4,   167,   297,   605,     5,   414,
       4,    42,   121,   404,   616,   404,   105,    65,   132,   172,
     173,   282,   313,   619,   132,   638,    65,   128,   132,   172,
     173,   177,   218,   277,   282,   309,   313,   326,   620,   621,
      65,   132,   313,   637,     5,    65,   132,   313,   618,     4,
      35,   117,   231,   609,    71,   406,   436,    71,   406,   437,
      71,   406,   438,    12,   136,   215,   608,   404,    18,   232,
     321,   406,   434,     4,   404,   259,   404,   439,   404,    63,
     309,     4,   404,   404,     4,   260,   338,   647,     4,   329,
     645,     4,   329,   646,     4,   421,   137,   404,   650,   404,
     404,     4,     5,   404,    11,   404,   404,   406,   404,    31,
     102,   183,   286,   292,   420,   420,     4,   225,   404,   404,
       4,     4,     4,   404,   404,   404,   404,   404,   404,     4,
     404,     4,   404,   404,     4,     4,     4,     4,     4,     4,
       4,     5,     5,   414,     4,     5,     5,    69,   404,   404,
     410,   412,   412,   414,   404,   404,   404,   404,   404,   404,
     404,   414,   416,   413,   404,   404,   413,   404,     5,   308,
     112,   213,   478,   392,   219,   286,   481,   192,    85,   196,
     286,   482,   154,   200,   462,   462,     4,   485,     4,   487,
      88,   322,   219,   294,   489,   201,   490,   192,     4,   421,
     404,   404,   414,   414,   421,   421,   421,   414,   421,   404,
     414,     4,   503,     4,   416,   501,   224,     4,   186,   358,
     502,   224,   414,     4,   146,   338,   505,     5,     5,   475,
       4,   224,   148,   283,   407,   404,     4,   509,   509,   509,
     509,     4,     5,    20,    64,    71,   100,   124,   143,   160,
     167,   175,   237,   261,   266,   268,   296,   297,   305,   327,
     387,   569,   416,   214,   214,    71,   519,    71,   520,    71,
     521,    18,   232,   321,   517,   259,   522,   404,     5,   476,
     260,   524,   415,   421,     5,   414,   414,   414,   414,     4,
       4,     4,   406,     4,     4,   224,   404,   418,     5,   404,
     406,     4,    13,    14,    65,   216,   217,   302,   313,   314,
     351,    94,    94,    94,     5,     5,    13,    14,    65,   216,
     217,   302,   313,   314,   318,   351,    94,    94,   177,    94,
     177,   177,   182,   415,   544,   549,    94,   177,     5,   542,
       4,     4,    13,    65,   216,   302,   313,   351,     5,     5,
     177,   209,   426,     4,   404,   415,    20,    21,    22,    52,
      53,    56,    59,    67,    71,    81,    82,    89,    90,   100,
     107,   115,   119,   120,   123,   143,   167,   196,   223,   259,
     261,   267,   268,   284,   285,   296,   297,   327,   329,   344,
     346,   353,   387,    71,    87,    96,   107,   143,   167,   223,
     268,   297,   344,   346,   319,     4,    31,   181,   246,   273,
     562,     5,    68,   114,   270,   287,   288,   389,   390,   568,
     107,   560,     4,    16,   297,   566,    42,   121,   220,   567,
       4,     5,    16,   241,   339,   404,   297,   568,   576,   138,
     568,   577,    37,    42,   121,   147,   220,   338,   404,   578,
     414,   406,    99,   107,   115,   133,   140,   167,   178,   223,
     231,   284,   297,   315,   581,    42,   121,   220,     5,   297,
     328,   585,    16,   135,   190,   241,   339,   586,   329,   406,
     587,     5,   107,   115,   347,    16,    16,     4,   404,   404,
     404,   404,   404,   404,   421,   404,   404,   413,   404,     4,
     421,     4,    42,   121,   220,   303,   606,    42,   121,   220,
     303,   607,     4,   105,     5,     5,    94,    94,    94,     4,
       5,     5,    94,     5,    94,   177,    94,   177,   621,    65,
     132,   177,   313,   625,    65,   132,   313,   636,    94,   177,
      65,   132,   313,   623,     4,    65,   132,   313,   622,     5,
       5,     4,     5,     5,     4,     4,     5,     5,     5,   404,
     321,   406,   435,   404,   404,   404,   404,   404,     4,   404,
     642,   404,   404,   415,    69,     4,     4,     5,     4,     4,
       5,     4,   105,   299,   422,   404,   404,    11,     5,    11,
     404,   404,    11,     4,    11,     4,     4,   404,   404,   404,
     404,   404,     4,   404,     5,   404,    31,   404,   455,     5,
       4,     4,    16,     4,   406,     4,     4,   421,     5,   414,
       4,   421,   404,   404,   404,   414,   404,   413,   404,   404,
       5,     5,   404,   416,   404,     4,   414,   404,   421,   421,
     422,   422,   422,   421,   413,   404,   421,   404,   407,   504,
     186,     5,     4,   421,   177,   177,     4,     5,     4,     4,
     404,   499,    40,    40,   404,    20,    21,    22,    52,    53,
      56,    63,    67,    71,    81,    82,    89,   100,   119,   120,
     123,   143,   167,   196,   206,   259,   261,   267,   268,   285,
     297,   327,   329,   342,   353,   387,    71,   143,   175,   268,
     327,   319,    31,   181,   246,   273,   570,   404,   237,   404,
     571,    16,   404,   296,   581,   296,   237,   404,   572,   329,
     573,    16,   106,   404,   321,   518,   404,     5,   422,     4,
       4,    60,   414,     4,     5,   535,   404,     5,     5,     5,
     426,   426,   185,   304,   424,     4,     4,     5,     5,   539,
     539,   539,   310,   310,     5,     5,     5,    16,   179,   425,
     425,   424,     4,     4,   424,     5,     5,   543,     5,   550,
       5,   551,   550,   551,   182,   386,   415,   547,     5,   546,
       5,   550,   551,     5,    13,    14,    65,   216,   217,   302,
     313,   314,   318,   351,     4,     4,     5,     5,   426,   424,
       4,     5,     5,   421,    89,   169,   257,   258,   272,   319,
     430,     6,     7,   404,   409,   273,   273,   273,   115,    42,
      71,   107,   115,   121,   143,   167,   185,   223,   268,   284,
     297,   329,   344,   346,   347,   387,   561,   273,     5,    27,
     121,   187,   273,   325,    28,   154,   342,   115,    22,    53,
      56,    89,   120,   123,   261,   296,     4,    22,    53,    56,
      59,    89,   120,   123,   261,   296,   327,    42,   273,   273,
     115,     5,   241,    27,   121,   259,    37,   147,   338,   404,
     155,   300,   308,   259,   279,   414,   581,    42,   144,   259,
     325,   279,   241,     5,     5,   284,    27,   121,   259,     4,
       5,     5,   241,    37,   147,   338,   404,   581,   241,    59,
     406,     4,     4,   404,     5,   351,    22,    27,    52,    53,
      55,    56,    67,    81,    82,    89,    92,   110,   119,   120,
     123,   155,   196,   261,   267,   285,   296,   328,   329,   353,
     400,   563,     4,   404,   404,   404,   404,   404,   568,   414,
       5,     4,     5,   404,   404,   414,   404,   406,   404,   404,
     568,     5,     5,   404,   404,   406,     5,    16,     5,     5,
     404,   404,   413,   404,   404,     4,   404,   404,   121,   404,
     404,   121,     4,    44,    45,   194,   195,   226,   432,   432,
      65,   132,   313,   633,    65,   132,   313,   630,    65,   132,
     313,   627,   432,     5,    65,   132,   313,   624,    65,   132,
     313,   635,    65,   132,   313,   634,    65,   132,   313,   632,
      65,   132,   313,   631,     5,     5,    65,   132,   313,   626,
       4,     5,     5,     4,    65,   132,   313,   629,    65,   132,
     313,   628,     5,     5,     4,     5,     5,     4,   432,   432,
     432,   404,   404,   404,   404,   404,     4,   414,   404,   421,
     415,     5,     5,    11,   404,   414,   416,   404,    11,   404,
     404,   404,    63,   404,     4,   404,   404,     4,   404,   404,
       5,   404,     5,   404,   455,     5,     5,    49,   311,   463,
       5,   406,   406,   414,   421,     4,   404,     4,     4,     4,
     421,   414,   404,   404,   404,   404,   421,   414,   422,   413,
     404,     4,   422,   404,     4,   416,     5,    24,    25,   105,
     423,     4,   414,   404,   404,     4,   404,     5,    89,   169,
     257,   258,   272,   319,   414,   416,   273,   273,   273,    21,
     273,   414,   273,    27,   121,   187,   273,   325,    28,   154,
     342,    21,   273,   273,   273,    21,   273,    27,   121,   191,
     259,   191,   155,   300,   308,   259,   191,   259,   334,   581,
     144,   191,   259,   325,     4,   284,    27,   121,   191,   259,
     581,   237,    16,   397,   404,   404,   404,   404,   404,   404,
     224,   404,   404,    20,   269,   527,     4,     4,   404,   426,
     426,   426,     4,   426,   426,   426,    13,    14,    65,   216,
     217,   302,   313,   314,   351,   425,   426,   426,   426,   426,
     426,     4,   426,   426,     4,   425,    13,    14,    65,   216,
     217,   302,   313,   314,   351,     5,    13,    14,    65,   216,
     217,   302,   313,   314,   318,   351,    13,    14,    65,   216,
     217,   302,   313,   314,   351,     5,   545,     5,   548,     5,
       5,    13,    14,    65,   216,   217,   302,   313,   314,   318,
     351,     5,    13,    14,    65,   216,   217,   302,   313,   314,
     318,   351,   310,     5,     5,     5,   425,   425,   424,     4,
       4,   424,     5,     4,     4,   426,   426,     4,   426,   426,
       5,   406,   414,   416,     5,   404,   404,     5,   404,     5,
     409,   115,   223,   284,   115,   223,   284,     5,   404,   406,
       4,    27,    39,    52,    66,    67,   231,   242,   243,   244,
     245,   337,   427,     5,   404,   414,   406,   406,     5,     5,
     409,   273,   273,    21,   273,    21,   273,   273,    21,   273,
     355,   355,     4,     4,     4,     4,   561,     4,     4,     4,
     355,   355,     4,     5,     4,   404,     5,   404,     5,   409,
     406,   427,   414,   414,   404,     5,    27,    52,    55,    67,
      92,   110,   155,   400,   428,     4,   414,   404,   421,   406,
       5,   414,   414,   404,   406,   406,   427,   414,   414,   404,
     406,     5,   404,     5,   404,   259,   259,   404,   404,   259,
     404,   259,   404,   404,     4,   564,   404,   259,   259,   404,
     404,   404,   259,   404,    60,   404,   404,   404,    60,   404,
       5,   351,   404,   565,   404,   404,   259,   404,   404,   404,
     404,   414,   421,     5,     4,     4,   404,   404,   421,   404,
     404,   404,   414,   568,   404,   404,     5,     4,   404,   404,
     404,   404,     5,     5,     4,     5,     5,     4,     5,     5,
       4,   432,     5,     5,     4,     5,     5,     4,     5,     5,
       4,     5,     5,     4,     5,     5,     4,     4,     4,     5,
       5,     4,     4,     5,     5,     4,     5,     5,     4,   404,
     404,   404,   404,   421,   404,   414,   416,   404,   421,   404,
     404,   404,   404,   404,     5,   404,   404,   404,     4,   404,
     404,     5,   404,     5,   404,   455,     4,     4,     4,   414,
       4,   421,     4,   404,   421,   153,   201,   419,   404,   419,
     422,   421,   414,   404,   404,     4,   404,   414,   414,   404,
     407,     5,     5,     5,     5,     5,   101,   414,   421,   414,
     414,   414,   414,   416,   414,   421,   414,   414,   414,   416,
     414,   414,   414,   414,   416,   414,   414,   414,   404,   414,
     414,   414,   414,   414,   414,   414,   414,   101,   404,   404,
       4,   404,     5,   404,   426,     5,     5,     5,   424,     4,
       4,     5,   426,   425,     4,   426,     5,     5,     5,   425,
     425,   424,     4,     4,     5,   310,     5,     5,     5,   425,
     425,   424,     4,     4,   424,     5,     5,     5,     5,   425,
     425,   424,     4,     4,     5,    13,    14,    65,   216,   217,
     302,   313,   314,   351,    13,    14,    65,   216,   217,   302,
     313,   314,   351,    13,    14,    65,   216,   217,   302,   313,
     314,   351,   310,     5,     5,     5,   425,   425,   424,     4,
       4,   424,     5,   310,     5,     5,     5,   425,   425,   424,
       4,     4,   424,     5,   425,     4,     4,   425,     4,     4,
     426,     5,   421,   414,   404,   404,   414,   404,     5,   409,
       5,   414,   406,   427,     5,   414,   421,     5,   409,   404,
     404,   404,   404,   404,   404,   404,   404,   404,     4,     4,
       5,     4,     4,   404,   414,   404,     5,   409,   406,   427,
     421,   421,   421,   404,   413,   421,   421,   404,   421,   421,
     404,   404,   404,   404,   404,   404,   404,   404,   404,   404,
     574,   582,   404,   404,   404,   404,   404,   404,   404,   404,
     351,   404,   404,   404,   351,   404,   404,   414,     5,   404,
     404,   404,   404,     4,     4,   421,   422,     5,     5,   413,
     404,     4,   421,   414,     4,   432,   432,   432,   432,   432,
     432,   432,   432,   432,   409,   404,   404,   404,   421,   404,
     413,   404,   404,    11,     5,     5,   404,   404,   404,   404,
       5,   404,     4,   404,     4,     4,     4,   421,     4,     4,
     414,   404,   404,   422,   423,   404,     5,   404,   414,   416,
       5,     5,     5,     5,     5,   414,   421,   423,   423,   423,
     421,   423,   422,   423,   423,   421,   423,   423,   423,   421,
     423,   423,   421,   414,   421,   423,   421,   423,   423,   421,
     423,   421,   414,     4,   414,   416,     5,   404,     4,   426,
     425,     4,   425,   425,     4,     4,   425,     4,   425,     5,
       5,     5,   425,   425,   424,     4,     4,     5,     5,     5,
       5,   425,   425,   424,     4,     4,     5,     5,     5,     5,
     425,   425,   424,     4,     4,     5,   425,   426,   426,   426,
     426,   426,     4,   426,   426,     4,   425,   425,   426,   426,
     426,   426,   426,     4,   426,   426,     4,   425,   425,     4,
       4,     4,   415,   423,     4,   414,   423,   404,   414,     4,
     423,   423,   414,     4,   404,   404,   404,   404,   404,   404,
     404,   404,   404,   404,   404,   414,   423,   404,   414,     4,
     413,   413,   422,   414,   413,   413,   414,   414,   413,   413,
     404,   404,   404,   404,   404,   404,   409,   404,   404,   404,
      59,    71,   100,   143,   327,   329,   387,   579,   580,   581,
     593,   594,   409,   404,   404,   404,   404,   409,   404,   404,
       5,   404,   404,   404,     5,   404,   404,   421,   404,   351,
     408,   409,   404,   404,   422,   406,   414,   414,   422,   421,
       4,   404,   413,   404,    63,   404,     5,     5,     4,     4,
     404,   404,     4,   404,     4,     4,     4,   419,   423,     5,
     421,     4,     5,     4,     5,   414,     5,   421,   422,   423,
     422,   422,   422,   422,   421,     5,   421,     4,   404,   426,
     425,   425,     4,   425,   426,   426,   426,   426,   426,     4,
     426,   426,   425,   426,   426,   426,   426,   426,     4,   426,
     426,   425,   426,   426,   426,   426,   426,     4,   426,   426,
     425,   426,   425,     4,   426,   426,   425,     4,   426,   425,
     421,   414,   423,     4,   421,   404,   421,   404,   404,   404,
     423,     4,   421,   404,   413,     5,   351,   423,   404,   413,
     423,   423,   414,   404,     4,   429,   429,   404,   404,   429,
     409,   429,   582,   414,   401,   401,   401,   401,   401,   401,
     401,   580,   401,   409,   429,   429,   404,   404,   409,     4,
       5,   404,   582,   404,   404,   404,   582,   404,   413,   404,
       5,   582,   404,   429,   406,   583,   584,   421,   421,   406,
     422,     4,     5,   404,     5,     4,     4,     4,     4,     4,
       4,     4,     4,   404,     4,    33,   210,   323,   471,   414,
       5,    33,   210,   323,   431,   414,     4,   471,   404,   425,
     425,   426,   425,   426,   425,   426,   426,   425,   426,   425,
     404,   423,   414,   414,   404,   414,   404,   414,   414,   404,
       5,   414,   423,     4,   582,   582,   408,   404,   582,     4,
     582,   421,   561,     5,     4,     5,     5,     5,     4,   406,
       4,   582,   582,   408,   404,     4,     5,   582,   582,   582,
     404,   414,   582,   582,   582,   583,   590,   591,   581,   588,
     589,   406,     4,     5,     5,     4,     4,     4,   213,   349,
     394,   404,   461,   471,     4,   414,   471,     4,   426,   426,
     426,   426,   426,   415,   423,   423,   404,   423,     4,   423,
     423,   404,   423,   404,   582,   582,     4,   404,   582,     5,
       4,   404,   582,     4,   404,   582,   582,   421,   590,   592,
     593,   401,   589,     5,     5,   404,   462,   404,   462,   421,
     423,     4,   414,   416,     4,   409,   408,   404,     5,   404,
     408,   404,   414,   593,   406,     5,     5,   404,   404,   404,
     404,   431,     5,   414,   416,   421,   414,   416,   582,   404,
       4,   582,   404,   423,     5,     5,   404,     5,   404,   421,
     421,     4,   582,     4,     5,     5,     5,   408,   408,   582,
     582,   582
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
#line 512 "frame/parser.Y"
    {fr->bgColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 5:
#line 513 "frame/parser.Y"
    {fr->useBgColorCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 7:
#line 515 "frame/parser.Y"
    {fr->centerCmd();;}
    break;

  case 8:
#line 516 "frame/parser.Y"
    {fr->clearCmd();;}
    break;

  case 10:
#line 518 "frame/parser.Y"
    {fr->colorbarTagCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 17:
#line 525 "frame/parser.Y"
    {fr->DATASECCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 23:
#line 531 "frame/parser.Y"
    {fr->hideCmd();;}
    break;

  case 24:
#line 532 "frame/parser.Y"
    {fr->highliteCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 25:
#line 533 "frame/parser.Y"
    {fr->highliteColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 29:
#line 537 "frame/parser.Y"
    {fr->irafAlignCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 38:
#line 546 "frame/parser.Y"
    {fr->nanColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 42:
#line 550 "frame/parser.Y"
    {fr->queryCursorCmd();;}
    break;

  case 45:
#line 553 "frame/parser.Y"
    {fr->resetCmd();;}
    break;

  case 51:
#line 559 "frame/parser.Y"
    {fr->showCmd();;}
    break;

  case 53:
#line 561 "frame/parser.Y"
    {fr->threadsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 55:
#line 563 "frame/parser.Y"
    {fr->unloadFitsCmd();;}
    break;

  case 57:
#line 565 "frame/parser.Y"
    {fr->msg("Frame 1.0");;}
    break;

  case 62:
#line 572 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 63:
#line 573 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 64:
#line 576 "frame/parser.Y"
    {yydebug=(yyvsp[(1) - (1)].integer);;}
    break;

  case 65:
#line 577 "frame/parser.Y"
    {DebugMosaic=(yyvsp[(2) - (2)].integer);;}
    break;

  case 66:
#line 578 "frame/parser.Y"
    {yydebug=(yyvsp[(2) - (2)].integer);;}
    break;

  case 67:
#line 579 "frame/parser.Y"
    {DebugPerf=(yyvsp[(2) - (2)].integer);;}
    break;

  case 68:
#line 580 "frame/parser.Y"
    {DebugWCS=(yyvsp[(2) - (2)].integer);;}
    break;

  case 69:
#line 581 "frame/parser.Y"
    {DebugBin=(yyvsp[(2) - (2)].integer);;}
    break;

  case 70:
#line 582 "frame/parser.Y"
    {DebugBlock=(yyvsp[(2) - (2)].integer);;}
    break;

  case 71:
#line 583 "frame/parser.Y"
    {DebugCompress=(yyvsp[(2) - (2)].integer);;}
    break;

  case 72:
#line 584 "frame/parser.Y"
    {DebugCrop=(yyvsp[(2) - (2)].integer);;}
    break;

  case 73:
#line 585 "frame/parser.Y"
    {DebugGZ=(yyvsp[(2) - (2)].integer);;}
    break;

  case 74:
#line 586 "frame/parser.Y"
    {DebugRGB=(yyvsp[(2) - (2)].integer);;}
    break;

  case 75:
#line 589 "frame/parser.Y"
    {(yyval.integer)=((yyvsp[(1) - (1)].integer) ? 1 : 0);;}
    break;

  case 76:
#line 591 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 77:
#line 592 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 78:
#line 593 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 79:
#line 594 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 80:
#line 596 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 81:
#line 597 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 82:
#line 598 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 83:
#line 599 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 84:
#line 602 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 85:
#line 603 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 86:
#line 604 "frame/parser.Y"
    {(yyval.integer) = Base::FULLBASE;;}
    break;

  case 87:
#line 605 "frame/parser.Y"
    {(yyval.integer) = Base::ROOT;;}
    break;

  case 88:
#line 606 "frame/parser.Y"
    {(yyval.integer) = Base::FULL;;}
    break;

  case 89:
#line 609 "frame/parser.Y"
    {(yyval.real) = 0;;}
    break;

  case 90:
#line 610 "frame/parser.Y"
    {(yyval.real) = (yyvsp[(1) - (1)].real);;}
    break;

  case 91:
#line 613 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 92:
#line 614 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 93:
#line 615 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 94:
#line 618 "frame/parser.Y"
    {(yyval.real) = parseSEXStr((yyvsp[(1) - (1)].str));;}
    break;

  case 95:
#line 621 "frame/parser.Y"
    {(yyval.real) = parseHMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 96:
#line 624 "frame/parser.Y"
    {(yyval.real) = parseDMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 97:
#line 628 "frame/parser.Y"
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
#line 640 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 99:
#line 647 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 100:
#line 654 "frame/parser.Y"
    {
	  (yyval.vector)[0] = (yyvsp[(1) - (2)].real);
	  (yyval.vector)[1] = (yyvsp[(2) - (2)].real);
	  (yyval.vector)[2] = 1;
	;}
    break;

  case 101:
#line 661 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::IMAGE;;}
    break;

  case 102:
#line 662 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::PHYSICAL;;}
    break;

  case 103:
#line 663 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::DETECTOR;;}
    break;

  case 104:
#line 664 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::AMPLIFIER;;}
    break;

  case 105:
#line 665 "frame/parser.Y"
    {(yyval.integer) = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 106:
#line 668 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS;;}
    break;

  case 107:
#line 669 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSA;;}
    break;

  case 108:
#line 670 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSB;;}
    break;

  case 109:
#line 671 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSC;;}
    break;

  case 110:
#line 672 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSD;;}
    break;

  case 111:
#line 673 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSE;;}
    break;

  case 112:
#line 674 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSF;;}
    break;

  case 113:
#line 675 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSG;;}
    break;

  case 114:
#line 676 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSH;;}
    break;

  case 115:
#line 677 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSI;;}
    break;

  case 116:
#line 678 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSJ;;}
    break;

  case 117:
#line 679 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSK;;}
    break;

  case 118:
#line 680 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSL;;}
    break;

  case 119:
#line 681 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSM;;}
    break;

  case 120:
#line 682 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSN;;}
    break;

  case 121:
#line 683 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSO;;}
    break;

  case 122:
#line 684 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSP;;}
    break;

  case 123:
#line 685 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSQ;;}
    break;

  case 124:
#line 686 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSR;;}
    break;

  case 125:
#line 687 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSS;;}
    break;

  case 126:
#line 688 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCST;;}
    break;

  case 127:
#line 689 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSU;;}
    break;

  case 128:
#line 690 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSV;;}
    break;

  case 129:
#line 691 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSW;;}
    break;

  case 130:
#line 692 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSX;;}
    break;

  case 131:
#line 693 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSY;;}
    break;

  case 132:
#line 694 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSZ;;}
    break;

  case 133:
#line 695 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS0;;}
    break;

  case 134:
#line 698 "frame/parser.Y"
    {(yyval.integer) = Coord::CANVAS;;}
    break;

  case 135:
#line 699 "frame/parser.Y"
    {(yyval.integer) = Coord::PANNER;;}
    break;

  case 136:
#line 702 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 137:
#line 703 "frame/parser.Y"
    {(yyval.integer) = FitsMask::ZERO;;}
    break;

  case 138:
#line 704 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 139:
#line 705 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NaN;;}
    break;

  case 140:
#line 706 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONNaN;;}
    break;

  case 141:
#line 707 "frame/parser.Y"
    {(yyval.integer) = FitsMask::RANGE;;}
    break;

  case 142:
#line 710 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 143:
#line 711 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 144:
#line 712 "frame/parser.Y"
    {(yyval.integer) = FitsMask::MULTIPLY;;}
    break;

  case 145:
#line 713 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SCREEN;;}
    break;

  case 146:
#line 714 "frame/parser.Y"
    {(yyval.integer) = FitsMask::OVERLAY;;}
    break;

  case 147:
#line 715 "frame/parser.Y"
    {(yyval.integer) = FitsMask::DARKEN;;}
    break;

  case 148:
#line 716 "frame/parser.Y"
    {(yyval.integer) = FitsMask::LIGHTEN;;}
    break;

  case 149:
#line 717 "frame/parser.Y"
    {(yyval.integer) = FitsMask::COLOR_DODGE;;}
    break;

  case 150:
#line 718 "frame/parser.Y"
    {(yyval.integer) = FitsMask::COLOR_BURN;;}
    break;

  case 151:
#line 719 "frame/parser.Y"
    {(yyval.integer) = FitsMask::HARD_LIGHT;;}
    break;

  case 152:
#line 720 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOFT_LIGHT;;}
    break;

  case 153:
#line 721 "frame/parser.Y"
    {(yyval.integer) = FitsMask::DIFFERENCE;;}
    break;

  case 154:
#line 722 "frame/parser.Y"
    {(yyval.integer) = FitsMask::EXCLUSION;;}
    break;

  case 155:
#line 723 "frame/parser.Y"
    {(yyval.integer) = FitsMask::HUE;;}
    break;

  case 156:
#line 724 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SATURATION;;}
    break;

  case 157:
#line 725 "frame/parser.Y"
    {(yyval.integer) = FitsMask::COLOR;;}
    break;

  case 158:
#line 726 "frame/parser.Y"
    {(yyval.integer) = FitsMask::LUMINOSITY;;}
    break;

  case 159:
#line 729 "frame/parser.Y"
    {(yyval.integer) = FrScale::LINEARSCALE;;}
    break;

  case 160:
#line 730 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOGSCALE;;}
    break;

  case 161:
#line 731 "frame/parser.Y"
    {(yyval.integer) = FrScale::POWSCALE;;}
    break;

  case 162:
#line 732 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQRTSCALE;;}
    break;

  case 163:
#line 733 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQUAREDSCALE;;}
    break;

  case 164:
#line 734 "frame/parser.Y"
    {(yyval.integer) = FrScale::ASINHSCALE;;}
    break;

  case 165:
#line 735 "frame/parser.Y"
    {(yyval.integer) = FrScale::SINHSCALE;;}
    break;

  case 166:
#line 736 "frame/parser.Y"
    {(yyval.integer) = FrScale::HISTEQUSCALE;;}
    break;

  case 167:
#line 737 "frame/parser.Y"
    {(yyval.integer) = FrScale::GHSSCALE;;}
    break;

  case 168:
#line 740 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 169:
#line 741 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 170:
#line 742 "frame/parser.Y"
    {(yyval.integer)=FrScale::SAMPLE;;}
    break;

  case 171:
#line 743 "frame/parser.Y"
    {(yyval.integer)=FrScale::DATAMIN;;}
    break;

  case 172:
#line 744 "frame/parser.Y"
    {(yyval.integer)=FrScale::IRAFMIN;;}
    break;

  case 173:
#line 747 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 174:
#line 748 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 175:
#line 749 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 176:
#line 750 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 177:
#line 751 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 178:
#line 752 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 179:
#line 753 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::GALACTIC;;}
    break;

  case 180:
#line 754 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ECLIPTIC;;}
    break;

  case 181:
#line 757 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 182:
#line 758 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 183:
#line 759 "frame/parser.Y"
    {(yyval.integer)=Coord::SEXAGESIMAL;;}
    break;

  case 184:
#line 762 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 185:
#line 763 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 186:
#line 764 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCMIN;;}
    break;

  case 187:
#line 765 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCSEC;;}
    break;

  case 188:
#line 768 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 189:
#line 769 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 190:
#line 770 "frame/parser.Y"
    {(yyval.integer) = Base::KEY;;}
    break;

  case 191:
#line 773 "frame/parser.Y"
    {;}
    break;

  case 192:
#line 774 "frame/parser.Y"
    {;}
    break;

  case 193:
#line 775 "frame/parser.Y"
    {;}
    break;

  case 194:
#line 778 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 195:
#line 779 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 196:
#line 780 "frame/parser.Y"
    {(yyval.integer) = Base::MASK;;}
    break;

  case 197:
#line 784 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer) ? Marker::ARROW : Marker::NOEND;;}
    break;

  case 198:
#line 785 "frame/parser.Y"
    {(yyval.integer) = Marker::NOEND;;}
    break;

  case 199:
#line 786 "frame/parser.Y"
    {(yyval.integer) = Marker::ARROW;;}
    break;

  case 200:
#line 787 "frame/parser.Y"
    {(yyval.integer) = Marker::OPENARROW;;}
    break;

  case 201:
#line 788 "frame/parser.Y"
    {(yyval.integer) = Marker::CHEVRON;;}
    break;

  case 202:
#line 789 "frame/parser.Y"
    {(yyval.integer) = Marker::CIRCLE;;}
    break;

  case 203:
#line 790 "frame/parser.Y"
    {(yyval.integer) = Marker::OPENCIRCLE;;}
    break;

  case 204:
#line 791 "frame/parser.Y"
    {(yyval.integer) = Marker::BOX;;}
    break;

  case 205:
#line 792 "frame/parser.Y"
    {(yyval.integer) = Marker::OPENBOX;;}
    break;

  case 206:
#line 793 "frame/parser.Y"
    {(yyval.integer) = Marker::TRIANGLE;;}
    break;

  case 207:
#line 794 "frame/parser.Y"
    {(yyval.integer) = Marker::OPENTRIANGLE;;}
    break;

  case 208:
#line 795 "frame/parser.Y"
    {(yyval.integer) = Marker::BAR;;}
    break;

  case 209:
#line 798 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 210:
#line 799 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 211:
#line 800 "frame/parser.Y"
    {(yyval.integer) = Point::BOX;;}
    break;

  case 212:
#line 801 "frame/parser.Y"
    {(yyval.integer) = Point::DIAMOND;;}
    break;

  case 213:
#line 802 "frame/parser.Y"
    {(yyval.integer) = Point::CROSS;;}
    break;

  case 214:
#line 803 "frame/parser.Y"
    {(yyval.integer) = Point::EX;;}
    break;

  case 215:
#line 804 "frame/parser.Y"
    {(yyval.integer) = Point::ARROW;;}
    break;

  case 216:
#line 805 "frame/parser.Y"
    {(yyval.integer) = Point::BOXCIRCLE;;}
    break;

  case 217:
#line 806 "frame/parser.Y"
    {(yyval.integer) = Point::GLYPH;;}
    break;

  case 218:
#line 809 "frame/parser.Y"
    {(yyval.integer) = POINTSIZE;;}
    break;

  case 219:
#line 810 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 220:
#line 813 "frame/parser.Y"
    {(yyval.integer) = Marker::PANDA;;}
    break;

  case 221:
#line 814 "frame/parser.Y"
    {(yyval.integer) = Marker::HISTOGRAM;;}
    break;

  case 222:
#line 815 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT2D;;}
    break;

  case 223:
#line 816 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT3D;;}
    break;

  case 224:
#line 817 "frame/parser.Y"
    {(yyval.integer) = Marker::RADIAL;;}
    break;

  case 225:
#line 818 "frame/parser.Y"
    {(yyval.integer) = Marker::STATS;;}
    break;

  case 226:
#line 821 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 227:
#line 822 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 228:
#line 823 "frame/parser.Y"
    {(yyval.integer) = Marker::SUM;;}
    break;

  case 229:
#line 824 "frame/parser.Y"
    {(yyval.integer) = Marker::MEDIAN;;}
    break;

  case 230:
#line 827 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 231:
#line 828 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 232:
#line 829 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 233:
#line 830 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 234:
#line 831 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 235:
#line 832 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 240:
#line 839 "frame/parser.Y"
    {fr->set3dRenderMethodCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 241:
#line 840 "frame/parser.Y"
    {fr->set3dRenderBackgroundCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 243:
#line 842 "frame/parser.Y"
    {fr->set3dScaleCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 244:
#line 843 "frame/parser.Y"
    {fr->set3dSyncCmd((yyvsp[(2) - (2)].integer));}
    break;

  case 245:
#line 845 "frame/parser.Y"
    {/* needed for compatibility with old version of backup */;}
    break;

  case 246:
#line 848 "frame/parser.Y"
    {fr->set3dShadeCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 247:
#line 849 "frame/parser.Y"
    {fr->set3dShadeAmbientCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 248:
#line 850 "frame/parser.Y"
    {fr->set3dShadeStrengthCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 250:
#line 854 "frame/parser.Y"
    {fr->set3dShadeNormalCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 251:
#line 855 "frame/parser.Y"
    {fr->set3dShadeNormalStrengthCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 252:
#line 858 "frame/parser.Y"
    {fr->set3dBorderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 253:
#line 859 "frame/parser.Y"
    {fr->set3dBorderColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 254:
#line 862 "frame/parser.Y"
    {fr->set3dCompassCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 255:
#line 863 "frame/parser.Y"
    {fr->set3dCompassColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 256:
#line 866 "frame/parser.Y"
    {fr->set3dHighliteCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 257:
#line 867 "frame/parser.Y"
    {fr->set3dHighliteColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 258:
#line 870 "frame/parser.Y"
    {fr->set3dViewCmd((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));;}
    break;

  case 259:
#line 872 "frame/parser.Y"
    {fr->set3dViewPointCmd(Vector3d((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 261:
#line 876 "frame/parser.Y"
    {fr->binColsCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 262:
#line 877 "frame/parser.Y"
    {fr->binDepthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 265:
#line 880 "frame/parser.Y"
    {fr->binBufferSizeCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 267:
#line 882 "frame/parser.Y"
    {fr->binFilterCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 268:
#line 885 "frame/parser.Y"
    {fr->binAboutCmd();;}
    break;

  case 269:
#line 886 "frame/parser.Y"
    {fr->binAboutCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 270:
#line 889 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 271:
#line 890 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 272:
#line 892 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(1) - (4)].real)), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 273:
#line 894 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 274:
#line 895 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 275:
#line 896 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 276:
#line 898 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 277:
#line 900 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 278:
#line 903 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::AVERAGE);;}
    break;

  case 279:
#line 904 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::SUM);;}
    break;

  case 280:
#line 907 "frame/parser.Y"
    {fr->binToFitCmd();;}
    break;

  case 281:
#line 909 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (7)].real),(yyvsp[(2) - (7)].real)), (yyvsp[(5) - (7)].str), (yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].str));;}
    break;

  case 282:
#line 912 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (11)].real),(yyvsp[(2) - (11)].real)), (yyvsp[(3) - (11)].integer), Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)), (yyvsp[(8) - (11)].str), (yyvsp[(9) - (11)].str), (yyvsp[(10) - (11)].str), (yyvsp[(11) - (11)].str));;}
    break;

  case 283:
#line 914 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (8)].real),(yyvsp[(2) - (8)].real)), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (yyvsp[(6) - (8)].str), (yyvsp[(7) - (8)].str), (yyvsp[(8) - (8)].str));;}
    break;

  case 284:
#line 917 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (12)].real),(yyvsp[(2) - (12)].real)), (yyvsp[(3) - (12)].integer), Vector((yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real)), Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    (yyvsp[(9) - (12)].str), (yyvsp[(10) - (12)].str), (yyvsp[(11) - (12)].str), (yyvsp[(12) - (12)].str));;}
    break;

  case 285:
#line 921 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 286:
#line 922 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 288:
#line 924 "frame/parser.Y"
    {fr->blockNanZeroCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 289:
#line 927 "frame/parser.Y"
    {fr->blockToFitCmd();;}
    break;

  case 290:
#line 928 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 291:
#line 929 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 295:
#line 935 "frame/parser.Y"
    {fr->clipUserCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 296:
#line 936 "frame/parser.Y"
    {fr->clipUserCmd(NAN,NAN);;}
    break;

  case 298:
#line 939 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 299:
#line 944 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::GLOBAL);;}
    break;

  case 300:
#line 945 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::LOCAL);;}
    break;

  case 301:
#line 948 "frame/parser.Y"
    {fr->clipModeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 302:
#line 949 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::MINMAX);;}
    break;

  case 303:
#line 950 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZSCALE);;}
    break;

  case 304:
#line 951 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZMAX);;}
    break;

  case 305:
#line 952 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::USERCLIP);;}
    break;

  case 306:
#line 955 "frame/parser.Y"
    {fr->clipMinMaxCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer),(yyvsp[(1) - (2)].integer));;}
    break;

  case 307:
#line 956 "frame/parser.Y"
    {fr->clipMinMaxModeCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer));;}
    break;

  case 308:
#line 957 "frame/parser.Y"
    {fr->clipMinMaxSampleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 309:
#line 958 "frame/parser.Y"
    {fr->clipMinMaxRescanCmd();;}
    break;

  case 310:
#line 961 "frame/parser.Y"
    {fr->clipZScaleCmd((yyvsp[(1) - (3)].real),(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 311:
#line 963 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleContrastCmd((yyvsp[(2) - (2)].real));
        ;}
    break;

  case 312:
#line 968 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleSampleCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 313:
#line 973 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleLineCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 314:
#line 980 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].real), (yyvsp[(3) - (5)].real), (yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].integer));;}
    break;

  case 315:
#line 982 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 316:
#line 984 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 317:
#line 986 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 318:
#line 988 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (7)].integer),(yyvsp[(3) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(yyvsp[(7) - (7)].integer));;}
    break;

  case 322:
#line 995 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].real), (yyvsp[(3) - (5)].real), (yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].integer));;}
    break;

  case 323:
#line 997 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 324:
#line 999 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 325:
#line 1001 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 326:
#line 1003 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (7)].integer),(yyvsp[(3) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(yyvsp[(7) - (7)].integer));;}
    break;

  case 327:
#line 1005 "frame/parser.Y"
    {fr->colorScaleCmd((FrScale::ColorScaleType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 328:
#line 1006 "frame/parser.Y"
    {fr->colorScaleLogCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 329:
#line 1008 "frame/parser.Y"
    {fr->colorScaleGhsCmd((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 330:
#line 1011 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 331:
#line 1012 "frame/parser.Y"
    {(yyval.real)=NAN;;}
    break;

  case 333:
#line 1016 "frame/parser.Y"
    {fr->contourDashListCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 340:
#line 1025 "frame/parser.Y"
    {fr->contourAuxNameCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 341:
#line 1026 "frame/parser.Y"
    {fr->contourAuxResetCmd((yyvsp[(2) - (2)].integer),-1);;}
    break;

  case 342:
#line 1027 "frame/parser.Y"
    {fr->contourAuxResetCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 343:
#line 1029 "frame/parser.Y"
    {fr->contourAuxStyleCmd((yyvsp[(2) - (8)].integer),(yyvsp[(3) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].integer),(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 344:
#line 1031 "frame/parser.Y"
    {fr->contourAuxStyleCmd((yyvsp[(2) - (8)].integer),-1,(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].integer),(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 345:
#line 1035 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),(FrScale::ClipMode)(yyvsp[(9) - (13)].integer),100,(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 346:
#line 1038 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),FrScale::AUTOCUT,(yyvsp[(9) - (13)].real),(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 347:
#line 1041 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),(FrScale::ClipMode)(yyvsp[(9) - (12)].integer),100,FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 348:
#line 1047 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),FrScale::AUTOCUT,(yyvsp[(9) - (12)].real),FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 349:
#line 1052 "frame/parser.Y"
    {fr->contourCreatePolygonCmd();;}
    break;

  case 350:
#line 1055 "frame/parser.Y"
    {fr->contourDeleteCmd();;}
    break;

  case 351:
#line 1056 "frame/parser.Y"
    {fr->contourDeleteAuxCmd();;}
    break;

  case 352:
#line 1057 "frame/parser.Y"
    {fr->contourDeleteAuxCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 353:
#line 1060 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 354:
#line 1061 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 355:
#line 1063 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourLoadCmd((yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer),(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer));
	;}
    break;

  case 356:
#line 1069 "frame/parser.Y"
    {(yyval.integer) = FrScale::MINMAX;;}
    break;

  case 357:
#line 1070 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZSCALE;;}
    break;

  case 358:
#line 1071 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZMAX;;}
    break;

  case 359:
#line 1072 "frame/parser.Y"
    {(yyval.integer) = FrScale::USERCLIP;;}
    break;

  case 360:
#line 1075 "frame/parser.Y"
    {(yyval.integer) = FrScale::GLOBAL;;}
    break;

  case 361:
#line 1076 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOCAL;;}
    break;

  case 362:
#line 1079 "frame/parser.Y"
    {(yyval.integer) = FVContour::SMOOTH;;}
    break;

  case 363:
#line 1080 "frame/parser.Y"
    {(yyval.integer) = FVContour::BLOCK;;}
    break;

  case 364:
#line 1083 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 365:
#line 1084 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 366:
#line 1086 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 367:
#line 1090 "frame/parser.Y"
    {fr->contourSaveCmd((yyvsp[(1) - (3)].str), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 368:
#line 1092 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (4)].str),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 369:
#line 1094 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].str),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 370:
#line 1097 "frame/parser.Y"
    {fr->contourStyleClearCmd();;}
    break;

  case 371:
#line 1098 "frame/parser.Y"
    {fr->contourStyleClearCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 372:
#line 1099 "frame/parser.Y"
    {fr->contourStyleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer),0,0);;}
    break;

  case 373:
#line 1100 "frame/parser.Y"
    {fr->contourStyleCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 374:
#line 1103 "frame/parser.Y"
    {fr->cropCmd();;}
    break;

  case 375:
#line 1105 "frame/parser.Y"
    {fr->cropCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 376:
#line 1108 "frame/parser.Y"
    {fr->cropCenterCmd(Vector((yyvsp[(2) - (8)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), Vector((yyvsp[(5) - (8)].real),(yyvsp[(6) - (8)].real)), (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 378:
#line 1110 "frame/parser.Y"
    {fr->cropBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 379:
#line 1111 "frame/parser.Y"
    {fr->cropMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 380:
#line 1112 "frame/parser.Y"
    {fr->cropEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 381:
#line 1115 "frame/parser.Y"
    {fr->crop3dCmd();;}
    break;

  case 382:
#line 1117 "frame/parser.Y"
    {fr->crop3dCmd((yyvsp[(1) - (4)].real), (yyvsp[(2) - (4)].real), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 383:
#line 1118 "frame/parser.Y"
    {fr->crop3dBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 384:
#line 1119 "frame/parser.Y"
    {fr->crop3dMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 385:
#line 1120 "frame/parser.Y"
    {fr->crop3dEndCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 386:
#line 1124 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), (Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 387:
#line 1126 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 388:
#line 1127 "frame/parser.Y"
    {fr->crosshairCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 389:
#line 1128 "frame/parser.Y"
    {fr->crosshairWarpCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 390:
#line 1131 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)), (Coord::InternalSystem)(yyvsp[(3) - (5)].integer));;}
    break;

  case 391:
#line 1133 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 392:
#line 1135 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer));;}
    break;

  case 393:
#line 1137 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 394:
#line 1140 "frame/parser.Y"
    {fr->axesOrderCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 395:
#line 1143 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 396:
#line 1144 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 397:
#line 1145 "frame/parser.Y"
    {(yyval.integer) = Base::SUM;;}
    break;

  case 398:
#line 1146 "frame/parser.Y"
    {(yyval.integer) = Base::MEDIAN;;}
    break;

  case 399:
#line 1149 "frame/parser.Y"
    {fr->fadeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 400:
#line 1150 "frame/parser.Y"
    {fr->fadeClearCmd();;}
    break;

  case 401:
#line 1153 "frame/parser.Y"
    {fr->fitsyHasExtCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 402:
#line 1154 "frame/parser.Y"
    {fr->fitsyInfoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 403:
#line 1157 "frame/parser.Y"
    {fr->getCmd();;}
    break;

  case 404:
#line 1158 "frame/parser.Y"
    {fr->getBgColorCmd();;}
    break;

  case 418:
#line 1172 "frame/parser.Y"
    {fr->getDATASECCmd();;}
    break;

  case 421:
#line 1175 "frame/parser.Y"
    {fr->getHighliteColorCmd();;}
    break;

  case 422:
#line 1176 "frame/parser.Y"
    {fr->getHistogramCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].integer));;}
    break;

  case 428:
#line 1182 "frame/parser.Y"
    {fr->getIRAFAlignCmd();;}
    break;

  case 429:
#line 1183 "frame/parser.Y"
    {fr->getMinMaxCmd();;}
    break;

  case 434:
#line 1188 "frame/parser.Y"
    {fr->getNANColorCmd();;}
    break;

  case 435:
#line 1189 "frame/parser.Y"
    {fr->getOrientCmd();;}
    break;

  case 437:
#line 1192 "frame/parser.Y"
    {fr->getPixelTableCmd(Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (Coord::InternalSystem)(yyvsp[(3) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(7) - (8)].integer), (yyvsp[(8) - (8)].str));;}
    break;

  case 439:
#line 1194 "frame/parser.Y"
    {fr->getRotateCmd();;}
    break;

  case 441:
#line 1196 "frame/parser.Y"
    {fr->getThreadsCmd();;}
    break;

  case 443:
#line 1198 "frame/parser.Y"
    {fr->getTypeCmd();;}
    break;

  case 444:
#line 1200 "frame/parser.Y"
    {fr->getValueCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 447:
#line 1203 "frame/parser.Y"
    {fr->getZoomCmd();;}
    break;

  case 448:
#line 1207 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 449:
#line 1209 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 450:
#line 1213 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 451:
#line 1215 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 452:
#line 1218 "frame/parser.Y"
    {fr->getBinDepthCmd();;}
    break;

  case 453:
#line 1219 "frame/parser.Y"
    {fr->getBinFactorCmd();;}
    break;

  case 454:
#line 1220 "frame/parser.Y"
    {fr->getBinFunctionCmd();;}
    break;

  case 455:
#line 1221 "frame/parser.Y"
    {fr->getBinBufferSizeCmd();;}
    break;

  case 456:
#line 1222 "frame/parser.Y"
    {fr->getBinCursorCmd();;}
    break;

  case 457:
#line 1223 "frame/parser.Y"
    {fr->getBinFilterCmd();;}
    break;

  case 459:
#line 1225 "frame/parser.Y"
    {fr->getBinListCmd();;}
    break;

  case 460:
#line 1228 "frame/parser.Y"
    {fr->getBinColsCmd();;}
    break;

  case 461:
#line 1229 "frame/parser.Y"
    {fr->getBinColsMinMaxCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 462:
#line 1230 "frame/parser.Y"
    {fr->getBinColsDimCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 463:
#line 1233 "frame/parser.Y"
    {fr->getBlockCmd();;}
    break;

  case 464:
#line 1234 "frame/parser.Y"
    {fr->getBlockNanZeroCmd();;}
    break;

  case 465:
#line 1237 "frame/parser.Y"
    {fr->getClipCmd();;}
    break;

  case 466:
#line 1239 "frame/parser.Y"
    {fr->getClipCmd((FrScale::ClipMode)(yyvsp[(1) - (2)].integer), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 467:
#line 1241 "frame/parser.Y"
    {fr->getClipCmd((yyvsp[(1) - (2)].real), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 468:
#line 1242 "frame/parser.Y"
    {fr->getClipScopeCmd();;}
    break;

  case 469:
#line 1243 "frame/parser.Y"
    {fr->getClipModeCmd();;}
    break;

  case 471:
#line 1245 "frame/parser.Y"
    {fr->getClipUserCmd();;}
    break;

  case 473:
#line 1248 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	;}
    break;

  case 474:
#line 1254 "frame/parser.Y"
    {fr->getClipMinMaxModeCmd();;}
    break;

  case 475:
#line 1255 "frame/parser.Y"
    {fr->getClipMinMaxSampleCmd();;}
    break;

  case 476:
#line 1258 "frame/parser.Y"
    {fr->getClipZScaleContrastCmd();;}
    break;

  case 477:
#line 1259 "frame/parser.Y"
    {fr->getClipZScaleSampleCmd();;}
    break;

  case 478:
#line 1260 "frame/parser.Y"
    {fr->getClipZScaleLineCmd();;}
    break;

  case 479:
#line 1263 "frame/parser.Y"
    {fr->getColorbarCmd();;}
    break;

  case 480:
#line 1264 "frame/parser.Y"
    {fr->getColorbarTagCmd();;}
    break;

  case 482:
#line 1270 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 483:
#line 1272 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 484:
#line 1274 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 485:
#line 1277 "frame/parser.Y"
    {fr->getColorScaleCmd();;}
    break;

  case 487:
#line 1279 "frame/parser.Y"
    {fr->getColorScaleLogCmd();;}
    break;

  case 488:
#line 1280 "frame/parser.Y"
    {fr->getColorScaleGhsCmd();;}
    break;

  case 489:
#line 1284 "frame/parser.Y"
    {fr->getColorScaleLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 490:
#line 1288 "frame/parser.Y"
    {fr->getContourCmd((Coord::CoordSystem)(yyvsp[(1) - (2)].integer),(Coord::SkyFrame)(yyvsp[(2) - (2)].integer));;}
    break;

  case 491:
#line 1289 "frame/parser.Y"
    {fr->getContourAuxCountCmd();;}
    break;

  case 493:
#line 1291 "frame/parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 494:
#line 1292 "frame/parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 495:
#line 1293 "frame/parser.Y"
    {fr->getContourDashListCmd();;}
    break;

  case 496:
#line 1294 "frame/parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 497:
#line 1295 "frame/parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 498:
#line 1296 "frame/parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 500:
#line 1298 "frame/parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 501:
#line 1299 "frame/parser.Y"
    {fr->getContourStyleCmd();;}
    break;

  case 502:
#line 1300 "frame/parser.Y"
    {fr->getContourStyleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 503:
#line 1301 "frame/parser.Y"
    {fr->getContourAuxCmd();;}
    break;

  case 504:
#line 1302 "frame/parser.Y"
    {fr->getContourAuxStyleCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 505:
#line 1303 "frame/parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 506:
#line 1306 "frame/parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 507:
#line 1307 "frame/parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 508:
#line 1308 "frame/parser.Y"
    {fr->getContourClipScopeCmd();;}
    break;

  case 509:
#line 1311 "frame/parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 510:
#line 1312 "frame/parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 511:
#line 1316 "frame/parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 512:
#line 1318 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 513:
#line 1326 "frame/parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 514:
#line 1328 "frame/parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 515:
#line 1330 "frame/parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 516:
#line 1333 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 517:
#line 1335 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 518:
#line 1336 "frame/parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 519:
#line 1339 "frame/parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 520:
#line 1342 "frame/parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 521:
#line 1344 "frame/parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 522:
#line 1348 "frame/parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 523:
#line 1350 "frame/parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 524:
#line 1353 "frame/parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 525:
#line 1357 "frame/parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (2)].str), (Base::FileNameType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 526:
#line 1358 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 527:
#line 1360 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)), (Coord::InternalSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (Base::FileNameType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 528:
#line 1363 "frame/parser.Y"
    {fr->iisGetCmd((yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 529:
#line 1364 "frame/parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 531:
#line 1368 "frame/parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 532:
#line 1369 "frame/parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 533:
#line 1370 "frame/parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 534:
#line 1373 "frame/parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 535:
#line 1375 "frame/parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 536:
#line 1376 "frame/parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 538:
#line 1378 "frame/parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 542:
#line 1382 "frame/parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 543:
#line 1383 "frame/parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 544:
#line 1384 "frame/parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 545:
#line 1386 "frame/parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::DistFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 547:
#line 1388 "frame/parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 548:
#line 1391 "frame/parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 549:
#line 1393 "frame/parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 550:
#line 1395 "frame/parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 551:
#line 1396 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 552:
#line 1397 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 553:
#line 1398 "frame/parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 554:
#line 1401 "frame/parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 555:
#line 1402 "frame/parser.Y"
    {fr->getFitsDepthCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 556:
#line 1406 "frame/parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 557:
#line 1408 "frame/parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 558:
#line 1411 "frame/parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 559:
#line 1414 "frame/parser.Y"
    {fr->getFitsSliceCmd(2);;}
    break;

  case 560:
#line 1415 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 561:
#line 1417 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 562:
#line 1419 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((yyvsp[(3) - (4)].integer), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 563:
#line 1421 "frame/parser.Y"
    {fr->getFitsSliceToImageCmd((yyvsp[(3) - (4)].real), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 564:
#line 1424 "frame/parser.Y"
    {fr->getGridCmd();;}
    break;

  case 565:
#line 1425 "frame/parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 566:
#line 1426 "frame/parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 567:
#line 1429 "frame/parser.Y"
    {fr->getLayerCountCmd();;}
    break;

  case 568:
#line 1430 "frame/parser.Y"
    {fr->getLayerNoCmd();;}
    break;

  case 569:
#line 1431 "frame/parser.Y"
    {fr->getLayerColorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 570:
#line 1432 "frame/parser.Y"
    {fr->getLayerBlendCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 571:
#line 1433 "frame/parser.Y"
    {fr->getLayerTransparencyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 572:
#line 1434 "frame/parser.Y"
    {fr->getLayerViewCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 573:
#line 1437 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 574:
#line 1438 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 575:
#line 1439 "frame/parser.Y"
    {fr->getMaskRangeCmd();;}
    break;

  case 576:
#line 1440 "frame/parser.Y"
    {fr->getMaskSystemCmd();;}
    break;

  case 577:
#line 1441 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 578:
#line 1442 "frame/parser.Y"
    {fr->getMaskCountCmd();;}
    break;

  case 579:
#line 1443 "frame/parser.Y"
    {fr->getMaskBlendCmd();;}
    break;

  case 580:
#line 1446 "frame/parser.Y"
    {(yyval.integer) = 0;;}
    break;

  case 581:
#line 1447 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 582:
#line 1450 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 583:
#line 1453 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 584:
#line 1454 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 585:
#line 1455 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 586:
#line 1458 "frame/parser.Y"
    {fr->getMultiColorSystemCmd();;}
    break;

  case 587:
#line 1461 "frame/parser.Y"
    {fr->getHLSChannelCmd();;}
    break;

  case 588:
#line 1462 "frame/parser.Y"
    {fr->getHLSSystemCmd();;}
    break;

  case 589:
#line 1463 "frame/parser.Y"
    {fr->getHLSViewCmd();;}
    break;

  case 590:
#line 1466 "frame/parser.Y"
    {fr->getHSVChannelCmd();;}
    break;

  case 591:
#line 1467 "frame/parser.Y"
    {fr->getHSVSystemCmd();;}
    break;

  case 592:
#line 1468 "frame/parser.Y"
    {fr->getHSVViewCmd();;}
    break;

  case 593:
#line 1471 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 594:
#line 1472 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 595:
#line 1473 "frame/parser.Y"
    {fr->getSmoothRadiusMinorCmd();;}
    break;

  case 596:
#line 1474 "frame/parser.Y"
    {fr->getSmoothSigmaCmd();;}
    break;

  case 597:
#line 1475 "frame/parser.Y"
    {fr->getSmoothSigmaMinorCmd();;}
    break;

  case 598:
#line 1476 "frame/parser.Y"
    {fr->getSmoothAngleCmd();;}
    break;

  case 603:
#line 1483 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 604:
#line 1484 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 606:
#line 1486 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 607:
#line 1489 "frame/parser.Y"
    {fr->get3dShadeCmd();;}
    break;

  case 608:
#line 1490 "frame/parser.Y"
    {fr->get3dShadeAmbientCmd();;}
    break;

  case 609:
#line 1491 "frame/parser.Y"
    {fr->get3dShadeStrengthCmd();;}
    break;

  case 611:
#line 1495 "frame/parser.Y"
    {fr->get3dShadeNormalCmd();;}
    break;

  case 612:
#line 1496 "frame/parser.Y"
    {fr->get3dShadeNormalStrengthCmd();;}
    break;

  case 613:
#line 1499 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 614:
#line 1500 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 615:
#line 1503 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 616:
#line 1504 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 617:
#line 1507 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 618:
#line 1508 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 619:
#line 1511 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 620:
#line 1512 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 621:
#line 1515 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 623:
#line 1517 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 624:
#line 1520 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 625:
#line 1521 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 627:
#line 1525 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 628:
#line 1529 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 629:
#line 1532 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer),
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 630:
#line 1539 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 631:
#line 1540 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 632:
#line 1543 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 633:
#line 1544 "frame/parser.Y"
    {fr->hasBgColorCmd();;}
    break;

  case 636:
#line 1547 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 637:
#line 1548 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 638:
#line 1549 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 639:
#line 1550 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 641:
#line 1552 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 642:
#line 1553 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 643:
#line 1554 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 645:
#line 1556 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 646:
#line 1557 "frame/parser.Y"
    {fr->hasImageCmd();;}
    break;

  case 647:
#line 1558 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 648:
#line 1559 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 650:
#line 1563 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 651:
#line 1566 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 652:
#line 1567 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 653:
#line 1570 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 654:
#line 1571 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 655:
#line 1572 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 656:
#line 1573 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 657:
#line 1576 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 658:
#line 1577 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 659:
#line 1578 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 660:
#line 1579 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 661:
#line 1582 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 662:
#line 1583 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 663:
#line 1584 "frame/parser.Y"
    {fr->hasWCSEquCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 664:
#line 1585 "frame/parser.Y"
    {fr->hasWCSLinearCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 665:
#line 1586 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 666:
#line 1587 "frame/parser.Y"
    {fr->hasWCS3DCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 667:
#line 1590 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 668:
#line 1591 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 669:
#line 1592 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 672:
#line 1596 "frame/parser.Y"
    {fr->iisSetCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 673:
#line 1597 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 674:
#line 1600 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 675:
#line 1603 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 676:
#line 1604 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 677:
#line 1608 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 678:
#line 1610 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 679:
#line 1611 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 686:
#line 1623 "frame/parser.Y"
    {
	  if (!strcmp((yyvsp[(1) - (2)].str),"hips"))
	    fr->loadHiPSCmd((yyvsp[(2) - (2)].str));
	  else {
	    // YYERROR alone says nothing: the command looked fine
	    fr->error("load: unknown type (array, envi, fits, hips, incr, nrrd, photo)");
	    YYERROR;
	  }
	;}
    break;

  case 687:
#line 1635 "frame/parser.Y"
    {
	  if (!strcmp((yyvsp[(1) - (3)].str),"hips"))
	    fr->loadHiPSCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));
	  else {
	    fr->error("load: unknown type (array, envi, fits, hips, incr, nrrd, photo)");
	    YYERROR;
	  }
	;}
    break;

  case 689:
#line 1647 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 690:
#line 1649 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 691:
#line 1651 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 692:
#line 1652 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 693:
#line 1654 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 694:
#line 1656 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 695:
#line 1658 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 696:
#line 1660 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 697:
#line 1662 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 701:
#line 1668 "frame/parser.Y"
    {fr->loadRGBArrayCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 702:
#line 1669 "frame/parser.Y"
    {fr->loadRGBArrayCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 703:
#line 1670 "frame/parser.Y"
    {fr->loadRGBArrayCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 704:
#line 1671 "frame/parser.Y"
    {fr->loadRGBArrayCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 705:
#line 1672 "frame/parser.Y"
    {fr->loadRGBArrayCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 706:
#line 1674 "frame/parser.Y"
    {fr->loadRGBArrayCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 707:
#line 1675 "frame/parser.Y"
    {fr->loadRGBArrayCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 708:
#line 1676 "frame/parser.Y"
    {fr->loadRGBArrayCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 709:
#line 1677 "frame/parser.Y"
    {fr->loadRGBArrayCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 710:
#line 1680 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 711:
#line 1684 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 712:
#line 1686 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 713:
#line 1688 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 714:
#line 1690 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 715:
#line 1692 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 716:
#line 1694 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 717:
#line 1696 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 718:
#line 1698 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str),
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 719:
#line 1701 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 720:
#line 1703 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 721:
#line 1705 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 731:
#line 1717 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 732:
#line 1718 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 733:
#line 1719 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 734:
#line 1720 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 735:
#line 1721 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 736:
#line 1722 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 737:
#line 1724 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 738:
#line 1726 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 739:
#line 1727 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 740:
#line 1728 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 741:
#line 1729 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 742:
#line 1732 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 743:
#line 1733 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 744:
#line 1734 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 745:
#line 1735 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 746:
#line 1736 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 747:
#line 1738 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 748:
#line 1739 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 749:
#line 1740 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 750:
#line 1741 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 756:
#line 1752 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 757:
#line 1755 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 758:
#line 1758 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 759:
#line 1761 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 760:
#line 1764 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 761:
#line 1767 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 762:
#line 1770 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 763:
#line 1773 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 764:
#line 1776 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 765:
#line 1781 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 766:
#line 1784 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 767:
#line 1787 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 768:
#line 1790 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 769:
#line 1793 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 770:
#line 1796 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 771:
#line 1799 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 772:
#line 1802 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 773:
#line 1805 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 774:
#line 1808 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 775:
#line 1811 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 776:
#line 1816 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 777:
#line 1819 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 778:
#line 1822 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 779:
#line 1825 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 780:
#line 1828 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 781:
#line 1831 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer),
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 782:
#line 1834 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 783:
#line 1837 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 784:
#line 1840 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 785:
#line 1845 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 786:
#line 1847 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 787:
#line 1849 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 788:
#line 1851 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 789:
#line 1853 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 790:
#line 1855 "frame/parser.Y"
    {
	  fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str),
					   (Base::LayerType)(yyvsp[(6) - (6)].integer));
        ;}
    break;

  case 791:
#line 1860 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 792:
#line 1862 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 793:
#line 1864 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 794:
#line 1868 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 795:
#line 1871 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 796:
#line 1874 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 797:
#line 1877 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 798:
#line 1880 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 799:
#line 1883 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 800:
#line 1886 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer),
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 801:
#line 1889 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer),
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 802:
#line 1892 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 803:
#line 1895 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 804:
#line 1898 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 805:
#line 1902 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 806:
#line 1903 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 807:
#line 1904 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 808:
#line 1905 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 809:
#line 1906 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 810:
#line 1907 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 811:
#line 1909 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 812:
#line 1911 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 813:
#line 1912 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 814:
#line 1913 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 815:
#line 1914 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 816:
#line 1917 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 817:
#line 1918 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 818:
#line 1919 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 819:
#line 1920 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 820:
#line 1921 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 821:
#line 1923 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 822:
#line 1924 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 823:
#line 1925 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 824:
#line 1926 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 825:
#line 1930 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 826:
#line 1932 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 827:
#line 1933 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 828:
#line 1935 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 829:
#line 1937 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 830:
#line 1939 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 831:
#line 1942 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 832:
#line 1943 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 833:
#line 1946 "frame/parser.Y"
    {fr->loadTiffCmd((yyvsp[(1) - (2)].str), (Base::LayerType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 834:
#line 1949 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 835:
#line 1950 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 836:
#line 1951 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 837:
#line 1954 "frame/parser.Y"
    {;}
    break;

  case 838:
#line 1957 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 839:
#line 1958 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 840:
#line 1959 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 841:
#line 1960 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 842:
#line 1961 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 843:
#line 1962 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 844:
#line 1963 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 845:
#line 1967 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 847:
#line 1975 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 848:
#line 1976 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 849:
#line 1978 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 850:
#line 1980 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 851:
#line 1981 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 852:
#line 1982 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 854:
#line 1983 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 857:
#line 1986 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 858:
#line 1987 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 859:
#line 1989 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 860:
#line 1991 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 861:
#line 1993 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 862:
#line 1996 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 863:
#line 1998 "frame/parser.Y"
    {fr->regionStatsCallbackCmd((yyvsp[(4) - (4)].str));;}
    break;

  case 864:
#line 2000 "frame/parser.Y"
    {fr->regionStatsCallbackCmd(NULL);;}
    break;

  case 865:
#line 2002 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 866:
#line 2003 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 867:
#line 2005 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 868:
#line 2008 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 869:
#line 2011 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 870:
#line 2015 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 871:
#line 2018 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 872:
#line 2021 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 873:
#line 2024 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 874:
#line 2028 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 875:
#line 2032 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 876:
#line 2037 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str),
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 877:
#line 2041 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 878:
#line 2043 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 879:
#line 2044 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 880:
#line 2046 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 881:
#line 2048 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 882:
#line 2050 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 883:
#line 2052 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 884:
#line 2054 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 885:
#line 2055 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 886:
#line 2056 "frame/parser.Y"
    {fr->markerCompositeAreaCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 887:
#line 2058 "frame/parser.Y"
    {fr->markerCompositeOperationCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 888:
#line 2060 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 889:
#line 2062 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 890:
#line 2065 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 891:
#line 2069 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 892:
#line 2073 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 893:
#line 2075 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 894:
#line 2077 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 895:
#line 2079 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 896:
#line 2081 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 897:
#line 2083 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 898:
#line 2085 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 899:
#line 2087 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 900:
#line 2089 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 901:
#line 2091 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 902:
#line 2093 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 903:
#line 2095 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 904:
#line 2097 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 905:
#line 2099 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 906:
#line 2100 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 907:
#line 2102 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 908:
#line 2104 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 909:
#line 2105 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 910:
#line 2106 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 911:
#line 2108 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 912:
#line 2110 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 913:
#line 2111 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 914:
#line 2112 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 915:
#line 2113 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 916:
#line 2115 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 917:
#line 2117 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 918:
#line 2121 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 919:
#line 2124 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 920:
#line 2127 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 921:
#line 2131 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 922:
#line 2135 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 923:
#line 2140 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str),
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 924:
#line 2144 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 925:
#line 2145 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 926:
#line 2146 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 927:
#line 2148 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 928:
#line 2149 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 929:
#line 2151 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 930:
#line 2155 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 931:
#line 2156 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 932:
#line 2157 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 933:
#line 2159 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 934:
#line 2162 "frame/parser.Y"
    {fr->markerPolygonPointCmd((yyvsp[(1) - (7)].integer),(yyvsp[(7) - (7)].str),(Coord::CoordSystem)(yyvsp[(4) - (7)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),(Coord::SkyFormat)(yyvsp[(6) - (7)].integer));;}
    break;

  case 935:
#line 2165 "frame/parser.Y"
    {fr->markerPolygonPointVarCmd((yyvsp[(1) - (8)].integer),(yyvsp[(8) - (8)].str),(Coord::CoordSystem)(yyvsp[(4) - (8)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (8)].integer),(Coord::SkyFormat)(yyvsp[(6) - (8)].integer));;}
    break;

  case 936:
#line 2168 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 937:
#line 2171 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 938:
#line 2174 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 939:
#line 2175 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 940:
#line 2176 "frame/parser.Y"
    {fr->markerPointGlyphCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 941:
#line 2180 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 942:
#line 2184 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 943:
#line 2186 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 944:
#line 2187 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 945:
#line 2189 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 946:
#line 2192 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 947:
#line 2195 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 948:
#line 2196 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 949:
#line 2198 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 950:
#line 2199 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 951:
#line 2200 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 952:
#line 2202 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 953:
#line 2203 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 954:
#line 2205 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 955:
#line 2206 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 956:
#line 2209 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 957:
#line 2212 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 958:
#line 2213 "frame/parser.Y"
    {fr->markerDashListCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 959:
#line 2215 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 960:
#line 2216 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 964:
#line 2221 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 965:
#line 2222 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 966:
#line 2224 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 967:
#line 2226 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 968:
#line 2228 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 969:
#line 2229 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 973:
#line 2235 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 974:
#line 2236 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 975:
#line 2237 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 976:
#line 2238 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 977:
#line 2239 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 978:
#line 2240 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 979:
#line 2241 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 980:
#line 2242 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 981:
#line 2243 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 982:
#line 2244 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 983:
#line 2246 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 984:
#line 2248 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 985:
#line 2249 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 986:
#line 2250 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 987:
#line 2251 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 988:
#line 2252 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 989:
#line 2254 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 990:
#line 2255 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 991:
#line 2256 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 992:
#line 2257 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 993:
#line 2258 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 994:
#line 2260 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 995:
#line 2261 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 996:
#line 2262 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 997:
#line 2263 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 998:
#line 2264 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 999:
#line 2265 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1000:
#line 2266 "frame/parser.Y"
    {fr->markerDashListCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1001:
#line 2269 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 1002:
#line 2270 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 1003:
#line 2271 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 1004:
#line 2272 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 1005:
#line 2273 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 1006:
#line 2274 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 1007:
#line 2275 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 1008:
#line 2276 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 1009:
#line 2277 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 1010:
#line 2278 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 1011:
#line 2279 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 1012:
#line 2280 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 1013:
#line 2281 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 1014:
#line 2282 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 1015:
#line 2283 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 1016:
#line 2284 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 1017:
#line 2285 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 1018:
#line 2286 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 1019:
#line 2287 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 1020:
#line 2288 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 1021:
#line 2289 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 1022:
#line 2292 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 1023:
#line 2293 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1024:
#line 2294 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1025:
#line 2295 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1026:
#line 2296 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1027:
#line 2298 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 1028:
#line 2308 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1029:
#line 2316 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1030:
#line 2325 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1031:
#line 2333 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1032:
#line 2339 "frame/parser.Y"
    {fr->createPolygonCanvasVarCmd((yyvsp[(4) - (5)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1033:
#line 2344 "frame/parser.Y"
    {fr->createSegmentCanvasVarCmd((yyvsp[(4) - (5)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1034:
#line 2350 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1035:
#line 2357 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1036:
#line 2365 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1037:
#line 2373 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1038:
#line 2378 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1039:
#line 2383 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1040:
#line 2388 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1041:
#line 2393 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1042:
#line 2398 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1043:
#line 2403 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1044:
#line 2408 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1045:
#line 2413 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::GLYPH, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist,(yyvsp[(5) - (6)].str));;}
    break;

  case 1046:
#line 2418 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),Coord::CANVAS),
	    Point::GLYPH, (yyvsp[(5) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist,(yyvsp[(6) - (7)].str));;}
    break;

  case 1047:
#line 2427 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer),
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1048:
#line 2437 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1049:
#line 2447 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1050:
#line 2456 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1051:
#line 2464 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1052:
#line 2474 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1053:
#line 2484 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1054:
#line 2494 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1055:
#line 2506 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1056:
#line 2515 "frame/parser.Y"
    {fr->createCompositeCmd(
	    (yyvsp[(2) - (3)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1058:
#line 2523 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 1059:
#line 2525 "frame/parser.Y"
    {
	  if ((yyvsp[(1) - (1)].integer) < 0 || (yyvsp[(1) - (1)].integer) > 1) {
	    fr->error("composite operation must be 0 (union) or 1 (intersection)");
	    YYERROR;
	  }
	  (yyval.integer)=(yyvsp[(1) - (1)].integer);
	;}
    break;

  case 1060:
#line 2534 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 1061:
#line 2536 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 1062:
#line 2538 "frame/parser.Y"
    {
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 1063:
#line 2543 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 1064:
#line 2546 "frame/parser.Y"
    {fr->markerDeleteAllCmd(0);;}
    break;

  case 1065:
#line 2547 "frame/parser.Y"
    {fr->markerDeleteAllCmd(1);;}
    break;

  case 1066:
#line 2548 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerDeleteAllCmd(0);
        ;}
    break;

  case 1067:
#line 2555 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1068:
#line 2557 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1069:
#line 2558 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 1070:
#line 2561 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 1071:
#line 2562 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 1072:
#line 2563 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 1073:
#line 2564 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 1074:
#line 2565 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 1075:
#line 2566 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 1076:
#line 2567 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 1078:
#line 2571 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 1079:
#line 2572 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 1080:
#line 2573 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 1081:
#line 2574 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1082:
#line 2575 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1083:
#line 2578 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(yyvsp[(6) - (8)].str),(Coord::CoordSystem)(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 1084:
#line 2580 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 1085:
#line 2582 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 1086:
#line 2584 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 1087:
#line 2586 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 1088:
#line 2588 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1089:
#line 2590 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsDataCmd((yyvsp[(1) - (6)].integer),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1090:
#line 2592 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsDataAllCmd((Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1091:
#line 2594 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsFieldsCmd();;}
    break;

  case 1092:
#line 2596 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 1093:
#line 2597 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1094:
#line 2598 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1095:
#line 2600 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1096:
#line 2602 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1097:
#line 2605 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1098:
#line 2607 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1099:
#line 2608 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1100:
#line 2609 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1101:
#line 2611 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1102:
#line 2613 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1103:
#line 2616 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer),
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1104:
#line 2619 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1105:
#line 2620 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1106:
#line 2621 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1107:
#line 2622 "frame/parser.Y"
    {fr->getMarkerCompassEndCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1108:
#line 2623 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1109:
#line 2625 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1110:
#line 2626 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1111:
#line 2627 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1112:
#line 2628 "frame/parser.Y"
    {fr->getMarkerCompositeAreaCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1113:
#line 2629 "frame/parser.Y"
    {fr->getMarkerCompositeOperationCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1114:
#line 2630 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1115:
#line 2631 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1116:
#line 2633 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1117:
#line 2635 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1118:
#line 2637 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1119:
#line 2639 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer),
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1120:
#line 2641 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1121:
#line 2642 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1122:
#line 2644 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1123:
#line 2646 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1124:
#line 2648 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1125:
#line 2649 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1126:
#line 2650 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1127:
#line 2651 "frame/parser.Y"
    {fr->getMarkerLineEndCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1128:
#line 2653 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1129:
#line 2655 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1130:
#line 2658 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1131:
#line 2661 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1132:
#line 2662 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1133:
#line 2663 "frame/parser.Y"
    {fr->getMarkerPointGlyphCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1134:
#line 2665 "frame/parser.Y"
    {fr->getMarkerPolygonPointCmd((yyvsp[(1) - (6)].integer),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),(Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1135:
#line 2668 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1136:
#line 2671 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer),
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1137:
#line 2674 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1138:
#line 2675 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1139:
#line 2676 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1140:
#line 2677 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1141:
#line 2679 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1142:
#line 2681 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1143:
#line 2683 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1144:
#line 2684 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1145:
#line 2686 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1146:
#line 2687 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1147:
#line 2688 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1148:
#line 2689 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1149:
#line 2690 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1150:
#line 2692 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1151:
#line 2693 "frame/parser.Y"
    {fr->getMarkerVectorEndCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1152:
#line 2695 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1153:
#line 2697 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1154:
#line 2699 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1155:
#line 2700 "frame/parser.Y"
    {fr->getMarkerDashListCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1157:
#line 2702 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1158:
#line 2703 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1159:
#line 2705 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1160:
#line 2707 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1161:
#line 2708 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1162:
#line 2709 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1164:
#line 2711 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1166:
#line 2715 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1167:
#line 2716 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1168:
#line 2717 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1169:
#line 2718 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1170:
#line 2719 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1171:
#line 2720 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1172:
#line 2722 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1173:
#line 2723 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1174:
#line 2725 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1175:
#line 2726 "frame/parser.Y"
    {fr->getMarkerDashListCmd();;}
    break;

  case 1176:
#line 2729 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1177:
#line 2730 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1178:
#line 2731 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1179:
#line 2732 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1180:
#line 2735 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1181:
#line 2736 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1182:
#line 2739 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1183:
#line 2740 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1184:
#line 2743 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1185:
#line 2744 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1186:
#line 2747 "frame/parser.Y"
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

  case 1187:
#line 2760 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1188:
#line 2761 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1189:
#line 2765 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1190:
#line 2766 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1191:
#line 2770 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1192:
#line 2771 "frame/parser.Y"
    {fr->markerLayerCmd(Base::FOOTPRINT);;}
    break;

  case 1193:
#line 2776 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), 0, propQMask, propQValue, taglist);;}
    break;

  case 1194:
#line 2780 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), 1, propQMask, propQValue, taglist);;}
    break;

  case 1195:
#line 2785 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str),0,"green",Coord::PHYSICAL,Coord::ICRS);;}
    break;

  case 1196:
#line 2787 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1197:
#line 2790 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer),0,"green",Coord::PHYSICAL,Coord::ICRS);;}
    break;

  case 1198:
#line 2792 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1199:
#line 2795 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (2)].str), "green");;}
    break;

  case 1200:
#line 2797 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));;}
    break;

  case 1201:
#line 2800 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1202:
#line 2801 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1203:
#line 2802 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1204:
#line 2803 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1205:
#line 2804 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1206:
#line 2805 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1207:
#line 2807 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1210:
#line 2814 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1211:
#line 2815 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1212:
#line 2816 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1213:
#line 2817 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1214:
#line 2818 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1215:
#line 2819 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1218:
#line 2824 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1219:
#line 2825 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1220:
#line 2826 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1221:
#line 2827 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1222:
#line 2828 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1223:
#line 2829 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1224:
#line 2830 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1225:
#line 2831 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1226:
#line 2832 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1227:
#line 2833 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1228:
#line 2834 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1229:
#line 2835 "frame/parser.Y"
    {(yyval.integer) = Marker::FILL;;}
    break;

  case 1232:
#line 2842 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1233:
#line 2843 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1235:
#line 2847 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(1) - (6)].str), (Base::MarkerFormat)(yyvsp[(2) - (6)].integer), (Coord::CoordSystem)(yyvsp[(3) - (6)].integer), (Coord::SkyFrame)(yyvsp[(4) - (6)].integer), (Coord::SkyFormat)(yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].integer), 0);;}
    break;

  case 1236:
#line 2849 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer), 1);;}
    break;

  case 1237:
#line 2850 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1238:
#line 2853 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1239:
#line 2854 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1240:
#line 2855 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1241:
#line 2856 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1242:
#line 2857 "frame/parser.Y"
    {fr->markerSelectFirstCmd();;}
    break;

  case 1243:
#line 2858 "frame/parser.Y"
    {fr->markerSelectLastCmd();;}
    break;

  case 1244:
#line 2861 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1245:
#line 2862 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1248:
#line 2870 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1249:
#line 2873 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1250:
#line 2874 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1254:
#line 2881 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1255:
#line 2884 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1256:
#line 2888 "frame/parser.Y"
    {fr->layerCreateCmd();;}
    break;

  case 1257:
#line 2889 "frame/parser.Y"
    {fr->layerCreateCmd();;}
    break;

  case 1258:
#line 2890 "frame/parser.Y"
    {fr->layerNoCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1259:
#line 2891 "frame/parser.Y"
    {fr->layerNoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1260:
#line 2892 "frame/parser.Y"
    {fr->layerColorCmd(0,(yyvsp[(2) - (2)].str));;}
    break;

  case 1261:
#line 2893 "frame/parser.Y"
    {fr->layerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1262:
#line 2894 "frame/parser.Y"
    {fr->layerBlendCmd(0,(FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1263:
#line 2895 "frame/parser.Y"
    {fr->layerBlendCmd((yyvsp[(1) - (3)].integer),(FitsMask::MaskBlend)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1264:
#line 2896 "frame/parser.Y"
    {fr->layerTransparencyCmd(0,(yyvsp[(2) - (2)].real));;}
    break;

  case 1265:
#line 2897 "frame/parser.Y"
    {fr->layerTransparencyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 1266:
#line 2898 "frame/parser.Y"
    {fr->layerViewCmd(0,(yyvsp[(2) - (2)].integer));;}
    break;

  case 1267:
#line 2899 "frame/parser.Y"
    {fr->layerViewCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1268:
#line 2901 "frame/parser.Y"
    {fr->layerShowCmd(0);;}
    break;

  case 1269:
#line 2902 "frame/parser.Y"
    {fr->layerShowCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1270:
#line 2903 "frame/parser.Y"
    {fr->layerHideCmd(0);;}
    break;

  case 1271:
#line 2904 "frame/parser.Y"
    {fr->layerHideCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1272:
#line 2905 "frame/parser.Y"
    {fr->layerDeleteCmd(0);;}
    break;

  case 1273:
#line 2906 "frame/parser.Y"
    {fr->layerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1274:
#line 2907 "frame/parser.Y"
    {fr->layerUpCmd(0);;}
    break;

  case 1275:
#line 2908 "frame/parser.Y"
    {fr->layerUpCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1276:
#line 2909 "frame/parser.Y"
    {fr->layerDownCmd(0);;}
    break;

  case 1277:
#line 2910 "frame/parser.Y"
    {fr->layerDownCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1278:
#line 2911 "frame/parser.Y"
    {fr->layerTopCmd(0);;}
    break;

  case 1279:
#line 2912 "frame/parser.Y"
    {fr->layerTopCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1280:
#line 2913 "frame/parser.Y"
    {fr->layerBottomCmd(0);;}
    break;

  case 1281:
#line 2914 "frame/parser.Y"
    {fr->layerBottomCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1282:
#line 2917 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1283:
#line 2918 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1284:
#line 2919 "frame/parser.Y"
    {fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1285:
#line 2920 "frame/parser.Y"
    {fr->maskRangeCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 1286:
#line 2921 "frame/parser.Y"
    {fr->maskSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1287:
#line 2922 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1288:
#line 2923 "frame/parser.Y"
    {fr->maskBlendCmd((FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1289:
#line 2924 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1290:
#line 2930 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1291:
#line 2931 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1292:
#line 2932 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1293:
#line 2933 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1294:
#line 2937 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1295:
#line 2938 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1296:
#line 2940 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1297:
#line 2945 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1299:
#line 2947 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1301:
#line 2949 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1302:
#line 2952 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1303:
#line 2954 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1304:
#line 2959 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1305:
#line 2962 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1306:
#line 2963 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1307:
#line 2964 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1308:
#line 2967 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1309:
#line 2969 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1310:
#line 2973 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1311:
#line 2974 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1312:
#line 2978 "frame/parser.Y"
    {fr->psColorSpaceCmd((PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1313:
#line 2979 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1314:
#line 2980 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1315:
#line 2981 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 1316:
#line 2987 "frame/parser.Y"
    {fr->precCmd((yyvsp[(1) - (9)].integer),(yyvsp[(2) - (9)].integer),(yyvsp[(3) - (9)].integer),(yyvsp[(4) - (9)].integer),(yyvsp[(5) - (9)].integer),(yyvsp[(6) - (9)].integer),(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 1317:
#line 2988 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->precCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 1318:
#line 2994 "frame/parser.Y"
    {(yyval.integer) = BW;;}
    break;

  case 1319:
#line 2995 "frame/parser.Y"
    {(yyval.integer) = GRAY;;}
    break;

  case 1320:
#line 2996 "frame/parser.Y"
    {(yyval.integer) = RGB;;}
    break;

  case 1321:
#line 2997 "frame/parser.Y"
    {(yyval.integer) = CMYK;;}
    break;

  case 1324:
#line 3005 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1325:
#line 3007 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1326:
#line 3008 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1327:
#line 3009 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1328:
#line 3013 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1329:
#line 3014 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1330:
#line 3015 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1331:
#line 3016 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1332:
#line 3019 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1333:
#line 3020 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1334:
#line 3021 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::FIP;;}
    break;

  case 1335:
#line 3024 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1336:
#line 3025 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1337:
#line 3026 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1338:
#line 3029 "frame/parser.Y"
    {fr->revealCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1339:
#line 3030 "frame/parser.Y"
    {fr->revealClearCmd();;}
    break;

  case 1340:
#line 3033 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1341:
#line 3034 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1342:
#line 3035 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1343:
#line 3039 "frame/parser.Y"
    {fr->setMultiColorSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1344:
#line 3042 "frame/parser.Y"
    {fr->setHLSChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1345:
#line 3043 "frame/parser.Y"
    {fr->setHLSChannelCmd("hue");;}
    break;

  case 1346:
#line 3044 "frame/parser.Y"
    {fr->setHLSChannelCmd("saturation");;}
    break;

  case 1347:
#line 3045 "frame/parser.Y"
    {fr->setHLSSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1348:
#line 3046 "frame/parser.Y"
    {fr->setHLSViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1349:
#line 3049 "frame/parser.Y"
    {fr->setHSVChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1350:
#line 3050 "frame/parser.Y"
    {fr->setHSVChannelCmd("hue");;}
    break;

  case 1351:
#line 3051 "frame/parser.Y"
    {fr->setHSVChannelCmd("saturation");;}
    break;

  case 1352:
#line 3052 "frame/parser.Y"
    {fr->setHSVChannelCmd("value");;}
    break;

  case 1353:
#line 3053 "frame/parser.Y"
    {fr->setHSVSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1354:
#line 3054 "frame/parser.Y"
    {fr->setHSVViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1355:
#line 3057 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1356:
#line 3058 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (2)].real))));;}
    break;

  case 1358:
#line 3060 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (2)].real))));;}
    break;

  case 1359:
#line 3061 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (3)].real))));;}
    break;

  case 1360:
#line 3064 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1361:
#line 3065 "frame/parser.Y"
    {fr->rotateMotionCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1362:
#line 3066 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1368:
#line 3074 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1369:
#line 3077 "frame/parser.Y"
    {fr->savePixelMaskFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1370:
#line 3078 "frame/parser.Y"
    {fr->savePixelMaskChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1371:
#line 3079 "frame/parser.Y"
    {fr->savePixelMaskSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1372:
#line 3083 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1373:
#line 3085 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1374:
#line 3087 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1391:
#line 3108 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1392:
#line 3109 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1393:
#line 3110 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1394:
#line 3113 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1395:
#line 3114 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1396:
#line 3115 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1397:
#line 3118 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1398:
#line 3119 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1399:
#line 3120 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1400:
#line 3123 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1401:
#line 3124 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1402:
#line 3125 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1404:
#line 3129 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1405:
#line 3130 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1406:
#line 3131 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1407:
#line 3134 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1408:
#line 3135 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1409:
#line 3136 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1410:
#line 3140 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1411:
#line 3142 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1412:
#line 3144 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1413:
#line 3147 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1414:
#line 3148 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1415:
#line 3149 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1416:
#line 3152 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1417:
#line 3153 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1418:
#line 3154 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1419:
#line 3158 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1420:
#line 3160 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1421:
#line 3162 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1422:
#line 3165 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1423:
#line 3166 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1424:
#line 3167 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1425:
#line 3170 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1426:
#line 3171 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1427:
#line 3172 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1428:
#line 3176 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1429:
#line 3178 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1430:
#line 3180 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1431:
#line 3183 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1432:
#line 3184 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1433:
#line 3185 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1434:
#line 3188 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1435:
#line 3189 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1436:
#line 3190 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1437:
#line 3193 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1438:
#line 3194 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1439:
#line 3195 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1440:
#line 3199 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1441:
#line 3201 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1442:
#line 3203 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1443:
#line 3207 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1444:
#line 3211 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1445:
#line 3213 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1446:
#line 3217 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1447:
#line 3220 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1448:
#line 3221 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1449:
#line 3222 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1450:
#line 3223 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1451:
#line 3226 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1452:
#line 3228 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1453:
#line 3230 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1454:
#line 3233 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 1456:
#line 3235 "frame/parser.Y"
    {fr->updateFitsCenterCmd();;}
    break;

  case 1457:
#line 3237 "frame/parser.Y"
    {fr->updateFitsCenterCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1458:
#line 3240 "frame/parser.Y"
    {fr->sliceCmd(2,(yyvsp[(1) - (1)].integer));;}
    break;

  case 1459:
#line 3241 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1460:
#line 3242 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1461:
#line 3245 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1462:
#line 3246 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1463:
#line 3250 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1465:
#line 3252 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1468:
#line 3257 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1469:
#line 3258 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1470:
#line 3259 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1471:
#line 3262 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1472:
#line 3263 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1473:
#line 3264 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1474:
#line 3267 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1475:
#line 3269 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1476:
#line 3274 "frame/parser.Y"
    {fr->wcsAlign2Cmd((yyvsp[(2) - (4)].integer), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1477:
#line 3275 "frame/parser.Y"
    {fr->wcsAlignPointerClearCmd();;}
    break;

  case 1478:
#line 3278 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1479:
#line 3285 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1480:
#line 3287 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1481:
#line 3289 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1482:
#line 3294 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1484:
#line 3298 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1485:
#line 3299 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1486:
#line 3300 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1487:
#line 3302 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1488:
#line 3304 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1489:
#line 3309 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 12452 "frame/parser.C"
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


#line 3313 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

