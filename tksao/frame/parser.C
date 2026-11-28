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
     ASDF_ = 284,
     ASINH_ = 285,
     AST_ = 286,
     AUTO_ = 287,
     AUX_ = 288,
     AVERAGE_ = 289,
     AXES_ = 290,
     AZIMUTH_ = 291,
     B1950_ = 292,
     BACK_ = 293,
     BACKGROUND_ = 294,
     BAR_ = 295,
     BASE_ = 296,
     BBOX_ = 297,
     BEGIN_ = 298,
     BG_ = 299,
     BIG_ = 300,
     BIGENDIAN_ = 301,
     BIN_ = 302,
     BITPIX_ = 303,
     BLEND_ = 304,
     BLOCK_ = 305,
     BORDER_ = 306,
     BOTTOM_ = 307,
     BOX_ = 308,
     BOXANNULUS_ = 309,
     BOXCAR_ = 310,
     BOXCIRCLE_ = 311,
     BPANDA_ = 312,
     BUFFER_ = 313,
     BW_ = 314,
     CALLBACK_ = 315,
     CANVAS_ = 316,
     CATALOG_ = 317,
     CELESTIAL_ = 318,
     CENTER_ = 319,
     CENTROID_ = 320,
     CHANNEL_ = 321,
     CHEVRON_ = 322,
     CIRCLE_ = 323,
     CIAO_ = 324,
     CLEAR_ = 325,
     CLIP_ = 326,
     COLOR_ = 327,
     COLORBURN_ = 328,
     COLORDODGE_ = 329,
     COLORBAR_ = 330,
     COLORMAP_ = 331,
     COLORSCALE_ = 332,
     COLORSPACE_ = 333,
     COLS_ = 334,
     COLUMN_ = 335,
     COMMAND_ = 336,
     COMPASS_ = 337,
     COMPOSITE_ = 338,
     COMPRESS_ = 339,
     CONTOUR_ = 340,
     CONTRAST_ = 341,
     COORDINATES_ = 342,
     COPY_ = 343,
     COUNT_ = 344,
     CPANDA_ = 345,
     CREATE_ = 346,
     CROP_ = 347,
     CROSS_ = 348,
     CROSSHAIR_ = 349,
     CUBE_ = 350,
     CURSOR_ = 351,
     CUT_ = 352,
     CMYK_ = 353,
     DARKEN_ = 354,
     DASH_ = 355,
     DASHLIST_ = 356,
     DATA_ = 357,
     DATAMIN_ = 358,
     DATASEC_ = 359,
     DEBUG_ = 360,
     DEGREES_ = 361,
     DEFAULT_ = 362,
     DELETE_ = 363,
     DEPTH_ = 364,
     DETECTOR_ = 365,
     DIAMOND_ = 366,
     DIFFERENCE_ = 367,
     DIM_ = 368,
     DOWN_ = 369,
     DS9_ = 370,
     EDIT_ = 371,
     ECLIPTIC_ = 372,
     ELEVATION_ = 373,
     ELLIPTIC_ = 374,
     ELLIPSE_ = 375,
     ELLIPSEANNULUS_ = 376,
     END_ = 377,
     ENVI_ = 378,
     EPANDA_ = 379,
     EPSILON_ = 380,
     EQUATORIAL_ = 381,
     ERASE_ = 382,
     EXCLUSION_ = 383,
     EXT_ = 384,
     FADE_ = 385,
     FACTOR_ = 386,
     FALSE_ = 387,
     FILE_ = 388,
     FILL_ = 389,
     FILTER_ = 390,
     FIRST_ = 391,
     FIP_ = 392,
     FIT_ = 393,
     FITS_ = 394,
     FITSY_ = 395,
     FIXED_ = 396,
     FK4_ = 397,
     FK5_ = 398,
     FONT_ = 399,
     FORMAT_ = 400,
     FOOTPRINT_ = 401,
     FROM_ = 402,
     FRONT_ = 403,
     FULL_ = 404,
     FUNCTION_ = 405,
     GALACTIC_ = 406,
     GAUSSIAN_ = 407,
     GET_ = 408,
     GHS_ = 409,
     GLOBAL_ = 410,
     GLYPH_ = 411,
     GRAPHICS_ = 412,
     GRAY_ = 413,
     GRID_ = 414,
     GZ_ = 415,
     HANDLE_ = 416,
     HARDLIGHT_ = 417,
     HAS_ = 418,
     HEAD_ = 419,
     HEADER_ = 420,
     HEIGHT_ = 421,
     HIDE_ = 422,
     HIGHLITE_ = 423,
     HISTEQU_ = 424,
     HISTOGRAM_ = 425,
     HORIZONTAL_ = 426,
     HUE_ = 427,
     HSV_ = 428,
     HLS_ = 429,
     ICRS_ = 430,
     ID_ = 431,
     IIS_ = 432,
     IMAGE_ = 433,
     INCLUDE_ = 434,
     INCR_ = 435,
     INFO_ = 436,
     ITERATION_ = 437,
     IRAF_ = 438,
     IRAFMIN_ = 439,
     J2000_ = 440,
     KEY_ = 441,
     KEYWORD_ = 442,
     LABEL_ = 443,
     LAYER_ = 444,
     LAYERNO_ = 445,
     LAST_ = 446,
     LENGTH_ = 447,
     LEVEL_ = 448,
     LIGHTEN_ = 449,
     LITTLE_ = 450,
     LITTLEENDIAN_ = 451,
     LINE_ = 452,
     LINEAR_ = 453,
     LIST_ = 454,
     LOAD_ = 455,
     LOCAL_ = 456,
     LOG_ = 457,
     LUMINOSITY_ = 458,
     MACOSX_ = 459,
     MAGNIFIER_ = 460,
     MATCH_ = 461,
     MAP_ = 462,
     MARK_ = 463,
     MARKER_ = 464,
     MASK_ = 465,
     MEDIAN_ = 466,
     MESSAGE_ = 467,
     METHOD_ = 468,
     MINMAX_ = 469,
     MINOR_ = 470,
     MIP_ = 471,
     MMAP_ = 472,
     MMAPINCR_ = 473,
     MOSAIC_ = 474,
     MODE_ = 475,
     MOTION_ = 476,
     MULTICOLOR_ = 477,
     MULTIPLY_ = 478,
     MOVE_ = 479,
     NAME_ = 480,
     NAN_ = 481,
     NATIVE_ = 482,
     NAXES_ = 483,
     NEW_ = 484,
     NEXT_ = 485,
     NO_ = 486,
     NONE_ = 487,
     NORMAL_ = 488,
     NONNAN_ = 489,
     NONZERO_ = 490,
     NOW_ = 491,
     NRRD_ = 492,
     NUMBER_ = 493,
     OBJECT_ = 494,
     OFF_ = 495,
     ON_ = 496,
     ONLY_ = 497,
     OPENARROW_ = 498,
     OPENBOX_ = 499,
     OPENCIRCLE_ = 500,
     OPENTRIANGLE_ = 501,
     OPTION_ = 502,
     ORIENT_ = 503,
     OVERLAY_ = 504,
     PAN_ = 505,
     PANNER_ = 506,
     PARSER_ = 507,
     PASTE_ = 508,
     PERF_ = 509,
     PHOTO_ = 510,
     PHYSICAL_ = 511,
     PIXEL_ = 512,
     PLOT2D_ = 513,
     PLOT3D_ = 514,
     POINT_ = 515,
     POINTER_ = 516,
     POLYGON_ = 517,
     POSTSCRIPT_ = 518,
     POW_ = 519,
     PRECISION_ = 520,
     PRINT_ = 521,
     PRESERVE_ = 522,
     PROJECTION_ = 523,
     PROPERTY_ = 524,
     PUBLICATION_ = 525,
     PROS_ = 526,
     QUERY_ = 527,
     RADIAL_ = 528,
     RADIUS_ = 529,
     RANGE_ = 530,
     REGION_ = 531,
     REPLACE_ = 532,
     RESAMPLE_ = 533,
     RESCAN_ = 534,
     RESET_ = 535,
     RESOLUTION_ = 536,
     REVEAL_ = 537,
     RGB_ = 538,
     ROOT_ = 539,
     ROTATE_ = 540,
     RULER_ = 541,
     SAMPLE_ = 542,
     SAOIMAGE_ = 543,
     SAOTNG_ = 544,
     SAVE_ = 545,
     SATURATION_ = 546,
     SCALE_ = 547,
     SCAN_ = 548,
     SCIENTIFIC_ = 549,
     SCOPE_ = 550,
     SCREEN_ = 551,
     SEGMENT_ = 552,
     SELECT_ = 553,
     SET_ = 554,
     SEXAGESIMAL_ = 555,
     SHAPE_ = 556,
     SHADE_ = 557,
     SHARED_ = 558,
     SHIFT_ = 559,
     SHMID_ = 560,
     SHOW_ = 561,
     SIGMA_ = 562,
     SINH_ = 563,
     SIZE_ = 564,
     SLICE_ = 565,
     SMMAP_ = 566,
     SMOOTH_ = 567,
     SOFTLIGHT_ = 568,
     SOCKET_ = 569,
     SOCKETGZ_ = 570,
     SOURCE_ = 571,
     SQRT_ = 572,
     SQUARED_ = 573,
     SSHARED_ = 574,
     STATS_ = 575,
     STATUS_ = 576,
     STRENGTH_ = 577,
     STYLE_ = 578,
     SUM_ = 579,
     SYNC_ = 580,
     SYSTEM_ = 581,
     TABLE_ = 582,
     TAG_ = 583,
     TEMPLATE_ = 584,
     TEXT_ = 585,
     THREADS_ = 586,
     TIFF_ = 587,
     THREED_ = 588,
     THRESHOLD_ = 589,
     THICK_ = 590,
     TOP_ = 591,
     TRANSPARENCY_ = 592,
     TRIANGLE_ = 593,
     TO_ = 594,
     TOGGLE_ = 595,
     TOPHAT_ = 596,
     TRUE_ = 597,
     TYPE_ = 598,
     UNDO_ = 599,
     UNHIGHLITE_ = 600,
     UNLOAD_ = 601,
     UNSELECT_ = 602,
     UPDATE_ = 603,
     UP_ = 604,
     USER_ = 605,
     VALUE_ = 606,
     VAR_ = 607,
     VIEW_ = 608,
     VECTOR_ = 609,
     VERSION_ = 610,
     VERTEX_ = 611,
     VERTICAL_ = 612,
     WARP_ = 613,
     WCS_ = 614,
     WCSA_ = 615,
     WCSB_ = 616,
     WCSC_ = 617,
     WCSD_ = 618,
     WCSE_ = 619,
     WCSF_ = 620,
     WCSG_ = 621,
     WCSH_ = 622,
     WCSI_ = 623,
     WCSJ_ = 624,
     WCSK_ = 625,
     WCSL_ = 626,
     WCSM_ = 627,
     WCSN_ = 628,
     WCSO_ = 629,
     WCSP_ = 630,
     WCSQ_ = 631,
     WCSR_ = 632,
     WCSS_ = 633,
     WCST_ = 634,
     WCSU_ = 635,
     WCSV_ = 636,
     WCSW_ = 637,
     WCSX_ = 638,
     WCSY_ = 639,
     WCSZ_ = 640,
     WCS0_ = 641,
     WFPC2_ = 642,
     WIDTH_ = 643,
     WIN32_ = 644,
     XISF_ = 645,
     XML_ = 646,
     XY_ = 647,
     YES_ = 648,
     ZERO_ = 649,
     ZMAX_ = 650,
     ZSCALE_ = 651,
     PIXMASK_ = 652,
     ZOOM_ = 653,
     FIELDS_ = 654
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
#define ASDF_ 284
#define ASINH_ 285
#define AST_ 286
#define AUTO_ 287
#define AUX_ 288
#define AVERAGE_ 289
#define AXES_ 290
#define AZIMUTH_ 291
#define B1950_ 292
#define BACK_ 293
#define BACKGROUND_ 294
#define BAR_ 295
#define BASE_ 296
#define BBOX_ 297
#define BEGIN_ 298
#define BG_ 299
#define BIG_ 300
#define BIGENDIAN_ 301
#define BIN_ 302
#define BITPIX_ 303
#define BLEND_ 304
#define BLOCK_ 305
#define BORDER_ 306
#define BOTTOM_ 307
#define BOX_ 308
#define BOXANNULUS_ 309
#define BOXCAR_ 310
#define BOXCIRCLE_ 311
#define BPANDA_ 312
#define BUFFER_ 313
#define BW_ 314
#define CALLBACK_ 315
#define CANVAS_ 316
#define CATALOG_ 317
#define CELESTIAL_ 318
#define CENTER_ 319
#define CENTROID_ 320
#define CHANNEL_ 321
#define CHEVRON_ 322
#define CIRCLE_ 323
#define CIAO_ 324
#define CLEAR_ 325
#define CLIP_ 326
#define COLOR_ 327
#define COLORBURN_ 328
#define COLORDODGE_ 329
#define COLORBAR_ 330
#define COLORMAP_ 331
#define COLORSCALE_ 332
#define COLORSPACE_ 333
#define COLS_ 334
#define COLUMN_ 335
#define COMMAND_ 336
#define COMPASS_ 337
#define COMPOSITE_ 338
#define COMPRESS_ 339
#define CONTOUR_ 340
#define CONTRAST_ 341
#define COORDINATES_ 342
#define COPY_ 343
#define COUNT_ 344
#define CPANDA_ 345
#define CREATE_ 346
#define CROP_ 347
#define CROSS_ 348
#define CROSSHAIR_ 349
#define CUBE_ 350
#define CURSOR_ 351
#define CUT_ 352
#define CMYK_ 353
#define DARKEN_ 354
#define DASH_ 355
#define DASHLIST_ 356
#define DATA_ 357
#define DATAMIN_ 358
#define DATASEC_ 359
#define DEBUG_ 360
#define DEGREES_ 361
#define DEFAULT_ 362
#define DELETE_ 363
#define DEPTH_ 364
#define DETECTOR_ 365
#define DIAMOND_ 366
#define DIFFERENCE_ 367
#define DIM_ 368
#define DOWN_ 369
#define DS9_ 370
#define EDIT_ 371
#define ECLIPTIC_ 372
#define ELEVATION_ 373
#define ELLIPTIC_ 374
#define ELLIPSE_ 375
#define ELLIPSEANNULUS_ 376
#define END_ 377
#define ENVI_ 378
#define EPANDA_ 379
#define EPSILON_ 380
#define EQUATORIAL_ 381
#define ERASE_ 382
#define EXCLUSION_ 383
#define EXT_ 384
#define FADE_ 385
#define FACTOR_ 386
#define FALSE_ 387
#define FILE_ 388
#define FILL_ 389
#define FILTER_ 390
#define FIRST_ 391
#define FIP_ 392
#define FIT_ 393
#define FITS_ 394
#define FITSY_ 395
#define FIXED_ 396
#define FK4_ 397
#define FK5_ 398
#define FONT_ 399
#define FORMAT_ 400
#define FOOTPRINT_ 401
#define FROM_ 402
#define FRONT_ 403
#define FULL_ 404
#define FUNCTION_ 405
#define GALACTIC_ 406
#define GAUSSIAN_ 407
#define GET_ 408
#define GHS_ 409
#define GLOBAL_ 410
#define GLYPH_ 411
#define GRAPHICS_ 412
#define GRAY_ 413
#define GRID_ 414
#define GZ_ 415
#define HANDLE_ 416
#define HARDLIGHT_ 417
#define HAS_ 418
#define HEAD_ 419
#define HEADER_ 420
#define HEIGHT_ 421
#define HIDE_ 422
#define HIGHLITE_ 423
#define HISTEQU_ 424
#define HISTOGRAM_ 425
#define HORIZONTAL_ 426
#define HUE_ 427
#define HSV_ 428
#define HLS_ 429
#define ICRS_ 430
#define ID_ 431
#define IIS_ 432
#define IMAGE_ 433
#define INCLUDE_ 434
#define INCR_ 435
#define INFO_ 436
#define ITERATION_ 437
#define IRAF_ 438
#define IRAFMIN_ 439
#define J2000_ 440
#define KEY_ 441
#define KEYWORD_ 442
#define LABEL_ 443
#define LAYER_ 444
#define LAYERNO_ 445
#define LAST_ 446
#define LENGTH_ 447
#define LEVEL_ 448
#define LIGHTEN_ 449
#define LITTLE_ 450
#define LITTLEENDIAN_ 451
#define LINE_ 452
#define LINEAR_ 453
#define LIST_ 454
#define LOAD_ 455
#define LOCAL_ 456
#define LOG_ 457
#define LUMINOSITY_ 458
#define MACOSX_ 459
#define MAGNIFIER_ 460
#define MATCH_ 461
#define MAP_ 462
#define MARK_ 463
#define MARKER_ 464
#define MASK_ 465
#define MEDIAN_ 466
#define MESSAGE_ 467
#define METHOD_ 468
#define MINMAX_ 469
#define MINOR_ 470
#define MIP_ 471
#define MMAP_ 472
#define MMAPINCR_ 473
#define MOSAIC_ 474
#define MODE_ 475
#define MOTION_ 476
#define MULTICOLOR_ 477
#define MULTIPLY_ 478
#define MOVE_ 479
#define NAME_ 480
#define NAN_ 481
#define NATIVE_ 482
#define NAXES_ 483
#define NEW_ 484
#define NEXT_ 485
#define NO_ 486
#define NONE_ 487
#define NORMAL_ 488
#define NONNAN_ 489
#define NONZERO_ 490
#define NOW_ 491
#define NRRD_ 492
#define NUMBER_ 493
#define OBJECT_ 494
#define OFF_ 495
#define ON_ 496
#define ONLY_ 497
#define OPENARROW_ 498
#define OPENBOX_ 499
#define OPENCIRCLE_ 500
#define OPENTRIANGLE_ 501
#define OPTION_ 502
#define ORIENT_ 503
#define OVERLAY_ 504
#define PAN_ 505
#define PANNER_ 506
#define PARSER_ 507
#define PASTE_ 508
#define PERF_ 509
#define PHOTO_ 510
#define PHYSICAL_ 511
#define PIXEL_ 512
#define PLOT2D_ 513
#define PLOT3D_ 514
#define POINT_ 515
#define POINTER_ 516
#define POLYGON_ 517
#define POSTSCRIPT_ 518
#define POW_ 519
#define PRECISION_ 520
#define PRINT_ 521
#define PRESERVE_ 522
#define PROJECTION_ 523
#define PROPERTY_ 524
#define PUBLICATION_ 525
#define PROS_ 526
#define QUERY_ 527
#define RADIAL_ 528
#define RADIUS_ 529
#define RANGE_ 530
#define REGION_ 531
#define REPLACE_ 532
#define RESAMPLE_ 533
#define RESCAN_ 534
#define RESET_ 535
#define RESOLUTION_ 536
#define REVEAL_ 537
#define RGB_ 538
#define ROOT_ 539
#define ROTATE_ 540
#define RULER_ 541
#define SAMPLE_ 542
#define SAOIMAGE_ 543
#define SAOTNG_ 544
#define SAVE_ 545
#define SATURATION_ 546
#define SCALE_ 547
#define SCAN_ 548
#define SCIENTIFIC_ 549
#define SCOPE_ 550
#define SCREEN_ 551
#define SEGMENT_ 552
#define SELECT_ 553
#define SET_ 554
#define SEXAGESIMAL_ 555
#define SHAPE_ 556
#define SHADE_ 557
#define SHARED_ 558
#define SHIFT_ 559
#define SHMID_ 560
#define SHOW_ 561
#define SIGMA_ 562
#define SINH_ 563
#define SIZE_ 564
#define SLICE_ 565
#define SMMAP_ 566
#define SMOOTH_ 567
#define SOFTLIGHT_ 568
#define SOCKET_ 569
#define SOCKETGZ_ 570
#define SOURCE_ 571
#define SQRT_ 572
#define SQUARED_ 573
#define SSHARED_ 574
#define STATS_ 575
#define STATUS_ 576
#define STRENGTH_ 577
#define STYLE_ 578
#define SUM_ 579
#define SYNC_ 580
#define SYSTEM_ 581
#define TABLE_ 582
#define TAG_ 583
#define TEMPLATE_ 584
#define TEXT_ 585
#define THREADS_ 586
#define TIFF_ 587
#define THREED_ 588
#define THRESHOLD_ 589
#define THICK_ 590
#define TOP_ 591
#define TRANSPARENCY_ 592
#define TRIANGLE_ 593
#define TO_ 594
#define TOGGLE_ 595
#define TOPHAT_ 596
#define TRUE_ 597
#define TYPE_ 598
#define UNDO_ 599
#define UNHIGHLITE_ 600
#define UNLOAD_ 601
#define UNSELECT_ 602
#define UPDATE_ 603
#define UP_ 604
#define USER_ 605
#define VALUE_ 606
#define VAR_ 607
#define VIEW_ 608
#define VECTOR_ 609
#define VERSION_ 610
#define VERTEX_ 611
#define VERTICAL_ 612
#define WARP_ 613
#define WCS_ 614
#define WCSA_ 615
#define WCSB_ 616
#define WCSC_ 617
#define WCSD_ 618
#define WCSE_ 619
#define WCSF_ 620
#define WCSG_ 621
#define WCSH_ 622
#define WCSI_ 623
#define WCSJ_ 624
#define WCSK_ 625
#define WCSL_ 626
#define WCSM_ 627
#define WCSN_ 628
#define WCSO_ 629
#define WCSP_ 630
#define WCSQ_ 631
#define WCSR_ 632
#define WCSS_ 633
#define WCST_ 634
#define WCSU_ 635
#define WCSV_ 636
#define WCSW_ 637
#define WCSX_ 638
#define WCSY_ 639
#define WCSZ_ 640
#define WCS0_ 641
#define WFPC2_ 642
#define WIDTH_ 643
#define WIN32_ 644
#define XISF_ 645
#define XML_ 646
#define XY_ 647
#define YES_ 648
#define ZERO_ 649
#define ZMAX_ 650
#define ZSCALE_ 651
#define PIXMASK_ 652
#define ZOOM_ 653
#define FIELDS_ 654




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
#line 955 "frame/parser.C"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 968 "frame/parser.C"

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
#define YYFINAL  415
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5873

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  404
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  251
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1495
/* YYNRULES -- Number of states.  */
#define YYNSTATES  3252

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   654

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
       2,   403,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   401,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   402,   400,
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
     395,   396,   397,   398,   399
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
    1992,  1995,  1998,  2001,  2004,  2007,  2010,  2013,  2016,  2020,
    2023,  2026,  2031,  2036,  2041,  2045,  2049,  2055,  2060,  2065,
    2070,  2074,  2078,  2082,  2086,  2090,  2094,  2097,  2100,  2105,
    2109,  2113,  2117,  2121,  2126,  2131,  2136,  2141,  2147,  2152,
    2159,  2167,  2172,  2177,  2183,  2186,  2190,  2194,  2198,  2202,
    2206,  2210,  2214,  2217,  2221,  2225,  2229,  2233,  2238,  2242,
    2248,  2255,  2259,  2263,  2268,  2272,  2276,  2280,  2284,  2288,
    2294,  2298,  2302,  2307,  2311,  2314,  2317,  2319,  2323,  2328,
    2333,  2338,  2343,  2348,  2355,  2360,  2365,  2371,  2376,  2381,
    2386,  2391,  2397,  2402,  2409,  2417,  2422,  2427,  2433,  2439,
    2445,  2451,  2457,  2463,  2471,  2477,  2483,  2490,  2495,  2500,
    2505,  2510,  2515,  2522,  2527,  2532,  2538,  2544,  2550,  2556,
    2562,  2569,  2575,  2583,  2592,  2598,  2604,  2611,  2615,  2619,
    2623,  2627,  2632,  2636,  2642,  2649,  2653,  2657,  2662,  2666,
    2670,  2674,  2678,  2682,  2688,  2692,  2696,  2701,  2706,  2711,
    2715,  2721,  2726,  2731,  2736,  2741,  2744,  2748,  2751,  2756,
    2762,  2769,  2776,  2778,  2780,  2782,  2785,  2788,  2791,  2795,
    2799,  2802,  2815,  2818,  2821,  2823,  2827,  2832,  2835,  2836,
    2840,  2842,  2845,  2848,  2851,  2854,  2857,  2862,  2867,  2872,
    2877,  2881,  2885,  2890,  2896,  2905,  2912,  2922,  2929,  2937,
    2948,  2960,  2973,  2983,  2989,  2996,  3000,  3006,  3012,  3018,
    3025,  3031,  3036,  3041,  3046,  3056,  3067,  3079,  3089,  3096,
    3103,  3110,  3117,  3124,  3131,  3138,  3145,  3152,  3160,  3168,
    3171,  3176,  3181,  3186,  3191,  3197,  3202,  3207,  3213,  3219,
    3223,  3228,  3233,  3238,  3246,  3256,  3263,  3274,  3286,  3299,
    3309,  3313,  3316,  3320,  3326,  3332,  3340,  3345,  3349,  3353,
    3360,  3368,  3377,  3385,  3393,  3398,  3403,  3408,  3418,  3423,
    3427,  3432,  3440,  3448,  3451,  3455,  3459,  3463,  3468,  3471,
    3474,  3479,  3484,  3495,  3499,  3504,  3506,  3510,  3513,  3516,
    3519,  3522,  3526,  3532,  3537,  3543,  3546,  3549,  3552,  3555,
    3559,  3562,  3565,  3568,  3572,  3575,  3579,  3584,  3588,  3592,
    3599,  3604,  3607,  3611,  3614,  3617,  3622,  3626,  3630,  3633,
    3637,  3639,  3642,  3644,  3647,  3650,  3653,  3657,  3659,  3661,
    3663,  3665,  3668,  3670,  3673,  3676,  3678,  3681,  3684,  3686,
    3689,  3691,  3693,  3695,  3697,  3699,  3701,  3703,  3705,  3706,
    3708,  3711,  3714,  3717,  3721,  3727,  3735,  3743,  3750,  3756,
    3762,  3769,  3776,  3783,  3789,  3796,  3803,  3810,  3817,  3824,
    3831,  3838,  3845,  3853,  3865,  3873,  3881,  3889,  3899,  3909,
    3920,  3933,  3946,  3950,  3953,  3954,  3956,  3960,  3965,  3970,
    3975,  3976,  3978,  3980,  3985,  3990,  3992,  3994,  3996,  3998,
    4000,  4002,  4004,  4006,  4009,  4011,  4013,  4015,  4019,  4023,
    4032,  4039,  4050,  4058,  4066,  4072,  4079,  4086,  4090,  4093,
    4096,  4100,  4105,  4111,  4117,  4123,  4127,  4132,  4138,  4144,
    4150,  4156,  4159,  4163,  4167,  4171,  4177,  4181,  4185,  4189,
    4193,  4197,  4202,  4208,  4214,  4220,  4226,  4230,  4235,  4241,
    4247,  4250,  4253,  4257,  4261,  4267,  4274,  4281,  4285,  4289,
    4293,  4300,  4307,  4313,  4319,  4322,  4326,  4330,  4336,  4343,
    4347,  4350,  4353,  4357,  4360,  4364,  4367,  4371,  4375,  4381,
    4388,  4391,  4394,  4397,  4400,  4402,  4407,  4412,  4414,  4417,
    4420,  4423,  4426,  4429,  4432,  4435,  4439,  4442,  4446,  4449,
    4453,  4455,  4457,  4459,  4461,  4463,  4465,  4466,  4469,  4470,
    4473,  4474,  4476,  4477,  4478,  4480,  4482,  4484,  4486,  4488,
    4496,  4505,  4508,  4515,  4518,  4525,  4528,  4532,  4535,  4537,
    4539,  4543,  4547,  4549,  4554,  4557,  4559,  4563,  4567,  4572,
    4576,  4580,  4584,  4586,  4588,  4590,  4592,  4594,  4596,  4598,
    4600,  4602,  4604,  4606,  4608,  4610,  4612,  4614,  4617,  4618,
    4619,  4622,  4629,  4637,  4640,  4642,  4646,  4648,  4652,  4654,
    4656,  4658,  4661,  4664,  4666,  4670,  4671,  4672,  4675,  4678,
    4680,  4684,  4690,  4691,  4693,  4695,  4698,  4701,  4705,  4708,
    4712,  4715,  4719,  4722,  4726,  4728,  4731,  4733,  4736,  4738,
    4741,  4743,  4746,  4748,  4751,  4753,  4756,  4758,  4761,  4763,
    4766,  4769,  4773,  4776,  4779,  4782,  4785,  4787,  4789,  4791,
    4793,  4798,  4801,  4805,  4809,  4812,  4816,  4819,  4822,  4825,
    4829,  4833,  4837,  4840,  4844,  4846,  4850,  4854,  4856,  4859,
    4862,  4865,  4868,  4878,  4885,  4887,  4889,  4891,  4893,  4896,
    4899,  4903,  4907,  4909,  4912,  4916,  4920,  4922,  4925,  4927,
    4929,  4931,  4933,  4935,  4937,  4939,  4941,  4944,  4947,  4952,
    4955,  4958,  4961,  4964,  4967,  4972,  4975,  4978,  4981,  4984,
    4987,  4992,  4994,  4997,  5000,  5003,  5007,  5009,  5011,  5013,
    5016,  5019,  5022,  5025,  5028,  5031,  5034,  5037,  5040,  5044,
    5048,  5052,  5056,  5060,  5064,  5066,  5069,  5072,  5075,  5079,
    5082,  5086,  5090,  5094,  5098,  5102,  5106,  5109,  5112,  5115,
    5118,  5121,  5124,  5127,  5130,  5133,  5136,  5139,  5142,  5145,
    5148,  5152,  5156,  5160,  5163,  5166,  5169,  5173,  5177,  5181,
    5184,  5187,  5190,  5193,  5196,  5199,  5203,  5207,  5211,  5214,
    5217,  5220,  5223,  5226,  5229,  5233,  5237,  5241,  5244,  5247,
    5250,  5253,  5256,  5259,  5262,  5265,  5268,  5272,  5276,  5280,
    5285,  5292,  5295,  5297,  5299,  5301,  5303,  5305,  5306,  5312,
    5314,  5321,  5325,  5328,  5333,  5335,  5338,  5341,  5344,  5348,
    5352,  5355,  5358,  5361,  5364,  5367,  5370,  5374,  5377,  5380,
    5384,  5386,  5390,  5395,  5398,  5400,  5403,  5409,  5416,  5423,
    5426,  5428,  5431,  5434,  5440,  5447
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     405,     0,    -1,   105,   407,    -1,    47,   442,    -1,    44,
      72,     5,    -1,    44,    72,   408,    -1,    50,   447,    -1,
      64,    -1,    70,    -1,    71,   449,    -1,    75,   328,     5,
      -1,    76,   454,    -1,    77,   456,    -1,    85,   458,    -1,
      92,   469,    -1,    94,   471,    -1,    95,   472,    -1,   104,
     408,    -1,   130,   474,    -1,   140,   475,    -1,   153,   476,
      -1,   159,   527,    -1,   163,   530,    -1,   167,    -1,   168,
     408,    -1,   168,    72,     5,    -1,   173,   618,    -1,   174,
     617,    -1,   177,   536,    -1,   183,    15,     4,    -1,   200,
     539,    -1,   204,   560,    -1,   205,   561,    -1,   206,   562,
      -1,   209,   579,   563,    -1,   210,   600,    -1,   189,   599,
      -1,   222,   616,    -1,   226,    72,     5,    -1,   248,   601,
      -1,   250,   602,    -1,   251,   605,    -1,   272,    96,    -1,
     265,   607,    -1,   263,   606,    -1,   280,    -1,   276,   579,
     609,    -1,   282,   614,    -1,   283,   615,    -1,   285,   619,
      -1,   290,   621,    -1,   306,    -1,   312,   643,    -1,   331,
       4,    -1,   333,   435,    -1,   346,    -1,   348,   645,    -1,
     355,    -1,   358,   647,    -1,   359,   648,    -1,   389,   652,
      -1,   398,   653,    -1,     3,    -1,     4,    -1,   408,    -1,
     219,   408,    -1,   252,   408,    -1,   254,   408,    -1,   359,
     408,    -1,    47,   408,    -1,    50,   408,    -1,    84,   408,
      -1,    92,   408,    -1,   160,   408,    -1,   283,   408,    -1,
       4,    -1,   393,    -1,   400,    -1,   241,    -1,   342,    -1,
     231,    -1,   401,    -1,   240,    -1,   132,    -1,    -1,   284,
      41,    -1,   149,    41,    -1,   284,    -1,   149,    -1,    -1,
     411,    -1,   406,    -1,     6,    -1,     7,    -1,     8,    -1,
       9,    -1,    10,    -1,   412,   412,    -1,   413,   414,    -1,
     414,   414,    -1,   406,   406,    -1,   178,    -1,   256,    -1,
     110,    -1,    19,    -1,   417,    -1,   359,    -1,   360,    -1,
     361,    -1,   362,    -1,   363,    -1,   364,    -1,   365,    -1,
     366,    -1,   367,    -1,   368,    -1,   369,    -1,   370,    -1,
     371,    -1,   372,    -1,   373,    -1,   374,    -1,   375,    -1,
     376,    -1,   377,    -1,   378,    -1,   379,    -1,   380,    -1,
     381,    -1,   382,    -1,   383,    -1,   384,    -1,   385,    -1,
     386,    -1,    61,    -1,   251,    -1,    -1,   394,    -1,   235,
      -1,   226,    -1,   234,    -1,   275,    -1,    -1,   316,    -1,
     223,    -1,   296,    -1,   249,    -1,    99,    -1,   194,    -1,
      74,    -1,    73,    -1,   162,    -1,   313,    -1,   112,    -1,
     128,    -1,   172,    -1,   291,    -1,    72,    -1,   203,    -1,
     198,    -1,   202,    -1,   264,    -1,   317,    -1,   318,    -1,
      30,    -1,   308,    -1,   169,    -1,   154,    -1,    32,    -1,
     293,    -1,   287,    -1,   103,    -1,   184,    -1,    -1,   142,
      -1,    37,    -1,   143,    -1,   185,    -1,   175,    -1,   151,
      -1,   117,    -1,    -1,   106,    -1,   300,    -1,    -1,   106,
      -1,    24,    -1,    25,    -1,    -1,   305,    -1,   186,    -1,
      -1,    16,    -1,   180,    -1,    -1,   178,    -1,   210,    -1,
       4,    -1,   232,    -1,    27,    -1,   243,    -1,    67,    -1,
      68,    -1,   245,    -1,    53,    -1,   244,    -1,   338,    -1,
     246,    -1,    40,    -1,    -1,    68,    -1,    53,    -1,   111,
      -1,    93,    -1,   402,    -1,    27,    -1,    56,    -1,   156,
      -1,    -1,     4,    -1,    90,    -1,   170,    -1,   258,    -1,
     259,    -1,   273,    -1,   320,    -1,    -1,    34,    -1,   324,
      -1,   211,    -1,    -1,   227,    -1,    45,    -1,    46,    -1,
     195,    -1,   196,    -1,   353,   441,    -1,    51,   438,    -1,
      82,   439,    -1,   168,   440,    -1,   213,   612,    -1,    39,
     613,    -1,   302,   436,    -1,   292,   406,    -1,   325,     4,
      -1,   334,   406,    -1,   408,    -1,    18,   406,    -1,   322,
     406,    -1,   233,   437,    -1,   408,    -1,   322,   406,    -1,
     408,    -1,    72,     5,    -1,   408,    -1,    72,     5,    -1,
     408,    -1,    72,     5,    -1,   406,   406,    -1,   260,   406,
     406,   406,   406,   406,    -1,    11,   443,    -1,    79,     5,
       5,     5,    -1,   109,     4,    -1,   131,   444,    -1,   150,
     445,    -1,    58,   309,     4,    -1,   339,   446,    -1,   135,
       5,    -1,    64,    -1,   406,   406,    -1,   406,    -1,   406,
     406,    -1,   406,    11,   406,   406,    -1,   406,   406,    11,
     406,   406,    -1,   339,   406,    -1,   339,   406,   406,    -1,
     339,   406,    11,   406,   406,    -1,   339,   406,   406,    11,
     406,   406,    -1,    34,    -1,   324,    -1,   138,    -1,   406,
     406,    11,    64,     5,     5,     5,    -1,   406,   406,     4,
     406,   406,    11,    64,     5,     5,     5,     5,    -1,   406,
     406,    11,   406,   406,     5,     5,     5,    -1,   406,   406,
       4,   406,   406,    11,   406,   406,     5,     5,     5,     5,
      -1,   406,    -1,   406,   406,    -1,   339,   448,    -1,   226,
     394,   408,    -1,   138,    -1,   406,    -1,   406,   406,    -1,
     295,   450,    -1,   220,   451,    -1,   214,   452,    -1,   350,
     406,   406,    -1,   350,   226,   226,    -1,   396,   453,    -1,
     267,   408,    -1,   155,    -1,   201,    -1,   406,    -1,   214,
      -1,   396,    -1,   395,    -1,   350,    -1,     4,   422,    -1,
     220,   422,    -1,   287,     4,    -1,   279,    -1,   406,     4,
       4,    -1,    86,   406,    -1,   287,     4,    -1,   197,     4,
      -1,     4,   406,   406,     4,     4,    -1,   283,   406,   406,
     406,   406,   406,   406,     4,     4,    -1,   173,   406,   406,
     406,   406,   406,   406,     4,     4,    -1,   174,   406,   406,
     406,   406,   406,   406,     4,     4,    -1,   222,     4,     4,
       5,     5,     5,     4,    -1,    43,    -1,   221,   455,    -1,
     122,    -1,     4,   406,   406,     4,     4,    -1,   283,   406,
     406,   406,   406,   406,   406,     4,     4,    -1,   173,   406,
     406,   406,   406,   406,   406,     4,     4,    -1,   174,   406,
     406,   406,   406,   406,   406,     4,     4,    -1,   222,     4,
       4,     5,     5,     5,     4,    -1,   421,    -1,   202,   406,
      -1,   154,   406,   406,   457,   457,   457,    -1,   406,    -1,
      32,    -1,    91,   460,    -1,   101,     4,     4,    -1,   108,
     461,    -1,   200,   462,    -1,   253,   466,    -1,   290,   467,
      -1,   323,   468,    -1,    33,   459,    -1,   225,     4,     5,
      -1,   280,     4,    -1,   280,     4,     4,    -1,   323,     4,
       4,     5,     4,     4,     4,     4,    -1,   323,     4,    16,
       5,     4,     4,     4,     4,    -1,     5,     4,     4,   465,
       4,     4,   421,   406,   463,   464,   406,   406,     5,    -1,
       5,     4,     4,   465,     4,     4,   421,   406,   406,   464,
     406,   406,     5,    -1,     5,     4,     4,   465,     4,     4,
     421,   406,   463,   406,   406,     5,    -1,     5,     4,     4,
     465,     4,     4,   421,   406,   406,   406,   406,     5,    -1,
     262,    -1,    -1,    33,    -1,    33,     4,    -1,     5,    -1,
       5,     5,     4,   408,    -1,     5,     4,   408,     5,   416,
     423,    -1,   214,    -1,   396,    -1,   395,    -1,   350,    -1,
     155,    -1,   201,    -1,   312,    -1,    50,    -1,     5,    -1,
       5,     5,     4,   408,    -1,     5,     5,     4,   408,     4,
       4,    -1,     5,   416,   423,    -1,    33,     5,   416,   423,
      -1,    33,     4,     5,   416,   423,    -1,    70,    -1,     4,
      70,    -1,     4,     5,     4,     4,    -1,     4,     5,     4,
       4,     4,     4,    -1,    -1,   406,   406,   406,   406,   416,
     423,    -1,    64,   415,   416,   423,   406,   406,   416,   425,
      -1,   333,   470,    -1,    43,   406,   406,    -1,   221,   406,
     406,    -1,   122,   406,   406,    -1,    -1,   406,   406,   416,
     423,    -1,    43,   406,   406,     4,    -1,   221,   406,   406,
       4,    -1,   122,   406,   406,     4,    -1,   418,   406,   406,
      -1,   416,   423,   415,    -1,   408,    -1,   358,   406,   406,
      -1,    43,   221,   418,   406,   406,    -1,   221,   418,   406,
     406,    -1,    43,   221,   416,   415,    -1,   221,   416,   415,
      -1,    35,     4,    -1,    -1,    34,    -1,   324,    -1,   211,
      -1,   406,    -1,    70,    -1,   163,   129,     5,    -1,   181,
       5,    -1,    -1,    44,    72,    -1,    47,   479,    -1,    50,
     481,    -1,    71,   482,    -1,    76,   486,    -1,    75,   485,
      -1,    77,   488,    -1,    85,   490,    -1,    87,   493,    -1,
      92,   494,    -1,    94,   495,    -1,    96,   497,    -1,    95,
     496,    -1,   102,   498,    -1,   104,    -1,   139,   502,    -1,
     159,   508,    -1,   168,    72,    -1,   170,     5,     5,     4,
      -1,   171,    97,   477,    -1,   173,   516,    -1,   174,   515,
      -1,   177,   500,    -1,   181,   499,    -1,   183,    15,    -1,
     214,    -1,   209,   579,   573,    -1,   210,   510,    -1,   189,
     509,    -1,   222,   514,    -1,   226,    72,    -1,   248,    -1,
     250,   512,    -1,   257,   327,   418,   406,   406,     4,     4,
       5,    -1,   283,   513,    -1,   285,    -1,   312,   517,    -1,
     331,    -1,   333,   518,    -1,   343,    -1,   351,   418,   406,
     406,    -1,   357,    97,   478,    -1,   359,   525,    -1,   398,
      -1,     5,     5,   406,   406,   418,     4,   473,    -1,     5,
       5,   406,   406,   416,   423,     4,   473,    -1,     5,     5,
     406,   406,   418,     4,   473,    -1,     5,     5,   406,   406,
     416,   423,     4,   473,    -1,   109,    -1,   131,    -1,   150,
      -1,    58,   309,    -1,    96,    -1,   135,    -1,    79,   480,
      -1,   199,    -1,    -1,   214,     5,    -1,   113,     5,    -1,
     131,    -1,   226,   394,    -1,    -1,   463,   464,    -1,   406,
     464,    -1,   295,    -1,   220,    -1,   214,   483,    -1,   350,
     193,    -1,   396,   484,    -1,   267,    -1,   220,    -1,   287,
      -1,    86,    -1,   287,    -1,   197,    -1,    -1,   328,    -1,
     193,   487,    -1,     4,    -1,     4,   418,   406,   406,    -1,
       4,   406,   406,   421,   406,    -1,    -1,   193,   489,    -1,
     202,    -1,   154,    -1,     4,   406,   406,   421,   406,    -1,
     416,   423,    -1,    33,    89,    -1,    71,   491,    -1,    72,
      -1,   100,    -1,   101,    -1,   193,    -1,   238,   193,    -1,
     213,    -1,    77,   492,    -1,   312,    -1,   323,    -1,   323,
       4,    -1,    33,    -1,    33,   323,     4,    -1,   388,    -1,
      -1,   220,    -1,   295,    -1,    -1,   202,    -1,   406,   406,
     416,   423,   424,    -1,   418,   406,   406,   416,   423,   424,
      -1,   416,   423,   424,    -1,    64,   416,   423,   424,   416,
     425,    -1,   333,   416,   423,    -1,   418,    -1,   416,   423,
     424,    -1,   321,    -1,    35,    -1,   418,    -1,   416,   423,
     424,    -1,   416,   423,   415,   406,   406,     5,    -1,     4,
     416,   423,   415,   406,   406,     5,    -1,   418,   406,   406,
       4,     4,    -1,     5,   409,    -1,    71,    -1,   418,   406,
     406,     5,   409,    -1,     4,     4,     4,     4,    -1,    96,
      -1,   133,   225,   501,    -1,    -1,     4,    -1,   406,   406,
      -1,   228,    -1,    64,   416,   423,   424,    -1,    89,    -1,
     109,   505,    -1,    48,    -1,   129,   503,    -1,   133,   225,
     506,    -1,   165,   504,    -1,   166,    -1,   239,   225,    -1,
     309,    -1,   309,   416,   423,   425,    -1,   310,   507,    -1,
     388,    -1,     4,    -1,   418,   406,   406,    -1,     4,    -1,
     187,     5,    -1,     4,   187,     5,    -1,   359,     4,    -1,
      -1,     4,    -1,   409,    -1,   409,   418,   406,   406,    -1,
     409,     4,    -1,    -1,     4,    -1,   147,   178,   416,    -1,
     147,   178,     4,   416,    -1,   339,   178,   406,   416,    -1,
      -1,   247,    -1,   352,    -1,    89,    -1,   190,    -1,    72,
     511,    -1,    49,   511,    -1,   337,   511,    -1,   353,   511,
      -1,    72,    -1,   208,    -1,   275,    -1,   326,    -1,   337,
      -1,    89,    -1,    49,    -1,    -1,     4,    -1,   267,    -1,
      66,    -1,   326,    -1,   353,    -1,   326,    -1,    66,    -1,
     326,    -1,   353,    -1,    66,    -1,   326,    -1,   353,    -1,
     150,    -1,   274,    -1,   274,   215,    -1,   307,    -1,   307,
     215,    -1,    21,    -1,   353,   524,    -1,    51,   521,    -1,
      82,   522,    -1,   168,   523,    -1,   213,    -1,    39,    -1,
     302,   519,    -1,   292,    -1,    -1,    18,    -1,   322,    -1,
     233,   520,    -1,    -1,   322,    -1,    -1,    72,    -1,    -1,
      72,    -1,    -1,    72,    -1,    -1,   260,    -1,    -1,    15,
     526,    -1,   225,   417,    -1,    -1,   261,    -1,    91,   528,
      -1,   108,    -1,   416,   423,   424,   529,     5,     5,    -1,
     416,   423,   424,   529,     5,    -1,    20,    -1,   270,    -1,
      19,    -1,    44,    72,    -1,    47,   531,    -1,    85,   532,
      -1,    92,    -1,   103,    -1,   104,    -1,   110,    -1,   139,
     533,    -1,   159,    -1,   177,    -1,   184,    -1,   209,   534,
      -1,   256,    -1,   178,    -1,   312,    -1,   326,   416,    -1,
     359,   535,    -1,    80,     5,    -1,    -1,    33,    -1,    -1,
      47,    -1,    95,    -1,   219,    -1,   168,    -1,   298,    -1,
     253,    -1,   344,    -1,   416,    -1,    63,   416,    -1,   126,
     416,    -1,   198,   416,    -1,    17,    -1,   333,   416,    -1,
     229,     4,     4,    -1,   127,    -1,   212,     5,    -1,    96,
     538,    -1,   299,   133,   225,   537,    -1,   299,     4,     4,
       4,     4,    -1,   348,    -1,   359,   406,   406,   406,   406,
     406,   406,   406,   406,     4,    -1,     5,    -1,     5,     4,
      -1,     4,     4,    61,    -1,     4,     4,   416,    -1,   220,
     408,    -1,    26,   540,    -1,    29,   555,    -1,   123,   542,
      -1,   139,   543,    -1,   180,   559,    -1,   237,   554,    -1,
     255,   557,    -1,     5,     5,    -1,     5,     5,     4,    -1,
     332,   558,    -1,   390,   556,    -1,     5,    13,     5,   428,
      -1,     5,    14,     5,   428,    -1,     5,    66,     5,   428,
      -1,     5,   217,   428,    -1,     5,   218,   428,    -1,     5,
     303,   426,     4,   428,    -1,     5,   314,     4,   428,    -1,
       5,   315,     4,   428,    -1,     5,   352,     5,   428,    -1,
     283,    95,   541,    -1,   174,    95,   541,    -1,   173,    95,
     541,    -1,     5,    13,     5,    -1,     5,    14,     5,    -1,
       5,    66,     5,    -1,     5,   217,    -1,     5,   218,    -1,
       5,   303,   426,     4,    -1,     5,   314,     4,    -1,     5,
     315,     4,    -1,     5,   352,     5,    -1,     5,     5,   311,
      -1,     5,    13,     5,   428,    -1,     5,    14,     5,   428,
      -1,     5,    66,     5,   428,    -1,     5,   217,   427,   428,
      -1,     5,     5,   311,   427,   428,    -1,     5,   218,   427,
     428,    -1,     5,   303,   426,     4,   427,   428,    -1,     5,
     319,   426,     4,     4,   427,   428,    -1,     5,   314,     4,
     428,    -1,     5,   315,     4,   428,    -1,     5,   352,     5,
     427,   428,    -1,   310,   544,    -1,   129,    95,   545,    -1,
     283,   178,   553,    -1,   283,    95,   552,    -1,   174,   178,
     553,    -1,   174,    95,   552,    -1,   173,   178,   553,    -1,
     173,    95,   552,    -1,   219,   546,    -1,     5,    13,     5,
      -1,     5,    14,     5,    -1,     5,    66,     5,    -1,     5,
     217,   427,    -1,     5,     5,   311,   427,    -1,     5,   218,
     427,    -1,     5,   303,   426,     4,   427,    -1,     5,   319,
     426,     4,     4,   427,    -1,     5,   314,     4,    -1,     5,
     315,     4,    -1,     5,   352,     5,   427,    -1,     5,    13,
       5,    -1,     5,    14,     5,    -1,     5,    66,     5,    -1,
       5,   217,   427,    -1,     5,   218,   427,    -1,     5,   303,
     426,     4,   427,    -1,     5,   314,     4,    -1,     5,   315,
       4,    -1,     5,   352,     5,   427,    -1,   178,   183,   547,
      -1,   183,   548,    -1,   178,   549,    -1,   551,    -1,   178,
     387,   550,    -1,     5,    13,     5,   428,    -1,     5,    14,
       5,   428,    -1,     5,    66,     5,   428,    -1,     5,   217,
     427,   428,    -1,     5,   218,   427,   428,    -1,     5,   303,
     426,     4,   427,   428,    -1,     5,   314,     4,   428,    -1,
       5,   315,     4,   428,    -1,     5,   352,     5,   427,   428,
      -1,     5,    13,     5,   428,    -1,     5,    14,     5,   428,
      -1,     5,    66,     5,   428,    -1,     5,   217,   427,   428,
      -1,     5,     5,   311,   427,   428,    -1,     5,   218,   427,
     428,    -1,     5,   303,   426,     4,   427,   428,    -1,     5,
     319,   426,     4,     4,   427,   428,    -1,     5,   314,     4,
     428,    -1,     5,   315,     4,   428,    -1,     5,   352,     5,
     427,   428,    -1,   417,     5,    13,     5,   428,    -1,   417,
       5,    14,     5,   428,    -1,   417,     5,    66,     5,   428,
      -1,   417,     5,   217,   427,   428,    -1,   417,     5,   218,
     427,   428,    -1,   417,     5,   303,   426,     4,   427,   428,
      -1,   417,     5,   314,     4,   428,    -1,   417,     5,   315,
       4,   428,    -1,   417,     5,   352,     5,   427,   428,    -1,
       5,    13,     5,   428,    -1,     5,    14,     5,   428,    -1,
       5,    66,     5,   428,    -1,     5,   217,   427,   428,    -1,
       5,   218,   427,   428,    -1,     5,   303,   426,     4,   427,
     428,    -1,     5,   314,     4,   428,    -1,     5,   315,     4,
     428,    -1,     5,   352,     5,   427,   428,    -1,   417,     5,
      13,     5,   428,    -1,   417,     5,    14,     5,   428,    -1,
     417,     5,    66,     5,   428,    -1,   417,     5,   217,   427,
     428,    -1,   417,     5,     5,   311,   427,   428,    -1,   417,
       5,   218,   427,   428,    -1,   417,     5,   303,   426,     4,
     427,   428,    -1,   417,     5,   319,   426,     4,     4,   427,
     428,    -1,   417,     5,   314,     4,   428,    -1,   417,     5,
     315,     4,   428,    -1,   417,     5,   352,     5,   427,   428,
      -1,     5,    13,     5,    -1,     5,    14,     5,    -1,     5,
      66,     5,    -1,     5,   217,   427,    -1,     5,     5,   311,
     427,    -1,     5,   218,   427,    -1,     5,   303,   426,     4,
     427,    -1,     5,   319,   426,     4,     4,   427,    -1,     5,
     314,     4,    -1,     5,   315,     4,    -1,     5,   352,     5,
     427,    -1,     5,    13,     5,    -1,     5,    14,     5,    -1,
       5,    66,     5,    -1,     5,   217,   427,    -1,     5,   218,
     427,    -1,     5,   303,   426,     4,   427,    -1,     5,   314,
       4,    -1,     5,   315,     4,    -1,     5,   352,     5,   427,
      -1,     5,    13,     5,   428,    -1,     5,    66,     5,   428,
      -1,     5,   217,   428,    -1,     5,   303,   426,     4,   428,
      -1,     5,   314,     4,   428,    -1,     5,   352,     5,   428,
      -1,     5,     5,     5,   428,    -1,     5,     5,     5,   428,
      -1,     5,     5,    -1,   310,     5,     5,    -1,     5,   428,
      -1,     5,    13,     5,   428,    -1,   310,     5,    13,     5,
     428,    -1,   102,     4,     4,     4,     4,     4,    -1,   214,
       4,     4,     4,     4,     4,    -1,   122,    -1,   266,    -1,
     408,    -1,   157,   408,    -1,    96,   408,    -1,    72,     5,
      -1,     5,     4,     4,    -1,   348,   406,   406,    -1,   398,
     406,    -1,     5,     5,   417,   423,     5,     5,   417,   423,
     406,   417,   425,     5,    -1,    65,   566,    -1,    72,     5,
      -1,    88,    -1,    81,   572,     5,    -1,    81,   572,   352,
       5,    -1,    83,   108,    -1,    -1,    91,   564,   567,    -1,
      97,    -1,   108,   570,    -1,   116,   571,    -1,   125,     4,
      -1,   144,     5,    -1,   168,    16,    -1,   168,   242,   406,
     406,    -1,   168,   340,   406,   406,    -1,     4,    20,   432,
     408,    -1,    20,   320,    60,     5,    -1,    20,   320,    60,
      -1,     4,    21,   411,    -1,     4,    21,   411,   418,    -1,
       4,    21,   411,   416,   423,    -1,     4,    22,   274,   406,
     406,     4,   416,   425,    -1,     4,    22,   274,     5,   416,
     425,    -1,     4,    54,   274,   406,   406,   406,     4,   416,
     425,    -1,     4,    54,   274,     5,   416,   425,    -1,     4,
      53,   274,   406,   406,   416,   425,    -1,     4,    57,   116,
     411,   411,     4,   406,   406,   406,     4,    -1,     4,    57,
     116,   411,   411,     4,   406,   406,   406,     4,   418,    -1,
       4,    57,   116,   411,   411,     4,   406,   406,   406,     4,
     416,   423,    -1,     4,    57,   116,     5,     5,   416,   423,
     416,   425,    -1,     4,    60,   565,     5,     5,    -1,     4,
      68,   274,   406,   416,   425,    -1,     4,    72,     5,    -1,
       4,    82,    27,   408,   408,    -1,     4,    82,   122,   429,
     429,    -1,     4,    82,   188,     5,     5,    -1,     4,    82,
     274,   406,   416,   425,    -1,     4,    82,   326,   416,   423,
      -1,     4,    83,   155,   408,    -1,     4,    83,    28,   408,
      -1,     4,    83,   343,     5,    -1,     4,    90,   116,   411,
     411,     4,   406,   406,     4,    -1,     4,    90,   116,   411,
     411,     4,   406,   406,     4,   418,    -1,     4,    90,   116,
     411,   411,     4,   406,   406,     4,   416,   423,    -1,     4,
      90,   116,     5,     5,   416,   423,   416,   425,    -1,     4,
      91,    22,   274,   406,   406,    -1,     4,    91,    54,   274,
     406,   406,    -1,     4,    91,    57,    21,   406,   406,    -1,
       4,    91,    57,   274,   406,   406,    -1,     4,    91,   121,
     274,   406,   406,    -1,     4,    91,   124,    21,   406,   406,
      -1,     4,    91,   124,   274,   406,   406,    -1,     4,    91,
      90,    21,   406,   406,    -1,     4,    91,    90,   274,   406,
     406,    -1,     4,    91,   262,   356,     4,   406,   406,    -1,
       4,    91,   297,   356,     4,   406,   406,    -1,     4,   108,
      -1,     4,   108,    22,     4,    -1,     4,   108,    54,     4,
      -1,     4,   108,    57,     4,    -1,     4,   108,   121,     4,
      -1,     4,   108,    60,   565,     5,    -1,     4,   108,   124,
       4,    -1,     4,   108,    90,     4,    -1,     4,   108,   262,
     356,     4,    -1,     4,   108,   297,   356,     4,    -1,     4,
     108,   328,    -1,     4,   108,   328,     5,    -1,     4,   108,
     328,     4,    -1,     4,   116,    43,     4,    -1,     4,   120,
     274,   406,   406,   416,   425,    -1,     4,   121,   274,   406,
     406,   406,     4,   416,   425,    -1,     4,   121,   274,     5,
     416,   425,    -1,     4,   124,   116,   411,   411,     4,   406,
     406,   406,     4,    -1,     4,   124,   116,   411,   411,     4,
     406,   406,   406,     4,   418,    -1,     4,   124,   116,   411,
     411,     4,   406,   406,   406,     4,   416,   423,    -1,     4,
     124,   116,     5,     5,   416,   423,   416,   425,    -1,     4,
     144,     5,    -1,     4,   168,    -1,     4,   168,   242,    -1,
       4,   197,    27,   408,   408,    -1,     4,   197,   122,   429,
     429,    -1,     4,   197,   260,   416,   423,   415,   415,    -1,
       4,   224,   406,   406,    -1,     4,   224,   148,    -1,     4,
     224,    38,    -1,     4,   224,   339,   416,   423,   415,    -1,
       4,   262,   260,   416,   423,   424,     5,    -1,     4,   262,
     260,   416,   423,   424,   352,     5,    -1,     4,   262,   280,
     406,   406,   416,   425,    -1,     4,   297,   280,   406,   406,
     416,   425,    -1,     4,   260,   301,   430,    -1,     4,   260,
     309,     4,    -1,     4,   260,   156,     5,    -1,     4,   268,
     416,   423,   415,   415,   406,   416,   425,    -1,     4,   269,
     585,   408,    -1,     4,   285,    43,    -1,     4,   286,   145,
       5,    -1,     4,   286,   260,   416,   423,   415,   415,    -1,
       4,   286,   326,   416,   423,   416,   425,    -1,     4,   298,
      -1,     4,   298,   242,    -1,     4,   328,     5,    -1,     4,
     330,     5,    -1,     4,   330,   285,   408,    -1,     4,   345,
      -1,     4,   347,    -1,     4,   354,    27,   408,    -1,     4,
     354,   122,   429,    -1,     4,   354,   260,   416,   423,   415,
     416,   425,   406,   411,    -1,     4,   388,     4,    -1,     4,
     101,     4,     4,    -1,   186,    -1,   186,   406,   406,    -1,
     199,   580,    -1,   200,   581,    -1,   224,   582,    -1,   267,
     408,    -1,   269,   585,   408,    -1,   269,   585,   408,   406,
     406,    -1,   285,    43,   406,   406,    -1,   285,   221,   406,
     406,     4,    -1,   285,   122,    -1,   290,   589,    -1,   298,
     590,    -1,   306,   591,    -1,     5,    72,     5,    -1,     5,
      88,    -1,     5,   108,    -1,     5,    97,    -1,     5,   144,
       5,    -1,     5,   168,    -1,     5,   168,   242,    -1,     5,
     224,   406,   406,    -1,     5,   224,   148,    -1,     5,   224,
      38,    -1,     5,   224,   339,   416,   423,   415,    -1,     5,
     269,   585,   408,    -1,     5,   298,    -1,     5,   298,   242,
      -1,     5,   345,    -1,     5,   347,    -1,   328,   116,     5,
       5,    -1,   328,   108,     5,    -1,   328,   108,    16,    -1,
     328,     5,    -1,   328,   348,     5,    -1,   253,    -1,   253,
     416,    -1,   344,    -1,   345,    16,    -1,   347,    16,    -1,
     388,     4,    -1,   101,     4,     4,    -1,   298,    -1,   347,
      -1,   168,    -1,   345,    -1,    43,   224,    -1,   224,    -1,
     122,   224,    -1,    43,   116,    -1,   116,    -1,   122,   116,
      -1,    43,   285,    -1,   285,    -1,   122,   285,    -1,   108,
      -1,   330,    -1,    72,    -1,   388,    -1,   269,    -1,   144,
      -1,   186,    -1,   348,    -1,    -1,     4,    -1,    32,   408,
      -1,   274,   406,    -1,   182,     4,    -1,   247,     4,   406,
      -1,    68,   406,   406,   406,   586,    -1,   120,   406,   406,
     406,   406,   410,   586,    -1,    53,   406,   406,   406,   406,
     410,   586,    -1,   262,   406,   406,   406,   406,   586,    -1,
     262,    61,   352,     5,   586,    -1,   297,    61,   352,     5,
     586,    -1,   297,   406,   406,   406,   406,   586,    -1,   197,
     406,   406,   406,   406,   586,    -1,   354,   406,   406,   406,
     406,   586,    -1,   330,   406,   406,   410,   586,    -1,    68,
     260,   406,   406,   431,   586,    -1,    53,   260,   406,   406,
     431,   586,    -1,   111,   260,   406,   406,   431,   586,    -1,
      93,   260,   406,   406,   431,   586,    -1,   402,   260,   406,
     406,   431,   586,    -1,    27,   260,   406,   406,   431,   586,
      -1,    56,   260,   406,   406,   431,   586,    -1,   156,   260,
     406,   406,     5,   586,    -1,   156,   260,   406,   406,     4,
       5,   586,    -1,   286,   406,   406,   406,   406,   416,   423,
     416,   425,     5,   586,    -1,    82,   406,   406,   406,   416,
     423,   586,    -1,   268,   406,   406,   406,   406,   406,   586,
      -1,    22,   406,   406,   406,   406,     4,   586,    -1,   121,
     406,   406,   406,   406,   406,     4,   410,   586,    -1,    54,
     406,   406,   406,   406,   406,     4,   410,   586,    -1,    90,
     406,   406,   411,   411,     4,   406,   406,     4,   586,    -1,
     124,   406,   406,   411,   411,     4,   406,   406,   406,     4,
     410,   586,    -1,    57,   406,   406,   411,   411,     4,   406,
     406,   406,     4,   410,   586,    -1,    83,   568,   586,    -1,
     329,   569,    -1,    -1,     4,    -1,     5,   406,   406,    -1,
     352,     5,   406,   406,    -1,   406,   406,   352,     5,    -1,
       5,   416,   423,   415,    -1,    -1,   298,    -1,    16,    -1,
      43,   406,   406,     4,    -1,   221,   406,   406,     4,    -1,
     122,    -1,   115,    -1,   391,    -1,    69,    -1,   289,    -1,
     288,    -1,   271,    -1,   392,    -1,    65,   574,    -1,    72,
      -1,   144,    -1,   125,    -1,   161,   406,   406,    -1,   176,
     406,   406,    -1,     4,    20,    90,     5,     5,     5,   416,
       4,    -1,     4,    20,   170,     5,     5,     4,    -1,     4,
      20,   258,     5,     5,     5,     5,   416,   423,   433,    -1,
       4,    20,   259,     5,     5,   416,   433,    -1,     4,    20,
     273,     5,     5,     5,   416,    -1,     4,    20,   320,   416,
     423,    -1,     4,    20,   320,   102,   416,   423,    -1,    20,
     320,    16,   102,   416,   423,    -1,    20,   320,   399,    -1,
     176,    16,    -1,     4,    21,    -1,     4,    21,   418,    -1,
       4,    21,   416,   423,    -1,     4,    22,   274,   416,   425,
      -1,     4,    54,   274,   416,   425,    -1,     4,    53,   274,
     416,   425,    -1,     4,    57,    21,    -1,     4,    57,    21,
     418,    -1,     4,    57,    21,   416,   423,    -1,     4,    57,
     274,   416,   425,    -1,     4,    64,   416,   423,   424,    -1,
       4,    68,   274,   416,   425,    -1,     4,    72,    -1,     4,
      82,    27,    -1,     4,    82,   122,    -1,     4,    82,   188,
      -1,     4,    82,   274,   416,   425,    -1,     4,    82,   326,
      -1,     4,    83,   155,    -1,     4,    83,    28,    -1,     4,
      83,   343,    -1,     4,    90,    21,    -1,     4,    90,    21,
     418,    -1,     4,    90,    21,   416,   423,    -1,     4,    90,
     274,   416,   425,    -1,     4,   120,   274,   416,   425,    -1,
       4,   121,   274,   416,   425,    -1,     4,   124,    21,    -1,
       4,   124,    21,   418,    -1,     4,   124,    21,   416,   423,
      -1,     4,   124,   274,   416,   425,    -1,     4,   144,    -1,
       4,   168,    -1,     4,   197,    27,    -1,     4,   197,   122,
      -1,     4,   197,   192,   416,   425,    -1,     4,   197,   260,
     416,   423,   424,    -1,     4,   207,   192,   406,   416,   425,
      -1,     4,   260,   301,    -1,     4,   260,   309,    -1,     4,
     260,   156,    -1,     4,   262,   260,   416,   423,   424,    -1,
       4,   268,   260,   416,   423,   424,    -1,     4,   268,   192,
     416,   425,    -1,     4,   268,   335,   416,   425,    -1,     4,
     269,    -1,     4,   269,   585,    -1,     4,   286,   145,    -1,
       4,   286,   192,   416,   425,    -1,     4,   286,   260,   416,
     423,   424,    -1,     4,   286,   326,    -1,     4,   298,    -1,
       4,   328,    -1,     4,   328,     4,    -1,     4,   330,    -1,
       4,   330,   285,    -1,     4,   343,    -1,     4,   354,    27,
      -1,     4,   354,   122,    -1,     4,   354,   192,   416,   425,
      -1,     4,   354,   260,   416,   423,   424,    -1,     4,   388,
      -1,     4,   101,    -1,   168,   575,    -1,   168,   238,    -1,
     238,    -1,   262,   297,   406,   406,    -1,   297,   297,   406,
     406,    -1,   267,    -1,   269,   585,    -1,   298,   576,    -1,
     298,   238,    -1,   306,   577,    -1,     5,    72,    -1,     5,
     144,    -1,     5,   176,    -1,     5,   269,   585,    -1,     5,
     328,    -1,     5,   328,   238,    -1,   328,    16,    -1,   328,
     107,   225,    -1,   388,    -1,   101,    -1,    32,    -1,   274,
      -1,   182,    -1,   247,    -1,    -1,   406,   406,    -1,    -1,
     406,   406,    -1,    -1,   330,    -1,    -1,    -1,   261,    -1,
     276,    -1,   350,    -1,    62,    -1,   146,    -1,   572,   416,
     423,   424,   408,   587,   594,    -1,   298,   572,   416,   423,
     424,   408,   587,   594,    -1,   572,     5,    -1,   572,     5,
       4,     5,   416,   423,    -1,   572,     4,    -1,   572,     4,
       4,     5,   416,   423,    -1,   139,     5,    -1,   139,     5,
       5,    -1,   406,   406,    -1,   148,    -1,    38,    -1,    43,
     406,   406,    -1,   221,   406,   406,    -1,   122,    -1,   339,
     416,   423,   415,    -1,   583,   584,    -1,   584,    -1,   585,
     403,   408,    -1,    72,   403,     5,    -1,   101,   403,     4,
       4,    -1,   388,   403,     4,    -1,   144,   403,     5,    -1,
     330,   403,     5,    -1,   597,    -1,   598,    -1,   232,    -1,
     298,    -1,   168,    -1,   100,    -1,   141,    -1,   116,    -1,
     224,    -1,   285,    -1,   108,    -1,   179,    -1,   316,    -1,
     134,    -1,   578,    -1,   578,   583,    -1,    -1,    -1,   588,
     592,    -1,     5,   572,   416,   423,   424,   408,    -1,   298,
       5,   572,   416,   423,   424,   408,    -1,   329,     5,    -1,
      16,    -1,   242,   406,   406,    -1,   340,    -1,   340,   406,
     406,    -1,   136,    -1,   191,    -1,   408,    -1,   330,   408,
      -1,   592,   593,    -1,   593,    -1,   585,   403,   408,    -1,
      -1,    -1,   595,   596,    -1,   596,   597,    -1,   597,    -1,
     328,   403,     5,    -1,    60,   403,   565,     5,     5,    -1,
      -1,    91,    -1,     4,    -1,   190,     4,    -1,    72,     5,
      -1,     4,    72,     5,    -1,    49,   420,    -1,     4,    49,
     420,    -1,   337,   406,    -1,     4,   337,   406,    -1,   353,
     408,    -1,     4,   353,   408,    -1,   306,    -1,     4,   306,
      -1,   167,    -1,     4,   167,    -1,   108,    -1,     4,   108,
      -1,   349,    -1,     4,   349,    -1,   114,    -1,     4,   114,
      -1,   336,    -1,     4,   336,    -1,    52,    -1,     4,    52,
      -1,    70,    -1,    72,     5,    -1,   208,   419,    -1,   275,
     406,   406,    -1,   326,   416,    -1,   337,   406,    -1,    49,
     420,    -1,   208,     4,    -1,   402,    -1,   400,    -1,   392,
      -1,   232,    -1,   406,   406,   406,   406,    -1,   406,   406,
      -1,   418,   406,   406,    -1,   416,   423,   415,    -1,   339,
     603,    -1,    42,   406,   406,    -1,   221,   604,    -1,   267,
     408,    -1,   406,   406,    -1,   418,   406,   406,    -1,   416,
     423,   415,    -1,    43,   406,   406,    -1,   406,   406,    -1,
     122,   406,   406,    -1,   408,    -1,   359,   417,   423,    -1,
       5,     4,     4,    -1,   348,    -1,    78,   608,    -1,   193,
       4,    -1,   281,     4,    -1,   292,   406,    -1,     4,     4,
       4,     4,     4,     4,     4,     4,     4,    -1,     4,     4,
       4,     4,     4,     4,    -1,    59,    -1,   158,    -1,   283,
      -1,    98,    -1,   168,   610,    -1,   298,   611,    -1,    43,
     406,   406,    -1,   221,   406,   406,    -1,   122,    -1,   304,
     122,    -1,    43,   406,   406,    -1,   221,   406,   406,    -1,
     122,    -1,   304,   122,    -1,   216,    -1,    12,    -1,   137,
      -1,   232,    -1,    36,    -1,   118,    -1,     4,    -1,    70,
      -1,    66,     5,    -1,   326,   416,    -1,   353,     4,     4,
       4,    -1,   326,   416,    -1,    66,     5,    -1,    66,   172,
      -1,    66,   291,    -1,   326,   416,    -1,   353,     4,     4,
       4,    -1,    66,     5,    -1,    66,   172,    -1,    66,   291,
      -1,    66,   351,    -1,   326,   416,    -1,   353,     4,     4,
       4,    -1,   406,    -1,   406,   106,    -1,   221,   620,    -1,
     339,   406,    -1,   339,   406,   106,    -1,    43,    -1,   406,
      -1,   122,    -1,    26,   623,    -1,   139,   624,    -1,   397,
     622,    -1,   237,   641,    -1,   123,   642,    -1,   255,     5,
      -1,   133,     5,    -1,    66,     5,    -1,   314,     4,    -1,
     133,     5,   434,    -1,    66,     5,   434,    -1,   314,     4,
     434,    -1,   283,    95,   631,    -1,   174,    95,   634,    -1,
     173,    95,   637,    -1,   625,    -1,   178,   625,    -1,   327,
     626,    -1,   310,   627,    -1,   129,    95,   628,    -1,   219,
     629,    -1,   283,   178,   632,    -1,   283,    95,   633,    -1,
     174,   178,   635,    -1,   174,    95,   636,    -1,   173,   178,
     638,    -1,   173,    95,   639,    -1,   278,   640,    -1,   133,
       5,    -1,    66,     5,    -1,   314,     4,    -1,   133,     5,
      -1,    66,     5,    -1,   314,     4,    -1,   133,     5,    -1,
      66,     5,    -1,   314,     4,    -1,   133,     5,    -1,    66,
       5,    -1,   314,     4,    -1,   178,   630,    -1,   133,     5,
       4,    -1,    66,     5,     4,    -1,   314,     4,     4,    -1,
     133,     5,    -1,    66,     5,    -1,   314,     4,    -1,   133,
       5,   434,    -1,    66,     5,   434,    -1,   314,     4,   434,
      -1,   133,     5,    -1,    66,     5,    -1,   314,     4,    -1,
     133,     5,    -1,    66,     5,    -1,   314,     4,    -1,   133,
       5,   434,    -1,    66,     5,   434,    -1,   314,     4,   434,
      -1,   133,     5,    -1,    66,     5,    -1,   314,     4,    -1,
     133,     5,    -1,    66,     5,    -1,   314,     4,    -1,   133,
       5,   434,    -1,    66,     5,   434,    -1,   314,     4,   434,
      -1,   133,     5,    -1,    66,     5,    -1,   314,     4,    -1,
     133,     5,    -1,    66,     5,    -1,   314,     4,    -1,   133,
       5,    -1,    66,     5,    -1,   314,     4,    -1,   133,     5,
     434,    -1,    66,     5,   434,    -1,   314,     4,   434,    -1,
     133,     5,     5,   434,    -1,   644,     4,     4,   406,   406,
     411,    -1,   644,     4,    -1,   108,    -1,    55,    -1,   341,
      -1,   152,    -1,   119,    -1,    -1,     4,   406,   406,   406,
     406,    -1,   236,    -1,   236,     4,   406,   406,   406,   406,
      -1,   139,   310,   646,    -1,   139,    64,    -1,   139,    64,
     406,   406,    -1,     4,    -1,     4,     4,    -1,   406,   416,
      -1,   406,   406,    -1,   339,   406,   406,    -1,   417,   423,
     424,    -1,    15,   651,    -1,   280,     4,    -1,   277,   650,
      -1,    23,   649,    -1,     4,     4,    -1,     4,     5,    -1,
     330,     4,     5,    -1,     4,     4,    -1,     4,     5,    -1,
     330,     4,     5,    -1,     4,    -1,     4,   417,   423,    -1,
     339,     4,   417,   423,    -1,   261,    70,    -1,   266,    -1,
     406,   406,    -1,   406,   406,    11,   406,   406,    -1,   406,
     406,    11,   418,   406,   406,    -1,   406,   406,    11,   416,
     423,   415,    -1,   339,   654,    -1,   138,    -1,   138,   406,
      -1,   406,   406,    -1,   406,   406,    11,   406,   406,    -1,
     406,   406,    11,   418,   406,   406,    -1,   406,   406,    11,
     416,   423,   415,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   512,   512,   513,   514,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,   529,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   541,   542,   543,   544,   545,   546,   547,   548,   549,
     550,   551,   552,   553,   554,   555,   556,   557,   558,   559,
     560,   561,   562,   563,   564,   565,   566,   567,   568,   569,
     570,   571,   574,   575,   578,   579,   580,   581,   582,   583,
     584,   585,   586,   587,   588,   591,   593,   594,   595,   596,
     598,   599,   600,   601,   604,   605,   606,   607,   608,   611,
     612,   615,   616,   617,   620,   623,   626,   629,   641,   648,
     655,   663,   664,   665,   666,   667,   670,   671,   672,   673,
     674,   675,   676,   677,   678,   679,   680,   681,   682,   683,
     684,   685,   686,   687,   688,   689,   690,   691,   692,   693,
     694,   695,   696,   697,   700,   701,   704,   705,   706,   707,
     708,   709,   712,   713,   714,   715,   716,   717,   718,   719,
     720,   721,   722,   723,   724,   725,   726,   727,   728,   731,
     732,   733,   734,   735,   736,   737,   738,   739,   742,   743,
     744,   745,   746,   749,   750,   751,   752,   753,   754,   755,
     756,   759,   760,   761,   764,   765,   766,   767,   770,   771,
     772,   775,   776,   777,   780,   781,   782,   786,   787,   788,
     789,   790,   791,   792,   793,   794,   795,   796,   797,   800,
     801,   802,   803,   804,   805,   806,   807,   808,   811,   812,
     815,   816,   817,   818,   819,   820,   823,   824,   825,   826,
     829,   830,   831,   832,   833,   834,   837,   838,   839,   840,
     841,   842,   843,   844,   845,   846,   850,   851,   852,   853,
     856,   857,   860,   861,   864,   865,   868,   869,   872,   873,
     877,   878,   879,   880,   881,   882,   883,   884,   887,   888,
     891,   892,   893,   895,   897,   898,   899,   901,   905,   906,
     909,   910,   912,   915,   917,   923,   924,   925,   926,   929,
     930,   931,   934,   935,   936,   937,   938,   939,   940,   946,
     947,   950,   951,   952,   953,   954,   957,   958,   959,   960,
     963,   964,   969,   974,   981,   983,   985,   987,   989,   991,
     992,   993,   996,   998,  1000,  1002,  1004,  1007,  1008,  1009,
    1013,  1014,  1017,  1018,  1019,  1020,  1021,  1022,  1023,  1024,
    1027,  1028,  1029,  1030,  1032,  1036,  1039,  1042,  1048,  1054,
    1057,  1058,  1059,  1062,  1063,  1064,  1071,  1072,  1073,  1074,
    1077,  1078,  1081,  1082,  1085,  1086,  1087,  1091,  1093,  1095,
    1099,  1100,  1101,  1102,  1105,  1106,  1109,  1111,  1112,  1113,
    1114,  1117,  1118,  1120,  1121,  1122,  1125,  1127,  1129,  1130,
    1132,  1134,  1136,  1138,  1142,  1145,  1146,  1147,  1148,  1151,
    1152,  1155,  1156,  1159,  1160,  1161,  1162,  1163,  1164,  1165,
    1166,  1167,  1168,  1169,  1170,  1171,  1172,  1173,  1174,  1175,
    1176,  1177,  1178,  1179,  1180,  1181,  1182,  1183,  1184,  1185,
    1186,  1187,  1188,  1189,  1190,  1191,  1192,  1193,  1195,  1196,
    1197,  1198,  1199,  1200,  1201,  1203,  1204,  1205,  1208,  1210,
    1214,  1216,  1220,  1221,  1222,  1223,  1224,  1225,  1226,  1227,
    1230,  1231,  1232,  1235,  1236,  1239,  1240,  1242,  1244,  1245,
    1246,  1247,  1248,  1249,  1256,  1257,  1260,  1261,  1262,  1265,
    1266,  1269,  1272,  1273,  1275,  1279,  1280,  1281,  1282,  1285,
    1289,  1291,  1292,  1293,  1294,  1295,  1296,  1297,  1298,  1299,
    1300,  1301,  1302,  1303,  1304,  1305,  1308,  1309,  1310,  1313,
    1314,  1317,  1319,  1327,  1329,  1331,  1335,  1336,  1338,  1341,
    1344,  1345,  1349,  1351,  1354,  1359,  1360,  1361,  1365,  1366,
    1367,  1370,  1371,  1372,  1375,  1376,  1378,  1379,  1380,  1381,
    1382,  1383,  1384,  1385,  1386,  1387,  1389,  1390,  1393,  1394,
    1397,  1398,  1399,  1400,  1403,  1404,  1407,  1409,  1412,  1416,
    1417,  1418,  1420,  1422,  1426,  1427,  1428,  1431,  1432,  1433,
    1434,  1435,  1436,  1439,  1440,  1441,  1442,  1443,  1444,  1445,
    1448,  1449,  1452,  1455,  1456,  1457,  1460,  1463,  1464,  1465,
    1468,  1469,  1470,  1473,  1474,  1475,  1476,  1477,  1478,  1481,
    1482,  1483,  1484,  1485,  1486,  1487,  1488,  1491,  1492,  1493,
    1494,  1497,  1498,  1501,  1502,  1505,  1506,  1509,  1510,  1513,
    1514,  1517,  1518,  1519,  1522,  1523,  1526,  1527,  1530,  1533,
    1541,  1542,  1545,  1546,  1547,  1548,  1549,  1550,  1551,  1552,
    1553,  1554,  1555,  1556,  1557,  1558,  1559,  1560,  1561,  1562,
    1565,  1568,  1569,  1572,  1573,  1574,  1575,  1578,  1579,  1580,
    1581,  1584,  1585,  1586,  1587,  1588,  1589,  1592,  1593,  1594,
    1595,  1596,  1597,  1599,  1600,  1605,  1606,  1609,  1611,  1613,
    1616,  1617,  1618,  1619,  1620,  1621,  1622,  1625,  1637,  1646,
    1647,  1650,  1652,  1654,  1656,  1657,  1659,  1661,  1663,  1665,
    1667,  1668,  1669,  1672,  1673,  1674,  1675,  1676,  1677,  1679,
    1680,  1681,  1684,  1687,  1689,  1691,  1693,  1695,  1697,  1699,
    1701,  1704,  1706,  1708,  1710,  1711,  1712,  1713,  1714,  1715,
    1716,  1717,  1718,  1721,  1722,  1723,  1724,  1725,  1726,  1727,
    1729,  1731,  1732,  1733,  1736,  1737,  1738,  1739,  1740,  1741,
    1743,  1744,  1745,  1748,  1749,  1750,  1751,  1752,  1755,  1758,
    1761,  1764,  1767,  1770,  1773,  1776,  1779,  1784,  1787,  1790,
    1793,  1796,  1799,  1802,  1805,  1808,  1811,  1814,  1819,  1822,
    1825,  1828,  1831,  1834,  1837,  1840,  1843,  1848,  1850,  1852,
    1854,  1856,  1858,  1863,  1865,  1867,  1871,  1874,  1877,  1880,
    1883,  1886,  1889,  1892,  1895,  1898,  1901,  1906,  1907,  1908,
    1909,  1910,  1911,  1912,  1914,  1916,  1917,  1918,  1921,  1922,
    1923,  1924,  1925,  1926,  1928,  1929,  1930,  1933,  1935,  1937,
    1938,  1940,  1942,  1949,  1956,  1960,  1961,  1967,  1968,  1970,
    1974,  1975,  1976,  1979,  1982,  1983,  1984,  1985,  1986,  1987,
    1988,  1991,  1999,  2000,  2001,  2002,  2004,  2006,  2007,  2007,
    2008,  2009,  2010,  2011,  2012,  2014,  2015,  2017,  2020,  2022,
    2024,  2027,  2028,  2029,  2032,  2035,  2038,  2042,  2045,  2048,
    2051,  2055,  2060,  2065,  2067,  2069,  2070,  2072,  2074,  2076,
    2078,  2080,  2081,  2082,  2084,  2086,  2088,  2092,  2097,  2099,
    2101,  2103,  2105,  2107,  2109,  2111,  2113,  2115,  2117,  2120,
    2121,  2123,  2125,  2126,  2128,  2130,  2131,  2132,  2134,  2136,
    2137,  2138,  2140,  2141,  2144,  2148,  2151,  2154,  2158,  2163,
    2169,  2170,  2171,  2173,  2174,  2175,  2179,  2181,  2182,  2183,
    2186,  2189,  2192,  2195,  2198,  2200,  2201,  2203,  2208,  2211,
    2212,  2213,  2216,  2220,  2221,  2223,  2224,  2225,  2227,  2228,
    2230,  2231,  2232,  2237,  2238,  2240,  2241,  2243,  2244,  2245,
    2246,  2247,  2248,  2250,  2252,  2254,  2255,  2256,  2258,  2260,
    2261,  2262,  2263,  2264,  2265,  2266,  2267,  2268,  2269,  2270,
    2272,  2274,  2275,  2276,  2277,  2279,  2280,  2281,  2282,  2283,
    2285,  2286,  2287,  2288,  2289,  2290,  2291,  2294,  2295,  2296,
    2297,  2298,  2299,  2300,  2301,  2302,  2303,  2304,  2305,  2306,
    2307,  2308,  2309,  2310,  2311,  2312,  2313,  2314,  2317,  2318,
    2319,  2320,  2321,  2322,  2330,  2337,  2346,  2355,  2362,  2367,
    2372,  2379,  2387,  2395,  2402,  2407,  2412,  2417,  2422,  2427,
    2432,  2437,  2442,  2448,  2458,  2468,  2478,  2485,  2495,  2505,
    2514,  2526,  2539,  2545,  2548,  2549,  2558,  2560,  2562,  2567,
    2571,  2572,  2573,  2579,  2581,  2583,  2586,  2587,  2588,  2589,
    2590,  2591,  2592,  2595,  2596,  2597,  2598,  2599,  2600,  2602,
    2604,  2606,  2608,  2610,  2612,  2614,  2616,  2618,  2621,  2622,
    2623,  2624,  2626,  2629,  2631,  2633,  2634,  2635,  2637,  2640,
    2643,  2645,  2646,  2647,  2648,  2649,  2651,  2652,  2653,  2654,
    2655,  2656,  2657,  2659,  2661,  2663,  2666,  2667,  2668,  2670,
    2673,  2674,  2675,  2676,  2677,  2679,  2682,  2686,  2687,  2688,
    2689,  2692,  2695,  2698,  2700,  2701,  2702,  2703,  2705,  2708,
    2709,  2711,  2712,  2713,  2714,  2715,  2717,  2718,  2719,  2721,
    2724,  2725,  2726,  2727,  2728,  2729,  2731,  2733,  2734,  2735,
    2736,  2738,  2740,  2741,  2742,  2743,  2744,  2745,  2747,  2748,
    2750,  2751,  2754,  2755,  2756,  2757,  2760,  2761,  2764,  2765,
    2768,  2769,  2772,  2785,  2786,  2790,  2791,  2795,  2796,  2799,
    2803,  2809,  2811,  2814,  2816,  2819,  2821,  2825,  2826,  2827,
    2828,  2829,  2830,  2831,  2835,  2836,  2839,  2840,  2841,  2842,
    2843,  2844,  2845,  2846,  2849,  2850,  2851,  2852,  2853,  2854,
    2855,  2856,  2857,  2858,  2859,  2860,  2863,  2864,  2867,  2868,
    2868,  2871,  2873,  2875,  2878,  2879,  2880,  2881,  2882,  2883,
    2886,  2887,  2890,  2891,  2894,  2898,  2899,  2899,  2902,  2903,
    2906,  2909,  2913,  2914,  2915,  2916,  2917,  2918,  2919,  2920,
    2921,  2922,  2923,  2924,  2926,  2927,  2928,  2929,  2930,  2931,
    2932,  2933,  2934,  2935,  2936,  2937,  2938,  2939,  2942,  2943,
    2944,  2945,  2946,  2947,  2948,  2949,  2955,  2956,  2957,  2958,
    2961,  2963,  2964,  2969,  2971,  2972,  2973,  2974,  2977,  2978,
    2983,  2987,  2988,  2989,  2992,  2993,  2998,  2999,  3002,  3004,
    3005,  3006,  3011,  3013,  3019,  3020,  3021,  3022,  3025,  3026,
    3029,  3031,  3033,  3034,  3037,  3039,  3040,  3041,  3044,  3045,
    3046,  3049,  3050,  3051,  3054,  3055,  3058,  3059,  3060,  3063,
    3067,  3068,  3069,  3070,  3071,  3074,  3075,  3076,  3077,  3078,
    3079,  3082,  3083,  3084,  3085,  3086,  3089,  3090,  3091,  3094,
    3095,  3096,  3097,  3098,  3099,  3102,  3103,  3104,  3107,  3109,
    3111,  3113,  3114,  3115,  3118,  3119,  3120,  3121,  3122,  3123,
    3124,  3125,  3126,  3127,  3128,  3129,  3130,  3133,  3134,  3135,
    3138,  3139,  3140,  3143,  3144,  3145,  3148,  3149,  3150,  3153,
    3154,  3155,  3156,  3159,  3160,  3161,  3164,  3166,  3168,  3172,
    3173,  3174,  3177,  3178,  3179,  3182,  3184,  3186,  3190,  3191,
    3192,  3195,  3196,  3197,  3200,  3202,  3204,  3208,  3209,  3210,
    3213,  3214,  3215,  3218,  3219,  3220,  3223,  3225,  3227,  3231,
    3235,  3237,  3242,  3245,  3246,  3247,  3248,  3251,  3252,  3255,
    3257,  3259,  3260,  3261,  3265,  3266,  3267,  3270,  3271,  3274,
    3276,  3277,  3278,  3279,  3282,  3283,  3284,  3287,  3288,  3289,
    3292,  3293,  3298,  3300,  3303,  3310,  3311,  3313,  3318,  3320,
    3323,  3324,  3325,  3326,  3328,  3333
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
  "ARRAY_", "ARROW_", "AREA_", "ASDF_", "ASINH_", "AST_", "AUTO_", "AUX_",
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
  "WCSZ_", "WCS0_", "WFPC2_", "WIDTH_", "WIN32_", "XISF_", "XML_", "XY_",
  "YES_", "ZERO_", "ZMAX_", "ZSCALE_", "PIXMASK_", "ZOOM_", "FIELDS_",
  "'Y'", "'N'", "'X'", "'='", "$accept", "command", "numeric", "debug",
  "yesno", "fileNameType", "optangle", "angle", "sexagesimal", "hms",
  "dms", "coord", "coordSystem", "wcsSystem", "internalSystem", "maskType",
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
  "loadFitsRGBImage", "loadNRRD", "loadAsdf", "loadXisf", "loadPhoto",
  "loadTiff", "loadIncr", "macosx", "magnifier", "match", "marker", "@1",
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
     645,   646,   647,   648,   649,   650,   651,   652,   653,   654,
      89,    78,    88,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   404,   405,   405,   405,   405,   405,   405,   405,   405,
     405,   405,   405,   405,   405,   405,   405,   405,   405,   405,
     405,   405,   405,   405,   405,   405,   405,   405,   405,   405,
     405,   405,   405,   405,   405,   405,   405,   405,   405,   405,
     405,   405,   405,   405,   405,   405,   405,   405,   405,   405,
     405,   405,   405,   405,   405,   405,   405,   405,   405,   405,
     405,   405,   406,   406,   407,   407,   407,   407,   407,   407,
     407,   407,   407,   407,   407,   408,   408,   408,   408,   408,
     408,   408,   408,   408,   409,   409,   409,   409,   409,   410,
     410,   411,   411,   411,   412,   413,   414,   415,   415,   415,
     415,   416,   416,   416,   416,   416,   417,   417,   417,   417,
     417,   417,   417,   417,   417,   417,   417,   417,   417,   417,
     417,   417,   417,   417,   417,   417,   417,   417,   417,   417,
     417,   417,   417,   417,   418,   418,   419,   419,   419,   419,
     419,   419,   420,   420,   420,   420,   420,   420,   420,   420,
     420,   420,   420,   420,   420,   420,   420,   420,   420,   421,
     421,   421,   421,   421,   421,   421,   421,   421,   422,   422,
     422,   422,   422,   423,   423,   423,   423,   423,   423,   423,
     423,   424,   424,   424,   425,   425,   425,   425,   426,   426,
     426,   427,   427,   427,   428,   428,   428,   429,   429,   429,
     429,   429,   429,   429,   429,   429,   429,   429,   429,   430,
     430,   430,   430,   430,   430,   430,   430,   430,   431,   431,
     432,   432,   432,   432,   432,   432,   433,   433,   433,   433,
     434,   434,   434,   434,   434,   434,   435,   435,   435,   435,
     435,   435,   435,   435,   435,   435,   436,   436,   436,   436,
     437,   437,   438,   438,   439,   439,   440,   440,   441,   441,
     442,   442,   442,   442,   442,   442,   442,   442,   443,   443,
     444,   444,   444,   444,   444,   444,   444,   444,   445,   445,
     446,   446,   446,   446,   446,   447,   447,   447,   447,   448,
     448,   448,   449,   449,   449,   449,   449,   449,   449,   450,
     450,   451,   451,   451,   451,   451,   452,   452,   452,   452,
     453,   453,   453,   453,   454,   454,   454,   454,   454,   454,
     454,   454,   455,   455,   455,   455,   455,   456,   456,   456,
     457,   457,   458,   458,   458,   458,   458,   458,   458,   458,
     459,   459,   459,   459,   459,   460,   460,   460,   460,   460,
     461,   461,   461,   462,   462,   462,   463,   463,   463,   463,
     464,   464,   465,   465,   466,   466,   466,   467,   467,   467,
     468,   468,   468,   468,   469,   469,   469,   469,   469,   469,
     469,   470,   470,   470,   470,   470,   471,   471,   471,   471,
     471,   471,   471,   471,   472,   473,   473,   473,   473,   474,
     474,   475,   475,   476,   476,   476,   476,   476,   476,   476,
     476,   476,   476,   476,   476,   476,   476,   476,   476,   476,
     476,   476,   476,   476,   476,   476,   476,   476,   476,   476,
     476,   476,   476,   476,   476,   476,   476,   476,   476,   476,
     476,   476,   476,   476,   476,   476,   476,   476,   477,   477,
     478,   478,   479,   479,   479,   479,   479,   479,   479,   479,
     480,   480,   480,   481,   481,   482,   482,   482,   482,   482,
     482,   482,   482,   482,   483,   483,   484,   484,   484,   485,
     485,   486,   487,   487,   487,   488,   488,   488,   488,   489,
     490,   490,   490,   490,   490,   490,   490,   490,   490,   490,
     490,   490,   490,   490,   490,   490,   491,   491,   491,   492,
     492,   493,   493,   494,   494,   494,   495,   495,   495,   496,
     497,   497,   498,   498,   498,   499,   499,   499,   500,   500,
     500,   501,   501,   501,   502,   502,   502,   502,   502,   502,
     502,   502,   502,   502,   502,   502,   502,   502,   503,   503,
     504,   504,   504,   504,   505,   505,   506,   506,   506,   507,
     507,   507,   507,   507,   508,   508,   508,   509,   509,   509,
     509,   509,   509,   510,   510,   510,   510,   510,   510,   510,
     511,   511,   512,   513,   513,   513,   514,   515,   515,   515,
     516,   516,   516,   517,   517,   517,   517,   517,   517,   518,
     518,   518,   518,   518,   518,   518,   518,   519,   519,   519,
     519,   520,   520,   521,   521,   522,   522,   523,   523,   524,
     524,   525,   525,   525,   526,   526,   527,   527,   528,   528,
     529,   529,   530,   530,   530,   530,   530,   530,   530,   530,
     530,   530,   530,   530,   530,   530,   530,   530,   530,   530,
     531,   532,   532,   533,   533,   533,   533,   534,   534,   534,
     534,   535,   535,   535,   535,   535,   535,   536,   536,   536,
     536,   536,   536,   536,   536,   537,   537,   538,   538,   538,
     539,   539,   539,   539,   539,   539,   539,   539,   539,   539,
     539,   540,   540,   540,   540,   540,   540,   540,   540,   540,
     540,   540,   540,   541,   541,   541,   541,   541,   541,   541,
     541,   541,   542,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   544,   544,   544,   544,   544,   544,   544,
     544,   544,   544,   544,   545,   545,   545,   545,   545,   545,
     545,   545,   545,   546,   546,   546,   546,   546,   547,   547,
     547,   547,   547,   547,   547,   547,   547,   548,   548,   548,
     548,   548,   548,   548,   548,   548,   548,   548,   549,   549,
     549,   549,   549,   549,   549,   549,   549,   550,   550,   550,
     550,   550,   550,   550,   550,   550,   551,   551,   551,   551,
     551,   551,   551,   551,   551,   551,   551,   552,   552,   552,
     552,   552,   552,   552,   552,   552,   552,   552,   553,   553,
     553,   553,   553,   553,   553,   553,   553,   554,   554,   554,
     554,   554,   554,   555,   556,   557,   557,   558,   558,   558,
     559,   559,   559,   560,   561,   561,   561,   561,   561,   561,
     561,   562,   563,   563,   563,   563,   563,   563,   564,   563,
     563,   563,   563,   563,   563,   563,   563,   563,   563,   563,
     563,   563,   563,   563,   563,   563,   563,   563,   563,   563,
     563,   563,   563,   563,   563,   563,   563,   563,   563,   563,
     563,   563,   563,   563,   563,   563,   563,   563,   563,   563,
     563,   563,   563,   563,   563,   563,   563,   563,   563,   563,
     563,   563,   563,   563,   563,   563,   563,   563,   563,   563,
     563,   563,   563,   563,   563,   563,   563,   563,   563,   563,
     563,   563,   563,   563,   563,   563,   563,   563,   563,   563,
     563,   563,   563,   563,   563,   563,   563,   563,   563,   563,
     563,   563,   563,   563,   563,   563,   563,   563,   563,   563,
     563,   563,   563,   563,   563,   563,   563,   563,   563,   563,
     563,   563,   563,   563,   563,   563,   563,   563,   563,   563,
     563,   563,   563,   563,   563,   563,   563,   563,   563,   563,
     563,   563,   563,   563,   563,   563,   563,   563,   563,   563,
     563,   563,   563,   563,   563,   563,   563,   565,   565,   565,
     565,   565,   565,   565,   565,   565,   565,   565,   565,   565,
     565,   565,   565,   565,   565,   565,   565,   565,   566,   566,
     566,   566,   566,   566,   567,   567,   567,   567,   567,   567,
     567,   567,   567,   567,   567,   567,   567,   567,   567,   567,
     567,   567,   567,   567,   567,   567,   567,   567,   567,   567,
     567,   567,   567,   567,   568,   568,   569,   569,   569,   569,
     570,   570,   570,   571,   571,   571,   572,   572,   572,   572,
     572,   572,   572,   573,   573,   573,   573,   573,   573,   573,
     573,   573,   573,   573,   573,   573,   573,   573,   573,   573,
     573,   573,   573,   573,   573,   573,   573,   573,   573,   573,
     573,   573,   573,   573,   573,   573,   573,   573,   573,   573,
     573,   573,   573,   573,   573,   573,   573,   573,   573,   573,
     573,   573,   573,   573,   573,   573,   573,   573,   573,   573,
     573,   573,   573,   573,   573,   573,   573,   573,   573,   573,
     573,   573,   573,   573,   573,   573,   573,   573,   573,   573,
     573,   573,   573,   573,   573,   573,   573,   573,   573,   573,
     573,   573,   573,   573,   573,   573,   573,   573,   573,   573,
     573,   573,   574,   574,   574,   574,   575,   575,   576,   576,
     577,   577,   578,   579,   579,   579,   579,   579,   579,   580,
     580,   581,   581,   581,   581,   581,   581,   582,   582,   582,
     582,   582,   582,   582,   583,   583,   584,   584,   584,   584,
     584,   584,   584,   584,   585,   585,   585,   585,   585,   585,
     585,   585,   585,   585,   585,   585,   586,   586,   587,   588,
     587,   589,   589,   589,   590,   590,   590,   590,   590,   590,
     591,   591,   592,   592,   593,   594,   595,   594,   596,   596,
     597,   598,   599,   599,   599,   599,   599,   599,   599,   599,
     599,   599,   599,   599,   599,   599,   599,   599,   599,   599,
     599,   599,   599,   599,   599,   599,   599,   599,   600,   600,
     600,   600,   600,   600,   600,   600,   601,   601,   601,   601,
     602,   602,   602,   602,   602,   602,   602,   602,   603,   603,
     603,   604,   604,   604,   605,   605,   605,   605,   606,   606,
     606,   606,   607,   607,   608,   608,   608,   608,   609,   609,
     610,   610,   610,   610,   611,   611,   611,   611,   612,   612,
     612,   613,   613,   613,   614,   614,   615,   615,   615,   616,
     617,   617,   617,   617,   617,   618,   618,   618,   618,   618,
     618,   619,   619,   619,   619,   619,   620,   620,   620,   621,
     621,   621,   621,   621,   621,   622,   622,   622,   623,   623,
     623,   623,   623,   623,   624,   624,   624,   624,   624,   624,
     624,   624,   624,   624,   624,   624,   624,   625,   625,   625,
     626,   626,   626,   627,   627,   627,   628,   628,   628,   629,
     629,   629,   629,   630,   630,   630,   631,   631,   631,   632,
     632,   632,   633,   633,   633,   634,   634,   634,   635,   635,
     635,   636,   636,   636,   637,   637,   637,   638,   638,   638,
     639,   639,   639,   640,   640,   640,   641,   641,   641,   642,
     643,   643,   643,   644,   644,   644,   644,   645,   645,   645,
     645,   645,   645,   645,   646,   646,   646,   647,   647,   648,
     648,   648,   648,   648,   649,   649,   649,   650,   650,   650,
     651,   651,   651,   651,   652,   653,   653,   653,   653,   653,
     654,   654,   654,   654,   654,   654
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
       2,     2,     2,     2,     2,     2,     2,     2,     3,     2,
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
       5,     4,     4,     4,     4,     2,     3,     2,     4,     5,
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
       0,    23,     0,     0,     0,     0,     0,  1262,     0,     0,
       0,     0,  1193,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1193,    45,     0,     0,     0,     0,    51,     0,
       0,     0,    55,  1457,    57,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0,  1193,     0,
     429,     0,     0,   435,     0,     0,     0,   439,     0,   441,
       0,   443,     0,     0,   621,   447,    20,     0,   627,    21,
     632,     0,     0,   651,   636,   637,   638,   639,   653,   641,
     642,   646,   643,     0,   645,   647,     0,     0,    22,     0,
      24,     0,     0,     0,    26,     0,     0,     0,    27,     0,
     668,     0,     0,     0,   673,     0,    28,     0,  1264,   142,
    1286,     0,  1263,  1278,  1282,  1276,     0,  1274,  1284,     0,
    1280,     0,    36,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    30,   843,    31,     0,     0,     0,     0,
       0,     0,   844,    32,     0,    33,  1197,  1198,  1194,  1195,
    1196,     0,   142,  1288,     0,   136,     0,     0,     0,    35,
       0,    37,     0,  1299,  1298,  1297,  1296,    39,     0,     0,
       0,     0,     0,   173,     0,    40,     0,  1317,     0,  1314,
      41,     0,     0,     0,     0,    44,     0,    43,    42,     0,
    1344,  1345,    47,     0,     0,     0,    48,     0,     0,  1361,
      49,     0,     0,     0,     0,     0,     0,    50,  1453,  1452,
    1456,  1455,  1454,    52,     0,    53,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    54,     0,     0,  1459,
      56,     0,     0,    58,     0,     0,     0,     0,   173,    59,
    1484,    60,     0,     0,    61,     1,     4,     5,   268,     0,
     260,     0,     0,   262,     0,   270,   263,   267,   278,   279,
     264,   280,     0,   266,     0,   289,   290,   287,   286,     0,
       0,   309,     0,   294,   302,   305,   304,   303,   301,   293,
     298,   299,   300,   292,     0,     0,     0,     0,     0,     0,
     297,    10,     0,     0,     0,     0,     0,     0,     0,     0,
     320,     0,     0,     0,   328,     0,     0,     0,   339,     0,
     349,   332,     0,   351,   334,   353,   335,   364,   336,     0,
       0,   337,     0,   370,   338,     0,    94,    95,    96,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     377,     0,     0,     0,     0,     0,   175,   180,   174,   176,
     179,   178,   177,     0,     0,   394,    69,    70,    71,    72,
      73,    65,    66,    67,    74,    68,     0,   402,   404,     0,
     460,   456,   452,   453,   457,   454,   459,   405,   463,     0,
     406,   356,   469,   473,   468,   359,   358,   357,     0,     0,
     407,   480,   409,     0,   408,   488,     0,   487,   410,   503,
     506,   493,   509,   494,   495,   496,   498,     0,   500,   501,
     505,   173,   411,     0,     0,   412,     0,     0,   173,   413,
     518,   173,   516,   414,   519,   416,   173,   520,   415,     0,
     173,     0,   417,   538,     0,   536,   554,     0,     0,     0,
     542,   534,     0,   544,   559,   547,   419,   565,   566,   420,
     421,     0,     0,   590,   591,   592,   424,   587,   588,   589,
     425,     0,   529,     0,   426,    84,   526,     0,   427,   428,
     580,   580,   567,   568,   580,   580,   432,     0,   579,   573,
     578,   574,   575,   576,   577,   431,   586,   433,   434,   582,
     436,     0,   583,   584,   585,   438,   598,   593,   594,   596,
     440,   604,   613,   615,   617,   603,   606,   607,   619,   442,
       0,     0,   624,     0,   446,   173,   626,   633,     0,   634,
     652,   635,   654,   655,   656,   640,   657,   659,   658,   660,
     644,   648,   665,     0,     0,     0,     0,   661,   649,    25,
    1355,  1356,  1357,  1358,  1359,     0,  1350,  1351,  1352,  1353,
       0,     0,     0,   670,   669,     0,     0,     0,     0,    29,
     142,  1287,     0,  1279,  1283,  1277,  1275,  1285,     0,  1281,
       0,   157,   150,   149,   147,   153,   154,   151,   155,   148,
     158,   144,   146,   156,   145,   152,   143,  1268,  1266,  1265,
    1270,  1272,   687,     0,     0,     0,     0,   680,     0,   681,
       0,   682,     0,     0,     0,     0,     0,     0,     0,   683,
       0,   842,     0,   684,     0,   685,     0,     0,   686,   194,
       0,   689,     0,   690,     0,   847,   846,   845,     0,   850,
       0,     0,     0,     0,  1028,     0,     0,     0,   854,   858,
     860,     0,  1070,     0,     0,     0,     0,   965,     0,     0,
       0,  1000,     0,     0,     0,     0,     0,     0,     0,  1002,
       0,     0,     0,    34,  1294,  1289,  1295,   139,   140,   138,
     141,   137,  1290,     0,  1292,  1293,  1349,    38,     0,     0,
       0,     0,  1306,  1307,     0,   173,     0,  1304,  1301,     0,
       0,     0,   173,  1324,  1327,  1325,  1326,  1318,  1319,  1320,
    1321,     0,     0,     0,    46,  1346,  1347,     0,  1366,  1368,
    1367,  1363,  1364,  1362,     0,     0,     0,     0,     0,     0,
    1369,     0,  1373,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1370,  1384,     0,     0,     0,
    1372,  1374,     0,     0,     0,  1371,  1451,  1342,  1343,  1341,
     241,     0,   252,   237,     0,   254,   238,     0,   256,   239,
    1339,  1340,  1338,   240,   243,     0,     0,     0,   246,   242,
     244,   245,     0,     0,   236,     0,  1462,     0,     0,     0,
    1467,  1480,     0,     0,  1470,     0,     0,  1473,     0,     0,
    1472,  1471,   181,  1490,     0,  1489,  1485,   269,   265,     0,
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
       0,     0,  1084,  1181,  1086,  1085,     0,  1186,     0,  1164,
       0,  1167,     0,     0,  1188,  1190,     0,  1180,   430,     0,
     595,   597,   614,   600,   616,   601,   618,   602,   608,   611,
     609,   605,   620,   599,     0,     0,   445,   625,   622,   623,
     181,   650,   662,   663,   664,   666,     0,     0,     0,   679,
     667,     0,     0,     0,  1269,  1267,  1271,  1273,   688,     0,
       0,     0,   194,   194,   188,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   191,   191,   188,
       0,     0,   188,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   732,   756,     0,     0,     0,   724,     0,     0,
       0,     0,   194,   188,     0,     0,   835,     0,     0,   195,
     196,   837,     0,     0,   848,   849,   173,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   909,     0,     0,     0,     0,     0,   931,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   953,     0,     0,
     958,   959,     0,     0,     0,   980,   982,   981,     0,   984,
       0,     0,   991,   993,   994,     0,  1029,     0,     0,     0,
       0,   852,   853,  1078,  1076,  1081,  1080,  1079,  1077,  1082,
       0,   857,     0,     0,  1072,  1071,   861,     0,  1075,     0,
     862,   863,   864,   865,     0,     0,     0,     0,     0,   967,
       0,     0,   968,  1209,     0,  1212,  1208,     0,     0,     0,
     969,  1001,   970,  1227,  1232,  1229,  1235,  1228,  1226,  1233,
    1230,  1224,  1231,  1225,  1234,     0,     0,   975,     0,     0,
       0,     0,   976,  1244,  1248,  1249,     0,  1246,   977,     0,
    1250,   978,   998,     0,     0,     0,  1003,  1004,  1005,  1291,
    1305,     0,     0,  1312,  1308,     0,     0,     0,  1303,  1302,
    1316,  1315,     0,     0,  1332,     0,     0,  1328,     0,  1336,
       0,     0,  1329,     0,  1365,   230,   230,     0,     0,     0,
     230,     0,  1398,     0,  1397,     0,     0,     0,     0,  1385,
       0,     0,     0,     0,  1389,     0,     0,     0,  1396,     0,
       0,     0,     0,     0,  1387,  1399,     0,     0,     0,  1386,
     230,   230,   230,  1376,  1375,  1377,     0,   253,   255,   257,
     247,     0,   250,   249,   248,     0,   258,     0,     0,    63,
       0,  1461,     0,  1468,   173,  1483,     0,  1474,  1475,     0,
    1477,  1478,     0,   182,   183,  1469,  1491,  1492,     0,   261,
       0,   275,     0,     0,     0,     0,   310,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   331,   330,     0,
     340,   342,     0,     0,     0,     0,     0,     0,   367,     0,
     173,     0,     0,     0,     0,     0,   173,     0,   392,     0,
     391,   462,   461,     0,     0,     0,   504,   173,     0,   181,
     515,   513,   517,   521,     0,     0,     0,   181,     0,   556,
     540,     0,   551,   553,   184,     0,     0,   422,     0,     0,
      63,     0,   530,    86,    85,     0,     0,  1099,     0,     0,
       0,     0,     0,     0,  1111,     0,     0,     0,  1161,     0,
       0,     0,  1130,  1131,     0,     0,     0,     0,     0,  1144,
       0,  1150,  1151,  1153,  1155,     0,  1160,  1172,  1173,  1174,
       0,  1176,     0,  1182,  1184,  1185,  1183,  1083,     0,  1163,
       0,  1162,  1098,     0,     0,  1168,     0,  1170,     0,  1169,
    1191,  1171,  1178,     0,     0,   612,   610,   444,     0,     0,
    1360,  1354,   677,   678,     0,   675,   671,     0,   194,   194,
     194,   694,   695,   190,   189,     0,   194,   194,   194,     0,
     702,   701,   700,   194,   712,   191,   194,   194,   194,   192,
     193,   194,   194,     0,   194,   194,     0,   191,     0,   725,
       0,   731,     0,   730,   729,   728,     0,     0,     0,   755,
       0,   754,     0,   727,   726,     0,     0,     0,     0,   191,
     191,   188,     0,     0,   188,     0,     0,     0,   194,   194,
     829,     0,   194,   194,   836,   194,     0,   194,     0,   220,
     221,   222,   223,   224,   225,     0,    92,    93,    91,   871,
       0,     0,     0,     0,     0,  1022,  1020,  1015,     0,  1025,
    1009,  1026,  1012,  1024,  1018,  1007,  1021,  1010,  1008,  1027,
    1023,     0,     0,   885,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   919,     0,     0,     0,     0,   930,   932,     0,     0,
       0,   938,   937,     0,     0,     0,   209,     0,     0,     0,
     173,     0,   949,     0,     0,     0,     0,   954,   955,   956,
       0,     0,     0,     0,   963,   979,   983,   985,   988,   987,
       0,     0,     0,   992,   870,  1030,  1032,     0,  1031,   855,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1064,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   859,  1006,     0,     0,
       0,     0,   966,     0,   173,  1205,  1203,  1201,     0,     0,
     173,  1207,   971,     0,     0,     0,     0,  1243,     0,     0,
    1251,   996,   997,     0,   999,  1311,  1313,  1310,  1309,  1300,
       0,     0,     0,  1333,     0,     0,  1337,  1348,   232,   233,
     234,   235,   231,  1379,  1378,     0,     0,     0,  1383,     0,
       0,     0,  1382,     0,     0,     0,  1381,  1380,   230,     0,
       0,     0,  1388,     0,     0,     0,  1395,     0,     0,     0,
    1394,     0,     0,     0,  1393,     0,     0,     0,  1392,     0,
       0,     0,     0,     0,  1409,     0,  1444,  1443,  1445,     0,
       0,     0,  1391,     0,     0,     0,  1390,  1404,  1403,  1405,
    1401,  1400,  1402,  1447,  1446,  1448,     0,   251,     0,     0,
    1463,  1465,  1466,     0,  1481,   173,  1476,  1479,     0,     0,
     173,     0,     0,     0,   272,     0,     0,     0,     0,   314,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   363,   362,     0,     0,   354,   365,   173,   368,
     372,     0,   383,   385,   384,   382,   173,   390,     0,     0,
       0,   181,   173,     0,     0,     0,     0,   535,   549,   558,
       0,   552,   186,   187,   185,   545,     0,   561,     0,     0,
     528,   533,    84,     0,     0,     0,     0,     0,     0,   173,
    1100,     0,     0,     0,  1105,     0,   173,     0,  1112,  1113,
    1114,     0,  1116,  1118,  1117,  1119,  1120,     0,     0,     0,
    1126,     0,  1132,  1133,     0,     0,     0,  1139,  1137,  1138,
       0,     0,     0,     0,  1145,  1146,     0,     0,  1149,  1152,
    1154,  1156,  1157,     0,     0,  1175,  1177,     0,  1097,  1087,
    1187,  1088,     0,     0,  1189,  1179,     0,     0,   630,   631,
       0,   672,   676,     0,   691,   692,   693,   194,   697,   698,
     699,     0,     0,     0,   706,   707,   188,     0,     0,     0,
     833,   194,   713,   714,   715,   716,   718,   191,   721,   722,
       0,   194,     0,     0,     0,   191,   191,   188,     0,     0,
       0,     0,     0,     0,     0,   191,   191,   188,     0,     0,
     188,     0,     0,     0,     0,   191,   191,   188,     0,     0,
       0,     0,   753,     0,   757,     0,     0,     0,     0,     0,
     191,   191,   188,     0,     0,   188,     0,     0,     0,     0,
       0,   191,   191,   188,     0,     0,   188,     0,   191,   733,
     734,   735,   736,   738,     0,   741,   742,     0,   191,     0,
       0,   827,   828,   194,   831,   832,   838,   194,   834,     0,
     868,   173,   872,     0,     0,     0,     0,     0,     0,     0,
    1014,  1011,  1017,  1016,  1013,  1019,     0,     0,     0,   197,
     199,   208,   204,   201,   202,   198,   200,   205,   203,   207,
     206,     0,     0,     0,   173,   892,   891,   893,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   964,   910,   911,   912,     0,   916,   913,   915,     0,
       0,   921,   920,   922,     0,     0,     0,     0,     0,     0,
       0,   173,   173,   936,   946,   215,   211,   216,   210,   213,
     212,   217,   214,   944,   945,   173,     0,     0,   948,   950,
     173,   173,     0,   957,   960,   961,   173,   173,   986,   990,
     869,  1033,   856,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1065,  1192,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1063,     0,     0,     0,     0,     0,   866,   867,
     173,   181,  1206,     0,     0,  1210,  1211,     0,     0,   973,
       0,   173,     0,  1245,  1247,   995,     0,  1330,  1331,  1334,
    1335,   230,   230,   230,   230,   230,   230,   230,   230,   230,
    1449,  1407,  1406,  1408,  1441,  1440,  1442,  1438,  1437,  1439,
    1432,  1431,  1433,  1429,  1428,  1430,  1411,  1410,  1414,  1413,
    1415,  1412,  1423,  1422,  1424,  1420,  1419,  1421,     0,     0,
    1458,     0,  1482,     0,   173,     0,  1486,     0,     0,   276,
       0,   273,     0,     0,     0,     0,     0,   322,     0,     0,
       0,     0,     0,     0,   329,     0,     0,     0,   173,     0,
     369,     0,     0,   375,   167,   160,     0,   483,     0,   511,
     181,   184,     0,     0,   524,     0,   562,   563,     0,   527,
       0,     0,     0,     0,     0,     0,   173,  1101,   184,   184,
     184,   173,  1106,   184,   181,   184,   184,   173,  1121,   184,
     184,   184,   173,  1127,   184,   184,   173,     0,   173,   184,
     173,   184,   184,   173,   184,   173,     0,  1165,  1166,     0,
       0,   629,     0,   696,   703,   704,   705,     0,   709,   710,
     711,   717,   194,   191,   723,   744,   745,   746,   747,   748,
       0,   750,   751,   191,   191,   807,   808,   809,   810,   812,
       0,   815,   816,     0,   191,   818,   819,   820,   821,   822,
       0,   824,   825,   191,     0,     0,     0,   191,   191,   188,
       0,     0,     0,     0,     0,     0,   191,   191,   188,     0,
       0,     0,     0,     0,     0,   191,   191,   188,     0,     0,
       0,   191,   194,   194,   194,   194,   194,     0,   194,   194,
       0,   191,   191,   194,   194,   194,   194,   194,     0,   194,
     194,     0,   191,   737,   191,     0,   743,     0,     0,   830,
     839,     0,   873,   184,     0,     0,   184,     0,     0,     0,
     883,   184,   886,   887,   888,   184,   890,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     914,   917,   918,     0,   184,     0,     0,     0,   933,   934,
       0,     0,   181,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1236,  1062,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   173,     0,     0,
      89,     0,     0,  1073,  1074,   181,     0,     0,     0,  1213,
     972,   974,   181,   173,  1323,  1435,  1434,  1436,  1426,  1425,
    1427,  1417,  1416,  1418,  1450,     0,  1460,  1493,     0,     0,
    1488,  1487,   277,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   318,     0,     0,     0,     0,   355,   366,   373,
     184,   484,   489,   512,   514,     0,   522,   557,   173,     0,
       0,     0,     0,     0,     0,   173,  1094,  1102,  1104,  1103,
    1107,  1108,  1109,  1110,  1115,  1122,  1123,  1124,  1125,  1128,
    1129,  1134,   181,   184,   181,  1142,   181,  1143,  1147,   181,
    1158,   181,   173,     0,   173,     0,   628,     0,   708,   719,
     194,   191,   752,   811,   191,     0,   817,   191,   826,   194,
     194,   194,   194,   194,     0,   194,   194,   191,   194,   194,
     194,   194,   194,     0,   194,   194,   191,   194,   194,   194,
     194,   194,     0,   194,   194,   191,   194,   767,   768,   769,
     770,   772,   191,   775,   776,     0,   194,   194,   796,   797,
     798,   799,   801,   191,   804,   805,     0,   194,   739,   191,
     840,   841,   173,   875,     0,   184,   877,     0,   173,     0,
     884,   889,   173,     0,   898,   899,   900,   901,   905,   906,
     902,   903,   904,     0,     0,   184,   925,     0,   173,     0,
       0,   939,     0,   184,     0,     0,   184,   184,     0,   989,
       0,   218,   218,     0,     0,   218,     0,   218,  1192,     0,
       0,     0,     0,     0,     0,     0,     0,  1237,  1215,     0,
    1222,  1223,     0,   218,   218,     0,     0,     0,     0,     0,
    1192,     0,     0,     0,  1192,     0,  1066,     0,     0,     0,
    1192,    90,     0,   218,     0,  1239,   173,   173,     0,   181,
       0,   259,  1495,  1494,     0,     0,   281,     0,     0,     0,
       0,     0,   326,     0,     0,     0,     0,     0,   376,   523,
       0,   395,     0,  1090,     0,   226,     0,  1095,  1135,  1136,
    1140,  1141,  1148,  1159,  1096,   437,     0,   395,     0,   720,
     749,   813,   191,   823,   758,   759,   760,   761,   762,   191,
     764,   765,   194,   787,   788,   789,   790,   791,   191,   793,
     794,   194,   778,   779,   780,   781,   782,   191,   784,   785,
     194,   771,   194,   191,   777,   800,   194,   191,   806,   740,
       0,   184,   878,     0,     0,     0,     0,     0,   907,   908,
     923,     0,     0,     0,   935,   940,     0,   942,     0,   951,
     952,   943,   184,     0,   219,  1192,  1192,    89,     0,  1192,
       0,  1192,  1034,   173,     0,     0,     0,     0,     0,     0,
       0,  1214,     0,     0,  1192,  1192,    89,     0,     0,     0,
    1192,  1192,  1038,  1192,     0,     0,  1039,  1192,  1069,  1067,
    1068,  1043,  1192,  1192,  1239,  1255,     0,  1204,  1202,  1241,
       0,     0,     0,     0,   283,   316,   317,     0,     0,     0,
     315,   343,   344,     0,   395,   396,   398,   397,   448,     0,
       0,   227,   229,   228,  1092,  1093,   395,   450,     0,   814,
     194,   766,   194,   795,   194,   786,   773,   194,   802,   194,
       0,   874,   184,   184,     0,   184,     0,   184,   184,     0,
     941,   184,     0,  1192,  1049,  1045,  1192,     0,  1050,     0,
    1044,  1192,     0,  1217,     0,  1220,  1260,  1221,  1219,  1216,
       0,  1047,  1046,  1192,     0,     0,  1192,  1051,  1041,  1037,
    1192,   173,  1040,  1042,  1048,  1255,  1199,     0,     0,  1240,
    1253,  1242,  1322,     0,     0,   324,   325,   323,   356,   359,
     357,     0,     0,   449,  1089,   173,   451,   674,   763,   792,
     783,   774,   803,   184,   876,   882,     0,   897,   894,   924,
     929,     0,   947,     0,  1056,  1036,    89,     0,  1054,     0,
    1218,     0,  1035,    89,     0,  1052,  1055,     0,  1200,  1257,
    1259,     0,  1252,     0,     0,     0,     0,     0,     0,   226,
       0,   879,   173,   895,   926,   962,  1192,     0,  1261,     0,
    1192,     0,   184,  1258,  1254,   282,     0,     0,     0,     0,
       0,  1091,   851,   173,   880,   896,   173,   927,  1058,     0,
    1192,  1057,     0,     0,   284,   348,     0,   347,     0,   881,
     928,    89,  1059,    89,  1192,   346,   345,  1192,  1192,  1053,
    1061,  1060
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    59,  1688,   184,   166,  1101,  2890,  2891,   500,   501,
     502,   503,   167,   168,   169,   842,   757,   102,   981,   523,
    1455,  1995,  1615,  1631,  1221,  2211,  2263,  3005,  1685,  3074,
    1863,   396,   939,  1433,   923,   926,   929,   944,    69,   420,
     426,   430,   433,    75,   437,    82,   453,   449,   443,   460,
      92,   470,   103,  1479,   112,   478,   481,   484,   486,   559,
    1051,  1964,   488,   491,   494,   119,   510,   170,   172,  3068,
     188,   191,   236,  1096,  1146,   547,  1039,   550,   560,  1043,
    1048,   562,   564,  1054,   568,  1056,   582,  1061,  1063,   585,
     589,   593,   595,   598,   602,   638,   634,  1532,   616,  1082,
    1087,  1079,  1520,  1093,   619,   646,   655,  1104,   660,   665,
     657,   630,   626,   670,   679,  1141,  1596,  1133,  1135,  1137,
    1143,   684,  1148,   239,   686,  2070,   258,   689,   691,   695,
     700,   708,   276,  1606,   723,   303,   767,  1620,   771,   779,
    1207,  1639,  1202,  2132,  1651,  1649,  2134,  1203,  1641,  1643,
     785,   769,   793,   788,   791,   783,   305,   313,   315,   833,
    1292,  1711,  1281,  1816,  2294,  2312,  1296,  1300,  1290,  1128,
    1577,  1581,  1589,  1591,  2630,   321,  1309,  1312,  1320,  2867,
    2868,  2869,  2631,  3045,  3046,  1342,  1348,  1351,  3139,  3140,
    3136,  3137,  3189,  2870,  2871,   292,   329,   337,   345,   857,
     852,   350,   355,   357,   867,   874,  1377,  1382,   933,   920,
     362,   366,   331,   268,   264,   370,   881,   377,   915,   890,
     905,   906,  1419,  1414,  1882,  1404,  1904,  1876,  1916,  1912,
    1872,  1898,  1894,  1868,  1890,  1886,  1408,   910,   892,   383,
     384,   400,  1441,   403,   409,   957,   960,   954,   411,   414,
     965
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2254
static const yytype_int16 yypact[] =
{
    5335,    67,   219,   137, -2254, -2254,  1319,  -233,  1377,  1440,
     515,   642,  3376,   113,   442,    78,  1255,   444,  5475,  1126,
    1988, -2254,   172,   -24,   251,   878,   153,   620,   100,   -79,
     146,   203,   456,   729,   -42,   218,   770,  3553,    24,   999,
     306,   455,   456, -2254,   163,   267,   105,   152, -2254,    82,
     578,   399, -2254,   759, -2254,   185,  2425,   294,   192,   571,
      42,  1183,   403,   606,   718,   211,   755,    23,  1381, -2254,
   -2254, -2254,   375,  1384,  1294, -2254,   468,   139,   442,   126,
     950,  1005, -2254,   785,  1294, -2254, -2254,  1294,  1294,   695,
     788,  1294, -2254, -2254,  1294, -2254, -2254,  1294, -2254, -2254,
   -2254, -2254, -2254, -2254,   948,    59,   794,   783,   905,   911,
     586,   820, -2254,  1294,  1623,  1294,  1294,  1201,  1294, -2254,
   -2254, -2254,   699, -2254, -2254, -2254, -2254,  4622, -2254, -2254,
   -2254, -2254, -2254, -2254,  1294, -2254, -2254, -2254, -2254, -2254,
   -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254,
   -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254,
   -2254, -2254, -2254, -2254, -2254, -2254, -2254,  1602, -2254,  1294,
   -2254,   921, -2254, -2254,   442,   442,   442,   442,   442,   442,
     442,   442,   442,   442, -2254, -2254, -2254, -2254, -2254,   802,
     946, -2254,   883,  1586,   522,   376,   637,   793,   722,  4107,
      94,  4756,  4594,  1012,  4622,  3097, -2254,  1309,   -84,   898,
    1074,   985,   277,   352,   123,  1120,  1073,   -13,   456,  1013,
   -2254,   775,  1024, -2254,   837,   868,   486, -2254,   434, -2254,
    1077, -2254,    -5,  1025,   462, -2254, -2254,  4992, -2254, -2254,
   -2254,  1057,  1084,  1168, -2254, -2254, -2254, -2254,    57, -2254,
   -2254, -2254, -2254,  1007, -2254, -2254,  4992,  4164, -2254,  1224,
   -2254,    55,  4992,  1234, -2254,   390,  4992,  1236, -2254,   176,
   -2254,  1247,  1268,    89, -2254,  1294, -2254,  1270,  1433,  2819,
   -2254,  1284, -2254, -2254, -2254, -2254,  1289, -2254, -2254,  1294,
   -2254,   442, -2254,  1308,   440,  1310,  1322,   584,   529,  1327,
      91,   155,  1329, -2254, -2254, -2254,  1338,  1344,   442,   442,
    1294,  1294, -2254, -2254,  1355, -2254, -2254, -2254, -2254, -2254,
   -2254,  1055,  2819, -2254,  1360,    17,  1294,  4992,  1294, -2254,
    4992, -2254,  1369, -2254, -2254, -2254, -2254, -2254,  1294,  1562,
     442,  3585,  1294,  1602,  1294, -2254,  1348, -2254,  3869, -2254,
   -2254,   582,  1372,  1374,  1294, -2254,  1376, -2254, -2254,   -82,
   -2254, -2254, -2254,  1389,  4992,  1397, -2254,  1564,  1294,  1297,
   -2254,   884,  1296,  1428,   519,  1422,   613, -2254, -2254, -2254,
   -2254, -2254, -2254, -2254,  1427, -2254,  1104,   199,   217,   302,
     567,  1294,    26,  1463,  1294,    96, -2254,  1294,   230,  1475,
   -2254,  1294,  1294, -2254,    13,    75,   117,  1493,  1602, -2254,
   -2254, -2254,  1474,  1294, -2254, -2254, -2254, -2254, -2254,  1294,
   -2254,  1506,  1508, -2254,  1294,  1343, -2254, -2254, -2254, -2254,
   -2254, -2254,  1294, -2254,   442, -2254,  1294, -2254, -2254,   830,
     830, -2254,  1514, -2254, -2254, -2254, -2254, -2254, -2254, -2254,
   -2254, -2254, -2254, -2254,  1312,  1294,  1294,  1536,  1545,  1548,
   -2254, -2254,  1294,  1294,  1294,  1294,  1294,  1294,  1550,  1294,
   -2254,  1552,  1294,  1294, -2254,  1554,  1560,  1578, -2254,  1588,
   -2254, -2254,  1599,  1613, -2254,  1486, -2254,  1615, -2254,  4992,
    1516, -2254,   142, -2254, -2254,  1294, -2254, -2254, -2254,  1294,
    1616,  1636,  1636,  4992,  1294,  1294,  1294,  1294,  1294,  1294,
   -2254,  1294,  4622,  1623,  1294,  1294, -2254, -2254, -2254, -2254,
   -2254, -2254, -2254,  1623,  1294, -2254, -2254, -2254, -2254, -2254,
   -2254, -2254, -2254, -2254, -2254, -2254,  1643, -2254, -2254,  1354,
     380, -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254,  1258,
   -2254,   922, -2254, -2254, -2254,  1479, -2254,   478,   565,   565,
   -2254, -2254, -2254,  1675, -2254, -2254,  1677, -2254, -2254,   -44,
     614, -2254,  1481, -2254, -2254, -2254, -2254,  1492, -2254,  1687,
   -2254,  1602, -2254,  1294,  1294, -2254,  4992,  4992,  1602, -2254,
   -2254,  1602, -2254, -2254, -2254, -2254,  1602, -2254, -2254,  4992,
    1602,  1294, -2254, -2254,  4992, -2254,  1688,   493,  1468,    19,
   -2254, -2254,  1471,  4992,    18, -2254, -2254, -2254, -2254, -2254,
   -2254,  1694,  1698, -2254, -2254, -2254, -2254, -2254, -2254, -2254,
   -2254,  1704, -2254,  1485, -2254,   -14, -2254,  1294, -2254, -2254,
    1712,  1712, -2254, -2254,  1712,  1712, -2254,  1265, -2254, -2254,
   -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254,
   -2254,    -5, -2254, -2254, -2254, -2254, -2254, -2254,  1503,  1517,
   -2254, -2254,  1661,  1662,  1663, -2254, -2254,   235,  1477, -2254,
    1294,  1738,  1491,  3869, -2254,  1602, -2254, -2254,  1741, -2254,
   -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254,
   -2254, -2254, -2254,  4992,  4992,  4992,  4992, -2254, -2254, -2254,
   -2254, -2254, -2254, -2254, -2254,  1743, -2254, -2254, -2254, -2254,
    1750,  1755,   442, -2254, -2254,  1756,  1757,  1541,  1294, -2254,
    2819, -2254,  1760, -2254, -2254, -2254, -2254, -2254,  1294, -2254,
     442, -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254,
   -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254,
   -2254, -2254,  1763,   696,  1681,  1684,  1685, -2254,  1767, -2254,
    1778, -2254,   512,  1697,    27,    76,  3644,   471,  1791, -2254,
    1794, -2254,  1795, -2254,    79, -2254,  1798,  1807, -2254,    50,
    1808, -2254,  1809, -2254,  1815, -2254, -2254, -2254,  1294, -2254,
    3869,  4544,  1810,  1501,   654,  1817,   692,  1715, -2254, -2254,
   -2254,  1820,    15,   664,  1823,  1827,    74,  1294,   908,   823,
      37,  4992,   442,  1858,   738,    46,   451,   296,    22, -2254,
    1826,  1828,  1829, -2254, -2254, -2254, -2254, -2254, -2254, -2254,
   -2254, -2254, -2254,  1294, -2254, -2254, -2254, -2254,  1294,  1294,
    1294,  1294, -2254, -2254,  1294,  1602,  1294, -2254,  1294,  1623,
    1294,  1835,  1602, -2254, -2254, -2254, -2254, -2254, -2254, -2254,
   -2254,  1841,   473,   554, -2254, -2254, -2254,  1842, -2254, -2254,
   -2254, -2254,  1747, -2254,  1849,  1850,  1752,  1761,  1762,  1854,
   -2254,  1855, -2254,  1856,  1764,  1857,   520,   644,   704,   604,
     753,   809,   762,  1859,   831, -2254, -2254,  1861,  1862,  1860,
   -2254, -2254,  1863,  1864,  1866, -2254,  1867, -2254, -2254, -2254,
   -2254,  1868, -2254, -2254,  1869, -2254, -2254,  1870, -2254, -2254,
   -2254, -2254, -2254, -2254, -2254,  1294,   396,  1294, -2254, -2254,
   -2254, -2254,  1294,  1294, -2254,  1294,  1294,  1532,  1294,  1294,
   -2254,  3869,  1802,  1872, -2254,  1540,  1873, -2254,  1585,  1874,
   -2254, -2254,   182,  1294,  1294, -2254,  1875, -2254, -2254,  1876,
    1445,  1294,  1878,   745, -2254, -2254, -2254, -2254, -2254, -2254,
   -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254,  1879,
    1880,  1294,  1294,  1294,  1294,  1294,  1883,  1294,  1885,  1294,
     150,  1886,  1888,  1216,  1889, -2254, -2254,   442,  1890,  1891,
    1602,  1894,  4992,  1897, -2254, -2254, -2254, -2254, -2254, -2254,
    1602, -2254, -2254,  1294,  1294,  1294,  4992,  1294,  1623,  1294,
   -2254,  1294, -2254, -2254, -2254, -2254, -2254,  1898,  1899, -2254,
   -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254,
   -2254, -2254, -2254,    94, -2254,  1294, -2254, -2254,  1901, -2254,
   -2254, -2254, -2254, -2254, -2254, -2254, -2254,  4992,  1294,  1602,
    1602,   182,   182,   182,  1602,  1623,  1294,  1602, -2254, -2254,
   -2254,  1294, -2254,   -14,  1692,  1903,  1902, -2254, -2254,  1602,
   -2254,  1702,  1731, -2254,  1906,  1907, -2254,  1909,  1593,  1896,
    1900, -2254,  1294, -2254, -2254, -2254, -2254, -2254,  4557,   575,
    1591,   453, -2254, -2254, -2254, -2254,  1294,    63,  1279, -2254,
    1617, -2254,  1858,  1622,   653,  1590,    86, -2254, -2254,  1294,
   -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254,  1605,
   -2254, -2254, -2254, -2254,  1294,  1924, -2254, -2254, -2254, -2254,
     182, -2254, -2254, -2254, -2254, -2254,  1927,  1928,  4832, -2254,
   -2254,  1940,  1941,  1294, -2254, -2254, -2254, -2254, -2254,  1944,
    1947,  1952,   378,   378,   -85,  1955,  1957,  1958,  1959,  1959,
    1959,  1960,  1651,  1656,  1964,  1965,  1968,   107,   107,   -85,
    1973,  1975,   -85,  1978,  1979,  1980,  1981,  1980,  1981,  3703,
    1983,  1984, -2254, -2254,  1980,  1981,   556, -2254,  1976,  1986,
    1990,  1995,   378,   -85,  1987,  1996, -2254,  1998,  1999, -2254,
   -2254, -2254,  1993,  2005, -2254, -2254,  1602,   984,  1834,  1737,
    1739,  1742,  1904,   863,  1744,  2007,   526,   106,  1908,  1393,
    2011,  1196,  1982,  1745,  1748,  1911,  2018,  1786,   663,    65,
     657,  -136,  4992,  1858,  1997,   494,  1749,  1788,  2026,    49,
   -2254, -2254,   777,  2032,  2033, -2254, -2254, -2254,  2034,  1799,
      69,  1858,  1800, -2254, -2254,  1985, -2254,   442,  2039,  2040,
    1294, -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254,
       6, -2254,  2657,  2042, -2254, -2254, -2254,  1294, -2254,  1294,
   -2254, -2254, -2254, -2254,  1294,  1294,  1294,   692,  4992, -2254,
    2043,  1631, -2254, -2254,  1294, -2254, -2254,  1294,  4992,  1294,
   -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254,
   -2254, -2254, -2254, -2254, -2254,   442,  1294, -2254,  1294,   692,
    2046,  2049, -2254, -2254, -2254, -2254,  1294,  1294, -2254,   442,
   -2254, -2254, -2254,   159,  2050,  2051, -2254, -2254, -2254, -2254,
   -2254,  1294,  1294, -2254, -2254,  1623,  1294,  1294, -2254, -2254,
   -2254, -2254,  2057,  1294, -2254,  1294,  1945, -2254,  1294, -2254,
    1294,  1946, -2254,  2059, -2254,  1347,  1347,   839,   870,   886,
    1347,  2061, -2254,   935, -2254,   970,  1004,  1083,  1091, -2254,
    2064,  2066,  1100,  2068, -2254,  2069,  2070,  2072, -2254,  1103,
    1173,  2073,  2076,  2079, -2254, -2254,  2081,  2082,  2080, -2254,
    1347,  1347,  1347, -2254, -2254, -2254,  1294, -2254, -2254, -2254,
   -2254,  1294, -2254, -2254, -2254,  1294, -2254,  1294,  1294,   169,
    4992, -2254,  1294, -2254,  1602, -2254,  3869, -2254, -2254,  2083,
   -2254, -2254,  2084, -2254, -2254, -2254, -2254,  2085,  3585, -2254,
    1294,  2088,  1294,  1294,  1294,  1262, -2254,  2089,  1294,  1294,
    2090,  1294,  1294,  2095,  1294,  2097,  1294, -2254, -2254,   150,
   -2254, -2254,  2098,  2101,   -17,  2102,   442,   442, -2254,  4992,
    1602,  2091,  1294,  2105,  2109,  2113,  1602,  4992, -2254,  1294,
   -2254, -2254, -2254,  1294,  1294,  1294, -2254,  1602,  4992,   182,
   -2254, -2254, -2254, -2254,  1623,  1294,  2114,   182,  1294,   670,
   -2254,  2117, -2254, -2254,   887,  3614,  1294, -2254,  1294,  2119,
    2124,  1294, -2254, -2254, -2254,  2120,  1314,  4622,  1852,  1871,
    1877,    40,  4992,  1884, -2254,   528,   144,    68, -2254,  1893,
    1895,   111, -2254, -2254,  1081,  1936,   873,  1881,   558,  1858,
    1244, -2254,  2125,  1845, -2254,  1156, -2254, -2254, -2254, -2254,
    1858,  1910,     3, -2254, -2254, -2254, -2254, -2254,  1294, -2254,
    1294, -2254, -2254,  1294,  1294, -2254,  1294, -2254,  1294, -2254,
   -2254, -2254, -2254,  1912,  1294, -2254, -2254, -2254,  1294,   171,
   -2254, -2254, -2254, -2254,  2127,  2128, -2254,  1294,   378,   378,
     378, -2254, -2254, -2254, -2254,  2129,   378,   378,   378,   766,
   -2254, -2254, -2254,   378, -2254,   107,   378,   378,   378, -2254,
   -2254,   378,   378,  2130,   378,   378,  2132,   107,   795, -2254,
     816, -2254,   916, -2254, -2254, -2254,  2135,  2137,  2139, -2254,
     836, -2254,   875, -2254, -2254,  1838,  2141,  2145,  2147,   107,
     107,   -85,  2149,  2150,   -85,  2154,  2156,  2159,   378,   378,
   -2254,  2160,   378,   378, -2254,   378,  2163,   378,  2166, -2254,
   -2254, -2254, -2254, -2254, -2254,   442, -2254, -2254, -2254,  4622,
    1259,  1294,  1504,  1671,   900, -2254, -2254, -2254,  1097, -2254,
   -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254,
   -2254,  2168,  1294, -2254,   442,  1208,  2171,  1294,  4992,   442,
     442,  2175,  1719,  1913,  1914,   177,   248,  1916,   264,  1830,
    1836,  2179,  2181,  2187,  2189,   863,  2190,  2191,  2192,  1844,
    1846,  1646,  2194,  1294,  1526,  1724, -2254, -2254,   442,  1208,
    4992, -2254, -2254,  4992,  1294,  2196,    93,  2199,  4992,  1294,
    1602,   442, -2254,  2201,  4992,  4992,  1294, -2254, -2254, -2254,
     442,   442,  1208,  4992, -2254, -2254, -2254, -2254, -2254, -2254,
    4992,  1294,   442, -2254,  2202, -2254, -2254,  1294, -2254, -2254,
    2203,  1294,  1949,   196,  1294,  1950,  1294,   308,  1294,  2207,
    1294,  1953,  1956,  1294,  1294,  1294,  1967,  1294,  1364,  1294,
    1294,  1619,    45,  1294,  1294,  1970, -2254, -2254,  1294,  1294,
    1294,  1294, -2254,  4992,  1602,  2210,  2224,  2227,  1294,  1294,
    1602, -2254,  1294,  1294,  1294,  4992,   692, -2254,  1294,  1294,
   -2254, -2254, -2254,  2229, -2254, -2254, -2254, -2254, -2254, -2254,
    2228,  1294,  1294, -2254,  1294,  1294, -2254, -2254, -2254, -2254,
   -2254, -2254, -2254, -2254, -2254,  2230,  2231,  2233, -2254,  2234,
    2235,  2238, -2254,  2240,  2242,  2244, -2254, -2254,  1347,  2245,
    2246,  2248, -2254,  2249,  2252,  2254, -2254,  2257,  2260,  2255,
   -2254,  2261,  2265,  2267, -2254,  2268,  2269,  2271, -2254,  2272,
    2273,  2274,  2285,  2287, -2254,  2300, -2254, -2254, -2254,  2302,
    2304,  2309, -2254,  2310,  2311,  2313, -2254, -2254, -2254, -2254,
   -2254, -2254, -2254, -2254, -2254, -2254,  1294, -2254,  1294,  1294,
   -2254, -2254, -2254,  1294, -2254,  1602, -2254, -2254,  3585,  1294,
    1602,  1294,  1294,  1294, -2254,  1294,  1294,  2314,  1294, -2254,
    1294,  1294,  2316,  1294,  1294,  2318,  1294,  2321,  1294,   150,
    2317,  2323, -2254, -2254,  2324,  4992, -2254,  2325,  1602, -2254,
    2326,  1294, -2254, -2254, -2254, -2254,  1602, -2254,  1456,  1294,
    1456,   182,  1602,  4992,  1294,  1294,  2327, -2254, -2254, -2254,
    1294, -2254, -2254, -2254, -2254, -2254,  4992, -2254,  4992,  1294,
   -2254, -2254,   -14,  2328,  2329,  2330,  2333,  2334,  4907,  1602,
   -2254,  4992,  4992,  4992,  4622,  4992,  1602,  4992, -2254, -2254,
   -2254,  4992, -2254, -2254, -2254, -2254,  4622,  4992,  4992,  4992,
    4622,  4992, -2254, -2254,  4992,  4992,  1294, -2254, -2254, -2254,
    4992,  4992,  4992,  4992, -2254, -2254,  4992,  4992, -2254, -2254,
   -2254, -2254, -2254,  4992,  4992, -2254, -2254,  2151, -2254, -2254,
   -2254, -2254,  1294,  1294, -2254, -2254,  2336,  1294, -2254, -2254,
    2337, -2254, -2254,  1294, -2254, -2254, -2254,   378, -2254, -2254,
   -2254,  2338,  2339,  2340, -2254, -2254,   -85,  2344,  2345,  2347,
   -2254,   378, -2254, -2254, -2254, -2254, -2254,   107, -2254, -2254,
    2346,   378,  2348,  2349,  2350,   107,   107,   -85,  2352,  2353,
    2354,  1938,  2356,  2357,  2358,   107,   107,   -85,  2360,  2361,
     -85,  2362,  2363,  2364,  2365,   107,   107,   -85,  2367,  2368,
    2369,  1092, -2254,  1342, -2254,  1398,  1961,  2370,  2372,  2374,
     107,   107,   -85,  2377,  2379,   -85,  2381,  2021,  2384,  2385,
    2386,   107,   107,   -85,  2390,  2393,   -85,  2394,   107, -2254,
   -2254, -2254, -2254, -2254,  2397, -2254, -2254,  2398,   107,  2399,
    2400, -2254, -2254,   378, -2254, -2254, -2254,   378, -2254,  2401,
   -2254,  1602, -2254,  4992,  1294,  1294,  4992,  1294,  2403,  1834,
   -2254, -2254, -2254, -2254, -2254, -2254,  2404,  4992,   442, -2254,
   -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254,
   -2254,  1208,  2405,  4992,  1602, -2254, -2254, -2254,  2406,  1834,
    1294,  1294,  1294,  1294,  1294,  1294,  1294,  1294,  1294,  2408,
    2412, -2254, -2254, -2254, -2254,  2413, -2254, -2254, -2254,  2416,
    2417, -2254, -2254, -2254,  1294,  4992,  1294,  2418,  1834,   442,
    1208,  1602,  1602, -2254, -2254, -2254, -2254, -2254, -2254, -2254,
   -2254, -2254, -2254, -2254, -2254,  1602,  1294,  1623, -2254, -2254,
    1602,  1602,  1294, -2254, -2254, -2254,  1602,  1602, -2254, -2254,
   -2254, -2254, -2254,  1294,  1294,  1294,  1294,  1294,  1294,  1294,
    1294,  1294,  1294, -2254, -2254,  1294,  1294,  1294,  1294,  1294,
    1294,  1294,  1294,  1926,  1294,  1294,  1294,  1966,  1294,  2158,
    2419,  1294, -2254,  1294,  1294,  1294,  2421,  2422, -2254, -2254,
    1602,   182, -2254,  2423,  2424, -2254, -2254,  1623,  1294, -2254,
    2426,  1602,  4992, -2254, -2254, -2254,  2427, -2254, -2254, -2254,
   -2254,  1347,  1347,  1347,  1347,  1347,  1347,  1347,  1347,  1347,
   -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254,
   -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254,
   -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254,  1834,  1294,
   -2254,  1294, -2254,  1294,  1602,  1294, -2254,  1623,  1294, -2254,
    1294, -2254,  2355,  2428,  2431,  1294,  1294, -2254,  1294,  1294,
    2432,  1294,  2434,  1294, -2254,  2435,  2437,  2438,  1602,  2439,
   -2254,  2440,  4992, -2254, -2254, -2254,  1294, -2254,  1294, -2254,
     182,   887,  1294,  2441, -2254,  1294, -2254, -2254,  4622, -2254,
    2445,  2446,  2448,  2449,  2450,  4992,  1602, -2254,   887,   887,
     887,  1602, -2254,   887,   182,   887,   887,  1602, -2254,   887,
     887,   887,  1602, -2254,   887,   887,  1602,  4992,  1602,   887,
    1602,   887,   887,  1602,   887,  1602,  4992, -2254, -2254,  2452,
    4622,  2453,  1294, -2254, -2254, -2254, -2254,  2455, -2254, -2254,
   -2254, -2254,   378,   107, -2254, -2254, -2254, -2254, -2254, -2254,
    2456, -2254, -2254,   107,   107, -2254, -2254, -2254, -2254, -2254,
    2458, -2254, -2254,  2459,   107, -2254, -2254, -2254, -2254, -2254,
    2460, -2254, -2254,   107,  2461,  2462,  2463,   107,   107,   -85,
    2466,  2467,  2468,  2469,  2470,  2471,   107,   107,   -85,  2473,
    2475,  2476,  2477,  2478,  2480,   107,   107,   -85,  2482,  2483,
    2484,   107,   378,   378,   378,   378,   378,  2486,   378,   378,
    2487,   107,   107,   378,   378,   378,   378,   378,  2488,   378,
     378,  2489,   107, -2254,   107,  2490, -2254,  2492,  2493, -2254,
   -2254,  3869, -2254,   887,  2494,  4992,   887,  1294,  4992,  2495,
   -2254,   887, -2254, -2254, -2254,   887, -2254,  4992,  2496,  1294,
    1294,  1294,  1294,  1294,  1294,  1294,  1294,  1294,  1294,  1294,
   -2254, -2254, -2254,  4992,   887,  1294,  4992,  2497, -2254, -2254,
    1623,  1623,   182,  4992,  1623,  1623,  4992,  4992,  1623,  1623,
    1294,  1294,  1294,  1294,  1294,  1294,  1834,  1294,  1294,  1294,
    3202, -2254,  1834,  1294,  1294,  1294,  1294,  1834,  1294,  1294,
    2498,  1294,  1294,  1294,  2499,  1294,  1294,  1602,  1294,  2006,
    1834,  1294,  1294, -2254, -2254,   182,   442,  4992,  4992, -2254,
   -2254, -2254,   182,  1602,  2501, -2254, -2254, -2254, -2254, -2254,
   -2254, -2254, -2254, -2254, -2254,  1294, -2254, -2254,  1623,  1294,
   -2254, -2254, -2254,  1442,  2502,  2503,  2505,  2506,  1294,  1294,
    2507,  1294, -2254,  2508,  2509,  2510,  1456, -2254, -2254, -2254,
     887, -2254, -2254, -2254, -2254,  2540, -2254, -2254,  1602,  2511,
    2541,  2543,  2544,  4992,  2545,  1602, -2254, -2254, -2254, -2254,
   -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254,
   -2254, -2254,   182,   887,   182, -2254,   182, -2254, -2254,   182,
   -2254,   182,  1602,  2550,  1602,  2552, -2254,  1294, -2254, -2254,
     378,   107, -2254, -2254,   107,  2553, -2254,   107, -2254,   378,
     378,   378,   378,   378,  2554,   378,   378,   107,   378,   378,
     378,   378,   378,  2555,   378,   378,   107,   378,   378,   378,
     378,   378,  2556,   378,   378,   107,   378, -2254, -2254, -2254,
   -2254, -2254,   107, -2254, -2254,  2557,   378,   378, -2254, -2254,
   -2254, -2254, -2254,   107, -2254, -2254,  2558,   378, -2254,   107,
   -2254, -2254,  1602, -2254,  4992,   887, -2254,  2559,  1602,  1294,
   -2254, -2254,  1602,  1294, -2254, -2254, -2254, -2254, -2254, -2254,
   -2254, -2254, -2254,  1294,  1294,   887, -2254,  2560,  1602,  1294,
    1623, -2254,    21,   887,  1294,  1623,   887,   887,  4992, -2254,
    1294,  2561,  2561,  1294,  1294,  2561,  1834,  2561, -2254,  4992,
    2002,  2014,  2024,  2054,  2062,  2077,  2099,  3202, -2254,  2103,
   -2254, -2254,  1834,  2561,  2561,  1294,  1294,  1834,  1657,  1294,
   -2254,  1294,  1294,  1294, -2254,  1294, -2254,  1623,  1294,  2562,
   -2254, -2254,  1294,  2561,   442,    53,  1602,  1602,   442,   182,
    2564, -2254, -2254, -2254,  2565,  1294, -2254,  2566,  2568,  2569,
    2571,  2572, -2254,  2573,  2574,  2575,  2576,  1294, -2254, -2254,
    2577,    -9,  4992, -2254,  2578,    -2,  4992, -2254, -2254, -2254,
   -2254, -2254, -2254, -2254, -2254, -2254,  2580,    -9,  1294, -2254,
   -2254, -2254,   107, -2254, -2254, -2254, -2254, -2254, -2254,   107,
   -2254, -2254,   378, -2254, -2254, -2254, -2254, -2254,   107, -2254,
   -2254,   378, -2254, -2254, -2254, -2254, -2254,   107, -2254, -2254,
     378, -2254,   378,   107, -2254, -2254,   378,   107, -2254, -2254,
    1294,   887, -2254,  4992,  4992,  1294,  4992,  1294, -2254, -2254,
   -2254,  4992,  4992,  1294, -2254, -2254,  2594, -2254,  4992, -2254,
   -2254, -2254,   887,  2581, -2254, -2254, -2254,  1834,  1294, -2254,
    2596, -2254, -2254,  1602,   863,  2598,  2597,  2599,  2600,  2601,
    2605, -2254,   442,  2606, -2254, -2254,  1834,  1294,  2609,  2618,
   -2254, -2254, -2254, -2254,  1294,  4992, -2254, -2254, -2254, -2254,
   -2254, -2254, -2254, -2254,    53,  2045,  1858, -2254, -2254, -2254,
     442,  2610,  2622,  2623, -2254, -2254, -2254,  2625,  2630,  2633,
   -2254, -2254, -2254,   259,    -9, -2254, -2254, -2254, -2254,  2637,
    4992, -2254, -2254, -2254, -2254, -2254,    -9, -2254,  2640, -2254,
     378, -2254,   378, -2254,   378, -2254, -2254,   378, -2254,   378,
    3869, -2254,   887,   887,  1294,   887,  2642,   887,   887,  1294,
   -2254,   887,  1294, -2254, -2254, -2254, -2254,  2643, -2254,  1294,
   -2254, -2254,  2645, -2254,  2647, -2254, -2254, -2254, -2254, -2254,
    1294, -2254, -2254, -2254,  2648,  1294, -2254, -2254, -2254, -2254,
   -2254,  1602, -2254, -2254, -2254,  2045, -2254,  2144,  2250,  1858,
   -2254, -2254, -2254,  2649,  2650, -2254, -2254, -2254, -2254, -2254,
   -2254,  1325,  1325, -2254, -2254,  1602, -2254, -2254, -2254, -2254,
   -2254, -2254, -2254,   887, -2254, -2254,  2652, -2254,  4622, -2254,
   -2254,  2653, -2254,  1834, -2254, -2254,  1834,  1294, -2254,  2654,
   -2254,  1294, -2254,  1834,  1294, -2254, -2254,  4992, -2254,  2144,
   -2254,   442, -2254,  2655,  2656,  1294,  1294,  1294,  1294,    -2,
    2658,  4622,  1602, -2254,  4622, -2254, -2254,  1294, -2254,  2660,
   -2254,  1294,   887, -2254, -2254, -2254,  2661,  2662,  1294,  2663,
    1294, -2254, -2254,  1602, -2254, -2254,  1602, -2254, -2254,  2666,
   -2254, -2254,  2667,  2668, -2254, -2254,  2669, -2254,  2672, -2254,
   -2254,  1834, -2254,  1834, -2254, -2254, -2254, -2254, -2254, -2254,
   -2254, -2254
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2254, -2254,    -3, -2254,   485, -1080, -1688, -1213,  2048, -2254,
    1165,  -499,  1848,   -55,   -21, -2254,  -315, -1960,  2126,   988,
   -1034, -2214, -1056,   601,  1610, -1737, -2254, -1244, -2254,  -754,
   -1303, -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254,
   -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254,
   -2254, -2254, -2254, -1475, -2254, -2254, -2254, -2254, -2254,  -575,
    -554, -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2253,
   -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254,
   -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254,
   -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254,
   -2254, -2254, -2254, -2254, -2254, -2254, -2254,   996, -2254, -2254,
   -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254,
   -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254,
   -2254, -2254, -2254, -2254, -2254, -2254, -2254,   491, -2254, -2254,
   -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254,  -297,  -142,
   -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254,
   -2254, -1733, -2254, -2254, -2254, -2254, -2254, -2254,  -809, -2254,
   -2254, -2254, -2254, -2254, -2254,   541, -2254, -2254, -2254, -2254,
    -298,  -817, -1109,  -462, -2254, -2254, -2254, -2254, -2254,  -481,
    -473, -2254, -2254, -2189, -2254, -2254, -2254, -2254, -2254, -2254,
   -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254,
   -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254,
   -2254,  1780, -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254,
   -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254,
   -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254, -2254,
   -2254
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1465
static const yytype_int16 yytable[] =
{
      74,   408,  2235,  1519,  1959,  1052,  1335,   834,   118,  1308,
    1311,  1789,  2250,   187,  1030,  1689,   344,   951,  2416,  2057,
    2418,   836,  1090,  1084,  1033,  3065,  2995,  1352,   120,   346,
     120,  1294,  3071,  1962,   342,  2275,   640,  1511,  1512,  1513,
      70,    71,   261,   369,   935,  1057,   120,   416,    70,    71,
    2309,  1339,   402, -1238,  1769,   413,   123,   428,   419,   641,
     710,  2014,   425,  1218,   479,   432,    70,    71,    70,    71,
     436,   438,    70,    71,   448,  1313,   642,   455,   459,   955,
    1314,   462,   120,  1864,   463,   464,   872,  1877,   472,  2026,
    1303,   473,  1210,   726,   474,    83,   786,    70,    71,    70,
      71,  1613,  1592,  1751,   692,   293,   514,  1778,    70,    71,
     495,   499,   504,   505,   509,   511,  1599,  1923,  1924,  1925,
    2255,   958,  1195,  1629,  1758,   174,   294,   631,   175,   295,
    1353,   515,  2030,  1633,  1719,  1099,  1636,   378,  1354,    60,
      70,    71,    70,    71,  1759,  1211,  2256,  1013,   171,  2257,
     120,   306,   693,    70,    71,   123,   125,  1671,   125,  1315,
     789,  2258,   176,   617,  1841,  1091,   524,   360,   277, -1464,
     177,  1197,  2023,  1931,   125,  1842,   120,   643,   371,   584,
     721,   592,  1477,   597,   601,  1316,  2259,   304,    70,    71,
     379,  2068,   558,  1593,   637,    70,    71,   583,  2222,    70,
      71,   380,  3066,   120,  2260,  1196,  1085,  2704,   314,  3072,
     125,   680,  1014,  1752,    70,    71,   873,  1779,   307,   632,
    1614,   120,   727,   296,  2717,  2718,  2719,   711,  1219,  2721,
      61,  2723,  2724,   361,   381,  2726,  2727,  2728,   178,   297,
    2730,  2731,   308,   837,   259,  2735,   131,  2737,  2738,  2261,
    2740,   838,   839,  1138,  1198,   128,   633,   128,  1317,   936,
    1220,  1720,    70,    71,   129,   130,   129,   130,   618,  2224,
    1100,   921,   728,   128,   952,   372,   694,    62,   125,  1058,
     298,   451,   129,   130,   330,  2227,   760,  1630,  1453,   924,
     332,   373,   840,   862,   946,  1963,  1212,   179,    63,  2024,
     120,  1579,   262,   309,   125,  1585,   120,   798,   799,   128,
     356,    70,    71,  1295,  2015,  3067,  1304,   265,   129,   130,
     856,   480,  3073,   843,   644,   845,   367,   452,    64,   263,
     180,   125,   181,   363,  1770,   848,   851,   299,   854,   858,
     645,   860,  2027,   623,  1340,   131,   712,   429,   937,   125,
      65,   870,   953,   444,    66,   300,   942,  1092,  1790,  2813,
    1368,   182,  2816,    72,   880,   882,   133,  2820,   133,    67,
    1355,  2821,   347,  2996,   927,  1341,  1318,   128,  1086,    70,
      71, -1238,  1213,   348,   133,  2031,   129,   130,   934,   374,
    2836,   941,   943,  1214,   945,   716,   722,  2310,   949,   950,
     120,   787,  2058,   128,  1753,   956,   713,   375,  1780,   964,
     966,   841,   129,   130,  1305,  1164,   967,   163,   627,   163,
     133,   970,   972,   382,   164,   165,   164,   165,   125,   973,
     128,  1215,   301,   975,   125,   163,  1761,   183,   386,   129,
     130,  2069,   164,   165,   368,   763,   120,   959,   128,  1721,
     387,  2223,   985,   986,  1782,   666,  2285,   129,   130,   990,
     991,   992,   993,   994,   995,   790,   997,  1343,  1139,   999,
    1000,   163,   439,  3148,  2583,  1983,    73,   682,   164,   165,
    2189,   388,  1454,  1987,  2404,  1573,  2918,  2025,   133,   445,
     302,  1029,  1015,  1037,   310,  2262,  1016,  1080,  1823,   173,
     185,  1021,  1022,  1023,  1024,  1025,  1026,   260,  1027,  2219,
     499,  1031,  1032,  2609,   133,   312,  1373,  1183,   316,  2929,
     499,  1034,  2225,   349,   401,  1184,  1185,   128,   125,  1498,
    1835,   412,  2248,   128,   446,   447,   129,   130,  2228,   163,
     947,   133,   129,   130,   311,   417,   164,   165,   104,   376,
     424,   358,   662,  1714,   123,  2018,  1219,  1140,    68,   133,
     410,  1655,   717,   450,  1045,   163,  1204,   389,  2290,  1656,
    1657,   415,   164,   165,   125,  2350,  1515,   266,  1186,   930,
    1067,  1068,   385,   359,   667,   907,  1081,  1344,  1220,   772,
     551,   489,   163,   364,  1038,  1374,   552,  1378,  1076,   164,
     165,  2982,   317,   624,   267,  2164,   105,   189,  2167,  3149,
     163,   422,   390,   764,   765,  1395,   106,   164,   165,   490,
     365,  2990,  1658,   107,   278,   190,  1349,   128,  1149,  2997,
     625,   780,  3000,  3001,  1102,  1574,   129,   130,   133,  1763,
    1129,   863,  1345,   553,   133,    70,    71,  1567,  1715,  1205,
    2019,   781,   908,   548,   556,  3150,    70,    71,  1276,   526,
     527,   528,   529,   530,   531,   532,   533,   534,   535,   279,
    1400,   554,   280,   128,  1989,  1046,  1379,  1144,   628,   912,
     864,   718,   129,   130,  3077,   113,  1277,   683,   440,   163,
    1748,   391,   281,  1346,  1375,   163,   164,   165,  1396,   465,
    1575,   392,   164,   165,   931,   629,   114,  1297,   668,  1169,
    1170,   282,   421,   773,  1716,   108,  2020,   318,  1431,  1568,
    1049,  1201,   423,   766,   393,  1163,   555,  1576,   283,  1187,
    1188,   123,   319,   394,   284,  1166,  2917,  1401,   133,  1397,
     865,   669,  2044,   782,   131,  1226,   913,   441,   549,  1464,
    2041,  1569,   395,  2055,  1764,   442,  1465,   774,   775,   647,
     427,  1283,  1171,   397,   115,  1047,  1050,  3091,   109,   434,
     893,   556,   557,  1659,  1660,  1380,   761,  1376,   322,  2081,
    2082,  1336,  1402,   932,   133,  1749,  1298,   285,  3102,   163,
     461,  1347,   471,   796,   797,  1225,   164,   165,   482,   323,
    1717,   324,  2021,   776,  1771,   110,   320,  1284,  2102,  2103,
     286,  3153,   663,  1755,  1306,  1189,   483,  1319,  2042,  1405,
    1765,  2111,  1398,  3156,   492,   853,  1190,  1191,  1411,  2112,
    2113,  1192,  2083,   909,  1059,   163,  1278,   895,   111,   664,
    1359,  2136,   164,   165,  1570,  1360,  1361,  1362,  1363,  2137,
    2138,  1364,  1718,  1366,  2022,  1367,   499,  1369,  1381,  1661,
    1337,  2104,   976,   116,  1193,   866,  1847,   777,   466,   467,
    1662,  1663,   922,   925,   928,  1664,   565,   938,  3164,  3165,
    2147,  3167,  2114,  3169,  3170,  1299,  1406,  3172,  2148,  2149,
     493,  1587,  1283,  2043,   778,  1412,  1444,  1416,   398,  1772,
    1644,  1279,  2139,  1571,  1409,  1865,  1694,  1653,  1665,  1060,
     485,  1992,  1993,  1172,  1173,   566,   487,   468,  1403,   974,
     512,   131,  2429,  1750,   567,   525,   287,   914,  1280,  2122,
    2123,   536,  1430,   977,  1434,  1695,  1869,   325,  1284,  1435,
    1436,  2150,  1437,  1438,  1440,  1442,  1443,  2419,  3190,  3200,
     884,   537,  1873,    70,    71,   538,   288,   289,  1756,  1338,
    1456,  1457,  1310,  1285,  1417,   561,  1757,  1461,  1462,   290,
     620,  1696,  1866,   291,   269,   117,  2579,  1283,   469,  1697,
    1286,  1287,  2124,  2084,  2085,  1698,   563,  1410,  1468,  1469,
    1470,  1471,  1472,  1994,  1474,   399,  1476,  1478,  3233,  1174,
    3213,  1879,   333,  1870,   326,   270,  2588,  1699,    70,    71,
    1175,  1176,  2105,  2106,   978,  1984,  2190,   885,   903,  1874,
    1493,  1494,  1495,  1284,  1497,   499,  1499,  2332,  1500,  2037,
    2477,  1700,  1504,  2115,  2116,  2607,  1883,  1773,  2665,  2666,
    2667,  2668,  2669,  2670,  2671,  2672,  2673,   594,  1177,  1701,
    1503,  2490,  1505,  2140,  2141,   327,  1645,   886,   887,   801,
     802,  2500,   648,  1654,  2503,  1508,   328,  1407,  1880,  2086,
    1887,  2510,   499,  1516,  1679,   803,  1413,   351,  1518,   621,
    2087,  2088,   622,  1288,  1289,   649,  2547,  1702,   639,  2550,
     271,   456,  2151,  2152,  1285,  1531,   658,  2558,  2107,  1535,
    2561,   656,   650,  1884,   659,  2514,  2515,   272,  2032,  2108,
    2109,  1286,  1287,  1578,  1580,  1583,   671,   979,  2089,  2117,
     804,  1588,   681,   980,  2191,   635,  1594,   805,   672,   687,
    2118,  2119,  1703,  2125,  2126,  2120,   806,  1888,   807,  2142,
     917,  1597,  1041,   808,  1648,  1418,   809,  2110,  1704,  1891,
    2143,  2144,   810,  1867,  1680,  2145,   811,  1895,  2516,   673,
    1607,  1705,   334,   812,   688,  2674,  1901,   888,  2121,  1909,
     335,   813,   336,   475,  2038,   696,   454,   273,  2153,  1285,
     814,   123,  2039,  2051,  1871,  2192,    70,    71,  2146,  2154,
    2155,   636,   352,  1706,  2156,   661,  1286,  1287,   889,   815,
    1875,   690,   457,  2033,    70,    71,  1307,  1159,  1707,  1042,
    1708,  1709,  2199,  2193,  1288,  1289,  1892,   237,  1732,  2127,
    1482,   651,   918,   816,  1896,  1167,   274,  2157,   476,   709,
    2128,  2129,  1483,  1902,   238,  2200,  1910,   275,   715,  1913,
     720,   817,  1681,  1682,   506,   674,  1754,   418,  2201,  1881,
    1733,  1710,   724,  1734,   818,   819,  1735,  1683,    70,    71,
     697,  2202,    70,    71,  2183,    70,    71,  1781,  2130,  1108,
    1109,   477,   725,  2034,   729,  2203,  2204,  1788,  2052,   820,
     353,  3112,    70,    71,  1885,  1110,  1736,  2656,   652,   758,
     675,   354,   458,   759,  1818,  1582,  1819,    70,    71,  1288,
    1289,  1820,  1821,  1822,  1684,   698,  1914,  1322,   821,  2517,
    2518,  1828,  1350,   762,  1829,   768,  1831,  1737,  1889,  3106,
    1738,  2194,   822,   507,   823,   186,  1947,   770,    70,    71,
    1111,   859,   784,  1833,   792,  1834,   919,  1112,  3123,   653,
     824,  2035,   794,  1838,  1839,   825,    70,    71,  2053,   795,
     654,   699,   861,   826,   971,  2523,  2524,   603,  1845,  1846,
     800,   827,   499,  1848,  1849,   835,  1113,    70,    71,   676,
    1851,   131,  1852,   604,   847,  1854,   868,  1855,   869,   677,
     871,    84,  2195,   828,    70,    71,  2703,    70,    71,  2045,
    1114,  1935,  1858,  1859,   875,  2519,   962,  1893,   605,   829,
     830,   877,   831,   883,  2003,  1897,  2520,  2521,  2525,  1115,
    2722,  2532,  2533,  2856,  1903,  1723,  2054,  1911,   606,  2872,
      85,  1432,   508,  1926,  2877,  2303,  1116,   911,  1927,   891,
     678,   916,  1928,  1117,  1929,  1930,  2046,  1941,   607,  1933,
    2205,  1118,   608,   832,  2522,    70,    71,  1724,    70,    71,
    1725,  2206,  2207,  2208,  2209,  1939,  1460,  1942,  1739,  1944,
    1945,  1946,  1948,  2764,  2534,  1950,  1951,   940,  1953,  1954,
      93,  1956,  2773,  1958,   609,   610,  1478,    70,    71,   948,
    1049,  2782,   730,  1726,  2004,   731,    93,  1915,  3206,  1971,
    1007,  1008,  1485,  1740,   893,  3210,  1977,   961,  1990,    86,
    1978,  1979,  1980,  1119,  2047,   732,  2904,    70,    71,  2186,
     968,   499,  1985,   969,  1727,  1988,  2010,  1728,   983,   431,
    1011,  1012,   435,  1998,  1741,  1999,  1050,  1120,  2001,    70,
      71,  2245,  1121,    76,  1122,    70,  1439,   611,   984,    77,
     987,   733,  1860,  1861,  1447,  1448,  2210,   734,   612,   988,
      87,    88,   989,  3247,   996,  3248,   998,   894,  1001,  2526,
    2527,   895,  1123,  1124,  1002,    70,    71,    70,    71,  1066,
    2048,  1125,  2005,  2006,  1862,  2059,  1071,  2060,  2842,  1072,
    2061,  2062,  1003,  2063,  1073,  2064,    78,  2007,  1075,  1450,
    1451,  2066,  1004,  1126,    94,  2067,    70,  1530,    89,    90,
     735,   896,   897,  1005,  2073,   849,   898,   878,  3006,    95,
    2414,  3009,   963,  3011,    79,  2535,  2536,  1006,   613,   614,
    1009,  2894,    70,    71,   496,    95,    70,    71,  2898,  3024,
    3025,   496,   497,   498,  2008,  1826,  1827,  1105,    96,   516,
    1106,  1107,    97,  3010,   539,  2528,   498,   899,  1035,  3043,
    2241,  2242,  1040,  1127,    96,  1729,  2529,  2530,  2415,  3023,
      91,  3029,  3030,  1036,  3028,   540,  1018,  1019,  2182,    80,
    1621,  1622,  1044,  1150,    70,    71,  2188,  1686,  1687,  1053,
    2307,  1055,   541,  1062,   850,  1064,   879,  2184,  2185,  2187,
    1730,  1065,  1078,  1083,  2531,   542,  1088,   615,  2928,  1094,
    2930,  2537,  2931,  1095,    98,  2932,   900,  2933,  1097,  2197,
    1098,   901,  2538,  2539,  2213,    81,  1103,   543,  1130,   517,
      98,   544,    70,    71,  2218,  1686,  1687,    70,    71,  2247,
    1686,  1687,  1131,  1132,  1134,  1136,   545,  1142,   902,   736,
    2244,  2246,   903,  1145,   518,   519,  1151,  1156,    99,  3012,
    2540,  2253,  1147,   520,  1157,   904,  2266,   100,   101,  1158,
    1160,  1161,  1785,  2272,    99,  1165,  1162,  1168,  2614,   737,
     738,  3032,  1181,   100,   101,  3036,  1178,   521,  2278,  1179,
    1180,  3041,   739,  1182,  2281,   546,   740,   522,  2283,  1632,
    2286,  2287,  1194,  2289,  2291,  2292,  1206,  2295,  1208,  1209,
    2298,  2299,  2300,  1216,  2302,  2304,  2305,  2306,  2308,  2311,
    2313,  2314,  1217,  1222,  1223,  2316,  2317,  2318,  2319,  1224,
    1832,  1275,  1282,  1291,  1293,  2325,  2326,  1301,  2659,  2328,
    2329,  2330,  1302,  1358,  1840,  2333,  2334,    70,    71,  1370,
    1686,  1687,  1356,  1365,  1357,  1372,  1383,  1387,  2337,  2338,
    1371,  2339,  2340,  1384,  1385,  1386,  1388,  1389,  1390,  1393,
    1391,  1392,  1394,  1415,  1422,  3050,  1420,  1421,  1423,  1424,
    1425,  1426,  1445,  1427,  1428,  1429,  1446,  1449,  1452,  1521,
    1525,  1459,  1264,  1466,  1467,   343,  1458,  1473,  2680,  1463,
    1475,  1480,  1481,  1484,  1486,  1487,  3104,  3105,  1265,  1489,
    3108,  1491,  3110,  1501,  1502,  1506,  1523,  1266,  1522,  1526,
    1527,  1572,  1528,  1529,  1584,  3121,  3122,  2385,  1267,  1586,
    1590,  3127,  3128,  2378,  3129,  2379,  2380,  1595,  3132,  1598,
    2381,  1600,  1601,  3133,  3134,  2383,  2386,  1533,  2388,  2389,
    2390,  1534,  2391,  2392,  1604,  2394,  1605,  2395,  2396,  1608,
    2398,  2399,  1609,  2401,  1268,  2403,  1478,  1610,  1323,  1616,
    3205,  1617,  1624,  1618,  1619,  1623,  1324,  1625,  2412,  1626,
    1627,  1966,  1967,  1628,  1325,   513,  2417,  1634,  1269,  1635,
    1666,  2422,  2423,  1637,  1638,  1640,  1642,  2425,  1650,  1652,
    1667,  1672,  1326,  2442,  3174,  1668,  2428,  3175,  1488,  1327,
    1669,  1673,  3178,  1674,  1675,  2448,  1676,   240,  1492,  2453,
    1677,  1690,  1713,  1691,  3182,  1731,  1692,  3185,  1712,  1743,
    1693,  3186,  1744,  1746,  1722,  1742,  1328,  1745,  1747,  1766,
    1767,  1768,   241,  2457,  1270,   242,  1774,  1329,  1775,  1776,
    1762,  1777,  1783,  1786,  1787,  1784,  1817,   581,  1825,   588,
     591,  1836,   596,   600,  1837,  1843,  1844,  1509,  1510,  2467,
    2468,  1850,  1514,  1857,  2470,  1517,  1878,  1853,  1856,  1899,
    2472,  1900,  1905,   243,  1906,  1907,  1908,  1524,  1917,  1271,
     244,  1918,  1330,  1919,  1922,   685,  1920,  1921,  1936,  1937,
    1331,   245,   246,  1949,  1952,  1970,  1938,  3228,   247,  1943,
    1955,  3231,  1957,  1960,   701,   707,  1961,  1965,  1272,  1972,
     714,  2840,  2841,  1973,   719,  2844,  2845,  1974,  1986,  2848,
    2849,  3242,  1991,  2000,  -532,  2002,  2011,   248,  2036,  2049,
    2050,  2071,  2072,  2077,  2097,  3249,  2100,  2065,  3250,  3251,
    2131,  2040,  2133,  1332,  2135,  2012,  2159,   249,  2056,  2158,
    2160,  2013,  2161,  2165,  2166,  1273,  1333,  1274,  2017,  2168,
    2169,    70,    71,  2170,  2173,   250,   251,  2028,  2177,  2029,
    2180,  2179,   252,  2196,  1334,   844,  2212,   121,   846,  2902,
    2217,  2574,  2575,  2231,  2577,  2232,  2229,  2220,  2221,   855,
    2226,  2233,  2230,  2234,  2236,  2237,  2238,   253,  2243,  2198,
    2239,  2254,  2240,  2264,  2215,  2216,  2269,  2280,  2282,  2284,
    2288,  2293,   876,  2296,  1678,  2322,  2297,  2589,  2590,  2591,
    2592,  2593,  2594,  2595,  2596,  2597,  2091,  2301,  2323,  3138,
    2315,  2324,  2336,  2249,  2335,  2341,  2342,  2343,  2101,  2344,
    2345,  2603,  2346,  2605,   254,  2347,  2268,  2348,  2349,  2494,
    2351,  2352,  2353,  2466,  2354,  2273,  2274,  2355,  2356,  2359,
    2162,  2163,  2357,  2613,   499,  2358,  2360,  2279,   124,  2617,
    2361,  2362,  2541,  2363,  2364,  2365,  2366,  2367,  2640,  2368,
    2620,  2621,  2622,  2623,  2624,  2625,  2626,  2627,  2628,  2629,
    2369,  2370,  2632,  2633,  2634,  2635,  2636,  2637,  2638,  2639,
     255,  2641,  2642,  2643,  2371,  2645,  2646,  2372,  2649,  2373,
    2650,  2651,  2652,  2374,   256,  2375,  2376,  2377,  2644,  2393,
    2397,  2405,  3138,  2400,   499,  2660,  2402,  2406,  2407,  2409,
    2411,  2424,  2552,  2430,  2431,  2432,   126,  1010,  2433,  2434,
    2469,  2994,  2471,  2474,  2475,  2476,  2999,   257,  2478,  2479,
    2483,  1020,  2480,  2485,  2486,  2487,  2491,  2492,  2889,  2493,
    1028,  2495,  2496,  2497,  2501,  2502,  2683,  2504,  2505,  2506,
    2507,  2511,  2512, -1256,  2513,  2542,  2675,  2543,  2676,  2544,
    2677,  2548,  2679,  2549,   499,  2681,  2551,  2682,  3038,  2553,
    2554,  2555,  2686,  2687,  2559,  2688,  2689,  2560,  2691,  2562,
    2693,  2564,  2565,  2567,  2568,  3014,  2571,  2709,  2578,  2580,
    2584,  2587,  2598,  2701,   132,  2702,  2599,  3015,  2600,  2705,
    2601,  2602,  2707,  2606,  2648,  2653,  2654,  3016,  2657,  2658,
    2661,  2664,  1934,  2684,  1069,  1070,  2685,  2690,  2692,  2694,
     404,  2695,  2696,  2698,  2699,  3221,  2706,  1074,   405,  2745,
    2710,  2711,  1077,  2712,  2713,  2714,  2743,  3017,  2746,  2748,
    2751,  1089,  2754,  2755,  2757,  3018,  2759,  2760,  2761,  2747,
    2765,  2766,  2864,  2767,  2768,  2769,  2770,  2774,  1969,  2775,
    3019,  2776,  2777,  2778,  1975,  2779,  2783,  2784,  3152,  2785,
    2792,  2795,  2803,  2806,  2809,  1981,  2810,  2811,  2814,  2819,
    2823,  2839,  3020,  2880,  2884,  2900,  3022,  2906,  2907,  2908,
    2909,  2912,  2914,  2915,  2916,  2921,  2812,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,  2919,  2922,  2923,  1017,  2924,
    2926,  1152,  1153,  1154,  1155,  2935,  2937,  2942,  2949,  2958,
    2967,  2973,  2977,  2983,  2991,  3004,   982,  3040,  3051,  3021,
    3052,  3054,  3055,  3056,  2817,  3057,  3058,  3059,  3060,  3061,
    3062,  3064,  3135,  3070,  3076,  3103,  2824,  2825,  2826,  2827,
    2828,  2829,  2830,  2831,  2832,  2833,  2834,  3196,  3198,  3100,
    3109,  3114,  2837,  3113,  3115,  3116,  3117,   499,   499,  3118,
    3120,   499,   499,  3125,  3142,   499,   499,  2850,  2851,  2852,
    2853,  2854,  2855,  3126,  2857,  2858,  2859,  3143,  3144,  3145,
    2873,  2874,  2875,  2876,  3146,  2878,  2879,  3147,  2881,  2882,
    2883,  3154,  2885,  2886,  3157,  2888,  3168,  3176,  2892,  2893,
    3179,  3180,  3183,  3191,  3193,  3194,  3201,  3204,  3192,  3208,
    3215,  3216,  3188,  3222,  3230,     0,  3234,  3235,  3237,  1321,
    3241,  3243,  2901,  3244,  3245,   499,  2903,  3246,  1399,  1791,
    2905,     0,     0,  2582,  1792,  2910,  2911,     0,  2913,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2482,     0,
       0,     0,   406,     0,     0,   407,  2488,  2489,     0,     0,
    1793,  1794,     0,  1795,  1796,     0,  2498,  2499,     0,     0,
       0,     0,     0,     0,     0,  1797,  2508,  2509,     0,     0,
       0,     0,     0,     0,  2608,     0,     0,     0,     0,  1798,
    1799,  2545,  2546,     0,  2938,     0,     0,  1800,  2267,     0,
    1801,     0,  2556,  2557,     0,     0,     0,     0,     0,  2563,
       0,     0,     0,     0,     0,     0,     0,     0,  1802,  2566,
       0,     0,     0,     0,     0,     0,     0,  1803,  1804,     0,
       0,  1805,  1611,  1612,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,  2321,  1806,     0,     0,  2985,     0,  2327,     0,
    2987,     0,  1670,     0,     0,     0,     0,     0,     0,     0,
    2988,  2989,     0,     0,     0,     0,  2993,   499,     0,     0,
       0,  2998,   499,     0,     0,     0,     0,  3003,     0,     0,
    3007,  3008,     0,     0,  1807,     0,     0,     0,     0,     0,
    1490,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  3026,  3027,  1496,     0,  3031,     0,  3033,  3034,
    3035,     0,  3037,     0,   499,  3039,     0,     0,     0,  3042,
       0,   741,   742,   743,     0,     0,     0,     0,     0,     0,
       0,     0,  3053,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  3063,  1507,     0,     0,   744,  1808,
       0,     0,     0,  2382,     0,  1809,     0,     0,  2387,     0,
       0,   745,     0,     0,     0,  3078,     0,     0,     0,     0,
       0,     0,     0,  1810,     0,     0,     0,   746,     0,     0,
       0,     0,     0,     0,  1811,     0,  2410,     0,     0,     0,
       0,     0,     0,     0,  2413,     0,     0,     0,     0,     0,
    2420,     0,     0,     0,     0,     0,     0,  3090,     0,     0,
       0,   747,  3094,     0,  3096,     0,  1812,  1813,     0,     0,
    3099,   748,     0,     0,     0,     0,     0,  2437,     0,     0,
       0,     0,     0,     0,  2444,  3107,  1603,     0,     0,     0,
       0,  1814,     0,   749,     0,     0,     0,     0,     0,     0,
       0,     0,   750,     0,  3124,     0,     0,     0,     0,     0,
       0,  3130,     0,     0,     0,  3163,     0,     0,     0,     0,
       0,     0,   751,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1815,
    3151,     0,     0,     0,     0,     0,     0,     0,   752,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2750,     0,     0,     0,     0,     0,
       0,  3166,     0,     0,  2752,  2753,  3171,     0,     0,  3173,
    1760,   599,     0,     0,     0,  2756,  3177,     0,     0,     0,
     753,     0,     0,     0,  2758,   754,   121,  3181,  2762,  2763,
       0,     0,  3184,     0,     0,     0,     0,  2771,  2772,     0,
       0,     0,   755,     0,     0,   756,  2780,  2781,     0,     0,
       0,  2895,  2786,     0,     0,     0,     0,  3203,  3195,  3197,
       0,     0,  2796,  2797,     0,     0,  1824,     0,   123,     0,
       0,     0,     0,  2807,     0,  2808,  1830,     0,     0,  2572,
       0,     0,     0,     0,  3207,     0,     0,     0,  3209,     0,
    3224,  3211,     0,  3227,     0,     0,     0,     0,     0,     0,
       0,     0,  3217,  3218,  3219,  3220,     0,     0,     0,     0,
       0,     0,  2586,     0,  3229,     0,     0,   124,  3232,     0,
       0,     0,     0,     0,     0,  3236,     0,  3238,  2074,  2075,
    2076,     0,     0,     0,     0,     0,  2078,  2079,  2080,     0,
       0,     0,     0,  2090,     0,     0,  2092,  2093,  2094,  2610,
    2611,  2095,  2096,     0,  2098,  2099,     0,     0,     0,     0,
       0,     0,     0,  2612,     0,     0,     0,     0,  2615,  2616,
       0,     0,  2860,     0,  2618,  2619,     0,     0,     0,     0,
       0,     0,     0,     0,  2861,   126,     0,     0,  2171,  2172,
       0,     0,  2174,  2175,     0,  2176,     0,  2178,  1932,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1323,  2862,     0,     0,  1940,     0,  2655,     0,
    1324,     0,     0,     0,     0,     0,     0,     0,  1325,  2662,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1326,  1968,     0,     0,
       0,     0,     0,  1327,     0,  1976,  2863,     0,   131,     0,
       0,     0,  2940,   132,     0,  2941,  1982,     0,  2943,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2952,     0,
    1328,     0,  2678,  1997,     0,     0,     0,  2961,     0,  3044,
     120,  1329,     0,  3049,     0,  2009,  2970,     0,     0,     0,
    2016,     0,     0,  2972,     0,   121,  2697,     0,     0,     0,
       0,     0,     0,     0,  2976,     0,     0,     0,     0,     0,
    2979,     0,     0,     0,     0,     0,     0,     0,     0,   122,
       0,     0,     0,     0,  2716,     0,  1330,     0,     0,  2720,
       0,     0,     0,     0,  1331,  2725,     0,   123,     0,     0,
    2729,     0,     0,     0,  2732,     0,  2734,     0,  2736,     0,
       0,  2739,     0,  2741,     0,     0,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,     0,     0,   124,  1332,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1333,     0,     0,     0,     0,     0,     0,  3119,   125,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1334,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2864,     0,  2865,     0,     0,  3141,     0,  2181,     0,     0,
       0,     0,     0,  3079,     0,     0,     0,     0,     0,     0,
    3080,     0,     0,     0,   126,     0,    70,    71,     0,  3082,
       0,     0,     0,     0,     0,     0,  2214,     0,  3084,     0,
       0,     0,   121,     0,  3087,     0,     0,     0,  3089,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    70,    71,
    2866,     0,     0,     0,     0,   338,     0,   127,  2251,     0,
       0,  2252,     0,     0,   121,     0,  2265,   128,     0,     0,
       0,     0,  2270,  2271,   123,     0,   129,   130,  1996,     0,
       0,  2276,     0,     0,     0,     0,     0,   131,  2277,     0,
       0,     0,   132,   121,     0,  2887,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   123,     0,     0,     0,
       0,  2899,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   124,     0,     0,     0,     0,     0,     0,
       0,  2320,     0,     0,     0,     0,  3214,     0,     0,     0,
       0,     0,     0,  2331,     0,     0,     0,  2473,     0,     0,
       0,     0,     0,     0,     0,   124,  2920,     0,     0,     0,
       0,  2481,     0,  2927,     0,     0,     0,     0,     0,     0,
       0,  2484,     0,     0,     0,     0,     0,     0,   133,     0,
       0,     0,     0,     0,   124,     0,     0,     0,     0,     0,
    2934,   126,  2936,     0,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   126,     0,     0,     0,     0,     0,   163,
       0,     0,     0,     0,   339,     0,   164,   165,     0,     0,
       0,     0,     0,  2569,     0,     0,  2384,  2570,     0,     0,
       0,     0,   126,     0,     0,     0,     0,     0,     0,     0,
    2980,     0,     0,     0,   131,     0,  2984,     0,     0,   132,
    2986,     0,     0,  2408,     0,     0,     0,     0,     0,     0,
     340,     0,  1199,     0,     0,     0,  2992,  1200,     0,     0,
       0,  2421,     0,     0,     0,     0,   131,     0,     0,     0,
       0,   132,     0,     0,  2426,     0,  2427,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2436,     0,     0,  2438,
    2439,  2440,  2441,  2443,     0,  2445,     0,     0,     0,  2446,
     132,     0,     0,     0,  2447,  2449,  2450,  2451,  2452,  2454,
       0,     0,  2455,  2456,  3047,  3048,  1646,     0,  2458,  2459,
    2460,  2461,   341,     0,  2462,  2463,     0,     0,     0,     0,
       0,  2464,  2465,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
       0,     0,     0,     0,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,     0,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,  3111,     0,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,  2573,     0,     0,  2576,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2581,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2585,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
    1647,     0,  2749,  2604,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  3187,
       0,     0,     0,     0,     0,     0,   121,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     569,     0,     0,  3199,     0,     0,     0,     0,     0,     0,
       0,     0,  2787,  2788,  2789,  2790,  2791,  2647,  2793,  2794,
       0,     0,     0,  2798,  2799,  2800,  2801,  2802,     0,  2804,
    2805,     0,     0,     0,     0,     0,     0,     0,   570,   571,
    2663,   702,     0,   121,   572,     0,     0,     0,     0,     0,
    3225,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   573,   574,     0,
       0,  3239,     0,     0,  3240,     0,     0,   124,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   703,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,     0,     0,     0,     0,
    2700,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   124,     0,  2708,     0,     0,     0,
       0,     0,     0,  2715,     0,   126,     0,     0,     0,     0,
     704,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     575,     0,     0,     0,     0,  2733,     0,     0,     0,     0,
       0,     0,     0,     0,  2742,     0,     0,     0,  2744,     0,
     576,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   126,     0,     0,   577,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2939,     0,   705,   132,     0,     0,     0,     0,     0,  2944,
    2945,  2946,  2947,  2948,     0,  2950,  2951,     0,  2953,  2954,
    2955,  2956,  2957,     0,  2959,  2960,     0,  2962,  2963,  2964,
    2965,  2966,     0,  2968,  2969,     0,  2971,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2974,  2975,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2978,     0,   578,
     132,     0,     0,  2815,     0,     0,  2818,     0,     0,     0,
     579,     0,     0,     0,     0,  2822,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2835,     0,     0,  2838,     0,     0,     0,     0,     0,
       0,  2843,     0,     0,  2846,  2847,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,     0,   580,     0,   706,     0,     0,
       0,     0,     0,     0,     0,  2896,  2897,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2925,  3081,     0,  1227,  1228,  1229,     0,     0,     0,
       0,  3083,     0,     0,     0,     0,     0,  1536,  1537,  1538,
    3085,     0,  3086,     0,     0,     0,  3088,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1230,  1231,     0,
       0,  1232,     0,     0,  1233,     0,     0,     0,     0,     0,
    1539,  1540,  1234,   121,  1541,     0,  1235,     0,     0,     0,
       0,  1542,     0,     0,     0,  1543,  1236,  1237,     0,  1544,
       0,     0,     0,     0,  1238,  1239,     0,     0,     0,  1545,
    1546,   121,     0,     0,     0,  1240,     0,  1547,     0,     0,
       0,     0,  1241,     0,     0,   123,     0,     0,  1548,     0,
    1242,     0,  2981,     0,  1243,  1244,     0,     0,  1245,     0,
       0,     0,     0,     0,     0,     0,     0,  1549,  1550,     0,
       0,  1551,     0,   123,     0,     0,     0,     0,  1246,     0,
    3158,     0,  3159,     0,  3160,     0,  3002,  3161,     0,  3162,
       0,  1552,     0,     0,   124,     0,     0,  3013,     0,     0,
       0,     0,  1247,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1553,     0,     0,     0,     0,
       0,     0,   124,     0,     0,     0,     0,     0,     0,     0,
       0,  1248,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1554,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1555,     0,     0,     0,  1249,     0,
    3069,     0,   126,     0,  3075,   121,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     126,     0,     0,     0,  1250,     0,  1251,     0,     0,     0,
       0,     0,  1252,  1253,     0,     0,     0,  1556,     0,  1557,
     586,     0,     0,     0,     0,  1558,  1559,     0,     0,  1254,
    1255,  3092,  3093,     0,  3095,     0,     0,     0,     0,  3097,
    3098,  1256,  1257,  1560,     0,   131,  3101,     0,     0,     0,
     132,   121,     0,     0,     0,  1561,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   124,     0,     0,     0,
       0,     0,  1258,   131,  1259,     0,     0,     0,   132,     0,
       0,     0,     0,  3131,     0,  1562,     0,  1563,     0,  1260,
       0,  1261,     0,  1602,     0,     0,     0,     0,  1262,     0,
    1564,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1565,     0,     0,     0,   590,     0,     0,  3155,     0,
       0,     0,     0,     0,     0,     0,   121,     0,     0,     0,
       0,     0,  1263,     0,   126,     0,     0,     0,     0,     0,
       0,     0,   124,     0,     0,  1566,     0,     0,     0,     0,
       0,     0,     0,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,  2435,
     126,   121,   132,     0,     0,     0,  3202,   124,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  3212,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  3223,
       0,     0,  3226,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   126,     0,     0,   132,   587,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   124,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   132,     0,     0,     0,     0,     0,     0,
     126,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   132,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,     1,
       0,     0,     2,     0,     0,     3,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     4,
       0,     0,     0,     0,     0,     5,     6,     0,     0,     0,
       7,     8,     9,     0,     0,     0,     0,     0,     0,     0,
      10,     0,     0,     0,     0,     0,     0,    11,     0,    12,
      13,     0,     0,     0,     0,     0,     0,     0,     0,    14,
      15,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    16,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    17,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    18,     0,
       0,     0,     0,     0,    19,     0,     0,     0,    20,     0,
       0,     0,    21,    22,     0,     0,     0,     0,    23,    24,
       0,     0,    25,     0,     0,     0,     0,     0,    26,   192,
       0,     0,   193,     0,    27,   194,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,     0,     0,     0,    29,
      30,    31,     0,     0,    32,    33,   195,     0,     0,     0,
     196,   197,   198,     0,     0,     0,     0,    34,     0,     0,
     199,    35,   200,     0,     0,     0,     0,   201,     0,   202,
     203,   204,     0,     0,     0,     0,     0,   205,     0,   206,
       0,     0,     0,    36,     0,    37,    38,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    39,     0,
      40,     0,     0,     0,     0,     0,     0,    41,     0,     0,
       0,    42,     0,     0,   207,    43,     0,    44,    45,     0,
      46,     0,     0,     0,     0,    47,     0,     0,     0,     0,
       0,     0,     0,     0,   208,     0,     0,     0,     0,     0,
       0,    48,     0,   209,     0,   210,   211,    49,   212,   213,
       0,     0,   214,     0,     0,     0,   215,     0,   216,     0,
       0,     0,     0,     0,   217,     0,    50,     0,    51,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    52,     0,    53,   218,   219,     0,     0,     0,   220,
      54,     0,     0,    55,    56,     0,     0,   221,     0,     0,
       0,   222,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   223,    57,   224,     0,     0,     0,     0,
       0,     0,   225,    58,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   226,     0,
     227,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   228,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   229,     0,   230,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   231,     0,
       0,     0,     0,     0,     0,     0,   232,     0,     0,     0,
       0,     0,   233,     0,   234,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   235
};

static const yytype_int16 yycheck[] =
{
       3,    56,  1735,  1083,  1479,   559,   823,   322,    11,   818,
     819,     5,  1749,    16,   513,  1228,    37,     4,  1978,    16,
    1980,     4,     4,     4,   523,    34,     5,     5,     4,     5,
       4,    16,    34,    50,    37,  1772,    49,  1071,  1072,  1073,
       3,     4,    66,    46,    18,    89,     4,     5,     3,     4,
       5,     5,    55,     0,     5,    58,    61,    34,    61,    72,
       5,    21,    65,    13,     5,    68,     3,     4,     3,     4,
      73,    74,     3,     4,    77,    38,    89,    80,    81,     4,
      43,    84,     4,  1386,    87,    88,   168,  1390,    91,    21,
      16,    94,    13,     4,    97,   328,     5,     3,     4,     3,
       4,   186,    16,    38,    47,     5,   127,    38,     3,     4,
     113,   114,   115,   116,   117,   118,  1150,  1420,  1421,  1422,
      27,     4,    95,    16,   260,    47,    26,     4,    50,    29,
     108,   134,    21,  1189,    28,   149,  1192,    55,   116,    72,
       3,     4,     3,     4,   280,    66,    53,     5,    35,    56,
       4,     5,    95,     3,     4,    61,   132,  1213,   132,   122,
       5,    68,    84,   247,     5,   147,   169,     4,    15,     0,
      92,    95,    28,     4,   132,    16,     4,   190,    26,   200,
       4,   202,    32,   204,   205,   148,    93,   266,     3,     4,
     108,    20,   195,   107,   215,     3,     4,   200,    21,     3,
       4,   119,   211,     4,   111,   178,   187,  2421,     5,   211,
     132,   232,    70,   148,     3,     4,   298,   148,    72,    96,
     305,     4,   133,   123,  2438,  2439,  2440,   172,   178,  2443,
      11,  2445,  2446,    70,   152,  2449,  2450,  2451,   160,   139,
    2454,  2455,    96,   226,    72,  2459,   251,  2461,  2462,   156,
    2464,   234,   235,    18,   178,   231,   133,   231,   221,   233,
     210,   155,     3,     4,   240,   241,   240,   241,   352,    21,
     284,    72,   275,   231,   261,   123,   219,    58,   132,   323,
     180,   155,   240,   241,   326,    21,   289,   180,   106,    72,
      72,   139,   275,   348,    64,   312,   217,   219,    79,   155,
       4,   238,   326,   157,   132,  1122,     4,   310,   311,   231,
       4,     3,     4,   298,   274,   324,   242,    66,   240,   241,
     341,   262,   324,   326,   337,   328,   221,   201,   109,   353,
     252,   132,   254,    66,   285,   338,   339,   237,   341,   342,
     353,   344,   274,    66,   298,   251,   291,   324,   322,   132,
     131,   354,   339,   214,   135,   255,   260,   339,   352,  2573,
     859,   283,  2576,   226,   367,   368,   342,  2581,   342,   150,
     348,  2585,   348,   352,    72,   329,   339,   231,   359,     3,
       4,   328,   303,   359,   342,   274,   240,   241,   391,   237,
    2604,   394,   395,   314,   397,     5,   220,   352,   401,   402,
       4,   310,   399,   231,   339,   330,   351,   255,   339,   412,
     413,   394,   240,   241,   340,   730,   419,   393,    66,   393,
     342,   424,   425,   341,   400,   401,   400,   401,   132,   432,
     231,   352,   332,   436,   132,   393,  1253,   359,    39,   240,
     241,   270,   400,   401,   339,     5,     4,   330,   231,   343,
      51,   274,   455,   456,  1271,    21,   260,   240,   241,   462,
     463,   464,   465,   466,   467,   310,   469,    16,   233,   472,
     473,   393,     4,   214,  2211,  1509,   339,    15,   400,   401,
    1693,    82,   300,  1517,  1959,    32,  2700,   343,   342,   350,
     390,   512,   495,   113,   348,   402,   499,     4,  1307,    14,
      15,   504,   505,   506,   507,   508,   509,    22,   511,  1722,
     513,   514,   515,  2250,   342,    30,    43,     5,    62,  2733,
     523,   524,   274,    38,   339,    13,    14,   231,   132,  1028,
    1339,   339,  1745,   231,   395,   396,   240,   241,   274,   393,
     310,   342,   240,   241,   398,    60,   400,   401,    33,   397,
     339,    96,    66,    27,    61,    27,   178,   322,   339,   342,
     266,     5,   172,    78,    86,   393,    95,   168,   260,    13,
      14,     0,   400,   401,   132,  1878,  1075,   326,    66,    12,
     583,   584,     4,    42,   150,    66,   607,   136,   210,     5,
     214,     5,   393,   326,   214,   122,   220,    43,   601,   400,
     401,  2815,   146,   326,   353,  1661,    91,   163,  1664,   350,
     393,     5,   213,   173,   174,    95,   101,   400,   401,    33,
     353,  2835,    66,   108,     4,   181,   330,   231,   683,  2843,
     353,   102,  2846,  2847,   637,   182,   240,   241,   342,   145,
     661,    59,   191,   267,   342,     3,     4,    72,   122,   178,
     122,   122,   133,   131,   395,   396,     3,     4,     4,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,    49,
      66,   295,    52,   231,     4,   197,   122,   680,   326,    66,
      98,   291,   240,   241,  2937,    43,    32,   225,   220,   393,
      27,   292,    72,   242,   221,   393,   400,   401,   178,     4,
     247,   302,   400,   401,   137,   353,    64,    43,   274,    13,
      14,    91,   309,   129,   188,   200,   188,   261,   322,   144,
     155,   776,     4,   283,   325,   728,   350,   274,   108,   217,
     218,    61,   276,   334,   114,   738,  2696,   133,   342,    95,
     158,   307,  1559,   214,   251,   800,   133,   279,   226,     4,
     192,   176,   353,  1570,   260,   287,    11,   173,   174,   218,
       5,    69,    66,     4,   122,   287,   201,  2981,   253,   394,
      66,   395,   396,   217,   218,   221,   291,   304,    49,    13,
      14,    43,   178,   216,   342,   122,   122,   167,  3002,   393,
       5,   340,     4,   308,   309,   798,   400,   401,     4,    70,
     274,    72,   274,   219,    27,   290,   350,   115,    13,    14,
     190,  3064,   326,   156,   817,   303,    33,   820,   260,    66,
     326,     5,   178,  3076,     4,   340,   314,   315,    66,    13,
      14,   319,    66,   314,   220,   393,   182,   133,   323,   353,
     843,     5,   400,   401,   269,   848,   849,   850,   851,    13,
      14,   854,   326,   856,   326,   858,   859,   860,   304,   303,
     122,    66,    32,   221,   352,   283,  1365,   283,   173,   174,
     314,   315,   387,   388,   389,   319,   154,   392,  3092,  3093,
       5,  3095,    66,  3097,  3098,   221,   133,  3101,    13,    14,
      70,   238,    69,   335,   310,   133,   951,    66,   139,   122,
    1197,   247,    66,   328,    95,    66,    43,  1204,   352,   295,
       5,    24,    25,   217,   218,   193,     5,   222,   314,   434,
     221,   251,  2002,   260,   202,     4,   306,   314,   274,    13,
      14,   129,   935,   103,   937,    72,    66,   208,   115,   942,
     943,    66,   945,   946,   947,   948,   949,  1981,  3137,  3163,
      66,     5,    66,     3,     4,    72,   336,   337,   301,   221,
     963,   964,   139,   271,   133,   328,   309,   970,   971,   349,
      72,   108,   133,   353,    96,   333,  2189,    69,   283,   116,
     288,   289,    66,   217,   218,   122,   193,   178,   991,   992,
     993,   994,   995,   106,   997,   236,   999,  1000,  3212,   303,
    3189,    66,   232,   133,   275,   127,  2219,   144,     3,     4,
     314,   315,   217,   218,   184,  1514,   116,   133,   314,   133,
    1023,  1024,  1025,   115,  1027,  1028,  1029,  1836,  1031,   156,
    2086,   168,  1053,   217,   218,  2248,    66,   260,  2341,  2342,
    2343,  2344,  2345,  2346,  2347,  2348,  2349,    35,   352,   186,
    1053,  2107,  1055,   217,   218,   326,  1198,   173,   174,     4,
       5,  2117,    49,  1205,  2120,  1068,   337,   314,   133,   303,
      66,  2127,  1075,  1076,    90,    20,   314,    78,  1081,     5,
     314,   315,    97,   391,   392,    72,  2142,   224,    15,  2145,
     212,    86,   217,   218,   271,  1098,    72,  2153,   303,  1102,
    2156,   326,    89,   133,   267,    13,    14,   229,    27,   314,
     315,   288,   289,  1116,  1117,  1118,    39,   287,   352,   303,
      65,  1124,    97,   293,   224,     5,  1129,    72,    51,    72,
     314,   315,   269,   217,   218,   319,    81,   133,    83,   303,
      36,  1144,   220,    88,  1199,   314,    91,   352,   285,    66,
     314,   315,    97,   314,   170,   319,   101,    66,    66,    82,
    1163,   298,   392,   108,    80,  2378,    66,   283,   352,    66,
     400,   116,   402,   225,   301,   168,   226,   299,   303,   271,
     125,    61,   309,    27,   314,   285,     3,     4,   352,   314,
     315,    71,   193,   330,   319,   327,   288,   289,   314,   144,
     314,    33,   197,   122,     3,     4,   298,   722,   345,   287,
     347,   348,     4,   116,   391,   392,   133,    91,    22,   303,
       4,   208,   118,   168,   133,   740,   348,   352,   280,     5,
     314,   315,    16,   133,   108,    27,   133,   359,     4,    66,
       4,   186,   258,   259,    43,   168,  1249,    64,    40,   314,
      54,   388,     5,    57,   199,   200,    60,   273,     3,     4,
     253,    53,     3,     4,     5,     3,     4,  1270,   352,     4,
       5,   323,     4,   192,     4,    67,    68,  1280,   122,   224,
     281,  3014,     3,     4,   314,    20,    90,  2321,   275,     5,
     213,   292,   287,     4,  1297,    16,  1299,     3,     4,   391,
     392,  1304,  1305,  1306,   320,   298,   133,   822,   253,   217,
     218,  1314,   827,     5,  1317,     5,  1319,   121,   314,  3007,
     124,   224,   267,   122,   269,    70,    64,     5,     3,     4,
      65,   343,     5,  1336,     5,  1338,   232,    72,  3026,   326,
     285,   260,     4,  1346,  1347,   290,     3,     4,   192,     5,
     337,   344,     4,   298,    11,    13,    14,    48,  1361,  1362,
       5,   306,  1365,  1366,  1367,     5,   101,     3,     4,   292,
    1373,   251,  1375,    64,     5,  1378,     4,  1380,     4,   302,
       4,     4,   285,   328,     3,     4,  2420,     3,     4,   145,
     125,  1446,    45,    46,     5,   303,   408,   314,    89,   344,
     345,     4,   347,   106,    90,   314,   314,   315,    66,   144,
    2444,    13,    14,  2626,   314,    22,   260,   314,   109,  2632,
      43,   936,   221,  1426,  2637,    61,   161,     5,  1431,   133,
     353,     4,  1435,   168,  1437,  1438,   192,  1458,   129,  1442,
     232,   176,   133,   388,   352,     3,     4,    54,     3,     4,
      57,   243,   244,   245,   246,  1458,    11,  1460,   262,  1462,
    1463,  1464,  1465,  2519,    66,  1468,  1469,     4,  1471,  1472,
      30,  1474,  2528,  1476,   165,   166,  1479,     3,     4,     4,
     155,  2537,    49,    90,   170,    52,    30,   314,  3176,  1492,
       4,     5,  1007,   297,    66,  3183,  1499,     4,  1519,   122,
    1503,  1504,  1505,   238,   260,    72,    64,     3,     4,     5,
       4,  1514,  1515,     5,   121,  1518,  1537,   124,     4,   138,
       4,     5,   138,  1526,   328,  1528,   201,   262,  1531,     3,
       4,     5,   267,   214,   269,     3,     4,   228,   226,   220,
       4,   108,   195,   196,     4,     5,   338,   114,   239,     4,
     173,   174,     4,  3241,     4,  3243,     4,   129,     4,   217,
     218,   133,   297,   298,     4,     3,     4,     3,     4,   581,
     326,   306,   258,   259,   227,  1578,   588,  1580,  2612,   591,
    1583,  1584,     4,  1586,   596,  1588,   267,   273,   600,     4,
       5,  1594,     4,   328,   154,  1598,     3,     4,   221,   222,
     167,   173,   174,     4,  1607,    43,   178,    43,  2852,   169,
     154,  2855,   138,  2857,   295,   217,   218,     4,   309,   310,
       5,  2655,     3,     4,     8,   169,     3,     4,  2662,  2873,
    2874,     8,     9,    10,   320,     4,     5,   641,   198,    37,
     644,   645,   202,  2856,    58,   303,    10,   219,     5,  2893,
       4,     5,   394,   388,   198,   262,   314,   315,   202,  2872,
     283,     4,     5,   309,  2877,    79,   501,   502,  1689,   350,
    1179,  1180,   193,   685,     3,     4,     5,     6,     7,     4,
      61,     4,    96,   202,   122,   193,   122,  1690,  1691,  1692,
     297,     4,     4,   225,   352,   109,   225,   388,  2732,     5,
    2734,   303,  2736,     5,   264,  2739,   278,  2741,     4,  1712,
     225,   283,   314,   315,  1717,   396,     4,   131,   215,   117,
     264,   135,     3,     4,     5,     6,     7,     3,     4,     5,
       6,     7,   215,    72,    72,    72,   150,   260,   310,   306,
    1743,  1744,   314,     5,   142,   143,     5,     4,   308,  2858,
     352,  1754,   261,   151,     4,   327,  1759,   317,   318,     4,
       4,     4,  1277,  1766,   308,     5,   225,     4,  2267,   336,
     337,  2880,     5,   317,   318,  2884,    95,   175,  1781,    95,
      95,  2890,   349,     5,  1787,   199,   353,   185,  1791,  1188,
    1793,  1794,    95,  1796,  1797,  1798,     5,  1800,     4,     4,
    1803,  1804,  1805,     5,  1807,  1808,  1809,  1810,  1811,  1812,
    1813,  1814,     5,     5,     5,  1818,  1819,  1820,  1821,     4,
    1335,   320,     5,   108,     4,  1828,  1829,     4,  2327,  1832,
    1833,  1834,     5,     4,  1349,  1838,  1839,     3,     4,     4,
       6,     7,    16,   855,    16,     4,     4,    95,  1851,  1852,
     862,  1854,  1855,   106,     5,     5,    95,    95,     4,    95,
       5,     5,     5,     4,     4,  2899,     5,     5,     5,     5,
       4,     4,    70,     5,     5,     5,     4,     4,     4,   187,
     178,     5,    72,     4,     4,    37,    11,     4,  2387,    11,
       5,     5,     4,     4,     4,     4,  3005,  3006,    88,     5,
    3009,     4,  3011,     5,     5,     4,     4,    97,     5,   178,
       4,   320,     5,     4,   297,  3024,  3025,  1938,   108,   297,
     330,  3030,  3031,  1926,  3033,  1928,  1929,   322,  3037,     5,
    1933,     4,     4,  3042,  3043,  1938,  1939,    41,  1941,  1942,
    1943,    41,  1945,  1946,     4,  1948,     5,  1950,  1951,     5,
    1953,  1954,     5,  1956,   144,  1958,  1959,     5,   100,     4,
    3173,     4,   311,     5,     5,     5,   108,   311,  1971,     5,
       5,  1486,  1487,     5,   116,   127,  1979,     4,   168,     4,
       4,  1984,  1985,     5,     5,     5,     5,  1990,     5,     5,
       4,     4,   134,  2014,  3103,     5,  1999,  3106,  1010,   141,
       5,     5,  3111,     5,     5,  2026,    13,    19,  1020,  2030,
       5,   274,     5,   274,  3123,     4,   274,  3126,   274,   274,
     116,  3130,   274,     5,   116,    43,   168,   116,   242,   280,
     242,     5,    44,  2036,   224,    47,     4,   179,     5,     5,
      43,   242,   242,     4,     4,    60,     4,   199,     5,   201,
     202,     5,   204,   205,     5,     5,     5,  1069,  1070,  2062,
    2063,     4,  1074,     4,  2067,  1077,     5,   122,   122,     5,
    2073,     5,     4,    85,     5,     5,     4,  1089,     5,   269,
      92,     5,   224,     4,     4,   237,     5,     5,     5,     5,
     232,   103,   104,     4,     4,     4,    11,  3206,   110,    11,
       5,  3210,     5,     5,   256,   257,     5,     5,   298,     4,
     262,  2610,  2611,     4,   266,  2614,  2615,     4,     4,  2618,
    2619,  3230,     5,     4,     0,     5,   274,   139,   192,     4,
     285,     4,     4,     4,     4,  3244,     4,   225,  3247,  3248,
       5,   260,     5,   285,     5,   274,     5,   159,   238,   311,
       5,   274,     5,     4,     4,   345,   298,   347,   274,     5,
       4,     3,     4,     4,     4,   177,   178,   274,     5,   274,
    1685,     5,   184,     5,   316,   327,     5,    19,   330,  2678,
       5,  2184,  2185,     4,  2187,     4,   356,   274,   274,   341,
     274,     4,   356,     4,     4,     4,     4,   209,     4,  1714,
     356,     5,   356,     4,  1719,  1720,     5,     5,     5,   260,
     260,     4,   364,   260,  1226,     5,   260,  2220,  2221,  2222,
    2223,  2224,  2225,  2226,  2227,  2228,  1625,   260,     4,  3046,
     260,     4,     4,  1748,     5,     5,     5,     4,  1637,     5,
       5,  2244,     4,  2246,   256,     5,  1761,     5,     4,   311,
       5,     5,     4,   102,     5,  1770,  1771,     5,     4,     4,
    1659,  1660,     5,  2266,  2267,     5,     5,  1782,   110,  2272,
       5,     4,   311,     5,     5,     4,     4,     4,   352,     5,
    2283,  2284,  2285,  2286,  2287,  2288,  2289,  2290,  2291,  2292,
       5,     4,  2295,  2296,  2297,  2298,  2299,  2300,  2301,  2302,
     312,  2304,  2305,  2306,     4,  2308,  2309,     5,  2311,     5,
    2313,  2314,  2315,     4,   326,     5,     5,     4,   352,     5,
       4,     4,  3139,     5,  2327,  2328,     5,     4,     4,     4,
       4,     4,   311,     5,     5,     5,   178,   489,     5,     5,
       4,  2840,     5,     5,     5,     5,  2845,   359,     4,     4,
       4,   503,     5,     5,     5,     5,     4,     4,   352,     5,
     512,     5,     5,     5,     4,     4,    11,     5,     5,     5,
       5,     4,     4,   328,     5,     5,  2379,     5,  2381,     5,
    2383,     4,  2385,     4,  2387,  2388,     5,  2390,  2887,     5,
       5,     5,  2395,  2396,     4,  2398,  2399,     4,  2401,     5,
    2403,     4,     4,     4,     4,   403,     5,  2428,     5,     5,
       5,     5,     4,  2416,   256,  2418,     4,   403,     5,  2422,
       4,     4,  2425,     5,     5,     4,     4,   403,     5,     5,
       4,     4,  1444,     5,   586,   587,     5,     5,     4,     4,
      15,     4,     4,     4,     4,  3199,     5,   599,    23,  2470,
       5,     5,   604,     5,     5,     5,     4,   403,     5,     4,
       4,   613,     4,     4,     4,   403,     5,     5,     5,  2472,
       4,     4,   328,     5,     5,     5,     5,     4,  1490,     4,
     403,     5,     5,     5,  1496,     5,     4,     4,  3063,     5,
       4,     4,     4,     4,     4,  1507,     4,     4,     4,     4,
       4,     4,   403,     5,     5,     4,   403,     5,     5,     4,
       4,     4,     4,     4,     4,     4,  2571,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   380,   381,
     382,   383,   384,   385,   386,     5,     5,     4,   500,     5,
       5,   703,   704,   705,   706,     5,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,   440,     5,     4,  2867,
       5,     5,     4,     4,  2577,     4,     4,     4,     4,     4,
       4,     4,  3044,     5,     4,     4,  2589,  2590,  2591,  2592,
    2593,  2594,  2595,  2596,  2597,  2598,  2599,  3151,  3152,     5,
       4,     4,  2605,     5,     5,     5,     5,  2610,  2611,     4,
       4,  2614,  2615,     4,     4,  2618,  2619,  2620,  2621,  2622,
    2623,  2624,  2625,     5,  2627,  2628,  2629,     5,     5,     4,
    2633,  2634,  2635,  2636,     4,  2638,  2639,     4,  2641,  2642,
    2643,     4,  2645,  2646,     4,  2648,     4,     4,  2651,  2652,
       5,     4,     4,   403,     5,     5,     4,     4,  3139,     5,
       5,     5,  3135,     5,     4,    -1,     5,     5,     5,   821,
       4,     4,  2675,     5,     5,  2678,  2679,     5,   898,    22,
    2683,    -1,    -1,  2198,    27,  2688,  2689,    -1,  2691,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2097,    -1,
      -1,    -1,   277,    -1,    -1,   280,  2105,  2106,    -1,    -1,
      53,    54,    -1,    56,    57,    -1,  2115,  2116,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    68,  2125,  2126,    -1,    -1,
      -1,    -1,    -1,    -1,  2249,    -1,    -1,    -1,    -1,    82,
      83,  2140,  2141,    -1,  2747,    -1,    -1,    90,  1760,    -1,
      93,    -1,  2151,  2152,    -1,    -1,    -1,    -1,    -1,  2158,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,  2168,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,   121,    -1,
      -1,   124,  1172,  1173,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,  1824,   156,    -1,    -1,  2819,    -1,  1830,    -1,
    2823,    -1,  1212,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2833,  2834,    -1,    -1,    -1,    -1,  2839,  2840,    -1,    -1,
      -1,  2844,  2845,    -1,    -1,    -1,    -1,  2850,    -1,    -1,
    2853,  2854,    -1,    -1,   197,    -1,    -1,    -1,    -1,    -1,
    1012,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2875,  2876,  1026,    -1,  2879,    -1,  2881,  2882,
    2883,    -1,  2885,    -1,  2887,  2888,    -1,    -1,    -1,  2892,
      -1,    72,    73,    74,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2905,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2917,  1067,    -1,    -1,    99,   262,
      -1,    -1,    -1,  1935,    -1,   268,    -1,    -1,  1940,    -1,
      -1,   112,    -1,    -1,    -1,  2938,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   286,    -1,    -1,    -1,   128,    -1,    -1,
      -1,    -1,    -1,    -1,   297,    -1,  1968,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1976,    -1,    -1,    -1,    -1,    -1,
    1982,    -1,    -1,    -1,    -1,    -1,    -1,  2980,    -1,    -1,
      -1,   162,  2985,    -1,  2987,    -1,   329,   330,    -1,    -1,
    2993,   172,    -1,    -1,    -1,    -1,    -1,  2009,    -1,    -1,
      -1,    -1,    -1,    -1,  2016,  3008,  1158,    -1,    -1,    -1,
      -1,   354,    -1,   194,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   203,    -1,  3027,    -1,    -1,    -1,    -1,    -1,
      -1,  3034,    -1,    -1,    -1,  3090,    -1,    -1,    -1,    -1,
      -1,    -1,   223,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   402,
    3063,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   249,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2483,    -1,    -1,    -1,    -1,    -1,
      -1,  3094,    -1,    -1,  2493,  2494,  3099,    -1,    -1,  3102,
    1252,     4,    -1,    -1,    -1,  2504,  3109,    -1,    -1,    -1,
     291,    -1,    -1,    -1,  2513,   296,    19,  3120,  2517,  2518,
      -1,    -1,  3125,    -1,    -1,    -1,    -1,  2526,  2527,    -1,
      -1,    -1,   313,    -1,    -1,   316,  2535,  2536,    -1,    -1,
      -1,  2656,  2541,    -1,    -1,    -1,    -1,  3168,  3151,  3152,
      -1,    -1,  2551,  2552,    -1,    -1,  1308,    -1,    61,    -1,
      -1,    -1,    -1,  2562,    -1,  2564,  1318,    -1,    -1,  2181,
      -1,    -1,    -1,    -1,  3177,    -1,    -1,    -1,  3181,    -1,
    3201,  3184,    -1,  3204,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  3195,  3196,  3197,  3198,    -1,    -1,    -1,    -1,
      -1,    -1,  2214,    -1,  3207,    -1,    -1,   110,  3211,    -1,
      -1,    -1,    -1,    -1,    -1,  3218,    -1,  3220,  1608,  1609,
    1610,    -1,    -1,    -1,    -1,    -1,  1616,  1617,  1618,    -1,
      -1,    -1,    -1,  1623,    -1,    -1,  1626,  1627,  1628,  2251,
    2252,  1631,  1632,    -1,  1634,  1635,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2265,    -1,    -1,    -1,    -1,  2270,  2271,
      -1,    -1,    60,    -1,  2276,  2277,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,   178,    -1,    -1,  1668,  1669,
      -1,    -1,  1672,  1673,    -1,  1675,    -1,  1677,  1440,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   100,   101,    -1,    -1,  1458,    -1,  2320,    -1,
     108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,  2331,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   134,  1489,    -1,    -1,
      -1,    -1,    -1,   141,    -1,  1497,   144,    -1,   251,    -1,
      -1,    -1,  2751,   256,    -1,  2754,  1508,    -1,  2757,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2767,    -1,
     168,    -1,  2384,  1525,    -1,    -1,    -1,  2776,    -1,  2894,
       4,   179,    -1,  2898,    -1,  1537,  2785,    -1,    -1,    -1,
    1542,    -1,    -1,  2792,    -1,    19,  2408,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2803,    -1,    -1,    -1,    -1,    -1,
    2809,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      -1,    -1,    -1,    -1,  2436,    -1,   224,    -1,    -1,  2441,
      -1,    -1,    -1,    -1,   232,  2447,    -1,    61,    -1,    -1,
    2452,    -1,    -1,    -1,  2456,    -1,  2458,    -1,  2460,    -1,
      -1,  2463,    -1,  2465,    -1,    -1,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,   384,   385,   386,    -1,    -1,   110,   285,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     298,    -1,    -1,    -1,    -1,    -1,    -1,  3022,   132,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   316,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     328,    -1,   330,    -1,    -1,  3050,    -1,  1689,    -1,    -1,
      -1,    -1,    -1,  2942,    -1,    -1,    -1,    -1,    -1,    -1,
    2949,    -1,    -1,    -1,   178,    -1,     3,     4,    -1,  2958,
      -1,    -1,    -1,    -1,    -1,    -1,  1718,    -1,  2967,    -1,
      -1,    -1,    19,    -1,  2973,    -1,    -1,    -1,  2977,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
     388,    -1,    -1,    -1,    -1,    42,    -1,   221,  1750,    -1,
      -1,  1753,    -1,    -1,    19,    -1,  1758,   231,    -1,    -1,
      -1,    -1,  1764,  1765,    61,    -1,   240,   241,     4,    -1,
      -1,  1773,    -1,    -1,    -1,    -1,    -1,   251,  1780,    -1,
      -1,    -1,   256,    19,    -1,  2647,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,
      -1,  2663,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1823,    -1,    -1,    -1,    -1,  3191,    -1,    -1,    -1,
      -1,    -1,    -1,  1835,    -1,    -1,    -1,  2077,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   110,  2708,    -1,    -1,    -1,
      -1,  2091,    -1,  2715,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2101,    -1,    -1,    -1,    -1,    -1,    -1,   342,    -1,
      -1,    -1,    -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,
    2742,   178,  2744,    -1,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
     384,   385,   386,   178,    -1,    -1,    -1,    -1,    -1,   393,
      -1,    -1,    -1,    -1,   221,    -1,   400,   401,    -1,    -1,
      -1,    -1,    -1,  2173,    -1,    -1,  1938,  2177,    -1,    -1,
      -1,    -1,   178,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2812,    -1,    -1,    -1,   251,    -1,  2818,    -1,    -1,   256,
    2822,    -1,    -1,  1965,    -1,    -1,    -1,    -1,    -1,    -1,
     267,    -1,   178,    -1,    -1,    -1,  2838,   183,    -1,    -1,
      -1,  1983,    -1,    -1,    -1,    -1,   251,    -1,    -1,    -1,
      -1,   256,    -1,    -1,  1996,    -1,  1998,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2008,    -1,    -1,  2011,
    2012,  2013,  2014,  2015,    -1,  2017,    -1,    -1,    -1,  2021,
     256,    -1,    -1,    -1,  2026,  2027,  2028,  2029,  2030,  2031,
      -1,    -1,  2034,  2035,  2896,  2897,   183,    -1,  2040,  2041,
    2042,  2043,   339,    -1,  2046,  2047,    -1,    -1,    -1,    -1,
      -1,  2053,  2054,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   382,   383,   384,   385,   386,
      -1,    -1,    -1,    -1,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,    -1,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,  3013,    -1,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,  2183,    -1,    -1,  2186,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2197,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2213,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   382,   383,   384,   385,   386,
     387,    -1,  2482,  2245,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  3131,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,  3155,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2542,  2543,  2544,  2545,  2546,  2309,  2548,  2549,
      -1,    -1,    -1,  2553,  2554,  2555,  2556,  2557,    -1,  2559,
    2560,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    72,
    2332,    17,    -1,    19,    77,    -1,    -1,    -1,    -1,    -1,
    3202,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,   101,    -1,
      -1,  3223,    -1,    -1,  3226,    -1,    -1,   110,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   383,   384,   385,   386,    -1,    -1,    -1,    -1,
    2412,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   110,    -1,  2428,    -1,    -1,    -1,
      -1,    -1,    -1,  2435,    -1,   178,    -1,    -1,    -1,    -1,
     126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     193,    -1,    -1,    -1,    -1,  2457,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2466,    -1,    -1,    -1,  2470,    -1,
     213,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   178,    -1,    -1,   238,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2750,    -1,   198,   256,    -1,    -1,    -1,    -1,    -1,  2759,
    2760,  2761,  2762,  2763,    -1,  2765,  2766,    -1,  2768,  2769,
    2770,  2771,  2772,    -1,  2774,  2775,    -1,  2777,  2778,  2779,
    2780,  2781,    -1,  2783,  2784,    -1,  2786,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2796,  2797,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2807,    -1,   312,
     256,    -1,    -1,  2575,    -1,    -1,  2578,    -1,    -1,    -1,
     323,    -1,    -1,    -1,    -1,  2587,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2603,    -1,    -1,  2606,    -1,    -1,    -1,    -1,    -1,
      -1,  2613,    -1,    -1,  2616,  2617,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,   384,   385,   386,    -1,   388,    -1,   333,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2657,  2658,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2713,  2952,    -1,    20,    21,    22,    -1,    -1,    -1,
      -1,  2961,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,
    2970,    -1,  2972,    -1,    -1,    -1,  2976,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    54,    -1,
      -1,    57,    -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,
      53,    54,    68,    19,    57,    -1,    72,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    68,    82,    83,    -1,    72,
      -1,    -1,    -1,    -1,    90,    91,    -1,    -1,    -1,    82,
      83,    19,    -1,    -1,    -1,   101,    -1,    90,    -1,    -1,
      -1,    -1,   108,    -1,    -1,    61,    -1,    -1,   101,    -1,
     116,    -1,  2814,    -1,   120,   121,    -1,    -1,   124,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,   121,    -1,
      -1,   124,    -1,    61,    -1,    -1,    -1,    -1,   144,    -1,
    3080,    -1,  3082,    -1,  3084,    -1,  2848,  3087,    -1,  3089,
      -1,   144,    -1,    -1,   110,    -1,    -1,  2859,    -1,    -1,
      -1,    -1,   168,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   168,    -1,    -1,    -1,    -1,
      -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   197,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   197,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   207,    -1,    -1,    -1,   224,    -1,
    2922,    -1,   178,    -1,  2926,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     178,    -1,    -1,    -1,   260,    -1,   262,    -1,    -1,    -1,
      -1,    -1,   268,   269,    -1,    -1,    -1,   260,    -1,   262,
      64,    -1,    -1,    -1,    -1,   268,   269,    -1,    -1,   285,
     286,  2983,  2984,    -1,  2986,    -1,    -1,    -1,    -1,  2991,
    2992,   297,   298,   286,    -1,   251,  2998,    -1,    -1,    -1,
     256,    19,    -1,    -1,    -1,   298,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   110,    -1,    -1,    -1,
      -1,    -1,   328,   251,   330,    -1,    -1,    -1,   256,    -1,
      -1,    -1,    -1,  3035,    -1,   328,    -1,   330,    -1,   345,
      -1,   347,    -1,    61,    -1,    -1,    -1,    -1,   354,    -1,
     343,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   354,    -1,    -1,    -1,   321,    -1,    -1,  3070,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,   388,    -1,   178,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   110,    -1,    -1,   388,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   381,   382,   383,   384,   385,   386,   102,
     178,    19,   256,    -1,    -1,    -1,  3168,   110,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  3187,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  3201,
      -1,    -1,  3204,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   178,    -1,    -1,   256,   333,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
     384,   385,   386,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   256,    -1,    -1,    -1,    -1,    -1,    -1,
     178,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   381,   382,   383,   384,   385,   386,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   256,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,   384,   385,   386,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   381,   382,   383,   384,   385,   386,    44,
      -1,    -1,    47,    -1,    -1,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      -1,    -1,    -1,    -1,    -1,    70,    71,    -1,    -1,    -1,
      75,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,    94,
      95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,
     105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   130,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   140,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,
      -1,    -1,    -1,    -1,   159,    -1,    -1,    -1,   163,    -1,
      -1,    -1,   167,   168,    -1,    -1,    -1,    -1,   173,   174,
      -1,    -1,   177,    -1,    -1,    -1,    -1,    -1,   183,    44,
      -1,    -1,    47,    -1,   189,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   200,    -1,    -1,    -1,   204,
     205,   206,    -1,    -1,   209,   210,    71,    -1,    -1,    -1,
      75,    76,    77,    -1,    -1,    -1,    -1,   222,    -1,    -1,
      85,   226,    87,    -1,    -1,    -1,    -1,    92,    -1,    94,
      95,    96,    -1,    -1,    -1,    -1,    -1,   102,    -1,   104,
      -1,    -1,    -1,   248,    -1,   250,   251,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   263,    -1,
     265,    -1,    -1,    -1,    -1,    -1,    -1,   272,    -1,    -1,
      -1,   276,    -1,    -1,   139,   280,    -1,   282,   283,    -1,
     285,    -1,    -1,    -1,    -1,   290,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   159,    -1,    -1,    -1,    -1,    -1,
      -1,   306,    -1,   168,    -1,   170,   171,   312,   173,   174,
      -1,    -1,   177,    -1,    -1,    -1,   181,    -1,   183,    -1,
      -1,    -1,    -1,    -1,   189,    -1,   331,    -1,   333,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   346,    -1,   348,   209,   210,    -1,    -1,    -1,   214,
     355,    -1,    -1,   358,   359,    -1,    -1,   222,    -1,    -1,
      -1,   226,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   248,   389,   250,    -1,    -1,    -1,    -1,
      -1,    -1,   257,   398,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   283,    -1,
     285,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   312,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   331,    -1,   333,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   343,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   351,    -1,    -1,    -1,
      -1,    -1,   357,    -1,   359,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   398
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    44,    47,    50,    64,    70,    71,    75,    76,    77,
      85,    92,    94,    95,   104,   105,   130,   140,   153,   159,
     163,   167,   168,   173,   174,   177,   183,   189,   200,   204,
     205,   206,   209,   210,   222,   226,   248,   250,   251,   263,
     265,   272,   276,   280,   282,   283,   285,   290,   306,   312,
     331,   333,   346,   348,   355,   358,   359,   389,   398,   405,
      72,    11,    58,    79,   109,   131,   135,   150,   339,   442,
       3,     4,   226,   339,   406,   447,   214,   220,   267,   295,
     350,   396,   449,   328,     4,    43,   122,   173,   174,   221,
     222,   283,   454,    30,   154,   169,   198,   202,   264,   308,
     317,   318,   421,   456,    33,    91,   101,   108,   200,   253,
     290,   323,   458,    43,    64,   122,   221,   333,   406,   469,
       4,    19,    43,    61,   110,   132,   178,   221,   231,   240,
     241,   251,   256,   342,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
     384,   385,   386,   393,   400,   401,   408,   416,   417,   418,
     471,    35,   472,   408,    47,    50,    84,    92,   160,   219,
     252,   254,   283,   359,   407,   408,    70,   406,   474,   163,
     181,   475,    44,    47,    50,    71,    75,    76,    77,    85,
      87,    92,    94,    95,    96,   102,   104,   139,   159,   168,
     170,   171,   173,   174,   177,   181,   183,   189,   209,   210,
     214,   222,   226,   248,   250,   257,   283,   285,   312,   331,
     333,   343,   351,   357,   359,   398,   476,    91,   108,   527,
      19,    44,    47,    85,    92,   103,   104,   110,   139,   159,
     177,   178,   184,   209,   256,   312,   326,   359,   530,    72,
     408,    66,   326,   353,   618,    66,   326,   353,   617,    96,
     127,   212,   229,   299,   348,   359,   536,    15,     4,    49,
      52,    72,    91,   108,   114,   167,   190,   306,   336,   337,
     349,   353,   599,     5,    26,    29,   123,   139,   180,   237,
     255,   332,   390,   539,   266,   560,     5,    72,    96,   157,
     348,   398,   408,   561,     5,   562,    62,   146,   261,   276,
     350,   579,    49,    70,    72,   208,   275,   326,   337,   600,
     326,   616,    72,   232,   392,   400,   402,   601,    42,   221,
     267,   339,   406,   416,   418,   602,     5,   348,   359,   408,
     605,    78,   193,   281,   292,   606,     4,   607,    96,   579,
       4,    70,   614,    66,   326,   353,   615,   221,   339,   406,
     619,    26,   123,   139,   237,   255,   397,   621,    55,   108,
     119,   152,   341,   643,   644,     4,    39,    51,    82,   168,
     213,   292,   302,   325,   334,   353,   435,     4,   139,   236,
     645,   339,   406,   647,    15,    23,   277,   280,   417,   648,
     266,   652,   339,   406,   653,     0,     5,   408,    64,   406,
     443,   309,     5,     4,   339,   406,   444,     5,    34,   324,
     445,   138,   406,   446,   394,   138,   406,   448,   406,     4,
     220,   279,   287,   452,   214,   350,   395,   396,   406,   451,
     408,   155,   201,   450,   226,   406,    86,   197,   287,   406,
     453,     5,   406,   406,   406,     4,   173,   174,   222,   283,
     455,     4,   406,   406,   406,   225,   280,   323,   459,     5,
     262,   460,     4,    33,   461,     5,   462,     5,   466,     5,
      33,   467,     4,    70,   468,   406,     8,     9,    10,   406,
     412,   413,   414,   415,   406,   406,    43,   122,   221,   406,
     470,   406,   221,   416,   418,   406,    37,   117,   142,   143,
     151,   175,   185,   423,   406,     4,   408,   408,   408,   408,
     408,   408,   408,   408,   408,   408,   129,     5,    72,    58,
      79,    96,   109,   131,   135,   150,   199,   479,   131,   226,
     481,   214,   220,   267,   295,   350,   395,   396,   406,   463,
     482,   328,   485,   193,   486,   154,   193,   202,   488,    33,
      71,    72,    77,   100,   101,   193,   213,   238,   312,   323,
     388,   416,   490,   406,   418,   493,    64,   333,   416,   494,
     321,   416,   418,   495,    35,   496,   416,   418,   497,     4,
     416,   418,   498,    48,    64,    89,   109,   129,   133,   165,
     166,   228,   239,   309,   310,   388,   502,   247,   352,   508,
      72,     5,    97,    66,   326,   353,   516,    66,   326,   353,
     515,     4,    96,   133,   500,     5,    71,   418,   499,    15,
      49,    72,    89,   190,   337,   353,   509,   579,    49,    72,
      89,   208,   275,   326,   337,   510,   326,   514,    72,   267,
     512,   327,    66,   326,   353,   513,    21,   150,   274,   307,
     517,    39,    51,    82,   168,   213,   292,   302,   353,   518,
     418,    97,    15,   225,   525,   416,   528,    72,    80,   531,
      33,   532,    47,    95,   219,   533,   168,   253,   298,   344,
     534,   416,    17,    63,   126,   198,   333,   416,   535,     5,
       5,   172,   291,   351,   416,     4,     5,   172,   291,   416,
       4,     4,   220,   538,     5,     4,     4,   133,   406,     4,
      49,    52,    72,   108,   114,   167,   306,   336,   337,   349,
     353,    72,    73,    74,    99,   112,   128,   162,   172,   194,
     203,   223,   249,   291,   296,   313,   316,   420,     5,     4,
     406,   408,     5,     5,   173,   174,   283,   540,     5,   555,
       5,   542,     5,   129,   173,   174,   219,   283,   310,   543,
     102,   122,   214,   559,     5,   554,     5,   310,   557,     5,
     310,   558,     5,   556,     4,     5,   408,   408,   406,   406,
       5,     4,     5,    20,    65,    72,    81,    83,    88,    91,
      97,   101,   108,   116,   125,   144,   168,   186,   199,   200,
     224,   253,   267,   269,   285,   290,   298,   306,   328,   344,
     345,   347,   388,   563,   420,     5,     4,   226,   234,   235,
     275,   394,   419,   406,   416,   406,   416,     5,   406,    43,
     122,   406,   604,   408,   406,   416,   418,   603,   406,   423,
     406,     4,   417,    59,    98,   158,   283,   608,     4,     4,
     406,     4,   168,   298,   609,     5,   416,     4,    43,   122,
     406,   620,   406,   106,    66,   133,   173,   174,   283,   314,
     623,   133,   642,    66,   129,   133,   173,   174,   178,   219,
     278,   283,   310,   314,   327,   624,   625,    66,   133,   314,
     641,     5,    66,   133,   314,   622,     4,    36,   118,   232,
     613,    72,   408,   438,    72,   408,   439,    72,   408,   440,
      12,   137,   216,   612,   406,    18,   233,   322,   408,   436,
       4,   406,   260,   406,   441,   406,    64,   310,     4,   406,
     406,     4,   261,   339,   651,     4,   330,   649,     4,   330,
     650,     4,   423,   138,   406,   654,   406,   406,     4,     5,
     406,    11,   406,   406,   408,   406,    32,   103,   184,   287,
     293,   422,   422,     4,   226,   406,   406,     4,     4,     4,
     406,   406,   406,   406,   406,   406,     4,   406,     4,   406,
     406,     4,     4,     4,     4,     4,     4,     4,     5,     5,
     416,     4,     5,     5,    70,   406,   406,   412,   414,   414,
     416,   406,   406,   406,   406,   406,   406,   406,   416,   418,
     415,   406,   406,   415,   406,     5,   309,   113,   214,   480,
     394,   220,   287,   483,   193,    86,   197,   287,   484,   155,
     201,   464,   464,     4,   487,     4,   489,    89,   323,   220,
     295,   491,   202,   492,   193,     4,   423,   406,   406,   416,
     416,   423,   423,   423,   416,   423,   406,   416,     4,   505,
       4,   418,   503,   225,     4,   187,   359,   504,   225,   416,
       4,   147,   339,   507,     5,     5,   477,     4,   225,   149,
     284,   409,   406,     4,   511,   511,   511,   511,     4,     5,
      20,    65,    72,   101,   125,   144,   161,   168,   176,   238,
     262,   267,   269,   297,   298,   306,   328,   388,   573,   418,
     215,   215,    72,   521,    72,   522,    72,   523,    18,   233,
     322,   519,   260,   524,   406,     5,   478,   261,   526,   417,
     423,     5,   416,   416,   416,   416,     4,     4,     4,   408,
       4,     4,   225,   406,   420,     5,   406,   408,     4,    13,
      14,    66,   217,   218,   303,   314,   315,   352,    95,    95,
      95,     5,     5,     5,    13,    14,    66,   217,   218,   303,
     314,   315,   319,   352,    95,    95,   178,    95,   178,   178,
     183,   417,   546,   551,    95,   178,     5,   544,     4,     4,
      13,    66,   217,   303,   314,   352,     5,     5,    13,   178,
     210,   428,     5,     5,     4,   406,   417,    20,    21,    22,
      53,    54,    57,    60,    68,    72,    82,    83,    90,    91,
     101,   108,   116,   120,   121,   124,   144,   168,   197,   224,
     260,   262,   268,   269,   285,   286,   297,   298,   328,   330,
     345,   347,   354,   388,    72,    88,    97,   108,   144,   168,
     224,   269,   298,   345,   347,   320,     4,    32,   182,   247,
     274,   566,     5,    69,   115,   271,   288,   289,   391,   392,
     572,   108,   564,     4,    16,   298,   570,    43,   122,   221,
     571,     4,     5,    16,   242,   340,   406,   298,   572,   580,
     139,   572,   581,    38,    43,   122,   148,   221,   339,   406,
     582,   416,   408,   100,   108,   116,   134,   141,   168,   179,
     224,   232,   285,   298,   316,   585,    43,   122,   221,     5,
     298,   329,   589,    16,   136,   191,   242,   340,   590,   330,
     408,   591,     5,   108,   116,   348,    16,    16,     4,   406,
     406,   406,   406,   406,   406,   423,   406,   406,   415,   406,
       4,   423,     4,    43,   122,   221,   304,   610,    43,   122,
     221,   304,   611,     4,   106,     5,     5,    95,    95,    95,
       4,     5,     5,    95,     5,    95,   178,    95,   178,   625,
      66,   133,   178,   314,   629,    66,   133,   314,   640,    95,
     178,    66,   133,   314,   627,     4,    66,   133,   314,   626,
       5,     5,     4,     5,     5,     4,     4,     5,     5,     5,
     406,   322,   408,   437,   406,   406,   406,   406,   406,     4,
     406,   646,   406,   406,   417,    70,     4,     4,     5,     4,
       4,     5,     4,   106,   300,   424,   406,   406,    11,     5,
      11,   406,   406,    11,     4,    11,     4,     4,   406,   406,
     406,   406,   406,     4,   406,     5,   406,    32,   406,   457,
       5,     4,     4,    16,     4,   408,     4,     4,   423,     5,
     416,     4,   423,   406,   406,   406,   416,   406,   415,   406,
     406,     5,     5,   406,   418,   406,     4,   416,   406,   423,
     423,   424,   424,   424,   423,   415,   406,   423,   406,   409,
     506,   187,     5,     4,   423,   178,   178,     4,     5,     4,
       4,   406,   501,    41,    41,   406,    20,    21,    22,    53,
      54,    57,    64,    68,    72,    82,    83,    90,   101,   120,
     121,   124,   144,   168,   197,   207,   260,   262,   268,   269,
     286,   298,   328,   330,   343,   354,   388,    72,   144,   176,
     269,   328,   320,    32,   182,   247,   274,   574,   406,   238,
     406,   575,    16,   406,   297,   585,   297,   238,   406,   576,
     330,   577,    16,   107,   406,   322,   520,   406,     5,   424,
       4,     4,    61,   416,     4,     5,   537,   406,     5,     5,
       5,   428,   428,   186,   305,   426,     4,     4,     5,     5,
     541,   541,   541,     5,   311,   311,     5,     5,     5,    16,
     180,   427,   427,   426,     4,     4,   426,     5,     5,   545,
       5,   552,     5,   553,   552,   553,   183,   387,   417,   549,
       5,   548,     5,   552,   553,     5,    13,    14,    66,   217,
     218,   303,   314,   315,   319,   352,     4,     4,     5,     5,
     428,   426,     4,     5,     5,     5,    13,     5,   423,    90,
     170,   258,   259,   273,   320,   432,     6,     7,   406,   411,
     274,   274,   274,   116,    43,    72,   108,   116,   122,   144,
     168,   186,   224,   269,   285,   298,   330,   345,   347,   348,
     388,   565,   274,     5,    27,   122,   188,   274,   326,    28,
     155,   343,   116,    22,    54,    57,    90,   121,   124,   262,
     297,     4,    22,    54,    57,    60,    90,   121,   124,   262,
     297,   328,    43,   274,   274,   116,     5,   242,    27,   122,
     260,    38,   148,   339,   406,   156,   301,   309,   260,   280,
     416,   585,    43,   145,   260,   326,   280,   242,     5,     5,
     285,    27,   122,   260,     4,     5,     5,   242,    38,   148,
     339,   406,   585,   242,    60,   408,     4,     4,   406,     5,
     352,    22,    27,    53,    54,    56,    57,    68,    82,    83,
      90,    93,   111,   120,   121,   124,   156,   197,   262,   268,
     286,   297,   329,   330,   354,   402,   567,     4,   406,   406,
     406,   406,   406,   572,   416,     5,     4,     5,   406,   406,
     416,   406,   408,   406,   406,   572,     5,     5,   406,   406,
     408,     5,    16,     5,     5,   406,   406,   415,   406,   406,
       4,   406,   406,   122,   406,   406,   122,     4,    45,    46,
     195,   196,   227,   434,   434,    66,   133,   314,   637,    66,
     133,   314,   634,    66,   133,   314,   631,   434,     5,    66,
     133,   314,   628,    66,   133,   314,   639,    66,   133,   314,
     638,    66,   133,   314,   636,    66,   133,   314,   635,     5,
       5,    66,   133,   314,   630,     4,     5,     5,     4,    66,
     133,   314,   633,    66,   133,   314,   632,     5,     5,     4,
       5,     5,     4,   434,   434,   434,   406,   406,   406,   406,
     406,     4,   416,   406,   423,   417,     5,     5,    11,   406,
     416,   418,   406,    11,   406,   406,   406,    64,   406,     4,
     406,   406,     4,   406,   406,     5,   406,     5,   406,   457,
       5,     5,    50,   312,   465,     5,   408,   408,   416,   423,
       4,   406,     4,     4,     4,   423,   416,   406,   406,   406,
     406,   423,   416,   424,   415,   406,     4,   424,   406,     4,
     418,     5,    24,    25,   106,   425,     4,   416,   406,   406,
       4,   406,     5,    90,   170,   258,   259,   273,   320,   416,
     418,   274,   274,   274,    21,   274,   416,   274,    27,   122,
     188,   274,   326,    28,   155,   343,    21,   274,   274,   274,
      21,   274,    27,   122,   192,   260,   192,   156,   301,   309,
     260,   192,   260,   335,   585,   145,   192,   260,   326,     4,
     285,    27,   122,   192,   260,   585,   238,    16,   399,   406,
     406,   406,   406,   406,   406,   225,   406,   406,    20,   270,
     529,     4,     4,   406,   428,   428,   428,     4,   428,   428,
     428,    13,    14,    66,   217,   218,   303,   314,   315,   352,
     428,   427,   428,   428,   428,   428,   428,     4,   428,   428,
       4,   427,    13,    14,    66,   217,   218,   303,   314,   315,
     352,     5,    13,    14,    66,   217,   218,   303,   314,   315,
     319,   352,    13,    14,    66,   217,   218,   303,   314,   315,
     352,     5,   547,     5,   550,     5,     5,    13,    14,    66,
     217,   218,   303,   314,   315,   319,   352,     5,    13,    14,
      66,   217,   218,   303,   314,   315,   319,   352,   311,     5,
       5,     5,   427,   427,   426,     4,     4,   426,     5,     4,
       4,   428,   428,     4,   428,   428,   428,     5,   428,     5,
     408,   416,   418,     5,   406,   406,     5,   406,     5,   411,
     116,   224,   285,   116,   224,   285,     5,   406,   408,     4,
      27,    40,    53,    67,    68,   232,   243,   244,   245,   246,
     338,   429,     5,   406,   416,   408,   408,     5,     5,   411,
     274,   274,    21,   274,    21,   274,   274,    21,   274,   356,
     356,     4,     4,     4,     4,   565,     4,     4,     4,   356,
     356,     4,     5,     4,   406,     5,   406,     5,   411,   408,
     429,   416,   416,   406,     5,    27,    53,    56,    68,    93,
     111,   156,   402,   430,     4,   416,   406,   423,   408,     5,
     416,   416,   406,   408,   408,   429,   416,   416,   406,   408,
       5,   406,     5,   406,   260,   260,   406,   406,   260,   406,
     260,   406,   406,     4,   568,   406,   260,   260,   406,   406,
     406,   260,   406,    61,   406,   406,   406,    61,   406,     5,
     352,   406,   569,   406,   406,   260,   406,   406,   406,   406,
     416,   423,     5,     4,     4,   406,   406,   423,   406,   406,
     406,   416,   572,   406,   406,     5,     4,   406,   406,   406,
     406,     5,     5,     4,     5,     5,     4,     5,     5,     4,
     434,     5,     5,     4,     5,     5,     4,     5,     5,     4,
       5,     5,     4,     5,     5,     4,     4,     4,     5,     5,
       4,     4,     5,     5,     4,     5,     5,     4,   406,   406,
     406,   406,   423,   406,   416,   418,   406,   423,   406,   406,
     406,   406,   406,     5,   406,   406,   406,     4,   406,   406,
       5,   406,     5,   406,   457,     4,     4,     4,   416,     4,
     423,     4,   406,   423,   154,   202,   421,   406,   421,   424,
     423,   416,   406,   406,     4,   406,   416,   416,   406,   409,
       5,     5,     5,     5,     5,   102,   416,   423,   416,   416,
     416,   416,   418,   416,   423,   416,   416,   416,   418,   416,
     416,   416,   416,   418,   416,   416,   416,   406,   416,   416,
     416,   416,   416,   416,   416,   416,   102,   406,   406,     4,
     406,     5,   406,   428,     5,     5,     5,   426,     4,     4,
       5,   428,   427,     4,   428,     5,     5,     5,   427,   427,
     426,     4,     4,     5,   311,     5,     5,     5,   427,   427,
     426,     4,     4,   426,     5,     5,     5,     5,   427,   427,
     426,     4,     4,     5,    13,    14,    66,   217,   218,   303,
     314,   315,   352,    13,    14,    66,   217,   218,   303,   314,
     315,   352,    13,    14,    66,   217,   218,   303,   314,   315,
     352,   311,     5,     5,     5,   427,   427,   426,     4,     4,
     426,     5,   311,     5,     5,     5,   427,   427,   426,     4,
       4,   426,     5,   427,     4,     4,   427,     4,     4,   428,
     428,     5,   423,   416,   406,   406,   416,   406,     5,   411,
       5,   416,   408,   429,     5,   416,   423,     5,   411,   406,
     406,   406,   406,   406,   406,   406,   406,   406,     4,     4,
       5,     4,     4,   406,   416,   406,     5,   411,   408,   429,
     423,   423,   423,   406,   415,   423,   423,   406,   423,   423,
     406,   406,   406,   406,   406,   406,   406,   406,   406,   406,
     578,   586,   406,   406,   406,   406,   406,   406,   406,   406,
     352,   406,   406,   406,   352,   406,   406,   416,     5,   406,
     406,   406,   406,     4,     4,   423,   424,     5,     5,   415,
     406,     4,   423,   416,     4,   434,   434,   434,   434,   434,
     434,   434,   434,   434,   411,   406,   406,   406,   423,   406,
     415,   406,   406,    11,     5,     5,   406,   406,   406,   406,
       5,   406,     4,   406,     4,     4,     4,   423,     4,     4,
     416,   406,   406,   424,   425,   406,     5,   406,   416,   418,
       5,     5,     5,     5,     5,   416,   423,   425,   425,   425,
     423,   425,   424,   425,   425,   423,   425,   425,   425,   423,
     425,   425,   423,   416,   423,   425,   423,   425,   425,   423,
     425,   423,   416,     4,   416,   418,     5,   406,     4,   428,
     427,     4,   427,   427,     4,     4,   427,     4,   427,     5,
       5,     5,   427,   427,   426,     4,     4,     5,     5,     5,
       5,   427,   427,   426,     4,     4,     5,     5,     5,     5,
     427,   427,   426,     4,     4,     5,   427,   428,   428,   428,
     428,   428,     4,   428,   428,     4,   427,   427,   428,   428,
     428,   428,   428,     4,   428,   428,     4,   427,   427,     4,
       4,     4,   417,   425,     4,   416,   425,   406,   416,     4,
     425,   425,   416,     4,   406,   406,   406,   406,   406,   406,
     406,   406,   406,   406,   406,   416,   425,   406,   416,     4,
     415,   415,   424,   416,   415,   415,   416,   416,   415,   415,
     406,   406,   406,   406,   406,   406,   411,   406,   406,   406,
      60,    72,   101,   144,   328,   330,   388,   583,   584,   585,
     597,   598,   411,   406,   406,   406,   406,   411,   406,   406,
       5,   406,   406,   406,     5,   406,   406,   423,   406,   352,
     410,   411,   406,   406,   424,   408,   416,   416,   424,   423,
       4,   406,   415,   406,    64,   406,     5,     5,     4,     4,
     406,   406,     4,   406,     4,     4,     4,   421,   425,     5,
     423,     4,     5,     4,     5,   416,     5,   423,   424,   425,
     424,   424,   424,   424,   423,     5,   423,     4,   406,   428,
     427,   427,     4,   427,   428,   428,   428,   428,   428,     4,
     428,   428,   427,   428,   428,   428,   428,   428,     4,   428,
     428,   427,   428,   428,   428,   428,   428,     4,   428,   428,
     427,   428,   427,     4,   428,   428,   427,     4,   428,   427,
     423,   416,   425,     4,   423,   406,   423,   406,   406,   406,
     425,     4,   423,   406,   415,     5,   352,   425,   406,   415,
     425,   425,   416,   406,     4,   431,   431,   406,   406,   431,
     411,   431,   586,   416,   403,   403,   403,   403,   403,   403,
     403,   584,   403,   411,   431,   431,   406,   406,   411,     4,
       5,   406,   586,   406,   406,   406,   586,   406,   415,   406,
       5,   586,   406,   431,   408,   587,   588,   423,   423,   408,
     424,     4,     5,   406,     5,     4,     4,     4,     4,     4,
       4,     4,     4,   406,     4,    34,   211,   324,   473,   416,
       5,    34,   211,   324,   433,   416,     4,   473,   406,   427,
     427,   428,   427,   428,   427,   428,   428,   427,   428,   427,
     406,   425,   416,   416,   406,   416,   406,   416,   416,   406,
       5,   416,   425,     4,   586,   586,   410,   406,   586,     4,
     586,   423,   565,     5,     4,     5,     5,     5,     4,   408,
       4,   586,   586,   410,   406,     4,     5,   586,   586,   586,
     406,   416,   586,   586,   586,   587,   594,   595,   585,   592,
     593,   408,     4,     5,     5,     4,     4,     4,   214,   350,
     396,   406,   463,   473,     4,   416,   473,     4,   428,   428,
     428,   428,   428,   417,   425,   425,   406,   425,     4,   425,
     425,   406,   425,   406,   586,   586,     4,   406,   586,     5,
       4,   406,   586,     4,   406,   586,   586,   423,   594,   596,
     597,   403,   593,     5,     5,   406,   464,   406,   464,   423,
     425,     4,   416,   418,     4,   411,   410,   406,     5,   406,
     410,   406,   416,   597,   408,     5,     5,   406,   406,   406,
     406,   433,     5,   416,   418,   423,   416,   418,   586,   406,
       4,   586,   406,   425,     5,     5,   406,     5,   406,   423,
     423,     4,   586,     4,     5,     5,     5,   410,   410,   586,
     586,   586
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
#line 514 "frame/parser.Y"
    {fr->bgColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 5:
#line 515 "frame/parser.Y"
    {fr->useBgColorCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 7:
#line 517 "frame/parser.Y"
    {fr->centerCmd();;}
    break;

  case 8:
#line 518 "frame/parser.Y"
    {fr->clearCmd();;}
    break;

  case 10:
#line 520 "frame/parser.Y"
    {fr->colorbarTagCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 17:
#line 527 "frame/parser.Y"
    {fr->DATASECCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 23:
#line 533 "frame/parser.Y"
    {fr->hideCmd();;}
    break;

  case 24:
#line 534 "frame/parser.Y"
    {fr->highliteCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 25:
#line 535 "frame/parser.Y"
    {fr->highliteColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 29:
#line 539 "frame/parser.Y"
    {fr->irafAlignCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 38:
#line 548 "frame/parser.Y"
    {fr->nanColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 42:
#line 552 "frame/parser.Y"
    {fr->queryCursorCmd();;}
    break;

  case 45:
#line 555 "frame/parser.Y"
    {fr->resetCmd();;}
    break;

  case 51:
#line 561 "frame/parser.Y"
    {fr->showCmd();;}
    break;

  case 53:
#line 563 "frame/parser.Y"
    {fr->threadsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 55:
#line 565 "frame/parser.Y"
    {fr->unloadFitsCmd();;}
    break;

  case 57:
#line 567 "frame/parser.Y"
    {fr->msg("Frame 1.0");;}
    break;

  case 62:
#line 574 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 63:
#line 575 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 64:
#line 578 "frame/parser.Y"
    {yydebug=(yyvsp[(1) - (1)].integer);;}
    break;

  case 65:
#line 579 "frame/parser.Y"
    {DebugMosaic=(yyvsp[(2) - (2)].integer);;}
    break;

  case 66:
#line 580 "frame/parser.Y"
    {yydebug=(yyvsp[(2) - (2)].integer);;}
    break;

  case 67:
#line 581 "frame/parser.Y"
    {DebugPerf=(yyvsp[(2) - (2)].integer);;}
    break;

  case 68:
#line 582 "frame/parser.Y"
    {DebugWCS=(yyvsp[(2) - (2)].integer);;}
    break;

  case 69:
#line 583 "frame/parser.Y"
    {DebugBin=(yyvsp[(2) - (2)].integer);;}
    break;

  case 70:
#line 584 "frame/parser.Y"
    {DebugBlock=(yyvsp[(2) - (2)].integer);;}
    break;

  case 71:
#line 585 "frame/parser.Y"
    {DebugCompress=(yyvsp[(2) - (2)].integer);;}
    break;

  case 72:
#line 586 "frame/parser.Y"
    {DebugCrop=(yyvsp[(2) - (2)].integer);;}
    break;

  case 73:
#line 587 "frame/parser.Y"
    {DebugGZ=(yyvsp[(2) - (2)].integer);;}
    break;

  case 74:
#line 588 "frame/parser.Y"
    {DebugRGB=(yyvsp[(2) - (2)].integer);;}
    break;

  case 75:
#line 591 "frame/parser.Y"
    {(yyval.integer)=((yyvsp[(1) - (1)].integer) ? 1 : 0);;}
    break;

  case 76:
#line 593 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 77:
#line 594 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 78:
#line 595 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 79:
#line 596 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 80:
#line 598 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 81:
#line 599 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 82:
#line 600 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 83:
#line 601 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 84:
#line 604 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 85:
#line 605 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 86:
#line 606 "frame/parser.Y"
    {(yyval.integer) = Base::FULLBASE;;}
    break;

  case 87:
#line 607 "frame/parser.Y"
    {(yyval.integer) = Base::ROOT;;}
    break;

  case 88:
#line 608 "frame/parser.Y"
    {(yyval.integer) = Base::FULL;;}
    break;

  case 89:
#line 611 "frame/parser.Y"
    {(yyval.real) = 0;;}
    break;

  case 90:
#line 612 "frame/parser.Y"
    {(yyval.real) = (yyvsp[(1) - (1)].real);;}
    break;

  case 91:
#line 615 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 92:
#line 616 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 93:
#line 617 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 94:
#line 620 "frame/parser.Y"
    {(yyval.real) = parseSEXStr((yyvsp[(1) - (1)].str));;}
    break;

  case 95:
#line 623 "frame/parser.Y"
    {(yyval.real) = parseHMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 96:
#line 626 "frame/parser.Y"
    {(yyval.real) = parseDMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 97:
#line 630 "frame/parser.Y"
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
#line 642 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 99:
#line 649 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 100:
#line 656 "frame/parser.Y"
    {
	  (yyval.vector)[0] = (yyvsp[(1) - (2)].real);
	  (yyval.vector)[1] = (yyvsp[(2) - (2)].real);
	  (yyval.vector)[2] = 1;
	;}
    break;

  case 101:
#line 663 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::IMAGE;;}
    break;

  case 102:
#line 664 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::PHYSICAL;;}
    break;

  case 103:
#line 665 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::DETECTOR;;}
    break;

  case 104:
#line 666 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::AMPLIFIER;;}
    break;

  case 105:
#line 667 "frame/parser.Y"
    {(yyval.integer) = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 106:
#line 670 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS;;}
    break;

  case 107:
#line 671 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSA;;}
    break;

  case 108:
#line 672 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSB;;}
    break;

  case 109:
#line 673 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSC;;}
    break;

  case 110:
#line 674 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSD;;}
    break;

  case 111:
#line 675 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSE;;}
    break;

  case 112:
#line 676 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSF;;}
    break;

  case 113:
#line 677 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSG;;}
    break;

  case 114:
#line 678 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSH;;}
    break;

  case 115:
#line 679 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSI;;}
    break;

  case 116:
#line 680 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSJ;;}
    break;

  case 117:
#line 681 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSK;;}
    break;

  case 118:
#line 682 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSL;;}
    break;

  case 119:
#line 683 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSM;;}
    break;

  case 120:
#line 684 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSN;;}
    break;

  case 121:
#line 685 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSO;;}
    break;

  case 122:
#line 686 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSP;;}
    break;

  case 123:
#line 687 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSQ;;}
    break;

  case 124:
#line 688 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSR;;}
    break;

  case 125:
#line 689 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSS;;}
    break;

  case 126:
#line 690 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCST;;}
    break;

  case 127:
#line 691 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSU;;}
    break;

  case 128:
#line 692 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSV;;}
    break;

  case 129:
#line 693 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSW;;}
    break;

  case 130:
#line 694 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSX;;}
    break;

  case 131:
#line 695 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSY;;}
    break;

  case 132:
#line 696 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSZ;;}
    break;

  case 133:
#line 697 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS0;;}
    break;

  case 134:
#line 700 "frame/parser.Y"
    {(yyval.integer) = Coord::CANVAS;;}
    break;

  case 135:
#line 701 "frame/parser.Y"
    {(yyval.integer) = Coord::PANNER;;}
    break;

  case 136:
#line 704 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 137:
#line 705 "frame/parser.Y"
    {(yyval.integer) = FitsMask::ZERO;;}
    break;

  case 138:
#line 706 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 139:
#line 707 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NaN;;}
    break;

  case 140:
#line 708 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONNaN;;}
    break;

  case 141:
#line 709 "frame/parser.Y"
    {(yyval.integer) = FitsMask::RANGE;;}
    break;

  case 142:
#line 712 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 143:
#line 713 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 144:
#line 714 "frame/parser.Y"
    {(yyval.integer) = FitsMask::MULTIPLY;;}
    break;

  case 145:
#line 715 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SCREEN;;}
    break;

  case 146:
#line 716 "frame/parser.Y"
    {(yyval.integer) = FitsMask::OVERLAY;;}
    break;

  case 147:
#line 717 "frame/parser.Y"
    {(yyval.integer) = FitsMask::DARKEN;;}
    break;

  case 148:
#line 718 "frame/parser.Y"
    {(yyval.integer) = FitsMask::LIGHTEN;;}
    break;

  case 149:
#line 719 "frame/parser.Y"
    {(yyval.integer) = FitsMask::COLOR_DODGE;;}
    break;

  case 150:
#line 720 "frame/parser.Y"
    {(yyval.integer) = FitsMask::COLOR_BURN;;}
    break;

  case 151:
#line 721 "frame/parser.Y"
    {(yyval.integer) = FitsMask::HARD_LIGHT;;}
    break;

  case 152:
#line 722 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOFT_LIGHT;;}
    break;

  case 153:
#line 723 "frame/parser.Y"
    {(yyval.integer) = FitsMask::DIFFERENCE;;}
    break;

  case 154:
#line 724 "frame/parser.Y"
    {(yyval.integer) = FitsMask::EXCLUSION;;}
    break;

  case 155:
#line 725 "frame/parser.Y"
    {(yyval.integer) = FitsMask::HUE;;}
    break;

  case 156:
#line 726 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SATURATION;;}
    break;

  case 157:
#line 727 "frame/parser.Y"
    {(yyval.integer) = FitsMask::COLOR;;}
    break;

  case 158:
#line 728 "frame/parser.Y"
    {(yyval.integer) = FitsMask::LUMINOSITY;;}
    break;

  case 159:
#line 731 "frame/parser.Y"
    {(yyval.integer) = FrScale::LINEARSCALE;;}
    break;

  case 160:
#line 732 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOGSCALE;;}
    break;

  case 161:
#line 733 "frame/parser.Y"
    {(yyval.integer) = FrScale::POWSCALE;;}
    break;

  case 162:
#line 734 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQRTSCALE;;}
    break;

  case 163:
#line 735 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQUAREDSCALE;;}
    break;

  case 164:
#line 736 "frame/parser.Y"
    {(yyval.integer) = FrScale::ASINHSCALE;;}
    break;

  case 165:
#line 737 "frame/parser.Y"
    {(yyval.integer) = FrScale::SINHSCALE;;}
    break;

  case 166:
#line 738 "frame/parser.Y"
    {(yyval.integer) = FrScale::HISTEQUSCALE;;}
    break;

  case 167:
#line 739 "frame/parser.Y"
    {(yyval.integer) = FrScale::GHSSCALE;;}
    break;

  case 168:
#line 742 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 169:
#line 743 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 170:
#line 744 "frame/parser.Y"
    {(yyval.integer)=FrScale::SAMPLE;;}
    break;

  case 171:
#line 745 "frame/parser.Y"
    {(yyval.integer)=FrScale::DATAMIN;;}
    break;

  case 172:
#line 746 "frame/parser.Y"
    {(yyval.integer)=FrScale::IRAFMIN;;}
    break;

  case 173:
#line 749 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 174:
#line 750 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 175:
#line 751 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 176:
#line 752 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 177:
#line 753 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 178:
#line 754 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 179:
#line 755 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::GALACTIC;;}
    break;

  case 180:
#line 756 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ECLIPTIC;;}
    break;

  case 181:
#line 759 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 182:
#line 760 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 183:
#line 761 "frame/parser.Y"
    {(yyval.integer)=Coord::SEXAGESIMAL;;}
    break;

  case 184:
#line 764 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 185:
#line 765 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 186:
#line 766 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCMIN;;}
    break;

  case 187:
#line 767 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCSEC;;}
    break;

  case 188:
#line 770 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 189:
#line 771 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 190:
#line 772 "frame/parser.Y"
    {(yyval.integer) = Base::KEY;;}
    break;

  case 191:
#line 775 "frame/parser.Y"
    {;}
    break;

  case 192:
#line 776 "frame/parser.Y"
    {;}
    break;

  case 193:
#line 777 "frame/parser.Y"
    {;}
    break;

  case 194:
#line 780 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 195:
#line 781 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 196:
#line 782 "frame/parser.Y"
    {(yyval.integer) = Base::MASK;;}
    break;

  case 197:
#line 786 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer) ? Marker::ARROW : Marker::NOEND;;}
    break;

  case 198:
#line 787 "frame/parser.Y"
    {(yyval.integer) = Marker::NOEND;;}
    break;

  case 199:
#line 788 "frame/parser.Y"
    {(yyval.integer) = Marker::ARROW;;}
    break;

  case 200:
#line 789 "frame/parser.Y"
    {(yyval.integer) = Marker::OPENARROW;;}
    break;

  case 201:
#line 790 "frame/parser.Y"
    {(yyval.integer) = Marker::CHEVRON;;}
    break;

  case 202:
#line 791 "frame/parser.Y"
    {(yyval.integer) = Marker::CIRCLE;;}
    break;

  case 203:
#line 792 "frame/parser.Y"
    {(yyval.integer) = Marker::OPENCIRCLE;;}
    break;

  case 204:
#line 793 "frame/parser.Y"
    {(yyval.integer) = Marker::BOX;;}
    break;

  case 205:
#line 794 "frame/parser.Y"
    {(yyval.integer) = Marker::OPENBOX;;}
    break;

  case 206:
#line 795 "frame/parser.Y"
    {(yyval.integer) = Marker::TRIANGLE;;}
    break;

  case 207:
#line 796 "frame/parser.Y"
    {(yyval.integer) = Marker::OPENTRIANGLE;;}
    break;

  case 208:
#line 797 "frame/parser.Y"
    {(yyval.integer) = Marker::BAR;;}
    break;

  case 209:
#line 800 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 210:
#line 801 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 211:
#line 802 "frame/parser.Y"
    {(yyval.integer) = Point::BOX;;}
    break;

  case 212:
#line 803 "frame/parser.Y"
    {(yyval.integer) = Point::DIAMOND;;}
    break;

  case 213:
#line 804 "frame/parser.Y"
    {(yyval.integer) = Point::CROSS;;}
    break;

  case 214:
#line 805 "frame/parser.Y"
    {(yyval.integer) = Point::EX;;}
    break;

  case 215:
#line 806 "frame/parser.Y"
    {(yyval.integer) = Point::ARROW;;}
    break;

  case 216:
#line 807 "frame/parser.Y"
    {(yyval.integer) = Point::BOXCIRCLE;;}
    break;

  case 217:
#line 808 "frame/parser.Y"
    {(yyval.integer) = Point::GLYPH;;}
    break;

  case 218:
#line 811 "frame/parser.Y"
    {(yyval.integer) = POINTSIZE;;}
    break;

  case 219:
#line 812 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 220:
#line 815 "frame/parser.Y"
    {(yyval.integer) = Marker::PANDA;;}
    break;

  case 221:
#line 816 "frame/parser.Y"
    {(yyval.integer) = Marker::HISTOGRAM;;}
    break;

  case 222:
#line 817 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT2D;;}
    break;

  case 223:
#line 818 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT3D;;}
    break;

  case 224:
#line 819 "frame/parser.Y"
    {(yyval.integer) = Marker::RADIAL;;}
    break;

  case 225:
#line 820 "frame/parser.Y"
    {(yyval.integer) = Marker::STATS;;}
    break;

  case 226:
#line 823 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 227:
#line 824 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 228:
#line 825 "frame/parser.Y"
    {(yyval.integer) = Marker::SUM;;}
    break;

  case 229:
#line 826 "frame/parser.Y"
    {(yyval.integer) = Marker::MEDIAN;;}
    break;

  case 230:
#line 829 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 231:
#line 830 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 232:
#line 831 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 233:
#line 832 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 234:
#line 833 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 235:
#line 834 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 240:
#line 841 "frame/parser.Y"
    {fr->set3dRenderMethodCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 241:
#line 842 "frame/parser.Y"
    {fr->set3dRenderBackgroundCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 243:
#line 844 "frame/parser.Y"
    {fr->set3dScaleCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 244:
#line 845 "frame/parser.Y"
    {fr->set3dSyncCmd((yyvsp[(2) - (2)].integer));}
    break;

  case 245:
#line 847 "frame/parser.Y"
    {/* needed for compatibility with old version of backup */;}
    break;

  case 246:
#line 850 "frame/parser.Y"
    {fr->set3dShadeCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 247:
#line 851 "frame/parser.Y"
    {fr->set3dShadeAmbientCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 248:
#line 852 "frame/parser.Y"
    {fr->set3dShadeStrengthCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 250:
#line 856 "frame/parser.Y"
    {fr->set3dShadeNormalCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 251:
#line 857 "frame/parser.Y"
    {fr->set3dShadeNormalStrengthCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 252:
#line 860 "frame/parser.Y"
    {fr->set3dBorderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 253:
#line 861 "frame/parser.Y"
    {fr->set3dBorderColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 254:
#line 864 "frame/parser.Y"
    {fr->set3dCompassCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 255:
#line 865 "frame/parser.Y"
    {fr->set3dCompassColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 256:
#line 868 "frame/parser.Y"
    {fr->set3dHighliteCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 257:
#line 869 "frame/parser.Y"
    {fr->set3dHighliteColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 258:
#line 872 "frame/parser.Y"
    {fr->set3dViewCmd((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));;}
    break;

  case 259:
#line 874 "frame/parser.Y"
    {fr->set3dViewPointCmd(Vector3d((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 261:
#line 878 "frame/parser.Y"
    {fr->binColsCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 262:
#line 879 "frame/parser.Y"
    {fr->binDepthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 265:
#line 882 "frame/parser.Y"
    {fr->binBufferSizeCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 267:
#line 884 "frame/parser.Y"
    {fr->binFilterCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 268:
#line 887 "frame/parser.Y"
    {fr->binAboutCmd();;}
    break;

  case 269:
#line 888 "frame/parser.Y"
    {fr->binAboutCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 270:
#line 891 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 271:
#line 892 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 272:
#line 894 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(1) - (4)].real)), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 273:
#line 896 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 274:
#line 897 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 275:
#line 898 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 276:
#line 900 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 277:
#line 902 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 278:
#line 905 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::AVERAGE);;}
    break;

  case 279:
#line 906 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::SUM);;}
    break;

  case 280:
#line 909 "frame/parser.Y"
    {fr->binToFitCmd();;}
    break;

  case 281:
#line 911 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (7)].real),(yyvsp[(2) - (7)].real)), (yyvsp[(5) - (7)].str), (yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].str));;}
    break;

  case 282:
#line 914 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (11)].real),(yyvsp[(2) - (11)].real)), (yyvsp[(3) - (11)].integer), Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)), (yyvsp[(8) - (11)].str), (yyvsp[(9) - (11)].str), (yyvsp[(10) - (11)].str), (yyvsp[(11) - (11)].str));;}
    break;

  case 283:
#line 916 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (8)].real),(yyvsp[(2) - (8)].real)), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (yyvsp[(6) - (8)].str), (yyvsp[(7) - (8)].str), (yyvsp[(8) - (8)].str));;}
    break;

  case 284:
#line 919 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (12)].real),(yyvsp[(2) - (12)].real)), (yyvsp[(3) - (12)].integer), Vector((yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real)), Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    (yyvsp[(9) - (12)].str), (yyvsp[(10) - (12)].str), (yyvsp[(11) - (12)].str), (yyvsp[(12) - (12)].str));;}
    break;

  case 285:
#line 923 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 286:
#line 924 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 288:
#line 926 "frame/parser.Y"
    {fr->blockNanZeroCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 289:
#line 929 "frame/parser.Y"
    {fr->blockToFitCmd();;}
    break;

  case 290:
#line 930 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 291:
#line 931 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 295:
#line 937 "frame/parser.Y"
    {fr->clipUserCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 296:
#line 938 "frame/parser.Y"
    {fr->clipUserCmd(NAN,NAN);;}
    break;

  case 298:
#line 941 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 299:
#line 946 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::GLOBAL);;}
    break;

  case 300:
#line 947 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::LOCAL);;}
    break;

  case 301:
#line 950 "frame/parser.Y"
    {fr->clipModeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 302:
#line 951 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::MINMAX);;}
    break;

  case 303:
#line 952 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZSCALE);;}
    break;

  case 304:
#line 953 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZMAX);;}
    break;

  case 305:
#line 954 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::USERCLIP);;}
    break;

  case 306:
#line 957 "frame/parser.Y"
    {fr->clipMinMaxCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer),(yyvsp[(1) - (2)].integer));;}
    break;

  case 307:
#line 958 "frame/parser.Y"
    {fr->clipMinMaxModeCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer));;}
    break;

  case 308:
#line 959 "frame/parser.Y"
    {fr->clipMinMaxSampleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 309:
#line 960 "frame/parser.Y"
    {fr->clipMinMaxRescanCmd();;}
    break;

  case 310:
#line 963 "frame/parser.Y"
    {fr->clipZScaleCmd((yyvsp[(1) - (3)].real),(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 311:
#line 965 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleContrastCmd((yyvsp[(2) - (2)].real));
        ;}
    break;

  case 312:
#line 970 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleSampleCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 313:
#line 975 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleLineCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 314:
#line 982 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].real), (yyvsp[(3) - (5)].real), (yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].integer));;}
    break;

  case 315:
#line 984 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 316:
#line 986 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 317:
#line 988 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 318:
#line 990 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (7)].integer),(yyvsp[(3) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(yyvsp[(7) - (7)].integer));;}
    break;

  case 322:
#line 997 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].real), (yyvsp[(3) - (5)].real), (yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].integer));;}
    break;

  case 323:
#line 999 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 324:
#line 1001 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 325:
#line 1003 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 326:
#line 1005 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (7)].integer),(yyvsp[(3) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(yyvsp[(7) - (7)].integer));;}
    break;

  case 327:
#line 1007 "frame/parser.Y"
    {fr->colorScaleCmd((FrScale::ColorScaleType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 328:
#line 1008 "frame/parser.Y"
    {fr->colorScaleLogCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 329:
#line 1010 "frame/parser.Y"
    {fr->colorScaleGhsCmd((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 330:
#line 1013 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 331:
#line 1014 "frame/parser.Y"
    {(yyval.real)=NAN;;}
    break;

  case 333:
#line 1018 "frame/parser.Y"
    {fr->contourDashListCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 340:
#line 1027 "frame/parser.Y"
    {fr->contourAuxNameCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 341:
#line 1028 "frame/parser.Y"
    {fr->contourAuxResetCmd((yyvsp[(2) - (2)].integer),-1);;}
    break;

  case 342:
#line 1029 "frame/parser.Y"
    {fr->contourAuxResetCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 343:
#line 1031 "frame/parser.Y"
    {fr->contourAuxStyleCmd((yyvsp[(2) - (8)].integer),(yyvsp[(3) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].integer),(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 344:
#line 1033 "frame/parser.Y"
    {fr->contourAuxStyleCmd((yyvsp[(2) - (8)].integer),-1,(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].integer),(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 345:
#line 1037 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),(FrScale::ClipMode)(yyvsp[(9) - (13)].integer),100,(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 346:
#line 1040 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),FrScale::AUTOCUT,(yyvsp[(9) - (13)].real),(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 347:
#line 1043 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),(FrScale::ClipMode)(yyvsp[(9) - (12)].integer),100,FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 348:
#line 1049 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),FrScale::AUTOCUT,(yyvsp[(9) - (12)].real),FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 349:
#line 1054 "frame/parser.Y"
    {fr->contourCreatePolygonCmd();;}
    break;

  case 350:
#line 1057 "frame/parser.Y"
    {fr->contourDeleteCmd();;}
    break;

  case 351:
#line 1058 "frame/parser.Y"
    {fr->contourDeleteAuxCmd();;}
    break;

  case 352:
#line 1059 "frame/parser.Y"
    {fr->contourDeleteAuxCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 353:
#line 1062 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 354:
#line 1063 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 355:
#line 1065 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourLoadCmd((yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer),(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer));
	;}
    break;

  case 356:
#line 1071 "frame/parser.Y"
    {(yyval.integer) = FrScale::MINMAX;;}
    break;

  case 357:
#line 1072 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZSCALE;;}
    break;

  case 358:
#line 1073 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZMAX;;}
    break;

  case 359:
#line 1074 "frame/parser.Y"
    {(yyval.integer) = FrScale::USERCLIP;;}
    break;

  case 360:
#line 1077 "frame/parser.Y"
    {(yyval.integer) = FrScale::GLOBAL;;}
    break;

  case 361:
#line 1078 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOCAL;;}
    break;

  case 362:
#line 1081 "frame/parser.Y"
    {(yyval.integer) = FVContour::SMOOTH;;}
    break;

  case 363:
#line 1082 "frame/parser.Y"
    {(yyval.integer) = FVContour::BLOCK;;}
    break;

  case 364:
#line 1085 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 365:
#line 1086 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 366:
#line 1088 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 367:
#line 1092 "frame/parser.Y"
    {fr->contourSaveCmd((yyvsp[(1) - (3)].str), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 368:
#line 1094 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (4)].str),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 369:
#line 1096 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].str),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 370:
#line 1099 "frame/parser.Y"
    {fr->contourStyleClearCmd();;}
    break;

  case 371:
#line 1100 "frame/parser.Y"
    {fr->contourStyleClearCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 372:
#line 1101 "frame/parser.Y"
    {fr->contourStyleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer),0,0);;}
    break;

  case 373:
#line 1102 "frame/parser.Y"
    {fr->contourStyleCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 374:
#line 1105 "frame/parser.Y"
    {fr->cropCmd();;}
    break;

  case 375:
#line 1107 "frame/parser.Y"
    {fr->cropCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 376:
#line 1110 "frame/parser.Y"
    {fr->cropCenterCmd(Vector((yyvsp[(2) - (8)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), Vector((yyvsp[(5) - (8)].real),(yyvsp[(6) - (8)].real)), (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 378:
#line 1112 "frame/parser.Y"
    {fr->cropBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 379:
#line 1113 "frame/parser.Y"
    {fr->cropMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 380:
#line 1114 "frame/parser.Y"
    {fr->cropEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 381:
#line 1117 "frame/parser.Y"
    {fr->crop3dCmd();;}
    break;

  case 382:
#line 1119 "frame/parser.Y"
    {fr->crop3dCmd((yyvsp[(1) - (4)].real), (yyvsp[(2) - (4)].real), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 383:
#line 1120 "frame/parser.Y"
    {fr->crop3dBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 384:
#line 1121 "frame/parser.Y"
    {fr->crop3dMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 385:
#line 1122 "frame/parser.Y"
    {fr->crop3dEndCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 386:
#line 1126 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), (Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 387:
#line 1128 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 388:
#line 1129 "frame/parser.Y"
    {fr->crosshairCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 389:
#line 1130 "frame/parser.Y"
    {fr->crosshairWarpCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 390:
#line 1133 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)), (Coord::InternalSystem)(yyvsp[(3) - (5)].integer));;}
    break;

  case 391:
#line 1135 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 392:
#line 1137 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer));;}
    break;

  case 393:
#line 1139 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 394:
#line 1142 "frame/parser.Y"
    {fr->axesOrderCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 395:
#line 1145 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 396:
#line 1146 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 397:
#line 1147 "frame/parser.Y"
    {(yyval.integer) = Base::SUM;;}
    break;

  case 398:
#line 1148 "frame/parser.Y"
    {(yyval.integer) = Base::MEDIAN;;}
    break;

  case 399:
#line 1151 "frame/parser.Y"
    {fr->fadeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 400:
#line 1152 "frame/parser.Y"
    {fr->fadeClearCmd();;}
    break;

  case 401:
#line 1155 "frame/parser.Y"
    {fr->fitsyHasExtCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 402:
#line 1156 "frame/parser.Y"
    {fr->fitsyInfoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 403:
#line 1159 "frame/parser.Y"
    {fr->getCmd();;}
    break;

  case 404:
#line 1160 "frame/parser.Y"
    {fr->getBgColorCmd();;}
    break;

  case 418:
#line 1174 "frame/parser.Y"
    {fr->getDATASECCmd();;}
    break;

  case 421:
#line 1177 "frame/parser.Y"
    {fr->getHighliteColorCmd();;}
    break;

  case 422:
#line 1178 "frame/parser.Y"
    {fr->getHistogramCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].integer));;}
    break;

  case 428:
#line 1184 "frame/parser.Y"
    {fr->getIRAFAlignCmd();;}
    break;

  case 429:
#line 1185 "frame/parser.Y"
    {fr->getMinMaxCmd();;}
    break;

  case 434:
#line 1190 "frame/parser.Y"
    {fr->getNANColorCmd();;}
    break;

  case 435:
#line 1191 "frame/parser.Y"
    {fr->getOrientCmd();;}
    break;

  case 437:
#line 1194 "frame/parser.Y"
    {fr->getPixelTableCmd(Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (Coord::InternalSystem)(yyvsp[(3) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(7) - (8)].integer), (yyvsp[(8) - (8)].str));;}
    break;

  case 439:
#line 1196 "frame/parser.Y"
    {fr->getRotateCmd();;}
    break;

  case 441:
#line 1198 "frame/parser.Y"
    {fr->getThreadsCmd();;}
    break;

  case 443:
#line 1200 "frame/parser.Y"
    {fr->getTypeCmd();;}
    break;

  case 444:
#line 1202 "frame/parser.Y"
    {fr->getValueCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 447:
#line 1205 "frame/parser.Y"
    {fr->getZoomCmd();;}
    break;

  case 448:
#line 1209 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 449:
#line 1211 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 450:
#line 1215 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 451:
#line 1217 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 452:
#line 1220 "frame/parser.Y"
    {fr->getBinDepthCmd();;}
    break;

  case 453:
#line 1221 "frame/parser.Y"
    {fr->getBinFactorCmd();;}
    break;

  case 454:
#line 1222 "frame/parser.Y"
    {fr->getBinFunctionCmd();;}
    break;

  case 455:
#line 1223 "frame/parser.Y"
    {fr->getBinBufferSizeCmd();;}
    break;

  case 456:
#line 1224 "frame/parser.Y"
    {fr->getBinCursorCmd();;}
    break;

  case 457:
#line 1225 "frame/parser.Y"
    {fr->getBinFilterCmd();;}
    break;

  case 459:
#line 1227 "frame/parser.Y"
    {fr->getBinListCmd();;}
    break;

  case 460:
#line 1230 "frame/parser.Y"
    {fr->getBinColsCmd();;}
    break;

  case 461:
#line 1231 "frame/parser.Y"
    {fr->getBinColsMinMaxCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 462:
#line 1232 "frame/parser.Y"
    {fr->getBinColsDimCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 463:
#line 1235 "frame/parser.Y"
    {fr->getBlockCmd();;}
    break;

  case 464:
#line 1236 "frame/parser.Y"
    {fr->getBlockNanZeroCmd();;}
    break;

  case 465:
#line 1239 "frame/parser.Y"
    {fr->getClipCmd();;}
    break;

  case 466:
#line 1241 "frame/parser.Y"
    {fr->getClipCmd((FrScale::ClipMode)(yyvsp[(1) - (2)].integer), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 467:
#line 1243 "frame/parser.Y"
    {fr->getClipCmd((yyvsp[(1) - (2)].real), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 468:
#line 1244 "frame/parser.Y"
    {fr->getClipScopeCmd();;}
    break;

  case 469:
#line 1245 "frame/parser.Y"
    {fr->getClipModeCmd();;}
    break;

  case 471:
#line 1247 "frame/parser.Y"
    {fr->getClipUserCmd();;}
    break;

  case 473:
#line 1250 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	;}
    break;

  case 474:
#line 1256 "frame/parser.Y"
    {fr->getClipMinMaxModeCmd();;}
    break;

  case 475:
#line 1257 "frame/parser.Y"
    {fr->getClipMinMaxSampleCmd();;}
    break;

  case 476:
#line 1260 "frame/parser.Y"
    {fr->getClipZScaleContrastCmd();;}
    break;

  case 477:
#line 1261 "frame/parser.Y"
    {fr->getClipZScaleSampleCmd();;}
    break;

  case 478:
#line 1262 "frame/parser.Y"
    {fr->getClipZScaleLineCmd();;}
    break;

  case 479:
#line 1265 "frame/parser.Y"
    {fr->getColorbarCmd();;}
    break;

  case 480:
#line 1266 "frame/parser.Y"
    {fr->getColorbarTagCmd();;}
    break;

  case 482:
#line 1272 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 483:
#line 1274 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 484:
#line 1276 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 485:
#line 1279 "frame/parser.Y"
    {fr->getColorScaleCmd();;}
    break;

  case 487:
#line 1281 "frame/parser.Y"
    {fr->getColorScaleLogCmd();;}
    break;

  case 488:
#line 1282 "frame/parser.Y"
    {fr->getColorScaleGhsCmd();;}
    break;

  case 489:
#line 1286 "frame/parser.Y"
    {fr->getColorScaleLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 490:
#line 1290 "frame/parser.Y"
    {fr->getContourCmd((Coord::CoordSystem)(yyvsp[(1) - (2)].integer),(Coord::SkyFrame)(yyvsp[(2) - (2)].integer));;}
    break;

  case 491:
#line 1291 "frame/parser.Y"
    {fr->getContourAuxCountCmd();;}
    break;

  case 493:
#line 1293 "frame/parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 494:
#line 1294 "frame/parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 495:
#line 1295 "frame/parser.Y"
    {fr->getContourDashListCmd();;}
    break;

  case 496:
#line 1296 "frame/parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 497:
#line 1297 "frame/parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 498:
#line 1298 "frame/parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 500:
#line 1300 "frame/parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 501:
#line 1301 "frame/parser.Y"
    {fr->getContourStyleCmd();;}
    break;

  case 502:
#line 1302 "frame/parser.Y"
    {fr->getContourStyleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 503:
#line 1303 "frame/parser.Y"
    {fr->getContourAuxCmd();;}
    break;

  case 504:
#line 1304 "frame/parser.Y"
    {fr->getContourAuxStyleCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 505:
#line 1305 "frame/parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 506:
#line 1308 "frame/parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 507:
#line 1309 "frame/parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 508:
#line 1310 "frame/parser.Y"
    {fr->getContourClipScopeCmd();;}
    break;

  case 509:
#line 1313 "frame/parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 510:
#line 1314 "frame/parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 511:
#line 1318 "frame/parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 512:
#line 1320 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 513:
#line 1328 "frame/parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 514:
#line 1330 "frame/parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 515:
#line 1332 "frame/parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 516:
#line 1335 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 517:
#line 1337 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 518:
#line 1338 "frame/parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 519:
#line 1341 "frame/parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 520:
#line 1344 "frame/parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 521:
#line 1346 "frame/parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 522:
#line 1350 "frame/parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 523:
#line 1352 "frame/parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 524:
#line 1355 "frame/parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 525:
#line 1359 "frame/parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (2)].str), (Base::FileNameType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 526:
#line 1360 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 527:
#line 1362 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)), (Coord::InternalSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (Base::FileNameType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 528:
#line 1365 "frame/parser.Y"
    {fr->iisGetCmd((yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 529:
#line 1366 "frame/parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 531:
#line 1370 "frame/parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 532:
#line 1371 "frame/parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 533:
#line 1372 "frame/parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 534:
#line 1375 "frame/parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 535:
#line 1377 "frame/parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 536:
#line 1378 "frame/parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 538:
#line 1380 "frame/parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 542:
#line 1384 "frame/parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 543:
#line 1385 "frame/parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 544:
#line 1386 "frame/parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 545:
#line 1388 "frame/parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::DistFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 547:
#line 1390 "frame/parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 548:
#line 1393 "frame/parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 549:
#line 1395 "frame/parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 550:
#line 1397 "frame/parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 551:
#line 1398 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 552:
#line 1399 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 553:
#line 1400 "frame/parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 554:
#line 1403 "frame/parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 555:
#line 1404 "frame/parser.Y"
    {fr->getFitsDepthCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 556:
#line 1408 "frame/parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 557:
#line 1410 "frame/parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 558:
#line 1413 "frame/parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 559:
#line 1416 "frame/parser.Y"
    {fr->getFitsSliceCmd(2);;}
    break;

  case 560:
#line 1417 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 561:
#line 1419 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 562:
#line 1421 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((yyvsp[(3) - (4)].integer), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 563:
#line 1423 "frame/parser.Y"
    {fr->getFitsSliceToImageCmd((yyvsp[(3) - (4)].real), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 564:
#line 1426 "frame/parser.Y"
    {fr->getGridCmd();;}
    break;

  case 565:
#line 1427 "frame/parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 566:
#line 1428 "frame/parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 567:
#line 1431 "frame/parser.Y"
    {fr->getLayerCountCmd();;}
    break;

  case 568:
#line 1432 "frame/parser.Y"
    {fr->getLayerNoCmd();;}
    break;

  case 569:
#line 1433 "frame/parser.Y"
    {fr->getLayerColorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 570:
#line 1434 "frame/parser.Y"
    {fr->getLayerBlendCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 571:
#line 1435 "frame/parser.Y"
    {fr->getLayerTransparencyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 572:
#line 1436 "frame/parser.Y"
    {fr->getLayerViewCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 573:
#line 1439 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 574:
#line 1440 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 575:
#line 1441 "frame/parser.Y"
    {fr->getMaskRangeCmd();;}
    break;

  case 576:
#line 1442 "frame/parser.Y"
    {fr->getMaskSystemCmd();;}
    break;

  case 577:
#line 1443 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 578:
#line 1444 "frame/parser.Y"
    {fr->getMaskCountCmd();;}
    break;

  case 579:
#line 1445 "frame/parser.Y"
    {fr->getMaskBlendCmd();;}
    break;

  case 580:
#line 1448 "frame/parser.Y"
    {(yyval.integer) = 0;;}
    break;

  case 581:
#line 1449 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 582:
#line 1452 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 583:
#line 1455 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 584:
#line 1456 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 585:
#line 1457 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 586:
#line 1460 "frame/parser.Y"
    {fr->getMultiColorSystemCmd();;}
    break;

  case 587:
#line 1463 "frame/parser.Y"
    {fr->getHLSChannelCmd();;}
    break;

  case 588:
#line 1464 "frame/parser.Y"
    {fr->getHLSSystemCmd();;}
    break;

  case 589:
#line 1465 "frame/parser.Y"
    {fr->getHLSViewCmd();;}
    break;

  case 590:
#line 1468 "frame/parser.Y"
    {fr->getHSVChannelCmd();;}
    break;

  case 591:
#line 1469 "frame/parser.Y"
    {fr->getHSVSystemCmd();;}
    break;

  case 592:
#line 1470 "frame/parser.Y"
    {fr->getHSVViewCmd();;}
    break;

  case 593:
#line 1473 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 594:
#line 1474 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 595:
#line 1475 "frame/parser.Y"
    {fr->getSmoothRadiusMinorCmd();;}
    break;

  case 596:
#line 1476 "frame/parser.Y"
    {fr->getSmoothSigmaCmd();;}
    break;

  case 597:
#line 1477 "frame/parser.Y"
    {fr->getSmoothSigmaMinorCmd();;}
    break;

  case 598:
#line 1478 "frame/parser.Y"
    {fr->getSmoothAngleCmd();;}
    break;

  case 603:
#line 1485 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 604:
#line 1486 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 606:
#line 1488 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 607:
#line 1491 "frame/parser.Y"
    {fr->get3dShadeCmd();;}
    break;

  case 608:
#line 1492 "frame/parser.Y"
    {fr->get3dShadeAmbientCmd();;}
    break;

  case 609:
#line 1493 "frame/parser.Y"
    {fr->get3dShadeStrengthCmd();;}
    break;

  case 611:
#line 1497 "frame/parser.Y"
    {fr->get3dShadeNormalCmd();;}
    break;

  case 612:
#line 1498 "frame/parser.Y"
    {fr->get3dShadeNormalStrengthCmd();;}
    break;

  case 613:
#line 1501 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 614:
#line 1502 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 615:
#line 1505 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 616:
#line 1506 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 617:
#line 1509 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 618:
#line 1510 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 619:
#line 1513 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 620:
#line 1514 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 621:
#line 1517 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 623:
#line 1519 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 624:
#line 1522 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 625:
#line 1523 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 627:
#line 1527 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 628:
#line 1531 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 629:
#line 1534 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer),
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 630:
#line 1541 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 631:
#line 1542 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 632:
#line 1545 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 633:
#line 1546 "frame/parser.Y"
    {fr->hasBgColorCmd();;}
    break;

  case 636:
#line 1549 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 637:
#line 1550 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 638:
#line 1551 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 639:
#line 1552 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 641:
#line 1554 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 642:
#line 1555 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 643:
#line 1556 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 645:
#line 1558 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 646:
#line 1559 "frame/parser.Y"
    {fr->hasImageCmd();;}
    break;

  case 647:
#line 1560 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 648:
#line 1561 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 650:
#line 1565 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 651:
#line 1568 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 652:
#line 1569 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 653:
#line 1572 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 654:
#line 1573 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 655:
#line 1574 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 656:
#line 1575 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 657:
#line 1578 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 658:
#line 1579 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 659:
#line 1580 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 660:
#line 1581 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 661:
#line 1584 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 662:
#line 1585 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 663:
#line 1586 "frame/parser.Y"
    {fr->hasWCSEquCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 664:
#line 1587 "frame/parser.Y"
    {fr->hasWCSLinearCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 665:
#line 1588 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 666:
#line 1589 "frame/parser.Y"
    {fr->hasWCS3DCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 667:
#line 1592 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 668:
#line 1593 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 669:
#line 1594 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 672:
#line 1598 "frame/parser.Y"
    {fr->iisSetCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 673:
#line 1599 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 674:
#line 1602 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 675:
#line 1605 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 676:
#line 1606 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 677:
#line 1610 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 678:
#line 1612 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 679:
#line 1613 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 687:
#line 1626 "frame/parser.Y"
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

  case 688:
#line 1638 "frame/parser.Y"
    {
	  if (!strcmp((yyvsp[(1) - (3)].str),"hips"))
	    fr->loadHiPSCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));
	  else {
	    fr->error("load: unknown type (array, envi, fits, hips, incr, nrrd, photo)");
	    YYERROR;
	  }
	;}
    break;

  case 691:
#line 1651 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 692:
#line 1653 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 693:
#line 1655 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 694:
#line 1656 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 695:
#line 1658 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 696:
#line 1660 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 697:
#line 1662 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 698:
#line 1664 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 699:
#line 1666 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 703:
#line 1672 "frame/parser.Y"
    {fr->loadRGBArrayCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 704:
#line 1673 "frame/parser.Y"
    {fr->loadRGBArrayCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 705:
#line 1674 "frame/parser.Y"
    {fr->loadRGBArrayCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 706:
#line 1675 "frame/parser.Y"
    {fr->loadRGBArrayCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 707:
#line 1676 "frame/parser.Y"
    {fr->loadRGBArrayCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 708:
#line 1678 "frame/parser.Y"
    {fr->loadRGBArrayCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 709:
#line 1679 "frame/parser.Y"
    {fr->loadRGBArrayCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 710:
#line 1680 "frame/parser.Y"
    {fr->loadRGBArrayCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 711:
#line 1681 "frame/parser.Y"
    {fr->loadRGBArrayCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 712:
#line 1684 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 713:
#line 1688 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 714:
#line 1690 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 715:
#line 1692 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 716:
#line 1694 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 717:
#line 1696 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 718:
#line 1698 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 719:
#line 1700 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 720:
#line 1702 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str),
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 721:
#line 1705 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 722:
#line 1707 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 723:
#line 1709 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 733:
#line 1721 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 734:
#line 1722 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 735:
#line 1723 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 736:
#line 1724 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 737:
#line 1725 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 738:
#line 1726 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 739:
#line 1728 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 740:
#line 1730 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 741:
#line 1731 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 742:
#line 1732 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 743:
#line 1733 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 744:
#line 1736 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 745:
#line 1737 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 746:
#line 1738 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 747:
#line 1739 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 748:
#line 1740 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 749:
#line 1742 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 750:
#line 1743 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 751:
#line 1744 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 752:
#line 1745 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 758:
#line 1756 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 759:
#line 1759 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 760:
#line 1762 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 761:
#line 1765 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 762:
#line 1768 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 763:
#line 1771 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 764:
#line 1774 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 765:
#line 1777 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 766:
#line 1780 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 767:
#line 1785 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 768:
#line 1788 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 769:
#line 1791 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 770:
#line 1794 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 771:
#line 1797 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 772:
#line 1800 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 773:
#line 1803 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 774:
#line 1806 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 775:
#line 1809 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 776:
#line 1812 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 777:
#line 1815 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 778:
#line 1820 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 779:
#line 1823 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 780:
#line 1826 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 781:
#line 1829 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 782:
#line 1832 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 783:
#line 1835 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer),
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 784:
#line 1838 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 785:
#line 1841 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 786:
#line 1844 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 787:
#line 1849 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 788:
#line 1851 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 789:
#line 1853 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 790:
#line 1855 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 791:
#line 1857 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 792:
#line 1859 "frame/parser.Y"
    {
	  fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str),
					   (Base::LayerType)(yyvsp[(6) - (6)].integer));
        ;}
    break;

  case 793:
#line 1864 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 794:
#line 1866 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 795:
#line 1868 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 796:
#line 1872 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 797:
#line 1875 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 798:
#line 1878 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 799:
#line 1881 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 800:
#line 1884 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 801:
#line 1887 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 802:
#line 1890 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer),
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 803:
#line 1893 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer),
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 804:
#line 1896 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 805:
#line 1899 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 806:
#line 1902 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 807:
#line 1906 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 808:
#line 1907 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 809:
#line 1908 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 810:
#line 1909 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 811:
#line 1910 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 812:
#line 1911 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 813:
#line 1913 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 814:
#line 1915 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 815:
#line 1916 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 816:
#line 1917 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 817:
#line 1918 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 818:
#line 1921 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 819:
#line 1922 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 820:
#line 1923 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 821:
#line 1924 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 822:
#line 1925 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 823:
#line 1927 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 824:
#line 1928 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 825:
#line 1929 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 826:
#line 1930 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 827:
#line 1934 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 828:
#line 1936 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 829:
#line 1937 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 830:
#line 1939 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 831:
#line 1941 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 832:
#line 1943 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 833:
#line 1950 "frame/parser.Y"
    {fr->loadAsdfCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 834:
#line 1957 "frame/parser.Y"
    {fr->loadXisfCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 835:
#line 1960 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 836:
#line 1961 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 837:
#line 1967 "frame/parser.Y"
    {fr->loadTiffCmd((yyvsp[(1) - (2)].str), (yyvsp[(1) - (2)].str), (Base::LayerType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 838:
#line 1969 "frame/parser.Y"
    {fr->loadTiffCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 839:
#line 1971 "frame/parser.Y"
    {fr->loadSliceTiffCmd((yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str));;}
    break;

  case 840:
#line 1974 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 841:
#line 1975 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 842:
#line 1976 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 843:
#line 1979 "frame/parser.Y"
    {;}
    break;

  case 844:
#line 1982 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 845:
#line 1983 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 846:
#line 1984 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 847:
#line 1985 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 848:
#line 1986 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 849:
#line 1987 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 850:
#line 1988 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 851:
#line 1992 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 853:
#line 2000 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 854:
#line 2001 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 855:
#line 2003 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 856:
#line 2005 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 857:
#line 2006 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 858:
#line 2007 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 860:
#line 2008 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 863:
#line 2011 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 864:
#line 2012 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 865:
#line 2014 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 866:
#line 2016 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 867:
#line 2018 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 868:
#line 2021 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 869:
#line 2023 "frame/parser.Y"
    {fr->regionStatsCallbackCmd((yyvsp[(4) - (4)].str));;}
    break;

  case 870:
#line 2025 "frame/parser.Y"
    {fr->regionStatsCallbackCmd(NULL);;}
    break;

  case 871:
#line 2027 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 872:
#line 2028 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 873:
#line 2030 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 874:
#line 2033 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 875:
#line 2036 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 876:
#line 2040 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 877:
#line 2043 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 878:
#line 2046 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 879:
#line 2049 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 880:
#line 2053 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 881:
#line 2057 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 882:
#line 2062 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str),
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 883:
#line 2066 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 884:
#line 2068 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 885:
#line 2069 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 886:
#line 2071 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 887:
#line 2073 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 888:
#line 2075 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 889:
#line 2077 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 890:
#line 2079 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 891:
#line 2080 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 892:
#line 2081 "frame/parser.Y"
    {fr->markerCompositeAreaCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 893:
#line 2083 "frame/parser.Y"
    {fr->markerCompositeOperationCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 894:
#line 2085 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 895:
#line 2087 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 896:
#line 2090 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 897:
#line 2094 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 898:
#line 2098 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 899:
#line 2100 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 900:
#line 2102 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 901:
#line 2104 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 902:
#line 2106 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 903:
#line 2108 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 904:
#line 2110 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 905:
#line 2112 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 906:
#line 2114 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 907:
#line 2116 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 908:
#line 2118 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 909:
#line 2120 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 910:
#line 2122 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 911:
#line 2124 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 912:
#line 2125 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 913:
#line 2127 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 914:
#line 2129 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 915:
#line 2130 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 916:
#line 2131 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 917:
#line 2133 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 918:
#line 2135 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 919:
#line 2136 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 920:
#line 2137 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 921:
#line 2138 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 922:
#line 2140 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 923:
#line 2142 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 924:
#line 2146 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 925:
#line 2149 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 926:
#line 2152 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 927:
#line 2156 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 928:
#line 2160 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 929:
#line 2165 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str),
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 930:
#line 2169 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 931:
#line 2170 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 932:
#line 2171 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 933:
#line 2173 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 934:
#line 2174 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 935:
#line 2176 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 936:
#line 2180 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 937:
#line 2181 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 938:
#line 2182 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 939:
#line 2184 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 940:
#line 2187 "frame/parser.Y"
    {fr->markerPolygonPointCmd((yyvsp[(1) - (7)].integer),(yyvsp[(7) - (7)].str),(Coord::CoordSystem)(yyvsp[(4) - (7)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),(Coord::SkyFormat)(yyvsp[(6) - (7)].integer));;}
    break;

  case 941:
#line 2190 "frame/parser.Y"
    {fr->markerPolygonPointVarCmd((yyvsp[(1) - (8)].integer),(yyvsp[(8) - (8)].str),(Coord::CoordSystem)(yyvsp[(4) - (8)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (8)].integer),(Coord::SkyFormat)(yyvsp[(6) - (8)].integer));;}
    break;

  case 942:
#line 2193 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 943:
#line 2196 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 944:
#line 2199 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 945:
#line 2200 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 946:
#line 2201 "frame/parser.Y"
    {fr->markerPointGlyphCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 947:
#line 2205 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 948:
#line 2209 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 949:
#line 2211 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 950:
#line 2212 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 951:
#line 2214 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 952:
#line 2217 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 953:
#line 2220 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 954:
#line 2221 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 955:
#line 2223 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 956:
#line 2224 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 957:
#line 2225 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 958:
#line 2227 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 959:
#line 2228 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 960:
#line 2230 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 961:
#line 2231 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 962:
#line 2234 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 963:
#line 2237 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 964:
#line 2238 "frame/parser.Y"
    {fr->markerDashListCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 965:
#line 2240 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 966:
#line 2241 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 970:
#line 2246 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 971:
#line 2247 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 972:
#line 2249 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 973:
#line 2251 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 974:
#line 2253 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 975:
#line 2254 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 979:
#line 2260 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 980:
#line 2261 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 981:
#line 2262 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 982:
#line 2263 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 983:
#line 2264 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 984:
#line 2265 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 985:
#line 2266 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 986:
#line 2267 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 987:
#line 2268 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 988:
#line 2269 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 989:
#line 2271 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 990:
#line 2273 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 991:
#line 2274 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 992:
#line 2275 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 993:
#line 2276 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 994:
#line 2277 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 995:
#line 2279 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 996:
#line 2280 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 997:
#line 2281 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 998:
#line 2282 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 999:
#line 2283 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 1000:
#line 2285 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 1001:
#line 2286 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1002:
#line 2287 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 1003:
#line 2288 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 1004:
#line 2289 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 1005:
#line 2290 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1006:
#line 2291 "frame/parser.Y"
    {fr->markerDashListCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1007:
#line 2294 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 1008:
#line 2295 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 1009:
#line 2296 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 1010:
#line 2297 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 1011:
#line 2298 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 1012:
#line 2299 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 1013:
#line 2300 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 1014:
#line 2301 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 1015:
#line 2302 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 1016:
#line 2303 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 1017:
#line 2304 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 1018:
#line 2305 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 1019:
#line 2306 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 1020:
#line 2307 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 1021:
#line 2308 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 1022:
#line 2309 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 1023:
#line 2310 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 1024:
#line 2311 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 1025:
#line 2312 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 1026:
#line 2313 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 1027:
#line 2314 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 1028:
#line 2317 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 1029:
#line 2318 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1030:
#line 2319 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1031:
#line 2320 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1032:
#line 2321 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1033:
#line 2323 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 1034:
#line 2333 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1035:
#line 2341 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1036:
#line 2350 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1037:
#line 2358 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1038:
#line 2364 "frame/parser.Y"
    {fr->createPolygonCanvasVarCmd((yyvsp[(4) - (5)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1039:
#line 2369 "frame/parser.Y"
    {fr->createSegmentCanvasVarCmd((yyvsp[(4) - (5)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1040:
#line 2375 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1041:
#line 2382 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1042:
#line 2390 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1043:
#line 2398 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1044:
#line 2403 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1045:
#line 2408 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1046:
#line 2413 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1047:
#line 2418 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1048:
#line 2423 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1049:
#line 2428 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1050:
#line 2433 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1051:
#line 2438 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::GLYPH, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist,(yyvsp[(5) - (6)].str));;}
    break;

  case 1052:
#line 2443 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),Coord::CANVAS),
	    Point::GLYPH, (yyvsp[(5) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist,(yyvsp[(6) - (7)].str));;}
    break;

  case 1053:
#line 2452 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer),
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1054:
#line 2462 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1055:
#line 2472 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1056:
#line 2481 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1057:
#line 2489 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1058:
#line 2499 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1059:
#line 2509 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1060:
#line 2519 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1061:
#line 2531 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1062:
#line 2540 "frame/parser.Y"
    {fr->createCompositeCmd(
	    (yyvsp[(2) - (3)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1064:
#line 2548 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 1065:
#line 2550 "frame/parser.Y"
    {
	  if ((yyvsp[(1) - (1)].integer) < 0 || (yyvsp[(1) - (1)].integer) > 1) {
	    fr->error("composite operation must be 0 (union) or 1 (intersection)");
	    YYERROR;
	  }
	  (yyval.integer)=(yyvsp[(1) - (1)].integer);
	;}
    break;

  case 1066:
#line 2559 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 1067:
#line 2561 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 1068:
#line 2563 "frame/parser.Y"
    {
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 1069:
#line 2568 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 1070:
#line 2571 "frame/parser.Y"
    {fr->markerDeleteAllCmd(0);;}
    break;

  case 1071:
#line 2572 "frame/parser.Y"
    {fr->markerDeleteAllCmd(1);;}
    break;

  case 1072:
#line 2573 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerDeleteAllCmd(0);
        ;}
    break;

  case 1073:
#line 2580 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1074:
#line 2582 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1075:
#line 2583 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 1076:
#line 2586 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 1077:
#line 2587 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 1078:
#line 2588 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 1079:
#line 2589 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 1080:
#line 2590 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 1081:
#line 2591 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 1082:
#line 2592 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 1084:
#line 2596 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 1085:
#line 2597 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 1086:
#line 2598 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 1087:
#line 2599 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1088:
#line 2600 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1089:
#line 2603 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(yyvsp[(6) - (8)].str),(Coord::CoordSystem)(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 1090:
#line 2605 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 1091:
#line 2607 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 1092:
#line 2609 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 1093:
#line 2611 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 1094:
#line 2613 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1095:
#line 2615 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsDataCmd((yyvsp[(1) - (6)].integer),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1096:
#line 2617 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsDataAllCmd((Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1097:
#line 2619 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsFieldsCmd();;}
    break;

  case 1098:
#line 2621 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 1099:
#line 2622 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1100:
#line 2623 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1101:
#line 2625 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1102:
#line 2627 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1103:
#line 2630 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1104:
#line 2632 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1105:
#line 2633 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1106:
#line 2634 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1107:
#line 2636 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1108:
#line 2638 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1109:
#line 2641 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer),
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1110:
#line 2644 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1111:
#line 2645 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1112:
#line 2646 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1113:
#line 2647 "frame/parser.Y"
    {fr->getMarkerCompassEndCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1114:
#line 2648 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1115:
#line 2650 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1116:
#line 2651 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1117:
#line 2652 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1118:
#line 2653 "frame/parser.Y"
    {fr->getMarkerCompositeAreaCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1119:
#line 2654 "frame/parser.Y"
    {fr->getMarkerCompositeOperationCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1120:
#line 2655 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1121:
#line 2656 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1122:
#line 2658 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1123:
#line 2660 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1124:
#line 2662 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1125:
#line 2664 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer),
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1126:
#line 2666 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1127:
#line 2667 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1128:
#line 2669 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1129:
#line 2671 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1130:
#line 2673 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1131:
#line 2674 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1132:
#line 2675 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1133:
#line 2676 "frame/parser.Y"
    {fr->getMarkerLineEndCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1134:
#line 2678 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1135:
#line 2680 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1136:
#line 2683 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1137:
#line 2686 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1138:
#line 2687 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1139:
#line 2688 "frame/parser.Y"
    {fr->getMarkerPointGlyphCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1140:
#line 2690 "frame/parser.Y"
    {fr->getMarkerPolygonPointCmd((yyvsp[(1) - (6)].integer),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),(Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1141:
#line 2693 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1142:
#line 2696 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer),
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1143:
#line 2699 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1144:
#line 2700 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1145:
#line 2701 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1146:
#line 2702 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1147:
#line 2704 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1148:
#line 2706 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1149:
#line 2708 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1150:
#line 2709 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1151:
#line 2711 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1152:
#line 2712 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1153:
#line 2713 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1154:
#line 2714 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1155:
#line 2715 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1156:
#line 2717 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1157:
#line 2718 "frame/parser.Y"
    {fr->getMarkerVectorEndCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1158:
#line 2720 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1159:
#line 2722 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1160:
#line 2724 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1161:
#line 2725 "frame/parser.Y"
    {fr->getMarkerDashListCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1163:
#line 2727 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1164:
#line 2728 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1165:
#line 2730 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1166:
#line 2732 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1167:
#line 2733 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1168:
#line 2734 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1170:
#line 2736 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1172:
#line 2740 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1173:
#line 2741 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1174:
#line 2742 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1175:
#line 2743 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1176:
#line 2744 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1177:
#line 2745 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1178:
#line 2747 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1179:
#line 2748 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1180:
#line 2750 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1181:
#line 2751 "frame/parser.Y"
    {fr->getMarkerDashListCmd();;}
    break;

  case 1182:
#line 2754 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1183:
#line 2755 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1184:
#line 2756 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1185:
#line 2757 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1186:
#line 2760 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1187:
#line 2761 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1188:
#line 2764 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1189:
#line 2765 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1190:
#line 2768 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1191:
#line 2769 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1192:
#line 2772 "frame/parser.Y"
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

  case 1193:
#line 2785 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1194:
#line 2786 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1195:
#line 2790 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1196:
#line 2791 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1197:
#line 2795 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1198:
#line 2796 "frame/parser.Y"
    {fr->markerLayerCmd(Base::FOOTPRINT);;}
    break;

  case 1199:
#line 2801 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), 0, propQMask, propQValue, taglist);;}
    break;

  case 1200:
#line 2805 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), 1, propQMask, propQValue, taglist);;}
    break;

  case 1201:
#line 2810 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str),0,"green",Coord::PHYSICAL,Coord::ICRS);;}
    break;

  case 1202:
#line 2812 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1203:
#line 2815 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer),0,"green",Coord::PHYSICAL,Coord::ICRS);;}
    break;

  case 1204:
#line 2817 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1205:
#line 2820 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (2)].str), "green");;}
    break;

  case 1206:
#line 2822 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));;}
    break;

  case 1207:
#line 2825 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1208:
#line 2826 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1209:
#line 2827 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1210:
#line 2828 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1211:
#line 2829 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1212:
#line 2830 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1213:
#line 2832 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1216:
#line 2839 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1217:
#line 2840 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1218:
#line 2841 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1219:
#line 2842 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1220:
#line 2843 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1221:
#line 2844 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1224:
#line 2849 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1225:
#line 2850 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1226:
#line 2851 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1227:
#line 2852 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1228:
#line 2853 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1229:
#line 2854 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1230:
#line 2855 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1231:
#line 2856 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1232:
#line 2857 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1233:
#line 2858 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1234:
#line 2859 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1235:
#line 2860 "frame/parser.Y"
    {(yyval.integer) = Marker::FILL;;}
    break;

  case 1238:
#line 2867 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1239:
#line 2868 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1241:
#line 2872 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(1) - (6)].str), (Base::MarkerFormat)(yyvsp[(2) - (6)].integer), (Coord::CoordSystem)(yyvsp[(3) - (6)].integer), (Coord::SkyFrame)(yyvsp[(4) - (6)].integer), (Coord::SkyFormat)(yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].integer), 0);;}
    break;

  case 1242:
#line 2874 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer), 1);;}
    break;

  case 1243:
#line 2875 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1244:
#line 2878 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1245:
#line 2879 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1246:
#line 2880 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1247:
#line 2881 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1248:
#line 2882 "frame/parser.Y"
    {fr->markerSelectFirstCmd();;}
    break;

  case 1249:
#line 2883 "frame/parser.Y"
    {fr->markerSelectLastCmd();;}
    break;

  case 1250:
#line 2886 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1251:
#line 2887 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1254:
#line 2895 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1255:
#line 2898 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1256:
#line 2899 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1260:
#line 2906 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1261:
#line 2909 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1262:
#line 2913 "frame/parser.Y"
    {fr->layerCreateCmd();;}
    break;

  case 1263:
#line 2914 "frame/parser.Y"
    {fr->layerCreateCmd();;}
    break;

  case 1264:
#line 2915 "frame/parser.Y"
    {fr->layerNoCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1265:
#line 2916 "frame/parser.Y"
    {fr->layerNoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1266:
#line 2917 "frame/parser.Y"
    {fr->layerColorCmd(0,(yyvsp[(2) - (2)].str));;}
    break;

  case 1267:
#line 2918 "frame/parser.Y"
    {fr->layerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1268:
#line 2919 "frame/parser.Y"
    {fr->layerBlendCmd(0,(FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1269:
#line 2920 "frame/parser.Y"
    {fr->layerBlendCmd((yyvsp[(1) - (3)].integer),(FitsMask::MaskBlend)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1270:
#line 2921 "frame/parser.Y"
    {fr->layerTransparencyCmd(0,(yyvsp[(2) - (2)].real));;}
    break;

  case 1271:
#line 2922 "frame/parser.Y"
    {fr->layerTransparencyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 1272:
#line 2923 "frame/parser.Y"
    {fr->layerViewCmd(0,(yyvsp[(2) - (2)].integer));;}
    break;

  case 1273:
#line 2924 "frame/parser.Y"
    {fr->layerViewCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1274:
#line 2926 "frame/parser.Y"
    {fr->layerShowCmd(0);;}
    break;

  case 1275:
#line 2927 "frame/parser.Y"
    {fr->layerShowCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1276:
#line 2928 "frame/parser.Y"
    {fr->layerHideCmd(0);;}
    break;

  case 1277:
#line 2929 "frame/parser.Y"
    {fr->layerHideCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1278:
#line 2930 "frame/parser.Y"
    {fr->layerDeleteCmd(0);;}
    break;

  case 1279:
#line 2931 "frame/parser.Y"
    {fr->layerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1280:
#line 2932 "frame/parser.Y"
    {fr->layerUpCmd(0);;}
    break;

  case 1281:
#line 2933 "frame/parser.Y"
    {fr->layerUpCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1282:
#line 2934 "frame/parser.Y"
    {fr->layerDownCmd(0);;}
    break;

  case 1283:
#line 2935 "frame/parser.Y"
    {fr->layerDownCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1284:
#line 2936 "frame/parser.Y"
    {fr->layerTopCmd(0);;}
    break;

  case 1285:
#line 2937 "frame/parser.Y"
    {fr->layerTopCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1286:
#line 2938 "frame/parser.Y"
    {fr->layerBottomCmd(0);;}
    break;

  case 1287:
#line 2939 "frame/parser.Y"
    {fr->layerBottomCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1288:
#line 2942 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1289:
#line 2943 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1290:
#line 2944 "frame/parser.Y"
    {fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1291:
#line 2945 "frame/parser.Y"
    {fr->maskRangeCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 1292:
#line 2946 "frame/parser.Y"
    {fr->maskSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1293:
#line 2947 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1294:
#line 2948 "frame/parser.Y"
    {fr->maskBlendCmd((FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1295:
#line 2949 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1296:
#line 2955 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1297:
#line 2956 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1298:
#line 2957 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1299:
#line 2958 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1300:
#line 2962 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1301:
#line 2963 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1302:
#line 2965 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1303:
#line 2970 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1305:
#line 2972 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1307:
#line 2974 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1308:
#line 2977 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1309:
#line 2979 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1310:
#line 2984 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1311:
#line 2987 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1312:
#line 2988 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1313:
#line 2989 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1314:
#line 2992 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1315:
#line 2994 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1316:
#line 2998 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1317:
#line 2999 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1318:
#line 3003 "frame/parser.Y"
    {fr->psColorSpaceCmd((PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1319:
#line 3004 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1320:
#line 3005 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1321:
#line 3006 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 1322:
#line 3012 "frame/parser.Y"
    {fr->precCmd((yyvsp[(1) - (9)].integer),(yyvsp[(2) - (9)].integer),(yyvsp[(3) - (9)].integer),(yyvsp[(4) - (9)].integer),(yyvsp[(5) - (9)].integer),(yyvsp[(6) - (9)].integer),(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 1323:
#line 3013 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->precCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 1324:
#line 3019 "frame/parser.Y"
    {(yyval.integer) = BW;;}
    break;

  case 1325:
#line 3020 "frame/parser.Y"
    {(yyval.integer) = GRAY;;}
    break;

  case 1326:
#line 3021 "frame/parser.Y"
    {(yyval.integer) = RGB;;}
    break;

  case 1327:
#line 3022 "frame/parser.Y"
    {(yyval.integer) = CMYK;;}
    break;

  case 1330:
#line 3030 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1331:
#line 3032 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1332:
#line 3033 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1333:
#line 3034 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1334:
#line 3038 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1335:
#line 3039 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1336:
#line 3040 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1337:
#line 3041 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1338:
#line 3044 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1339:
#line 3045 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1340:
#line 3046 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::FIP;;}
    break;

  case 1341:
#line 3049 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1342:
#line 3050 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1343:
#line 3051 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1344:
#line 3054 "frame/parser.Y"
    {fr->revealCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1345:
#line 3055 "frame/parser.Y"
    {fr->revealClearCmd();;}
    break;

  case 1346:
#line 3058 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1347:
#line 3059 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1348:
#line 3060 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1349:
#line 3064 "frame/parser.Y"
    {fr->setMultiColorSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1350:
#line 3067 "frame/parser.Y"
    {fr->setHLSChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1351:
#line 3068 "frame/parser.Y"
    {fr->setHLSChannelCmd("hue");;}
    break;

  case 1352:
#line 3069 "frame/parser.Y"
    {fr->setHLSChannelCmd("saturation");;}
    break;

  case 1353:
#line 3070 "frame/parser.Y"
    {fr->setHLSSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1354:
#line 3071 "frame/parser.Y"
    {fr->setHLSViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1355:
#line 3074 "frame/parser.Y"
    {fr->setHSVChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1356:
#line 3075 "frame/parser.Y"
    {fr->setHSVChannelCmd("hue");;}
    break;

  case 1357:
#line 3076 "frame/parser.Y"
    {fr->setHSVChannelCmd("saturation");;}
    break;

  case 1358:
#line 3077 "frame/parser.Y"
    {fr->setHSVChannelCmd("value");;}
    break;

  case 1359:
#line 3078 "frame/parser.Y"
    {fr->setHSVSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1360:
#line 3079 "frame/parser.Y"
    {fr->setHSVViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1361:
#line 3082 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1362:
#line 3083 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (2)].real))));;}
    break;

  case 1364:
#line 3085 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (2)].real))));;}
    break;

  case 1365:
#line 3086 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (3)].real))));;}
    break;

  case 1366:
#line 3089 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1367:
#line 3090 "frame/parser.Y"
    {fr->rotateMotionCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1368:
#line 3091 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1374:
#line 3099 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1375:
#line 3102 "frame/parser.Y"
    {fr->savePixelMaskFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1376:
#line 3103 "frame/parser.Y"
    {fr->savePixelMaskChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1377:
#line 3104 "frame/parser.Y"
    {fr->savePixelMaskSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1378:
#line 3108 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1379:
#line 3110 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1380:
#line 3112 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1397:
#line 3133 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1398:
#line 3134 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1399:
#line 3135 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1400:
#line 3138 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1401:
#line 3139 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1402:
#line 3140 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1403:
#line 3143 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1404:
#line 3144 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1405:
#line 3145 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1406:
#line 3148 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1407:
#line 3149 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1408:
#line 3150 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1410:
#line 3154 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1411:
#line 3155 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1412:
#line 3156 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1413:
#line 3159 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1414:
#line 3160 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1415:
#line 3161 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1416:
#line 3165 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1417:
#line 3167 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1418:
#line 3169 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1419:
#line 3172 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1420:
#line 3173 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1421:
#line 3174 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1422:
#line 3177 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1423:
#line 3178 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1424:
#line 3179 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1425:
#line 3183 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1426:
#line 3185 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1427:
#line 3187 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1428:
#line 3190 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1429:
#line 3191 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1430:
#line 3192 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1431:
#line 3195 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1432:
#line 3196 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1433:
#line 3197 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1434:
#line 3201 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1435:
#line 3203 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1436:
#line 3205 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1437:
#line 3208 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1438:
#line 3209 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1439:
#line 3210 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1440:
#line 3213 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1441:
#line 3214 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1442:
#line 3215 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1443:
#line 3218 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1444:
#line 3219 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1445:
#line 3220 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1446:
#line 3224 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1447:
#line 3226 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1448:
#line 3228 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1449:
#line 3232 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1450:
#line 3236 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1451:
#line 3238 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1452:
#line 3242 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1453:
#line 3245 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1454:
#line 3246 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1455:
#line 3247 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1456:
#line 3248 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1457:
#line 3251 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1458:
#line 3253 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1459:
#line 3255 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1460:
#line 3258 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 1462:
#line 3260 "frame/parser.Y"
    {fr->updateFitsCenterCmd();;}
    break;

  case 1463:
#line 3262 "frame/parser.Y"
    {fr->updateFitsCenterCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1464:
#line 3265 "frame/parser.Y"
    {fr->sliceCmd(2,(yyvsp[(1) - (1)].integer));;}
    break;

  case 1465:
#line 3266 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1466:
#line 3267 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1467:
#line 3270 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1468:
#line 3271 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1469:
#line 3275 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1471:
#line 3277 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1474:
#line 3282 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1475:
#line 3283 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1476:
#line 3284 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1477:
#line 3287 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1478:
#line 3288 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1479:
#line 3289 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1480:
#line 3292 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1481:
#line 3294 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1482:
#line 3299 "frame/parser.Y"
    {fr->wcsAlign2Cmd((yyvsp[(2) - (4)].integer), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1483:
#line 3300 "frame/parser.Y"
    {fr->wcsAlignPointerClearCmd();;}
    break;

  case 1484:
#line 3303 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1485:
#line 3310 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1486:
#line 3312 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1487:
#line 3314 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1488:
#line 3319 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1490:
#line 3323 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1491:
#line 3324 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1492:
#line 3325 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1493:
#line 3327 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1494:
#line 3329 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1495:
#line 3334 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 12439 "frame/parser.C"
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


#line 3338 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

