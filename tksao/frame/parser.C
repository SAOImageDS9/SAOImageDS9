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
     XML_ = 645,
     XY_ = 646,
     YES_ = 647,
     ZERO_ = 648,
     ZMAX_ = 649,
     ZSCALE_ = 650,
     PIXMASK_ = 651,
     ZOOM_ = 652,
     FIELDS_ = 653
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
#define XML_ 645
#define XY_ 646
#define YES_ 647
#define ZERO_ 648
#define ZMAX_ 649
#define ZSCALE_ 650
#define PIXMASK_ 651
#define ZOOM_ 652
#define FIELDS_ 653




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
#line 953 "frame/parser.C"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 966 "frame/parser.C"

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
#define YYFINAL  414
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   6302

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  403
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  250
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1493
/* YYNRULES -- Number of states.  */
#define YYNSTATES  3246

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   653

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
       2,   402,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   400,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   401,   399,
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
     395,   396,   397,   398
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
    2023,  2028,  2033,  2038,  2042,  2046,  2052,  2057,  2062,  2067,
    2071,  2075,  2079,  2083,  2087,  2091,  2094,  2097,  2102,  2106,
    2110,  2114,  2118,  2123,  2128,  2133,  2138,  2144,  2149,  2156,
    2164,  2169,  2174,  2180,  2183,  2187,  2191,  2195,  2199,  2203,
    2207,  2211,  2214,  2218,  2222,  2226,  2230,  2235,  2239,  2245,
    2252,  2256,  2260,  2265,  2269,  2273,  2277,  2281,  2285,  2291,
    2295,  2299,  2304,  2308,  2311,  2314,  2316,  2320,  2325,  2330,
    2335,  2340,  2345,  2352,  2357,  2362,  2368,  2373,  2378,  2383,
    2388,  2394,  2399,  2406,  2414,  2419,  2424,  2430,  2436,  2442,
    2448,  2454,  2460,  2468,  2474,  2480,  2487,  2492,  2497,  2502,
    2507,  2512,  2519,  2524,  2529,  2535,  2541,  2547,  2553,  2559,
    2566,  2572,  2580,  2589,  2595,  2601,  2608,  2612,  2616,  2620,
    2624,  2629,  2633,  2639,  2646,  2650,  2654,  2659,  2663,  2667,
    2671,  2675,  2679,  2685,  2689,  2693,  2698,  2703,  2708,  2712,
    2718,  2723,  2728,  2733,  2736,  2740,  2743,  2748,  2754,  2761,
    2768,  2770,  2772,  2774,  2777,  2780,  2783,  2787,  2791,  2794,
    2807,  2810,  2813,  2815,  2819,  2824,  2827,  2828,  2832,  2834,
    2837,  2840,  2843,  2846,  2849,  2854,  2859,  2864,  2869,  2873,
    2877,  2882,  2888,  2897,  2904,  2914,  2921,  2929,  2940,  2952,
    2965,  2975,  2981,  2988,  2992,  2998,  3004,  3010,  3017,  3023,
    3028,  3033,  3038,  3048,  3059,  3071,  3081,  3088,  3095,  3102,
    3109,  3116,  3123,  3130,  3137,  3144,  3152,  3160,  3163,  3168,
    3173,  3178,  3183,  3189,  3194,  3199,  3205,  3211,  3215,  3220,
    3225,  3230,  3238,  3248,  3255,  3266,  3278,  3291,  3301,  3305,
    3308,  3312,  3318,  3324,  3332,  3337,  3341,  3345,  3352,  3360,
    3369,  3377,  3385,  3390,  3395,  3400,  3410,  3415,  3419,  3424,
    3432,  3440,  3443,  3447,  3451,  3455,  3460,  3463,  3466,  3471,
    3476,  3487,  3491,  3496,  3498,  3502,  3505,  3508,  3511,  3514,
    3518,  3524,  3529,  3535,  3538,  3541,  3544,  3547,  3551,  3554,
    3557,  3560,  3564,  3567,  3571,  3576,  3580,  3584,  3591,  3596,
    3599,  3603,  3606,  3609,  3614,  3618,  3622,  3625,  3629,  3631,
    3634,  3636,  3639,  3642,  3645,  3649,  3651,  3653,  3655,  3657,
    3660,  3662,  3665,  3668,  3670,  3673,  3676,  3678,  3681,  3683,
    3685,  3687,  3689,  3691,  3693,  3695,  3697,  3698,  3700,  3703,
    3706,  3709,  3713,  3719,  3727,  3735,  3742,  3748,  3754,  3761,
    3768,  3775,  3781,  3788,  3795,  3802,  3809,  3816,  3823,  3830,
    3837,  3845,  3857,  3865,  3873,  3881,  3891,  3901,  3912,  3925,
    3938,  3942,  3945,  3946,  3948,  3952,  3957,  3962,  3967,  3968,
    3970,  3972,  3977,  3982,  3984,  3986,  3988,  3990,  3992,  3994,
    3996,  3998,  4001,  4003,  4005,  4007,  4011,  4015,  4024,  4031,
    4042,  4050,  4058,  4064,  4071,  4078,  4082,  4085,  4088,  4092,
    4097,  4103,  4109,  4115,  4119,  4124,  4130,  4136,  4142,  4148,
    4151,  4155,  4159,  4163,  4169,  4173,  4177,  4181,  4185,  4189,
    4194,  4200,  4206,  4212,  4218,  4222,  4227,  4233,  4239,  4242,
    4245,  4249,  4253,  4259,  4266,  4273,  4277,  4281,  4285,  4292,
    4299,  4305,  4311,  4314,  4318,  4322,  4328,  4335,  4339,  4342,
    4345,  4349,  4352,  4356,  4359,  4363,  4367,  4373,  4380,  4383,
    4386,  4389,  4392,  4394,  4399,  4404,  4406,  4409,  4412,  4415,
    4418,  4421,  4424,  4427,  4431,  4434,  4438,  4441,  4445,  4447,
    4449,  4451,  4453,  4455,  4457,  4458,  4461,  4462,  4465,  4466,
    4468,  4469,  4470,  4472,  4474,  4476,  4478,  4480,  4488,  4497,
    4500,  4507,  4510,  4517,  4520,  4524,  4527,  4529,  4531,  4535,
    4539,  4541,  4546,  4549,  4551,  4555,  4559,  4564,  4568,  4572,
    4576,  4578,  4580,  4582,  4584,  4586,  4588,  4590,  4592,  4594,
    4596,  4598,  4600,  4602,  4604,  4606,  4609,  4610,  4611,  4614,
    4621,  4629,  4632,  4634,  4638,  4640,  4644,  4646,  4648,  4650,
    4653,  4656,  4658,  4662,  4663,  4664,  4667,  4670,  4672,  4676,
    4682,  4683,  4685,  4687,  4690,  4693,  4697,  4700,  4704,  4707,
    4711,  4714,  4718,  4720,  4723,  4725,  4728,  4730,  4733,  4735,
    4738,  4740,  4743,  4745,  4748,  4750,  4753,  4755,  4758,  4761,
    4765,  4768,  4771,  4774,  4777,  4779,  4781,  4783,  4785,  4790,
    4793,  4797,  4801,  4804,  4808,  4811,  4814,  4817,  4821,  4825,
    4829,  4832,  4836,  4838,  4842,  4846,  4848,  4851,  4854,  4857,
    4860,  4870,  4877,  4879,  4881,  4883,  4885,  4888,  4891,  4895,
    4899,  4901,  4904,  4908,  4912,  4914,  4917,  4919,  4921,  4923,
    4925,  4927,  4929,  4931,  4933,  4936,  4939,  4944,  4947,  4950,
    4953,  4956,  4959,  4964,  4967,  4970,  4973,  4976,  4979,  4984,
    4986,  4989,  4992,  4995,  4999,  5001,  5003,  5005,  5008,  5011,
    5014,  5017,  5020,  5023,  5026,  5029,  5032,  5036,  5040,  5044,
    5048,  5052,  5056,  5058,  5061,  5064,  5067,  5071,  5074,  5078,
    5082,  5086,  5090,  5094,  5098,  5101,  5104,  5107,  5110,  5113,
    5116,  5119,  5122,  5125,  5128,  5131,  5134,  5137,  5140,  5144,
    5148,  5152,  5155,  5158,  5161,  5165,  5169,  5173,  5176,  5179,
    5182,  5185,  5188,  5191,  5195,  5199,  5203,  5206,  5209,  5212,
    5215,  5218,  5221,  5225,  5229,  5233,  5236,  5239,  5242,  5245,
    5248,  5251,  5254,  5257,  5260,  5264,  5268,  5272,  5277,  5284,
    5287,  5289,  5291,  5293,  5295,  5297,  5298,  5304,  5306,  5313,
    5317,  5320,  5325,  5327,  5330,  5333,  5336,  5340,  5344,  5347,
    5350,  5353,  5356,  5359,  5362,  5366,  5369,  5372,  5376,  5378,
    5382,  5387,  5390,  5392,  5395,  5401,  5408,  5415,  5418,  5420,
    5423,  5426,  5432,  5439
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     404,     0,    -1,   105,   406,    -1,    47,   441,    -1,    44,
      72,     5,    -1,    44,    72,   407,    -1,    50,   446,    -1,
      64,    -1,    70,    -1,    71,   448,    -1,    75,   328,     5,
      -1,    76,   453,    -1,    77,   455,    -1,    85,   457,    -1,
      92,   468,    -1,    94,   470,    -1,    95,   471,    -1,   104,
     407,    -1,   130,   473,    -1,   140,   474,    -1,   153,   475,
      -1,   159,   526,    -1,   163,   529,    -1,   167,    -1,   168,
     407,    -1,   168,    72,     5,    -1,   173,   616,    -1,   174,
     615,    -1,   177,   535,    -1,   183,    15,     4,    -1,   200,
     538,    -1,   204,   558,    -1,   205,   559,    -1,   206,   560,
      -1,   209,   577,   561,    -1,   210,   598,    -1,   189,   597,
      -1,   222,   614,    -1,   226,    72,     5,    -1,   248,   599,
      -1,   250,   600,    -1,   251,   603,    -1,   272,    96,    -1,
     265,   605,    -1,   263,   604,    -1,   280,    -1,   276,   577,
     607,    -1,   282,   612,    -1,   283,   613,    -1,   285,   617,
      -1,   290,   619,    -1,   306,    -1,   312,   641,    -1,   331,
       4,    -1,   333,   434,    -1,   346,    -1,   348,   643,    -1,
     355,    -1,   358,   645,    -1,   359,   646,    -1,   389,   650,
      -1,   397,   651,    -1,     3,    -1,     4,    -1,   407,    -1,
     219,   407,    -1,   252,   407,    -1,   254,   407,    -1,   359,
     407,    -1,    47,   407,    -1,    50,   407,    -1,    84,   407,
      -1,    92,   407,    -1,   160,   407,    -1,   283,   407,    -1,
       4,    -1,   392,    -1,   399,    -1,   241,    -1,   342,    -1,
     231,    -1,   400,    -1,   240,    -1,   132,    -1,    -1,   284,
      41,    -1,   149,    41,    -1,   284,    -1,   149,    -1,    -1,
     410,    -1,   405,    -1,     6,    -1,     7,    -1,     8,    -1,
       9,    -1,    10,    -1,   411,   411,    -1,   412,   413,    -1,
     413,   413,    -1,   405,   405,    -1,   178,    -1,   256,    -1,
     110,    -1,    19,    -1,   416,    -1,   359,    -1,   360,    -1,
     361,    -1,   362,    -1,   363,    -1,   364,    -1,   365,    -1,
     366,    -1,   367,    -1,   368,    -1,   369,    -1,   370,    -1,
     371,    -1,   372,    -1,   373,    -1,   374,    -1,   375,    -1,
     376,    -1,   377,    -1,   378,    -1,   379,    -1,   380,    -1,
     381,    -1,   382,    -1,   383,    -1,   384,    -1,   385,    -1,
     386,    -1,    61,    -1,   251,    -1,    -1,   393,    -1,   235,
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
      -1,    93,    -1,   401,    -1,    27,    -1,    56,    -1,   156,
      -1,    -1,     4,    -1,    90,    -1,   170,    -1,   258,    -1,
     259,    -1,   273,    -1,   320,    -1,    -1,    34,    -1,   324,
      -1,   211,    -1,    -1,   227,    -1,    45,    -1,    46,    -1,
     195,    -1,   196,    -1,   353,   440,    -1,    51,   437,    -1,
      82,   438,    -1,   168,   439,    -1,   213,   610,    -1,    39,
     611,    -1,   302,   435,    -1,   292,   405,    -1,   325,     4,
      -1,   334,   405,    -1,   407,    -1,    18,   405,    -1,   322,
     405,    -1,   233,   436,    -1,   407,    -1,   322,   405,    -1,
     407,    -1,    72,     5,    -1,   407,    -1,    72,     5,    -1,
     407,    -1,    72,     5,    -1,   405,   405,    -1,   260,   405,
     405,   405,   405,   405,    -1,    11,   442,    -1,    79,     5,
       5,     5,    -1,   109,     4,    -1,   131,   443,    -1,   150,
     444,    -1,    58,   309,     4,    -1,   339,   445,    -1,   135,
       5,    -1,    64,    -1,   405,   405,    -1,   405,    -1,   405,
     405,    -1,   405,    11,   405,   405,    -1,   405,   405,    11,
     405,   405,    -1,   339,   405,    -1,   339,   405,   405,    -1,
     339,   405,    11,   405,   405,    -1,   339,   405,   405,    11,
     405,   405,    -1,    34,    -1,   324,    -1,   138,    -1,   405,
     405,    11,    64,     5,     5,     5,    -1,   405,   405,     4,
     405,   405,    11,    64,     5,     5,     5,     5,    -1,   405,
     405,    11,   405,   405,     5,     5,     5,    -1,   405,   405,
       4,   405,   405,    11,   405,   405,     5,     5,     5,     5,
      -1,   405,    -1,   405,   405,    -1,   339,   447,    -1,   226,
     393,   407,    -1,   138,    -1,   405,    -1,   405,   405,    -1,
     295,   449,    -1,   220,   450,    -1,   214,   451,    -1,   350,
     405,   405,    -1,   350,   226,   226,    -1,   395,   452,    -1,
     267,   407,    -1,   155,    -1,   201,    -1,   405,    -1,   214,
      -1,   395,    -1,   394,    -1,   350,    -1,     4,   421,    -1,
     220,   421,    -1,   287,     4,    -1,   279,    -1,   405,     4,
       4,    -1,    86,   405,    -1,   287,     4,    -1,   197,     4,
      -1,     4,   405,   405,     4,     4,    -1,   283,   405,   405,
     405,   405,   405,   405,     4,     4,    -1,   173,   405,   405,
     405,   405,   405,   405,     4,     4,    -1,   174,   405,   405,
     405,   405,   405,   405,     4,     4,    -1,   222,     4,     4,
       5,     5,     5,     4,    -1,    43,    -1,   221,   454,    -1,
     122,    -1,     4,   405,   405,     4,     4,    -1,   283,   405,
     405,   405,   405,   405,   405,     4,     4,    -1,   173,   405,
     405,   405,   405,   405,   405,     4,     4,    -1,   174,   405,
     405,   405,   405,   405,   405,     4,     4,    -1,   222,     4,
       4,     5,     5,     5,     4,    -1,   420,    -1,   202,   405,
      -1,   154,   405,   405,   456,   456,   456,    -1,   405,    -1,
      32,    -1,    91,   459,    -1,   101,     4,     4,    -1,   108,
     460,    -1,   200,   461,    -1,   253,   465,    -1,   290,   466,
      -1,   323,   467,    -1,    33,   458,    -1,   225,     4,     5,
      -1,   280,     4,    -1,   280,     4,     4,    -1,   323,     4,
       4,     5,     4,     4,     4,     4,    -1,   323,     4,    16,
       5,     4,     4,     4,     4,    -1,     5,     4,     4,   464,
       4,     4,   420,   405,   462,   463,   405,   405,     5,    -1,
       5,     4,     4,   464,     4,     4,   420,   405,   405,   463,
     405,   405,     5,    -1,     5,     4,     4,   464,     4,     4,
     420,   405,   462,   405,   405,     5,    -1,     5,     4,     4,
     464,     4,     4,   420,   405,   405,   405,   405,     5,    -1,
     262,    -1,    -1,    33,    -1,    33,     4,    -1,     5,    -1,
       5,     5,     4,   407,    -1,     5,     4,   407,     5,   415,
     422,    -1,   214,    -1,   395,    -1,   394,    -1,   350,    -1,
     155,    -1,   201,    -1,   312,    -1,    50,    -1,     5,    -1,
       5,     5,     4,   407,    -1,     5,     5,     4,   407,     4,
       4,    -1,     5,   415,   422,    -1,    33,     5,   415,   422,
      -1,    33,     4,     5,   415,   422,    -1,    70,    -1,     4,
      70,    -1,     4,     5,     4,     4,    -1,     4,     5,     4,
       4,     4,     4,    -1,    -1,   405,   405,   405,   405,   415,
     422,    -1,    64,   414,   415,   422,   405,   405,   415,   424,
      -1,   333,   469,    -1,    43,   405,   405,    -1,   221,   405,
     405,    -1,   122,   405,   405,    -1,    -1,   405,   405,   415,
     422,    -1,    43,   405,   405,     4,    -1,   221,   405,   405,
       4,    -1,   122,   405,   405,     4,    -1,   417,   405,   405,
      -1,   415,   422,   414,    -1,   407,    -1,   358,   405,   405,
      -1,    43,   221,   417,   405,   405,    -1,   221,   417,   405,
     405,    -1,    43,   221,   415,   414,    -1,   221,   415,   414,
      -1,    35,     4,    -1,    -1,    34,    -1,   324,    -1,   211,
      -1,   405,    -1,    70,    -1,   163,   129,     5,    -1,   181,
       5,    -1,    -1,    44,    72,    -1,    47,   478,    -1,    50,
     480,    -1,    71,   481,    -1,    76,   485,    -1,    75,   484,
      -1,    77,   487,    -1,    85,   489,    -1,    87,   492,    -1,
      92,   493,    -1,    94,   494,    -1,    96,   496,    -1,    95,
     495,    -1,   102,   497,    -1,   104,    -1,   139,   501,    -1,
     159,   507,    -1,   168,    72,    -1,   170,     5,     5,     4,
      -1,   171,    97,   476,    -1,   173,   515,    -1,   174,   514,
      -1,   177,   499,    -1,   181,   498,    -1,   183,    15,    -1,
     214,    -1,   209,   577,   571,    -1,   210,   509,    -1,   189,
     508,    -1,   222,   513,    -1,   226,    72,    -1,   248,    -1,
     250,   511,    -1,   257,   327,   417,   405,   405,     4,     4,
       5,    -1,   283,   512,    -1,   285,    -1,   312,   516,    -1,
     331,    -1,   333,   517,    -1,   343,    -1,   351,   417,   405,
     405,    -1,   357,    97,   477,    -1,   359,   524,    -1,   397,
      -1,     5,     5,   405,   405,   417,     4,   472,    -1,     5,
       5,   405,   405,   415,   422,     4,   472,    -1,     5,     5,
     405,   405,   417,     4,   472,    -1,     5,     5,   405,   405,
     415,   422,     4,   472,    -1,   109,    -1,   131,    -1,   150,
      -1,    58,   309,    -1,    96,    -1,   135,    -1,    79,   479,
      -1,   199,    -1,    -1,   214,     5,    -1,   113,     5,    -1,
     131,    -1,   226,   393,    -1,    -1,   462,   463,    -1,   405,
     463,    -1,   295,    -1,   220,    -1,   214,   482,    -1,   350,
     193,    -1,   395,   483,    -1,   267,    -1,   220,    -1,   287,
      -1,    86,    -1,   287,    -1,   197,    -1,    -1,   328,    -1,
     193,   486,    -1,     4,    -1,     4,   417,   405,   405,    -1,
       4,   405,   405,   420,   405,    -1,    -1,   193,   488,    -1,
     202,    -1,   154,    -1,     4,   405,   405,   420,   405,    -1,
     415,   422,    -1,    33,    89,    -1,    71,   490,    -1,    72,
      -1,   100,    -1,   101,    -1,   193,    -1,   238,   193,    -1,
     213,    -1,    77,   491,    -1,   312,    -1,   323,    -1,   323,
       4,    -1,    33,    -1,    33,   323,     4,    -1,   388,    -1,
      -1,   220,    -1,   295,    -1,    -1,   202,    -1,   405,   405,
     415,   422,   423,    -1,   417,   405,   405,   415,   422,   423,
      -1,   415,   422,   423,    -1,    64,   415,   422,   423,   415,
     424,    -1,   333,   415,   422,    -1,   417,    -1,   415,   422,
     423,    -1,   321,    -1,    35,    -1,   417,    -1,   415,   422,
     423,    -1,   415,   422,   414,   405,   405,     5,    -1,     4,
     415,   422,   414,   405,   405,     5,    -1,   417,   405,   405,
       4,     4,    -1,     5,   408,    -1,    71,    -1,   417,   405,
     405,     5,   408,    -1,     4,     4,     4,     4,    -1,    96,
      -1,   133,   225,   500,    -1,    -1,     4,    -1,   405,   405,
      -1,   228,    -1,    64,   415,   422,   423,    -1,    89,    -1,
     109,   504,    -1,    48,    -1,   129,   502,    -1,   133,   225,
     505,    -1,   165,   503,    -1,   166,    -1,   239,   225,    -1,
     309,    -1,   309,   415,   422,   424,    -1,   310,   506,    -1,
     388,    -1,     4,    -1,   417,   405,   405,    -1,     4,    -1,
     187,     5,    -1,     4,   187,     5,    -1,   359,     4,    -1,
      -1,     4,    -1,   408,    -1,   408,   417,   405,   405,    -1,
     408,     4,    -1,    -1,     4,    -1,   147,   178,   415,    -1,
     147,   178,     4,   415,    -1,   339,   178,   405,   415,    -1,
      -1,   247,    -1,   352,    -1,    89,    -1,   190,    -1,    72,
     510,    -1,    49,   510,    -1,   337,   510,    -1,   353,   510,
      -1,    72,    -1,   208,    -1,   275,    -1,   326,    -1,   337,
      -1,    89,    -1,    49,    -1,    -1,     4,    -1,   267,    -1,
      66,    -1,   326,    -1,   353,    -1,   326,    -1,    66,    -1,
     326,    -1,   353,    -1,    66,    -1,   326,    -1,   353,    -1,
     150,    -1,   274,    -1,   274,   215,    -1,   307,    -1,   307,
     215,    -1,    21,    -1,   353,   523,    -1,    51,   520,    -1,
      82,   521,    -1,   168,   522,    -1,   213,    -1,    39,    -1,
     302,   518,    -1,   292,    -1,    -1,    18,    -1,   322,    -1,
     233,   519,    -1,    -1,   322,    -1,    -1,    72,    -1,    -1,
      72,    -1,    -1,    72,    -1,    -1,   260,    -1,    -1,    15,
     525,    -1,   225,   416,    -1,    -1,   261,    -1,    91,   527,
      -1,   108,    -1,   415,   422,   423,   528,     5,     5,    -1,
     415,   422,   423,   528,     5,    -1,    20,    -1,   270,    -1,
      19,    -1,    44,    72,    -1,    47,   530,    -1,    85,   531,
      -1,    92,    -1,   103,    -1,   104,    -1,   110,    -1,   139,
     532,    -1,   159,    -1,   177,    -1,   184,    -1,   209,   533,
      -1,   256,    -1,   178,    -1,   312,    -1,   326,   415,    -1,
     359,   534,    -1,    80,     5,    -1,    -1,    33,    -1,    -1,
      47,    -1,    95,    -1,   219,    -1,   168,    -1,   298,    -1,
     253,    -1,   344,    -1,   415,    -1,    63,   415,    -1,   126,
     415,    -1,   198,   415,    -1,    17,    -1,   333,   415,    -1,
     229,     4,     4,    -1,   127,    -1,   212,     5,    -1,    96,
     537,    -1,   299,   133,   225,   536,    -1,   299,     4,     4,
       4,     4,    -1,   348,    -1,   359,   405,   405,   405,   405,
     405,   405,   405,   405,     4,    -1,     5,    -1,     5,     4,
      -1,     4,     4,    61,    -1,     4,     4,   415,    -1,   220,
     407,    -1,    26,   539,    -1,    29,   554,    -1,   123,   541,
      -1,   139,   542,    -1,   180,   557,    -1,   237,   553,    -1,
     255,   555,    -1,     5,     5,    -1,     5,     5,     4,    -1,
     332,   556,    -1,     5,    13,     5,   427,    -1,     5,    14,
       5,   427,    -1,     5,    66,     5,   427,    -1,     5,   217,
     427,    -1,     5,   218,   427,    -1,     5,   303,   425,     4,
     427,    -1,     5,   314,     4,   427,    -1,     5,   315,     4,
     427,    -1,     5,   352,     5,   427,    -1,   283,    95,   540,
      -1,   174,    95,   540,    -1,   173,    95,   540,    -1,     5,
      13,     5,    -1,     5,    14,     5,    -1,     5,    66,     5,
      -1,     5,   217,    -1,     5,   218,    -1,     5,   303,   425,
       4,    -1,     5,   314,     4,    -1,     5,   315,     4,    -1,
       5,   352,     5,    -1,     5,     5,   311,    -1,     5,    13,
       5,   427,    -1,     5,    14,     5,   427,    -1,     5,    66,
       5,   427,    -1,     5,   217,   426,   427,    -1,     5,     5,
     311,   426,   427,    -1,     5,   218,   426,   427,    -1,     5,
     303,   425,     4,   426,   427,    -1,     5,   319,   425,     4,
       4,   426,   427,    -1,     5,   314,     4,   427,    -1,     5,
     315,     4,   427,    -1,     5,   352,     5,   426,   427,    -1,
     310,   543,    -1,   129,    95,   544,    -1,   283,   178,   552,
      -1,   283,    95,   551,    -1,   174,   178,   552,    -1,   174,
      95,   551,    -1,   173,   178,   552,    -1,   173,    95,   551,
      -1,   219,   545,    -1,     5,    13,     5,    -1,     5,    14,
       5,    -1,     5,    66,     5,    -1,     5,   217,   426,    -1,
       5,     5,   311,   426,    -1,     5,   218,   426,    -1,     5,
     303,   425,     4,   426,    -1,     5,   319,   425,     4,     4,
     426,    -1,     5,   314,     4,    -1,     5,   315,     4,    -1,
       5,   352,     5,   426,    -1,     5,    13,     5,    -1,     5,
      14,     5,    -1,     5,    66,     5,    -1,     5,   217,   426,
      -1,     5,   218,   426,    -1,     5,   303,   425,     4,   426,
      -1,     5,   314,     4,    -1,     5,   315,     4,    -1,     5,
     352,     5,   426,    -1,   178,   183,   546,    -1,   183,   547,
      -1,   178,   548,    -1,   550,    -1,   178,   387,   549,    -1,
       5,    13,     5,   427,    -1,     5,    14,     5,   427,    -1,
       5,    66,     5,   427,    -1,     5,   217,   426,   427,    -1,
       5,   218,   426,   427,    -1,     5,   303,   425,     4,   426,
     427,    -1,     5,   314,     4,   427,    -1,     5,   315,     4,
     427,    -1,     5,   352,     5,   426,   427,    -1,     5,    13,
       5,   427,    -1,     5,    14,     5,   427,    -1,     5,    66,
       5,   427,    -1,     5,   217,   426,   427,    -1,     5,     5,
     311,   426,   427,    -1,     5,   218,   426,   427,    -1,     5,
     303,   425,     4,   426,   427,    -1,     5,   319,   425,     4,
       4,   426,   427,    -1,     5,   314,     4,   427,    -1,     5,
     315,     4,   427,    -1,     5,   352,     5,   426,   427,    -1,
     416,     5,    13,     5,   427,    -1,   416,     5,    14,     5,
     427,    -1,   416,     5,    66,     5,   427,    -1,   416,     5,
     217,   426,   427,    -1,   416,     5,   218,   426,   427,    -1,
     416,     5,   303,   425,     4,   426,   427,    -1,   416,     5,
     314,     4,   427,    -1,   416,     5,   315,     4,   427,    -1,
     416,     5,   352,     5,   426,   427,    -1,     5,    13,     5,
     427,    -1,     5,    14,     5,   427,    -1,     5,    66,     5,
     427,    -1,     5,   217,   426,   427,    -1,     5,   218,   426,
     427,    -1,     5,   303,   425,     4,   426,   427,    -1,     5,
     314,     4,   427,    -1,     5,   315,     4,   427,    -1,     5,
     352,     5,   426,   427,    -1,   416,     5,    13,     5,   427,
      -1,   416,     5,    14,     5,   427,    -1,   416,     5,    66,
       5,   427,    -1,   416,     5,   217,   426,   427,    -1,   416,
       5,     5,   311,   426,   427,    -1,   416,     5,   218,   426,
     427,    -1,   416,     5,   303,   425,     4,   426,   427,    -1,
     416,     5,   319,   425,     4,     4,   426,   427,    -1,   416,
       5,   314,     4,   427,    -1,   416,     5,   315,     4,   427,
      -1,   416,     5,   352,     5,   426,   427,    -1,     5,    13,
       5,    -1,     5,    14,     5,    -1,     5,    66,     5,    -1,
       5,   217,   426,    -1,     5,     5,   311,   426,    -1,     5,
     218,   426,    -1,     5,   303,   425,     4,   426,    -1,     5,
     319,   425,     4,     4,   426,    -1,     5,   314,     4,    -1,
       5,   315,     4,    -1,     5,   352,     5,   426,    -1,     5,
      13,     5,    -1,     5,    14,     5,    -1,     5,    66,     5,
      -1,     5,   217,   426,    -1,     5,   218,   426,    -1,     5,
     303,   425,     4,   426,    -1,     5,   314,     4,    -1,     5,
     315,     4,    -1,     5,   352,     5,   426,    -1,     5,    13,
       5,   427,    -1,     5,    66,     5,   427,    -1,     5,   217,
     427,    -1,     5,   303,   425,     4,   427,    -1,     5,   314,
       4,   427,    -1,     5,   352,     5,   427,    -1,     5,     5,
       5,   427,    -1,     5,     5,    -1,   310,     5,     5,    -1,
       5,   427,    -1,     5,    13,     5,   427,    -1,   310,     5,
      13,     5,   427,    -1,   102,     4,     4,     4,     4,     4,
      -1,   214,     4,     4,     4,     4,     4,    -1,   122,    -1,
     266,    -1,   407,    -1,   157,   407,    -1,    96,   407,    -1,
      72,     5,    -1,     5,     4,     4,    -1,   348,   405,   405,
      -1,   397,   405,    -1,     5,     5,   416,   422,     5,     5,
     416,   422,   405,   416,   424,     5,    -1,    65,   564,    -1,
      72,     5,    -1,    88,    -1,    81,   570,     5,    -1,    81,
     570,   352,     5,    -1,    83,   108,    -1,    -1,    91,   562,
     565,    -1,    97,    -1,   108,   568,    -1,   116,   569,    -1,
     125,     4,    -1,   144,     5,    -1,   168,    16,    -1,   168,
     242,   405,   405,    -1,   168,   340,   405,   405,    -1,     4,
      20,   431,   407,    -1,    20,   320,    60,     5,    -1,    20,
     320,    60,    -1,     4,    21,   410,    -1,     4,    21,   410,
     417,    -1,     4,    21,   410,   415,   422,    -1,     4,    22,
     274,   405,   405,     4,   415,   424,    -1,     4,    22,   274,
       5,   415,   424,    -1,     4,    54,   274,   405,   405,   405,
       4,   415,   424,    -1,     4,    54,   274,     5,   415,   424,
      -1,     4,    53,   274,   405,   405,   415,   424,    -1,     4,
      57,   116,   410,   410,     4,   405,   405,   405,     4,    -1,
       4,    57,   116,   410,   410,     4,   405,   405,   405,     4,
     417,    -1,     4,    57,   116,   410,   410,     4,   405,   405,
     405,     4,   415,   422,    -1,     4,    57,   116,     5,     5,
     415,   422,   415,   424,    -1,     4,    60,   563,     5,     5,
      -1,     4,    68,   274,   405,   415,   424,    -1,     4,    72,
       5,    -1,     4,    82,    27,   407,   407,    -1,     4,    82,
     122,   428,   428,    -1,     4,    82,   188,     5,     5,    -1,
       4,    82,   274,   405,   415,   424,    -1,     4,    82,   326,
     415,   422,    -1,     4,    83,   155,   407,    -1,     4,    83,
      28,   407,    -1,     4,    83,   343,     5,    -1,     4,    90,
     116,   410,   410,     4,   405,   405,     4,    -1,     4,    90,
     116,   410,   410,     4,   405,   405,     4,   417,    -1,     4,
      90,   116,   410,   410,     4,   405,   405,     4,   415,   422,
      -1,     4,    90,   116,     5,     5,   415,   422,   415,   424,
      -1,     4,    91,    22,   274,   405,   405,    -1,     4,    91,
      54,   274,   405,   405,    -1,     4,    91,    57,    21,   405,
     405,    -1,     4,    91,    57,   274,   405,   405,    -1,     4,
      91,   121,   274,   405,   405,    -1,     4,    91,   124,    21,
     405,   405,    -1,     4,    91,   124,   274,   405,   405,    -1,
       4,    91,    90,    21,   405,   405,    -1,     4,    91,    90,
     274,   405,   405,    -1,     4,    91,   262,   356,     4,   405,
     405,    -1,     4,    91,   297,   356,     4,   405,   405,    -1,
       4,   108,    -1,     4,   108,    22,     4,    -1,     4,   108,
      54,     4,    -1,     4,   108,    57,     4,    -1,     4,   108,
     121,     4,    -1,     4,   108,    60,   563,     5,    -1,     4,
     108,   124,     4,    -1,     4,   108,    90,     4,    -1,     4,
     108,   262,   356,     4,    -1,     4,   108,   297,   356,     4,
      -1,     4,   108,   328,    -1,     4,   108,   328,     5,    -1,
       4,   108,   328,     4,    -1,     4,   116,    43,     4,    -1,
       4,   120,   274,   405,   405,   415,   424,    -1,     4,   121,
     274,   405,   405,   405,     4,   415,   424,    -1,     4,   121,
     274,     5,   415,   424,    -1,     4,   124,   116,   410,   410,
       4,   405,   405,   405,     4,    -1,     4,   124,   116,   410,
     410,     4,   405,   405,   405,     4,   417,    -1,     4,   124,
     116,   410,   410,     4,   405,   405,   405,     4,   415,   422,
      -1,     4,   124,   116,     5,     5,   415,   422,   415,   424,
      -1,     4,   144,     5,    -1,     4,   168,    -1,     4,   168,
     242,    -1,     4,   197,    27,   407,   407,    -1,     4,   197,
     122,   428,   428,    -1,     4,   197,   260,   415,   422,   414,
     414,    -1,     4,   224,   405,   405,    -1,     4,   224,   148,
      -1,     4,   224,    38,    -1,     4,   224,   339,   415,   422,
     414,    -1,     4,   262,   260,   415,   422,   423,     5,    -1,
       4,   262,   260,   415,   422,   423,   352,     5,    -1,     4,
     262,   280,   405,   405,   415,   424,    -1,     4,   297,   280,
     405,   405,   415,   424,    -1,     4,   260,   301,   429,    -1,
       4,   260,   309,     4,    -1,     4,   260,   156,     5,    -1,
       4,   268,   415,   422,   414,   414,   405,   415,   424,    -1,
       4,   269,   583,   407,    -1,     4,   285,    43,    -1,     4,
     286,   145,     5,    -1,     4,   286,   260,   415,   422,   414,
     414,    -1,     4,   286,   326,   415,   422,   415,   424,    -1,
       4,   298,    -1,     4,   298,   242,    -1,     4,   328,     5,
      -1,     4,   330,     5,    -1,     4,   330,   285,   407,    -1,
       4,   345,    -1,     4,   347,    -1,     4,   354,    27,   407,
      -1,     4,   354,   122,   428,    -1,     4,   354,   260,   415,
     422,   414,   415,   424,   405,   410,    -1,     4,   388,     4,
      -1,     4,   101,     4,     4,    -1,   186,    -1,   186,   405,
     405,    -1,   199,   578,    -1,   200,   579,    -1,   224,   580,
      -1,   267,   407,    -1,   269,   583,   407,    -1,   269,   583,
     407,   405,   405,    -1,   285,    43,   405,   405,    -1,   285,
     221,   405,   405,     4,    -1,   285,   122,    -1,   290,   587,
      -1,   298,   588,    -1,   306,   589,    -1,     5,    72,     5,
      -1,     5,    88,    -1,     5,   108,    -1,     5,    97,    -1,
       5,   144,     5,    -1,     5,   168,    -1,     5,   168,   242,
      -1,     5,   224,   405,   405,    -1,     5,   224,   148,    -1,
       5,   224,    38,    -1,     5,   224,   339,   415,   422,   414,
      -1,     5,   269,   583,   407,    -1,     5,   298,    -1,     5,
     298,   242,    -1,     5,   345,    -1,     5,   347,    -1,   328,
     116,     5,     5,    -1,   328,   108,     5,    -1,   328,   108,
      16,    -1,   328,     5,    -1,   328,   348,     5,    -1,   253,
      -1,   253,   415,    -1,   344,    -1,   345,    16,    -1,   347,
      16,    -1,   388,     4,    -1,   101,     4,     4,    -1,   298,
      -1,   347,    -1,   168,    -1,   345,    -1,    43,   224,    -1,
     224,    -1,   122,   224,    -1,    43,   116,    -1,   116,    -1,
     122,   116,    -1,    43,   285,    -1,   285,    -1,   122,   285,
      -1,   108,    -1,   330,    -1,    72,    -1,   388,    -1,   269,
      -1,   144,    -1,   186,    -1,   348,    -1,    -1,     4,    -1,
      32,   407,    -1,   274,   405,    -1,   182,     4,    -1,   247,
       4,   405,    -1,    68,   405,   405,   405,   584,    -1,   120,
     405,   405,   405,   405,   409,   584,    -1,    53,   405,   405,
     405,   405,   409,   584,    -1,   262,   405,   405,   405,   405,
     584,    -1,   262,    61,   352,     5,   584,    -1,   297,    61,
     352,     5,   584,    -1,   297,   405,   405,   405,   405,   584,
      -1,   197,   405,   405,   405,   405,   584,    -1,   354,   405,
     405,   405,   405,   584,    -1,   330,   405,   405,   409,   584,
      -1,    68,   260,   405,   405,   430,   584,    -1,    53,   260,
     405,   405,   430,   584,    -1,   111,   260,   405,   405,   430,
     584,    -1,    93,   260,   405,   405,   430,   584,    -1,   401,
     260,   405,   405,   430,   584,    -1,    27,   260,   405,   405,
     430,   584,    -1,    56,   260,   405,   405,   430,   584,    -1,
     156,   260,   405,   405,     5,   584,    -1,   156,   260,   405,
     405,     4,     5,   584,    -1,   286,   405,   405,   405,   405,
     415,   422,   415,   424,     5,   584,    -1,    82,   405,   405,
     405,   415,   422,   584,    -1,   268,   405,   405,   405,   405,
     405,   584,    -1,    22,   405,   405,   405,   405,     4,   584,
      -1,   121,   405,   405,   405,   405,   405,     4,   409,   584,
      -1,    54,   405,   405,   405,   405,   405,     4,   409,   584,
      -1,    90,   405,   405,   410,   410,     4,   405,   405,     4,
     584,    -1,   124,   405,   405,   410,   410,     4,   405,   405,
     405,     4,   409,   584,    -1,    57,   405,   405,   410,   410,
       4,   405,   405,   405,     4,   409,   584,    -1,    83,   566,
     584,    -1,   329,   567,    -1,    -1,     4,    -1,     5,   405,
     405,    -1,   352,     5,   405,   405,    -1,   405,   405,   352,
       5,    -1,     5,   415,   422,   414,    -1,    -1,   298,    -1,
      16,    -1,    43,   405,   405,     4,    -1,   221,   405,   405,
       4,    -1,   122,    -1,   115,    -1,   390,    -1,    69,    -1,
     289,    -1,   288,    -1,   271,    -1,   391,    -1,    65,   572,
      -1,    72,    -1,   144,    -1,   125,    -1,   161,   405,   405,
      -1,   176,   405,   405,    -1,     4,    20,    90,     5,     5,
       5,   415,     4,    -1,     4,    20,   170,     5,     5,     4,
      -1,     4,    20,   258,     5,     5,     5,     5,   415,   422,
     432,    -1,     4,    20,   259,     5,     5,   415,   432,    -1,
       4,    20,   273,     5,     5,     5,   415,    -1,     4,    20,
     320,   415,   422,    -1,     4,    20,   320,   102,   415,   422,
      -1,    20,   320,    16,   102,   415,   422,    -1,    20,   320,
     398,    -1,   176,    16,    -1,     4,    21,    -1,     4,    21,
     417,    -1,     4,    21,   415,   422,    -1,     4,    22,   274,
     415,   424,    -1,     4,    54,   274,   415,   424,    -1,     4,
      53,   274,   415,   424,    -1,     4,    57,    21,    -1,     4,
      57,    21,   417,    -1,     4,    57,    21,   415,   422,    -1,
       4,    57,   274,   415,   424,    -1,     4,    64,   415,   422,
     423,    -1,     4,    68,   274,   415,   424,    -1,     4,    72,
      -1,     4,    82,    27,    -1,     4,    82,   122,    -1,     4,
      82,   188,    -1,     4,    82,   274,   415,   424,    -1,     4,
      82,   326,    -1,     4,    83,   155,    -1,     4,    83,    28,
      -1,     4,    83,   343,    -1,     4,    90,    21,    -1,     4,
      90,    21,   417,    -1,     4,    90,    21,   415,   422,    -1,
       4,    90,   274,   415,   424,    -1,     4,   120,   274,   415,
     424,    -1,     4,   121,   274,   415,   424,    -1,     4,   124,
      21,    -1,     4,   124,    21,   417,    -1,     4,   124,    21,
     415,   422,    -1,     4,   124,   274,   415,   424,    -1,     4,
     144,    -1,     4,   168,    -1,     4,   197,    27,    -1,     4,
     197,   122,    -1,     4,   197,   192,   415,   424,    -1,     4,
     197,   260,   415,   422,   423,    -1,     4,   207,   192,   405,
     415,   424,    -1,     4,   260,   301,    -1,     4,   260,   309,
      -1,     4,   260,   156,    -1,     4,   262,   260,   415,   422,
     423,    -1,     4,   268,   260,   415,   422,   423,    -1,     4,
     268,   192,   415,   424,    -1,     4,   268,   335,   415,   424,
      -1,     4,   269,    -1,     4,   269,   583,    -1,     4,   286,
     145,    -1,     4,   286,   192,   415,   424,    -1,     4,   286,
     260,   415,   422,   423,    -1,     4,   286,   326,    -1,     4,
     298,    -1,     4,   328,    -1,     4,   328,     4,    -1,     4,
     330,    -1,     4,   330,   285,    -1,     4,   343,    -1,     4,
     354,    27,    -1,     4,   354,   122,    -1,     4,   354,   192,
     415,   424,    -1,     4,   354,   260,   415,   422,   423,    -1,
       4,   388,    -1,     4,   101,    -1,   168,   573,    -1,   168,
     238,    -1,   238,    -1,   262,   297,   405,   405,    -1,   297,
     297,   405,   405,    -1,   267,    -1,   269,   583,    -1,   298,
     574,    -1,   298,   238,    -1,   306,   575,    -1,     5,    72,
      -1,     5,   144,    -1,     5,   176,    -1,     5,   269,   583,
      -1,     5,   328,    -1,     5,   328,   238,    -1,   328,    16,
      -1,   328,   107,   225,    -1,   388,    -1,   101,    -1,    32,
      -1,   274,    -1,   182,    -1,   247,    -1,    -1,   405,   405,
      -1,    -1,   405,   405,    -1,    -1,   330,    -1,    -1,    -1,
     261,    -1,   276,    -1,   350,    -1,    62,    -1,   146,    -1,
     570,   415,   422,   423,   407,   585,   592,    -1,   298,   570,
     415,   422,   423,   407,   585,   592,    -1,   570,     5,    -1,
     570,     5,     4,     5,   415,   422,    -1,   570,     4,    -1,
     570,     4,     4,     5,   415,   422,    -1,   139,     5,    -1,
     139,     5,     5,    -1,   405,   405,    -1,   148,    -1,    38,
      -1,    43,   405,   405,    -1,   221,   405,   405,    -1,   122,
      -1,   339,   415,   422,   414,    -1,   581,   582,    -1,   582,
      -1,   583,   402,   407,    -1,    72,   402,     5,    -1,   101,
     402,     4,     4,    -1,   388,   402,     4,    -1,   144,   402,
       5,    -1,   330,   402,     5,    -1,   595,    -1,   596,    -1,
     232,    -1,   298,    -1,   168,    -1,   100,    -1,   141,    -1,
     116,    -1,   224,    -1,   285,    -1,   108,    -1,   179,    -1,
     316,    -1,   134,    -1,   576,    -1,   576,   581,    -1,    -1,
      -1,   586,   590,    -1,     5,   570,   415,   422,   423,   407,
      -1,   298,     5,   570,   415,   422,   423,   407,    -1,   329,
       5,    -1,    16,    -1,   242,   405,   405,    -1,   340,    -1,
     340,   405,   405,    -1,   136,    -1,   191,    -1,   407,    -1,
     330,   407,    -1,   590,   591,    -1,   591,    -1,   583,   402,
     407,    -1,    -1,    -1,   593,   594,    -1,   594,   595,    -1,
     595,    -1,   328,   402,     5,    -1,    60,   402,   563,     5,
       5,    -1,    -1,    91,    -1,     4,    -1,   190,     4,    -1,
      72,     5,    -1,     4,    72,     5,    -1,    49,   419,    -1,
       4,    49,   419,    -1,   337,   405,    -1,     4,   337,   405,
      -1,   353,   407,    -1,     4,   353,   407,    -1,   306,    -1,
       4,   306,    -1,   167,    -1,     4,   167,    -1,   108,    -1,
       4,   108,    -1,   349,    -1,     4,   349,    -1,   114,    -1,
       4,   114,    -1,   336,    -1,     4,   336,    -1,    52,    -1,
       4,    52,    -1,    70,    -1,    72,     5,    -1,   208,   418,
      -1,   275,   405,   405,    -1,   326,   415,    -1,   337,   405,
      -1,    49,   419,    -1,   208,     4,    -1,   401,    -1,   399,
      -1,   391,    -1,   232,    -1,   405,   405,   405,   405,    -1,
     405,   405,    -1,   417,   405,   405,    -1,   415,   422,   414,
      -1,   339,   601,    -1,    42,   405,   405,    -1,   221,   602,
      -1,   267,   407,    -1,   405,   405,    -1,   417,   405,   405,
      -1,   415,   422,   414,    -1,    43,   405,   405,    -1,   405,
     405,    -1,   122,   405,   405,    -1,   407,    -1,   359,   416,
     422,    -1,     5,     4,     4,    -1,   348,    -1,    78,   606,
      -1,   193,     4,    -1,   281,     4,    -1,   292,   405,    -1,
       4,     4,     4,     4,     4,     4,     4,     4,     4,    -1,
       4,     4,     4,     4,     4,     4,    -1,    59,    -1,   158,
      -1,   283,    -1,    98,    -1,   168,   608,    -1,   298,   609,
      -1,    43,   405,   405,    -1,   221,   405,   405,    -1,   122,
      -1,   304,   122,    -1,    43,   405,   405,    -1,   221,   405,
     405,    -1,   122,    -1,   304,   122,    -1,   216,    -1,    12,
      -1,   137,    -1,   232,    -1,    36,    -1,   118,    -1,     4,
      -1,    70,    -1,    66,     5,    -1,   326,   415,    -1,   353,
       4,     4,     4,    -1,   326,   415,    -1,    66,     5,    -1,
      66,   172,    -1,    66,   291,    -1,   326,   415,    -1,   353,
       4,     4,     4,    -1,    66,     5,    -1,    66,   172,    -1,
      66,   291,    -1,    66,   351,    -1,   326,   415,    -1,   353,
       4,     4,     4,    -1,   405,    -1,   405,   106,    -1,   221,
     618,    -1,   339,   405,    -1,   339,   405,   106,    -1,    43,
      -1,   405,    -1,   122,    -1,    26,   621,    -1,   139,   622,
      -1,   396,   620,    -1,   237,   639,    -1,   123,   640,    -1,
     255,     5,    -1,   133,     5,    -1,    66,     5,    -1,   314,
       4,    -1,   133,     5,   433,    -1,    66,     5,   433,    -1,
     314,     4,   433,    -1,   283,    95,   629,    -1,   174,    95,
     632,    -1,   173,    95,   635,    -1,   623,    -1,   178,   623,
      -1,   327,   624,    -1,   310,   625,    -1,   129,    95,   626,
      -1,   219,   627,    -1,   283,   178,   630,    -1,   283,    95,
     631,    -1,   174,   178,   633,    -1,   174,    95,   634,    -1,
     173,   178,   636,    -1,   173,    95,   637,    -1,   278,   638,
      -1,   133,     5,    -1,    66,     5,    -1,   314,     4,    -1,
     133,     5,    -1,    66,     5,    -1,   314,     4,    -1,   133,
       5,    -1,    66,     5,    -1,   314,     4,    -1,   133,     5,
      -1,    66,     5,    -1,   314,     4,    -1,   178,   628,    -1,
     133,     5,     4,    -1,    66,     5,     4,    -1,   314,     4,
       4,    -1,   133,     5,    -1,    66,     5,    -1,   314,     4,
      -1,   133,     5,   433,    -1,    66,     5,   433,    -1,   314,
       4,   433,    -1,   133,     5,    -1,    66,     5,    -1,   314,
       4,    -1,   133,     5,    -1,    66,     5,    -1,   314,     4,
      -1,   133,     5,   433,    -1,    66,     5,   433,    -1,   314,
       4,   433,    -1,   133,     5,    -1,    66,     5,    -1,   314,
       4,    -1,   133,     5,    -1,    66,     5,    -1,   314,     4,
      -1,   133,     5,   433,    -1,    66,     5,   433,    -1,   314,
       4,   433,    -1,   133,     5,    -1,    66,     5,    -1,   314,
       4,    -1,   133,     5,    -1,    66,     5,    -1,   314,     4,
      -1,   133,     5,    -1,    66,     5,    -1,   314,     4,    -1,
     133,     5,   433,    -1,    66,     5,   433,    -1,   314,     4,
     433,    -1,   133,     5,     5,   433,    -1,   642,     4,     4,
     405,   405,   410,    -1,   642,     4,    -1,   108,    -1,    55,
      -1,   341,    -1,   152,    -1,   119,    -1,    -1,     4,   405,
     405,   405,   405,    -1,   236,    -1,   236,     4,   405,   405,
     405,   405,    -1,   139,   310,   644,    -1,   139,    64,    -1,
     139,    64,   405,   405,    -1,     4,    -1,     4,     4,    -1,
     405,   415,    -1,   405,   405,    -1,   339,   405,   405,    -1,
     416,   422,   423,    -1,    15,   649,    -1,   280,     4,    -1,
     277,   648,    -1,    23,   647,    -1,     4,     4,    -1,     4,
       5,    -1,   330,     4,     5,    -1,     4,     4,    -1,     4,
       5,    -1,   330,     4,     5,    -1,     4,    -1,     4,   416,
     422,    -1,   339,     4,   416,   422,    -1,   261,    70,    -1,
     266,    -1,   405,   405,    -1,   405,   405,    11,   405,   405,
      -1,   405,   405,    11,   417,   405,   405,    -1,   405,   405,
      11,   415,   422,   414,    -1,   339,   652,    -1,   138,    -1,
     138,   405,    -1,   405,   405,    -1,   405,   405,    11,   405,
     405,    -1,   405,   405,    11,   417,   405,   405,    -1,   405,
     405,    11,   415,   422,   414,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   511,   511,   512,   513,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   541,   542,   543,   544,   545,   546,   547,   548,
     549,   550,   551,   552,   553,   554,   555,   556,   557,   558,
     559,   560,   561,   562,   563,   564,   565,   566,   567,   568,
     569,   570,   573,   574,   577,   578,   579,   580,   581,   582,
     583,   584,   585,   586,   587,   590,   592,   593,   594,   595,
     597,   598,   599,   600,   603,   604,   605,   606,   607,   610,
     611,   614,   615,   616,   619,   622,   625,   628,   640,   647,
     654,   662,   663,   664,   665,   666,   669,   670,   671,   672,
     673,   674,   675,   676,   677,   678,   679,   680,   681,   682,
     683,   684,   685,   686,   687,   688,   689,   690,   691,   692,
     693,   694,   695,   696,   699,   700,   703,   704,   705,   706,
     707,   708,   711,   712,   713,   714,   715,   716,   717,   718,
     719,   720,   721,   722,   723,   724,   725,   726,   727,   730,
     731,   732,   733,   734,   735,   736,   737,   738,   741,   742,
     743,   744,   745,   748,   749,   750,   751,   752,   753,   754,
     755,   758,   759,   760,   763,   764,   765,   766,   769,   770,
     771,   774,   775,   776,   779,   780,   781,   785,   786,   787,
     788,   789,   790,   791,   792,   793,   794,   795,   796,   799,
     800,   801,   802,   803,   804,   805,   806,   807,   810,   811,
     814,   815,   816,   817,   818,   819,   822,   823,   824,   825,
     828,   829,   830,   831,   832,   833,   836,   837,   838,   839,
     840,   841,   842,   843,   844,   845,   849,   850,   851,   852,
     855,   856,   859,   860,   863,   864,   867,   868,   871,   872,
     876,   877,   878,   879,   880,   881,   882,   883,   886,   887,
     890,   891,   892,   894,   896,   897,   898,   900,   904,   905,
     908,   909,   911,   914,   916,   922,   923,   924,   925,   928,
     929,   930,   933,   934,   935,   936,   937,   938,   939,   945,
     946,   949,   950,   951,   952,   953,   956,   957,   958,   959,
     962,   963,   968,   973,   980,   982,   984,   986,   988,   990,
     991,   992,   995,   997,   999,  1001,  1003,  1006,  1007,  1008,
    1012,  1013,  1016,  1017,  1018,  1019,  1020,  1021,  1022,  1023,
    1026,  1027,  1028,  1029,  1031,  1035,  1038,  1041,  1047,  1053,
    1056,  1057,  1058,  1061,  1062,  1063,  1070,  1071,  1072,  1073,
    1076,  1077,  1080,  1081,  1084,  1085,  1086,  1090,  1092,  1094,
    1098,  1099,  1100,  1101,  1104,  1105,  1108,  1110,  1111,  1112,
    1113,  1116,  1117,  1119,  1120,  1121,  1124,  1126,  1128,  1129,
    1131,  1133,  1135,  1137,  1141,  1144,  1145,  1146,  1147,  1150,
    1151,  1154,  1155,  1158,  1159,  1160,  1161,  1162,  1163,  1164,
    1165,  1166,  1167,  1168,  1169,  1170,  1171,  1172,  1173,  1174,
    1175,  1176,  1177,  1178,  1179,  1180,  1181,  1182,  1183,  1184,
    1185,  1186,  1187,  1188,  1189,  1190,  1191,  1192,  1194,  1195,
    1196,  1197,  1198,  1199,  1200,  1202,  1203,  1204,  1207,  1209,
    1213,  1215,  1219,  1220,  1221,  1222,  1223,  1224,  1225,  1226,
    1229,  1230,  1231,  1234,  1235,  1238,  1239,  1241,  1243,  1244,
    1245,  1246,  1247,  1248,  1255,  1256,  1259,  1260,  1261,  1264,
    1265,  1268,  1271,  1272,  1274,  1278,  1279,  1280,  1281,  1284,
    1288,  1290,  1291,  1292,  1293,  1294,  1295,  1296,  1297,  1298,
    1299,  1300,  1301,  1302,  1303,  1304,  1307,  1308,  1309,  1312,
    1313,  1316,  1318,  1326,  1328,  1330,  1334,  1335,  1337,  1340,
    1343,  1344,  1348,  1350,  1353,  1358,  1359,  1360,  1364,  1365,
    1366,  1369,  1370,  1371,  1374,  1375,  1377,  1378,  1379,  1380,
    1381,  1382,  1383,  1384,  1385,  1386,  1388,  1389,  1392,  1393,
    1396,  1397,  1398,  1399,  1402,  1403,  1406,  1408,  1411,  1415,
    1416,  1417,  1419,  1421,  1425,  1426,  1427,  1430,  1431,  1432,
    1433,  1434,  1435,  1438,  1439,  1440,  1441,  1442,  1443,  1444,
    1447,  1448,  1451,  1454,  1455,  1456,  1459,  1462,  1463,  1464,
    1467,  1468,  1469,  1472,  1473,  1474,  1475,  1476,  1477,  1480,
    1481,  1482,  1483,  1484,  1485,  1486,  1487,  1490,  1491,  1492,
    1493,  1496,  1497,  1500,  1501,  1504,  1505,  1508,  1509,  1512,
    1513,  1516,  1517,  1518,  1521,  1522,  1525,  1526,  1529,  1532,
    1540,  1541,  1544,  1545,  1546,  1547,  1548,  1549,  1550,  1551,
    1552,  1553,  1554,  1555,  1556,  1557,  1558,  1559,  1560,  1561,
    1564,  1567,  1568,  1571,  1572,  1573,  1574,  1577,  1578,  1579,
    1580,  1583,  1584,  1585,  1586,  1587,  1588,  1591,  1592,  1593,
    1594,  1595,  1596,  1598,  1599,  1604,  1605,  1608,  1610,  1612,
    1615,  1616,  1617,  1618,  1619,  1620,  1621,  1624,  1636,  1645,
    1648,  1650,  1652,  1654,  1655,  1657,  1659,  1661,  1663,  1665,
    1666,  1667,  1670,  1671,  1672,  1673,  1674,  1675,  1677,  1678,
    1679,  1682,  1685,  1687,  1689,  1691,  1693,  1695,  1697,  1699,
    1702,  1704,  1706,  1708,  1709,  1710,  1711,  1712,  1713,  1714,
    1715,  1716,  1719,  1720,  1721,  1722,  1723,  1724,  1725,  1727,
    1729,  1730,  1731,  1734,  1735,  1736,  1737,  1738,  1739,  1741,
    1742,  1743,  1746,  1747,  1748,  1749,  1750,  1753,  1756,  1759,
    1762,  1765,  1768,  1771,  1774,  1777,  1782,  1785,  1788,  1791,
    1794,  1797,  1800,  1803,  1806,  1809,  1812,  1817,  1820,  1823,
    1826,  1829,  1832,  1835,  1838,  1841,  1846,  1848,  1850,  1852,
    1854,  1856,  1861,  1863,  1865,  1869,  1872,  1875,  1878,  1881,
    1884,  1887,  1890,  1893,  1896,  1899,  1904,  1905,  1906,  1907,
    1908,  1909,  1910,  1912,  1914,  1915,  1916,  1919,  1920,  1921,
    1922,  1923,  1924,  1926,  1927,  1928,  1931,  1933,  1935,  1936,
    1938,  1940,  1947,  1951,  1952,  1958,  1959,  1961,  1965,  1966,
    1967,  1970,  1973,  1974,  1975,  1976,  1977,  1978,  1979,  1982,
    1990,  1991,  1992,  1993,  1995,  1997,  1998,  1998,  1999,  2000,
    2001,  2002,  2003,  2005,  2006,  2008,  2011,  2013,  2015,  2018,
    2019,  2020,  2023,  2026,  2029,  2033,  2036,  2039,  2042,  2046,
    2051,  2056,  2058,  2060,  2061,  2063,  2065,  2067,  2069,  2071,
    2072,  2073,  2075,  2077,  2079,  2083,  2088,  2090,  2092,  2094,
    2096,  2098,  2100,  2102,  2104,  2106,  2108,  2111,  2112,  2114,
    2116,  2117,  2119,  2121,  2122,  2123,  2125,  2127,  2128,  2129,
    2131,  2132,  2135,  2139,  2142,  2145,  2149,  2154,  2160,  2161,
    2162,  2164,  2165,  2166,  2170,  2172,  2173,  2174,  2177,  2180,
    2183,  2186,  2189,  2191,  2192,  2194,  2199,  2202,  2203,  2204,
    2207,  2211,  2212,  2214,  2215,  2216,  2218,  2219,  2221,  2222,
    2223,  2228,  2229,  2231,  2232,  2234,  2235,  2236,  2237,  2238,
    2239,  2241,  2243,  2245,  2246,  2247,  2249,  2251,  2252,  2253,
    2254,  2255,  2256,  2257,  2258,  2259,  2260,  2261,  2263,  2265,
    2266,  2267,  2268,  2270,  2271,  2272,  2273,  2274,  2276,  2277,
    2278,  2279,  2280,  2281,  2282,  2285,  2286,  2287,  2288,  2289,
    2290,  2291,  2292,  2293,  2294,  2295,  2296,  2297,  2298,  2299,
    2300,  2301,  2302,  2303,  2304,  2305,  2308,  2309,  2310,  2311,
    2312,  2313,  2321,  2328,  2337,  2346,  2353,  2358,  2363,  2370,
    2378,  2386,  2393,  2398,  2403,  2408,  2413,  2418,  2423,  2428,
    2433,  2439,  2449,  2459,  2469,  2476,  2486,  2496,  2505,  2517,
    2530,  2536,  2539,  2540,  2549,  2551,  2553,  2558,  2562,  2563,
    2564,  2570,  2572,  2574,  2577,  2578,  2579,  2580,  2581,  2582,
    2583,  2586,  2587,  2588,  2589,  2590,  2591,  2593,  2595,  2597,
    2599,  2601,  2603,  2605,  2607,  2609,  2612,  2613,  2614,  2615,
    2617,  2620,  2622,  2624,  2625,  2626,  2628,  2631,  2634,  2636,
    2637,  2638,  2639,  2640,  2642,  2643,  2644,  2645,  2646,  2647,
    2648,  2650,  2652,  2654,  2657,  2658,  2659,  2661,  2664,  2665,
    2666,  2667,  2668,  2670,  2673,  2677,  2678,  2679,  2680,  2683,
    2686,  2689,  2691,  2692,  2693,  2694,  2696,  2699,  2700,  2702,
    2703,  2704,  2705,  2706,  2708,  2709,  2710,  2712,  2715,  2716,
    2717,  2718,  2719,  2720,  2722,  2724,  2725,  2726,  2727,  2729,
    2731,  2732,  2733,  2734,  2735,  2736,  2738,  2739,  2741,  2742,
    2745,  2746,  2747,  2748,  2751,  2752,  2755,  2756,  2759,  2760,
    2763,  2776,  2777,  2781,  2782,  2786,  2787,  2790,  2794,  2800,
    2802,  2805,  2807,  2810,  2812,  2816,  2817,  2818,  2819,  2820,
    2821,  2822,  2826,  2827,  2830,  2831,  2832,  2833,  2834,  2835,
    2836,  2837,  2840,  2841,  2842,  2843,  2844,  2845,  2846,  2847,
    2848,  2849,  2850,  2851,  2854,  2855,  2858,  2859,  2859,  2862,
    2864,  2866,  2869,  2870,  2871,  2872,  2873,  2874,  2877,  2878,
    2881,  2882,  2885,  2889,  2890,  2890,  2893,  2894,  2897,  2900,
    2904,  2905,  2906,  2907,  2908,  2909,  2910,  2911,  2912,  2913,
    2914,  2915,  2917,  2918,  2919,  2920,  2921,  2922,  2923,  2924,
    2925,  2926,  2927,  2928,  2929,  2930,  2933,  2934,  2935,  2936,
    2937,  2938,  2939,  2940,  2946,  2947,  2948,  2949,  2952,  2954,
    2955,  2960,  2962,  2963,  2964,  2965,  2968,  2969,  2974,  2978,
    2979,  2980,  2983,  2984,  2989,  2990,  2993,  2995,  2996,  2997,
    3002,  3004,  3010,  3011,  3012,  3013,  3016,  3017,  3020,  3022,
    3024,  3025,  3028,  3030,  3031,  3032,  3035,  3036,  3037,  3040,
    3041,  3042,  3045,  3046,  3049,  3050,  3051,  3054,  3058,  3059,
    3060,  3061,  3062,  3065,  3066,  3067,  3068,  3069,  3070,  3073,
    3074,  3075,  3076,  3077,  3080,  3081,  3082,  3085,  3086,  3087,
    3088,  3089,  3090,  3093,  3094,  3095,  3098,  3100,  3102,  3104,
    3105,  3106,  3109,  3110,  3111,  3112,  3113,  3114,  3115,  3116,
    3117,  3118,  3119,  3120,  3121,  3124,  3125,  3126,  3129,  3130,
    3131,  3134,  3135,  3136,  3139,  3140,  3141,  3144,  3145,  3146,
    3147,  3150,  3151,  3152,  3155,  3157,  3159,  3163,  3164,  3165,
    3168,  3169,  3170,  3173,  3175,  3177,  3181,  3182,  3183,  3186,
    3187,  3188,  3191,  3193,  3195,  3199,  3200,  3201,  3204,  3205,
    3206,  3209,  3210,  3211,  3214,  3216,  3218,  3222,  3226,  3228,
    3233,  3236,  3237,  3238,  3239,  3242,  3243,  3246,  3248,  3250,
    3251,  3252,  3256,  3257,  3258,  3261,  3262,  3265,  3267,  3268,
    3269,  3270,  3273,  3274,  3275,  3278,  3279,  3280,  3283,  3284,
    3289,  3291,  3294,  3301,  3302,  3304,  3309,  3311,  3314,  3315,
    3316,  3317,  3319,  3324
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
  "loadFitsRGBImage", "loadNRRD", "loadAsdf", "loadPhoto", "loadTiff",
  "loadIncr", "macosx", "magnifier", "match", "marker", "@1",
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
     645,   646,   647,   648,   649,   650,   651,   652,   653,    89,
      78,    88,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   403,   404,   404,   404,   404,   404,   404,   404,   404,
     404,   404,   404,   404,   404,   404,   404,   404,   404,   404,
     404,   404,   404,   404,   404,   404,   404,   404,   404,   404,
     404,   404,   404,   404,   404,   404,   404,   404,   404,   404,
     404,   404,   404,   404,   404,   404,   404,   404,   404,   404,
     404,   404,   404,   404,   404,   404,   404,   404,   404,   404,
     404,   404,   405,   405,   406,   406,   406,   406,   406,   406,
     406,   406,   406,   406,   406,   407,   407,   407,   407,   407,
     407,   407,   407,   407,   408,   408,   408,   408,   408,   409,
     409,   410,   410,   410,   411,   412,   413,   414,   414,   414,
     414,   415,   415,   415,   415,   415,   416,   416,   416,   416,
     416,   416,   416,   416,   416,   416,   416,   416,   416,   416,
     416,   416,   416,   416,   416,   416,   416,   416,   416,   416,
     416,   416,   416,   416,   417,   417,   418,   418,   418,   418,
     418,   418,   419,   419,   419,   419,   419,   419,   419,   419,
     419,   419,   419,   419,   419,   419,   419,   419,   419,   420,
     420,   420,   420,   420,   420,   420,   420,   420,   421,   421,
     421,   421,   421,   422,   422,   422,   422,   422,   422,   422,
     422,   423,   423,   423,   424,   424,   424,   424,   425,   425,
     425,   426,   426,   426,   427,   427,   427,   428,   428,   428,
     428,   428,   428,   428,   428,   428,   428,   428,   428,   429,
     429,   429,   429,   429,   429,   429,   429,   429,   430,   430,
     431,   431,   431,   431,   431,   431,   432,   432,   432,   432,
     433,   433,   433,   433,   433,   433,   434,   434,   434,   434,
     434,   434,   434,   434,   434,   434,   435,   435,   435,   435,
     436,   436,   437,   437,   438,   438,   439,   439,   440,   440,
     441,   441,   441,   441,   441,   441,   441,   441,   442,   442,
     443,   443,   443,   443,   443,   443,   443,   443,   444,   444,
     445,   445,   445,   445,   445,   446,   446,   446,   446,   447,
     447,   447,   448,   448,   448,   448,   448,   448,   448,   449,
     449,   450,   450,   450,   450,   450,   451,   451,   451,   451,
     452,   452,   452,   452,   453,   453,   453,   453,   453,   453,
     453,   453,   454,   454,   454,   454,   454,   455,   455,   455,
     456,   456,   457,   457,   457,   457,   457,   457,   457,   457,
     458,   458,   458,   458,   458,   459,   459,   459,   459,   459,
     460,   460,   460,   461,   461,   461,   462,   462,   462,   462,
     463,   463,   464,   464,   465,   465,   465,   466,   466,   466,
     467,   467,   467,   467,   468,   468,   468,   468,   468,   468,
     468,   469,   469,   469,   469,   469,   470,   470,   470,   470,
     470,   470,   470,   470,   471,   472,   472,   472,   472,   473,
     473,   474,   474,   475,   475,   475,   475,   475,   475,   475,
     475,   475,   475,   475,   475,   475,   475,   475,   475,   475,
     475,   475,   475,   475,   475,   475,   475,   475,   475,   475,
     475,   475,   475,   475,   475,   475,   475,   475,   475,   475,
     475,   475,   475,   475,   475,   475,   475,   475,   476,   476,
     477,   477,   478,   478,   478,   478,   478,   478,   478,   478,
     479,   479,   479,   480,   480,   481,   481,   481,   481,   481,
     481,   481,   481,   481,   482,   482,   483,   483,   483,   484,
     484,   485,   486,   486,   486,   487,   487,   487,   487,   488,
     489,   489,   489,   489,   489,   489,   489,   489,   489,   489,
     489,   489,   489,   489,   489,   489,   490,   490,   490,   491,
     491,   492,   492,   493,   493,   493,   494,   494,   494,   495,
     496,   496,   497,   497,   497,   498,   498,   498,   499,   499,
     499,   500,   500,   500,   501,   501,   501,   501,   501,   501,
     501,   501,   501,   501,   501,   501,   501,   501,   502,   502,
     503,   503,   503,   503,   504,   504,   505,   505,   505,   506,
     506,   506,   506,   506,   507,   507,   507,   508,   508,   508,
     508,   508,   508,   509,   509,   509,   509,   509,   509,   509,
     510,   510,   511,   512,   512,   512,   513,   514,   514,   514,
     515,   515,   515,   516,   516,   516,   516,   516,   516,   517,
     517,   517,   517,   517,   517,   517,   517,   518,   518,   518,
     518,   519,   519,   520,   520,   521,   521,   522,   522,   523,
     523,   524,   524,   524,   525,   525,   526,   526,   527,   527,
     528,   528,   529,   529,   529,   529,   529,   529,   529,   529,
     529,   529,   529,   529,   529,   529,   529,   529,   529,   529,
     530,   531,   531,   532,   532,   532,   532,   533,   533,   533,
     533,   534,   534,   534,   534,   534,   534,   535,   535,   535,
     535,   535,   535,   535,   535,   536,   536,   537,   537,   537,
     538,   538,   538,   538,   538,   538,   538,   538,   538,   538,
     539,   539,   539,   539,   539,   539,   539,   539,   539,   539,
     539,   539,   540,   540,   540,   540,   540,   540,   540,   540,
     540,   541,   542,   542,   542,   542,   542,   542,   542,   542,
     542,   542,   542,   542,   542,   542,   542,   542,   542,   542,
     542,   542,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   544,   544,   544,   544,   544,   544,   544,
     544,   544,   545,   545,   545,   545,   545,   546,   546,   546,
     546,   546,   546,   546,   546,   546,   547,   547,   547,   547,
     547,   547,   547,   547,   547,   547,   547,   548,   548,   548,
     548,   548,   548,   548,   548,   548,   549,   549,   549,   549,
     549,   549,   549,   549,   549,   550,   550,   550,   550,   550,
     550,   550,   550,   550,   550,   550,   551,   551,   551,   551,
     551,   551,   551,   551,   551,   551,   551,   552,   552,   552,
     552,   552,   552,   552,   552,   552,   553,   553,   553,   553,
     553,   553,   554,   555,   555,   556,   556,   556,   557,   557,
     557,   558,   559,   559,   559,   559,   559,   559,   559,   560,
     561,   561,   561,   561,   561,   561,   562,   561,   561,   561,
     561,   561,   561,   561,   561,   561,   561,   561,   561,   561,
     561,   561,   561,   561,   561,   561,   561,   561,   561,   561,
     561,   561,   561,   561,   561,   561,   561,   561,   561,   561,
     561,   561,   561,   561,   561,   561,   561,   561,   561,   561,
     561,   561,   561,   561,   561,   561,   561,   561,   561,   561,
     561,   561,   561,   561,   561,   561,   561,   561,   561,   561,
     561,   561,   561,   561,   561,   561,   561,   561,   561,   561,
     561,   561,   561,   561,   561,   561,   561,   561,   561,   561,
     561,   561,   561,   561,   561,   561,   561,   561,   561,   561,
     561,   561,   561,   561,   561,   561,   561,   561,   561,   561,
     561,   561,   561,   561,   561,   561,   561,   561,   561,   561,
     561,   561,   561,   561,   561,   561,   561,   561,   561,   561,
     561,   561,   561,   561,   561,   561,   561,   561,   561,   561,
     561,   561,   561,   561,   561,   561,   561,   561,   561,   561,
     561,   561,   561,   561,   561,   563,   563,   563,   563,   563,
     563,   563,   563,   563,   563,   563,   563,   563,   563,   563,
     563,   563,   563,   563,   563,   563,   564,   564,   564,   564,
     564,   564,   565,   565,   565,   565,   565,   565,   565,   565,
     565,   565,   565,   565,   565,   565,   565,   565,   565,   565,
     565,   565,   565,   565,   565,   565,   565,   565,   565,   565,
     565,   565,   566,   566,   567,   567,   567,   567,   568,   568,
     568,   569,   569,   569,   570,   570,   570,   570,   570,   570,
     570,   571,   571,   571,   571,   571,   571,   571,   571,   571,
     571,   571,   571,   571,   571,   571,   571,   571,   571,   571,
     571,   571,   571,   571,   571,   571,   571,   571,   571,   571,
     571,   571,   571,   571,   571,   571,   571,   571,   571,   571,
     571,   571,   571,   571,   571,   571,   571,   571,   571,   571,
     571,   571,   571,   571,   571,   571,   571,   571,   571,   571,
     571,   571,   571,   571,   571,   571,   571,   571,   571,   571,
     571,   571,   571,   571,   571,   571,   571,   571,   571,   571,
     571,   571,   571,   571,   571,   571,   571,   571,   571,   571,
     571,   571,   571,   571,   571,   571,   571,   571,   571,   571,
     572,   572,   572,   572,   573,   573,   574,   574,   575,   575,
     576,   577,   577,   577,   577,   577,   577,   578,   578,   579,
     579,   579,   579,   579,   579,   580,   580,   580,   580,   580,
     580,   580,   581,   581,   582,   582,   582,   582,   582,   582,
     582,   582,   583,   583,   583,   583,   583,   583,   583,   583,
     583,   583,   583,   583,   584,   584,   585,   586,   585,   587,
     587,   587,   588,   588,   588,   588,   588,   588,   589,   589,
     590,   590,   591,   592,   593,   592,   594,   594,   595,   596,
     597,   597,   597,   597,   597,   597,   597,   597,   597,   597,
     597,   597,   597,   597,   597,   597,   597,   597,   597,   597,
     597,   597,   597,   597,   597,   597,   598,   598,   598,   598,
     598,   598,   598,   598,   599,   599,   599,   599,   600,   600,
     600,   600,   600,   600,   600,   600,   601,   601,   601,   602,
     602,   602,   603,   603,   603,   603,   604,   604,   604,   604,
     605,   605,   606,   606,   606,   606,   607,   607,   608,   608,
     608,   608,   609,   609,   609,   609,   610,   610,   610,   611,
     611,   611,   612,   612,   613,   613,   613,   614,   615,   615,
     615,   615,   615,   616,   616,   616,   616,   616,   616,   617,
     617,   617,   617,   617,   618,   618,   618,   619,   619,   619,
     619,   619,   619,   620,   620,   620,   621,   621,   621,   621,
     621,   621,   622,   622,   622,   622,   622,   622,   622,   622,
     622,   622,   622,   622,   622,   623,   623,   623,   624,   624,
     624,   625,   625,   625,   626,   626,   626,   627,   627,   627,
     627,   628,   628,   628,   629,   629,   629,   630,   630,   630,
     631,   631,   631,   632,   632,   632,   633,   633,   633,   634,
     634,   634,   635,   635,   635,   636,   636,   636,   637,   637,
     637,   638,   638,   638,   639,   639,   639,   640,   641,   641,
     641,   642,   642,   642,   642,   643,   643,   643,   643,   643,
     643,   643,   644,   644,   644,   645,   645,   646,   646,   646,
     646,   646,   647,   647,   647,   648,   648,   648,   649,   649,
     649,   649,   650,   651,   651,   651,   651,   651,   652,   652,
     652,   652,   652,   652
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
       4,     4,     4,     3,     3,     5,     4,     4,     4,     3,
       3,     3,     3,     3,     3,     2,     2,     4,     3,     3,
       3,     3,     4,     4,     4,     4,     5,     4,     6,     7,
       4,     4,     5,     2,     3,     3,     3,     3,     3,     3,
       3,     2,     3,     3,     3,     3,     4,     3,     5,     6,
       3,     3,     4,     3,     3,     3,     3,     3,     5,     3,
       3,     4,     3,     2,     2,     1,     3,     4,     4,     4,
       4,     4,     6,     4,     4,     5,     4,     4,     4,     4,
       5,     4,     6,     7,     4,     4,     5,     5,     5,     5,
       5,     5,     7,     5,     5,     6,     4,     4,     4,     4,
       4,     6,     4,     4,     5,     5,     5,     5,     5,     6,
       5,     7,     8,     5,     5,     6,     3,     3,     3,     3,
       4,     3,     5,     6,     3,     3,     4,     3,     3,     3,
       3,     3,     5,     3,     3,     4,     4,     4,     3,     5,
       4,     4,     4,     2,     3,     2,     4,     5,     6,     6,
       1,     1,     1,     2,     2,     2,     3,     3,     2,    12,
       2,     2,     1,     3,     4,     2,     0,     3,     1,     2,
       2,     2,     2,     2,     4,     4,     4,     4,     3,     3,
       4,     5,     8,     6,     9,     6,     7,    10,    11,    12,
       9,     5,     6,     3,     5,     5,     5,     6,     5,     4,
       4,     4,     9,    10,    11,     9,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     7,     7,     2,     4,     4,
       4,     4,     5,     4,     4,     5,     5,     3,     4,     4,
       4,     7,     9,     6,    10,    11,    12,     9,     3,     2,
       3,     5,     5,     7,     4,     3,     3,     6,     7,     8,
       7,     7,     4,     4,     4,     9,     4,     3,     4,     7,
       7,     2,     3,     3,     3,     4,     2,     2,     4,     4,
      10,     3,     4,     1,     3,     2,     2,     2,     2,     3,
       5,     4,     5,     2,     2,     2,     2,     3,     2,     2,
       2,     3,     2,     3,     4,     3,     3,     6,     4,     2,
       3,     2,     2,     4,     3,     3,     2,     3,     1,     2,
       1,     2,     2,     2,     3,     1,     1,     1,     1,     2,
       1,     2,     2,     1,     2,     2,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     2,     2,
       2,     3,     5,     7,     7,     6,     5,     5,     6,     6,
       6,     5,     6,     6,     6,     6,     6,     6,     6,     6,
       7,    11,     7,     7,     7,     9,     9,    10,    12,    12,
       3,     2,     0,     1,     3,     4,     4,     4,     0,     1,
       1,     4,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     1,     3,     3,     8,     6,    10,
       7,     7,     5,     6,     6,     3,     2,     2,     3,     4,
       5,     5,     5,     3,     4,     5,     5,     5,     5,     2,
       3,     3,     3,     5,     3,     3,     3,     3,     3,     4,
       5,     5,     5,     5,     3,     4,     5,     5,     2,     2,
       3,     3,     5,     6,     6,     3,     3,     3,     6,     6,
       5,     5,     2,     3,     3,     5,     6,     3,     2,     2,
       3,     2,     3,     2,     3,     3,     5,     6,     2,     2,
       2,     2,     1,     4,     4,     1,     2,     2,     2,     2,
       2,     2,     2,     3,     2,     3,     2,     3,     1,     1,
       1,     1,     1,     1,     0,     2,     0,     2,     0,     1,
       0,     0,     1,     1,     1,     1,     1,     7,     8,     2,
       6,     2,     6,     2,     3,     2,     1,     1,     3,     3,
       1,     4,     2,     1,     3,     3,     4,     3,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     0,     0,     2,     6,
       7,     2,     1,     3,     1,     3,     1,     1,     1,     2,
       2,     1,     3,     0,     0,     2,     2,     1,     3,     5,
       0,     1,     1,     2,     2,     3,     2,     3,     2,     3,
       2,     3,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     2,     1,     2,     2,     3,
       2,     2,     2,     2,     1,     1,     1,     1,     4,     2,
       3,     3,     2,     3,     2,     2,     2,     3,     3,     3,
       2,     3,     1,     3,     3,     1,     2,     2,     2,     2,
       9,     6,     1,     1,     1,     1,     2,     2,     3,     3,
       1,     2,     3,     3,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     4,     2,     2,     2,
       2,     2,     4,     2,     2,     2,     2,     2,     4,     1,
       2,     2,     2,     3,     1,     1,     1,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     3,     3,     3,     3,
       3,     3,     1,     2,     2,     2,     3,     2,     3,     3,
       3,     3,     3,     3,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     3,     3,
       3,     2,     2,     2,     3,     3,     3,     2,     2,     2,
       2,     2,     2,     3,     3,     3,     2,     2,     2,     2,
       2,     2,     3,     3,     3,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     3,     3,     3,     4,     6,     2,
       1,     1,     1,     1,     1,     0,     5,     1,     6,     3,
       2,     4,     1,     2,     2,     2,     3,     3,     2,     2,
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
       0,   374,     0,     0,     0,     0,     0,     0,   403,     0,
       0,    23,     0,     0,     0,     0,     0,  1260,     0,     0,
       0,     0,  1191,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1191,    45,     0,     0,     0,     0,    51,     0,
       0,     0,    55,  1455,    57,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0,  1191,     0,
     429,     0,     0,   435,     0,     0,     0,   439,     0,   441,
       0,   443,     0,     0,   621,   447,    20,     0,   627,    21,
     632,     0,     0,   651,   636,   637,   638,   639,   653,   641,
     642,   646,   643,     0,   645,   647,     0,     0,    22,     0,
      24,     0,     0,     0,    26,     0,     0,     0,    27,     0,
     668,     0,     0,     0,   673,     0,    28,     0,  1262,   142,
    1284,     0,  1261,  1276,  1280,  1274,     0,  1272,  1282,     0,
    1278,     0,    36,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    30,   841,    31,     0,     0,     0,     0,     0,
       0,   842,    32,     0,    33,  1195,  1196,  1192,  1193,  1194,
       0,   142,  1286,     0,   136,     0,     0,     0,    35,     0,
      37,     0,  1297,  1296,  1295,  1294,    39,     0,     0,     0,
       0,     0,   173,     0,    40,     0,  1315,     0,  1312,    41,
       0,     0,     0,     0,    44,     0,    43,    42,     0,  1342,
    1343,    47,     0,     0,     0,    48,     0,     0,  1359,    49,
       0,     0,     0,     0,     0,     0,    50,  1451,  1450,  1454,
    1453,  1452,    52,     0,    53,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    54,     0,     0,  1457,    56,
       0,     0,    58,     0,     0,     0,     0,   173,    59,  1482,
      60,     0,     0,    61,     1,     4,     5,   268,     0,   260,
       0,     0,   262,     0,   270,   263,   267,   278,   279,   264,
     280,     0,   266,     0,   289,   290,   287,   286,     0,     0,
     309,     0,   294,   302,   305,   304,   303,   301,   293,   298,
     299,   300,   292,     0,     0,     0,     0,     0,     0,   297,
      10,     0,     0,     0,     0,     0,     0,     0,     0,   320,
       0,     0,     0,   328,     0,     0,     0,   339,     0,   349,
     332,     0,   351,   334,   353,   335,   364,   336,     0,     0,
     337,     0,   370,   338,     0,    94,    95,    96,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   377,
       0,     0,     0,     0,     0,   175,   180,   174,   176,   179,
     178,   177,     0,     0,   394,    69,    70,    71,    72,    73,
      65,    66,    67,    74,    68,     0,   402,   404,     0,   460,
     456,   452,   453,   457,   454,   459,   405,   463,     0,   406,
     356,   469,   473,   468,   359,   358,   357,     0,     0,   407,
     480,   409,     0,   408,   488,     0,   487,   410,   503,   506,
     493,   509,   494,   495,   496,   498,     0,   500,   501,   505,
     173,   411,     0,     0,   412,     0,     0,   173,   413,   518,
     173,   516,   414,   519,   416,   173,   520,   415,     0,   173,
       0,   417,   538,     0,   536,   554,     0,     0,     0,   542,
     534,     0,   544,   559,   547,   419,   565,   566,   420,   421,
       0,     0,   590,   591,   592,   424,   587,   588,   589,   425,
       0,   529,     0,   426,    84,   526,     0,   427,   428,   580,
     580,   567,   568,   580,   580,   432,     0,   579,   573,   578,
     574,   575,   576,   577,   431,   586,   433,   434,   582,   436,
       0,   583,   584,   585,   438,   598,   593,   594,   596,   440,
     604,   613,   615,   617,   603,   606,   607,   619,   442,     0,
       0,   624,     0,   446,   173,   626,   633,     0,   634,   652,
     635,   654,   655,   656,   640,   657,   659,   658,   660,   644,
     648,   665,     0,     0,     0,     0,   661,   649,    25,  1353,
    1354,  1355,  1356,  1357,     0,  1348,  1349,  1350,  1351,     0,
       0,     0,   670,   669,     0,     0,     0,     0,    29,   142,
    1285,     0,  1277,  1281,  1275,  1273,  1283,     0,  1279,     0,
     157,   150,   149,   147,   153,   154,   151,   155,   148,   158,
     144,   146,   156,   145,   152,   143,  1266,  1264,  1263,  1268,
    1270,   687,     0,     0,     0,     0,   680,     0,   681,     0,
     682,     0,     0,     0,     0,     0,     0,     0,   683,     0,
     840,     0,   684,     0,   685,     0,     0,   686,   194,     0,
     689,     0,   845,   844,   843,     0,   848,     0,     0,     0,
       0,  1026,     0,     0,     0,   852,   856,   858,     0,  1068,
       0,     0,     0,     0,   963,     0,     0,     0,   998,     0,
       0,     0,     0,     0,     0,     0,  1000,     0,     0,     0,
      34,  1292,  1287,  1293,   139,   140,   138,   141,   137,  1288,
       0,  1290,  1291,  1347,    38,     0,     0,     0,     0,  1304,
    1305,     0,   173,     0,  1302,  1299,     0,     0,     0,   173,
    1322,  1325,  1323,  1324,  1316,  1317,  1318,  1319,     0,     0,
       0,    46,  1344,  1345,     0,  1364,  1366,  1365,  1361,  1362,
    1360,     0,     0,     0,     0,     0,     0,  1367,     0,  1371,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1368,  1382,     0,     0,     0,  1370,  1372,     0,
       0,     0,  1369,  1449,  1340,  1341,  1339,   241,     0,   252,
     237,     0,   254,   238,     0,   256,   239,  1337,  1338,  1336,
     240,   243,     0,     0,     0,   246,   242,   244,   245,     0,
       0,   236,     0,  1460,     0,     0,     0,  1465,  1478,     0,
       0,  1468,     0,     0,  1471,     0,     0,  1470,  1469,   181,
    1488,     0,  1487,  1483,   269,   265,     0,   274,     0,   271,
       0,   288,   291,   168,   171,   172,   170,   169,   306,   307,
     308,   296,   295,   311,   313,   312,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   341,
       0,     0,   333,   352,     0,     0,     0,   173,     0,     0,
       0,   371,   378,   100,    97,    98,    99,   173,   380,   379,
       0,     0,     0,     0,     0,     0,     0,   393,     0,   389,
     387,   386,   401,   455,     0,     0,   458,   464,   474,   475,
     470,   471,   476,   478,   477,   472,   360,   361,   467,   466,
     482,   481,     0,   486,   491,     0,   507,   508,   492,   510,
     499,   497,   502,   490,     0,     0,   173,   173,   181,   181,
     181,   173,     0,     0,   173,   555,   537,   548,     0,   539,
      84,   550,     0,     0,   541,   543,   173,   560,     0,     0,
     546,     0,     0,   423,     0,   531,    88,    87,   525,     0,
     581,   570,   569,   571,   572,     0,     0,     0,     0,  1082,
    1179,  1084,  1083,     0,  1184,     0,  1162,     0,  1165,     0,
       0,  1186,  1188,     0,  1178,   430,     0,   595,   597,   614,
     600,   616,   601,   618,   602,   608,   611,   609,   605,   620,
     599,     0,     0,   445,   625,   622,   623,   181,   650,   662,
     663,   664,   666,     0,     0,     0,   679,   667,     0,     0,
       0,  1267,  1265,  1269,  1271,   688,     0,     0,     0,   194,
     194,   188,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   191,   191,   188,     0,     0,   188,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   731,
     755,     0,     0,     0,   723,     0,     0,     0,     0,   194,
     188,     0,     0,   833,     0,     0,   195,   196,   835,     0,
     846,   847,   173,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   907,     0,     0,
       0,     0,     0,   929,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   951,     0,     0,   956,   957,     0,     0,
       0,   978,   980,   979,     0,   982,     0,     0,   989,   991,
     992,     0,  1027,     0,     0,     0,     0,   850,   851,  1076,
    1074,  1079,  1078,  1077,  1075,  1080,     0,   855,     0,     0,
    1070,  1069,   859,     0,  1073,     0,   860,   861,   862,   863,
       0,     0,     0,     0,     0,   965,     0,     0,   966,  1207,
       0,  1210,  1206,     0,     0,     0,   967,   999,   968,  1225,
    1230,  1227,  1233,  1226,  1224,  1231,  1228,  1222,  1229,  1223,
    1232,     0,     0,   973,     0,     0,     0,     0,   974,  1242,
    1246,  1247,     0,  1244,   975,     0,  1248,   976,   996,     0,
       0,     0,  1001,  1002,  1003,  1289,  1303,     0,     0,  1310,
    1306,     0,     0,     0,  1301,  1300,  1314,  1313,     0,     0,
    1330,     0,     0,  1326,     0,  1334,     0,     0,  1327,     0,
    1363,   230,   230,     0,     0,     0,   230,     0,  1396,     0,
    1395,     0,     0,     0,     0,  1383,     0,     0,     0,     0,
    1387,     0,     0,     0,  1394,     0,     0,     0,     0,     0,
    1385,  1397,     0,     0,     0,  1384,   230,   230,   230,  1374,
    1373,  1375,     0,   253,   255,   257,   247,     0,   250,   249,
     248,     0,   258,     0,     0,    63,     0,  1459,     0,  1466,
     173,  1481,     0,  1472,  1473,     0,  1475,  1476,     0,   182,
     183,  1467,  1489,  1490,     0,   261,     0,   275,     0,     0,
       0,     0,   310,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   331,   330,     0,   340,   342,     0,     0,
       0,     0,     0,     0,   367,     0,   173,     0,     0,     0,
       0,     0,   173,     0,   392,     0,   391,   462,   461,     0,
       0,     0,   504,   173,     0,   181,   515,   513,   517,   521,
       0,     0,     0,   181,     0,   556,   540,     0,   551,   553,
     184,     0,     0,   422,     0,     0,    63,     0,   530,    86,
      85,     0,     0,  1097,     0,     0,     0,     0,     0,     0,
    1109,     0,     0,     0,  1159,     0,     0,     0,  1128,  1129,
       0,     0,     0,     0,     0,  1142,     0,  1148,  1149,  1151,
    1153,     0,  1158,  1170,  1171,  1172,     0,  1174,     0,  1180,
    1182,  1183,  1181,  1081,     0,  1161,     0,  1160,  1096,     0,
       0,  1166,     0,  1168,     0,  1167,  1189,  1169,  1176,     0,
       0,   612,   610,   444,     0,     0,  1358,  1352,   677,   678,
       0,   675,   671,     0,   194,   194,   194,   693,   694,   190,
     189,     0,   194,   194,   194,     0,   701,   700,   699,   194,
     711,   191,   194,   194,   194,   192,   193,   194,   194,     0,
     194,   194,     0,   191,     0,   724,     0,   730,     0,   729,
     728,   727,     0,     0,     0,   754,     0,   753,     0,   726,
     725,     0,     0,     0,     0,   191,   191,   188,     0,     0,
     188,     0,     0,     0,   194,   194,   828,     0,   194,   194,
     834,   194,     0,     0,   220,   221,   222,   223,   224,   225,
       0,    92,    93,    91,   869,     0,     0,     0,     0,     0,
    1020,  1018,  1013,     0,  1023,  1007,  1024,  1010,  1022,  1016,
    1005,  1019,  1008,  1006,  1025,  1021,     0,     0,   883,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   917,     0,     0,     0,
       0,   928,   930,     0,     0,     0,   936,   935,     0,     0,
       0,   209,     0,     0,     0,   173,     0,   947,     0,     0,
       0,     0,   952,   953,   954,     0,     0,     0,     0,   961,
     977,   981,   983,   986,   985,     0,     0,     0,   990,   868,
    1028,  1030,     0,  1029,   853,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1062,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   857,  1004,     0,     0,     0,     0,   964,     0,   173,
    1203,  1201,  1199,     0,     0,   173,  1205,   969,     0,     0,
       0,     0,  1241,     0,     0,  1249,   994,   995,     0,   997,
    1309,  1311,  1308,  1307,  1298,     0,     0,     0,  1331,     0,
       0,  1335,  1346,   232,   233,   234,   235,   231,  1377,  1376,
       0,     0,     0,  1381,     0,     0,     0,  1380,     0,     0,
       0,  1379,  1378,   230,     0,     0,     0,  1386,     0,     0,
       0,  1393,     0,     0,     0,  1392,     0,     0,     0,  1391,
       0,     0,     0,  1390,     0,     0,     0,     0,     0,  1407,
       0,  1442,  1441,  1443,     0,     0,     0,  1389,     0,     0,
       0,  1388,  1402,  1401,  1403,  1399,  1398,  1400,  1445,  1444,
    1446,     0,   251,     0,     0,  1461,  1463,  1464,     0,  1479,
     173,  1474,  1477,     0,     0,   173,     0,     0,     0,   272,
       0,     0,     0,     0,   314,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   363,   362,     0,
       0,   354,   365,   173,   368,   372,     0,   383,   385,   384,
     382,   173,   390,     0,     0,     0,   181,   173,     0,     0,
       0,     0,   535,   549,   558,     0,   552,   186,   187,   185,
     545,     0,   561,     0,     0,   528,   533,    84,     0,     0,
       0,     0,     0,     0,   173,  1098,     0,     0,     0,  1103,
       0,   173,     0,  1110,  1111,  1112,     0,  1114,  1116,  1115,
    1117,  1118,     0,     0,     0,  1124,     0,  1130,  1131,     0,
       0,     0,  1137,  1135,  1136,     0,     0,     0,     0,  1143,
    1144,     0,     0,  1147,  1150,  1152,  1154,  1155,     0,     0,
    1173,  1175,     0,  1095,  1085,  1185,  1086,     0,     0,  1187,
    1177,     0,     0,   630,   631,     0,   672,   676,     0,   690,
     691,   692,   194,   696,   697,   698,     0,     0,     0,   705,
     706,   188,     0,     0,     0,   832,   194,   712,   713,   714,
     715,   717,   191,   720,   721,     0,   194,     0,     0,     0,
     191,   191,   188,     0,     0,     0,     0,     0,     0,     0,
     191,   191,   188,     0,     0,   188,     0,     0,     0,     0,
     191,   191,   188,     0,     0,     0,     0,   752,     0,   756,
       0,     0,     0,     0,     0,   191,   191,   188,     0,     0,
     188,     0,     0,     0,     0,     0,   191,   191,   188,     0,
       0,   188,     0,   191,   732,   733,   734,   735,   737,     0,
     740,   741,     0,   191,     0,     0,   826,   827,   194,   830,
     831,   836,   194,     0,   866,   173,   870,     0,     0,     0,
       0,     0,     0,     0,  1012,  1009,  1015,  1014,  1011,  1017,
       0,     0,     0,   197,   199,   208,   204,   201,   202,   198,
     200,   205,   203,   207,   206,     0,     0,     0,   173,   890,
     889,   891,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   962,   908,   909,   910,     0,
     914,   911,   913,     0,     0,   919,   918,   920,     0,     0,
       0,     0,     0,     0,     0,   173,   173,   934,   944,   215,
     211,   216,   210,   213,   212,   217,   214,   942,   943,   173,
       0,     0,   946,   948,   173,   173,     0,   955,   958,   959,
     173,   173,   984,   988,   867,  1031,   854,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1063,  1190,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1061,     0,     0,     0,
       0,     0,   864,   865,   173,   181,  1204,     0,     0,  1208,
    1209,     0,     0,   971,     0,   173,     0,  1243,  1245,   993,
       0,  1328,  1329,  1332,  1333,   230,   230,   230,   230,   230,
     230,   230,   230,   230,  1447,  1405,  1404,  1406,  1439,  1438,
    1440,  1436,  1435,  1437,  1430,  1429,  1431,  1427,  1426,  1428,
    1409,  1408,  1412,  1411,  1413,  1410,  1421,  1420,  1422,  1418,
    1417,  1419,     0,     0,  1456,     0,  1480,     0,   173,     0,
    1484,     0,     0,   276,     0,   273,     0,     0,     0,     0,
       0,   322,     0,     0,     0,     0,     0,     0,   329,     0,
       0,     0,   173,     0,   369,     0,     0,   375,   167,   160,
       0,   483,     0,   511,   181,   184,     0,     0,   524,     0,
     562,   563,     0,   527,     0,     0,     0,     0,     0,     0,
     173,  1099,   184,   184,   184,   173,  1104,   184,   181,   184,
     184,   173,  1119,   184,   184,   184,   173,  1125,   184,   184,
     173,     0,   173,   184,   173,   184,   184,   173,   184,   173,
       0,  1163,  1164,     0,     0,   629,     0,   695,   702,   703,
     704,     0,   708,   709,   710,   716,   194,   191,   722,   743,
     744,   745,   746,   747,     0,   749,   750,   191,   191,   806,
     807,   808,   809,   811,     0,   814,   815,     0,   191,   817,
     818,   819,   820,   821,     0,   823,   824,   191,     0,     0,
       0,   191,   191,   188,     0,     0,     0,     0,     0,     0,
     191,   191,   188,     0,     0,     0,     0,     0,     0,   191,
     191,   188,     0,     0,     0,   191,   194,   194,   194,   194,
     194,     0,   194,   194,     0,   191,   191,   194,   194,   194,
     194,   194,     0,   194,   194,     0,   191,   736,   191,     0,
     742,     0,     0,   829,   837,     0,   871,   184,     0,     0,
     184,     0,     0,     0,   881,   184,   884,   885,   886,   184,
     888,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   912,   915,   916,     0,   184,     0,
       0,     0,   931,   932,     0,     0,   181,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1234,  1060,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   173,     0,     0,    89,     0,     0,  1071,  1072,   181,
       0,     0,     0,  1211,   970,   972,   181,   173,  1321,  1433,
    1432,  1434,  1424,  1423,  1425,  1415,  1414,  1416,  1448,     0,
    1458,  1491,     0,     0,  1486,  1485,   277,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   318,     0,     0,     0,
       0,   355,   366,   373,   184,   484,   489,   512,   514,     0,
     522,   557,   173,     0,     0,     0,     0,     0,     0,   173,
    1092,  1100,  1102,  1101,  1105,  1106,  1107,  1108,  1113,  1120,
    1121,  1122,  1123,  1126,  1127,  1132,   181,   184,   181,  1140,
     181,  1141,  1145,   181,  1156,   181,   173,     0,   173,     0,
     628,     0,   707,   718,   194,   191,   751,   810,   191,     0,
     816,   191,   825,   194,   194,   194,   194,   194,     0,   194,
     194,   191,   194,   194,   194,   194,   194,     0,   194,   194,
     191,   194,   194,   194,   194,   194,     0,   194,   194,   191,
     194,   766,   767,   768,   769,   771,   191,   774,   775,     0,
     194,   194,   795,   796,   797,   798,   800,   191,   803,   804,
       0,   194,   738,   191,   838,   839,   173,   873,     0,   184,
     875,     0,   173,     0,   882,   887,   173,     0,   896,   897,
     898,   899,   903,   904,   900,   901,   902,     0,     0,   184,
     923,     0,   173,     0,     0,   937,     0,   184,     0,     0,
     184,   184,     0,   987,     0,   218,   218,     0,     0,   218,
       0,   218,  1190,     0,     0,     0,     0,     0,     0,     0,
       0,  1235,  1213,     0,  1220,  1221,     0,   218,   218,     0,
       0,     0,     0,     0,  1190,     0,     0,     0,  1190,     0,
    1064,     0,     0,     0,  1190,    90,     0,   218,     0,  1237,
     173,   173,     0,   181,     0,   259,  1493,  1492,     0,     0,
     281,     0,     0,     0,     0,     0,   326,     0,     0,     0,
       0,     0,   376,   523,     0,   395,     0,  1088,     0,   226,
       0,  1093,  1133,  1134,  1138,  1139,  1146,  1157,  1094,   437,
       0,   395,     0,   719,   748,   812,   191,   822,   757,   758,
     759,   760,   761,   191,   763,   764,   194,   786,   787,   788,
     789,   790,   191,   792,   793,   194,   777,   778,   779,   780,
     781,   191,   783,   784,   194,   770,   194,   191,   776,   799,
     194,   191,   805,   739,     0,   184,   876,     0,     0,     0,
       0,     0,   905,   906,   921,     0,     0,     0,   933,   938,
       0,   940,     0,   949,   950,   941,   184,     0,   219,  1190,
    1190,    89,     0,  1190,     0,  1190,  1032,   173,     0,     0,
       0,     0,     0,     0,     0,  1212,     0,     0,  1190,  1190,
      89,     0,     0,     0,  1190,  1190,  1036,  1190,     0,     0,
    1037,  1190,  1067,  1065,  1066,  1041,  1190,  1190,  1237,  1253,
       0,  1202,  1200,  1239,     0,     0,     0,     0,   283,   316,
     317,     0,     0,     0,   315,   343,   344,     0,   395,   396,
     398,   397,   448,     0,     0,   227,   229,   228,  1090,  1091,
     395,   450,     0,   813,   194,   765,   194,   794,   194,   785,
     772,   194,   801,   194,     0,   872,   184,   184,     0,   184,
       0,   184,   184,     0,   939,   184,     0,  1190,  1047,  1043,
    1190,     0,  1048,     0,  1042,  1190,     0,  1215,     0,  1218,
    1258,  1219,  1217,  1214,     0,  1045,  1044,  1190,     0,     0,
    1190,  1049,  1039,  1035,  1190,   173,  1038,  1040,  1046,  1253,
    1197,     0,     0,  1238,  1251,  1240,  1320,     0,     0,   324,
     325,   323,   356,   359,   357,     0,     0,   449,  1087,   173,
     451,   674,   762,   791,   782,   773,   802,   184,   874,   880,
       0,   895,   892,   922,   927,     0,   945,     0,  1054,  1034,
      89,     0,  1052,     0,  1216,     0,  1033,    89,     0,  1050,
    1053,     0,  1198,  1255,  1257,     0,  1250,     0,     0,     0,
       0,     0,     0,   226,     0,   877,   173,   893,   924,   960,
    1190,     0,  1259,     0,  1190,     0,   184,  1256,  1252,   282,
       0,     0,     0,     0,     0,  1089,   849,   173,   878,   894,
     173,   925,  1056,     0,  1190,  1055,     0,     0,   284,   348,
       0,   347,     0,   879,   926,    89,  1057,    89,  1190,   346,
     345,  1190,  1190,  1051,  1059,  1058
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    59,  1683,   184,   166,  1098,  2884,  2885,   499,   500,
     501,   502,   167,   168,   169,   839,   756,   102,   978,   522,
    1451,  1990,  1611,  1627,  1218,  2205,  2257,  2999,  1680,  3068,
    1858,   395,   936,  1429,   920,   923,   926,   941,    69,   419,
     425,   429,   432,    75,   436,    82,   452,   448,   442,   459,
      92,   469,   103,  1475,   112,   477,   480,   483,   485,   558,
    1048,  1959,   487,   490,   493,   119,   509,   170,   172,  3062,
     188,   191,   236,  1093,  1143,   546,  1036,   549,   559,  1040,
    1045,   561,   563,  1051,   567,  1053,   581,  1058,  1060,   584,
     588,   592,   594,   597,   601,   637,   633,  1528,   615,  1079,
    1084,  1076,  1516,  1090,   618,   645,   654,  1101,   659,   664,
     656,   629,   625,   669,   678,  1138,  1592,  1130,  1132,  1134,
    1140,   683,  1145,   239,   685,  2065,   258,   688,   690,   694,
     699,   707,   276,  1602,   722,   302,   766,  1616,   770,   778,
    1204,  1635,  1199,  2127,  1647,  1645,  2129,  1200,  1637,  1639,
     784,   768,   787,   790,   782,   304,   312,   314,   830,  1288,
    1706,  1277,  1811,  2288,  2306,  1292,  1296,  1286,  1125,  1573,
    1577,  1585,  1587,  2624,   320,  1305,  1308,  1316,  2861,  2862,
    2863,  2625,  3039,  3040,  1338,  1344,  1347,  3133,  3134,  3130,
    3131,  3183,  2864,  2865,   292,   328,   336,   344,   854,   849,
     349,   354,   356,   864,   871,  1373,  1378,   930,   917,   361,
     365,   330,   268,   264,   369,   878,   376,   912,   887,   902,
     903,  1415,  1410,  1877,  1400,  1899,  1871,  1911,  1907,  1867,
    1893,  1889,  1863,  1885,  1881,  1404,   907,   889,   382,   383,
     399,  1437,   402,   408,   954,   957,   951,   410,   413,   962
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2985
static const yytype_int16 yypact[] =
{
    5671,    92,   752,    53, -2985, -2985,  1355,  -141,   601,  1132,
    1084,   120,  3053,   171,   429,    43,  1033,    26,  5905,   594,
    2748, -2985,    47,     6,   162,  1134,   205,   783,   467,   278,
     243,   258,   411,  1273,   289,   482,   300,  3944,    19,   703,
     692,   592,   411, -2985,   151,   192,   137,    34, -2985,   538,
     728,   895, -2985,    97, -2985,   102,  2181,   474,   125,   749,
     196,   951,   448,   757,   766,   142,   871,     7,   735, -2985,
   -2985, -2985,   496,   901,  1040, -2985,    31,   215,   429,    68,
     521,   621, -2985,   887,  1040, -2985, -2985,  1040,  1040,   490,
     921,  1040, -2985, -2985,  1040, -2985, -2985,  1040, -2985, -2985,
   -2985, -2985, -2985, -2985,   413,   230,   923,   928,   978,   998,
     673,   661, -2985,  1040,  1720,  1040,  1040,  1305,  1040, -2985,
   -2985, -2985,   795, -2985, -2985, -2985, -2985,  5110, -2985, -2985,
   -2985, -2985, -2985, -2985,  1040, -2985, -2985, -2985, -2985, -2985,
   -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985,
   -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985,
   -2985, -2985, -2985, -2985, -2985, -2985, -2985,  1523, -2985,  1040,
   -2985,  1027, -2985, -2985,   429,   429,   429,   429,   429,   429,
     429,   429,   429,   429, -2985, -2985, -2985, -2985, -2985,   906,
    1060, -2985,   999,  1528,   -14,   187,   762,   938,  1045,  4543,
     598,  5165,  4609,  1079,  5110,  3113, -2985,  1461,  -158,  1061,
    1075,  1059,   202,   216,   964,   606,  1122,   545,   411,  1456,
   -2985,   826,  1086, -2985,   907,   862,   247, -2985,   434, -2985,
     532, -2985,   275,  1094,   127, -2985, -2985,  5328, -2985, -2985,
   -2985,  1143,  1142,  1195, -2985, -2985, -2985, -2985,   161, -2985,
   -2985, -2985, -2985,  1185, -2985, -2985,  5328,  4703, -2985,  1231,
   -2985,    32,  5328,  1237, -2985,   153,  5328,  1248, -2985,    57,
   -2985,  1259,  1268,   194, -2985,  1040, -2985,  1281,  1715,  1894,
   -2985,  1286, -2985, -2985, -2985, -2985,  1309, -2985, -2985,  1040,
   -2985,   429, -2985,  1297,   445,  1311,  1313,   316,    66,  1316,
      33,    39, -2985, -2985, -2985,  1332,  1333,   429,   429,  1040,
    1040, -2985, -2985,  1337, -2985, -2985, -2985, -2985, -2985, -2985,
    2812,  1894, -2985,  1345,    41,  1040,  5328,  1040, -2985,  5328,
   -2985,  1357, -2985, -2985, -2985, -2985, -2985,  1040,  1610,   429,
    2347,  1040,  1523,  1040, -2985,  1361, -2985,  5300, -2985, -2985,
     607,  1368,  1371,  1040, -2985,  1377, -2985, -2985,   280, -2985,
   -2985, -2985,  1378,  5328,  1381, -2985,  1626,  1040,  1289, -2985,
     652,  1280,  1686,   480,  1387,   546, -2985, -2985, -2985, -2985,
   -2985, -2985, -2985,  1414, -2985,   694,   114,   281,   408,    80,
    1040,    24,  1419,  1040,   150, -2985,  1040,    -1,  1425, -2985,
    1040,  1040, -2985,    42,    49,    76,  1430,  1523, -2985, -2985,
   -2985,  1162,  1040, -2985, -2985, -2985, -2985, -2985,  1040, -2985,
    1437,  1443, -2985,  1040,  1276, -2985, -2985, -2985, -2985, -2985,
   -2985,  1040, -2985,   429, -2985,  1040, -2985, -2985,   613,   613,
   -2985,  1448, -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985,
   -2985, -2985, -2985,  1234,  1040,  1040,  1459,  1464,  1467, -2985,
   -2985,  1040,  1040,  1040,  1040,  1040,  1040,  1471,  1040, -2985,
    1474,  1040,  1040, -2985,  1485,  1491,  1495, -2985,  1498, -2985,
   -2985,  1500,  1502, -2985,   647, -2985,  1505, -2985,  5328,  1265,
   -2985,   991, -2985, -2985,  1040, -2985, -2985, -2985,  1040,  1508,
    1507,  1507,  5328,  1040,  1040,  1040,  1040,  1040,  1040, -2985,
    1040,  5110,  1720,  1040,  1040, -2985, -2985, -2985, -2985, -2985,
   -2985, -2985,  1720,  1040, -2985, -2985, -2985, -2985, -2985, -2985,
   -2985, -2985, -2985, -2985, -2985,  1518, -2985, -2985,  1218,    25,
   -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985,  1137, -2985,
     -38, -2985, -2985, -2985,  1338, -2985,   948,   662,   662, -2985,
   -2985, -2985,  1531, -2985, -2985,  1539, -2985, -2985,   204,   346,
   -2985,  1351, -2985, -2985, -2985, -2985,  1363, -2985,  1550, -2985,
    1523, -2985,  1040,  1040, -2985,  5328,  5328,  1523, -2985, -2985,
    1523, -2985, -2985, -2985, -2985,  1523, -2985, -2985,  5328,  1523,
    1040, -2985, -2985,  5328, -2985,  1554,   650,  1336,    15, -2985,
   -2985,  1339,  5328,     3, -2985, -2985, -2985, -2985, -2985, -2985,
    1558,  1567, -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985,
    1555, -2985,  1349, -2985,   -41, -2985,  1040, -2985, -2985,  1574,
    1574, -2985, -2985,  1574,  1574, -2985,  1082, -2985, -2985, -2985,
   -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985,
     275, -2985, -2985, -2985, -2985, -2985, -2985,  1365,  1367, -2985,
   -2985,  1512,  1516,  1517, -2985, -2985,    81,  1335, -2985,  1040,
    1592,  1347,  5300, -2985,  1523, -2985, -2985,  1604, -2985, -2985,
   -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985,
   -2985, -2985,  5328,  5328,  5328,  5328, -2985, -2985, -2985, -2985,
   -2985, -2985, -2985, -2985,  1602, -2985, -2985, -2985, -2985,  1612,
    1613,   429, -2985, -2985,  1615,  1617,  1406,  1040, -2985,  1894,
   -2985,  1620, -2985, -2985, -2985, -2985, -2985,  1040, -2985,   429,
   -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985,
   -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985,
   -2985,  1629,   412,  1543,  1549,  1559, -2985,  1651, -2985,  1655,
   -2985,   648,  1572,    74,    88,  5272,   541,  1663, -2985,  1630,
   -2985,  1666, -2985,    16, -2985,  1667,  1668, -2985,    60,  1670,
   -2985,  1673, -2985, -2985, -2985,  1040, -2985,  5300,  5037,  1672,
    1356,  1227,  1675,   884,  1573, -2985, -2985, -2985,  1681,    50,
     667,  1683,  1688,    11,  1040,  1202,  1007,    83,  5328,   429,
    1907,   777,    59,   501,   367,    28, -2985,  1678,  1680,  1695,
   -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985,
    1040, -2985, -2985, -2985, -2985,  1040,  1040,  1040,  1040, -2985,
   -2985,  1040,  1523,  1040, -2985,  1040,  1720,  1040,  1698,  1523,
   -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985,  1699,    52,
      73, -2985, -2985, -2985,  1703, -2985, -2985, -2985, -2985,  1606,
   -2985,  1705,  1708,  1621,  1631,  1638,  1730, -2985,  1732, -2985,
    1733,  1645,  1736,   576,   608,   550,   655,   618,   684,   706,
    1739,   714, -2985, -2985,  1740,  1744,  1750, -2985, -2985,  1754,
    1760,  1751, -2985,  1762, -2985, -2985, -2985, -2985,  1763, -2985,
   -2985,  1767, -2985, -2985,  1769, -2985, -2985, -2985, -2985, -2985,
   -2985, -2985,  1040,   391,  1040, -2985, -2985, -2985, -2985,  1040,
    1040, -2985,  1040,  1040,  1285,  1040,  1040, -2985,  5300,  1706,
    1773, -2985,  1319,  1780, -2985,  1352,  1787, -2985, -2985,   -39,
    1040,  1040, -2985,  1783, -2985, -2985,  1793,  1324,  1040,  1803,
     525, -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985,
   -2985, -2985, -2985, -2985, -2985, -2985,  1813,  1814,  1040,  1040,
    1040,  1040,  1040,  1818,  1040,  1822,  1040,  1136,  1823,  1828,
     228,  1829, -2985, -2985,   429,  1830,  1832,  1523,  1833,  5328,
    1835, -2985, -2985, -2985, -2985, -2985, -2985,  1523, -2985, -2985,
    1040,  1040,  1040,  5328,  1040,  1720,  1040, -2985,  1040, -2985,
   -2985, -2985, -2985, -2985,  1836,  1837, -2985, -2985, -2985, -2985,
   -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985,
     598, -2985,  1040, -2985, -2985,  1841, -2985, -2985, -2985, -2985,
   -2985, -2985, -2985, -2985,  5328,  1040,  1523,  1523,   -39,   -39,
     -39,  1523,  1720,  1040,  1523, -2985, -2985, -2985,  1040, -2985,
     -41,  1650,  1843,  1852, -2985, -2985,  1523, -2985,  1679,  1684,
   -2985,  1854,  1856, -2985,  1866,  1374,  1831,  1838, -2985,  1040,
   -2985, -2985, -2985, -2985, -2985,  5111,   683,  1553,  1008, -2985,
   -2985, -2985, -2985,  1040,   600,  1290, -2985,  1578, -2985,  1907,
    1579,   671,  1547,   195, -2985, -2985,  1040, -2985, -2985, -2985,
   -2985, -2985, -2985, -2985, -2985, -2985,  1556, -2985, -2985, -2985,
   -2985,  1040,  1875, -2985, -2985, -2985, -2985,   -39, -2985, -2985,
   -2985, -2985, -2985,  1879,  1881,  5197, -2985, -2985,  1882,  1883,
    1040, -2985, -2985, -2985, -2985, -2985,  1885,  1886,  1887,   658,
     658,   363,  1890,  1893,  1895,  1896,  1896,  1896,  1897,  1576,
    1588,  1898,  1899,  1901,   149,   149,   363,  1903,  1904,   363,
    1905,  1906,  1908,  1909,  1908,  1909,  5906,  1910,  1911, -2985,
   -2985,  1908,  1909,   764, -2985,  1913,  1918,  1919,  1921,   658,
     363,  1923,  1927, -2985,  1931,  1934, -2985, -2985, -2985,  1915,
   -2985, -2985,  1523,  1074,  1714,  1635,  1649,  1682,  1796,  1298,
    1685,  1939,   112,   143,  1844,  1657,  1943,  1601,  1914,  1691,
    1700,  1846,  1944,  1710,   533,    45,   500,   -84,  5328,  1907,
    1929,   804,  1693,  1711,  1970,    35, -2985, -2985,   952,  1975,
    1976, -2985, -2985, -2985,  1978,  1738,    65,  1907,  1742, -2985,
   -2985,  1925, -2985,   429,  1982,  1983,  1040, -2985, -2985, -2985,
   -2985, -2985, -2985, -2985, -2985, -2985,    13, -2985,  4476,  1984,
   -2985, -2985, -2985,  1040, -2985,  1040, -2985, -2985, -2985, -2985,
    1040,  1040,  1040,   884,  5328, -2985,  1985,  1400, -2985, -2985,
    1040, -2985, -2985,  1040,  5328,  1040, -2985, -2985, -2985, -2985,
   -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985,
   -2985,   429,  1040, -2985,  1040,   884,  1987,  1989, -2985, -2985,
   -2985, -2985,  1040,  1040, -2985,   429, -2985, -2985, -2985,  1193,
    1990,  1992, -2985, -2985, -2985, -2985, -2985,  1040,  1040, -2985,
   -2985,  1720,  1040,  1040, -2985, -2985, -2985, -2985,  1994,  1040,
   -2985,  1040,  1867, -2985,  1040, -2985,  1040,  1877, -2985,  1997,
   -2985,  1220,  1220,   718,   736,   774,  1220,  1998, -2985,   837,
   -2985,   845,   909,   935,   940, -2985,  1999,  2000,  1047,  2004,
   -2985,  2005,  2007,  2010, -2985,  1055,  1068,  2011,  2013,  2016,
   -2985, -2985,  2019,  2020,  2022, -2985,  1220,  1220,  1220, -2985,
   -2985, -2985,  1040, -2985, -2985, -2985, -2985,  1040, -2985, -2985,
   -2985,  1040, -2985,  1040,  1040,   181,  5328, -2985,  1040, -2985,
    1523, -2985,  5300, -2985, -2985,  2024, -2985, -2985,  2025, -2985,
   -2985, -2985, -2985,  1991,  2347, -2985,  1040,  2021,  1040,  1040,
    1040,  1157, -2985,  2023,  1040,  1040,  2030,  1040,  1040,  2032,
    1040,  2035,  1040, -2985, -2985,  1136, -2985, -2985,  2037,  2039,
       0,  2040,   429,   429, -2985,  5328,  1523,  2042,  1040,  2045,
    2046,  2049,  1523,  5328, -2985,  1040, -2985, -2985, -2985,  1040,
    1040,  1040, -2985,  1523,  5328,   -39, -2985, -2985, -2985, -2985,
    1720,  1040,  2053,   -39,  1040,   721, -2985,  2055, -2985, -2985,
     135,  4330,  1040, -2985,  1040,  2054,  2009,  1040, -2985, -2985,
   -2985,  2056,  1221,  5110,  1788,  1789,  1798,    86,  5328,  1799,
   -2985,   470,   144,    99, -2985,  1800,  1802,   122, -2985, -2985,
      48,  1878,   834,  1807,   -44,  1907,   -15, -2985,  2073,  1794,
   -2985,   788, -2985, -2985, -2985, -2985,  1907,  1840,     1, -2985,
   -2985, -2985, -2985, -2985,  1040, -2985,  1040, -2985, -2985,  1040,
    1040, -2985,  1040, -2985,  1040, -2985, -2985, -2985, -2985,  1855,
    1040, -2985, -2985, -2985,  1040,    77, -2985, -2985, -2985, -2985,
    2077,  2078, -2985,  1040,   658,   658,   658, -2985, -2985, -2985,
   -2985,  2080,   658,   658,   658,   792, -2985, -2985, -2985,   658,
   -2985,   149,   658,   658,   658, -2985, -2985,   658,   658,  2081,
     658,   658,  2083,   149,   864, -2985,   790, -2985,   910, -2985,
   -2985, -2985,  2084,  2087,  2088, -2985,   867, -2985,   881, -2985,
   -2985,  1784,  2089,  2093,  2094,   149,   149,   363,  2097,  2098,
     363,  2099,  2101,  2102,   658,   658, -2985,  2103,   658,   658,
   -2985,   658,  2104,  2105, -2985, -2985, -2985, -2985, -2985, -2985,
     429, -2985, -2985, -2985,  5110,  1644,  1040,  1758,  1598,   471,
   -2985, -2985, -2985,   534, -2985, -2985, -2985, -2985, -2985, -2985,
   -2985, -2985, -2985, -2985, -2985, -2985,  2106,  1040, -2985,   429,
    1200,  2107,  1040,  5328,   429,   429,  2108,  1847,  1842,  1850,
     131,   140,  1851,   269,  1747,  1752,  2110,  2111,  2116,  2117,
    1298,  2124,  2125,  2126,  1776,  1777,  1421,  2130,  1040,  1804,
    1862, -2985, -2985,   429,  1200,  5328, -2985, -2985,  5328,  1040,
    2131,    69,  2133,  5328,  1040,  1523,   429, -2985,  2135,  5328,
    5328,  1040, -2985, -2985, -2985,   429,   429,  1200,  5328, -2985,
   -2985, -2985, -2985, -2985, -2985,  5328,  1040,   429, -2985,  2136,
   -2985, -2985,  1040, -2985, -2985,  2137,  1040,  1884,   206,  1040,
    1888,  1040,   211,  1040,  2134,  1040,  1889,  1891,  1040,  1040,
    1040,  1892,  1040,  1190,  1040,  1040,  1199,    17,  1040,  1040,
    1902, -2985, -2985,  1040,  1040,  1040,  1040, -2985,  5328,  1523,
    2140,  2143,  2146,  1040,  1040,  1523, -2985,  1040,  1040,  1040,
    5328,   884, -2985,  1040,  1040, -2985, -2985, -2985,  2149, -2985,
   -2985, -2985, -2985, -2985, -2985,  2151,  1040,  1040, -2985,  1040,
    1040, -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985,
    2152,  2153,  2155, -2985,  2156,  2159,  2161, -2985,  2162,  2163,
    2165, -2985, -2985,  1220,  2166,  2167,  2169, -2985,  2172,  2174,
    2176, -2985,  2177,  2178,  2180, -2985,  2182,  2183,  2185, -2985,
    2186,  2188,  2190, -2985,  2191,  2194,  2195,  2196,  2198, -2985,
    2199, -2985, -2985, -2985,  2201,  2203,  2205, -2985,  2219,  2220,
    2222, -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985,
   -2985,  1040, -2985,  1040,  1040, -2985, -2985, -2985,  1040, -2985,
    1523, -2985, -2985,  2347,  1040,  1523,  1040,  1040,  1040, -2985,
    1040,  1040,  2223,  1040, -2985,  1040,  1040,  2225,  1040,  1040,
    2226,  1040,  2227,  1040,  1136,  2229,  2230, -2985, -2985,  2232,
    5328, -2985,  2234,  1523, -2985,  2235,  1040, -2985, -2985, -2985,
   -2985,  1523, -2985,  1334,  1040,  1334,   -39,  1523,  5328,  1040,
    1040,  2236, -2985, -2985, -2985,  1040, -2985, -2985, -2985, -2985,
   -2985,  5328, -2985,  5328,  1040, -2985, -2985,   -41,  2237,  2238,
    2239,  2240,  2241,  5244,  1523, -2985,  5328,  5328,  5328,  5110,
    5328,  1523,  5328, -2985, -2985, -2985,  5328, -2985, -2985, -2985,
   -2985,  5110,  5328,  5328,  5328,  5110,  5328, -2985, -2985,  5328,
    5328,  1040, -2985, -2985, -2985,  5328,  5328,  5328,  5328, -2985,
   -2985,  5328,  5328, -2985, -2985, -2985, -2985, -2985,  5328,  5328,
   -2985, -2985,  2033, -2985, -2985, -2985, -2985,  1040,  1040, -2985,
   -2985,  2243,  1040, -2985, -2985,  2244, -2985, -2985,  1040, -2985,
   -2985, -2985,   658, -2985, -2985, -2985,  2245,  2246,  2247, -2985,
   -2985,   363,  2249,  2250,  2251, -2985,   658, -2985, -2985, -2985,
   -2985, -2985,   149, -2985, -2985,  2255,   658,  2256,  2257,  2259,
     149,   149,   363,  2261,  2262,  2263,  1845,  2264,  2265,  2266,
     149,   149,   363,  2268,  2269,   363,  2279,  2280,  2289,  2293,
     149,   149,   363,  2299,  2303,  2304,   931, -2985,  1000, -2985,
    1087,  1859,  2305,  2307,  2308,   149,   149,   363,  2310,  2312,
     363,  2315,  1870,  2316,  2318,  2319,   149,   149,   363,  2313,
    2321,   363,  2322,   149, -2985, -2985, -2985, -2985, -2985,  2324,
   -2985, -2985,  2325,   149,  2326,  2327, -2985, -2985,   658, -2985,
   -2985, -2985,   658,  2328, -2985,  1523, -2985,  5328,  1040,  1040,
    5328,  1040,  2329,  1714, -2985, -2985, -2985, -2985, -2985, -2985,
    2330,  5328,   429, -2985, -2985, -2985, -2985, -2985, -2985, -2985,
   -2985, -2985, -2985, -2985, -2985,  1200,  2332,  5328,  1523, -2985,
   -2985, -2985,  2333,  1714,  1040,  1040,  1040,  1040,  1040,  1040,
    1040,  1040,  1040,  2335,  2336, -2985, -2985, -2985, -2985,  2337,
   -2985, -2985, -2985,  2339,  2340, -2985, -2985, -2985,  1040,  5328,
    1040,  2341,  1714,   429,  1200,  1523,  1523, -2985, -2985, -2985,
   -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985,  1523,
    1040,  1720, -2985, -2985,  1523,  1523,  1040, -2985, -2985, -2985,
    1523,  1523, -2985, -2985, -2985, -2985, -2985,  1040,  1040,  1040,
    1040,  1040,  1040,  1040,  1040,  1040,  1040, -2985, -2985,  1040,
    1040,  1040,  1040,  1040,  1040,  1040,  1040,  1956,  1040,  1040,
    1040,  1974,  1040,  3525,  2342,  1040, -2985,  1040,  1040,  1040,
    2345,  2348, -2985, -2985,  1523,   -39, -2985,  2349,  2350, -2985,
   -2985,  1720,  1040, -2985,  2352,  1523,  5328, -2985, -2985, -2985,
    2353, -2985, -2985, -2985, -2985,  1220,  1220,  1220,  1220,  1220,
    1220,  1220,  1220,  1220, -2985, -2985, -2985, -2985, -2985, -2985,
   -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985,
   -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985,
   -2985, -2985,  1714,  1040, -2985,  1040, -2985,  1040,  1523,  1040,
   -2985,  1720,  1040, -2985,  1040, -2985,  2216,  2354,  2357,  1040,
    1040, -2985,  1040,  1040,  2358,  1040,  2360,  1040, -2985,  2363,
    2365,  2367,  1523,  2369, -2985,  2371,  5328, -2985, -2985, -2985,
    1040, -2985,  1040, -2985,   -39,   135,  1040,  2372, -2985,  1040,
   -2985, -2985,  5110, -2985,  2377,  2378,  2379,  2380,  2383,  5328,
    1523, -2985,   135,   135,   135,  1523, -2985,   135,   -39,   135,
     135,  1523, -2985,   135,   135,   135,  1523, -2985,   135,   135,
    1523,  5328,  1523,   135,  1523,   135,   135,  1523,   135,  1523,
    5328, -2985, -2985,  2387,  5110,  2388,  1040, -2985, -2985, -2985,
   -2985,  2392, -2985, -2985, -2985, -2985,   658,   149, -2985, -2985,
   -2985, -2985, -2985, -2985,  2393, -2985, -2985,   149,   149, -2985,
   -2985, -2985, -2985, -2985,  2394, -2985, -2985,  2395,   149, -2985,
   -2985, -2985, -2985, -2985,  2396, -2985, -2985,   149,  2397,  2398,
    2399,   149,   149,   363,  2401,  2402,  2405,  2406,  2407,  2409,
     149,   149,   363,  2411,  2413,  2416,  2417,  2418,  2419,   149,
     149,   363,  2421,  2422,  2423,   149,   658,   658,   658,   658,
     658,  2425,   658,   658,  2426,   149,   149,   658,   658,   658,
     658,   658,  2427,   658,   658,  2429,   149, -2985,   149,  2430,
   -2985,  2431,  2432, -2985, -2985,  5300, -2985,   135,  2434,  5328,
     135,  1040,  5328,  2435, -2985,   135, -2985, -2985, -2985,   135,
   -2985,  5328,  2436,  1040,  1040,  1040,  1040,  1040,  1040,  1040,
    1040,  1040,  1040,  1040, -2985, -2985, -2985,  5328,   135,  1040,
    5328,  2437, -2985, -2985,  1720,  1720,   -39,  5328,  1720,  1720,
    5328,  5328,  1720,  1720,  1040,  1040,  1040,  1040,  1040,  1040,
    1714,  1040,  1040,  1040,  2851, -2985,  1714,  1040,  1040,  1040,
    1040,  1714,  1040,  1040,  2438,  1040,  1040,  1040,  2440,  1040,
    1040,  1523,  1040,  1980,  1714,  1040,  1040, -2985, -2985,   -39,
     429,  5328,  5328, -2985, -2985, -2985,   -39,  1523,  2444, -2985,
   -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985,  1040,
   -2985, -2985,  1720,  1040, -2985, -2985, -2985,  1173,  2445,  2446,
    2450,  2451,  1040,  1040,  2452,  1040, -2985,  2455,  2456,  2458,
    1334, -2985, -2985, -2985,   135, -2985, -2985, -2985, -2985,  2459,
   -2985, -2985,  1523,  2461,  2462,  2464,  2465,  5328,  2466,  1523,
   -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985,
   -2985, -2985, -2985, -2985, -2985, -2985,   -39,   135,   -39, -2985,
     -39, -2985, -2985,   -39, -2985,   -39,  1523,  2467,  1523,  2469,
   -2985,  1040, -2985, -2985,   658,   149, -2985, -2985,   149,  2470,
   -2985,   149, -2985,   658,   658,   658,   658,   658,  2471,   658,
     658,   149,   658,   658,   658,   658,   658,  2472,   658,   658,
     149,   658,   658,   658,   658,   658,  2473,   658,   658,   149,
     658, -2985, -2985, -2985, -2985, -2985,   149, -2985, -2985,  2474,
     658,   658, -2985, -2985, -2985, -2985, -2985,   149, -2985, -2985,
    2475,   658, -2985,   149, -2985, -2985,  1523, -2985,  5328,   135,
   -2985,  2476,  1523,  1040, -2985, -2985,  1523,  1040, -2985, -2985,
   -2985, -2985, -2985, -2985, -2985, -2985, -2985,  1040,  1040,   135,
   -2985,  2478,  1523,  1040,  1720, -2985,    20,   135,  1040,  1720,
     135,   135,  5328, -2985,  1040,  2479,  2479,  1040,  1040,  2479,
    1714,  2479, -2985,  5328,  1764,  1797,  1839,  1853,  1858,  1865,
    2047,  2851, -2985,  2064, -2985, -2985,  1714,  2479,  2479,  1040,
    1040,  1714,  1432,  1040, -2985,  1040,  1040,  1040, -2985,  1040,
   -2985,  1720,  1040,  2480, -2985, -2985,  1040,  2479,   429,    54,
    1523,  1523,   429,   -39,  2483, -2985, -2985, -2985,  2484,  1040,
   -2985,  2485,  2487,  2488,  2489,  2491, -2985,  2492,  2493,  2494,
    2495,  1040, -2985, -2985,  2496,    70,  5328, -2985,  2497,   133,
    5328, -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985,
    2501,    70,  1040, -2985, -2985, -2985,   149, -2985, -2985, -2985,
   -2985, -2985, -2985,   149, -2985, -2985,   658, -2985, -2985, -2985,
   -2985, -2985,   149, -2985, -2985,   658, -2985, -2985, -2985, -2985,
   -2985,   149, -2985, -2985,   658, -2985,   658,   149, -2985, -2985,
     658,   149, -2985, -2985,  1040,   135, -2985,  5328,  5328,  1040,
    5328,  1040, -2985, -2985, -2985,  5328,  5328,  1040, -2985, -2985,
    2502, -2985,  5328, -2985, -2985, -2985,   135,  2504, -2985, -2985,
   -2985,  1714,  1040, -2985,  2505, -2985, -2985,  1523,  1298,  2506,
    2508,  2509,  2512,  2513,  2515, -2985,   429,  2516, -2985, -2985,
    1714,  1040,  2517,  2518, -2985, -2985, -2985, -2985,  1040,  5328,
   -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985,    54,  1920,
    1907, -2985, -2985, -2985,   429,  2520,  2521,  2522, -2985, -2985,
   -2985,  2524,  2525,  2526, -2985, -2985, -2985,   226,    70, -2985,
   -2985, -2985, -2985,  2527,  5328, -2985, -2985, -2985, -2985, -2985,
      70, -2985,  2528, -2985,   658, -2985,   658, -2985,   658, -2985,
   -2985,   658, -2985,   658,  5300, -2985,   135,   135,  1040,   135,
    2529,   135,   135,  1040, -2985,   135,  1040, -2985, -2985, -2985,
   -2985,  2530, -2985,  1040, -2985, -2985,  2564, -2985,  2531, -2985,
   -2985, -2985, -2985, -2985,  1040, -2985, -2985, -2985,  2566,  1040,
   -2985, -2985, -2985, -2985, -2985,  1523, -2985, -2985, -2985,  1920,
   -2985,  2114,  2067,  1907, -2985, -2985, -2985,  2567,  2568, -2985,
   -2985, -2985, -2985, -2985, -2985,  1253,  1253, -2985, -2985,  1523,
   -2985, -2985, -2985, -2985, -2985, -2985, -2985,   135, -2985, -2985,
    2570, -2985,  5110, -2985, -2985,  2571, -2985,  1714, -2985, -2985,
    1714,  1040, -2985,  2572, -2985,  1040, -2985,  1714,  1040, -2985,
   -2985,  5328, -2985,  2114, -2985,   429, -2985,  2573,  2574,  1040,
    1040,  1040,  1040,   133,  2588,  5110,  1523, -2985,  5110, -2985,
   -2985,  1040, -2985,  2590, -2985,  1040,   135, -2985, -2985, -2985,
    2592,  2594,  1040,  2595,  1040, -2985, -2985,  1523, -2985, -2985,
    1523, -2985, -2985,  2591, -2985, -2985,  2600,  2602, -2985, -2985,
    2603, -2985,  2612, -2985, -2985,  1714, -2985,  1714, -2985, -2985,
   -2985, -2985, -2985, -2985, -2985, -2985
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2985, -2985,    -3, -2985,   738, -1075, -1851, -1209,  1731, -2985,
     986,  -486,  1834,   -55,    22, -2985,  -312, -1961,  1962,  1294,
   -1038, -1881, -1110,  1669,  1591, -1728, -2985, -1302, -2985,  -852,
   -1284, -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985,
   -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985,
   -2985, -2985, -2985, -1469, -2985, -2985, -2985, -2985, -2985,  -699,
    -554, -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2753,
   -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985,
   -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985,
   -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985,
   -2985, -2985, -2985, -2985, -2985, -2985, -2985,   227, -2985, -2985,
   -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985,
   -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985,
   -2985, -2985, -2985, -2985, -2985, -2985, -2985,   336, -2985, -2985,
   -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985,  -653,    37,
   -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985,
   -1727, -2985, -2985, -2985, -2985, -2985, -2985,  -805, -2985, -2985,
   -2985, -2985, -2985, -2985,   528, -2985, -2985, -2985, -2985,  -434,
    -818, -1485,  -550, -2985, -2985, -2985, -2985, -2985,  -649,  -628,
   -2985, -2985, -2984, -2985, -2985, -2985, -2985, -2985, -2985, -2985,
   -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985,
   -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985,
    1611, -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985,
   -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985,
   -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985, -2985
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1463
static const yytype_int16 yytable[] =
{
      74,   407,  1331,  2229,  1049,  1515,  1954,  1087,   118,   831,
    1304,  1307,  2410,   187,  2412,  1684,  2244,  2052,  1784,  1081,
      70,    71,  2303,   120,   345,  2989,  1027,  1299,   120,  1207,
    1507,  1508,  1509,  1348,   341,   438,  1030,   709,   785,  2269,
    1764,   427,   932,   368,   788,   833,   948,   120,    70,    71,
    1957,   120,   401,   952, -1236,   412,    70,    71,   418,   343,
     370,   720,   424,   943,  1335,   431,  1290,  1449,    70,    71,
     435,   437,   261,  1215,   447,  2027,  1629,   454,   458,  1632,
     955,   461,  1208,  1746,   462,   463,    70,    71,   471,   616,
     174,   472,   927,   175,   473,  1369,  2249,  2063,  1859,  1135,
    1667,   396,  1872,  1773,  3059,    70,    71,  2009,  1096,  1595,
     494,   498,   503,   504,   508,   510,  1374,   547,   120,   259,
    2021,  1309,  2250,    70,    71,  2251,  1310,   176,    70,    71,
    2040,   514,  1918,  1919,  1920,   177,  1349,  2252,  1034,  1709,
      70,    71,   681,  2025,  1350,    70,    71,  3184,  2036,   513,
    1088,   125,  2216,    70,    71,   359,   125,   371,   715,  1987,
    1988,  2218,  2253,   113,    60,  1625,   523,  3065,   779,  1192,
    2028,  1714,  2018,   372,  1370,   125,  1753,  2041,  3071,   125,
    2254, -1462,  1038,  1194,   114,  1926,   918,    83,   780,   189,
      70,    71,   557,  1747,   617,  1375,  1754,   582,   725,  3207,
     120,   415,  1082,   178,   710,  1311,   171,   190,   691,    70,
      71,  1588,   548,  1774,    70,    71,  2037,   928,    70,    71,
     277,   360,   583,   450,   591,  2255,   596,   600,   265,    70,
      71,  1312,  1478,  1209,  1710,   478,   397,   636,  1216,  1035,
    2029,  1989,   115,  1097,  1479,  2042,   125,   120,   305,  1039,
     128,   439,  1193,  1300,   679,   128,   692,   933,   362,   129,
     130,  1450,   179,   313,   129,   130,  1195,   834,   622,   451,
    1217,   373,   727,  1371,   128,   835,   836,   721,   128,    72,
     781,  3060,   626,   129,   130,   120,   759,   129,   130,   374,
    2221,  2038,   859,  1054,  1376,   180,   929,   181,  1715,  2019,
    1711,  1581,  1589,   949,  1313,  3147,   795,   796,  2030,   944,
     440,  2043,  1958,   661,  1136,   306,   837,  3150,   441,  1210,
    1765,   771,   840,   711,   842,   716,   182,   726,   125,  1626,
    1211,   428,   262,   398,   845,   848,   123,   851,   855,   307,
     857,   116,  1089,   786,  3066,   128,   934,  2064,  1291,   789,
     867,  1301,   682,   921,   129,   130,  1372,  1336,   366,   263,
    2010,   133,   853,   877,   879,  1785,   133,   346,  1212,  2304,
    1364,   120,  2990,  2022,  1083,   125,  1351,  1377,   347,   953,
     693,   950, -1236,   712,  1748,   133,  1712,   931,  1337,   133,
     938,   940,    73,   942,  3061,   120,  2026,   946,   947,  2053,
     308,   550,   183,  1137,  1775,  2217,   956,   551,   961,   963,
     939,   163,   120,   125,  2219,   964,   163,  1161,   164,   165,
     967,   969,  1314,   164,   165,  1166,  1167,   128,   970,   443,
     375,  1756,   972,   120,   838,   163,   129,   130,  1713,   163,
    3142,   400,   164,   165,   717,   772,   164,   165,   869,  1777,
     762,   982,   983,   117,   552,   665,   133,  3067,   987,   988,
     989,   990,   991,   992,   411,   994,  2279,  1978,   996,   997,
    2256,  2284,   293,   315,   128,  1982,   367,  2577,  1168,  2183,
     924,   423,   553,   129,   130,  2398,  1716,  2020,   266,   773,
     774,  1012,   479,   294,   464,  1013,   295,  2013,  1818,   125,
    1018,  1019,  1020,  1021,  1022,  1023,   163,  1024,  2213,   498,
    1028,  1029,   128,   164,   165,   267,  2603,  1339,   363,   498,
    1031,   129,   130,   125,    70,    71,   131,  1055,   623,  1460,
    1830,  2242,   332,  1026,  2698,   775,  1461,   554,   133,  1494,
     125,  1640,   627,  2222,   303,   364,   904,  2159,  1649,  1609,
    2162,  2711,  2712,  2713,   331,   624,  2715,   316,  2717,  2718,
    1743,   125,  2720,  2721,  2722,   444,  1056,  2724,  2725,   628,
     358,   670,  2729,   662,  2731,  2732,  3143,  2734,   870,  1064,
    1065,   555,   556,   671,   666,   133,  1511,  2184,   163,  2344,
     296,   309,  2014,   377,   639,   164,   165,  1073,   128,   776,
     663,    70,    71,    70,    71,    84,   297,   129,   130,   445,
     446,   634,   909,   905,   672,   329,   890,   640,   763,   764,
     555,  3144,   128,   133,    70,    71,   777,  1146,  1078,  1169,
    1170,   129,   130,  1099,   641,   163,  1201,  1340,   474,   128,
     310,  1057,   164,   165,    85,   973,   378,   298,   129,   130,
    2187,  1004,  1005,  1180,  1077,  1744,  1750,   379,  2015,   123,
     128,  1181,  1182,   465,   466,   491,   860,   123,  1610,   129,
     130,  1391,   317,   163,    70,    71,  1141,   635,   488,   910,
     164,   165,  1126,   892,  1401,   237,  2807,   318,   357,  2810,
     380,   333,  1341,   475,  2814,  2185,   355,  1345,  2815,   334,
     673,   335,   238,  1393,   299,   861,   489,   455,   667,   133,
    1293,   123,   467,  1427,  1183,  1171,   974,  2830,   881,  1202,
    1198,  1396,   300,    86,  1160,  1984,  1172,  1173,   765,  2911,
     914,   492,   384,   133,  1163,   642,   476,  2039,    70,    71,
     409,   668,  1222,  1342,  2016,   674,   646,   453,  2050,   414,
     133,  1402,   173,   185,  1392,  1563,  2186,   420,  2188,   163,
     260,   319,   421,    61,  1174,   862,   164,   165,   311,  1651,
     422,   133,  1407,   468,    87,    88,   348,  1652,  1653,  1405,
    1412,   350,   123,   163,  1860,   882,  1394,   278,  1397,  1294,
     164,   165,  1221,  1745,   906,  2106,  2017,   975,   416,   301,
     163,  1751,  1864,  2107,  2108,  2076,  2077,   164,   165,  1752,
      62,  1302,   915,  2912,  1315,  2046,   449,  1046,   456,  2189,
    1332,   163,    89,    90,   675,   883,   884,  1564,   164,   165,
    1654,    63,   279,  1398,   676,   280,  1216,  1355,  1575,  1408,
    1868,  1343,  1356,  1357,  1358,  1359,  2923,  1413,  1360,   131,
    1362,  1861,  1363,   498,  1365,   281,  2109,   131,  2078,  1565,
     911,    64,  1406,  1047,   900,  1184,  1185,  1102,  1217,  1865,
    1103,  1104,  2131,   430,   282,  1842,   426,  2097,  2098,   381,
    2132,  2133,   643,    65,    91,   677,  2142,    66,  1295,   433,
     863,   283,   460,  1440,  2143,  2144,   351,   284,   644,  1333,
     976,   131,    67,  1874,    70,    71,   977,  1869,   457,  1583,
    2047,  1878,   525,   526,   527,   528,   529,   530,   531,   532,
     533,   534,  2423,  2117,  2118,   470,   916,   481,  2976,  1426,
    2099,  1430,  1403,  2134,   385,   885,  1431,  1432,  2413,  1433,
    1434,  1436,  1438,  1439,  2508,  2509,   386,  2145,  2984,  1758,
     285,  1186,  1566,  1279,    70,    71,  2991,  1452,  1453,  2994,
    2995,   482,  1187,  1188,  1457,  1458,   886,  1189,   630,  1399,
    1875,  2471,   131,   286,  2573,  1882,  2119,   387,  1879,  1766,
    2048,  1655,  1656,   484,   352,  1464,  1465,  1466,  1467,  1468,
    2032,  1470,  2484,  1472,  1474,   353,  1010,  2510,  1334,  1280,
    1190,  1886,  2494,   486,  2582,  2497,  1890,  2110,  2111,  2079,
    2080,  1567,  2504,  2517,  2518,   417,   511,  1489,  1490,  1491,
    1409,  1493,   498,  1495,  1979,  1496,  2326,  2541,  1414,   760,
    2544,   524,  1862,  2601,  1042,   535,    70,    71,  2552,   434,
    1569,  2555,  1883,    70,    71,   793,   794,  1499,  2049,  1501,
    1866,  2659,  2660,  2661,  2662,  2663,  2664,  2665,  2666,  2667,
     631,  1011,  1504,   388,  1759,   536,  2519,  1657,  1887,   498,
    1512,   537,  1500,  1891,  1767,  1514,  1279,   850,  1658,  1659,
     620,  2100,  2101,  1660,  2135,  2136,  1105,  1106,  1870,   287,
     560,    68,  1527,  2112,  3085,  2081,  1531,   632,  2146,  2147,
    2526,  2527,  1107,   186,  2113,  2114,  2082,  2083,   389,  2115,
    1574,  1576,  1579,  1896,   593,  3096,  1661,   104,  1584,   288,
     289,  1904,  1280,  1590,   919,   922,   925,  2120,  2121,   935,
    1760,   562,   290,   619,  1908,  2033,   291,   638,  1593,    70,
      71,  1644,  2116,  2034,  2084,  1043,  1306,  1108,  2511,  2512,
    3100,  1876,   655,  2528,  1109,  1281,   621,  1603,   657,  1880,
      70,    71,    93,  2668,  1674,    70,    71,  2102,  1473,  3117,
    2137,   971,  1282,  1283,   658,   105,    70,    71,  2103,  2104,
    1897,  2138,  2139,  1110,  2148,   106,  2140,   390,  1905,   660,
    1570,   680,   107,    70,    71,  2149,  2150,   391,  1836,   564,
    2151,  1909,    70,    71,  2193,  3158,  3159,  1111,  3161,  1837,
    3163,  3164,  1768,  2122,  3166,   686,  2105,  2520,  2521,  2141,
     392,  1942,   687,  1884,  2123,  2124,  1112,  2194,   689,   393,
     269,  1272,  1641,  2152,  2513,  1044,   708,  2898,   565,  1650,
    2195,   714,  1749,  1113,  1675,  2514,  2515,   566,   394,  1888,
    1114,  2297,   719,  2196,  1892,  1571,    70,    71,  1115,  1273,
    2301,   270,  2125,  1776,   723,  1853,  1854,  2197,  2198,  1008,
    1009,  1279,   724,  1783,  1284,  1285,  3194,  2650,  1281,    70,
      71,  3106,  1572,  2516,   108,   728,    94,   968,    70,  1435,
    1813,   757,  1814,    70,    71,  1282,  1283,  1815,  1816,  1817,
     960,    95,   761,  2522,  2529,  2530,  1578,  1823,    70,    71,
    1824,  1998,  1826,   758,  2523,  2524,   767,  1280,   769,  3200,
    1116,   783,   321,  1443,  1444,  3227,  3204,    70,    71,  1828,
      96,  1829,  1676,  1677,    97,  1456,   791,   109,   792,  1833,
    1834,  1689,   797,   322,  1117,   323,   271,  1678,   505,  1118,
     832,  1119,  2525,   695,  1840,  1841,  1446,  1447,   498,  1843,
    1844,  1898,   844,   272,    93,   858,  1846,  3006,  1847,  1906,
    1690,  1849,   865,  1850,   110,   866,  2697,    70,  1526,  1120,
    1121,   868,  1910,   872,  3241,   874,  3242,  1930,  1122,  3026,
    2531,  1999,   908,  3030,  1679,   880,    98,  1284,  1285,  3035,
    2716,  2532,  2533,  2758,  1821,  1822,  1691,   111,  1046,  1274,
    1123,  2850,  2767,   888,  1692,  1855,  1856,  2866,   913,  1921,
    1693,  2776,  2871,   937,  1922,  2235,  2236,   506,  1923,   945,
    1924,  1925,  2199,   273,   958,  1928,  3023,  3024,   696,  2534,
      99,   965,  1694,  2200,  2201,  2202,  2203,  1857,   966,   100,
     101,  1934,   980,  1937,  1047,  1939,  1940,  1941,  1943,  1156,
     981,  1945,  1946,   984,  1948,  1949,  1695,  1951,   985,  1953,
    1124,   986,  1474,  1281,  1275,   993,  1936,  1164,   995,  2000,
    2001,   324,   274,   697,  1696,  1966,  1015,  1016,  2408,   998,
    1282,  1283,  1972,   275,  2002,   999,  1973,  1974,  1975,  1000,
    1303,  1276,  1001,    95,  1002,   647,  1003,   498,  1980,   602,
    1006,  1983,  1617,  1618,  3098,  3099,   495,   497,  3102,  1993,
    3104,  1994,  1697,  1032,  1996,   603,   507,  1033,   648,   698,
    1037,  1041,    96,  3115,  3116,  1050,  2409,  1985,  2204,  3121,
    3122,  2003,  3123,  1052,  3000,   649,  3126,  3003,   325,  3005,
     604,  3127,  3128,  1059,  1062,  2005,  1061,  1318,  1075,  1094,
     515,  1080,  1346,  1091,  1085,  3018,  3019,  1698,  2836,    76,
     605,  2054,  1092,  2055,  1095,    77,  2056,  2057,  1100,  2058,
    1127,  2059,  1128,  1699,  1129,  3037,   538,  2061,  1131,  1133,
     606,  2062,  1284,  1285,   607,  1139,  1700,  1142,    98,   326,
    2068,    70,    71,  2182,  1681,  1682,  1153,   539,  1144,  1148,
     327,  2888,  3168,    70,    71,  3169,  1154,  1155,  2892,  1157,
    3172,  1158,    78,  1727,   540,  1162,   608,   609,  1701,    70,
      71,  1159,  3176,  1165,  1205,  3179,   856,   541,  1175,  3180,
     516,  3004,    99,  1702,  1176,  1703,  1704,    70,    71,  2177,
      79,   100,   101,   846,  1177,  1728,  1178,  3017,  1729,   542,
    1179,  1730,  3022,   543,   650,   517,   518,  1191,  1203,   875,
    1206,  1428,  1213,  1214,   519,  1219,  1271,  1220,   544,  1718,
    1278,  1287,  2178,  2179,  2181,  1289,  1705,  1297,  2922,   610,
    2924,  1731,  2925,  1298,  1352,  2926,  1353,  2927,   520,  1354,
     611,   959,  1366,  1368,  2191,    80,  2176,  1379,   521,  2207,
    1381,  1719,  1380,  1382,  1720,  3222,  1383,    70,    71,  3225,
    1681,  1682,  1732,    70,    71,  1733,  1384,   545,   495,   496,
     497,   651,   847,  1385,  1386,  2238,  2240,  1387,  1388,  3236,
    1389,  1390,  1481,  1411,  1260,  1416,  2247,  1721,   876,  1417,
      81,  2260,   890,  3243,  1418,  1421,  3244,  3245,  2266,  1419,
    1261,    70,    71,  2180,   729,  1420,  1422,   730,  1423,  1262,
     612,   613,  1424,  2272,  1425,  2608,  1441,  1442,  1722,  2275,
    1263,  1723,   652,  2277,  1445,  2280,  2281,   731,  2283,  2285,
    2286,  1448,  2289,   653,  1454,  2292,  2293,  2294,  1455,  2296,
    2298,  2299,  2300,  2302,  2305,  2307,  2308,    70,    71,  2239,
    2310,  2311,  2312,  2313,  1459,   891,  1264,  1462,  1463,   892,
    2319,  2320,  1469,   732,  2322,  2323,  2324,  1471,  1476,   733,
    2327,  2328,  1477,  1480,  1482,  2653,  1483,  1517,  1485,  1487,
    1265,  1497,  1498,  2331,  2332,  1502,  2333,  2334,  1518,   614,
      70,    71,  2212,  1681,  1682,  3044,  1519,  1521,  1523,   893,
     894,  1524,  1522,  1734,   895,    70,    71,  2241,  1681,  1682,
    1525,   342,  1529,  1568,  1063,  1580,  1582,  1586,  1591,  1530,
    1594,  1068,   734,  1596,  1069,  1597,  1600,  1620,  1601,  1070,
    1604,  1605,  1606,  1072,  1612,  2674,  1266,  1613,  1735,  1621,
    1614,  1615,  1619,  1622,  1623,   896,  1624,  1630,  1631,  1685,
    1633,  1634,  1688,  1636,  1638,  1646,  1648,  1662,  2372,  1724,
    2373,  2374,  1663,  1686,  1664,  2375,  1665,  1668,  1672,  1736,
    2377,  2380,  1669,  2382,  2383,  2384,  1670,  2385,  2386,  1671,
    2388,  1267,  2389,  2390,  1708,  2392,  2393,  1726,  2395,  1741,
    2397,  1474,  1742,  1762,  1725,  2379,  1687,  1737,  3199,  1707,
    1717,   512,  1740,  2406,   897,  1738,   740,   741,   742,   898,
    1268,  2411,  1757,  1761,  1739,  1763,  2416,  2417,  1147,  1769,
    1772,  1770,  2419,  1771,  1778,  1779,  1781,  1782,  1812,  1848,
    1820,  2422,  1831,   743,  1832,  1838,   899,  1839,  1845,  1851,
     900,  1852,  1933,  1873,  1894,  1895,   744,  1319,  1900,  -532,
    1901,  1780,  1902,   901,  1903,  1320,  1912,  1269,  1913,  1270,
    1914,   735,   745,  1321,  1915,  1916,  1917,  1944,  2451,  1931,
    1932,  2436,  1938,   580,  1947,   587,   590,  1950,   595,   599,
    1952,  1322,  1955,  2442,  1956,  1960,  1965,  2447,  1323,  1967,
    1968,   736,   737,  1969,  2461,  2462,   746,  1981,  1995,  2464,
    1986,  1997,  2006,  2007,   738,  2466,   747,  2035,   739,  1827,
    2031,   684,  2008,  2012,  2023,  1324,  2024,  2044,  2051,  2045,
    2060,  2066,  2067,  1835,  2072,  2092,  1325,  2095,   748,  2126,
     700,   706,  2128,  2130,  2154,  2153,   713,   749,  2155,  2156,
     718,  2160,  2161,  2223,  2163,  2164,  2165,  2168,  2224,  2172,
    2173,  2190,  2206,  2211,  2225,  2226,  2214,   750,  2834,  2835,
    2227,  2228,  2838,  2839,  2215,  2220,  2842,  2843,  2230,  2231,
    2232,  1326,  2233,  2234,  2237,  2460,  2248,  2258,  2287,  1327,
    2263,  2274,  2276,   751,  2278,  2316,  1361,  2317,  2282,  2290,
    2318,  2291,  2295,  1367,  2329,  2330,  2488,  2335,  2336,  2337,
     841,  2338,  2309,   843,  2339,  2340,  3008,  2341,  2342,  2343,
    2535,  2345,  2346,  2347,   852,  2568,  2569,  2348,  2571,  2349,
    2350,  2546,  2351,  2352,  2353,   752,  2896,  2354,  2355,  2356,
     753,  2357,  1328,  2358,  2359,  2360,   403,   873,  2361,  3009,
    2362,  2363,  2364,  2365,   404,  1329,  2366,   754,  2367,  2368,
     755,  2583,  2584,  2585,  2586,  2587,  2588,  2589,  2590,  2591,
    1961,  1962,  3132,  1330,  2369,  2370,  2371,  2677,  2387,  2391,
    1014,  2394,  2396,  2399,  2400,  2597,  2401,  2599,  2403,  2405,
    2418,  3010,  2424,  2425,  2426,  2427,  2428,  2463, -1254,  2465,
    2468,  2469,  2470,  2472,  2473,  3011,  2474,  2607,   498,  2477,
    3012,  2479,  2480,  2611,  2481,  2485,  2486,  3013,  2487,  2489,
    2490,  2491,  2495,  2496,  2614,  2615,  2616,  2617,  2618,  2619,
    2620,  2621,  2622,  2623,  2498,  2499,  2626,  2627,  2628,  2629,
    2630,  2631,  2632,  2633,  2500,  2635,  2636,  2637,  2501,  2639,
    2640,  1484,  2643,  2505,  2644,  2645,  2646,  2506,  2634,  2507,
    2536,  1488,  2537,  2538,  2542,  3132,  2543,  2553,   498,  2654,
    2545,  2547,  1007,  2548,  2549,  2554,  2638,  2556,  2558,  2559,
    2561,  2562,  2883,  2565,  2572,  2574,  1017,  2578,  2581,  2592,
    2593,  3215,  2594,  2595,  2596,  1025,  2600,  2642,  2988,  2647,
      70,    71,  2648,  2993,  2651,  2652,  2655,  2658,  3146,  2678,
    1505,  1506,  2679,  2684,  2686,  1510,   121,  2688,  1513,  2689,
    2669,  2690,  2670,  2692,  2671,  2693,  2673,  2700,   498,  2675,
    1520,  2676,  2704,  2705,  2706,  2707,  2680,  2681,  2708,  2682,
    2683,  2737,  2685,  2740,  2687,  3032,  2742,  2745,  2748,  2749,
    2751,   979,  2753,  2754,  2755,  2759,  2760,  2695,   123,  2696,
    2761,  2762,  2763,  2699,  2764,  2768,  2701,  2769,  2174,  1066,
    1067,  2770,  2771,  2772,  2773,  2777,  2778,  3015,  2779,  2786,
    2789,  2797,  1071,  2800,  2803,  2804,  2805,  1074,  2808,  2813,
    2817,  2833,  2858,  2874,  2703,  2878,  1086,  2192,  2894,  3014,
    2900,  2901,  2209,  2210,  2902,  2903,  2906,   124,   405,  2908,
    2909,   406,  2910,  2741,  2913,  2915,  3016,  2916,  2917,  3185,
    2918,  2920,  2929,  2931,  2936,  2943,  2952,  2961,  2967,  2971,
    2977,  2243,  2985,  2998,  3186,  3034,  2739,  3045,  3129,  3046,
    3048,  3049,  3050,  3051,  2262,  3052,  3053,  3054,  3055,  3056,
    3058,  3182,  3064,  2267,  2268,  3070,  1395,  3094,  3097,  3103,
    2806,  3107,  3108,     0,  3109,  2273,  1673,  3110,  3111,  3112,
    3114,  3119,     0,  3120,  3136,   126,  3137,  3138,  3139,  3140,
    3141,  3148,  3151,  3162,  3170,  3174,  1149,  1150,  1151,  1152,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,  2811,  3173,
    3177,     0,  3187,  3188,  3195,  3198,     0,  3202,  3209,  3210,
    2818,  2819,  2820,  2821,  2822,  2823,  2824,  2825,  2826,  2827,
    2828,  3190,  3192,  3216,  3224,  3235,  2831,  3228,   131,  3229,
    3231,   498,   498,   132,  3237,   498,   498,  3238,  3239,   498,
     498,  2844,  2845,  2846,  2847,  2848,  2849,  3240,  2851,  2852,
    2853,     0,     0,     0,  2867,  2868,  2869,  2870,     0,  2872,
    2873,     0,  2875,  2876,  2877,     0,  2879,  2880,     0,  2882,
       0,     0,  2886,  2887,     0,     0,     0,     0,     0,     0,
       0,     0,  1317,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2895,     0,     0,   498,
    2897,     0,     0,     0,  2899,     0,     0,     0,     0,  2904,
    2905,     0,  2907,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,  1929,     0,     0,     0,  2932,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1607,  1608,     0,     0,     0,     0,     0,   240,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1964,     0,     0,     0,     0,     0,  1970,     0,     0,     0,
       0,     0,   241,     0,     0,   242,     0,  1976,     0,     0,
    1666,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2979,     0,     0,     0,  2981,     0,   798,   799,     0,     0,
       0,     0,     0,     0,  2982,  2983,     0,     0,     0,     0,
    2987,   498,   800,   243,     0,  2992,   498,     0,     0,     0,
     244,  2997,     0,  1486,  3001,  3002,     0,     0,     0,     0,
       0,   245,   246,     0,  1628,     0,     0,  1492,   247,     0,
       0,     0,     0,     0,     0,     0,  3020,  3021,     0,     0,
    3025,     0,  3027,  3028,  3029,     0,  3031,   801,   498,  3033,
       0,     0,     0,  3036,   802,     0,     0,   248,     0,     0,
       0,     0,     0,   803,     0,   804,  3047,     0,  1503,     0,
     805,     0,     0,   806,     0,     0,     0,   249,  3057,   807,
       0,  2854,     0,   808,     0,     0,     0,     0,     0,     0,
     809,     0,     0,  2855,     0,   250,   251,     0,   810,  3072,
    2576,     0,   252,     0,     0,     0,     0,   811,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1319,  2856,     0,     0,     0,   812,   253,     0,  1320,
       0,     0,     0,     0,     0,     0,     0,  1321,     0,     0,
       0,  3084,     0,     0,     0,     0,  3088,     0,  3090,     0,
     813,  2602,     0,     0,  3093,  1322,     0,     0,     0,  1599,
       0,     0,  1323,     0,     0,  2857,     0,     0,   814,  3101,
       0,     0,     0,     0,   254,     0,     0,     0,     0,     0,
       0,   815,   816,     0,     0,     0,     0,     0,  3118,  1324,
       0,     0,     0,     0,     0,  3124,     0,     0,     0,  3157,
    1325,     0,     0,     0,     0,     0,   817,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2261,
       0,     0,     0,     0,  3145,     0,     0,   120,     0,     0,
     255,     0,     0,     0,     0,   818,     0,     0,     0,     0,
       0,     0,   121,     0,   256,  1326,     0,     0,     0,   819,
       0,   820,  1755,  1327,     0,  3160,     0,     0,     0,     0,
    3165,     0,     0,  3167,     0,     0,   122,   821,     0,     0,
    3171,     0,   822,     0,     0,     0,     0,   257,     0,     0,
     823,  3175,     0,  2315,   123,     0,  3178,   598,   824,  2321,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   121,     0,     0,     0,  1328,     0,  1819,     0,
     825,     0,  3189,  3191,     0,     0,     0,     0,  1825,  1329,
       0,     0,     0,     0,     0,     0,   826,   827,     0,   828,
       0,     0,     0,   124,     0,     0,     0,  1330,  3201,     0,
       0,     0,  3203,     0,   123,  3205,     0,     0,     0,  2858,
       0,  2859,     0,     0,  3197,   125,  3211,  3212,  3213,  3214,
       0,     0,     0,     0,     0,  2069,  2070,  2071,  3223,     0,
     829,     0,  3226,  2073,  2074,  2075,     0,     0,     0,  3230,
    2085,  3232,     0,  2087,  2088,  2089,     0,  3218,  2090,  2091,
    3221,  2093,  2094,   124,  2376,     0,     0,     0,     0,  2381,
       0,   126,     0,     0,     0,     0,     0,     0,     0,  2860,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2166,  2167,  2404,     0,  2169,
    2170,     0,  2171,     0,     0,  2407,     0,     0,     0,     0,
    1927,  2414,     0,     0,   127,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   128,     0,     0,     0,  1935,     0,
    2086,   126,     0,   129,   130,     0,     0,     0,  2431,     0,
       0,     0,  2096,     0,   131,  2438,     0,     0,     0,   132,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1963,
       0,     0,     0,     0,  2157,  2158,     0,  1971,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1977,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1992,     0,     0,     0,     0,
       0,     0,     0,     0,   131,     0,     0,  2004,     0,   132,
       0,     0,  2011,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2889,     0,
       0,     0,     0,     0,     0,   133,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
       0,     0,     0,     0,     0,   163,     0,     0,     0,     0,
       0,     0,   164,   165,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2566,
       0,     0,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
       0,     0,  2580,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2175,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    70,    71,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2604,
    2605,     0,     0,     0,   121,     0,     0,  2208,     0,     0,
       0,     0,     0,  2606,     0,     0,     0,     0,  2609,  2610,
       0,     0,     0,     0,  2612,  2613,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2245,
       0,     0,  2246,     0,     0,     0,     0,  2259,     0,     0,
       0,     0,     0,  2264,  2265,     0,     0,     0,     0,     0,
       0,     0,  2270,     0,     0,     0,     0,     0,  2649,  2271,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2656,
       0,     0,     0,     0,     0,     0,  3038,     0,     0,     0,
    3043,     0,     0,     0,     0,   124,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2314,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2467,  2325,     0,     0,     0,     0,     0,
       0,     0,  2672,     0,     0,     0,     0,  2475,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2478,     0,     0,
       0,     0,     0,     0,     0,     0,  2691,     0,     0,     0,
       0,     0,     0,   126,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2710,     0,     0,     0,     0,  2714,
       0,     0,     0,     0,     0,  2719,     0,     0,     0,     0,
    2723,     0,     0,     0,  2726,     0,  2728,     0,  2730,     0,
       0,  2733,     0,  2735,  3113,     0,     0,     0,     0,  2563,
       0,  2476,     0,  2564,     0,     0,     0,  2378,     0,  2482,
    2483,     0,     0,     0,     0,     0,     0,     0,     0,  2492,
    2493,   132,  3135,     0,     0,     0,     0,     0,     0,  2502,
    2503,     0,     0,     0,  2402,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2539,  2540,     0,     0,     0,     0,
       0,     0,  2415,     0,     0,  2550,  2551,     0,     0,     0,
       0,     0,  2557,     0,     0,  2420,     0,  2421,     0,     0,
       0,     0,  2560,     0,     0,     0,     0,  2430,     0,     0,
    2432,  2433,  2434,  2435,  2437,     0,  2439,     0,     0,     0,
    2440,     0,     0,     0,     0,  2441,  2443,  2444,  2445,  2446,
    2448,     0,     0,  2449,  2450,     0,     0,     0,     0,  2452,
    2453,  2454,  2455,     0,     0,  2456,  2457,     0,     0,     0,
       0,     0,  2458,  2459,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  3208,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2881,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    70,    71,     0,
       0,  2893,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   121,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   337,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2914,     0,     0,     0,
       0,     0,     0,  2921,     0,   123,     0,     0,     0,     0,
       0,  2567,     0,     0,  2570,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2575,     0,     0,     0,     0,
    2928,     0,  2930,     0,     0,     0,     0,     0,     0,     0,
       0,  2579,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   124,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2743,     0,     0,
       0,     0,     0,  2598,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2974,     0,     0,     0,     0,     0,  2978,     0,     0,     0,
    2980,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   126,     0,     0,     0,  2986,  2781,  2782,  2783,
    2784,  2785,     0,  2787,  2788,     0,     0,  2641,  2792,  2793,
    2794,  2795,  2796,     0,  2798,  2799,  2744,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2746,  2747,     0,     0,
    2657,     0,     0,     0,     0,   338,     0,  2750,     0,     0,
       0,     0,     0,     0,     0,     0,  2752,     0,     0,     0,
    2756,  2757,     0,     0,  3041,  3042,     0,     0,     0,  2765,
    2766,     0,     0,     0,     0,   131,     0,     0,  2774,  2775,
     132,     0,     0,     0,  2780,     0,     0,     0,     0,     0,
       0,   339,     0,     0,  2790,  2791,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2801,     0,  2802,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2694,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2702,     0,     0,     0,
       0,     0,     0,  2709,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   340,     0,  2727,     0,     0,     0,     0,
       0,     0,     0,     0,  2736,     0,     0,     0,  2738,     0,
       0,  3105,     0,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,     0,     0,     0,  1991,  2933,     0,     0,     0,     0,
       0,     0,     0,     0,  2938,  2939,  2940,  2941,  2942,   121,
    2944,  2945,     0,  2947,  2948,  2949,  2950,  2951,     0,  2953,
    2954,     0,  2956,  2957,  2958,  2959,  2960,     0,  2962,  2963,
       0,  2965,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2968,  2969,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2972,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2809,     0,     0,  2812,     0,     0,     0,
       0,     0,     0,     0,  2934,  2816,     0,  2935,     0,  3181,
    2937,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2946,  2829,     0,     0,  2832,     0,     0,     0,     0,  2955,
     124,  2837,     0,  3193,  2840,  2841,     0,     0,  2964,     0,
       0,     0,     0,     0,     0,  2966,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2970,     0,     0,     0,
       0,     0,  2973,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2890,  2891,     0,     0,     0,
    3219,     0,     0,     0,     0,     0,     0,     0,  1786,     0,
       0,     0,     0,  1787,     0,     0,     0,     0,   126,     0,
       0,  3233,     0,     0,  3234,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1788,
    1789,     0,  1790,  1791,     0,     0,     0,  3075,     0,     0,
       0,  2919,     0,     0,  1792,     0,  3077,     0,     0,     0,
       0,     0,     0,     0,     0,  3079,     0,  3080,  1793,  1794,
       0,  3082,   121,     0,     0,     0,  1795,     0,     0,  1796,
       0,     0,     0,     0,     0,     0,   568,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   132,  1797,     0,     0,
       0,     0,     0,     0,     0,     0,  1798,  1799,     0,     0,
    1800,     0,     0,     0,     0,  3073,     0,     0,     0,     0,
       0,     0,  3074,     0,   569,   570,     0,     0,     0,     0,
     571,  3076,     0,     0,     0,     0,     0,     0,   121,     0,
    3078,     0,  1801,     0,     0,     0,  3081,     0,     0,     0,
    3083,     0,  2975,   572,   573,     0,     0,     0,     0,     0,
       0,     0,     0,   124,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  3152,     0,  3153,     0,  3154,
     123,     0,  3155,  1802,  3156,     0,  2996,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  3007,     0,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,     0,     0,   124,
     701,   126,   121,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   574,     0,  1803,     0,
       0,     0,     0,     0,  1804,     0,     0,     0,     0,     0,
    3063,     0,     0,     0,  3069,     0,   575,     0,     0,     0,
       0,     0,  1805,     0,     0,     0,   702,     0,     0,     0,
       0,     0,     0,  1806,     0,     0,     0,     0,     0,     0,
       0,   576,     0,     0,     0,     0,     0,   126,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   132,
       0,     0,     0,     0,     0,  1807,  1808,     0,     0,     0,
       0,  3086,  3087,   124,  3089,     0,     0,     0,     0,  3091,
    3092,     0,     0,     0,     0,     0,  3095,     0,     0,   703,
    1809,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   577,     0,     0,     0,     0,
     131,     0,     0,  3125,     0,   132,   578,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1810,     0,     0,
       0,   126,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  3149,     0,
       0,   704,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     589,   579,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   132,
       0,     0,     0,     0,     0,     0,     0,     0,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,  3196,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  3206,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  3217,
       0,     0,  3220,     0,     0,     0,   705,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1223,  1224,  1225,
       0,     0,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
    1226,  1227,     0,     0,  1228,     0,     0,  1229,     0,     0,
       0,     0,     0,     0,     0,  1230,     0,     0,     0,  1231,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1232,
    1233,     0,     0,     0,     0,     0,     0,  1234,  1235,   121,
       0,  1532,  1533,  1534,     0,     0,     0,     0,  1236,     0,
       0,     0,     0,     0,     0,  1237,     0,     0,     0,     0,
       0,     0,     0,  1238,     0,     0,     0,  1239,  1240,     0,
       0,  1241,     0,     0,  1535,  1536,     0,     0,  1537,     0,
       0,   123,     0,     0,     0,  1538,     0,     0,     0,  1539,
       0,  1242,     0,  1540,   121,     0,     0,     0,     0,     0,
       0,     0,     0,  1541,  1542,     0,     0,     0,     0,     0,
       0,  1543,     0,     0,     0,  1243,     0,     0,     0,     0,
       0,     0,  1544,     0,     0,     0,   121,     0,     0,     0,
     124,     0,     0,     0,     0,     0,     0,     0,     0,   585,
       0,  1545,  1546,     0,  1244,  1547,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1548,     0,     0,  1598,     0,
       0,  1245,     0,   121,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   124,     0,     0,     0,  1549,
       0,     0,     0,     0,     0,     0,     0,     0,   126,     0,
       0,     0,     0,     0,     0,     0,     0,  1246,     0,  1247,
       0,     0,     0,     0,     0,  1248,  1249,   124,  1550,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1551,     0,
       0,     0,  1250,  1251,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1252,  1253,     0,     0,     0,     0,
       0,     0,     0,   126,     0,     0,  2429,   121,     0,     0,
       0,     0,     0,     0,   124,     0,     0,     0,     0,     0,
       0,   131,     0,     0,     0,  1254,   132,  1255,     0,     0,
       0,  1552,     0,  1553,     0,   126,     0,     0,     0,  1554,
    1555,     0,  1256,     0,  1257,     0,     0,     0,     0,     0,
       0,  1258,     0,     0,     0,     0,     0,  1556,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1557,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   132,   126,     0,     0,  1259,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   124,  1558,
       0,  1559,     0,     0,     0,     0,     0,     0,     0,     0,
    1196,     0,     0,   132,  1560,  1197,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1561,     0,     0,     0,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,     0,   586,  1562,
     132,     0,     0,     0,     0,     0,   126,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,     0,     0,     0,     0,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   132,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,     1,     0,     0,     2,     0,
       0,     3,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     4,     0,     0,     0,     0,
       0,     5,     6,     0,     0,     0,     7,     8,     9,     0,
       0,     0,     0,     0,     0,     0,    10,     0,     0,     0,
       0,     0,     0,    11,     0,    12,    13,     0,     0,     0,
       0,     0,     0,     0,     0,    14,    15,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    16,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    17,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    18,     0,     0,     0,     0,     0,
      19,     0,     0,     0,    20,     0,     0,     0,    21,    22,
       0,     0,     0,     0,    23,    24,     0,     0,    25,     0,
       0,     0,     0,     0,    26,     0,     0,     0,     0,     0,
      27,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    28,     0,     0,     0,    29,    30,    31,     0,     0,
      32,    33,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    34,     0,     0,     0,    35,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    36,
       0,    37,    38,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    39,     0,    40,     0,     0,     0,
       0,     0,     0,    41,     0,     0,     0,    42,     0,   192,
       0,    43,   193,    44,    45,   194,    46,     0,     0,     0,
       0,    47,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   195,    48,     0,     0,
     196,   197,   198,    49,     0,     0,     0,     0,     0,     0,
     199,     0,   200,     0,     0,     0,     0,   201,     0,   202,
     203,   204,    50,     0,    51,     0,     0,   205,     0,   206,
       0,     0,     0,     0,     0,     0,     0,    52,     0,    53,
       0,     0,     0,     0,     0,     0,    54,     0,     0,    55,
      56,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   207,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      57,     0,     0,     0,   208,     0,     0,     0,    58,     0,
       0,     0,     0,   209,     0,   210,   211,     0,   212,   213,
       0,     0,   214,     0,     0,     0,   215,     0,   216,  1642,
       0,     0,     0,     0,   217,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   218,   219,     0,     0,     0,   220,
       0,     0,     0,     0,     0,     0,     0,   221,     0,     0,
       0,   222,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   223,     0,   224,     0,     0,     0,     0,
       0,     0,   225,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   226,     0,
     227,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   228,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   229,     0,   230,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   231,     0,
       0,     0,     0,     0,     0,     0,   232,     0,     0,     0,
       0,     0,   233,     0,   234,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,  1643,     0,     0,     0,     0,     0,     0,
       0,     0,   235
};

static const yytype_int16 yycheck[] =
{
       3,    56,   820,  1730,   558,  1080,  1475,     4,    11,   321,
     815,   816,  1973,    16,  1975,  1224,  1744,    16,     5,     4,
       3,     4,     5,     4,     5,     5,   512,    16,     4,    13,
    1068,  1069,  1070,     5,    37,     4,   522,     5,     5,  1767,
       5,    34,    18,    46,     5,     4,     4,     4,     3,     4,
      50,     4,    55,     4,     0,    58,     3,     4,    61,    37,
      26,     4,    65,    64,     5,    68,    16,   106,     3,     4,
      73,    74,    66,    13,    77,    27,  1186,    80,    81,  1189,
       4,    84,    66,    38,    87,    88,     3,     4,    91,   247,
      47,    94,    12,    50,    97,    43,    27,    20,  1382,    18,
    1210,     4,  1386,    38,    34,     3,     4,    21,   149,  1147,
     113,   114,   115,   116,   117,   118,    43,   131,     4,    72,
      21,    38,    53,     3,     4,    56,    43,    84,     3,     4,
     145,   134,  1416,  1417,  1418,    92,   108,    68,   113,    27,
       3,     4,    15,    21,   116,     3,     4,  3131,   192,   127,
     147,   132,    21,     3,     4,     4,   132,   123,     5,    24,
      25,    21,    93,    43,    72,    16,   169,    34,   102,    95,
     122,    28,    28,   139,   122,   132,   260,   192,  2931,   132,
     111,     0,   220,    95,    64,     4,    72,   328,   122,   163,
       3,     4,   195,   148,   352,   122,   280,   200,     4,  3183,
       4,     5,   187,   160,   172,   122,    35,   181,    47,     3,
       4,    16,   226,   148,     3,     4,   260,   137,     3,     4,
      15,    70,   200,   155,   202,   156,   204,   205,    66,     3,
       4,   148,     4,   217,   122,     5,   139,   215,   178,   214,
     192,   106,   122,   284,    16,   260,   132,     4,     5,   287,
     231,   220,   178,   242,   232,   231,    95,   233,    66,   240,
     241,   300,   219,     5,   240,   241,   178,   226,    66,   201,
     210,   237,   275,   221,   231,   234,   235,   220,   231,   226,
     214,   211,    66,   240,   241,     4,   289,   240,   241,   255,
      21,   335,   347,    89,   221,   252,   216,   254,   155,   155,
     188,  1119,   107,   261,   221,  3058,   309,   310,   260,   310,
     279,   326,   312,    66,   233,    72,   275,  3070,   287,   303,
     285,     5,   325,   291,   327,   172,   283,   133,   132,   180,
     314,   324,   326,   236,   337,   338,    61,   340,   341,    96,
     343,   221,   339,   310,   211,   231,   322,   270,   298,   310,
     353,   340,   225,    72,   240,   241,   304,   298,   221,   353,
     274,   342,   340,   366,   367,   352,   342,   348,   352,   352,
     856,     4,   352,   274,   359,   132,   348,   304,   359,   330,
     219,   339,   328,   351,   339,   342,   274,   390,   329,   342,
     393,   394,   339,   396,   324,     4,   274,   400,   401,   398,
     157,   214,   359,   322,   339,   274,   330,   220,   411,   412,
     260,   392,     4,   132,   274,   418,   392,   729,   399,   400,
     423,   424,   339,   399,   400,    13,    14,   231,   431,   214,
     396,  1249,   435,     4,   393,   392,   240,   241,   326,   392,
     214,   339,   399,   400,   291,   129,   399,   400,   168,  1267,
       5,   454,   455,   333,   267,    21,   342,   324,   461,   462,
     463,   464,   465,   466,   339,   468,   260,  1505,   471,   472,
     401,   260,     5,    62,   231,  1513,   339,  2205,    66,  1688,
      72,   339,   295,   240,   241,  1954,   343,   343,   326,   173,
     174,   494,   262,    26,     4,   498,    29,    27,  1303,   132,
     503,   504,   505,   506,   507,   508,   392,   510,  1717,   512,
     513,   514,   231,   399,   400,   353,  2244,    16,   326,   522,
     523,   240,   241,   132,     3,     4,   251,   323,   326,     4,
    1335,  1740,   232,   511,  2415,   219,    11,   350,   342,  1025,
     132,  1194,   326,   274,   266,   353,    66,  1657,  1201,   186,
    1660,  2432,  2433,  2434,    72,   353,  2437,   146,  2439,  2440,
      27,   132,  2443,  2444,  2445,   350,   220,  2448,  2449,   353,
      42,    39,  2453,   326,  2455,  2456,   350,  2458,   298,   582,
     583,   394,   395,    51,   150,   342,  1072,   116,   392,  1873,
     123,   348,   122,    55,    49,   399,   400,   600,   231,   283,
     353,     3,     4,     3,     4,     4,   139,   240,   241,   394,
     395,     5,    66,   133,    82,   326,    66,    72,   173,   174,
     394,   395,   231,   342,     3,     4,   310,   682,   606,   217,
     218,   240,   241,   636,    89,   392,    95,   136,   225,   231,
     397,   295,   399,   400,    43,    32,   108,   180,   240,   241,
     116,     4,     5,     5,     4,   122,   156,   119,   188,    61,
     231,    13,    14,   173,   174,     4,    59,    61,   305,   240,
     241,    95,   261,   392,     3,     4,   679,    71,     5,   133,
     399,   400,   660,   133,    66,    91,  2567,   276,    96,  2570,
     152,   391,   191,   280,  2575,   224,     4,   330,  2579,   399,
     168,   401,   108,    95,   237,    98,    33,    86,   274,   342,
      43,    61,   222,   322,    66,   303,   103,  2598,    66,   178,
     775,    66,   255,   122,   727,     4,   314,   315,   283,  2690,
      36,    70,     4,   342,   737,   190,   323,  1555,     3,     4,
     266,   307,   797,   242,   274,   213,   218,   226,  1566,     0,
     342,   133,    14,    15,   178,    72,   285,   309,   224,   392,
      22,   350,     5,    11,   352,   158,   399,   400,    30,     5,
       4,   342,    66,   283,   173,   174,    38,    13,    14,    95,
      66,    78,    61,   392,    66,   133,   178,     4,   133,   122,
     399,   400,   795,   260,   314,     5,   326,   184,    60,   332,
     392,   301,    66,    13,    14,    13,    14,   399,   400,   309,
      58,   814,   118,  2694,   817,    27,    78,   155,   197,   285,
      43,   392,   221,   222,   292,   173,   174,   144,   399,   400,
      66,    79,    49,   178,   302,    52,   178,   840,   238,   133,
      66,   340,   845,   846,   847,   848,  2727,   133,   851,   251,
     853,   133,   855,   856,   857,    72,    66,   251,    66,   176,
     314,   109,   178,   201,   314,   217,   218,   640,   210,   133,
     643,   644,     5,   138,    91,  1361,     5,    13,    14,   341,
      13,    14,   337,   131,   283,   353,     5,   135,   221,   393,
     283,   108,     5,   948,    13,    14,   193,   114,   353,   122,
     287,   251,   150,    66,     3,     4,   293,   133,   287,   238,
     122,    66,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,  1997,    13,    14,     4,   232,     4,  2809,   932,
      66,   934,   314,    66,    39,   283,   939,   940,  1976,   942,
     943,   944,   945,   946,    13,    14,    51,    66,  2829,   145,
     167,   303,   269,    69,     3,     4,  2837,   960,   961,  2840,
    2841,    33,   314,   315,   967,   968,   314,   319,     4,   314,
     133,  2081,   251,   190,  2183,    66,    66,    82,   133,    27,
     192,   217,   218,     5,   281,   988,   989,   990,   991,   992,
     156,   994,  2102,   996,   997,   292,     5,    66,   221,   115,
     352,    66,  2112,     5,  2213,  2115,    66,   217,   218,   217,
     218,   328,  2122,    13,    14,    64,   221,  1020,  1021,  1022,
     314,  1024,  1025,  1026,  1510,  1028,  1831,  2137,   314,   291,
    2140,     4,   314,  2242,    86,   129,     3,     4,  2148,   138,
      32,  2151,   133,     3,     4,   307,   308,  1050,   260,  1052,
     314,  2335,  2336,  2337,  2338,  2339,  2340,  2341,  2342,  2343,
      96,    70,  1065,   168,   260,     5,    66,   303,   133,  1072,
    1073,    72,  1050,   133,   122,  1078,    69,   339,   314,   315,
       5,   217,   218,   319,   217,   218,     4,     5,   314,   306,
     328,   339,  1095,   303,  2975,   303,  1099,   133,   217,   218,
      13,    14,    20,    70,   314,   315,   314,   315,   213,   319,
    1113,  1114,  1115,    66,    35,  2996,   352,    33,  1121,   336,
     337,    66,   115,  1126,   386,   387,   388,   217,   218,   391,
     326,   193,   349,    72,    66,   301,   353,    15,  1141,     3,
       4,  1196,   352,   309,   352,   197,   139,    65,   217,   218,
    3001,   314,   326,    66,    72,   271,    97,  1160,    72,   314,
       3,     4,    30,  2372,    90,     3,     4,   303,    32,  3020,
     303,   433,   288,   289,   267,    91,     3,     4,   314,   315,
     133,   314,   315,   101,   303,   101,   319,   292,   133,   327,
     182,    97,   108,     3,     4,   314,   315,   302,     5,   154,
     319,   133,     3,     4,     4,  3086,  3087,   125,  3089,    16,
    3091,  3092,   260,   303,  3095,    72,   352,   217,   218,   352,
     325,    64,    80,   314,   314,   315,   144,    27,    33,   334,
      96,     4,  1195,   352,   303,   287,     5,    64,   193,  1202,
      40,     4,  1245,   161,   170,   314,   315,   202,   353,   314,
     168,    61,     4,    53,   314,   247,     3,     4,   176,    32,
      61,   127,   352,  1266,     5,    45,    46,    67,    68,     4,
       5,    69,     4,  1276,   390,   391,  3157,  2315,   271,     3,
       4,  3008,   274,   352,   200,     4,   154,    11,     3,     4,
    1293,     5,  1295,     3,     4,   288,   289,  1300,  1301,  1302,
     138,   169,     5,   303,   217,   218,    16,  1310,     3,     4,
    1313,    90,  1315,     4,   314,   315,     5,   115,     5,  3170,
     238,     5,    49,     4,     5,  3206,  3177,     3,     4,  1332,
     198,  1334,   258,   259,   202,    11,     4,   253,     5,  1342,
    1343,    43,     5,    70,   262,    72,   212,   273,    43,   267,
       5,   269,   352,   168,  1357,  1358,     4,     5,  1361,  1362,
    1363,   314,     5,   229,    30,     4,  1369,  2852,  1371,   314,
      72,  1374,     4,  1376,   290,     4,  2414,     3,     4,   297,
     298,     4,   314,     5,  3235,     4,  3237,  1442,   306,  2874,
     303,   170,     5,  2878,   320,   106,   264,   390,   391,  2884,
    2438,   314,   315,  2513,     4,     5,   108,   323,   155,   182,
     328,  2620,  2522,   133,   116,   195,   196,  2626,     4,  1422,
     122,  2531,  2631,     4,  1427,     4,     5,   122,  1431,     4,
    1433,  1434,   232,   299,     4,  1438,     4,     5,   253,   352,
     308,     4,   144,   243,   244,   245,   246,   227,     5,   317,
     318,  1454,     4,  1456,   201,  1458,  1459,  1460,  1461,   721,
     226,  1464,  1465,     4,  1467,  1468,   168,  1470,     4,  1472,
     388,     4,  1475,   271,   247,     4,  1454,   739,     4,   258,
     259,   208,   348,   298,   186,  1488,   500,   501,   154,     4,
     288,   289,  1495,   359,   273,     4,  1499,  1500,  1501,     4,
     298,   274,     4,   169,     4,    49,     4,  1510,  1511,    48,
       5,  1514,  1176,  1177,  2999,  3000,     8,    10,  3003,  1522,
    3005,  1524,   224,     5,  1527,    64,   221,   309,    72,   344,
     393,   193,   198,  3018,  3019,     4,   202,  1515,   338,  3024,
    3025,   320,  3027,     4,  2846,    89,  3031,  2849,   275,  2851,
      89,  3036,  3037,   202,     4,  1533,   193,   819,     4,     4,
      37,   225,   824,     5,   225,  2867,  2868,   269,  2606,   214,
     109,  1574,     5,  1576,   225,   220,  1579,  1580,     4,  1582,
     215,  1584,   215,   285,    72,  2887,    58,  1590,    72,    72,
     129,  1594,   390,   391,   133,   260,   298,     5,   264,   326,
    1603,     3,     4,     5,     6,     7,     4,    79,   261,     5,
     337,  2649,  3097,     3,     4,  3100,     4,     4,  2656,     4,
    3105,     4,   267,    22,    96,     5,   165,   166,   330,     3,
       4,   225,  3117,     4,     4,  3120,   342,   109,    95,  3124,
     117,  2850,   308,   345,    95,   347,   348,     3,     4,     5,
     295,   317,   318,    43,    95,    54,     5,  2866,    57,   131,
       5,    60,  2871,   135,   208,   142,   143,    95,     5,    43,
       4,   933,     5,     5,   151,     5,   320,     4,   150,    22,
       5,   108,  1685,  1686,  1687,     4,   388,     4,  2726,   228,
    2728,    90,  2730,     5,    16,  2733,    16,  2735,   175,     4,
     239,   407,     4,     4,  1707,   350,  1684,     4,   185,  1712,
       5,    54,   106,     5,    57,  3200,    95,     3,     4,  3204,
       6,     7,   121,     3,     4,   124,    95,   199,     8,     9,
      10,   275,   122,    95,     4,  1738,  1739,     5,     5,  3224,
      95,     5,  1004,     4,    72,     5,  1749,    90,   122,     5,
     395,  1754,    66,  3238,     4,     4,  3241,  3242,  1761,     5,
      88,     3,     4,     5,    49,     5,     4,    52,     5,    97,
     309,   310,     5,  1776,     5,  2261,    70,     4,   121,  1782,
     108,   124,   326,  1786,     4,  1788,  1789,    72,  1791,  1792,
    1793,     4,  1795,   337,    11,  1798,  1799,  1800,     5,  1802,
    1803,  1804,  1805,  1806,  1807,  1808,  1809,     3,     4,     5,
    1813,  1814,  1815,  1816,    11,   129,   144,     4,     4,   133,
    1823,  1824,     4,   108,  1827,  1828,  1829,     5,     5,   114,
    1833,  1834,     4,     4,     4,  2321,     4,   187,     5,     4,
     168,     5,     5,  1846,  1847,     4,  1849,  1850,     5,   388,
       3,     4,     5,     6,     7,  2893,     4,   178,     4,   173,
     174,     5,   178,   262,   178,     3,     4,     5,     6,     7,
       4,    37,    41,   320,   580,   297,   297,   330,   322,    41,
       5,   587,   167,     4,   590,     4,     4,   311,     5,   595,
       5,     5,     5,   599,     4,  2381,   224,     4,   297,   311,
       5,     5,     5,     5,     5,   219,     5,     4,     4,   274,
       5,     5,   116,     5,     5,     5,     5,     4,  1921,   262,
    1923,  1924,     4,   274,     5,  1928,     5,     4,    13,   328,
    1933,  1934,     5,  1936,  1937,  1938,     5,  1940,  1941,     5,
    1943,   269,  1945,  1946,     5,  1948,  1949,     4,  1951,     5,
    1953,  1954,   242,   242,   297,  1933,   274,    43,  3167,   274,
     116,   127,   116,  1966,   278,   274,    72,    73,    74,   283,
     298,  1974,    43,   280,   274,     5,  1979,  1980,   684,     4,
     242,     5,  1985,     5,   242,    60,     4,     4,     4,   122,
       5,  1994,     5,    99,     5,     5,   310,     5,     4,   122,
     314,     4,    11,     5,     5,     5,   112,   100,     4,     0,
       5,  1273,     5,   327,     4,   108,     5,   345,     5,   347,
       4,   306,   128,   116,     5,     5,     4,     4,  2031,     5,
       5,  2009,    11,   199,     4,   201,   202,     5,   204,   205,
       5,   134,     5,  2021,     5,     5,     4,  2025,   141,     4,
       4,   336,   337,     4,  2057,  2058,   162,     4,     4,  2062,
       5,     5,   274,   274,   349,  2068,   172,   260,   353,  1331,
     192,   237,   274,   274,   274,   168,   274,     4,   238,   285,
     225,     4,     4,  1345,     4,     4,   179,     4,   194,     5,
     256,   257,     5,     5,     5,   311,   262,   203,     5,     5,
     266,     4,     4,   356,     5,     4,     4,     4,   356,     5,
       5,     5,     5,     5,     4,     4,   274,   223,  2604,  2605,
       4,     4,  2608,  2609,   274,   274,  2612,  2613,     4,     4,
       4,   224,   356,   356,     4,   102,     5,     4,     4,   232,
       5,     5,     5,   249,   260,     5,   852,     4,   260,   260,
       4,   260,   260,   859,     5,     4,   311,     5,     5,     4,
     326,     5,   260,   329,     5,     4,   402,     5,     5,     4,
     311,     5,     5,     4,   340,  2178,  2179,     5,  2181,     5,
       4,   311,     5,     5,     4,   291,  2672,     5,     5,     4,
     296,     5,   285,     5,     4,     4,    15,   363,     4,   402,
       5,     5,     4,     4,    23,   298,     5,   313,     5,     4,
     316,  2214,  2215,  2216,  2217,  2218,  2219,  2220,  2221,  2222,
    1482,  1483,  3040,   316,     5,     5,     4,    11,     5,     4,
     499,     5,     5,     4,     4,  2238,     4,  2240,     4,     4,
       4,   402,     5,     5,     5,     5,     5,     4,   328,     5,
       5,     5,     5,     4,     4,   402,     5,  2260,  2261,     4,
     402,     5,     5,  2266,     5,     4,     4,   402,     5,     5,
       5,     5,     4,     4,  2277,  2278,  2279,  2280,  2281,  2282,
    2283,  2284,  2285,  2286,     5,     5,  2289,  2290,  2291,  2292,
    2293,  2294,  2295,  2296,     5,  2298,  2299,  2300,     5,  2302,
    2303,  1007,  2305,     4,  2307,  2308,  2309,     4,   352,     5,
       5,  1017,     5,     5,     4,  3133,     4,     4,  2321,  2322,
       5,     5,   488,     5,     5,     4,   352,     5,     4,     4,
       4,     4,   352,     5,     5,     5,   502,     5,     5,     4,
       4,  3193,     5,     4,     4,   511,     5,     5,  2834,     4,
       3,     4,     4,  2839,     5,     5,     4,     4,  3057,     5,
    1066,  1067,     5,     5,     4,  1071,    19,     4,  1074,     4,
    2373,     4,  2375,     4,  2377,     4,  2379,     5,  2381,  2382,
    1086,  2384,     5,     5,     5,     5,  2389,  2390,     5,  2392,
    2393,     4,  2395,     5,  2397,  2881,     4,     4,     4,     4,
       4,   439,     5,     5,     5,     4,     4,  2410,    61,  2412,
       5,     5,     5,  2416,     5,     4,  2419,     4,  1680,   585,
     586,     5,     5,     5,     5,     4,     4,  2861,     5,     4,
       4,     4,   598,     4,     4,     4,     4,   603,     4,     4,
       4,     4,   328,     5,  2422,     5,   612,  1709,     4,   402,
       5,     5,  1714,  1715,     4,     4,     4,   110,   277,     4,
       4,   280,     4,  2466,     5,     4,   402,     5,     4,   402,
       5,     5,     5,     4,     4,     4,     4,     4,     4,     4,
       4,  1743,     4,     4,  3133,     5,  2464,     4,  3038,     5,
       5,     4,     4,     4,  1756,     4,     4,     4,     4,     4,
       4,  3129,     5,  1765,  1766,     4,   895,     5,     4,     4,
    2565,     5,     4,    -1,     5,  1777,  1222,     5,     5,     4,
       4,     4,    -1,     5,     4,   178,     5,     5,     4,     4,
       4,     4,     4,     4,     4,     4,   702,   703,   704,   705,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,   382,   383,   384,   385,   386,  2571,     5,
       4,    -1,     5,     5,     4,     4,    -1,     5,     5,     5,
    2583,  2584,  2585,  2586,  2587,  2588,  2589,  2590,  2591,  2592,
    2593,  3145,  3146,     5,     4,     4,  2599,     5,   251,     5,
       5,  2604,  2605,   256,     4,  2608,  2609,     5,     5,  2612,
    2613,  2614,  2615,  2616,  2617,  2618,  2619,     5,  2621,  2622,
    2623,    -1,    -1,    -1,  2627,  2628,  2629,  2630,    -1,  2632,
    2633,    -1,  2635,  2636,  2637,    -1,  2639,  2640,    -1,  2642,
      -1,    -1,  2645,  2646,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   818,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2669,    -1,    -1,  2672,
    2673,    -1,    -1,    -1,  2677,    -1,    -1,    -1,    -1,  2682,
    2683,    -1,  2685,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,   384,   385,   386,  1440,    -1,    -1,    -1,  2741,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1169,  1170,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1486,    -1,    -1,    -1,    -1,    -1,  1492,    -1,    -1,    -1,
      -1,    -1,    44,    -1,    -1,    47,    -1,  1503,    -1,    -1,
    1209,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2813,    -1,    -1,    -1,  2817,    -1,     4,     5,    -1,    -1,
      -1,    -1,    -1,    -1,  2827,  2828,    -1,    -1,    -1,    -1,
    2833,  2834,    20,    85,    -1,  2838,  2839,    -1,    -1,    -1,
      92,  2844,    -1,  1009,  2847,  2848,    -1,    -1,    -1,    -1,
      -1,   103,   104,    -1,  1185,    -1,    -1,  1023,   110,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2869,  2870,    -1,    -1,
    2873,    -1,  2875,  2876,  2877,    -1,  2879,    65,  2881,  2882,
      -1,    -1,    -1,  2886,    72,    -1,    -1,   139,    -1,    -1,
      -1,    -1,    -1,    81,    -1,    83,  2899,    -1,  1064,    -1,
      88,    -1,    -1,    91,    -1,    -1,    -1,   159,  2911,    97,
      -1,    60,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,
     108,    -1,    -1,    72,    -1,   177,   178,    -1,   116,  2932,
    2192,    -1,   184,    -1,    -1,    -1,    -1,   125,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   100,   101,    -1,    -1,    -1,   144,   209,    -1,   108,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,    -1,
      -1,  2974,    -1,    -1,    -1,    -1,  2979,    -1,  2981,    -1,
     168,  2243,    -1,    -1,  2987,   134,    -1,    -1,    -1,  1155,
      -1,    -1,   141,    -1,    -1,   144,    -1,    -1,   186,  3002,
      -1,    -1,    -1,    -1,   256,    -1,    -1,    -1,    -1,    -1,
      -1,   199,   200,    -1,    -1,    -1,    -1,    -1,  3021,   168,
      -1,    -1,    -1,    -1,    -1,  3028,    -1,    -1,    -1,  3084,
     179,    -1,    -1,    -1,    -1,    -1,   224,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1755,
      -1,    -1,    -1,    -1,  3057,    -1,    -1,     4,    -1,    -1,
     312,    -1,    -1,    -1,    -1,   253,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    -1,   326,   224,    -1,    -1,    -1,   267,
      -1,   269,  1248,   232,    -1,  3088,    -1,    -1,    -1,    -1,
    3093,    -1,    -1,  3096,    -1,    -1,    43,   285,    -1,    -1,
    3103,    -1,   290,    -1,    -1,    -1,    -1,   359,    -1,    -1,
     298,  3114,    -1,  1819,    61,    -1,  3119,     4,   306,  1825,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    -1,   285,    -1,  1304,    -1,
     328,    -1,  3145,  3146,    -1,    -1,    -1,    -1,  1314,   298,
      -1,    -1,    -1,    -1,    -1,    -1,   344,   345,    -1,   347,
      -1,    -1,    -1,   110,    -1,    -1,    -1,   316,  3171,    -1,
      -1,    -1,  3175,    -1,    61,  3178,    -1,    -1,    -1,   328,
      -1,   330,    -1,    -1,  3162,   132,  3189,  3190,  3191,  3192,
      -1,    -1,    -1,    -1,    -1,  1604,  1605,  1606,  3201,    -1,
     388,    -1,  3205,  1612,  1613,  1614,    -1,    -1,    -1,  3212,
    1619,  3214,    -1,  1622,  1623,  1624,    -1,  3195,  1627,  1628,
    3198,  1630,  1631,   110,  1930,    -1,    -1,    -1,    -1,  1935,
      -1,   178,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   388,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1664,  1665,  1963,    -1,  1668,
    1669,    -1,  1671,    -1,    -1,  1971,    -1,    -1,    -1,    -1,
    1436,  1977,    -1,    -1,   221,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   231,    -1,    -1,    -1,  1454,    -1,
    1621,   178,    -1,   240,   241,    -1,    -1,    -1,  2004,    -1,
      -1,    -1,  1633,    -1,   251,  2011,    -1,    -1,    -1,   256,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1485,
      -1,    -1,    -1,    -1,  1655,  1656,    -1,  1493,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1504,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1521,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   251,    -1,    -1,  1533,    -1,   256,
      -1,    -1,  1538,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2650,    -1,
      -1,    -1,    -1,    -1,    -1,   342,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   382,   383,   384,   385,   386,
      -1,    -1,    -1,    -1,    -1,   392,    -1,    -1,    -1,    -1,
      -1,    -1,   399,   400,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2175,
      -1,    -1,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   382,   383,   384,   385,   386,
      -1,    -1,  2208,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1684,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2245,
    2246,    -1,    -1,    -1,    19,    -1,    -1,  1713,    -1,    -1,
      -1,    -1,    -1,  2259,    -1,    -1,    -1,    -1,  2264,  2265,
      -1,    -1,    -1,    -1,  2270,  2271,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1745,
      -1,    -1,  1748,    -1,    -1,    -1,    -1,  1753,    -1,    -1,
      -1,    -1,    -1,  1759,  1760,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1768,    -1,    -1,    -1,    -1,    -1,  2314,  1775,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2325,
      -1,    -1,    -1,    -1,    -1,    -1,  2888,    -1,    -1,    -1,
    2892,    -1,    -1,    -1,    -1,   110,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1818,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2072,  1830,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2378,    -1,    -1,    -1,    -1,  2086,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2096,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2402,    -1,    -1,    -1,
      -1,    -1,    -1,   178,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2430,    -1,    -1,    -1,    -1,  2435,
      -1,    -1,    -1,    -1,    -1,  2441,    -1,    -1,    -1,    -1,
    2446,    -1,    -1,    -1,  2450,    -1,  2452,    -1,  2454,    -1,
      -1,  2457,    -1,  2459,  3016,    -1,    -1,    -1,    -1,  2168,
      -1,  2092,    -1,  2172,    -1,    -1,    -1,  1933,    -1,  2100,
    2101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2110,
    2111,   256,  3044,    -1,    -1,    -1,    -1,    -1,    -1,  2120,
    2121,    -1,    -1,    -1,  1960,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2135,  2136,    -1,    -1,    -1,    -1,
      -1,    -1,  1978,    -1,    -1,  2146,  2147,    -1,    -1,    -1,
      -1,    -1,  2153,    -1,    -1,  1991,    -1,  1993,    -1,    -1,
      -1,    -1,  2163,    -1,    -1,    -1,    -1,  2003,    -1,    -1,
    2006,  2007,  2008,  2009,  2010,    -1,  2012,    -1,    -1,    -1,
    2016,    -1,    -1,    -1,    -1,  2021,  2022,  2023,  2024,  2025,
    2026,    -1,    -1,  2029,  2030,    -1,    -1,    -1,    -1,  2035,
    2036,  2037,  2038,    -1,    -1,  2041,  2042,    -1,    -1,    -1,
      -1,    -1,  2048,  2049,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  3185,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2641,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,    -1,
      -1,  2657,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2702,    -1,    -1,    -1,
      -1,    -1,    -1,  2709,    -1,    61,    -1,    -1,    -1,    -1,
      -1,  2177,    -1,    -1,  2180,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2191,    -1,    -1,    -1,    -1,
    2736,    -1,  2738,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2207,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2476,    -1,    -1,
      -1,    -1,    -1,  2239,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2806,    -1,    -1,    -1,    -1,    -1,  2812,    -1,    -1,    -1,
    2816,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   178,    -1,    -1,    -1,  2832,  2536,  2537,  2538,
    2539,  2540,    -1,  2542,  2543,    -1,    -1,  2303,  2547,  2548,
    2549,  2550,  2551,    -1,  2553,  2554,  2477,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2487,  2488,    -1,    -1,
    2326,    -1,    -1,    -1,    -1,   221,    -1,  2498,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2507,    -1,    -1,    -1,
    2511,  2512,    -1,    -1,  2890,  2891,    -1,    -1,    -1,  2520,
    2521,    -1,    -1,    -1,    -1,   251,    -1,    -1,  2529,  2530,
     256,    -1,    -1,    -1,  2535,    -1,    -1,    -1,    -1,    -1,
      -1,   267,    -1,    -1,  2545,  2546,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2556,    -1,  2558,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2406,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2422,    -1,    -1,    -1,
      -1,    -1,    -1,  2429,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   339,    -1,  2451,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2460,    -1,    -1,    -1,  2464,    -1,
      -1,  3007,    -1,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,    -1,    -1,    -1,     4,  2744,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2753,  2754,  2755,  2756,  2757,    19,
    2759,  2760,    -1,  2762,  2763,  2764,  2765,  2766,    -1,  2768,
    2769,    -1,  2771,  2772,  2773,  2774,  2775,    -1,  2777,  2778,
      -1,  2780,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2790,  2791,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2801,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2569,    -1,    -1,  2572,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2745,  2581,    -1,  2748,    -1,  3125,
    2751,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2761,  2597,    -1,    -1,  2600,    -1,    -1,    -1,    -1,  2770,
     110,  2607,    -1,  3149,  2610,  2611,    -1,    -1,  2779,    -1,
      -1,    -1,    -1,    -1,    -1,  2786,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2797,    -1,    -1,    -1,
      -1,    -1,  2803,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2651,  2652,    -1,    -1,    -1,
    3196,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,   178,    -1,
      -1,  3217,    -1,    -1,  3220,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,
      54,    -1,    56,    57,    -1,    -1,    -1,  2946,    -1,    -1,
      -1,  2707,    -1,    -1,    68,    -1,  2955,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2964,    -1,  2966,    82,    83,
      -1,  2970,    19,    -1,    -1,    -1,    90,    -1,    -1,    93,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   256,   111,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   120,   121,    -1,    -1,
     124,    -1,    -1,    -1,    -1,  2936,    -1,    -1,    -1,    -1,
      -1,    -1,  2943,    -1,    71,    72,    -1,    -1,    -1,    -1,
      77,  2952,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,
    2961,    -1,   156,    -1,    -1,    -1,  2967,    -1,    -1,    -1,
    2971,    -1,  2808,   100,   101,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  3074,    -1,  3076,    -1,  3078,
      61,    -1,  3081,   197,  3083,    -1,  2842,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2853,    -1,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,   379,
     380,   381,   382,   383,   384,   385,   386,    -1,    -1,   110,
      17,   178,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   193,    -1,   262,    -1,
      -1,    -1,    -1,    -1,   268,    -1,    -1,    -1,    -1,    -1,
    2916,    -1,    -1,    -1,  2920,    -1,   213,    -1,    -1,    -1,
      -1,    -1,   286,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      -1,    -1,    -1,   297,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   238,    -1,    -1,    -1,    -1,    -1,   178,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   256,
      -1,    -1,    -1,    -1,    -1,   329,   330,    -1,    -1,    -1,
      -1,  2977,  2978,   110,  2980,    -1,    -1,    -1,    -1,  2985,
    2986,    -1,    -1,    -1,    -1,    -1,  2992,    -1,    -1,   126,
     354,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   312,    -1,    -1,    -1,    -1,
     251,    -1,    -1,  3029,    -1,   256,   323,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   401,    -1,    -1,
      -1,   178,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  3064,    -1,
      -1,   198,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   382,   383,   384,   385,   386,
     321,   388,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   256,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   383,   384,   385,   386,  3162,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  3181,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  3195,
      -1,    -1,  3198,    -1,    -1,    -1,   333,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,
      -1,    -1,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   382,   383,   384,   385,   386,
      53,    54,    -1,    -1,    57,    -1,    -1,    60,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,    72,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      83,    -1,    -1,    -1,    -1,    -1,    -1,    90,    91,    19,
      -1,    20,    21,    22,    -1,    -1,    -1,    -1,   101,    -1,
      -1,    -1,    -1,    -1,    -1,   108,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   116,    -1,    -1,    -1,   120,   121,    -1,
      -1,   124,    -1,    -1,    53,    54,    -1,    -1,    57,    -1,
      -1,    61,    -1,    -1,    -1,    64,    -1,    -1,    -1,    68,
      -1,   144,    -1,    72,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    82,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    90,    -1,    -1,    -1,   168,    -1,    -1,    -1,    -1,
      -1,    -1,   101,    -1,    -1,    -1,    19,    -1,    -1,    -1,
     110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      -1,   120,   121,    -1,   197,   124,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   144,    -1,    -1,    61,    -1,
      -1,   224,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   110,    -1,    -1,    -1,   168,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   178,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   260,    -1,   262,
      -1,    -1,    -1,    -1,    -1,   268,   269,   110,   197,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   207,    -1,
      -1,    -1,   285,   286,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   297,   298,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   178,    -1,    -1,   102,    19,    -1,    -1,
      -1,    -1,    -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,
      -1,   251,    -1,    -1,    -1,   328,   256,   330,    -1,    -1,
      -1,   260,    -1,   262,    -1,   178,    -1,    -1,    -1,   268,
     269,    -1,   345,    -1,   347,    -1,    -1,    -1,    -1,    -1,
      -1,   354,    -1,    -1,    -1,    -1,    -1,   286,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   298,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   256,   178,    -1,    -1,   388,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,   328,
      -1,   330,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     178,    -1,    -1,   256,   343,   183,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   354,    -1,    -1,    -1,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,   379,
     380,   381,   382,   383,   384,   385,   386,    -1,   333,   388,
     256,    -1,    -1,    -1,    -1,    -1,   178,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,    -1,    -1,    -1,    -1,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,   384,   385,   386,   256,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   381,   382,   383,   384,   385,   386,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,   379,
     380,   381,   382,   383,   384,   385,   386,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   380,   381,
     382,   383,   384,   385,   386,    44,    -1,    -1,    47,    -1,
      -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,
      -1,    70,    71,    -1,    -1,    -1,    75,    76,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,
      -1,    -1,    -1,    92,    -1,    94,    95,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   104,   105,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   130,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   140,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   153,    -1,    -1,    -1,    -1,    -1,
     159,    -1,    -1,    -1,   163,    -1,    -1,    -1,   167,   168,
      -1,    -1,    -1,    -1,   173,   174,    -1,    -1,   177,    -1,
      -1,    -1,    -1,    -1,   183,    -1,    -1,    -1,    -1,    -1,
     189,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   200,    -1,    -1,    -1,   204,   205,   206,    -1,    -1,
     209,   210,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   222,    -1,    -1,    -1,   226,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   248,
      -1,   250,   251,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   263,    -1,   265,    -1,    -1,    -1,
      -1,    -1,    -1,   272,    -1,    -1,    -1,   276,    -1,    44,
      -1,   280,    47,   282,   283,    50,   285,    -1,    -1,    -1,
      -1,   290,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,   306,    -1,    -1,
      75,    76,    77,   312,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    -1,    87,    -1,    -1,    -1,    -1,    92,    -1,    94,
      95,    96,   331,    -1,   333,    -1,    -1,   102,    -1,   104,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   346,    -1,   348,
      -1,    -1,    -1,    -1,    -1,    -1,   355,    -1,    -1,   358,
     359,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   139,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     389,    -1,    -1,    -1,   159,    -1,    -1,    -1,   397,    -1,
      -1,    -1,    -1,   168,    -1,   170,   171,    -1,   173,   174,
      -1,    -1,   177,    -1,    -1,    -1,   181,    -1,   183,   183,
      -1,    -1,    -1,    -1,   189,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   209,   210,    -1,    -1,    -1,   214,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   222,    -1,    -1,
      -1,   226,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   248,    -1,   250,    -1,    -1,    -1,    -1,
      -1,    -1,   257,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   283,    -1,
     285,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   312,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   331,    -1,   333,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   343,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   351,    -1,    -1,    -1,
      -1,    -1,   357,    -1,   359,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
     384,   385,   386,   387,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   397
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
     331,   333,   346,   348,   355,   358,   359,   389,   397,   404,
      72,    11,    58,    79,   109,   131,   135,   150,   339,   441,
       3,     4,   226,   339,   405,   446,   214,   220,   267,   295,
     350,   395,   448,   328,     4,    43,   122,   173,   174,   221,
     222,   283,   453,    30,   154,   169,   198,   202,   264,   308,
     317,   318,   420,   455,    33,    91,   101,   108,   200,   253,
     290,   323,   457,    43,    64,   122,   221,   333,   405,   468,
       4,    19,    43,    61,   110,   132,   178,   221,   231,   240,
     241,   251,   256,   342,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
     384,   385,   386,   392,   399,   400,   407,   415,   416,   417,
     470,    35,   471,   407,    47,    50,    84,    92,   160,   219,
     252,   254,   283,   359,   406,   407,    70,   405,   473,   163,
     181,   474,    44,    47,    50,    71,    75,    76,    77,    85,
      87,    92,    94,    95,    96,   102,   104,   139,   159,   168,
     170,   171,   173,   174,   177,   181,   183,   189,   209,   210,
     214,   222,   226,   248,   250,   257,   283,   285,   312,   331,
     333,   343,   351,   357,   359,   397,   475,    91,   108,   526,
      19,    44,    47,    85,    92,   103,   104,   110,   139,   159,
     177,   178,   184,   209,   256,   312,   326,   359,   529,    72,
     407,    66,   326,   353,   616,    66,   326,   353,   615,    96,
     127,   212,   229,   299,   348,   359,   535,    15,     4,    49,
      52,    72,    91,   108,   114,   167,   190,   306,   336,   337,
     349,   353,   597,     5,    26,    29,   123,   139,   180,   237,
     255,   332,   538,   266,   558,     5,    72,    96,   157,   348,
     397,   407,   559,     5,   560,    62,   146,   261,   276,   350,
     577,    49,    70,    72,   208,   275,   326,   337,   598,   326,
     614,    72,   232,   391,   399,   401,   599,    42,   221,   267,
     339,   405,   415,   417,   600,     5,   348,   359,   407,   603,
      78,   193,   281,   292,   604,     4,   605,    96,   577,     4,
      70,   612,    66,   326,   353,   613,   221,   339,   405,   617,
      26,   123,   139,   237,   255,   396,   619,    55,   108,   119,
     152,   341,   641,   642,     4,    39,    51,    82,   168,   213,
     292,   302,   325,   334,   353,   434,     4,   139,   236,   643,
     339,   405,   645,    15,    23,   277,   280,   416,   646,   266,
     650,   339,   405,   651,     0,     5,   407,    64,   405,   442,
     309,     5,     4,   339,   405,   443,     5,    34,   324,   444,
     138,   405,   445,   393,   138,   405,   447,   405,     4,   220,
     279,   287,   451,   214,   350,   394,   395,   405,   450,   407,
     155,   201,   449,   226,   405,    86,   197,   287,   405,   452,
       5,   405,   405,   405,     4,   173,   174,   222,   283,   454,
       4,   405,   405,   405,   225,   280,   323,   458,     5,   262,
     459,     4,    33,   460,     5,   461,     5,   465,     5,    33,
     466,     4,    70,   467,   405,     8,     9,    10,   405,   411,
     412,   413,   414,   405,   405,    43,   122,   221,   405,   469,
     405,   221,   415,   417,   405,    37,   117,   142,   143,   151,
     175,   185,   422,   405,     4,   407,   407,   407,   407,   407,
     407,   407,   407,   407,   407,   129,     5,    72,    58,    79,
      96,   109,   131,   135,   150,   199,   478,   131,   226,   480,
     214,   220,   267,   295,   350,   394,   395,   405,   462,   481,
     328,   484,   193,   485,   154,   193,   202,   487,    33,    71,
      72,    77,   100,   101,   193,   213,   238,   312,   323,   388,
     415,   489,   405,   417,   492,    64,   333,   415,   493,   321,
     415,   417,   494,    35,   495,   415,   417,   496,     4,   415,
     417,   497,    48,    64,    89,   109,   129,   133,   165,   166,
     228,   239,   309,   310,   388,   501,   247,   352,   507,    72,
       5,    97,    66,   326,   353,   515,    66,   326,   353,   514,
       4,    96,   133,   499,     5,    71,   417,   498,    15,    49,
      72,    89,   190,   337,   353,   508,   577,    49,    72,    89,
     208,   275,   326,   337,   509,   326,   513,    72,   267,   511,
     327,    66,   326,   353,   512,    21,   150,   274,   307,   516,
      39,    51,    82,   168,   213,   292,   302,   353,   517,   417,
      97,    15,   225,   524,   415,   527,    72,    80,   530,    33,
     531,    47,    95,   219,   532,   168,   253,   298,   344,   533,
     415,    17,    63,   126,   198,   333,   415,   534,     5,     5,
     172,   291,   351,   415,     4,     5,   172,   291,   415,     4,
       4,   220,   537,     5,     4,     4,   133,   405,     4,    49,
      52,    72,   108,   114,   167,   306,   336,   337,   349,   353,
      72,    73,    74,    99,   112,   128,   162,   172,   194,   203,
     223,   249,   291,   296,   313,   316,   419,     5,     4,   405,
     407,     5,     5,   173,   174,   283,   539,     5,   554,     5,
     541,     5,   129,   173,   174,   219,   283,   310,   542,   102,
     122,   214,   557,     5,   553,     5,   310,   555,     5,   310,
     556,     4,     5,   407,   407,   405,   405,     5,     4,     5,
      20,    65,    72,    81,    83,    88,    91,    97,   101,   108,
     116,   125,   144,   168,   186,   199,   200,   224,   253,   267,
     269,   285,   290,   298,   306,   328,   344,   345,   347,   388,
     561,   419,     5,     4,   226,   234,   235,   275,   393,   418,
     405,   415,   405,   415,     5,   405,    43,   122,   405,   602,
     407,   405,   415,   417,   601,   405,   422,   405,     4,   416,
      59,    98,   158,   283,   606,     4,     4,   405,     4,   168,
     298,   607,     5,   415,     4,    43,   122,   405,   618,   405,
     106,    66,   133,   173,   174,   283,   314,   621,   133,   640,
      66,   129,   133,   173,   174,   178,   219,   278,   283,   310,
     314,   327,   622,   623,    66,   133,   314,   639,     5,    66,
     133,   314,   620,     4,    36,   118,   232,   611,    72,   407,
     437,    72,   407,   438,    72,   407,   439,    12,   137,   216,
     610,   405,    18,   233,   322,   407,   435,     4,   405,   260,
     405,   440,   405,    64,   310,     4,   405,   405,     4,   261,
     339,   649,     4,   330,   647,     4,   330,   648,     4,   422,
     138,   405,   652,   405,   405,     4,     5,   405,    11,   405,
     405,   407,   405,    32,   103,   184,   287,   293,   421,   421,
       4,   226,   405,   405,     4,     4,     4,   405,   405,   405,
     405,   405,   405,     4,   405,     4,   405,   405,     4,     4,
       4,     4,     4,     4,     4,     5,     5,   415,     4,     5,
       5,    70,   405,   405,   411,   413,   413,   415,   405,   405,
     405,   405,   405,   405,   405,   415,   417,   414,   405,   405,
     414,   405,     5,   309,   113,   214,   479,   393,   220,   287,
     482,   193,    86,   197,   287,   483,   155,   201,   463,   463,
       4,   486,     4,   488,    89,   323,   220,   295,   490,   202,
     491,   193,     4,   422,   405,   405,   415,   415,   422,   422,
     422,   415,   422,   405,   415,     4,   504,     4,   417,   502,
     225,     4,   187,   359,   503,   225,   415,     4,   147,   339,
     506,     5,     5,   476,     4,   225,   149,   284,   408,   405,
       4,   510,   510,   510,   510,     4,     5,    20,    65,    72,
     101,   125,   144,   161,   168,   176,   238,   262,   267,   269,
     297,   298,   306,   328,   388,   571,   417,   215,   215,    72,
     520,    72,   521,    72,   522,    18,   233,   322,   518,   260,
     523,   405,     5,   477,   261,   525,   416,   422,     5,   415,
     415,   415,   415,     4,     4,     4,   407,     4,     4,   225,
     405,   419,     5,   405,   407,     4,    13,    14,    66,   217,
     218,   303,   314,   315,   352,    95,    95,    95,     5,     5,
       5,    13,    14,    66,   217,   218,   303,   314,   315,   319,
     352,    95,    95,   178,    95,   178,   178,   183,   416,   545,
     550,    95,   178,     5,   543,     4,     4,    13,    66,   217,
     303,   314,   352,     5,     5,    13,   178,   210,   427,     5,
       4,   405,   416,    20,    21,    22,    53,    54,    57,    60,
      68,    72,    82,    83,    90,    91,   101,   108,   116,   120,
     121,   124,   144,   168,   197,   224,   260,   262,   268,   269,
     285,   286,   297,   298,   328,   330,   345,   347,   354,   388,
      72,    88,    97,   108,   144,   168,   224,   269,   298,   345,
     347,   320,     4,    32,   182,   247,   274,   564,     5,    69,
     115,   271,   288,   289,   390,   391,   570,   108,   562,     4,
      16,   298,   568,    43,   122,   221,   569,     4,     5,    16,
     242,   340,   405,   298,   570,   578,   139,   570,   579,    38,
      43,   122,   148,   221,   339,   405,   580,   415,   407,   100,
     108,   116,   134,   141,   168,   179,   224,   232,   285,   298,
     316,   583,    43,   122,   221,     5,   298,   329,   587,    16,
     136,   191,   242,   340,   588,   330,   407,   589,     5,   108,
     116,   348,    16,    16,     4,   405,   405,   405,   405,   405,
     405,   422,   405,   405,   414,   405,     4,   422,     4,    43,
     122,   221,   304,   608,    43,   122,   221,   304,   609,     4,
     106,     5,     5,    95,    95,    95,     4,     5,     5,    95,
       5,    95,   178,    95,   178,   623,    66,   133,   178,   314,
     627,    66,   133,   314,   638,    95,   178,    66,   133,   314,
     625,     4,    66,   133,   314,   624,     5,     5,     4,     5,
       5,     4,     4,     5,     5,     5,   405,   322,   407,   436,
     405,   405,   405,   405,   405,     4,   405,   644,   405,   405,
     416,    70,     4,     4,     5,     4,     4,     5,     4,   106,
     300,   423,   405,   405,    11,     5,    11,   405,   405,    11,
       4,    11,     4,     4,   405,   405,   405,   405,   405,     4,
     405,     5,   405,    32,   405,   456,     5,     4,     4,    16,
       4,   407,     4,     4,   422,     5,   415,     4,   422,   405,
     405,   405,   415,   405,   414,   405,   405,     5,     5,   405,
     417,   405,     4,   415,   405,   422,   422,   423,   423,   423,
     422,   414,   405,   422,   405,   408,   505,   187,     5,     4,
     422,   178,   178,     4,     5,     4,     4,   405,   500,    41,
      41,   405,    20,    21,    22,    53,    54,    57,    64,    68,
      72,    82,    83,    90,   101,   120,   121,   124,   144,   168,
     197,   207,   260,   262,   268,   269,   286,   298,   328,   330,
     343,   354,   388,    72,   144,   176,   269,   328,   320,    32,
     182,   247,   274,   572,   405,   238,   405,   573,    16,   405,
     297,   583,   297,   238,   405,   574,   330,   575,    16,   107,
     405,   322,   519,   405,     5,   423,     4,     4,    61,   415,
       4,     5,   536,   405,     5,     5,     5,   427,   427,   186,
     305,   425,     4,     4,     5,     5,   540,   540,   540,     5,
     311,   311,     5,     5,     5,    16,   180,   426,   426,   425,
       4,     4,   425,     5,     5,   544,     5,   551,     5,   552,
     551,   552,   183,   387,   416,   548,     5,   547,     5,   551,
     552,     5,    13,    14,    66,   217,   218,   303,   314,   315,
     319,   352,     4,     4,     5,     5,   427,   425,     4,     5,
       5,     5,    13,   422,    90,   170,   258,   259,   273,   320,
     431,     6,     7,   405,   410,   274,   274,   274,   116,    43,
      72,   108,   116,   122,   144,   168,   186,   224,   269,   285,
     298,   330,   345,   347,   348,   388,   563,   274,     5,    27,
     122,   188,   274,   326,    28,   155,   343,   116,    22,    54,
      57,    90,   121,   124,   262,   297,     4,    22,    54,    57,
      60,    90,   121,   124,   262,   297,   328,    43,   274,   274,
     116,     5,   242,    27,   122,   260,    38,   148,   339,   405,
     156,   301,   309,   260,   280,   415,   583,    43,   145,   260,
     326,   280,   242,     5,     5,   285,    27,   122,   260,     4,
       5,     5,   242,    38,   148,   339,   405,   583,   242,    60,
     407,     4,     4,   405,     5,   352,    22,    27,    53,    54,
      56,    57,    68,    82,    83,    90,    93,   111,   120,   121,
     124,   156,   197,   262,   268,   286,   297,   329,   330,   354,
     401,   565,     4,   405,   405,   405,   405,   405,   570,   415,
       5,     4,     5,   405,   405,   415,   405,   407,   405,   405,
     570,     5,     5,   405,   405,   407,     5,    16,     5,     5,
     405,   405,   414,   405,   405,     4,   405,   405,   122,   405,
     405,   122,     4,    45,    46,   195,   196,   227,   433,   433,
      66,   133,   314,   635,    66,   133,   314,   632,    66,   133,
     314,   629,   433,     5,    66,   133,   314,   626,    66,   133,
     314,   637,    66,   133,   314,   636,    66,   133,   314,   634,
      66,   133,   314,   633,     5,     5,    66,   133,   314,   628,
       4,     5,     5,     4,    66,   133,   314,   631,    66,   133,
     314,   630,     5,     5,     4,     5,     5,     4,   433,   433,
     433,   405,   405,   405,   405,   405,     4,   415,   405,   422,
     416,     5,     5,    11,   405,   415,   417,   405,    11,   405,
     405,   405,    64,   405,     4,   405,   405,     4,   405,   405,
       5,   405,     5,   405,   456,     5,     5,    50,   312,   464,
       5,   407,   407,   415,   422,     4,   405,     4,     4,     4,
     422,   415,   405,   405,   405,   405,   422,   415,   423,   414,
     405,     4,   423,   405,     4,   417,     5,    24,    25,   106,
     424,     4,   415,   405,   405,     4,   405,     5,    90,   170,
     258,   259,   273,   320,   415,   417,   274,   274,   274,    21,
     274,   415,   274,    27,   122,   188,   274,   326,    28,   155,
     343,    21,   274,   274,   274,    21,   274,    27,   122,   192,
     260,   192,   156,   301,   309,   260,   192,   260,   335,   583,
     145,   192,   260,   326,     4,   285,    27,   122,   192,   260,
     583,   238,    16,   398,   405,   405,   405,   405,   405,   405,
     225,   405,   405,    20,   270,   528,     4,     4,   405,   427,
     427,   427,     4,   427,   427,   427,    13,    14,    66,   217,
     218,   303,   314,   315,   352,   427,   426,   427,   427,   427,
     427,   427,     4,   427,   427,     4,   426,    13,    14,    66,
     217,   218,   303,   314,   315,   352,     5,    13,    14,    66,
     217,   218,   303,   314,   315,   319,   352,    13,    14,    66,
     217,   218,   303,   314,   315,   352,     5,   546,     5,   549,
       5,     5,    13,    14,    66,   217,   218,   303,   314,   315,
     319,   352,     5,    13,    14,    66,   217,   218,   303,   314,
     315,   319,   352,   311,     5,     5,     5,   426,   426,   425,
       4,     4,   425,     5,     4,     4,   427,   427,     4,   427,
     427,   427,     5,     5,   407,   415,   417,     5,   405,   405,
       5,   405,     5,   410,   116,   224,   285,   116,   224,   285,
       5,   405,   407,     4,    27,    40,    53,    67,    68,   232,
     243,   244,   245,   246,   338,   428,     5,   405,   415,   407,
     407,     5,     5,   410,   274,   274,    21,   274,    21,   274,
     274,    21,   274,   356,   356,     4,     4,     4,     4,   563,
       4,     4,     4,   356,   356,     4,     5,     4,   405,     5,
     405,     5,   410,   407,   428,   415,   415,   405,     5,    27,
      53,    56,    68,    93,   111,   156,   401,   429,     4,   415,
     405,   422,   407,     5,   415,   415,   405,   407,   407,   428,
     415,   415,   405,   407,     5,   405,     5,   405,   260,   260,
     405,   405,   260,   405,   260,   405,   405,     4,   566,   405,
     260,   260,   405,   405,   405,   260,   405,    61,   405,   405,
     405,    61,   405,     5,   352,   405,   567,   405,   405,   260,
     405,   405,   405,   405,   415,   422,     5,     4,     4,   405,
     405,   422,   405,   405,   405,   415,   570,   405,   405,     5,
       4,   405,   405,   405,   405,     5,     5,     4,     5,     5,
       4,     5,     5,     4,   433,     5,     5,     4,     5,     5,
       4,     5,     5,     4,     5,     5,     4,     5,     5,     4,
       4,     4,     5,     5,     4,     4,     5,     5,     4,     5,
       5,     4,   405,   405,   405,   405,   422,   405,   415,   417,
     405,   422,   405,   405,   405,   405,   405,     5,   405,   405,
     405,     4,   405,   405,     5,   405,     5,   405,   456,     4,
       4,     4,   415,     4,   422,     4,   405,   422,   154,   202,
     420,   405,   420,   423,   422,   415,   405,   405,     4,   405,
     415,   415,   405,   408,     5,     5,     5,     5,     5,   102,
     415,   422,   415,   415,   415,   415,   417,   415,   422,   415,
     415,   415,   417,   415,   415,   415,   415,   417,   415,   415,
     415,   405,   415,   415,   415,   415,   415,   415,   415,   415,
     102,   405,   405,     4,   405,     5,   405,   427,     5,     5,
       5,   425,     4,     4,     5,   427,   426,     4,   427,     5,
       5,     5,   426,   426,   425,     4,     4,     5,   311,     5,
       5,     5,   426,   426,   425,     4,     4,   425,     5,     5,
       5,     5,   426,   426,   425,     4,     4,     5,    13,    14,
      66,   217,   218,   303,   314,   315,   352,    13,    14,    66,
     217,   218,   303,   314,   315,   352,    13,    14,    66,   217,
     218,   303,   314,   315,   352,   311,     5,     5,     5,   426,
     426,   425,     4,     4,   425,     5,   311,     5,     5,     5,
     426,   426,   425,     4,     4,   425,     5,   426,     4,     4,
     426,     4,     4,   427,   427,     5,   422,   415,   405,   405,
     415,   405,     5,   410,     5,   415,   407,   428,     5,   415,
     422,     5,   410,   405,   405,   405,   405,   405,   405,   405,
     405,   405,     4,     4,     5,     4,     4,   405,   415,   405,
       5,   410,   407,   428,   422,   422,   422,   405,   414,   422,
     422,   405,   422,   422,   405,   405,   405,   405,   405,   405,
     405,   405,   405,   405,   576,   584,   405,   405,   405,   405,
     405,   405,   405,   405,   352,   405,   405,   405,   352,   405,
     405,   415,     5,   405,   405,   405,   405,     4,     4,   422,
     423,     5,     5,   414,   405,     4,   422,   415,     4,   433,
     433,   433,   433,   433,   433,   433,   433,   433,   410,   405,
     405,   405,   422,   405,   414,   405,   405,    11,     5,     5,
     405,   405,   405,   405,     5,   405,     4,   405,     4,     4,
       4,   422,     4,     4,   415,   405,   405,   423,   424,   405,
       5,   405,   415,   417,     5,     5,     5,     5,     5,   415,
     422,   424,   424,   424,   422,   424,   423,   424,   424,   422,
     424,   424,   424,   422,   424,   424,   422,   415,   422,   424,
     422,   424,   424,   422,   424,   422,   415,     4,   415,   417,
       5,   405,     4,   427,   426,     4,   426,   426,     4,     4,
     426,     4,   426,     5,     5,     5,   426,   426,   425,     4,
       4,     5,     5,     5,     5,   426,   426,   425,     4,     4,
       5,     5,     5,     5,   426,   426,   425,     4,     4,     5,
     426,   427,   427,   427,   427,   427,     4,   427,   427,     4,
     426,   426,   427,   427,   427,   427,   427,     4,   427,   427,
       4,   426,   426,     4,     4,     4,   416,   424,     4,   415,
     424,   405,   415,     4,   424,   424,   415,     4,   405,   405,
     405,   405,   405,   405,   405,   405,   405,   405,   405,   415,
     424,   405,   415,     4,   414,   414,   423,   415,   414,   414,
     415,   415,   414,   414,   405,   405,   405,   405,   405,   405,
     410,   405,   405,   405,    60,    72,   101,   144,   328,   330,
     388,   581,   582,   583,   595,   596,   410,   405,   405,   405,
     405,   410,   405,   405,     5,   405,   405,   405,     5,   405,
     405,   422,   405,   352,   409,   410,   405,   405,   423,   407,
     415,   415,   423,   422,     4,   405,   414,   405,    64,   405,
       5,     5,     4,     4,   405,   405,     4,   405,     4,     4,
       4,   420,   424,     5,   422,     4,     5,     4,     5,   415,
       5,   422,   423,   424,   423,   423,   423,   423,   422,     5,
     422,     4,   405,   427,   426,   426,     4,   426,   427,   427,
     427,   427,   427,     4,   427,   427,   426,   427,   427,   427,
     427,   427,     4,   427,   427,   426,   427,   427,   427,   427,
     427,     4,   427,   427,   426,   427,   426,     4,   427,   427,
     426,     4,   427,   426,   422,   415,   424,     4,   422,   405,
     422,   405,   405,   405,   424,     4,   422,   405,   414,     5,
     352,   424,   405,   414,   424,   424,   415,   405,     4,   430,
     430,   405,   405,   430,   410,   430,   584,   415,   402,   402,
     402,   402,   402,   402,   402,   582,   402,   410,   430,   430,
     405,   405,   410,     4,     5,   405,   584,   405,   405,   405,
     584,   405,   414,   405,     5,   584,   405,   430,   407,   585,
     586,   422,   422,   407,   423,     4,     5,   405,     5,     4,
       4,     4,     4,     4,     4,     4,     4,   405,     4,    34,
     211,   324,   472,   415,     5,    34,   211,   324,   432,   415,
       4,   472,   405,   426,   426,   427,   426,   427,   426,   427,
     427,   426,   427,   426,   405,   424,   415,   415,   405,   415,
     405,   415,   415,   405,     5,   415,   424,     4,   584,   584,
     409,   405,   584,     4,   584,   422,   563,     5,     4,     5,
       5,     5,     4,   407,     4,   584,   584,   409,   405,     4,
       5,   584,   584,   584,   405,   415,   584,   584,   584,   585,
     592,   593,   583,   590,   591,   407,     4,     5,     5,     4,
       4,     4,   214,   350,   395,   405,   462,   472,     4,   415,
     472,     4,   427,   427,   427,   427,   427,   416,   424,   424,
     405,   424,     4,   424,   424,   405,   424,   405,   584,   584,
       4,   405,   584,     5,     4,   405,   584,     4,   405,   584,
     584,   422,   592,   594,   595,   402,   591,     5,     5,   405,
     463,   405,   463,   422,   424,     4,   415,   417,     4,   410,
     409,   405,     5,   405,   409,   405,   415,   595,   407,     5,
       5,   405,   405,   405,   405,   432,     5,   415,   417,   422,
     415,   417,   584,   405,     4,   584,   405,   424,     5,     5,
     405,     5,   405,   422,   422,     4,   584,     4,     5,     5,
       5,   409,   409,   584,   584,   584
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
#line 513 "frame/parser.Y"
    {fr->bgColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 5:
#line 514 "frame/parser.Y"
    {fr->useBgColorCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 7:
#line 516 "frame/parser.Y"
    {fr->centerCmd();;}
    break;

  case 8:
#line 517 "frame/parser.Y"
    {fr->clearCmd();;}
    break;

  case 10:
#line 519 "frame/parser.Y"
    {fr->colorbarTagCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 17:
#line 526 "frame/parser.Y"
    {fr->DATASECCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 23:
#line 532 "frame/parser.Y"
    {fr->hideCmd();;}
    break;

  case 24:
#line 533 "frame/parser.Y"
    {fr->highliteCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 25:
#line 534 "frame/parser.Y"
    {fr->highliteColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 29:
#line 538 "frame/parser.Y"
    {fr->irafAlignCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 38:
#line 547 "frame/parser.Y"
    {fr->nanColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 42:
#line 551 "frame/parser.Y"
    {fr->queryCursorCmd();;}
    break;

  case 45:
#line 554 "frame/parser.Y"
    {fr->resetCmd();;}
    break;

  case 51:
#line 560 "frame/parser.Y"
    {fr->showCmd();;}
    break;

  case 53:
#line 562 "frame/parser.Y"
    {fr->threadsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 55:
#line 564 "frame/parser.Y"
    {fr->unloadFitsCmd();;}
    break;

  case 57:
#line 566 "frame/parser.Y"
    {fr->msg("Frame 1.0");;}
    break;

  case 62:
#line 573 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 63:
#line 574 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 64:
#line 577 "frame/parser.Y"
    {yydebug=(yyvsp[(1) - (1)].integer);;}
    break;

  case 65:
#line 578 "frame/parser.Y"
    {DebugMosaic=(yyvsp[(2) - (2)].integer);;}
    break;

  case 66:
#line 579 "frame/parser.Y"
    {yydebug=(yyvsp[(2) - (2)].integer);;}
    break;

  case 67:
#line 580 "frame/parser.Y"
    {DebugPerf=(yyvsp[(2) - (2)].integer);;}
    break;

  case 68:
#line 581 "frame/parser.Y"
    {DebugWCS=(yyvsp[(2) - (2)].integer);;}
    break;

  case 69:
#line 582 "frame/parser.Y"
    {DebugBin=(yyvsp[(2) - (2)].integer);;}
    break;

  case 70:
#line 583 "frame/parser.Y"
    {DebugBlock=(yyvsp[(2) - (2)].integer);;}
    break;

  case 71:
#line 584 "frame/parser.Y"
    {DebugCompress=(yyvsp[(2) - (2)].integer);;}
    break;

  case 72:
#line 585 "frame/parser.Y"
    {DebugCrop=(yyvsp[(2) - (2)].integer);;}
    break;

  case 73:
#line 586 "frame/parser.Y"
    {DebugGZ=(yyvsp[(2) - (2)].integer);;}
    break;

  case 74:
#line 587 "frame/parser.Y"
    {DebugRGB=(yyvsp[(2) - (2)].integer);;}
    break;

  case 75:
#line 590 "frame/parser.Y"
    {(yyval.integer)=((yyvsp[(1) - (1)].integer) ? 1 : 0);;}
    break;

  case 76:
#line 592 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 77:
#line 593 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 78:
#line 594 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 79:
#line 595 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 80:
#line 597 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 81:
#line 598 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 82:
#line 599 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 83:
#line 600 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 84:
#line 603 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 85:
#line 604 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 86:
#line 605 "frame/parser.Y"
    {(yyval.integer) = Base::FULLBASE;;}
    break;

  case 87:
#line 606 "frame/parser.Y"
    {(yyval.integer) = Base::ROOT;;}
    break;

  case 88:
#line 607 "frame/parser.Y"
    {(yyval.integer) = Base::FULL;;}
    break;

  case 89:
#line 610 "frame/parser.Y"
    {(yyval.real) = 0;;}
    break;

  case 90:
#line 611 "frame/parser.Y"
    {(yyval.real) = (yyvsp[(1) - (1)].real);;}
    break;

  case 91:
#line 614 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 92:
#line 615 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 93:
#line 616 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 94:
#line 619 "frame/parser.Y"
    {(yyval.real) = parseSEXStr((yyvsp[(1) - (1)].str));;}
    break;

  case 95:
#line 622 "frame/parser.Y"
    {(yyval.real) = parseHMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 96:
#line 625 "frame/parser.Y"
    {(yyval.real) = parseDMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 97:
#line 629 "frame/parser.Y"
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
#line 641 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 99:
#line 648 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 100:
#line 655 "frame/parser.Y"
    {
	  (yyval.vector)[0] = (yyvsp[(1) - (2)].real);
	  (yyval.vector)[1] = (yyvsp[(2) - (2)].real);
	  (yyval.vector)[2] = 1;
	;}
    break;

  case 101:
#line 662 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::IMAGE;;}
    break;

  case 102:
#line 663 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::PHYSICAL;;}
    break;

  case 103:
#line 664 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::DETECTOR;;}
    break;

  case 104:
#line 665 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::AMPLIFIER;;}
    break;

  case 105:
#line 666 "frame/parser.Y"
    {(yyval.integer) = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 106:
#line 669 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS;;}
    break;

  case 107:
#line 670 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSA;;}
    break;

  case 108:
#line 671 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSB;;}
    break;

  case 109:
#line 672 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSC;;}
    break;

  case 110:
#line 673 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSD;;}
    break;

  case 111:
#line 674 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSE;;}
    break;

  case 112:
#line 675 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSF;;}
    break;

  case 113:
#line 676 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSG;;}
    break;

  case 114:
#line 677 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSH;;}
    break;

  case 115:
#line 678 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSI;;}
    break;

  case 116:
#line 679 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSJ;;}
    break;

  case 117:
#line 680 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSK;;}
    break;

  case 118:
#line 681 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSL;;}
    break;

  case 119:
#line 682 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSM;;}
    break;

  case 120:
#line 683 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSN;;}
    break;

  case 121:
#line 684 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSO;;}
    break;

  case 122:
#line 685 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSP;;}
    break;

  case 123:
#line 686 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSQ;;}
    break;

  case 124:
#line 687 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSR;;}
    break;

  case 125:
#line 688 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSS;;}
    break;

  case 126:
#line 689 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCST;;}
    break;

  case 127:
#line 690 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSU;;}
    break;

  case 128:
#line 691 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSV;;}
    break;

  case 129:
#line 692 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSW;;}
    break;

  case 130:
#line 693 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSX;;}
    break;

  case 131:
#line 694 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSY;;}
    break;

  case 132:
#line 695 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSZ;;}
    break;

  case 133:
#line 696 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS0;;}
    break;

  case 134:
#line 699 "frame/parser.Y"
    {(yyval.integer) = Coord::CANVAS;;}
    break;

  case 135:
#line 700 "frame/parser.Y"
    {(yyval.integer) = Coord::PANNER;;}
    break;

  case 136:
#line 703 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 137:
#line 704 "frame/parser.Y"
    {(yyval.integer) = FitsMask::ZERO;;}
    break;

  case 138:
#line 705 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 139:
#line 706 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NaN;;}
    break;

  case 140:
#line 707 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONNaN;;}
    break;

  case 141:
#line 708 "frame/parser.Y"
    {(yyval.integer) = FitsMask::RANGE;;}
    break;

  case 142:
#line 711 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 143:
#line 712 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 144:
#line 713 "frame/parser.Y"
    {(yyval.integer) = FitsMask::MULTIPLY;;}
    break;

  case 145:
#line 714 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SCREEN;;}
    break;

  case 146:
#line 715 "frame/parser.Y"
    {(yyval.integer) = FitsMask::OVERLAY;;}
    break;

  case 147:
#line 716 "frame/parser.Y"
    {(yyval.integer) = FitsMask::DARKEN;;}
    break;

  case 148:
#line 717 "frame/parser.Y"
    {(yyval.integer) = FitsMask::LIGHTEN;;}
    break;

  case 149:
#line 718 "frame/parser.Y"
    {(yyval.integer) = FitsMask::COLOR_DODGE;;}
    break;

  case 150:
#line 719 "frame/parser.Y"
    {(yyval.integer) = FitsMask::COLOR_BURN;;}
    break;

  case 151:
#line 720 "frame/parser.Y"
    {(yyval.integer) = FitsMask::HARD_LIGHT;;}
    break;

  case 152:
#line 721 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOFT_LIGHT;;}
    break;

  case 153:
#line 722 "frame/parser.Y"
    {(yyval.integer) = FitsMask::DIFFERENCE;;}
    break;

  case 154:
#line 723 "frame/parser.Y"
    {(yyval.integer) = FitsMask::EXCLUSION;;}
    break;

  case 155:
#line 724 "frame/parser.Y"
    {(yyval.integer) = FitsMask::HUE;;}
    break;

  case 156:
#line 725 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SATURATION;;}
    break;

  case 157:
#line 726 "frame/parser.Y"
    {(yyval.integer) = FitsMask::COLOR;;}
    break;

  case 158:
#line 727 "frame/parser.Y"
    {(yyval.integer) = FitsMask::LUMINOSITY;;}
    break;

  case 159:
#line 730 "frame/parser.Y"
    {(yyval.integer) = FrScale::LINEARSCALE;;}
    break;

  case 160:
#line 731 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOGSCALE;;}
    break;

  case 161:
#line 732 "frame/parser.Y"
    {(yyval.integer) = FrScale::POWSCALE;;}
    break;

  case 162:
#line 733 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQRTSCALE;;}
    break;

  case 163:
#line 734 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQUAREDSCALE;;}
    break;

  case 164:
#line 735 "frame/parser.Y"
    {(yyval.integer) = FrScale::ASINHSCALE;;}
    break;

  case 165:
#line 736 "frame/parser.Y"
    {(yyval.integer) = FrScale::SINHSCALE;;}
    break;

  case 166:
#line 737 "frame/parser.Y"
    {(yyval.integer) = FrScale::HISTEQUSCALE;;}
    break;

  case 167:
#line 738 "frame/parser.Y"
    {(yyval.integer) = FrScale::GHSSCALE;;}
    break;

  case 168:
#line 741 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 169:
#line 742 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 170:
#line 743 "frame/parser.Y"
    {(yyval.integer)=FrScale::SAMPLE;;}
    break;

  case 171:
#line 744 "frame/parser.Y"
    {(yyval.integer)=FrScale::DATAMIN;;}
    break;

  case 172:
#line 745 "frame/parser.Y"
    {(yyval.integer)=FrScale::IRAFMIN;;}
    break;

  case 173:
#line 748 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 174:
#line 749 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 175:
#line 750 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 176:
#line 751 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 177:
#line 752 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 178:
#line 753 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 179:
#line 754 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::GALACTIC;;}
    break;

  case 180:
#line 755 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ECLIPTIC;;}
    break;

  case 181:
#line 758 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 182:
#line 759 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 183:
#line 760 "frame/parser.Y"
    {(yyval.integer)=Coord::SEXAGESIMAL;;}
    break;

  case 184:
#line 763 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 185:
#line 764 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 186:
#line 765 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCMIN;;}
    break;

  case 187:
#line 766 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCSEC;;}
    break;

  case 188:
#line 769 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 189:
#line 770 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 190:
#line 771 "frame/parser.Y"
    {(yyval.integer) = Base::KEY;;}
    break;

  case 191:
#line 774 "frame/parser.Y"
    {;}
    break;

  case 192:
#line 775 "frame/parser.Y"
    {;}
    break;

  case 193:
#line 776 "frame/parser.Y"
    {;}
    break;

  case 194:
#line 779 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 195:
#line 780 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 196:
#line 781 "frame/parser.Y"
    {(yyval.integer) = Base::MASK;;}
    break;

  case 197:
#line 785 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer) ? Marker::ARROW : Marker::NOEND;;}
    break;

  case 198:
#line 786 "frame/parser.Y"
    {(yyval.integer) = Marker::NOEND;;}
    break;

  case 199:
#line 787 "frame/parser.Y"
    {(yyval.integer) = Marker::ARROW;;}
    break;

  case 200:
#line 788 "frame/parser.Y"
    {(yyval.integer) = Marker::OPENARROW;;}
    break;

  case 201:
#line 789 "frame/parser.Y"
    {(yyval.integer) = Marker::CHEVRON;;}
    break;

  case 202:
#line 790 "frame/parser.Y"
    {(yyval.integer) = Marker::CIRCLE;;}
    break;

  case 203:
#line 791 "frame/parser.Y"
    {(yyval.integer) = Marker::OPENCIRCLE;;}
    break;

  case 204:
#line 792 "frame/parser.Y"
    {(yyval.integer) = Marker::BOX;;}
    break;

  case 205:
#line 793 "frame/parser.Y"
    {(yyval.integer) = Marker::OPENBOX;;}
    break;

  case 206:
#line 794 "frame/parser.Y"
    {(yyval.integer) = Marker::TRIANGLE;;}
    break;

  case 207:
#line 795 "frame/parser.Y"
    {(yyval.integer) = Marker::OPENTRIANGLE;;}
    break;

  case 208:
#line 796 "frame/parser.Y"
    {(yyval.integer) = Marker::BAR;;}
    break;

  case 209:
#line 799 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 210:
#line 800 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 211:
#line 801 "frame/parser.Y"
    {(yyval.integer) = Point::BOX;;}
    break;

  case 212:
#line 802 "frame/parser.Y"
    {(yyval.integer) = Point::DIAMOND;;}
    break;

  case 213:
#line 803 "frame/parser.Y"
    {(yyval.integer) = Point::CROSS;;}
    break;

  case 214:
#line 804 "frame/parser.Y"
    {(yyval.integer) = Point::EX;;}
    break;

  case 215:
#line 805 "frame/parser.Y"
    {(yyval.integer) = Point::ARROW;;}
    break;

  case 216:
#line 806 "frame/parser.Y"
    {(yyval.integer) = Point::BOXCIRCLE;;}
    break;

  case 217:
#line 807 "frame/parser.Y"
    {(yyval.integer) = Point::GLYPH;;}
    break;

  case 218:
#line 810 "frame/parser.Y"
    {(yyval.integer) = POINTSIZE;;}
    break;

  case 219:
#line 811 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 220:
#line 814 "frame/parser.Y"
    {(yyval.integer) = Marker::PANDA;;}
    break;

  case 221:
#line 815 "frame/parser.Y"
    {(yyval.integer) = Marker::HISTOGRAM;;}
    break;

  case 222:
#line 816 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT2D;;}
    break;

  case 223:
#line 817 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT3D;;}
    break;

  case 224:
#line 818 "frame/parser.Y"
    {(yyval.integer) = Marker::RADIAL;;}
    break;

  case 225:
#line 819 "frame/parser.Y"
    {(yyval.integer) = Marker::STATS;;}
    break;

  case 226:
#line 822 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 227:
#line 823 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 228:
#line 824 "frame/parser.Y"
    {(yyval.integer) = Marker::SUM;;}
    break;

  case 229:
#line 825 "frame/parser.Y"
    {(yyval.integer) = Marker::MEDIAN;;}
    break;

  case 230:
#line 828 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 231:
#line 829 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 232:
#line 830 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 233:
#line 831 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 234:
#line 832 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 235:
#line 833 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 240:
#line 840 "frame/parser.Y"
    {fr->set3dRenderMethodCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 241:
#line 841 "frame/parser.Y"
    {fr->set3dRenderBackgroundCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 243:
#line 843 "frame/parser.Y"
    {fr->set3dScaleCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 244:
#line 844 "frame/parser.Y"
    {fr->set3dSyncCmd((yyvsp[(2) - (2)].integer));}
    break;

  case 245:
#line 846 "frame/parser.Y"
    {/* needed for compatibility with old version of backup */;}
    break;

  case 246:
#line 849 "frame/parser.Y"
    {fr->set3dShadeCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 247:
#line 850 "frame/parser.Y"
    {fr->set3dShadeAmbientCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 248:
#line 851 "frame/parser.Y"
    {fr->set3dShadeStrengthCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 250:
#line 855 "frame/parser.Y"
    {fr->set3dShadeNormalCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 251:
#line 856 "frame/parser.Y"
    {fr->set3dShadeNormalStrengthCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 252:
#line 859 "frame/parser.Y"
    {fr->set3dBorderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 253:
#line 860 "frame/parser.Y"
    {fr->set3dBorderColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 254:
#line 863 "frame/parser.Y"
    {fr->set3dCompassCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 255:
#line 864 "frame/parser.Y"
    {fr->set3dCompassColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 256:
#line 867 "frame/parser.Y"
    {fr->set3dHighliteCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 257:
#line 868 "frame/parser.Y"
    {fr->set3dHighliteColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 258:
#line 871 "frame/parser.Y"
    {fr->set3dViewCmd((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));;}
    break;

  case 259:
#line 873 "frame/parser.Y"
    {fr->set3dViewPointCmd(Vector3d((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 261:
#line 877 "frame/parser.Y"
    {fr->binColsCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 262:
#line 878 "frame/parser.Y"
    {fr->binDepthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 265:
#line 881 "frame/parser.Y"
    {fr->binBufferSizeCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 267:
#line 883 "frame/parser.Y"
    {fr->binFilterCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 268:
#line 886 "frame/parser.Y"
    {fr->binAboutCmd();;}
    break;

  case 269:
#line 887 "frame/parser.Y"
    {fr->binAboutCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 270:
#line 890 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 271:
#line 891 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 272:
#line 893 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(1) - (4)].real)), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 273:
#line 895 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 274:
#line 896 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 275:
#line 897 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 276:
#line 899 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 277:
#line 901 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 278:
#line 904 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::AVERAGE);;}
    break;

  case 279:
#line 905 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::SUM);;}
    break;

  case 280:
#line 908 "frame/parser.Y"
    {fr->binToFitCmd();;}
    break;

  case 281:
#line 910 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (7)].real),(yyvsp[(2) - (7)].real)), (yyvsp[(5) - (7)].str), (yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].str));;}
    break;

  case 282:
#line 913 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (11)].real),(yyvsp[(2) - (11)].real)), (yyvsp[(3) - (11)].integer), Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)), (yyvsp[(8) - (11)].str), (yyvsp[(9) - (11)].str), (yyvsp[(10) - (11)].str), (yyvsp[(11) - (11)].str));;}
    break;

  case 283:
#line 915 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (8)].real),(yyvsp[(2) - (8)].real)), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (yyvsp[(6) - (8)].str), (yyvsp[(7) - (8)].str), (yyvsp[(8) - (8)].str));;}
    break;

  case 284:
#line 918 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (12)].real),(yyvsp[(2) - (12)].real)), (yyvsp[(3) - (12)].integer), Vector((yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real)), Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    (yyvsp[(9) - (12)].str), (yyvsp[(10) - (12)].str), (yyvsp[(11) - (12)].str), (yyvsp[(12) - (12)].str));;}
    break;

  case 285:
#line 922 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 286:
#line 923 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 288:
#line 925 "frame/parser.Y"
    {fr->blockNanZeroCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 289:
#line 928 "frame/parser.Y"
    {fr->blockToFitCmd();;}
    break;

  case 290:
#line 929 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 291:
#line 930 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 295:
#line 936 "frame/parser.Y"
    {fr->clipUserCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 296:
#line 937 "frame/parser.Y"
    {fr->clipUserCmd(NAN,NAN);;}
    break;

  case 298:
#line 940 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 299:
#line 945 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::GLOBAL);;}
    break;

  case 300:
#line 946 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::LOCAL);;}
    break;

  case 301:
#line 949 "frame/parser.Y"
    {fr->clipModeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 302:
#line 950 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::MINMAX);;}
    break;

  case 303:
#line 951 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZSCALE);;}
    break;

  case 304:
#line 952 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZMAX);;}
    break;

  case 305:
#line 953 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::USERCLIP);;}
    break;

  case 306:
#line 956 "frame/parser.Y"
    {fr->clipMinMaxCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer),(yyvsp[(1) - (2)].integer));;}
    break;

  case 307:
#line 957 "frame/parser.Y"
    {fr->clipMinMaxModeCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer));;}
    break;

  case 308:
#line 958 "frame/parser.Y"
    {fr->clipMinMaxSampleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 309:
#line 959 "frame/parser.Y"
    {fr->clipMinMaxRescanCmd();;}
    break;

  case 310:
#line 962 "frame/parser.Y"
    {fr->clipZScaleCmd((yyvsp[(1) - (3)].real),(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 311:
#line 964 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleContrastCmd((yyvsp[(2) - (2)].real));
        ;}
    break;

  case 312:
#line 969 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleSampleCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 313:
#line 974 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleLineCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 314:
#line 981 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].real), (yyvsp[(3) - (5)].real), (yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].integer));;}
    break;

  case 315:
#line 983 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 316:
#line 985 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 317:
#line 987 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 318:
#line 989 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (7)].integer),(yyvsp[(3) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(yyvsp[(7) - (7)].integer));;}
    break;

  case 322:
#line 996 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].real), (yyvsp[(3) - (5)].real), (yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].integer));;}
    break;

  case 323:
#line 998 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 324:
#line 1000 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 325:
#line 1002 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 326:
#line 1004 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (7)].integer),(yyvsp[(3) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(yyvsp[(7) - (7)].integer));;}
    break;

  case 327:
#line 1006 "frame/parser.Y"
    {fr->colorScaleCmd((FrScale::ColorScaleType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 328:
#line 1007 "frame/parser.Y"
    {fr->colorScaleLogCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 329:
#line 1009 "frame/parser.Y"
    {fr->colorScaleGhsCmd((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 330:
#line 1012 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 331:
#line 1013 "frame/parser.Y"
    {(yyval.real)=NAN;;}
    break;

  case 333:
#line 1017 "frame/parser.Y"
    {fr->contourDashListCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 340:
#line 1026 "frame/parser.Y"
    {fr->contourAuxNameCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 341:
#line 1027 "frame/parser.Y"
    {fr->contourAuxResetCmd((yyvsp[(2) - (2)].integer),-1);;}
    break;

  case 342:
#line 1028 "frame/parser.Y"
    {fr->contourAuxResetCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 343:
#line 1030 "frame/parser.Y"
    {fr->contourAuxStyleCmd((yyvsp[(2) - (8)].integer),(yyvsp[(3) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].integer),(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 344:
#line 1032 "frame/parser.Y"
    {fr->contourAuxStyleCmd((yyvsp[(2) - (8)].integer),-1,(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].integer),(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 345:
#line 1036 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),(FrScale::ClipMode)(yyvsp[(9) - (13)].integer),100,(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 346:
#line 1039 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),FrScale::AUTOCUT,(yyvsp[(9) - (13)].real),(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 347:
#line 1042 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),(FrScale::ClipMode)(yyvsp[(9) - (12)].integer),100,FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 348:
#line 1048 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),FrScale::AUTOCUT,(yyvsp[(9) - (12)].real),FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 349:
#line 1053 "frame/parser.Y"
    {fr->contourCreatePolygonCmd();;}
    break;

  case 350:
#line 1056 "frame/parser.Y"
    {fr->contourDeleteCmd();;}
    break;

  case 351:
#line 1057 "frame/parser.Y"
    {fr->contourDeleteAuxCmd();;}
    break;

  case 352:
#line 1058 "frame/parser.Y"
    {fr->contourDeleteAuxCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 353:
#line 1061 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 354:
#line 1062 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 355:
#line 1064 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourLoadCmd((yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer),(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer));
	;}
    break;

  case 356:
#line 1070 "frame/parser.Y"
    {(yyval.integer) = FrScale::MINMAX;;}
    break;

  case 357:
#line 1071 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZSCALE;;}
    break;

  case 358:
#line 1072 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZMAX;;}
    break;

  case 359:
#line 1073 "frame/parser.Y"
    {(yyval.integer) = FrScale::USERCLIP;;}
    break;

  case 360:
#line 1076 "frame/parser.Y"
    {(yyval.integer) = FrScale::GLOBAL;;}
    break;

  case 361:
#line 1077 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOCAL;;}
    break;

  case 362:
#line 1080 "frame/parser.Y"
    {(yyval.integer) = FVContour::SMOOTH;;}
    break;

  case 363:
#line 1081 "frame/parser.Y"
    {(yyval.integer) = FVContour::BLOCK;;}
    break;

  case 364:
#line 1084 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 365:
#line 1085 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 366:
#line 1087 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 367:
#line 1091 "frame/parser.Y"
    {fr->contourSaveCmd((yyvsp[(1) - (3)].str), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 368:
#line 1093 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (4)].str),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 369:
#line 1095 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].str),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 370:
#line 1098 "frame/parser.Y"
    {fr->contourStyleClearCmd();;}
    break;

  case 371:
#line 1099 "frame/parser.Y"
    {fr->contourStyleClearCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 372:
#line 1100 "frame/parser.Y"
    {fr->contourStyleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer),0,0);;}
    break;

  case 373:
#line 1101 "frame/parser.Y"
    {fr->contourStyleCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 374:
#line 1104 "frame/parser.Y"
    {fr->cropCmd();;}
    break;

  case 375:
#line 1106 "frame/parser.Y"
    {fr->cropCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 376:
#line 1109 "frame/parser.Y"
    {fr->cropCenterCmd(Vector((yyvsp[(2) - (8)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), Vector((yyvsp[(5) - (8)].real),(yyvsp[(6) - (8)].real)), (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 378:
#line 1111 "frame/parser.Y"
    {fr->cropBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 379:
#line 1112 "frame/parser.Y"
    {fr->cropMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 380:
#line 1113 "frame/parser.Y"
    {fr->cropEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 381:
#line 1116 "frame/parser.Y"
    {fr->crop3dCmd();;}
    break;

  case 382:
#line 1118 "frame/parser.Y"
    {fr->crop3dCmd((yyvsp[(1) - (4)].real), (yyvsp[(2) - (4)].real), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 383:
#line 1119 "frame/parser.Y"
    {fr->crop3dBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 384:
#line 1120 "frame/parser.Y"
    {fr->crop3dMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 385:
#line 1121 "frame/parser.Y"
    {fr->crop3dEndCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 386:
#line 1125 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), (Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 387:
#line 1127 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 388:
#line 1128 "frame/parser.Y"
    {fr->crosshairCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 389:
#line 1129 "frame/parser.Y"
    {fr->crosshairWarpCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 390:
#line 1132 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)), (Coord::InternalSystem)(yyvsp[(3) - (5)].integer));;}
    break;

  case 391:
#line 1134 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 392:
#line 1136 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer));;}
    break;

  case 393:
#line 1138 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 394:
#line 1141 "frame/parser.Y"
    {fr->axesOrderCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 395:
#line 1144 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 396:
#line 1145 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 397:
#line 1146 "frame/parser.Y"
    {(yyval.integer) = Base::SUM;;}
    break;

  case 398:
#line 1147 "frame/parser.Y"
    {(yyval.integer) = Base::MEDIAN;;}
    break;

  case 399:
#line 1150 "frame/parser.Y"
    {fr->fadeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 400:
#line 1151 "frame/parser.Y"
    {fr->fadeClearCmd();;}
    break;

  case 401:
#line 1154 "frame/parser.Y"
    {fr->fitsyHasExtCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 402:
#line 1155 "frame/parser.Y"
    {fr->fitsyInfoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 403:
#line 1158 "frame/parser.Y"
    {fr->getCmd();;}
    break;

  case 404:
#line 1159 "frame/parser.Y"
    {fr->getBgColorCmd();;}
    break;

  case 418:
#line 1173 "frame/parser.Y"
    {fr->getDATASECCmd();;}
    break;

  case 421:
#line 1176 "frame/parser.Y"
    {fr->getHighliteColorCmd();;}
    break;

  case 422:
#line 1177 "frame/parser.Y"
    {fr->getHistogramCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].integer));;}
    break;

  case 428:
#line 1183 "frame/parser.Y"
    {fr->getIRAFAlignCmd();;}
    break;

  case 429:
#line 1184 "frame/parser.Y"
    {fr->getMinMaxCmd();;}
    break;

  case 434:
#line 1189 "frame/parser.Y"
    {fr->getNANColorCmd();;}
    break;

  case 435:
#line 1190 "frame/parser.Y"
    {fr->getOrientCmd();;}
    break;

  case 437:
#line 1193 "frame/parser.Y"
    {fr->getPixelTableCmd(Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (Coord::InternalSystem)(yyvsp[(3) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(7) - (8)].integer), (yyvsp[(8) - (8)].str));;}
    break;

  case 439:
#line 1195 "frame/parser.Y"
    {fr->getRotateCmd();;}
    break;

  case 441:
#line 1197 "frame/parser.Y"
    {fr->getThreadsCmd();;}
    break;

  case 443:
#line 1199 "frame/parser.Y"
    {fr->getTypeCmd();;}
    break;

  case 444:
#line 1201 "frame/parser.Y"
    {fr->getValueCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 447:
#line 1204 "frame/parser.Y"
    {fr->getZoomCmd();;}
    break;

  case 448:
#line 1208 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 449:
#line 1210 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 450:
#line 1214 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 451:
#line 1216 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 452:
#line 1219 "frame/parser.Y"
    {fr->getBinDepthCmd();;}
    break;

  case 453:
#line 1220 "frame/parser.Y"
    {fr->getBinFactorCmd();;}
    break;

  case 454:
#line 1221 "frame/parser.Y"
    {fr->getBinFunctionCmd();;}
    break;

  case 455:
#line 1222 "frame/parser.Y"
    {fr->getBinBufferSizeCmd();;}
    break;

  case 456:
#line 1223 "frame/parser.Y"
    {fr->getBinCursorCmd();;}
    break;

  case 457:
#line 1224 "frame/parser.Y"
    {fr->getBinFilterCmd();;}
    break;

  case 459:
#line 1226 "frame/parser.Y"
    {fr->getBinListCmd();;}
    break;

  case 460:
#line 1229 "frame/parser.Y"
    {fr->getBinColsCmd();;}
    break;

  case 461:
#line 1230 "frame/parser.Y"
    {fr->getBinColsMinMaxCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 462:
#line 1231 "frame/parser.Y"
    {fr->getBinColsDimCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 463:
#line 1234 "frame/parser.Y"
    {fr->getBlockCmd();;}
    break;

  case 464:
#line 1235 "frame/parser.Y"
    {fr->getBlockNanZeroCmd();;}
    break;

  case 465:
#line 1238 "frame/parser.Y"
    {fr->getClipCmd();;}
    break;

  case 466:
#line 1240 "frame/parser.Y"
    {fr->getClipCmd((FrScale::ClipMode)(yyvsp[(1) - (2)].integer), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 467:
#line 1242 "frame/parser.Y"
    {fr->getClipCmd((yyvsp[(1) - (2)].real), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 468:
#line 1243 "frame/parser.Y"
    {fr->getClipScopeCmd();;}
    break;

  case 469:
#line 1244 "frame/parser.Y"
    {fr->getClipModeCmd();;}
    break;

  case 471:
#line 1246 "frame/parser.Y"
    {fr->getClipUserCmd();;}
    break;

  case 473:
#line 1249 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	;}
    break;

  case 474:
#line 1255 "frame/parser.Y"
    {fr->getClipMinMaxModeCmd();;}
    break;

  case 475:
#line 1256 "frame/parser.Y"
    {fr->getClipMinMaxSampleCmd();;}
    break;

  case 476:
#line 1259 "frame/parser.Y"
    {fr->getClipZScaleContrastCmd();;}
    break;

  case 477:
#line 1260 "frame/parser.Y"
    {fr->getClipZScaleSampleCmd();;}
    break;

  case 478:
#line 1261 "frame/parser.Y"
    {fr->getClipZScaleLineCmd();;}
    break;

  case 479:
#line 1264 "frame/parser.Y"
    {fr->getColorbarCmd();;}
    break;

  case 480:
#line 1265 "frame/parser.Y"
    {fr->getColorbarTagCmd();;}
    break;

  case 482:
#line 1271 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 483:
#line 1273 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 484:
#line 1275 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 485:
#line 1278 "frame/parser.Y"
    {fr->getColorScaleCmd();;}
    break;

  case 487:
#line 1280 "frame/parser.Y"
    {fr->getColorScaleLogCmd();;}
    break;

  case 488:
#line 1281 "frame/parser.Y"
    {fr->getColorScaleGhsCmd();;}
    break;

  case 489:
#line 1285 "frame/parser.Y"
    {fr->getColorScaleLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 490:
#line 1289 "frame/parser.Y"
    {fr->getContourCmd((Coord::CoordSystem)(yyvsp[(1) - (2)].integer),(Coord::SkyFrame)(yyvsp[(2) - (2)].integer));;}
    break;

  case 491:
#line 1290 "frame/parser.Y"
    {fr->getContourAuxCountCmd();;}
    break;

  case 493:
#line 1292 "frame/parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 494:
#line 1293 "frame/parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 495:
#line 1294 "frame/parser.Y"
    {fr->getContourDashListCmd();;}
    break;

  case 496:
#line 1295 "frame/parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 497:
#line 1296 "frame/parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 498:
#line 1297 "frame/parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 500:
#line 1299 "frame/parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 501:
#line 1300 "frame/parser.Y"
    {fr->getContourStyleCmd();;}
    break;

  case 502:
#line 1301 "frame/parser.Y"
    {fr->getContourStyleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 503:
#line 1302 "frame/parser.Y"
    {fr->getContourAuxCmd();;}
    break;

  case 504:
#line 1303 "frame/parser.Y"
    {fr->getContourAuxStyleCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 505:
#line 1304 "frame/parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 506:
#line 1307 "frame/parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 507:
#line 1308 "frame/parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 508:
#line 1309 "frame/parser.Y"
    {fr->getContourClipScopeCmd();;}
    break;

  case 509:
#line 1312 "frame/parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 510:
#line 1313 "frame/parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 511:
#line 1317 "frame/parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 512:
#line 1319 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 513:
#line 1327 "frame/parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 514:
#line 1329 "frame/parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 515:
#line 1331 "frame/parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 516:
#line 1334 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 517:
#line 1336 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 518:
#line 1337 "frame/parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 519:
#line 1340 "frame/parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 520:
#line 1343 "frame/parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 521:
#line 1345 "frame/parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 522:
#line 1349 "frame/parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 523:
#line 1351 "frame/parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 524:
#line 1354 "frame/parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 525:
#line 1358 "frame/parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (2)].str), (Base::FileNameType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 526:
#line 1359 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 527:
#line 1361 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)), (Coord::InternalSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (Base::FileNameType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 528:
#line 1364 "frame/parser.Y"
    {fr->iisGetCmd((yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 529:
#line 1365 "frame/parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 531:
#line 1369 "frame/parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 532:
#line 1370 "frame/parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 533:
#line 1371 "frame/parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 534:
#line 1374 "frame/parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 535:
#line 1376 "frame/parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 536:
#line 1377 "frame/parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 538:
#line 1379 "frame/parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 542:
#line 1383 "frame/parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 543:
#line 1384 "frame/parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 544:
#line 1385 "frame/parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 545:
#line 1387 "frame/parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::DistFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 547:
#line 1389 "frame/parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 548:
#line 1392 "frame/parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 549:
#line 1394 "frame/parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 550:
#line 1396 "frame/parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 551:
#line 1397 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 552:
#line 1398 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 553:
#line 1399 "frame/parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 554:
#line 1402 "frame/parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 555:
#line 1403 "frame/parser.Y"
    {fr->getFitsDepthCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 556:
#line 1407 "frame/parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 557:
#line 1409 "frame/parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 558:
#line 1412 "frame/parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 559:
#line 1415 "frame/parser.Y"
    {fr->getFitsSliceCmd(2);;}
    break;

  case 560:
#line 1416 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 561:
#line 1418 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 562:
#line 1420 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((yyvsp[(3) - (4)].integer), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 563:
#line 1422 "frame/parser.Y"
    {fr->getFitsSliceToImageCmd((yyvsp[(3) - (4)].real), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 564:
#line 1425 "frame/parser.Y"
    {fr->getGridCmd();;}
    break;

  case 565:
#line 1426 "frame/parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 566:
#line 1427 "frame/parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 567:
#line 1430 "frame/parser.Y"
    {fr->getLayerCountCmd();;}
    break;

  case 568:
#line 1431 "frame/parser.Y"
    {fr->getLayerNoCmd();;}
    break;

  case 569:
#line 1432 "frame/parser.Y"
    {fr->getLayerColorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 570:
#line 1433 "frame/parser.Y"
    {fr->getLayerBlendCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 571:
#line 1434 "frame/parser.Y"
    {fr->getLayerTransparencyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 572:
#line 1435 "frame/parser.Y"
    {fr->getLayerViewCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 573:
#line 1438 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 574:
#line 1439 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 575:
#line 1440 "frame/parser.Y"
    {fr->getMaskRangeCmd();;}
    break;

  case 576:
#line 1441 "frame/parser.Y"
    {fr->getMaskSystemCmd();;}
    break;

  case 577:
#line 1442 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 578:
#line 1443 "frame/parser.Y"
    {fr->getMaskCountCmd();;}
    break;

  case 579:
#line 1444 "frame/parser.Y"
    {fr->getMaskBlendCmd();;}
    break;

  case 580:
#line 1447 "frame/parser.Y"
    {(yyval.integer) = 0;;}
    break;

  case 581:
#line 1448 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 582:
#line 1451 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 583:
#line 1454 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 584:
#line 1455 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 585:
#line 1456 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 586:
#line 1459 "frame/parser.Y"
    {fr->getMultiColorSystemCmd();;}
    break;

  case 587:
#line 1462 "frame/parser.Y"
    {fr->getHLSChannelCmd();;}
    break;

  case 588:
#line 1463 "frame/parser.Y"
    {fr->getHLSSystemCmd();;}
    break;

  case 589:
#line 1464 "frame/parser.Y"
    {fr->getHLSViewCmd();;}
    break;

  case 590:
#line 1467 "frame/parser.Y"
    {fr->getHSVChannelCmd();;}
    break;

  case 591:
#line 1468 "frame/parser.Y"
    {fr->getHSVSystemCmd();;}
    break;

  case 592:
#line 1469 "frame/parser.Y"
    {fr->getHSVViewCmd();;}
    break;

  case 593:
#line 1472 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 594:
#line 1473 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 595:
#line 1474 "frame/parser.Y"
    {fr->getSmoothRadiusMinorCmd();;}
    break;

  case 596:
#line 1475 "frame/parser.Y"
    {fr->getSmoothSigmaCmd();;}
    break;

  case 597:
#line 1476 "frame/parser.Y"
    {fr->getSmoothSigmaMinorCmd();;}
    break;

  case 598:
#line 1477 "frame/parser.Y"
    {fr->getSmoothAngleCmd();;}
    break;

  case 603:
#line 1484 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 604:
#line 1485 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 606:
#line 1487 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 607:
#line 1490 "frame/parser.Y"
    {fr->get3dShadeCmd();;}
    break;

  case 608:
#line 1491 "frame/parser.Y"
    {fr->get3dShadeAmbientCmd();;}
    break;

  case 609:
#line 1492 "frame/parser.Y"
    {fr->get3dShadeStrengthCmd();;}
    break;

  case 611:
#line 1496 "frame/parser.Y"
    {fr->get3dShadeNormalCmd();;}
    break;

  case 612:
#line 1497 "frame/parser.Y"
    {fr->get3dShadeNormalStrengthCmd();;}
    break;

  case 613:
#line 1500 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 614:
#line 1501 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 615:
#line 1504 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 616:
#line 1505 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 617:
#line 1508 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 618:
#line 1509 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 619:
#line 1512 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 620:
#line 1513 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 621:
#line 1516 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 623:
#line 1518 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 624:
#line 1521 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 625:
#line 1522 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 627:
#line 1526 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 628:
#line 1530 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 629:
#line 1533 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer),
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 630:
#line 1540 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 631:
#line 1541 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 632:
#line 1544 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 633:
#line 1545 "frame/parser.Y"
    {fr->hasBgColorCmd();;}
    break;

  case 636:
#line 1548 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 637:
#line 1549 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 638:
#line 1550 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 639:
#line 1551 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 641:
#line 1553 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 642:
#line 1554 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 643:
#line 1555 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 645:
#line 1557 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 646:
#line 1558 "frame/parser.Y"
    {fr->hasImageCmd();;}
    break;

  case 647:
#line 1559 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 648:
#line 1560 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 650:
#line 1564 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 651:
#line 1567 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 652:
#line 1568 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 653:
#line 1571 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 654:
#line 1572 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 655:
#line 1573 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 656:
#line 1574 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 657:
#line 1577 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 658:
#line 1578 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 659:
#line 1579 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 660:
#line 1580 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 661:
#line 1583 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 662:
#line 1584 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 663:
#line 1585 "frame/parser.Y"
    {fr->hasWCSEquCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 664:
#line 1586 "frame/parser.Y"
    {fr->hasWCSLinearCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 665:
#line 1587 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 666:
#line 1588 "frame/parser.Y"
    {fr->hasWCS3DCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 667:
#line 1591 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 668:
#line 1592 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 669:
#line 1593 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 672:
#line 1597 "frame/parser.Y"
    {fr->iisSetCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 673:
#line 1598 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 674:
#line 1601 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 675:
#line 1604 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 676:
#line 1605 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 677:
#line 1609 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 678:
#line 1611 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 679:
#line 1612 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 687:
#line 1625 "frame/parser.Y"
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
#line 1637 "frame/parser.Y"
    {
	  if (!strcmp((yyvsp[(1) - (3)].str),"hips"))
	    fr->loadHiPSCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));
	  else {
	    fr->error("load: unknown type (array, envi, fits, hips, incr, nrrd, photo)");
	    YYERROR;
	  }
	;}
    break;

  case 690:
#line 1649 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 691:
#line 1651 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 692:
#line 1653 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 693:
#line 1654 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 694:
#line 1656 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 695:
#line 1658 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 696:
#line 1660 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 697:
#line 1662 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 698:
#line 1664 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 702:
#line 1670 "frame/parser.Y"
    {fr->loadRGBArrayCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 703:
#line 1671 "frame/parser.Y"
    {fr->loadRGBArrayCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 704:
#line 1672 "frame/parser.Y"
    {fr->loadRGBArrayCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 705:
#line 1673 "frame/parser.Y"
    {fr->loadRGBArrayCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 706:
#line 1674 "frame/parser.Y"
    {fr->loadRGBArrayCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 707:
#line 1676 "frame/parser.Y"
    {fr->loadRGBArrayCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 708:
#line 1677 "frame/parser.Y"
    {fr->loadRGBArrayCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 709:
#line 1678 "frame/parser.Y"
    {fr->loadRGBArrayCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 710:
#line 1679 "frame/parser.Y"
    {fr->loadRGBArrayCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 711:
#line 1682 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 712:
#line 1686 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 713:
#line 1688 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 714:
#line 1690 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 715:
#line 1692 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 716:
#line 1694 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 717:
#line 1696 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 718:
#line 1698 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 719:
#line 1700 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str),
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 720:
#line 1703 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 721:
#line 1705 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 722:
#line 1707 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 732:
#line 1719 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 733:
#line 1720 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 734:
#line 1721 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 735:
#line 1722 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 736:
#line 1723 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 737:
#line 1724 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 738:
#line 1726 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 739:
#line 1728 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 740:
#line 1729 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 741:
#line 1730 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 742:
#line 1731 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 743:
#line 1734 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 744:
#line 1735 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 745:
#line 1736 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 746:
#line 1737 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 747:
#line 1738 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 748:
#line 1740 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 749:
#line 1741 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 750:
#line 1742 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 751:
#line 1743 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 757:
#line 1754 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 758:
#line 1757 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 759:
#line 1760 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 760:
#line 1763 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 761:
#line 1766 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 762:
#line 1769 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 763:
#line 1772 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 764:
#line 1775 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 765:
#line 1778 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 766:
#line 1783 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 767:
#line 1786 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 768:
#line 1789 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 769:
#line 1792 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 770:
#line 1795 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 771:
#line 1798 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 772:
#line 1801 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 773:
#line 1804 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 774:
#line 1807 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 775:
#line 1810 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 776:
#line 1813 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 777:
#line 1818 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 778:
#line 1821 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 779:
#line 1824 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 780:
#line 1827 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 781:
#line 1830 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 782:
#line 1833 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer),
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 783:
#line 1836 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 784:
#line 1839 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 785:
#line 1842 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 786:
#line 1847 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 787:
#line 1849 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 788:
#line 1851 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 789:
#line 1853 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 790:
#line 1855 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 791:
#line 1857 "frame/parser.Y"
    {
	  fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str),
					   (Base::LayerType)(yyvsp[(6) - (6)].integer));
        ;}
    break;

  case 792:
#line 1862 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 793:
#line 1864 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 794:
#line 1866 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 795:
#line 1870 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 796:
#line 1873 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 797:
#line 1876 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 798:
#line 1879 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 799:
#line 1882 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 800:
#line 1885 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 801:
#line 1888 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer),
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 802:
#line 1891 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer),
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 803:
#line 1894 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 804:
#line 1897 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 805:
#line 1900 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 806:
#line 1904 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 807:
#line 1905 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 808:
#line 1906 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 809:
#line 1907 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 810:
#line 1908 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 811:
#line 1909 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 812:
#line 1911 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 813:
#line 1913 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 814:
#line 1914 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 815:
#line 1915 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 816:
#line 1916 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 817:
#line 1919 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 818:
#line 1920 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 819:
#line 1921 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 820:
#line 1922 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 821:
#line 1923 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 822:
#line 1925 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 823:
#line 1926 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 824:
#line 1927 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 825:
#line 1928 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 826:
#line 1932 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 827:
#line 1934 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 828:
#line 1935 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 829:
#line 1937 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 830:
#line 1939 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 831:
#line 1941 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 832:
#line 1948 "frame/parser.Y"
    {fr->loadAsdfCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 833:
#line 1951 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 834:
#line 1952 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 835:
#line 1958 "frame/parser.Y"
    {fr->loadTiffCmd((yyvsp[(1) - (2)].str), (yyvsp[(1) - (2)].str), (Base::LayerType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 836:
#line 1960 "frame/parser.Y"
    {fr->loadTiffCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 837:
#line 1962 "frame/parser.Y"
    {fr->loadSliceTiffCmd((yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str));;}
    break;

  case 838:
#line 1965 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 839:
#line 1966 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 840:
#line 1967 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 841:
#line 1970 "frame/parser.Y"
    {;}
    break;

  case 842:
#line 1973 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 843:
#line 1974 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 844:
#line 1975 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 845:
#line 1976 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 846:
#line 1977 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 847:
#line 1978 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 848:
#line 1979 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 849:
#line 1983 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 851:
#line 1991 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 852:
#line 1992 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 853:
#line 1994 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 854:
#line 1996 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 855:
#line 1997 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 856:
#line 1998 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 858:
#line 1999 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 861:
#line 2002 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 862:
#line 2003 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 863:
#line 2005 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 864:
#line 2007 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 865:
#line 2009 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 866:
#line 2012 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 867:
#line 2014 "frame/parser.Y"
    {fr->regionStatsCallbackCmd((yyvsp[(4) - (4)].str));;}
    break;

  case 868:
#line 2016 "frame/parser.Y"
    {fr->regionStatsCallbackCmd(NULL);;}
    break;

  case 869:
#line 2018 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 870:
#line 2019 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 871:
#line 2021 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 872:
#line 2024 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 873:
#line 2027 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 874:
#line 2031 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 875:
#line 2034 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 876:
#line 2037 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 877:
#line 2040 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 878:
#line 2044 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 879:
#line 2048 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 880:
#line 2053 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str),
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 881:
#line 2057 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 882:
#line 2059 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 883:
#line 2060 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 884:
#line 2062 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 885:
#line 2064 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 886:
#line 2066 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 887:
#line 2068 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 888:
#line 2070 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 889:
#line 2071 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 890:
#line 2072 "frame/parser.Y"
    {fr->markerCompositeAreaCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 891:
#line 2074 "frame/parser.Y"
    {fr->markerCompositeOperationCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 892:
#line 2076 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 893:
#line 2078 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 894:
#line 2081 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 895:
#line 2085 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 896:
#line 2089 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 897:
#line 2091 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 898:
#line 2093 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 899:
#line 2095 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 900:
#line 2097 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 901:
#line 2099 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 902:
#line 2101 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 903:
#line 2103 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 904:
#line 2105 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 905:
#line 2107 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 906:
#line 2109 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 907:
#line 2111 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 908:
#line 2113 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 909:
#line 2115 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 910:
#line 2116 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 911:
#line 2118 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 912:
#line 2120 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 913:
#line 2121 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 914:
#line 2122 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 915:
#line 2124 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 916:
#line 2126 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 917:
#line 2127 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 918:
#line 2128 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 919:
#line 2129 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 920:
#line 2131 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 921:
#line 2133 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 922:
#line 2137 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 923:
#line 2140 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 924:
#line 2143 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 925:
#line 2147 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 926:
#line 2151 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 927:
#line 2156 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str),
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 928:
#line 2160 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 929:
#line 2161 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 930:
#line 2162 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 931:
#line 2164 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 932:
#line 2165 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 933:
#line 2167 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 934:
#line 2171 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 935:
#line 2172 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 936:
#line 2173 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 937:
#line 2175 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 938:
#line 2178 "frame/parser.Y"
    {fr->markerPolygonPointCmd((yyvsp[(1) - (7)].integer),(yyvsp[(7) - (7)].str),(Coord::CoordSystem)(yyvsp[(4) - (7)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),(Coord::SkyFormat)(yyvsp[(6) - (7)].integer));;}
    break;

  case 939:
#line 2181 "frame/parser.Y"
    {fr->markerPolygonPointVarCmd((yyvsp[(1) - (8)].integer),(yyvsp[(8) - (8)].str),(Coord::CoordSystem)(yyvsp[(4) - (8)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (8)].integer),(Coord::SkyFormat)(yyvsp[(6) - (8)].integer));;}
    break;

  case 940:
#line 2184 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 941:
#line 2187 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 942:
#line 2190 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 943:
#line 2191 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 944:
#line 2192 "frame/parser.Y"
    {fr->markerPointGlyphCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 945:
#line 2196 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 946:
#line 2200 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 947:
#line 2202 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 948:
#line 2203 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 949:
#line 2205 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 950:
#line 2208 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 951:
#line 2211 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 952:
#line 2212 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 953:
#line 2214 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 954:
#line 2215 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 955:
#line 2216 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 956:
#line 2218 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 957:
#line 2219 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 958:
#line 2221 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 959:
#line 2222 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 960:
#line 2225 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 961:
#line 2228 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 962:
#line 2229 "frame/parser.Y"
    {fr->markerDashListCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 963:
#line 2231 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 964:
#line 2232 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 968:
#line 2237 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 969:
#line 2238 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 970:
#line 2240 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 971:
#line 2242 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 972:
#line 2244 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 973:
#line 2245 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 977:
#line 2251 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 978:
#line 2252 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 979:
#line 2253 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 980:
#line 2254 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 981:
#line 2255 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 982:
#line 2256 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 983:
#line 2257 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 984:
#line 2258 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 985:
#line 2259 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 986:
#line 2260 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 987:
#line 2262 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 988:
#line 2264 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 989:
#line 2265 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 990:
#line 2266 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 991:
#line 2267 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 992:
#line 2268 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 993:
#line 2270 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 994:
#line 2271 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 995:
#line 2272 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 996:
#line 2273 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 997:
#line 2274 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 998:
#line 2276 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 999:
#line 2277 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1000:
#line 2278 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 1001:
#line 2279 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 1002:
#line 2280 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 1003:
#line 2281 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1004:
#line 2282 "frame/parser.Y"
    {fr->markerDashListCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1005:
#line 2285 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 1006:
#line 2286 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 1007:
#line 2287 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 1008:
#line 2288 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 1009:
#line 2289 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 1010:
#line 2290 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 1011:
#line 2291 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 1012:
#line 2292 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 1013:
#line 2293 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 1014:
#line 2294 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 1015:
#line 2295 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 1016:
#line 2296 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 1017:
#line 2297 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 1018:
#line 2298 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 1019:
#line 2299 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 1020:
#line 2300 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 1021:
#line 2301 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 1022:
#line 2302 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 1023:
#line 2303 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 1024:
#line 2304 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 1025:
#line 2305 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 1026:
#line 2308 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 1027:
#line 2309 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1028:
#line 2310 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1029:
#line 2311 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1030:
#line 2312 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1031:
#line 2314 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 1032:
#line 2324 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1033:
#line 2332 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1034:
#line 2341 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1035:
#line 2349 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1036:
#line 2355 "frame/parser.Y"
    {fr->createPolygonCanvasVarCmd((yyvsp[(4) - (5)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1037:
#line 2360 "frame/parser.Y"
    {fr->createSegmentCanvasVarCmd((yyvsp[(4) - (5)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1038:
#line 2366 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1039:
#line 2373 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1040:
#line 2381 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1041:
#line 2389 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1042:
#line 2394 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1043:
#line 2399 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1044:
#line 2404 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1045:
#line 2409 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1046:
#line 2414 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1047:
#line 2419 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1048:
#line 2424 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1049:
#line 2429 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::GLYPH, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist,(yyvsp[(5) - (6)].str));;}
    break;

  case 1050:
#line 2434 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),Coord::CANVAS),
	    Point::GLYPH, (yyvsp[(5) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist,(yyvsp[(6) - (7)].str));;}
    break;

  case 1051:
#line 2443 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer),
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1052:
#line 2453 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1053:
#line 2463 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1054:
#line 2472 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1055:
#line 2480 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1056:
#line 2490 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1057:
#line 2500 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1058:
#line 2510 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1059:
#line 2522 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1060:
#line 2531 "frame/parser.Y"
    {fr->createCompositeCmd(
	    (yyvsp[(2) - (3)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1062:
#line 2539 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 1063:
#line 2541 "frame/parser.Y"
    {
	  if ((yyvsp[(1) - (1)].integer) < 0 || (yyvsp[(1) - (1)].integer) > 1) {
	    fr->error("composite operation must be 0 (union) or 1 (intersection)");
	    YYERROR;
	  }
	  (yyval.integer)=(yyvsp[(1) - (1)].integer);
	;}
    break;

  case 1064:
#line 2550 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 1065:
#line 2552 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 1066:
#line 2554 "frame/parser.Y"
    {
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 1067:
#line 2559 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 1068:
#line 2562 "frame/parser.Y"
    {fr->markerDeleteAllCmd(0);;}
    break;

  case 1069:
#line 2563 "frame/parser.Y"
    {fr->markerDeleteAllCmd(1);;}
    break;

  case 1070:
#line 2564 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerDeleteAllCmd(0);
        ;}
    break;

  case 1071:
#line 2571 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1072:
#line 2573 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1073:
#line 2574 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 1074:
#line 2577 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 1075:
#line 2578 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 1076:
#line 2579 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 1077:
#line 2580 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 1078:
#line 2581 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 1079:
#line 2582 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 1080:
#line 2583 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 1082:
#line 2587 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 1083:
#line 2588 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 1084:
#line 2589 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 1085:
#line 2590 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1086:
#line 2591 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1087:
#line 2594 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(yyvsp[(6) - (8)].str),(Coord::CoordSystem)(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 1088:
#line 2596 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 1089:
#line 2598 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 1090:
#line 2600 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 1091:
#line 2602 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 1092:
#line 2604 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1093:
#line 2606 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsDataCmd((yyvsp[(1) - (6)].integer),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1094:
#line 2608 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsDataAllCmd((Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1095:
#line 2610 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsFieldsCmd();;}
    break;

  case 1096:
#line 2612 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 1097:
#line 2613 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1098:
#line 2614 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1099:
#line 2616 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1100:
#line 2618 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1101:
#line 2621 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1102:
#line 2623 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1103:
#line 2624 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1104:
#line 2625 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1105:
#line 2627 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1106:
#line 2629 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1107:
#line 2632 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer),
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1108:
#line 2635 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1109:
#line 2636 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1110:
#line 2637 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1111:
#line 2638 "frame/parser.Y"
    {fr->getMarkerCompassEndCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1112:
#line 2639 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1113:
#line 2641 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1114:
#line 2642 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1115:
#line 2643 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1116:
#line 2644 "frame/parser.Y"
    {fr->getMarkerCompositeAreaCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1117:
#line 2645 "frame/parser.Y"
    {fr->getMarkerCompositeOperationCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1118:
#line 2646 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1119:
#line 2647 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1120:
#line 2649 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1121:
#line 2651 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1122:
#line 2653 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1123:
#line 2655 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer),
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1124:
#line 2657 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1125:
#line 2658 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1126:
#line 2660 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1127:
#line 2662 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1128:
#line 2664 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1129:
#line 2665 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1130:
#line 2666 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1131:
#line 2667 "frame/parser.Y"
    {fr->getMarkerLineEndCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1132:
#line 2669 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1133:
#line 2671 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1134:
#line 2674 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1135:
#line 2677 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1136:
#line 2678 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1137:
#line 2679 "frame/parser.Y"
    {fr->getMarkerPointGlyphCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1138:
#line 2681 "frame/parser.Y"
    {fr->getMarkerPolygonPointCmd((yyvsp[(1) - (6)].integer),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),(Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1139:
#line 2684 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1140:
#line 2687 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer),
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1141:
#line 2690 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1142:
#line 2691 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1143:
#line 2692 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1144:
#line 2693 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1145:
#line 2695 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1146:
#line 2697 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1147:
#line 2699 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1148:
#line 2700 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1149:
#line 2702 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1150:
#line 2703 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1151:
#line 2704 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1152:
#line 2705 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1153:
#line 2706 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1154:
#line 2708 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1155:
#line 2709 "frame/parser.Y"
    {fr->getMarkerVectorEndCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1156:
#line 2711 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1157:
#line 2713 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1158:
#line 2715 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1159:
#line 2716 "frame/parser.Y"
    {fr->getMarkerDashListCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1161:
#line 2718 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1162:
#line 2719 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1163:
#line 2721 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1164:
#line 2723 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1165:
#line 2724 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1166:
#line 2725 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1168:
#line 2727 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1170:
#line 2731 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1171:
#line 2732 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1172:
#line 2733 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1173:
#line 2734 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1174:
#line 2735 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1175:
#line 2736 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1176:
#line 2738 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1177:
#line 2739 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1178:
#line 2741 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1179:
#line 2742 "frame/parser.Y"
    {fr->getMarkerDashListCmd();;}
    break;

  case 1180:
#line 2745 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1181:
#line 2746 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1182:
#line 2747 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1183:
#line 2748 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1184:
#line 2751 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1185:
#line 2752 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1186:
#line 2755 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1187:
#line 2756 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1188:
#line 2759 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1189:
#line 2760 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1190:
#line 2763 "frame/parser.Y"
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

  case 1191:
#line 2776 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1192:
#line 2777 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1193:
#line 2781 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1194:
#line 2782 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1195:
#line 2786 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1196:
#line 2787 "frame/parser.Y"
    {fr->markerLayerCmd(Base::FOOTPRINT);;}
    break;

  case 1197:
#line 2792 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), 0, propQMask, propQValue, taglist);;}
    break;

  case 1198:
#line 2796 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), 1, propQMask, propQValue, taglist);;}
    break;

  case 1199:
#line 2801 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str),0,"green",Coord::PHYSICAL,Coord::ICRS);;}
    break;

  case 1200:
#line 2803 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1201:
#line 2806 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer),0,"green",Coord::PHYSICAL,Coord::ICRS);;}
    break;

  case 1202:
#line 2808 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1203:
#line 2811 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (2)].str), "green");;}
    break;

  case 1204:
#line 2813 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));;}
    break;

  case 1205:
#line 2816 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1206:
#line 2817 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1207:
#line 2818 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1208:
#line 2819 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1209:
#line 2820 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1210:
#line 2821 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1211:
#line 2823 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1214:
#line 2830 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1215:
#line 2831 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1216:
#line 2832 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1217:
#line 2833 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1218:
#line 2834 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1219:
#line 2835 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1222:
#line 2840 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1223:
#line 2841 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1224:
#line 2842 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1225:
#line 2843 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1226:
#line 2844 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1227:
#line 2845 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1228:
#line 2846 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1229:
#line 2847 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1230:
#line 2848 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1231:
#line 2849 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1232:
#line 2850 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1233:
#line 2851 "frame/parser.Y"
    {(yyval.integer) = Marker::FILL;;}
    break;

  case 1236:
#line 2858 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1237:
#line 2859 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1239:
#line 2863 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(1) - (6)].str), (Base::MarkerFormat)(yyvsp[(2) - (6)].integer), (Coord::CoordSystem)(yyvsp[(3) - (6)].integer), (Coord::SkyFrame)(yyvsp[(4) - (6)].integer), (Coord::SkyFormat)(yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].integer), 0);;}
    break;

  case 1240:
#line 2865 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer), 1);;}
    break;

  case 1241:
#line 2866 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1242:
#line 2869 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1243:
#line 2870 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1244:
#line 2871 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1245:
#line 2872 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1246:
#line 2873 "frame/parser.Y"
    {fr->markerSelectFirstCmd();;}
    break;

  case 1247:
#line 2874 "frame/parser.Y"
    {fr->markerSelectLastCmd();;}
    break;

  case 1248:
#line 2877 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1249:
#line 2878 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1252:
#line 2886 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1253:
#line 2889 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1254:
#line 2890 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1258:
#line 2897 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1259:
#line 2900 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1260:
#line 2904 "frame/parser.Y"
    {fr->layerCreateCmd();;}
    break;

  case 1261:
#line 2905 "frame/parser.Y"
    {fr->layerCreateCmd();;}
    break;

  case 1262:
#line 2906 "frame/parser.Y"
    {fr->layerNoCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1263:
#line 2907 "frame/parser.Y"
    {fr->layerNoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1264:
#line 2908 "frame/parser.Y"
    {fr->layerColorCmd(0,(yyvsp[(2) - (2)].str));;}
    break;

  case 1265:
#line 2909 "frame/parser.Y"
    {fr->layerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1266:
#line 2910 "frame/parser.Y"
    {fr->layerBlendCmd(0,(FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1267:
#line 2911 "frame/parser.Y"
    {fr->layerBlendCmd((yyvsp[(1) - (3)].integer),(FitsMask::MaskBlend)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1268:
#line 2912 "frame/parser.Y"
    {fr->layerTransparencyCmd(0,(yyvsp[(2) - (2)].real));;}
    break;

  case 1269:
#line 2913 "frame/parser.Y"
    {fr->layerTransparencyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 1270:
#line 2914 "frame/parser.Y"
    {fr->layerViewCmd(0,(yyvsp[(2) - (2)].integer));;}
    break;

  case 1271:
#line 2915 "frame/parser.Y"
    {fr->layerViewCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1272:
#line 2917 "frame/parser.Y"
    {fr->layerShowCmd(0);;}
    break;

  case 1273:
#line 2918 "frame/parser.Y"
    {fr->layerShowCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1274:
#line 2919 "frame/parser.Y"
    {fr->layerHideCmd(0);;}
    break;

  case 1275:
#line 2920 "frame/parser.Y"
    {fr->layerHideCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1276:
#line 2921 "frame/parser.Y"
    {fr->layerDeleteCmd(0);;}
    break;

  case 1277:
#line 2922 "frame/parser.Y"
    {fr->layerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1278:
#line 2923 "frame/parser.Y"
    {fr->layerUpCmd(0);;}
    break;

  case 1279:
#line 2924 "frame/parser.Y"
    {fr->layerUpCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1280:
#line 2925 "frame/parser.Y"
    {fr->layerDownCmd(0);;}
    break;

  case 1281:
#line 2926 "frame/parser.Y"
    {fr->layerDownCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1282:
#line 2927 "frame/parser.Y"
    {fr->layerTopCmd(0);;}
    break;

  case 1283:
#line 2928 "frame/parser.Y"
    {fr->layerTopCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1284:
#line 2929 "frame/parser.Y"
    {fr->layerBottomCmd(0);;}
    break;

  case 1285:
#line 2930 "frame/parser.Y"
    {fr->layerBottomCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1286:
#line 2933 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1287:
#line 2934 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1288:
#line 2935 "frame/parser.Y"
    {fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1289:
#line 2936 "frame/parser.Y"
    {fr->maskRangeCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 1290:
#line 2937 "frame/parser.Y"
    {fr->maskSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1291:
#line 2938 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1292:
#line 2939 "frame/parser.Y"
    {fr->maskBlendCmd((FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1293:
#line 2940 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1294:
#line 2946 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1295:
#line 2947 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1296:
#line 2948 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1297:
#line 2949 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1298:
#line 2953 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1299:
#line 2954 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1300:
#line 2956 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1301:
#line 2961 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1303:
#line 2963 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1305:
#line 2965 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1306:
#line 2968 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1307:
#line 2970 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1308:
#line 2975 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1309:
#line 2978 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1310:
#line 2979 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1311:
#line 2980 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1312:
#line 2983 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1313:
#line 2985 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1314:
#line 2989 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1315:
#line 2990 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1316:
#line 2994 "frame/parser.Y"
    {fr->psColorSpaceCmd((PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1317:
#line 2995 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1318:
#line 2996 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1319:
#line 2997 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 1320:
#line 3003 "frame/parser.Y"
    {fr->precCmd((yyvsp[(1) - (9)].integer),(yyvsp[(2) - (9)].integer),(yyvsp[(3) - (9)].integer),(yyvsp[(4) - (9)].integer),(yyvsp[(5) - (9)].integer),(yyvsp[(6) - (9)].integer),(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 1321:
#line 3004 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->precCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 1322:
#line 3010 "frame/parser.Y"
    {(yyval.integer) = BW;;}
    break;

  case 1323:
#line 3011 "frame/parser.Y"
    {(yyval.integer) = GRAY;;}
    break;

  case 1324:
#line 3012 "frame/parser.Y"
    {(yyval.integer) = RGB;;}
    break;

  case 1325:
#line 3013 "frame/parser.Y"
    {(yyval.integer) = CMYK;;}
    break;

  case 1328:
#line 3021 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1329:
#line 3023 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1330:
#line 3024 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1331:
#line 3025 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1332:
#line 3029 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1333:
#line 3030 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1334:
#line 3031 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1335:
#line 3032 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1336:
#line 3035 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1337:
#line 3036 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1338:
#line 3037 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::FIP;;}
    break;

  case 1339:
#line 3040 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1340:
#line 3041 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1341:
#line 3042 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1342:
#line 3045 "frame/parser.Y"
    {fr->revealCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1343:
#line 3046 "frame/parser.Y"
    {fr->revealClearCmd();;}
    break;

  case 1344:
#line 3049 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1345:
#line 3050 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1346:
#line 3051 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1347:
#line 3055 "frame/parser.Y"
    {fr->setMultiColorSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1348:
#line 3058 "frame/parser.Y"
    {fr->setHLSChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1349:
#line 3059 "frame/parser.Y"
    {fr->setHLSChannelCmd("hue");;}
    break;

  case 1350:
#line 3060 "frame/parser.Y"
    {fr->setHLSChannelCmd("saturation");;}
    break;

  case 1351:
#line 3061 "frame/parser.Y"
    {fr->setHLSSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1352:
#line 3062 "frame/parser.Y"
    {fr->setHLSViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1353:
#line 3065 "frame/parser.Y"
    {fr->setHSVChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1354:
#line 3066 "frame/parser.Y"
    {fr->setHSVChannelCmd("hue");;}
    break;

  case 1355:
#line 3067 "frame/parser.Y"
    {fr->setHSVChannelCmd("saturation");;}
    break;

  case 1356:
#line 3068 "frame/parser.Y"
    {fr->setHSVChannelCmd("value");;}
    break;

  case 1357:
#line 3069 "frame/parser.Y"
    {fr->setHSVSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1358:
#line 3070 "frame/parser.Y"
    {fr->setHSVViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1359:
#line 3073 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1360:
#line 3074 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (2)].real))));;}
    break;

  case 1362:
#line 3076 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (2)].real))));;}
    break;

  case 1363:
#line 3077 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (3)].real))));;}
    break;

  case 1364:
#line 3080 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1365:
#line 3081 "frame/parser.Y"
    {fr->rotateMotionCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1366:
#line 3082 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1372:
#line 3090 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1373:
#line 3093 "frame/parser.Y"
    {fr->savePixelMaskFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1374:
#line 3094 "frame/parser.Y"
    {fr->savePixelMaskChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1375:
#line 3095 "frame/parser.Y"
    {fr->savePixelMaskSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1376:
#line 3099 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1377:
#line 3101 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1378:
#line 3103 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1395:
#line 3124 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1396:
#line 3125 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1397:
#line 3126 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1398:
#line 3129 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1399:
#line 3130 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1400:
#line 3131 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1401:
#line 3134 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1402:
#line 3135 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1403:
#line 3136 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1404:
#line 3139 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1405:
#line 3140 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1406:
#line 3141 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1408:
#line 3145 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1409:
#line 3146 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1410:
#line 3147 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1411:
#line 3150 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1412:
#line 3151 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1413:
#line 3152 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1414:
#line 3156 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1415:
#line 3158 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1416:
#line 3160 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1417:
#line 3163 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1418:
#line 3164 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1419:
#line 3165 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1420:
#line 3168 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1421:
#line 3169 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1422:
#line 3170 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1423:
#line 3174 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1424:
#line 3176 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1425:
#line 3178 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1426:
#line 3181 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1427:
#line 3182 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1428:
#line 3183 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1429:
#line 3186 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1430:
#line 3187 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1431:
#line 3188 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1432:
#line 3192 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1433:
#line 3194 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1434:
#line 3196 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1435:
#line 3199 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1436:
#line 3200 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1437:
#line 3201 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1438:
#line 3204 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1439:
#line 3205 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1440:
#line 3206 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1441:
#line 3209 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1442:
#line 3210 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1443:
#line 3211 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1444:
#line 3215 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1445:
#line 3217 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1446:
#line 3219 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1447:
#line 3223 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1448:
#line 3227 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1449:
#line 3229 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1450:
#line 3233 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1451:
#line 3236 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1452:
#line 3237 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1453:
#line 3238 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1454:
#line 3239 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1455:
#line 3242 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1456:
#line 3244 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1457:
#line 3246 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1458:
#line 3249 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 1460:
#line 3251 "frame/parser.Y"
    {fr->updateFitsCenterCmd();;}
    break;

  case 1461:
#line 3253 "frame/parser.Y"
    {fr->updateFitsCenterCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1462:
#line 3256 "frame/parser.Y"
    {fr->sliceCmd(2,(yyvsp[(1) - (1)].integer));;}
    break;

  case 1463:
#line 3257 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1464:
#line 3258 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1465:
#line 3261 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1466:
#line 3262 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1467:
#line 3266 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1469:
#line 3268 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1472:
#line 3273 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1473:
#line 3274 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1474:
#line 3275 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1475:
#line 3278 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1476:
#line 3279 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1477:
#line 3280 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1478:
#line 3283 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1479:
#line 3285 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1480:
#line 3290 "frame/parser.Y"
    {fr->wcsAlign2Cmd((yyvsp[(2) - (4)].integer), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1481:
#line 3291 "frame/parser.Y"
    {fr->wcsAlignPointerClearCmd();;}
    break;

  case 1482:
#line 3294 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1483:
#line 3301 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1484:
#line 3303 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1485:
#line 3305 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1486:
#line 3310 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1488:
#line 3314 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1489:
#line 3315 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1490:
#line 3316 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1491:
#line 3318 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1492:
#line 3320 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1493:
#line 3325 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 12512 "frame/parser.C"
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


#line 3329 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

