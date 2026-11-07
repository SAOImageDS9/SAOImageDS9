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
     GLYPH_ = 409,
     GRAPHICS_ = 410,
     GRAY_ = 411,
     GRID_ = 412,
     GZ_ = 413,
     HANDLE_ = 414,
     HARDLIGHT_ = 415,
     HAS_ = 416,
     HEAD_ = 417,
     HEADER_ = 418,
     HEIGHT_ = 419,
     HIDE_ = 420,
     HIGHLITE_ = 421,
     HISTEQU_ = 422,
     HISTOGRAM_ = 423,
     HORIZONTAL_ = 424,
     HUE_ = 425,
     HSV_ = 426,
     HLS_ = 427,
     ICRS_ = 428,
     ID_ = 429,
     IIS_ = 430,
     IMAGE_ = 431,
     INCLUDE_ = 432,
     INCR_ = 433,
     INFO_ = 434,
     ITERATION_ = 435,
     IRAF_ = 436,
     IRAFMIN_ = 437,
     J2000_ = 438,
     KEY_ = 439,
     KEYWORD_ = 440,
     LABEL_ = 441,
     LAYER_ = 442,
     LAYERNO_ = 443,
     LAST_ = 444,
     LENGTH_ = 445,
     LEVEL_ = 446,
     LIGHTEN_ = 447,
     LITTLE_ = 448,
     LITTLEENDIAN_ = 449,
     LINE_ = 450,
     LINEAR_ = 451,
     LIST_ = 452,
     LOAD_ = 453,
     LOCAL_ = 454,
     LOG_ = 455,
     LUMINOSITY_ = 456,
     MACOSX_ = 457,
     MAGNIFIER_ = 458,
     MATCH_ = 459,
     MAP_ = 460,
     MARK_ = 461,
     MARKER_ = 462,
     MASK_ = 463,
     MEDIAN_ = 464,
     MESSAGE_ = 465,
     METHOD_ = 466,
     MINMAX_ = 467,
     MINOR_ = 468,
     MIP_ = 469,
     MMAP_ = 470,
     MMAPINCR_ = 471,
     MOSAIC_ = 472,
     MODE_ = 473,
     MOTION_ = 474,
     MULTICOLOR_ = 475,
     MULTIPLY_ = 476,
     MOVE_ = 477,
     NAME_ = 478,
     NAN_ = 479,
     NATIVE_ = 480,
     NAXES_ = 481,
     NEW_ = 482,
     NEXT_ = 483,
     NO_ = 484,
     NONE_ = 485,
     NORMAL_ = 486,
     NONNAN_ = 487,
     NONZERO_ = 488,
     NOW_ = 489,
     NRRD_ = 490,
     NUMBER_ = 491,
     OBJECT_ = 492,
     OFF_ = 493,
     ON_ = 494,
     ONLY_ = 495,
     OPENARROW_ = 496,
     OPENBOX_ = 497,
     OPENCIRCLE_ = 498,
     OPENTRIANGLE_ = 499,
     OPTION_ = 500,
     ORIENT_ = 501,
     OVERLAY_ = 502,
     PAN_ = 503,
     PANNER_ = 504,
     PARSER_ = 505,
     PASTE_ = 506,
     PERF_ = 507,
     PHOTO_ = 508,
     PHYSICAL_ = 509,
     PIXEL_ = 510,
     PLOT2D_ = 511,
     PLOT3D_ = 512,
     POINT_ = 513,
     POINTER_ = 514,
     POLYGON_ = 515,
     POSTSCRIPT_ = 516,
     POW_ = 517,
     PRECISION_ = 518,
     PRINT_ = 519,
     PRESERVE_ = 520,
     PROJECTION_ = 521,
     PROPERTY_ = 522,
     PUBLICATION_ = 523,
     PROS_ = 524,
     QUERY_ = 525,
     RADIAL_ = 526,
     RADIUS_ = 527,
     RANGE_ = 528,
     REGION_ = 529,
     REPLACE_ = 530,
     RESAMPLE_ = 531,
     RESCAN_ = 532,
     RESET_ = 533,
     RESOLUTION_ = 534,
     REVEAL_ = 535,
     RGB_ = 536,
     ROOT_ = 537,
     ROTATE_ = 538,
     RULER_ = 539,
     SAMPLE_ = 540,
     SAOIMAGE_ = 541,
     SAOTNG_ = 542,
     SAVE_ = 543,
     SATURATION_ = 544,
     SCALE_ = 545,
     SCAN_ = 546,
     SCIENTIFIC_ = 547,
     SCOPE_ = 548,
     SCREEN_ = 549,
     SEGMENT_ = 550,
     SELECT_ = 551,
     SET_ = 552,
     SEXAGESIMAL_ = 553,
     SHAPE_ = 554,
     SHADE_ = 555,
     SHARED_ = 556,
     SHIFT_ = 557,
     SHMID_ = 558,
     SHOW_ = 559,
     SIGMA_ = 560,
     SINH_ = 561,
     SIZE_ = 562,
     SLICE_ = 563,
     SMMAP_ = 564,
     SMOOTH_ = 565,
     SOFTLIGHT_ = 566,
     SOCKET_ = 567,
     SOCKETGZ_ = 568,
     SOURCE_ = 569,
     SQRT_ = 570,
     SQUARED_ = 571,
     SSHARED_ = 572,
     STATS_ = 573,
     STATUS_ = 574,
     STRENGTH_ = 575,
     STYLE_ = 576,
     SUM_ = 577,
     SYNC_ = 578,
     SYSTEM_ = 579,
     TABLE_ = 580,
     TAG_ = 581,
     TEMPLATE_ = 582,
     TEXT_ = 583,
     THREADS_ = 584,
     THREED_ = 585,
     THRESHOLD_ = 586,
     THICK_ = 587,
     TOP_ = 588,
     TRANSPARENCY_ = 589,
     TRIANGLE_ = 590,
     TO_ = 591,
     TOGGLE_ = 592,
     TOPHAT_ = 593,
     TRUE_ = 594,
     TYPE_ = 595,
     UNDO_ = 596,
     UNHIGHLITE_ = 597,
     UNLOAD_ = 598,
     UNSELECT_ = 599,
     UPDATE_ = 600,
     UP_ = 601,
     USER_ = 602,
     VALUE_ = 603,
     VAR_ = 604,
     VIEW_ = 605,
     VECTOR_ = 606,
     VERSION_ = 607,
     VERTEX_ = 608,
     VERTICAL_ = 609,
     WARP_ = 610,
     WCS_ = 611,
     WCSA_ = 612,
     WCSB_ = 613,
     WCSC_ = 614,
     WCSD_ = 615,
     WCSE_ = 616,
     WCSF_ = 617,
     WCSG_ = 618,
     WCSH_ = 619,
     WCSI_ = 620,
     WCSJ_ = 621,
     WCSK_ = 622,
     WCSL_ = 623,
     WCSM_ = 624,
     WCSN_ = 625,
     WCSO_ = 626,
     WCSP_ = 627,
     WCSQ_ = 628,
     WCSR_ = 629,
     WCSS_ = 630,
     WCST_ = 631,
     WCSU_ = 632,
     WCSV_ = 633,
     WCSW_ = 634,
     WCSX_ = 635,
     WCSY_ = 636,
     WCSZ_ = 637,
     WCS0_ = 638,
     WFPC2_ = 639,
     WIDTH_ = 640,
     WIN32_ = 641,
     XML_ = 642,
     XY_ = 643,
     YES_ = 644,
     ZERO_ = 645,
     ZMAX_ = 646,
     ZSCALE_ = 647,
     PIXMASK_ = 648,
     ZOOM_ = 649,
     FIELDS_ = 650
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
#define GLYPH_ 409
#define GRAPHICS_ 410
#define GRAY_ 411
#define GRID_ 412
#define GZ_ 413
#define HANDLE_ 414
#define HARDLIGHT_ 415
#define HAS_ 416
#define HEAD_ 417
#define HEADER_ 418
#define HEIGHT_ 419
#define HIDE_ 420
#define HIGHLITE_ 421
#define HISTEQU_ 422
#define HISTOGRAM_ 423
#define HORIZONTAL_ 424
#define HUE_ 425
#define HSV_ 426
#define HLS_ 427
#define ICRS_ 428
#define ID_ 429
#define IIS_ 430
#define IMAGE_ 431
#define INCLUDE_ 432
#define INCR_ 433
#define INFO_ 434
#define ITERATION_ 435
#define IRAF_ 436
#define IRAFMIN_ 437
#define J2000_ 438
#define KEY_ 439
#define KEYWORD_ 440
#define LABEL_ 441
#define LAYER_ 442
#define LAYERNO_ 443
#define LAST_ 444
#define LENGTH_ 445
#define LEVEL_ 446
#define LIGHTEN_ 447
#define LITTLE_ 448
#define LITTLEENDIAN_ 449
#define LINE_ 450
#define LINEAR_ 451
#define LIST_ 452
#define LOAD_ 453
#define LOCAL_ 454
#define LOG_ 455
#define LUMINOSITY_ 456
#define MACOSX_ 457
#define MAGNIFIER_ 458
#define MATCH_ 459
#define MAP_ 460
#define MARK_ 461
#define MARKER_ 462
#define MASK_ 463
#define MEDIAN_ 464
#define MESSAGE_ 465
#define METHOD_ 466
#define MINMAX_ 467
#define MINOR_ 468
#define MIP_ 469
#define MMAP_ 470
#define MMAPINCR_ 471
#define MOSAIC_ 472
#define MODE_ 473
#define MOTION_ 474
#define MULTICOLOR_ 475
#define MULTIPLY_ 476
#define MOVE_ 477
#define NAME_ 478
#define NAN_ 479
#define NATIVE_ 480
#define NAXES_ 481
#define NEW_ 482
#define NEXT_ 483
#define NO_ 484
#define NONE_ 485
#define NORMAL_ 486
#define NONNAN_ 487
#define NONZERO_ 488
#define NOW_ 489
#define NRRD_ 490
#define NUMBER_ 491
#define OBJECT_ 492
#define OFF_ 493
#define ON_ 494
#define ONLY_ 495
#define OPENARROW_ 496
#define OPENBOX_ 497
#define OPENCIRCLE_ 498
#define OPENTRIANGLE_ 499
#define OPTION_ 500
#define ORIENT_ 501
#define OVERLAY_ 502
#define PAN_ 503
#define PANNER_ 504
#define PARSER_ 505
#define PASTE_ 506
#define PERF_ 507
#define PHOTO_ 508
#define PHYSICAL_ 509
#define PIXEL_ 510
#define PLOT2D_ 511
#define PLOT3D_ 512
#define POINT_ 513
#define POINTER_ 514
#define POLYGON_ 515
#define POSTSCRIPT_ 516
#define POW_ 517
#define PRECISION_ 518
#define PRINT_ 519
#define PRESERVE_ 520
#define PROJECTION_ 521
#define PROPERTY_ 522
#define PUBLICATION_ 523
#define PROS_ 524
#define QUERY_ 525
#define RADIAL_ 526
#define RADIUS_ 527
#define RANGE_ 528
#define REGION_ 529
#define REPLACE_ 530
#define RESAMPLE_ 531
#define RESCAN_ 532
#define RESET_ 533
#define RESOLUTION_ 534
#define REVEAL_ 535
#define RGB_ 536
#define ROOT_ 537
#define ROTATE_ 538
#define RULER_ 539
#define SAMPLE_ 540
#define SAOIMAGE_ 541
#define SAOTNG_ 542
#define SAVE_ 543
#define SATURATION_ 544
#define SCALE_ 545
#define SCAN_ 546
#define SCIENTIFIC_ 547
#define SCOPE_ 548
#define SCREEN_ 549
#define SEGMENT_ 550
#define SELECT_ 551
#define SET_ 552
#define SEXAGESIMAL_ 553
#define SHAPE_ 554
#define SHADE_ 555
#define SHARED_ 556
#define SHIFT_ 557
#define SHMID_ 558
#define SHOW_ 559
#define SIGMA_ 560
#define SINH_ 561
#define SIZE_ 562
#define SLICE_ 563
#define SMMAP_ 564
#define SMOOTH_ 565
#define SOFTLIGHT_ 566
#define SOCKET_ 567
#define SOCKETGZ_ 568
#define SOURCE_ 569
#define SQRT_ 570
#define SQUARED_ 571
#define SSHARED_ 572
#define STATS_ 573
#define STATUS_ 574
#define STRENGTH_ 575
#define STYLE_ 576
#define SUM_ 577
#define SYNC_ 578
#define SYSTEM_ 579
#define TABLE_ 580
#define TAG_ 581
#define TEMPLATE_ 582
#define TEXT_ 583
#define THREADS_ 584
#define THREED_ 585
#define THRESHOLD_ 586
#define THICK_ 587
#define TOP_ 588
#define TRANSPARENCY_ 589
#define TRIANGLE_ 590
#define TO_ 591
#define TOGGLE_ 592
#define TOPHAT_ 593
#define TRUE_ 594
#define TYPE_ 595
#define UNDO_ 596
#define UNHIGHLITE_ 597
#define UNLOAD_ 598
#define UNSELECT_ 599
#define UPDATE_ 600
#define UP_ 601
#define USER_ 602
#define VALUE_ 603
#define VAR_ 604
#define VIEW_ 605
#define VECTOR_ 606
#define VERSION_ 607
#define VERTEX_ 608
#define VERTICAL_ 609
#define WARP_ 610
#define WCS_ 611
#define WCSA_ 612
#define WCSB_ 613
#define WCSC_ 614
#define WCSD_ 615
#define WCSE_ 616
#define WCSF_ 617
#define WCSG_ 618
#define WCSH_ 619
#define WCSI_ 620
#define WCSJ_ 621
#define WCSK_ 622
#define WCSL_ 623
#define WCSM_ 624
#define WCSN_ 625
#define WCSO_ 626
#define WCSP_ 627
#define WCSQ_ 628
#define WCSR_ 629
#define WCSS_ 630
#define WCST_ 631
#define WCSU_ 632
#define WCSV_ 633
#define WCSW_ 634
#define WCSX_ 635
#define WCSY_ 636
#define WCSZ_ 637
#define WCS0_ 638
#define WFPC2_ 639
#define WIDTH_ 640
#define WIN32_ 641
#define XML_ 642
#define XY_ 643
#define YES_ 644
#define ZERO_ 645
#define ZMAX_ 646
#define ZSCALE_ 647
#define PIXMASK_ 648
#define ZOOM_ 649
#define FIELDS_ 650




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
#line 947 "frame/parser.C"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 960 "frame/parser.C"

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
#define YYFINAL  408
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   6655

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  400
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  246
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1466
/* YYNRULES -- Number of states.  */
#define YYNSTATES  3179

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   650

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
       2,   399,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   397,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   398,   396,
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
     395
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
     907,   910,   913,   916,   919,   933,   947,   960,   973,   975,
     976,   978,   980,   985,   992,   994,   996,   998,  1000,  1002,
    1004,  1006,  1008,  1010,  1015,  1022,  1026,  1031,  1033,  1036,
    1041,  1048,  1049,  1056,  1065,  1068,  1072,  1076,  1080,  1081,
    1086,  1091,  1096,  1101,  1105,  1109,  1111,  1115,  1121,  1126,
    1131,  1135,  1138,  1139,  1141,  1143,  1145,  1147,  1149,  1153,
    1154,  1157,  1160,  1163,  1166,  1169,  1172,  1175,  1178,  1181,
    1184,  1187,  1190,  1193,  1196,  1198,  1201,  1204,  1207,  1212,
    1216,  1219,  1222,  1225,  1228,  1231,  1233,  1237,  1240,  1243,
    1246,  1249,  1251,  1254,  1263,  1266,  1268,  1271,  1273,  1276,
    1278,  1283,  1287,  1290,  1292,  1300,  1309,  1317,  1326,  1328,
    1330,  1332,  1335,  1337,  1339,  1342,  1344,  1345,  1348,  1351,
    1353,  1356,  1357,  1360,  1363,  1365,  1367,  1370,  1373,  1376,
    1378,  1380,  1382,  1384,  1386,  1388,  1389,  1391,  1394,  1396,
    1401,  1407,  1408,  1411,  1413,  1419,  1422,  1425,  1427,  1429,
    1431,  1433,  1436,  1438,  1441,  1443,  1445,  1448,  1450,  1451,
    1453,  1455,  1456,  1458,  1464,  1471,  1475,  1482,  1486,  1488,
    1492,  1494,  1496,  1498,  1502,  1509,  1517,  1523,  1526,  1528,
    1534,  1539,  1541,  1545,  1546,  1548,  1551,  1553,  1558,  1560,
    1563,  1565,  1568,  1572,  1575,  1577,  1580,  1582,  1587,  1590,
    1592,  1594,  1598,  1600,  1603,  1607,  1610,  1611,  1613,  1615,
    1620,  1623,  1624,  1626,  1630,  1635,  1640,  1641,  1643,  1645,
    1647,  1649,  1652,  1655,  1658,  1661,  1663,  1665,  1667,  1669,
    1671,  1673,  1675,  1676,  1678,  1680,  1682,  1684,  1686,  1688,
    1690,  1692,  1694,  1696,  1698,  1700,  1702,  1704,  1707,  1709,
    1712,  1714,  1717,  1720,  1723,  1726,  1728,  1730,  1733,  1735,
    1736,  1738,  1740,  1743,  1744,  1746,  1747,  1749,  1750,  1752,
    1753,  1755,  1756,  1758,  1759,  1762,  1765,  1766,  1768,  1771,
    1773,  1780,  1786,  1788,  1790,  1792,  1795,  1798,  1801,  1803,
    1805,  1807,  1809,  1812,  1814,  1816,  1818,  1821,  1823,  1825,
    1827,  1830,  1833,  1836,  1837,  1839,  1840,  1842,  1844,  1846,
    1848,  1850,  1852,  1854,  1856,  1859,  1862,  1865,  1867,  1870,
    1874,  1876,  1879,  1882,  1887,  1893,  1895,  1906,  1908,  1911,
    1915,  1919,  1922,  1925,  1928,  1931,  1934,  1937,  1940,  1945,
    1950,  1955,  1959,  1963,  1969,  1974,  1979,  1984,  1988,  1992,
    1996,  2000,  2004,  2008,  2011,  2014,  2019,  2023,  2027,  2031,
    2035,  2040,  2045,  2050,  2055,  2061,  2066,  2073,  2081,  2086,
    2091,  2097,  2100,  2104,  2108,  2112,  2116,  2120,  2124,  2128,
    2131,  2135,  2139,  2143,  2147,  2152,  2156,  2162,  2169,  2173,
    2177,  2182,  2186,  2190,  2194,  2198,  2202,  2208,  2212,  2216,
    2221,  2225,  2228,  2231,  2233,  2237,  2242,  2247,  2252,  2257,
    2262,  2269,  2274,  2279,  2285,  2290,  2295,  2300,  2305,  2311,
    2316,  2323,  2331,  2336,  2341,  2347,  2353,  2359,  2365,  2371,
    2377,  2385,  2391,  2397,  2404,  2409,  2414,  2419,  2424,  2429,
    2436,  2441,  2446,  2452,  2458,  2464,  2470,  2476,  2483,  2489,
    2497,  2506,  2512,  2518,  2525,  2529,  2533,  2537,  2541,  2546,
    2550,  2556,  2563,  2567,  2571,  2576,  2580,  2584,  2588,  2592,
    2596,  2602,  2606,  2610,  2615,  2620,  2625,  2629,  2635,  2640,
    2645,  2648,  2652,  2659,  2666,  2668,  2670,  2672,  2675,  2678,
    2681,  2685,  2689,  2692,  2705,  2708,  2711,  2713,  2717,  2722,
    2725,  2726,  2730,  2732,  2735,  2738,  2741,  2744,  2747,  2752,
    2757,  2762,  2767,  2771,  2775,  2780,  2786,  2795,  2802,  2812,
    2819,  2827,  2838,  2850,  2863,  2873,  2879,  2886,  2890,  2896,
    2902,  2908,  2915,  2921,  2926,  2931,  2936,  2946,  2957,  2969,
    2979,  2986,  2993,  3000,  3007,  3014,  3021,  3028,  3035,  3042,
    3050,  3058,  3061,  3066,  3071,  3076,  3081,  3087,  3092,  3097,
    3103,  3109,  3113,  3118,  3123,  3128,  3136,  3146,  3153,  3164,
    3176,  3189,  3199,  3203,  3206,  3210,  3216,  3222,  3230,  3235,
    3239,  3243,  3250,  3258,  3267,  3275,  3283,  3288,  3293,  3303,
    3308,  3312,  3317,  3325,  3333,  3336,  3340,  3344,  3348,  3353,
    3358,  3364,  3367,  3370,  3375,  3380,  3391,  3395,  3400,  3402,
    3406,  3409,  3412,  3415,  3418,  3422,  3428,  3433,  3439,  3442,
    3445,  3448,  3451,  3455,  3458,  3461,  3464,  3468,  3471,  3475,
    3480,  3484,  3488,  3495,  3500,  3503,  3507,  3510,  3513,  3518,
    3522,  3526,  3529,  3533,  3535,  3538,  3540,  3543,  3546,  3549,
    3553,  3555,  3557,  3559,  3561,  3564,  3566,  3569,  3572,  3574,
    3577,  3580,  3582,  3585,  3587,  3589,  3591,  3593,  3595,  3597,
    3599,  3601,  3602,  3604,  3607,  3610,  3613,  3617,  3623,  3631,
    3639,  3646,  3652,  3659,  3666,  3673,  3679,  3685,  3693,  3700,
    3707,  3714,  3721,  3728,  3735,  3742,  3754,  3762,  3770,  3778,
    3788,  3798,  3809,  3822,  3835,  3839,  3842,  3843,  3845,  3849,
    3854,  3859,  3864,  3865,  3867,  3869,  3874,  3879,  3881,  3883,
    3885,  3887,  3889,  3891,  3893,  3895,  3898,  3900,  3902,  3904,
    3908,  3912,  3921,  3928,  3939,  3947,  3955,  3961,  3968,  3975,
    3979,  3982,  3985,  3989,  3994,  4000,  4006,  4012,  4016,  4021,
    4027,  4033,  4039,  4045,  4048,  4052,  4056,  4060,  4066,  4070,
    4074,  4078,  4082,  4086,  4091,  4097,  4103,  4109,  4115,  4119,
    4124,  4130,  4136,  4139,  4142,  4146,  4150,  4156,  4163,  4170,
    4174,  4178,  4185,  4192,  4198,  4204,  4207,  4211,  4215,  4221,
    4228,  4232,  4235,  4238,  4242,  4245,  4249,  4253,  4257,  4260,
    4264,  4268,  4274,  4281,  4284,  4287,  4290,  4293,  4295,  4300,
    4305,  4307,  4310,  4313,  4316,  4319,  4322,  4325,  4328,  4332,
    4335,  4339,  4342,  4346,  4348,  4350,  4352,  4354,  4356,  4358,
    4359,  4362,  4363,  4366,  4367,  4369,  4370,  4371,  4373,  4375,
    4377,  4379,  4381,  4389,  4398,  4401,  4408,  4411,  4418,  4421,
    4425,  4428,  4430,  4432,  4436,  4440,  4442,  4447,  4450,  4452,
    4456,  4460,  4465,  4469,  4473,  4477,  4479,  4481,  4483,  4485,
    4487,  4489,  4491,  4493,  4495,  4497,  4499,  4501,  4503,  4505,
    4507,  4510,  4511,  4512,  4515,  4522,  4530,  4533,  4535,  4539,
    4541,  4545,  4547,  4549,  4551,  4554,  4557,  4559,  4563,  4564,
    4565,  4568,  4571,  4573,  4577,  4583,  4584,  4586,  4588,  4591,
    4594,  4598,  4601,  4605,  4608,  4612,  4615,  4619,  4621,  4624,
    4626,  4629,  4631,  4634,  4636,  4639,  4641,  4644,  4646,  4649,
    4651,  4654,  4656,  4659,  4662,  4666,  4669,  4672,  4675,  4678,
    4680,  4682,  4684,  4686,  4691,  4694,  4698,  4702,  4705,  4709,
    4712,  4715,  4718,  4722,  4726,  4730,  4733,  4737,  4739,  4743,
    4747,  4749,  4752,  4755,  4758,  4761,  4771,  4778,  4780,  4782,
    4784,  4786,  4789,  4792,  4796,  4800,  4802,  4805,  4809,  4813,
    4815,  4818,  4820,  4822,  4824,  4826,  4828,  4830,  4832,  4834,
    4837,  4840,  4845,  4848,  4851,  4854,  4857,  4860,  4865,  4868,
    4871,  4874,  4877,  4880,  4885,  4887,  4890,  4893,  4896,  4900,
    4902,  4904,  4906,  4909,  4912,  4915,  4918,  4921,  4924,  4927,
    4930,  4933,  4937,  4941,  4945,  4949,  4953,  4957,  4959,  4962,
    4965,  4968,  4972,  4975,  4979,  4983,  4987,  4991,  4995,  4999,
    5002,  5005,  5008,  5011,  5014,  5017,  5020,  5023,  5026,  5029,
    5032,  5035,  5038,  5041,  5045,  5049,  5053,  5056,  5059,  5062,
    5066,  5070,  5074,  5077,  5080,  5083,  5086,  5089,  5092,  5096,
    5100,  5104,  5107,  5110,  5113,  5116,  5119,  5122,  5126,  5130,
    5134,  5137,  5140,  5143,  5146,  5149,  5152,  5155,  5158,  5161,
    5165,  5169,  5173,  5178,  5185,  5188,  5190,  5192,  5194,  5196,
    5198,  5199,  5205,  5207,  5214,  5218,  5220,  5223,  5226,  5229,
    5233,  5237,  5240,  5243,  5246,  5249,  5252,  5255,  5259,  5262,
    5265,  5269,  5271,  5275,  5280,  5283,  5285,  5288,  5294,  5301,
    5308,  5311,  5313,  5316,  5319,  5325,  5332
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     401,     0,    -1,   104,   403,    -1,    46,   438,    -1,    43,
      71,     5,    -1,    43,    71,   404,    -1,    49,   443,    -1,
      63,    -1,    69,    -1,    70,   445,    -1,    74,   326,     5,
      -1,    75,   450,    -1,    76,   452,    -1,    84,   453,    -1,
      91,   463,    -1,    93,   465,    -1,    94,   466,    -1,   103,
     404,    -1,   129,   468,    -1,   139,   469,    -1,   152,   470,
      -1,   157,   521,    -1,   161,   524,    -1,   165,    -1,   166,
     404,    -1,   166,    71,     5,    -1,   171,   609,    -1,   172,
     608,    -1,   175,   530,    -1,   181,    15,     4,    -1,   198,
     533,    -1,   202,   551,    -1,   203,   552,    -1,   204,   553,
      -1,   207,   570,   554,    -1,   208,   591,    -1,   187,   590,
      -1,   220,   607,    -1,   224,    71,     5,    -1,   246,   592,
      -1,   248,   593,    -1,   249,   596,    -1,   270,    95,    -1,
     263,   598,    -1,   261,   597,    -1,   278,    -1,   274,   570,
     600,    -1,   280,   605,    -1,   281,   606,    -1,   283,   610,
      -1,   288,   612,    -1,   304,    -1,   310,   634,    -1,   329,
       4,    -1,   330,   431,    -1,   343,    -1,   345,   636,    -1,
     352,    -1,   355,   638,    -1,   356,   639,    -1,   386,   643,
      -1,   394,   644,    -1,     3,    -1,     4,    -1,   404,    -1,
     217,   404,    -1,   250,   404,    -1,   252,   404,    -1,   356,
     404,    -1,    46,   404,    -1,    49,   404,    -1,    83,   404,
      -1,    91,   404,    -1,   158,   404,    -1,   281,   404,    -1,
       4,    -1,   389,    -1,   396,    -1,   239,    -1,   339,    -1,
     229,    -1,   397,    -1,   238,    -1,   131,    -1,    -1,   282,
      40,    -1,   148,    40,    -1,   282,    -1,   148,    -1,    -1,
     407,    -1,   402,    -1,     6,    -1,     7,    -1,     8,    -1,
       9,    -1,    10,    -1,   408,   408,    -1,   409,   410,    -1,
     410,   410,    -1,   402,   402,    -1,   176,    -1,   254,    -1,
     109,    -1,    19,    -1,   413,    -1,   356,    -1,   357,    -1,
     358,    -1,   359,    -1,   360,    -1,   361,    -1,   362,    -1,
     363,    -1,   364,    -1,   365,    -1,   366,    -1,   367,    -1,
     368,    -1,   369,    -1,   370,    -1,   371,    -1,   372,    -1,
     373,    -1,   374,    -1,   375,    -1,   376,    -1,   377,    -1,
     378,    -1,   379,    -1,   380,    -1,   381,    -1,   382,    -1,
     383,    -1,    60,    -1,   249,    -1,    -1,   390,    -1,   233,
      -1,   224,    -1,   232,    -1,   273,    -1,    -1,   314,    -1,
     221,    -1,   294,    -1,   247,    -1,    98,    -1,   192,    -1,
      73,    -1,    72,    -1,   160,    -1,   311,    -1,   111,    -1,
     127,    -1,   170,    -1,   289,    -1,    71,    -1,   201,    -1,
     196,    -1,   200,    -1,   262,    -1,   315,    -1,   316,    -1,
      29,    -1,   306,    -1,   167,    -1,    31,    -1,   291,    -1,
     285,    -1,   102,    -1,   182,    -1,    -1,   141,    -1,    36,
      -1,   142,    -1,   183,    -1,   173,    -1,   150,    -1,   116,
      -1,    -1,   105,    -1,   298,    -1,    -1,   105,    -1,    24,
      -1,    25,    -1,    -1,   303,    -1,   184,    -1,    -1,    16,
      -1,   178,    -1,    -1,   176,    -1,   208,    -1,     4,    -1,
     230,    -1,    27,    -1,   241,    -1,    66,    -1,    67,    -1,
     243,    -1,    52,    -1,   242,    -1,   335,    -1,   244,    -1,
      39,    -1,    -1,    67,    -1,    52,    -1,   110,    -1,    92,
      -1,   398,    -1,    27,    -1,    55,    -1,    -1,     4,    -1,
      89,    -1,   168,    -1,   256,    -1,   257,    -1,   271,    -1,
     318,    -1,    -1,    33,    -1,   322,    -1,   209,    -1,    -1,
     225,    -1,    44,    -1,    45,    -1,   193,    -1,   194,    -1,
     350,   437,    -1,    50,   434,    -1,    81,   435,    -1,   166,
     436,    -1,   211,   603,    -1,    38,   604,    -1,   300,   432,
      -1,   290,   402,    -1,   323,     4,    -1,   331,   402,    -1,
     404,    -1,    18,   402,    -1,   320,   402,    -1,   231,   433,
      -1,   404,    -1,   320,   402,    -1,   404,    -1,    71,     5,
      -1,   404,    -1,    71,     5,    -1,   404,    -1,    71,     5,
      -1,   402,   402,    -1,   258,   402,   402,   402,   402,   402,
      -1,    11,   439,    -1,    78,     5,     5,     5,    -1,   108,
       4,    -1,   130,   440,    -1,   149,   441,    -1,    57,   307,
       4,    -1,   336,   442,    -1,   134,     5,    -1,    63,    -1,
     402,   402,    -1,   402,    -1,   402,   402,    -1,   402,    11,
     402,   402,    -1,   402,   402,    11,   402,   402,    -1,   336,
     402,    -1,   336,   402,   402,    -1,   336,   402,    11,   402,
     402,    -1,   336,   402,   402,    11,   402,   402,    -1,    33,
      -1,   322,    -1,   137,    -1,   402,   402,    11,    63,     5,
       5,     5,    -1,   402,   402,     4,   402,   402,    11,    63,
       5,     5,     5,     5,    -1,   402,   402,    11,   402,   402,
       5,     5,     5,    -1,   402,   402,     4,   402,   402,    11,
     402,   402,     5,     5,     5,     5,    -1,   402,    -1,   402,
     402,    -1,   336,   444,    -1,   224,   390,   404,    -1,   137,
      -1,   402,    -1,   402,   402,    -1,   293,   446,    -1,   218,
     447,    -1,   212,   448,    -1,   347,   402,   402,    -1,   347,
     224,   224,    -1,   392,   449,    -1,   265,   404,    -1,   153,
      -1,   199,    -1,   402,    -1,   212,    -1,   392,    -1,   391,
      -1,   347,    -1,     4,   418,    -1,   218,   418,    -1,   285,
       4,    -1,   277,    -1,   402,     4,     4,    -1,    85,   402,
      -1,   285,     4,    -1,   195,     4,    -1,     4,   402,   402,
       4,     4,    -1,   281,   402,   402,   402,   402,   402,   402,
       4,     4,    -1,   171,   402,   402,   402,   402,   402,   402,
       4,     4,    -1,   172,   402,   402,   402,   402,   402,   402,
       4,     4,    -1,   220,     4,     4,     5,     5,     5,     4,
      -1,    42,    -1,   219,   451,    -1,   121,    -1,     4,   402,
     402,     4,     4,    -1,   281,   402,   402,   402,   402,   402,
     402,     4,     4,    -1,   171,   402,   402,   402,   402,   402,
     402,     4,     4,    -1,   172,   402,   402,   402,   402,   402,
     402,     4,     4,    -1,   220,     4,     4,     5,     5,     5,
       4,    -1,   417,    -1,   200,   402,    -1,    90,   454,    -1,
     100,     4,     4,    -1,   107,   455,    -1,   198,   456,    -1,
     251,   460,    -1,   288,   461,    -1,   321,   462,    -1,     5,
       4,     4,   459,     4,     4,   417,   402,   457,   458,   402,
     402,     5,    -1,     5,     4,     4,   459,     4,     4,   417,
     402,   402,   458,   402,   402,     5,    -1,     5,     4,     4,
     459,     4,     4,   417,   402,   457,   402,   402,     5,    -1,
       5,     4,     4,   459,     4,     4,   417,   402,   402,   402,
     402,     5,    -1,   260,    -1,    -1,    32,    -1,     5,    -1,
       5,     5,     4,   404,    -1,     5,     4,   404,     5,   412,
     419,    -1,   212,    -1,   392,    -1,   391,    -1,   347,    -1,
     153,    -1,   199,    -1,   310,    -1,    49,    -1,     5,    -1,
       5,     5,     4,   404,    -1,     5,     5,     4,   404,     4,
       4,    -1,     5,   412,   419,    -1,    32,     5,   412,   419,
      -1,    69,    -1,     4,    69,    -1,     4,     5,     4,     4,
      -1,     4,     5,     4,     4,     4,     4,    -1,    -1,   402,
     402,   402,   402,   412,   419,    -1,    63,   411,   412,   419,
     402,   402,   412,   421,    -1,   330,   464,    -1,    42,   402,
     402,    -1,   219,   402,   402,    -1,   121,   402,   402,    -1,
      -1,   402,   402,   412,   419,    -1,    42,   402,   402,     4,
      -1,   219,   402,   402,     4,    -1,   121,   402,   402,     4,
      -1,   414,   402,   402,    -1,   412,   419,   411,    -1,   404,
      -1,   355,   402,   402,    -1,    42,   219,   414,   402,   402,
      -1,   219,   414,   402,   402,    -1,    42,   219,   412,   411,
      -1,   219,   412,   411,    -1,    34,     4,    -1,    -1,    33,
      -1,   322,    -1,   209,    -1,   402,    -1,    69,    -1,   161,
     128,     5,    -1,    -1,    43,    71,    -1,    46,   473,    -1,
      49,   475,    -1,    70,   476,    -1,    75,   480,    -1,    74,
     479,    -1,    76,   482,    -1,    84,   484,    -1,    86,   487,
      -1,    91,   488,    -1,    93,   489,    -1,    95,   491,    -1,
      94,   490,    -1,   101,   492,    -1,   103,    -1,   138,   496,
      -1,   157,   502,    -1,   166,    71,    -1,   168,     5,     5,
       4,    -1,   169,    96,   471,    -1,   171,   510,    -1,   172,
     509,    -1,   175,   494,    -1,   179,   493,    -1,   181,    15,
      -1,   212,    -1,   207,   570,   564,    -1,   208,   504,    -1,
     187,   503,    -1,   220,   508,    -1,   224,    71,    -1,   246,
      -1,   248,   506,    -1,   255,   325,   414,   402,   402,     4,
       4,     5,    -1,   281,   507,    -1,   283,    -1,   310,   511,
      -1,   329,    -1,   330,   512,    -1,   340,    -1,   348,   414,
     402,   402,    -1,   354,    96,   472,    -1,   356,   519,    -1,
     394,    -1,     5,     5,   402,   402,   414,     4,   467,    -1,
       5,     5,   402,   402,   412,   419,     4,   467,    -1,     5,
       5,   402,   402,   414,     4,   467,    -1,     5,     5,   402,
     402,   412,   419,     4,   467,    -1,   108,    -1,   130,    -1,
     149,    -1,    57,   307,    -1,    95,    -1,   134,    -1,    78,
     474,    -1,   197,    -1,    -1,   212,     5,    -1,   112,     5,
      -1,   130,    -1,   224,   390,    -1,    -1,   457,   458,    -1,
     402,   458,    -1,   293,    -1,   218,    -1,   212,   477,    -1,
     347,   191,    -1,   392,   478,    -1,   265,    -1,   218,    -1,
     285,    -1,    85,    -1,   285,    -1,   195,    -1,    -1,   326,
      -1,   191,   481,    -1,     4,    -1,     4,   414,   402,   402,
      -1,     4,   402,   402,   417,   402,    -1,    -1,   191,   483,
      -1,   200,    -1,     4,   402,   402,   417,   402,    -1,   412,
     419,    -1,    70,   485,    -1,    71,    -1,    99,    -1,   100,
      -1,   191,    -1,   236,   191,    -1,   211,    -1,    76,   486,
      -1,   310,    -1,   321,    -1,   321,     4,    -1,   385,    -1,
      -1,   218,    -1,   293,    -1,    -1,   200,    -1,   402,   402,
     412,   419,   420,    -1,   414,   402,   402,   412,   419,   420,
      -1,   412,   419,   420,    -1,    63,   412,   419,   420,   412,
     421,    -1,   330,   412,   419,    -1,   414,    -1,   412,   419,
     420,    -1,   319,    -1,    34,    -1,   414,    -1,   412,   419,
     420,    -1,   412,   419,   411,   402,   402,     5,    -1,     4,
     412,   419,   411,   402,   402,     5,    -1,   414,   402,   402,
       4,     4,    -1,     5,   405,    -1,    70,    -1,   414,   402,
     402,     5,   405,    -1,     4,     4,     4,     4,    -1,    95,
      -1,   132,   223,   495,    -1,    -1,     4,    -1,   402,   402,
      -1,   226,    -1,    63,   412,   419,   420,    -1,    88,    -1,
     108,   499,    -1,    47,    -1,   128,   497,    -1,   132,   223,
     500,    -1,   163,   498,    -1,   164,    -1,   237,   223,    -1,
     307,    -1,   307,   412,   419,   421,    -1,   308,   501,    -1,
     385,    -1,     4,    -1,   414,   402,   402,    -1,     4,    -1,
     185,     5,    -1,     4,   185,     5,    -1,   356,     4,    -1,
      -1,     4,    -1,   405,    -1,   405,   414,   402,   402,    -1,
     405,     4,    -1,    -1,     4,    -1,   146,   176,   412,    -1,
     146,   176,     4,   412,    -1,   336,   176,   402,   412,    -1,
      -1,   245,    -1,   349,    -1,    88,    -1,   188,    -1,    71,
     505,    -1,    48,   505,    -1,   334,   505,    -1,   350,   505,
      -1,    71,    -1,   206,    -1,   273,    -1,   324,    -1,   334,
      -1,    88,    -1,    48,    -1,    -1,     4,    -1,   265,    -1,
      65,    -1,   324,    -1,   350,    -1,   324,    -1,    65,    -1,
     324,    -1,   350,    -1,    65,    -1,   324,    -1,   350,    -1,
     149,    -1,   272,    -1,   272,   213,    -1,   305,    -1,   305,
     213,    -1,    21,    -1,   350,   518,    -1,    50,   515,    -1,
      81,   516,    -1,   166,   517,    -1,   211,    -1,    38,    -1,
     300,   513,    -1,   290,    -1,    -1,    18,    -1,   320,    -1,
     231,   514,    -1,    -1,   320,    -1,    -1,    71,    -1,    -1,
      71,    -1,    -1,    71,    -1,    -1,   258,    -1,    -1,    15,
     520,    -1,   223,   413,    -1,    -1,   259,    -1,    90,   522,
      -1,   107,    -1,   412,   419,   420,   523,     5,     5,    -1,
     412,   419,   420,   523,     5,    -1,    20,    -1,   268,    -1,
      19,    -1,    43,    71,    -1,    46,   525,    -1,    84,   526,
      -1,    91,    -1,   102,    -1,   103,    -1,   109,    -1,   138,
     527,    -1,   157,    -1,   175,    -1,   182,    -1,   207,   528,
      -1,   254,    -1,   176,    -1,   310,    -1,   324,   412,    -1,
     356,   529,    -1,    79,     5,    -1,    -1,    32,    -1,    -1,
      46,    -1,    94,    -1,   217,    -1,   166,    -1,   296,    -1,
     251,    -1,   341,    -1,   412,    -1,    62,   412,    -1,   125,
     412,    -1,   196,   412,    -1,    17,    -1,   330,   412,    -1,
     227,     4,     4,    -1,   126,    -1,   210,     5,    -1,    95,
     532,    -1,   297,   132,   223,   531,    -1,   297,     4,     4,
       4,     4,    -1,   345,    -1,   356,   402,   402,   402,   402,
     402,   402,   402,   402,     4,    -1,     5,    -1,     5,     4,
      -1,     4,     4,    60,    -1,     4,     4,   412,    -1,   218,
     404,    -1,    26,   534,    -1,   122,   536,    -1,   138,   537,
      -1,   178,   550,    -1,   235,   548,    -1,   253,   549,    -1,
       5,    13,     5,   424,    -1,     5,    14,     5,   424,    -1,
       5,    65,     5,   424,    -1,     5,   215,   424,    -1,     5,
     216,   424,    -1,     5,   301,   422,     4,   424,    -1,     5,
     312,     4,   424,    -1,     5,   313,     4,   424,    -1,     5,
     349,     5,   424,    -1,   281,    94,   535,    -1,   172,    94,
     535,    -1,   171,    94,   535,    -1,     5,    13,     5,    -1,
       5,    14,     5,    -1,     5,    65,     5,    -1,     5,   215,
      -1,     5,   216,    -1,     5,   301,   422,     4,    -1,     5,
     312,     4,    -1,     5,   313,     4,    -1,     5,   349,     5,
      -1,     5,     5,   309,    -1,     5,    13,     5,   424,    -1,
       5,    14,     5,   424,    -1,     5,    65,     5,   424,    -1,
       5,   215,   423,   424,    -1,     5,     5,   309,   423,   424,
      -1,     5,   216,   423,   424,    -1,     5,   301,   422,     4,
     423,   424,    -1,     5,   317,   422,     4,     4,   423,   424,
      -1,     5,   312,     4,   424,    -1,     5,   313,     4,   424,
      -1,     5,   349,     5,   423,   424,    -1,   308,   538,    -1,
     128,    94,   539,    -1,   281,   176,   547,    -1,   281,    94,
     546,    -1,   172,   176,   547,    -1,   172,    94,   546,    -1,
     171,   176,   547,    -1,   171,    94,   546,    -1,   217,   540,
      -1,     5,    13,     5,    -1,     5,    14,     5,    -1,     5,
      65,     5,    -1,     5,   215,   423,    -1,     5,     5,   309,
     423,    -1,     5,   216,   423,    -1,     5,   301,   422,     4,
     423,    -1,     5,   317,   422,     4,     4,   423,    -1,     5,
     312,     4,    -1,     5,   313,     4,    -1,     5,   349,     5,
     423,    -1,     5,    13,     5,    -1,     5,    14,     5,    -1,
       5,    65,     5,    -1,     5,   215,   423,    -1,     5,   216,
     423,    -1,     5,   301,   422,     4,   423,    -1,     5,   312,
       4,    -1,     5,   313,     4,    -1,     5,   349,     5,   423,
      -1,   176,   181,   541,    -1,   181,   542,    -1,   176,   543,
      -1,   545,    -1,   176,   384,   544,    -1,     5,    13,     5,
     424,    -1,     5,    14,     5,   424,    -1,     5,    65,     5,
     424,    -1,     5,   215,   423,   424,    -1,     5,   216,   423,
     424,    -1,     5,   301,   422,     4,   423,   424,    -1,     5,
     312,     4,   424,    -1,     5,   313,     4,   424,    -1,     5,
     349,     5,   423,   424,    -1,     5,    13,     5,   424,    -1,
       5,    14,     5,   424,    -1,     5,    65,     5,   424,    -1,
       5,   215,   423,   424,    -1,     5,     5,   309,   423,   424,
      -1,     5,   216,   423,   424,    -1,     5,   301,   422,     4,
     423,   424,    -1,     5,   317,   422,     4,     4,   423,   424,
      -1,     5,   312,     4,   424,    -1,     5,   313,     4,   424,
      -1,     5,   349,     5,   423,   424,    -1,   413,     5,    13,
       5,   424,    -1,   413,     5,    14,     5,   424,    -1,   413,
       5,    65,     5,   424,    -1,   413,     5,   215,   423,   424,
      -1,   413,     5,   216,   423,   424,    -1,   413,     5,   301,
     422,     4,   423,   424,    -1,   413,     5,   312,     4,   424,
      -1,   413,     5,   313,     4,   424,    -1,   413,     5,   349,
       5,   423,   424,    -1,     5,    13,     5,   424,    -1,     5,
      14,     5,   424,    -1,     5,    65,     5,   424,    -1,     5,
     215,   423,   424,    -1,     5,   216,   423,   424,    -1,     5,
     301,   422,     4,   423,   424,    -1,     5,   312,     4,   424,
      -1,     5,   313,     4,   424,    -1,     5,   349,     5,   423,
     424,    -1,   413,     5,    13,     5,   424,    -1,   413,     5,
      14,     5,   424,    -1,   413,     5,    65,     5,   424,    -1,
     413,     5,   215,   423,   424,    -1,   413,     5,     5,   309,
     423,   424,    -1,   413,     5,   216,   423,   424,    -1,   413,
       5,   301,   422,     4,   423,   424,    -1,   413,     5,   317,
     422,     4,     4,   423,   424,    -1,   413,     5,   312,     4,
     424,    -1,   413,     5,   313,     4,   424,    -1,   413,     5,
     349,     5,   423,   424,    -1,     5,    13,     5,    -1,     5,
      14,     5,    -1,     5,    65,     5,    -1,     5,   215,   423,
      -1,     5,     5,   309,   423,    -1,     5,   216,   423,    -1,
       5,   301,   422,     4,   423,    -1,     5,   317,   422,     4,
       4,   423,    -1,     5,   312,     4,    -1,     5,   313,     4,
      -1,     5,   349,     5,   423,    -1,     5,    13,     5,    -1,
       5,    14,     5,    -1,     5,    65,     5,    -1,     5,   215,
     423,    -1,     5,   216,   423,    -1,     5,   301,   422,     4,
     423,    -1,     5,   312,     4,    -1,     5,   313,     4,    -1,
       5,   349,     5,   423,    -1,     5,    13,     5,   424,    -1,
       5,    65,     5,   424,    -1,     5,   215,   424,    -1,     5,
     301,   422,     4,   424,    -1,     5,   312,     4,   424,    -1,
       5,   349,     5,   424,    -1,     5,     5,    -1,   308,     5,
       5,    -1,   101,     4,     4,     4,     4,     4,    -1,   212,
       4,     4,     4,     4,     4,    -1,   121,    -1,   264,    -1,
     404,    -1,   155,   404,    -1,    95,   404,    -1,    71,     5,
      -1,     5,     4,     4,    -1,   345,   402,   402,    -1,   394,
     402,    -1,     5,     5,   413,   419,     5,     5,   413,   419,
     402,   413,   421,     5,    -1,    64,   557,    -1,    71,     5,
      -1,    87,    -1,    80,   563,     5,    -1,    80,   563,   349,
       5,    -1,    82,   107,    -1,    -1,    90,   555,   558,    -1,
      96,    -1,   107,   561,    -1,   115,   562,    -1,   124,     4,
      -1,   143,     5,    -1,   166,    16,    -1,   166,   240,   402,
     402,    -1,   166,   337,   402,   402,    -1,     4,    20,   428,
     404,    -1,    20,   318,    59,     5,    -1,    20,   318,    59,
      -1,     4,    21,   407,    -1,     4,    21,   407,   414,    -1,
       4,    21,   407,   412,   419,    -1,     4,    22,   272,   402,
     402,     4,   412,   421,    -1,     4,    22,   272,     5,   412,
     421,    -1,     4,    53,   272,   402,   402,   402,     4,   412,
     421,    -1,     4,    53,   272,     5,   412,   421,    -1,     4,
      52,   272,   402,   402,   412,   421,    -1,     4,    56,   115,
     407,   407,     4,   402,   402,   402,     4,    -1,     4,    56,
     115,   407,   407,     4,   402,   402,   402,     4,   414,    -1,
       4,    56,   115,   407,   407,     4,   402,   402,   402,     4,
     412,   419,    -1,     4,    56,   115,     5,     5,   412,   419,
     412,   421,    -1,     4,    59,   556,     5,     5,    -1,     4,
      67,   272,   402,   412,   421,    -1,     4,    71,     5,    -1,
       4,    81,    27,   404,   404,    -1,     4,    81,   121,   425,
     425,    -1,     4,    81,   186,     5,     5,    -1,     4,    81,
     272,   402,   412,   421,    -1,     4,    81,   324,   412,   419,
      -1,     4,    82,   153,   404,    -1,     4,    82,    28,   404,
      -1,     4,    82,   340,     5,    -1,     4,    89,   115,   407,
     407,     4,   402,   402,     4,    -1,     4,    89,   115,   407,
     407,     4,   402,   402,     4,   414,    -1,     4,    89,   115,
     407,   407,     4,   402,   402,     4,   412,   419,    -1,     4,
      89,   115,     5,     5,   412,   419,   412,   421,    -1,     4,
      90,    22,   272,   402,   402,    -1,     4,    90,    53,   272,
     402,   402,    -1,     4,    90,    56,    21,   402,   402,    -1,
       4,    90,    56,   272,   402,   402,    -1,     4,    90,   120,
     272,   402,   402,    -1,     4,    90,   123,    21,   402,   402,
      -1,     4,    90,   123,   272,   402,   402,    -1,     4,    90,
      89,    21,   402,   402,    -1,     4,    90,    89,   272,   402,
     402,    -1,     4,    90,   260,   353,     4,   402,   402,    -1,
       4,    90,   295,   353,     4,   402,   402,    -1,     4,   107,
      -1,     4,   107,    22,     4,    -1,     4,   107,    53,     4,
      -1,     4,   107,    56,     4,    -1,     4,   107,   120,     4,
      -1,     4,   107,    59,   556,     5,    -1,     4,   107,   123,
       4,    -1,     4,   107,    89,     4,    -1,     4,   107,   260,
     353,     4,    -1,     4,   107,   295,   353,     4,    -1,     4,
     107,   326,    -1,     4,   107,   326,     5,    -1,     4,   107,
     326,     4,    -1,     4,   115,    42,     4,    -1,     4,   119,
     272,   402,   402,   412,   421,    -1,     4,   120,   272,   402,
     402,   402,     4,   412,   421,    -1,     4,   120,   272,     5,
     412,   421,    -1,     4,   123,   115,   407,   407,     4,   402,
     402,   402,     4,    -1,     4,   123,   115,   407,   407,     4,
     402,   402,   402,     4,   414,    -1,     4,   123,   115,   407,
     407,     4,   402,   402,   402,     4,   412,   419,    -1,     4,
     123,   115,     5,     5,   412,   419,   412,   421,    -1,     4,
     143,     5,    -1,     4,   166,    -1,     4,   166,   240,    -1,
       4,   195,    27,   404,   404,    -1,     4,   195,   121,   425,
     425,    -1,     4,   195,   258,   412,   419,   411,   411,    -1,
       4,   222,   402,   402,    -1,     4,   222,   147,    -1,     4,
     222,    37,    -1,     4,   222,   336,   412,   419,   411,    -1,
       4,   260,   258,   412,   419,   420,     5,    -1,     4,   260,
     258,   412,   419,   420,   349,     5,    -1,     4,   260,   278,
     402,   402,   412,   421,    -1,     4,   295,   278,   402,   402,
     412,   421,    -1,     4,   258,   299,   426,    -1,     4,   258,
     307,     4,    -1,     4,   266,   412,   419,   411,   411,   402,
     412,   421,    -1,     4,   267,   576,   404,    -1,     4,   283,
      42,    -1,     4,   284,   144,     5,    -1,     4,   284,   258,
     412,   419,   411,   411,    -1,     4,   284,   324,   412,   419,
     412,   421,    -1,     4,   296,    -1,     4,   296,   240,    -1,
       4,   326,     5,    -1,     4,   328,     5,    -1,     4,   328,
     283,   404,    -1,     4,   154,   132,     5,    -1,     4,   154,
     307,     4,     4,    -1,     4,   342,    -1,     4,   344,    -1,
       4,   351,    27,   404,    -1,     4,   351,   121,   425,    -1,
       4,   351,   258,   412,   419,   411,   412,   421,   402,   407,
      -1,     4,   385,     4,    -1,     4,   100,     4,     4,    -1,
     184,    -1,   184,   402,   402,    -1,   197,   571,    -1,   198,
     572,    -1,   222,   573,    -1,   265,   404,    -1,   267,   576,
     404,    -1,   267,   576,   404,   402,   402,    -1,   283,    42,
     402,   402,    -1,   283,   219,   402,   402,     4,    -1,   283,
     121,    -1,   288,   580,    -1,   296,   581,    -1,   304,   582,
      -1,     5,    71,     5,    -1,     5,    87,    -1,     5,   107,
      -1,     5,    96,    -1,     5,   143,     5,    -1,     5,   166,
      -1,     5,   166,   240,    -1,     5,   222,   402,   402,    -1,
       5,   222,   147,    -1,     5,   222,    37,    -1,     5,   222,
     336,   412,   419,   411,    -1,     5,   267,   576,   404,    -1,
       5,   296,    -1,     5,   296,   240,    -1,     5,   342,    -1,
       5,   344,    -1,   326,   115,     5,     5,    -1,   326,   107,
       5,    -1,   326,   107,    16,    -1,   326,     5,    -1,   326,
     345,     5,    -1,   251,    -1,   251,   412,    -1,   341,    -1,
     342,    16,    -1,   344,    16,    -1,   385,     4,    -1,   100,
       4,     4,    -1,   296,    -1,   344,    -1,   166,    -1,   342,
      -1,    42,   222,    -1,   222,    -1,   121,   222,    -1,    42,
     115,    -1,   115,    -1,   121,   115,    -1,    42,   283,    -1,
     283,    -1,   121,   283,    -1,   107,    -1,   328,    -1,    71,
      -1,   385,    -1,   267,    -1,   143,    -1,   184,    -1,   345,
      -1,    -1,     4,    -1,    31,   404,    -1,   272,   402,    -1,
     180,     4,    -1,   245,     4,   402,    -1,    67,   402,   402,
     402,   577,    -1,   119,   402,   402,   402,   402,   406,   577,
      -1,    52,   402,   402,   402,   402,   406,   577,    -1,   260,
     402,   402,   402,   402,   577,    -1,   260,    60,   349,     5,
     577,    -1,   295,   402,   402,   402,   402,   577,    -1,   195,
     402,   402,   402,   402,   577,    -1,   351,   402,   402,   402,
     402,   577,    -1,   328,   402,   402,   406,   577,    -1,   154,
     402,   402,     5,   577,    -1,   154,   402,   402,     5,     4,
       4,   577,    -1,    67,   258,   402,   402,   427,   577,    -1,
      52,   258,   402,   402,   427,   577,    -1,   110,   258,   402,
     402,   427,   577,    -1,    92,   258,   402,   402,   427,   577,
      -1,   398,   258,   402,   402,   427,   577,    -1,    27,   258,
     402,   402,   427,   577,    -1,    55,   258,   402,   402,   427,
     577,    -1,   284,   402,   402,   402,   402,   412,   419,   412,
     421,     5,   577,    -1,    81,   402,   402,   402,   412,   419,
     577,    -1,   266,   402,   402,   402,   402,   402,   577,    -1,
      22,   402,   402,   402,   402,     4,   577,    -1,   120,   402,
     402,   402,   402,   402,     4,   406,   577,    -1,    53,   402,
     402,   402,   402,   402,     4,   406,   577,    -1,    89,   402,
     402,   407,   407,     4,   402,   402,     4,   577,    -1,   123,
     402,   402,   407,   407,     4,   402,   402,   402,     4,   406,
     577,    -1,    56,   402,   402,   407,   407,     4,   402,   402,
     402,     4,   406,   577,    -1,    82,   559,   577,    -1,   327,
     560,    -1,    -1,     4,    -1,     5,   402,   402,    -1,   349,
       5,   402,   402,    -1,   402,   402,   349,     5,    -1,     5,
     412,   419,   411,    -1,    -1,   296,    -1,    16,    -1,    42,
     402,   402,     4,    -1,   219,   402,   402,     4,    -1,   121,
      -1,   114,    -1,   387,    -1,    68,    -1,   287,    -1,   286,
      -1,   269,    -1,   388,    -1,    64,   565,    -1,    71,    -1,
     143,    -1,   124,    -1,   159,   402,   402,    -1,   174,   402,
     402,    -1,     4,    20,    89,     5,     5,     5,   412,     4,
      -1,     4,    20,   168,     5,     5,     4,    -1,     4,    20,
     256,     5,     5,     5,     5,   412,   419,   429,    -1,     4,
      20,   257,     5,     5,   412,   429,    -1,     4,    20,   271,
       5,     5,     5,   412,    -1,     4,    20,   318,   412,   419,
      -1,     4,    20,   318,   101,   412,   419,    -1,    20,   318,
      16,   101,   412,   419,    -1,    20,   318,   395,    -1,   174,
      16,    -1,     4,    21,    -1,     4,    21,   414,    -1,     4,
      21,   412,   419,    -1,     4,    22,   272,   412,   421,    -1,
       4,    53,   272,   412,   421,    -1,     4,    52,   272,   412,
     421,    -1,     4,    56,    21,    -1,     4,    56,    21,   414,
      -1,     4,    56,    21,   412,   419,    -1,     4,    56,   272,
     412,   421,    -1,     4,    63,   412,   419,   420,    -1,     4,
      67,   272,   412,   421,    -1,     4,    71,    -1,     4,    81,
      27,    -1,     4,    81,   121,    -1,     4,    81,   186,    -1,
       4,    81,   272,   412,   421,    -1,     4,    81,   324,    -1,
       4,    82,   153,    -1,     4,    82,    28,    -1,     4,    82,
     340,    -1,     4,    89,    21,    -1,     4,    89,    21,   414,
      -1,     4,    89,    21,   412,   419,    -1,     4,    89,   272,
     412,   421,    -1,     4,   119,   272,   412,   421,    -1,     4,
     120,   272,   412,   421,    -1,     4,   123,    21,    -1,     4,
     123,    21,   414,    -1,     4,   123,    21,   412,   419,    -1,
       4,   123,   272,   412,   421,    -1,     4,   143,    -1,     4,
     166,    -1,     4,   195,    27,    -1,     4,   195,   121,    -1,
       4,   195,   190,   412,   421,    -1,     4,   195,   258,   412,
     419,   420,    -1,     4,   205,   190,   402,   412,   421,    -1,
       4,   258,   299,    -1,     4,   258,   307,    -1,     4,   260,
     258,   412,   419,   420,    -1,     4,   266,   258,   412,   419,
     420,    -1,     4,   266,   190,   412,   421,    -1,     4,   266,
     332,   412,   421,    -1,     4,   267,    -1,     4,   267,   576,
      -1,     4,   284,   144,    -1,     4,   284,   190,   412,   421,
      -1,     4,   284,   258,   412,   419,   420,    -1,     4,   284,
     324,    -1,     4,   296,    -1,     4,   326,    -1,     4,   326,
       4,    -1,     4,   328,    -1,     4,   328,   283,    -1,     4,
     154,   132,    -1,     4,   154,   307,    -1,     4,   340,    -1,
       4,   351,    27,    -1,     4,   351,   121,    -1,     4,   351,
     190,   412,   421,    -1,     4,   351,   258,   412,   419,   420,
      -1,     4,   385,    -1,     4,   100,    -1,   166,   566,    -1,
     166,   236,    -1,   236,    -1,   260,   295,   402,   402,    -1,
     295,   295,   402,   402,    -1,   265,    -1,   267,   576,    -1,
     296,   567,    -1,   296,   236,    -1,   304,   568,    -1,     5,
      71,    -1,     5,   143,    -1,     5,   174,    -1,     5,   267,
     576,    -1,     5,   326,    -1,     5,   326,   236,    -1,   326,
      16,    -1,   326,   106,   223,    -1,   385,    -1,   100,    -1,
      31,    -1,   272,    -1,   180,    -1,   245,    -1,    -1,   402,
     402,    -1,    -1,   402,   402,    -1,    -1,   328,    -1,    -1,
      -1,   259,    -1,   274,    -1,   347,    -1,    61,    -1,   145,
      -1,   563,   412,   419,   420,   404,   578,   585,    -1,   296,
     563,   412,   419,   420,   404,   578,   585,    -1,   563,     5,
      -1,   563,     5,     4,     5,   412,   419,    -1,   563,     4,
      -1,   563,     4,     4,     5,   412,   419,    -1,   138,     5,
      -1,   138,     5,     5,    -1,   402,   402,    -1,   147,    -1,
      37,    -1,    42,   402,   402,    -1,   219,   402,   402,    -1,
     121,    -1,   336,   412,   419,   411,    -1,   574,   575,    -1,
     575,    -1,   576,   399,   404,    -1,    71,   399,     5,    -1,
     100,   399,     4,     4,    -1,   385,   399,     4,    -1,   143,
     399,     5,    -1,   328,   399,     5,    -1,   588,    -1,   589,
      -1,   230,    -1,   296,    -1,   166,    -1,    99,    -1,   140,
      -1,   115,    -1,   222,    -1,   283,    -1,   107,    -1,   177,
      -1,   314,    -1,   133,    -1,   569,    -1,   569,   574,    -1,
      -1,    -1,   579,   583,    -1,     5,   563,   412,   419,   420,
     404,    -1,   296,     5,   563,   412,   419,   420,   404,    -1,
     327,     5,    -1,    16,    -1,   240,   402,   402,    -1,   337,
      -1,   337,   402,   402,    -1,   135,    -1,   189,    -1,   404,
      -1,   328,   404,    -1,   583,   584,    -1,   584,    -1,   576,
     399,   404,    -1,    -1,    -1,   586,   587,    -1,   587,   588,
      -1,   588,    -1,   326,   399,     5,    -1,    59,   399,   556,
       5,     5,    -1,    -1,    90,    -1,     4,    -1,   188,     4,
      -1,    71,     5,    -1,     4,    71,     5,    -1,    48,   416,
      -1,     4,    48,   416,    -1,   334,   402,    -1,     4,   334,
     402,    -1,   350,   404,    -1,     4,   350,   404,    -1,   304,
      -1,     4,   304,    -1,   165,    -1,     4,   165,    -1,   107,
      -1,     4,   107,    -1,   346,    -1,     4,   346,    -1,   113,
      -1,     4,   113,    -1,   333,    -1,     4,   333,    -1,    51,
      -1,     4,    51,    -1,    69,    -1,    71,     5,    -1,   206,
     415,    -1,   273,   402,   402,    -1,   324,   412,    -1,   334,
     402,    -1,    48,   416,    -1,   206,     4,    -1,   398,    -1,
     396,    -1,   388,    -1,   230,    -1,   402,   402,   402,   402,
      -1,   402,   402,    -1,   414,   402,   402,    -1,   412,   419,
     411,    -1,   336,   594,    -1,    41,   402,   402,    -1,   219,
     595,    -1,   265,   404,    -1,   402,   402,    -1,   414,   402,
     402,    -1,   412,   419,   411,    -1,    42,   402,   402,    -1,
     402,   402,    -1,   121,   402,   402,    -1,   404,    -1,   356,
     413,   419,    -1,     5,     4,     4,    -1,   345,    -1,    77,
     599,    -1,   191,     4,    -1,   279,     4,    -1,   290,   402,
      -1,     4,     4,     4,     4,     4,     4,     4,     4,     4,
      -1,     4,     4,     4,     4,     4,     4,    -1,    58,    -1,
     156,    -1,   281,    -1,    97,    -1,   166,   601,    -1,   296,
     602,    -1,    42,   402,   402,    -1,   219,   402,   402,    -1,
     121,    -1,   302,   121,    -1,    42,   402,   402,    -1,   219,
     402,   402,    -1,   121,    -1,   302,   121,    -1,   214,    -1,
      12,    -1,   136,    -1,   230,    -1,    35,    -1,   117,    -1,
       4,    -1,    69,    -1,    65,     5,    -1,   324,   412,    -1,
     350,     4,     4,     4,    -1,   324,   412,    -1,    65,     5,
      -1,    65,   170,    -1,    65,   289,    -1,   324,   412,    -1,
     350,     4,     4,     4,    -1,    65,     5,    -1,    65,   170,
      -1,    65,   289,    -1,    65,   348,    -1,   324,   412,    -1,
     350,     4,     4,     4,    -1,   402,    -1,   402,   105,    -1,
     219,   611,    -1,   336,   402,    -1,   336,   402,   105,    -1,
      42,    -1,   402,    -1,   121,    -1,    26,   614,    -1,   138,
     615,    -1,   393,   613,    -1,   235,   632,    -1,   122,   633,
      -1,   253,     5,    -1,   132,     5,    -1,    65,     5,    -1,
     312,     4,    -1,   132,     5,   430,    -1,    65,     5,   430,
      -1,   312,     4,   430,    -1,   281,    94,   622,    -1,   172,
      94,   625,    -1,   171,    94,   628,    -1,   616,    -1,   176,
     616,    -1,   325,   617,    -1,   308,   618,    -1,   128,    94,
     619,    -1,   217,   620,    -1,   281,   176,   623,    -1,   281,
      94,   624,    -1,   172,   176,   626,    -1,   172,    94,   627,
      -1,   171,   176,   629,    -1,   171,    94,   630,    -1,   276,
     631,    -1,   132,     5,    -1,    65,     5,    -1,   312,     4,
      -1,   132,     5,    -1,    65,     5,    -1,   312,     4,    -1,
     132,     5,    -1,    65,     5,    -1,   312,     4,    -1,   132,
       5,    -1,    65,     5,    -1,   312,     4,    -1,   176,   621,
      -1,   132,     5,     4,    -1,    65,     5,     4,    -1,   312,
       4,     4,    -1,   132,     5,    -1,    65,     5,    -1,   312,
       4,    -1,   132,     5,   430,    -1,    65,     5,   430,    -1,
     312,     4,   430,    -1,   132,     5,    -1,    65,     5,    -1,
     312,     4,    -1,   132,     5,    -1,    65,     5,    -1,   312,
       4,    -1,   132,     5,   430,    -1,    65,     5,   430,    -1,
     312,     4,   430,    -1,   132,     5,    -1,    65,     5,    -1,
     312,     4,    -1,   132,     5,    -1,    65,     5,    -1,   312,
       4,    -1,   132,     5,   430,    -1,    65,     5,   430,    -1,
     312,     4,   430,    -1,   132,     5,    -1,    65,     5,    -1,
     312,     4,    -1,   132,     5,    -1,    65,     5,    -1,   312,
       4,    -1,   132,     5,    -1,    65,     5,    -1,   312,     4,
      -1,   132,     5,   430,    -1,    65,     5,   430,    -1,   312,
       4,   430,    -1,   132,     5,     5,   430,    -1,   635,     4,
       4,   402,   402,   407,    -1,   635,     4,    -1,   107,    -1,
      54,    -1,   338,    -1,   151,    -1,   118,    -1,    -1,     4,
     402,   402,   402,   402,    -1,   234,    -1,   234,     4,   402,
     402,   402,   402,    -1,   138,   308,   637,    -1,     4,    -1,
       4,     4,    -1,   402,   412,    -1,   402,   402,    -1,   336,
     402,   402,    -1,   413,   419,   420,    -1,    15,   642,    -1,
     278,     4,    -1,   275,   641,    -1,    23,   640,    -1,     4,
       4,    -1,     4,     5,    -1,   328,     4,     5,    -1,     4,
       4,    -1,     4,     5,    -1,   328,     4,     5,    -1,     4,
      -1,     4,   413,   419,    -1,   336,     4,   413,   419,    -1,
     259,    69,    -1,   264,    -1,   402,   402,    -1,   402,   402,
      11,   402,   402,    -1,   402,   402,    11,   414,   402,   402,
      -1,   402,   402,    11,   412,   419,   411,    -1,   336,   645,
      -1,   137,    -1,   137,   402,    -1,   402,   402,    -1,   402,
     402,    11,   402,   402,    -1,   402,   402,    11,   414,   402,
     402,    -1,   402,   402,    11,   412,   419,   411,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   507,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,   556,   557,   558,   559,   560,   561,   562,   563,   564,
     565,   566,   569,   570,   573,   574,   575,   576,   577,   578,
     579,   580,   581,   582,   583,   586,   588,   589,   590,   591,
     593,   594,   595,   596,   599,   600,   601,   602,   603,   606,
     607,   610,   611,   612,   615,   618,   621,   624,   636,   643,
     650,   658,   659,   660,   661,   662,   665,   666,   667,   668,
     669,   670,   671,   672,   673,   674,   675,   676,   677,   678,
     679,   680,   681,   682,   683,   684,   685,   686,   687,   688,
     689,   690,   691,   692,   695,   696,   699,   700,   701,   702,
     703,   704,   707,   708,   709,   710,   711,   712,   713,   714,
     715,   716,   717,   718,   719,   720,   721,   722,   723,   726,
     727,   728,   729,   730,   731,   732,   733,   736,   737,   738,
     739,   740,   743,   744,   745,   746,   747,   748,   749,   750,
     753,   754,   755,   758,   759,   760,   761,   764,   765,   766,
     769,   770,   771,   774,   775,   776,   780,   781,   782,   783,
     784,   785,   786,   787,   788,   789,   790,   791,   794,   795,
     796,   797,   798,   799,   800,   801,   804,   805,   808,   809,
     810,   811,   812,   813,   816,   817,   818,   819,   822,   823,
     824,   825,   826,   827,   830,   831,   832,   833,   834,   835,
     836,   837,   838,   839,   843,   844,   845,   846,   849,   850,
     853,   854,   857,   858,   861,   862,   865,   866,   870,   871,
     872,   873,   874,   875,   876,   877,   880,   881,   884,   885,
     886,   888,   890,   891,   892,   894,   898,   899,   902,   903,
     905,   908,   910,   916,   917,   918,   919,   922,   923,   924,
     927,   928,   929,   930,   931,   932,   933,   939,   940,   943,
     944,   945,   946,   947,   950,   951,   952,   953,   956,   957,
     962,   967,   974,   976,   978,   980,   982,   984,   985,   986,
     989,   991,   993,   995,   997,  1000,  1001,  1004,  1005,  1006,
    1007,  1008,  1009,  1010,  1013,  1016,  1019,  1025,  1031,  1034,
    1035,  1038,  1039,  1040,  1047,  1048,  1049,  1050,  1053,  1054,
    1057,  1058,  1061,  1062,  1063,  1067,  1069,  1073,  1074,  1075,
    1076,  1079,  1080,  1083,  1085,  1086,  1087,  1088,  1091,  1092,
    1094,  1095,  1096,  1099,  1101,  1103,  1104,  1106,  1108,  1110,
    1112,  1116,  1119,  1120,  1121,  1122,  1125,  1126,  1129,  1132,
    1133,  1134,  1135,  1136,  1137,  1138,  1139,  1140,  1141,  1142,
    1143,  1144,  1145,  1146,  1147,  1148,  1149,  1150,  1151,  1152,
    1153,  1154,  1155,  1156,  1157,  1158,  1159,  1160,  1161,  1162,
    1163,  1164,  1165,  1166,  1168,  1169,  1170,  1171,  1172,  1173,
    1174,  1176,  1177,  1178,  1181,  1183,  1187,  1189,  1193,  1194,
    1195,  1196,  1197,  1198,  1199,  1200,  1203,  1204,  1205,  1208,
    1209,  1212,  1213,  1215,  1217,  1218,  1219,  1220,  1221,  1222,
    1229,  1230,  1233,  1234,  1235,  1238,  1239,  1242,  1245,  1246,
    1248,  1252,  1253,  1254,  1257,  1261,  1263,  1264,  1265,  1266,
    1267,  1268,  1269,  1270,  1271,  1272,  1273,  1274,  1277,  1278,
    1279,  1282,  1283,  1286,  1288,  1296,  1298,  1300,  1304,  1305,
    1307,  1310,  1313,  1314,  1318,  1320,  1323,  1328,  1329,  1330,
    1334,  1335,  1336,  1339,  1340,  1341,  1344,  1345,  1347,  1348,
    1349,  1350,  1351,  1352,  1353,  1354,  1355,  1356,  1358,  1359,
    1362,  1363,  1366,  1367,  1368,  1369,  1372,  1373,  1376,  1378,
    1381,  1385,  1386,  1387,  1389,  1391,  1395,  1396,  1397,  1400,
    1401,  1402,  1403,  1404,  1405,  1408,  1409,  1410,  1411,  1412,
    1413,  1414,  1417,  1418,  1421,  1424,  1425,  1426,  1429,  1432,
    1433,  1434,  1437,  1438,  1439,  1442,  1443,  1444,  1445,  1446,
    1447,  1450,  1451,  1452,  1453,  1454,  1455,  1456,  1457,  1460,
    1461,  1462,  1463,  1466,  1467,  1470,  1471,  1474,  1475,  1478,
    1479,  1482,  1483,  1486,  1487,  1488,  1491,  1492,  1495,  1496,
    1499,  1502,  1510,  1511,  1514,  1515,  1516,  1517,  1518,  1519,
    1520,  1521,  1522,  1523,  1524,  1525,  1526,  1527,  1528,  1529,
    1530,  1531,  1534,  1537,  1538,  1541,  1542,  1543,  1544,  1547,
    1548,  1549,  1550,  1553,  1554,  1555,  1556,  1557,  1558,  1561,
    1562,  1563,  1564,  1565,  1566,  1568,  1569,  1574,  1575,  1578,
    1580,  1582,  1585,  1586,  1587,  1588,  1589,  1590,  1593,  1595,
    1597,  1599,  1600,  1602,  1604,  1606,  1608,  1610,  1611,  1612,
    1615,  1616,  1617,  1618,  1619,  1620,  1622,  1623,  1624,  1627,
    1630,  1632,  1634,  1636,  1638,  1640,  1642,  1644,  1647,  1649,
    1651,  1653,  1654,  1655,  1656,  1657,  1658,  1659,  1660,  1661,
    1664,  1665,  1666,  1667,  1668,  1669,  1670,  1672,  1674,  1675,
    1676,  1679,  1680,  1681,  1682,  1683,  1684,  1686,  1687,  1688,
    1691,  1692,  1693,  1694,  1695,  1698,  1701,  1704,  1707,  1710,
    1713,  1716,  1719,  1722,  1727,  1730,  1733,  1736,  1739,  1742,
    1745,  1748,  1751,  1754,  1757,  1762,  1765,  1768,  1771,  1774,
    1777,  1780,  1783,  1786,  1791,  1793,  1795,  1797,  1799,  1801,
    1806,  1808,  1810,  1814,  1817,  1820,  1823,  1826,  1829,  1832,
    1835,  1838,  1841,  1844,  1849,  1850,  1851,  1852,  1853,  1854,
    1855,  1857,  1859,  1860,  1861,  1864,  1865,  1866,  1867,  1868,
    1869,  1871,  1872,  1873,  1876,  1878,  1880,  1881,  1883,  1885,
    1889,  1890,  1893,  1894,  1895,  1898,  1901,  1902,  1903,  1904,
    1905,  1906,  1907,  1910,  1918,  1919,  1920,  1921,  1923,  1925,
    1926,  1926,  1927,  1928,  1929,  1930,  1931,  1933,  1934,  1936,
    1939,  1941,  1943,  1946,  1947,  1948,  1951,  1954,  1957,  1961,
    1964,  1967,  1970,  1974,  1979,  1984,  1986,  1988,  1989,  1991,
    1993,  1995,  1997,  1999,  2000,  2001,  2003,  2005,  2007,  2011,
    2016,  2018,  2020,  2022,  2024,  2026,  2028,  2030,  2032,  2034,
    2036,  2039,  2040,  2042,  2044,  2045,  2047,  2049,  2050,  2051,
    2053,  2055,  2056,  2057,  2059,  2060,  2063,  2067,  2070,  2073,
    2077,  2082,  2088,  2089,  2090,  2092,  2093,  2094,  2098,  2100,
    2101,  2102,  2105,  2108,  2111,  2114,  2117,  2119,  2121,  2126,
    2129,  2130,  2131,  2134,  2138,  2139,  2141,  2142,  2143,  2144,
    2145,  2147,  2148,  2150,  2151,  2152,  2157,  2158,  2160,  2161,
    2163,  2164,  2165,  2166,  2167,  2168,  2170,  2172,  2174,  2175,
    2176,  2178,  2180,  2181,  2182,  2183,  2184,  2185,  2186,  2187,
    2188,  2189,  2190,  2192,  2194,  2195,  2196,  2197,  2199,  2200,
    2201,  2202,  2203,  2205,  2206,  2207,  2208,  2209,  2210,  2211,
    2214,  2215,  2216,  2217,  2218,  2219,  2220,  2221,  2222,  2223,
    2224,  2225,  2226,  2227,  2228,  2229,  2230,  2231,  2232,  2233,
    2234,  2237,  2238,  2239,  2240,  2241,  2242,  2250,  2257,  2266,
    2275,  2282,  2287,  2294,  2302,  2310,  2317,  2323,  2329,  2334,
    2339,  2344,  2349,  2354,  2359,  2365,  2375,  2385,  2395,  2402,
    2412,  2422,  2431,  2443,  2456,  2462,  2465,  2466,  2475,  2477,
    2479,  2484,  2488,  2489,  2490,  2496,  2498,  2500,  2503,  2504,
    2505,  2506,  2507,  2508,  2509,  2512,  2513,  2514,  2515,  2516,
    2517,  2519,  2521,  2523,  2525,  2527,  2529,  2531,  2533,  2535,
    2538,  2539,  2540,  2541,  2543,  2546,  2548,  2550,  2551,  2552,
    2554,  2557,  2560,  2562,  2563,  2564,  2565,  2566,  2568,  2569,
    2570,  2571,  2572,  2573,  2574,  2576,  2578,  2580,  2583,  2584,
    2585,  2587,  2590,  2591,  2592,  2593,  2594,  2596,  2599,  2603,
    2604,  2605,  2608,  2611,  2614,  2616,  2617,  2618,  2619,  2621,
    2624,  2625,  2627,  2628,  2629,  2630,  2631,  2632,  2633,  2635,
    2636,  2637,  2639,  2642,  2643,  2644,  2645,  2646,  2647,  2649,
    2651,  2652,  2653,  2654,  2656,  2658,  2659,  2660,  2661,  2662,
    2663,  2665,  2666,  2668,  2669,  2672,  2673,  2674,  2675,  2678,
    2679,  2682,  2683,  2686,  2687,  2690,  2703,  2704,  2708,  2709,
    2713,  2714,  2717,  2721,  2727,  2729,  2732,  2734,  2737,  2739,
    2743,  2744,  2745,  2746,  2747,  2748,  2749,  2753,  2754,  2757,
    2758,  2759,  2760,  2761,  2762,  2763,  2764,  2767,  2768,  2769,
    2770,  2771,  2772,  2773,  2774,  2775,  2776,  2777,  2778,  2781,
    2782,  2785,  2786,  2786,  2789,  2791,  2793,  2796,  2797,  2798,
    2799,  2800,  2801,  2804,  2805,  2808,  2809,  2812,  2816,  2817,
    2817,  2820,  2821,  2824,  2827,  2831,  2832,  2833,  2834,  2835,
    2836,  2837,  2838,  2839,  2840,  2841,  2842,  2844,  2845,  2846,
    2847,  2848,  2849,  2850,  2851,  2852,  2853,  2854,  2855,  2856,
    2857,  2860,  2861,  2862,  2863,  2864,  2865,  2866,  2867,  2873,
    2874,  2875,  2876,  2879,  2881,  2882,  2887,  2889,  2890,  2891,
    2892,  2895,  2896,  2901,  2905,  2906,  2907,  2910,  2911,  2916,
    2917,  2920,  2922,  2923,  2924,  2929,  2931,  2937,  2938,  2939,
    2940,  2943,  2944,  2947,  2949,  2951,  2952,  2955,  2957,  2958,
    2959,  2962,  2963,  2964,  2967,  2968,  2969,  2972,  2973,  2976,
    2977,  2978,  2981,  2985,  2986,  2987,  2988,  2989,  2992,  2993,
    2994,  2995,  2996,  2997,  3000,  3001,  3002,  3003,  3004,  3007,
    3008,  3009,  3012,  3013,  3014,  3015,  3016,  3017,  3020,  3021,
    3022,  3025,  3027,  3029,  3031,  3032,  3033,  3036,  3037,  3038,
    3039,  3040,  3041,  3042,  3043,  3044,  3045,  3046,  3047,  3048,
    3051,  3052,  3053,  3056,  3057,  3058,  3061,  3062,  3063,  3066,
    3067,  3068,  3071,  3072,  3073,  3074,  3077,  3078,  3079,  3082,
    3084,  3086,  3090,  3091,  3092,  3095,  3096,  3097,  3100,  3102,
    3104,  3108,  3109,  3110,  3113,  3114,  3115,  3118,  3120,  3122,
    3126,  3127,  3128,  3131,  3132,  3133,  3136,  3137,  3138,  3141,
    3143,  3145,  3149,  3153,  3155,  3160,  3163,  3164,  3165,  3166,
    3169,  3170,  3173,  3175,  3177,  3180,  3181,  3182,  3185,  3186,
    3189,  3191,  3192,  3193,  3194,  3197,  3198,  3199,  3202,  3203,
    3204,  3207,  3208,  3213,  3215,  3218,  3225,  3226,  3228,  3233,
    3235,  3238,  3239,  3240,  3241,  3243,  3248
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
  "colormapMotion", "colorscale", "contour", "contourCreate",
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
     645,   646,   647,   648,   649,   650,    89,    78,    88,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   400,   401,   401,   401,   401,   401,   401,   401,   401,
     401,   401,   401,   401,   401,   401,   401,   401,   401,   401,
     401,   401,   401,   401,   401,   401,   401,   401,   401,   401,
     401,   401,   401,   401,   401,   401,   401,   401,   401,   401,
     401,   401,   401,   401,   401,   401,   401,   401,   401,   401,
     401,   401,   401,   401,   401,   401,   401,   401,   401,   401,
     401,   401,   402,   402,   403,   403,   403,   403,   403,   403,
     403,   403,   403,   403,   403,   404,   404,   404,   404,   404,
     404,   404,   404,   404,   405,   405,   405,   405,   405,   406,
     406,   407,   407,   407,   408,   409,   410,   411,   411,   411,
     411,   412,   412,   412,   412,   412,   413,   413,   413,   413,
     413,   413,   413,   413,   413,   413,   413,   413,   413,   413,
     413,   413,   413,   413,   413,   413,   413,   413,   413,   413,
     413,   413,   413,   413,   414,   414,   415,   415,   415,   415,
     415,   415,   416,   416,   416,   416,   416,   416,   416,   416,
     416,   416,   416,   416,   416,   416,   416,   416,   416,   417,
     417,   417,   417,   417,   417,   417,   417,   418,   418,   418,
     418,   418,   419,   419,   419,   419,   419,   419,   419,   419,
     420,   420,   420,   421,   421,   421,   421,   422,   422,   422,
     423,   423,   423,   424,   424,   424,   425,   425,   425,   425,
     425,   425,   425,   425,   425,   425,   425,   425,   426,   426,
     426,   426,   426,   426,   426,   426,   427,   427,   428,   428,
     428,   428,   428,   428,   429,   429,   429,   429,   430,   430,
     430,   430,   430,   430,   431,   431,   431,   431,   431,   431,
     431,   431,   431,   431,   432,   432,   432,   432,   433,   433,
     434,   434,   435,   435,   436,   436,   437,   437,   438,   438,
     438,   438,   438,   438,   438,   438,   439,   439,   440,   440,
     440,   440,   440,   440,   440,   440,   441,   441,   442,   442,
     442,   442,   442,   443,   443,   443,   443,   444,   444,   444,
     445,   445,   445,   445,   445,   445,   445,   446,   446,   447,
     447,   447,   447,   447,   448,   448,   448,   448,   449,   449,
     449,   449,   450,   450,   450,   450,   450,   450,   450,   450,
     451,   451,   451,   451,   451,   452,   452,   453,   453,   453,
     453,   453,   453,   453,   454,   454,   454,   454,   454,   455,
     455,   456,   456,   456,   457,   457,   457,   457,   458,   458,
     459,   459,   460,   460,   460,   461,   461,   462,   462,   462,
     462,   463,   463,   463,   463,   463,   463,   463,   464,   464,
     464,   464,   464,   465,   465,   465,   465,   465,   465,   465,
     465,   466,   467,   467,   467,   467,   468,   468,   469,   470,
     470,   470,   470,   470,   470,   470,   470,   470,   470,   470,
     470,   470,   470,   470,   470,   470,   470,   470,   470,   470,
     470,   470,   470,   470,   470,   470,   470,   470,   470,   470,
     470,   470,   470,   470,   470,   470,   470,   470,   470,   470,
     470,   470,   470,   470,   471,   471,   472,   472,   473,   473,
     473,   473,   473,   473,   473,   473,   474,   474,   474,   475,
     475,   476,   476,   476,   476,   476,   476,   476,   476,   476,
     477,   477,   478,   478,   478,   479,   479,   480,   481,   481,
     481,   482,   482,   482,   483,   484,   484,   484,   484,   484,
     484,   484,   484,   484,   484,   484,   484,   484,   485,   485,
     485,   486,   486,   487,   487,   488,   488,   488,   489,   489,
     489,   490,   491,   491,   492,   492,   492,   493,   493,   493,
     494,   494,   494,   495,   495,   495,   496,   496,   496,   496,
     496,   496,   496,   496,   496,   496,   496,   496,   496,   496,
     497,   497,   498,   498,   498,   498,   499,   499,   500,   500,
     500,   501,   501,   501,   501,   501,   502,   502,   502,   503,
     503,   503,   503,   503,   503,   504,   504,   504,   504,   504,
     504,   504,   505,   505,   506,   507,   507,   507,   508,   509,
     509,   509,   510,   510,   510,   511,   511,   511,   511,   511,
     511,   512,   512,   512,   512,   512,   512,   512,   512,   513,
     513,   513,   513,   514,   514,   515,   515,   516,   516,   517,
     517,   518,   518,   519,   519,   519,   520,   520,   521,   521,
     522,   522,   523,   523,   524,   524,   524,   524,   524,   524,
     524,   524,   524,   524,   524,   524,   524,   524,   524,   524,
     524,   524,   525,   526,   526,   527,   527,   527,   527,   528,
     528,   528,   528,   529,   529,   529,   529,   529,   529,   530,
     530,   530,   530,   530,   530,   530,   530,   531,   531,   532,
     532,   532,   533,   533,   533,   533,   533,   533,   534,   534,
     534,   534,   534,   534,   534,   534,   534,   534,   534,   534,
     535,   535,   535,   535,   535,   535,   535,   535,   535,   536,
     537,   537,   537,   537,   537,   537,   537,   537,   537,   537,
     537,   537,   537,   537,   537,   537,   537,   537,   537,   537,
     538,   538,   538,   538,   538,   538,   538,   538,   538,   538,
     538,   539,   539,   539,   539,   539,   539,   539,   539,   539,
     540,   540,   540,   540,   540,   541,   541,   541,   541,   541,
     541,   541,   541,   541,   542,   542,   542,   542,   542,   542,
     542,   542,   542,   542,   542,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   544,   544,   544,   544,   544,   544,
     544,   544,   544,   545,   545,   545,   545,   545,   545,   545,
     545,   545,   545,   545,   546,   546,   546,   546,   546,   546,
     546,   546,   546,   546,   546,   547,   547,   547,   547,   547,
     547,   547,   547,   547,   548,   548,   548,   548,   548,   548,
     549,   549,   550,   550,   550,   551,   552,   552,   552,   552,
     552,   552,   552,   553,   554,   554,   554,   554,   554,   554,
     555,   554,   554,   554,   554,   554,   554,   554,   554,   554,
     554,   554,   554,   554,   554,   554,   554,   554,   554,   554,
     554,   554,   554,   554,   554,   554,   554,   554,   554,   554,
     554,   554,   554,   554,   554,   554,   554,   554,   554,   554,
     554,   554,   554,   554,   554,   554,   554,   554,   554,   554,
     554,   554,   554,   554,   554,   554,   554,   554,   554,   554,
     554,   554,   554,   554,   554,   554,   554,   554,   554,   554,
     554,   554,   554,   554,   554,   554,   554,   554,   554,   554,
     554,   554,   554,   554,   554,   554,   554,   554,   554,   554,
     554,   554,   554,   554,   554,   554,   554,   554,   554,   554,
     554,   554,   554,   554,   554,   554,   554,   554,   554,   554,
     554,   554,   554,   554,   554,   554,   554,   554,   554,   554,
     554,   554,   554,   554,   554,   554,   554,   554,   554,   554,
     554,   554,   554,   554,   554,   554,   554,   554,   554,   554,
     554,   554,   554,   554,   554,   554,   554,   554,   554,   554,
     556,   556,   556,   556,   556,   556,   556,   556,   556,   556,
     556,   556,   556,   556,   556,   556,   556,   556,   556,   556,
     556,   557,   557,   557,   557,   557,   557,   558,   558,   558,
     558,   558,   558,   558,   558,   558,   558,   558,   558,   558,
     558,   558,   558,   558,   558,   558,   558,   558,   558,   558,
     558,   558,   558,   558,   558,   558,   559,   559,   560,   560,
     560,   560,   561,   561,   561,   562,   562,   562,   563,   563,
     563,   563,   563,   563,   563,   564,   564,   564,   564,   564,
     564,   564,   564,   564,   564,   564,   564,   564,   564,   564,
     564,   564,   564,   564,   564,   564,   564,   564,   564,   564,
     564,   564,   564,   564,   564,   564,   564,   564,   564,   564,
     564,   564,   564,   564,   564,   564,   564,   564,   564,   564,
     564,   564,   564,   564,   564,   564,   564,   564,   564,   564,
     564,   564,   564,   564,   564,   564,   564,   564,   564,   564,
     564,   564,   564,   564,   564,   564,   564,   564,   564,   564,
     564,   564,   564,   564,   564,   564,   564,   564,   564,   564,
     564,   564,   564,   564,   564,   564,   564,   564,   564,   564,
     564,   564,   564,   564,   564,   565,   565,   565,   565,   566,
     566,   567,   567,   568,   568,   569,   570,   570,   570,   570,
     570,   570,   571,   571,   572,   572,   572,   572,   572,   572,
     573,   573,   573,   573,   573,   573,   573,   574,   574,   575,
     575,   575,   575,   575,   575,   575,   575,   576,   576,   576,
     576,   576,   576,   576,   576,   576,   576,   576,   576,   577,
     577,   578,   579,   578,   580,   580,   580,   581,   581,   581,
     581,   581,   581,   582,   582,   583,   583,   584,   585,   586,
     585,   587,   587,   588,   589,   590,   590,   590,   590,   590,
     590,   590,   590,   590,   590,   590,   590,   590,   590,   590,
     590,   590,   590,   590,   590,   590,   590,   590,   590,   590,
     590,   591,   591,   591,   591,   591,   591,   591,   591,   592,
     592,   592,   592,   593,   593,   593,   593,   593,   593,   593,
     593,   594,   594,   594,   595,   595,   595,   596,   596,   596,
     596,   597,   597,   597,   597,   598,   598,   599,   599,   599,
     599,   600,   600,   601,   601,   601,   601,   602,   602,   602,
     602,   603,   603,   603,   604,   604,   604,   605,   605,   606,
     606,   606,   607,   608,   608,   608,   608,   608,   609,   609,
     609,   609,   609,   609,   610,   610,   610,   610,   610,   611,
     611,   611,   612,   612,   612,   612,   612,   612,   613,   613,
     613,   614,   614,   614,   614,   614,   614,   615,   615,   615,
     615,   615,   615,   615,   615,   615,   615,   615,   615,   615,
     616,   616,   616,   617,   617,   617,   618,   618,   618,   619,
     619,   619,   620,   620,   620,   620,   621,   621,   621,   622,
     622,   622,   623,   623,   623,   624,   624,   624,   625,   625,
     625,   626,   626,   626,   627,   627,   627,   628,   628,   628,
     629,   629,   629,   630,   630,   630,   631,   631,   631,   632,
     632,   632,   633,   634,   634,   634,   635,   635,   635,   635,
     636,   636,   636,   636,   636,   637,   637,   637,   638,   638,
     639,   639,   639,   639,   639,   640,   640,   640,   641,   641,
     641,   642,   642,   642,   642,   643,   644,   644,   644,   644,
     644,   645,   645,   645,   645,   645,   645
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
       2,     2,     2,     2,    13,    13,    12,    12,     1,     0,
       1,     1,     4,     6,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     6,     3,     4,     1,     2,     4,
       6,     0,     6,     8,     2,     3,     3,     3,     0,     4,
       4,     4,     4,     3,     3,     1,     3,     5,     4,     4,
       3,     2,     0,     1,     1,     1,     1,     1,     3,     0,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     2,     2,     2,     4,     3,
       2,     2,     2,     2,     2,     1,     3,     2,     2,     2,
       2,     1,     2,     8,     2,     1,     2,     1,     2,     1,
       4,     3,     2,     1,     7,     8,     7,     8,     1,     1,
       1,     2,     1,     1,     2,     1,     0,     2,     2,     1,
       2,     0,     2,     2,     1,     1,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     0,     1,     2,     1,     4,
       5,     0,     2,     1,     5,     2,     2,     1,     1,     1,
       1,     2,     1,     2,     1,     1,     2,     1,     0,     1,
       1,     0,     1,     5,     6,     3,     6,     3,     1,     3,
       1,     1,     1,     3,     6,     7,     5,     2,     1,     5,
       4,     1,     3,     0,     1,     2,     1,     4,     1,     2,
       1,     2,     3,     2,     1,     2,     1,     4,     2,     1,
       1,     3,     1,     2,     3,     2,     0,     1,     1,     4,
       2,     0,     1,     3,     4,     4,     0,     1,     1,     1,
       1,     2,     2,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     2,
       1,     2,     2,     2,     2,     1,     1,     2,     1,     0,
       1,     1,     2,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     2,     2,     0,     1,     2,     1,
       6,     5,     1,     1,     1,     2,     2,     2,     1,     1,
       1,     1,     2,     1,     1,     1,     2,     1,     1,     1,
       2,     2,     2,     0,     1,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     1,     2,     3,
       1,     2,     2,     4,     5,     1,    10,     1,     2,     3,
       3,     2,     2,     2,     2,     2,     2,     2,     4,     4,
       4,     3,     3,     5,     4,     4,     4,     3,     3,     3,
       3,     3,     3,     2,     2,     4,     3,     3,     3,     3,
       4,     4,     4,     4,     5,     4,     6,     7,     4,     4,
       5,     2,     3,     3,     3,     3,     3,     3,     3,     2,
       3,     3,     3,     3,     4,     3,     5,     6,     3,     3,
       4,     3,     3,     3,     3,     3,     5,     3,     3,     4,
       3,     2,     2,     1,     3,     4,     4,     4,     4,     4,
       6,     4,     4,     5,     4,     4,     4,     4,     5,     4,
       6,     7,     4,     4,     5,     5,     5,     5,     5,     5,
       7,     5,     5,     6,     4,     4,     4,     4,     4,     6,
       4,     4,     5,     5,     5,     5,     5,     6,     5,     7,
       8,     5,     5,     6,     3,     3,     3,     3,     4,     3,
       5,     6,     3,     3,     4,     3,     3,     3,     3,     3,
       5,     3,     3,     4,     4,     4,     3,     5,     4,     4,
       2,     3,     6,     6,     1,     1,     1,     2,     2,     2,
       3,     3,     2,    12,     2,     2,     1,     3,     4,     2,
       0,     3,     1,     2,     2,     2,     2,     2,     4,     4,
       4,     4,     3,     3,     4,     5,     8,     6,     9,     6,
       7,    10,    11,    12,     9,     5,     6,     3,     5,     5,
       5,     6,     5,     4,     4,     4,     9,    10,    11,     9,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     7,
       7,     2,     4,     4,     4,     4,     5,     4,     4,     5,
       5,     3,     4,     4,     4,     7,     9,     6,    10,    11,
      12,     9,     3,     2,     3,     5,     5,     7,     4,     3,
       3,     6,     7,     8,     7,     7,     4,     4,     9,     4,
       3,     4,     7,     7,     2,     3,     3,     3,     4,     4,
       5,     2,     2,     4,     4,    10,     3,     4,     1,     3,
       2,     2,     2,     2,     3,     5,     4,     5,     2,     2,
       2,     2,     3,     2,     2,     2,     3,     2,     3,     4,
       3,     3,     6,     4,     2,     3,     2,     2,     4,     3,
       3,     2,     3,     1,     2,     1,     2,     2,     2,     3,
       1,     1,     1,     1,     2,     1,     2,     2,     1,     2,
       2,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     1,     2,     2,     2,     3,     5,     7,     7,
       6,     5,     6,     6,     6,     5,     5,     7,     6,     6,
       6,     6,     6,     6,     6,    11,     7,     7,     7,     9,
       9,    10,    12,    12,     3,     2,     0,     1,     3,     4,
       4,     4,     0,     1,     1,     4,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     1,     1,     3,
       3,     8,     6,    10,     7,     7,     5,     6,     6,     3,
       2,     2,     3,     4,     5,     5,     5,     3,     4,     5,
       5,     5,     5,     2,     3,     3,     3,     5,     3,     3,
       3,     3,     3,     4,     5,     5,     5,     5,     3,     4,
       5,     5,     2,     2,     3,     3,     5,     6,     6,     3,
       3,     6,     6,     5,     5,     2,     3,     3,     5,     6,
       3,     2,     2,     3,     2,     3,     3,     3,     2,     3,
       3,     5,     6,     2,     2,     2,     2,     1,     4,     4,
       1,     2,     2,     2,     2,     2,     2,     2,     3,     2,
       3,     2,     3,     1,     1,     1,     1,     1,     1,     0,
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
       2,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     4,     2,     2,     2,     2,     2,     4,     2,     2,
       2,     2,     2,     4,     1,     2,     2,     2,     3,     1,
       1,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     3,     3,     3,     3,     3,     3,     1,     2,     2,
       2,     3,     2,     3,     3,     3,     3,     3,     3,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     3,     3,     3,     2,     2,     2,     3,
       3,     3,     2,     2,     2,     2,     2,     2,     3,     3,
       3,     2,     2,     2,     2,     2,     2,     3,     3,     3,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     3,
       3,     3,     4,     6,     2,     1,     1,     1,     1,     1,
       0,     5,     1,     6,     3,     1,     2,     2,     2,     3,
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
       0,   361,     0,     0,     0,     0,     0,     0,   389,     0,
       0,    23,     0,     0,     0,     0,     0,  1235,     0,     0,
       0,     0,  1166,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1166,    45,     0,     0,     0,     0,    51,     0,
       0,     0,    55,  1430,    57,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     3,
      62,    63,     0,     0,   283,     6,     0,     0,     0,     0,
       0,     0,     9,     0,     0,   317,   319,     0,     0,     0,
       0,     0,    11,   164,   166,   159,   160,   161,   165,   162,
     163,   325,    12,     0,     0,   339,     0,     0,     0,     0,
      13,     0,     0,     0,     0,   368,     0,    14,    75,   104,
       0,   134,   103,    83,   101,     0,    80,    82,    78,   135,
     102,    79,     0,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,    76,    77,    81,   375,   172,   105,     0,    15,     0,
      16,    17,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     2,    64,   387,   386,    18,     0,    19,     0,
       0,     0,   451,   465,     0,   471,     0,     0,     0,     0,
       0,     0,     0,   404,     0,   546,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1166,     0,   415,     0,     0,
     421,     0,     0,     0,   425,     0,   427,     0,   429,     0,
       0,   603,   433,    20,     0,   609,    21,   614,     0,     0,
     633,   618,   619,   620,   621,   635,   623,   624,   628,   625,
       0,   627,   629,     0,     0,    22,     0,    24,     0,     0,
       0,    26,     0,     0,     0,    27,     0,   650,     0,     0,
       0,   655,     0,    28,     0,  1237,   142,  1259,     0,  1236,
    1251,  1255,  1249,     0,  1247,  1257,     0,  1253,     0,    36,
       0,     0,     0,     0,     0,     0,    30,   815,    31,     0,
       0,     0,     0,     0,     0,   816,    32,     0,    33,  1170,
    1171,  1167,  1168,  1169,     0,   142,  1261,     0,   136,     0,
       0,     0,    35,     0,    37,     0,  1272,  1271,  1270,  1269,
      39,     0,     0,     0,     0,     0,   172,     0,    40,     0,
    1290,     0,  1287,    41,     0,     0,     0,     0,    44,     0,
      43,    42,     0,  1317,  1318,    47,     0,     0,     0,    48,
       0,     0,  1334,    49,     0,     0,     0,     0,     0,     0,
      50,  1426,  1425,  1429,  1428,  1427,    52,     0,    53,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    54,
       0,     0,  1432,    56,     0,     0,    58,     0,     0,     0,
       0,   172,    59,  1455,    60,     0,     0,    61,     1,     4,
       5,   266,     0,   258,     0,     0,   260,     0,   268,   261,
     265,   276,   277,   262,   278,     0,   264,     0,   287,   288,
     285,   284,     0,     0,   307,     0,   292,   300,   303,   302,
     301,   299,   291,   296,   297,   298,   290,     0,     0,     0,
       0,     0,     0,   295,    10,     0,     0,     0,     0,     0,
       0,     0,     0,   318,     0,     0,   326,     0,   338,   327,
       0,   340,   329,   341,   330,   352,   331,     0,     0,   332,
       0,   357,   333,     0,    94,    95,    96,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   364,     0,
       0,     0,     0,     0,   174,   179,   173,   175,   178,   177,
     176,     0,     0,   381,    69,    70,    71,    72,    73,    65,
      66,    67,    74,    68,     0,   390,     0,   446,   442,   438,
     439,   443,   440,   445,   391,   449,     0,   392,   344,   455,
     459,   454,   347,   346,   345,     0,     0,   393,   466,   395,
       0,   394,     0,   473,   396,   488,   477,   491,   478,   479,
     480,   482,     0,   484,   485,   487,   172,   397,     0,     0,
     398,     0,     0,   172,   399,   500,   172,   498,   400,   501,
     402,   172,   502,   401,     0,   172,     0,   403,   520,     0,
     518,   536,     0,     0,     0,   524,   516,     0,   526,   541,
     529,   405,   547,   548,   406,   407,     0,     0,   572,   573,
     574,   410,   569,   570,   571,   411,     0,   511,     0,   412,
      84,   508,     0,   413,   414,   562,   562,   549,   550,   562,
     562,   418,     0,   561,   555,   560,   556,   557,   558,   559,
     417,   568,   419,   420,   564,   422,     0,   565,   566,   567,
     424,   580,   575,   576,   578,   426,   586,   595,   597,   599,
     585,   588,   589,   601,   428,     0,     0,   606,     0,   432,
     172,   608,   615,     0,   616,   634,   617,   636,   637,   638,
     622,   639,   641,   640,   642,   626,   630,   647,     0,     0,
       0,     0,   643,   631,    25,  1328,  1329,  1330,  1331,  1332,
       0,  1323,  1324,  1325,  1326,     0,     0,     0,   652,   651,
       0,     0,     0,     0,    29,   142,  1260,     0,  1252,  1256,
    1250,  1248,  1258,     0,  1254,     0,   157,   150,   149,   147,
     153,   154,   151,   155,   148,   158,   144,   146,   156,   145,
     152,   143,  1241,  1239,  1238,  1243,  1245,     0,     0,     0,
       0,   662,     0,   663,     0,     0,     0,     0,     0,     0,
       0,   664,     0,   814,     0,   665,     0,   666,     0,     0,
     667,     0,   819,   818,   817,     0,   822,     0,     0,     0,
       0,  1001,     0,     0,     0,   826,   830,   832,     0,  1042,
       0,     0,     0,     0,   938,     0,     0,     0,   973,     0,
       0,     0,     0,     0,     0,     0,   975,     0,     0,     0,
      34,  1267,  1262,  1268,   139,   140,   138,   141,   137,  1263,
       0,  1265,  1266,  1322,    38,     0,     0,     0,     0,  1279,
    1280,     0,   172,     0,  1277,  1274,     0,     0,     0,   172,
    1297,  1300,  1298,  1299,  1291,  1292,  1293,  1294,     0,     0,
       0,    46,  1319,  1320,     0,  1339,  1341,  1340,  1336,  1337,
    1335,     0,     0,     0,     0,     0,     0,  1342,     0,  1346,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1343,  1357,     0,     0,     0,  1345,  1347,     0,
       0,     0,  1344,  1424,  1315,  1316,  1314,   239,     0,   250,
     235,     0,   252,   236,     0,   254,   237,  1312,  1313,  1311,
     238,   241,     0,     0,     0,   244,   240,   242,   243,     0,
       0,   234,     0,     0,     0,     0,  1438,  1451,     0,     0,
    1441,     0,     0,  1444,     0,     0,  1443,  1442,   180,  1461,
       0,  1460,  1456,   267,   263,     0,   272,     0,   269,     0,
     286,   289,   167,   170,   171,   169,   168,   304,   305,   306,
     294,   293,   309,   311,   310,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   328,     0,     0,
       0,   172,     0,     0,   358,   365,   100,    97,    98,    99,
     172,   367,   366,     0,     0,     0,     0,     0,     0,     0,
     380,     0,   376,   374,   373,   388,   441,     0,     0,   444,
     450,   460,   461,   456,   457,   462,   464,   463,   458,   348,
     349,   453,   452,   468,   467,     0,   472,   489,   490,   476,
     492,   483,   481,   486,   475,     0,     0,   172,   172,   180,
     180,   180,   172,     0,     0,   172,   537,   519,   530,     0,
     521,    84,   532,     0,     0,   523,   525,   172,   542,     0,
       0,   528,     0,     0,   409,     0,   513,    88,    87,   507,
       0,   563,   552,   551,   553,   554,     0,     0,     0,     0,
    1056,  1154,  1058,  1057,     0,  1159,     0,  1137,     0,  1140,
       0,     0,  1161,  1163,     0,  1153,   416,     0,   577,   579,
     596,   582,   598,   583,   600,   584,   590,   593,   591,   587,
     602,   581,     0,     0,   431,   607,   604,   605,   180,   632,
     644,   645,   646,   648,     0,     0,     0,   661,   649,     0,
       0,     0,  1242,  1240,  1244,  1246,     0,     0,     0,   193,
     193,   187,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   190,   190,   187,     0,     0,   187,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   709,   733,
       0,     0,     0,   701,     0,     0,     0,     0,   193,   187,
       0,     0,   810,     0,   820,   821,   172,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   881,     0,     0,     0,     0,     0,     0,   903,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   924,     0,
       0,   931,   932,     0,     0,     0,   953,   955,   954,     0,
     957,     0,     0,   964,   966,   967,     0,  1002,     0,     0,
       0,     0,   824,   825,  1050,  1048,  1053,  1052,  1051,  1049,
    1054,     0,   829,     0,     0,  1044,  1043,   833,     0,  1047,
       0,   834,   835,   836,   837,     0,     0,     0,     0,     0,
     940,     0,     0,   941,  1182,     0,  1185,  1181,     0,     0,
       0,   942,   974,   943,  1200,  1205,  1202,  1208,  1201,  1199,
    1206,  1203,  1197,  1204,  1198,  1207,     0,     0,   948,     0,
       0,     0,     0,   949,  1217,  1221,  1222,     0,  1219,   950,
       0,  1223,   951,   971,     0,     0,     0,   976,   977,   978,
    1264,  1278,     0,     0,  1285,  1281,     0,     0,     0,  1276,
    1275,  1289,  1288,     0,     0,  1305,     0,     0,  1301,     0,
    1309,     0,     0,  1302,     0,  1338,   228,   228,     0,     0,
       0,   228,     0,  1371,     0,  1370,     0,     0,     0,     0,
    1358,     0,     0,     0,     0,  1362,     0,     0,     0,  1369,
       0,     0,     0,     0,     0,  1360,  1372,     0,     0,     0,
    1359,   228,   228,   228,  1349,  1348,  1350,     0,   251,   253,
     255,   245,     0,   248,   247,   246,     0,   256,     0,    63,
       0,  1434,     0,  1439,   172,  1454,     0,  1445,  1446,     0,
    1448,  1449,     0,   181,   182,  1440,  1462,  1463,     0,   259,
       0,   273,     0,     0,     0,     0,   308,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   355,   172,     0,     0,     0,     0,     0,   172,     0,
     379,     0,   378,   448,   447,     0,     0,     0,   172,     0,
     180,   497,   495,   499,   503,     0,     0,     0,   180,     0,
     538,   522,     0,   533,   535,   183,     0,     0,   408,     0,
       0,    63,     0,   512,    86,    85,     0,     0,  1071,     0,
       0,     0,     0,     0,     0,  1083,     0,     0,     0,  1134,
       0,     0,     0,  1102,     0,  1103,     0,     0,     0,     0,
       0,  1115,     0,  1121,  1122,  1124,  1128,     0,  1133,  1145,
    1146,  1147,     0,  1149,     0,  1155,  1157,  1158,  1156,  1055,
       0,  1136,     0,  1135,  1070,     0,     0,  1141,     0,  1143,
       0,  1142,  1164,  1144,  1151,     0,     0,   594,   592,   430,
       0,     0,  1333,  1327,   659,   660,     0,   657,   653,     0,
     193,   193,   193,   194,   195,   671,   672,   189,   188,     0,
     193,   193,   193,     0,   679,   678,   677,   689,   190,   193,
     193,   193,   191,   192,   193,   193,     0,   193,   193,     0,
     190,     0,   702,     0,   708,     0,   707,   706,   705,     0,
       0,     0,   732,     0,   731,     0,   704,   703,     0,     0,
       0,     0,   190,   190,   187,     0,     0,   187,     0,     0,
       0,   193,   193,   806,     0,   193,   193,   811,     0,   218,
     219,   220,   221,   222,   223,     0,    92,    93,    91,   843,
       0,     0,     0,     0,     0,   995,   993,   988,     0,   998,
     982,   999,   985,   997,   991,   980,   994,   983,   981,  1000,
     996,     0,     0,   857,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   891,     0,     0,     0,     0,   902,     0,     0,   904,
       0,     0,     0,   910,   909,     0,     0,   208,     0,     0,
       0,   172,     0,   920,     0,     0,     0,     0,   925,   926,
     927,     0,     0,     0,     0,   936,   952,   956,   958,   961,
     960,     0,     0,     0,   965,   842,  1003,  1005,     0,  1004,
     827,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1036,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   831,   979,     0,
       0,     0,     0,   939,     0,   172,  1178,  1176,  1174,     0,
       0,   172,  1180,   944,     0,     0,     0,     0,  1216,     0,
       0,  1224,   969,   970,     0,   972,  1284,  1286,  1283,  1282,
    1273,     0,     0,     0,  1306,     0,     0,  1310,  1321,   230,
     231,   232,   233,   229,  1352,  1351,     0,     0,     0,  1356,
       0,     0,     0,  1355,     0,     0,     0,  1354,  1353,   228,
       0,     0,     0,  1361,     0,     0,     0,  1368,     0,     0,
       0,  1367,     0,     0,     0,  1366,     0,     0,     0,  1365,
       0,     0,     0,     0,     0,  1382,     0,  1417,  1416,  1418,
       0,     0,     0,  1364,     0,     0,     0,  1363,  1377,  1376,
    1378,  1374,  1373,  1375,  1420,  1419,  1421,     0,   249,     0,
       0,  1436,  1437,     0,  1452,   172,  1447,  1450,     0,     0,
     172,     0,     0,     0,   270,     0,     0,     0,     0,   312,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   351,
     350,     0,     0,   342,   353,   356,   359,     0,   370,   372,
     371,   369,   172,   377,     0,     0,     0,   180,   172,     0,
       0,     0,     0,   517,   531,   540,     0,   534,   185,   186,
     184,   527,     0,   543,     0,     0,   510,   515,    84,     0,
       0,     0,     0,     0,     0,   172,  1072,     0,     0,     0,
    1077,     0,   172,     0,  1084,  1085,  1086,     0,  1088,  1090,
    1089,  1091,  1092,     0,     0,     0,  1098,     0,  1126,  1127,
    1104,  1105,     0,     0,     0,  1109,  1110,     0,     0,     0,
       0,  1116,  1117,     0,     0,  1120,  1123,  1125,  1129,  1130,
       0,     0,  1148,  1150,     0,  1069,  1059,  1160,  1060,     0,
       0,  1162,  1152,     0,     0,   612,   613,     0,   654,   658,
       0,   668,   669,   670,   193,   674,   675,   676,     0,     0,
       0,   683,   684,   187,     0,     0,     0,   193,   690,   691,
     692,   693,   695,   190,   698,   699,     0,   193,     0,     0,
       0,   190,   190,   187,     0,     0,     0,     0,     0,     0,
       0,   190,   190,   187,     0,     0,   187,     0,     0,     0,
       0,   190,   190,   187,     0,     0,     0,     0,   730,     0,
     734,     0,     0,     0,     0,     0,   190,   190,   187,     0,
       0,   187,     0,     0,     0,     0,     0,   190,   190,   187,
       0,     0,   187,     0,   190,   710,   711,   712,   713,   715,
       0,   718,   719,     0,   190,     0,     0,   804,   805,   193,
     808,   809,     0,   840,   172,   844,     0,     0,     0,     0,
       0,     0,     0,   987,   984,   990,   989,   986,   992,     0,
       0,     0,   196,   198,   207,   203,   200,   201,   197,   199,
     204,   202,   206,   205,     0,     0,     0,   172,   864,   863,
     865,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   937,   882,   883,   884,     0,   888,
     885,   887,     0,     0,   893,   892,   894,     0,     0,     0,
       0,     0,   929,     0,     0,     0,   172,   172,   908,   214,
     210,   215,   209,   212,   211,   213,   916,   917,   172,     0,
       0,   919,   921,   172,   172,     0,   928,   933,   934,   172,
     172,   959,   963,   841,  1006,   828,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1037,  1165,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1035,     0,     0,     0,     0,     0,
     838,   839,   172,   180,  1179,     0,     0,  1183,  1184,     0,
       0,   946,     0,   172,     0,  1218,  1220,   968,     0,  1303,
    1304,  1307,  1308,   228,   228,   228,   228,   228,   228,   228,
     228,   228,  1422,  1380,  1379,  1381,  1414,  1413,  1415,  1411,
    1410,  1412,  1405,  1404,  1406,  1402,  1401,  1403,  1384,  1383,
    1387,  1386,  1388,  1385,  1396,  1395,  1397,  1393,  1392,  1394,
       0,     0,  1431,     0,  1453,     0,   172,     0,  1457,     0,
       0,   274,     0,   271,     0,     0,     0,     0,     0,   320,
       0,     0,     0,     0,     0,     0,     0,   172,     0,     0,
       0,   362,   160,     0,   469,     0,   493,   180,   183,     0,
       0,   506,     0,   544,   545,     0,   509,     0,     0,     0,
       0,     0,     0,   172,  1073,   183,   183,   183,   172,  1078,
     183,   180,   183,   183,   172,  1093,   183,   183,   183,   172,
    1099,   183,   183,   172,     0,   172,   183,   172,   183,   183,
     172,   183,   172,     0,  1138,  1139,     0,     0,   611,     0,
     673,   680,   681,   682,     0,   686,   687,   688,   694,   193,
     190,   700,   721,   722,   723,   724,   725,     0,   727,   728,
     190,   190,   784,   785,   786,   787,   789,     0,   792,   793,
       0,   190,   795,   796,   797,   798,   799,     0,   801,   802,
     190,     0,     0,     0,   190,   190,   187,     0,     0,     0,
       0,     0,     0,   190,   190,   187,     0,     0,     0,     0,
       0,     0,   190,   190,   187,     0,     0,     0,   190,   193,
     193,   193,   193,   193,     0,   193,   193,     0,   190,   190,
     193,   193,   193,   193,   193,     0,   193,   193,     0,   190,
     714,   190,     0,   720,     0,     0,   807,     0,   845,   183,
       0,     0,   183,     0,     0,     0,   855,   183,   858,   859,
     860,   183,   862,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   886,   889,   890,     0,
     183,     0,     0,     0,   930,   905,   906,     0,     0,   180,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1209,  1034,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   172,     0,     0,    89,     0,     0,  1045,
    1046,   180,     0,     0,     0,  1186,   945,   947,   180,   172,
    1296,  1408,  1407,  1409,  1399,  1398,  1400,  1390,  1389,  1391,
    1423,     0,  1433,  1464,     0,     0,  1459,  1458,   275,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   316,     0,
       0,   343,   354,   360,   183,   470,   474,   494,   496,     0,
     504,   539,   172,     0,     0,     0,     0,     0,     0,   172,
    1066,  1074,  1076,  1075,  1079,  1080,  1081,  1082,  1087,  1094,
    1095,  1096,  1097,  1100,  1101,  1106,   180,   183,   180,  1113,
     180,  1114,  1118,   180,  1131,   180,   172,     0,   172,     0,
     610,     0,   685,   696,   193,   190,   729,   788,   190,     0,
     794,   190,   803,   193,   193,   193,   193,   193,     0,   193,
     193,   190,   193,   193,   193,   193,   193,     0,   193,   193,
     190,   193,   193,   193,   193,   193,     0,   193,   193,   190,
     193,   744,   745,   746,   747,   749,   190,   752,   753,     0,
     193,   193,   773,   774,   775,   776,   778,   190,   781,   782,
       0,   193,   716,   190,   812,   813,   172,   847,     0,   183,
     849,     0,   172,     0,   856,   861,   172,     0,   870,   871,
     872,   873,   877,   878,   874,   875,   876,     0,     0,   183,
     897,     0,   172,     0,     0,   911,     0,   183,     0,     0,
     183,   183,     0,   962,     0,   216,   216,     0,     0,   216,
       0,   216,  1165,     0,     0,     0,     0,     0,     0,     0,
       0,  1210,  1188,     0,  1195,  1196,     0,   216,   216,     0,
       0,     0,  1165,     0,  1165,     0,     0,     0,     0,  1038,
       0,     0,     0,  1165,    90,     0,   216,     0,  1212,   172,
     172,     0,   180,     0,   257,  1466,  1465,     0,     0,   279,
       0,     0,     0,     0,     0,   324,     0,     0,     0,   363,
     505,     0,   382,     0,  1062,     0,   224,     0,  1067,  1107,
    1108,  1111,  1112,  1119,  1132,  1068,   423,     0,   382,     0,
     697,   726,   790,   190,   800,   735,   736,   737,   738,   739,
     190,   741,   742,   193,   764,   765,   766,   767,   768,   190,
     770,   771,   193,   755,   756,   757,   758,   759,   190,   761,
     762,   193,   748,   193,   190,   754,   777,   193,   190,   783,
     717,     0,   183,   850,     0,     0,     0,     0,     0,   879,
     880,   895,     0,     0,     0,   907,   912,     0,   914,     0,
     922,   923,   915,   183,     0,   217,  1165,  1165,    89,     0,
    1165,     0,  1165,  1007,   172,     0,     0,     0,     0,     0,
       0,     0,  1187,     0,     0,  1165,  1165,    89,     0,     0,
       0,  1016,  1165,  1011,  1165,     0,     0,  1165,  1041,  1039,
    1040,  1015,  1165,  1165,  1212,  1228,     0,  1177,  1175,  1214,
       0,     0,     0,     0,   281,   314,   315,     0,     0,     0,
     313,     0,   382,   383,   385,   384,   434,     0,     0,   225,
     227,   226,  1064,  1065,   382,   436,     0,   791,   193,   743,
     193,   772,   193,   763,   750,   193,   779,   193,     0,   846,
     183,   183,     0,   183,     0,   183,   183,     0,   913,   183,
       0,  1165,  1023,  1019,  1165,     0,  1024,     0,  1018,  1165,
       0,  1190,     0,  1193,  1233,  1194,  1192,  1189,     0,  1021,
    1020,  1165,     0,     0,  1165,  1013,  1010,  1165,   172,  1012,
    1014,  1022,  1228,  1172,     0,     0,  1213,  1226,  1215,  1295,
       0,     0,   322,   323,   321,   344,   347,   345,     0,     0,
     435,  1061,   172,   437,   656,   740,   769,   760,   751,   780,
     183,   848,   854,     0,   869,   866,   896,   901,     0,   918,
       0,  1028,  1009,    89,     0,  1026,     0,  1191,     0,  1008,
      89,     0,  1017,  1027,     0,  1173,  1230,  1232,     0,  1225,
       0,     0,     0,     0,     0,     0,   224,     0,   851,   172,
     867,   898,   935,  1165,     0,  1234,     0,  1165,     0,   183,
    1231,  1227,   280,     0,     0,     0,     0,     0,  1063,   823,
     172,   852,   868,   172,   899,  1030,     0,  1165,  1029,     0,
       0,   282,   337,     0,   336,     0,   853,   900,    89,  1031,
      89,  1165,   335,   334,  1165,  1165,  1025,  1033,  1032
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    59,  1638,   182,   164,  1069,  2823,  2824,   488,   489,
     490,   491,   165,   166,   167,   819,   742,   101,   957,   511,
    1415,  1941,  1569,  1584,  1565,  2154,  2206,  2936,  1635,  3002,
    1814,   389,   916,  1394,   900,   903,   906,   921,    69,   413,
     419,   423,   426,    75,   430,    82,   446,   442,   436,   453,
      92,   463,   102,   110,   469,   472,   474,   546,  1021,  1911,
     476,   479,   482,   117,   498,   168,   170,  2996,   186,   188,
     233,  1064,  1114,   534,  1009,   537,   547,  1013,  1018,   549,
     551,  1024,   554,  1026,   567,  1029,  1031,   570,   574,   578,
     580,   583,   587,   623,   619,  1483,   601,  1050,  1055,  1047,
    1471,  1061,   604,   631,   640,  1072,   645,   650,   642,   615,
     611,   655,   664,  1109,  1548,  1101,  1103,  1105,  1111,   669,
    1116,   236,   671,  2017,   255,   674,   676,   680,   685,   693,
     273,  1558,   708,   296,   751,  1574,   753,   761,  1173,  1592,
    1168,  2078,  1604,  1602,  2080,  1169,  1594,  1596,   767,   770,
     765,   298,   306,   308,   810,  1253,  1661,  1242,  1767,  2237,
    2254,  1257,  1261,  1251,  1096,  1529,  1533,  1541,  1543,  2567,
     314,  1270,  1273,  1281,  2801,  2802,  2803,  2568,  2975,  2976,
    1303,  1309,  1312,  3066,  3067,  3063,  3064,  3116,  2804,  2805,
     289,   322,   330,   338,   834,   829,   343,   348,   350,   844,
     851,  1338,  1343,   910,   897,   355,   359,   324,   265,   261,
     363,   858,   370,   892,   867,   882,   883,  1380,  1375,  1833,
    1365,  1855,  1827,  1867,  1863,  1823,  1849,  1845,  1819,  1841,
    1837,  1369,   887,   869,   376,   377,   393,  1401,   396,   402,
     933,   936,   930,   404,   407,   941
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2900
static const yytype_int16 yypact[] =
{
    6028,   121,   544,    41, -2900, -2900,  1259,  -172,   642,   671,
    1416,   177,  3950,   148,   542,     8,   159,    34,  6261,    97,
    2264, -2900,   199,   -27,   -15,   950,   221,   608,  1356,   -67,
     195,   274,   418,   127,   -98,   281,   636,  4490,    24,   552,
     351,   453,   418, -2900,   742,    -5,    20,    15, -2900,    51,
     465,  1560, -2900,   887, -2900,    43,  1449,   313,   111,   604,
     210,  1071,   319,   643,   683,   122,   684,    26,   167, -2900,
   -2900, -2900,   327,   975,   698, -2900,   357,    76,   542,    30,
     499,   590, -2900,   724,   698, -2900, -2900,   698,   698,   570,
     740,   698, -2900, -2900, -2900, -2900,   698, -2900, -2900, -2900,
   -2900, -2900, -2900,    48,   782,   760,   810,   832,   152,   779,
   -2900,   698,  1536,   698,   698,  1242,   698, -2900, -2900, -2900,
     664, -2900, -2900, -2900, -2900,  5321, -2900, -2900, -2900, -2900,
   -2900, -2900,   698, -2900, -2900, -2900, -2900, -2900, -2900, -2900,
   -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900,
   -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900,
   -2900, -2900, -2900, -2900, -2900,  1483, -2900,   698, -2900,   895,
   -2900, -2900,   542,   542,   542,   542,   542,   542,   542,   542,
     542,   542, -2900, -2900, -2900, -2900, -2900,   801, -2900,   902,
    1566,    63,   335,   614,   797,   -12,  4891,   704,  5377,  5282,
     941,  5321,  4520, -2900,   972,  -122,   931,  1012,   925,   192,
     211,   117,  1111,  1008,   163,   418,   844, -2900,   719,   978,
   -2900,   793,   736,   220, -2900,   315, -2900,   805, -2900,    88,
     977,    68, -2900, -2900,  5687, -2900, -2900, -2900,  1016,  1029,
    1092, -2900, -2900, -2900, -2900,   474, -2900, -2900, -2900, -2900,
     569, -2900, -2900,  5687,  4953, -2900,  1139, -2900,    84,  5687,
    1142, -2900,   155,  5687,  1146, -2900,   102, -2900,  1153,  1157,
     129, -2900,   698, -2900,  1165,  1163,  2663, -2900,  1167, -2900,
   -2900, -2900, -2900,  1175, -2900, -2900,   698, -2900,   542, -2900,
     598,  1177,   496,   768,  1188,    32, -2900, -2900, -2900,  1191,
    1205,   542,   542,   698,   698, -2900, -2900,  1211, -2900, -2900,
   -2900, -2900, -2900, -2900,  4391,  2663, -2900,  1214,    11,   698,
    5687,   698, -2900,  5687, -2900,  1217, -2900, -2900, -2900, -2900,
   -2900,   698,   182,   542,  1201,   698,  1483,   698, -2900,  1223,
   -2900,  3086, -2900, -2900,   524,  1235,  1245,   698, -2900,  1247,
   -2900, -2900,   -19, -2900, -2900, -2900,  1253,  5687,  1264, -2900,
    1227,   698,  1062, -2900,   776,  1179,  1829,    10,  1266,   495,
   -2900, -2900, -2900, -2900, -2900, -2900, -2900,  1274, -2900,   522,
     379,   406,   412,   568,   698,   234,  1318,   698,   173, -2900,
     698,  1024,  1333, -2900,   698,   698, -2900,    62,    47,    78,
    1336,  1483, -2900, -2900, -2900,  1095,   698, -2900, -2900, -2900,
   -2900, -2900,   698, -2900,  1339,  1342, -2900,   698,  1222, -2900,
   -2900, -2900, -2900, -2900, -2900,   698, -2900,   542, -2900,   698,
   -2900, -2900,   508,   508, -2900,  1358, -2900, -2900, -2900, -2900,
   -2900, -2900, -2900, -2900, -2900, -2900, -2900,  1140,   698,   698,
    1368,  1372,  1374, -2900, -2900,   698,   698,   698,   698,   698,
     698,  1379,   698, -2900,  1381,   698, -2900,  1390, -2900, -2900,
    1392, -2900, -2900,   567, -2900,  1395, -2900,  5687,  1401, -2900,
     138, -2900, -2900,   698, -2900, -2900, -2900,   698,  1400,  1399,
    1399,  5687,   698,   698,   698,   698,   698,   698, -2900,   698,
    5321,  1536,   698,   698, -2900, -2900, -2900, -2900, -2900, -2900,
   -2900,  1536,   698, -2900, -2900, -2900, -2900, -2900, -2900, -2900,
   -2900, -2900, -2900, -2900,  1411, -2900,  1116,    60, -2900, -2900,
   -2900, -2900, -2900, -2900, -2900, -2900,  1028, -2900,   -77, -2900,
   -2900, -2900,  1239, -2900,   562,   403,   403, -2900, -2900, -2900,
    1428, -2900,  1436, -2900, -2900,   -80, -2900,  1251, -2900, -2900,
   -2900, -2900,  1290, -2900,  1465, -2900,  1483, -2900,   698,   698,
   -2900,  5687,  5687,  1483, -2900, -2900,  1483, -2900, -2900, -2900,
   -2900,  1483, -2900, -2900,  5687,  1483,   698, -2900, -2900,  5687,
   -2900,  1478,   255,  1268,    16, -2900, -2900,  1269,  5687,    59,
   -2900, -2900, -2900, -2900, -2900, -2900,  1488,  1490, -2900, -2900,
   -2900, -2900, -2900, -2900, -2900, -2900,  1499, -2900,  1281, -2900,
     -18, -2900,   698, -2900, -2900,  1504,  1504, -2900, -2900,  1504,
    1504, -2900,  1049, -2900, -2900, -2900, -2900, -2900, -2900, -2900,
   -2900, -2900, -2900, -2900, -2900, -2900,    88, -2900, -2900, -2900,
   -2900, -2900, -2900,  1297,  1299, -2900, -2900,  1443,  1444,  1446,
   -2900, -2900,    74,  1260, -2900,   698,  1506,  1261,  3086, -2900,
    1483, -2900, -2900,  1517, -2900, -2900, -2900, -2900, -2900, -2900,
   -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900,  5687,  5687,
    5687,  5687, -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900,
    1522, -2900, -2900, -2900, -2900,  1526,  1527,   542, -2900, -2900,
    1538,  1544,  1326,   698, -2900,  2663, -2900,  1545, -2900, -2900,
   -2900, -2900, -2900,   698, -2900,   542, -2900, -2900, -2900, -2900,
   -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900,
   -2900, -2900, -2900, -2900, -2900, -2900, -2900,   735,  1457,  1459,
    1461, -2900,  1580, -2900,   644,  1493,    46,    80,  5529,   116,
    1583, -2900,  1585, -2900,  1588, -2900,    87, -2900,  1589,  1590,
   -2900,  1593, -2900, -2900, -2900,   698, -2900,  3086,  5285,  1774,
    1275,   574,  1596,   901,  1498, -2900, -2900, -2900,  1603,    53,
     517,  1604,  1606,     5,   698,   374,   744,   548,  5687,   542,
    1832,   591,   185,   106,   501,    17, -2900,  1599,  1610,  1608,
   -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900,
     698, -2900, -2900, -2900, -2900,   698,   698,   698,   698, -2900,
   -2900,   698,  1483,   698, -2900,   698,  1536,   698,  1624,  1483,
   -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900,  1628,   534,
     555, -2900, -2900, -2900,  1631, -2900, -2900, -2900, -2900,  1535,
   -2900,  1637,  1640,  1553,  1555,  1556,  1648, -2900,  1649, -2900,
    1650,  1563,  1655,   487,   521,   504,     2,   606,   543,   618,
    1664,   623, -2900, -2900,  1665,  1666,  1668, -2900, -2900,  1670,
    1671,  1669, -2900,  1673, -2900, -2900, -2900, -2900,  1679, -2900,
   -2900,  1680, -2900, -2900,  1681, -2900, -2900, -2900, -2900, -2900,
   -2900, -2900,   698,   467,   698, -2900, -2900, -2900, -2900,   698,
     698, -2900,   698,  1232,   698,   698, -2900,  3086,  1618,  1684,
   -2900,  1133,  1685, -2900,  1293,  1688, -2900, -2900,    13,   698,
     698, -2900,  1682, -2900, -2900,  1690,  1256,   698,  1687,   605,
   -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900,
   -2900, -2900, -2900, -2900, -2900,  1695,  1697,   698,   698,   698,
     698,   698,  1698,   698,  1700,   698,  1702, -2900,   542,  1704,
    1705,  1483,  5687,  1706, -2900, -2900, -2900, -2900, -2900, -2900,
    1483, -2900, -2900,   698,   698,   698,  5687,   698,  1536,   698,
   -2900,   698, -2900, -2900, -2900, -2900, -2900,  1707,  1708, -2900,
   -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900,
   -2900, -2900, -2900,   704, -2900,   698, -2900, -2900, -2900, -2900,
   -2900, -2900, -2900, -2900, -2900,  5687,   698,  1483,  1483,    13,
      13,    13,  1483,  1536,   698,  1483, -2900, -2900, -2900,   698,
   -2900,   -18,  1531,  1712,  1714, -2900, -2900,  1483, -2900,  1543,
    1546, -2900,  1716,  1727, -2900,  1729,  1304,  1696,  1703, -2900,
     698, -2900, -2900, -2900, -2900, -2900,  2574,  1020,  1393,   486,
   -2900, -2900, -2900, -2900,   698,   142,  1099, -2900,  1445, -2900,
    1832,  1454,   270,  1410,   193, -2900, -2900,   698, -2900, -2900,
   -2900, -2900, -2900, -2900, -2900, -2900, -2900,  1430, -2900, -2900,
   -2900, -2900,   698,  1759, -2900, -2900, -2900, -2900,    13, -2900,
   -2900, -2900, -2900, -2900,  1761,  1766,  5412, -2900, -2900,  1768,
    1769,   698, -2900, -2900, -2900, -2900,  1773,  1778,  1783,   -17,
     -17,   -28,  1775,  1785,  1789,  1790,  1790,  1790,  1464,  1481,
    1791,  1792,  1793,   100,   100,   -28,  1797,  1800,   -28,  1828,
    1831,  1833,  1834,  1833,  1834,  5586,  1835,  1836, -2900, -2900,
    1833,  1834,   784, -2900,  1838,  1839,  1841,  1842,   -17,   -28,
    1840,  1843, -2900,  1844, -2900, -2900,  1483,  1056,  1407,  1565,
    1579,  1582,  1737,  1258,  1584,  1850,   290,    14,  1742,  1574,
    1854,  1862,  1817,  1591,  1592,  1747,  1860,    36,  1626,   667,
      83,   677,   615,  5687,  1832,  1825,   520,  1594,  1633,  1863,
      85, -2900, -2900,   860,  1867,  1870, -2900, -2900, -2900,  1873,
    1639,   124,  1832,  1642, -2900, -2900,  1837, -2900,   542,  1895,
    1898,   698, -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900,
   -2900,    21, -2900,  4882,  1900, -2900, -2900, -2900,   698, -2900,
     698, -2900, -2900, -2900, -2900,   698,   698,   698,   901,  5687,
   -2900,  1908,  1351, -2900, -2900,   698, -2900, -2900,   698,  5687,
     698, -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900,
   -2900, -2900, -2900, -2900, -2900, -2900,   542,   698, -2900,   698,
     901,  1911,  1914, -2900, -2900, -2900, -2900,   698,   698, -2900,
     542, -2900, -2900, -2900,   869,  1915,  1919, -2900, -2900, -2900,
   -2900, -2900,   698,   698, -2900, -2900,  1536,   698,   698, -2900,
   -2900, -2900, -2900,  1921,   698, -2900,   698,  1805, -2900,   698,
   -2900,   698,  1808, -2900,  1926, -2900,  1173,  1173,   634,   756,
     774,  1173,  1927, -2900,   830, -2900,   842,   932,   974,   979,
   -2900,  1929,  1930,   987,  1932, -2900,  1933,  1936,  1939, -2900,
    1027,  1042,  1941,  1943,  1945, -2900, -2900,  1947,  1948,  1946,
   -2900,  1173,  1173,  1173, -2900, -2900, -2900,   698, -2900, -2900,
   -2900, -2900,   698, -2900, -2900, -2900,   698, -2900,   698,   900,
    5687, -2900,   698, -2900,  1483, -2900,  3086, -2900, -2900,  1949,
   -2900, -2900,  1950, -2900, -2900, -2900, -2900,  1951,  1201, -2900,
     698,  1955,   698,   698,   698,  1193, -2900,  1952,   698,   698,
    1954,   698,   698,  1962,   698,  1963,   698,     0,  1965,   542,
     542, -2900,  1483,  1956,   698,  1967,  1970,  1971,  1483,  5687,
   -2900,   698, -2900, -2900, -2900,   698,   698,   698,  1483,  5687,
      13, -2900, -2900, -2900, -2900,  1536,   698,  1972,    13,   698,
     621, -2900,  1973, -2900, -2900,   878,  4421,   698, -2900,   698,
    1976,  1937,   698, -2900, -2900, -2900,  1978,  1360,  5321,  1717,
    1718,  1720,    52,  5687,  1721, -2900,   400,    89,   114, -2900,
    1722,  1725,   202, -2900,   409, -2900,  1063,  1787,   763,  1701,
     594,  1832,   769, -2900,  1980,  1719, -2900,  1100, -2900, -2900,
   -2900, -2900,  1832,  1750,    -2, -2900, -2900, -2900, -2900, -2900,
     698, -2900,   698, -2900, -2900,   698,   698, -2900,   698, -2900,
     698, -2900, -2900, -2900, -2900,  1776,   698, -2900, -2900, -2900,
     698,    28, -2900, -2900, -2900, -2900,  1999,  2000, -2900,   698,
     -17,   -17,   -17, -2900, -2900, -2900, -2900, -2900, -2900,  2004,
     -17,   -17,   -17,  1058, -2900, -2900, -2900, -2900,   100,   -17,
     -17,   -17, -2900, -2900,   -17,   -17,  2008,   -17,   -17,  2009,
     100,  1126, -2900,   813, -2900,  1134, -2900, -2900, -2900,  2010,
    2013,  2014, -2900,   840, -2900,   863, -2900, -2900,  1711,  2018,
    2019,  2020,   100,   100,   -28,  2023,  2024,   -28,  2026,  2025,
    2028,   -17,   -17, -2900,  2030,   -17,   -17, -2900,  2031, -2900,
   -2900, -2900, -2900, -2900, -2900,   542, -2900, -2900, -2900,  5321,
    1278,   698,  1298,  1453,   464, -2900, -2900, -2900,   613, -2900,
   -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900,
   -2900,  2032,   698, -2900,   542,   999,  2033,   698,  5687,   542,
     542,  2034,  1615,  1763,  1770,   273,   286,  1771,   292,  1661,
    1692,  2036,  2043,  2044,  2045,  1258,  2046,  2047,  2049,  1713,
    1715,  1364,  2051,   698,  1440,  1676, -2900,  2052,  2054, -2900,
     542,   999,  5687, -2900, -2900,  5687,   698,     9,  2055,  5687,
     698,  1483,   542, -2900,  2056,  5687,  5687,   698, -2900, -2900,
   -2900,   542,   542,   999,  5687, -2900, -2900, -2900, -2900, -2900,
   -2900,  5687,   698,   542, -2900,  2058, -2900, -2900,   698, -2900,
   -2900,  2060,   698,  1798,   229,   698,  1802,   698,   278,   698,
    2065,   698,  1819,  1820,   698,   698,   698,   698,   698,   146,
     698,   698,   698,    27,   698,   698,  1823, -2900, -2900,   698,
     698,   698,   698, -2900,  5687,  1483,  2077,  2079,  2080,   698,
     698,  1483, -2900,   698,   698,   698,  5687,   901, -2900,   698,
     698, -2900, -2900, -2900,  2081, -2900, -2900, -2900, -2900, -2900,
   -2900,  2083,   698,   698, -2900,   698,   698, -2900, -2900, -2900,
   -2900, -2900, -2900, -2900, -2900, -2900,  2084,  2085,  2087, -2900,
    2088,  2089,  2091, -2900,  2092,  2093,  2095, -2900, -2900,  1173,
    2096,  2097,  2099, -2900,  2101,  2102,  2100, -2900,  2103,  2104,
    2107, -2900,  2108,  2109,  2113, -2900,  2114,  2115,  2117, -2900,
    2119,  2122,  2124,  2125,  2127, -2900,  2128, -2900, -2900, -2900,
    2129,  2130,  2132, -2900,  2134,  2135,  2138, -2900, -2900, -2900,
   -2900, -2900, -2900, -2900, -2900, -2900, -2900,   698, -2900,   698,
     698, -2900, -2900,   698, -2900,  1483, -2900, -2900,  1201,   698,
    1483,   698,   698,   698, -2900,   698,   698,  2139,   698, -2900,
     698,   698,  2141,   698,   698,  2142,   698,  2143,   698, -2900,
   -2900,  2145,  5687, -2900,  2146, -2900,  2147,   698, -2900, -2900,
   -2900, -2900,  1483, -2900,  1469,   698,  1469,    13,  1483,  5687,
     698,   698,  2148, -2900, -2900, -2900,   698, -2900, -2900, -2900,
   -2900, -2900,  5687, -2900,  5687,   698, -2900, -2900,   -18,  2150,
    2151,  2153,  2154,  2164,  5454,  1483, -2900,  5687,  5687,  5687,
    5321,  5687,  1483,  5687, -2900, -2900, -2900,  5687, -2900, -2900,
   -2900, -2900,  5321,  5687,  5687,  5687,  5321,  5687, -2900, -2900,
   -2900, -2900,  5687,  5687,   698, -2900, -2900,  5687,  5687,  5687,
    5687, -2900, -2900,  5687,  5687, -2900, -2900, -2900, -2900, -2900,
    5687,  5687, -2900, -2900,  1987, -2900, -2900, -2900, -2900,   698,
     698, -2900, -2900,  2149,   698, -2900, -2900,  2165, -2900, -2900,
     698, -2900, -2900, -2900,   -17, -2900, -2900, -2900,  2166,  2167,
    2168, -2900, -2900,   -28,  2170,  2172,  2173,   -17, -2900, -2900,
   -2900, -2900, -2900,   100, -2900, -2900,  2176,   -17,  2178,  2184,
    2186,   100,   100,   -28,  2177,  2188,  2190,  1803,  2191,  2192,
    2193,   100,   100,   -28,  2189,  2195,   -28,  2197,  2198,  2199,
    2200,   100,   100,   -28,  2196,  2204,  2206,  1172, -2900,  1187,
   -2900,  1189,  1824,  2208,  2209,  2210,   100,   100,   -28,  2205,
    2212,   -28,  2213,  1868,  2214,  2215,  2216,   100,   100,   -28,
    2218,  2229,   -28,  2238,   100, -2900, -2900, -2900, -2900, -2900,
    2230, -2900, -2900,  2245,   100,  2247,  2251, -2900, -2900,   -17,
   -2900, -2900,  2252, -2900,  1483, -2900,  5687,   698,   698,  5687,
     698,  2253,  1407, -2900, -2900, -2900, -2900, -2900, -2900,  2254,
    5687,   542, -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900,
   -2900, -2900, -2900, -2900,   999,  2255,  5687,  1483, -2900, -2900,
   -2900,  2256,  1407,   698,   698,   698,   698,   698,   698,   698,
     698,   698,  2258,  2259, -2900, -2900, -2900, -2900,  2260, -2900,
   -2900, -2900,  2266,  2267, -2900, -2900, -2900,   698,  5687,   698,
    2263,  1407, -2900,  2268,   542,   999,  1483,  1483, -2900, -2900,
   -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900,  1483,   698,
    1536, -2900, -2900,  1483,  1483,   698, -2900, -2900, -2900,  1483,
    1483, -2900, -2900, -2900, -2900, -2900,   698,   698,   698,   698,
     698,   698,   698,   698,   698,   698, -2900, -2900,   698,   698,
     698,   698,   698,   698,   698,   698,  1743,   698,   698,   698,
     698,  3656,  2269,   698, -2900,   698,   698,   698,  2271,  2272,
   -2900, -2900,  1483,    13, -2900,  2273,  2275, -2900, -2900,  1536,
     698, -2900,  2280,  1483,  5687, -2900, -2900, -2900,  2281, -2900,
   -2900, -2900, -2900,  1173,  1173,  1173,  1173,  1173,  1173,  1173,
    1173,  1173, -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900,
   -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900,
   -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900,
    1407,   698, -2900,   698, -2900,   698,  1483,   698, -2900,  1536,
     698, -2900,   698, -2900,  2262,  2282,  2283,   698,   698, -2900,
     698,   698,  2284,   698,  2286,   698,  2287,  1483,  2288,  2289,
    5687, -2900, -2900,   698, -2900,   698, -2900,    13,   878,   698,
    2290, -2900,   698, -2900, -2900,  5321, -2900,  2291,  2292,  2295,
    2296,  2297,  5687,  1483, -2900,   878,   878,   878,  1483, -2900,
     878,    13,   878,   878,  1483, -2900,   878,   878,   878,  1483,
   -2900,   878,   878,  1483,  5687,  1483,   878,  1483,   878,   878,
    1483,   878,  1483,  5687, -2900, -2900,  2300,  5321,  2301,   698,
   -2900, -2900, -2900, -2900,  2305, -2900, -2900, -2900, -2900,   -17,
     100, -2900, -2900, -2900, -2900, -2900, -2900,  2307, -2900, -2900,
     100,   100, -2900, -2900, -2900, -2900, -2900,  2308, -2900, -2900,
    2309,   100, -2900, -2900, -2900, -2900, -2900,  2310, -2900, -2900,
     100,  2311,  2312,  2314,   100,   100,   -28,  2317,  2319,  2320,
    2323,  2325,  2326,   100,   100,   -28,  2328,  2329,  2331,  2334,
    2336,  2338,   100,   100,   -28,  2341,  2342,  2344,   100,   -17,
     -17,   -17,   -17,   -17,  2343,   -17,   -17,  2347,   100,   100,
     -17,   -17,   -17,   -17,   -17,  2349,   -17,   -17,  2350,   100,
   -2900,   100,  2353, -2900,  2354,  2356, -2900,  3086, -2900,   878,
    2357,  5687,   878,   698,  5687,  2358, -2900,   878, -2900, -2900,
   -2900,   878, -2900,  5687,  2359,   698,   698,   698,   698,   698,
     698,   698,   698,   698,   698,   698, -2900, -2900, -2900,  5687,
     878,   698,  5687,  2360, -2900, -2900, -2900,  1536,  1536,    13,
    5687,  1536,  1536,  5687,  5687,  1536,  1536,   698,   698,   698,
     698,   698,   698,  1407,   698,   698,   698,  2923, -2900,  1407,
     698,   698,   698,   698,  1407,  2363,   698,  2364,   698,   698,
     698,   698,   698,  1483,   698,  1751,  1407,   698,   698, -2900,
   -2900,    13,   542,  5687,  5687, -2900, -2900, -2900,    13,  1483,
    2361, -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900,
   -2900,   698, -2900, -2900,  1536,   698, -2900, -2900, -2900,  1289,
    2365,  2366,  2368,  2370,   698,   698,  2371,   698, -2900,  2372,
    1469, -2900, -2900, -2900,   878, -2900, -2900, -2900, -2900,  2373,
   -2900, -2900,  1483,  2375,  2376,  2378,  2380,  5687,  2381,  1483,
   -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900,
   -2900, -2900, -2900, -2900, -2900, -2900,    13,   878,    13, -2900,
      13, -2900, -2900,    13, -2900,    13,  1483,  2382,  1483,  2379,
   -2900,   698, -2900, -2900,   -17,   100, -2900, -2900,   100,  2384,
   -2900,   100, -2900,   -17,   -17,   -17,   -17,   -17,  2385,   -17,
     -17,   100,   -17,   -17,   -17,   -17,   -17,  2386,   -17,   -17,
     100,   -17,   -17,   -17,   -17,   -17,  2387,   -17,   -17,   100,
     -17, -2900, -2900, -2900, -2900, -2900,   100, -2900, -2900,  2388,
     -17,   -17, -2900, -2900, -2900, -2900, -2900,   100, -2900, -2900,
    2389,   -17, -2900,   100, -2900, -2900,  1483, -2900,  5687,   878,
   -2900,  2390,  1483,   698, -2900, -2900,  1483,   698, -2900, -2900,
   -2900, -2900, -2900, -2900, -2900, -2900, -2900,   698,   698,   878,
   -2900,  2391,  1483,   698,  1536, -2900,    22,   878,   698,  1536,
     878,   878,  5687, -2900,   698,  2392,  2392,   698,   698,  2392,
    1407,  2392, -2900,  5687,  1744,  1818,  1857,  1865,  1878,  1887,
    1906,  2923, -2900,  1916, -2900, -2900,  1407,  2392,  2392,   698,
     698,  1407,  2393,   698, -2900,   698,   698,   698,   698, -2900,
    1536,   698,  2398, -2900, -2900,   698,  2392,   542,    33,  1483,
    1483,   542,    13,  2400, -2900, -2900, -2900,  2402,   698, -2900,
    2406,  2401,  2408,  2409,  2410, -2900,  2411,  2412,   698, -2900,
   -2900,  2413,   103,  5687, -2900,  2417,   118,  5687, -2900, -2900,
   -2900, -2900, -2900, -2900, -2900, -2900, -2900,  2419,   103,   698,
   -2900, -2900, -2900,   100, -2900, -2900, -2900, -2900, -2900, -2900,
     100, -2900, -2900,   -17, -2900, -2900, -2900, -2900, -2900,   100,
   -2900, -2900,   -17, -2900, -2900, -2900, -2900, -2900,   100, -2900,
   -2900,   -17, -2900,   -17,   100, -2900, -2900,   -17,   100, -2900,
   -2900,   698,   878, -2900,  5687,  5687,   698,  5687,   698, -2900,
   -2900, -2900,  5687,  5687,   698, -2900, -2900,  2420, -2900,  5687,
   -2900, -2900, -2900,   878,  2426, -2900, -2900, -2900,  1407,   698,
   -2900,  2427, -2900, -2900,  1483,  1258,  2429,  2433,  2437,  2438,
    2439,  2434, -2900,   542,  2441, -2900, -2900,  1407,   698,  2443,
    2445, -2900, -2900, -2900, -2900,   698,  5687, -2900, -2900, -2900,
   -2900, -2900, -2900, -2900,    33,  2098,  1832, -2900, -2900, -2900,
     542,  2446,  2448,  2449, -2900, -2900, -2900,  2447,  2451,  2452,
   -2900,    94,   103, -2900, -2900, -2900, -2900,  2453,  5687, -2900,
   -2900, -2900, -2900, -2900,   103, -2900,  2454, -2900,   -17, -2900,
     -17, -2900,   -17, -2900, -2900,   -17, -2900,   -17,  3086, -2900,
     878,   878,   698,   878,  2455,   878,   878,   698, -2900,   878,
     698, -2900, -2900, -2900, -2900,  2456, -2900,   698, -2900, -2900,
    2457, -2900,  2459, -2900, -2900, -2900, -2900, -2900,   698, -2900,
   -2900, -2900,  2460,   698, -2900, -2900, -2900, -2900,  1483, -2900,
   -2900, -2900,  2098, -2900,  2140,  1981,  1832, -2900, -2900, -2900,
    2462,  2463, -2900, -2900, -2900, -2900, -2900, -2900,  1162,  1162,
   -2900, -2900,  1483, -2900, -2900, -2900, -2900, -2900, -2900, -2900,
     878, -2900, -2900,  2461, -2900,  5321, -2900, -2900,  2468, -2900,
    1407, -2900, -2900,  1407,   698, -2900,  2470, -2900,   698, -2900,
    1407,   698, -2900, -2900,  5687, -2900,  2140, -2900,   542, -2900,
    2471,  2472,   698,   698,   698,   698,   118,  2473,  5321,  1483,
   -2900,  5321, -2900, -2900,   698, -2900,  2475, -2900,   698,   878,
   -2900, -2900, -2900,  2476,  2477,   698,  2478,   698, -2900, -2900,
    1483, -2900, -2900,  1483, -2900, -2900,  2480, -2900, -2900,  2481,
    2482, -2900, -2900,  2483, -2900,  2484, -2900, -2900,  1407, -2900,
    1407, -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2900, -2900,    -3, -2900,   352, -1047, -1920, -1177,  1889, -2900,
     891,  -476,  1710,   -55,    19, -2900,  -297, -1919,  1663,  1609,
    -945,   847, -1139,  1675,   848, -1684, -2900, -1321, -2900,  -665,
   -1279, -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900,
   -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900,
   -2900, -2900, -2900, -2900, -2900, -2900, -2900,  -511,  -544, -2900,
   -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2737, -2900, -2900,
   -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900,
   -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900,
   -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900,
   -2900, -2900, -2900, -2900, -2900,   130, -2900, -2900, -2900, -2900,
   -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900,
   -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900,
   -2900, -2900, -2900, -2900, -2900,   244, -2900, -2900, -2900, -2900,
   -2900, -2900, -2900, -2900, -2900, -2900,   -41,    42, -2900, -2900,
   -2900, -2900, -2900, -2900, -2900, -2900, -1679, -2900, -2900, -2900,
   -2900, -2900, -2900,  -786, -2900, -2900, -2900, -2900, -2900, -2900,
      65, -2900, -2900, -2900, -2900,  -315,  -797,   -93,  -484, -2900,
   -2900, -2900, -2900, -2900,  -575,  -570, -2900, -2900, -2899, -2900,
   -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900,
   -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900,
   -2900, -2900, -2900, -2900, -2900, -2900,  1619, -2900, -2900, -2900,
   -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900,
   -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900, -2900,
   -2900, -2900, -2900, -2900, -2900, -2900
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1436
static const yytype_int16 yytable[] =
{
      74,   401,  1022,  1296,  1470,  2353,  2178,  2355,   116,  1269,
    1272,  1639,   118,   185,  2004,   813,  1586,  2195,   811,  1589,
    1052,  1264,  1313,    70,    71,  1000,  1740,  2926,   118,   339,
      70,    71,  2251, -1211,   335,  1003,  2199,   768,   258,  2218,
    1624,   364,  1669,   362,    70,    71,    70,    71,  2015,  1909,
     262,   931,   395,   467,   172,   406,   337,   173,   412,   421,
     356,  2200,   418,  1058,  2201,   425,   927,  1361,  1815,  1255,
     429,   431,  1828,  1960,   441,   884,  2202,   448,   452,    70,
      71,   455,   934,   667,   456,   457,    70,    71,   465,   695,
    1720,   174,  1106,   466,  1462,  1463,  1464,    70,    71,   175,
    1176,  2203,  1874,  1875,  1876,   371,   706,   352,   483,   487,
     492,   493,   497,   499,    70,    71,  1582,  1969,  1413,  2204,
    1703,   616,  1304,   602,  1314,    70,    71,    70,    71,   503,
    1067,  3005,  1315,   711,  1362,  1972,  2993,   365,  1027,   123,
    1161,  1011,   885,   983,   502,    70,    71,   849,   121,    70,
      71,  2999,  1177,   366,    83,   123,  1567,   477,   372,  1563,
     701,  1729,    70,    71,   512,  3117,   176,  1670,  1697,   373,
      70,    71,  1007,  1551,  1163,   315,    70,    71,  1363,   552,
      70,    71,   169,   444,   478,    70,    71,   234,   553,   545,
    1300,  1564,    60,   535,   568,   187,   316,   297,   317,   118,
     299,  1053,   374,   118,   235,  1059,  2246,   984,  1012,  1544,
    1170,   625,   617,  1028,   118,   409,   569,  3140,   577,   111,
     582,   586,  1162,  1976,   826,   177,   323,   603,   184,   445,
    1704,   622,    70,    71,   626,   814,   274,   126,   118,   360,
     112,  1305,  1970,   815,   816,  1265,   127,   128,   665,   618,
     367,   627,   912,   126,   696,  3080,  1164,   608,   178,  1048,
     179,   712,   127,   128,  1068,    72,   300,  3083,   368,   713,
     256,  1730,  1008,    70,    71,  1568,   612,   850,  1583,   307,
     632,    70,    71,   745,   817,   647,   839,   536,   437,   180,
     301,   668,  1171,  1537,  2165,  1306,  2016,   259,   113,  1545,
     775,   776,  1178,   827,   424,  1107,  3075,  2167,   468,   263,
    1910,  1414,  2994,  2170,  1364,   121,   820,  1664,   822,   357,
     707,   928,   886,   260,  1961,   702,   123,  3000,   825,   828,
     123,   831,   835,   318,   837,   264,   651,   129,    70,    71,
     769,   123,  1266,  1698,   847,   358,  1307,   131,   422,  1256,
     302,   628,   325,   833,  1671,   349,   361,   857,   859, -1211,
    1329,   432,  1316,   131,   181,   123,   171,   183,  1721,   340,
    1741,  2927,  1054,   697,   257,   932,  2252,    73,  1531,   394,
     341,   911,   305,   118,   918,   920,  1973,   922,  1179,   375,
     342,   925,   926,  2005,  1108,  1060,   114,   161,   929,  1180,
     319,   818,   940,   942,   162,   163,   935,  2205,   369,   943,
     118,  1665,   410,   161,   946,   948,   118,  1712,  1132,  1705,
     162,   163,   949,   438,   126,  2995,   951,  1964,   126,  1971,
     443,   919,   698,   127,   128,  1733,  1181,   127,   128,   126,
    3001,  3076,  1244,  1308,   703,   961,   962,   405,   127,   128,
     898,   320,   966,   967,   968,   969,   970,   971,   417,   973,
    1731,   321,   975,   126,   652,   913,  2132,   439,   440,   378,
    2519,   118,   127,   128,  1977,  2110,  1666,   901,  2113,   309,
     985,  1301,  1774,   904,   986,   543,  3077,  2228,  1245,   991,
     992,   993,   994,   995,   996,  2162,   997,   629,   487,  1001,
    1002,   754,    70,    71,   129,   118,  1539,   115,   487,  1004,
     123,  2546,  1302,   630,  1786,  1929,   609,  1525,  2191,   999,
     677,  1965,  1450,  1933,   514,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   131,   613,  2233,   123,   131,   952,
     303,  1978,   610,   123,   648,  2166,   118,   538,   351,   131,
    2292,    70,    71,   539,   914,    61,  1019,   894,  2168,  1258,
     889,   614,  1667,   310,  2171,  1035,  1036,  1466,   678,   870,
     649,   978,   979,   131,   458,   433,  1334,   403,  1237,  2133,
     907,  1356,   840,  1044,   161,  1274,  1966,   653,   161,   304,
    1275,   162,   163,    70,    71,   162,   163,  1339,   123,   161,
     540,    62,  1020,   747,   408,  1238,   162,   163,   126,  1424,
     953,  1049,   275,  1117,  1668,  1358,  1425,   127,   128,  1070,
     654,   841,    63,   161,   755,  1935,   414,   890,   541,   344,
     162,   163,   123,  1297,   434,   126,   872,  1370,  1259,   895,
     746,   126,   435,  1246,   127,   128,    84,  1015,   415,  1149,
     127,   128,    64,   773,   774,  1335,   276,  1150,  1151,   277,
    1247,  1248,  1112,  1357,  1714,  1097,  1526,   756,   757,  1276,
    1268,  1366,  1967,   123,    65,   449,  1340,   311,    66,   278,
     842,   121,   542,  1372,    85,   830,  2134,   416,  1377,   420,
     954,   679,   312,    67,  1700,  1277,   126,  1359,   279,  1816,
      93,    70,    71,  1167,   908,   127,   128,    70,    71,  1152,
    1131,  2848,  1298,   758,  1991,   280,  1979,   427,   131,  1371,
    1134,   281,  1186,   447,  1968,  2002,   543,   544,  2136,   454,
     126,  1527,   899,   902,   905,   681,  1260,   915,  1367,   127,
     128,   459,   460,   345,   464,   131,   353,  2135,  1136,  1137,
    1373,   131,   896,  1336,  1239,  1378,  1073,  1016,  1528,  1074,
    1075,  1249,  1250,    86,   121,   313,  1817,  1278,   161,   748,
     749,   126,  1185,   282,  1341,   162,   163,   759,  1715,   950,
     127,   128,   909,   480,  1988,   450,   470,  1392,  1701,  1608,
     461,  1267,   471,   955,  1280,   161,   283,  1609,  1610,   956,
    1138,   161,   162,   163,   760,   843,   131,   891,   162,   163,
    1299,   354,  1244,    87,    88,   473,   880,  1320,  2057,  1240,
     682,  1820,  1321,  1322,  1323,  1324,  2058,  2059,  1325,  1310,
    1327,   346,  1328,   487,  1330,  2137,  1337,   475,    94,  1824,
     131,   861,   347,   656,  1716,  2082,  1241,  1017,   481,  1611,
    1798,   462,  1989,  2083,  2084,   657,   161,  1342,  1245,  1153,
    1154,    89,    90,   162,   163,   683,   326,    95,  2093,   762,
     129,    96,  1404,  1709,  1792,   451,  2094,  2095,  2060,   750,
      68,   131,  1271,   500,  1279,  1793,   658,  1722,  1821,   763,
     161,   390,   633,  1710,  2414,  1830,  2138,   162,   163,   513,
   -1435,  2366,  1938,  1939,  1881,  2085,  1825,  1834,   862,  1391,
     684,  1395,   284,  1992,  2427,   634,  1396,  1397,  1368,  1398,
    1400,  1402,  1403,    91,  2437,  1702,  1990,  2440,  2096,   524,
    1374,   161,   635,    97,  2447,  1379,  1416,  1417,   162,   163,
     548,   285,   286,  1421,  1422,  1155,  1818,   863,   864,  2484,
    1139,  1140,  2487,   129,   287,  2515,  1156,  1157,   288,  1993,
    2495,  1158,  1831,  2498,  1428,  1429,  1430,  1431,  1432,  1244,
    1434,   659,  1436,   525,  1835,   579,  1707,    98,    70,    71,
     764,  1723,  2356,  1940,  1708,  2524,    99,   100,   550,  1930,
    1445,  1446,  1447,  1159,  1449,   487,  1451,  1838,  1452,  1612,
    1613,  2274,   605,  2142,  2601,  2602,  2603,  2604,  2605,  2606,
    2607,  2608,  2609,  1246,  2543,  1245,   660,   606,  3034,   588,
    1455,   607,  1457,   624,   327,   391,  2143,  1994,  2061,  2062,
    1247,  1248,   328,  1459,   329,   589,  1141,  3051,  2144,  1842,
     487,  1467,  1456,   641,  1846,   266,  1469,  1142,  1143,   643,
     636,  2145,  1852,  1076,  1077,  2086,  2087,   865,   644,  1127,
     590,   646,  1985,  1482,  1839,  2146,  2147,  1486,  1822,  1078,
    1986,  2028,  2029,   666,    70,    71,   267,  1135,  2097,  2098,
     591,  1530,  1532,  1535,  1144,  1614,  1826,   672,   866,  1540,
    1980,  1519,  1860,  1995,  1546,   661,  1615,  1616,    70,    71,
     592,  1617,    70,    71,   593,   662,  1843,  1864,   673,  1549,
    1601,  1847,   428,  1079,  2063,  1534,   620,   637,  1724,  1853,
    1080,   392,  1597,  2030,   675,  2064,  2065,  1998,  1559,  1606,
    2066,  1249,  1250,  1618,   411,   594,   595,  1407,  1408,  2048,
    2049,  2088,  1832,  2610,   694,  1629,   700,  2068,  2069,  1081,
     705,  1283,  2089,  2090,  1836,   663,  1311,  2091,   709,  1861,
     268,   710,  2067,  1520,  2099,    70,    71,   860,   638,   714,
    1246,   121,   743,  1082,  1865,  2100,  2101,   269,   639,   744,
    2102,   621,   752,  3133,  1981,  2451,  2452,  1247,  1248,  2092,
    3137,  2050,  1083,   766,  1521,   771,    70,    71,   596,  2070,
    2460,  2461,  2469,  2470,    70,    71,  1598,  1706,  1084,   597,
     772,   715,  2103,  1607,   716,  1085,   777,  1809,  1810,   812,
     119,  1999,   824,  1086,  1630,    70,    71,   838,  1732,  2148,
      70,    71,   939,   947,   717,    70,  1399,  2453,  1739,   845,
    2149,  2150,  2151,  2152,  1840,    70,    71,   270,  3174,   846,
    3175,   848,  2462,  1982,  2471,  1769,  1897,  1770,   852,    70,
      71,   121,  1771,  1772,  1773,  1393,  3040,  1420,   854,   855,
     718,   888,  1779,  2031,  2032,  1780,   719,  1782,   893,   598,
     599,    70,    71,  2126,   494,  1087,  1844,  1522,  1249,  1250,
    2000,  1848,    70,    71,  1784,   271,  1785,  1410,  1411,  1854,
    1644,    70,    71,  2129,  1789,  1790,   272,    70,  1481,  1088,
     122,   868,  1631,  1632,  1089,  1019,  1090,  2698,  2592,  1796,
    1797,  1983,   917,   487,  1799,  1800,  2707,  1633,   720,  1645,
    1438,  1802,   923,  1803,  2153,  2716,  1805,   924,  1806,  1862,
     937,  2051,  2052,   944,  1091,  1092,  1523,   945,   856,  2071,
    2072,  1885,  2837,  1093,  1866,  1777,  1778,   600,  2001,  2033,
     129,  1020,   959,   495,   960,  1646,  1811,  1812,  2184,  2185,
    2034,  2035,   963,  1647,  1634,  1094,   964,   124,   965,  1648,
     988,   989,   290,   972,  1877,   974,  2790,  2454,  2455,  1878,
    1575,  1576,  2806,  1879,   976,  1880,   977,  2811,  1813,  1883,
     980,  1649,  2463,  2464,  2472,  2473,   982,  2036,   484,   486,
      70,    71,  2637,  1636,  1637,  1889,  1005,  1892,  1010,  1894,
    1895,  1896,  1898,  1006,  1650,  1900,  1901,  2053,  1903,  1904,
    1014,  1906,  1023,  1908,  1095,  2073,  2656,  1891,  2054,  2055,
    1025,  1917,  1651,    70,    71,  2188,  2074,  2075,  1923,  1949,
     129,  1030,  1924,  1925,  1926,   130,    70,    71,  2131,  1636,
    1637,   496,   487,  1931,   397,  2937,  1934,   721,  2940,  1033,
    2942,    76,   398,  2456,  1944,  2056,  1945,    77,   291,  1947,
    1652,  1032,  1046,  2076,  2457,  2458,  2955,  2956,  2465,  1936,
    2474,  1051,  1056,  1062,   292,  1063,   722,   723,    93,  2466,
    2467,  2475,  2476,  1065,  1066,  2973,   103,  1956,  1071,   724,
    1098,  1113,  1099,   725,  1100,  1102,   104,  1104,  1110,   504,
    1115,  2459,  1119,   105,    78,  1653,  1124,  2006,  1950,  2007,
    1125,  1126,  2008,  2009,   293,  2010,  2468,  2011,  2477,    70,
      71,  1654,  1128,  2013,   484,   485,   486,  2014,  1129,  1130,
    1133,  1145,    79,  1146,  1655,  1147,  2020,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,  1148,  1656,  1160,  1172,  1174,
    1736,   294,  1175,  1236,  1182,  1183,  1673,  1184,   379,   505,
    1657,  1243,  1658,  1659,  2776,  1252,    80,  1254,  1262,   295,
     380,  1263,  1319,  2941,   106,  1317,  1951,  1952,    70,    71,
    2161,  1636,  1637,   526,   506,   507,  1318,  1674,  1331,  2954,
    1675,  1953,  1333,   508,  2959,  1344,    94,  2127,  2128,  2130,
    1345,   381,  1346,  1660,   527,  1347,  2827,  1348,  1783,  1349,
    1350,    81,  1351,  2831,  1352,  1353,   509,  1354,  2125,  2140,
    1355,   528,  1791,  1676,  2156,    95,   510,   107,  1376,  2352,
    1381,  1382,  1383,  1386,   529,  1384,  1385,  1387,  1954,    70,
      71,  2190,  1636,  1637,  1388,  1389,  1390,  1405,  1406,  1409,
    2187,  2189,  1412,  1418,  1677,  1419,   530,  1678,  1423,  1426,
     531,  1427,  1433,  2198,   108,  1435,  1437,  2209,  1439,  1440,
    1443,  1524,  1453,  1454,  2215,   532,  1472,  1473,  1474,  1476,
    1478,  2859,  1477,  2861,   399,  2862,   382,   400,  2863,  2221,
    2864,    97,  1479,  1480,  2551,  2224,  1484,   109,  1542,  2226,
    1536,  2229,  2230,  1485,  2232,  2234,  2235,   336,  2238,  1538,
    1547,  2241,  2242,  2243,  2244,  2245,  2247,  2248,  2249,  2250,
    2253,  2255,  2256,   533,  1550,  1552,  2258,  2259,  2260,  2261,
    1553,   383,  1556,  1577,  1557,    98,  2267,  2268,  1560,  1570,
    2270,  2271,  2272,  1561,    99,   100,  2275,  2276,  1562,  1571,
    1578,  1913,  1914,  2595,  1572,  1573,  1579,  1580,  1581,  2279,
    2280,  1587,  2281,  2282,  1588,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,  1590,  1679,   501,  1591,  1640,  1593,  1595,
    1603,  1605,  1619,  1620,  1625,  1225,  1621,  1622,  1626,  1627,
     384,  1641,  1643,  2616,  1642,  1663,  1662,  1672,  1681,  1692,
     385,  1226,  1695,  1693,  1694,  1696,  1699,  1713,  1719,  1680,
    1227,  1725,  1717,  1718,  2320,  1726,  2321,  2322,  1727,  1728,
    2323,  1228,  1734,   386,  1682,  2325,  2328,  2980,  2330,  2331,
    2332,   387,  2333,  2334,   870,  2336,  1735,  2337,  2338,  1737,
    2340,  2341,  1738,  2343,  1768,  2345,   566,  2327,   573,   576,
     388,   581,   585,  1776,  2350,  1683,  1787,  1229,  1684,  1788,
    1794,  1685,  2354,  3132,  1795,  1801,  1804,  2359,  2360,  1807,
    1808,  1284,  1829,  2362,  1850,  1851,  1856,  -514,  1857,  1285,
    1230,  1858,  2365,  1859,   670,   836,  1868,  1286,  1869,  1870,
    1873,  1686,  1871,  1872,  1886,  1887,  1899,   871,  1902,  1987,
    1916,   872,  1888,   686,   692,  1287,  1893,  1905,  1907,   699,
    1912,  1918,  1288,   704,  1919,  1920,  1932,  1984,  1937,  2379,
    1946,  2394,  1687,  1948,  1996,  1688,  2003,  2123,  1566,  1957,
    1958,  2385,  1959,  1963,  1974,  2390,  1231,  1975,  1289,  2012,
     873,   874,  1997,  2018,  2019,   875,  2404,  2405,  2024,  1290,
     938,  2407,  2043,  2046,  2172,  2077,  2141,  2409,  2079,  2081,
    2104,  2158,  2159,  2105,  2106,  2107,  1623,  2111,  2112,  2115,
     821,  2114,  2116,   823,  2119,  2163,  2122,  2139,  2155,  2160,
    2174,  1232,  2164,  2169,   832,  2173,   876,  2175,  2176,  2177,
    2179,  2180,  2194,  2181,  1291,  2186,  2227,  2192,  2193,  2207,
    2231,  2212,  1292,  2223,  2211,  2225,  2182,   853,  2183,  2236,
    1233,  2774,  2775,  2216,  2217,  2778,  2779,  2239,  2240,  2782,
    2783,  2257,  2264,  2265,  2266,  2222,  2277,  2278,  2403,  2283,
    2284,  2285,  2577,  2286,  2287,  2288,   958,  2289,  2290,  2291,
    2822,  2293,  2294,  2295,  2298,   877,  2296,  2297,  2299,  2300,
     878,  2301,  2431,  2302,  2303,  1293,  1234,  2304,  1235,  2305,
    2306,  2307,  1689,  2308,  2510,  2511,  2309,  2513,  1294,  2310,
    2311,  2312,  2313,  2478,  2314,  2315,  2316,   879,  2835,  2317,
    2318,   880,  2319,  2945,  2335,  2339,  1295,  2342,  2344,  2346,
    2348,  2349,  2361,  2406,   881,  2367,  2368,  1690,  2369,  2370,
    2525,  2526,  2527,  2528,  2529,  2530,  2531,  2532,  2533,  2371,
    2408,  2411,  2412,  2413,  2415,  1034,  2416,  2489,  2417,  3065,
    2420,  2428,  1039,  2422,  2539,  1040,  2541,   981,  1691,  2423,
    1041,  2424,  2429,  2438,  1043,  2430,  2432,  2433,  2434,  2439,
    2448,   990,  2441,  2442,  2443,  2444,  2550,   487,  2449,  2485,
     998,  2450,  2554,  2479,  2480,  2481,  2486,  2946,  2488,  2490,
    2491,  2492,  2496,  2557,  2558,  2559,  2560,  2561,  2562,  2563,
    2564,  2565,  2566,  2497,  2501,  2569,  2570,  2571,  2572,  2573,
    2574,  2575,  2576,  2499,  2578,  2579,  2580,  2581,  2582,  2502,
    2585,  2504,  2586,  2587,  2588,  2505,  2947,  2507,  2514,  2516,
    2520,  2523,  2534,  2535,  2948,  2536,   487,  2596,  2542,  3065,
    2537,  2538,  2544,  2619,  2584,  2589,  2590,  2949,  2593,  1118,
    2594,  1037,  1038,   237,  2597,  2600,  2950,  2620,  2621,  2626,
    2628,  2630,  2632,  2633,  1042,  2640,  2644,  2645,  2925,  1045,
    2646,  2647,  2648,  2930,  2677,  2951,  2680,   238,  1057,  2682,
     239,  2685,  2688,  2689,  2691,  2953,  2693,  2694,  2611,  2695,
    2612,  2699,  2613,  2700,  2615,  2701,   487,  2617,  2702,  2618,
    2703,  2704,  2708,  2709,  2622,  2623,  2710,  2624,  2625,  2711,
    2627,  2712,  2629,  2713,  2968,  2717,  2718,  2726,   240,  2719,
    2635,  2729,  2636,  2737,  2740,   241,  2639,  2743,  2744,  2641,
    2745,  2748,  2753,  2757,  2773,  2833,   242,   243,  2812,  2814,
    2839,  2840,  2841,   244,  2842,  2845,  2847,   987,  2850,  2852,
    3118,  2853,  2854,  2868,  2643,  2855,  2857,  2866,  2873,  2880,
    2889,  2898,  2904,  2908,  2914,  2922,  2935,  2960,  1120,  1121,
    1122,  1123,   245,  2970,  2981,  2985,  2681,  2982,  2021,  2022,
    2023,  2984,  2986,  2987,  2988,  2989,  2990,  2992,  2025,  2026,
    2027,   246,  2998,  3004, -1229,  3028,  2679,  2038,  2039,  2040,
    3031,  3037,  2041,  2042,  3041,  2044,  2045,  3042,  3046,   247,
     248,  1326,  3043,  3044,  3045,  3048,   249,  3053,  1332,  3054,
    3069,  3072,  2746,  3070,  3071,  3073,  3074,  3081,  3084,  3095,
    3103,  3148,  3106,  3107,  3110,  3128,  2798,  3120,  3121,  2117,
    2118,   250,  3131,  2120,  2121,  3135,  3142,  3143,  3149,  3157,
    3079,  3161,  3162,  3164,  3168,  3170,  2952,  3171,  3172,  3173,
    3062,  3119,  3115,  2518,  1360,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1282,     0,
    2751,     0,     0,     0,     0,     0,     0,     0,   251,     0,
       0,     0,  2758,  2759,  2760,  2761,  2762,  2763,  2764,  2765,
    2766,  2767,  2768,     0,  3123,  3125,     0,     0,  2771,     0,
       0,     0,     0,     0,   487,   487,  2545,     0,   487,   487,
       0,     0,   487,   487,  2784,  2785,  2786,  2787,  2788,  2789,
       0,  2791,  2792,  2793,     0,     0,     0,  2807,  2808,  2809,
    2810,     0,     0,  2813,   252,  2815,  2816,  2817,  2818,  2819,
       0,  2821,     0,     0,  2825,  2826,     0,     0,   253,     0,
    1441,     0,     0,     0,  1487,  1488,  1489,     0,     0,  1444,
       0,     0,     0,     0,     0,     0,     0,     0,  2834,     0,
       0,   487,  2836,     0,     0,     0,  2838,     0,     0,     0,
     254,  2843,  2844,     0,  2846,     0,  1490,  1491,     0,     0,
    1492,     0,     0,     0,     0,     0,     0,  1493,     0,     0,
       0,  1494,     0,     0,     0,  1495,  1460,  1461,     0,     0,
       0,  1465,     0,     0,  1468,  1496,  1497,     0,     0,     0,
       0,     0,     0,  1498,     0,     0,  1475,     0,     0,     0,
       0,     0,     0,     0,  1499,     0,     0,     0,  2869,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1442,  1500,  1501,     0,     0,  1502,     0,  2943,
       0,     0,     0,     0,     0,     0,  1448,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1503,     0,  2961,
       0,  2963,     0,     0,     0,     0,     0,     0,  1504,     0,
    2971,     0,     0,     0,   726,   727,   728,     0,     0,     0,
    1505,     0,     0,     0,     0,  1458,     0,     0,     0,     0,
    2916,     0,     0,     0,  2918,     0,     0,     0,     0,     0,
       0,   729,     0,     0,  2919,  2920,     0,     0,     0,  1506,
    2924,   487,     0,     0,   730,  2929,   487,     0,     0,  1507,
       0,  2934,     0,     0,  2938,  2939,     0,     0,     0,     0,
     731,     0,     0,     0,     0,  1628,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2957,  2958,     0,     0,
    2962,     0,  2964,  2965,  2966,  2967,     0,   487,  2969,     0,
       0,     0,  2972,   732,     0,     0,     0,     0,     0,  1585,
       0,     0,  1508,   733,  1509,  2983,  1555,     0,     0,     0,
    1510,  1511,     0,  3032,  3033,  2991,     0,  3036,     0,  3038,
       0,     0,     0,     0,     0,   734,     0,     0,  1512,     0,
       0,     0,  3049,  3050,   735,     0,  3006,     0,     0,  3055,
    1513,  3056,  2410,     0,  3059,     0,     0,     0,     0,  3060,
    3061,     0,     0,     0,   736,  2418,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2421,     0,     0,     0,     0,
    1514,     0,  1515,     0,     0,     0,     0,     0,  3018,     0,
     737,     0,     0,  3022,  1516,  3024,     0,     0,     0,     0,
       0,  3027,     0,  1711,     0,  1517,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  3035,     0,  3101,     0,
       0,  3102,     0,     0,  2828,     0,  3105,     0,     0,     0,
       0,     0,   738,     0,     0,  3052,     0,   739,  3109,  1518,
       0,  3112,  3057,  3090,  3113,     0,     0,  2506,     0,     0,
       0,     0,     0,     0,   740,     0,     0,   741,     0,  1775,
       0,     0,  2794,     0,     0,     0,     0,     0,  3078,  1781,
       0,     0,     0,     0,  2795,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1884,     0,     0,     0,     0,     0,  3093,
       0,     0,  1284,  2796,  3098,     0,     0,  3100,     0,     0,
    1285,     0,     0,     0,  3104,     0,     0,     0,  1286,     0,
    3155,     0,     0,     0,  3158,  3108,     0,     0,     0,     0,
    3111,  1915,     0,     0,     0,     0,  1287,  1921,     0,     0,
       0,     0,     0,  1288,  3169,     0,  2797,  1927,     0,     0,
       0,     0,     0,     0,     0,  3122,  3124,     0,  3176,     0,
       0,  3177,  3178,     0,     0,     0,     0,     0,     0,  1289,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1290,  3134,     0,     0,     0,  3136,     0,     0,  3138,     0,
    1882,     0,     0,     0,  3130,     0,     0,     0,     0,  3144,
    3145,  3146,  3147,     0,     0,     0,     0,     0,  1890,     0,
       0,  3156,     0,     0,     0,  3159,     0,     0,     0,     0,
       0,     0,  3163,     0,  3165,  1291,     0,  3151,     0,     0,
    3154,     0,     0,  1292,     0,     0,     0,     0,     0,  1922,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1928,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2974,
       0,     0,     0,  2979,     0,     0,  1943,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1955,     0,
       0,     0,     0,  1962,     0,  2638,  1293,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1294,
       0,     0,  2651,  2652,  2653,     0,     0,  2655,     0,  2657,
    2658,     0,     0,  2660,  2661,  2662,     0,  1295,  2664,  2665,
       0,     0,     0,  2669,     0,  2671,  2672,     0,  2674,  2798,
       0,  2799,     0,  2037,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2047,     0,  2683,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2108,  2109,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  3047,     0,     0,  2800,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2210,     0,     0,     0,     0,     0,     0,  2721,  2722,  2723,
    2724,  2725,  3068,  2727,  2728,     0,     0,     0,  2732,  2733,
    2734,  2735,  2736,     0,  2738,  2739,     0,     0,     0,  2124,
       0,     0,     0,     0,     0,     0,  2747,     0,     0,  2750,
       0,     0,     0,     0,  2754,     0,     0,     0,  2755,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2157,     0,
       0,     0,     0,     0,  2263,     0,     0,  2770,     0,     0,
    2269,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2196,     0,     0,  2197,     0,     0,     0,  2208,
       0,     0,     0,     0,     0,  2213,  2214,     0,     0,     0,
       0,     0,     0,     0,  2219,     0,     0,     0,     0,     0,
       0,  2220,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
    3141,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2849,     0,     0,  2262,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2324,     0,  2273,     0,     0,  2329,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2860,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2351,  2870,     0,     0,     0,     0,  2357,     0,     0,
       0,  2875,  2876,  2877,  2878,  2879,     0,  2881,  2882,     0,
    2884,  2885,  2886,  2887,  2888,     0,  2890,  2891,     0,  2893,
    2894,  2895,  2896,  2897,  2374,  2899,  2900,     0,  2902,     0,
       0,  2381,     0,     0,     0,     0,     0,     0,  2905,  2906,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2909,
       0,     0,     0,     0,     0,     0,  2913,     0,  2326,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2921,     0,     0,     0,
       0,     0,  2347,     0,  2928,     0,     0,  2931,  2932,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2358,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2363,     0,  2364,     0,     0,     0,     0,    70,
      71,     0,     0,     0,  2373,     0,     0,  2375,  2376,  2377,
    2378,  2380,     0,  2382,     0,   119,     0,  2383,     0,     0,
       0,     0,  2384,  2386,  2387,  2388,  2389,  2391,     0,     0,
       0,     0,  2392,  2393,     0,     0,     0,  2395,  2396,  2397,
    2398,     0,     0,  2399,  2400,     0,     0,     0,     0,     0,
    2401,  2402,     0,     0,     0,     0,     0,     0,  2419,     0,
       0,     0,     0,     0,     0,     0,  2425,  2426,     0,     0,
       0,  3009,     0,  2508,     0,     0,  2435,  2436,     0,     0,
    3011,     0,     0,     0,     0,     0,  2445,  2446,     0,  3013,
       0,  3014,     0,     0,     0,  3016,     0,     0,     0,  3019,
       0,  2482,  2483,     0,     0,   122,  2522,     0,     0,     0,
       0,     0,  2493,  2494,     0,     0,     0,     0,     0,  2500,
    3030,     0,     0,     0,     0,     0,     0,     0,     0,  2503,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2547,  2548,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2549,     0,     0,
       0,     0,  2552,  2553,     0,     0,     0,     0,  2555,  2556,
       0,     0,   124,     0,     0,     0,  2509,     0,     0,  2512,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2517,     0,     0,     0,     0,     0,  3085,     0,  3086,     0,
    3087,     0,     0,  3088,     0,  3089,  2521,  3091,  3092,     0,
    3094,  2591,  3096,  3097,     0,     0,  3099,     0,     0,     0,
       0,     0,  2598,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2540,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     130,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2614,     0,  3127,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   118,     0,  2631,     0,     0,     0,
       0,  2583,     0,     0,     0,     0,     0,     0,     0,   119,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2650,     0,  2599,     0,  3160,  2654,     0,     0,
       0,     0,   120,  2659,     0,     0,     0,     0,  2663,     0,
       0,     0,  2666,     0,  2668,     0,  2670,     0,     0,  2673,
     121,  2675,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   122,
    2634,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2642,     0,     0,     0,     0,
       0,   123,  2649,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2684,     0,     0,     0,     0,
       0,     0,     0,     0,  2667,  2686,  2687,     0,     0,     0,
       0,     0,     0,  2676,     0,     0,  2690,  2678,     0,     0,
       0,     0,     0,     0,     0,  2692,   124,     0,     0,  2696,
    2697,     0,     0,     0,     0,     0,     0,     0,  2705,  2706,
       0,     0,     0,     0,     0,     0,     0,  2714,  2715,     0,
       0,     0,     0,  2720,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2730,  2731,     0,     0,     0,     0,   125,
       0,     0,     0,     0,  2741,     0,  2742,     0,     0,   126,
       0,     0,     0,     0,     0,     0,     0,     0,   127,   128,
       0,     0,  2820,     0,     0,     0,     0,     0,     0,   129,
       0,     0,     0,     0,   130,     0,     0,     0,  2832,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2749,     0,     0,  2752,     0,     0,     0,     0,     0,
       0,     0,     0,  2756,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2769,
       0,  2851,  2772,     0,     0,     0,     0,     0,  2858,     0,
    2777,     0,     0,  2780,  2781,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2865,     0,  2867,     0,   131,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2829,  2830,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,     0,     0,     0,     0,     0,   161,
       0,     0,     0,     0,     0,     0,   162,   163,     0,     0,
       0,     0,     0,     0,     0,  2911,     0,  2856,     0,     0,
    2871,  2915,     0,  2872,     0,  2917,  2874,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2883,     0,     0,     0,
       0,  2923,     0,     0,     0,  2892,     0,     0,     0,     0,
       0,     0,     0,     0,  2901,   778,   779,     0,     0,     0,
       0,  2903,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   780,  2907,     0,     0,     0,     0,     0,  2910,     0,
       0,     0,     0,     0,     0,  1942,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2977,  2978,
     119,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   781,     0,     0,  2912,     0,
       0,     0,   782,     0,     0,     0,     0,     0,     0,     0,
       0,   783,     0,   784,     0,     0,     0,     0,   785,     0,
       0,   786,     0,     0,     0,     0,     0,   787,     0,     0,
       0,   788,  2933,    70,    71,     0,     0,     0,   789,     0,
       0,     0,     0,  2944,     0,     0,   790,     0,     0,   119,
       0,     0,     0,     0,     0,   791,     0,     0,     0,     0,
       0,     0,     0,     0,   584,     0,     0,     0,     0,     0,
     122,   331,     0,     0,   792,     0,     0,     0,     0,   119,
       0,     0,     0,     0,     0,     0,     0,     0,  3007,     0,
     121,     0,     0,  3039,     0,  3008,     0,   793,     0,     0,
       0,     0,     0,  2997,  3010,     0,     0,  3003,     0,     0,
       0,     0,     0,  3012,     0,   794,     0,     0,     0,  3015,
     121,     0,     0,  3017,     0,     0,     0,     0,   795,   796,
       0,     0,     0,     0,     0,     0,     0,   124,     0,   122,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   797,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  3020,  3021,     0,  3023,     0,   122,
       0,     0,  3025,  3026,     0,     0,     0,     0,     0,  3029,
       0,     0,   798,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   799,     0,   800,     0,
       0,     0,     0,     0,     0,     0,   124,  3114,     0,     0,
       0,     0,     0,     0,   801,   130,  3058,     0,     0,   802,
       0,     0,     0,     0,     0,     0,     0,   803,     0,     0,
       0,  3126,     0,     0,     0,   804,   124,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  3082,   332,
       0,     0,     0,     0,     0,     0,     0,   805,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   806,   807,     0,   808,     0,     0,  3152,   129,
       0,     0,     0,     0,   130,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   333,     0,     0,     0,  3166,
       0,     0,  3167,     0,     0,     0,     0,     0,     0,   129,
       0,     0,     0,     0,   130,     0,   809,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,  3129,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  3139,     0,   334,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  3150,     0,
       0,  3153,     0,     0,     0,     0,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,     0,     0,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,  1742,     0,     0,     0,     0,  1743,
     119,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1744,  1745,     0,  1746,  1747,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1748,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   555,   556,  1749,  1750,     0,     0,   557,     0,     0,
     687,  1751,   119,     0,  1752,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     558,   559,  1753,     0,     0,     0,     0,     0,     0,     0,
     122,  1754,  1755,     0,     0,  1756,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   688,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1757,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   122,     0,     0,     0,     0,   124,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1758,   689,     0,
       0,     0,   560,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   561,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   562,     0,   124,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1759,     0,     0,   130,     0,     0,  1760,   690,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1761,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1762,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   563,     0,     0,     0,     0,     0,   130,     0,  1763,
    1764,     0,   564,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1765,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,     0,   565,     0,     0,     0,
    1766,     0,     0,   691,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   119,     0,     0,     0,  1187,  1188,  1189,     0,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,  1190,  1191,     0,
     119,  1192,   121,     0,  1193,     0,     0,     0,     0,     0,
       0,     0,  1194,     0,     0,     0,  1195,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1196,  1197,     0,     0,
       0,     0,     0,     0,  1198,  1199,     0,     0,     0,     0,
       0,   121,     0,     0,     0,  1200,     0,     0,     0,     0,
       0,   122,  1201,     0,     0,     0,   119,     0,     0,     0,
    1202,     0,     0,     0,  1203,  1204,     0,     0,  1205,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1206,     0,
     122,   119,     0,     0,     0,     0,     0,     0,     0,  1207,
     571,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1208,     0,     0,     0,     0,     0,     0,   124,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1554,   119,     0,     0,     0,     0,     0,     0,
    1209,     0,     0,     0,     0,     0,   122,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   124,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1210,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   122,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   129,     0,     0,     0,     0,   130,     0,     0,     0,
       0,     0,     0,  1211,     0,  1212,     0,     0,     0,     0,
       0,  1213,  1214,   124,     0,  2372,     0,     0,     0,     0,
       0,     0,     0,   122,     0,     0,     0,     0,  1215,  1216,
     129,     0,     0,     0,     0,   130,     0,     0,     0,     0,
    1217,  1218,     0,     0,     0,     0,     0,     0,   124,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   575,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1219,     0,  1220,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1221,     0,  1222,
     124,   130,     0,     0,     0,     0,  1223,     0,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   130,     0,     0,     0,
    1224,     0,     0,     0,     0,     0,     0,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,  1165,   119,   572,   130,     0,
    1166,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,     0,     0,     0,     0,     0,     0,  1599,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   122,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   124,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   130,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
    1600,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,     1,     0,     0,     2,     0,     0,     3,     0,     0,
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
      18,     0,     0,     0,     0,    19,     0,     0,     0,    20,
       0,     0,     0,    21,    22,     0,     0,     0,     0,    23,
      24,     0,     0,    25,     0,     0,     0,     0,     0,    26,
       0,     0,     0,     0,     0,    27,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    28,     0,     0,     0,
      29,    30,    31,     0,     0,    32,    33,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    34,     0,
       0,     0,    35,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    36,     0,    37,    38,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    39,
       0,    40,     0,     0,     0,     0,     0,     0,    41,     0,
       0,     0,    42,     0,   189,     0,    43,   190,    44,    45,
     191,    46,     0,     0,     0,     0,    47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   192,    48,     0,     0,   193,   194,   195,    49,     0,
       0,     0,     0,     0,     0,   196,     0,   197,     0,     0,
       0,     0,   198,     0,   199,   200,   201,    50,    51,     0,
       0,     0,   202,     0,   203,     0,     0,     0,     0,     0,
       0,    52,     0,    53,     0,     0,     0,     0,     0,     0,
      54,     0,     0,    55,    56,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   204,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    57,     0,     0,     0,   205,     0,
       0,     0,    58,     0,     0,     0,     0,   206,     0,   207,
     208,     0,   209,   210,     0,     0,   211,     0,     0,     0,
     212,     0,   213,     0,     0,     0,     0,     0,   214,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   215,   216,
       0,     0,     0,   217,     0,     0,     0,     0,     0,     0,
       0,   218,     0,     0,     0,   219,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   220,     0,   221,
       0,     0,     0,     0,     0,     0,   222,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   223,     0,   224,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   225,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     226,   227,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   228,     0,     0,     0,     0,     0,     0,     0,   229,
       0,     0,     0,     0,     0,   230,     0,   231,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   232
};

static const yytype_int16 yycheck[] =
{
       3,    56,   546,   800,  1051,  1924,  1685,  1926,    11,   795,
     796,  1188,     4,    16,    16,     4,  1155,  1701,   315,  1158,
       4,    16,     5,     3,     4,   501,     5,     5,     4,     5,
       3,     4,     5,     0,    37,   511,    27,     5,    65,  1723,
    1179,    26,    28,    46,     3,     4,     3,     4,    20,    49,
      65,     4,    55,     5,    46,    58,    37,    49,    61,    33,
      65,    52,    65,     4,    55,    68,     4,    65,  1347,    16,
      73,    74,  1351,    21,    77,    65,    67,    80,    81,     3,
       4,    84,     4,    15,    87,    88,     3,     4,    91,     5,
       5,    83,    18,    96,  1039,  1040,  1041,     3,     4,    91,
      13,    92,  1381,  1382,  1383,    54,     4,    42,   111,   112,
     113,   114,   115,   116,     3,     4,    16,    28,   105,   110,
      37,     4,    16,   245,   107,     3,     4,     3,     4,   132,
     148,  2868,   115,     4,   132,    21,    33,   122,   218,   131,
      94,   218,   132,     5,   125,     3,     4,   166,    60,     3,
       4,    33,    65,   138,   326,   131,   184,     5,   107,   176,
       5,    37,     3,     4,   167,  3064,   158,   153,   132,   118,
       3,     4,   112,  1118,    94,    48,     3,     4,   176,   191,
       3,     4,    34,   153,    32,     3,     4,    90,   200,   192,
       5,   208,    71,   130,   197,   161,    69,   264,    71,     4,
       5,   185,   151,     4,   107,   146,    60,    69,   285,    16,
      94,    48,    95,   293,     4,     5,   197,  3116,   199,    42,
     201,   202,   176,    21,    42,   217,   324,   349,    69,   199,
     147,   212,     3,     4,    71,   224,    15,   229,     4,   219,
      63,   135,   153,   232,   233,   240,   238,   239,   229,   132,
     235,    88,    18,   229,   170,  2992,   176,    65,   250,     4,
     252,   132,   238,   239,   282,   224,    71,  3004,   253,   272,
      71,   147,   212,     3,     4,   303,    65,   296,   178,     5,
     215,     3,     4,   286,   273,    65,   341,   224,   212,   281,
      95,   223,   176,  1090,    21,   189,   268,   324,   121,   106,
     303,   304,   215,   121,   137,   231,   212,    21,   260,   324,
     310,   298,   209,    21,   312,    60,   319,    27,   321,   324,
     218,   259,   312,   350,   272,   170,   131,   209,   331,   332,
     131,   334,   335,   206,   337,   350,    21,   249,     3,     4,
     308,   131,   337,   307,   347,   350,   240,   339,   322,   296,
     155,   188,    71,   334,   340,     4,   336,   360,   361,   326,
     836,     4,   345,   339,   356,   131,    14,    15,   283,   345,
     349,   349,   356,   289,    22,   328,   349,   336,   236,   336,
     356,   384,    30,     4,   387,   388,   272,   390,   301,   338,
      38,   394,   395,   395,   320,   336,   219,   389,   336,   312,
     273,   390,   405,   406,   396,   397,   328,   398,   393,   412,
       4,   121,    60,   389,   417,   418,     4,  1214,   715,   336,
     396,   397,   425,   347,   229,   322,   429,    27,   229,   340,
      78,   258,   348,   238,   239,  1232,   349,   238,   239,   229,
     322,   347,    68,   337,   289,   448,   449,   336,   238,   239,
      71,   324,   455,   456,   457,   458,   459,   460,   336,   462,
     336,   334,   465,   229,   149,   231,  1643,   391,   392,     4,
    2154,     4,   238,   239,   272,  1614,   186,    71,  1617,    61,
     483,   296,  1268,    71,   487,   391,   392,   258,   114,   492,
     493,   494,   495,   496,   497,  1672,   499,   334,   501,   502,
     503,     5,     3,     4,   249,     4,   236,   330,   511,   512,
     131,  2195,   327,   350,  1300,  1460,   324,    31,  1695,   500,
      46,   121,   998,  1468,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   339,   324,   258,   131,   339,    31,
     345,   132,   350,   131,   324,   272,     4,   212,    95,   339,
    1829,     3,     4,   218,   320,    11,   153,    35,   272,    42,
      65,   350,   272,   145,   272,   568,   569,  1043,    94,    65,
     350,     4,     5,   339,     4,   218,    42,   264,     4,   115,
      12,    94,    58,   586,   389,    37,   186,   272,   389,   394,
      42,   396,   397,     3,     4,   396,   397,    42,   131,   389,
     265,    57,   199,     5,     0,    31,   396,   397,   229,     4,
     102,   592,     4,   668,   324,    94,    11,   238,   239,   622,
     305,    97,    78,   389,   128,     4,   307,   132,   293,    77,
     396,   397,   131,    42,   277,   229,   132,    94,   121,   117,
     288,   229,   285,   269,   238,   239,     4,    85,     5,     5,
     238,   239,   108,   301,   302,   121,    48,    13,    14,    51,
     286,   287,   665,   176,   144,   646,   180,   171,   172,   121,
     296,    65,   272,   131,   130,    85,   121,   259,   134,    71,
     156,    60,   347,    65,    42,   333,   222,     4,    65,     5,
     182,   217,   274,   149,    27,   147,   229,   176,    90,    65,
      29,     3,     4,   758,   136,   238,   239,     3,     4,    65,
     713,  2630,   121,   217,  1511,   107,   307,   390,   339,   176,
     723,   113,   777,   224,   324,  1522,   391,   392,   115,     5,
     229,   245,   380,   381,   382,   166,   219,   385,   132,   238,
     239,   171,   172,   191,     4,   339,     4,   283,    13,    14,
     132,   339,   230,   219,   180,   132,   626,   195,   272,   629,
     630,   387,   388,   121,    60,   347,   132,   219,   389,   171,
     172,   229,   775,   165,   219,   396,   397,   281,   258,   427,
     238,   239,   214,     4,   190,   195,     4,   320,   121,     5,
     220,   794,    32,   285,   797,   389,   188,    13,    14,   291,
      65,   389,   396,   397,   308,   281,   339,   312,   396,   397,
     219,    69,    68,   171,   172,     5,   312,   820,     5,   245,
     251,    65,   825,   826,   827,   828,    13,    14,   831,   328,
     833,   279,   835,   836,   837,   222,   302,     5,   167,    65,
     339,    65,   290,    38,   324,     5,   272,   285,    69,    65,
    1326,   281,   258,    13,    14,    50,   389,   302,   114,   215,
     216,   219,   220,   396,   397,   296,   230,   196,     5,   101,
     249,   200,   927,   258,     5,   285,    13,    14,    65,   281,
     336,   339,   138,   219,   336,    16,    81,    27,   132,   121,
     389,     4,    48,   278,  2033,    65,   283,   396,   397,     4,
       0,  1948,    24,    25,     4,    65,   132,    65,   132,   912,
     341,   914,   304,   144,  2053,    71,   919,   920,   312,   922,
     923,   924,   925,   281,  2063,   258,   332,  2066,    65,   128,
     312,   389,    88,   262,  2073,   312,   939,   940,   396,   397,
     326,   333,   334,   946,   947,   301,   312,   171,   172,  2088,
     215,   216,  2091,   249,   346,  2132,   312,   313,   350,   190,
    2099,   317,   132,  2102,   967,   968,   969,   970,   971,    68,
     973,   166,   975,    71,   132,    34,   299,   306,     3,     4,
     212,   121,  1927,   105,   307,  2162,   315,   316,   191,  1465,
     993,   994,   995,   349,   997,   998,   999,    65,  1001,   215,
     216,  1787,    71,     4,  2283,  2284,  2285,  2286,  2287,  2288,
    2289,  2290,  2291,   269,  2191,   114,   211,     5,  2938,    47,
    1023,    96,  1025,    15,   388,   138,    27,   258,   215,   216,
     286,   287,   396,  1036,   398,    63,   301,  2957,    39,    65,
    1043,  1044,  1023,   324,    65,    95,  1049,   312,   313,    71,
     206,    52,    65,     4,     5,   215,   216,   281,   265,   707,
      88,   325,   299,  1066,   132,    66,    67,  1070,   312,    20,
     307,    13,    14,    96,     3,     4,   126,   725,   215,   216,
     108,  1084,  1085,  1086,   349,   301,   312,    71,   312,  1092,
      27,    71,    65,   324,  1097,   290,   312,   313,     3,     4,
     128,   317,     3,     4,   132,   300,   132,    65,    79,  1112,
    1165,   132,   137,    64,   301,    16,     5,   273,   258,   132,
      71,   234,  1163,    65,    32,   312,   313,    27,  1131,  1170,
     317,   387,   388,   349,    63,   163,   164,     4,     5,    13,
      14,   301,   312,  2320,     5,    89,     4,    13,    14,   100,
       4,   799,   312,   313,   312,   350,   804,   317,     5,   132,
     210,     4,   349,   143,   301,     3,     4,   105,   324,     4,
     269,    60,     5,   124,   132,   312,   313,   227,   334,     4,
     317,    70,     5,  3103,   121,    13,    14,   286,   287,   349,
    3110,    65,   143,     5,   174,     4,     3,     4,   226,    65,
      13,    14,    13,    14,     3,     4,  1164,  1210,   159,   237,
       5,    48,   349,  1171,    51,   166,     5,    44,    45,     5,
      19,   121,     5,   174,   168,     3,     4,     4,  1231,   230,
       3,     4,   137,    11,    71,     3,     4,    65,  1241,     4,
     241,   242,   243,   244,   312,     3,     4,   297,  3168,     4,
    3170,     4,    65,   190,    65,  1258,    63,  1260,     5,     3,
       4,    60,  1265,  1266,  1267,   913,  2945,    11,     4,    42,
     107,     5,  1275,   215,   216,  1278,   113,  1280,     4,   307,
     308,     3,     4,     5,    42,   236,   312,   267,   387,   388,
     190,   312,     3,     4,  1297,   345,  1299,     4,     5,   312,
      42,     3,     4,     5,  1307,  1308,   356,     3,     4,   260,
     109,   132,   256,   257,   265,   153,   267,  2456,  2263,  1322,
    1323,   258,     4,  1326,  1327,  1328,  2465,   271,   165,    71,
     978,  1334,   308,  1336,   335,  2474,  1339,     4,  1341,   312,
       4,   215,   216,     4,   295,   296,   326,     5,   121,   215,
     216,  1406,    63,   304,   312,     4,     5,   385,   258,   301,
     249,   199,     4,   121,   224,   107,   193,   194,     4,     5,
     312,   313,     4,   115,   318,   326,     4,   176,     4,   121,
     489,   490,    26,     4,  1387,     4,  2563,   215,   216,  1392,
    1146,  1147,  2569,  1396,     4,  1398,     4,  2574,   225,  1402,
       5,   143,   215,   216,   215,   216,     5,   349,     8,    10,
       3,     4,  2357,     6,     7,  1418,     5,  1420,   390,  1422,
    1423,  1424,  1425,   307,   166,  1428,  1429,   301,  1431,  1432,
     191,  1434,     4,  1436,   385,   301,  2381,  1418,   312,   313,
       4,  1444,   184,     3,     4,     5,   312,   313,  1451,    89,
     249,   200,  1455,  1456,  1457,   254,     3,     4,     5,     6,
       7,   219,  1465,  1466,    15,  2786,  1469,   304,  2789,     4,
    2791,   212,    23,   301,  1477,   349,  1479,   218,   122,  1482,
     222,   191,     4,   349,   312,   313,  2807,  2808,   301,  1470,
     301,   223,   223,     5,   138,     5,   333,   334,    29,   312,
     313,   312,   313,     4,   223,  2826,    90,  1488,     4,   346,
     213,     5,   213,   350,    71,    71,   100,    71,   258,    36,
     259,   349,     5,   107,   265,   267,     4,  1530,   168,  1532,
       4,     4,  1535,  1536,   178,  1538,   349,  1540,   349,     3,
       4,   283,     4,  1546,     8,     9,    10,  1550,     4,   223,
       5,    94,   293,    94,   296,    94,  1559,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,   382,   383,     5,   328,    94,     5,     4,
    1238,   235,     4,   318,     5,     5,    22,     4,    38,   116,
     342,     5,   344,   345,  2549,   107,   347,     4,     4,   253,
      50,     5,     4,  2790,   198,    16,   256,   257,     3,     4,
       5,     6,     7,    57,   141,   142,    16,    53,     4,  2806,
      56,   271,     4,   150,  2811,     4,   167,  1640,  1641,  1642,
     105,    81,     5,   385,    78,     5,  2591,    94,  1296,    94,
      94,   392,     4,  2598,     5,     5,   173,    94,  1639,  1662,
       5,    95,  1310,    89,  1667,   196,   183,   251,     4,   200,
       5,     5,     4,     4,   108,     5,     5,     4,   318,     3,
       4,     5,     6,     7,     5,     5,     5,    69,     4,     4,
    1693,  1694,     4,    11,   120,     5,   130,   123,    11,     4,
     134,     4,     4,  1706,   288,     5,     4,  1710,     4,     4,
       4,   318,     5,     5,  1717,   149,   185,     5,     4,   176,
       4,  2666,   176,  2668,   275,  2670,   166,   278,  2673,  1732,
    2675,   262,     5,     4,  2210,  1738,    40,   321,   328,  1742,
     295,  1744,  1745,    40,  1747,  1748,  1749,    37,  1751,   295,
     320,  1754,  1755,  1756,  1757,  1758,  1759,  1760,  1761,  1762,
    1763,  1764,  1765,   197,     5,     4,  1769,  1770,  1771,  1772,
       4,   211,     4,   309,     5,   306,  1779,  1780,     5,     4,
    1783,  1784,  1785,     5,   315,   316,  1789,  1790,     5,     4,
     309,  1439,  1440,  2269,     5,     5,     5,     5,     5,  1802,
    1803,     4,  1805,  1806,     4,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   383,     5,   260,   125,     5,   272,     5,     5,
       5,     5,     4,     4,     4,    71,     5,     5,     5,     5,
     290,   272,   115,  2329,   272,     5,   272,   115,     4,    42,
     300,    87,   115,   272,   272,     5,   240,    42,     5,   295,
      96,     4,   278,   240,  1877,     5,  1879,  1880,     5,   240,
    1883,   107,   240,   323,    22,  1888,  1889,  2832,  1891,  1892,
    1893,   331,  1895,  1896,    65,  1898,    59,  1900,  1901,     4,
    1903,  1904,     4,  1906,     4,  1908,   196,  1888,   198,   199,
     350,   201,   202,     5,  1917,    53,     5,   143,    56,     5,
       5,    59,  1925,  3100,     5,     4,   121,  1930,  1931,   121,
       4,    99,     5,  1936,     5,     5,     4,     0,     5,   107,
     166,     5,  1945,     4,   234,   336,     5,   115,     5,     4,
       4,    89,     5,     5,     5,     5,     4,   128,     4,   258,
       4,   132,    11,   253,   254,   133,    11,     5,     5,   259,
       5,     4,   140,   263,     4,     4,     4,   190,     5,  1960,
       4,  1984,   120,     5,     4,   123,   236,  1635,  1140,   272,
     272,  1972,   272,   272,   272,  1976,   222,   272,   166,   223,
     171,   172,   283,     4,     4,   176,  2009,  2010,     4,   177,
     401,  2014,     4,     4,   353,     5,  1664,  2020,     5,     5,
     309,  1669,  1670,     5,     5,     5,  1178,     4,     4,     4,
     320,     5,     4,   323,     4,   272,     5,     5,     5,     5,
       4,   267,   272,   272,   334,   353,   217,     4,     4,     4,
       4,     4,  1700,     4,   222,     4,   258,     5,     4,     4,
     258,     5,   230,     5,  1712,     5,   353,   357,   353,     4,
     296,  2547,  2548,  1721,  1722,  2551,  2552,   258,   258,  2555,
    2556,   258,     5,     4,     4,  1733,     5,     4,   101,     5,
       5,     4,   349,     5,     5,     4,   433,     5,     5,     4,
     349,     5,     5,     4,     4,   276,     5,     5,     5,     5,
     281,     4,   309,     5,     5,   283,   342,     4,   344,     5,
       5,     4,   260,     4,  2127,  2128,     4,  2130,   296,     5,
       5,     4,     4,   309,     5,     5,     4,   308,  2614,     5,
       5,   312,     4,   399,     5,     4,   314,     5,     5,     4,
       4,     4,     4,     4,   325,     5,     5,   295,     5,     5,
    2163,  2164,  2165,  2166,  2167,  2168,  2169,  2170,  2171,     5,
       5,     5,     5,     5,     4,   566,     4,   309,     5,  2976,
       4,     4,   573,     5,  2187,   576,  2189,   477,   326,     5,
     581,     5,     4,     4,   585,     5,     5,     5,     5,     4,
       4,   491,     5,     5,     5,     5,  2209,  2210,     4,     4,
     500,     5,  2215,     5,     5,     5,     4,   399,     5,     5,
       5,     5,     4,  2226,  2227,  2228,  2229,  2230,  2231,  2232,
    2233,  2234,  2235,     4,     4,  2238,  2239,  2240,  2241,  2242,
    2243,  2244,  2245,     5,  2247,  2248,  2249,  2250,  2251,     4,
    2253,     4,  2255,  2256,  2257,     4,   399,     5,     5,     5,
       5,     5,     4,     4,   399,     5,  2269,  2270,     5,  3066,
       4,     4,     4,    11,     5,     4,     4,   399,     5,   670,
       5,   571,   572,    19,     4,     4,   399,     5,     5,     5,
       4,     4,     4,     4,   584,     5,     5,     5,  2774,   589,
       5,     5,     5,  2779,     4,   399,     5,    43,   598,     4,
      46,     4,     4,     4,     4,   399,     5,     5,  2321,     5,
    2323,     4,  2325,     4,  2327,     5,  2329,  2330,     5,  2332,
       5,     5,     4,     4,  2337,  2338,     5,  2340,  2341,     5,
    2343,     5,  2345,     5,  2820,     4,     4,     4,    84,     5,
    2353,     4,  2355,     4,     4,    91,  2359,     4,     4,  2362,
       4,     4,     4,     4,     4,     4,   102,   103,     5,     5,
       5,     5,     4,   109,     4,     4,     4,   488,     5,     4,
     399,     5,     4,     4,  2365,     5,     5,     5,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,   688,   689,
     690,   691,   138,     5,     4,     4,  2409,     5,  1560,  1561,
    1562,     5,     4,     4,     4,     4,     4,     4,  1570,  1571,
    1572,   157,     5,     4,   326,     5,  2407,  1579,  1580,  1581,
       4,     4,  1584,  1585,     5,  1587,  1588,     4,     4,   175,
     176,   832,     5,     5,     5,     4,   182,     4,   839,     4,
       4,     4,  2507,     5,     5,     4,     4,     4,     4,     4,
       4,  3126,     5,     4,     4,     4,   326,     5,     5,  1621,
    1622,   207,     4,  1625,  1626,     5,     5,     5,     5,     4,
    2991,     5,     5,     5,     4,     4,  2801,     5,     5,     5,
    2974,  3066,  3062,  2141,   875,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   798,    -1,
    2513,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   254,    -1,
      -1,    -1,  2525,  2526,  2527,  2528,  2529,  2530,  2531,  2532,
    2533,  2534,  2535,    -1,  3078,  3079,    -1,    -1,  2541,    -1,
      -1,    -1,    -1,    -1,  2547,  2548,  2194,    -1,  2551,  2552,
      -1,    -1,  2555,  2556,  2557,  2558,  2559,  2560,  2561,  2562,
      -1,  2564,  2565,  2566,    -1,    -1,    -1,  2570,  2571,  2572,
    2573,    -1,    -1,  2576,   310,  2578,  2579,  2580,  2581,  2582,
      -1,  2584,    -1,    -1,  2587,  2588,    -1,    -1,   324,    -1,
     981,    -1,    -1,    -1,    20,    21,    22,    -1,    -1,   990,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2611,    -1,
      -1,  2614,  2615,    -1,    -1,    -1,  2619,    -1,    -1,    -1,
     356,  2624,  2625,    -1,  2627,    -1,    52,    53,    -1,    -1,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      -1,    67,    -1,    -1,    -1,    71,  1037,  1038,    -1,    -1,
      -1,  1042,    -1,    -1,  1045,    81,    82,    -1,    -1,    -1,
      -1,    -1,    -1,    89,    -1,    -1,  1057,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,  2681,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   982,   119,   120,    -1,    -1,   123,    -1,  2792,
      -1,    -1,    -1,    -1,    -1,    -1,   996,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,    -1,  2812,
      -1,  2814,    -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,
    2823,    -1,    -1,    -1,    71,    72,    73,    -1,    -1,    -1,
     166,    -1,    -1,    -1,    -1,  1035,    -1,    -1,    -1,    -1,
    2753,    -1,    -1,    -1,  2757,    -1,    -1,    -1,    -1,    -1,
      -1,    98,    -1,    -1,  2767,  2768,    -1,    -1,    -1,   195,
    2773,  2774,    -1,    -1,   111,  2778,  2779,    -1,    -1,   205,
      -1,  2784,    -1,    -1,  2787,  2788,    -1,    -1,    -1,    -1,
     127,    -1,    -1,    -1,    -1,  1186,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2809,  2810,    -1,    -1,
    2813,    -1,  2815,  2816,  2817,  2818,    -1,  2820,  2821,    -1,
      -1,    -1,  2825,   160,    -1,    -1,    -1,    -1,    -1,  1154,
      -1,    -1,   258,   170,   260,  2838,  1126,    -1,    -1,    -1,
     266,   267,    -1,  2936,  2937,  2848,    -1,  2940,    -1,  2942,
      -1,    -1,    -1,    -1,    -1,   192,    -1,    -1,   284,    -1,
      -1,    -1,  2955,  2956,   201,    -1,  2869,    -1,    -1,  2962,
     296,  2964,  2024,    -1,  2967,    -1,    -1,    -1,    -1,  2972,
    2973,    -1,    -1,    -1,   221,  2037,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2047,    -1,    -1,    -1,    -1,
     326,    -1,   328,    -1,    -1,    -1,    -1,    -1,  2911,    -1,
     247,    -1,    -1,  2916,   340,  2918,    -1,    -1,    -1,    -1,
      -1,  2924,    -1,  1213,    -1,   351,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2939,    -1,  3031,    -1,
      -1,  3034,    -1,    -1,  2592,    -1,  3039,    -1,    -1,    -1,
      -1,    -1,   289,    -1,    -1,  2958,    -1,   294,  3051,   385,
      -1,  3054,  2965,  3018,  3057,    -1,    -1,  2119,    -1,    -1,
      -1,    -1,    -1,    -1,   311,    -1,    -1,   314,    -1,  1269,
      -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,  2991,  1279,
      -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1404,    -1,    -1,    -1,    -1,    -1,  3022,
      -1,    -1,    99,   100,  3027,    -1,    -1,  3030,    -1,    -1,
     107,    -1,    -1,    -1,  3037,    -1,    -1,    -1,   115,    -1,
    3133,    -1,    -1,    -1,  3137,  3048,    -1,    -1,    -1,    -1,
    3053,  1442,    -1,    -1,    -1,    -1,   133,  1448,    -1,    -1,
      -1,    -1,    -1,   140,  3157,    -1,   143,  1458,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  3078,  3079,    -1,  3171,    -1,
      -1,  3174,  3175,    -1,    -1,    -1,    -1,    -1,    -1,   166,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     177,  3104,    -1,    -1,    -1,  3108,    -1,    -1,  3111,    -1,
    1400,    -1,    -1,    -1,  3095,    -1,    -1,    -1,    -1,  3122,
    3123,  3124,  3125,    -1,    -1,    -1,    -1,    -1,  1418,    -1,
      -1,  3134,    -1,    -1,    -1,  3138,    -1,    -1,    -1,    -1,
      -1,    -1,  3145,    -1,  3147,   222,    -1,  3128,    -1,    -1,
    3131,    -1,    -1,   230,    -1,    -1,    -1,    -1,    -1,  1449,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1459,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2827,
      -1,    -1,    -1,  2831,    -1,    -1,  1476,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1488,    -1,
      -1,    -1,    -1,  1493,    -1,  2358,   283,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   296,
      -1,    -1,  2375,  2376,  2377,    -1,    -1,  2380,    -1,  2382,
    2383,    -1,    -1,  2386,  2387,  2388,    -1,   314,  2391,  2392,
      -1,    -1,    -1,  2396,    -1,  2398,  2399,    -1,  2401,   326,
      -1,   328,    -1,  1578,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1590,    -1,  2419,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1612,  1613,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2953,    -1,    -1,   385,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1711,    -1,    -1,    -1,    -1,    -1,    -1,  2479,  2480,  2481,
    2482,  2483,  2980,  2485,  2486,    -1,    -1,    -1,  2490,  2491,
    2492,  2493,  2494,    -1,  2496,  2497,    -1,    -1,    -1,  1639,
      -1,    -1,    -1,    -1,    -1,    -1,  2509,    -1,    -1,  2512,
      -1,    -1,    -1,    -1,  2517,    -1,    -1,    -1,  2521,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1668,    -1,
      -1,    -1,    -1,    -1,  1775,    -1,    -1,  2540,    -1,    -1,
    1781,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1702,    -1,    -1,  1705,    -1,    -1,    -1,  1709,
      -1,    -1,    -1,    -1,    -1,  1715,  1716,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1724,    -1,    -1,    -1,    -1,    -1,
      -1,  1731,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
    3118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2634,    -1,    -1,  1774,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1885,    -1,  1786,    -1,    -1,  1890,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2667,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1922,  2684,    -1,    -1,    -1,    -1,  1928,    -1,    -1,
      -1,  2693,  2694,  2695,  2696,  2697,    -1,  2699,  2700,    -1,
    2702,  2703,  2704,  2705,  2706,    -1,  2708,  2709,    -1,  2711,
    2712,  2713,  2714,  2715,  1955,  2717,  2718,    -1,  2720,    -1,
      -1,  1962,    -1,    -1,    -1,    -1,    -1,    -1,  2730,  2731,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2741,
      -1,    -1,    -1,    -1,    -1,    -1,  2749,    -1,  1888,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2769,    -1,    -1,    -1,
      -1,    -1,  1912,    -1,  2777,    -1,    -1,  2780,  2781,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1929,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1942,    -1,  1944,    -1,    -1,    -1,    -1,     3,
       4,    -1,    -1,    -1,  1954,    -1,    -1,  1957,  1958,  1959,
    1960,  1961,    -1,  1963,    -1,    19,    -1,  1967,    -1,    -1,
      -1,    -1,  1972,  1973,  1974,  1975,  1976,  1977,    -1,    -1,
      -1,    -1,  1982,  1983,    -1,    -1,    -1,  1987,  1988,  1989,
    1990,    -1,    -1,  1993,  1994,    -1,    -1,    -1,    -1,    -1,
    2000,  2001,    -1,    -1,    -1,    -1,    -1,    -1,  2043,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2051,  2052,    -1,    -1,
      -1,  2883,    -1,  2124,    -1,    -1,  2061,  2062,    -1,    -1,
    2892,    -1,    -1,    -1,    -1,    -1,  2071,  2072,    -1,  2901,
      -1,  2903,    -1,    -1,    -1,  2907,    -1,    -1,    -1,  2912,
      -1,  2086,  2087,    -1,    -1,   109,  2157,    -1,    -1,    -1,
      -1,    -1,  2097,  2098,    -1,    -1,    -1,    -1,    -1,  2104,
    2933,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2114,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2196,  2197,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2208,    -1,    -1,
      -1,    -1,  2213,  2214,    -1,    -1,    -1,    -1,  2219,  2220,
      -1,    -1,   176,    -1,    -1,    -1,  2126,    -1,    -1,  2129,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2140,    -1,    -1,    -1,    -1,    -1,  3008,    -1,  3010,    -1,
    3012,    -1,    -1,  3015,    -1,  3017,  2156,  3020,  3021,    -1,
    3023,  2262,  3025,  3026,    -1,    -1,  3029,    -1,    -1,    -1,
      -1,    -1,  2273,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2188,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     254,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2326,    -1,  3090,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     4,    -1,  2347,    -1,    -1,    -1,
      -1,  2251,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2373,    -1,  2274,    -1,  3139,  2378,    -1,    -1,
      -1,    -1,    42,  2384,    -1,    -1,    -1,    -1,  2389,    -1,
      -1,    -1,  2393,    -1,  2395,    -1,  2397,    -1,    -1,  2400,
      60,  2402,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,
    2350,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2365,    -1,    -1,    -1,    -1,
      -1,   131,  2372,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2420,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2394,  2430,  2431,    -1,    -1,    -1,
      -1,    -1,    -1,  2403,    -1,    -1,  2441,  2407,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2450,   176,    -1,    -1,  2454,
    2455,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2463,  2464,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2472,  2473,    -1,
      -1,    -1,    -1,  2478,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2488,  2489,    -1,    -1,    -1,    -1,   219,
      -1,    -1,    -1,    -1,  2499,    -1,  2501,    -1,    -1,   229,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   238,   239,
      -1,    -1,  2583,    -1,    -1,    -1,    -1,    -1,    -1,   249,
      -1,    -1,    -1,    -1,   254,    -1,    -1,    -1,  2599,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2511,    -1,    -1,  2514,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2523,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2539,
      -1,  2642,  2542,    -1,    -1,    -1,    -1,    -1,  2649,    -1,
    2550,    -1,    -1,  2553,  2554,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2676,    -1,  2678,    -1,   339,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2593,  2594,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,   379,
     380,   381,   382,   383,    -1,    -1,    -1,    -1,    -1,   389,
      -1,    -1,    -1,    -1,    -1,    -1,   396,   397,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2746,    -1,  2647,    -1,    -1,
    2685,  2752,    -1,  2688,    -1,  2756,  2691,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2701,    -1,    -1,    -1,
      -1,  2772,    -1,    -1,    -1,  2710,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2719,     4,     5,    -1,    -1,    -1,
      -1,  2726,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,  2737,    -1,    -1,    -1,    -1,    -1,  2743,    -1,
      -1,    -1,    -1,    -1,    -1,     4,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2829,  2830,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,  2748,    -1,
      -1,    -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    -1,    82,    -1,    -1,    -1,    -1,    87,    -1,
      -1,    90,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,
      -1,   100,  2782,     3,     4,    -1,    -1,    -1,   107,    -1,
      -1,    -1,    -1,  2793,    -1,    -1,   115,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     4,    -1,    -1,    -1,    -1,    -1,
     109,    41,    -1,    -1,   143,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2873,    -1,
      60,    -1,    -1,  2944,    -1,  2880,    -1,   166,    -1,    -1,
      -1,    -1,    -1,  2853,  2889,    -1,    -1,  2857,    -1,    -1,
      -1,    -1,    -1,  2898,    -1,   184,    -1,    -1,    -1,  2904,
      60,    -1,    -1,  2908,    -1,    -1,    -1,    -1,   197,   198,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,    -1,   109,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   222,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2914,  2915,    -1,  2917,    -1,   109,
      -1,    -1,  2922,  2923,    -1,    -1,    -1,    -1,    -1,  2929,
      -1,    -1,   251,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   265,    -1,   267,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   176,  3058,    -1,    -1,
      -1,    -1,    -1,    -1,   283,   254,  2966,    -1,    -1,   288,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   296,    -1,    -1,
      -1,  3082,    -1,    -1,    -1,   304,   176,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2998,   219,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   326,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   341,   342,    -1,   344,    -1,    -1,  3129,   249,
      -1,    -1,    -1,    -1,   254,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   265,    -1,    -1,    -1,  3150,
      -1,    -1,  3153,    -1,    -1,    -1,    -1,    -1,    -1,   249,
      -1,    -1,    -1,    -1,   254,    -1,   385,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,   382,   383,  3095,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  3114,    -1,   336,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  3128,    -1,
      -1,  3131,    -1,    -1,    -1,    -1,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,   379,
     380,   381,   382,   383,    -1,    -1,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,   379,
     380,   381,   382,   383,    22,    -1,    -1,    -1,    -1,    27,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    53,    -1,    55,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    71,    81,    82,    -1,    -1,    76,    -1,    -1,
      17,    89,    19,    -1,    92,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      99,   100,   110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     109,   119,   120,    -1,    -1,   123,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   109,    -1,    -1,    -1,    -1,   176,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   195,   125,    -1,
      -1,    -1,   191,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   211,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   236,    -1,   176,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   260,    -1,    -1,   254,    -1,    -1,   266,   196,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   284,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   295,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   310,    -1,    -1,    -1,    -1,    -1,   254,    -1,   327,
     328,    -1,   321,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   351,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,   382,   383,    -1,   385,    -1,    -1,    -1,
     398,    -1,    -1,   330,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    20,    21,    22,    -1,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   382,   383,    52,    53,    -1,
      19,    56,    60,    -1,    59,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    -1,    -1,    -1,    71,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    89,    90,    -1,    -1,    -1,    -1,
      -1,    60,    -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,
      -1,   109,   107,    -1,    -1,    -1,    19,    -1,    -1,    -1,
     115,    -1,    -1,    -1,   119,   120,    -1,    -1,   123,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,    -1,
     109,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   154,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   166,    -1,    -1,    -1,    -1,    -1,    -1,   176,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    60,    19,    -1,    -1,    -1,    -1,    -1,    -1,
     195,    -1,    -1,    -1,    -1,    -1,   109,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   222,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   249,    -1,    -1,    -1,    -1,   254,    -1,    -1,    -1,
      -1,    -1,    -1,   258,    -1,   260,    -1,    -1,    -1,    -1,
      -1,   266,   267,   176,    -1,   101,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   109,    -1,    -1,    -1,    -1,   283,   284,
     249,    -1,    -1,    -1,    -1,   254,    -1,    -1,    -1,    -1,
     295,   296,    -1,    -1,    -1,    -1,    -1,    -1,   176,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   319,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   326,    -1,   328,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   342,    -1,   344,
     176,   254,    -1,    -1,    -1,    -1,   351,    -1,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   381,   382,   383,   254,    -1,    -1,    -1,
     385,    -1,    -1,    -1,    -1,    -1,    -1,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,   382,   383,   176,    19,   330,   254,    -1,
     181,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,    -1,    -1,    -1,    -1,    -1,    -1,   181,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   381,   382,   383,   109,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   176,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   383,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   254,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
     384,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,    43,    -1,    -1,    46,    -1,    -1,    49,    -1,    -1,
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
     152,    -1,    -1,    -1,    -1,   157,    -1,    -1,    -1,   161,
      -1,    -1,    -1,   165,   166,    -1,    -1,    -1,    -1,   171,
     172,    -1,    -1,   175,    -1,    -1,    -1,    -1,    -1,   181,
      -1,    -1,    -1,    -1,    -1,   187,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   198,    -1,    -1,    -1,
     202,   203,   204,    -1,    -1,   207,   208,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   220,    -1,
      -1,    -1,   224,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   246,    -1,   248,   249,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   261,
      -1,   263,    -1,    -1,    -1,    -1,    -1,    -1,   270,    -1,
      -1,    -1,   274,    -1,    43,    -1,   278,    46,   280,   281,
      49,   283,    -1,    -1,    -1,    -1,   288,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,   304,    -1,    -1,    74,    75,    76,   310,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    -1,    86,    -1,    -1,
      -1,    -1,    91,    -1,    93,    94,    95,   329,   330,    -1,
      -1,    -1,   101,    -1,   103,    -1,    -1,    -1,    -1,    -1,
      -1,   343,    -1,   345,    -1,    -1,    -1,    -1,    -1,    -1,
     352,    -1,    -1,   355,   356,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   386,    -1,    -1,    -1,   157,    -1,
      -1,    -1,   394,    -1,    -1,    -1,    -1,   166,    -1,   168,
     169,    -1,   171,   172,    -1,    -1,   175,    -1,    -1,    -1,
     179,    -1,   181,    -1,    -1,    -1,    -1,    -1,   187,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   207,   208,
      -1,    -1,    -1,   212,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   220,    -1,    -1,    -1,   224,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   246,    -1,   248,
      -1,    -1,    -1,    -1,    -1,    -1,   255,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   281,    -1,   283,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   310,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     329,   330,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   340,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   348,
      -1,    -1,    -1,    -1,    -1,   354,    -1,   356,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   394
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    43,    46,    49,    63,    69,    70,    74,    75,    76,
      84,    91,    93,    94,   103,   104,   129,   139,   152,   157,
     161,   165,   166,   171,   172,   175,   181,   187,   198,   202,
     203,   204,   207,   208,   220,   224,   246,   248,   249,   261,
     263,   270,   274,   278,   280,   281,   283,   288,   304,   310,
     329,   330,   343,   345,   352,   355,   356,   386,   394,   401,
      71,    11,    57,    78,   108,   130,   134,   149,   336,   438,
       3,     4,   224,   336,   402,   443,   212,   218,   265,   293,
     347,   392,   445,   326,     4,    42,   121,   171,   172,   219,
     220,   281,   450,    29,   167,   196,   200,   262,   306,   315,
     316,   417,   452,    90,   100,   107,   198,   251,   288,   321,
     453,    42,    63,   121,   219,   330,   402,   463,     4,    19,
      42,    60,   109,   131,   176,   219,   229,   238,   239,   249,
     254,   339,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,   389,   396,   397,   404,   412,   413,   414,   465,    34,
     466,   404,    46,    49,    83,    91,   158,   217,   250,   252,
     281,   356,   403,   404,    69,   402,   468,   161,   469,    43,
      46,    49,    70,    74,    75,    76,    84,    86,    91,    93,
      94,    95,   101,   103,   138,   157,   166,   168,   169,   171,
     172,   175,   179,   181,   187,   207,   208,   212,   220,   224,
     246,   248,   255,   281,   283,   310,   329,   330,   340,   348,
     354,   356,   394,   470,    90,   107,   521,    19,    43,    46,
      84,    91,   102,   103,   109,   138,   157,   175,   176,   182,
     207,   254,   310,   324,   356,   524,    71,   404,    65,   324,
     350,   609,    65,   324,   350,   608,    95,   126,   210,   227,
     297,   345,   356,   530,    15,     4,    48,    51,    71,    90,
     107,   113,   165,   188,   304,   333,   334,   346,   350,   590,
      26,   122,   138,   178,   235,   253,   533,   264,   551,     5,
      71,    95,   155,   345,   394,   404,   552,     5,   553,    61,
     145,   259,   274,   347,   570,    48,    69,    71,   206,   273,
     324,   334,   591,   324,   607,    71,   230,   388,   396,   398,
     592,    41,   219,   265,   336,   402,   412,   414,   593,     5,
     345,   356,   404,   596,    77,   191,   279,   290,   597,     4,
     598,    95,   570,     4,    69,   605,    65,   324,   350,   606,
     219,   336,   402,   610,    26,   122,   138,   235,   253,   393,
     612,    54,   107,   118,   151,   338,   634,   635,     4,    38,
      50,    81,   166,   211,   290,   300,   323,   331,   350,   431,
       4,   138,   234,   636,   336,   402,   638,    15,    23,   275,
     278,   413,   639,   264,   643,   336,   402,   644,     0,     5,
     404,    63,   402,   439,   307,     5,     4,   336,   402,   440,
       5,    33,   322,   441,   137,   402,   442,   390,   137,   402,
     444,   402,     4,   218,   277,   285,   448,   212,   347,   391,
     392,   402,   447,   404,   153,   199,   446,   224,   402,    85,
     195,   285,   402,   449,     5,   402,   402,   402,     4,   171,
     172,   220,   281,   451,     4,   402,   402,     5,   260,   454,
       4,    32,   455,     5,   456,     5,   460,     5,    32,   461,
       4,    69,   462,   402,     8,     9,    10,   402,   408,   409,
     410,   411,   402,   402,    42,   121,   219,   402,   464,   402,
     219,   412,   414,   402,    36,   116,   141,   142,   150,   173,
     183,   419,   402,     4,   404,   404,   404,   404,   404,   404,
     404,   404,   404,   404,   128,    71,    57,    78,    95,   108,
     130,   134,   149,   197,   473,   130,   224,   475,   212,   218,
     265,   293,   347,   391,   392,   402,   457,   476,   326,   479,
     191,   480,   191,   200,   482,    70,    71,    76,    99,   100,
     191,   211,   236,   310,   321,   385,   412,   484,   402,   414,
     487,    63,   330,   412,   488,   319,   412,   414,   489,    34,
     490,   412,   414,   491,     4,   412,   414,   492,    47,    63,
      88,   108,   128,   132,   163,   164,   226,   237,   307,   308,
     385,   496,   245,   349,   502,    71,     5,    96,    65,   324,
     350,   510,    65,   324,   350,   509,     4,    95,   132,   494,
       5,    70,   414,   493,    15,    48,    71,    88,   188,   334,
     350,   503,   570,    48,    71,    88,   206,   273,   324,   334,
     504,   324,   508,    71,   265,   506,   325,    65,   324,   350,
     507,    21,   149,   272,   305,   511,    38,    50,    81,   166,
     211,   290,   300,   350,   512,   414,    96,    15,   223,   519,
     412,   522,    71,    79,   525,    32,   526,    46,    94,   217,
     527,   166,   251,   296,   341,   528,   412,    17,    62,   125,
     196,   330,   412,   529,     5,     5,   170,   289,   348,   412,
       4,     5,   170,   289,   412,     4,     4,   218,   532,     5,
       4,     4,   132,   402,     4,    48,    51,    71,   107,   113,
     165,   304,   333,   334,   346,   350,    71,    72,    73,    98,
     111,   127,   160,   170,   192,   201,   221,   247,   289,   294,
     311,   314,   416,     5,     4,   402,   404,     5,   171,   172,
     281,   534,     5,   536,     5,   128,   171,   172,   217,   281,
     308,   537,   101,   121,   212,   550,     5,   548,     5,   308,
     549,     4,     5,   404,   404,   402,   402,     5,     4,     5,
      20,    64,    71,    80,    82,    87,    90,    96,   100,   107,
     115,   124,   143,   166,   184,   197,   198,   222,   251,   265,
     267,   283,   288,   296,   304,   326,   341,   342,   344,   385,
     554,   416,     5,     4,   224,   232,   233,   273,   390,   415,
     402,   412,   402,   412,     5,   402,    42,   121,   402,   595,
     404,   402,   412,   414,   594,   402,   419,   402,     4,   413,
      58,    97,   156,   281,   599,     4,     4,   402,     4,   166,
     296,   600,     5,   412,     4,    42,   121,   402,   611,   402,
     105,    65,   132,   171,   172,   281,   312,   614,   132,   633,
      65,   128,   132,   171,   172,   176,   217,   276,   281,   308,
     312,   325,   615,   616,    65,   132,   312,   632,     5,    65,
     132,   312,   613,     4,    35,   117,   230,   604,    71,   404,
     434,    71,   404,   435,    71,   404,   436,    12,   136,   214,
     603,   402,    18,   231,   320,   404,   432,     4,   402,   258,
     402,   437,   402,   308,     4,   402,   402,     4,   259,   336,
     642,     4,   328,   640,     4,   328,   641,     4,   419,   137,
     402,   645,   402,   402,     4,     5,   402,    11,   402,   402,
     404,   402,    31,   102,   182,   285,   291,   418,   418,     4,
     224,   402,   402,     4,     4,     4,   402,   402,   402,   402,
     402,   402,     4,   402,     4,   402,     4,     4,     4,     5,
       5,   412,     5,     5,    69,   402,   402,   408,   410,   410,
     412,   402,   402,   402,   402,   402,   402,   402,   412,   414,
     411,   402,   402,   411,   402,     5,   307,   112,   212,   474,
     390,   218,   285,   477,   191,    85,   195,   285,   478,   153,
     199,   458,   458,     4,   481,     4,   483,   218,   293,   485,
     200,   486,   191,     4,   419,   402,   402,   412,   412,   419,
     419,   419,   412,   419,   402,   412,     4,   499,     4,   414,
     497,   223,     4,   185,   356,   498,   223,   412,     4,   146,
     336,   501,     5,     5,   471,     4,   223,   148,   282,   405,
     402,     4,   505,   505,   505,   505,     4,     5,    20,    64,
      71,   100,   124,   143,   159,   166,   174,   236,   260,   265,
     267,   295,   296,   304,   326,   385,   564,   414,   213,   213,
      71,   515,    71,   516,    71,   517,    18,   231,   320,   513,
     258,   518,   402,     5,   472,   259,   520,   413,   419,     5,
     412,   412,   412,   412,     4,     4,     4,   404,     4,     4,
     223,   402,   416,     5,   402,   404,    13,    14,    65,   215,
     216,   301,   312,   313,   349,    94,    94,    94,     5,     5,
      13,    14,    65,   215,   216,   301,   312,   313,   317,   349,
      94,    94,   176,    94,   176,   176,   181,   413,   540,   545,
      94,   176,     5,   538,     4,     4,    13,    65,   215,   301,
     312,   349,     5,     5,     4,   402,   413,    20,    21,    22,
      52,    53,    56,    59,    67,    71,    81,    82,    89,    90,
     100,   107,   115,   119,   120,   123,   143,   154,   166,   195,
     222,   258,   260,   266,   267,   283,   284,   295,   296,   326,
     328,   342,   344,   351,   385,    71,    87,    96,   107,   143,
     166,   222,   267,   296,   342,   344,   318,     4,    31,   180,
     245,   272,   557,     5,    68,   114,   269,   286,   287,   387,
     388,   563,   107,   555,     4,    16,   296,   561,    42,   121,
     219,   562,     4,     5,    16,   240,   337,   402,   296,   563,
     571,   138,   563,   572,    37,    42,   121,   147,   219,   336,
     402,   573,   412,   404,    99,   107,   115,   133,   140,   166,
     177,   222,   230,   283,   296,   314,   576,    42,   121,   219,
       5,   296,   327,   580,    16,   135,   189,   240,   337,   581,
     328,   404,   582,     5,   107,   115,   345,    16,    16,     4,
     402,   402,   402,   402,   402,   402,   419,   402,   402,   411,
     402,     4,   419,     4,    42,   121,   219,   302,   601,    42,
     121,   219,   302,   602,     4,   105,     5,     5,    94,    94,
      94,     4,     5,     5,    94,     5,    94,   176,    94,   176,
     616,    65,   132,   176,   312,   620,    65,   132,   312,   631,
      94,   176,    65,   132,   312,   618,     4,    65,   132,   312,
     617,     5,     5,     4,     5,     5,     4,     4,     5,     5,
       5,   402,   320,   404,   433,   402,   402,   402,   402,     4,
     402,   637,   402,   402,   413,    69,     4,     4,     5,     4,
       4,     5,     4,   105,   298,   420,   402,   402,    11,     5,
      11,   402,   402,    11,     4,    11,     4,     4,   402,   402,
     402,   402,   402,     4,   402,     5,   402,     4,   404,     4,
       4,   419,   412,     4,   419,   402,   402,   402,   412,   402,
     411,   402,   402,     5,     5,   402,   414,   402,   412,   402,
     419,   419,   420,   420,   420,   419,   411,   402,   419,   402,
     405,   500,   185,     5,     4,   419,   176,   176,     4,     5,
       4,     4,   402,   495,    40,    40,   402,    20,    21,    22,
      52,    53,    56,    63,    67,    71,    81,    82,    89,   100,
     119,   120,   123,   143,   154,   166,   195,   205,   258,   260,
     266,   267,   284,   296,   326,   328,   340,   351,   385,    71,
     143,   174,   267,   326,   318,    31,   180,   245,   272,   565,
     402,   236,   402,   566,    16,   402,   295,   576,   295,   236,
     402,   567,   328,   568,    16,   106,   402,   320,   514,   402,
       5,   420,     4,     4,    60,   412,     4,     5,   531,   402,
       5,     5,     5,   176,   208,   424,   424,   184,   303,   422,
       4,     4,     5,     5,   535,   535,   535,   309,   309,     5,
       5,     5,    16,   178,   423,   423,   422,     4,     4,   422,
       5,     5,   539,     5,   546,     5,   547,   546,   547,   181,
     384,   413,   543,     5,   542,     5,   546,   547,     5,    13,
      14,    65,   215,   216,   301,   312,   313,   317,   349,     4,
       4,     5,     5,   424,   422,     4,     5,     5,   419,    89,
     168,   256,   257,   271,   318,   428,     6,     7,   402,   407,
     272,   272,   272,   115,    42,    71,   107,   115,   121,   143,
     166,   184,   222,   267,   283,   296,   328,   342,   344,   345,
     385,   556,   272,     5,    27,   121,   186,   272,   324,    28,
     153,   340,   115,    22,    53,    56,    89,   120,   123,   260,
     295,     4,    22,    53,    56,    59,    89,   120,   123,   260,
     295,   326,    42,   272,   272,   115,     5,   132,   307,   240,
      27,   121,   258,    37,   147,   336,   402,   299,   307,   258,
     278,   412,   576,    42,   144,   258,   324,   278,   240,     5,
       5,   283,    27,   121,   258,     4,     5,     5,   240,    37,
     147,   336,   402,   576,   240,    59,   404,     4,     4,   402,
       5,   349,    22,    27,    52,    53,    55,    56,    67,    81,
      82,    89,    92,   110,   119,   120,   123,   154,   195,   260,
     266,   284,   295,   327,   328,   351,   398,   558,     4,   402,
     402,   402,   402,   402,   563,   412,     5,     4,     5,   402,
     402,   412,   402,   404,   402,   402,   563,     5,     5,   402,
     402,   404,     5,    16,     5,     5,   402,   402,   411,   402,
     402,     4,   402,   402,   121,   402,   402,   121,     4,    44,
      45,   193,   194,   225,   430,   430,    65,   132,   312,   628,
      65,   132,   312,   625,    65,   132,   312,   622,   430,     5,
      65,   132,   312,   619,    65,   132,   312,   630,    65,   132,
     312,   629,    65,   132,   312,   627,    65,   132,   312,   626,
       5,     5,    65,   132,   312,   621,     4,     5,     5,     4,
      65,   132,   312,   624,    65,   132,   312,   623,     5,     5,
       4,     5,     5,     4,   430,   430,   430,   402,   402,   402,
     402,     4,   412,   402,   419,   413,     5,     5,    11,   402,
     412,   414,   402,    11,   402,   402,   402,    63,   402,     4,
     402,   402,     4,   402,   402,     5,   402,     5,   402,    49,
     310,   459,     5,   404,   404,   419,     4,   402,     4,     4,
       4,   419,   412,   402,   402,   402,   402,   419,   412,   420,
     411,   402,     4,   420,   402,     4,   414,     5,    24,    25,
     105,   421,     4,   412,   402,   402,     4,   402,     5,    89,
     168,   256,   257,   271,   318,   412,   414,   272,   272,   272,
      21,   272,   412,   272,    27,   121,   186,   272,   324,    28,
     153,   340,    21,   272,   272,   272,    21,   272,   132,   307,
      27,   121,   190,   258,   190,   299,   307,   258,   190,   258,
     332,   576,   144,   190,   258,   324,     4,   283,    27,   121,
     190,   258,   576,   236,    16,   395,   402,   402,   402,   402,
     402,   402,   223,   402,   402,    20,   268,   523,     4,     4,
     402,   424,   424,   424,     4,   424,   424,   424,    13,    14,
      65,   215,   216,   301,   312,   313,   349,   423,   424,   424,
     424,   424,   424,     4,   424,   424,     4,   423,    13,    14,
      65,   215,   216,   301,   312,   313,   349,     5,    13,    14,
      65,   215,   216,   301,   312,   313,   317,   349,    13,    14,
      65,   215,   216,   301,   312,   313,   349,     5,   541,     5,
     544,     5,     5,    13,    14,    65,   215,   216,   301,   312,
     313,   317,   349,     5,    13,    14,    65,   215,   216,   301,
     312,   313,   317,   349,   309,     5,     5,     5,   423,   423,
     422,     4,     4,   422,     5,     4,     4,   424,   424,     4,
     424,   424,     5,   404,   412,   414,     5,   402,   402,     5,
     402,     5,   407,   115,   222,   283,   115,   222,   283,     5,
     402,   404,     4,    27,    39,    52,    66,    67,   230,   241,
     242,   243,   244,   335,   425,     5,   402,   412,   404,   404,
       5,     5,   407,   272,   272,    21,   272,    21,   272,   272,
      21,   272,   353,   353,     4,     4,     4,     4,   556,     4,
       4,     4,   353,   353,     4,     5,     4,   402,     5,   402,
       5,   407,     5,     4,   404,   425,   412,   412,   402,    27,
      52,    55,    67,    92,   110,   398,   426,     4,   412,   402,
     419,   404,     5,   412,   412,   402,   404,   404,   425,   412,
     412,   402,   404,     5,   402,     5,   402,   258,   258,   402,
     402,   258,   402,   258,   402,   402,     4,   559,   402,   258,
     258,   402,   402,   402,   402,   402,    60,   402,   402,   402,
     402,     5,   349,   402,   560,   402,   402,   258,   402,   402,
     402,   402,   412,   419,     5,     4,     4,   402,   402,   419,
     402,   402,   402,   412,   563,   402,   402,     5,     4,   402,
     402,   402,   402,     5,     5,     4,     5,     5,     4,     5,
       5,     4,   430,     5,     5,     4,     5,     5,     4,     5,
       5,     4,     5,     5,     4,     5,     5,     4,     4,     4,
       5,     5,     4,     4,     5,     5,     4,     5,     5,     4,
     402,   402,   402,   402,   419,   402,   412,   414,   402,   419,
     402,   402,   402,   402,   402,     5,   402,   402,   402,     4,
     402,   402,     5,   402,     5,   402,     4,   412,     4,     4,
     402,   419,   200,   417,   402,   417,   420,   419,   412,   402,
     402,     4,   402,   412,   412,   402,   405,     5,     5,     5,
       5,     5,   101,   412,   419,   412,   412,   412,   412,   414,
     412,   419,   412,   412,   412,   414,   412,   412,   412,   412,
     414,   412,   412,   412,   402,   412,   412,   412,   412,   412,
     412,   412,   412,   101,   402,   402,     4,   402,     5,   402,
     424,     5,     5,     5,   422,     4,     4,     5,   424,   423,
       4,   424,     5,     5,     5,   423,   423,   422,     4,     4,
       5,   309,     5,     5,     5,   423,   423,   422,     4,     4,
     422,     5,     5,     5,     5,   423,   423,   422,     4,     4,
       5,    13,    14,    65,   215,   216,   301,   312,   313,   349,
      13,    14,    65,   215,   216,   301,   312,   313,   349,    13,
      14,    65,   215,   216,   301,   312,   313,   349,   309,     5,
       5,     5,   423,   423,   422,     4,     4,   422,     5,   309,
       5,     5,     5,   423,   423,   422,     4,     4,   422,     5,
     423,     4,     4,   423,     4,     4,   424,     5,   419,   412,
     402,   402,   412,   402,     5,   407,     5,   412,   404,   425,
       5,   412,   419,     5,   407,   402,   402,   402,   402,   402,
     402,   402,   402,   402,     4,     4,     5,     4,     4,   402,
     412,   402,     5,   407,     4,   404,   425,   419,   419,   419,
     402,   411,   419,   419,   402,   419,   419,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   569,   577,   402,
     402,   402,   402,   402,   402,   402,   402,   349,   402,   402,
     402,   402,   402,   412,     5,   402,   402,   402,   402,     4,
       4,   419,   420,     5,     5,   411,   402,     4,   419,   412,
       4,   430,   430,   430,   430,   430,   430,   430,   430,   430,
     407,   402,   402,   402,   419,   402,   411,   402,   402,    11,
       5,     5,   402,   402,   402,   402,     5,   402,     4,   402,
       4,   419,     4,     4,   412,   402,   402,   420,   421,   402,
       5,   402,   412,   414,     5,     5,     5,     5,     5,   412,
     419,   421,   421,   421,   419,   421,   420,   421,   421,   419,
     421,   421,   421,   419,   421,   421,   419,   412,   419,   421,
     419,   421,   421,   419,   421,   419,   412,     4,   412,   414,
       5,   402,     4,   424,   423,     4,   423,   423,     4,     4,
     423,     4,   423,     5,     5,     5,   423,   423,   422,     4,
       4,     5,     5,     5,     5,   423,   423,   422,     4,     4,
       5,     5,     5,     5,   423,   423,   422,     4,     4,     5,
     423,   424,   424,   424,   424,   424,     4,   424,   424,     4,
     423,   423,   424,   424,   424,   424,   424,     4,   424,   424,
       4,   423,   423,     4,     4,     4,   413,   421,     4,   412,
     421,   402,   412,     4,   421,   421,   412,     4,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   412,
     421,   402,   412,     4,   411,   411,   420,   412,   411,   411,
     412,   412,   411,   411,   402,   402,   402,   402,   402,   402,
     407,   402,   402,   402,    59,    71,   100,   143,   326,   328,
     385,   574,   575,   576,   588,   589,   407,   402,   402,   402,
     402,   407,     5,   402,     5,   402,   402,   402,   402,   402,
     419,   402,   349,   406,   407,   402,   402,   420,   404,   412,
     412,   420,   419,     4,   402,   411,   402,    63,   402,     5,
       5,     4,     4,   402,   402,     4,   402,     4,   417,   421,
       5,   419,     4,     5,     4,     5,   412,     5,   419,   420,
     421,   420,   420,   420,   420,   419,     5,   419,     4,   402,
     424,   423,   423,     4,   423,   424,   424,   424,   424,   424,
       4,   424,   424,   423,   424,   424,   424,   424,   424,     4,
     424,   424,   423,   424,   424,   424,   424,   424,     4,   424,
     424,   423,   424,   423,     4,   424,   424,   423,     4,   424,
     423,   419,   412,   421,     4,   419,   402,   419,   402,   402,
     402,   421,     4,   419,   402,   411,     5,   349,   421,   402,
     411,   421,   421,   412,   402,     4,   427,   427,   402,   402,
     427,   407,   427,   577,   412,   399,   399,   399,   399,   399,
     399,   399,   575,   399,   407,   427,   427,   402,   402,   407,
       4,   577,   402,   577,   402,   402,   402,   402,   411,   402,
       5,   577,   402,   427,   404,   578,   579,   419,   419,   404,
     420,     4,     5,   402,     5,     4,     4,     4,     4,     4,
       4,   402,     4,    33,   209,   322,   467,   412,     5,    33,
     209,   322,   429,   412,     4,   467,   402,   423,   423,   424,
     423,   424,   423,   424,   424,   423,   424,   423,   402,   421,
     412,   412,   402,   412,   402,   412,   412,   402,     5,   412,
     421,     4,   577,   577,   406,   402,   577,     4,   577,   419,
     556,     5,     4,     5,     5,     5,     4,   404,     4,   577,
     577,   406,   402,     4,     4,   577,   577,   402,   412,   577,
     577,   577,   578,   585,   586,   576,   583,   584,   404,     4,
       5,     5,     4,     4,     4,   212,   347,   392,   402,   457,
     467,     4,   412,   467,     4,   424,   424,   424,   424,   424,
     413,   421,   421,   402,   421,     4,   421,   421,   402,   421,
     402,   577,   577,     4,   402,   577,     5,     4,   402,   577,
       4,   402,   577,   577,   419,   585,   587,   588,   399,   584,
       5,     5,   402,   458,   402,   458,   419,   421,     4,   412,
     414,     4,   407,   406,   402,     5,   402,   406,   402,   412,
     588,   404,     5,     5,   402,   402,   402,   402,   429,     5,
     412,   414,   419,   412,   414,   577,   402,     4,   577,   402,
     421,     5,     5,   402,     5,   402,   419,   419,     4,   577,
       4,     5,     5,     5,   406,   406,   577,   577,   577
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
#line 509 "frame/parser.Y"
    {fr->bgColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 5:
#line 510 "frame/parser.Y"
    {fr->useBgColorCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 7:
#line 512 "frame/parser.Y"
    {fr->centerCmd();;}
    break;

  case 8:
#line 513 "frame/parser.Y"
    {fr->clearCmd();;}
    break;

  case 10:
#line 515 "frame/parser.Y"
    {fr->colorbarTagCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 17:
#line 522 "frame/parser.Y"
    {fr->DATASECCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 23:
#line 528 "frame/parser.Y"
    {fr->hideCmd();;}
    break;

  case 24:
#line 529 "frame/parser.Y"
    {fr->highliteCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 25:
#line 530 "frame/parser.Y"
    {fr->highliteColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 29:
#line 534 "frame/parser.Y"
    {fr->irafAlignCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 38:
#line 543 "frame/parser.Y"
    {fr->nanColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 42:
#line 547 "frame/parser.Y"
    {fr->queryCursorCmd();;}
    break;

  case 45:
#line 550 "frame/parser.Y"
    {fr->resetCmd();;}
    break;

  case 51:
#line 556 "frame/parser.Y"
    {fr->showCmd();;}
    break;

  case 53:
#line 558 "frame/parser.Y"
    {fr->threadsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 55:
#line 560 "frame/parser.Y"
    {fr->unloadFitsCmd();;}
    break;

  case 57:
#line 562 "frame/parser.Y"
    {fr->msg("Frame 1.0");;}
    break;

  case 62:
#line 569 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 63:
#line 570 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 64:
#line 573 "frame/parser.Y"
    {yydebug=(yyvsp[(1) - (1)].integer);;}
    break;

  case 65:
#line 574 "frame/parser.Y"
    {DebugMosaic=(yyvsp[(2) - (2)].integer);;}
    break;

  case 66:
#line 575 "frame/parser.Y"
    {yydebug=(yyvsp[(2) - (2)].integer);;}
    break;

  case 67:
#line 576 "frame/parser.Y"
    {DebugPerf=(yyvsp[(2) - (2)].integer);;}
    break;

  case 68:
#line 577 "frame/parser.Y"
    {DebugWCS=(yyvsp[(2) - (2)].integer);;}
    break;

  case 69:
#line 578 "frame/parser.Y"
    {DebugBin=(yyvsp[(2) - (2)].integer);;}
    break;

  case 70:
#line 579 "frame/parser.Y"
    {DebugBlock=(yyvsp[(2) - (2)].integer);;}
    break;

  case 71:
#line 580 "frame/parser.Y"
    {DebugCompress=(yyvsp[(2) - (2)].integer);;}
    break;

  case 72:
#line 581 "frame/parser.Y"
    {DebugCrop=(yyvsp[(2) - (2)].integer);;}
    break;

  case 73:
#line 582 "frame/parser.Y"
    {DebugGZ=(yyvsp[(2) - (2)].integer);;}
    break;

  case 74:
#line 583 "frame/parser.Y"
    {DebugRGB=(yyvsp[(2) - (2)].integer);;}
    break;

  case 75:
#line 586 "frame/parser.Y"
    {(yyval.integer)=((yyvsp[(1) - (1)].integer) ? 1 : 0);;}
    break;

  case 76:
#line 588 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 77:
#line 589 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 78:
#line 590 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 79:
#line 591 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 80:
#line 593 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 81:
#line 594 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 82:
#line 595 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 83:
#line 596 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 84:
#line 599 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 85:
#line 600 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 86:
#line 601 "frame/parser.Y"
    {(yyval.integer) = Base::FULLBASE;;}
    break;

  case 87:
#line 602 "frame/parser.Y"
    {(yyval.integer) = Base::ROOT;;}
    break;

  case 88:
#line 603 "frame/parser.Y"
    {(yyval.integer) = Base::FULL;;}
    break;

  case 89:
#line 606 "frame/parser.Y"
    {(yyval.real) = 0;;}
    break;

  case 90:
#line 607 "frame/parser.Y"
    {(yyval.real) = (yyvsp[(1) - (1)].real);;}
    break;

  case 91:
#line 610 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 92:
#line 611 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 93:
#line 612 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 94:
#line 615 "frame/parser.Y"
    {(yyval.real) = parseSEXStr((yyvsp[(1) - (1)].str));;}
    break;

  case 95:
#line 618 "frame/parser.Y"
    {(yyval.real) = parseHMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 96:
#line 621 "frame/parser.Y"
    {(yyval.real) = parseDMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 97:
#line 625 "frame/parser.Y"
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
#line 637 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 99:
#line 644 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 100:
#line 651 "frame/parser.Y"
    {
	  (yyval.vector)[0] = (yyvsp[(1) - (2)].real);
	  (yyval.vector)[1] = (yyvsp[(2) - (2)].real);
	  (yyval.vector)[2] = 1;
	;}
    break;

  case 101:
#line 658 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::IMAGE;;}
    break;

  case 102:
#line 659 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::PHYSICAL;;}
    break;

  case 103:
#line 660 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::DETECTOR;;}
    break;

  case 104:
#line 661 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::AMPLIFIER;;}
    break;

  case 105:
#line 662 "frame/parser.Y"
    {(yyval.integer) = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 106:
#line 665 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS;;}
    break;

  case 107:
#line 666 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSA;;}
    break;

  case 108:
#line 667 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSB;;}
    break;

  case 109:
#line 668 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSC;;}
    break;

  case 110:
#line 669 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSD;;}
    break;

  case 111:
#line 670 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSE;;}
    break;

  case 112:
#line 671 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSF;;}
    break;

  case 113:
#line 672 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSG;;}
    break;

  case 114:
#line 673 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSH;;}
    break;

  case 115:
#line 674 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSI;;}
    break;

  case 116:
#line 675 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSJ;;}
    break;

  case 117:
#line 676 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSK;;}
    break;

  case 118:
#line 677 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSL;;}
    break;

  case 119:
#line 678 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSM;;}
    break;

  case 120:
#line 679 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSN;;}
    break;

  case 121:
#line 680 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSO;;}
    break;

  case 122:
#line 681 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSP;;}
    break;

  case 123:
#line 682 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSQ;;}
    break;

  case 124:
#line 683 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSR;;}
    break;

  case 125:
#line 684 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSS;;}
    break;

  case 126:
#line 685 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCST;;}
    break;

  case 127:
#line 686 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSU;;}
    break;

  case 128:
#line 687 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSV;;}
    break;

  case 129:
#line 688 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSW;;}
    break;

  case 130:
#line 689 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSX;;}
    break;

  case 131:
#line 690 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSY;;}
    break;

  case 132:
#line 691 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSZ;;}
    break;

  case 133:
#line 692 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS0;;}
    break;

  case 134:
#line 695 "frame/parser.Y"
    {(yyval.integer) = Coord::CANVAS;;}
    break;

  case 135:
#line 696 "frame/parser.Y"
    {(yyval.integer) = Coord::PANNER;;}
    break;

  case 136:
#line 699 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 137:
#line 700 "frame/parser.Y"
    {(yyval.integer) = FitsMask::ZERO;;}
    break;

  case 138:
#line 701 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 139:
#line 702 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NaN;;}
    break;

  case 140:
#line 703 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONNaN;;}
    break;

  case 141:
#line 704 "frame/parser.Y"
    {(yyval.integer) = FitsMask::RANGE;;}
    break;

  case 142:
#line 707 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 143:
#line 708 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 144:
#line 709 "frame/parser.Y"
    {(yyval.integer) = FitsMask::MULTIPLY;;}
    break;

  case 145:
#line 710 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SCREEN;;}
    break;

  case 146:
#line 711 "frame/parser.Y"
    {(yyval.integer) = FitsMask::OVERLAY;;}
    break;

  case 147:
#line 712 "frame/parser.Y"
    {(yyval.integer) = FitsMask::DARKEN;;}
    break;

  case 148:
#line 713 "frame/parser.Y"
    {(yyval.integer) = FitsMask::LIGHTEN;;}
    break;

  case 149:
#line 714 "frame/parser.Y"
    {(yyval.integer) = FitsMask::COLOR_DODGE;;}
    break;

  case 150:
#line 715 "frame/parser.Y"
    {(yyval.integer) = FitsMask::COLOR_BURN;;}
    break;

  case 151:
#line 716 "frame/parser.Y"
    {(yyval.integer) = FitsMask::HARD_LIGHT;;}
    break;

  case 152:
#line 717 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOFT_LIGHT;;}
    break;

  case 153:
#line 718 "frame/parser.Y"
    {(yyval.integer) = FitsMask::DIFFERENCE;;}
    break;

  case 154:
#line 719 "frame/parser.Y"
    {(yyval.integer) = FitsMask::EXCLUSION;;}
    break;

  case 155:
#line 720 "frame/parser.Y"
    {(yyval.integer) = FitsMask::HUE;;}
    break;

  case 156:
#line 721 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SATURATION;;}
    break;

  case 157:
#line 722 "frame/parser.Y"
    {(yyval.integer) = FitsMask::COLOR;;}
    break;

  case 158:
#line 723 "frame/parser.Y"
    {(yyval.integer) = FitsMask::LUMINOSITY;;}
    break;

  case 159:
#line 726 "frame/parser.Y"
    {(yyval.integer) = FrScale::LINEARSCALE;;}
    break;

  case 160:
#line 727 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOGSCALE;;}
    break;

  case 161:
#line 728 "frame/parser.Y"
    {(yyval.integer) = FrScale::POWSCALE;;}
    break;

  case 162:
#line 729 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQRTSCALE;;}
    break;

  case 163:
#line 730 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQUAREDSCALE;;}
    break;

  case 164:
#line 731 "frame/parser.Y"
    {(yyval.integer) = FrScale::ASINHSCALE;;}
    break;

  case 165:
#line 732 "frame/parser.Y"
    {(yyval.integer) = FrScale::SINHSCALE;;}
    break;

  case 166:
#line 733 "frame/parser.Y"
    {(yyval.integer) = FrScale::HISTEQUSCALE;;}
    break;

  case 167:
#line 736 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 168:
#line 737 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 169:
#line 738 "frame/parser.Y"
    {(yyval.integer)=FrScale::SAMPLE;;}
    break;

  case 170:
#line 739 "frame/parser.Y"
    {(yyval.integer)=FrScale::DATAMIN;;}
    break;

  case 171:
#line 740 "frame/parser.Y"
    {(yyval.integer)=FrScale::IRAFMIN;;}
    break;

  case 172:
#line 743 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 173:
#line 744 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 174:
#line 745 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 175:
#line 746 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 176:
#line 747 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 177:
#line 748 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 178:
#line 749 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::GALACTIC;;}
    break;

  case 179:
#line 750 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ECLIPTIC;;}
    break;

  case 180:
#line 753 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 181:
#line 754 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 182:
#line 755 "frame/parser.Y"
    {(yyval.integer)=Coord::SEXAGESIMAL;;}
    break;

  case 183:
#line 758 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 184:
#line 759 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 185:
#line 760 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCMIN;;}
    break;

  case 186:
#line 761 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCSEC;;}
    break;

  case 187:
#line 764 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 188:
#line 765 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 189:
#line 766 "frame/parser.Y"
    {(yyval.integer) = Base::KEY;;}
    break;

  case 190:
#line 769 "frame/parser.Y"
    {;}
    break;

  case 191:
#line 770 "frame/parser.Y"
    {;}
    break;

  case 192:
#line 771 "frame/parser.Y"
    {;}
    break;

  case 193:
#line 774 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 194:
#line 775 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 195:
#line 776 "frame/parser.Y"
    {(yyval.integer) = Base::MASK;;}
    break;

  case 196:
#line 780 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer) ? Marker::ARROW : Marker::NOEND;;}
    break;

  case 197:
#line 781 "frame/parser.Y"
    {(yyval.integer) = Marker::NOEND;;}
    break;

  case 198:
#line 782 "frame/parser.Y"
    {(yyval.integer) = Marker::ARROW;;}
    break;

  case 199:
#line 783 "frame/parser.Y"
    {(yyval.integer) = Marker::OPENARROW;;}
    break;

  case 200:
#line 784 "frame/parser.Y"
    {(yyval.integer) = Marker::CHEVRON;;}
    break;

  case 201:
#line 785 "frame/parser.Y"
    {(yyval.integer) = Marker::CIRCLE;;}
    break;

  case 202:
#line 786 "frame/parser.Y"
    {(yyval.integer) = Marker::OPENCIRCLE;;}
    break;

  case 203:
#line 787 "frame/parser.Y"
    {(yyval.integer) = Marker::BOX;;}
    break;

  case 204:
#line 788 "frame/parser.Y"
    {(yyval.integer) = Marker::OPENBOX;;}
    break;

  case 205:
#line 789 "frame/parser.Y"
    {(yyval.integer) = Marker::TRIANGLE;;}
    break;

  case 206:
#line 790 "frame/parser.Y"
    {(yyval.integer) = Marker::OPENTRIANGLE;;}
    break;

  case 207:
#line 791 "frame/parser.Y"
    {(yyval.integer) = Marker::BAR;;}
    break;

  case 208:
#line 794 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 209:
#line 795 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 210:
#line 796 "frame/parser.Y"
    {(yyval.integer) = Point::BOX;;}
    break;

  case 211:
#line 797 "frame/parser.Y"
    {(yyval.integer) = Point::DIAMOND;;}
    break;

  case 212:
#line 798 "frame/parser.Y"
    {(yyval.integer) = Point::CROSS;;}
    break;

  case 213:
#line 799 "frame/parser.Y"
    {(yyval.integer) = Point::EX;;}
    break;

  case 214:
#line 800 "frame/parser.Y"
    {(yyval.integer) = Point::ARROW;;}
    break;

  case 215:
#line 801 "frame/parser.Y"
    {(yyval.integer) = Point::BOXCIRCLE;;}
    break;

  case 216:
#line 804 "frame/parser.Y"
    {(yyval.integer) = POINTSIZE;;}
    break;

  case 217:
#line 805 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 218:
#line 808 "frame/parser.Y"
    {(yyval.integer) = Marker::PANDA;;}
    break;

  case 219:
#line 809 "frame/parser.Y"
    {(yyval.integer) = Marker::HISTOGRAM;;}
    break;

  case 220:
#line 810 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT2D;;}
    break;

  case 221:
#line 811 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT3D;;}
    break;

  case 222:
#line 812 "frame/parser.Y"
    {(yyval.integer) = Marker::RADIAL;;}
    break;

  case 223:
#line 813 "frame/parser.Y"
    {(yyval.integer) = Marker::STATS;;}
    break;

  case 224:
#line 816 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 225:
#line 817 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 226:
#line 818 "frame/parser.Y"
    {(yyval.integer) = Marker::SUM;;}
    break;

  case 227:
#line 819 "frame/parser.Y"
    {(yyval.integer) = Marker::MEDIAN;;}
    break;

  case 228:
#line 822 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 229:
#line 823 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 230:
#line 824 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 231:
#line 825 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 232:
#line 826 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 233:
#line 827 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 238:
#line 834 "frame/parser.Y"
    {fr->set3dRenderMethodCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 239:
#line 835 "frame/parser.Y"
    {fr->set3dRenderBackgroundCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 241:
#line 837 "frame/parser.Y"
    {fr->set3dScaleCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 242:
#line 838 "frame/parser.Y"
    {fr->set3dSyncCmd((yyvsp[(2) - (2)].integer));}
    break;

  case 243:
#line 840 "frame/parser.Y"
    {/* needed for compatibility with old version of backup */;}
    break;

  case 244:
#line 843 "frame/parser.Y"
    {fr->set3dShadeCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 245:
#line 844 "frame/parser.Y"
    {fr->set3dShadeAmbientCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 246:
#line 845 "frame/parser.Y"
    {fr->set3dShadeStrengthCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 248:
#line 849 "frame/parser.Y"
    {fr->set3dShadeNormalCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 249:
#line 850 "frame/parser.Y"
    {fr->set3dShadeNormalStrengthCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 250:
#line 853 "frame/parser.Y"
    {fr->set3dBorderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 251:
#line 854 "frame/parser.Y"
    {fr->set3dBorderColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 252:
#line 857 "frame/parser.Y"
    {fr->set3dCompassCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 253:
#line 858 "frame/parser.Y"
    {fr->set3dCompassColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 254:
#line 861 "frame/parser.Y"
    {fr->set3dHighliteCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 255:
#line 862 "frame/parser.Y"
    {fr->set3dHighliteColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 256:
#line 865 "frame/parser.Y"
    {fr->set3dViewCmd((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));;}
    break;

  case 257:
#line 867 "frame/parser.Y"
    {fr->set3dViewPointCmd(Vector3d((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 259:
#line 871 "frame/parser.Y"
    {fr->binColsCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 260:
#line 872 "frame/parser.Y"
    {fr->binDepthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 263:
#line 875 "frame/parser.Y"
    {fr->binBufferSizeCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 265:
#line 877 "frame/parser.Y"
    {fr->binFilterCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 266:
#line 880 "frame/parser.Y"
    {fr->binAboutCmd();;}
    break;

  case 267:
#line 881 "frame/parser.Y"
    {fr->binAboutCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 268:
#line 884 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 269:
#line 885 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 270:
#line 887 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(1) - (4)].real)), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 271:
#line 889 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 272:
#line 890 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 273:
#line 891 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 274:
#line 893 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 275:
#line 895 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 276:
#line 898 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::AVERAGE);;}
    break;

  case 277:
#line 899 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::SUM);;}
    break;

  case 278:
#line 902 "frame/parser.Y"
    {fr->binToFitCmd();;}
    break;

  case 279:
#line 904 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (7)].real),(yyvsp[(2) - (7)].real)), (yyvsp[(5) - (7)].str), (yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].str));;}
    break;

  case 280:
#line 907 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (11)].real),(yyvsp[(2) - (11)].real)), (yyvsp[(3) - (11)].integer), Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)), (yyvsp[(8) - (11)].str), (yyvsp[(9) - (11)].str), (yyvsp[(10) - (11)].str), (yyvsp[(11) - (11)].str));;}
    break;

  case 281:
#line 909 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (8)].real),(yyvsp[(2) - (8)].real)), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (yyvsp[(6) - (8)].str), (yyvsp[(7) - (8)].str), (yyvsp[(8) - (8)].str));;}
    break;

  case 282:
#line 912 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (12)].real),(yyvsp[(2) - (12)].real)), (yyvsp[(3) - (12)].integer), Vector((yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real)), Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    (yyvsp[(9) - (12)].str), (yyvsp[(10) - (12)].str), (yyvsp[(11) - (12)].str), (yyvsp[(12) - (12)].str));;}
    break;

  case 283:
#line 916 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 284:
#line 917 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 286:
#line 919 "frame/parser.Y"
    {fr->blockNanZeroCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 287:
#line 922 "frame/parser.Y"
    {fr->blockToFitCmd();;}
    break;

  case 288:
#line 923 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 289:
#line 924 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 293:
#line 930 "frame/parser.Y"
    {fr->clipUserCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 294:
#line 931 "frame/parser.Y"
    {fr->clipUserCmd(NAN,NAN);;}
    break;

  case 296:
#line 934 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 297:
#line 939 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::GLOBAL);;}
    break;

  case 298:
#line 940 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::LOCAL);;}
    break;

  case 299:
#line 943 "frame/parser.Y"
    {fr->clipModeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 300:
#line 944 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::MINMAX);;}
    break;

  case 301:
#line 945 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZSCALE);;}
    break;

  case 302:
#line 946 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZMAX);;}
    break;

  case 303:
#line 947 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::USERCLIP);;}
    break;

  case 304:
#line 950 "frame/parser.Y"
    {fr->clipMinMaxCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer),(yyvsp[(1) - (2)].integer));;}
    break;

  case 305:
#line 951 "frame/parser.Y"
    {fr->clipMinMaxModeCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer));;}
    break;

  case 306:
#line 952 "frame/parser.Y"
    {fr->clipMinMaxSampleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 307:
#line 953 "frame/parser.Y"
    {fr->clipMinMaxRescanCmd();;}
    break;

  case 308:
#line 956 "frame/parser.Y"
    {fr->clipZScaleCmd((yyvsp[(1) - (3)].real),(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 309:
#line 958 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleContrastCmd((yyvsp[(2) - (2)].real));
        ;}
    break;

  case 310:
#line 963 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleSampleCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 311:
#line 968 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleLineCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 312:
#line 975 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].real), (yyvsp[(3) - (5)].real), (yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].integer));;}
    break;

  case 313:
#line 977 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 314:
#line 979 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 315:
#line 981 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 316:
#line 983 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (7)].integer),(yyvsp[(3) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(yyvsp[(7) - (7)].integer));;}
    break;

  case 320:
#line 990 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].real), (yyvsp[(3) - (5)].real), (yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].integer));;}
    break;

  case 321:
#line 992 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 322:
#line 994 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 323:
#line 996 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 324:
#line 998 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (7)].integer),(yyvsp[(3) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(yyvsp[(7) - (7)].integer));;}
    break;

  case 325:
#line 1000 "frame/parser.Y"
    {fr->colorScaleCmd((FrScale::ColorScaleType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 326:
#line 1001 "frame/parser.Y"
    {fr->colorScaleLogCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 328:
#line 1005 "frame/parser.Y"
    {fr->contourDashListCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 334:
#line 1014 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),(FrScale::ClipMode)(yyvsp[(9) - (13)].integer),100,(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 335:
#line 1017 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),FrScale::AUTOCUT,(yyvsp[(9) - (13)].real),(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 336:
#line 1020 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),(FrScale::ClipMode)(yyvsp[(9) - (12)].integer),100,FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 337:
#line 1026 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),FrScale::AUTOCUT,(yyvsp[(9) - (12)].real),FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 338:
#line 1031 "frame/parser.Y"
    {fr->contourCreatePolygonCmd();;}
    break;

  case 339:
#line 1034 "frame/parser.Y"
    {fr->contourDeleteCmd();;}
    break;

  case 340:
#line 1035 "frame/parser.Y"
    {fr->contourDeleteAuxCmd();;}
    break;

  case 341:
#line 1038 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 342:
#line 1039 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 343:
#line 1041 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourLoadCmd((yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer),(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer));
	;}
    break;

  case 344:
#line 1047 "frame/parser.Y"
    {(yyval.integer) = FrScale::MINMAX;;}
    break;

  case 345:
#line 1048 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZSCALE;;}
    break;

  case 346:
#line 1049 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZMAX;;}
    break;

  case 347:
#line 1050 "frame/parser.Y"
    {(yyval.integer) = FrScale::USERCLIP;;}
    break;

  case 348:
#line 1053 "frame/parser.Y"
    {(yyval.integer) = FrScale::GLOBAL;;}
    break;

  case 349:
#line 1054 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOCAL;;}
    break;

  case 350:
#line 1057 "frame/parser.Y"
    {(yyval.integer) = FVContour::SMOOTH;;}
    break;

  case 351:
#line 1058 "frame/parser.Y"
    {(yyval.integer) = FVContour::BLOCK;;}
    break;

  case 352:
#line 1061 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 353:
#line 1062 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 354:
#line 1064 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 355:
#line 1068 "frame/parser.Y"
    {fr->contourSaveCmd((yyvsp[(1) - (3)].str), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 356:
#line 1070 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (4)].str),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 357:
#line 1073 "frame/parser.Y"
    {fr->contourStyleClearCmd();;}
    break;

  case 358:
#line 1074 "frame/parser.Y"
    {fr->contourStyleClearCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 359:
#line 1075 "frame/parser.Y"
    {fr->contourStyleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer),0,0);;}
    break;

  case 360:
#line 1076 "frame/parser.Y"
    {fr->contourStyleCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 361:
#line 1079 "frame/parser.Y"
    {fr->cropCmd();;}
    break;

  case 362:
#line 1081 "frame/parser.Y"
    {fr->cropCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 363:
#line 1084 "frame/parser.Y"
    {fr->cropCenterCmd(Vector((yyvsp[(2) - (8)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), Vector((yyvsp[(5) - (8)].real),(yyvsp[(6) - (8)].real)), (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 365:
#line 1086 "frame/parser.Y"
    {fr->cropBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 366:
#line 1087 "frame/parser.Y"
    {fr->cropMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 367:
#line 1088 "frame/parser.Y"
    {fr->cropEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 368:
#line 1091 "frame/parser.Y"
    {fr->crop3dCmd();;}
    break;

  case 369:
#line 1093 "frame/parser.Y"
    {fr->crop3dCmd((yyvsp[(1) - (4)].real), (yyvsp[(2) - (4)].real), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 370:
#line 1094 "frame/parser.Y"
    {fr->crop3dBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 371:
#line 1095 "frame/parser.Y"
    {fr->crop3dMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 372:
#line 1096 "frame/parser.Y"
    {fr->crop3dEndCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 373:
#line 1100 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), (Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 374:
#line 1102 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 375:
#line 1103 "frame/parser.Y"
    {fr->crosshairCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 376:
#line 1104 "frame/parser.Y"
    {fr->crosshairWarpCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 377:
#line 1107 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)), (Coord::InternalSystem)(yyvsp[(3) - (5)].integer));;}
    break;

  case 378:
#line 1109 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 379:
#line 1111 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer));;}
    break;

  case 380:
#line 1113 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 381:
#line 1116 "frame/parser.Y"
    {fr->axesOrderCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 382:
#line 1119 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 383:
#line 1120 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 384:
#line 1121 "frame/parser.Y"
    {(yyval.integer) = Base::SUM;;}
    break;

  case 385:
#line 1122 "frame/parser.Y"
    {(yyval.integer) = Base::MEDIAN;;}
    break;

  case 386:
#line 1125 "frame/parser.Y"
    {fr->fadeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 387:
#line 1126 "frame/parser.Y"
    {fr->fadeClearCmd();;}
    break;

  case 388:
#line 1129 "frame/parser.Y"
    {fr->fitsyHasExtCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 389:
#line 1132 "frame/parser.Y"
    {fr->getCmd();;}
    break;

  case 390:
#line 1133 "frame/parser.Y"
    {fr->getBgColorCmd();;}
    break;

  case 404:
#line 1147 "frame/parser.Y"
    {fr->getDATASECCmd();;}
    break;

  case 407:
#line 1150 "frame/parser.Y"
    {fr->getHighliteColorCmd();;}
    break;

  case 408:
#line 1151 "frame/parser.Y"
    {fr->getHistogramCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].integer));;}
    break;

  case 414:
#line 1157 "frame/parser.Y"
    {fr->getIRAFAlignCmd();;}
    break;

  case 415:
#line 1158 "frame/parser.Y"
    {fr->getMinMaxCmd();;}
    break;

  case 420:
#line 1163 "frame/parser.Y"
    {fr->getNANColorCmd();;}
    break;

  case 421:
#line 1164 "frame/parser.Y"
    {fr->getOrientCmd();;}
    break;

  case 423:
#line 1167 "frame/parser.Y"
    {fr->getPixelTableCmd(Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (Coord::InternalSystem)(yyvsp[(3) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(7) - (8)].integer), (yyvsp[(8) - (8)].str));;}
    break;

  case 425:
#line 1169 "frame/parser.Y"
    {fr->getRotateCmd();;}
    break;

  case 427:
#line 1171 "frame/parser.Y"
    {fr->getThreadsCmd();;}
    break;

  case 429:
#line 1173 "frame/parser.Y"
    {fr->getTypeCmd();;}
    break;

  case 430:
#line 1175 "frame/parser.Y"
    {fr->getValueCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 433:
#line 1178 "frame/parser.Y"
    {fr->getZoomCmd();;}
    break;

  case 434:
#line 1182 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 435:
#line 1184 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 436:
#line 1188 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 437:
#line 1190 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 438:
#line 1193 "frame/parser.Y"
    {fr->getBinDepthCmd();;}
    break;

  case 439:
#line 1194 "frame/parser.Y"
    {fr->getBinFactorCmd();;}
    break;

  case 440:
#line 1195 "frame/parser.Y"
    {fr->getBinFunctionCmd();;}
    break;

  case 441:
#line 1196 "frame/parser.Y"
    {fr->getBinBufferSizeCmd();;}
    break;

  case 442:
#line 1197 "frame/parser.Y"
    {fr->getBinCursorCmd();;}
    break;

  case 443:
#line 1198 "frame/parser.Y"
    {fr->getBinFilterCmd();;}
    break;

  case 445:
#line 1200 "frame/parser.Y"
    {fr->getBinListCmd();;}
    break;

  case 446:
#line 1203 "frame/parser.Y"
    {fr->getBinColsCmd();;}
    break;

  case 447:
#line 1204 "frame/parser.Y"
    {fr->getBinColsMinMaxCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 448:
#line 1205 "frame/parser.Y"
    {fr->getBinColsDimCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 449:
#line 1208 "frame/parser.Y"
    {fr->getBlockCmd();;}
    break;

  case 450:
#line 1209 "frame/parser.Y"
    {fr->getBlockNanZeroCmd();;}
    break;

  case 451:
#line 1212 "frame/parser.Y"
    {fr->getClipCmd();;}
    break;

  case 452:
#line 1214 "frame/parser.Y"
    {fr->getClipCmd((FrScale::ClipMode)(yyvsp[(1) - (2)].integer), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 453:
#line 1216 "frame/parser.Y"
    {fr->getClipCmd((yyvsp[(1) - (2)].real), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 454:
#line 1217 "frame/parser.Y"
    {fr->getClipScopeCmd();;}
    break;

  case 455:
#line 1218 "frame/parser.Y"
    {fr->getClipModeCmd();;}
    break;

  case 457:
#line 1220 "frame/parser.Y"
    {fr->getClipUserCmd();;}
    break;

  case 459:
#line 1223 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	;}
    break;

  case 460:
#line 1229 "frame/parser.Y"
    {fr->getClipMinMaxModeCmd();;}
    break;

  case 461:
#line 1230 "frame/parser.Y"
    {fr->getClipMinMaxSampleCmd();;}
    break;

  case 462:
#line 1233 "frame/parser.Y"
    {fr->getClipZScaleContrastCmd();;}
    break;

  case 463:
#line 1234 "frame/parser.Y"
    {fr->getClipZScaleSampleCmd();;}
    break;

  case 464:
#line 1235 "frame/parser.Y"
    {fr->getClipZScaleLineCmd();;}
    break;

  case 465:
#line 1238 "frame/parser.Y"
    {fr->getColorbarCmd();;}
    break;

  case 466:
#line 1239 "frame/parser.Y"
    {fr->getColorbarTagCmd();;}
    break;

  case 468:
#line 1245 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 469:
#line 1247 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 470:
#line 1249 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 471:
#line 1252 "frame/parser.Y"
    {fr->getColorScaleCmd();;}
    break;

  case 473:
#line 1254 "frame/parser.Y"
    {fr->getColorScaleLogCmd();;}
    break;

  case 474:
#line 1258 "frame/parser.Y"
    {fr->getColorScaleLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 475:
#line 1262 "frame/parser.Y"
    {fr->getContourCmd((Coord::CoordSystem)(yyvsp[(1) - (2)].integer),(Coord::SkyFrame)(yyvsp[(2) - (2)].integer));;}
    break;

  case 477:
#line 1264 "frame/parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 478:
#line 1265 "frame/parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 479:
#line 1266 "frame/parser.Y"
    {fr->getContourDashListCmd();;}
    break;

  case 480:
#line 1267 "frame/parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 481:
#line 1268 "frame/parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 482:
#line 1269 "frame/parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 484:
#line 1271 "frame/parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 485:
#line 1272 "frame/parser.Y"
    {fr->getContourStyleCmd();;}
    break;

  case 486:
#line 1273 "frame/parser.Y"
    {fr->getContourStyleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 487:
#line 1274 "frame/parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 488:
#line 1277 "frame/parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 489:
#line 1278 "frame/parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 490:
#line 1279 "frame/parser.Y"
    {fr->getContourClipScopeCmd();;}
    break;

  case 491:
#line 1282 "frame/parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 492:
#line 1283 "frame/parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 493:
#line 1287 "frame/parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 494:
#line 1289 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 495:
#line 1297 "frame/parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 496:
#line 1299 "frame/parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 497:
#line 1301 "frame/parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 498:
#line 1304 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 499:
#line 1306 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 500:
#line 1307 "frame/parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 501:
#line 1310 "frame/parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 502:
#line 1313 "frame/parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 503:
#line 1315 "frame/parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 504:
#line 1319 "frame/parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 505:
#line 1321 "frame/parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 506:
#line 1324 "frame/parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 507:
#line 1328 "frame/parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (2)].str), (Base::FileNameType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 508:
#line 1329 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 509:
#line 1331 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)), (Coord::InternalSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (Base::FileNameType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 510:
#line 1334 "frame/parser.Y"
    {fr->iisGetCmd((yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 511:
#line 1335 "frame/parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 513:
#line 1339 "frame/parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 514:
#line 1340 "frame/parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 515:
#line 1341 "frame/parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 516:
#line 1344 "frame/parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 517:
#line 1346 "frame/parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 518:
#line 1347 "frame/parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 520:
#line 1349 "frame/parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 524:
#line 1353 "frame/parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 525:
#line 1354 "frame/parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 526:
#line 1355 "frame/parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 527:
#line 1357 "frame/parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::DistFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 529:
#line 1359 "frame/parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 530:
#line 1362 "frame/parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 531:
#line 1364 "frame/parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 532:
#line 1366 "frame/parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 533:
#line 1367 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 534:
#line 1368 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 535:
#line 1369 "frame/parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 536:
#line 1372 "frame/parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 537:
#line 1373 "frame/parser.Y"
    {fr->getFitsDepthCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 538:
#line 1377 "frame/parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 539:
#line 1379 "frame/parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 540:
#line 1382 "frame/parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 541:
#line 1385 "frame/parser.Y"
    {fr->getFitsSliceCmd(2);;}
    break;

  case 542:
#line 1386 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 543:
#line 1388 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 544:
#line 1390 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((yyvsp[(3) - (4)].integer), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 545:
#line 1392 "frame/parser.Y"
    {fr->getFitsSliceToImageCmd((yyvsp[(3) - (4)].real), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 546:
#line 1395 "frame/parser.Y"
    {fr->getGridCmd();;}
    break;

  case 547:
#line 1396 "frame/parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 548:
#line 1397 "frame/parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 549:
#line 1400 "frame/parser.Y"
    {fr->getLayerCountCmd();;}
    break;

  case 550:
#line 1401 "frame/parser.Y"
    {fr->getLayerNoCmd();;}
    break;

  case 551:
#line 1402 "frame/parser.Y"
    {fr->getLayerColorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 552:
#line 1403 "frame/parser.Y"
    {fr->getLayerBlendCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 553:
#line 1404 "frame/parser.Y"
    {fr->getLayerTransparencyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 554:
#line 1405 "frame/parser.Y"
    {fr->getLayerViewCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 555:
#line 1408 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 556:
#line 1409 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 557:
#line 1410 "frame/parser.Y"
    {fr->getMaskRangeCmd();;}
    break;

  case 558:
#line 1411 "frame/parser.Y"
    {fr->getMaskSystemCmd();;}
    break;

  case 559:
#line 1412 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 560:
#line 1413 "frame/parser.Y"
    {fr->getMaskCountCmd();;}
    break;

  case 561:
#line 1414 "frame/parser.Y"
    {fr->getMaskBlendCmd();;}
    break;

  case 562:
#line 1417 "frame/parser.Y"
    {(yyval.integer) = 0;;}
    break;

  case 563:
#line 1418 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 564:
#line 1421 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 565:
#line 1424 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 566:
#line 1425 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 567:
#line 1426 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 568:
#line 1429 "frame/parser.Y"
    {fr->getMultiColorSystemCmd();;}
    break;

  case 569:
#line 1432 "frame/parser.Y"
    {fr->getHLSChannelCmd();;}
    break;

  case 570:
#line 1433 "frame/parser.Y"
    {fr->getHLSSystemCmd();;}
    break;

  case 571:
#line 1434 "frame/parser.Y"
    {fr->getHLSViewCmd();;}
    break;

  case 572:
#line 1437 "frame/parser.Y"
    {fr->getHSVChannelCmd();;}
    break;

  case 573:
#line 1438 "frame/parser.Y"
    {fr->getHSVSystemCmd();;}
    break;

  case 574:
#line 1439 "frame/parser.Y"
    {fr->getHSVViewCmd();;}
    break;

  case 575:
#line 1442 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 576:
#line 1443 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 577:
#line 1444 "frame/parser.Y"
    {fr->getSmoothRadiusMinorCmd();;}
    break;

  case 578:
#line 1445 "frame/parser.Y"
    {fr->getSmoothSigmaCmd();;}
    break;

  case 579:
#line 1446 "frame/parser.Y"
    {fr->getSmoothSigmaMinorCmd();;}
    break;

  case 580:
#line 1447 "frame/parser.Y"
    {fr->getSmoothAngleCmd();;}
    break;

  case 585:
#line 1454 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 586:
#line 1455 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 588:
#line 1457 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 589:
#line 1460 "frame/parser.Y"
    {fr->get3dShadeCmd();;}
    break;

  case 590:
#line 1461 "frame/parser.Y"
    {fr->get3dShadeAmbientCmd();;}
    break;

  case 591:
#line 1462 "frame/parser.Y"
    {fr->get3dShadeStrengthCmd();;}
    break;

  case 593:
#line 1466 "frame/parser.Y"
    {fr->get3dShadeNormalCmd();;}
    break;

  case 594:
#line 1467 "frame/parser.Y"
    {fr->get3dShadeNormalStrengthCmd();;}
    break;

  case 595:
#line 1470 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 596:
#line 1471 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 597:
#line 1474 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 598:
#line 1475 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 599:
#line 1478 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 600:
#line 1479 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 601:
#line 1482 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 602:
#line 1483 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 603:
#line 1486 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 605:
#line 1488 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 606:
#line 1491 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 607:
#line 1492 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 609:
#line 1496 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 610:
#line 1500 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 611:
#line 1503 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer),
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 612:
#line 1510 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 613:
#line 1511 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 614:
#line 1514 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 615:
#line 1515 "frame/parser.Y"
    {fr->hasBgColorCmd();;}
    break;

  case 618:
#line 1518 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 619:
#line 1519 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 620:
#line 1520 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 621:
#line 1521 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 623:
#line 1523 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 624:
#line 1524 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 625:
#line 1525 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 627:
#line 1527 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 628:
#line 1528 "frame/parser.Y"
    {fr->hasImageCmd();;}
    break;

  case 629:
#line 1529 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 630:
#line 1530 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 632:
#line 1534 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 633:
#line 1537 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 634:
#line 1538 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 635:
#line 1541 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 636:
#line 1542 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 637:
#line 1543 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 638:
#line 1544 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 639:
#line 1547 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 640:
#line 1548 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 641:
#line 1549 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 642:
#line 1550 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 643:
#line 1553 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 644:
#line 1554 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 645:
#line 1555 "frame/parser.Y"
    {fr->hasWCSEquCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 646:
#line 1556 "frame/parser.Y"
    {fr->hasWCSLinearCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 647:
#line 1557 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 648:
#line 1558 "frame/parser.Y"
    {fr->hasWCS3DCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 649:
#line 1561 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 650:
#line 1562 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 651:
#line 1563 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 654:
#line 1567 "frame/parser.Y"
    {fr->iisSetCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 655:
#line 1568 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 656:
#line 1571 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 657:
#line 1574 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 658:
#line 1575 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 659:
#line 1579 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 660:
#line 1581 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 661:
#line 1582 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 668:
#line 1594 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 669:
#line 1596 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 670:
#line 1598 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 671:
#line 1599 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 672:
#line 1601 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 673:
#line 1603 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 674:
#line 1605 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 675:
#line 1607 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 676:
#line 1609 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 680:
#line 1615 "frame/parser.Y"
    {fr->loadRGBArrayCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 681:
#line 1616 "frame/parser.Y"
    {fr->loadRGBArrayCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 682:
#line 1617 "frame/parser.Y"
    {fr->loadRGBArrayCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 683:
#line 1618 "frame/parser.Y"
    {fr->loadRGBArrayCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 684:
#line 1619 "frame/parser.Y"
    {fr->loadRGBArrayCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 685:
#line 1621 "frame/parser.Y"
    {fr->loadRGBArrayCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 686:
#line 1622 "frame/parser.Y"
    {fr->loadRGBArrayCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 687:
#line 1623 "frame/parser.Y"
    {fr->loadRGBArrayCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 688:
#line 1624 "frame/parser.Y"
    {fr->loadRGBArrayCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 689:
#line 1627 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 690:
#line 1631 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 691:
#line 1633 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 692:
#line 1635 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 693:
#line 1637 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 694:
#line 1639 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 695:
#line 1641 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 696:
#line 1643 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 697:
#line 1645 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str),
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 698:
#line 1648 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 699:
#line 1650 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 700:
#line 1652 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 710:
#line 1664 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 711:
#line 1665 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 712:
#line 1666 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 713:
#line 1667 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 714:
#line 1668 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 715:
#line 1669 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 716:
#line 1671 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 717:
#line 1673 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 718:
#line 1674 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 719:
#line 1675 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 720:
#line 1676 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 721:
#line 1679 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 722:
#line 1680 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 723:
#line 1681 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 724:
#line 1682 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 725:
#line 1683 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 726:
#line 1685 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 727:
#line 1686 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 728:
#line 1687 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 729:
#line 1688 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 735:
#line 1699 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 736:
#line 1702 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 737:
#line 1705 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 738:
#line 1708 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 739:
#line 1711 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 740:
#line 1714 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 741:
#line 1717 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 742:
#line 1720 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 743:
#line 1723 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 744:
#line 1728 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 745:
#line 1731 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 746:
#line 1734 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 747:
#line 1737 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 748:
#line 1740 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 749:
#line 1743 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 750:
#line 1746 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 751:
#line 1749 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 752:
#line 1752 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 753:
#line 1755 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 754:
#line 1758 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 755:
#line 1763 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 756:
#line 1766 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 757:
#line 1769 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 758:
#line 1772 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 759:
#line 1775 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 760:
#line 1778 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer),
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 761:
#line 1781 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 762:
#line 1784 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 763:
#line 1787 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 764:
#line 1792 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 765:
#line 1794 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 766:
#line 1796 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 767:
#line 1798 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 768:
#line 1800 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 769:
#line 1802 "frame/parser.Y"
    {
	  fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str),
					   (Base::LayerType)(yyvsp[(6) - (6)].integer));
        ;}
    break;

  case 770:
#line 1807 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 771:
#line 1809 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 772:
#line 1811 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 773:
#line 1815 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 774:
#line 1818 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 775:
#line 1821 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 776:
#line 1824 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 777:
#line 1827 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 778:
#line 1830 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 779:
#line 1833 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer),
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 780:
#line 1836 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer),
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 781:
#line 1839 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 782:
#line 1842 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 783:
#line 1845 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 784:
#line 1849 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 785:
#line 1850 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 786:
#line 1851 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 787:
#line 1852 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 788:
#line 1853 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 789:
#line 1854 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 790:
#line 1856 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 791:
#line 1858 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 792:
#line 1859 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 793:
#line 1860 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 794:
#line 1861 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 795:
#line 1864 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 796:
#line 1865 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 797:
#line 1866 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 798:
#line 1867 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 799:
#line 1868 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 800:
#line 1870 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 801:
#line 1871 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 802:
#line 1872 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 803:
#line 1873 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 804:
#line 1877 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 805:
#line 1879 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 806:
#line 1880 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 807:
#line 1882 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 808:
#line 1884 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 809:
#line 1886 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 810:
#line 1889 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 811:
#line 1890 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 812:
#line 1893 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 813:
#line 1894 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 814:
#line 1895 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 815:
#line 1898 "frame/parser.Y"
    {;}
    break;

  case 816:
#line 1901 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 817:
#line 1902 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 818:
#line 1903 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 819:
#line 1904 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 820:
#line 1905 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 821:
#line 1906 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 822:
#line 1907 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 823:
#line 1911 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 825:
#line 1919 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 826:
#line 1920 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 827:
#line 1922 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 828:
#line 1924 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 829:
#line 1925 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 830:
#line 1926 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 832:
#line 1927 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 835:
#line 1930 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 836:
#line 1931 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 837:
#line 1933 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 838:
#line 1935 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 839:
#line 1937 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 840:
#line 1940 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 841:
#line 1942 "frame/parser.Y"
    {fr->regionStatsCallbackCmd((yyvsp[(4) - (4)].str));;}
    break;

  case 842:
#line 1944 "frame/parser.Y"
    {fr->regionStatsCallbackCmd(NULL);;}
    break;

  case 843:
#line 1946 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 844:
#line 1947 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 845:
#line 1949 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 846:
#line 1952 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 847:
#line 1955 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 848:
#line 1959 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 849:
#line 1962 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 850:
#line 1965 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 851:
#line 1968 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 852:
#line 1972 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 853:
#line 1976 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 854:
#line 1981 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str),
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 855:
#line 1985 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 856:
#line 1987 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 857:
#line 1988 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 858:
#line 1990 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 859:
#line 1992 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 860:
#line 1994 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 861:
#line 1996 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 862:
#line 1998 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 863:
#line 1999 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 864:
#line 2000 "frame/parser.Y"
    {fr->markerCompositeAreaCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 865:
#line 2002 "frame/parser.Y"
    {fr->markerCompositeOperationCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 866:
#line 2004 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 867:
#line 2006 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 868:
#line 2009 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 869:
#line 2013 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 870:
#line 2017 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 871:
#line 2019 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 872:
#line 2021 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 873:
#line 2023 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 874:
#line 2025 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 875:
#line 2027 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 876:
#line 2029 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 877:
#line 2031 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 878:
#line 2033 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 879:
#line 2035 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 880:
#line 2037 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 881:
#line 2039 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 882:
#line 2041 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 883:
#line 2043 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 884:
#line 2044 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 885:
#line 2046 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 886:
#line 2048 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 887:
#line 2049 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 888:
#line 2050 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 889:
#line 2052 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 890:
#line 2054 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 891:
#line 2055 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 892:
#line 2056 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 893:
#line 2057 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 894:
#line 2059 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 895:
#line 2061 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 896:
#line 2065 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 897:
#line 2068 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 898:
#line 2071 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 899:
#line 2075 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 900:
#line 2079 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 901:
#line 2084 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str),
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 902:
#line 2088 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 903:
#line 2089 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 904:
#line 2090 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 905:
#line 2092 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 906:
#line 2093 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 907:
#line 2095 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 908:
#line 2099 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 909:
#line 2100 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 910:
#line 2101 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 911:
#line 2103 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 912:
#line 2106 "frame/parser.Y"
    {fr->markerPolygonPointCmd((yyvsp[(1) - (7)].integer),(yyvsp[(7) - (7)].str),(Coord::CoordSystem)(yyvsp[(4) - (7)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),(Coord::SkyFormat)(yyvsp[(6) - (7)].integer));;}
    break;

  case 913:
#line 2109 "frame/parser.Y"
    {fr->markerPolygonPointVarCmd((yyvsp[(1) - (8)].integer),(yyvsp[(8) - (8)].str),(Coord::CoordSystem)(yyvsp[(4) - (8)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (8)].integer),(Coord::SkyFormat)(yyvsp[(6) - (8)].integer));;}
    break;

  case 914:
#line 2112 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 915:
#line 2115 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 916:
#line 2118 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 917:
#line 2119 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 918:
#line 2123 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 919:
#line 2127 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 920:
#line 2129 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 921:
#line 2130 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 922:
#line 2132 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 923:
#line 2135 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 924:
#line 2138 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 925:
#line 2139 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 926:
#line 2141 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 927:
#line 2142 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 928:
#line 2143 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 929:
#line 2144 "frame/parser.Y"
    {fr->markerGlyphFileCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 930:
#line 2145 "frame/parser.Y"
    {fr->markerGlyphSizeCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 931:
#line 2147 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 932:
#line 2148 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 933:
#line 2150 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 934:
#line 2151 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 935:
#line 2154 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 936:
#line 2157 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 937:
#line 2158 "frame/parser.Y"
    {fr->markerDashListCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 938:
#line 2160 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 939:
#line 2161 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 943:
#line 2166 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 944:
#line 2167 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 945:
#line 2169 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 946:
#line 2171 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 947:
#line 2173 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 948:
#line 2174 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 952:
#line 2180 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 953:
#line 2181 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 954:
#line 2182 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 955:
#line 2183 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 956:
#line 2184 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 957:
#line 2185 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 958:
#line 2186 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 959:
#line 2187 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 960:
#line 2188 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 961:
#line 2189 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 962:
#line 2191 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 963:
#line 2193 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 964:
#line 2194 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 965:
#line 2195 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 966:
#line 2196 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 967:
#line 2197 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 968:
#line 2199 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 969:
#line 2200 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 970:
#line 2201 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 971:
#line 2202 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 972:
#line 2203 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 973:
#line 2205 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 974:
#line 2206 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 975:
#line 2207 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 976:
#line 2208 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 977:
#line 2209 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 978:
#line 2210 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 979:
#line 2211 "frame/parser.Y"
    {fr->markerDashListCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 980:
#line 2214 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 981:
#line 2215 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 982:
#line 2216 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 983:
#line 2217 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 984:
#line 2218 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 985:
#line 2219 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 986:
#line 2220 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 987:
#line 2221 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 988:
#line 2222 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 989:
#line 2223 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 990:
#line 2224 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 991:
#line 2225 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 992:
#line 2226 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 993:
#line 2227 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 994:
#line 2228 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 995:
#line 2229 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 996:
#line 2230 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 997:
#line 2231 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 998:
#line 2232 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 999:
#line 2233 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 1000:
#line 2234 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 1001:
#line 2237 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 1002:
#line 2238 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1003:
#line 2239 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1004:
#line 2240 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1005:
#line 2241 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1006:
#line 2243 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 1007:
#line 2253 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1008:
#line 2261 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1009:
#line 2270 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1010:
#line 2278 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1011:
#line 2284 "frame/parser.Y"
    {fr->createPolygonCanvasVarCmd((yyvsp[(4) - (5)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1012:
#line 2290 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1013:
#line 2297 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1014:
#line 2305 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1015:
#line 2313 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1016:
#line 2319 "frame/parser.Y"
    {fr->createGlyphCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].str), 0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1017:
#line 2325 "frame/parser.Y"
    {fr->createGlyphCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].str), (yyvsp[(5) - (7)].integer), (yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1018:
#line 2330 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1019:
#line 2335 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1020:
#line 2340 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1021:
#line 2345 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1022:
#line 2350 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1023:
#line 2355 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1024:
#line 2360 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1025:
#line 2369 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer),
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1026:
#line 2379 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1027:
#line 2389 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1028:
#line 2398 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1029:
#line 2406 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1030:
#line 2416 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1031:
#line 2426 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1032:
#line 2436 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1033:
#line 2448 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1034:
#line 2457 "frame/parser.Y"
    {fr->createCompositeCmd(
	    (yyvsp[(2) - (3)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1036:
#line 2465 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 1037:
#line 2467 "frame/parser.Y"
    {
	  if ((yyvsp[(1) - (1)].integer) < 0 || (yyvsp[(1) - (1)].integer) > 1) {
	    fr->error("composite operation must be 0 (union) or 1 (intersection)");
	    YYERROR;
	  }
	  (yyval.integer)=(yyvsp[(1) - (1)].integer);
	;}
    break;

  case 1038:
#line 2476 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 1039:
#line 2478 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 1040:
#line 2480 "frame/parser.Y"
    {
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 1041:
#line 2485 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 1042:
#line 2488 "frame/parser.Y"
    {fr->markerDeleteAllCmd(0);;}
    break;

  case 1043:
#line 2489 "frame/parser.Y"
    {fr->markerDeleteAllCmd(1);;}
    break;

  case 1044:
#line 2490 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerDeleteAllCmd(0);
        ;}
    break;

  case 1045:
#line 2497 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1046:
#line 2499 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1047:
#line 2500 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 1048:
#line 2503 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 1049:
#line 2504 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 1050:
#line 2505 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 1051:
#line 2506 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 1052:
#line 2507 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 1053:
#line 2508 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 1054:
#line 2509 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 1056:
#line 2513 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 1057:
#line 2514 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 1058:
#line 2515 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 1059:
#line 2516 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1060:
#line 2517 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1061:
#line 2520 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(yyvsp[(6) - (8)].str),(Coord::CoordSystem)(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 1062:
#line 2522 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 1063:
#line 2524 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 1064:
#line 2526 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 1065:
#line 2528 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 1066:
#line 2530 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1067:
#line 2532 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsDataCmd((yyvsp[(1) - (6)].integer),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1068:
#line 2534 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsDataAllCmd((Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1069:
#line 2536 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsFieldsCmd();;}
    break;

  case 1070:
#line 2538 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 1071:
#line 2539 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1072:
#line 2540 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1073:
#line 2542 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1074:
#line 2544 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1075:
#line 2547 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1076:
#line 2549 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1077:
#line 2550 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1078:
#line 2551 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1079:
#line 2553 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1080:
#line 2555 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1081:
#line 2558 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer),
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1082:
#line 2561 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1083:
#line 2562 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1084:
#line 2563 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1085:
#line 2564 "frame/parser.Y"
    {fr->getMarkerCompassEndCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1086:
#line 2565 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1087:
#line 2567 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1088:
#line 2568 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1089:
#line 2569 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1090:
#line 2570 "frame/parser.Y"
    {fr->getMarkerCompositeAreaCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1091:
#line 2571 "frame/parser.Y"
    {fr->getMarkerCompositeOperationCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1092:
#line 2572 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1093:
#line 2573 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1094:
#line 2575 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1095:
#line 2577 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1096:
#line 2579 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1097:
#line 2581 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer),
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1098:
#line 2583 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1099:
#line 2584 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1100:
#line 2586 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1101:
#line 2588 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1102:
#line 2590 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1103:
#line 2591 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1104:
#line 2592 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1105:
#line 2593 "frame/parser.Y"
    {fr->getMarkerLineEndCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1106:
#line 2595 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1107:
#line 2597 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1108:
#line 2600 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1109:
#line 2603 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1110:
#line 2604 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1111:
#line 2606 "frame/parser.Y"
    {fr->getMarkerPolygonPointCmd((yyvsp[(1) - (6)].integer),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),(Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1112:
#line 2609 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1113:
#line 2612 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer),
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1114:
#line 2615 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1115:
#line 2616 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1116:
#line 2617 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1117:
#line 2618 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1118:
#line 2620 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1119:
#line 2622 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1120:
#line 2624 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1121:
#line 2625 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1122:
#line 2627 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1123:
#line 2628 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1124:
#line 2629 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1125:
#line 2630 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1126:
#line 2631 "frame/parser.Y"
    {fr->getMarkerGlyphFileCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1127:
#line 2632 "frame/parser.Y"
    {fr->getMarkerGlyphSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1128:
#line 2633 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1129:
#line 2635 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1130:
#line 2636 "frame/parser.Y"
    {fr->getMarkerVectorEndCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1131:
#line 2638 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1132:
#line 2640 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1133:
#line 2642 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1134:
#line 2643 "frame/parser.Y"
    {fr->getMarkerDashListCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1136:
#line 2645 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1137:
#line 2646 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1138:
#line 2648 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1139:
#line 2650 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1140:
#line 2651 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1141:
#line 2652 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1143:
#line 2654 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1145:
#line 2658 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1146:
#line 2659 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1147:
#line 2660 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1148:
#line 2661 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1149:
#line 2662 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1150:
#line 2663 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1151:
#line 2665 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1152:
#line 2666 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1153:
#line 2668 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1154:
#line 2669 "frame/parser.Y"
    {fr->getMarkerDashListCmd();;}
    break;

  case 1155:
#line 2672 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1156:
#line 2673 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1157:
#line 2674 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1158:
#line 2675 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1159:
#line 2678 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1160:
#line 2679 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1161:
#line 2682 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1162:
#line 2683 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1163:
#line 2686 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1164:
#line 2687 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1165:
#line 2690 "frame/parser.Y"
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

  case 1166:
#line 2703 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1167:
#line 2704 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1168:
#line 2708 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1169:
#line 2709 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1170:
#line 2713 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1171:
#line 2714 "frame/parser.Y"
    {fr->markerLayerCmd(Base::FOOTPRINT);;}
    break;

  case 1172:
#line 2719 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), 0, propQMask, propQValue, taglist);;}
    break;

  case 1173:
#line 2723 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), 1, propQMask, propQValue, taglist);;}
    break;

  case 1174:
#line 2728 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str),0,"green",Coord::PHYSICAL,Coord::ICRS);;}
    break;

  case 1175:
#line 2730 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1176:
#line 2733 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer),0,"green",Coord::PHYSICAL,Coord::ICRS);;}
    break;

  case 1177:
#line 2735 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1178:
#line 2738 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (2)].str), "green");;}
    break;

  case 1179:
#line 2740 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));;}
    break;

  case 1180:
#line 2743 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1181:
#line 2744 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1182:
#line 2745 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1183:
#line 2746 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1184:
#line 2747 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1185:
#line 2748 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1186:
#line 2750 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1189:
#line 2757 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1190:
#line 2758 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1191:
#line 2759 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1192:
#line 2760 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1193:
#line 2761 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1194:
#line 2762 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1197:
#line 2767 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1198:
#line 2768 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1199:
#line 2769 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1200:
#line 2770 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1201:
#line 2771 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1202:
#line 2772 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1203:
#line 2773 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1204:
#line 2774 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1205:
#line 2775 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1206:
#line 2776 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1207:
#line 2777 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1208:
#line 2778 "frame/parser.Y"
    {(yyval.integer) = Marker::FILL;;}
    break;

  case 1211:
#line 2785 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1212:
#line 2786 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1214:
#line 2790 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(1) - (6)].str), (Base::MarkerFormat)(yyvsp[(2) - (6)].integer), (Coord::CoordSystem)(yyvsp[(3) - (6)].integer), (Coord::SkyFrame)(yyvsp[(4) - (6)].integer), (Coord::SkyFormat)(yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].integer), 0);;}
    break;

  case 1215:
#line 2792 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer), 1);;}
    break;

  case 1216:
#line 2793 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1217:
#line 2796 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1218:
#line 2797 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1219:
#line 2798 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1220:
#line 2799 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1221:
#line 2800 "frame/parser.Y"
    {fr->markerSelectFirstCmd();;}
    break;

  case 1222:
#line 2801 "frame/parser.Y"
    {fr->markerSelectLastCmd();;}
    break;

  case 1223:
#line 2804 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1224:
#line 2805 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1227:
#line 2813 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1228:
#line 2816 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1229:
#line 2817 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1233:
#line 2824 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1234:
#line 2827 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1235:
#line 2831 "frame/parser.Y"
    {fr->layerCreateCmd();;}
    break;

  case 1236:
#line 2832 "frame/parser.Y"
    {fr->layerCreateCmd();;}
    break;

  case 1237:
#line 2833 "frame/parser.Y"
    {fr->layerNoCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1238:
#line 2834 "frame/parser.Y"
    {fr->layerNoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1239:
#line 2835 "frame/parser.Y"
    {fr->layerColorCmd(0,(yyvsp[(2) - (2)].str));;}
    break;

  case 1240:
#line 2836 "frame/parser.Y"
    {fr->layerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1241:
#line 2837 "frame/parser.Y"
    {fr->layerBlendCmd(0,(FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1242:
#line 2838 "frame/parser.Y"
    {fr->layerBlendCmd((yyvsp[(1) - (3)].integer),(FitsMask::MaskBlend)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1243:
#line 2839 "frame/parser.Y"
    {fr->layerTransparencyCmd(0,(yyvsp[(2) - (2)].real));;}
    break;

  case 1244:
#line 2840 "frame/parser.Y"
    {fr->layerTransparencyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 1245:
#line 2841 "frame/parser.Y"
    {fr->layerViewCmd(0,(yyvsp[(2) - (2)].integer));;}
    break;

  case 1246:
#line 2842 "frame/parser.Y"
    {fr->layerViewCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1247:
#line 2844 "frame/parser.Y"
    {fr->layerShowCmd(0);;}
    break;

  case 1248:
#line 2845 "frame/parser.Y"
    {fr->layerShowCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1249:
#line 2846 "frame/parser.Y"
    {fr->layerHideCmd(0);;}
    break;

  case 1250:
#line 2847 "frame/parser.Y"
    {fr->layerHideCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1251:
#line 2848 "frame/parser.Y"
    {fr->layerDeleteCmd(0);;}
    break;

  case 1252:
#line 2849 "frame/parser.Y"
    {fr->layerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1253:
#line 2850 "frame/parser.Y"
    {fr->layerUpCmd(0);;}
    break;

  case 1254:
#line 2851 "frame/parser.Y"
    {fr->layerUpCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1255:
#line 2852 "frame/parser.Y"
    {fr->layerDownCmd(0);;}
    break;

  case 1256:
#line 2853 "frame/parser.Y"
    {fr->layerDownCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1257:
#line 2854 "frame/parser.Y"
    {fr->layerTopCmd(0);;}
    break;

  case 1258:
#line 2855 "frame/parser.Y"
    {fr->layerTopCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1259:
#line 2856 "frame/parser.Y"
    {fr->layerBottomCmd(0);;}
    break;

  case 1260:
#line 2857 "frame/parser.Y"
    {fr->layerBottomCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1261:
#line 2860 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1262:
#line 2861 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1263:
#line 2862 "frame/parser.Y"
    {fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1264:
#line 2863 "frame/parser.Y"
    {fr->maskRangeCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 1265:
#line 2864 "frame/parser.Y"
    {fr->maskSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1266:
#line 2865 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1267:
#line 2866 "frame/parser.Y"
    {fr->maskBlendCmd((FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1268:
#line 2867 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1269:
#line 2873 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1270:
#line 2874 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1271:
#line 2875 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1272:
#line 2876 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1273:
#line 2880 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1274:
#line 2881 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1275:
#line 2883 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1276:
#line 2888 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1278:
#line 2890 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1280:
#line 2892 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1281:
#line 2895 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1282:
#line 2897 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1283:
#line 2902 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1284:
#line 2905 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1285:
#line 2906 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1286:
#line 2907 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1287:
#line 2910 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1288:
#line 2912 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1289:
#line 2916 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1290:
#line 2917 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1291:
#line 2921 "frame/parser.Y"
    {fr->psColorSpaceCmd((PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1292:
#line 2922 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1293:
#line 2923 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1294:
#line 2924 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 1295:
#line 2930 "frame/parser.Y"
    {fr->precCmd((yyvsp[(1) - (9)].integer),(yyvsp[(2) - (9)].integer),(yyvsp[(3) - (9)].integer),(yyvsp[(4) - (9)].integer),(yyvsp[(5) - (9)].integer),(yyvsp[(6) - (9)].integer),(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 1296:
#line 2931 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->precCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 1297:
#line 2937 "frame/parser.Y"
    {(yyval.integer) = BW;;}
    break;

  case 1298:
#line 2938 "frame/parser.Y"
    {(yyval.integer) = GRAY;;}
    break;

  case 1299:
#line 2939 "frame/parser.Y"
    {(yyval.integer) = RGB;;}
    break;

  case 1300:
#line 2940 "frame/parser.Y"
    {(yyval.integer) = CMYK;;}
    break;

  case 1303:
#line 2948 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1304:
#line 2950 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1305:
#line 2951 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1306:
#line 2952 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1307:
#line 2956 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1308:
#line 2957 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1309:
#line 2958 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1310:
#line 2959 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1311:
#line 2962 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1312:
#line 2963 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1313:
#line 2964 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::FIP;;}
    break;

  case 1314:
#line 2967 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1315:
#line 2968 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1316:
#line 2969 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1317:
#line 2972 "frame/parser.Y"
    {fr->revealCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1318:
#line 2973 "frame/parser.Y"
    {fr->revealClearCmd();;}
    break;

  case 1319:
#line 2976 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1320:
#line 2977 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1321:
#line 2978 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1322:
#line 2982 "frame/parser.Y"
    {fr->setMultiColorSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1323:
#line 2985 "frame/parser.Y"
    {fr->setHLSChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1324:
#line 2986 "frame/parser.Y"
    {fr->setHLSChannelCmd("hue");;}
    break;

  case 1325:
#line 2987 "frame/parser.Y"
    {fr->setHLSChannelCmd("saturation");;}
    break;

  case 1326:
#line 2988 "frame/parser.Y"
    {fr->setHLSSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1327:
#line 2989 "frame/parser.Y"
    {fr->setHLSViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1328:
#line 2992 "frame/parser.Y"
    {fr->setHSVChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1329:
#line 2993 "frame/parser.Y"
    {fr->setHSVChannelCmd("hue");;}
    break;

  case 1330:
#line 2994 "frame/parser.Y"
    {fr->setHSVChannelCmd("saturation");;}
    break;

  case 1331:
#line 2995 "frame/parser.Y"
    {fr->setHSVChannelCmd("value");;}
    break;

  case 1332:
#line 2996 "frame/parser.Y"
    {fr->setHSVSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1333:
#line 2997 "frame/parser.Y"
    {fr->setHSVViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1334:
#line 3000 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1335:
#line 3001 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (2)].real))));;}
    break;

  case 1337:
#line 3003 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (2)].real))));;}
    break;

  case 1338:
#line 3004 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (3)].real))));;}
    break;

  case 1339:
#line 3007 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1340:
#line 3008 "frame/parser.Y"
    {fr->rotateMotionCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1341:
#line 3009 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1347:
#line 3017 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1348:
#line 3020 "frame/parser.Y"
    {fr->savePixelMaskFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1349:
#line 3021 "frame/parser.Y"
    {fr->savePixelMaskChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1350:
#line 3022 "frame/parser.Y"
    {fr->savePixelMaskSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1351:
#line 3026 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1352:
#line 3028 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1353:
#line 3030 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1370:
#line 3051 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1371:
#line 3052 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1372:
#line 3053 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1373:
#line 3056 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1374:
#line 3057 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1375:
#line 3058 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1376:
#line 3061 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1377:
#line 3062 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1378:
#line 3063 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1379:
#line 3066 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1380:
#line 3067 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1381:
#line 3068 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1383:
#line 3072 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1384:
#line 3073 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1385:
#line 3074 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1386:
#line 3077 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1387:
#line 3078 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1388:
#line 3079 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1389:
#line 3083 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1390:
#line 3085 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1391:
#line 3087 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1392:
#line 3090 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1393:
#line 3091 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1394:
#line 3092 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1395:
#line 3095 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1396:
#line 3096 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1397:
#line 3097 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1398:
#line 3101 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1399:
#line 3103 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1400:
#line 3105 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1401:
#line 3108 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1402:
#line 3109 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1403:
#line 3110 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1404:
#line 3113 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1405:
#line 3114 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1406:
#line 3115 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1407:
#line 3119 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1408:
#line 3121 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1409:
#line 3123 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1410:
#line 3126 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1411:
#line 3127 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1412:
#line 3128 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1413:
#line 3131 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1414:
#line 3132 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1415:
#line 3133 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1416:
#line 3136 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1417:
#line 3137 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1418:
#line 3138 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1419:
#line 3142 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1420:
#line 3144 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1421:
#line 3146 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1422:
#line 3150 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1423:
#line 3154 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1424:
#line 3156 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1425:
#line 3160 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1426:
#line 3163 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1427:
#line 3164 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1428:
#line 3165 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1429:
#line 3166 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1430:
#line 3169 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1431:
#line 3171 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1432:
#line 3173 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1433:
#line 3176 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 1435:
#line 3180 "frame/parser.Y"
    {fr->sliceCmd(2,(yyvsp[(1) - (1)].integer));;}
    break;

  case 1436:
#line 3181 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1437:
#line 3182 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1438:
#line 3185 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1439:
#line 3186 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1440:
#line 3190 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1442:
#line 3192 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1445:
#line 3197 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1446:
#line 3198 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1447:
#line 3199 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1448:
#line 3202 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1449:
#line 3203 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1450:
#line 3204 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1451:
#line 3207 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1452:
#line 3209 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1453:
#line 3214 "frame/parser.Y"
    {fr->wcsAlign2Cmd((yyvsp[(2) - (4)].integer), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1454:
#line 3215 "frame/parser.Y"
    {fr->wcsAlignPointerClearCmd();;}
    break;

  case 1455:
#line 3218 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1456:
#line 3225 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1457:
#line 3227 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1458:
#line 3229 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1459:
#line 3234 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1461:
#line 3238 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1462:
#line 3239 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1463:
#line 3240 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1464:
#line 3242 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1465:
#line 3244 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1466:
#line 3249 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 12393 "frame/parser.C"
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


#line 3253 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

