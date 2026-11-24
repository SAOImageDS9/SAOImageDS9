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
#define YYFINAL  411
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5987

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  400
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  247
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1480
/* YYNRULES -- Number of states.  */
#define YYNSTATES  3220

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
     485,   487,   489,   491,   493,   495,   497,   499,   500,   502,
     504,   506,   508,   510,   512,   514,   515,   517,   519,   521,
     522,   524,   526,   528,   530,   532,   535,   538,   541,   544,
     547,   550,   553,   556,   559,   562,   564,   567,   570,   573,
     575,   578,   580,   583,   585,   588,   590,   593,   596,   603,
     606,   611,   614,   617,   620,   624,   627,   630,   632,   635,
     637,   640,   645,   651,   654,   658,   664,   671,   673,   675,
     677,   685,   697,   706,   719,   721,   724,   727,   731,   733,
     735,   738,   741,   744,   747,   751,   755,   758,   761,   763,
     765,   767,   769,   771,   773,   775,   778,   781,   784,   786,
     790,   793,   796,   799,   805,   815,   825,   835,   843,   845,
     848,   850,   856,   866,   876,   886,   894,   896,   899,   906,
     909,   913,   916,   919,   922,   925,   928,   931,   935,   938,
     942,   951,   960,   974,   988,  1001,  1014,  1016,  1017,  1019,
    1022,  1024,  1029,  1036,  1038,  1040,  1042,  1044,  1046,  1048,
    1050,  1052,  1054,  1059,  1066,  1070,  1075,  1081,  1083,  1086,
    1091,  1098,  1099,  1106,  1115,  1118,  1122,  1126,  1130,  1131,
    1136,  1141,  1146,  1151,  1155,  1159,  1161,  1165,  1171,  1176,
    1181,  1185,  1188,  1189,  1191,  1193,  1195,  1197,  1199,  1203,
    1206,  1207,  1210,  1213,  1216,  1219,  1222,  1225,  1228,  1231,
    1234,  1237,  1240,  1243,  1246,  1249,  1251,  1254,  1257,  1260,
    1265,  1269,  1272,  1275,  1278,  1281,  1284,  1286,  1290,  1293,
    1296,  1299,  1302,  1304,  1307,  1316,  1319,  1321,  1324,  1326,
    1329,  1331,  1336,  1340,  1343,  1345,  1353,  1362,  1370,  1379,
    1381,  1383,  1385,  1388,  1390,  1392,  1395,  1397,  1398,  1401,
    1404,  1406,  1409,  1410,  1413,  1416,  1418,  1420,  1423,  1426,
    1429,  1431,  1433,  1435,  1437,  1439,  1441,  1442,  1444,  1447,
    1449,  1454,  1460,  1461,  1464,  1466,  1472,  1475,  1478,  1480,
    1482,  1484,  1486,  1489,  1491,  1494,  1496,  1498,  1501,  1503,
    1507,  1509,  1510,  1512,  1514,  1515,  1517,  1523,  1530,  1534,
    1541,  1545,  1547,  1551,  1553,  1555,  1557,  1561,  1568,  1576,
    1582,  1585,  1587,  1593,  1598,  1600,  1604,  1605,  1607,  1610,
    1612,  1617,  1619,  1622,  1624,  1627,  1631,  1634,  1636,  1639,
    1641,  1646,  1649,  1651,  1653,  1657,  1659,  1662,  1666,  1669,
    1670,  1672,  1674,  1679,  1682,  1683,  1685,  1689,  1694,  1699,
    1700,  1702,  1704,  1706,  1708,  1711,  1714,  1717,  1720,  1722,
    1724,  1726,  1728,  1730,  1732,  1734,  1735,  1737,  1739,  1741,
    1743,  1745,  1747,  1749,  1751,  1753,  1755,  1757,  1759,  1761,
    1763,  1766,  1768,  1771,  1773,  1776,  1779,  1782,  1785,  1787,
    1789,  1792,  1794,  1795,  1797,  1799,  1802,  1803,  1805,  1806,
    1808,  1809,  1811,  1812,  1814,  1815,  1817,  1818,  1821,  1824,
    1825,  1827,  1830,  1832,  1839,  1845,  1847,  1849,  1851,  1854,
    1857,  1860,  1862,  1864,  1866,  1868,  1871,  1873,  1875,  1877,
    1880,  1882,  1884,  1886,  1889,  1892,  1895,  1896,  1898,  1899,
    1901,  1903,  1905,  1907,  1909,  1911,  1913,  1915,  1918,  1921,
    1924,  1926,  1929,  1933,  1935,  1938,  1941,  1946,  1952,  1954,
    1965,  1967,  1970,  1974,  1978,  1981,  1984,  1987,  1990,  1993,
    1996,  1999,  2004,  2009,  2014,  2018,  2022,  2028,  2033,  2038,
    2043,  2047,  2051,  2055,  2059,  2063,  2067,  2070,  2073,  2078,
    2082,  2086,  2090,  2094,  2099,  2104,  2109,  2114,  2120,  2125,
    2132,  2140,  2145,  2150,  2156,  2159,  2163,  2167,  2171,  2175,
    2179,  2183,  2187,  2190,  2194,  2198,  2202,  2206,  2211,  2215,
    2221,  2228,  2232,  2236,  2241,  2245,  2249,  2253,  2257,  2261,
    2267,  2271,  2275,  2280,  2284,  2287,  2290,  2292,  2296,  2301,
    2306,  2311,  2316,  2321,  2328,  2333,  2338,  2344,  2349,  2354,
    2359,  2364,  2370,  2375,  2382,  2390,  2395,  2400,  2406,  2412,
    2418,  2424,  2430,  2436,  2444,  2450,  2456,  2463,  2468,  2473,
    2478,  2483,  2488,  2495,  2500,  2505,  2511,  2517,  2523,  2529,
    2535,  2542,  2548,  2556,  2565,  2571,  2577,  2584,  2588,  2592,
    2596,  2600,  2605,  2609,  2615,  2622,  2626,  2630,  2635,  2639,
    2643,  2647,  2651,  2655,  2661,  2665,  2669,  2674,  2679,  2684,
    2688,  2694,  2699,  2704,  2707,  2711,  2718,  2725,  2727,  2729,
    2731,  2734,  2737,  2740,  2744,  2748,  2751,  2764,  2767,  2770,
    2772,  2776,  2781,  2784,  2785,  2789,  2791,  2794,  2797,  2800,
    2803,  2806,  2811,  2816,  2821,  2826,  2830,  2834,  2839,  2845,
    2854,  2861,  2871,  2878,  2886,  2897,  2909,  2922,  2932,  2938,
    2945,  2949,  2955,  2961,  2967,  2974,  2980,  2985,  2990,  2995,
    3005,  3016,  3028,  3038,  3045,  3052,  3059,  3066,  3073,  3080,
    3087,  3094,  3101,  3109,  3117,  3120,  3125,  3130,  3135,  3140,
    3146,  3151,  3156,  3162,  3168,  3172,  3177,  3182,  3187,  3195,
    3205,  3212,  3223,  3235,  3248,  3258,  3262,  3265,  3269,  3275,
    3281,  3289,  3294,  3298,  3302,  3309,  3317,  3326,  3334,  3342,
    3347,  3352,  3357,  3367,  3372,  3376,  3381,  3389,  3397,  3400,
    3404,  3408,  3412,  3417,  3420,  3423,  3428,  3433,  3444,  3448,
    3453,  3455,  3459,  3462,  3465,  3468,  3471,  3475,  3481,  3486,
    3492,  3495,  3498,  3501,  3504,  3508,  3511,  3514,  3517,  3521,
    3524,  3528,  3533,  3537,  3541,  3548,  3553,  3556,  3560,  3563,
    3566,  3571,  3575,  3579,  3582,  3586,  3588,  3591,  3593,  3596,
    3599,  3602,  3606,  3608,  3610,  3612,  3614,  3617,  3619,  3622,
    3625,  3627,  3630,  3633,  3635,  3638,  3640,  3642,  3644,  3646,
    3648,  3650,  3652,  3654,  3655,  3657,  3660,  3663,  3666,  3670,
    3676,  3684,  3692,  3699,  3705,  3711,  3718,  3725,  3732,  3738,
    3745,  3752,  3759,  3766,  3773,  3780,  3787,  3794,  3802,  3814,
    3822,  3830,  3838,  3848,  3858,  3869,  3882,  3895,  3899,  3902,
    3903,  3905,  3909,  3914,  3919,  3924,  3925,  3927,  3929,  3934,
    3939,  3941,  3943,  3945,  3947,  3949,  3951,  3953,  3955,  3958,
    3960,  3962,  3964,  3968,  3972,  3981,  3988,  3999,  4007,  4015,
    4021,  4028,  4035,  4039,  4042,  4045,  4049,  4054,  4060,  4066,
    4072,  4076,  4081,  4087,  4093,  4099,  4105,  4108,  4112,  4116,
    4120,  4126,  4130,  4134,  4138,  4142,  4146,  4151,  4157,  4163,
    4169,  4175,  4179,  4184,  4190,  4196,  4199,  4202,  4206,  4210,
    4216,  4223,  4230,  4234,  4238,  4242,  4249,  4256,  4262,  4268,
    4271,  4275,  4279,  4285,  4292,  4296,  4299,  4302,  4306,  4309,
    4313,  4316,  4320,  4324,  4330,  4337,  4340,  4343,  4346,  4349,
    4351,  4356,  4361,  4363,  4366,  4369,  4372,  4375,  4378,  4381,
    4384,  4388,  4391,  4395,  4398,  4402,  4404,  4406,  4408,  4410,
    4412,  4414,  4415,  4418,  4419,  4422,  4423,  4425,  4426,  4427,
    4429,  4431,  4433,  4435,  4437,  4445,  4454,  4457,  4464,  4467,
    4474,  4477,  4481,  4484,  4486,  4488,  4492,  4496,  4498,  4503,
    4506,  4508,  4512,  4516,  4521,  4525,  4529,  4533,  4535,  4537,
    4539,  4541,  4543,  4545,  4547,  4549,  4551,  4553,  4555,  4557,
    4559,  4561,  4563,  4566,  4567,  4568,  4571,  4578,  4586,  4589,
    4591,  4595,  4597,  4601,  4603,  4605,  4607,  4610,  4613,  4615,
    4619,  4620,  4621,  4624,  4627,  4629,  4633,  4639,  4640,  4642,
    4644,  4647,  4650,  4654,  4657,  4661,  4664,  4668,  4671,  4675,
    4677,  4680,  4682,  4685,  4687,  4690,  4692,  4695,  4697,  4700,
    4702,  4705,  4707,  4710,  4712,  4715,  4718,  4722,  4725,  4728,
    4731,  4734,  4736,  4738,  4740,  4742,  4747,  4750,  4754,  4758,
    4761,  4765,  4768,  4771,  4774,  4778,  4782,  4786,  4789,  4793,
    4795,  4799,  4803,  4805,  4808,  4811,  4814,  4817,  4827,  4834,
    4836,  4838,  4840,  4842,  4845,  4848,  4852,  4856,  4858,  4861,
    4865,  4869,  4871,  4874,  4876,  4878,  4880,  4882,  4884,  4886,
    4888,  4890,  4893,  4896,  4901,  4904,  4907,  4910,  4913,  4916,
    4921,  4924,  4927,  4930,  4933,  4936,  4941,  4943,  4946,  4949,
    4952,  4956,  4958,  4960,  4962,  4965,  4968,  4971,  4974,  4977,
    4980,  4983,  4986,  4989,  4993,  4997,  5001,  5005,  5009,  5013,
    5015,  5018,  5021,  5024,  5028,  5031,  5035,  5039,  5043,  5047,
    5051,  5055,  5058,  5061,  5064,  5067,  5070,  5073,  5076,  5079,
    5082,  5085,  5088,  5091,  5094,  5097,  5101,  5105,  5109,  5112,
    5115,  5118,  5122,  5126,  5130,  5133,  5136,  5139,  5142,  5145,
    5148,  5152,  5156,  5160,  5163,  5166,  5169,  5172,  5175,  5178,
    5182,  5186,  5190,  5193,  5196,  5199,  5202,  5205,  5208,  5211,
    5214,  5217,  5221,  5225,  5229,  5234,  5241,  5244,  5246,  5248,
    5250,  5252,  5254,  5255,  5261,  5263,  5270,  5274,  5277,  5282,
    5284,  5287,  5290,  5293,  5297,  5301,  5304,  5307,  5310,  5313,
    5316,  5319,  5323,  5326,  5329,  5333,  5335,  5339,  5344,  5347,
    5349,  5352,  5358,  5365,  5372,  5375,  5377,  5380,  5383,  5389,
    5396
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     401,     0,    -1,   104,   403,    -1,    46,   438,    -1,    43,
      71,     5,    -1,    43,    71,   404,    -1,    49,   443,    -1,
      63,    -1,    69,    -1,    70,   445,    -1,    74,   326,     5,
      -1,    75,   450,    -1,    76,   452,    -1,    84,   453,    -1,
      91,   464,    -1,    93,   466,    -1,    94,   467,    -1,   103,
     404,    -1,   129,   469,    -1,   139,   470,    -1,   152,   471,
      -1,   157,   522,    -1,   161,   525,    -1,   165,    -1,   166,
     404,    -1,   166,    71,     5,    -1,   171,   610,    -1,   172,
     609,    -1,   175,   531,    -1,   181,    15,     4,    -1,   198,
     534,    -1,   202,   552,    -1,   203,   553,    -1,   204,   554,
      -1,   207,   571,   555,    -1,   208,   592,    -1,   187,   591,
      -1,   220,   608,    -1,   224,    71,     5,    -1,   246,   593,
      -1,   248,   594,    -1,   249,   597,    -1,   270,    95,    -1,
     263,   599,    -1,   261,   598,    -1,   278,    -1,   274,   571,
     601,    -1,   280,   606,    -1,   281,   607,    -1,   283,   611,
      -1,   288,   613,    -1,   304,    -1,   310,   635,    -1,   329,
       4,    -1,   330,   431,    -1,   343,    -1,   345,   637,    -1,
     352,    -1,   355,   639,    -1,   356,   640,    -1,   386,   644,
      -1,   394,   645,    -1,     3,    -1,     4,    -1,   404,    -1,
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
      -1,   398,    -1,    27,    -1,    55,    -1,   154,    -1,    -1,
       4,    -1,    89,    -1,   168,    -1,   256,    -1,   257,    -1,
     271,    -1,   318,    -1,    -1,    33,    -1,   322,    -1,   209,
      -1,    -1,   225,    -1,    44,    -1,    45,    -1,   193,    -1,
     194,    -1,   350,   437,    -1,    50,   434,    -1,    81,   435,
      -1,   166,   436,    -1,   211,   604,    -1,    38,   605,    -1,
     300,   432,    -1,   290,   402,    -1,   323,     4,    -1,   331,
     402,    -1,   404,    -1,    18,   402,    -1,   320,   402,    -1,
     231,   433,    -1,   404,    -1,   320,   402,    -1,   404,    -1,
      71,     5,    -1,   404,    -1,    71,     5,    -1,   404,    -1,
      71,     5,    -1,   402,   402,    -1,   258,   402,   402,   402,
     402,   402,    -1,    11,   439,    -1,    78,     5,     5,     5,
      -1,   108,     4,    -1,   130,   440,    -1,   149,   441,    -1,
      57,   307,     4,    -1,   336,   442,    -1,   134,     5,    -1,
      63,    -1,   402,   402,    -1,   402,    -1,   402,   402,    -1,
     402,    11,   402,   402,    -1,   402,   402,    11,   402,   402,
      -1,   336,   402,    -1,   336,   402,   402,    -1,   336,   402,
      11,   402,   402,    -1,   336,   402,   402,    11,   402,   402,
      -1,    33,    -1,   322,    -1,   137,    -1,   402,   402,    11,
      63,     5,     5,     5,    -1,   402,   402,     4,   402,   402,
      11,    63,     5,     5,     5,     5,    -1,   402,   402,    11,
     402,   402,     5,     5,     5,    -1,   402,   402,     4,   402,
     402,    11,   402,   402,     5,     5,     5,     5,    -1,   402,
      -1,   402,   402,    -1,   336,   444,    -1,   224,   390,   404,
      -1,   137,    -1,   402,    -1,   402,   402,    -1,   293,   446,
      -1,   218,   447,    -1,   212,   448,    -1,   347,   402,   402,
      -1,   347,   224,   224,    -1,   392,   449,    -1,   265,   404,
      -1,   153,    -1,   199,    -1,   402,    -1,   212,    -1,   392,
      -1,   391,    -1,   347,    -1,     4,   418,    -1,   218,   418,
      -1,   285,     4,    -1,   277,    -1,   402,     4,     4,    -1,
      85,   402,    -1,   285,     4,    -1,   195,     4,    -1,     4,
     402,   402,     4,     4,    -1,   281,   402,   402,   402,   402,
     402,   402,     4,     4,    -1,   171,   402,   402,   402,   402,
     402,   402,     4,     4,    -1,   172,   402,   402,   402,   402,
     402,   402,     4,     4,    -1,   220,     4,     4,     5,     5,
       5,     4,    -1,    42,    -1,   219,   451,    -1,   121,    -1,
       4,   402,   402,     4,     4,    -1,   281,   402,   402,   402,
     402,   402,   402,     4,     4,    -1,   171,   402,   402,   402,
     402,   402,   402,     4,     4,    -1,   172,   402,   402,   402,
     402,   402,   402,     4,     4,    -1,   220,     4,     4,     5,
       5,     5,     4,    -1,   417,    -1,   200,   402,    -1,   347,
     402,   402,   402,   402,   402,    -1,    90,   455,    -1,   100,
       4,     4,    -1,   107,   456,    -1,   198,   457,    -1,   251,
     461,    -1,   288,   462,    -1,   321,   463,    -1,    32,   454,
      -1,   223,     4,     5,    -1,   278,     4,    -1,   278,     4,
       4,    -1,   321,     4,     4,     5,     4,     4,     4,     4,
      -1,   321,     4,    16,     5,     4,     4,     4,     4,    -1,
       5,     4,     4,   460,     4,     4,   417,   402,   458,   459,
     402,   402,     5,    -1,     5,     4,     4,   460,     4,     4,
     417,   402,   402,   459,   402,   402,     5,    -1,     5,     4,
       4,   460,     4,     4,   417,   402,   458,   402,   402,     5,
      -1,     5,     4,     4,   460,     4,     4,   417,   402,   402,
     402,   402,     5,    -1,   260,    -1,    -1,    32,    -1,    32,
       4,    -1,     5,    -1,     5,     5,     4,   404,    -1,     5,
       4,   404,     5,   412,   419,    -1,   212,    -1,   392,    -1,
     391,    -1,   347,    -1,   153,    -1,   199,    -1,   310,    -1,
      49,    -1,     5,    -1,     5,     5,     4,   404,    -1,     5,
       5,     4,   404,     4,     4,    -1,     5,   412,   419,    -1,
      32,     5,   412,   419,    -1,    32,     4,     5,   412,   419,
      -1,    69,    -1,     4,    69,    -1,     4,     5,     4,     4,
      -1,     4,     5,     4,     4,     4,     4,    -1,    -1,   402,
     402,   402,   402,   412,   419,    -1,    63,   411,   412,   419,
     402,   402,   412,   421,    -1,   330,   465,    -1,    42,   402,
     402,    -1,   219,   402,   402,    -1,   121,   402,   402,    -1,
      -1,   402,   402,   412,   419,    -1,    42,   402,   402,     4,
      -1,   219,   402,   402,     4,    -1,   121,   402,   402,     4,
      -1,   414,   402,   402,    -1,   412,   419,   411,    -1,   404,
      -1,   355,   402,   402,    -1,    42,   219,   414,   402,   402,
      -1,   219,   414,   402,   402,    -1,    42,   219,   412,   411,
      -1,   219,   412,   411,    -1,    34,     4,    -1,    -1,    33,
      -1,   322,    -1,   209,    -1,   402,    -1,    69,    -1,   161,
     128,     5,    -1,   179,     5,    -1,    -1,    43,    71,    -1,
      46,   474,    -1,    49,   476,    -1,    70,   477,    -1,    75,
     481,    -1,    74,   480,    -1,    76,   483,    -1,    84,   485,
      -1,    86,   488,    -1,    91,   489,    -1,    93,   490,    -1,
      95,   492,    -1,    94,   491,    -1,   101,   493,    -1,   103,
      -1,   138,   497,    -1,   157,   503,    -1,   166,    71,    -1,
     168,     5,     5,     4,    -1,   169,    96,   472,    -1,   171,
     511,    -1,   172,   510,    -1,   175,   495,    -1,   179,   494,
      -1,   181,    15,    -1,   212,    -1,   207,   571,   565,    -1,
     208,   505,    -1,   187,   504,    -1,   220,   509,    -1,   224,
      71,    -1,   246,    -1,   248,   507,    -1,   255,   325,   414,
     402,   402,     4,     4,     5,    -1,   281,   508,    -1,   283,
      -1,   310,   512,    -1,   329,    -1,   330,   513,    -1,   340,
      -1,   348,   414,   402,   402,    -1,   354,    96,   473,    -1,
     356,   520,    -1,   394,    -1,     5,     5,   402,   402,   414,
       4,   468,    -1,     5,     5,   402,   402,   412,   419,     4,
     468,    -1,     5,     5,   402,   402,   414,     4,   468,    -1,
       5,     5,   402,   402,   412,   419,     4,   468,    -1,   108,
      -1,   130,    -1,   149,    -1,    57,   307,    -1,    95,    -1,
     134,    -1,    78,   475,    -1,   197,    -1,    -1,   212,     5,
      -1,   112,     5,    -1,   130,    -1,   224,   390,    -1,    -1,
     458,   459,    -1,   402,   459,    -1,   293,    -1,   218,    -1,
     212,   478,    -1,   347,   191,    -1,   392,   479,    -1,   265,
      -1,   218,    -1,   285,    -1,    85,    -1,   285,    -1,   195,
      -1,    -1,   326,    -1,   191,   482,    -1,     4,    -1,     4,
     414,   402,   402,    -1,     4,   402,   402,   417,   402,    -1,
      -1,   191,   484,    -1,   200,    -1,     4,   402,   402,   417,
     402,    -1,   412,   419,    -1,    70,   486,    -1,    71,    -1,
      99,    -1,   100,    -1,   191,    -1,   236,   191,    -1,   211,
      -1,    76,   487,    -1,   310,    -1,   321,    -1,   321,     4,
      -1,    32,    -1,    32,   321,     4,    -1,   385,    -1,    -1,
     218,    -1,   293,    -1,    -1,   200,    -1,   402,   402,   412,
     419,   420,    -1,   414,   402,   402,   412,   419,   420,    -1,
     412,   419,   420,    -1,    63,   412,   419,   420,   412,   421,
      -1,   330,   412,   419,    -1,   414,    -1,   412,   419,   420,
      -1,   319,    -1,    34,    -1,   414,    -1,   412,   419,   420,
      -1,   412,   419,   411,   402,   402,     5,    -1,     4,   412,
     419,   411,   402,   402,     5,    -1,   414,   402,   402,     4,
       4,    -1,     5,   405,    -1,    70,    -1,   414,   402,   402,
       5,   405,    -1,     4,     4,     4,     4,    -1,    95,    -1,
     132,   223,   496,    -1,    -1,     4,    -1,   402,   402,    -1,
     226,    -1,    63,   412,   419,   420,    -1,    88,    -1,   108,
     500,    -1,    47,    -1,   128,   498,    -1,   132,   223,   501,
      -1,   163,   499,    -1,   164,    -1,   237,   223,    -1,   307,
      -1,   307,   412,   419,   421,    -1,   308,   502,    -1,   385,
      -1,     4,    -1,   414,   402,   402,    -1,     4,    -1,   185,
       5,    -1,     4,   185,     5,    -1,   356,     4,    -1,    -1,
       4,    -1,   405,    -1,   405,   414,   402,   402,    -1,   405,
       4,    -1,    -1,     4,    -1,   146,   176,   412,    -1,   146,
     176,     4,   412,    -1,   336,   176,   402,   412,    -1,    -1,
     245,    -1,   349,    -1,    88,    -1,   188,    -1,    71,   506,
      -1,    48,   506,    -1,   334,   506,    -1,   350,   506,    -1,
      71,    -1,   206,    -1,   273,    -1,   324,    -1,   334,    -1,
      88,    -1,    48,    -1,    -1,     4,    -1,   265,    -1,    65,
      -1,   324,    -1,   350,    -1,   324,    -1,    65,    -1,   324,
      -1,   350,    -1,    65,    -1,   324,    -1,   350,    -1,   149,
      -1,   272,    -1,   272,   213,    -1,   305,    -1,   305,   213,
      -1,    21,    -1,   350,   519,    -1,    50,   516,    -1,    81,
     517,    -1,   166,   518,    -1,   211,    -1,    38,    -1,   300,
     514,    -1,   290,    -1,    -1,    18,    -1,   320,    -1,   231,
     515,    -1,    -1,   320,    -1,    -1,    71,    -1,    -1,    71,
      -1,    -1,    71,    -1,    -1,   258,    -1,    -1,    15,   521,
      -1,   223,   413,    -1,    -1,   259,    -1,    90,   523,    -1,
     107,    -1,   412,   419,   420,   524,     5,     5,    -1,   412,
     419,   420,   524,     5,    -1,    20,    -1,   268,    -1,    19,
      -1,    43,    71,    -1,    46,   526,    -1,    84,   527,    -1,
      91,    -1,   102,    -1,   103,    -1,   109,    -1,   138,   528,
      -1,   157,    -1,   175,    -1,   182,    -1,   207,   529,    -1,
     254,    -1,   176,    -1,   310,    -1,   324,   412,    -1,   356,
     530,    -1,    79,     5,    -1,    -1,    32,    -1,    -1,    46,
      -1,    94,    -1,   217,    -1,   166,    -1,   296,    -1,   251,
      -1,   341,    -1,   412,    -1,    62,   412,    -1,   125,   412,
      -1,   196,   412,    -1,    17,    -1,   330,   412,    -1,   227,
       4,     4,    -1,   126,    -1,   210,     5,    -1,    95,   533,
      -1,   297,   132,   223,   532,    -1,   297,     4,     4,     4,
       4,    -1,   345,    -1,   356,   402,   402,   402,   402,   402,
     402,   402,   402,     4,    -1,     5,    -1,     5,     4,    -1,
       4,     4,    60,    -1,     4,     4,   412,    -1,   218,   404,
      -1,    26,   535,    -1,   122,   537,    -1,   138,   538,    -1,
     178,   551,    -1,   235,   549,    -1,   253,   550,    -1,     5,
      13,     5,   424,    -1,     5,    14,     5,   424,    -1,     5,
      65,     5,   424,    -1,     5,   215,   424,    -1,     5,   216,
     424,    -1,     5,   301,   422,     4,   424,    -1,     5,   312,
       4,   424,    -1,     5,   313,     4,   424,    -1,     5,   349,
       5,   424,    -1,   281,    94,   536,    -1,   172,    94,   536,
      -1,   171,    94,   536,    -1,     5,    13,     5,    -1,     5,
      14,     5,    -1,     5,    65,     5,    -1,     5,   215,    -1,
       5,   216,    -1,     5,   301,   422,     4,    -1,     5,   312,
       4,    -1,     5,   313,     4,    -1,     5,   349,     5,    -1,
       5,     5,   309,    -1,     5,    13,     5,   424,    -1,     5,
      14,     5,   424,    -1,     5,    65,     5,   424,    -1,     5,
     215,   423,   424,    -1,     5,     5,   309,   423,   424,    -1,
       5,   216,   423,   424,    -1,     5,   301,   422,     4,   423,
     424,    -1,     5,   317,   422,     4,     4,   423,   424,    -1,
       5,   312,     4,   424,    -1,     5,   313,     4,   424,    -1,
       5,   349,     5,   423,   424,    -1,   308,   539,    -1,   128,
      94,   540,    -1,   281,   176,   548,    -1,   281,    94,   547,
      -1,   172,   176,   548,    -1,   172,    94,   547,    -1,   171,
     176,   548,    -1,   171,    94,   547,    -1,   217,   541,    -1,
       5,    13,     5,    -1,     5,    14,     5,    -1,     5,    65,
       5,    -1,     5,   215,   423,    -1,     5,     5,   309,   423,
      -1,     5,   216,   423,    -1,     5,   301,   422,     4,   423,
      -1,     5,   317,   422,     4,     4,   423,    -1,     5,   312,
       4,    -1,     5,   313,     4,    -1,     5,   349,     5,   423,
      -1,     5,    13,     5,    -1,     5,    14,     5,    -1,     5,
      65,     5,    -1,     5,   215,   423,    -1,     5,   216,   423,
      -1,     5,   301,   422,     4,   423,    -1,     5,   312,     4,
      -1,     5,   313,     4,    -1,     5,   349,     5,   423,    -1,
     176,   181,   542,    -1,   181,   543,    -1,   176,   544,    -1,
     546,    -1,   176,   384,   545,    -1,     5,    13,     5,   424,
      -1,     5,    14,     5,   424,    -1,     5,    65,     5,   424,
      -1,     5,   215,   423,   424,    -1,     5,   216,   423,   424,
      -1,     5,   301,   422,     4,   423,   424,    -1,     5,   312,
       4,   424,    -1,     5,   313,     4,   424,    -1,     5,   349,
       5,   423,   424,    -1,     5,    13,     5,   424,    -1,     5,
      14,     5,   424,    -1,     5,    65,     5,   424,    -1,     5,
     215,   423,   424,    -1,     5,     5,   309,   423,   424,    -1,
       5,   216,   423,   424,    -1,     5,   301,   422,     4,   423,
     424,    -1,     5,   317,   422,     4,     4,   423,   424,    -1,
       5,   312,     4,   424,    -1,     5,   313,     4,   424,    -1,
       5,   349,     5,   423,   424,    -1,   413,     5,    13,     5,
     424,    -1,   413,     5,    14,     5,   424,    -1,   413,     5,
      65,     5,   424,    -1,   413,     5,   215,   423,   424,    -1,
     413,     5,   216,   423,   424,    -1,   413,     5,   301,   422,
       4,   423,   424,    -1,   413,     5,   312,     4,   424,    -1,
     413,     5,   313,     4,   424,    -1,   413,     5,   349,     5,
     423,   424,    -1,     5,    13,     5,   424,    -1,     5,    14,
       5,   424,    -1,     5,    65,     5,   424,    -1,     5,   215,
     423,   424,    -1,     5,   216,   423,   424,    -1,     5,   301,
     422,     4,   423,   424,    -1,     5,   312,     4,   424,    -1,
       5,   313,     4,   424,    -1,     5,   349,     5,   423,   424,
      -1,   413,     5,    13,     5,   424,    -1,   413,     5,    14,
       5,   424,    -1,   413,     5,    65,     5,   424,    -1,   413,
       5,   215,   423,   424,    -1,   413,     5,     5,   309,   423,
     424,    -1,   413,     5,   216,   423,   424,    -1,   413,     5,
     301,   422,     4,   423,   424,    -1,   413,     5,   317,   422,
       4,     4,   423,   424,    -1,   413,     5,   312,     4,   424,
      -1,   413,     5,   313,     4,   424,    -1,   413,     5,   349,
       5,   423,   424,    -1,     5,    13,     5,    -1,     5,    14,
       5,    -1,     5,    65,     5,    -1,     5,   215,   423,    -1,
       5,     5,   309,   423,    -1,     5,   216,   423,    -1,     5,
     301,   422,     4,   423,    -1,     5,   317,   422,     4,     4,
     423,    -1,     5,   312,     4,    -1,     5,   313,     4,    -1,
       5,   349,     5,   423,    -1,     5,    13,     5,    -1,     5,
      14,     5,    -1,     5,    65,     5,    -1,     5,   215,   423,
      -1,     5,   216,   423,    -1,     5,   301,   422,     4,   423,
      -1,     5,   312,     4,    -1,     5,   313,     4,    -1,     5,
     349,     5,   423,    -1,     5,    13,     5,   424,    -1,     5,
      65,     5,   424,    -1,     5,   215,   424,    -1,     5,   301,
     422,     4,   424,    -1,     5,   312,     4,   424,    -1,     5,
     349,     5,   424,    -1,     5,     5,    -1,   308,     5,     5,
      -1,   101,     4,     4,     4,     4,     4,    -1,   212,     4,
       4,     4,     4,     4,    -1,   121,    -1,   264,    -1,   404,
      -1,   155,   404,    -1,    95,   404,    -1,    71,     5,    -1,
       5,     4,     4,    -1,   345,   402,   402,    -1,   394,   402,
      -1,     5,     5,   413,   419,     5,     5,   413,   419,   402,
     413,   421,     5,    -1,    64,   558,    -1,    71,     5,    -1,
      87,    -1,    80,   564,     5,    -1,    80,   564,   349,     5,
      -1,    82,   107,    -1,    -1,    90,   556,   559,    -1,    96,
      -1,   107,   562,    -1,   115,   563,    -1,   124,     4,    -1,
     143,     5,    -1,   166,    16,    -1,   166,   240,   402,   402,
      -1,   166,   337,   402,   402,    -1,     4,    20,   428,   404,
      -1,    20,   318,    59,     5,    -1,    20,   318,    59,    -1,
       4,    21,   407,    -1,     4,    21,   407,   414,    -1,     4,
      21,   407,   412,   419,    -1,     4,    22,   272,   402,   402,
       4,   412,   421,    -1,     4,    22,   272,     5,   412,   421,
      -1,     4,    53,   272,   402,   402,   402,     4,   412,   421,
      -1,     4,    53,   272,     5,   412,   421,    -1,     4,    52,
     272,   402,   402,   412,   421,    -1,     4,    56,   115,   407,
     407,     4,   402,   402,   402,     4,    -1,     4,    56,   115,
     407,   407,     4,   402,   402,   402,     4,   414,    -1,     4,
      56,   115,   407,   407,     4,   402,   402,   402,     4,   412,
     419,    -1,     4,    56,   115,     5,     5,   412,   419,   412,
     421,    -1,     4,    59,   557,     5,     5,    -1,     4,    67,
     272,   402,   412,   421,    -1,     4,    71,     5,    -1,     4,
      81,    27,   404,   404,    -1,     4,    81,   121,   425,   425,
      -1,     4,    81,   186,     5,     5,    -1,     4,    81,   272,
     402,   412,   421,    -1,     4,    81,   324,   412,   419,    -1,
       4,    82,   153,   404,    -1,     4,    82,    28,   404,    -1,
       4,    82,   340,     5,    -1,     4,    89,   115,   407,   407,
       4,   402,   402,     4,    -1,     4,    89,   115,   407,   407,
       4,   402,   402,     4,   414,    -1,     4,    89,   115,   407,
     407,     4,   402,   402,     4,   412,   419,    -1,     4,    89,
     115,     5,     5,   412,   419,   412,   421,    -1,     4,    90,
      22,   272,   402,   402,    -1,     4,    90,    53,   272,   402,
     402,    -1,     4,    90,    56,    21,   402,   402,    -1,     4,
      90,    56,   272,   402,   402,    -1,     4,    90,   120,   272,
     402,   402,    -1,     4,    90,   123,    21,   402,   402,    -1,
       4,    90,   123,   272,   402,   402,    -1,     4,    90,    89,
      21,   402,   402,    -1,     4,    90,    89,   272,   402,   402,
      -1,     4,    90,   260,   353,     4,   402,   402,    -1,     4,
      90,   295,   353,     4,   402,   402,    -1,     4,   107,    -1,
       4,   107,    22,     4,    -1,     4,   107,    53,     4,    -1,
       4,   107,    56,     4,    -1,     4,   107,   120,     4,    -1,
       4,   107,    59,   557,     5,    -1,     4,   107,   123,     4,
      -1,     4,   107,    89,     4,    -1,     4,   107,   260,   353,
       4,    -1,     4,   107,   295,   353,     4,    -1,     4,   107,
     326,    -1,     4,   107,   326,     5,    -1,     4,   107,   326,
       4,    -1,     4,   115,    42,     4,    -1,     4,   119,   272,
     402,   402,   412,   421,    -1,     4,   120,   272,   402,   402,
     402,     4,   412,   421,    -1,     4,   120,   272,     5,   412,
     421,    -1,     4,   123,   115,   407,   407,     4,   402,   402,
     402,     4,    -1,     4,   123,   115,   407,   407,     4,   402,
     402,   402,     4,   414,    -1,     4,   123,   115,   407,   407,
       4,   402,   402,   402,     4,   412,   419,    -1,     4,   123,
     115,     5,     5,   412,   419,   412,   421,    -1,     4,   143,
       5,    -1,     4,   166,    -1,     4,   166,   240,    -1,     4,
     195,    27,   404,   404,    -1,     4,   195,   121,   425,   425,
      -1,     4,   195,   258,   412,   419,   411,   411,    -1,     4,
     222,   402,   402,    -1,     4,   222,   147,    -1,     4,   222,
      37,    -1,     4,   222,   336,   412,   419,   411,    -1,     4,
     260,   258,   412,   419,   420,     5,    -1,     4,   260,   258,
     412,   419,   420,   349,     5,    -1,     4,   260,   278,   402,
     402,   412,   421,    -1,     4,   295,   278,   402,   402,   412,
     421,    -1,     4,   258,   299,   426,    -1,     4,   258,   307,
       4,    -1,     4,   258,   154,     5,    -1,     4,   266,   412,
     419,   411,   411,   402,   412,   421,    -1,     4,   267,   577,
     404,    -1,     4,   283,    42,    -1,     4,   284,   144,     5,
      -1,     4,   284,   258,   412,   419,   411,   411,    -1,     4,
     284,   324,   412,   419,   412,   421,    -1,     4,   296,    -1,
       4,   296,   240,    -1,     4,   326,     5,    -1,     4,   328,
       5,    -1,     4,   328,   283,   404,    -1,     4,   342,    -1,
       4,   344,    -1,     4,   351,    27,   404,    -1,     4,   351,
     121,   425,    -1,     4,   351,   258,   412,   419,   411,   412,
     421,   402,   407,    -1,     4,   385,     4,    -1,     4,   100,
       4,     4,    -1,   184,    -1,   184,   402,   402,    -1,   197,
     572,    -1,   198,   573,    -1,   222,   574,    -1,   265,   404,
      -1,   267,   577,   404,    -1,   267,   577,   404,   402,   402,
      -1,   283,    42,   402,   402,    -1,   283,   219,   402,   402,
       4,    -1,   283,   121,    -1,   288,   581,    -1,   296,   582,
      -1,   304,   583,    -1,     5,    71,     5,    -1,     5,    87,
      -1,     5,   107,    -1,     5,    96,    -1,     5,   143,     5,
      -1,     5,   166,    -1,     5,   166,   240,    -1,     5,   222,
     402,   402,    -1,     5,   222,   147,    -1,     5,   222,    37,
      -1,     5,   222,   336,   412,   419,   411,    -1,     5,   267,
     577,   404,    -1,     5,   296,    -1,     5,   296,   240,    -1,
       5,   342,    -1,     5,   344,    -1,   326,   115,     5,     5,
      -1,   326,   107,     5,    -1,   326,   107,    16,    -1,   326,
       5,    -1,   326,   345,     5,    -1,   251,    -1,   251,   412,
      -1,   341,    -1,   342,    16,    -1,   344,    16,    -1,   385,
       4,    -1,   100,     4,     4,    -1,   296,    -1,   344,    -1,
     166,    -1,   342,    -1,    42,   222,    -1,   222,    -1,   121,
     222,    -1,    42,   115,    -1,   115,    -1,   121,   115,    -1,
      42,   283,    -1,   283,    -1,   121,   283,    -1,   107,    -1,
     328,    -1,    71,    -1,   385,    -1,   267,    -1,   143,    -1,
     184,    -1,   345,    -1,    -1,     4,    -1,    31,   404,    -1,
     272,   402,    -1,   180,     4,    -1,   245,     4,   402,    -1,
      67,   402,   402,   402,   578,    -1,   119,   402,   402,   402,
     402,   406,   578,    -1,    52,   402,   402,   402,   402,   406,
     578,    -1,   260,   402,   402,   402,   402,   578,    -1,   260,
      60,   349,     5,   578,    -1,   295,    60,   349,     5,   578,
      -1,   295,   402,   402,   402,   402,   578,    -1,   195,   402,
     402,   402,   402,   578,    -1,   351,   402,   402,   402,   402,
     578,    -1,   328,   402,   402,   406,   578,    -1,    67,   258,
     402,   402,   427,   578,    -1,    52,   258,   402,   402,   427,
     578,    -1,   110,   258,   402,   402,   427,   578,    -1,    92,
     258,   402,   402,   427,   578,    -1,   398,   258,   402,   402,
     427,   578,    -1,    27,   258,   402,   402,   427,   578,    -1,
      55,   258,   402,   402,   427,   578,    -1,   154,   258,   402,
     402,     5,   578,    -1,   154,   258,   402,   402,     4,     5,
     578,    -1,   284,   402,   402,   402,   402,   412,   419,   412,
     421,     5,   578,    -1,    81,   402,   402,   402,   412,   419,
     578,    -1,   266,   402,   402,   402,   402,   402,   578,    -1,
      22,   402,   402,   402,   402,     4,   578,    -1,   120,   402,
     402,   402,   402,   402,     4,   406,   578,    -1,    53,   402,
     402,   402,   402,   402,     4,   406,   578,    -1,    89,   402,
     402,   407,   407,     4,   402,   402,     4,   578,    -1,   123,
     402,   402,   407,   407,     4,   402,   402,   402,     4,   406,
     578,    -1,    56,   402,   402,   407,   407,     4,   402,   402,
     402,     4,   406,   578,    -1,    82,   560,   578,    -1,   327,
     561,    -1,    -1,     4,    -1,     5,   402,   402,    -1,   349,
       5,   402,   402,    -1,   402,   402,   349,     5,    -1,     5,
     412,   419,   411,    -1,    -1,   296,    -1,    16,    -1,    42,
     402,   402,     4,    -1,   219,   402,   402,     4,    -1,   121,
      -1,   114,    -1,   387,    -1,    68,    -1,   287,    -1,   286,
      -1,   269,    -1,   388,    -1,    64,   566,    -1,    71,    -1,
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
       4,   258,   299,    -1,     4,   258,   307,    -1,     4,   258,
     154,    -1,     4,   260,   258,   412,   419,   420,    -1,     4,
     266,   258,   412,   419,   420,    -1,     4,   266,   190,   412,
     421,    -1,     4,   266,   332,   412,   421,    -1,     4,   267,
      -1,     4,   267,   577,    -1,     4,   284,   144,    -1,     4,
     284,   190,   412,   421,    -1,     4,   284,   258,   412,   419,
     420,    -1,     4,   284,   324,    -1,     4,   296,    -1,     4,
     326,    -1,     4,   326,     4,    -1,     4,   328,    -1,     4,
     328,   283,    -1,     4,   340,    -1,     4,   351,    27,    -1,
       4,   351,   121,    -1,     4,   351,   190,   412,   421,    -1,
       4,   351,   258,   412,   419,   420,    -1,     4,   385,    -1,
       4,   100,    -1,   166,   567,    -1,   166,   236,    -1,   236,
      -1,   260,   295,   402,   402,    -1,   295,   295,   402,   402,
      -1,   265,    -1,   267,   577,    -1,   296,   568,    -1,   296,
     236,    -1,   304,   569,    -1,     5,    71,    -1,     5,   143,
      -1,     5,   174,    -1,     5,   267,   577,    -1,     5,   326,
      -1,     5,   326,   236,    -1,   326,    16,    -1,   326,   106,
     223,    -1,   385,    -1,   100,    -1,    31,    -1,   272,    -1,
     180,    -1,   245,    -1,    -1,   402,   402,    -1,    -1,   402,
     402,    -1,    -1,   328,    -1,    -1,    -1,   259,    -1,   274,
      -1,   347,    -1,    61,    -1,   145,    -1,   564,   412,   419,
     420,   404,   579,   586,    -1,   296,   564,   412,   419,   420,
     404,   579,   586,    -1,   564,     5,    -1,   564,     5,     4,
       5,   412,   419,    -1,   564,     4,    -1,   564,     4,     4,
       5,   412,   419,    -1,   138,     5,    -1,   138,     5,     5,
      -1,   402,   402,    -1,   147,    -1,    37,    -1,    42,   402,
     402,    -1,   219,   402,   402,    -1,   121,    -1,   336,   412,
     419,   411,    -1,   575,   576,    -1,   576,    -1,   577,   399,
     404,    -1,    71,   399,     5,    -1,   100,   399,     4,     4,
      -1,   385,   399,     4,    -1,   143,   399,     5,    -1,   328,
     399,     5,    -1,   589,    -1,   590,    -1,   230,    -1,   296,
      -1,   166,    -1,    99,    -1,   140,    -1,   115,    -1,   222,
      -1,   283,    -1,   107,    -1,   177,    -1,   314,    -1,   133,
      -1,   570,    -1,   570,   575,    -1,    -1,    -1,   580,   584,
      -1,     5,   564,   412,   419,   420,   404,    -1,   296,     5,
     564,   412,   419,   420,   404,    -1,   327,     5,    -1,    16,
      -1,   240,   402,   402,    -1,   337,    -1,   337,   402,   402,
      -1,   135,    -1,   189,    -1,   404,    -1,   328,   404,    -1,
     584,   585,    -1,   585,    -1,   577,   399,   404,    -1,    -1,
      -1,   587,   588,    -1,   588,   589,    -1,   589,    -1,   326,
     399,     5,    -1,    59,   399,   557,     5,     5,    -1,    -1,
      90,    -1,     4,    -1,   188,     4,    -1,    71,     5,    -1,
       4,    71,     5,    -1,    48,   416,    -1,     4,    48,   416,
      -1,   334,   402,    -1,     4,   334,   402,    -1,   350,   404,
      -1,     4,   350,   404,    -1,   304,    -1,     4,   304,    -1,
     165,    -1,     4,   165,    -1,   107,    -1,     4,   107,    -1,
     346,    -1,     4,   346,    -1,   113,    -1,     4,   113,    -1,
     333,    -1,     4,   333,    -1,    51,    -1,     4,    51,    -1,
      69,    -1,    71,     5,    -1,   206,   415,    -1,   273,   402,
     402,    -1,   324,   412,    -1,   334,   402,    -1,    48,   416,
      -1,   206,     4,    -1,   398,    -1,   396,    -1,   388,    -1,
     230,    -1,   402,   402,   402,   402,    -1,   402,   402,    -1,
     414,   402,   402,    -1,   412,   419,   411,    -1,   336,   595,
      -1,    41,   402,   402,    -1,   219,   596,    -1,   265,   404,
      -1,   402,   402,    -1,   414,   402,   402,    -1,   412,   419,
     411,    -1,    42,   402,   402,    -1,   402,   402,    -1,   121,
     402,   402,    -1,   404,    -1,   356,   413,   419,    -1,     5,
       4,     4,    -1,   345,    -1,    77,   600,    -1,   191,     4,
      -1,   279,     4,    -1,   290,   402,    -1,     4,     4,     4,
       4,     4,     4,     4,     4,     4,    -1,     4,     4,     4,
       4,     4,     4,    -1,    58,    -1,   156,    -1,   281,    -1,
      97,    -1,   166,   602,    -1,   296,   603,    -1,    42,   402,
     402,    -1,   219,   402,   402,    -1,   121,    -1,   302,   121,
      -1,    42,   402,   402,    -1,   219,   402,   402,    -1,   121,
      -1,   302,   121,    -1,   214,    -1,    12,    -1,   136,    -1,
     230,    -1,    35,    -1,   117,    -1,     4,    -1,    69,    -1,
      65,     5,    -1,   324,   412,    -1,   350,     4,     4,     4,
      -1,   324,   412,    -1,    65,     5,    -1,    65,   170,    -1,
      65,   289,    -1,   324,   412,    -1,   350,     4,     4,     4,
      -1,    65,     5,    -1,    65,   170,    -1,    65,   289,    -1,
      65,   348,    -1,   324,   412,    -1,   350,     4,     4,     4,
      -1,   402,    -1,   402,   105,    -1,   219,   612,    -1,   336,
     402,    -1,   336,   402,   105,    -1,    42,    -1,   402,    -1,
     121,    -1,    26,   615,    -1,   138,   616,    -1,   393,   614,
      -1,   235,   633,    -1,   122,   634,    -1,   253,     5,    -1,
     132,     5,    -1,    65,     5,    -1,   312,     4,    -1,   132,
       5,   430,    -1,    65,     5,   430,    -1,   312,     4,   430,
      -1,   281,    94,   623,    -1,   172,    94,   626,    -1,   171,
      94,   629,    -1,   617,    -1,   176,   617,    -1,   325,   618,
      -1,   308,   619,    -1,   128,    94,   620,    -1,   217,   621,
      -1,   281,   176,   624,    -1,   281,    94,   625,    -1,   172,
     176,   627,    -1,   172,    94,   628,    -1,   171,   176,   630,
      -1,   171,    94,   631,    -1,   276,   632,    -1,   132,     5,
      -1,    65,     5,    -1,   312,     4,    -1,   132,     5,    -1,
      65,     5,    -1,   312,     4,    -1,   132,     5,    -1,    65,
       5,    -1,   312,     4,    -1,   132,     5,    -1,    65,     5,
      -1,   312,     4,    -1,   176,   622,    -1,   132,     5,     4,
      -1,    65,     5,     4,    -1,   312,     4,     4,    -1,   132,
       5,    -1,    65,     5,    -1,   312,     4,    -1,   132,     5,
     430,    -1,    65,     5,   430,    -1,   312,     4,   430,    -1,
     132,     5,    -1,    65,     5,    -1,   312,     4,    -1,   132,
       5,    -1,    65,     5,    -1,   312,     4,    -1,   132,     5,
     430,    -1,    65,     5,   430,    -1,   312,     4,   430,    -1,
     132,     5,    -1,    65,     5,    -1,   312,     4,    -1,   132,
       5,    -1,    65,     5,    -1,   312,     4,    -1,   132,     5,
     430,    -1,    65,     5,   430,    -1,   312,     4,   430,    -1,
     132,     5,    -1,    65,     5,    -1,   312,     4,    -1,   132,
       5,    -1,    65,     5,    -1,   312,     4,    -1,   132,     5,
      -1,    65,     5,    -1,   312,     4,    -1,   132,     5,   430,
      -1,    65,     5,   430,    -1,   312,     4,   430,    -1,   132,
       5,     5,   430,    -1,   636,     4,     4,   402,   402,   407,
      -1,   636,     4,    -1,   107,    -1,    54,    -1,   338,    -1,
     151,    -1,   118,    -1,    -1,     4,   402,   402,   402,   402,
      -1,   234,    -1,   234,     4,   402,   402,   402,   402,    -1,
     138,   308,   638,    -1,   138,    63,    -1,   138,    63,   402,
     402,    -1,     4,    -1,     4,     4,    -1,   402,   412,    -1,
     402,   402,    -1,   336,   402,   402,    -1,   413,   419,   420,
      -1,    15,   643,    -1,   278,     4,    -1,   275,   642,    -1,
      23,   641,    -1,     4,     4,    -1,     4,     5,    -1,   328,
       4,     5,    -1,     4,     4,    -1,     4,     5,    -1,   328,
       4,     5,    -1,     4,    -1,     4,   413,   419,    -1,   336,
       4,   413,   419,    -1,   259,    69,    -1,   264,    -1,   402,
     402,    -1,   402,   402,    11,   402,   402,    -1,   402,   402,
      11,   414,   402,   402,    -1,   402,   402,    11,   412,   419,
     411,    -1,   336,   646,    -1,   137,    -1,   137,   402,    -1,
     402,   402,    -1,   402,   402,    11,   402,   402,    -1,   402,
     402,    11,   414,   402,   402,    -1,   402,   402,    11,   412,
     419,   411,    -1
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
     796,   797,   798,   799,   800,   801,   802,   805,   806,   809,
     810,   811,   812,   813,   814,   817,   818,   819,   820,   823,
     824,   825,   826,   827,   828,   831,   832,   833,   834,   835,
     836,   837,   838,   839,   840,   844,   845,   846,   847,   850,
     851,   854,   855,   858,   859,   862,   863,   866,   867,   871,
     872,   873,   874,   875,   876,   877,   878,   881,   882,   885,
     886,   887,   889,   891,   892,   893,   895,   899,   900,   903,
     904,   906,   909,   911,   917,   918,   919,   920,   923,   924,
     925,   928,   929,   930,   931,   932,   933,   934,   940,   941,
     944,   945,   946,   947,   948,   951,   952,   953,   954,   957,
     958,   963,   968,   975,   977,   979,   981,   983,   985,   986,
     987,   990,   992,   994,   996,   998,  1001,  1002,  1003,  1007,
    1008,  1009,  1010,  1011,  1012,  1013,  1014,  1017,  1018,  1019,
    1020,  1022,  1026,  1029,  1032,  1038,  1044,  1047,  1048,  1049,
    1052,  1053,  1054,  1061,  1062,  1063,  1064,  1067,  1068,  1071,
    1072,  1075,  1076,  1077,  1081,  1083,  1085,  1089,  1090,  1091,
    1092,  1095,  1096,  1099,  1101,  1102,  1103,  1104,  1107,  1108,
    1110,  1111,  1112,  1115,  1117,  1119,  1120,  1122,  1124,  1126,
    1128,  1132,  1135,  1136,  1137,  1138,  1141,  1142,  1145,  1146,
    1149,  1150,  1151,  1152,  1153,  1154,  1155,  1156,  1157,  1158,
    1159,  1160,  1161,  1162,  1163,  1164,  1165,  1166,  1167,  1168,
    1169,  1170,  1171,  1172,  1173,  1174,  1175,  1176,  1177,  1178,
    1179,  1180,  1181,  1182,  1183,  1185,  1186,  1187,  1188,  1189,
    1190,  1191,  1193,  1194,  1195,  1198,  1200,  1204,  1206,  1210,
    1211,  1212,  1213,  1214,  1215,  1216,  1217,  1220,  1221,  1222,
    1225,  1226,  1229,  1230,  1232,  1234,  1235,  1236,  1237,  1238,
    1239,  1246,  1247,  1250,  1251,  1252,  1255,  1256,  1259,  1262,
    1263,  1265,  1269,  1270,  1271,  1274,  1278,  1280,  1281,  1282,
    1283,  1284,  1285,  1286,  1287,  1288,  1289,  1290,  1291,  1292,
    1293,  1296,  1297,  1298,  1301,  1302,  1305,  1307,  1315,  1317,
    1319,  1323,  1324,  1326,  1329,  1332,  1333,  1337,  1339,  1342,
    1347,  1348,  1349,  1353,  1354,  1355,  1358,  1359,  1360,  1363,
    1364,  1366,  1367,  1368,  1369,  1370,  1371,  1372,  1373,  1374,
    1375,  1377,  1378,  1381,  1382,  1385,  1386,  1387,  1388,  1391,
    1392,  1395,  1397,  1400,  1404,  1405,  1406,  1408,  1410,  1414,
    1415,  1416,  1419,  1420,  1421,  1422,  1423,  1424,  1427,  1428,
    1429,  1430,  1431,  1432,  1433,  1436,  1437,  1440,  1443,  1444,
    1445,  1448,  1451,  1452,  1453,  1456,  1457,  1458,  1461,  1462,
    1463,  1464,  1465,  1466,  1469,  1470,  1471,  1472,  1473,  1474,
    1475,  1476,  1479,  1480,  1481,  1482,  1485,  1486,  1489,  1490,
    1493,  1494,  1497,  1498,  1501,  1502,  1505,  1506,  1507,  1510,
    1511,  1514,  1515,  1518,  1521,  1529,  1530,  1533,  1534,  1535,
    1536,  1537,  1538,  1539,  1540,  1541,  1542,  1543,  1544,  1545,
    1546,  1547,  1548,  1549,  1550,  1553,  1556,  1557,  1560,  1561,
    1562,  1563,  1566,  1567,  1568,  1569,  1572,  1573,  1574,  1575,
    1576,  1577,  1580,  1581,  1582,  1583,  1584,  1585,  1587,  1588,
    1593,  1594,  1597,  1599,  1601,  1604,  1605,  1606,  1607,  1608,
    1609,  1612,  1614,  1616,  1618,  1619,  1621,  1623,  1625,  1627,
    1629,  1630,  1631,  1634,  1635,  1636,  1637,  1638,  1639,  1641,
    1642,  1643,  1646,  1649,  1651,  1653,  1655,  1657,  1659,  1661,
    1663,  1666,  1668,  1670,  1672,  1673,  1674,  1675,  1676,  1677,
    1678,  1679,  1680,  1683,  1684,  1685,  1686,  1687,  1688,  1689,
    1691,  1693,  1694,  1695,  1698,  1699,  1700,  1701,  1702,  1703,
    1705,  1706,  1707,  1710,  1711,  1712,  1713,  1714,  1717,  1720,
    1723,  1726,  1729,  1732,  1735,  1738,  1741,  1746,  1749,  1752,
    1755,  1758,  1761,  1764,  1767,  1770,  1773,  1776,  1781,  1784,
    1787,  1790,  1793,  1796,  1799,  1802,  1805,  1810,  1812,  1814,
    1816,  1818,  1820,  1825,  1827,  1829,  1833,  1836,  1839,  1842,
    1845,  1848,  1851,  1854,  1857,  1860,  1863,  1868,  1869,  1870,
    1871,  1872,  1873,  1874,  1876,  1878,  1879,  1880,  1883,  1884,
    1885,  1886,  1887,  1888,  1890,  1891,  1892,  1895,  1897,  1899,
    1900,  1902,  1904,  1908,  1909,  1912,  1913,  1914,  1917,  1920,
    1921,  1922,  1923,  1924,  1925,  1926,  1929,  1937,  1938,  1939,
    1940,  1942,  1944,  1945,  1945,  1946,  1947,  1948,  1949,  1950,
    1952,  1953,  1955,  1958,  1960,  1962,  1965,  1966,  1967,  1970,
    1973,  1976,  1980,  1983,  1986,  1989,  1993,  1998,  2003,  2005,
    2007,  2008,  2010,  2012,  2014,  2016,  2018,  2019,  2020,  2022,
    2024,  2026,  2030,  2035,  2037,  2039,  2041,  2043,  2045,  2047,
    2049,  2051,  2053,  2055,  2058,  2059,  2061,  2063,  2064,  2066,
    2068,  2069,  2070,  2072,  2074,  2075,  2076,  2078,  2079,  2082,
    2086,  2089,  2092,  2096,  2101,  2107,  2108,  2109,  2111,  2112,
    2113,  2117,  2119,  2120,  2121,  2124,  2127,  2130,  2133,  2136,
    2138,  2139,  2141,  2146,  2149,  2150,  2151,  2154,  2158,  2159,
    2161,  2162,  2163,  2165,  2166,  2168,  2169,  2170,  2175,  2176,
    2178,  2179,  2181,  2182,  2183,  2184,  2185,  2186,  2188,  2190,
    2192,  2193,  2194,  2196,  2198,  2199,  2200,  2201,  2202,  2203,
    2204,  2205,  2206,  2207,  2208,  2210,  2212,  2213,  2214,  2215,
    2217,  2218,  2219,  2220,  2221,  2223,  2224,  2225,  2226,  2227,
    2228,  2229,  2232,  2233,  2234,  2235,  2236,  2237,  2238,  2239,
    2240,  2241,  2242,  2243,  2244,  2245,  2246,  2247,  2248,  2249,
    2250,  2251,  2252,  2255,  2256,  2257,  2258,  2259,  2260,  2268,
    2275,  2284,  2293,  2300,  2305,  2310,  2317,  2325,  2333,  2340,
    2345,  2350,  2355,  2360,  2365,  2370,  2375,  2380,  2386,  2396,
    2406,  2416,  2423,  2433,  2443,  2452,  2464,  2477,  2483,  2486,
    2487,  2496,  2498,  2500,  2505,  2509,  2510,  2511,  2517,  2519,
    2521,  2524,  2525,  2526,  2527,  2528,  2529,  2530,  2533,  2534,
    2535,  2536,  2537,  2538,  2540,  2542,  2544,  2546,  2548,  2550,
    2552,  2554,  2556,  2559,  2560,  2561,  2562,  2564,  2567,  2569,
    2571,  2572,  2573,  2575,  2578,  2581,  2583,  2584,  2585,  2586,
    2587,  2589,  2590,  2591,  2592,  2593,  2594,  2595,  2597,  2599,
    2601,  2604,  2605,  2606,  2608,  2611,  2612,  2613,  2614,  2615,
    2617,  2620,  2624,  2625,  2626,  2627,  2630,  2633,  2636,  2638,
    2639,  2640,  2641,  2643,  2646,  2647,  2649,  2650,  2651,  2652,
    2653,  2655,  2656,  2657,  2659,  2662,  2663,  2664,  2665,  2666,
    2667,  2669,  2671,  2672,  2673,  2674,  2676,  2678,  2679,  2680,
    2681,  2682,  2683,  2685,  2686,  2688,  2689,  2692,  2693,  2694,
    2695,  2698,  2699,  2702,  2703,  2706,  2707,  2710,  2723,  2724,
    2728,  2729,  2733,  2734,  2737,  2741,  2747,  2749,  2752,  2754,
    2757,  2759,  2763,  2764,  2765,  2766,  2767,  2768,  2769,  2773,
    2774,  2777,  2778,  2779,  2780,  2781,  2782,  2783,  2784,  2787,
    2788,  2789,  2790,  2791,  2792,  2793,  2794,  2795,  2796,  2797,
    2798,  2801,  2802,  2805,  2806,  2806,  2809,  2811,  2813,  2816,
    2817,  2818,  2819,  2820,  2821,  2824,  2825,  2828,  2829,  2832,
    2836,  2837,  2837,  2840,  2841,  2844,  2847,  2851,  2852,  2853,
    2854,  2855,  2856,  2857,  2858,  2859,  2860,  2861,  2862,  2864,
    2865,  2866,  2867,  2868,  2869,  2870,  2871,  2872,  2873,  2874,
    2875,  2876,  2877,  2880,  2881,  2882,  2883,  2884,  2885,  2886,
    2887,  2893,  2894,  2895,  2896,  2899,  2901,  2902,  2907,  2909,
    2910,  2911,  2912,  2915,  2916,  2921,  2925,  2926,  2927,  2930,
    2931,  2936,  2937,  2940,  2942,  2943,  2944,  2949,  2951,  2957,
    2958,  2959,  2960,  2963,  2964,  2967,  2969,  2971,  2972,  2975,
    2977,  2978,  2979,  2982,  2983,  2984,  2987,  2988,  2989,  2992,
    2993,  2996,  2997,  2998,  3001,  3005,  3006,  3007,  3008,  3009,
    3012,  3013,  3014,  3015,  3016,  3017,  3020,  3021,  3022,  3023,
    3024,  3027,  3028,  3029,  3032,  3033,  3034,  3035,  3036,  3037,
    3040,  3041,  3042,  3045,  3047,  3049,  3051,  3052,  3053,  3056,
    3057,  3058,  3059,  3060,  3061,  3062,  3063,  3064,  3065,  3066,
    3067,  3068,  3071,  3072,  3073,  3076,  3077,  3078,  3081,  3082,
    3083,  3086,  3087,  3088,  3091,  3092,  3093,  3094,  3097,  3098,
    3099,  3102,  3104,  3106,  3110,  3111,  3112,  3115,  3116,  3117,
    3120,  3122,  3124,  3128,  3129,  3130,  3133,  3134,  3135,  3138,
    3140,  3142,  3146,  3147,  3148,  3151,  3152,  3153,  3156,  3157,
    3158,  3161,  3163,  3165,  3169,  3173,  3175,  3180,  3183,  3184,
    3185,  3186,  3189,  3190,  3193,  3195,  3197,  3198,  3199,  3203,
    3204,  3205,  3208,  3209,  3212,  3214,  3215,  3216,  3217,  3220,
    3221,  3222,  3225,  3226,  3227,  3230,  3231,  3236,  3238,  3241,
    3248,  3249,  3251,  3256,  3258,  3261,  3262,  3263,  3264,  3266,
    3271
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
  "colormapMotion", "colorscale", "contour", "contourAux", "contourCreate",
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
     426,   426,   426,   426,   426,   426,   426,   427,   427,   428,
     428,   428,   428,   428,   428,   429,   429,   429,   429,   430,
     430,   430,   430,   430,   430,   431,   431,   431,   431,   431,
     431,   431,   431,   431,   431,   432,   432,   432,   432,   433,
     433,   434,   434,   435,   435,   436,   436,   437,   437,   438,
     438,   438,   438,   438,   438,   438,   438,   439,   439,   440,
     440,   440,   440,   440,   440,   440,   440,   441,   441,   442,
     442,   442,   442,   442,   443,   443,   443,   443,   444,   444,
     444,   445,   445,   445,   445,   445,   445,   445,   446,   446,
     447,   447,   447,   447,   447,   448,   448,   448,   448,   449,
     449,   449,   449,   450,   450,   450,   450,   450,   450,   450,
     450,   451,   451,   451,   451,   451,   452,   452,   452,   453,
     453,   453,   453,   453,   453,   453,   453,   454,   454,   454,
     454,   454,   455,   455,   455,   455,   455,   456,   456,   456,
     457,   457,   457,   458,   458,   458,   458,   459,   459,   460,
     460,   461,   461,   461,   462,   462,   462,   463,   463,   463,
     463,   464,   464,   464,   464,   464,   464,   464,   465,   465,
     465,   465,   465,   466,   466,   466,   466,   466,   466,   466,
     466,   467,   468,   468,   468,   468,   469,   469,   470,   470,
     471,   471,   471,   471,   471,   471,   471,   471,   471,   471,
     471,   471,   471,   471,   471,   471,   471,   471,   471,   471,
     471,   471,   471,   471,   471,   471,   471,   471,   471,   471,
     471,   471,   471,   471,   471,   471,   471,   471,   471,   471,
     471,   471,   471,   471,   471,   472,   472,   473,   473,   474,
     474,   474,   474,   474,   474,   474,   474,   475,   475,   475,
     476,   476,   477,   477,   477,   477,   477,   477,   477,   477,
     477,   478,   478,   479,   479,   479,   480,   480,   481,   482,
     482,   482,   483,   483,   483,   484,   485,   485,   485,   485,
     485,   485,   485,   485,   485,   485,   485,   485,   485,   485,
     485,   486,   486,   486,   487,   487,   488,   488,   489,   489,
     489,   490,   490,   490,   491,   492,   492,   493,   493,   493,
     494,   494,   494,   495,   495,   495,   496,   496,   496,   497,
     497,   497,   497,   497,   497,   497,   497,   497,   497,   497,
     497,   497,   497,   498,   498,   499,   499,   499,   499,   500,
     500,   501,   501,   501,   502,   502,   502,   502,   502,   503,
     503,   503,   504,   504,   504,   504,   504,   504,   505,   505,
     505,   505,   505,   505,   505,   506,   506,   507,   508,   508,
     508,   509,   510,   510,   510,   511,   511,   511,   512,   512,
     512,   512,   512,   512,   513,   513,   513,   513,   513,   513,
     513,   513,   514,   514,   514,   514,   515,   515,   516,   516,
     517,   517,   518,   518,   519,   519,   520,   520,   520,   521,
     521,   522,   522,   523,   523,   524,   524,   525,   525,   525,
     525,   525,   525,   525,   525,   525,   525,   525,   525,   525,
     525,   525,   525,   525,   525,   526,   527,   527,   528,   528,
     528,   528,   529,   529,   529,   529,   530,   530,   530,   530,
     530,   530,   531,   531,   531,   531,   531,   531,   531,   531,
     532,   532,   533,   533,   533,   534,   534,   534,   534,   534,
     534,   535,   535,   535,   535,   535,   535,   535,   535,   535,
     535,   535,   535,   536,   536,   536,   536,   536,   536,   536,
     536,   536,   537,   538,   538,   538,   538,   538,   538,   538,
     538,   538,   538,   538,   538,   538,   538,   538,   538,   538,
     538,   538,   538,   539,   539,   539,   539,   539,   539,   539,
     539,   539,   539,   539,   540,   540,   540,   540,   540,   540,
     540,   540,   540,   541,   541,   541,   541,   541,   542,   542,
     542,   542,   542,   542,   542,   542,   542,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   544,   544,
     544,   544,   544,   544,   544,   544,   544,   545,   545,   545,
     545,   545,   545,   545,   545,   545,   546,   546,   546,   546,
     546,   546,   546,   546,   546,   546,   546,   547,   547,   547,
     547,   547,   547,   547,   547,   547,   547,   547,   548,   548,
     548,   548,   548,   548,   548,   548,   548,   549,   549,   549,
     549,   549,   549,   550,   550,   551,   551,   551,   552,   553,
     553,   553,   553,   553,   553,   553,   554,   555,   555,   555,
     555,   555,   555,   556,   555,   555,   555,   555,   555,   555,
     555,   555,   555,   555,   555,   555,   555,   555,   555,   555,
     555,   555,   555,   555,   555,   555,   555,   555,   555,   555,
     555,   555,   555,   555,   555,   555,   555,   555,   555,   555,
     555,   555,   555,   555,   555,   555,   555,   555,   555,   555,
     555,   555,   555,   555,   555,   555,   555,   555,   555,   555,
     555,   555,   555,   555,   555,   555,   555,   555,   555,   555,
     555,   555,   555,   555,   555,   555,   555,   555,   555,   555,
     555,   555,   555,   555,   555,   555,   555,   555,   555,   555,
     555,   555,   555,   555,   555,   555,   555,   555,   555,   555,
     555,   555,   555,   555,   555,   555,   555,   555,   555,   555,
     555,   555,   555,   555,   555,   555,   555,   555,   555,   555,
     555,   555,   555,   555,   555,   555,   555,   555,   555,   555,
     555,   555,   555,   555,   555,   555,   555,   555,   555,   555,
     555,   555,   555,   555,   555,   555,   555,   555,   555,   555,
     555,   555,   557,   557,   557,   557,   557,   557,   557,   557,
     557,   557,   557,   557,   557,   557,   557,   557,   557,   557,
     557,   557,   557,   558,   558,   558,   558,   558,   558,   559,
     559,   559,   559,   559,   559,   559,   559,   559,   559,   559,
     559,   559,   559,   559,   559,   559,   559,   559,   559,   559,
     559,   559,   559,   559,   559,   559,   559,   559,   559,   560,
     560,   561,   561,   561,   561,   562,   562,   562,   563,   563,
     563,   564,   564,   564,   564,   564,   564,   564,   565,   565,
     565,   565,   565,   565,   565,   565,   565,   565,   565,   565,
     565,   565,   565,   565,   565,   565,   565,   565,   565,   565,
     565,   565,   565,   565,   565,   565,   565,   565,   565,   565,
     565,   565,   565,   565,   565,   565,   565,   565,   565,   565,
     565,   565,   565,   565,   565,   565,   565,   565,   565,   565,
     565,   565,   565,   565,   565,   565,   565,   565,   565,   565,
     565,   565,   565,   565,   565,   565,   565,   565,   565,   565,
     565,   565,   565,   565,   565,   565,   565,   565,   565,   565,
     565,   565,   565,   565,   565,   565,   565,   565,   565,   565,
     565,   565,   565,   565,   565,   565,   565,   566,   566,   566,
     566,   567,   567,   568,   568,   569,   569,   570,   571,   571,
     571,   571,   571,   571,   572,   572,   573,   573,   573,   573,
     573,   573,   574,   574,   574,   574,   574,   574,   574,   575,
     575,   576,   576,   576,   576,   576,   576,   576,   576,   577,
     577,   577,   577,   577,   577,   577,   577,   577,   577,   577,
     577,   578,   578,   579,   580,   579,   581,   581,   581,   582,
     582,   582,   582,   582,   582,   583,   583,   584,   584,   585,
     586,   587,   586,   588,   588,   589,   590,   591,   591,   591,
     591,   591,   591,   591,   591,   591,   591,   591,   591,   591,
     591,   591,   591,   591,   591,   591,   591,   591,   591,   591,
     591,   591,   591,   592,   592,   592,   592,   592,   592,   592,
     592,   593,   593,   593,   593,   594,   594,   594,   594,   594,
     594,   594,   594,   595,   595,   595,   596,   596,   596,   597,
     597,   597,   597,   598,   598,   598,   598,   599,   599,   600,
     600,   600,   600,   601,   601,   602,   602,   602,   602,   603,
     603,   603,   603,   604,   604,   604,   605,   605,   605,   606,
     606,   607,   607,   607,   608,   609,   609,   609,   609,   609,
     610,   610,   610,   610,   610,   610,   611,   611,   611,   611,
     611,   612,   612,   612,   613,   613,   613,   613,   613,   613,
     614,   614,   614,   615,   615,   615,   615,   615,   615,   616,
     616,   616,   616,   616,   616,   616,   616,   616,   616,   616,
     616,   616,   617,   617,   617,   618,   618,   618,   619,   619,
     619,   620,   620,   620,   621,   621,   621,   621,   622,   622,
     622,   623,   623,   623,   624,   624,   624,   625,   625,   625,
     626,   626,   626,   627,   627,   627,   628,   628,   628,   629,
     629,   629,   630,   630,   630,   631,   631,   631,   632,   632,
     632,   633,   633,   633,   634,   635,   635,   635,   636,   636,
     636,   636,   637,   637,   637,   637,   637,   637,   637,   638,
     638,   638,   639,   639,   640,   640,   640,   640,   640,   641,
     641,   641,   642,   642,   642,   643,   643,   643,   643,   644,
     645,   645,   645,   645,   645,   646,   646,   646,   646,   646,
     646
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
       1,     1,     1,     1,     1,     1,     1,     0,     1,     1,
       1,     1,     1,     1,     1,     0,     1,     1,     1,     0,
       1,     1,     1,     1,     1,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     1,     2,     2,     2,     1,
       2,     1,     2,     1,     2,     1,     2,     2,     6,     2,
       4,     2,     2,     2,     3,     2,     2,     1,     2,     1,
       2,     4,     5,     2,     3,     5,     6,     1,     1,     1,
       7,    11,     8,    12,     1,     2,     2,     3,     1,     1,
       2,     2,     2,     2,     3,     3,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     1,     3,
       2,     2,     2,     5,     9,     9,     9,     7,     1,     2,
       1,     5,     9,     9,     9,     7,     1,     2,     6,     2,
       3,     2,     2,     2,     2,     2,     2,     3,     2,     3,
       8,     8,    13,    13,    12,    12,     1,     0,     1,     2,
       1,     4,     6,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     6,     3,     4,     5,     1,     2,     4,
       6,     0,     6,     8,     2,     3,     3,     3,     0,     4,
       4,     4,     4,     3,     3,     1,     3,     5,     4,     4,
       3,     2,     0,     1,     1,     1,     1,     1,     3,     2,
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     1,     2,     2,     2,     4,
       3,     2,     2,     2,     2,     2,     1,     3,     2,     2,
       2,     2,     1,     2,     8,     2,     1,     2,     1,     2,
       1,     4,     3,     2,     1,     7,     8,     7,     8,     1,
       1,     1,     2,     1,     1,     2,     1,     0,     2,     2,
       1,     2,     0,     2,     2,     1,     1,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     0,     1,     2,     1,
       4,     5,     0,     2,     1,     5,     2,     2,     1,     1,
       1,     1,     2,     1,     2,     1,     1,     2,     1,     3,
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
       4,     4,     9,     4,     3,     4,     7,     7,     2,     3,
       3,     3,     4,     2,     2,     4,     4,    10,     3,     4,
       1,     3,     2,     2,     2,     2,     3,     5,     4,     5,
       2,     2,     2,     2,     3,     2,     2,     2,     3,     2,
       3,     4,     3,     3,     6,     4,     2,     3,     2,     2,
       4,     3,     3,     2,     3,     1,     2,     1,     2,     2,
       2,     3,     1,     1,     1,     1,     2,     1,     2,     2,
       1,     2,     2,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     1,     2,     2,     2,     3,     5,
       7,     7,     6,     5,     5,     6,     6,     6,     5,     6,
       6,     6,     6,     6,     6,     6,     6,     7,    11,     7,
       7,     7,     9,     9,    10,    12,    12,     3,     2,     0,
       1,     3,     4,     4,     4,     0,     1,     1,     4,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       1,     1,     3,     3,     8,     6,    10,     7,     7,     5,
       6,     6,     3,     2,     2,     3,     4,     5,     5,     5,
       3,     4,     5,     5,     5,     5,     2,     3,     3,     3,
       5,     3,     3,     3,     3,     3,     4,     5,     5,     5,
       5,     3,     4,     5,     5,     2,     2,     3,     3,     5,
       6,     6,     3,     3,     3,     6,     6,     5,     5,     2,
       3,     3,     5,     6,     3,     2,     2,     3,     2,     3,
       2,     3,     3,     5,     6,     2,     2,     2,     2,     1,
       4,     4,     1,     2,     2,     2,     2,     2,     2,     2,
       3,     2,     3,     2,     3,     1,     1,     1,     1,     1,
       1,     0,     2,     0,     2,     0,     1,     0,     0,     1,
       1,     1,     1,     1,     7,     8,     2,     6,     2,     6,
       2,     3,     2,     1,     1,     3,     3,     1,     4,     2,
       1,     3,     3,     4,     3,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     0,     0,     2,     6,     7,     2,     1,
       3,     1,     3,     1,     1,     1,     2,     2,     1,     3,
       0,     0,     2,     2,     1,     3,     5,     0,     1,     1,
       2,     2,     3,     2,     3,     2,     3,     2,     3,     1,
       2,     1,     2,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     2,     2,     3,     2,     2,     2,
       2,     1,     1,     1,     1,     4,     2,     3,     3,     2,
       3,     2,     2,     2,     3,     3,     3,     2,     3,     1,
       3,     3,     1,     2,     2,     2,     2,     9,     6,     1,
       1,     1,     1,     2,     2,     3,     3,     1,     2,     3,
       3,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     4,     2,     2,     2,     2,     2,     4,
       2,     2,     2,     2,     2,     4,     1,     2,     2,     2,
       3,     1,     1,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     3,     3,     3,     3,     3,     3,     1,
       2,     2,     2,     3,     2,     3,     3,     3,     3,     3,
       3,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     3,     3,     3,     2,     2,
       2,     3,     3,     3,     2,     2,     2,     2,     2,     2,
       3,     3,     3,     2,     2,     2,     2,     2,     2,     3,
       3,     3,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     3,     3,     3,     4,     6,     2,     1,     1,     1,
       1,     1,     0,     5,     1,     6,     3,     2,     4,     1,
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
       0,   371,     0,     0,     0,     0,     0,     0,   400,     0,
       0,    23,     0,     0,     0,     0,     0,  1247,     0,     0,
       0,     0,  1178,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1178,    45,     0,     0,     0,     0,    51,     0,
       0,     0,    55,  1442,    57,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     3,
      62,    63,     0,     0,   284,     6,     0,     0,     0,     0,
       0,     0,     9,     0,     0,   318,   320,     0,     0,     0,
       0,     0,    11,   164,   166,   159,   160,   161,   165,   162,
     163,     0,   326,    12,     0,     0,     0,   347,     0,     0,
       0,     0,    13,     0,     0,     0,     0,   378,     0,    14,
      75,   104,     0,   134,   103,    83,   101,     0,    80,    82,
      78,   135,   102,    79,     0,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,    76,    77,    81,   385,   172,   105,     0,
      15,     0,    16,    17,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     2,    64,   397,   396,    18,     0,
       0,    19,     0,     0,     0,   462,   476,     0,   482,     0,
       0,     0,     0,     0,     0,     0,   415,     0,   559,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1178,     0,
     426,     0,     0,   432,     0,     0,     0,   436,     0,   438,
       0,   440,     0,     0,   616,   444,    20,     0,   622,    21,
     627,     0,     0,   646,   631,   632,   633,   634,   648,   636,
     637,   641,   638,     0,   640,   642,     0,     0,    22,     0,
      24,     0,     0,     0,    26,     0,     0,     0,    27,     0,
     663,     0,     0,     0,   668,     0,    28,     0,  1249,   142,
    1271,     0,  1248,  1263,  1267,  1261,     0,  1259,  1269,     0,
    1265,     0,    36,     0,     0,     0,     0,     0,     0,    30,
     828,    31,     0,     0,     0,     0,     0,     0,   829,    32,
       0,    33,  1182,  1183,  1179,  1180,  1181,     0,   142,  1273,
       0,   136,     0,     0,     0,    35,     0,    37,     0,  1284,
    1283,  1282,  1281,    39,     0,     0,     0,     0,     0,   172,
       0,    40,     0,  1302,     0,  1299,    41,     0,     0,     0,
       0,    44,     0,    43,    42,     0,  1329,  1330,    47,     0,
       0,     0,    48,     0,     0,  1346,    49,     0,     0,     0,
       0,     0,     0,    50,  1438,  1437,  1441,  1440,  1439,    52,
       0,    53,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    54,     0,     0,  1444,    56,     0,     0,    58,
       0,     0,     0,     0,   172,    59,  1469,    60,     0,     0,
      61,     1,     4,     5,   267,     0,   259,     0,     0,   261,
       0,   269,   262,   266,   277,   278,   263,   279,     0,   265,
       0,   288,   289,   286,   285,     0,     0,   308,     0,   293,
     301,   304,   303,   302,   300,   292,   297,   298,   299,   291,
       0,     0,     0,     0,     0,     0,   296,    10,     0,     0,
       0,     0,     0,     0,     0,     0,   319,     0,     0,   327,
       0,     0,     0,     0,   336,     0,   346,   329,     0,   348,
     331,   350,   332,   361,   333,     0,     0,   334,     0,   367,
     335,     0,    94,    95,    96,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   374,     0,     0,     0,
       0,     0,   174,   179,   173,   175,   178,   177,   176,     0,
       0,   391,    69,    70,    71,    72,    73,    65,    66,    67,
      74,    68,     0,   399,   401,     0,   457,   453,   449,   450,
     454,   451,   456,   402,   460,     0,   403,   353,   466,   470,
     465,   356,   355,   354,     0,     0,   404,   477,   406,     0,
     405,     0,   484,   407,   498,   501,   488,   504,   489,   490,
     491,   493,     0,   495,   496,   500,   172,   408,     0,     0,
     409,     0,     0,   172,   410,   513,   172,   511,   411,   514,
     413,   172,   515,   412,     0,   172,     0,   414,   533,     0,
     531,   549,     0,     0,     0,   537,   529,     0,   539,   554,
     542,   416,   560,   561,   417,   418,     0,     0,   585,   586,
     587,   421,   582,   583,   584,   422,     0,   524,     0,   423,
      84,   521,     0,   424,   425,   575,   575,   562,   563,   575,
     575,   429,     0,   574,   568,   573,   569,   570,   571,   572,
     428,   581,   430,   431,   577,   433,     0,   578,   579,   580,
     435,   593,   588,   589,   591,   437,   599,   608,   610,   612,
     598,   601,   602,   614,   439,     0,     0,   619,     0,   443,
     172,   621,   628,     0,   629,   647,   630,   649,   650,   651,
     635,   652,   654,   653,   655,   639,   643,   660,     0,     0,
       0,     0,   656,   644,    25,  1340,  1341,  1342,  1343,  1344,
       0,  1335,  1336,  1337,  1338,     0,     0,     0,   665,   664,
       0,     0,     0,     0,    29,   142,  1272,     0,  1264,  1268,
    1262,  1260,  1270,     0,  1266,     0,   157,   150,   149,   147,
     153,   154,   151,   155,   148,   158,   144,   146,   156,   145,
     152,   143,  1253,  1251,  1250,  1255,  1257,     0,     0,     0,
       0,   675,     0,   676,     0,     0,     0,     0,     0,     0,
       0,   677,     0,   827,     0,   678,     0,   679,     0,     0,
     680,     0,   832,   831,   830,     0,   835,     0,     0,     0,
       0,  1013,     0,     0,     0,   839,   843,   845,     0,  1055,
       0,     0,     0,     0,   950,     0,     0,     0,   985,     0,
       0,     0,     0,     0,     0,     0,   987,     0,     0,     0,
      34,  1279,  1274,  1280,   139,   140,   138,   141,   137,  1275,
       0,  1277,  1278,  1334,    38,     0,     0,     0,     0,  1291,
    1292,     0,   172,     0,  1289,  1286,     0,     0,     0,   172,
    1309,  1312,  1310,  1311,  1303,  1304,  1305,  1306,     0,     0,
       0,    46,  1331,  1332,     0,  1351,  1353,  1352,  1348,  1349,
    1347,     0,     0,     0,     0,     0,     0,  1354,     0,  1358,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1355,  1369,     0,     0,     0,  1357,  1359,     0,
       0,     0,  1356,  1436,  1327,  1328,  1326,   240,     0,   251,
     236,     0,   253,   237,     0,   255,   238,  1324,  1325,  1323,
     239,   242,     0,     0,     0,   245,   241,   243,   244,     0,
       0,   235,     0,  1447,     0,     0,     0,  1452,  1465,     0,
       0,  1455,     0,     0,  1458,     0,     0,  1457,  1456,   180,
    1475,     0,  1474,  1470,   268,   264,     0,   273,     0,   270,
       0,   287,   290,   167,   170,   171,   169,   168,   305,   306,
     307,   295,   294,   310,   312,   311,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   338,
       0,     0,   330,   349,     0,     0,     0,   172,     0,     0,
       0,   368,   375,   100,    97,    98,    99,   172,   377,   376,
       0,     0,     0,     0,     0,     0,     0,   390,     0,   386,
     384,   383,   398,   452,     0,     0,   455,   461,   471,   472,
     467,   468,   473,   475,   474,   469,   357,   358,   464,   463,
     479,   478,     0,   483,     0,   502,   503,   487,   505,   494,
     492,   497,   486,     0,     0,   172,   172,   180,   180,   180,
     172,     0,     0,   172,   550,   532,   543,     0,   534,    84,
     545,     0,     0,   536,   538,   172,   555,     0,     0,   541,
       0,     0,   420,     0,   526,    88,    87,   520,     0,   576,
     565,   564,   566,   567,     0,     0,     0,     0,  1069,  1166,
    1071,  1070,     0,  1171,     0,  1149,     0,  1152,     0,     0,
    1173,  1175,     0,  1165,   427,     0,   590,   592,   609,   595,
     611,   596,   613,   597,   603,   606,   604,   600,   615,   594,
       0,     0,   442,   620,   617,   618,   180,   645,   657,   658,
     659,   661,     0,     0,     0,   674,   662,     0,     0,     0,
    1254,  1252,  1256,  1258,     0,     0,     0,   193,   193,   187,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   190,   190,   187,     0,     0,   187,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   722,   746,     0,     0,
       0,   714,     0,     0,     0,     0,   193,   187,     0,     0,
     823,     0,   833,   834,   172,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   894,
       0,     0,     0,     0,     0,   916,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   938,     0,     0,   943,   944,
       0,     0,     0,   965,   967,   966,     0,   969,     0,     0,
     976,   978,   979,     0,  1014,     0,     0,     0,     0,   837,
     838,  1063,  1061,  1066,  1065,  1064,  1062,  1067,     0,   842,
       0,     0,  1057,  1056,   846,     0,  1060,     0,   847,   848,
     849,   850,     0,     0,     0,     0,     0,   952,     0,     0,
     953,  1194,     0,  1197,  1193,     0,     0,     0,   954,   986,
     955,  1212,  1217,  1214,  1220,  1213,  1211,  1218,  1215,  1209,
    1216,  1210,  1219,     0,     0,   960,     0,     0,     0,     0,
     961,  1229,  1233,  1234,     0,  1231,   962,     0,  1235,   963,
     983,     0,     0,     0,   988,   989,   990,  1276,  1290,     0,
       0,  1297,  1293,     0,     0,     0,  1288,  1287,  1301,  1300,
       0,     0,  1317,     0,     0,  1313,     0,  1321,     0,     0,
    1314,     0,  1350,   229,   229,     0,     0,     0,   229,     0,
    1383,     0,  1382,     0,     0,     0,     0,  1370,     0,     0,
       0,     0,  1374,     0,     0,     0,  1381,     0,     0,     0,
       0,     0,  1372,  1384,     0,     0,     0,  1371,   229,   229,
     229,  1361,  1360,  1362,     0,   252,   254,   256,   246,     0,
     249,   248,   247,     0,   257,     0,     0,    63,     0,  1446,
       0,  1453,   172,  1468,     0,  1459,  1460,     0,  1462,  1463,
       0,   181,   182,  1454,  1476,  1477,     0,   260,     0,   274,
       0,     0,     0,     0,   309,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   337,   339,     0,     0,
       0,     0,     0,     0,   364,     0,   172,     0,     0,     0,
       0,     0,   172,     0,   389,     0,   388,   459,   458,     0,
       0,     0,   499,   172,     0,   180,   510,   508,   512,   516,
       0,     0,     0,   180,     0,   551,   535,     0,   546,   548,
     183,     0,     0,   419,     0,     0,    63,     0,   525,    86,
      85,     0,     0,  1084,     0,     0,     0,     0,     0,     0,
    1096,     0,     0,     0,  1146,     0,     0,     0,  1115,  1116,
       0,     0,     0,     0,     0,  1129,     0,  1135,  1136,  1138,
    1140,     0,  1145,  1157,  1158,  1159,     0,  1161,     0,  1167,
    1169,  1170,  1168,  1068,     0,  1148,     0,  1147,  1083,     0,
       0,  1153,     0,  1155,     0,  1154,  1176,  1156,  1163,     0,
       0,   607,   605,   441,     0,     0,  1345,  1339,   672,   673,
       0,   670,   666,     0,   193,   193,   193,   194,   195,   684,
     685,   189,   188,     0,   193,   193,   193,     0,   692,   691,
     690,   702,   190,   193,   193,   193,   191,   192,   193,   193,
       0,   193,   193,     0,   190,     0,   715,     0,   721,     0,
     720,   719,   718,     0,     0,     0,   745,     0,   744,     0,
     717,   716,     0,     0,     0,     0,   190,   190,   187,     0,
       0,   187,     0,     0,     0,   193,   193,   819,     0,   193,
     193,   824,     0,   219,   220,   221,   222,   223,   224,     0,
      92,    93,    91,   856,     0,     0,     0,     0,     0,  1007,
    1005,  1000,     0,  1010,   994,  1011,   997,  1009,  1003,   992,
    1006,   995,   993,  1012,  1008,     0,     0,   870,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   904,     0,     0,     0,     0,
     915,   917,     0,     0,     0,   923,   922,     0,     0,     0,
     208,     0,     0,     0,   172,     0,   934,     0,     0,     0,
       0,   939,   940,   941,     0,     0,     0,     0,   948,   964,
     968,   970,   973,   972,     0,     0,     0,   977,   855,  1015,
    1017,     0,  1016,   840,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1049,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     844,   991,     0,     0,     0,     0,   951,     0,   172,  1190,
    1188,  1186,     0,     0,   172,  1192,   956,     0,     0,     0,
       0,  1228,     0,     0,  1236,   981,   982,     0,   984,  1296,
    1298,  1295,  1294,  1285,     0,     0,     0,  1318,     0,     0,
    1322,  1333,   231,   232,   233,   234,   230,  1364,  1363,     0,
       0,     0,  1368,     0,     0,     0,  1367,     0,     0,     0,
    1366,  1365,   229,     0,     0,     0,  1373,     0,     0,     0,
    1380,     0,     0,     0,  1379,     0,     0,     0,  1378,     0,
       0,     0,  1377,     0,     0,     0,     0,     0,  1394,     0,
    1429,  1428,  1430,     0,     0,     0,  1376,     0,     0,     0,
    1375,  1389,  1388,  1390,  1386,  1385,  1387,  1432,  1431,  1433,
       0,   250,     0,     0,  1448,  1450,  1451,     0,  1466,   172,
    1461,  1464,     0,     0,   172,     0,     0,     0,   271,     0,
       0,     0,     0,   313,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   360,   359,     0,     0,
     351,   362,   172,   365,   369,     0,   380,   382,   381,   379,
     172,   387,     0,     0,     0,   180,   172,     0,     0,     0,
       0,   530,   544,   553,     0,   547,   185,   186,   184,   540,
       0,   556,     0,     0,   523,   528,    84,     0,     0,     0,
       0,     0,     0,   172,  1085,     0,     0,     0,  1090,     0,
     172,     0,  1097,  1098,  1099,     0,  1101,  1103,  1102,  1104,
    1105,     0,     0,     0,  1111,     0,  1117,  1118,     0,     0,
       0,  1124,  1122,  1123,     0,     0,     0,     0,  1130,  1131,
       0,     0,  1134,  1137,  1139,  1141,  1142,     0,     0,  1160,
    1162,     0,  1082,  1072,  1172,  1073,     0,     0,  1174,  1164,
       0,     0,   625,   626,     0,   667,   671,     0,   681,   682,
     683,   193,   687,   688,   689,     0,     0,     0,   696,   697,
     187,     0,     0,     0,   193,   703,   704,   705,   706,   708,
     190,   711,   712,     0,   193,     0,     0,     0,   190,   190,
     187,     0,     0,     0,     0,     0,     0,     0,   190,   190,
     187,     0,     0,   187,     0,     0,     0,     0,   190,   190,
     187,     0,     0,     0,     0,   743,     0,   747,     0,     0,
       0,     0,     0,   190,   190,   187,     0,     0,   187,     0,
       0,     0,     0,     0,   190,   190,   187,     0,     0,   187,
       0,   190,   723,   724,   725,   726,   728,     0,   731,   732,
       0,   190,     0,     0,   817,   818,   193,   821,   822,     0,
     853,   172,   857,     0,     0,     0,     0,     0,     0,     0,
     999,   996,  1002,  1001,   998,  1004,     0,     0,     0,   196,
     198,   207,   203,   200,   201,   197,   199,   204,   202,   206,
     205,     0,     0,     0,   172,   877,   876,   878,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   949,   895,   896,   897,     0,   901,   898,   900,     0,
       0,   906,   905,   907,     0,     0,     0,     0,     0,     0,
       0,   172,   172,   921,   931,   214,   210,   215,   209,   212,
     211,   216,   213,   929,   930,   172,     0,     0,   933,   935,
     172,   172,     0,   942,   945,   946,   172,   172,   971,   975,
     854,  1018,   841,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1050,  1177,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1048,     0,     0,     0,     0,     0,   851,   852,
     172,   180,  1191,     0,     0,  1195,  1196,     0,     0,   958,
       0,   172,     0,  1230,  1232,   980,     0,  1315,  1316,  1319,
    1320,   229,   229,   229,   229,   229,   229,   229,   229,   229,
    1434,  1392,  1391,  1393,  1426,  1425,  1427,  1423,  1422,  1424,
    1417,  1416,  1418,  1414,  1413,  1415,  1396,  1395,  1399,  1398,
    1400,  1397,  1408,  1407,  1409,  1405,  1404,  1406,     0,     0,
    1443,     0,  1467,     0,   172,     0,  1471,     0,     0,   275,
       0,   272,     0,     0,     0,     0,     0,   321,     0,     0,
       0,     0,     0,     0,   328,     0,     0,     0,   172,     0,
     366,     0,     0,   372,   160,     0,   480,     0,   506,   180,
     183,     0,     0,   519,     0,   557,   558,     0,   522,     0,
       0,     0,     0,     0,     0,   172,  1086,   183,   183,   183,
     172,  1091,   183,   180,   183,   183,   172,  1106,   183,   183,
     183,   172,  1112,   183,   183,   172,     0,   172,   183,   172,
     183,   183,   172,   183,   172,     0,  1150,  1151,     0,     0,
     624,     0,   686,   693,   694,   695,     0,   699,   700,   701,
     707,   193,   190,   713,   734,   735,   736,   737,   738,     0,
     740,   741,   190,   190,   797,   798,   799,   800,   802,     0,
     805,   806,     0,   190,   808,   809,   810,   811,   812,     0,
     814,   815,   190,     0,     0,     0,   190,   190,   187,     0,
       0,     0,     0,     0,     0,   190,   190,   187,     0,     0,
       0,     0,     0,     0,   190,   190,   187,     0,     0,     0,
     190,   193,   193,   193,   193,   193,     0,   193,   193,     0,
     190,   190,   193,   193,   193,   193,   193,     0,   193,   193,
       0,   190,   727,   190,     0,   733,     0,     0,   820,     0,
     858,   183,     0,     0,   183,     0,     0,     0,   868,   183,
     871,   872,   873,   183,   875,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   899,   902,
     903,     0,   183,     0,     0,     0,   918,   919,     0,     0,
     180,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1221,  1047,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   172,     0,     0,    89,     0,
       0,  1058,  1059,   180,     0,     0,     0,  1198,   957,   959,
     180,   172,  1308,  1420,  1419,  1421,  1411,  1410,  1412,  1402,
    1401,  1403,  1435,     0,  1445,  1478,     0,     0,  1473,  1472,
     276,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     317,     0,     0,     0,     0,   352,   363,   370,   183,   481,
     485,   507,   509,     0,   517,   552,   172,     0,     0,     0,
       0,     0,     0,   172,  1079,  1087,  1089,  1088,  1092,  1093,
    1094,  1095,  1100,  1107,  1108,  1109,  1110,  1113,  1114,  1119,
     180,   183,   180,  1127,   180,  1128,  1132,   180,  1143,   180,
     172,     0,   172,     0,   623,     0,   698,   709,   193,   190,
     742,   801,   190,     0,   807,   190,   816,   193,   193,   193,
     193,   193,     0,   193,   193,   190,   193,   193,   193,   193,
     193,     0,   193,   193,   190,   193,   193,   193,   193,   193,
       0,   193,   193,   190,   193,   757,   758,   759,   760,   762,
     190,   765,   766,     0,   193,   193,   786,   787,   788,   789,
     791,   190,   794,   795,     0,   193,   729,   190,   825,   826,
     172,   860,     0,   183,   862,     0,   172,     0,   869,   874,
     172,     0,   883,   884,   885,   886,   890,   891,   887,   888,
     889,     0,     0,   183,   910,     0,   172,     0,     0,   924,
       0,   183,     0,     0,   183,   183,     0,   974,     0,   217,
     217,     0,     0,   217,     0,   217,  1177,     0,     0,     0,
       0,     0,     0,     0,     0,  1222,  1200,     0,  1207,  1208,
       0,   217,   217,     0,     0,     0,     0,     0,  1177,     0,
       0,     0,  1177,     0,  1051,     0,     0,     0,  1177,    90,
       0,   217,     0,  1224,   172,   172,     0,   180,     0,   258,
    1480,  1479,     0,     0,   280,     0,     0,     0,     0,     0,
     325,     0,     0,     0,     0,     0,   373,   518,     0,   392,
       0,  1075,     0,   225,     0,  1080,  1120,  1121,  1125,  1126,
    1133,  1144,  1081,   434,     0,   392,     0,   710,   739,   803,
     190,   813,   748,   749,   750,   751,   752,   190,   754,   755,
     193,   777,   778,   779,   780,   781,   190,   783,   784,   193,
     768,   769,   770,   771,   772,   190,   774,   775,   193,   761,
     193,   190,   767,   790,   193,   190,   796,   730,     0,   183,
     863,     0,     0,     0,     0,     0,   892,   893,   908,     0,
       0,     0,   920,   925,     0,   927,     0,   936,   937,   928,
     183,     0,   218,  1177,  1177,    89,     0,  1177,     0,  1177,
    1019,   172,     0,     0,     0,     0,     0,     0,     0,  1199,
       0,     0,  1177,  1177,    89,     0,     0,     0,  1177,  1177,
    1023,  1177,     0,     0,  1024,  1177,  1054,  1052,  1053,  1028,
    1177,  1177,  1224,  1240,     0,  1189,  1187,  1226,     0,     0,
       0,     0,   282,   315,   316,     0,     0,     0,   314,   340,
     341,     0,   392,   393,   395,   394,   445,     0,     0,   226,
     228,   227,  1077,  1078,   392,   447,     0,   804,   193,   756,
     193,   785,   193,   776,   763,   193,   792,   193,     0,   859,
     183,   183,     0,   183,     0,   183,   183,     0,   926,   183,
       0,  1177,  1034,  1030,  1177,     0,  1035,     0,  1029,  1177,
       0,  1202,     0,  1205,  1245,  1206,  1204,  1201,     0,  1032,
    1031,  1177,     0,     0,  1177,  1036,  1026,  1022,  1177,   172,
    1025,  1027,  1033,  1240,  1184,     0,     0,  1225,  1238,  1227,
    1307,     0,     0,   323,   324,   322,   353,   356,   354,     0,
       0,   446,  1074,   172,   448,   669,   753,   782,   773,   764,
     793,   183,   861,   867,     0,   882,   879,   909,   914,     0,
     932,     0,  1041,  1021,    89,     0,  1039,     0,  1203,     0,
    1020,    89,     0,  1037,  1040,     0,  1185,  1242,  1244,     0,
    1237,     0,     0,     0,     0,     0,     0,   225,     0,   864,
     172,   880,   911,   947,  1177,     0,  1246,     0,  1177,     0,
     183,  1243,  1239,   281,     0,     0,     0,     0,     0,  1076,
     836,   172,   865,   881,   172,   912,  1043,     0,  1177,  1042,
       0,     0,   283,   345,     0,   344,     0,   866,   913,    89,
    1044,    89,  1177,   343,   342,  1177,  1177,  1038,  1046,  1045
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    59,  1662,   184,   166,  1087,  2858,  2859,   496,   497,
     498,   499,   167,   168,   169,   829,   752,   102,   968,   519,
    1433,  1969,  1593,  1608,  1589,  2181,  2233,  2973,  1659,  3042,
    1837,   392,   926,  1411,   910,   913,   916,   931,    69,   416,
     422,   426,   429,    75,   433,    82,   449,   445,   439,   456,
      92,   466,   103,   112,   474,   477,   480,   482,   555,  1038,
    1938,   484,   487,   490,   119,   506,   170,   172,  3036,   188,
     191,   236,  1082,  1132,   543,  1026,   546,   556,  1030,  1035,
     558,   560,  1041,   563,  1043,   577,  1047,  1049,   580,   584,
     588,   590,   593,   597,   633,   629,  1508,   611,  1068,  1073,
    1065,  1496,  1079,   614,   641,   650,  1090,   655,   660,   652,
     625,   621,   665,   674,  1127,  1572,  1119,  1121,  1123,  1129,
     679,  1134,   239,   681,  2044,   258,   684,   686,   690,   695,
     703,   276,  1582,   718,   299,   761,  1598,   763,   771,  1191,
    1616,  1186,  2105,  1628,  1626,  2107,  1187,  1618,  1620,   777,
     780,   775,   301,   309,   311,   820,  1270,  1685,  1259,  1790,
    2264,  2282,  1274,  1278,  1268,  1114,  1553,  1557,  1565,  1567,
    2598,   317,  1287,  1290,  1298,  2835,  2836,  2837,  2599,  3013,
    3014,  1320,  1326,  1329,  3107,  3108,  3104,  3105,  3157,  2838,
    2839,   292,   325,   333,   341,   844,   839,   346,   351,   353,
     854,   861,  1355,  1360,   920,   907,   358,   362,   327,   268,
     264,   366,   868,   373,   902,   877,   892,   893,  1397,  1392,
    1856,  1382,  1878,  1850,  1890,  1886,  1846,  1872,  1868,  1842,
    1864,  1860,  1386,   897,   879,   379,   380,   396,  1419,   399,
     405,   944,   947,   941,   407,   410,   952
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2955
static const yytype_int16 yypact[] =
{
    5332,    84,   657,    29, -2955, -2955,  1171,  -156,  1520,   915,
     566,    91,  3281,   157,   424,    41,   934,    59,  5565,   955,
    2620, -2955,   207,   119,   191,  1029,   152,   515,   896,   -69,
      87,   201,   650,  1236,   -98,   204,  1065,  3723,   181,   963,
     224,   186,   650, -2955,   160,   233,    63,    -4, -2955,   123,
     279,   967, -2955,   102, -2955,    50,   830,   290,   118,   314,
     212,  1110,   178,   555,   634,   139,   649,     8,   715, -2955,
   -2955, -2955,   286,   753,  1165, -2955,    97,   133,   424,   498,
     190,   616, -2955,   682,  1165, -2955, -2955,  1165,  1165,   739,
     741,  1165, -2955, -2955, -2955, -2955,  1165, -2955, -2955, -2955,
   -2955,  1165, -2955, -2955,  1028,    58,   764,   742,   775,   783,
    1048,   196, -2955,  1165,  1738,  1165,  1165,   763,  1165, -2955,
   -2955, -2955,   575, -2955, -2955, -2955, -2955,  4277, -2955, -2955,
   -2955, -2955, -2955, -2955,  1165, -2955, -2955, -2955, -2955, -2955,
   -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955,
   -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955,
   -2955, -2955, -2955, -2955, -2955, -2955, -2955,  1366, -2955,  1165,
   -2955,   808, -2955, -2955,   424,   424,   424,   424,   424,   424,
     424,   424,   424,   424, -2955, -2955, -2955, -2955, -2955,   735,
     861, -2955,   798,  1828,     9,   221,   553,   712,   713,  4374,
     855,  4832,  4776,   891,  4277,  3941, -2955,  1296,  -159,   868,
     936,   857,   268,   276,  1146,  1024,   946,   305,   650,  1181,
   -2955,   675,   939, -2955,   777,   736,   292, -2955,   267, -2955,
    1185, -2955,   484,   970,    67, -2955, -2955,  4991, -2955, -2955,
   -2955,  1004,   998,  1057, -2955, -2955, -2955, -2955,    80, -2955,
   -2955, -2955, -2955,   611, -2955, -2955,  4991,  4346, -2955,  1088,
   -2955,     6,  4991,  1092, -2955,    92,  4991,  1133, -2955,    69,
   -2955,  1156,  1210,   583, -2955,  1165, -2955,  1215,  1540,  1985,
   -2955,  1228, -2955, -2955, -2955, -2955,  1232, -2955, -2955,  1165,
   -2955,   424, -2955,   489,  1243,    43,    47,  1253,    31, -2955,
   -2955, -2955,  1257,  1263,   424,   424,  1165,  1165, -2955, -2955,
    1277, -2955, -2955, -2955, -2955, -2955, -2955,  2721,  1985, -2955,
    1280,    19,  1165,  4991,  1165, -2955,  4991, -2955,  1283, -2955,
   -2955, -2955, -2955, -2955,  1165,  1453,   424,  3775,  1165,  1366,
    1165, -2955,  1261, -2955,  5604, -2955, -2955,   465,  1287,  1292,
    1165, -2955,  1300, -2955, -2955,   -83, -2955, -2955, -2955,  1307,
    4991,  1306, -2955,  1516,  1165,  1233, -2955,  1044,  1213,  2228,
     179,  1349,   514, -2955, -2955, -2955, -2955, -2955, -2955, -2955,
    1353, -2955,    70,   235,   351,   440,   132,  1165,    38,  1363,
    1165,   205, -2955,  1165,    -6,  1371, -2955,  1165,  1165, -2955,
      68,    20,    36,  1378,  1366, -2955, -2955, -2955,  1138,  1165,
   -2955, -2955, -2955, -2955, -2955,  1165, -2955,  1386,  1392, -2955,
    1165,  1260, -2955, -2955, -2955, -2955, -2955, -2955,  1165, -2955,
     424, -2955,  1165, -2955, -2955,   758,   758, -2955,  1412, -2955,
   -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955,
    1206,  1165,  1165,  1430,  1441,  1444, -2955, -2955,  1165,  1165,
    1165,  1165,  1165,  1165,  1451,  1165, -2955,  1462,  1165, -2955,
    1165,  1467,  1480,  1482, -2955,  1485, -2955, -2955,  1498,  1507,
   -2955,  1178, -2955,  1512, -2955,  4991,  1297, -2955,   680, -2955,
   -2955,  1165, -2955, -2955, -2955,  1165,  1515,  1524,  1524,  4991,
    1165,  1165,  1165,  1165,  1165,  1165, -2955,  1165,  4277,  1738,
    1165,  1165, -2955, -2955, -2955, -2955, -2955, -2955, -2955,  1738,
    1165, -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955,
   -2955, -2955,  1533, -2955, -2955,  1218,    61, -2955, -2955, -2955,
   -2955, -2955, -2955, -2955, -2955,  1150, -2955,   -39, -2955, -2955,
   -2955,  1361, -2955,   601,   556,   556, -2955, -2955, -2955,  1551,
   -2955,  1568, -2955, -2955,  1223,   -72, -2955,  1375, -2955, -2955,
   -2955, -2955,  1395, -2955,  1588, -2955,  1366, -2955,  1165,  1165,
   -2955,  4991,  4991,  1366, -2955, -2955,  1366, -2955, -2955, -2955,
   -2955,  1366, -2955, -2955,  4991,  1366,  1165, -2955, -2955,  4991,
   -2955,  1593,   700,  1379,    16, -2955, -2955,  1382,  4991,    42,
   -2955, -2955, -2955, -2955, -2955, -2955,  1613,  1614, -2955, -2955,
   -2955, -2955, -2955, -2955, -2955, -2955,  1616, -2955,  1401, -2955,
    -101, -2955,  1165, -2955, -2955,  1623,  1623, -2955, -2955,  1623,
    1623, -2955,   610, -2955, -2955, -2955, -2955, -2955, -2955, -2955,
   -2955, -2955, -2955, -2955, -2955, -2955,   484, -2955, -2955, -2955,
   -2955, -2955, -2955,  1425,  1426, -2955, -2955,  1569,  1571,  1574,
   -2955, -2955,    78,  1397, -2955,  1165,  1639,  1393,  5604, -2955,
    1366, -2955, -2955,  1653, -2955, -2955, -2955, -2955, -2955, -2955,
   -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955,  4991,  4991,
    4991,  4991, -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955,
    1655, -2955, -2955, -2955, -2955,  1665,  1667,   424, -2955, -2955,
    1668,  1671,  1455,  1165, -2955,  1985, -2955,  1674, -2955, -2955,
   -2955, -2955, -2955,  1165, -2955,   424, -2955, -2955, -2955, -2955,
   -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955,
   -2955, -2955, -2955, -2955, -2955, -2955, -2955,   817,  1582,  1590,
    1591, -2955,  1682, -2955,   294,  1595,   108,   376,  4940,   449,
    1688, -2955,  1690, -2955,  1692, -2955,    51, -2955,  1694,  1695,
   -2955,  1697, -2955, -2955, -2955,  1165, -2955,  5604,  4740,  1725,
    1389,   671,  1698,   659,  1603, -2955, -2955, -2955,  1708,   111,
     681,  1709,  1711,   232,  1165,   485,   648,   755,  4991,   424,
    1883,  1064,   151,   333,   309,    34, -2955,  1702,  1703,  1719,
   -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955,
    1165, -2955, -2955, -2955, -2955,  1165,  1165,  1165,  1165, -2955,
   -2955,  1165,  1366,  1165, -2955,  1165,  1738,  1165,  1723,  1366,
   -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955,  1724,    26,
     369, -2955, -2955, -2955,  1728, -2955, -2955, -2955, -2955,  1628,
   -2955,  1731,  1745,  1657,  1659,  1661,  1752, -2955,  1754, -2955,
    1756,  1672,  1765,   488,   602,   545,   576,   568,   691,   580,
    1768,   661, -2955, -2955,  1772,  1781,  1769, -2955, -2955,  1782,
    1783,  1790, -2955,  1793, -2955, -2955, -2955, -2955,  1797, -2955,
   -2955,  1801, -2955, -2955,  1802, -2955, -2955, -2955, -2955, -2955,
   -2955, -2955,  1165,   411,  1165, -2955, -2955, -2955, -2955,  1165,
    1165, -2955,  1165,  1165,  1324,  1165,  1165, -2955,  5604,  1729,
    1804, -2955,  1390,  1807, -2955,  1403,  1809, -2955, -2955,    25,
    1165,  1165, -2955,  1806, -2955, -2955,  1813,  1543,  1165,  1808,
    1052, -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955,
   -2955, -2955, -2955, -2955, -2955, -2955,  1824,  1827,  1165,  1165,
    1165,  1165,  1165,  1835,  1165,  1838,  1165,  1165,  1840,  1836,
     113,  1842, -2955, -2955,   424,  1843,  1858,  1366,  1859,  4991,
    1861, -2955, -2955, -2955, -2955, -2955, -2955,  1366, -2955, -2955,
    1165,  1165,  1165,  4991,  1165,  1738,  1165, -2955,  1165, -2955,
   -2955, -2955, -2955, -2955,  1862,  1865, -2955, -2955, -2955, -2955,
   -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955,
     855, -2955,  1165, -2955,  1867, -2955, -2955, -2955, -2955, -2955,
   -2955, -2955, -2955,  4991,  1165,  1366,  1366,    25,    25,    25,
    1366,  1738,  1165,  1366, -2955, -2955, -2955,  1165, -2955,  -101,
    1644,  1870,  1868, -2955, -2955,  1366, -2955,  1687,  1700, -2955,
    1873,  1875, -2955,  1879,  1422,  1826,  1848, -2955,  1165, -2955,
   -2955, -2955, -2955, -2955,  4745,   704,  1530,   636, -2955, -2955,
   -2955, -2955,  1165,   104,  1376, -2955,  1589, -2955,  1883,  1592,
     632,  1566,   144, -2955, -2955,  1165, -2955, -2955, -2955, -2955,
   -2955, -2955, -2955, -2955, -2955,  1572, -2955, -2955, -2955, -2955,
    1165,  1884, -2955, -2955, -2955, -2955,    25, -2955, -2955, -2955,
   -2955, -2955,  1891,  1894,  4861, -2955, -2955,  1897,  1898,  1165,
   -2955, -2955, -2955, -2955,  1902,  1903,  1906,   -19,   -19,   -49,
    1911,  1914,  1915,  1921,  1921,  1921,  1619,  1622,  1927,  1928,
    1929,   164,   164,   -49,  1931,  1933,   -49,  1934,  1935,  1936,
    1938,  1936,  1938,  5566,  1940,  1941, -2955, -2955,  1936,  1938,
     679, -2955,  1944,  1945,  1946,  1948,   -19,   -49,  1950,  1952,
   -2955,  1954, -2955, -2955,  1366,  1075,  1490,  1666,  1691,  1696,
    1845,  1245,  1699,  1964,   375,    10,  1852,  1601,  1968,  1704,
    1932,  1701,  1706,  1864,  1975,  1743,   208,    72,   511,   -80,
    4991,  1883,  1942,   923,  1707,  1746,  1982,   170, -2955, -2955,
     570,  1987,  1984, -2955, -2955, -2955,  1989,  1755,   116,  1883,
    1757, -2955, -2955,  1937, -2955,   424,  1996,  1997,  1165, -2955,
   -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955,    13, -2955,
    1554,  1999, -2955, -2955, -2955,  1165, -2955,  1165, -2955, -2955,
   -2955, -2955,  1165,  1165,  1165,   659,  4991, -2955,  2000,  1509,
   -2955, -2955,  1165, -2955, -2955,  1165,  4991,  1165, -2955, -2955,
   -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955,
   -2955, -2955, -2955,   424,  1165, -2955,  1165,   659,  2001,  2003,
   -2955, -2955, -2955, -2955,  1165,  1165, -2955,   424, -2955, -2955,
   -2955,   586,  2004,  2005, -2955, -2955, -2955, -2955, -2955,  1165,
    1165, -2955, -2955,  1738,  1165,  1165, -2955, -2955, -2955, -2955,
    2007,  1165, -2955,  1165,  1892, -2955,  1165, -2955,  1165,  1893,
   -2955,  2011, -2955,  1034,  1034,   677,   759,   791,  1034,  2012,
   -2955,   824, -2955,   828,   853,   922,   985, -2955,  2013,  2014,
    1003,  2018, -2955,  2019,  2021,  2023, -2955,  1011,  1027,  2024,
    2026,  2031, -2955, -2955,  2032,  2035,  2038, -2955,  1034,  1034,
    1034, -2955, -2955, -2955,  1165, -2955, -2955, -2955, -2955,  1165,
   -2955, -2955, -2955,  1165, -2955,  1165,  1165,   725,  4991, -2955,
    1165, -2955,  1366, -2955,  5604, -2955, -2955,  2040, -2955, -2955,
    2043, -2955, -2955, -2955, -2955,  1993,  3775, -2955,  1165,  2017,
    1165,  1165,  1165,  1305, -2955,  2039,  1165,  1165,  2046,  1165,
    1165,  2047,  1165,  2048,  1165,  1165, -2955, -2955,  2049,  2050,
     -14,  2054,   424,   424, -2955,  4991,  1366,  2057,  1165,  2058,
    2059,  2060,  1366,  4991, -2955,  1165, -2955, -2955, -2955,  1165,
    1165,  1165, -2955,  1366,  4991,    25, -2955, -2955, -2955, -2955,
    1738,  1165,  2061,    25,  1165,   811, -2955,  2063, -2955, -2955,
    1155,  2897,  1165, -2955,  1165,  2062,  2051,  1165, -2955, -2955,
   -2955,  2065,  1411,  4277,  1800,  1814,  1815,   124,  4991,  1817,
   -2955,   531,    52,   129, -2955,  1831,  1832,   131, -2955, -2955,
     837,  1888,   766,  1816,   493,  1883,   437, -2955,  2069,  1796,
   -2955,  1042, -2955, -2955, -2955, -2955,  1883,  1863,   -10, -2955,
   -2955, -2955, -2955, -2955,  1165, -2955,  1165, -2955, -2955,  1165,
    1165, -2955,  1165, -2955,  1165, -2955, -2955, -2955, -2955,  1885,
    1165, -2955, -2955, -2955,  1165,    17, -2955, -2955, -2955, -2955,
    2098,  2102, -2955,  1165,   -19,   -19,   -19, -2955, -2955, -2955,
   -2955, -2955, -2955,  2103,   -19,   -19,   -19,  1157, -2955, -2955,
   -2955, -2955,   164,   -19,   -19,   -19, -2955, -2955,   -19,   -19,
    2110,   -19,   -19,  2111,   164,  1161, -2955,   785, -2955,  1316,
   -2955, -2955, -2955,  2112,  2113,  2114, -2955,   809, -2955,   937,
   -2955, -2955,  1811,  2116,  2117,  2118,   164,   164,   -49,  2120,
    2123,   -49,  2124,  2126,  2127,   -19,   -19, -2955,  2128,   -19,
     -19, -2955,  2129, -2955, -2955, -2955, -2955, -2955, -2955,   424,
   -2955, -2955, -2955,  4277,  1476,  1165,  1561,  1830,   -26, -2955,
   -2955, -2955,   -12, -2955, -2955, -2955, -2955, -2955, -2955, -2955,
   -2955, -2955, -2955, -2955, -2955,  2130,  1165, -2955,   424,   655,
    2134,  1165,  4991,   424,   424,  2135,  1847,  1856,  1869,   240,
     273,  1874,   284,  1763,  1780,  2138,  2143,  2144,  2145,  1245,
    2146,  2152,  2153,  1805,  1810,  1564,  2155,  1165,  1580,  1853,
   -2955, -2955,   424,   655,  4991, -2955, -2955,  4991,  1165,  2156,
      73,  2158,  4991,  1165,  1366,   424, -2955,  2160,  4991,  4991,
    1165, -2955, -2955, -2955,   424,   424,   655,  4991, -2955, -2955,
   -2955, -2955, -2955, -2955,  4991,  1165,   424, -2955,  2162, -2955,
   -2955,  1165, -2955, -2955,  2163,  1165,  1912,   219,  1165,  1913,
    1165,   581,  1165,  2165,  1165,  1916,  1917,  1165,  1165,  1165,
    1918,  1165,  1360,  1165,  1165,  1367,    22,  1165,  1165,  1920,
   -2955, -2955,  1165,  1165,  1165,  1165, -2955,  4991,  1366,  2167,
    2169,  2176,  1165,  1165,  1366, -2955,  1165,  1165,  1165,  4991,
     659, -2955,  1165,  1165, -2955, -2955, -2955,  2177, -2955, -2955,
   -2955, -2955, -2955, -2955,  2179,  1165,  1165, -2955,  1165,  1165,
   -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955,  2180,
    2191,  2194, -2955,  2195,  2196,  2199, -2955,  2200,  2203,  2205,
   -2955, -2955,  1034,  2207,  2209,  2206, -2955,  2210,  2212,  2214,
   -2955,  2215,  2216,  2218, -2955,  2219,  2220,  2222, -2955,  2223,
    2225,  2227, -2955,  2231,  2232,  2233,  2235,  2237, -2955,  2238,
   -2955, -2955, -2955,  2239,  2240,  2242, -2955,  2243,  2244,  2256,
   -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955,
    1165, -2955,  1165,  1165, -2955, -2955, -2955,  1165, -2955,  1366,
   -2955, -2955,  3775,  1165,  1366,  1165,  1165,  1165, -2955,  1165,
    1165,  2265,  1165, -2955,  1165,  1165,  2257,  1165,  1165,  2272,
    1165,  2278,  1165,  1165,  2280,  2281, -2955, -2955,  2282,  4991,
   -2955,  2283,  1366, -2955,  2284,  1165, -2955, -2955, -2955, -2955,
    1366, -2955,  1103,  1165,  1103,    25,  1366,  4991,  1165,  1165,
    2285, -2955, -2955, -2955,  1165, -2955, -2955, -2955, -2955, -2955,
    4991, -2955,  4991,  1165, -2955, -2955,  -101,  2286,  2287,  2292,
    2293,  2296,  4912,  1366, -2955,  4991,  4991,  4991,  4277,  4991,
    1366,  4991, -2955, -2955, -2955,  4991, -2955, -2955, -2955, -2955,
    4277,  4991,  4991,  4991,  4277,  4991, -2955, -2955,  4991,  4991,
    1165, -2955, -2955, -2955,  4991,  4991,  4991,  4991, -2955, -2955,
    4991,  4991, -2955, -2955, -2955, -2955, -2955,  4991,  4991, -2955,
   -2955,  2080, -2955, -2955, -2955, -2955,  1165,  1165, -2955, -2955,
    2298,  1165, -2955, -2955,  2299, -2955, -2955,  1165, -2955, -2955,
   -2955,   -19, -2955, -2955, -2955,  2300,  2302,  2303, -2955, -2955,
     -49,  2305,  2306,  2307,   -19, -2955, -2955, -2955, -2955, -2955,
     164, -2955, -2955,  2309,   -19,  2310,  2311,  2312,   164,   164,
     -49,  2343,  2345,  2346,  1851,  2353,  2354,  2356,   164,   164,
     -49,  2360,  2363,   -49,  2364,  2366,  2367,  2368,   164,   164,
     -49,  2370,  2371,  2372,  1321, -2955,  1385, -2955,  1529,  1890,
    2373,  2374,  2375,   164,   164,   -49,  2377,  2379,   -49,  2380,
    1895,  2381,  2382,  2384,   164,   164,   -49,  2386,  2388,   -49,
    2389,   164, -2955, -2955, -2955, -2955, -2955,  2391, -2955, -2955,
    2392,   164,  2393,  2394, -2955, -2955,   -19, -2955, -2955,  2397,
   -2955,  1366, -2955,  4991,  1165,  1165,  4991,  1165,  2398,  1490,
   -2955, -2955, -2955, -2955, -2955, -2955,  2400,  4991,   424, -2955,
   -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955,
   -2955,   655,  2401,  4991,  1366, -2955, -2955, -2955,  2404,  1490,
    1165,  1165,  1165,  1165,  1165,  1165,  1165,  1165,  1165,  2406,
    2408, -2955, -2955, -2955, -2955,  2409, -2955, -2955, -2955,  2411,
    2413, -2955, -2955, -2955,  1165,  4991,  1165,  2414,  1490,   424,
     655,  1366,  1366, -2955, -2955, -2955, -2955, -2955, -2955, -2955,
   -2955, -2955, -2955, -2955, -2955,  1366,  1165,  1738, -2955, -2955,
    1366,  1366,  1165, -2955, -2955, -2955,  1366,  1366, -2955, -2955,
   -2955, -2955, -2955,  1165,  1165,  1165,  1165,  1165,  1165,  1165,
    1165,  1165,  1165, -2955, -2955,  1165,  1165,  1165,  1165,  1165,
    1165,  1165,  1165,  1878,  1165,  1165,  1165,  1965,  1165,  1962,
    2416,  1165, -2955,  1165,  1165,  1165,  2418,  2419, -2955, -2955,
    1366,    25, -2955,  2420,  2421, -2955, -2955,  1738,  1165, -2955,
    2423,  1366,  4991, -2955, -2955, -2955,  2424, -2955, -2955, -2955,
   -2955,  1034,  1034,  1034,  1034,  1034,  1034,  1034,  1034,  1034,
   -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955,
   -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955,
   -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955,  1490,  1165,
   -2955,  1165, -2955,  1165,  1366,  1165, -2955,  1738,  1165, -2955,
    1165, -2955,  2173,  2425,  2426,  1165,  1165, -2955,  1165,  1165,
    2427,  1165,  2429,  1165, -2955,  2430,  2431,  2432,  1366,  2433,
   -2955,  2435,  4991, -2955, -2955,  1165, -2955,  1165, -2955,    25,
    1155,  1165,  2436, -2955,  1165, -2955, -2955,  4277, -2955,  2437,
    2438,  2439,  2441,  2443,  4991,  1366, -2955,  1155,  1155,  1155,
    1366, -2955,  1155,    25,  1155,  1155,  1366, -2955,  1155,  1155,
    1155,  1366, -2955,  1155,  1155,  1366,  4991,  1366,  1155,  1366,
    1155,  1155,  1366,  1155,  1366,  4991, -2955, -2955,  2445,  4277,
    2446,  1165, -2955, -2955, -2955, -2955,  2448, -2955, -2955, -2955,
   -2955,   -19,   164, -2955, -2955, -2955, -2955, -2955, -2955,  2449,
   -2955, -2955,   164,   164, -2955, -2955, -2955, -2955, -2955,  2450,
   -2955, -2955,  2451,   164, -2955, -2955, -2955, -2955, -2955,  2452,
   -2955, -2955,   164,  2453,  2454,  2455,   164,   164,   -49,  2457,
    2458,  2460,  2461,  2462,  2463,   164,   164,   -49,  2459,  2465,
    2467,  2468,  2471,  2472,   164,   164,   -49,  2466,  2474,  2475,
     164,   -19,   -19,   -19,   -19,   -19,  2477,   -19,   -19,  2478,
     164,   164,   -19,   -19,   -19,   -19,   -19,  2479,   -19,   -19,
    2482,   164, -2955,   164,  2483, -2955,  2484,  2485, -2955,  5604,
   -2955,  1155,  2486,  4991,  1155,  1165,  4991,  2487, -2955,  1155,
   -2955, -2955, -2955,  1155, -2955,  4991,  2488,  1165,  1165,  1165,
    1165,  1165,  1165,  1165,  1165,  1165,  1165,  1165, -2955, -2955,
   -2955,  4991,  1155,  1165,  4991,  2489, -2955, -2955,  1738,  1738,
      25,  4991,  1738,  1738,  4991,  4991,  1738,  1738,  1165,  1165,
    1165,  1165,  1165,  1165,  1490,  1165,  1165,  1165,  3445, -2955,
    1490,  1165,  1165,  1165,  1165,  1490,  1165,  1165,  2490,  1165,
    1165,  1165,  2491,  1165,  1165,  1366,  1165,  2027,  1490,  1165,
    1165, -2955, -2955,    25,   424,  4991,  4991, -2955, -2955, -2955,
      25,  1366,  2493, -2955, -2955, -2955, -2955, -2955, -2955, -2955,
   -2955, -2955, -2955,  1165, -2955, -2955,  1738,  1165, -2955, -2955,
   -2955,  1315,  2495,  2496,  2498,  2499,  1165,  1165,  2502,  1165,
   -2955,  2506,  2507,  2508,  1103, -2955, -2955, -2955,  1155, -2955,
   -2955, -2955, -2955,  2509, -2955, -2955,  1366,  2511,  2513,  2515,
    2518,  4991,  2519,  1366, -2955, -2955, -2955, -2955, -2955, -2955,
   -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955,
      25,  1155,    25, -2955,    25, -2955, -2955,    25, -2955,    25,
    1366,  2520,  1366,  2516, -2955,  1165, -2955, -2955,   -19,   164,
   -2955, -2955,   164,  2522, -2955,   164, -2955,   -19,   -19,   -19,
     -19,   -19,  2523,   -19,   -19,   164,   -19,   -19,   -19,   -19,
     -19,  2524,   -19,   -19,   164,   -19,   -19,   -19,   -19,   -19,
    2525,   -19,   -19,   164,   -19, -2955, -2955, -2955, -2955, -2955,
     164, -2955, -2955,  2526,   -19,   -19, -2955, -2955, -2955, -2955,
   -2955,   164, -2955, -2955,  2527,   -19, -2955,   164, -2955, -2955,
    1366, -2955,  4991,  1155, -2955,  2530,  1366,  1165, -2955, -2955,
    1366,  1165, -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955,
   -2955,  1165,  1165,  1155, -2955,  2531,  1366,  1165,  1738, -2955,
      24,  1155,  1165,  1738,  1155,  1155,  4991, -2955,  1165,  2533,
    2533,  1165,  1165,  2533,  1490,  2533, -2955,  4991,  1820,  1904,
    2025,  2041,  2140,  2142,  2147,  3445, -2955,  2148, -2955, -2955,
    1490,  2533,  2533,  1165,  1165,  1490,  1573,  1165, -2955,  1165,
    1165,  1165, -2955,  1165, -2955,  1738,  1165,  2539, -2955, -2955,
    1165,  2533,   424,    30,  1366,  1366,   424,    25,  2544, -2955,
   -2955, -2955,  2545,  1165, -2955,  2546,  2548,  2561,  2564,  2565,
   -2955,  2567,  2569,  2570,  2573,  1165, -2955, -2955,  2574,    -5,
    4991, -2955,  2576,    -2,  4991, -2955, -2955, -2955, -2955, -2955,
   -2955, -2955, -2955, -2955,  2578,    -5,  1165, -2955, -2955, -2955,
     164, -2955, -2955, -2955, -2955, -2955, -2955,   164, -2955, -2955,
     -19, -2955, -2955, -2955, -2955, -2955,   164, -2955, -2955,   -19,
   -2955, -2955, -2955, -2955, -2955,   164, -2955, -2955,   -19, -2955,
     -19,   164, -2955, -2955,   -19,   164, -2955, -2955,  1165,  1155,
   -2955,  4991,  4991,  1165,  4991,  1165, -2955, -2955, -2955,  4991,
    4991,  1165, -2955, -2955,  2586, -2955,  4991, -2955, -2955, -2955,
    1155,  2591, -2955, -2955, -2955,  1490,  1165, -2955,  2592, -2955,
   -2955,  1366,  1245,  2597,  2593,  2600,  2604,  2607,  2610, -2955,
     424,  2611, -2955, -2955,  1490,  1165,  2614,  2615, -2955, -2955,
   -2955, -2955,  1165,  4991, -2955, -2955, -2955, -2955, -2955, -2955,
   -2955, -2955,    30,  2087,  1883, -2955, -2955, -2955,   424,  2617,
    2618,  2621, -2955, -2955, -2955,  2623,  2624,  2625, -2955, -2955,
   -2955,   158,    -5, -2955, -2955, -2955, -2955,  2626,  4991, -2955,
   -2955, -2955, -2955, -2955,    -5, -2955,  2627, -2955,   -19, -2955,
     -19, -2955,   -19, -2955, -2955,   -19, -2955,   -19,  5604, -2955,
    1155,  1155,  1165,  1155,  2628,  1155,  1155,  1165, -2955,  1155,
    1165, -2955, -2955, -2955, -2955,  2629, -2955,  1165, -2955, -2955,
    2630, -2955,  2632, -2955, -2955, -2955, -2955, -2955,  1165, -2955,
   -2955, -2955,  2633,  1165, -2955, -2955, -2955, -2955, -2955,  1366,
   -2955, -2955, -2955,  2087, -2955,  2092,  2150,  1883, -2955, -2955,
   -2955,  2636,  2637, -2955, -2955, -2955, -2955, -2955, -2955,  1019,
    1019, -2955, -2955,  1366, -2955, -2955, -2955, -2955, -2955, -2955,
   -2955,  1155, -2955, -2955,  2634, -2955,  4277, -2955, -2955,  2641,
   -2955,  1490, -2955, -2955,  1490,  1165, -2955,  2642, -2955,  1165,
   -2955,  1490,  1165, -2955, -2955,  4991, -2955,  2092, -2955,   424,
   -2955,  2644,  2645,  1165,  1165,  1165,  1165,    -2,  2646,  4277,
    1366, -2955,  4277, -2955, -2955,  1165, -2955,  2648, -2955,  1165,
    1155, -2955, -2955, -2955,  2650,  2652,  1165,  2653,  1165, -2955,
   -2955,  1366, -2955, -2955,  1366, -2955, -2955,  2655, -2955, -2955,
    2656,  2657, -2955, -2955,  2659, -2955,  2660, -2955, -2955,  1490,
   -2955,  1490, -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2955, -2955,    -3, -2955,   353, -1064, -1661, -1102,  1727, -2955,
    1115,  -502,  1394,   -55,    32, -2955,  -302, -1940,  1854,  1825,
    -998,  1053, -1074,    12,  1844, -1702, -2955, -1420, -2955,  -930,
   -1349, -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955,
   -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955,
   -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955,  -788,  -553,
   -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955, -1884, -2955,
   -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955,
   -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955,
   -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955,
   -2955, -2955, -2955, -2955, -2955, -2955,   890, -2955, -2955, -2955,
   -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955,
   -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955,
   -2955, -2955, -2955, -2955, -2955, -2955,   451, -2955, -2955, -2955,
   -2955, -2955, -2955, -2955, -2955, -2955, -2955,  -150,   -99, -2955,
   -2955, -2955, -2955, -2955, -2955, -2955, -2955, -1705, -2955, -2955,
   -2955, -2955, -2955, -2955,  -796, -2955, -2955, -2955, -2955, -2955,
   -2955,    37, -2955, -2955, -2955, -2955,  -588,  -807, -1854,  -562,
   -2955, -2955, -2955, -2955, -2955,  -650,  -624, -2955, -2955, -2954,
   -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955,
   -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955,
   -2955, -2955, -2955, -2955, -2955, -2955, -2955,  1734, -2955, -2955,
   -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955,
   -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955, -2955,
   -2955, -2955, -2955, -2955, -2955, -2955, -2955
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1450
static const yytype_int16 yytable[] =
{
      74,   404,  1039,  1313,  2205,  1495,  2031,  1017,   118,  1286,
    1289,   705,  2385,   187,  2387,  1838,   821,  1020,  1763,  1851,
    1070,  2220,   367,   823,   942,    70,    71,  2279,  3033,  2963,
   -1223,  3039,    70,    71,   338,  1936,   778,  2042,  1693,  1330,
     945,   424,   120,   365,  2245,   120,  1076,  1085,   764,  1897,
    1898,  1899,   398,    70,    71,   409,   922,   933,   415,  1487,
    1488,  1489,   421,   475,  1194,   428,    70,    71,  1351,   340,
     432,   434,   938,   716,   444,    70,    71,   451,   455,   355,
    1997,   458,   677,   859,   459,   460,   612,   174,   468,  2160,
     175,   120,   302,   469,    70,    71,  1124,   711,   470,  1610,
    2225,   435,  1613,  2163,  1663,   904,   393,    70,    71,  1725,
     491,   495,   500,   501,   505,   507,  1195,  1458,   368,    70,
      71,    70,    71,  1648,   176,  2226,   687,  1272,  2227,  1459,
    1431,   511,   177,   113,   369,  1591,    70,    71,  1575,   544,
    2228,  1331,    70,    71,   917,  1988,  1045,  1352,   772,  1332,
    2000,  3158,  2004,  1752,   114,    60,  1317,  1587,   303,   510,
    1568,    70,    71,  1694,   356,  2229,   520,   277,   773,   125,
      83,   765,   125,  1024,   688,  1743,   706,   374,  1732,  1028,
    1606,  1086,   304,  2230,   261,   120,   342,   905,  1077,  1588,
     613,   171,   554,    70,    71,   300,  2161,   578,  1733,   178,
     488,  1071,  1179,  3181,  3034,  1998,   310,  3040,    70,    71,
    2164,   120,   115,   860,   766,   767,   120,   412,   125,  1726,
     189,  1046,    70,    71,    70,    71,   326,  2231,   352,   357,
     375,   370,   579,   545,   587,  1722,   592,   596,   190,   120,
     394,   376,   305,   824,   894,  1353,  1029,   632,  1281,   371,
    1569,   825,   826,    72,  1592,   642,   265,  2162,   179,   774,
     768,  2192,   712,  1753,   675,   489,  1196,   128,   918,   923,
     128,  2165,   723,  1025,   377,   328,   129,   130,   259,   129,
     130,   354,   363,   381,  1180,  2043,   755,   717,   661,   849,
     678,   180,   827,   181,  2194,   707,  1937,   689,   359,  1167,
     906,  1561,   934,   785,   786,  2197,   908,  1168,  1169,  1125,
     116,   895,   125,   120,   411,   436,   128,  3035,   476,   830,
    3041,   832,   182,  1432,   769,   129,   130,   939,  1354,  1723,
     425,   835,   838,   618,   841,   845,   395,   847,   125,   779,
    1555,   622,  1607,   125,  1346,   440,   919,   857,   943,  1321,
    1695,   770,  1197,   635,   708,   120, -1223,   657,   924,  1170,
     867,   869,  1764,  1198,   946,    73,   125,   173,   185,   843,
    3116,  2280,  1072,  2964,   437,   260,   636,   133,  1078,  1333,
     133,   713,   438,   308,   921,  2032,   397,   928,   930,   372,
     932,   345,  1999,   637,   936,   937,  1989,   183,  1126,   364,
    1199,  2001,  1688,  2005,   940,   951,   953,  1273,  1727,   828,
     128,  1356,   954,   413,   450,   120,   662,   957,   959,   129,
     130,   117,   911,  1150,  1735,   960,   133,   163,   120,   962,
     163,   446,   306,   547,   164,   165,   128,   164,   165,   548,
     125,   128,  1756,   262,   120,   129,   130,  1318,   972,   973,
     129,   130,  1754,  1744,   408,   977,   978,   979,   980,   981,
     982,   378,   984,   929,   128,   986,  1724,   987,  1322,   263,
    1181,  2232,  1282,   129,   130,   420,   163,  2255,  1319,  2551,
     441,   307,   125,   164,   165,   417,   549,  1957,  1002,  1797,
    1357,   896,  1003,   638,   757,  1961,  1689,  1008,  1009,  1010,
    1011,  1012,  1013,  2320,  1014,  3117,   495,  1018,  1019,  1171,
    1172,   914,  2193,  1474,   550,   266,   495,  1021,  2577,   278,
     133,  1809,  1323,   850,   442,   443,   343,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   344,   128,   663,
    1016,   267,   125,  1188,   123,  2195,   133,   129,   130,   552,
    3118,   133,  1182,  1261,   406,   125,  2198,   360,  1992,  1491,
     418,  1690,   851,   279,  2137,  2159,   280,  2140,   551,  1283,
     163,   125,   664,  1324,   133,  1053,  1054,   164,   165,   899,
     128,  2019,  1373,   361,    70,    71,   281,   721,  1358,   129,
     130,  1815,   619,  1062,  2189,  1173,   163,  1745,   104,  1262,
     623,   163,  1816,   164,   165,   282,  1174,  1175,   164,   165,
     880,  1176,   552,   553,  1094,  1095,   658,  2218,   620,    70,
      71,   852,   283,  1135,   163,  1189,   624,  2020,   284,  1088,
    1096,   164,   165,  1383,  1067,    70,    71,  1327,   419,   639,
     128,  1378,   659,  1177,   756,  1389,   900,  1691,   133,   129,
     130,   447,  1993,   128,   423,   640,   105,   783,   784,  2169,
     758,   759,   129,   130,  1374,  1729,   106,  1549,    61,   128,
    1325,  1359,  1130,   107,  1097,  1254,   430,   882,   129,   130,
     285,  1098,  2170,  2015,  1632,  1000,  1032,   457,  1115,   840,
     133,  1746,  1633,  1634,  2171,  2021,  1375,   448,   163,  1692,
    1384,   452,  1255,   286,  1066,   164,   165,  2172,  1379,  1036,
    1099,   312,  1390,  1185,    62,   722,  1261,  1994,    70,    71,
    1149,  2173,  2174,  1275,  2885, -1449,  1394,  1261,  2018,  1905,
    1152,  1409,  1204,   131,  1100,    63,   909,   912,   915,  2029,
     163,   925,  1839,   461,  1635,   467,   853,   164,   165,  1001,
     133,  2016,  1380,  1101,  1263,  1037,    70,    71,    70,    71,
     123,  2022,  1262,   133,   108,    64,    70,    71,   478,  1102,
     760,  1264,  1265,  1262,   479,  1543,  1103,   691,  1376,   133,
     481,  1285,  1203,   961,  1104,  1387,  1288,    65,   483,   963,
    2084,    66,  1291,  1395,   508,   313,  1033,  1292,  2085,  2086,
     163,  1284,  1276,  1995,  1297,   502,    67,   164,   165,  1840,
    1730,   453,   521,   163,  2109,  1963,  1550,   109,  1731,   287,
     164,   165,  2110,  2111,  1843,  2017,   901,  1337,  1747,   163,
    1154,  1155,  1338,  1339,  1340,  1341,   164,   165,  1342,  2260,
    1344,  1821,  1345,   495,  1347,   400,  1105,  1544,   288,   289,
    2087,  1256,   427,   401,   110,  1996,  1847,   890,    70,    71,
     964,   290,   692,   532,  2006,   291,   533,  1388,  1563,   534,
    1106,   123,  1266,  1267,  2112,  1107,  1293,  1108,  1545,   557,
    1385,  1551,  1156,  1422,   503,  2175,  1034,   111,  1381,  1853,
     431,  1844,  1391,  1857,  1636,  1637,  2176,  2177,  2178,  2179,
    1277,   454,  1294,   559,   561,  1109,  1110,   693,  1552,   314,
     462,   463,  2398,   562,  1111,   123,  1257,  1263,  1861,  1408,
    2011,  1412,   293,  1848,   315,   589,  1413,  1414,  1263,  1415,
    1416,  1418,  1420,  1421,  1264,  1265,  1112,    70,    71,   615,
     965,   616,  2120,  1258,    93,  1264,  1265,  1434,  1435,   131,
    2121,  2122,   694,   617,  1439,  1440,  1854,  2388,  2007,   464,
    1858,   634,  2633,  2634,  2635,  2636,  2637,  2638,  2639,  2640,
    2641,  1546,  2980,  1396,  1295,  1446,  1447,  1448,  1449,  1450,
    1638,  1452,   504,  1454,  1455,  1862,  2446,  1865,  1958,  1841,
    2180,  1639,  1640,    68,  3000,  1113,  1641,   316,  3004,   651,
    2088,  2089,  2123,   186,  3009,   382,  2459,  1469,  1470,  1471,
     653,  1473,   495,  1475,  2302,  1476,  2469,   383,   294,  2472,
     465,  3045,    70,    71,  2113,  2114,  2479,  2008,  1642,   630,
    1547,  1621,  1157,  1158,   295,  1266,  1267,  1479,  1630,  1481,
     347,  2516,   654,   966,  2519,   237,  1266,  1267,   384,   967,
    1869,  1484,  2527,   485,  1866,  2530,  1442,  2547,   495,  1492,
     131,   656,   238,  1443,  1494,  2012,   676,  1737,  1875,  2025,
    1145,  1845,  1480,  2013,   296,   682,  1883,   683,  1832,  1833,
     486,  1507,    94,  1622,   123,  1511,  2090,  2556,  1153,   685,
    1631,  1296,  1887,   704,   631,  2009,   710,  2091,  2092,  1554,
    1556,  1559,  2093,  1849,   131,   402,  1314,  1564,   403,   871,
    2115,    95,  1570,    70,    71,    96,  2575,  1870,  1159,  3072,
    3073,  2116,  2117,  3076,   269,  3078,  2118,  1573,  1625,  1160,
    1161,   297,    93,   385,  2094,  1876,  1855,   715,  3089,  3090,
    1859,    70,    71,  1884,  3095,  3096,  1583,  3097,  3121,   298,
     626,  3100,  2124,  2125,   348,   270,  3101,  3102,  2119,  1888,
    3124,   719,  1300,  2026,  1653,  1863,  1162,  1328,    70,    71,
    2055,  2056,  1036,   414,  2075,  2076,   872,    97,   386,  1966,
    1967,  1738,   994,   995,  1609,  1315,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   720,   873,   874,  3142,  1037,   724,
    3143,    98,  2057,   666,  1728,  3146,  2077,  1834,  1835,   643,
      99,   100,  2027,   753,  1867,   667,   754,  3150,  2126,   271,
    3153,   627,   349,  1654,  3154,  1755,  2642,  1739,   762,  2127,
    2128,   471,   644,   350,  2129,  1762,   272,   387,   776,  1836,
    1968,   781,   101,    70,    71,   848,   668,   388,   782,   645,
      94,   958,  1792,   131,  1793,   950,  1410,  3080,   628,  1794,
    1795,  1796,   787,  1316,   318,   822,  2130,  1668,   834,  1802,
     389,   855,  1803,  2624,  1805,   329,   856,  1871,   390,    95,
    2028,   998,   999,  2384,   858,   319,   472,   320,    70,    71,
     864,  1807,   862,  1808,  3074,  1877,  1669,   391,    70,    71,
    3196,  1812,  1813,  1885,  3199,   875,   273,    70,  1417,  2095,
    2096,  1655,  1656,  3091,  2483,  2484,  1819,  1820,   870,  1889,
     495,  1822,  1823,   598,  3210,   878,  1657,  1461,  1825,   473,
    1826,   669,  1670,  1828,   898,  1829,   876,   903,  3217,   599,
    1671,  3218,  3219,    70,    71,    97,  1672,   927,  1921,  1909,
      70,    71,  2058,  2059,   274,   935,  2078,  2079,  2872,    70,
      71,  2097,   948,    76,   600,   275,  2485,   646,  1673,    77,
     955,  2671,  1558,  1658,  1425,  1426,   670,   956,  2492,  2493,
    2974,  1900,   512,  2977,   601,  2979,  1901,  1428,  1429,    98,
    1902,  1674,  1903,  1904,  2732,  2690,   970,  1907,    99,   100,
    2273,  2992,  2993,  2741,   602,    70,  1506,  2277,   603,  1675,
     971,   339,  2750,  1913,   974,  1916,    78,  1918,  1919,  1920,
    1922,  3011,   321,  1924,  1925,   975,  1927,  1928,   976,  1930,
    2494,  1932,  1933,   330,   647,   983,    70,    71,  2060,   604,
     605,   331,  2080,   332,    79,  1945,   985,  1676,  1915,  2061,
    2062,   988,  1951,  2081,  2082,   671,  1952,  1953,  1954,    70,
      71,  2153,   513,  3174,   989,   672,   990,   495,  1959,   991,
    3178,  1962,  2824,    70,    71,   836,  1660,  1661,  2840,  1972,
    1977,  1973,   992,  2845,  1975,   648,  2063,   514,   515,   322,
    2083,   993,  1677,  1800,  1801,   649,   516,   996,    80,    70,
      71,   509,   606,   492,    84,  1023,  1091,  1964,  1678,  1092,
    1093,  2098,  2099,   607,   494,   673,  2486,  2487,  1022,   517,
    1027,  1679,  2501,  2502,  1044,  1984,    70,    71,  3215,   518,
    3216,  2033,  1031,  2034,  1438,  1040,  2035,  2036,   865,  2037,
     323,  2038,    85,    81,    70,    71,  2156,  2040,  2211,  2212,
     324,  2041,  1042,  1680,   837,  1048,  1765,  2997,  2998,  1978,
    2047,  1766,  2810,    70,    71,  2215,  1050,  1681,   725,  1682,
    1683,   726,  1051,   576,  2503,   583,   586,  1064,   591,   595,
    2495,  2496,  1069,   608,   609,  1074,  1767,  1768,  1759,  1769,
    1770,   727,  1005,  1006,  2064,  1599,  1600,  2100,  1080,  1081,
    1083,  1771,  2488,  1697,  1084,  2862,  2074,  1089,  2101,  2102,
    1684,   680,  2866,  2489,  2490,  1772,  1773,   866,  1116,  1117,
    1118,    86,  1120,  1774,  1131,  1122,  1775,   728,  2135,  2136,
     696,   702,  1133,   729,  1698,  1128,   709,  1699,  1137,  1142,
     714,  2154,  2155,  2157,  1776,  2103,  1806,  1979,  1980,  1143,
    2491,  1144,  1146,  1777,  1778,  1147,  1163,  1779,  1148,  1151,
    1814,   610,  1981,  2167,  1164,  1165,  2497,  1166,  2183,  1178,
    1700,    87,    88,  1190,  1192,  2152,  1193,  2498,  2499,  1200,
    1201,  1202,  2896,  1260,  2898,   730,  2899,  1253,  1780,  2900,
    1269,  2901,  1271,  1279,  2214,  2216,  1280,   831,  1334,  1335,
     833,  1701,  2978,  1336,  1702,  2223,  1706,  1348,  1350,  1982,
    2236,   842,  1361,  1362,  2500,  2582,  1363,  2242,  2991,    89,
      90,    70,    71,  2996,  2504,  2505,   492,   493,   494,  1781,
    1364,  1365,  2248,  1366,   863,  1367,  1368,  1707,  2251,  1369,
    1708,  1370,  2253,  1709,  2256,  2257,  1371,  2259,  2261,  2262,
    1372,  2265,  1393,  1400,  2268,  2269,  2270,  1398,  2272,  2274,
    2275,  2276,  2278,  2281,  2283,  2284,  1399,  1401,  1402,  2286,
    2287,  2288,  2289,  1710,  1403,  2627,  1242,  1404,  1423,  2295,
    2296,    91,  1405,  2298,  2299,  2300,  1406,  1407,  1424,  2303,
    2304,  1427,  1243,  1430,  1782,  1940,  1941,  1436,  1437,  1441,
    1783,  1244,  2307,  2308,  1711,  2309,  2310,  1712,  1444,  1497,
    2506,  1445,  1245,    70,    71,  2158,  1660,  1661,  1784,  1451,
    1457,  2507,  2508,  1453,   731,  1456,  1460,  1462,  1548,  1785,
      70,    71,  2188,  1660,  1661,  2648,    70,    71,  2217,  1660,
    1661,  1703,  1463,  1501,  1465,  1467,  1509,  1477,  1246,  3018,
    1478,  1482,  1499,   732,   733,  1498,  1502,  1503,  2509,   997,
    1504,  1786,  1787,  1505,  1560,   535,   734,  1562,  1510,  1574,
     735,  1247,  1571,  1007,  1566,  1576,  1704,  2348,  1577,  2349,
    2350,  1580,  1015,  1581,  2351,  1788,   536,  1584,  1585,  2353,
    2356,  1586,  2358,  2359,  2360,  1594,  2361,  2362,  1595,  2364,
    1596,  2365,  2366,   537,  2368,  2369,  1597,  2371,  1601,  2373,
    2374,  1602,  1603,  1604,  1605,  1611,   538,  1612,  1664,  1614,
    1615,  1617,  2382,  1619,  2355,  1627,  1629,  1248,  1643,  1644,
    2386,  1645,  1789,  1646,  1649,  2391,  2392,  1650,   539,  1651,
    1667,  2394,   540,  1665,  1713,    70,    71,  1696,  1666,  1687,
    2397,  1686,  1705,  1717,  1716,  1055,  1056,   541,  1718,  1719,
    1720,   121,  1301,  1721,  1736,  1740,  1741,  1742,  1060,  1749,
    1302,  1748,  1249,  1063,  1750,  1751,  1758,  1757,  1303,  1714,
    1760,  1761,  1075,  1791,  1912,  1799,  1810,  2426,  1811,  1817,
    1818,  1824,  2150,  1827,  1830,  1831,  1304,  1852,  1873,  1874,
    2411,  1250,  1879,  1305,  1880,   542,  1881,  1882,  1917,  1891,
    1715,  1892,  2417,  2436,  2437,  1893,  2422,  1894,  2439,  3173,
    1895,  2168,  1896,  1923,  2441,  1910,  2185,  2186,  1911,  1306,
    1926,  -527,  1929,  1931,  1934,  1935,   736,   737,   738,  1939,
    1307,  1944,  1946,  1947,  1948,  1960,  1974,  1251,  1965,  1252,
    1976,   124,  1985,  2023,  2014,  2219,  2808,  2809,  2010,  2024,
    2812,  2813,  2451,   739,  2816,  2817,  1986,  1987,  2238,  1991,
    2457,  2458,  1138,  1139,  1140,  1141,   740,  2243,  2244,  2030,
    2467,  2468,  2045,  2002,  2003,  1308,  2046,  2051,  2039,  2249,
    2477,  2478,   741,  1309,  2070,  2073,  2199,  2104,  2106,  2108,
    2131,  2132,  2133,  2134,  2138,  2514,  2515,  2139,  2190,  2141,
    2142,  2143,  2146,  2200,  2149,  2166,  2525,  2526,   126,  2182,
    2187,  2191,  2201,  2532,  2870,   742,  2196,  2202,  2203,  2204,
    2206,  2542,  2543,  2535,  2545,   743,  2207,  2208,  2209,  2213,
    2463,  2224,  2234,  2210,   846,  2239,  1310,  2250,  2252,  2263,
    2254,  2258,  2292,  2293,  2266,  2267,  2271,   744,  2285,  1311,
    2294,  2435,  2305,  2306,  2651,  2311,   745,  2557,  2558,  2559,
    2560,  2561,  2562,  2563,  2564,  2565,  2312,  1312,  2313,  2510,
    2314,  2315,  1299,  2316,  2521,  2317,   746,  3106,  2318,  2319,
    2323,  2571,  2321,  2573,  2322,  2324,   132,  2325,  2326,  2982,
    2327,  2328,  2329,  1004,  2330,  2331,  2332,  2608,  2333,   949,
    2334,  2335,   747,  2581,   495,  2336,  2337,  3189,  2338,  2585,
    2339,  2340,  2341,  3120,  2342,  2343,  2344,  2989,  2345,  2346,
    2588,  2589,  2590,  2591,  2592,  2593,  2594,  2595,  2596,  2597,
    2347,  2367,  2600,  2601,  2602,  2603,  2604,  2605,  2606,  2607,
    2363,  2609,  2610,  2611,   748,  2613,  2614,  2370,  2617,   749,
    2618,  2619,  2620,  2372,  2375,  2376,  2377,  2379,  2381,  2393,
     969,  2399,  2400,   880,   495,  2628,   750,  2401,  2402,   751,
    3106,  2403,  2438,  2983,  2440,  2443,  2962,  2444,  2445,  2447,
    2448,  2967,  2449,  2452,  2612,  2454,  2455,  2456,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,  2643,  2460,  2644,  2461,
    2645,  2462,  2647,  3006,   495,  2649,   881,  2650,  2464,  2465,
     882,  2466,  2654,  2655,  2470,  2656,  2657,  2471,  2659,  2473,
    2661,  2474,  2475,  2476,  2480,  2481,  2857,  2482,  2511,  2512,
    2513,  2517,  2669,  2518,  2670,  2520,  2522,  2523,  2673,  2524,
    2528,  2675,  2529,  1466,  2531,  2533,  2534,  2536,  2537,   883,
     884,  1052,  2539,  2546,   885,  2548,  2552,  1472,  1057,  2555,
    2566,  1058,  2567, -1241,  2568,  2569,  1059,  2570,  2832,  2574,
    1061,  2616,  2621,  2622,  2984,  2625,  2626,  2629,  2632,  2677,
    2652,  2653,  2658,  2660,  2662,  2663,  2664,  2666,  2715,  2667,
    2985,  2674,  2678,  2679,  2680,   886,  2681,  1483,  2682,  2711,
    3103,  2714,  2716,  2719,  2722,  2723,  2725,  3160,  2727,  2728,
    2729,  2733,  2734,  2742,  2718,  2735,  2736,  2737,  2738,  2743,
    2751,  2713,  2744,  2745,  2720,  2721,  2746,  2747,  2752,  3156,
    2753,  2760,  2763,  2771,  2780,  2724,  2774,  2777,  2778,  2779,
    2782,  2787,  2791,  2807,  2726,  2848,  2852,  2868,  2730,  2731,
    2874,  2875,  2876,  2877,   887,  1136,  2880,  2739,  2740,   888,
    2882,  2883,  2884,     0,  2887,  2889,  2748,  2749,  2890,  2891,
    2905,  2550,  2754,  2892,  2894,  2903,  2910,  2917,  2926,  2935,
    2941,  2945,  2764,  2765,  2951,  2959,   889,  2972,  1579,  2986,
     890,  2987,  2785,  2775,  3008,  2776,  2988,  2990,  3019,  3159,
    3020,  3022,  3023,   891,  2792,  2793,  2794,  2795,  2796,  2797,
    2798,  2799,  2800,  2801,  2802,  3024,  3164,  3166,  3025,  3026,
    2805,  3027,  2576,  3028,  3029,   495,   495,  3030,  3032,   495,
     495,  3038,  3044,   495,   495,  2818,  2819,  2820,  2821,  2822,
    2823,  3068,  2825,  2826,  2827,  3071,  3077,  3082,  2841,  2842,
    2843,  2844,  3081,  2846,  2847,  3083,  2849,  2850,  2851,  3084,
    2853,  2854,  3085,  2856,  3086,  3088,  2860,  2861,  3093,  1377,
    3094,  3110,     0,  3111,  1734,     0,  3112,  3113,  3114,  3115,
    3122,  3125,  3136,  3144,     0,  3147,  3148,  3151,  3169,   240,
    2869,  3161,  3162,   495,  2871,  3172,     0,  3176,  2873,  3183,
    3184,  3190,  3198,  2878,  2879,  3202,  2881,  3203,  3205,  3209,
    3211,     0,  3212,   241,  3213,  3214,   242,  1343,     0,     0,
       0,     0,     0,     0,  1349,     0,     0,     0,     0,     0,
    1798,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1804,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   243,     0,     0,     0,     0,     0,
       0,   244,  2906,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   245,   246,     0,   788,   789,     0,     0,   247,
       0,  2908,     0,     0,  2909,     0,     0,  2911,     0,     0,
       0,   790,     0,     0,     0,     0,     0,  2920,     0,     0,
       0,     0,     0,     0,     0,     0,  2929,     0,   248,     0,
       0,     0,     0,     0,     0,  2938,     0,     0,     0,     0,
       0,     0,  2940,     0,     0,     0,     0,   249,     0,     0,
       0,     0,     0,  2944,  2953,   791,     0,     0,  2955,  2947,
       0,     0,   792,     0,     0,   250,   251,     0,  2956,  2957,
       0,   793,   252,   794,  2961,   495,     0,     0,   795,  2966,
     495,   796,  1906,     0,     0,  2971,     0,   797,  2975,  2976,
       0,   798,  1464,     0,     0,     0,     0,   253,   799,     0,
    1914,     0,  1468,     0,     0,     0,   800,     0,     0,     0,
    2994,  2995,     0,     0,  2999,   801,  3001,  3002,  3003,     0,
    3005,     0,   495,  3007,     0,     0,     0,  3010,     0,  1942,
       0,     0,     0,     0,   802,     0,     0,  1950,     0,     0,
    3021,     0,     0,     0,   254,     0,     0,     0,  1956,     0,
    1485,  1486,  3031,     0,     0,  1490,     0,   803,  1493,     0,
       0,     0,     0,     0,     0,  1971,     0,     0,     0,     0,
    1500,  1970,     0,  3046,     0,   804,     0,  1983,     0,     0,
       0,     0,  1990,     0,     0,     0,   121,     0,   805,   806,
       0,     0,  3047,     0,     0,     0,     0,     0,     0,  3048,
     255,     0,     0,     0,     0,     0,     0,     0,  3050,     0,
       0,     0,     0,   807,   256,  3058,     0,  3052,     0,     0,
    3062,     0,  3064,  3055,     0,     0,     0,  3057,  3067,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   808,  3075,     0,     0,   257,  2863,     0,     0,
       0,     0,     0,     0,     0,     0,   809,     0,   810,     0,
       0,     0,  3092,     0,     0,     0,     0,     0,     0,  3098,
       0,     0,  1590,  3131,   811,     0,   124,     0,     0,   812,
       0,     0,     0,     0,     0,     0,     0,   813,     0,     0,
       0,     0,     0,     0,     0,   814,     0,     0,  3119,  1652,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1647,     0,     0,     0,     0,     0,     0,   815,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2151,     0,  3134,
       0,     0,   816,   817,  3139,   818,     0,  3141,     0,     0,
       0,     0,     0,   126,  3145,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  3149,  2184,     0,     0,     0,
    3152,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   819,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  3163,  3165,  2221,     0,
       0,  2222,     0,     0,     0,     0,  2235,     0,     0,     0,
       0,     0,  2240,  2241,     0,     0,     0,     0,     0,     0,
       0,  2246,  3175,     0,     0,     0,  3177,     0,  2247,  3179,
       0,   132,     0,     0,     0,     0,     0,     0,     0,     0,
    3185,  3186,  3187,  3188,     0,     0,     0,     0,  3171,     0,
       0,     0,  3197,     0,     0,     0,  3200,     0,     0,     0,
       0,     0,     0,  3204,     0,  3206,     0,     0,     0,     0,
       0,  2290,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  3192,     0,  2301,  3195,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  3012,     0,     0,     0,  3017,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1908,     0,     0,
       0,     0,     0,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,     0,     0,     0,     0,   120,     0,     0,     0,     0,
       0,  1943,     0,     0,     0,     0,     0,  1949,     0,     0,
     121,     0,     0,     0,     0,     0,  2354,     0,  1955,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   122,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2378,     0,     0,     0,     0,     0,     0,
       0,   123,     0,  3087,     0,     0,     0,     0,     0,     0,
       0,  2390,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2395,     0,  2396,     0,     0,     0,
       0,  3109,     0,     0,     0,     0,  2405,     0,     0,  2407,
    2408,  2409,  2410,  2412,     0,  2414,     0,     0,     0,  2415,
     124,     0,     0,     0,  2416,  2418,  2419,  2420,  2421,  2423,
       0,     0,  2424,  2425,     0,     0,     0,     0,  2427,  2428,
    2429,  2430,   125,     0,  2431,  2432,     0,     0,     0,     0,
       0,  2433,  2434,     0,     0,     0,     0,     0,  2048,  2049,
    2050,     0,     0,     0,     0,     0,     0,     0,  2052,  2053,
    2054,     0,     0,  2672,     0,     0,     0,  2065,  2066,  2067,
       0,     0,  2068,  2069,     0,  2071,  2072,   126,     0,     0,
    2685,  2686,  2687,     0,     0,  2689,     0,  2691,  2692,     0,
       0,  2694,  2695,  2696,     0,     0,  2698,  2699,     0,     0,
       0,  2703,     0,  2705,  2706,     0,  2708,     0,     0,  2144,
    2145,     0,     0,  2147,  2148,     0,     0,     0,     0,     0,
     127,     0,     0,     0,  2828,     0,     0,     0,     0,     0,
     128,     0,  3182,     0,     0,     0,  2829,     0,     0,   129,
     130,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     131,     0,     0,     0,     0,   132,     0,     0,     0,     0,
       0,     0,     0,     0,  1301,  2830,     0,  2541,     0,     0,
    2544,     0,  1302,     0,     0,     0,     0,     0,     0,  2237,
    1303,  2549,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2553,  1304,     0,
       0,     0,     0,     0,     0,  1305,     0,     0,  2831,     0,
       0,     0,     0,     0,  2781,     0,     0,  2784,     0,     0,
       0,     0,  2788,     0,     0,     0,  2789,     0,     0,  2572,
       0,  1306,     0,     0,     0,     0,     0,     0,     0,     0,
     133,     0,  1307,  2291,     0,  2804,     0,     0,     0,  2297,
       0,     0,     0,     0,     0,     0,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,     0,     0,  1308,     0,     0,
     163,     0,     0,  2615,     0,  1309,     0,   164,   165,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2631,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2886,     0,     0,     0,     0,    70,    71,  1310,     0,
       0,     0,     0,     0,  2352,     0,     0,     0,     0,  2357,
       0,  1311,   121,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2897,     0,     0,     0,     0,  1312,
       0,     0,     0,     0,   334,     0,     0,  2380,     0,     0,
       0,  2832,     0,  2833,     0,  2383,  2668,     0,    70,    71,
       0,  2389,     0,   123,     0,     0,     0,     0,     0,     0,
       0,  2676,     0,     0,   121,     0,     0,     0,  2683,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2406,     0,
       0,     0,     0,     0,     0,  2413,     0,     0,     0,     0,
    2701,     0,     0,     0,     0,     0,     0,     0,     0,  2710,
    2834,     0,   124,  2712,     0,   123,  2950,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2958,     0,     0,     0,
       0,     0,     0,     0,  2965,     0,     0,  2968,  2969,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   124,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2442,     0,     0,     0,   126,
       0,     0,     0,     0,     0,     0,     0,     0,  2450,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2453,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2783,     0,     0,
    2786,     0,   335,     0,     0,   594,     0,     0,     0,  2790,
       0,   126,     0,     0,     0,     0,     0,     0,     0,     0,
     121,     0,     0,     0,     0,  2803,     0,     0,  2806,     0,
       0,     0,   131,     0,     0,  2811,  2540,   132,  2814,  2815,
       0,     0,     0,     0,     0,     0,     0,     0,   336,     0,
    2538,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   123,  3059,     0,     0,     0,     0,     0,     0,  2554,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2864,
    2865,     0,     0,  3070,   131,     0,     0,     0,     0,   132,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2578,  2579,     0,     0,
     124,     0,     0,     0,     0,     0,     0,     0,     0,   337,
    2580,     0,     0,     0,     0,  2583,  2584,     0,     0,     0,
       0,  2586,  2587,     0,     0,  2893,     0,     0,     0,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,     0,     0,     0,
       0,     0,     0,  3132,  3133,  2623,  3135,   126,  3137,  3138,
       0,     0,  3140,     0,     0,     0,  2630,     0,     0,     0,
       0,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2949,     0,     0,  2646,
       0,     0,     0,     0,  3168,     0,     0,     0,     0,     0,
     131,     0,     0,     0,     0,   132,     0,     0,     0,     0,
       0,     0,     0,  2665,     0,     0,     0,     0,     0,     0,
    2970,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2981,     0,     0,     0,     0,     0,     0,     0,     0,
    2684,     0,     0,  3201,     0,  2688,     0,     0,     0,     0,
       0,  2693,     0,     0,     0,     0,  2697,     0,     0,     0,
    2700,     0,  2702,     0,  2704,     0,     0,  2707,     0,  2709,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  3037,     0,     0,     0,  3043,     0,
       0,     0,     0,     0,     0,  2717,   121,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   123,     0,     0,
       0,     0,     0,     0,     0,  3060,  3061,     0,  3063,     0,
       0,     0,     0,  3065,  3066,  2755,  2756,  2757,  2758,  2759,
    3069,  2761,  2762,   697,     0,   121,  2766,  2767,  2768,  2769,
    2770,     0,  2772,  2773,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   124,     0,     0,     0,
       0,     0,     0,   121,     0,     0,     0,  3099,     0,     0,
       0,     0,     0,     0,     0,     0,   564,     0,   698,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  3123,     0,     0,     0,     0,     0,     0,     0,
    2855,     0,     0,     0,   565,   566,     0,     0,     0,     0,
     567,     0,     0,   126,     0,   124,  2867,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   699,     0,   568,   569,     0,     0,     0,     0,     0,
       0,     0,     0,   124,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2888,     0,     0,     0,     0,     0,     0,  2895,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   126,     0,     0,     0,   131,     0,     0,     0,
    3170,   132,     0,     0,     0,  2902,     0,  2904,     0,     0,
       0,     0,   700,     0,     0,     0,     0,     0,     0,  3180,
     126,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2907,  3191,     0,   570,  3194,     0,     0,     0,
       0,  2912,  2913,  2914,  2915,  2916,     0,  2918,  2919,     0,
    2921,  2922,  2923,  2924,  2925,   571,  2927,  2928,     0,  2930,
    2931,  2932,  2933,  2934,     0,  2936,  2937,     0,  2939,     0,
     132,     0,     0,     0,     0,  2948,     0,     0,  2942,  2943,
     572,  2952,     0,     0,     0,  2954,     0,     0,     0,  2946,
       0,     0,     0,     0,     0,     0,     0,     0,   132,     0,
       0,  2960,     0,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   701,     0,     0,     0,
       0,     0,     0,     0,   573,     0,     0,     0,     0,  3015,
    3016,     0,     0,     0,     0,   574,     0,     0,     0,     0,
       0,     0,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,     0,   575,
    1205,  1206,  1207,     0,  3049,  1512,  1513,  1514,     0,     0,
       0,     0,     0,  3051,     0,     0,     0,     0,     0,     0,
       0,     0,  3053,     0,  3054,     0,     0,     0,  3056,     0,
       0,     0,  1208,  1209,     0,   121,  1210,  1515,  1516,  1211,
       0,  1517,     0,     0,     0,     0,  3079,  1212,  1518,     0,
       0,  1213,  1519,     0,     0,     0,  1520,     0,     0,     0,
       0,  1214,  1215,     0,     0,     0,  1521,  1522,     0,  1216,
    1217,     0,     0,     0,  1523,     0,   123,     0,     0,     0,
    1218,     0,     0,     0,     0,  1524,     0,  1219,     0,     0,
       0,   121,     0,     0,     0,  1220,     0,     0,     0,  1221,
    1222,     0,     0,  1223,  1525,  1526,     0,     0,  1527,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     121,     0,     0,  1224,     0,   124,     0,     0,  1528,     0,
       0,     0,  3126,     0,  3127,   581,  3128,     0,     0,  3129,
       0,  3130,     0,     0,     0,     0,  1225,     0,     0,     0,
       0,  1529,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1578,     0,     0,  3155,     0,     0,     0,     0,     0,
       0,   121,     0,     0,     0,  1226,     0,     0,     0,     0,
    1530,   124,     0,     0,     0,     0,     0,     0,  3167,     0,
    1531,     0,   126,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1227,     0,     0,     0,     0,     0,     0,     0,
     124,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  3193,     0,     0,  1228,     0,
    1229,     0,     0,  1532,     0,  1533,  1230,  1231,   126,     0,
     121,  1534,  1535,  2404,     0,     0,  3207,     0,     0,  3208,
       0,   124,     0,  1232,  1233,   131,     0,     0,     0,  1536,
     132,     0,     0,     0,     0,  1234,  1235,   126,     0,     0,
       0,  1537,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1236,     0,  1237,     0,
       0,  1538,     0,  1539,     0,     0,     0,     0,     0,     0,
       0,     0,  1238,     0,  1239,  1540,   132,     0,   126,     0,
       0,  1240,     0,     0,     0,   585,  1541,     0,     0,     0,
     124,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   132,  1183,     0,     0,     0,
       0,  1184,     0,     0,     0,  1241,     0,     0,     0,     0,
    1542,     0,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
       0,     0,   582,     0,     0,     0,   132,   126,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,     0,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   132,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   135,   136,   137,
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
       0,     0,     0,     0,    18,     0,     0,     0,     0,    19,
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
     204,    50,    51,     0,     0,     0,   205,     0,   206,     0,
       0,     0,     0,     0,     0,    52,     0,    53,     0,     0,
       0,     0,     0,     0,    54,     0,     0,    55,    56,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   207,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    57,     0,
       0,     0,   208,     0,     0,     0,    58,     0,     0,     0,
       0,   209,     0,   210,   211,     0,   212,   213,     0,     0,
     214,     0,     0,     0,   215,     0,   216,  1623,     0,     0,
       0,     0,   217,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   218,   219,     0,     0,     0,   220,     0,     0,
       0,     0,     0,     0,     0,   221,     0,     0,     0,   222,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   223,     0,   224,     0,     0,     0,     0,     0,     0,
     225,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   226,     0,   227,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   228,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   229,   230,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   231,     0,     0,     0,     0,
       0,     0,     0,   232,     0,     0,     0,     0,     0,   233,
       0,   234,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
    1624,     0,     0,     0,     0,     0,     0,     0,     0,   235,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162
};

static const yytype_int16 yycheck[] =
{
       3,    56,   555,   810,  1709,  1069,    16,   509,    11,   805,
     806,     5,  1952,    16,  1954,  1364,   318,   519,     5,  1368,
       4,  1723,    26,     4,     4,     3,     4,     5,    33,     5,
       0,    33,     3,     4,    37,    49,     5,    20,    28,     5,
       4,    33,     4,    46,  1746,     4,     4,   148,     5,  1398,
    1399,  1400,    55,     3,     4,    58,    18,    63,    61,  1057,
    1058,  1059,    65,     5,    13,    68,     3,     4,    42,    37,
      73,    74,     4,     4,    77,     3,     4,    80,    81,    42,
      28,    84,    15,   166,    87,    88,   245,    46,    91,   115,
      49,     4,     5,    96,     3,     4,    18,     5,   101,  1173,
      27,     4,  1176,   115,  1206,    35,     4,     3,     4,    37,
     113,   114,   115,   116,   117,   118,    65,     4,   122,     3,
       4,     3,     4,  1197,    83,    52,    46,    16,    55,    16,
     105,   134,    91,    42,   138,   184,     3,     4,  1136,   130,
      67,   107,     3,     4,    12,    21,   218,   121,   101,   115,
      21,  3105,    21,    37,    63,    71,     5,   176,    71,   127,
      16,     3,     4,   153,     4,    92,   169,    15,   121,   131,
     326,   128,   131,   112,    94,     5,   170,    54,   258,   218,
      16,   282,    95,   110,    65,     4,     5,   117,   146,   208,
     349,    34,   195,     3,     4,   264,   222,   200,   278,   158,
       4,   185,    94,  3157,   209,   153,     5,   209,     3,     4,
     222,     4,   121,   296,   171,   172,     4,     5,   131,   147,
     161,   293,     3,     4,     3,     4,   324,   154,     4,    69,
     107,   235,   200,   224,   202,    27,   204,   205,   179,     4,
     138,   118,   155,   224,    65,   219,   285,   215,    16,   253,
     106,   232,   233,   224,   303,   218,    65,   283,   217,   212,
     217,    21,   170,   147,   232,    69,   215,   229,   136,   231,
     229,   283,   275,   212,   151,    71,   238,   239,    71,   238,
     239,    95,   219,     4,   176,   268,   289,   218,    21,   344,
     223,   250,   273,   252,    21,   289,   310,   217,    65,     5,
     230,  1108,   308,   306,   307,    21,    71,    13,    14,   231,
     219,   132,   131,     4,     0,   218,   229,   322,   260,   322,
     322,   324,   281,   298,   281,   238,   239,   259,   302,   121,
     322,   334,   335,    65,   337,   338,   234,   340,   131,   308,
     236,    65,   178,   131,   846,   212,   214,   350,   328,    16,
     340,   308,   301,    48,   348,     4,   326,    65,   320,    65,
     363,   364,   349,   312,   328,   336,   131,    14,    15,   337,
     212,   349,   356,   349,   277,    22,    71,   339,   336,   345,
     339,   289,   285,    30,   387,   395,   336,   390,   391,   393,
     393,    38,   340,    88,   397,   398,   272,   356,   320,   336,
     349,   272,    27,   272,   336,   408,   409,   296,   336,   390,
     229,    42,   415,    60,   224,     4,   149,   420,   421,   238,
     239,   330,    71,   725,  1231,   428,   339,   389,     4,   432,
     389,    78,   345,   212,   396,   397,   229,   396,   397,   218,
     131,   229,  1249,   324,     4,   238,   239,   296,   451,   452,
     238,   239,   336,   283,   336,   458,   459,   460,   461,   462,
     463,   338,   465,   258,   229,   468,   258,   470,   135,   350,
      94,   398,   240,   238,   239,   336,   389,   258,   327,  2181,
     347,   394,   131,   396,   397,   307,   265,  1485,   491,  1285,
     121,   312,   495,   188,     5,  1493,   121,   500,   501,   502,
     503,   504,   505,  1852,   507,   347,   509,   510,   511,   215,
     216,    71,   272,  1015,   293,   324,   519,   520,  2220,     4,
     339,  1317,   189,    58,   391,   392,   345,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   356,   229,   272,
     508,   350,   131,    94,    60,   272,   339,   238,   239,   391,
     392,   339,   176,    68,   264,   131,   272,   324,    27,  1061,
       5,   186,    97,    48,  1638,  1667,    51,  1641,   347,   337,
     389,   131,   305,   240,   339,   578,   579,   396,   397,    65,
     229,   144,    94,   350,     3,     4,    71,     4,   219,   238,
     239,     5,   324,   596,  1696,   301,   389,    27,    32,   114,
     324,   389,    16,   396,   397,    90,   312,   313,   396,   397,
      65,   317,   391,   392,     4,     5,   324,  1719,   350,     3,
       4,   156,   107,   678,   389,   176,   350,   190,   113,   632,
      20,   396,   397,    65,   602,     3,     4,   328,     4,   334,
     229,    65,   350,   349,   291,    65,   132,   272,   339,   238,
     239,   153,   121,   229,     5,   350,    90,   304,   305,     4,
     171,   172,   238,   239,   176,   154,   100,    31,    11,   229,
     337,   302,   675,   107,    64,     4,   390,   132,   238,   239,
     165,    71,    27,   190,     5,     5,    85,     5,   656,   336,
     339,   121,    13,    14,    39,   258,    94,   199,   389,   324,
     132,    85,    31,   188,     4,   396,   397,    52,   132,   153,
     100,    61,   132,   768,    57,   132,    68,   186,     3,     4,
     723,    66,    67,    42,  2664,     0,    65,    68,  1535,     4,
     733,   320,   787,   249,   124,    78,   383,   384,   385,  1546,
     389,   388,    65,     4,    65,     4,   281,   396,   397,    69,
     339,   258,   176,   143,   269,   199,     3,     4,     3,     4,
      60,   324,   114,   339,   198,   108,     3,     4,     4,   159,
     281,   286,   287,   114,    32,    71,   166,   166,   176,   339,
       5,   296,   785,   430,   174,    94,   138,   130,     5,    31,
       5,   134,    37,   132,   219,   145,   195,    42,    13,    14,
     389,   804,   121,   272,   807,    42,   149,   396,   397,   132,
     299,   195,     4,   389,     5,     4,   180,   251,   307,   304,
     396,   397,    13,    14,    65,   332,   312,   830,   258,   389,
      13,    14,   835,   836,   837,   838,   396,   397,   841,   258,
     843,  1343,   845,   846,   847,    15,   236,   143,   333,   334,
      65,   180,   137,    23,   288,   324,    65,   312,     3,     4,
     102,   346,   251,   128,    27,   350,     5,   176,   236,    71,
     260,    60,   387,   388,    65,   265,   121,   267,   174,   326,
     312,   245,    65,   938,   121,   230,   285,   321,   312,    65,
     137,   132,   312,    65,   215,   216,   241,   242,   243,   244,
     219,   285,   147,   191,   191,   295,   296,   296,   272,   259,
     171,   172,  1976,   200,   304,    60,   245,   269,    65,   922,
     154,   924,    26,   132,   274,    34,   929,   930,   269,   932,
     933,   934,   935,   936,   286,   287,   326,     3,     4,    71,
     182,     5,     5,   272,    29,   286,   287,   950,   951,   249,
      13,    14,   341,    96,   957,   958,   132,  1955,   121,   220,
     132,    15,  2311,  2312,  2313,  2314,  2315,  2316,  2317,  2318,
    2319,   267,  2826,   312,   219,   978,   979,   980,   981,   982,
     301,   984,   219,   986,   987,   132,  2060,    65,  1490,   312,
     335,   312,   313,   336,  2848,   385,   317,   347,  2852,   324,
     215,   216,    65,    69,  2858,    38,  2080,  1010,  1011,  1012,
      71,  1014,  1015,  1016,  1810,  1018,  2090,    50,   122,  2093,
     281,  2905,     3,     4,   215,   216,  2100,   190,   349,     5,
     326,  1181,   215,   216,   138,   387,   388,  1040,  1188,  1042,
      77,  2115,   265,   285,  2118,    90,   387,   388,    81,   291,
      65,  1054,  2126,     5,   132,  2129,     4,  2159,  1061,  1062,
     249,   325,   107,    11,  1067,   299,    96,   144,    65,    27,
     717,   312,  1040,   307,   178,    71,    65,    79,    44,    45,
      32,  1084,   167,  1182,    60,  1088,   301,  2189,   735,    32,
    1189,   336,    65,     5,    70,   258,     4,   312,   313,  1102,
    1103,  1104,   317,   312,   249,   275,    42,  1110,   278,    65,
     301,   196,  1115,     3,     4,   200,  2218,   132,   301,  2973,
    2974,   312,   313,  2977,    95,  2979,   317,  1130,  1183,   312,
     313,   235,    29,   166,   349,   132,   312,     4,  2992,  2993,
     312,     3,     4,   132,  2998,  2999,  1149,  3001,  3032,   253,
       4,  3005,   215,   216,   191,   126,  3010,  3011,   349,   132,
    3044,     5,   809,   121,    89,   312,   349,   814,     3,     4,
      13,    14,   153,    63,    13,    14,   132,   262,   211,    24,
      25,   258,     4,     5,  1172,   121,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,   379,
     380,   381,   382,   383,     4,   171,   172,  3071,   199,     4,
    3074,   306,    65,    38,  1227,  3079,    65,   193,   194,    48,
     315,   316,   190,     5,   312,    50,     4,  3091,   301,   210,
    3094,    95,   279,   168,  3098,  1248,  2348,   324,     5,   312,
     313,   223,    71,   290,   317,  1258,   227,   290,     5,   225,
     105,     4,   347,     3,     4,     4,    81,   300,     5,    88,
     167,    11,  1275,   249,  1277,   137,   923,  2982,   132,  1282,
    1283,  1284,     5,   219,    48,     5,   349,    42,     5,  1292,
     323,     4,  1295,  2291,  1297,   230,     4,   312,   331,   196,
     258,     4,     5,   200,     4,    69,   278,    71,     3,     4,
       4,  1314,     5,  1316,  2975,   312,    71,   350,     3,     4,
    3174,  1324,  1325,   312,  3178,   281,   297,     3,     4,    13,
      14,   256,   257,  2994,    13,    14,  1339,  1340,   105,   312,
    1343,  1344,  1345,    47,  3198,   132,   271,   994,  1351,   321,
    1353,   166,   107,  1356,     5,  1358,   312,     4,  3212,    63,
     115,  3215,  3216,     3,     4,   262,   121,     4,    63,  1424,
       3,     4,   215,   216,   345,     4,   215,   216,    63,     3,
       4,    65,     4,   212,    88,   356,    65,   206,   143,   218,
       4,  2389,    16,   318,     4,     5,   211,     5,    13,    14,
    2820,  1404,    36,  2823,   108,  2825,  1409,     4,     5,   306,
    1413,   166,  1415,  1416,  2488,  2413,     4,  1420,   315,   316,
      60,  2841,  2842,  2497,   128,     3,     4,    60,   132,   184,
     224,    37,  2506,  1436,     4,  1438,   265,  1440,  1441,  1442,
    1443,  2861,   206,  1446,  1447,     4,  1449,  1450,     4,  1452,
      65,  1454,  1455,   388,   273,     4,     3,     4,   301,   163,
     164,   396,   301,   398,   293,  1468,     4,   222,  1436,   312,
     313,     4,  1475,   312,   313,   290,  1479,  1480,  1481,     3,
       4,     5,   116,  3144,     4,   300,     4,  1490,  1491,     4,
    3151,  1494,  2594,     3,     4,    42,     6,     7,  2600,  1502,
      89,  1504,     4,  2605,  1507,   324,   349,   141,   142,   273,
     349,     4,   267,     4,     5,   334,   150,     5,   347,     3,
       4,   127,   226,     8,     4,   307,   636,  1495,   283,   639,
     640,   215,   216,   237,    10,   350,   215,   216,     5,   173,
     390,   296,    13,    14,   321,  1513,     3,     4,  3209,   183,
    3211,  1554,   191,  1556,    11,     4,  1559,  1560,    42,  1562,
     324,  1564,    42,   392,     3,     4,     5,  1570,     4,     5,
     334,  1574,     4,   328,   121,   200,    22,     4,     5,   168,
    1583,    27,  2580,     3,     4,     5,   191,   342,    48,   344,
     345,    51,     4,   199,    65,   201,   202,     4,   204,   205,
     215,   216,   223,   307,   308,   223,    52,    53,  1255,    55,
      56,    71,   497,   498,  1602,  1164,  1165,   301,     5,     5,
       4,    67,   301,    22,   223,  2623,  1614,     4,   312,   313,
     385,   237,  2630,   312,   313,    81,    82,   121,   213,   213,
      71,   121,    71,    89,     5,    71,    92,   107,  1636,  1637,
     256,   257,   259,   113,    53,   258,   262,    56,     5,     4,
     266,  1664,  1665,  1666,   110,   349,  1313,   256,   257,     4,
     349,     4,     4,   119,   120,     4,    94,   123,   223,     5,
    1327,   385,   271,  1686,    94,    94,   301,     5,  1691,    94,
      89,   171,   172,     5,     4,  1663,     4,   312,   313,     5,
       5,     4,  2700,     5,  2702,   165,  2704,   318,   154,  2707,
     107,  2709,     4,     4,  1717,  1718,     5,   323,    16,    16,
     326,   120,  2824,     4,   123,  1728,    22,     4,     4,   318,
    1733,   337,     4,   105,   349,  2237,     5,  1740,  2840,   219,
     220,     3,     4,  2845,   215,   216,     8,     9,    10,   195,
       5,    94,  1755,    94,   360,    94,     4,    53,  1761,     5,
      56,     5,  1765,    59,  1767,  1768,    94,  1770,  1771,  1772,
       5,  1774,     4,     4,  1777,  1778,  1779,     5,  1781,  1782,
    1783,  1784,  1785,  1786,  1787,  1788,     5,     5,     5,  1792,
    1793,  1794,  1795,    89,     4,  2297,    71,     4,    69,  1802,
    1803,   281,     5,  1806,  1807,  1808,     5,     5,     4,  1812,
    1813,     4,    87,     4,   260,  1462,  1463,    11,     5,    11,
     266,    96,  1825,  1826,   120,  1828,  1829,   123,     4,   185,
     301,     4,   107,     3,     4,     5,     6,     7,   284,     4,
       4,   312,   313,     5,   304,     5,     4,     4,   318,   295,
       3,     4,     5,     6,     7,  2357,     3,     4,     5,     6,
       7,   260,     4,   176,     5,     4,    40,     5,   143,  2867,
       5,     4,     4,   333,   334,     5,   176,     4,   349,   485,
       5,   327,   328,     4,   295,    57,   346,   295,    40,     5,
     350,   166,   320,   499,   328,     4,   295,  1900,     4,  1902,
    1903,     4,   508,     5,  1907,   351,    78,     5,     5,  1912,
    1913,     5,  1915,  1916,  1917,     4,  1919,  1920,     4,  1922,
       5,  1924,  1925,    95,  1927,  1928,     5,  1930,   309,  1932,
    1933,   309,     5,     5,     5,     4,   108,     4,   272,     5,
       5,     5,  1945,     5,  1912,     5,     5,   222,     4,     4,
    1953,     5,   398,     5,     4,  1958,  1959,     5,   130,     5,
     115,  1964,   134,   272,   260,     3,     4,   115,   272,     5,
    1973,   272,     4,   272,    42,   581,   582,   149,   272,   115,
       5,    19,    99,   240,    42,   278,   240,     5,   594,     5,
     107,     4,   267,   599,     5,   240,    59,   240,   115,   295,
       4,     4,   608,     4,    11,     5,     5,  2010,     5,     5,
       5,     4,  1659,   121,   121,     4,   133,     5,     5,     5,
    1988,   296,     4,   140,     5,   197,     5,     4,    11,     5,
     326,     5,  2000,  2036,  2037,     4,  2004,     5,  2041,  3141,
       5,  1688,     4,     4,  2047,     5,  1693,  1694,     5,   166,
       4,     0,     5,     5,     5,     5,    71,    72,    73,     5,
     177,     4,     4,     4,     4,     4,     4,   342,     5,   344,
       5,   109,   272,     4,   258,  1722,  2578,  2579,   190,   283,
    2582,  2583,  2070,    98,  2586,  2587,   272,   272,  1735,   272,
    2078,  2079,   698,   699,   700,   701,   111,  1744,  1745,   236,
    2088,  2089,     4,   272,   272,   222,     4,     4,   223,  1756,
    2098,  2099,   127,   230,     4,     4,   353,     5,     5,     5,
     309,     5,     5,     5,     4,  2113,  2114,     4,   272,     5,
       4,     4,     4,   353,     5,     5,  2124,  2125,   176,     5,
       5,   272,     4,  2131,  2646,   160,   272,     4,     4,     4,
       4,  2154,  2155,  2141,  2157,   170,     4,     4,   353,     4,
     309,     5,     4,   353,   339,     5,   283,     5,     5,     4,
     258,   258,     5,     4,   258,   258,   258,   192,   258,   296,
       4,   101,     5,     4,    11,     5,   201,  2190,  2191,  2192,
    2193,  2194,  2195,  2196,  2197,  2198,     5,   314,     4,   309,
       5,     5,   808,     4,   309,     5,   221,  3014,     5,     4,
       4,  2214,     5,  2216,     5,     5,   254,     5,     4,   399,
       5,     5,     4,   496,     5,     5,     4,   349,     5,   404,
       5,     4,   247,  2236,  2237,     4,     4,  3167,     5,  2242,
       5,     4,     4,  3031,     5,     5,     4,  2835,     5,     5,
    2253,  2254,  2255,  2256,  2257,  2258,  2259,  2260,  2261,  2262,
       4,     4,  2265,  2266,  2267,  2268,  2269,  2270,  2271,  2272,
       5,  2274,  2275,  2276,   289,  2278,  2279,     5,  2281,   294,
    2283,  2284,  2285,     5,     4,     4,     4,     4,     4,     4,
     436,     5,     5,    65,  2297,  2298,   311,     5,     5,   314,
    3107,     5,     4,   399,     5,     5,  2808,     5,     5,     4,
       4,  2813,     5,     4,   349,     5,     5,     5,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   381,   382,   383,  2349,     4,  2351,     4,
    2353,     5,  2355,  2855,  2357,  2358,   128,  2360,     5,     5,
     132,     5,  2365,  2366,     4,  2368,  2369,     4,  2371,     5,
    2373,     5,     5,     5,     4,     4,   349,     5,     5,     5,
       5,     4,  2385,     4,  2387,     5,     5,     5,  2391,     5,
       4,  2394,     4,   999,     5,     4,     4,     4,     4,   171,
     172,   576,     5,     5,   176,     5,     5,  1013,   583,     5,
       4,   586,     4,   326,     5,     4,   591,     4,   326,     5,
     595,     5,     4,     4,   399,     5,     5,     4,     4,  2397,
       5,     5,     5,     4,     4,     4,     4,     4,  2441,     4,
     399,     5,     5,     5,     5,   217,     5,  1053,     5,     4,
    3012,     5,     4,     4,     4,     4,     4,  3107,     5,     5,
       5,     4,     4,     4,  2452,     5,     5,     5,     5,     4,
       4,  2439,     5,     5,  2462,  2463,     5,     5,     4,  3103,
       5,     4,     4,     4,  2539,  2473,     4,     4,     4,     4,
       4,     4,     4,     4,  2482,     5,     5,     4,  2486,  2487,
       5,     5,     4,     4,   276,   680,     4,  2495,  2496,   281,
       4,     4,     4,    -1,     5,     4,  2504,  2505,     5,     4,
       4,  2168,  2510,     5,     5,     5,     4,     4,     4,     4,
       4,     4,  2520,  2521,     4,     4,   308,     4,  1144,   399,
     312,   399,  2545,  2531,     5,  2533,   399,   399,     4,   399,
       5,     5,     4,   325,  2557,  2558,  2559,  2560,  2561,  2562,
    2563,  2564,  2565,  2566,  2567,     4,  3119,  3120,     4,     4,
    2573,     4,  2219,     4,     4,  2578,  2579,     4,     4,  2582,
    2583,     5,     4,  2586,  2587,  2588,  2589,  2590,  2591,  2592,
    2593,     5,  2595,  2596,  2597,     4,     4,     4,  2601,  2602,
    2603,  2604,     5,  2606,  2607,     5,  2609,  2610,  2611,     5,
    2613,  2614,     5,  2616,     4,     4,  2619,  2620,     4,   885,
       5,     4,    -1,     5,  1230,    -1,     5,     4,     4,     4,
       4,     4,     4,     4,    -1,     5,     4,     4,     4,    19,
    2643,     5,     5,  2646,  2647,     4,    -1,     5,  2651,     5,
       5,     5,     4,  2656,  2657,     5,  2659,     5,     5,     4,
       4,    -1,     5,    43,     5,     5,    46,   842,    -1,    -1,
      -1,    -1,    -1,    -1,   849,    -1,    -1,    -1,    -1,    -1,
    1286,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1296,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    -1,    -1,    -1,    -1,    -1,
      -1,    91,  2715,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   102,   103,    -1,     4,     5,    -1,    -1,   109,
      -1,  2719,    -1,    -1,  2722,    -1,    -1,  2725,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    -1,    -1,  2735,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2744,    -1,   138,    -1,
      -1,    -1,    -1,    -1,    -1,  2753,    -1,    -1,    -1,    -1,
      -1,    -1,  2760,    -1,    -1,    -1,    -1,   157,    -1,    -1,
      -1,    -1,    -1,  2771,  2787,    64,    -1,    -1,  2791,  2777,
      -1,    -1,    71,    -1,    -1,   175,   176,    -1,  2801,  2802,
      -1,    80,   182,    82,  2807,  2808,    -1,    -1,    87,  2812,
    2813,    90,  1418,    -1,    -1,  2818,    -1,    96,  2821,  2822,
      -1,   100,   997,    -1,    -1,    -1,    -1,   207,   107,    -1,
    1436,    -1,  1007,    -1,    -1,    -1,   115,    -1,    -1,    -1,
    2843,  2844,    -1,    -1,  2847,   124,  2849,  2850,  2851,    -1,
    2853,    -1,  2855,  2856,    -1,    -1,    -1,  2860,    -1,  1465,
      -1,    -1,    -1,    -1,   143,    -1,    -1,  1473,    -1,    -1,
    2873,    -1,    -1,    -1,   254,    -1,    -1,    -1,  1484,    -1,
    1055,  1056,  2885,    -1,    -1,  1060,    -1,   166,  1063,    -1,
      -1,    -1,    -1,    -1,    -1,  1501,    -1,    -1,    -1,    -1,
    1075,     4,    -1,  2906,    -1,   184,    -1,  1513,    -1,    -1,
      -1,    -1,  1518,    -1,    -1,    -1,    19,    -1,   197,   198,
      -1,    -1,  2910,    -1,    -1,    -1,    -1,    -1,    -1,  2917,
     310,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2926,    -1,
      -1,    -1,    -1,   222,   324,  2948,    -1,  2935,    -1,    -1,
    2953,    -1,  2955,  2941,    -1,    -1,    -1,  2945,  2961,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   251,  2976,    -1,    -1,   356,  2624,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   265,    -1,   267,    -1,
      -1,    -1,  2995,    -1,    -1,    -1,    -1,    -1,    -1,  3002,
      -1,    -1,  1158,  3058,   283,    -1,   109,    -1,    -1,   288,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   296,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   304,    -1,    -1,  3031,  1204,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1196,    -1,    -1,    -1,    -1,    -1,    -1,   326,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1663,    -1,  3062,
      -1,    -1,   341,   342,  3067,   344,    -1,  3070,    -1,    -1,
      -1,    -1,    -1,   176,  3077,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  3088,  1692,    -1,    -1,    -1,
    3093,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   385,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  3119,  3120,  1724,    -1,
      -1,  1727,    -1,    -1,    -1,    -1,  1732,    -1,    -1,    -1,
      -1,    -1,  1738,  1739,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1747,  3145,    -1,    -1,    -1,  3149,    -1,  1754,  3152,
      -1,   254,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    3163,  3164,  3165,  3166,    -1,    -1,    -1,    -1,  3136,    -1,
      -1,    -1,  3175,    -1,    -1,    -1,  3179,    -1,    -1,    -1,
      -1,    -1,    -1,  3186,    -1,  3188,    -1,    -1,    -1,    -1,
      -1,  1797,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  3169,    -1,  1809,  3172,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2862,    -1,    -1,    -1,  2866,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1422,    -1,    -1,
      -1,    -1,    -1,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,    -1,    -1,    -1,    -1,     4,    -1,    -1,    -1,    -1,
      -1,  1466,    -1,    -1,    -1,    -1,    -1,  1472,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,  1912,    -1,  1483,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1939,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    60,    -1,  2990,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1957,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1970,    -1,  1972,    -1,    -1,    -1,
      -1,  3018,    -1,    -1,    -1,    -1,  1982,    -1,    -1,  1985,
    1986,  1987,  1988,  1989,    -1,  1991,    -1,    -1,    -1,  1995,
     109,    -1,    -1,    -1,  2000,  2001,  2002,  2003,  2004,  2005,
      -1,    -1,  2008,  2009,    -1,    -1,    -1,    -1,  2014,  2015,
    2016,  2017,   131,    -1,  2020,  2021,    -1,    -1,    -1,    -1,
      -1,  2027,  2028,    -1,    -1,    -1,    -1,    -1,  1584,  1585,
    1586,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1594,  1595,
    1596,    -1,    -1,  2390,    -1,    -1,    -1,  1603,  1604,  1605,
      -1,    -1,  1608,  1609,    -1,  1611,  1612,   176,    -1,    -1,
    2407,  2408,  2409,    -1,    -1,  2412,    -1,  2414,  2415,    -1,
      -1,  2418,  2419,  2420,    -1,    -1,  2423,  2424,    -1,    -1,
      -1,  2428,    -1,  2430,  2431,    -1,  2433,    -1,    -1,  1645,
    1646,    -1,    -1,  1649,  1650,    -1,    -1,    -1,    -1,    -1,
     219,    -1,    -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,
     229,    -1,  3159,    -1,    -1,    -1,    71,    -1,    -1,   238,
     239,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     249,    -1,    -1,    -1,    -1,   254,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    99,   100,    -1,  2153,    -1,    -1,
    2156,    -1,   107,    -1,    -1,    -1,    -1,    -1,    -1,  1734,
     115,  2167,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2183,   133,    -1,
      -1,    -1,    -1,    -1,    -1,   140,    -1,    -1,   143,    -1,
      -1,    -1,    -1,    -1,  2541,    -1,    -1,  2544,    -1,    -1,
      -1,    -1,  2549,    -1,    -1,    -1,  2553,    -1,    -1,  2215,
      -1,   166,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     339,    -1,   177,  1798,    -1,  2572,    -1,    -1,    -1,  1804,
      -1,    -1,    -1,    -1,    -1,    -1,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,   382,   383,    -1,    -1,   222,    -1,    -1,
     389,    -1,    -1,  2279,    -1,   230,    -1,   396,   397,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2302,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2668,    -1,    -1,    -1,    -1,     3,     4,   283,    -1,
      -1,    -1,    -1,    -1,  1909,    -1,    -1,    -1,    -1,  1914,
      -1,   296,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2701,    -1,    -1,    -1,    -1,   314,
      -1,    -1,    -1,    -1,    41,    -1,    -1,  1942,    -1,    -1,
      -1,   326,    -1,   328,    -1,  1950,  2382,    -1,     3,     4,
      -1,  1956,    -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2397,    -1,    -1,    19,    -1,    -1,    -1,  2404,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1983,    -1,
      -1,    -1,    -1,    -1,    -1,  1990,    -1,    -1,    -1,    -1,
    2426,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2435,
     385,    -1,   109,  2439,    -1,    60,  2783,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2803,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2811,    -1,    -1,  2814,  2815,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   109,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2051,    -1,    -1,    -1,   176,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2064,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2074,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2543,    -1,    -1,
    2546,    -1,   219,    -1,    -1,     4,    -1,    -1,    -1,  2555,
      -1,   176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,  2571,    -1,    -1,  2574,    -1,
      -1,    -1,   249,    -1,    -1,  2581,  2151,   254,  2584,  2585,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   265,    -1,
    2146,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    60,  2949,    -1,    -1,    -1,    -1,    -1,    -1,  2184,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2625,
    2626,    -1,    -1,  2970,   249,    -1,    -1,    -1,    -1,   254,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2221,  2222,    -1,    -1,
     109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   336,
    2235,    -1,    -1,    -1,    -1,  2240,  2241,    -1,    -1,    -1,
      -1,  2246,  2247,    -1,    -1,  2681,    -1,    -1,    -1,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   382,   383,    -1,    -1,    -1,
      -1,    -1,    -1,  3060,  3061,  2290,  3063,   176,  3065,  3066,
      -1,    -1,  3069,    -1,    -1,    -1,  2301,    -1,    -1,    -1,
      -1,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2782,    -1,    -1,  2354,
      -1,    -1,    -1,    -1,  3131,    -1,    -1,    -1,    -1,    -1,
     249,    -1,    -1,    -1,    -1,   254,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2378,    -1,    -1,    -1,    -1,    -1,    -1,
    2816,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2827,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2405,    -1,    -1,  3180,    -1,  2410,    -1,    -1,    -1,    -1,
      -1,  2416,    -1,    -1,    -1,    -1,  2421,    -1,    -1,    -1,
    2425,    -1,  2427,    -1,  2429,    -1,    -1,  2432,    -1,  2434,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2890,    -1,    -1,    -1,  2894,    -1,
      -1,    -1,    -1,    -1,    -1,  2451,    19,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,   382,   383,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2951,  2952,    -1,  2954,    -1,
      -1,    -1,    -1,  2959,  2960,  2511,  2512,  2513,  2514,  2515,
    2966,  2517,  2518,    17,    -1,    19,  2522,  2523,  2524,  2525,
    2526,    -1,  2528,  2529,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,    -1,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    -1,  3003,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  3038,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2615,    -1,    -1,    -1,    70,    71,    -1,    -1,    -1,    -1,
      76,    -1,    -1,   176,    -1,   109,  2631,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   125,    -1,    99,   100,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   109,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2676,    -1,    -1,    -1,    -1,    -1,    -1,  2683,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   176,    -1,    -1,    -1,   249,    -1,    -1,    -1,
    3136,   254,    -1,    -1,    -1,  2710,    -1,  2712,    -1,    -1,
      -1,    -1,   196,    -1,    -1,    -1,    -1,    -1,    -1,  3155,
     176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2718,  3169,    -1,   191,  3172,    -1,    -1,    -1,
      -1,  2727,  2728,  2729,  2730,  2731,    -1,  2733,  2734,    -1,
    2736,  2737,  2738,  2739,  2740,   211,  2742,  2743,    -1,  2745,
    2746,  2747,  2748,  2749,    -1,  2751,  2752,    -1,  2754,    -1,
     254,    -1,    -1,    -1,    -1,  2780,    -1,    -1,  2764,  2765,
     236,  2786,    -1,    -1,    -1,  2790,    -1,    -1,    -1,  2775,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   254,    -1,
      -1,  2806,    -1,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   330,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   310,    -1,    -1,    -1,    -1,  2864,
    2865,    -1,    -1,    -1,    -1,   321,    -1,    -1,    -1,    -1,
      -1,    -1,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,    -1,   385,
      20,    21,    22,    -1,  2920,    20,    21,    22,    -1,    -1,
      -1,    -1,    -1,  2929,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2938,    -1,  2940,    -1,    -1,    -1,  2944,    -1,
      -1,    -1,    52,    53,    -1,    19,    56,    52,    53,    59,
      -1,    56,    -1,    -1,    -1,    -1,  2981,    67,    63,    -1,
      -1,    71,    67,    -1,    -1,    -1,    71,    -1,    -1,    -1,
      -1,    81,    82,    -1,    -1,    -1,    81,    82,    -1,    89,
      90,    -1,    -1,    -1,    89,    -1,    60,    -1,    -1,    -1,
     100,    -1,    -1,    -1,    -1,   100,    -1,   107,    -1,    -1,
      -1,    19,    -1,    -1,    -1,   115,    -1,    -1,    -1,   119,
     120,    -1,    -1,   123,   119,   120,    -1,    -1,   123,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    -1,   143,    -1,   109,    -1,    -1,   143,    -1,
      -1,    -1,  3048,    -1,  3050,    63,  3052,    -1,    -1,  3055,
      -1,  3057,    -1,    -1,    -1,    -1,   166,    -1,    -1,    -1,
      -1,   166,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    60,    -1,    -1,  3099,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    -1,   195,    -1,    -1,    -1,    -1,
     195,   109,    -1,    -1,    -1,    -1,    -1,    -1,  3123,    -1,
     205,    -1,   176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   222,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  3170,    -1,    -1,   258,    -1,
     260,    -1,    -1,   258,    -1,   260,   266,   267,   176,    -1,
      19,   266,   267,   101,    -1,    -1,  3191,    -1,    -1,  3194,
      -1,   109,    -1,   283,   284,   249,    -1,    -1,    -1,   284,
     254,    -1,    -1,    -1,    -1,   295,   296,   176,    -1,    -1,
      -1,   296,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   326,    -1,   328,    -1,
      -1,   326,    -1,   328,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   342,    -1,   344,   340,   254,    -1,   176,    -1,
      -1,   351,    -1,    -1,    -1,   319,   351,    -1,    -1,    -1,
     109,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   254,   176,    -1,    -1,    -1,
      -1,   181,    -1,    -1,    -1,   385,    -1,    -1,    -1,    -1,
     385,    -1,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
      -1,    -1,   330,    -1,    -1,    -1,   254,   176,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   381,   382,   383,    -1,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,   382,   383,   254,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   381,   382,   383,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,   379,
     380,   381,   382,   383,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,   382,   383,    43,    -1,    -1,    46,    -1,
      -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    69,    70,    -1,    -1,    -1,    74,    75,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,    -1,
      -1,    -1,    -1,    91,    -1,    93,    94,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   103,   104,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   129,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   139,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   152,    -1,    -1,    -1,    -1,   157,
      -1,    -1,    -1,   161,    -1,    -1,    -1,   165,   166,    -1,
      -1,    -1,    -1,   171,   172,    -1,    -1,   175,    -1,    -1,
      -1,    -1,    -1,   181,    -1,    -1,    -1,    -1,    -1,   187,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     198,    -1,    -1,    -1,   202,   203,   204,    -1,    -1,   207,
     208,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   220,    -1,    -1,    -1,   224,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   246,    -1,
     248,   249,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   261,    -1,   263,    -1,    -1,    -1,    -1,
      -1,    -1,   270,    -1,    -1,    -1,   274,    -1,    43,    -1,
     278,    46,   280,   281,    49,   283,    -1,    -1,    -1,    -1,
     288,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,   304,    -1,    -1,    74,
      75,    76,   310,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      -1,    86,    -1,    -1,    -1,    -1,    91,    -1,    93,    94,
      95,   329,   330,    -1,    -1,    -1,   101,    -1,   103,    -1,
      -1,    -1,    -1,    -1,    -1,   343,    -1,   345,    -1,    -1,
      -1,    -1,    -1,    -1,   352,    -1,    -1,   355,   356,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   138,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   386,    -1,
      -1,    -1,   157,    -1,    -1,    -1,   394,    -1,    -1,    -1,
      -1,   166,    -1,   168,   169,    -1,   171,   172,    -1,    -1,
     175,    -1,    -1,    -1,   179,    -1,   181,   181,    -1,    -1,
      -1,    -1,   187,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   207,   208,    -1,    -1,    -1,   212,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   220,    -1,    -1,    -1,   224,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   246,    -1,   248,    -1,    -1,    -1,    -1,    -1,    -1,
     255,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   281,    -1,   283,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   310,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   329,   330,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   340,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   348,    -1,    -1,    -1,    -1,    -1,   354,
      -1,   356,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
     384,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   394,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383
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
     316,   347,   417,   452,    32,    90,   100,   107,   198,   251,
     288,   321,   453,    42,    63,   121,   219,   330,   402,   464,
       4,    19,    42,    60,   109,   131,   176,   219,   229,   238,
     239,   249,   254,   339,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   383,   389,   396,   397,   404,   412,   413,   414,
     466,    34,   467,   404,    46,    49,    83,    91,   158,   217,
     250,   252,   281,   356,   403,   404,    69,   402,   469,   161,
     179,   470,    43,    46,    49,    70,    74,    75,    76,    84,
      86,    91,    93,    94,    95,   101,   103,   138,   157,   166,
     168,   169,   171,   172,   175,   179,   181,   187,   207,   208,
     212,   220,   224,   246,   248,   255,   281,   283,   310,   329,
     330,   340,   348,   354,   356,   394,   471,    90,   107,   522,
      19,    43,    46,    84,    91,   102,   103,   109,   138,   157,
     175,   176,   182,   207,   254,   310,   324,   356,   525,    71,
     404,    65,   324,   350,   610,    65,   324,   350,   609,    95,
     126,   210,   227,   297,   345,   356,   531,    15,     4,    48,
      51,    71,    90,   107,   113,   165,   188,   304,   333,   334,
     346,   350,   591,    26,   122,   138,   178,   235,   253,   534,
     264,   552,     5,    71,    95,   155,   345,   394,   404,   553,
       5,   554,    61,   145,   259,   274,   347,   571,    48,    69,
      71,   206,   273,   324,   334,   592,   324,   608,    71,   230,
     388,   396,   398,   593,    41,   219,   265,   336,   402,   412,
     414,   594,     5,   345,   356,   404,   597,    77,   191,   279,
     290,   598,     4,   599,    95,   571,     4,    69,   606,    65,
     324,   350,   607,   219,   336,   402,   611,    26,   122,   138,
     235,   253,   393,   613,    54,   107,   118,   151,   338,   635,
     636,     4,    38,    50,    81,   166,   211,   290,   300,   323,
     331,   350,   431,     4,   138,   234,   637,   336,   402,   639,
      15,    23,   275,   278,   413,   640,   264,   644,   336,   402,
     645,     0,     5,   404,    63,   402,   439,   307,     5,     4,
     336,   402,   440,     5,    33,   322,   441,   137,   402,   442,
     390,   137,   402,   444,   402,     4,   218,   277,   285,   448,
     212,   347,   391,   392,   402,   447,   404,   153,   199,   446,
     224,   402,    85,   195,   285,   402,   449,     5,   402,   402,
     402,     4,   171,   172,   220,   281,   451,     4,   402,   402,
     402,   223,   278,   321,   454,     5,   260,   455,     4,    32,
     456,     5,   457,     5,   461,     5,    32,   462,     4,    69,
     463,   402,     8,     9,    10,   402,   408,   409,   410,   411,
     402,   402,    42,   121,   219,   402,   465,   402,   219,   412,
     414,   402,    36,   116,   141,   142,   150,   173,   183,   419,
     402,     4,   404,   404,   404,   404,   404,   404,   404,   404,
     404,   404,   128,     5,    71,    57,    78,    95,   108,   130,
     134,   149,   197,   474,   130,   224,   476,   212,   218,   265,
     293,   347,   391,   392,   402,   458,   477,   326,   480,   191,
     481,   191,   200,   483,    32,    70,    71,    76,    99,   100,
     191,   211,   236,   310,   321,   385,   412,   485,   402,   414,
     488,    63,   330,   412,   489,   319,   412,   414,   490,    34,
     491,   412,   414,   492,     4,   412,   414,   493,    47,    63,
      88,   108,   128,   132,   163,   164,   226,   237,   307,   308,
     385,   497,   245,   349,   503,    71,     5,    96,    65,   324,
     350,   511,    65,   324,   350,   510,     4,    95,   132,   495,
       5,    70,   414,   494,    15,    48,    71,    88,   188,   334,
     350,   504,   571,    48,    71,    88,   206,   273,   324,   334,
     505,   324,   509,    71,   265,   507,   325,    65,   324,   350,
     508,    21,   149,   272,   305,   512,    38,    50,    81,   166,
     211,   290,   300,   350,   513,   414,    96,    15,   223,   520,
     412,   523,    71,    79,   526,    32,   527,    46,    94,   217,
     528,   166,   251,   296,   341,   529,   412,    17,    62,   125,
     196,   330,   412,   530,     5,     5,   170,   289,   348,   412,
       4,     5,   170,   289,   412,     4,     4,   218,   533,     5,
       4,     4,   132,   402,     4,    48,    51,    71,   107,   113,
     165,   304,   333,   334,   346,   350,    71,    72,    73,    98,
     111,   127,   160,   170,   192,   201,   221,   247,   289,   294,
     311,   314,   416,     5,     4,   402,   404,     5,   171,   172,
     281,   535,     5,   537,     5,   128,   171,   172,   217,   281,
     308,   538,   101,   121,   212,   551,     5,   549,     5,   308,
     550,     4,     5,   404,   404,   402,   402,     5,     4,     5,
      20,    64,    71,    80,    82,    87,    90,    96,   100,   107,
     115,   124,   143,   166,   184,   197,   198,   222,   251,   265,
     267,   283,   288,   296,   304,   326,   341,   342,   344,   385,
     555,   416,     5,     4,   224,   232,   233,   273,   390,   415,
     402,   412,   402,   412,     5,   402,    42,   121,   402,   596,
     404,   402,   412,   414,   595,   402,   419,   402,     4,   413,
      58,    97,   156,   281,   600,     4,     4,   402,     4,   166,
     296,   601,     5,   412,     4,    42,   121,   402,   612,   402,
     105,    65,   132,   171,   172,   281,   312,   615,   132,   634,
      65,   128,   132,   171,   172,   176,   217,   276,   281,   308,
     312,   325,   616,   617,    65,   132,   312,   633,     5,    65,
     132,   312,   614,     4,    35,   117,   230,   605,    71,   404,
     434,    71,   404,   435,    71,   404,   436,    12,   136,   214,
     604,   402,    18,   231,   320,   404,   432,     4,   402,   258,
     402,   437,   402,    63,   308,     4,   402,   402,     4,   259,
     336,   643,     4,   328,   641,     4,   328,   642,     4,   419,
     137,   402,   646,   402,   402,     4,     5,   402,    11,   402,
     402,   404,   402,    31,   102,   182,   285,   291,   418,   418,
       4,   224,   402,   402,     4,     4,     4,   402,   402,   402,
     402,   402,   402,     4,   402,     4,   402,   402,     4,     4,
       4,     4,     4,     4,     4,     5,     5,   412,     4,     5,
       5,    69,   402,   402,   408,   410,   410,   412,   402,   402,
     402,   402,   402,   402,   402,   412,   414,   411,   402,   402,
     411,   402,     5,   307,   112,   212,   475,   390,   218,   285,
     478,   191,    85,   195,   285,   479,   153,   199,   459,   459,
       4,   482,     4,   484,   321,   218,   293,   486,   200,   487,
     191,     4,   419,   402,   402,   412,   412,   419,   419,   419,
     412,   419,   402,   412,     4,   500,     4,   414,   498,   223,
       4,   185,   356,   499,   223,   412,     4,   146,   336,   502,
       5,     5,   472,     4,   223,   148,   282,   405,   402,     4,
     506,   506,   506,   506,     4,     5,    20,    64,    71,   100,
     124,   143,   159,   166,   174,   236,   260,   265,   267,   295,
     296,   304,   326,   385,   565,   414,   213,   213,    71,   516,
      71,   517,    71,   518,    18,   231,   320,   514,   258,   519,
     402,     5,   473,   259,   521,   413,   419,     5,   412,   412,
     412,   412,     4,     4,     4,   404,     4,     4,   223,   402,
     416,     5,   402,   404,    13,    14,    65,   215,   216,   301,
     312,   313,   349,    94,    94,    94,     5,     5,    13,    14,
      65,   215,   216,   301,   312,   313,   317,   349,    94,    94,
     176,    94,   176,   176,   181,   413,   541,   546,    94,   176,
       5,   539,     4,     4,    13,    65,   215,   301,   312,   349,
       5,     5,     4,   402,   413,    20,    21,    22,    52,    53,
      56,    59,    67,    71,    81,    82,    89,    90,   100,   107,
     115,   119,   120,   123,   143,   166,   195,   222,   258,   260,
     266,   267,   283,   284,   295,   296,   326,   328,   342,   344,
     351,   385,    71,    87,    96,   107,   143,   166,   222,   267,
     296,   342,   344,   318,     4,    31,   180,   245,   272,   558,
       5,    68,   114,   269,   286,   287,   387,   388,   564,   107,
     556,     4,    16,   296,   562,    42,   121,   219,   563,     4,
       5,    16,   240,   337,   402,   296,   564,   572,   138,   564,
     573,    37,    42,   121,   147,   219,   336,   402,   574,   412,
     404,    99,   107,   115,   133,   140,   166,   177,   222,   230,
     283,   296,   314,   577,    42,   121,   219,     5,   296,   327,
     581,    16,   135,   189,   240,   337,   582,   328,   404,   583,
       5,   107,   115,   345,    16,    16,     4,   402,   402,   402,
     402,   402,   402,   419,   402,   402,   411,   402,     4,   419,
       4,    42,   121,   219,   302,   602,    42,   121,   219,   302,
     603,     4,   105,     5,     5,    94,    94,    94,     4,     5,
       5,    94,     5,    94,   176,    94,   176,   617,    65,   132,
     176,   312,   621,    65,   132,   312,   632,    94,   176,    65,
     132,   312,   619,     4,    65,   132,   312,   618,     5,     5,
       4,     5,     5,     4,     4,     5,     5,     5,   402,   320,
     404,   433,   402,   402,   402,   402,   402,     4,   402,   638,
     402,   402,   413,    69,     4,     4,     5,     4,     4,     5,
       4,   105,   298,   420,   402,   402,    11,     5,    11,   402,
     402,    11,     4,    11,     4,     4,   402,   402,   402,   402,
     402,     4,   402,     5,   402,   402,     5,     4,     4,    16,
       4,   404,     4,     4,   419,     5,   412,     4,   419,   402,
     402,   402,   412,   402,   411,   402,   402,     5,     5,   402,
     414,   402,     4,   412,   402,   419,   419,   420,   420,   420,
     419,   411,   402,   419,   402,   405,   501,   185,     5,     4,
     419,   176,   176,     4,     5,     4,     4,   402,   496,    40,
      40,   402,    20,    21,    22,    52,    53,    56,    63,    67,
      71,    81,    82,    89,   100,   119,   120,   123,   143,   166,
     195,   205,   258,   260,   266,   267,   284,   296,   326,   328,
     340,   351,   385,    71,   143,   174,   267,   326,   318,    31,
     180,   245,   272,   566,   402,   236,   402,   567,    16,   402,
     295,   577,   295,   236,   402,   568,   328,   569,    16,   106,
     402,   320,   515,   402,     5,   420,     4,     4,    60,   412,
       4,     5,   532,   402,     5,     5,     5,   176,   208,   424,
     424,   184,   303,   422,     4,     4,     5,     5,   536,   536,
     536,   309,   309,     5,     5,     5,    16,   178,   423,   423,
     422,     4,     4,   422,     5,     5,   540,     5,   547,     5,
     548,   547,   548,   181,   384,   413,   544,     5,   543,     5,
     547,   548,     5,    13,    14,    65,   215,   216,   301,   312,
     313,   317,   349,     4,     4,     5,     5,   424,   422,     4,
       5,     5,   419,    89,   168,   256,   257,   271,   318,   428,
       6,     7,   402,   407,   272,   272,   272,   115,    42,    71,
     107,   115,   121,   143,   166,   184,   222,   267,   283,   296,
     328,   342,   344,   345,   385,   557,   272,     5,    27,   121,
     186,   272,   324,    28,   153,   340,   115,    22,    53,    56,
      89,   120,   123,   260,   295,     4,    22,    53,    56,    59,
      89,   120,   123,   260,   295,   326,    42,   272,   272,   115,
       5,   240,    27,   121,   258,    37,   147,   336,   402,   154,
     299,   307,   258,   278,   412,   577,    42,   144,   258,   324,
     278,   240,     5,     5,   283,    27,   121,   258,     4,     5,
       5,   240,    37,   147,   336,   402,   577,   240,    59,   404,
       4,     4,   402,     5,   349,    22,    27,    52,    53,    55,
      56,    67,    81,    82,    89,    92,   110,   119,   120,   123,
     154,   195,   260,   266,   284,   295,   327,   328,   351,   398,
     559,     4,   402,   402,   402,   402,   402,   564,   412,     5,
       4,     5,   402,   402,   412,   402,   404,   402,   402,   564,
       5,     5,   402,   402,   404,     5,    16,     5,     5,   402,
     402,   411,   402,   402,     4,   402,   402,   121,   402,   402,
     121,     4,    44,    45,   193,   194,   225,   430,   430,    65,
     132,   312,   629,    65,   132,   312,   626,    65,   132,   312,
     623,   430,     5,    65,   132,   312,   620,    65,   132,   312,
     631,    65,   132,   312,   630,    65,   132,   312,   628,    65,
     132,   312,   627,     5,     5,    65,   132,   312,   622,     4,
       5,     5,     4,    65,   132,   312,   625,    65,   132,   312,
     624,     5,     5,     4,     5,     5,     4,   430,   430,   430,
     402,   402,   402,   402,   402,     4,   412,   402,   419,   413,
       5,     5,    11,   402,   412,   414,   402,    11,   402,   402,
     402,    63,   402,     4,   402,   402,     4,   402,   402,     5,
     402,     5,   402,   402,     5,     5,    49,   310,   460,     5,
     404,   404,   412,   419,     4,   402,     4,     4,     4,   419,
     412,   402,   402,   402,   402,   419,   412,   420,   411,   402,
       4,   420,   402,     4,   414,     5,    24,    25,   105,   421,
       4,   412,   402,   402,     4,   402,     5,    89,   168,   256,
     257,   271,   318,   412,   414,   272,   272,   272,    21,   272,
     412,   272,    27,   121,   186,   272,   324,    28,   153,   340,
      21,   272,   272,   272,    21,   272,    27,   121,   190,   258,
     190,   154,   299,   307,   258,   190,   258,   332,   577,   144,
     190,   258,   324,     4,   283,    27,   121,   190,   258,   577,
     236,    16,   395,   402,   402,   402,   402,   402,   402,   223,
     402,   402,    20,   268,   524,     4,     4,   402,   424,   424,
     424,     4,   424,   424,   424,    13,    14,    65,   215,   216,
     301,   312,   313,   349,   423,   424,   424,   424,   424,   424,
       4,   424,   424,     4,   423,    13,    14,    65,   215,   216,
     301,   312,   313,   349,     5,    13,    14,    65,   215,   216,
     301,   312,   313,   317,   349,    13,    14,    65,   215,   216,
     301,   312,   313,   349,     5,   542,     5,   545,     5,     5,
      13,    14,    65,   215,   216,   301,   312,   313,   317,   349,
       5,    13,    14,    65,   215,   216,   301,   312,   313,   317,
     349,   309,     5,     5,     5,   423,   423,   422,     4,     4,
     422,     5,     4,     4,   424,   424,     4,   424,   424,     5,
     404,   412,   414,     5,   402,   402,     5,   402,     5,   407,
     115,   222,   283,   115,   222,   283,     5,   402,   404,     4,
      27,    39,    52,    66,    67,   230,   241,   242,   243,   244,
     335,   425,     5,   402,   412,   404,   404,     5,     5,   407,
     272,   272,    21,   272,    21,   272,   272,    21,   272,   353,
     353,     4,     4,     4,     4,   557,     4,     4,     4,   353,
     353,     4,     5,     4,   402,     5,   402,     5,   407,   404,
     425,   412,   412,   402,     5,    27,    52,    55,    67,    92,
     110,   154,   398,   426,     4,   412,   402,   419,   404,     5,
     412,   412,   402,   404,   404,   425,   412,   412,   402,   404,
       5,   402,     5,   402,   258,   258,   402,   402,   258,   402,
     258,   402,   402,     4,   560,   402,   258,   258,   402,   402,
     402,   258,   402,    60,   402,   402,   402,    60,   402,     5,
     349,   402,   561,   402,   402,   258,   402,   402,   402,   402,
     412,   419,     5,     4,     4,   402,   402,   419,   402,   402,
     402,   412,   564,   402,   402,     5,     4,   402,   402,   402,
     402,     5,     5,     4,     5,     5,     4,     5,     5,     4,
     430,     5,     5,     4,     5,     5,     4,     5,     5,     4,
       5,     5,     4,     5,     5,     4,     4,     4,     5,     5,
       4,     4,     5,     5,     4,     5,     5,     4,   402,   402,
     402,   402,   419,   402,   412,   414,   402,   419,   402,   402,
     402,   402,   402,     5,   402,   402,   402,     4,   402,   402,
       5,   402,     5,   402,   402,     4,     4,     4,   412,     4,
     419,     4,   402,   419,   200,   417,   402,   417,   420,   419,
     412,   402,   402,     4,   402,   412,   412,   402,   405,     5,
       5,     5,     5,     5,   101,   412,   419,   412,   412,   412,
     412,   414,   412,   419,   412,   412,   412,   414,   412,   412,
     412,   412,   414,   412,   412,   412,   402,   412,   412,   412,
     412,   412,   412,   412,   412,   101,   402,   402,     4,   402,
       5,   402,   424,     5,     5,     5,   422,     4,     4,     5,
     424,   423,     4,   424,     5,     5,     5,   423,   423,   422,
       4,     4,     5,   309,     5,     5,     5,   423,   423,   422,
       4,     4,   422,     5,     5,     5,     5,   423,   423,   422,
       4,     4,     5,    13,    14,    65,   215,   216,   301,   312,
     313,   349,    13,    14,    65,   215,   216,   301,   312,   313,
     349,    13,    14,    65,   215,   216,   301,   312,   313,   349,
     309,     5,     5,     5,   423,   423,   422,     4,     4,   422,
       5,   309,     5,     5,     5,   423,   423,   422,     4,     4,
     422,     5,   423,     4,     4,   423,     4,     4,   424,     5,
     419,   412,   402,   402,   412,   402,     5,   407,     5,   412,
     404,   425,     5,   412,   419,     5,   407,   402,   402,   402,
     402,   402,   402,   402,   402,   402,     4,     4,     5,     4,
       4,   402,   412,   402,     5,   407,   404,   425,   419,   419,
     419,   402,   411,   419,   419,   402,   419,   419,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   570,   578,
     402,   402,   402,   402,   402,   402,   402,   402,   349,   402,
     402,   402,   349,   402,   402,   412,     5,   402,   402,   402,
     402,     4,     4,   419,   420,     5,     5,   411,   402,     4,
     419,   412,     4,   430,   430,   430,   430,   430,   430,   430,
     430,   430,   407,   402,   402,   402,   419,   402,   411,   402,
     402,    11,     5,     5,   402,   402,   402,   402,     5,   402,
       4,   402,     4,     4,     4,   419,     4,     4,   412,   402,
     402,   420,   421,   402,     5,   402,   412,   414,     5,     5,
       5,     5,     5,   412,   419,   421,   421,   421,   419,   421,
     420,   421,   421,   419,   421,   421,   421,   419,   421,   421,
     419,   412,   419,   421,   419,   421,   421,   419,   421,   419,
     412,     4,   412,   414,     5,   402,     4,   424,   423,     4,
     423,   423,     4,     4,   423,     4,   423,     5,     5,     5,
     423,   423,   422,     4,     4,     5,     5,     5,     5,   423,
     423,   422,     4,     4,     5,     5,     5,     5,   423,   423,
     422,     4,     4,     5,   423,   424,   424,   424,   424,   424,
       4,   424,   424,     4,   423,   423,   424,   424,   424,   424,
     424,     4,   424,   424,     4,   423,   423,     4,     4,     4,
     413,   421,     4,   412,   421,   402,   412,     4,   421,   421,
     412,     4,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   412,   421,   402,   412,     4,   411,   411,
     420,   412,   411,   411,   412,   412,   411,   411,   402,   402,
     402,   402,   402,   402,   407,   402,   402,   402,    59,    71,
     100,   143,   326,   328,   385,   575,   576,   577,   589,   590,
     407,   402,   402,   402,   402,   407,   402,   402,     5,   402,
     402,   402,     5,   402,   402,   419,   402,   349,   406,   407,
     402,   402,   420,   404,   412,   412,   420,   419,     4,   402,
     411,   402,    63,   402,     5,     5,     4,     4,   402,   402,
       4,   402,     4,     4,     4,   417,   421,     5,   419,     4,
       5,     4,     5,   412,     5,   419,   420,   421,   420,   420,
     420,   420,   419,     5,   419,     4,   402,   424,   423,   423,
       4,   423,   424,   424,   424,   424,   424,     4,   424,   424,
     423,   424,   424,   424,   424,   424,     4,   424,   424,   423,
     424,   424,   424,   424,   424,     4,   424,   424,   423,   424,
     423,     4,   424,   424,   423,     4,   424,   423,   419,   412,
     421,     4,   419,   402,   419,   402,   402,   402,   421,     4,
     419,   402,   411,     5,   349,   421,   402,   411,   421,   421,
     412,   402,     4,   427,   427,   402,   402,   427,   407,   427,
     578,   412,   399,   399,   399,   399,   399,   399,   399,   576,
     399,   407,   427,   427,   402,   402,   407,     4,     5,   402,
     578,   402,   402,   402,   578,   402,   411,   402,     5,   578,
     402,   427,   404,   579,   580,   419,   419,   404,   420,     4,
       5,   402,     5,     4,     4,     4,     4,     4,     4,     4,
       4,   402,     4,    33,   209,   322,   468,   412,     5,    33,
     209,   322,   429,   412,     4,   468,   402,   423,   423,   424,
     423,   424,   423,   424,   424,   423,   424,   423,   402,   421,
     412,   412,   402,   412,   402,   412,   412,   402,     5,   412,
     421,     4,   578,   578,   406,   402,   578,     4,   578,   419,
     557,     5,     4,     5,     5,     5,     4,   404,     4,   578,
     578,   406,   402,     4,     5,   578,   578,   578,   402,   412,
     578,   578,   578,   579,   586,   587,   577,   584,   585,   404,
       4,     5,     5,     4,     4,     4,   212,   347,   392,   402,
     458,   468,     4,   412,   468,     4,   424,   424,   424,   424,
     424,   413,   421,   421,   402,   421,     4,   421,   421,   402,
     421,   402,   578,   578,     4,   402,   578,     5,     4,   402,
     578,     4,   402,   578,   578,   419,   586,   588,   589,   399,
     585,     5,     5,   402,   459,   402,   459,   419,   421,     4,
     412,   414,     4,   407,   406,   402,     5,   402,   406,   402,
     412,   589,   404,     5,     5,   402,   402,   402,   402,   429,
       5,   412,   414,   419,   412,   414,   578,   402,     4,   578,
     402,   421,     5,     5,   402,     5,   402,   419,   419,     4,
     578,     4,     5,     5,     5,   406,   406,   578,   578,   578
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
#line 802 "frame/parser.Y"
    {(yyval.integer) = Point::GLYPH;;}
    break;

  case 217:
#line 805 "frame/parser.Y"
    {(yyval.integer) = POINTSIZE;;}
    break;

  case 218:
#line 806 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 219:
#line 809 "frame/parser.Y"
    {(yyval.integer) = Marker::PANDA;;}
    break;

  case 220:
#line 810 "frame/parser.Y"
    {(yyval.integer) = Marker::HISTOGRAM;;}
    break;

  case 221:
#line 811 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT2D;;}
    break;

  case 222:
#line 812 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT3D;;}
    break;

  case 223:
#line 813 "frame/parser.Y"
    {(yyval.integer) = Marker::RADIAL;;}
    break;

  case 224:
#line 814 "frame/parser.Y"
    {(yyval.integer) = Marker::STATS;;}
    break;

  case 225:
#line 817 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 226:
#line 818 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 227:
#line 819 "frame/parser.Y"
    {(yyval.integer) = Marker::SUM;;}
    break;

  case 228:
#line 820 "frame/parser.Y"
    {(yyval.integer) = Marker::MEDIAN;;}
    break;

  case 229:
#line 823 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 230:
#line 824 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 231:
#line 825 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 232:
#line 826 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 233:
#line 827 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 234:
#line 828 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 239:
#line 835 "frame/parser.Y"
    {fr->set3dRenderMethodCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 240:
#line 836 "frame/parser.Y"
    {fr->set3dRenderBackgroundCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 242:
#line 838 "frame/parser.Y"
    {fr->set3dScaleCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 243:
#line 839 "frame/parser.Y"
    {fr->set3dSyncCmd((yyvsp[(2) - (2)].integer));}
    break;

  case 244:
#line 841 "frame/parser.Y"
    {/* needed for compatibility with old version of backup */;}
    break;

  case 245:
#line 844 "frame/parser.Y"
    {fr->set3dShadeCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 246:
#line 845 "frame/parser.Y"
    {fr->set3dShadeAmbientCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 247:
#line 846 "frame/parser.Y"
    {fr->set3dShadeStrengthCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 249:
#line 850 "frame/parser.Y"
    {fr->set3dShadeNormalCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 250:
#line 851 "frame/parser.Y"
    {fr->set3dShadeNormalStrengthCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 251:
#line 854 "frame/parser.Y"
    {fr->set3dBorderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 252:
#line 855 "frame/parser.Y"
    {fr->set3dBorderColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 253:
#line 858 "frame/parser.Y"
    {fr->set3dCompassCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 254:
#line 859 "frame/parser.Y"
    {fr->set3dCompassColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 255:
#line 862 "frame/parser.Y"
    {fr->set3dHighliteCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 256:
#line 863 "frame/parser.Y"
    {fr->set3dHighliteColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 257:
#line 866 "frame/parser.Y"
    {fr->set3dViewCmd((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));;}
    break;

  case 258:
#line 868 "frame/parser.Y"
    {fr->set3dViewPointCmd(Vector3d((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 260:
#line 872 "frame/parser.Y"
    {fr->binColsCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 261:
#line 873 "frame/parser.Y"
    {fr->binDepthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 264:
#line 876 "frame/parser.Y"
    {fr->binBufferSizeCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 266:
#line 878 "frame/parser.Y"
    {fr->binFilterCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 267:
#line 881 "frame/parser.Y"
    {fr->binAboutCmd();;}
    break;

  case 268:
#line 882 "frame/parser.Y"
    {fr->binAboutCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 269:
#line 885 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 270:
#line 886 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 271:
#line 888 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(1) - (4)].real)), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 272:
#line 890 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 273:
#line 891 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 274:
#line 892 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 275:
#line 894 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 276:
#line 896 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 277:
#line 899 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::AVERAGE);;}
    break;

  case 278:
#line 900 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::SUM);;}
    break;

  case 279:
#line 903 "frame/parser.Y"
    {fr->binToFitCmd();;}
    break;

  case 280:
#line 905 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (7)].real),(yyvsp[(2) - (7)].real)), (yyvsp[(5) - (7)].str), (yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].str));;}
    break;

  case 281:
#line 908 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (11)].real),(yyvsp[(2) - (11)].real)), (yyvsp[(3) - (11)].integer), Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)), (yyvsp[(8) - (11)].str), (yyvsp[(9) - (11)].str), (yyvsp[(10) - (11)].str), (yyvsp[(11) - (11)].str));;}
    break;

  case 282:
#line 910 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (8)].real),(yyvsp[(2) - (8)].real)), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (yyvsp[(6) - (8)].str), (yyvsp[(7) - (8)].str), (yyvsp[(8) - (8)].str));;}
    break;

  case 283:
#line 913 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (12)].real),(yyvsp[(2) - (12)].real)), (yyvsp[(3) - (12)].integer), Vector((yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real)), Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    (yyvsp[(9) - (12)].str), (yyvsp[(10) - (12)].str), (yyvsp[(11) - (12)].str), (yyvsp[(12) - (12)].str));;}
    break;

  case 284:
#line 917 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 285:
#line 918 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 287:
#line 920 "frame/parser.Y"
    {fr->blockNanZeroCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 288:
#line 923 "frame/parser.Y"
    {fr->blockToFitCmd();;}
    break;

  case 289:
#line 924 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 290:
#line 925 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 294:
#line 931 "frame/parser.Y"
    {fr->clipUserCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 295:
#line 932 "frame/parser.Y"
    {fr->clipUserCmd(NAN,NAN);;}
    break;

  case 297:
#line 935 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 298:
#line 940 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::GLOBAL);;}
    break;

  case 299:
#line 941 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::LOCAL);;}
    break;

  case 300:
#line 944 "frame/parser.Y"
    {fr->clipModeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 301:
#line 945 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::MINMAX);;}
    break;

  case 302:
#line 946 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZSCALE);;}
    break;

  case 303:
#line 947 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZMAX);;}
    break;

  case 304:
#line 948 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::USERCLIP);;}
    break;

  case 305:
#line 951 "frame/parser.Y"
    {fr->clipMinMaxCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer),(yyvsp[(1) - (2)].integer));;}
    break;

  case 306:
#line 952 "frame/parser.Y"
    {fr->clipMinMaxModeCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer));;}
    break;

  case 307:
#line 953 "frame/parser.Y"
    {fr->clipMinMaxSampleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 308:
#line 954 "frame/parser.Y"
    {fr->clipMinMaxRescanCmd();;}
    break;

  case 309:
#line 957 "frame/parser.Y"
    {fr->clipZScaleCmd((yyvsp[(1) - (3)].real),(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 310:
#line 959 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleContrastCmd((yyvsp[(2) - (2)].real));
        ;}
    break;

  case 311:
#line 964 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleSampleCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 312:
#line 969 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleLineCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 313:
#line 976 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].real), (yyvsp[(3) - (5)].real), (yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].integer));;}
    break;

  case 314:
#line 978 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 315:
#line 980 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 316:
#line 982 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 317:
#line 984 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (7)].integer),(yyvsp[(3) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(yyvsp[(7) - (7)].integer));;}
    break;

  case 321:
#line 991 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].real), (yyvsp[(3) - (5)].real), (yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].integer));;}
    break;

  case 322:
#line 993 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 323:
#line 995 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 324:
#line 997 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 325:
#line 999 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (7)].integer),(yyvsp[(3) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(yyvsp[(7) - (7)].integer));;}
    break;

  case 326:
#line 1001 "frame/parser.Y"
    {fr->colorScaleCmd((FrScale::ColorScaleType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 327:
#line 1002 "frame/parser.Y"
    {fr->colorScaleLogCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 328:
#line 1004 "frame/parser.Y"
    {fr->colorScaleGhsCmd((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 330:
#line 1008 "frame/parser.Y"
    {fr->contourDashListCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 337:
#line 1017 "frame/parser.Y"
    {fr->contourAuxNameCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 338:
#line 1018 "frame/parser.Y"
    {fr->contourAuxResetCmd((yyvsp[(2) - (2)].integer),-1);;}
    break;

  case 339:
#line 1019 "frame/parser.Y"
    {fr->contourAuxResetCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 340:
#line 1021 "frame/parser.Y"
    {fr->contourAuxStyleCmd((yyvsp[(2) - (8)].integer),(yyvsp[(3) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].integer),(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 341:
#line 1023 "frame/parser.Y"
    {fr->contourAuxStyleCmd((yyvsp[(2) - (8)].integer),-1,(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].integer),(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 342:
#line 1027 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),(FrScale::ClipMode)(yyvsp[(9) - (13)].integer),100,(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 343:
#line 1030 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),FrScale::AUTOCUT,(yyvsp[(9) - (13)].real),(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 344:
#line 1033 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),(FrScale::ClipMode)(yyvsp[(9) - (12)].integer),100,FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 345:
#line 1039 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),FrScale::AUTOCUT,(yyvsp[(9) - (12)].real),FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 346:
#line 1044 "frame/parser.Y"
    {fr->contourCreatePolygonCmd();;}
    break;

  case 347:
#line 1047 "frame/parser.Y"
    {fr->contourDeleteCmd();;}
    break;

  case 348:
#line 1048 "frame/parser.Y"
    {fr->contourDeleteAuxCmd();;}
    break;

  case 349:
#line 1049 "frame/parser.Y"
    {fr->contourDeleteAuxCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 350:
#line 1052 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 351:
#line 1053 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 352:
#line 1055 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourLoadCmd((yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer),(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer));
	;}
    break;

  case 353:
#line 1061 "frame/parser.Y"
    {(yyval.integer) = FrScale::MINMAX;;}
    break;

  case 354:
#line 1062 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZSCALE;;}
    break;

  case 355:
#line 1063 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZMAX;;}
    break;

  case 356:
#line 1064 "frame/parser.Y"
    {(yyval.integer) = FrScale::USERCLIP;;}
    break;

  case 357:
#line 1067 "frame/parser.Y"
    {(yyval.integer) = FrScale::GLOBAL;;}
    break;

  case 358:
#line 1068 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOCAL;;}
    break;

  case 359:
#line 1071 "frame/parser.Y"
    {(yyval.integer) = FVContour::SMOOTH;;}
    break;

  case 360:
#line 1072 "frame/parser.Y"
    {(yyval.integer) = FVContour::BLOCK;;}
    break;

  case 361:
#line 1075 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 362:
#line 1076 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 363:
#line 1078 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 364:
#line 1082 "frame/parser.Y"
    {fr->contourSaveCmd((yyvsp[(1) - (3)].str), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 365:
#line 1084 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (4)].str),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 366:
#line 1086 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].str),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 367:
#line 1089 "frame/parser.Y"
    {fr->contourStyleClearCmd();;}
    break;

  case 368:
#line 1090 "frame/parser.Y"
    {fr->contourStyleClearCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 369:
#line 1091 "frame/parser.Y"
    {fr->contourStyleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer),0,0);;}
    break;

  case 370:
#line 1092 "frame/parser.Y"
    {fr->contourStyleCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 371:
#line 1095 "frame/parser.Y"
    {fr->cropCmd();;}
    break;

  case 372:
#line 1097 "frame/parser.Y"
    {fr->cropCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 373:
#line 1100 "frame/parser.Y"
    {fr->cropCenterCmd(Vector((yyvsp[(2) - (8)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), Vector((yyvsp[(5) - (8)].real),(yyvsp[(6) - (8)].real)), (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 375:
#line 1102 "frame/parser.Y"
    {fr->cropBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 376:
#line 1103 "frame/parser.Y"
    {fr->cropMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 377:
#line 1104 "frame/parser.Y"
    {fr->cropEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 378:
#line 1107 "frame/parser.Y"
    {fr->crop3dCmd();;}
    break;

  case 379:
#line 1109 "frame/parser.Y"
    {fr->crop3dCmd((yyvsp[(1) - (4)].real), (yyvsp[(2) - (4)].real), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 380:
#line 1110 "frame/parser.Y"
    {fr->crop3dBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 381:
#line 1111 "frame/parser.Y"
    {fr->crop3dMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 382:
#line 1112 "frame/parser.Y"
    {fr->crop3dEndCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 383:
#line 1116 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), (Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 384:
#line 1118 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 385:
#line 1119 "frame/parser.Y"
    {fr->crosshairCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 386:
#line 1120 "frame/parser.Y"
    {fr->crosshairWarpCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 387:
#line 1123 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)), (Coord::InternalSystem)(yyvsp[(3) - (5)].integer));;}
    break;

  case 388:
#line 1125 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 389:
#line 1127 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer));;}
    break;

  case 390:
#line 1129 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 391:
#line 1132 "frame/parser.Y"
    {fr->axesOrderCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 392:
#line 1135 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 393:
#line 1136 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 394:
#line 1137 "frame/parser.Y"
    {(yyval.integer) = Base::SUM;;}
    break;

  case 395:
#line 1138 "frame/parser.Y"
    {(yyval.integer) = Base::MEDIAN;;}
    break;

  case 396:
#line 1141 "frame/parser.Y"
    {fr->fadeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 397:
#line 1142 "frame/parser.Y"
    {fr->fadeClearCmd();;}
    break;

  case 398:
#line 1145 "frame/parser.Y"
    {fr->fitsyHasExtCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 399:
#line 1146 "frame/parser.Y"
    {fr->fitsyInfoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 400:
#line 1149 "frame/parser.Y"
    {fr->getCmd();;}
    break;

  case 401:
#line 1150 "frame/parser.Y"
    {fr->getBgColorCmd();;}
    break;

  case 415:
#line 1164 "frame/parser.Y"
    {fr->getDATASECCmd();;}
    break;

  case 418:
#line 1167 "frame/parser.Y"
    {fr->getHighliteColorCmd();;}
    break;

  case 419:
#line 1168 "frame/parser.Y"
    {fr->getHistogramCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].integer));;}
    break;

  case 425:
#line 1174 "frame/parser.Y"
    {fr->getIRAFAlignCmd();;}
    break;

  case 426:
#line 1175 "frame/parser.Y"
    {fr->getMinMaxCmd();;}
    break;

  case 431:
#line 1180 "frame/parser.Y"
    {fr->getNANColorCmd();;}
    break;

  case 432:
#line 1181 "frame/parser.Y"
    {fr->getOrientCmd();;}
    break;

  case 434:
#line 1184 "frame/parser.Y"
    {fr->getPixelTableCmd(Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (Coord::InternalSystem)(yyvsp[(3) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(7) - (8)].integer), (yyvsp[(8) - (8)].str));;}
    break;

  case 436:
#line 1186 "frame/parser.Y"
    {fr->getRotateCmd();;}
    break;

  case 438:
#line 1188 "frame/parser.Y"
    {fr->getThreadsCmd();;}
    break;

  case 440:
#line 1190 "frame/parser.Y"
    {fr->getTypeCmd();;}
    break;

  case 441:
#line 1192 "frame/parser.Y"
    {fr->getValueCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 444:
#line 1195 "frame/parser.Y"
    {fr->getZoomCmd();;}
    break;

  case 445:
#line 1199 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 446:
#line 1201 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 447:
#line 1205 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 448:
#line 1207 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 449:
#line 1210 "frame/parser.Y"
    {fr->getBinDepthCmd();;}
    break;

  case 450:
#line 1211 "frame/parser.Y"
    {fr->getBinFactorCmd();;}
    break;

  case 451:
#line 1212 "frame/parser.Y"
    {fr->getBinFunctionCmd();;}
    break;

  case 452:
#line 1213 "frame/parser.Y"
    {fr->getBinBufferSizeCmd();;}
    break;

  case 453:
#line 1214 "frame/parser.Y"
    {fr->getBinCursorCmd();;}
    break;

  case 454:
#line 1215 "frame/parser.Y"
    {fr->getBinFilterCmd();;}
    break;

  case 456:
#line 1217 "frame/parser.Y"
    {fr->getBinListCmd();;}
    break;

  case 457:
#line 1220 "frame/parser.Y"
    {fr->getBinColsCmd();;}
    break;

  case 458:
#line 1221 "frame/parser.Y"
    {fr->getBinColsMinMaxCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 459:
#line 1222 "frame/parser.Y"
    {fr->getBinColsDimCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 460:
#line 1225 "frame/parser.Y"
    {fr->getBlockCmd();;}
    break;

  case 461:
#line 1226 "frame/parser.Y"
    {fr->getBlockNanZeroCmd();;}
    break;

  case 462:
#line 1229 "frame/parser.Y"
    {fr->getClipCmd();;}
    break;

  case 463:
#line 1231 "frame/parser.Y"
    {fr->getClipCmd((FrScale::ClipMode)(yyvsp[(1) - (2)].integer), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 464:
#line 1233 "frame/parser.Y"
    {fr->getClipCmd((yyvsp[(1) - (2)].real), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 465:
#line 1234 "frame/parser.Y"
    {fr->getClipScopeCmd();;}
    break;

  case 466:
#line 1235 "frame/parser.Y"
    {fr->getClipModeCmd();;}
    break;

  case 468:
#line 1237 "frame/parser.Y"
    {fr->getClipUserCmd();;}
    break;

  case 470:
#line 1240 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	;}
    break;

  case 471:
#line 1246 "frame/parser.Y"
    {fr->getClipMinMaxModeCmd();;}
    break;

  case 472:
#line 1247 "frame/parser.Y"
    {fr->getClipMinMaxSampleCmd();;}
    break;

  case 473:
#line 1250 "frame/parser.Y"
    {fr->getClipZScaleContrastCmd();;}
    break;

  case 474:
#line 1251 "frame/parser.Y"
    {fr->getClipZScaleSampleCmd();;}
    break;

  case 475:
#line 1252 "frame/parser.Y"
    {fr->getClipZScaleLineCmd();;}
    break;

  case 476:
#line 1255 "frame/parser.Y"
    {fr->getColorbarCmd();;}
    break;

  case 477:
#line 1256 "frame/parser.Y"
    {fr->getColorbarTagCmd();;}
    break;

  case 479:
#line 1262 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 480:
#line 1264 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 481:
#line 1266 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 482:
#line 1269 "frame/parser.Y"
    {fr->getColorScaleCmd();;}
    break;

  case 484:
#line 1271 "frame/parser.Y"
    {fr->getColorScaleLogCmd();;}
    break;

  case 485:
#line 1275 "frame/parser.Y"
    {fr->getColorScaleLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 486:
#line 1279 "frame/parser.Y"
    {fr->getContourCmd((Coord::CoordSystem)(yyvsp[(1) - (2)].integer),(Coord::SkyFrame)(yyvsp[(2) - (2)].integer));;}
    break;

  case 488:
#line 1281 "frame/parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 489:
#line 1282 "frame/parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 490:
#line 1283 "frame/parser.Y"
    {fr->getContourDashListCmd();;}
    break;

  case 491:
#line 1284 "frame/parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 492:
#line 1285 "frame/parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 493:
#line 1286 "frame/parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 495:
#line 1288 "frame/parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 496:
#line 1289 "frame/parser.Y"
    {fr->getContourStyleCmd();;}
    break;

  case 497:
#line 1290 "frame/parser.Y"
    {fr->getContourStyleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 498:
#line 1291 "frame/parser.Y"
    {fr->getContourAuxCmd();;}
    break;

  case 499:
#line 1292 "frame/parser.Y"
    {fr->getContourAuxStyleCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 500:
#line 1293 "frame/parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 501:
#line 1296 "frame/parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 502:
#line 1297 "frame/parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 503:
#line 1298 "frame/parser.Y"
    {fr->getContourClipScopeCmd();;}
    break;

  case 504:
#line 1301 "frame/parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 505:
#line 1302 "frame/parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 506:
#line 1306 "frame/parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 507:
#line 1308 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 508:
#line 1316 "frame/parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 509:
#line 1318 "frame/parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 510:
#line 1320 "frame/parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 511:
#line 1323 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 512:
#line 1325 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 513:
#line 1326 "frame/parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 514:
#line 1329 "frame/parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 515:
#line 1332 "frame/parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 516:
#line 1334 "frame/parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 517:
#line 1338 "frame/parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 518:
#line 1340 "frame/parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 519:
#line 1343 "frame/parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 520:
#line 1347 "frame/parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (2)].str), (Base::FileNameType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 521:
#line 1348 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 522:
#line 1350 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)), (Coord::InternalSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (Base::FileNameType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 523:
#line 1353 "frame/parser.Y"
    {fr->iisGetCmd((yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 524:
#line 1354 "frame/parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 526:
#line 1358 "frame/parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 527:
#line 1359 "frame/parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 528:
#line 1360 "frame/parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 529:
#line 1363 "frame/parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 530:
#line 1365 "frame/parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 531:
#line 1366 "frame/parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 533:
#line 1368 "frame/parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 537:
#line 1372 "frame/parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 538:
#line 1373 "frame/parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 539:
#line 1374 "frame/parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 540:
#line 1376 "frame/parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::DistFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 542:
#line 1378 "frame/parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 543:
#line 1381 "frame/parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 544:
#line 1383 "frame/parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 545:
#line 1385 "frame/parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 546:
#line 1386 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 547:
#line 1387 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 548:
#line 1388 "frame/parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 549:
#line 1391 "frame/parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 550:
#line 1392 "frame/parser.Y"
    {fr->getFitsDepthCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 551:
#line 1396 "frame/parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 552:
#line 1398 "frame/parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 553:
#line 1401 "frame/parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 554:
#line 1404 "frame/parser.Y"
    {fr->getFitsSliceCmd(2);;}
    break;

  case 555:
#line 1405 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 556:
#line 1407 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 557:
#line 1409 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((yyvsp[(3) - (4)].integer), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 558:
#line 1411 "frame/parser.Y"
    {fr->getFitsSliceToImageCmd((yyvsp[(3) - (4)].real), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 559:
#line 1414 "frame/parser.Y"
    {fr->getGridCmd();;}
    break;

  case 560:
#line 1415 "frame/parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 561:
#line 1416 "frame/parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 562:
#line 1419 "frame/parser.Y"
    {fr->getLayerCountCmd();;}
    break;

  case 563:
#line 1420 "frame/parser.Y"
    {fr->getLayerNoCmd();;}
    break;

  case 564:
#line 1421 "frame/parser.Y"
    {fr->getLayerColorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 565:
#line 1422 "frame/parser.Y"
    {fr->getLayerBlendCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 566:
#line 1423 "frame/parser.Y"
    {fr->getLayerTransparencyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 567:
#line 1424 "frame/parser.Y"
    {fr->getLayerViewCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 568:
#line 1427 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 569:
#line 1428 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 570:
#line 1429 "frame/parser.Y"
    {fr->getMaskRangeCmd();;}
    break;

  case 571:
#line 1430 "frame/parser.Y"
    {fr->getMaskSystemCmd();;}
    break;

  case 572:
#line 1431 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 573:
#line 1432 "frame/parser.Y"
    {fr->getMaskCountCmd();;}
    break;

  case 574:
#line 1433 "frame/parser.Y"
    {fr->getMaskBlendCmd();;}
    break;

  case 575:
#line 1436 "frame/parser.Y"
    {(yyval.integer) = 0;;}
    break;

  case 576:
#line 1437 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 577:
#line 1440 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 578:
#line 1443 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 579:
#line 1444 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 580:
#line 1445 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 581:
#line 1448 "frame/parser.Y"
    {fr->getMultiColorSystemCmd();;}
    break;

  case 582:
#line 1451 "frame/parser.Y"
    {fr->getHLSChannelCmd();;}
    break;

  case 583:
#line 1452 "frame/parser.Y"
    {fr->getHLSSystemCmd();;}
    break;

  case 584:
#line 1453 "frame/parser.Y"
    {fr->getHLSViewCmd();;}
    break;

  case 585:
#line 1456 "frame/parser.Y"
    {fr->getHSVChannelCmd();;}
    break;

  case 586:
#line 1457 "frame/parser.Y"
    {fr->getHSVSystemCmd();;}
    break;

  case 587:
#line 1458 "frame/parser.Y"
    {fr->getHSVViewCmd();;}
    break;

  case 588:
#line 1461 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 589:
#line 1462 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 590:
#line 1463 "frame/parser.Y"
    {fr->getSmoothRadiusMinorCmd();;}
    break;

  case 591:
#line 1464 "frame/parser.Y"
    {fr->getSmoothSigmaCmd();;}
    break;

  case 592:
#line 1465 "frame/parser.Y"
    {fr->getSmoothSigmaMinorCmd();;}
    break;

  case 593:
#line 1466 "frame/parser.Y"
    {fr->getSmoothAngleCmd();;}
    break;

  case 598:
#line 1473 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 599:
#line 1474 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 601:
#line 1476 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 602:
#line 1479 "frame/parser.Y"
    {fr->get3dShadeCmd();;}
    break;

  case 603:
#line 1480 "frame/parser.Y"
    {fr->get3dShadeAmbientCmd();;}
    break;

  case 604:
#line 1481 "frame/parser.Y"
    {fr->get3dShadeStrengthCmd();;}
    break;

  case 606:
#line 1485 "frame/parser.Y"
    {fr->get3dShadeNormalCmd();;}
    break;

  case 607:
#line 1486 "frame/parser.Y"
    {fr->get3dShadeNormalStrengthCmd();;}
    break;

  case 608:
#line 1489 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 609:
#line 1490 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 610:
#line 1493 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 611:
#line 1494 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 612:
#line 1497 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 613:
#line 1498 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 614:
#line 1501 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 615:
#line 1502 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 616:
#line 1505 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 618:
#line 1507 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 619:
#line 1510 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 620:
#line 1511 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 622:
#line 1515 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 623:
#line 1519 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 624:
#line 1522 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer),
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 625:
#line 1529 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 626:
#line 1530 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 627:
#line 1533 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 628:
#line 1534 "frame/parser.Y"
    {fr->hasBgColorCmd();;}
    break;

  case 631:
#line 1537 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 632:
#line 1538 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 633:
#line 1539 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 634:
#line 1540 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 636:
#line 1542 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 637:
#line 1543 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 638:
#line 1544 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 640:
#line 1546 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 641:
#line 1547 "frame/parser.Y"
    {fr->hasImageCmd();;}
    break;

  case 642:
#line 1548 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 643:
#line 1549 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 645:
#line 1553 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 646:
#line 1556 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 647:
#line 1557 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 648:
#line 1560 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 649:
#line 1561 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 650:
#line 1562 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 651:
#line 1563 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 652:
#line 1566 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 653:
#line 1567 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 654:
#line 1568 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 655:
#line 1569 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 656:
#line 1572 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 657:
#line 1573 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 658:
#line 1574 "frame/parser.Y"
    {fr->hasWCSEquCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 659:
#line 1575 "frame/parser.Y"
    {fr->hasWCSLinearCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 660:
#line 1576 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 661:
#line 1577 "frame/parser.Y"
    {fr->hasWCS3DCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 662:
#line 1580 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 663:
#line 1581 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 664:
#line 1582 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 667:
#line 1586 "frame/parser.Y"
    {fr->iisSetCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 668:
#line 1587 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 669:
#line 1590 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 670:
#line 1593 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 671:
#line 1594 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 672:
#line 1598 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 673:
#line 1600 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 674:
#line 1601 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 681:
#line 1613 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 682:
#line 1615 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 683:
#line 1617 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 684:
#line 1618 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 685:
#line 1620 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 686:
#line 1622 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 687:
#line 1624 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 688:
#line 1626 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 689:
#line 1628 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 693:
#line 1634 "frame/parser.Y"
    {fr->loadRGBArrayCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 694:
#line 1635 "frame/parser.Y"
    {fr->loadRGBArrayCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 695:
#line 1636 "frame/parser.Y"
    {fr->loadRGBArrayCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 696:
#line 1637 "frame/parser.Y"
    {fr->loadRGBArrayCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 697:
#line 1638 "frame/parser.Y"
    {fr->loadRGBArrayCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 698:
#line 1640 "frame/parser.Y"
    {fr->loadRGBArrayCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 699:
#line 1641 "frame/parser.Y"
    {fr->loadRGBArrayCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 700:
#line 1642 "frame/parser.Y"
    {fr->loadRGBArrayCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 701:
#line 1643 "frame/parser.Y"
    {fr->loadRGBArrayCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 702:
#line 1646 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 703:
#line 1650 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 704:
#line 1652 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 705:
#line 1654 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 706:
#line 1656 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 707:
#line 1658 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 708:
#line 1660 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 709:
#line 1662 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 710:
#line 1664 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str),
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 711:
#line 1667 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 712:
#line 1669 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 713:
#line 1671 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 723:
#line 1683 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 724:
#line 1684 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 725:
#line 1685 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 726:
#line 1686 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 727:
#line 1687 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 728:
#line 1688 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 729:
#line 1690 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 730:
#line 1692 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 731:
#line 1693 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 732:
#line 1694 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 733:
#line 1695 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 734:
#line 1698 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 735:
#line 1699 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 736:
#line 1700 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 737:
#line 1701 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 738:
#line 1702 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 739:
#line 1704 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 740:
#line 1705 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 741:
#line 1706 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 742:
#line 1707 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 748:
#line 1718 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 749:
#line 1721 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 750:
#line 1724 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 751:
#line 1727 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 752:
#line 1730 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 753:
#line 1733 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 754:
#line 1736 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 755:
#line 1739 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 756:
#line 1742 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 757:
#line 1747 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 758:
#line 1750 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 759:
#line 1753 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 760:
#line 1756 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 761:
#line 1759 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 762:
#line 1762 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 763:
#line 1765 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 764:
#line 1768 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 765:
#line 1771 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 766:
#line 1774 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 767:
#line 1777 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 768:
#line 1782 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 769:
#line 1785 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 770:
#line 1788 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 771:
#line 1791 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 772:
#line 1794 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 773:
#line 1797 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer),
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 774:
#line 1800 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 775:
#line 1803 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 776:
#line 1806 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 777:
#line 1811 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 778:
#line 1813 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 779:
#line 1815 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 780:
#line 1817 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 781:
#line 1819 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 782:
#line 1821 "frame/parser.Y"
    {
	  fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str),
					   (Base::LayerType)(yyvsp[(6) - (6)].integer));
        ;}
    break;

  case 783:
#line 1826 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 784:
#line 1828 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 785:
#line 1830 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 786:
#line 1834 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 787:
#line 1837 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 788:
#line 1840 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 789:
#line 1843 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 790:
#line 1846 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 791:
#line 1849 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 792:
#line 1852 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer),
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 793:
#line 1855 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer),
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 794:
#line 1858 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 795:
#line 1861 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 796:
#line 1864 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 797:
#line 1868 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 798:
#line 1869 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 799:
#line 1870 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 800:
#line 1871 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 801:
#line 1872 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 802:
#line 1873 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 803:
#line 1875 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 804:
#line 1877 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 805:
#line 1878 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 806:
#line 1879 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 807:
#line 1880 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 808:
#line 1883 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 809:
#line 1884 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 810:
#line 1885 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 811:
#line 1886 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 812:
#line 1887 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 813:
#line 1889 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 814:
#line 1890 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 815:
#line 1891 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 816:
#line 1892 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 817:
#line 1896 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 818:
#line 1898 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 819:
#line 1899 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 820:
#line 1901 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 821:
#line 1903 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 822:
#line 1905 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 823:
#line 1908 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 824:
#line 1909 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 825:
#line 1912 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 826:
#line 1913 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 827:
#line 1914 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 828:
#line 1917 "frame/parser.Y"
    {;}
    break;

  case 829:
#line 1920 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 830:
#line 1921 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 831:
#line 1922 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 832:
#line 1923 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 833:
#line 1924 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 834:
#line 1925 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 835:
#line 1926 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 836:
#line 1930 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 838:
#line 1938 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 839:
#line 1939 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 840:
#line 1941 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 841:
#line 1943 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 842:
#line 1944 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 843:
#line 1945 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 845:
#line 1946 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 848:
#line 1949 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 849:
#line 1950 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 850:
#line 1952 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 851:
#line 1954 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 852:
#line 1956 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 853:
#line 1959 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 854:
#line 1961 "frame/parser.Y"
    {fr->regionStatsCallbackCmd((yyvsp[(4) - (4)].str));;}
    break;

  case 855:
#line 1963 "frame/parser.Y"
    {fr->regionStatsCallbackCmd(NULL);;}
    break;

  case 856:
#line 1965 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 857:
#line 1966 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 858:
#line 1968 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 859:
#line 1971 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 860:
#line 1974 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 861:
#line 1978 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 862:
#line 1981 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 863:
#line 1984 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 864:
#line 1987 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 865:
#line 1991 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 866:
#line 1995 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 867:
#line 2000 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str),
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 868:
#line 2004 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 869:
#line 2006 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 870:
#line 2007 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 871:
#line 2009 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 872:
#line 2011 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 873:
#line 2013 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 874:
#line 2015 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 875:
#line 2017 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 876:
#line 2018 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 877:
#line 2019 "frame/parser.Y"
    {fr->markerCompositeAreaCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 878:
#line 2021 "frame/parser.Y"
    {fr->markerCompositeOperationCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 879:
#line 2023 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 880:
#line 2025 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 881:
#line 2028 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 882:
#line 2032 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 883:
#line 2036 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 884:
#line 2038 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 885:
#line 2040 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 886:
#line 2042 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 887:
#line 2044 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 888:
#line 2046 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 889:
#line 2048 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 890:
#line 2050 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 891:
#line 2052 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 892:
#line 2054 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 893:
#line 2056 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 894:
#line 2058 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 895:
#line 2060 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 896:
#line 2062 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 897:
#line 2063 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 898:
#line 2065 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 899:
#line 2067 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 900:
#line 2068 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 901:
#line 2069 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 902:
#line 2071 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 903:
#line 2073 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 904:
#line 2074 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 905:
#line 2075 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 906:
#line 2076 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 907:
#line 2078 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 908:
#line 2080 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 909:
#line 2084 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 910:
#line 2087 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 911:
#line 2090 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 912:
#line 2094 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 913:
#line 2098 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 914:
#line 2103 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str),
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 915:
#line 2107 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 916:
#line 2108 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 917:
#line 2109 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 918:
#line 2111 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 919:
#line 2112 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 920:
#line 2114 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 921:
#line 2118 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 922:
#line 2119 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 923:
#line 2120 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 924:
#line 2122 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 925:
#line 2125 "frame/parser.Y"
    {fr->markerPolygonPointCmd((yyvsp[(1) - (7)].integer),(yyvsp[(7) - (7)].str),(Coord::CoordSystem)(yyvsp[(4) - (7)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),(Coord::SkyFormat)(yyvsp[(6) - (7)].integer));;}
    break;

  case 926:
#line 2128 "frame/parser.Y"
    {fr->markerPolygonPointVarCmd((yyvsp[(1) - (8)].integer),(yyvsp[(8) - (8)].str),(Coord::CoordSystem)(yyvsp[(4) - (8)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (8)].integer),(Coord::SkyFormat)(yyvsp[(6) - (8)].integer));;}
    break;

  case 927:
#line 2131 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 928:
#line 2134 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 929:
#line 2137 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 930:
#line 2138 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 931:
#line 2139 "frame/parser.Y"
    {fr->markerPointGlyphCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 932:
#line 2143 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 933:
#line 2147 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 934:
#line 2149 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 935:
#line 2150 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 936:
#line 2152 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 937:
#line 2155 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 938:
#line 2158 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 939:
#line 2159 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 940:
#line 2161 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 941:
#line 2162 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 942:
#line 2163 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 943:
#line 2165 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 944:
#line 2166 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 945:
#line 2168 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 946:
#line 2169 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 947:
#line 2172 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 948:
#line 2175 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 949:
#line 2176 "frame/parser.Y"
    {fr->markerDashListCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 950:
#line 2178 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 951:
#line 2179 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 955:
#line 2184 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 956:
#line 2185 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 957:
#line 2187 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 958:
#line 2189 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 959:
#line 2191 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 960:
#line 2192 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 964:
#line 2198 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 965:
#line 2199 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 966:
#line 2200 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 967:
#line 2201 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 968:
#line 2202 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 969:
#line 2203 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 970:
#line 2204 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 971:
#line 2205 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 972:
#line 2206 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 973:
#line 2207 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 974:
#line 2209 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 975:
#line 2211 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 976:
#line 2212 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 977:
#line 2213 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 978:
#line 2214 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 979:
#line 2215 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 980:
#line 2217 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 981:
#line 2218 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 982:
#line 2219 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 983:
#line 2220 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 984:
#line 2221 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 985:
#line 2223 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 986:
#line 2224 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 987:
#line 2225 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 988:
#line 2226 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 989:
#line 2227 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 990:
#line 2228 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 991:
#line 2229 "frame/parser.Y"
    {fr->markerDashListCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 992:
#line 2232 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 993:
#line 2233 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 994:
#line 2234 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 995:
#line 2235 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 996:
#line 2236 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 997:
#line 2237 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 998:
#line 2238 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 999:
#line 2239 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 1000:
#line 2240 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 1001:
#line 2241 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 1002:
#line 2242 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 1003:
#line 2243 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 1004:
#line 2244 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 1005:
#line 2245 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 1006:
#line 2246 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 1007:
#line 2247 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 1008:
#line 2248 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 1009:
#line 2249 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 1010:
#line 2250 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 1011:
#line 2251 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 1012:
#line 2252 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 1013:
#line 2255 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 1014:
#line 2256 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1015:
#line 2257 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1016:
#line 2258 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1017:
#line 2259 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1018:
#line 2261 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 1019:
#line 2271 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1020:
#line 2279 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1021:
#line 2288 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1022:
#line 2296 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1023:
#line 2302 "frame/parser.Y"
    {fr->createPolygonCanvasVarCmd((yyvsp[(4) - (5)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1024:
#line 2307 "frame/parser.Y"
    {fr->createSegmentCanvasVarCmd((yyvsp[(4) - (5)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1025:
#line 2313 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1026:
#line 2320 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1027:
#line 2328 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1028:
#line 2336 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1029:
#line 2341 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1030:
#line 2346 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1031:
#line 2351 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1032:
#line 2356 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1033:
#line 2361 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1034:
#line 2366 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1035:
#line 2371 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1036:
#line 2376 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::GLYPH, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist,(yyvsp[(5) - (6)].str));;}
    break;

  case 1037:
#line 2381 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),Coord::CANVAS),
	    Point::GLYPH, (yyvsp[(5) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist,(yyvsp[(6) - (7)].str));;}
    break;

  case 1038:
#line 2390 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer),
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1039:
#line 2400 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1040:
#line 2410 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1041:
#line 2419 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1042:
#line 2427 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1043:
#line 2437 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1044:
#line 2447 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1045:
#line 2457 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1046:
#line 2469 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1047:
#line 2478 "frame/parser.Y"
    {fr->createCompositeCmd(
	    (yyvsp[(2) - (3)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1049:
#line 2486 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 1050:
#line 2488 "frame/parser.Y"
    {
	  if ((yyvsp[(1) - (1)].integer) < 0 || (yyvsp[(1) - (1)].integer) > 1) {
	    fr->error("composite operation must be 0 (union) or 1 (intersection)");
	    YYERROR;
	  }
	  (yyval.integer)=(yyvsp[(1) - (1)].integer);
	;}
    break;

  case 1051:
#line 2497 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 1052:
#line 2499 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 1053:
#line 2501 "frame/parser.Y"
    {
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 1054:
#line 2506 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 1055:
#line 2509 "frame/parser.Y"
    {fr->markerDeleteAllCmd(0);;}
    break;

  case 1056:
#line 2510 "frame/parser.Y"
    {fr->markerDeleteAllCmd(1);;}
    break;

  case 1057:
#line 2511 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerDeleteAllCmd(0);
        ;}
    break;

  case 1058:
#line 2518 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1059:
#line 2520 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1060:
#line 2521 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 1061:
#line 2524 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 1062:
#line 2525 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 1063:
#line 2526 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 1064:
#line 2527 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 1065:
#line 2528 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 1066:
#line 2529 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 1067:
#line 2530 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 1069:
#line 2534 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 1070:
#line 2535 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 1071:
#line 2536 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 1072:
#line 2537 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1073:
#line 2538 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1074:
#line 2541 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(yyvsp[(6) - (8)].str),(Coord::CoordSystem)(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 1075:
#line 2543 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 1076:
#line 2545 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 1077:
#line 2547 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 1078:
#line 2549 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 1079:
#line 2551 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1080:
#line 2553 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsDataCmd((yyvsp[(1) - (6)].integer),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1081:
#line 2555 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsDataAllCmd((Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1082:
#line 2557 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsFieldsCmd();;}
    break;

  case 1083:
#line 2559 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 1084:
#line 2560 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1085:
#line 2561 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1086:
#line 2563 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1087:
#line 2565 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1088:
#line 2568 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1089:
#line 2570 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1090:
#line 2571 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1091:
#line 2572 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1092:
#line 2574 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1093:
#line 2576 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1094:
#line 2579 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer),
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1095:
#line 2582 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1096:
#line 2583 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1097:
#line 2584 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1098:
#line 2585 "frame/parser.Y"
    {fr->getMarkerCompassEndCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1099:
#line 2586 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1100:
#line 2588 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1101:
#line 2589 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1102:
#line 2590 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1103:
#line 2591 "frame/parser.Y"
    {fr->getMarkerCompositeAreaCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1104:
#line 2592 "frame/parser.Y"
    {fr->getMarkerCompositeOperationCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1105:
#line 2593 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1106:
#line 2594 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1107:
#line 2596 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1108:
#line 2598 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1109:
#line 2600 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1110:
#line 2602 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer),
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1111:
#line 2604 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1112:
#line 2605 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1113:
#line 2607 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1114:
#line 2609 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1115:
#line 2611 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1116:
#line 2612 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1117:
#line 2613 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1118:
#line 2614 "frame/parser.Y"
    {fr->getMarkerLineEndCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1119:
#line 2616 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1120:
#line 2618 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1121:
#line 2621 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1122:
#line 2624 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1123:
#line 2625 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1124:
#line 2626 "frame/parser.Y"
    {fr->getMarkerPointGlyphCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1125:
#line 2628 "frame/parser.Y"
    {fr->getMarkerPolygonPointCmd((yyvsp[(1) - (6)].integer),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),(Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1126:
#line 2631 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1127:
#line 2634 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer),
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1128:
#line 2637 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1129:
#line 2638 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1130:
#line 2639 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1131:
#line 2640 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1132:
#line 2642 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1133:
#line 2644 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1134:
#line 2646 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1135:
#line 2647 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1136:
#line 2649 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1137:
#line 2650 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1138:
#line 2651 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1139:
#line 2652 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1140:
#line 2653 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1141:
#line 2655 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1142:
#line 2656 "frame/parser.Y"
    {fr->getMarkerVectorEndCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1143:
#line 2658 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1144:
#line 2660 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1145:
#line 2662 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1146:
#line 2663 "frame/parser.Y"
    {fr->getMarkerDashListCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1148:
#line 2665 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1149:
#line 2666 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1150:
#line 2668 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1151:
#line 2670 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1152:
#line 2671 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1153:
#line 2672 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1155:
#line 2674 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1157:
#line 2678 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1158:
#line 2679 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1159:
#line 2680 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1160:
#line 2681 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1161:
#line 2682 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1162:
#line 2683 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1163:
#line 2685 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1164:
#line 2686 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1165:
#line 2688 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1166:
#line 2689 "frame/parser.Y"
    {fr->getMarkerDashListCmd();;}
    break;

  case 1167:
#line 2692 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1168:
#line 2693 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1169:
#line 2694 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1170:
#line 2695 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1171:
#line 2698 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1172:
#line 2699 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1173:
#line 2702 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1174:
#line 2703 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1175:
#line 2706 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1176:
#line 2707 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1177:
#line 2710 "frame/parser.Y"
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

  case 1178:
#line 2723 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1179:
#line 2724 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1180:
#line 2728 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1181:
#line 2729 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1182:
#line 2733 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1183:
#line 2734 "frame/parser.Y"
    {fr->markerLayerCmd(Base::FOOTPRINT);;}
    break;

  case 1184:
#line 2739 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), 0, propQMask, propQValue, taglist);;}
    break;

  case 1185:
#line 2743 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), 1, propQMask, propQValue, taglist);;}
    break;

  case 1186:
#line 2748 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str),0,"green",Coord::PHYSICAL,Coord::ICRS);;}
    break;

  case 1187:
#line 2750 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1188:
#line 2753 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer),0,"green",Coord::PHYSICAL,Coord::ICRS);;}
    break;

  case 1189:
#line 2755 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1190:
#line 2758 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (2)].str), "green");;}
    break;

  case 1191:
#line 2760 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));;}
    break;

  case 1192:
#line 2763 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1193:
#line 2764 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1194:
#line 2765 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1195:
#line 2766 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1196:
#line 2767 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1197:
#line 2768 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1198:
#line 2770 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1201:
#line 2777 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1202:
#line 2778 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1203:
#line 2779 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1204:
#line 2780 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1205:
#line 2781 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1206:
#line 2782 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1209:
#line 2787 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1210:
#line 2788 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1211:
#line 2789 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1212:
#line 2790 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1213:
#line 2791 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1214:
#line 2792 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1215:
#line 2793 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1216:
#line 2794 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1217:
#line 2795 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1218:
#line 2796 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1219:
#line 2797 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1220:
#line 2798 "frame/parser.Y"
    {(yyval.integer) = Marker::FILL;;}
    break;

  case 1223:
#line 2805 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1224:
#line 2806 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1226:
#line 2810 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(1) - (6)].str), (Base::MarkerFormat)(yyvsp[(2) - (6)].integer), (Coord::CoordSystem)(yyvsp[(3) - (6)].integer), (Coord::SkyFrame)(yyvsp[(4) - (6)].integer), (Coord::SkyFormat)(yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].integer), 0);;}
    break;

  case 1227:
#line 2812 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer), 1);;}
    break;

  case 1228:
#line 2813 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1229:
#line 2816 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1230:
#line 2817 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1231:
#line 2818 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1232:
#line 2819 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1233:
#line 2820 "frame/parser.Y"
    {fr->markerSelectFirstCmd();;}
    break;

  case 1234:
#line 2821 "frame/parser.Y"
    {fr->markerSelectLastCmd();;}
    break;

  case 1235:
#line 2824 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1236:
#line 2825 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1239:
#line 2833 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1240:
#line 2836 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1241:
#line 2837 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1245:
#line 2844 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1246:
#line 2847 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1247:
#line 2851 "frame/parser.Y"
    {fr->layerCreateCmd();;}
    break;

  case 1248:
#line 2852 "frame/parser.Y"
    {fr->layerCreateCmd();;}
    break;

  case 1249:
#line 2853 "frame/parser.Y"
    {fr->layerNoCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1250:
#line 2854 "frame/parser.Y"
    {fr->layerNoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1251:
#line 2855 "frame/parser.Y"
    {fr->layerColorCmd(0,(yyvsp[(2) - (2)].str));;}
    break;

  case 1252:
#line 2856 "frame/parser.Y"
    {fr->layerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1253:
#line 2857 "frame/parser.Y"
    {fr->layerBlendCmd(0,(FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1254:
#line 2858 "frame/parser.Y"
    {fr->layerBlendCmd((yyvsp[(1) - (3)].integer),(FitsMask::MaskBlend)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1255:
#line 2859 "frame/parser.Y"
    {fr->layerTransparencyCmd(0,(yyvsp[(2) - (2)].real));;}
    break;

  case 1256:
#line 2860 "frame/parser.Y"
    {fr->layerTransparencyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 1257:
#line 2861 "frame/parser.Y"
    {fr->layerViewCmd(0,(yyvsp[(2) - (2)].integer));;}
    break;

  case 1258:
#line 2862 "frame/parser.Y"
    {fr->layerViewCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1259:
#line 2864 "frame/parser.Y"
    {fr->layerShowCmd(0);;}
    break;

  case 1260:
#line 2865 "frame/parser.Y"
    {fr->layerShowCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1261:
#line 2866 "frame/parser.Y"
    {fr->layerHideCmd(0);;}
    break;

  case 1262:
#line 2867 "frame/parser.Y"
    {fr->layerHideCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1263:
#line 2868 "frame/parser.Y"
    {fr->layerDeleteCmd(0);;}
    break;

  case 1264:
#line 2869 "frame/parser.Y"
    {fr->layerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1265:
#line 2870 "frame/parser.Y"
    {fr->layerUpCmd(0);;}
    break;

  case 1266:
#line 2871 "frame/parser.Y"
    {fr->layerUpCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1267:
#line 2872 "frame/parser.Y"
    {fr->layerDownCmd(0);;}
    break;

  case 1268:
#line 2873 "frame/parser.Y"
    {fr->layerDownCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1269:
#line 2874 "frame/parser.Y"
    {fr->layerTopCmd(0);;}
    break;

  case 1270:
#line 2875 "frame/parser.Y"
    {fr->layerTopCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1271:
#line 2876 "frame/parser.Y"
    {fr->layerBottomCmd(0);;}
    break;

  case 1272:
#line 2877 "frame/parser.Y"
    {fr->layerBottomCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1273:
#line 2880 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1274:
#line 2881 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1275:
#line 2882 "frame/parser.Y"
    {fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1276:
#line 2883 "frame/parser.Y"
    {fr->maskRangeCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 1277:
#line 2884 "frame/parser.Y"
    {fr->maskSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1278:
#line 2885 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1279:
#line 2886 "frame/parser.Y"
    {fr->maskBlendCmd((FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1280:
#line 2887 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1281:
#line 2893 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1282:
#line 2894 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1283:
#line 2895 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1284:
#line 2896 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1285:
#line 2900 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1286:
#line 2901 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1287:
#line 2903 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1288:
#line 2908 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1290:
#line 2910 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1292:
#line 2912 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1293:
#line 2915 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1294:
#line 2917 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1295:
#line 2922 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1296:
#line 2925 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1297:
#line 2926 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1298:
#line 2927 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1299:
#line 2930 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1300:
#line 2932 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1301:
#line 2936 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1302:
#line 2937 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1303:
#line 2941 "frame/parser.Y"
    {fr->psColorSpaceCmd((PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1304:
#line 2942 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1305:
#line 2943 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1306:
#line 2944 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 1307:
#line 2950 "frame/parser.Y"
    {fr->precCmd((yyvsp[(1) - (9)].integer),(yyvsp[(2) - (9)].integer),(yyvsp[(3) - (9)].integer),(yyvsp[(4) - (9)].integer),(yyvsp[(5) - (9)].integer),(yyvsp[(6) - (9)].integer),(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 1308:
#line 2951 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->precCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 1309:
#line 2957 "frame/parser.Y"
    {(yyval.integer) = BW;;}
    break;

  case 1310:
#line 2958 "frame/parser.Y"
    {(yyval.integer) = GRAY;;}
    break;

  case 1311:
#line 2959 "frame/parser.Y"
    {(yyval.integer) = RGB;;}
    break;

  case 1312:
#line 2960 "frame/parser.Y"
    {(yyval.integer) = CMYK;;}
    break;

  case 1315:
#line 2968 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1316:
#line 2970 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1317:
#line 2971 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1318:
#line 2972 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1319:
#line 2976 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1320:
#line 2977 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1321:
#line 2978 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1322:
#line 2979 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1323:
#line 2982 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1324:
#line 2983 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1325:
#line 2984 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::FIP;;}
    break;

  case 1326:
#line 2987 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1327:
#line 2988 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1328:
#line 2989 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1329:
#line 2992 "frame/parser.Y"
    {fr->revealCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1330:
#line 2993 "frame/parser.Y"
    {fr->revealClearCmd();;}
    break;

  case 1331:
#line 2996 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1332:
#line 2997 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1333:
#line 2998 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1334:
#line 3002 "frame/parser.Y"
    {fr->setMultiColorSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1335:
#line 3005 "frame/parser.Y"
    {fr->setHLSChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1336:
#line 3006 "frame/parser.Y"
    {fr->setHLSChannelCmd("hue");;}
    break;

  case 1337:
#line 3007 "frame/parser.Y"
    {fr->setHLSChannelCmd("saturation");;}
    break;

  case 1338:
#line 3008 "frame/parser.Y"
    {fr->setHLSSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1339:
#line 3009 "frame/parser.Y"
    {fr->setHLSViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1340:
#line 3012 "frame/parser.Y"
    {fr->setHSVChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1341:
#line 3013 "frame/parser.Y"
    {fr->setHSVChannelCmd("hue");;}
    break;

  case 1342:
#line 3014 "frame/parser.Y"
    {fr->setHSVChannelCmd("saturation");;}
    break;

  case 1343:
#line 3015 "frame/parser.Y"
    {fr->setHSVChannelCmd("value");;}
    break;

  case 1344:
#line 3016 "frame/parser.Y"
    {fr->setHSVSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1345:
#line 3017 "frame/parser.Y"
    {fr->setHSVViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1346:
#line 3020 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1347:
#line 3021 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (2)].real))));;}
    break;

  case 1349:
#line 3023 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (2)].real))));;}
    break;

  case 1350:
#line 3024 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (3)].real))));;}
    break;

  case 1351:
#line 3027 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1352:
#line 3028 "frame/parser.Y"
    {fr->rotateMotionCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1353:
#line 3029 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1359:
#line 3037 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1360:
#line 3040 "frame/parser.Y"
    {fr->savePixelMaskFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1361:
#line 3041 "frame/parser.Y"
    {fr->savePixelMaskChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1362:
#line 3042 "frame/parser.Y"
    {fr->savePixelMaskSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1363:
#line 3046 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1364:
#line 3048 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1365:
#line 3050 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1382:
#line 3071 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1383:
#line 3072 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1384:
#line 3073 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1385:
#line 3076 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1386:
#line 3077 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1387:
#line 3078 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1388:
#line 3081 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1389:
#line 3082 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1390:
#line 3083 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1391:
#line 3086 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1392:
#line 3087 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1393:
#line 3088 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1395:
#line 3092 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1396:
#line 3093 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1397:
#line 3094 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1398:
#line 3097 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1399:
#line 3098 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1400:
#line 3099 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1401:
#line 3103 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1402:
#line 3105 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1403:
#line 3107 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1404:
#line 3110 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1405:
#line 3111 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1406:
#line 3112 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1407:
#line 3115 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1408:
#line 3116 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1409:
#line 3117 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1410:
#line 3121 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1411:
#line 3123 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1412:
#line 3125 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1413:
#line 3128 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1414:
#line 3129 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1415:
#line 3130 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1416:
#line 3133 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1417:
#line 3134 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1418:
#line 3135 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1419:
#line 3139 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1420:
#line 3141 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1421:
#line 3143 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1422:
#line 3146 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1423:
#line 3147 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1424:
#line 3148 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1425:
#line 3151 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1426:
#line 3152 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1427:
#line 3153 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1428:
#line 3156 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1429:
#line 3157 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1430:
#line 3158 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1431:
#line 3162 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1432:
#line 3164 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1433:
#line 3166 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1434:
#line 3170 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1435:
#line 3174 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1436:
#line 3176 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1437:
#line 3180 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1438:
#line 3183 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1439:
#line 3184 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1440:
#line 3185 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1441:
#line 3186 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1442:
#line 3189 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1443:
#line 3191 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1444:
#line 3193 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1445:
#line 3196 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 1447:
#line 3198 "frame/parser.Y"
    {fr->updateFitsCenterCmd();;}
    break;

  case 1448:
#line 3200 "frame/parser.Y"
    {fr->updateFitsCenterCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1449:
#line 3203 "frame/parser.Y"
    {fr->sliceCmd(2,(yyvsp[(1) - (1)].integer));;}
    break;

  case 1450:
#line 3204 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1451:
#line 3205 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1452:
#line 3208 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1453:
#line 3209 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1454:
#line 3213 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1456:
#line 3215 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1459:
#line 3220 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1460:
#line 3221 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1461:
#line 3222 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1462:
#line 3225 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1463:
#line 3226 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1464:
#line 3227 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1465:
#line 3230 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1466:
#line 3232 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1467:
#line 3237 "frame/parser.Y"
    {fr->wcsAlign2Cmd((yyvsp[(2) - (4)].integer), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1468:
#line 3238 "frame/parser.Y"
    {fr->wcsAlignPointerClearCmd();;}
    break;

  case 1469:
#line 3241 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1470:
#line 3248 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1471:
#line 3250 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1472:
#line 3252 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1473:
#line 3257 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1475:
#line 3261 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1476:
#line 3262 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1477:
#line 3263 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1478:
#line 3265 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1479:
#line 3267 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1480:
#line 3272 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 12353 "frame/parser.C"
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


#line 3276 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

